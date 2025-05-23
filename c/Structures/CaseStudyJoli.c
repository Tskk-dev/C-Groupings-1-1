// ===============================
// DEFINES AND INCLUDES
// ===============================
#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_ITEMS 50
#define TRUE 1
#define FALSE 0

// ===============================
// STRUCTURE DEFINITIONS
// ===============================
typedef struct {
    char code[10];
    char description[50];
    float unit_price;
} MenuItem;

typedef struct {
    char code[10];
    char description[50];
    int quantity;
    float unit_price;
    float amount;
} Order;

typedef struct {
    char date[30];
    int table_no;
    Order orders[MAX_ITEMS];
    int order_count;
    float total_bill;
    float discount;
    float net_bill;
    float amount_tendered;
    float change;
} BillingStatement;

// ===============================
// MENU LOOKUP TABLE
// ===============================
MenuItem menu[] = {
    {"FP#1", "Family Package1", 850.00},
    {"FP#2", "Family Package2", 900.00},
    {"BP#1", "Barkada Package1", 500.00},
    {"BP#2", "Barkada Package2", 1000.00},
    {"SP#1", "Solo Package1", 200.00},
    {"SP#2", "Solo Package2", 250.00},
    {"Soda1", "Coke 1.5L", 80.00},
    {"Rice", "Xtra Rice", 50.00}
};

const int menu_size = sizeof(menu) / sizeof(menu[0]);

// ===============================
// FUNCTION PROTOTYPES
// ===============================
void display_menu();
void take_order(BillingStatement *bill);
void compute_bill(BillingStatement *bill, int is_senior, int is_pwd);
void print_bill(BillingStatement bill);
float get_discount(float total, char month[], int is_senior, int is_pwd);
MenuItem* find_menu_item(const char *code);

// ===============================
// FUNCTION DEFINITIONS
// ===============================

void display_menu() {
    printf("\n=== MENU ===\n");
    for (int i = 0; i < menu_size; i++) {
        printf(" %-6s - %-22s %.2f\n",
             menu[i].code, 
             menu[i].description, 
             menu[i].unit_price);
    }
}

MenuItem* find_menu_item(const char *code) {
    for (int i = 0; i < menu_size; i++) {
        if (strcmp(menu[i].code, code) == 0) {
            return &menu[i];
        }
    }
    return NULL;
}

void take_order(BillingStatement *bill) {
    char code[10];
    int quantity;
    char cont;

    do {
        display_menu();
        printf("\nEnter Item Code: ");
        scanf("%s", code);
        printf("Enter Quantity: ");
        scanf("%d", &quantity);

        MenuItem *menu_item = find_menu_item(code);
        if (menu_item == NULL) {
            printf("Invalid item code! Please try again.\n");
            continue;
        }

        Order order;
        strcpy(order.code, menu_item->code);
        strcpy(order.description, menu_item->description);
        order.unit_price = menu_item->unit_price;
        order.quantity = quantity;
        order.amount = order.unit_price * quantity;

        bill->orders[bill->order_count++] = order;

        printf("Do you want to order another item? (Y/N): ");
        scanf(" %c", &cont);
    } while (cont == 'Y' || cont == 'y');
}

float get_discount(float total, char month[], int is_senior, int is_pwd) {
    float discount = 0.0;

    if (is_senior) {
        discount = total * 0.20f;
    } else if (is_pwd) {
        discount = total * 0.05f;
    } else if ((strcmp(month, "May") == 0 || strcmp(month, "June") == 0) &&
               total >= 500.00 && total <= 2000.00) {
        discount = total * 0.02f;
    }

    return discount;
}

void compute_bill(BillingStatement *bill, int is_senior, int is_pwd) {
    float sum = 0;
    for (int i = 0; i < bill->order_count; i++) {
        sum += bill->orders[i].amount;
    }

    bill->total_bill = sum;

    char month[10];
    sscanf(bill->date, "%s", month); // Extract month from date string

    bill->discount = get_discount(sum, month, is_senior, is_pwd);
    bill->net_bill = sum - bill->discount;

    do {
        printf("Amount Tendered: ");
        scanf("%f", &bill->amount_tendered);

        if (bill->amount_tendered < bill->net_bill) {
            printf("Insufficient Fund. Please enter a valid amount.\n");
        }
    } while (bill->amount_tendered < bill->net_bill);

    bill->change = bill->amount_tendered - bill->net_bill;
}

void print_bill(BillingStatement bill) {
    
    printf("\n\nJOLLY - JIP RESTAURANT\n");
    printf("BILLING STATEMENT\n\n");
    printf("DATE       : %s\n", bill.date);
    printf("TABLE NO.  : %d\n\n", bill.table_no);

    printf("ITEM CODE  ITEM DESCRIPTION     QTY  UNIT PRICE  AMOUNT\n");
    for (int i = 0; i < bill.order_count; i++) {
        printf("%-10s %-20s %4d  %10.2f  %10.2f\n",
               bill.orders[i].code,
               bill.orders[i].description,
               bill.orders[i].quantity,
               bill.orders[i].unit_price,
               bill.orders[i].amount);
    }

    printf("\nTOTAL BILL      : %.2f", bill.total_bill);
    printf("\nDISCOUNT        : %.2f", bill.discount);
    printf("\nNET BILL        : %.2f", bill.net_bill);
    printf("\nAMOUNT TENDERED : %.2f", bill.amount_tendered);
    printf("\nCHANGE          : %.2f\n", bill.change);
}

// ===============================
// MAIN FUNCTION
// ===============================

int main() {
    char again;
    do {
        BillingStatement bill = { .order_count = 0 };

        // Automatically get current date in format: "Month DD, YYYY"
        time_t now = time(NULL);
        struct tm *local = localtime(&now);
        strftime(bill.date, sizeof(bill.date), "%B %d, %Y", local);

        printf("Enter table number: ");
        scanf("%d", &bill.table_no);

        take_order(&bill);

        int is_senior = FALSE, is_pwd = FALSE;
        char response;

        printf("Is the customer a Senior Citizen? (Y/N): ");
        scanf(" %c", &response);
        if (response == 'Y' || response == 'y') is_senior = TRUE;

        printf("Is the customer a Person with Disability (PWD)? (Y/N): ");
        scanf(" %c", &response);
        if (response == 'Y' || response == 'y') is_pwd = TRUE;

        compute_bill(&bill, is_senior, is_pwd);
        print_bill(bill);

        printf("\nDo you want to process another bill? (Y/N): ");
        scanf(" %c", &again);
    } while (again == 'Y' || again == 'y');

    return 0;
}
