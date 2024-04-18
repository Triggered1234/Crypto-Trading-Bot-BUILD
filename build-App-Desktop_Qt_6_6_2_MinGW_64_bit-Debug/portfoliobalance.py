from binance.client import Client

# Initialize Binance client with API key and secret key
client = Client("S4DDhuhW2r7BU8klFngZaIx7OkUGRfEbx7ozR9oaBGZDtlU8H5X0faNRGtu98FF2", "dbTXtfL0odCNOf7mBltRikGawV0014yBypwaEAmzYQU86W5bXE7wwJvS7S7RkDTd")

# Retrieve account information
account_info = client.get_account()

# Extract balances
balances = account_info['balances']

# Print balances
for balance in balances:
    if float(balance['free']) > 0:  # Print only non-zero balances
        print(f"{balance['asset']}: {balance['free']}")
