
<h1 align="center">FastFoodBillCPP</h1>

<p align="center">
  A simple C++ project for beginners that manages fast food orders and bills using file handling.
</p>

## 🚀 Features

- **Read Menu Data:** Automatically reads the menu items and their prices from a CSV file (`Menu.loki`) at startup.
- **Calculate Orders:** Calculates the total cost based on the user's selections.
- **Record Transactions:** Saves every order to a file (`Bills.loki`) with a unique order ID.

## 📁 File Structure

- `Menu.loki`: Contains menu items and prices in CSV format. [View](https://github.com/ShakilShaikh/FastFoodBillCPP/blob/master/Menu.loki)
- `Bills.loki`: Stores completed orders with their corresponding order IDs. [View](https://github.com/ShakilShaikh/FastFoodBillCPP/blob/master/Bills.loki)
- `curr_id`: Manages the current order ID to ensure uniqueness. [View](https://github.com/ShakilShaikh/FastFoodBillCPP/blob/master/curr_id)

## 🛠️ Installation

To run this project, you need to download the repository and ensure you have a C++ compiler installed on your system. Follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/ShakilShaikh/FastFoodBillCPP.git
   ```
2. Navigate to the project directory:
   ```bash
   cd FastFoodBillCPP
   ```
3. Compile the source code (make sure to replace `g++` with your compiler if different):
   ```bash
   g++ -o FastFoodBill main.cpp
   ```
4. Run the compiled application:
   ```bash
   ./FastFoodBill
   ```

## 📚 How to Use

1. **Start the Program:** Launch the application as described above.
2. **Enter Your Order:** Follow the prompts in the terminal to input your order details.
3. **View Your Bill:** After submitting your order, the bill will be calculated and displayed.

## 🤝 Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📜 License

Distributed under the MIT License. See `LICENSE` for more information.
