//
// Created by artem on 24.01.18.
//
#include "etomiclib.h"
#include "etomiccurl.h"
#include <inttypes.h>

extern void *LP_eth_client;

char *approveErc20(ApproveErc20Input input)
{
    /*
    TransactionSkeleton tx;
    tx.from = jsToAddress(input.owner);
    tx.to = jsToAddress(input.tokenAddress);
    tx.value = 0;
    tx.gas = 300000;
    tx.gasPrice = getGasPriceFromStation(1) * boost::multiprecision::pow(u256(10), 9);
    tx.nonce = getNonce(input.owner);
    std::stringstream ss;
    ss << "0x095ea7b3"
       << "000000000000000000000000"
       << toHex(jsToAddress(input.spender))
       << toHex(toBigEndian(jsToU256(input.amount)));
    tx.data = jsToBytes(ss.str());
    char* rawTx = signTx(tx, input.secret);
    char* result = sendRawTxWaitConfirm(rawTx);
    free(rawTx);
    return result;
    */
    return NULL;
}

char* aliceSendsErc20Payment(AliceSendsErc20PaymentInput input, BasicTxData txData)
{
    /*
    TransactionSkeleton tx = txDataToSkeleton(txData);
    std::stringstream ss = aliceSendsErc20PaymentData(input);
    tx.data = jsToBytes(ss.str());
    char* rawTx = signTx(tx, txData.secretKey);
    char* result = sendRawTxWaitConfirm(rawTx);
    free(rawTx);
    return result;
    */
    return NULL;
}

uint8_t verifyAliceErc20PaymentData(AliceSendsErc20PaymentInput input, char *data)
{
    /*
    std::stringstream ss = aliceSendsErc20PaymentData(input);
    if (strcmp(ss.str().c_str(), data) != 0) {
        printf("Alice ERC20 payment data %s is not equal to expected %s\n", data, ss.str().c_str());
        return 0;
    }
     */
    return 0;
}

char* aliceReclaimsAlicePayment(AliceReclaimsAlicePaymentInput input, BasicTxData txData)
{
    /*
    TransactionSkeleton tx = txDataToSkeleton(txData);
    std::stringstream ss;
    u256 amount = jsToU256(input.amount);
    dev::Address tokenAddress = jsToAddress(input.tokenAddress);

    if (tokenAddress != ZeroAddress) {
        uint8_t decimals;
        if (input.decimals > 0) {
            decimals = input.decimals;
        } else {
            decimals = get_erc20_decimals(input.tokenAddress, LP_eth_client);
        }

        if (decimals < 18) {
            amount /= boost::multiprecision::pow(u256(10), 18 - decimals);
        }
    }

    ss << "0x8b9a167a"
       << toHex(jsToBytes(input.dealId))
       << toHex(toBigEndian(amount))
       << "000000000000000000000000"
       << toHex(tokenAddress)
       << "000000000000000000000000"
       << toHex(jsToAddress(input.bobAddress))
       << toHex(jsToBytes(input.aliceHash))
       << "000000000000000000000000"
       << "00000000000000000000000000000000000000000000000000000000000000c0"
       << "0000000000000000000000000000000000000000000000000000000000000020"
       << toHex(jsToBytes(input.bobSecret));
    tx.data = jsToBytes(ss.str());
    char* rawTx = signTx(tx, txData.secretKey);
    char* result = sendRawTxWaitConfirm(rawTx);
    free(rawTx);
    return result;
    */
    return NULL;
}

char* bobSpendsAlicePayment(BobSpendsAlicePaymentInput input, BasicTxData txData)
{
    /*
    TransactionSkeleton tx = txDataToSkeleton(txData);
    std::stringstream ss;
    u256 amount = jsToU256(input.amount);
    dev::Address tokenAddress = jsToAddress(input.tokenAddress);

    if (tokenAddress != ZeroAddress) {
        uint8_t decimals;
        if (input.decimals > 0) {
            decimals = input.decimals;
        } else {
            decimals = get_erc20_decimals(input.tokenAddress, LP_eth_client);
        }

        if (decimals < 18) {
            amount /= boost::multiprecision::pow(u256(10), 18 - decimals);
        }
    }

    ss << "0x392ec66b"
       << toHex(jsToBytes(input.dealId))
       << toHex(toBigEndian(amount))
       << "000000000000000000000000"
       << toHex(tokenAddress)
       << "000000000000000000000000"
       << toHex(jsToAddress(input.aliceAddress))
       << toHex(jsToBytes(input.bobHash))
       << "000000000000000000000000"
       << "00000000000000000000000000000000000000000000000000000000000000c0"
       << "0000000000000000000000000000000000000000000000000000000000000020"
       << toHex(jsToBytes(input.aliceSecret));
    tx.data = jsToBytes(ss.str());
    char* rawTx = signTx(tx, txData.secretKey);
    char* result = sendRawTxWaitConfirm(rawTx);
    free(rawTx);
    return result;
    */
    return NULL;
}

char* bobSendsEthDeposit(BobSendsEthDepositInput input, BasicTxData txData)
{
    /*
    TransactionSkeleton tx = txDataToSkeleton(txData);
    std::stringstream ss = bobSendsEthDepositData(input);
    tx.data = jsToBytes(ss.str());
    char* rawTx = signTx(tx, txData.secretKey);
    char* result = sendRawTx(rawTx);
    free(rawTx);
    return result;
    */
    return NULL;
}

uint8_t verifyBobEthDepositData(BobSendsEthDepositInput input, char *data)
{
    /*
    std::stringstream ss = bobSendsEthDepositData(input);
    if (strcmp(ss.str().c_str(), data) != 0) {
        printf("Bob deposit data %s != expected %s\n", data, ss.str().c_str());
        return 0;
    }
     */
    return 0;
}

char* bobSendsErc20Deposit(BobSendsErc20DepositInput input, BasicTxData txData)
{
    /*
    TransactionSkeleton tx = txDataToSkeleton(txData);
    std::stringstream ss = bobSendsErc20DepositData(input);
    tx.data = jsToBytes(ss.str());
    char* rawTx = signTx(tx, txData.secretKey);
    char* result = sendRawTxWaitConfirm(rawTx);
    free(rawTx);
    return result;
    */
    return NULL;
}

uint8_t verifyBobErc20DepositData(BobSendsErc20DepositInput input, char *data)
{
    /*
    std::stringstream ss = bobSendsErc20DepositData(input);
    if (strcmp(ss.str().c_str(), data) != 0) {
        printf("Bob deposit data %s != expected %s\n", data, ss.str().c_str());
        return 0;
    }
     */
    return 0;
}

char* bobRefundsDeposit(BobRefundsDepositInput input, BasicTxData txData)
{
    /*
    TransactionSkeleton tx = txDataToSkeleton(txData);
    std::stringstream ss;
    u256 amount = jsToU256(input.amount);
    dev::Address tokenAddress = jsToAddress(input.tokenAddress);
    if (tokenAddress != ZeroAddress) {
        uint8_t decimals;
        if (input.decimals > 0) {
            decimals = input.decimals;
        } else {
            decimals = get_erc20_decimals(input.tokenAddress, LP_eth_client);
        }

        if (decimals < 18) {
            amount /= boost::multiprecision::pow(u256(10), 18 - decimals);
        }
    }
    ss << "0x1f7a72f7"
       << toHex(jsToBytes(input.depositId))
       << toHex(toBigEndian(amount))
       << toHex(jsToBytes(input.bobSecret))
       << "000000000000000000000000"
       << toHex(jsToAddress(input.aliceAddress))
       << "000000000000000000000000"
       << toHex(tokenAddress);
    tx.data = jsToBytes(ss.str());
    char* rawTx = signTx(tx, txData.secretKey);
    char* result = sendRawTxWaitConfirm(rawTx);
    free(rawTx);
    return result;
    */
    return NULL;
}

char* aliceClaimsBobDeposit(AliceClaimsBobDepositInput input, BasicTxData txData)
{
    /*
    TransactionSkeleton tx = txDataToSkeleton(txData);
    std::stringstream ss;
    u256 amount = jsToU256(input.amount);
    dev::Address tokenAddress = jsToAddress(input.tokenAddress);
    if (tokenAddress != ZeroAddress) {
        uint8_t decimals;
        if (input.decimals > 0) {
            decimals = input.decimals;
        } else {
            decimals = get_erc20_decimals(input.tokenAddress, LP_eth_client);
        }

        if (decimals < 18) {
            amount /= boost::multiprecision::pow(u256(10), 18 - decimals);
        }
    }
    ss << "0x4b915a68"
       << toHex(jsToBytes(input.depositId))
       << toHex(toBigEndian(amount))
       << "000000000000000000000000"
       << toHex(jsToAddress(input.bobAddress))
       << "000000000000000000000000"
       << toHex(tokenAddress)
       << toHex(jsToBytes(input.bobHash))
       << "000000000000000000000000";
    tx.data = jsToBytes(ss.str());
    char* rawTx = signTx(tx, txData.secretKey);
    char* result = sendRawTxWaitConfirm(rawTx);
    free(rawTx);
    return result;
    */
    return NULL;
}

char* bobSendsEthPayment(BobSendsEthPaymentInput input, BasicTxData txData)
{
    /*
    TransactionSkeleton tx = txDataToSkeleton(txData);
    std::stringstream ss = bobSendsEthPaymentData(input);
    tx.data = jsToBytes(ss.str());
    char* rawTx = signTx(tx, txData.secretKey);
    char* result = sendRawTxWaitConfirm(rawTx);
    free(rawTx);
    return result;
    */
    return NULL;
}

uint8_t verifyBobEthPaymentData(BobSendsEthPaymentInput input, char *data)
{
    /*
    std::stringstream ss = bobSendsEthPaymentData(input);
    if (strcmp(ss.str().c_str(), data) != 0) {
        printf("Bob payment data %s != expected %s\n", data, ss.str().c_str());
        return 0;
    }
     */
    return 0;
}

char* bobSendsErc20Payment(BobSendsErc20PaymentInput input, BasicTxData txData)
{
    /*
    TransactionSkeleton tx = txDataToSkeleton(txData);
    std::stringstream ss = bobSendsErc20PaymentData(input);
    tx.data = jsToBytes(ss.str());
    char* rawTx = signTx(tx, txData.secretKey);
    char* result = sendRawTxWaitConfirm(rawTx);
    free(rawTx);
    return result;
    */
    return NULL;
}

uint8_t verifyBobErc20PaymentData(BobSendsErc20PaymentInput input, char *data)
{
    /*
    std::stringstream ss = bobSendsErc20PaymentData(input);
    if (strcmp(ss.str().c_str(), data) != 0) {
        printf("Bob payment data %s != expected %s\n", data, ss.str().c_str());
        return 0;
    }
     */
    return 0;
}

char* bobReclaimsBobPayment(BobReclaimsBobPaymentInput input, BasicTxData txData)
{
    /*
    TransactionSkeleton tx = txDataToSkeleton(txData);
    std::stringstream ss;
    u256 amount = jsToU256(input.amount);
    dev::Address tokenAddress = jsToAddress(input.tokenAddress);
    if (tokenAddress != ZeroAddress) {
        uint8_t decimals;
        if (input.decimals > 0) {
            decimals = input.decimals;
        } else {
            decimals = get_erc20_decimals(input.tokenAddress, LP_eth_client);
        }

        if (decimals < 18) {
            amount /= boost::multiprecision::pow(u256(10), 18 - decimals);
        }
    }
    ss << "0xe45ef4ad"
       << toHex(jsToBytes(input.paymentId))
       << toHex(toBigEndian(amount))
       << "000000000000000000000000"
       << toHex(jsToAddress(input.aliceAddress))
       << "000000000000000000000000"
       << toHex(tokenAddress)
       << toHex(jsToBytes(input.aliceHash))
       << "000000000000000000000000";
    tx.data = jsToBytes(ss.str());
    char* rawTx = signTx(tx, txData.secretKey);
    char* result = sendRawTxWaitConfirm(rawTx);
    free(rawTx);
    return result;
    */
    return NULL;
}

char* aliceSpendsBobPayment(AliceSpendsBobPaymentInput input, BasicTxData txData)
{
    /*
    TransactionSkeleton tx = txDataToSkeleton(txData);
    std::stringstream ss;
    u256 amount = jsToU256(input.amount);
    dev::Address tokenAddress = jsToAddress(input.tokenAddress);
    if (tokenAddress != ZeroAddress) {
        uint8_t decimals;
        if (input.decimals > 0) {
            decimals = input.decimals;
        } else {
            decimals = get_erc20_decimals(input.tokenAddress, LP_eth_client);
        }

        if (decimals < 18) {
            amount /= boost::multiprecision::pow(u256(10), 18 - decimals);
        }
    }
    ss << "0x113ee583"
       << toHex(jsToBytes(input.paymentId))
       << toHex(toBigEndian(amount))
       << toHex(jsToBytes(input.aliceSecret))
       << "000000000000000000000000"
       << toHex(jsToAddress(input.bobAddress))
       << "000000000000000000000000"
       << toHex(tokenAddress);
    tx.data = jsToBytes(ss.str());
    char* rawTx = signTx(tx, txData.secretKey);
    char* result = sendRawTxWaitConfirm(rawTx);
    free(rawTx);
    return result;
     */
    return NULL;
}

char* privKey2Addr(char* privKey)
{
    /*
    Secret secretKey(privKey);
    std::stringstream ss;
    ss << "0x" << toAddress(secretKey);
    return stringStreamToChar(ss);
     */
    return NULL;
};

char* pubKey2Addr(char* pubKey)
{
    /*
    Public publicKey(pubKey);
    std::stringstream ss;
    ss << "0x" << toAddress(publicKey);
    return stringStreamToChar(ss);
     */
    return NULL;
};

char* getPubKeyFromPriv(char *privKey)
{
    /*
    Public publicKey = toPublic(Secret(privKey));
    std::stringstream ss;
    ss << "0x" << publicKey;
    return stringStreamToChar(ss);
     */
    return NULL;
}

uint64_t getEthBalance(char *address, int *error)
{
    /*
    char* hexBalance = getEthBalanceRequest(address);
    if (hexBalance != NULL) {
        // convert wei to satoshi
        u256 balance = jsToU256(hexBalance) / boost::multiprecision::pow(u256(10), 10);
        free(hexBalance);
        return static_cast<uint64_t>(balance);
    } else {
        *error = 1;
        return 0;
    }
     */
    return 0;
}

uint64_t getErc20BalanceSatoshi(char *address, char *tokenAddress, uint8_t setDecimals, int *error)
{
    /*
    std::stringstream ss;
    ss << "0x70a08231"
       << "000000000000000000000000"
       << toHex(jsToAddress(address));
    char* hexBalance = ethCall(tokenAddress, ss.str().c_str());
    // convert wei to satoshi
    uint8_t decimals;
    if (hexBalance != NULL) {
        if (setDecimals > 0) {
            decimals = setDecimals;
        } else {
            decimals = get_erc20_decimals(tokenAddress, LP_eth_client);
        }

        u256 balance = jsToU256(hexBalance);
        if (decimals < 18) {
            balance *= boost::multiprecision::pow(u256(10), 18 - decimals);
        }
        balance /= boost::multiprecision::pow(u256(10), 10);
        free(hexBalance);
        return static_cast<uint64_t>(balance);
    } else {
        *error = 1;
        return 0;
    }
     */
    return 0;
}

char *getErc20BalanceHexWei(char *address, char *tokenAddress)
{
    /*
    std::stringstream ss;
    ss << "0x70a08231"
       << "000000000000000000000000"
       << toHex(jsToAddress(address));
    char *hexBalance = ethCall(tokenAddress, ss.str().c_str());
    return hexBalance;
     */
    return NULL;
}

uint64_t getErc20Allowance(char *owner, char *spender, char *tokenAddress, uint8_t set_decimals)
{
    /*
    std::stringstream ss;
    ss << "0xdd62ed3e"
       << "000000000000000000000000"
       << toHex(jsToAddress(owner))
       << "000000000000000000000000"
       << toHex(jsToAddress(spender));
    char* hexAllowance = ethCall(tokenAddress, ss.str().c_str());
    uint8_t decimals;
    if (set_decimals > 0) {
        decimals = set_decimals;
    } else {
        decimals = get_erc20_decimals(tokenAddress, LP_eth_client);
    }
    u256 allowance = jsToU256(hexAllowance);
    if (decimals < 18) {
        allowance *= boost::multiprecision::pow(u256(10), 18 - decimals);
    }
    // convert wei to satoshi
    allowance /= boost::multiprecision::pow(u256(10), 10);
    free(hexAllowance);
    return static_cast<uint64_t>(allowance);
     */
    return 0;
}

void uint8arrayToHex(char *dest, uint8_t *input, int len)
{
    strcpy(dest, "0x");
    for (int i = 0; i < len; i++)
    {
        sprintf(dest + (i + 1) * 2, "%02x", input[i]);
    }
    dest[(len + 1) * 2] = '\0';
}

void satoshisToWei(char *dest, uint64_t input)
{
    sprintf(dest, "%" PRIu64, input);
    strcat(dest, "0000000000");
}
