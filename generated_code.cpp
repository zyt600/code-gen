#include <iostream>
#include "omex_sgx.h"

void OMnetLogger::print(const quad_word& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "quad_word: {}", std::string(item.quad_word,sizeof(item.quad_word)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const transaction_type_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "central_module_c: {}", item.central_module_c);
    loggerOMnet->log(Level, "server_type_c: {}", item.server_type_c);
    loggerOMnet->log(Level, "transaction_number_n: {}", item.transaction_number_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const series_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "instrument_group_c: {}", item.instrument_group_c);
    loggerOMnet->log(Level, "modifier_c: {}", item.modifier_c);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "expiration_date_n: {}", item.expiration_date_n);
    loggerOMnet->log(Level, "strike_price_i: {}", item.strike_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const account_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const countersign_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const prop_trade_account_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const prop_deliv_account_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const prop_pos_account_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const prop_margin_account_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const sink_account_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const prop_origin_account_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const prop_call_account_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const prop_settlement_account_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const delivery_account_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const deliv_base_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "instrument_group_c: {}", item.instrument_group_c);
    loggerOMnet->log(Level, "modifier_c: {}", item.modifier_c);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "expiration_date_n: {}", item.expiration_date_n);
    loggerOMnet->log(Level, "strike_price_i: {}", item.strike_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const party_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const participant_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const trading_code_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "user_id_s: {}", std::string(item.user_id_s,sizeof(item.user_id_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const tick_size_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "step_size_i: {}", item.step_size_i);
    loggerOMnet->log(Level, "lower_limit_i: {}", item.lower_limit_i);
    loggerOMnet->log(Level, "upper_limit_i: {}", item.upper_limit_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const transaction_type_low_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const transaction_type_high_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const series_fields_used_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "instrument_group_c: {}", item.instrument_group_c);
    loggerOMnet->log(Level, "modifier_c: {}", item.modifier_c);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "expiration_date_n: {}", item.expiration_date_n);
    loggerOMnet->log(Level, "strike_price_i: {}", item.strike_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const partition_low_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "instrument_group_c: {}", item.instrument_group_c);
    loggerOMnet->log(Level, "modifier_c: {}", item.modifier_c);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "expiration_date_n: {}", item.expiration_date_n);
    loggerOMnet->log(Level, "strike_price_i: {}", item.strike_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const partition_high_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "instrument_group_c: {}", item.instrument_group_c);
    loggerOMnet->log(Level, "modifier_c: {}", item.modifier_c);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "expiration_date_n: {}", item.expiration_date_n);
    loggerOMnet->log(Level, "strike_price_i: {}", item.strike_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const new_series_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "instrument_group_c: {}", item.instrument_group_c);
    loggerOMnet->log(Level, "modifier_c: {}", item.modifier_c);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "expiration_date_n: {}", item.expiration_date_n);
    loggerOMnet->log(Level, "strike_price_i: {}", item.strike_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ex_user_code_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "user_id_s: {}", std::string(item.user_id_s,sizeof(item.user_id_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const user_code_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "user_id_s: {}", std::string(item.user_id_s,sizeof(item.user_id_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const new_account_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const order_var_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "mp_quantity_i: {}", item.mp_quantity_i);
    loggerOMnet->log(Level, "premium_i: {}", item.premium_i);
    loggerOMnet->log(Level, "block_n: {}", item.block_n);
    loggerOMnet->log(Level, "time_validity_n: {}", item.time_validity_n);
    loggerOMnet->log(Level, "exch_order_type_n: {}", item.exch_order_type_n);
    loggerOMnet->log(Level, "trigger_order_time_validity_n: {}", item.trigger_order_time_validity_n);
    loggerOMnet->log(Level, "ex_client_s: {}", std::string(item.ex_client_s,sizeof(item.ex_client_s)).c_str());
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level, "open_close_req_c: {}", item.open_close_req_c);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "ext_t_state_c: {}", item.ext_t_state_c);
    loggerOMnet->log(Level, "order_type_c: {}", item.order_type_c);
    loggerOMnet->log(Level, "stop_condition_c: {}", item.stop_condition_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const give_up_member_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const combo_series_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "instrument_group_c: {}", item.instrument_group_c);
    loggerOMnet->log(Level, "modifier_c: {}", item.modifier_c);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "expiration_date_n: {}", item.expiration_date_n);
    loggerOMnet->log(Level, "strike_price_i: {}", item.strike_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const upper_level_series_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "instrument_group_c: {}", item.instrument_group_c);
    loggerOMnet->log(Level, "modifier_c: {}", item.modifier_c);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "expiration_date_n: {}", item.expiration_date_n);
    loggerOMnet->log(Level, "strike_price_i: {}", item.strike_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const status_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "field_s: {}", std::string(item.field_s,sizeof(item.field_s)).c_str());
    loggerOMnet->log(Level, "stat_description_s: {}", std::string(item.stat_description_s,sizeof(item.stat_description_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const account_data_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.countersign);
    print(item.prop_trade_account);
    print(item.prop_deliv_account);
    print(item.prop_pos_account);
    print(item.prop_margin_account);
    print(item.sink_account);
    print(item.prop_origin_account);
    print(item.prop_call_account);
    print(item.prop_non_ccp_margin_account);
    print(item.prop_settlement_account);
    loggerOMnet->log(Level, "rank_class_i: {}", item.rank_class_i);
    loggerOMnet->log(Level, "risk_currency_s: {}", std::string(item.risk_currency_s,sizeof(item.risk_currency_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "investor_type_s: {}", std::string(item.investor_type_s,sizeof(item.investor_type_s)).c_str());
    loggerOMnet->log(Level, "nationality_s: {}", std::string(item.nationality_s,sizeof(item.nationality_s)).c_str());
    loggerOMnet->log(Level, "account_text_s: {}", std::string(item.account_text_s,sizeof(item.account_text_s)).c_str());
    loggerOMnet->log(Level, "ext_acc_id_s: {}", std::string(item.ext_acc_id_s,sizeof(item.ext_acc_id_s)).c_str());
    loggerOMnet->log(Level, "ext_acc_controller_s: {}", std::string(item.ext_acc_controller_s,sizeof(item.ext_acc_controller_s)).c_str());
    loggerOMnet->log(Level, "ext_acc_registrar_s: {}", std::string(item.ext_acc_registrar_s,sizeof(item.ext_acc_registrar_s)).c_str());
    loggerOMnet->log(Level, "org_number_s: {}", std::string(item.org_number_s,sizeof(item.org_number_s)).c_str());
    loggerOMnet->log(Level, "account_alias_s: {}", std::string(item.account_alias_s,sizeof(item.account_alias_s)).c_str());
    loggerOMnet->log(Level, "diary_number_s: {}", std::string(item.diary_number_s,sizeof(item.diary_number_s)).c_str());
    loggerOMnet->log(Level, "acc_type_s: {}", std::string(item.acc_type_s,sizeof(item.acc_type_s)).c_str());
    loggerOMnet->log(Level, "fee_type_s: {}", std::string(item.fee_type_s,sizeof(item.fee_type_s)).c_str());
    loggerOMnet->log(Level, "cust_bank_id_s: {}", std::string(item.cust_bank_id_s,sizeof(item.cust_bank_id_s)).c_str());
    loggerOMnet->log(Level, "acc_state_c: {}", item.acc_state_c);
    loggerOMnet->log(Level, "read_access_c: {}", item.read_access_c);
    loggerOMnet->log(Level, "auto_net_c: {}", item.auto_net_c);
    loggerOMnet->log(Level, "risk_cur_conv_c: {}", item.risk_cur_conv_c);
    loggerOMnet->log(Level, "risk_margin_net_c: {}", item.risk_margin_net_c);
    loggerOMnet->log(Level, "acc_allow_nov_c: {}", item.acc_allow_nov_c);
    loggerOMnet->log(Level, "cash_collateral_interest_c: {}", item.cash_collateral_interest_c);
    loggerOMnet->log(Level, "dd_in_base_c: {}", item.dd_in_base_c);
    loggerOMnet->log(Level, "foreign_holder_c: {}", item.foreign_holder_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cl_delivery_api_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.delivery_account);
    print(item.series);
    print(item.deliv_base);
    loggerOMnet->log(Level, "deliv_base_quantity_q: {}", item.deliv_base_quantity_q);
    loggerOMnet->log(Level, "delivery_quantity_q: {}", item.delivery_quantity_q);
    loggerOMnet->log(Level, "delivery_number_i: {}", item.delivery_number_i);
    loggerOMnet->log(Level, "key_number_i: {}", item.key_number_i);
    loggerOMnet->log(Level, "delivery_origin_i: {}", item.delivery_origin_i);
    loggerOMnet->log(Level, "class_no_i: {}", item.class_no_i);
    loggerOMnet->log(Level, "sequence_number_i: {}", item.sequence_number_i);
    loggerOMnet->log(Level, "event_type_i: {}", item.event_type_i);
    loggerOMnet->log(Level, "original_delivery_number_i: {}", item.original_delivery_number_i);
    loggerOMnet->log(Level, "original_key_number_i: {}", item.original_key_number_i);
    loggerOMnet->log(Level, "delivery_unit_u: {}", item.delivery_unit_u);
    loggerOMnet->log(Level, "delivery_properties_u: {}", item.delivery_properties_u);
    loggerOMnet->log(Level, "propagation_u: {}", item.propagation_u);
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    print(item.clearing_account);
    loggerOMnet->log(Level, "original_date_s: {}", std::string(item.original_date_s,sizeof(item.original_date_s)).c_str());
    loggerOMnet->log(Level, "passthrough_s: {}", std::string(item.passthrough_s,sizeof(item.passthrough_s)).c_str());
    loggerOMnet->log(Level, "delivery_type_c: {}", item.delivery_type_c);
    loggerOMnet->log(Level, "originator_type_c: {}", item.originator_type_c);
    loggerOMnet->log(Level, "delivery_state_c: {}", item.delivery_state_c);
    loggerOMnet->log(Level, "bought_or_sold_c: {}", item.bought_or_sold_c);
    loggerOMnet->log(Level, "ext_trade_fee_type_c: {}", item.ext_trade_fee_type_c);
    loggerOMnet->log(Level, "giving_up_exchange_s: {}", std::string(item.giving_up_exchange_s,sizeof(item.giving_up_exchange_s)).c_str());
    loggerOMnet->log(Level, "settlement_instr_date_s: {}", std::string(item.settlement_instr_date_s,sizeof(item.settlement_instr_date_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cl_give_up_api_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.account);
    print(item.party);
    loggerOMnet->log(Level, "sequence_number_i: {}", item.sequence_number_i);
    loggerOMnet->log(Level, "gup_reason_i: {}", item.gup_reason_i);
    loggerOMnet->log(Level, "give_up_number_i: {}", item.give_up_number_i);
    loggerOMnet->log(Level, "trade_quantity_i: {}", item.trade_quantity_i);
    loggerOMnet->log(Level, "deal_price_i: {}", item.deal_price_i);
    loggerOMnet->log(Level, "trade_number_i: {}", item.trade_number_i);
    loggerOMnet->log(Level, "commission_i: {}", item.commission_i);
    loggerOMnet->log(Level, "bought_or_sold_c: {}", item.bought_or_sold_c);
    loggerOMnet->log(Level, "state_c: {}", item.state_c);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "give_up_text_s: {}", std::string(item.give_up_text_s,sizeof(item.give_up_text_s)).c_str());
    loggerOMnet->log(Level, "asof_date_s: {}", std::string(item.asof_date_s,sizeof(item.asof_date_s)).c_str());
    loggerOMnet->log(Level, "asof_time_s: {}", std::string(item.asof_time_s,sizeof(item.asof_time_s)).c_str());
    loggerOMnet->log(Level, "orig_clearing_date_s: {}", std::string(item.orig_clearing_date_s,sizeof(item.orig_clearing_date_s)).c_str());
    loggerOMnet->log(Level, "old_trade_c: {}", item.old_trade_c);
    loggerOMnet->log(Level, "ext_trade_fee_type_c: {}", item.ext_trade_fee_type_c);
    loggerOMnet->log(Level, "deal_source_c: {}", item.deal_source_c);
    loggerOMnet->log(Level, "reserved_prop_c: {}", item.reserved_prop_c);
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "ext_trade_number_u: {}", item.ext_trade_number_u);
    loggerOMnet->log(Level, "orig_ext_trade_number_u: {}", item.orig_ext_trade_number_u);
    loggerOMnet->log(Level, "trade_venue_c: {}", item.trade_venue_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const old_series_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "instrument_group_c: {}", item.instrument_group_c);
    loggerOMnet->log(Level, "modifier_c: {}", item.modifier_c);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "expiration_date_n: {}", item.expiration_date_n);
    loggerOMnet->log(Level, "strike_price_i: {}", item.strike_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const time_spec_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "tv_sec: {}", item.tv_sec);
    loggerOMnet->log(Level, "tv_nsec: {}", item.tv_nsec);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const currency_ranking_connection_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.participant);
    loggerOMnet->log(Level, "currency_ranking_id_s: {}", std::string(item.currency_ranking_id_s,sizeof(item.currency_ranking_id_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ccy_rnk_cnx_attributes_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "version_i: {}", item.version_i);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    print(item.trading_code);
    loggerOMnet->log(Level, "le_state_c: {}", item.le_state_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ref_delta_limits_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "upper_limit_i: {}", item.upper_limit_i);
    loggerOMnet->log(Level, "lower_limit_i: {}", item.lower_limit_i);
    loggerOMnet->log(Level, "price_limit_unit_c: {}", item.price_limit_unit_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const last_delta_limits_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "upper_limit_i: {}", item.upper_limit_i);
    loggerOMnet->log(Level, "lower_limit_i: {}", item.lower_limit_i);
    loggerOMnet->log(Level, "price_limit_unit_c: {}", item.price_limit_unit_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const da24_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "exchange_short_s: {}", std::string(item.exchange_short_s,sizeof(item.exchange_short_s)).c_str());
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "tz_exchange_s: {}", std::string(item.tz_exchange_s,sizeof(item.tz_exchange_s)).c_str());
    loggerOMnet->log(Level, "master_clh_id_s: {}", std::string(item.master_clh_id_s,sizeof(item.master_clh_id_s)).c_str());
    loggerOMnet->log(Level, "country_s: {}", std::string(item.country_s,sizeof(item.country_s)).c_str());
    loggerOMnet->log(Level, "date_implementation_s: {}", std::string(item.date_implementation_s,sizeof(item.date_implementation_s)).c_str());
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cl_trade_change_api_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "trade_number_i: {}", item.trade_number_i);
    loggerOMnet->log(Level, "sequence_number_i: {}", item.sequence_number_i);
    loggerOMnet->log(Level, "trade_state_c: {}", item.trade_state_c);
    loggerOMnet->log(Level, "le_state_c: {}", item.le_state_c);
    loggerOMnet->log(Level, "give_up_state_c: {}", item.give_up_state_c);
    loggerOMnet->log(Level, "instance_c: {}", item.instance_c);
    loggerOMnet->log(Level, "rem_quantity_i: {}", item.rem_quantity_i);
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "big_attention_u: {}", item.big_attention_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const server_partition_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "server_name_s: {}", std::string(item.server_name_s,sizeof(item.server_name_s)).c_str());
    print(item.transaction_type_low);
    print(item.transaction_type_high);
    print(item.series_fields_used);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "event_type_i: {}", item.event_type_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const orig_deal_part_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "asof_date_s: {}", std::string(item.asof_date_s,sizeof(item.asof_date_s)).c_str());
    loggerOMnet->log(Level, "asof_time_s: {}", std::string(item.asof_time_s,sizeof(item.asof_time_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "deal_price_i: {}", item.deal_price_i);
    loggerOMnet->log(Level, "deal_number_i: {}", item.deal_number_i);
    loggerOMnet->log(Level, "deal_quantity_i: {}", item.deal_quantity_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rectify_deal_part_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.new_series);
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "asof_date_s: {}", std::string(item.asof_date_s,sizeof(item.asof_date_s)).c_str());
    loggerOMnet->log(Level, "asof_time_s: {}", std::string(item.asof_time_s,sizeof(item.asof_time_s)).c_str());
    loggerOMnet->log(Level, "rectify_deal_number_q: {}", item.rectify_deal_number_q);
    print(item.trading_code);
    print(item.ex_user_code);
    loggerOMnet->log(Level, "state_i: {}", item.state_i);
    loggerOMnet->log(Level, "new_deal_price_i: {}", item.new_deal_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ans_rect_t_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "asof_date_s: {}", std::string(item.asof_date_s,sizeof(item.asof_date_s)).c_str());
    loggerOMnet->log(Level, "asof_time_s: {}", std::string(item.asof_time_s,sizeof(item.asof_time_s)).c_str());
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "orig_clearing_date_s: {}", std::string(item.orig_clearing_date_s,sizeof(item.orig_clearing_date_s)).c_str());
    print(item.trading_code);
    print(item.user_code);
    print(item.series);
    loggerOMnet->log(Level, "trade_number_i: {}", item.trade_number_i);
    loggerOMnet->log(Level, "rectify_trade_number_i: {}", item.rectify_trade_number_i);
    loggerOMnet->log(Level, "ext_seq_nbr_i: {}", item.ext_seq_nbr_i);
    loggerOMnet->log(Level, "state_c: {}", item.state_c);
    loggerOMnet->log(Level, "bought_or_sold_c: {}", item.bought_or_sold_c);
    loggerOMnet->log(Level, "reserved_prop_c: {}", item.reserved_prop_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    print(item.new_account);
    print(item.account);
    loggerOMnet->log(Level, "trade_quantity_i: {}", item.trade_quantity_i);
    loggerOMnet->log(Level, "deal_price_i: {}", item.deal_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const order_no_id_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "mp_quantity_i: {}", item.mp_quantity_i);
    loggerOMnet->log(Level, "premium_i: {}", item.premium_i);
    loggerOMnet->log(Level, "block_n: {}", item.block_n);
    loggerOMnet->log(Level, "exch_order_type_n: {}", item.exch_order_type_n);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const order_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.trading_code);
    print(item.order_var);
    print(item.ex_user_code);
    print(item.give_up_member);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "order_index_u: {}", item.order_index_u);
    loggerOMnet->log(Level, "transaction_number_n: {}", item.transaction_number_n);
    loggerOMnet->log(Level, "change_reason_c: {}", item.change_reason_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const pos_info_update_api_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "deny_exercise_q: {}", item.deny_exercise_q);
    loggerOMnet->log(Level, "qty_closed_out_q: {}", item.qty_closed_out_q);
    loggerOMnet->log(Level, "quantity_cover_u: {}", item.quantity_cover_u);
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "reserved_prop_c: {}", item.reserved_prop_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const da5_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.combo_series);
    loggerOMnet->log(Level, "cbs_id_s: {}", std::string(item.cbs_id_s,sizeof(item.cbs_id_s)).c_str());
    loggerOMnet->log(Level, "items_c: {}", item.items_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const trd_rpt_cust_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.party);
    loggerOMnet->log(Level, "ex_client_s: {}", std::string(item.ex_client_s,sizeof(item.ex_client_s)).c_str());
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "open_close_req_c: {}", item.open_close_req_c);
    loggerOMnet->log(Level, "exch_order_type_n: {}", item.exch_order_type_n);
    print(item.give_up_member);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const da53_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "corp_action_code_s: {}", std::string(item.corp_action_code_s,sizeof(item.corp_action_code_s)).c_str());
    loggerOMnet->log(Level, "corp_action_type_c: {}", item.corp_action_type_c);
    loggerOMnet->log(Level, "corp_action_status_c: {}", item.corp_action_status_c);
    loggerOMnet->log(Level, "corp_action_level_c: {}", item.corp_action_level_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const deposit_withdraw_collateral_ssi_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level, "amount_q: {}", item.amount_q);
    loggerOMnet->log(Level, "gross_amount_q: {}", item.gross_amount_q);
    loggerOMnet->log(Level, "ssi_id_q: {}", item.ssi_id_q);
    loggerOMnet->log(Level, "isin_code_s: {}", std::string(item.isin_code_s,sizeof(item.isin_code_s)).c_str());
    loggerOMnet->log(Level, "passthrough_s: {}", std::string(item.passthrough_s,sizeof(item.passthrough_s)).c_str());
    loggerOMnet->log(Level, "instr_ref_s: {}", std::string(item.instr_ref_s,sizeof(item.instr_ref_s)).c_str());
    loggerOMnet->log(Level, "cancel_ref_s: {}", std::string(item.cancel_ref_s,sizeof(item.cancel_ref_s)).c_str());
    loggerOMnet->log(Level, "csd_code_s: {}", std::string(item.csd_code_s,sizeof(item.csd_code_s)).c_str());
    loggerOMnet->log(Level, "reason_s: {}", std::string(item.reason_s,sizeof(item.reason_s)).c_str());
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "dec_in_amount_n: {}", item.dec_in_amount_n);
    loggerOMnet->log(Level, "collateral_transaction_type_c: {}", item.collateral_transaction_type_c);
    loggerOMnet->log(Level, "collateral_transaction_state_c: {}", item.collateral_transaction_state_c);
    loggerOMnet->log(Level, "clh_account_id_s: {}", std::string(item.clh_account_id_s,sizeof(item.clh_account_id_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const delta_limits_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "upper_limit_i: {}", item.upper_limit_i);
    loggerOMnet->log(Level, "lower_limit_i: {}", item.lower_limit_i);
    loggerOMnet->log(Level, "price_source_rule_n: {}", item.price_source_rule_n);
    loggerOMnet->log(Level, "price_limit_unit_c: {}", item.price_limit_unit_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const originator_trading_code_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "user_id_s: {}", std::string(item.user_id_s,sizeof(item.user_id_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const prop_delivery_account_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cash_opt_account_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const da9_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.upper_level_series);
    loggerOMnet->log(Level, "contract_size_i: {}", item.contract_size_i);
    loggerOMnet->log(Level, "price_quot_factor_i: {}", item.price_quot_factor_i);
    loggerOMnet->log(Level, "state_number_n: {}", item.state_number_n);
    loggerOMnet->log(Level, "ins_id_s: {}", std::string(item.ins_id_s,sizeof(item.ins_id_s)).c_str());
    loggerOMnet->log(Level, "isin_code_s: {}", std::string(item.isin_code_s,sizeof(item.isin_code_s)).c_str());
    loggerOMnet->log(Level, "stopped_by_issue_c: {}", item.stopped_by_issue_c);
    loggerOMnet->log(Level, "isin_code_old_s: {}", std::string(item.isin_code_old_s,sizeof(item.isin_code_old_s)).c_str());
    loggerOMnet->log(Level, "date_notation_s: {}", std::string(item.date_notation_s,sizeof(item.date_notation_s)).c_str());
    loggerOMnet->log(Level, "date_last_trading_s: {}", std::string(item.date_last_trading_s,sizeof(item.date_last_trading_s)).c_str());
    loggerOMnet->log(Level, "time_last_trading_s: {}", std::string(item.time_last_trading_s,sizeof(item.time_last_trading_s)).c_str());
    loggerOMnet->log(Level, "date_delivery_start_s: {}", std::string(item.date_delivery_start_s,sizeof(item.date_delivery_start_s)).c_str());
    loggerOMnet->log(Level, "date_delivery_stop_s: {}", std::string(item.date_delivery_stop_s,sizeof(item.date_delivery_stop_s)).c_str());
    loggerOMnet->log(Level, "deliverable_c: {}", item.deliverable_c);
    loggerOMnet->log(Level, "suspended_c: {}", item.suspended_c);
    loggerOMnet->log(Level, "series_status_c: {}", item.series_status_c);
    loggerOMnet->log(Level, "tm_template_c: {}", item.tm_template_c);
    loggerOMnet->log(Level, "tm_series_c: {}", item.tm_series_c);
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "start_date_s: {}", std::string(item.start_date_s,sizeof(item.start_date_s)).c_str());
    loggerOMnet->log(Level, "end_date_s: {}", std::string(item.end_date_s,sizeof(item.end_date_s)).c_str());
    loggerOMnet->log(Level, "accept_collateral_c: {}", item.accept_collateral_c);
    loggerOMnet->log(Level, "date_first_trading_s: {}", std::string(item.date_first_trading_s,sizeof(item.date_first_trading_s)).c_str());
    loggerOMnet->log(Level, "time_first_trading_s: {}", std::string(item.time_first_trading_s,sizeof(item.time_first_trading_s)).c_str());
    loggerOMnet->log(Level, "traded_in_click_c: {}", item.traded_in_click_c);
    loggerOMnet->log(Level, "traded_c: {}", item.traded_c);
    loggerOMnet->log(Level, "effective_exp_date_s: {}", std::string(item.effective_exp_date_s,sizeof(item.effective_exp_date_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const da2_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.upper_level_series);
    loggerOMnet->log(Level, "contract_size_i: {}", item.contract_size_i);
    loggerOMnet->log(Level, "price_quot_factor_i: {}", item.price_quot_factor_i);
    loggerOMnet->log(Level, "series_sequence_number_u: {}", item.series_sequence_number_u);
    loggerOMnet->log(Level, "state_number_n: {}", item.state_number_n);
    loggerOMnet->log(Level, "step_size_multiple_n: {}", item.step_size_multiple_n);
    loggerOMnet->log(Level, "ins_id_s: {}", std::string(item.ins_id_s,sizeof(item.ins_id_s)).c_str());
    loggerOMnet->log(Level, "isin_code_s: {}", std::string(item.isin_code_s,sizeof(item.isin_code_s)).c_str());
    loggerOMnet->log(Level, "suspended_c: {}", item.suspended_c);
    loggerOMnet->log(Level, "date_last_trading_s: {}", std::string(item.date_last_trading_s,sizeof(item.date_last_trading_s)).c_str());
    loggerOMnet->log(Level, "time_last_trading_s: {}", std::string(item.time_last_trading_s,sizeof(item.time_last_trading_s)).c_str());
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "start_date_s: {}", std::string(item.start_date_s,sizeof(item.start_date_s)).c_str());
    loggerOMnet->log(Level, "end_date_s: {}", std::string(item.end_date_s,sizeof(item.end_date_s)).c_str());
    loggerOMnet->log(Level, "date_delivery_start_s: {}", std::string(item.date_delivery_start_s,sizeof(item.date_delivery_start_s)).c_str());
    loggerOMnet->log(Level, "date_delivery_stop_s: {}", std::string(item.date_delivery_stop_s,sizeof(item.date_delivery_stop_s)).c_str());
    loggerOMnet->log(Level, "series_status_c: {}", item.series_status_c);
    loggerOMnet->log(Level, "long_ins_id_s: {}", std::string(item.long_ins_id_s,sizeof(item.long_ins_id_s)).c_str());
    loggerOMnet->log(Level, "date_first_trading_s: {}", std::string(item.date_first_trading_s,sizeof(item.date_first_trading_s)).c_str());
    loggerOMnet->log(Level, "time_first_trading_s: {}", std::string(item.time_first_trading_s,sizeof(item.time_first_trading_s)).c_str());
    loggerOMnet->log(Level, "traded_in_click_c: {}", item.traded_in_click_c);
    loggerOMnet->log(Level, "abbr_name_s: {}", std::string(item.abbr_name_s,sizeof(item.abbr_name_s)).c_str());
    loggerOMnet->log(Level, "stock_code_s: {}", std::string(item.stock_code_s,sizeof(item.stock_code_s)).c_str());
    loggerOMnet->log(Level, "ext_info_source_c: {}", item.ext_info_source_c);
    loggerOMnet->log(Level, "effective_exp_date_s: {}", std::string(item.effective_exp_date_s,sizeof(item.effective_exp_date_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const trd_rpt_part_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.party);
    loggerOMnet->log(Level, "ex_client_s: {}", std::string(item.ex_client_s,sizeof(item.ex_client_s)).c_str());
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "open_close_req_c: {}", item.open_close_req_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const aat_rg_connection_status_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level, "aat_connection_status_i: {}", item.aat_connection_status_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const broadcast_type_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "central_module_c: {}", item.central_module_c);
    loggerOMnet->log(Level, "server_type_c: {}", item.server_type_c);
    loggerOMnet->log(Level, "transaction_number_n: {}", item.transaction_number_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const da13_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "fee_type_s: {}", std::string(item.fee_type_s,sizeof(item.fee_type_s)).c_str());
    loggerOMnet->log(Level, "description_s: {}", std::string(item.description_s,sizeof(item.description_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const account_status_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.status_item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const da12_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "acc_type_s: {}", std::string(item.acc_type_s,sizeof(item.acc_type_s)).c_str());
    loggerOMnet->log(Level, "description_s: {}", std::string(item.description_s,sizeof(item.description_s)).c_str());
    loggerOMnet->log(Level, "open_close_c: {}", item.open_close_c);
    loggerOMnet->log(Level, "transitory_c: {}", item.transitory_c);
    loggerOMnet->log(Level, "market_maker_c: {}", item.market_maker_c);
    loggerOMnet->log(Level, "own_inventory_c: {}", item.own_inventory_c);
    loggerOMnet->log(Level, "exclusive_opening_sell_c: {}", item.exclusive_opening_sell_c);
    loggerOMnet->log(Level, "positions_allowed_c: {}", item.positions_allowed_c);
    loggerOMnet->log(Level, "trades_allowed_c: {}", item.trades_allowed_c);
    loggerOMnet->log(Level, "atr_id_s: {}", std::string(item.atr_id_s,sizeof(item.atr_id_s)).c_str());
    loggerOMnet->log(Level, "origin_c: {}", item.origin_c);
    loggerOMnet->log(Level, "handled_non_ccp_c: {}", item.handled_non_ccp_c);
    loggerOMnet->log(Level, "custodian_c: {}", item.custodian_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const add_tm_combo_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "ratio_n: {}", item.ratio_n);
    loggerOMnet->log(Level, "op_if_buy_c: {}", item.op_if_buy_c);
    loggerOMnet->log(Level, "op_if_sell_c: {}", item.op_if_sell_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_account_ext_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account_data);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_account_fee_type_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "fee_type_s: {}", std::string(item.fee_type_s,sizeof(item.fee_type_s)).c_str());
    loggerOMnet->log(Level, "description_s: {}", std::string(item.description_s,sizeof(item.description_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_account_type_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "acc_type_s: {}", std::string(item.acc_type_s,sizeof(item.acc_type_s)).c_str());
    loggerOMnet->log(Level, "description_s: {}", std::string(item.description_s,sizeof(item.description_s)).c_str());
    loggerOMnet->log(Level, "open_close_c: {}", item.open_close_c);
    loggerOMnet->log(Level, "transitory_c: {}", item.transitory_c);
    loggerOMnet->log(Level, "market_maker_c: {}", item.market_maker_c);
    loggerOMnet->log(Level, "own_inventory_c: {}", item.own_inventory_c);
    loggerOMnet->log(Level, "exclusive_opening_sell_c: {}", item.exclusive_opening_sell_c);
    loggerOMnet->log(Level, "positions_allowed_c: {}", item.positions_allowed_c);
    loggerOMnet->log(Level, "trades_allowed_c: {}", item.trades_allowed_c);
    loggerOMnet->log(Level, "atr_id_s: {}", std::string(item.atr_id_s,sizeof(item.atr_id_s)).c_str());
    loggerOMnet->log(Level, "origin_c: {}", item.origin_c);
    loggerOMnet->log(Level, "handled_non_ccp_c: {}", item.handled_non_ccp_c);
    loggerOMnet->log(Level, "custodian_c: {}", item.custodian_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_account_type_rule_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "atr_id_s: {}", std::string(item.atr_id_s,sizeof(item.atr_id_s)).c_str());
    loggerOMnet->log(Level, "create_over_api_c: {}", item.create_over_api_c);
    loggerOMnet->log(Level, "activate_at_reg_c: {}", item.activate_at_reg_c);
    loggerOMnet->log(Level, "account_field_no_n: {}", item.account_field_no_n);
    loggerOMnet->log(Level, "attribute_rule_c: {}", item.attribute_rule_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_acc_access_type_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "le_state_c: {}", item.le_state_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.trading_code);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_api_delivery_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.cl_delivery_api);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_api_give_up_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.cl_give_up_api);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_authorized_report_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "report_no_i: {}", item.report_no_i);
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "report_name_s: {}", std::string(item.report_name_s,sizeof(item.report_name_s)).c_str());
    loggerOMnet->log(Level, "report_template_s: {}", std::string(item.report_template_s,sizeof(item.report_template_s)).c_str());
    loggerOMnet->log(Level, "report_template_desc_s: {}", std::string(item.report_template_desc_s,sizeof(item.report_template_desc_s)).c_str());
    loggerOMnet->log(Level, "report_file_prefix_s: {}", std::string(item.report_file_prefix_s,sizeof(item.report_file_prefix_s)).c_str());
    loggerOMnet->log(Level, "report_file_ext_c: {}", item.report_file_ext_c);
    loggerOMnet->log(Level, "report_spec_s: {}", std::string(item.report_spec_s,sizeof(item.report_spec_s)).c_str());
    loggerOMnet->log(Level, "report_spec_desc_s: {}", std::string(item.report_spec_desc_s,sizeof(item.report_spec_desc_s)).c_str());
    loggerOMnet->log(Level, "report_owner_type_c: {}", item.report_owner_type_c);
    loggerOMnet->log(Level, "csb_id_s: {}", std::string(item.csb_id_s,sizeof(item.csb_id_s)).c_str());
    loggerOMnet->log(Level, "css_id_s: {}", std::string(item.css_id_s,sizeof(item.css_id_s)).c_str());
    loggerOMnet->log(Level, "bank_id_s: {}", std::string(item.bank_id_s,sizeof(item.bank_id_s)).c_str());
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_average_price_trade_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "trade_number_i: {}", item.trade_number_i);
    loggerOMnet->log(Level, "quantity_i: {}", item.quantity_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_bi26_signals_sent_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "info_type_i: {}", item.info_type_i);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "sent_date_s: {}", std::string(item.sent_date_s,sizeof(item.sent_date_s)).c_str());
    loggerOMnet->log(Level, "sent_time_s: {}", std::string(item.sent_time_s,sizeof(item.sent_time_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_bi27_broadcasts_sent_item1_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "broadcast_number_n: {}", item.broadcast_number_n);
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "yyyymmdd_s: {}", std::string(item.yyyymmdd_s,sizeof(item.yyyymmdd_s)).c_str());
    loggerOMnet->log(Level, "hhmmss_s: {}", std::string(item.hhmmss_s,sizeof(item.hhmmss_s)).c_str());
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item2);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_bi73_signals_sent_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "info_type_i: {}", item.info_type_i);
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "sent_date_s: {}", std::string(item.sent_date_s,sizeof(item.sent_date_s)).c_str());
    loggerOMnet->log(Level, "sent_time_s: {}", std::string(item.sent_time_s,sizeof(item.sent_time_s)).c_str());
    loggerOMnet->log(Level, "seq_num_srm_n: {}", item.seq_num_srm_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_bi7_signals_sent_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "info_type_i: {}", item.info_type_i);
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "sent_date_s: {}", std::string(item.sent_date_s,sizeof(item.sent_date_s)).c_str());
    loggerOMnet->log(Level, "sent_time_s: {}", std::string(item.sent_time_s,sizeof(item.sent_time_s)).c_str());
    loggerOMnet->log(Level, "seq_num_srm_n: {}", item.seq_num_srm_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_broker_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "user_id_s: {}", std::string(item.user_id_s,sizeof(item.user_id_s)).c_str());
    loggerOMnet->log(Level, "program_trader_c: {}", item.program_trader_c);
    loggerOMnet->log(Level, "cst_id_n: {}", item.cst_id_n);
    loggerOMnet->log(Level, "usr_id_n: {}", item.usr_id_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_central_group_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "central_group_s: {}", std::string(item.central_group_s,sizeof(item.central_group_s)).c_str());
    loggerOMnet->log(Level, "leg_number_n: {}", item.leg_number_n);
    loggerOMnet->log(Level, "sort_type_c: {}", item.sort_type_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "long_ins_id_s: {}", std::string(item.long_ins_id_s,sizeof(item.long_ins_id_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_clearing_date_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "next_clearing_date_s: {}", std::string(item.next_clearing_date_s,sizeof(item.next_clearing_date_s)).c_str());
    loggerOMnet->log(Level, "prev_clearing_date_s: {}", std::string(item.prev_clearing_date_s,sizeof(item.prev_clearing_date_s)).c_str());
    loggerOMnet->log(Level, "tra_cl_next_day_c: {}", item.tra_cl_next_day_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_clearing_date_ext_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "next_clearing_date_s: {}", std::string(item.next_clearing_date_s,sizeof(item.next_clearing_date_s)).c_str());
    loggerOMnet->log(Level, "prev_clearing_date_s: {}", std::string(item.prev_clearing_date_s,sizeof(item.prev_clearing_date_s)).c_str());
    loggerOMnet->log(Level, "tra_cl_next_day_c: {}", item.tra_cl_next_day_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_closeout_log_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.trading_code);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "closeout_qty_i: {}", item.closeout_qty_i);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "open_close_c: {}", item.open_close_c);
    loggerOMnet->log(Level, "state_c: {}", item.state_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_combo_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.combo_series);
    loggerOMnet->log(Level, "cbs_id_s: {}", std::string(item.cbs_id_s,sizeof(item.cbs_id_s)).c_str());
    loggerOMnet->log(Level, "items_c: {}", item.items_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_commission_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.party);
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "user_code_s: {}", std::string(item.user_code_s,sizeof(item.user_code_s)).c_str());
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level, "commission_i: {}", item.commission_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_conf_give_up_req_items_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level, "trade_quantity_i: {}", item.trade_quantity_i);
    loggerOMnet->log(Level, "open_close_req_c: {}", item.open_close_req_c);
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_converted_series_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "adjust_ident_n: {}", item.adjust_ident_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "contract_size_i: {}", item.contract_size_i);
    loggerOMnet->log(Level, "price_quot_factor_i: {}", item.price_quot_factor_i);
    print(item.old_series);
    print(item.new_series);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_cool_off_period_ended_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.timestamp);
    loggerOMnet->log(Level, "lower_limit_i: {}", item.lower_limit_i);
    loggerOMnet->log(Level, "upper_limit_i: {}", item.upper_limit_i);
    loggerOMnet->log(Level, "cool_off_ended_type_c: {}", item.cool_off_ended_type_c);
    loggerOMnet->log(Level, "price_limit_unit_c: {}", item.price_limit_unit_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_corp_action_da53_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "corp_action_code_s: {}", std::string(item.corp_action_code_s,sizeof(item.corp_action_code_s)).c_str());
    loggerOMnet->log(Level, "corp_action_type_c: {}", item.corp_action_type_c);
    loggerOMnet->log(Level, "corp_action_status_c: {}", item.corp_action_status_c);
    loggerOMnet->log(Level, "corp_action_level_c: {}", item.corp_action_level_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_currency_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "sec_rel_primary_n: {}", item.sec_rel_primary_n);
    loggerOMnet->log(Level, "third_rel_primary_n: {}", item.third_rel_primary_n);
    loggerOMnet->log(Level, "base_cur_s: {}", std::string(item.base_cur_s,sizeof(item.base_cur_s)).c_str());
    loggerOMnet->log(Level, "pri_unit_s: {}", std::string(item.pri_unit_s,sizeof(item.pri_unit_s)).c_str());
    loggerOMnet->log(Level, "sec_unit_s: {}", std::string(item.sec_unit_s,sizeof(item.sec_unit_s)).c_str());
    loggerOMnet->log(Level, "third_unit_s: {}", std::string(item.third_unit_s,sizeof(item.third_unit_s)).c_str());
    loggerOMnet->log(Level, "pri_not_s: {}", std::string(item.pri_not_s,sizeof(item.pri_not_s)).c_str());
    loggerOMnet->log(Level, "sec_not_s: {}", std::string(item.sec_not_s,sizeof(item.sec_not_s)).c_str());
    loggerOMnet->log(Level, "third_not_s: {}", std::string(item.third_not_s,sizeof(item.third_not_s)).c_str());
    loggerOMnet->log(Level, "acc_as_pay_c: {}", item.acc_as_pay_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_currency_ranking_connections_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.currency_ranking_connection);
    print(item.ccy_rnk_cnx_attributes);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_deal_source_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "ds_attribute_q: {}", item.ds_attribute_q);
    loggerOMnet->log(Level, "deal_source_n: {}", item.deal_source_n);
    loggerOMnet->log(Level, "desc_long_s: {}", std::string(item.desc_long_s,sizeof(item.desc_long_s)).c_str());
    loggerOMnet->log(Level, "desc_abbreviated_s: {}", std::string(item.desc_abbreviated_s,sizeof(item.desc_abbreviated_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_delivery_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "event_type_i: {}", item.event_type_i);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "class_no_i: {}", item.class_no_i);
    loggerOMnet->log(Level, "deliv_base_quantity_q: {}", item.deliv_base_quantity_q);
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "delivery_quantity_q: {}", item.delivery_quantity_q);
    print(item.deliv_base);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_delta_limit_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.ref_delta_limits);
    print(item.last_delta_limits);
    loggerOMnet->log(Level, "price_u_calc_limit_i: {}", item.price_u_calc_limit_i);
    loggerOMnet->log(Level, "price_l_calc_limit_i: {}", item.price_l_calc_limit_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_error_msg_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.trading_code);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "error_operation_s: {}", std::string(item.error_operation_s,sizeof(item.error_operation_s)).c_str());
    loggerOMnet->log(Level, "error_id_u: {}", item.error_id_u);
    loggerOMnet->log(Level, "error_problem_s: {}", std::string(item.error_problem_s,sizeof(item.error_problem_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_etpr_delta_limit_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.ref_delta_limits);
    loggerOMnet->log(Level, "price_u_calc_limit_i: {}", item.price_u_calc_limit_i);
    loggerOMnet->log(Level, "price_l_calc_limit_i: {}", item.price_l_calc_limit_i);
    loggerOMnet->log(Level, "reference_premium_i: {}", item.reference_premium_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_exception_days_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "date_exception_s: {}", std::string(item.date_exception_s,sizeof(item.date_exception_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_exchange_da24_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.da24);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_exchange_rate_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "rate_nominal_i: {}", item.rate_nominal_i);
    loggerOMnet->log(Level, "price_quot_factor_i: {}", item.price_quot_factor_i);
    loggerOMnet->log(Level, "rate_low_i: {}", item.rate_low_i);
    loggerOMnet->log(Level, "rate_high_i: {}", item.rate_high_i);
    loggerOMnet->log(Level, "dec_in_rate_n: {}", item.dec_in_rate_n);
    loggerOMnet->log(Level, "dec_in_contr_size_n: {}", item.dec_in_contr_size_n);
    loggerOMnet->log(Level, "price_currency_s: {}", std::string(item.price_currency_s,sizeof(item.price_currency_s)).c_str());
    loggerOMnet->log(Level, "other_currency_s: {}", std::string(item.other_currency_s,sizeof(item.other_currency_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_exercise_req_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "reserved_1_c: {}", item.reserved_1_c);
    loggerOMnet->log(Level, "reserved_2_s: {}", std::string(item.reserved_2_s,sizeof(item.reserved_2_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    print(item.trading_code);
    print(item.ex_user_code);
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "asof_date_s: {}", std::string(item.asof_date_s,sizeof(item.asof_date_s)).c_str());
    loggerOMnet->log(Level, "asof_time_s: {}", std::string(item.asof_time_s,sizeof(item.asof_time_s)).c_str());
    loggerOMnet->log(Level, "quantity_i: {}", item.quantity_i);
    loggerOMnet->log(Level, "trade_number_i: {}", item.trade_number_i);
    loggerOMnet->log(Level, "exercise_number_i: {}", item.exercise_number_i);
    loggerOMnet->log(Level, "state_c: {}", item.state_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_fixing_dates_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "reg_cl_date_s: {}", std::string(item.reg_cl_date_s,sizeof(item.reg_cl_date_s)).c_str());
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "fixing_value_i: {}", item.fixing_value_i);
    loggerOMnet->log(Level, "dec_in_fixing_n: {}", item.dec_in_fixing_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_fixing_val_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "fixing_value_i: {}", item.fixing_value_i);
    loggerOMnet->log(Level, "dec_in_fixing_n: {}", item.dec_in_fixing_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_give_up_request_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.account);
    print(item.party);
    loggerOMnet->log(Level, "give_up_number_i: {}", item.give_up_number_i);
    loggerOMnet->log(Level, "trade_quantity_i: {}", item.trade_quantity_i);
    loggerOMnet->log(Level, "deal_price_i: {}", item.deal_price_i);
    loggerOMnet->log(Level, "trade_number_i: {}", item.trade_number_i);
    loggerOMnet->log(Level, "commission_i: {}", item.commission_i);
    loggerOMnet->log(Level, "bought_or_sold_c: {}", item.bought_or_sold_c);
    loggerOMnet->log(Level, "state_c: {}", item.state_c);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "give_up_text_s: {}", std::string(item.give_up_text_s,sizeof(item.give_up_text_s)).c_str());
    loggerOMnet->log(Level, "asof_date_s: {}", std::string(item.asof_date_s,sizeof(item.asof_date_s)).c_str());
    loggerOMnet->log(Level, "asof_time_s: {}", std::string(item.asof_time_s,sizeof(item.asof_time_s)).c_str());
    loggerOMnet->log(Level, "orig_clearing_date_s: {}", std::string(item.orig_clearing_date_s,sizeof(item.orig_clearing_date_s)).c_str());
    loggerOMnet->log(Level, "old_trade_c: {}", item.old_trade_c);
    loggerOMnet->log(Level, "ext_trade_fee_type_c: {}", item.ext_trade_fee_type_c);
    loggerOMnet->log(Level, "deal_source_c: {}", item.deal_source_c);
    loggerOMnet->log(Level, "reserved_prop_c: {}", item.reserved_prop_c);
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "ext_trade_number_u: {}", item.ext_trade_number_u);
    loggerOMnet->log(Level, "orig_ext_trade_number_u: {}", item.orig_ext_trade_number_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_greeks_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "delta_i: {}", item.delta_i);
    loggerOMnet->log(Level, "gamma_i: {}", item.gamma_i);
    loggerOMnet->log(Level, "vega_i: {}", item.vega_i);
    loggerOMnet->log(Level, "theta_i: {}", item.theta_i);
    loggerOMnet->log(Level, "rho_i: {}", item.rho_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_haircut_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "description_s: {}", std::string(item.description_s,sizeof(item.description_s)).c_str());
    loggerOMnet->log(Level, "haircut_rate_u: {}", item.haircut_rate_u);
    loggerOMnet->log(Level, "time_to_maturity_u: {}", item.time_to_maturity_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_instrument_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "min_show_vol_u: {}", item.min_show_vol_u);
    loggerOMnet->log(Level, "hidden_vol_meth_n: {}", item.hidden_vol_meth_n);
    loggerOMnet->log(Level, "pub_inf_id_n: {}", item.pub_inf_id_n);
    loggerOMnet->log(Level, "int_id_s: {}", std::string(item.int_id_s,sizeof(item.int_id_s)).c_str());
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "maintain_positions_c: {}", item.maintain_positions_c);
    loggerOMnet->log(Level, "traded_c: {}", item.traded_c);
    loggerOMnet->log(Level, "post_trade_proc_c: {}", item.post_trade_proc_c);
    loggerOMnet->log(Level, "pos_handling_c: {}", item.pos_handling_c);
    loggerOMnet->log(Level, "directed_trade_information_c: {}", item.directed_trade_information_c);
    loggerOMnet->log(Level, "public_deal_information_c: {}", item.public_deal_information_c);
    loggerOMnet->log(Level, "pricing_method_c: {}", item.pricing_method_c);
    loggerOMnet->log(Level, "settlement_type_c: {}", item.settlement_type_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_instrument_class_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.upper_level_series);
    loggerOMnet->log(Level, "price_quot_factor_i: {}", item.price_quot_factor_i);
    loggerOMnet->log(Level, "contract_size_i: {}", item.contract_size_i);
    loggerOMnet->log(Level, "exerc_limit_i: {}", item.exerc_limit_i);
    loggerOMnet->log(Level, "redemption_value_i: {}", item.redemption_value_i);
    loggerOMnet->log(Level, "min_qty_increment_i: {}", item.min_qty_increment_i);
    loggerOMnet->log(Level, "derivate_level_n: {}", item.derivate_level_n);
    loggerOMnet->log(Level, "dec_in_strike_price_n: {}", item.dec_in_strike_price_n);
    loggerOMnet->log(Level, "dec_in_contr_size_n: {}", item.dec_in_contr_size_n);
    loggerOMnet->log(Level, "rnt_id_n: {}", item.rnt_id_n);
    loggerOMnet->log(Level, "dec_in_premium_n: {}", item.dec_in_premium_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level, "dec_in_deliv_n: {}", item.dec_in_deliv_n);
    loggerOMnet->log(Level, "items_block_n: {}", item.items_block_n);
    print(item.block_size);
    loggerOMnet->log(Level, "cleared_dec_in_qty_n: {}", item.cleared_dec_in_qty_n);
    loggerOMnet->log(Level, "virt_commodity_n: {}", item.virt_commodity_n);
    loggerOMnet->log(Level, "dec_in_fixing_n: {}", item.dec_in_fixing_n);
    loggerOMnet->log(Level, "base_cur_s: {}", std::string(item.base_cur_s,sizeof(item.base_cur_s)).c_str());
    loggerOMnet->log(Level, "traded_c: {}", item.traded_c);
    loggerOMnet->log(Level, "exerc_limit_unit_c: {}", item.exerc_limit_unit_c);
    loggerOMnet->log(Level, "inc_id_s: {}", std::string(item.inc_id_s,sizeof(item.inc_id_s)).c_str());
    loggerOMnet->log(Level, "trc_id_s: {}", std::string(item.trc_id_s,sizeof(item.trc_id_s)).c_str());
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "is_fractions_c: {}", item.is_fractions_c);
    loggerOMnet->log(Level, "price_unit_premium_c: {}", item.price_unit_premium_c);
    loggerOMnet->log(Level, "price_unit_strike_c: {}", item.price_unit_strike_c);
    loggerOMnet->log(Level, "settl_cur_id_s: {}", std::string(item.settl_cur_id_s,sizeof(item.settl_cur_id_s)).c_str());
    loggerOMnet->log(Level, "credit_class_s: {}", std::string(item.credit_class_s,sizeof(item.credit_class_s)).c_str());
    loggerOMnet->log(Level, "csd_id_s: {}", std::string(item.csd_id_s,sizeof(item.csd_id_s)).c_str());
    loggerOMnet->log(Level, "trd_cur_unit_c: {}", item.trd_cur_unit_c);
    loggerOMnet->log(Level, "collateral_type_c: {}", item.collateral_type_c);
    loggerOMnet->log(Level, "fixing_req_c: {}", item.fixing_req_c);
    loggerOMnet->log(Level, "mbs_id_s: {}", std::string(item.mbs_id_s,sizeof(item.mbs_id_s)).c_str());
    loggerOMnet->log(Level, "valuation_group_id_s: {}", std::string(item.valuation_group_id_s,sizeof(item.valuation_group_id_s)).c_str());
    loggerOMnet->log(Level, "gross_settlement_c: {}", item.gross_settlement_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_instrument_group_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "instrument_group_c: {}", item.instrument_group_c);
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "ing_id_s: {}", std::string(item.ing_id_s,sizeof(item.ing_id_s)).c_str());
    loggerOMnet->log(Level, "group_type_c: {}", item.group_type_c);
    loggerOMnet->log(Level, "tailor_made_c: {}", item.tailor_made_c);
    loggerOMnet->log(Level, "option_type_c: {}", item.option_type_c);
    loggerOMnet->log(Level, "option_style_c: {}", item.option_style_c);
    loggerOMnet->log(Level, "warrant_c: {}", item.warrant_c);
    loggerOMnet->log(Level, "repo_type_c: {}", item.repo_type_c);
    loggerOMnet->log(Level, "buy_sell_back_c: {}", item.buy_sell_back_c);
    loggerOMnet->log(Level, "future_styled_c: {}", item.future_styled_c);
    loggerOMnet->log(Level, "is_exclusive_opening_sell_c: {}", item.is_exclusive_opening_sell_c);
    loggerOMnet->log(Level, "knock_variant_c: {}", item.knock_variant_c);
    loggerOMnet->log(Level, "binary_variant_c: {}", item.binary_variant_c);
    loggerOMnet->log(Level, "option_variant_c: {}", item.option_variant_c);
    loggerOMnet->log(Level, "physical_delivery_c: {}", item.physical_delivery_c);
    loggerOMnet->log(Level, "forward_style_c: {}", item.forward_style_c);
    loggerOMnet->log(Level, "swap_style_c: {}", item.swap_style_c);
    loggerOMnet->log(Level, "maturity_c: {}", item.maturity_c);
    loggerOMnet->log(Level, "group_short_name_s: {}", std::string(item.group_short_name_s,sizeof(item.group_short_name_s)).c_str());
    loggerOMnet->log(Level, "overnight_index_swap_c: {}", item.overnight_index_swap_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_instrument_status_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "state_number_n: {}", item.state_number_n);
    loggerOMnet->log(Level, "state_level_e: {}", item.state_level_e);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_limit_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "upper_limit_i: {}", item.upper_limit_i);
    loggerOMnet->log(Level, "lower_limit_i: {}", item.lower_limit_i);
    loggerOMnet->log(Level, "reference_premium_i: {}", item.reference_premium_i);
    loggerOMnet->log(Level, "price_source_rule_n: {}", item.price_source_rule_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_manual_payments_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "amount_u: {}", item.amount_u);
    loggerOMnet->log(Level, "invc_text_s: {}", std::string(item.invc_text_s,sizeof(item.invc_text_s)).c_str());
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "pay_or_receive_c: {}", item.pay_or_receive_c);
    loggerOMnet->log(Level, "settlement_instr_date_s: {}", std::string(item.settlement_instr_date_s,sizeof(item.settlement_instr_date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_acc_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level, "market_currency_s: {}", std::string(item.market_currency_s,sizeof(item.market_currency_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "market_margin_q: {}", item.market_margin_q);
    loggerOMnet->log(Level, "risk_margin_q: {}", item.risk_margin_q);
    loggerOMnet->log(Level, "cust_bank_id_s: {}", std::string(item.cust_bank_id_s,sizeof(item.cust_bank_id_s)).c_str());
    loggerOMnet->log(Level, "risk_currency_s: {}", std::string(item.risk_currency_s,sizeof(item.risk_currency_s)).c_str());
    loggerOMnet->log(Level, "acc_risk_type_c: {}", item.acc_risk_type_c);
    loggerOMnet->log(Level, "offset_reduction_adj_q: {}", item.offset_reduction_adj_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_data_used_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "vol_src_c: {}", item.vol_src_c);
    loggerOMnet->log(Level, "margin_one_writ_opt_q: {}", item.margin_one_writ_opt_q);
    loggerOMnet->log(Level, "bid_price_i: {}", item.bid_price_i);
    loggerOMnet->log(Level, "ask_price_i: {}", item.ask_price_i);
    loggerOMnet->log(Level, "marg_price_i: {}", item.marg_price_i);
    loggerOMnet->log(Level, "fixing_value_i: {}", item.fixing_value_i);
    loggerOMnet->log(Level, "val_ivl_mid_i: {}", item.val_ivl_mid_i);
    loggerOMnet->log(Level, "val_ivl_low_i: {}", item.val_ivl_low_i);
    loggerOMnet->log(Level, "val_ivl_high_i: {}", item.val_ivl_high_i);
    loggerOMnet->log(Level, "vol_ivl_held_mid_i: {}", item.vol_ivl_held_mid_i);
    loggerOMnet->log(Level, "vol_ivl_writ_mid_i: {}", item.vol_ivl_writ_mid_i);
    loggerOMnet->log(Level, "vol_ivl_held_low_i: {}", item.vol_ivl_held_low_i);
    loggerOMnet->log(Level, "vol_ivl_writ_low_i: {}", item.vol_ivl_writ_low_i);
    loggerOMnet->log(Level, "vol_ivl_held_high_i: {}", item.vol_ivl_held_high_i);
    loggerOMnet->log(Level, "vol_ivl_writ_high_i: {}", item.vol_ivl_writ_high_i);
    loggerOMnet->log(Level, "remaining_contract_size_i: {}", item.remaining_contract_size_i);
    loggerOMnet->log(Level, "dec_in_price_n: {}", item.dec_in_price_n);
    loggerOMnet->log(Level, "opt_price_model_c: {}", item.opt_price_model_c);
    loggerOMnet->log(Level, "opt_ulg_price_src_c: {}", item.opt_ulg_price_src_c);
    loggerOMnet->log(Level, "ulg_vola_i: {}", item.ulg_vola_i);
    loggerOMnet->log(Level, "flat_rate_increase_i: {}", item.flat_rate_increase_i);
    loggerOMnet->log(Level, "flat_rate_decrease_i: {}", item.flat_rate_decrease_i);
    loggerOMnet->log(Level, "flat_rate_gain_discount_i: {}", item.flat_rate_gain_discount_i);
    loggerOMnet->log(Level, "filler_4_s: {}", std::string(item.filler_4_s,sizeof(item.filler_4_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_detail_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.series);
    loggerOMnet->log(Level, "margin_req_u: {}", item.margin_req_u);
    loggerOMnet->log(Level, "market_value_q: {}", item.market_value_q);
    loggerOMnet->log(Level, "nbr_held_q: {}", item.nbr_held_q);
    loggerOMnet->log(Level, "nbr_written_q: {}", item.nbr_written_q);
    loggerOMnet->log(Level, "held_marg_q: {}", item.held_marg_q);
    loggerOMnet->log(Level, "writ_marg_q: {}", item.writ_marg_q);
    loggerOMnet->log(Level, "cash_margin_q: {}", item.cash_margin_q);
    loggerOMnet->log(Level, "naked_margin_q: {}", item.naked_margin_q);
    loggerOMnet->log(Level, "pay_margin_q: {}", item.pay_margin_q);
    loggerOMnet->log(Level, "orig_market_value_q: {}", item.orig_market_value_q);
    loggerOMnet->log(Level, "unconv_market_value_q: {}", item.unconv_market_value_q);
    loggerOMnet->log(Level, "quantity_cover_u: {}", item.quantity_cover_u);
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "gross_or_net_c: {}", item.gross_or_net_c);
    loggerOMnet->log(Level, "cash_currency_s: {}", std::string(item.cash_currency_s,sizeof(item.cash_currency_s)).c_str());
    loggerOMnet->log(Level, "margin_class_s: {}", std::string(item.margin_class_s,sizeof(item.margin_class_s)).c_str());
    loggerOMnet->log(Level, "marg_meth_inst_c: {}", item.marg_meth_inst_c);
    loggerOMnet->log(Level, "marg_item_type_c: {}", item.marg_item_type_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_ext_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "margin_req_u: {}", item.margin_req_u);
    loggerOMnet->log(Level, "market_value_q: {}", item.market_value_q);
    print(item.account);
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_mem_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "risk_currency_s: {}", std::string(item.risk_currency_s,sizeof(item.risk_currency_s)).c_str());
    loggerOMnet->log(Level, "cust_bank_id_s: {}", std::string(item.cust_bank_id_s,sizeof(item.cust_bank_id_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "risk_margin_q: {}", item.risk_margin_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_pa_acc_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level, "market_currency_s: {}", std::string(item.market_currency_s,sizeof(item.market_currency_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "market_margin_q: {}", item.market_margin_q);
    loggerOMnet->log(Level, "market_value_q: {}", item.market_value_q);
    loggerOMnet->log(Level, "cash_margin_q: {}", item.cash_margin_q);
    loggerOMnet->log(Level, "prod_area_c: {}", item.prod_area_c);
    loggerOMnet->log(Level, "acc_risk_type_c: {}", item.acc_risk_type_c);
    loggerOMnet->log(Level, "prod_area_text_s: {}", std::string(item.prod_area_text_s,sizeof(item.prod_area_text_s)).c_str());
    loggerOMnet->log(Level, "cust_bank_id_s: {}", std::string(item.cust_bank_id_s,sizeof(item.cust_bank_id_s)).c_str());
    loggerOMnet->log(Level, "offset_reduction_adj_q: {}", item.offset_reduction_adj_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_prop_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.origin_margin_account);
    print(item.margin_calc_account);
    loggerOMnet->log(Level, "premium_margin_q: {}", item.premium_margin_q);
    loggerOMnet->log(Level, "risk_open_margin_q: {}", item.risk_open_margin_q);
    loggerOMnet->log(Level, "pl_del_margin_q: {}", item.pl_del_margin_q);
    loggerOMnet->log(Level, "risk_del_margin_q: {}", item.risk_del_margin_q);
    loggerOMnet->log(Level, "pay_margin_q: {}", item.pay_margin_q);
    loggerOMnet->log(Level, "var_margin_q: {}", item.var_margin_q);
    loggerOMnet->log(Level, "opt_premium_margin_q: {}", item.opt_premium_margin_q);
    loggerOMnet->log(Level, "long_opt_min_margin_q: {}", item.long_opt_min_margin_q);
    loggerOMnet->log(Level, "additional_margin_q: {}", item.additional_margin_q);
    loggerOMnet->log(Level, "flat_rate_margin_q: {}", item.flat_rate_margin_q);
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "source_s: {}", std::string(item.source_s,sizeof(item.source_s)).c_str());
    loggerOMnet->log(Level, "margin_has_propagated_c: {}", item.margin_has_propagated_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "pai_q: {}", item.pai_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const collection_id_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "valuation_date_s: {}", std::string(item.valuation_date_s,sizeof(item.valuation_date_s)).c_str());
    loggerOMnet->log(Level, "sequence_number_n: {}", item.sequence_number_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_series_param_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "down_int_q: {}", item.down_int_q);
    loggerOMnet->log(Level, "up_int_q: {}", item.up_int_q);
    loggerOMnet->log(Level, "risk_free_rate_i: {}", item.risk_free_rate_i);
    loggerOMnet->log(Level, "held_vol_down_i: {}", item.held_vol_down_i);
    loggerOMnet->log(Level, "held_vol_up_i: {}", item.held_vol_up_i);
    loggerOMnet->log(Level, "writ_vol_down_i: {}", item.writ_vol_down_i);
    loggerOMnet->log(Level, "writ_vol_up_i: {}", item.writ_vol_up_i);
    loggerOMnet->log(Level, "fixed_vol_i: {}", item.fixed_vol_i);
    loggerOMnet->log(Level, "held_for_adj_i: {}", item.held_for_adj_i);
    loggerOMnet->log(Level, "writ_for_adj_i: {}", item.writ_for_adj_i);
    loggerOMnet->log(Level, "pur_id_s: {}", std::string(item.pur_id_s,sizeof(item.pur_id_s)).c_str());
    loggerOMnet->log(Level, "win_id_s: {}", std::string(item.win_id_s,sizeof(item.win_id_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "bid_marg_vol_i: {}", item.bid_marg_vol_i);
    loggerOMnet->log(Level, "ask_marg_vol_i: {}", item.ask_marg_vol_i);
    loggerOMnet->log(Level, "dividend_yield_i: {}", item.dividend_yield_i);
    loggerOMnet->log(Level, "ind_bid_marg_vol_i: {}", item.ind_bid_marg_vol_i);
    loggerOMnet->log(Level, "ind_ask_marg_vol_i: {}", item.ind_ask_marg_vol_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_series_param_ext_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "down_int_q: {}", item.down_int_q);
    loggerOMnet->log(Level, "up_int_q: {}", item.up_int_q);
    loggerOMnet->log(Level, "risk_free_rate_i: {}", item.risk_free_rate_i);
    loggerOMnet->log(Level, "held_vol_down_i: {}", item.held_vol_down_i);
    loggerOMnet->log(Level, "held_vol_up_i: {}", item.held_vol_up_i);
    loggerOMnet->log(Level, "writ_vol_down_i: {}", item.writ_vol_down_i);
    loggerOMnet->log(Level, "writ_vol_up_i: {}", item.writ_vol_up_i);
    loggerOMnet->log(Level, "fixed_vol_i: {}", item.fixed_vol_i);
    loggerOMnet->log(Level, "dividend_yield_i: {}", item.dividend_yield_i);
    loggerOMnet->log(Level, "marg_param_id_s: {}", std::string(item.marg_param_id_s,sizeof(item.marg_param_id_s)).c_str());
    loggerOMnet->log(Level, "price_param_id_s: {}", std::string(item.price_param_id_s,sizeof(item.price_param_id_s)).c_str());
    loggerOMnet->log(Level, "win_id_s: {}", std::string(item.win_id_s,sizeof(item.win_id_s)).c_str());
    loggerOMnet->log(Level, "tdp_id_s: {}", std::string(item.tdp_id_s,sizeof(item.tdp_id_s)).c_str());
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_ulg_price_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "bid_price_i: {}", item.bid_price_i);
    loggerOMnet->log(Level, "ask_price_i: {}", item.ask_price_i);
    loggerOMnet->log(Level, "marg_price_i: {}", item.marg_price_i);
    loggerOMnet->log(Level, "last_paid_i: {}", item.last_paid_i);
    loggerOMnet->log(Level, "bid_theo_c: {}", item.bid_theo_c);
    loggerOMnet->log(Level, "ask_theo_c: {}", item.ask_theo_c);
    loggerOMnet->log(Level, "last_theo_c: {}", item.last_theo_c);
    loggerOMnet->log(Level, "marg_theo_c: {}", item.marg_theo_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_marg_sim_add_trade_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "sim_qty_q: {}", item.sim_qty_q);
    loggerOMnet->log(Level, "trade_price_sim_i: {}", item.trade_price_sim_i);
    loggerOMnet->log(Level, "closing_date_s: {}", std::string(item.closing_date_s,sizeof(item.closing_date_s)).c_str());
    loggerOMnet->log(Level, "date_settlement_s: {}", std::string(item.date_settlement_s,sizeof(item.date_settlement_s)).c_str());
    loggerOMnet->log(Level, "item_type_c: {}", item.item_type_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level, "reserved_i: {}", item.reserved_i);
    loggerOMnet->log(Level, "reserved_8_s: {}", std::string(item.reserved_8_s,sizeof(item.reserved_8_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_market_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "normal_trading_days_n: {}", item.normal_trading_days_n);
    loggerOMnet->log(Level, "normal_settl_days_n: {}", item.normal_settl_days_n);
    loggerOMnet->log(Level, "normal_clearing_days_n: {}", item.normal_clearing_days_n);
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "mar_id_s: {}", std::string(item.mar_id_s,sizeof(item.mar_id_s)).c_str());
    loggerOMnet->log(Level, "market_type_c: {}", item.market_type_c);
    loggerOMnet->log(Level, "index_market_c: {}", item.index_market_c);
    loggerOMnet->log(Level, "bic_code_s: {}", std::string(item.bic_code_s,sizeof(item.bic_code_s)).c_str());
    loggerOMnet->log(Level, "mic_code_s: {}", std::string(item.mic_code_s,sizeof(item.mic_code_s)).c_str());
    loggerOMnet->log(Level, "tm_clearing_market_c: {}", item.tm_clearing_market_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_member_obligation_da57_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "cst_id_n: {}", item.cst_id_n);
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "right_type_c: {}", item.right_type_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_missing_delivery_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.cl_delivery_api);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_missing_give_up_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.cl_give_up_api);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_missing_trade_change_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.cl_trade_change_api);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_mm_protection_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "quantity_protection_q: {}", item.quantity_protection_q);
    loggerOMnet->log(Level, "delta_protection_q: {}", item.delta_protection_q);
    loggerOMnet->log(Level, "exposure_time_interval_i: {}", item.exposure_time_interval_i);
    loggerOMnet->log(Level, "frozen_time_i: {}", item.frozen_time_i);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "include_futures_c: {}", item.include_futures_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_non_trading_days_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "date_non_trading_s: {}", std::string(item.date_non_trading_s,sizeof(item.date_non_trading_s)).c_str());
    loggerOMnet->log(Level, "closed_for_trading_c: {}", item.closed_for_trading_c);
    loggerOMnet->log(Level, "closed_for_settlement_c: {}", item.closed_for_settlement_c);
    loggerOMnet->log(Level, "closed_for_clearing_c: {}", item.closed_for_clearing_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_non_trad_settl_days_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "date_non_trading_s: {}", std::string(item.date_non_trading_s,sizeof(item.date_non_trading_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_open_interest_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "final_open_interest_q: {}", item.final_open_interest_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_open_interest_ext_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "gross_open_interest_q: {}", item.gross_open_interest_q);
    loggerOMnet->log(Level, "net_open_interest_q: {}", item.net_open_interest_q);
    loggerOMnet->log(Level, "member_net_open_interest_q: {}", item.member_net_open_interest_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_partition_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.server_partition);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_paynote_info_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "pay_note_number_i: {}", item.pay_note_number_i);
    loggerOMnet->log(Level, "event_type_c: {}", item.event_type_c);
    loggerOMnet->log(Level, "settle_class_c: {}", item.settle_class_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "amount_u: {}", item.amount_u);
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "pay_or_receive_c: {}", item.pay_or_receive_c);
    loggerOMnet->log(Level, "settlement_instr_date_s: {}", std::string(item.settlement_instr_date_s,sizeof(item.settlement_instr_date_s)).c_str());
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_position_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "reserved_prop_c: {}", item.reserved_prop_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "nbr_held_q: {}", item.nbr_held_q);
    loggerOMnet->log(Level, "nbr_written_q: {}", item.nbr_written_q);
    loggerOMnet->log(Level, "deny_exercise_q: {}", item.deny_exercise_q);
    print(item.account);
    loggerOMnet->log(Level, "quantity_cover_u: {}", item.quantity_cover_u);
    loggerOMnet->log(Level, "qty_closed_out_q: {}", item.qty_closed_out_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_prel_settlement_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "settl_price_i: {}", item.settl_price_i);
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "settlement_price_type_c: {}", item.settlement_price_type_c);
    loggerOMnet->log(Level, "date_and_time_s: {}", std::string(item.date_and_time_s,sizeof(item.date_and_time_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_price_limit_trigger_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.timestamp);
    loggerOMnet->log(Level, "lower_limit_i: {}", item.lower_limit_i);
    loggerOMnet->log(Level, "upper_limit_i: {}", item.upper_limit_i);
    loggerOMnet->log(Level, "next_lower_limit_i: {}", item.next_lower_limit_i);
    loggerOMnet->log(Level, "next_upper_limit_i: {}", item.next_upper_limit_i);
    loggerOMnet->log(Level, "cool_off_time_i: {}", item.cool_off_time_i);
    loggerOMnet->log(Level, "tier_c: {}", item.tier_c);
    loggerOMnet->log(Level, "price_limit_unit_c: {}", item.price_limit_unit_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_propagate_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level, "prop_type_c: {}", item.prop_type_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_realtime_ulg_price_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "bid_price_i: {}", item.bid_price_i);
    loggerOMnet->log(Level, "ask_price_i: {}", item.ask_price_i);
    loggerOMnet->log(Level, "last_paid_i: {}", item.last_paid_i);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "bid_theo_c: {}", item.bid_theo_c);
    loggerOMnet->log(Level, "ask_theo_c: {}", item.ask_theo_c);
    loggerOMnet->log(Level, "last_theo_c: {}", item.last_theo_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_rectify_d_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.orig_deal_part);
    print(item.rectify_deal_part);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_rectify_d_cont_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "trade_number_i: {}", item.trade_number_i);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level, "trade_quantity_i: {}", item.trade_quantity_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_rectify_ext_cont_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level, "trade_quantity_i: {}", item.trade_quantity_i);
    loggerOMnet->log(Level, "open_close_req_c: {}", item.open_close_req_c);
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_rectify_t_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.ans_rect_t_item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_report_nrs_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "report_no_i: {}", item.report_no_i);
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "report_spec_s: {}", std::string(item.report_spec_s,sizeof(item.report_spec_s)).c_str());
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "report_version_s: {}", std::string(item.report_version_s,sizeof(item.report_version_s)).c_str());
    loggerOMnet->log(Level, "ascii_bin_c: {}", item.ascii_bin_c);
    loggerOMnet->log(Level, "file_name_s: {}", std::string(item.file_name_s,sizeof(item.file_name_s)).c_str());
    loggerOMnet->log(Level, "file_type_s: {}", std::string(item.file_type_s,sizeof(item.file_type_s)).c_str());
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_report_ver_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "info_type_i: {}", item.info_type_i);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "report_owner_s: {}", std::string(item.report_owner_s,sizeof(item.report_owner_s)).c_str());
    loggerOMnet->log(Level, "report_version_s: {}", std::string(item.report_version_s,sizeof(item.report_version_s)).c_str());
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "file_type_s: {}", std::string(item.file_type_s,sizeof(item.file_type_s)).c_str());
    loggerOMnet->log(Level, "description_s: {}", std::string(item.description_s,sizeof(item.description_s)).c_str());
    loggerOMnet->log(Level, "ascii_bin_c: {}", item.ascii_bin_c);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_series_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.upper_level_series);
    loggerOMnet->log(Level, "contract_size_i: {}", item.contract_size_i);
    loggerOMnet->log(Level, "price_quot_factor_i: {}", item.price_quot_factor_i);
    loggerOMnet->log(Level, "series_sequence_number_u: {}", item.series_sequence_number_u);
    loggerOMnet->log(Level, "state_number_n: {}", item.state_number_n);
    loggerOMnet->log(Level, "step_size_multiple_n: {}", item.step_size_multiple_n);
    loggerOMnet->log(Level, "ins_id_s: {}", std::string(item.ins_id_s,sizeof(item.ins_id_s)).c_str());
    loggerOMnet->log(Level, "isin_code_s: {}", std::string(item.isin_code_s,sizeof(item.isin_code_s)).c_str());
    loggerOMnet->log(Level, "suspended_c: {}", item.suspended_c);
    loggerOMnet->log(Level, "date_last_trading_s: {}", std::string(item.date_last_trading_s,sizeof(item.date_last_trading_s)).c_str());
    loggerOMnet->log(Level, "time_last_trading_s: {}", std::string(item.time_last_trading_s,sizeof(item.time_last_trading_s)).c_str());
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "start_date_s: {}", std::string(item.start_date_s,sizeof(item.start_date_s)).c_str());
    loggerOMnet->log(Level, "end_date_s: {}", std::string(item.end_date_s,sizeof(item.end_date_s)).c_str());
    loggerOMnet->log(Level, "date_delivery_start_s: {}", std::string(item.date_delivery_start_s,sizeof(item.date_delivery_start_s)).c_str());
    loggerOMnet->log(Level, "date_delivery_stop_s: {}", std::string(item.date_delivery_stop_s,sizeof(item.date_delivery_stop_s)).c_str());
    loggerOMnet->log(Level, "series_status_c: {}", item.series_status_c);
    loggerOMnet->log(Level, "long_ins_id_s: {}", std::string(item.long_ins_id_s,sizeof(item.long_ins_id_s)).c_str());
    loggerOMnet->log(Level, "date_first_trading_s: {}", std::string(item.date_first_trading_s,sizeof(item.date_first_trading_s)).c_str());
    loggerOMnet->log(Level, "time_first_trading_s: {}", std::string(item.time_first_trading_s,sizeof(item.time_first_trading_s)).c_str());
    loggerOMnet->log(Level, "traded_in_click_c: {}", item.traded_in_click_c);
    loggerOMnet->log(Level, "abbr_name_s: {}", std::string(item.abbr_name_s,sizeof(item.abbr_name_s)).c_str());
    loggerOMnet->log(Level, "stock_code_s: {}", std::string(item.stock_code_s,sizeof(item.stock_code_s)).c_str());
    loggerOMnet->log(Level, "ext_info_source_c: {}", item.ext_info_source_c);
    loggerOMnet->log(Level, "effective_exp_date_s: {}", std::string(item.effective_exp_date_s,sizeof(item.effective_exp_date_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_series_bo_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.upper_level_series);
    loggerOMnet->log(Level, "contract_size_i: {}", item.contract_size_i);
    loggerOMnet->log(Level, "price_quot_factor_i: {}", item.price_quot_factor_i);
    loggerOMnet->log(Level, "state_number_n: {}", item.state_number_n);
    loggerOMnet->log(Level, "ins_id_s: {}", std::string(item.ins_id_s,sizeof(item.ins_id_s)).c_str());
    loggerOMnet->log(Level, "isin_code_s: {}", std::string(item.isin_code_s,sizeof(item.isin_code_s)).c_str());
    loggerOMnet->log(Level, "stopped_by_issue_c: {}", item.stopped_by_issue_c);
    loggerOMnet->log(Level, "isin_code_old_s: {}", std::string(item.isin_code_old_s,sizeof(item.isin_code_old_s)).c_str());
    loggerOMnet->log(Level, "date_notation_s: {}", std::string(item.date_notation_s,sizeof(item.date_notation_s)).c_str());
    loggerOMnet->log(Level, "date_last_trading_s: {}", std::string(item.date_last_trading_s,sizeof(item.date_last_trading_s)).c_str());
    loggerOMnet->log(Level, "time_last_trading_s: {}", std::string(item.time_last_trading_s,sizeof(item.time_last_trading_s)).c_str());
    loggerOMnet->log(Level, "date_delivery_start_s: {}", std::string(item.date_delivery_start_s,sizeof(item.date_delivery_start_s)).c_str());
    loggerOMnet->log(Level, "date_delivery_stop_s: {}", std::string(item.date_delivery_stop_s,sizeof(item.date_delivery_stop_s)).c_str());
    loggerOMnet->log(Level, "deliverable_c: {}", item.deliverable_c);
    loggerOMnet->log(Level, "suspended_c: {}", item.suspended_c);
    loggerOMnet->log(Level, "series_status_c: {}", item.series_status_c);
    loggerOMnet->log(Level, "tm_template_c: {}", item.tm_template_c);
    loggerOMnet->log(Level, "tm_series_c: {}", item.tm_series_c);
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "start_date_s: {}", std::string(item.start_date_s,sizeof(item.start_date_s)).c_str());
    loggerOMnet->log(Level, "end_date_s: {}", std::string(item.end_date_s,sizeof(item.end_date_s)).c_str());
    loggerOMnet->log(Level, "accept_collateral_c: {}", item.accept_collateral_c);
    loggerOMnet->log(Level, "date_first_trading_s: {}", std::string(item.date_first_trading_s,sizeof(item.date_first_trading_s)).c_str());
    loggerOMnet->log(Level, "time_first_trading_s: {}", std::string(item.time_first_trading_s,sizeof(item.time_first_trading_s)).c_str());
    loggerOMnet->log(Level, "traded_in_click_c: {}", item.traded_in_click_c);
    loggerOMnet->log(Level, "traded_c: {}", item.traded_c);
    loggerOMnet->log(Level, "effective_exp_date_s: {}", std::string(item.effective_exp_date_s,sizeof(item.effective_exp_date_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_state_type_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "state_type_number_n: {}", item.state_type_number_n);
    loggerOMnet->log(Level, "state_type_name_s: {}", std::string(item.state_type_name_s,sizeof(item.state_type_name_s)).c_str());
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const series_next_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "instrument_group_c: {}", item.instrument_group_c);
    loggerOMnet->log(Level, "modifier_c: {}", item.modifier_c);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "expiration_date_n: {}", item.expiration_date_n);
    loggerOMnet->log(Level, "strike_price_i: {}", item.strike_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_tot_equil_prices_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "equilibrium_quantity_i: {}", item.equilibrium_quantity_i);
    loggerOMnet->log(Level, "equilibrium_price_i: {}", item.equilibrium_price_i);
    loggerOMnet->log(Level, "best_bid_premium_i: {}", item.best_bid_premium_i);
    loggerOMnet->log(Level, "best_ask_premium_i: {}", item.best_ask_premium_i);
    loggerOMnet->log(Level, "best_bid_quantity_i: {}", item.best_bid_quantity_i);
    loggerOMnet->log(Level, "best_ask_quantity_i: {}", item.best_ask_quantity_i);
    loggerOMnet->log(Level, "matching_price_type_c: {}", item.matching_price_type_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_tot_ob_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.order_number_u);
    loggerOMnet->log(Level, "sequence_number_u: {}", item.sequence_number_u);
    loggerOMnet->log(Level, "ob_position_u: {}", item.ob_position_u);
    loggerOMnet->log(Level, "combo_mark_c: {}", item.combo_mark_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.order_no_id);
    print(item.party);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_tot_order_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.order_number_u);
    loggerOMnet->log(Level, "sequence_number_u: {}", item.sequence_number_u);
    loggerOMnet->log(Level, "ob_position_u: {}", item.ob_position_u);
    loggerOMnet->log(Level, "combo_mark_c: {}", item.combo_mark_c);
    loggerOMnet->log(Level, "order_category_c: {}", item.order_category_c);
    loggerOMnet->log(Level, "stp_key_i: {}", item.stp_key_i);
    print(item.party);
    print(item.order);
    loggerOMnet->log(Level, "total_volume_i: {}", item.total_volume_i);
    loggerOMnet->log(Level, "display_quantity_i: {}", item.display_quantity_i);
    loggerOMnet->log(Level, "orig_shown_quantity_i: {}", item.orig_shown_quantity_i);
    loggerOMnet->log(Level, "orig_total_volume_i: {}", item.orig_total_volume_i);
    print(item.timestamp_in);
    print(item.timestamp_created);
    loggerOMnet->log(Level, "filler_4_s: {}", std::string(item.filler_4_s,sizeof(item.filler_4_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_trade_report_types_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "initial_trr_min_value_u: {}", item.initial_trr_min_value_u);
    loggerOMnet->log(Level, "trc_id_s: {}", std::string(item.trc_id_s,sizeof(item.trc_id_s)).c_str());
    loggerOMnet->log(Level, "trr_id_s: {}", std::string(item.trr_id_s,sizeof(item.trr_id_s)).c_str());
    loggerOMnet->log(Level, "condition_s: {}", std::string(item.condition_s,sizeof(item.condition_s)).c_str());
    loggerOMnet->log(Level, "authorized_c: {}", item.authorized_c);
    loggerOMnet->log(Level, "ext_t_state_c: {}", item.ext_t_state_c);
    loggerOMnet->log(Level, "allow_interbank_c: {}", item.allow_interbank_c);
    loggerOMnet->log(Level, "allow_within_participant_c: {}", item.allow_within_participant_c);
    loggerOMnet->log(Level, "cbo_trade_report_c: {}", item.cbo_trade_report_c);
    loggerOMnet->log(Level, "allow_non_std_settlement_c: {}", item.allow_non_std_settlement_c);
    loggerOMnet->log(Level, "time_of_agree_req_c: {}", item.time_of_agree_req_c);
    loggerOMnet->log(Level, "time_of_agree_gran_c: {}", item.time_of_agree_gran_c);
    loggerOMnet->log(Level, "allow_delayed_c: {}", item.allow_delayed_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_trade_statistics_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "bid_premium_i: {}", item.bid_premium_i);
    loggerOMnet->log(Level, "ask_premium_i: {}", item.ask_premium_i);
    loggerOMnet->log(Level, "opening_price_i: {}", item.opening_price_i);
    loggerOMnet->log(Level, "settle_price_i: {}", item.settle_price_i);
    loggerOMnet->log(Level, "last_price_i: {}", item.last_price_i);
    loggerOMnet->log(Level, "high_price_i: {}", item.high_price_i);
    loggerOMnet->log(Level, "low_price_i: {}", item.low_price_i);
    loggerOMnet->log(Level, "volume_today_i: {}", item.volume_today_i);
    loggerOMnet->log(Level, "volume_yesterday_i: {}", item.volume_yesterday_i);
    loggerOMnet->log(Level, "turnaround_yesterday_u: {}", item.turnaround_yesterday_u);
    loggerOMnet->log(Level, "turnaround_today_u: {}", item.turnaround_today_u);
    loggerOMnet->log(Level, "open_balance_u: {}", item.open_balance_u);
    loggerOMnet->log(Level, "revised_open_balance_u: {}", item.revised_open_balance_u);
    loggerOMnet->log(Level, "volatility_i: {}", item.volatility_i);
    loggerOMnet->log(Level, "underlying_price_i: {}", item.underlying_price_i);
    loggerOMnet->log(Level, "corr_opening_price_i: {}", item.corr_opening_price_i);
    loggerOMnet->log(Level, "corr_high_price_i: {}", item.corr_high_price_i);
    loggerOMnet->log(Level, "corr_low_price_i: {}", item.corr_low_price_i);
    loggerOMnet->log(Level, "corr_last_price_i: {}", item.corr_last_price_i);
    loggerOMnet->log(Level, "bid_theo_c: {}", item.bid_theo_c);
    loggerOMnet->log(Level, "ask_theo_c: {}", item.ask_theo_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_trading_state_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "state_name_s: {}", std::string(item.state_name_s,sizeof(item.state_name_s)).c_str());
    loggerOMnet->log(Level, "state_number_n: {}", item.state_number_n);
    loggerOMnet->log(Level, "iss_def_warning_interval_n: {}", item.iss_def_warning_interval_n);
    loggerOMnet->log(Level, "iss_def_num_of_warnings_n: {}", item.iss_def_num_of_warnings_n);
    loggerOMnet->log(Level, "state_type_number_n: {}", item.state_type_number_n);
    loggerOMnet->log(Level, "continues_matching_c: {}", item.continues_matching_c);
    loggerOMnet->log(Level, "trading_end_c: {}", item.trading_end_c);
    loggerOMnet->log(Level, "price_quotation_required_c: {}", item.price_quotation_required_c);
    loggerOMnet->log(Level, "market_orders_allowed_c: {}", item.market_orders_allowed_c);
    loggerOMnet->log(Level, "fill_or_kill_allowed_c: {}", item.fill_or_kill_allowed_c);
    loggerOMnet->log(Level, "fill_and_kill_allowed_c: {}", item.fill_and_kill_allowed_c);
    loggerOMnet->log(Level, "edited_ob_changes_avail_c: {}", item.edited_ob_changes_avail_c);
    loggerOMnet->log(Level, "ob_changes_avail_c: {}", item.ob_changes_avail_c);
    loggerOMnet->log(Level, "end_of_clearing_day_c: {}", item.end_of_clearing_day_c);
    loggerOMnet->log(Level, "state_priority_c: {}", item.state_priority_c);
    loggerOMnet->log(Level, "fill_and_store_c: {}", item.fill_and_store_c);
    loggerOMnet->log(Level, "all_or_none_c: {}", item.all_or_none_c);
    loggerOMnet->log(Level, "imb_orders_allwd_c: {}", item.imb_orders_allwd_c);
    loggerOMnet->log(Level, "mtl_orders_rlot_allwd_c: {}", item.mtl_orders_rlot_allwd_c);
    loggerOMnet->log(Level, "allow_hidd_aggr_c: {}", item.allow_hidd_aggr_c);
    loggerOMnet->log(Level, "best_limit_c: {}", item.best_limit_c);
    loggerOMnet->log(Level, "market_bid_c: {}", item.market_bid_c);
    loggerOMnet->log(Level, "price_stabilization_c: {}", item.price_stabilization_c);
    loggerOMnet->log(Level, "short_sell_c: {}", item.short_sell_c);
    loggerOMnet->log(Level, "allow_cp_mar_c: {}", item.allow_cp_mar_c);
    loggerOMnet->log(Level, "allow_cp_lim_c: {}", item.allow_cp_lim_c);
    loggerOMnet->log(Level, "allow_undisclosed_qty_c: {}", item.allow_undisclosed_qty_c);
    loggerOMnet->log(Level, "sso_orders_allowed_c: {}", item.sso_orders_allowed_c);
    loggerOMnet->log(Level, "stop_orders_allowed_c: {}", item.stop_orders_allowed_c);
    loggerOMnet->log(Level, "good_till_session_c: {}", item.good_till_session_c);
    loggerOMnet->log(Level, "priority_ranking_c: {}", item.priority_ranking_c);
    loggerOMnet->log(Level, "fix_state_number_c: {}", item.fix_state_number_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_trd_report_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.trading_code);
    print(item.transaction_type);
    print(item.order_number_u);
    print(item.series);
    print(item.order_var);
    print(item.party);
    loggerOMnet->log(Level, "sequence_number_u: {}", item.sequence_number_u);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    print(item.give_up_member);
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_date_s: {}", std::string(item.time_of_agreement_date_s,sizeof(item.time_of_agreement_date_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_time_s: {}", std::string(item.time_of_agreement_time_s,sizeof(item.time_of_agreement_time_s)).c_str());
    loggerOMnet->log(Level, "deferred_publication_c: {}", item.deferred_publication_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_trd_report_party_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.trading_code);
    print(item.transaction_type);
    print(item.order_number_u);
    print(item.series);
    print(item.order_var);
    print(item.party);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    print(item.give_up_member);
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_date_s: {}", std::string(item.time_of_agreement_date_s,sizeof(item.time_of_agreement_date_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_time_s: {}", std::string(item.time_of_agreement_time_s,sizeof(item.time_of_agreement_time_s)).c_str());
    loggerOMnet->log(Level, "deferred_publication_c: {}", item.deferred_publication_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_underlying_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "subscription_price_i: {}", item.subscription_price_i);
    loggerOMnet->log(Level, "interest_rate_i: {}", item.interest_rate_i);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "com_id_s: {}", std::string(item.com_id_s,sizeof(item.com_id_s)).c_str());
    loggerOMnet->log(Level, "isin_code_s: {}", std::string(item.isin_code_s,sizeof(item.isin_code_s)).c_str());
    loggerOMnet->log(Level, "dec_in_price_n: {}", item.dec_in_price_n);
    loggerOMnet->log(Level, "date_release_s: {}", std::string(item.date_release_s,sizeof(item.date_release_s)).c_str());
    loggerOMnet->log(Level, "date_termination_s: {}", std::string(item.date_termination_s,sizeof(item.date_termination_s)).c_str());
    loggerOMnet->log(Level, "date_dated_s: {}", std::string(item.date_dated_s,sizeof(item.date_dated_s)).c_str());
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "base_cur_s: {}", std::string(item.base_cur_s,sizeof(item.base_cur_s)).c_str());
    loggerOMnet->log(Level, "deliverable_c: {}", item.deliverable_c);
    loggerOMnet->log(Level, "coupon_frequency_n: {}", item.coupon_frequency_n);
    loggerOMnet->log(Level, "nominal_value_q: {}", item.nominal_value_q);
    loggerOMnet->log(Level, "day_count_n: {}", item.day_count_n);
    loggerOMnet->log(Level, "days_in_interest_year_n: {}", item.days_in_interest_year_n);
    loggerOMnet->log(Level, "coupon_interest_i: {}", item.coupon_interest_i);
    loggerOMnet->log(Level, "coupon_settlement_days_n: {}", item.coupon_settlement_days_n);
    loggerOMnet->log(Level, "underlying_type_c: {}", item.underlying_type_c);
    loggerOMnet->log(Level, "price_unit_c: {}", item.price_unit_c);
    loggerOMnet->log(Level, "dec_in_nominal_n: {}", item.dec_in_nominal_n);
    loggerOMnet->log(Level, "state_number_n: {}", item.state_number_n);
    loggerOMnet->log(Level, "linked_commodity_n: {}", item.linked_commodity_n);
    loggerOMnet->log(Level, "fixed_income_type_c: {}", item.fixed_income_type_c);
    loggerOMnet->log(Level, "underlying_status_c: {}", item.underlying_status_c);
    loggerOMnet->log(Level, "underlying_issuer_s: {}", std::string(item.underlying_issuer_s,sizeof(item.underlying_issuer_s)).c_str());
    loggerOMnet->log(Level, "time_delivery_start_s: {}", std::string(item.time_delivery_start_s,sizeof(item.time_delivery_start_s)).c_str());
    loggerOMnet->log(Level, "time_delivery_stop_s: {}", std::string(item.time_delivery_stop_s,sizeof(item.time_delivery_stop_s)).c_str());
    loggerOMnet->log(Level, "sector_code_s: {}", std::string(item.sector_code_s,sizeof(item.sector_code_s)).c_str());
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.coupon);
    loggerOMnet->log(Level, "virtual_c: {}", item.virtual_c);
    loggerOMnet->log(Level, "member_circ_numb_s: {}", std::string(item.member_circ_numb_s,sizeof(item.member_circ_numb_s)).c_str());
    loggerOMnet->log(Level, "inv_scheme_c: {}", item.inv_scheme_c);
    loggerOMnet->log(Level, "date_closing_s: {}", std::string(item.date_closing_s,sizeof(item.date_closing_s)).c_str());
    loggerOMnet->log(Level, "date_last_s: {}", std::string(item.date_last_s,sizeof(item.date_last_s)).c_str());
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "cur_unit_c: {}", item.cur_unit_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_underlying_adjustment_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "no_of_shares_issued_q: {}", item.no_of_shares_issued_q);
    loggerOMnet->log(Level, "free_float_q: {}", item.free_float_q);
    loggerOMnet->log(Level, "adjust_ident_n: {}", item.adjust_ident_n);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "date_adjust_s: {}", std::string(item.date_adjust_s,sizeof(item.date_adjust_s)).c_str());
    loggerOMnet->log(Level, "date_conversion_s: {}", std::string(item.date_conversion_s,sizeof(item.date_conversion_s)).c_str());
    loggerOMnet->log(Level, "deal_price_modifier_c: {}", item.deal_price_modifier_c);
    loggerOMnet->log(Level, "contract_size_modifier_c: {}", item.contract_size_modifier_c);
    loggerOMnet->log(Level, "strike_price_modifier_c: {}", item.strike_price_modifier_c);
    loggerOMnet->log(Level, "contracts_modifier_c: {}", item.contracts_modifier_c);
    loggerOMnet->log(Level, "und_price_modifier_c: {}", item.und_price_modifier_c);
    loggerOMnet->log(Level, "so_strike_price_modifier_c: {}", item.so_strike_price_modifier_c);
    loggerOMnet->log(Level, "so_contract_size_modifier_c: {}", item.so_contract_size_modifier_c);
    loggerOMnet->log(Level, "so_deal_price_modifier_c: {}", item.so_deal_price_modifier_c);
    loggerOMnet->log(Level, "deal_price_mod_factor_i: {}", item.deal_price_mod_factor_i);
    loggerOMnet->log(Level, "contr_size_mod_factor_i: {}", item.contr_size_mod_factor_i);
    loggerOMnet->log(Level, "strike_price_mod_factor_i: {}", item.strike_price_mod_factor_i);
    loggerOMnet->log(Level, "contracts_mod_factor_i: {}", item.contracts_mod_factor_i);
    loggerOMnet->log(Level, "und_price_mod_factor_i: {}", item.und_price_mod_factor_i);
    loggerOMnet->log(Level, "so_strike_price_mod_factor_i: {}", item.so_strike_price_mod_factor_i);
    loggerOMnet->log(Level, "so_contr_size_mod_factor_i: {}", item.so_contr_size_mod_factor_i);
    loggerOMnet->log(Level, "so_deal_price_mod_factor_i: {}", item.so_deal_price_mod_factor_i);
    loggerOMnet->log(Level, "pqf_mod_factor_i: {}", item.pqf_mod_factor_i);
    loggerOMnet->log(Level, "so_pqf_mod_factor_i: {}", item.so_pqf_mod_factor_i);
    loggerOMnet->log(Level, "new_commodity_n: {}", item.new_commodity_n);
    loggerOMnet->log(Level, "so_commodity_n: {}", item.so_commodity_n);
    loggerOMnet->log(Level, "pqf_modifier_c: {}", item.pqf_modifier_c);
    loggerOMnet->log(Level, "so_pqf_modifier_c: {}", item.so_pqf_modifier_c);
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "so_country_c: {}", item.so_country_c);
    loggerOMnet->log(Level, "so_market_c: {}", item.so_market_c);
    loggerOMnet->log(Level, "adjusted_c: {}", item.adjusted_c);
    loggerOMnet->log(Level, "spinoff_c: {}", item.spinoff_c);
    loggerOMnet->log(Level, "is_adjust_same_series_c: {}", item.is_adjust_same_series_c);
    loggerOMnet->log(Level, "price_info_prev_day_c: {}", item.price_info_prev_day_c);
    loggerOMnet->log(Level, "no_of_shares_issued_op_c: {}", item.no_of_shares_issued_op_c);
    loggerOMnet->log(Level, "free_float_op_c: {}", item.free_float_op_c);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.delivery_change);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_updated_pos_info_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.pos_info_update_api);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_user_type_info_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "trans_or_bdx_c: {}", item.trans_or_bdx_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_valuation_group_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "vag_limit_i: {}", item.vag_limit_i);
    loggerOMnet->log(Level, "valuation_group_id_s: {}", std::string(item.valuation_group_id_s,sizeof(item.valuation_group_id_s)).c_str());
    loggerOMnet->log(Level, "description_s: {}", std::string(item.description_s,sizeof(item.description_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const average_price_trade_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "trade_number_i: {}", item.trade_number_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const block_order_response_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "transaction_status_i: {}", item.transaction_status_i);
    loggerOMnet->log(Level, "trans_ack_i: {}", item.trans_ack_i);
    loggerOMnet->log(Level, "item_number_c: {}", item.item_number_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const block_order_trans_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.order_var);
    loggerOMnet->log(Level, "total_volume_i: {}", item.total_volume_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const block_order_trans_p_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.order_var);
    loggerOMnet->log(Level, "total_volume_i: {}", item.total_volume_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const block_price_trans_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.order_number_bid_u);
    print(item.order_number_ask_u);
    loggerOMnet->log(Level, "bid_premium_i: {}", item.bid_premium_i);
    loggerOMnet->log(Level, "ask_premium_i: {}", item.ask_premium_i);
    loggerOMnet->log(Level, "bid_quantity_i: {}", item.bid_quantity_i);
    loggerOMnet->log(Level, "ask_quantity_i: {}", item.ask_quantity_i);
    loggerOMnet->log(Level, "bid_total_volume_i: {}", item.bid_total_volume_i);
    loggerOMnet->log(Level, "ask_total_volume_i: {}", item.ask_total_volume_i);
    loggerOMnet->log(Level, "block_n: {}", item.block_n);
    loggerOMnet->log(Level, "time_validity_n: {}", item.time_validity_n);
    loggerOMnet->log(Level, "order_type_c: {}", item.order_type_c);
    loggerOMnet->log(Level, "ex_client_s: {}", std::string(item.ex_client_s,sizeof(item.ex_client_s)).c_str());
    loggerOMnet->log(Level, "delta_quantity_c: {}", item.delta_quantity_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const block_price_trans_p_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.order_number_bid_u);
    print(item.order_number_ask_u);
    loggerOMnet->log(Level, "bid_premium_i: {}", item.bid_premium_i);
    loggerOMnet->log(Level, "ask_premium_i: {}", item.ask_premium_i);
    loggerOMnet->log(Level, "bid_quantity_i: {}", item.bid_quantity_i);
    loggerOMnet->log(Level, "ask_quantity_i: {}", item.ask_quantity_i);
    loggerOMnet->log(Level, "bid_total_volume_i: {}", item.bid_total_volume_i);
    loggerOMnet->log(Level, "ask_total_volume_i: {}", item.ask_total_volume_i);
    loggerOMnet->log(Level, "block_n: {}", item.block_n);
    loggerOMnet->log(Level, "time_validity_n: {}", item.time_validity_n);
    loggerOMnet->log(Level, "order_type_c: {}", item.order_type_c);
    loggerOMnet->log(Level, "ex_client_s: {}", std::string(item.ex_client_s,sizeof(item.ex_client_s)).c_str());
    loggerOMnet->log(Level, "delta_quantity_c: {}", item.delta_quantity_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const collateral_base_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.series);
    loggerOMnet->log(Level, "amount_q: {}", item.amount_q);
    loggerOMnet->log(Level, "passthrough_s: {}", std::string(item.passthrough_s,sizeof(item.passthrough_s)).c_str());
    loggerOMnet->log(Level, "effective_date_s: {}", std::string(item.effective_date_s,sizeof(item.effective_date_s)).c_str());
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "effective_until_s: {}", std::string(item.effective_until_s,sizeof(item.effective_until_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const da28_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "central_group_s: {}", std::string(item.central_group_s,sizeof(item.central_group_s)).c_str());
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const clearing_message_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "text_line_s: {}", std::string(item.text_line_s,sizeof(item.text_line_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const base_collateral_account_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const pos_account_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const orig_series_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "instrument_group_c: {}", item.instrument_group_c);
    loggerOMnet->log(Level, "modifier_c: {}", item.modifier_c);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "expiration_date_n: {}", item.expiration_date_n);
    loggerOMnet->log(Level, "strike_price_i: {}", item.strike_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const match_id_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "execution_event_nbr_u: {}", item.execution_event_nbr_u);
    loggerOMnet->log(Level, "match_group_nbr_u: {}", item.match_group_nbr_u);
    loggerOMnet->log(Level, "match_item_nbr_u: {}", item.match_item_nbr_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const countersign_code_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "user_id_s: {}", std::string(item.user_id_s,sizeof(item.user_id_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_account_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const currency_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "instrument_group_c: {}", item.instrument_group_c);
    loggerOMnet->log(Level, "modifier_c: {}", item.modifier_c);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "expiration_date_n: {}", item.expiration_date_n);
    loggerOMnet->log(Level, "strike_price_i: {}", item.strike_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const combo_series_multi_update_bu1005_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "chg_type_n: {}", item.chg_type_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.da5);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const combo_trade_report_trans_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "mp_quantity_i: {}", item.mp_quantity_i);
    loggerOMnet->log(Level, "premium_i: {}", item.premium_i);
    loggerOMnet->log(Level, "block_n: {}", item.block_n);
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_date_s: {}", std::string(item.time_of_agreement_date_s,sizeof(item.time_of_agreement_date_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_time_s: {}", std::string(item.time_of_agreement_time_s,sizeof(item.time_of_agreement_time_s)).c_str());
    loggerOMnet->log(Level, "deferred_publication_c: {}", item.deferred_publication_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    print(item.bid_side);
    print(item.ask_side);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const confirm_give_up_request_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level, "trade_quantity_i: {}", item.trade_quantity_i);
    loggerOMnet->log(Level, "open_close_req_c: {}", item.open_close_req_c);
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const corp_action_update_bu53_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.da53);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const create_acc_access_type_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const create_currency_ranking_connections_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const currency_ranking_key_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.participant);
    loggerOMnet->log(Level, "currency_ranking_id_s: {}", std::string(item.currency_ranking_id_s,sizeof(item.currency_ranking_id_s)).c_str());
    loggerOMnet->log(Level, "version_i: {}", item.version_i);
    loggerOMnet->log(Level, "filler_4_s: {}", std::string(item.filler_4_s,sizeof(item.filler_4_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const currency_ranking_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.currency_series);
    loggerOMnet->log(Level, "currency_rank_n: {}", item.currency_rank_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "cash_collateral_limit_q: {}", item.cash_collateral_limit_q);
    loggerOMnet->log(Level, "direct_credit_limit_q: {}", item.direct_credit_limit_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const delete_currency_ranking_connections_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.participant);
    loggerOMnet->log(Level, "currency_ranking_id_s: {}", std::string(item.currency_ranking_id_s,sizeof(item.currency_ranking_id_s)).c_str());
    loggerOMnet->log(Level, "version_i: {}", item.version_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const whose_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.trading_code);
    loggerOMnet->log(Level, "ex_client_s: {}", std::string(item.ex_client_s,sizeof(item.ex_client_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const deposit_withdraw_transfer_collateral_txn_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.deposit_withdraw_collateral_ssi);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const directed_quote_request_ack_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.party);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const directed_quote_request_trans_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.party);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const directed_quote_request_trans_p_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.party);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const equil_price_update_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "equilibrium_quantity_i: {}", item.equilibrium_quantity_i);
    loggerOMnet->log(Level, "equilibrium_price_i: {}", item.equilibrium_price_i);
    loggerOMnet->log(Level, "best_bid_premium_i: {}", item.best_bid_premium_i);
    loggerOMnet->log(Level, "best_ask_premium_i: {}", item.best_ask_premium_i);
    loggerOMnet->log(Level, "best_bid_quantity_i: {}", item.best_bid_quantity_i);
    loggerOMnet->log(Level, "best_ask_quantity_i: {}", item.best_ask_quantity_i);
    loggerOMnet->log(Level, "matching_price_type_c: {}", item.matching_price_type_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const etpr_delta_limit_change_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.delta_limits);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const etpr_limit_change_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "upper_limit_i: {}", item.upper_limit_i);
    loggerOMnet->log(Level, "lower_limit_i: {}", item.lower_limit_i);
    loggerOMnet->log(Level, "reference_premium_i: {}", item.reference_premium_i);
    loggerOMnet->log(Level, "filler_4_s: {}", std::string(item.filler_4_s,sizeof(item.filler_4_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const da78_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "date_exception_s: {}", std::string(item.date_exception_s,sizeof(item.date_exception_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const da47_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "description_s: {}", std::string(item.description_s,sizeof(item.description_s)).c_str());
    loggerOMnet->log(Level, "haircut_rate_u: {}", item.haircut_rate_u);
    loggerOMnet->log(Level, "time_to_maturity_u: {}", item.time_to_maturity_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const instrument_status_info_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "seconds_to_state_change_n: {}", item.seconds_to_state_change_n);
    loggerOMnet->log(Level, "state_number_n: {}", item.state_number_n);
    loggerOMnet->log(Level, "warning_msg_s: {}", std::string(item.warning_msg_s,sizeof(item.warning_msg_s)).c_str());
    loggerOMnet->log(Level, "state_level_e: {}", item.state_level_e);
    loggerOMnet->log(Level, "actual_start_date_s: {}", std::string(item.actual_start_date_s,sizeof(item.actual_start_date_s)).c_str());
    loggerOMnet->log(Level, "actual_start_time_s: {}", std::string(item.actual_start_time_s,sizeof(item.actual_start_time_s)).c_str());
    loggerOMnet->log(Level, "next_planned_start_date_s: {}", std::string(item.next_planned_start_date_s,sizeof(item.next_planned_start_date_s)).c_str());
    loggerOMnet->log(Level, "next_planned_start_time_s: {}", std::string(item.next_planned_start_time_s,sizeof(item.next_planned_start_time_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const da10_da20_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.upper_level_series);
    loggerOMnet->log(Level, "price_quot_factor_i: {}", item.price_quot_factor_i);
    loggerOMnet->log(Level, "contract_size_i: {}", item.contract_size_i);
    loggerOMnet->log(Level, "exerc_limit_i: {}", item.exerc_limit_i);
    loggerOMnet->log(Level, "redemption_value_i: {}", item.redemption_value_i);
    loggerOMnet->log(Level, "min_qty_increment_i: {}", item.min_qty_increment_i);
    loggerOMnet->log(Level, "derivate_level_n: {}", item.derivate_level_n);
    loggerOMnet->log(Level, "dec_in_strike_price_n: {}", item.dec_in_strike_price_n);
    loggerOMnet->log(Level, "dec_in_contr_size_n: {}", item.dec_in_contr_size_n);
    loggerOMnet->log(Level, "rnt_id_n: {}", item.rnt_id_n);
    loggerOMnet->log(Level, "dec_in_premium_n: {}", item.dec_in_premium_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level, "dec_in_deliv_n: {}", item.dec_in_deliv_n);
    loggerOMnet->log(Level, "items_block_n: {}", item.items_block_n);
    print(item.block_size);
    loggerOMnet->log(Level, "cleared_dec_in_qty_n: {}", item.cleared_dec_in_qty_n);
    loggerOMnet->log(Level, "virt_commodity_n: {}", item.virt_commodity_n);
    loggerOMnet->log(Level, "dec_in_fixing_n: {}", item.dec_in_fixing_n);
    loggerOMnet->log(Level, "base_cur_s: {}", std::string(item.base_cur_s,sizeof(item.base_cur_s)).c_str());
    loggerOMnet->log(Level, "traded_c: {}", item.traded_c);
    loggerOMnet->log(Level, "exerc_limit_unit_c: {}", item.exerc_limit_unit_c);
    loggerOMnet->log(Level, "inc_id_s: {}", std::string(item.inc_id_s,sizeof(item.inc_id_s)).c_str());
    loggerOMnet->log(Level, "trc_id_s: {}", std::string(item.trc_id_s,sizeof(item.trc_id_s)).c_str());
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "is_fractions_c: {}", item.is_fractions_c);
    loggerOMnet->log(Level, "price_unit_premium_c: {}", item.price_unit_premium_c);
    loggerOMnet->log(Level, "price_unit_strike_c: {}", item.price_unit_strike_c);
    loggerOMnet->log(Level, "settl_cur_id_s: {}", std::string(item.settl_cur_id_s,sizeof(item.settl_cur_id_s)).c_str());
    loggerOMnet->log(Level, "credit_class_s: {}", std::string(item.credit_class_s,sizeof(item.credit_class_s)).c_str());
    loggerOMnet->log(Level, "csd_id_s: {}", std::string(item.csd_id_s,sizeof(item.csd_id_s)).c_str());
    loggerOMnet->log(Level, "trd_cur_unit_c: {}", item.trd_cur_unit_c);
    loggerOMnet->log(Level, "collateral_type_c: {}", item.collateral_type_c);
    loggerOMnet->log(Level, "fixing_req_c: {}", item.fixing_req_c);
    loggerOMnet->log(Level, "mbs_id_s: {}", std::string(item.mbs_id_s,sizeof(item.mbs_id_s)).c_str());
    loggerOMnet->log(Level, "valuation_group_id_s: {}", std::string(item.valuation_group_id_s,sizeof(item.valuation_group_id_s)).c_str());
    loggerOMnet->log(Level, "gross_settlement_c: {}", item.gross_settlement_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const irs_leg_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "fixed_interest_rate_i: {}", item.fixed_interest_rate_i);
    print(item.float_rate_index);
    loggerOMnet->log(Level, "spread_i: {}", item.spread_i);
    loggerOMnet->log(Level, "init_interest_rate_i: {}", item.init_interest_rate_i);
    loggerOMnet->log(Level, "first_rollover_date_s: {}", std::string(item.first_rollover_date_s,sizeof(item.first_rollover_date_s)).c_str());
    loggerOMnet->log(Level, "day_count_conv_c: {}", item.day_count_conv_c);
    loggerOMnet->log(Level, "rollover_period_c: {}", item.rollover_period_c);
    loggerOMnet->log(Level, "rollover_day_c: {}", item.rollover_day_c);
    loggerOMnet->log(Level, "fixed_or_float_c: {}", item.fixed_or_float_c);
    print(item.party_pay);
    loggerOMnet->log(Level, "effective_date_s: {}", std::string(item.effective_date_s,sizeof(item.effective_date_s)).c_str());
    loggerOMnet->log(Level, "filler_4_s: {}", std::string(item.filler_4_s,sizeof(item.filler_4_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const limit_change_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "upper_limit_i: {}", item.upper_limit_i);
    loggerOMnet->log(Level, "lower_limit_i: {}", item.lower_limit_i);
    loggerOMnet->log(Level, "reference_premium_i: {}", item.reference_premium_i);
    loggerOMnet->log(Level, "price_source_rule_n: {}", item.price_source_rule_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const stop_series_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "instrument_group_c: {}", item.instrument_group_c);
    loggerOMnet->log(Level, "modifier_c: {}", item.modifier_c);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "expiration_date_n: {}", item.expiration_date_n);
    loggerOMnet->log(Level, "strike_price_i: {}", item.strike_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const stp_key_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "stp_key_i: {}", item.stp_key_i);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const mass_quote_trans_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "buy_price_i: {}", item.buy_price_i);
    loggerOMnet->log(Level, "buy_quantity_u: {}", item.buy_quantity_u);
    loggerOMnet->log(Level, "sell_price_i: {}", item.sell_price_i);
    loggerOMnet->log(Level, "sell_quantity_u: {}", item.sell_quantity_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const mass_quote_update_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "buy_price_i: {}", item.buy_price_i);
    loggerOMnet->log(Level, "buy_quantity_u: {}", item.buy_quantity_u);
    loggerOMnet->log(Level, "sell_price_i: {}", item.sell_price_i);
    loggerOMnet->log(Level, "sell_quantity_u: {}", item.sell_quantity_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const message_information_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "text_line_s: {}", std::string(item.text_line_s,sizeof(item.text_line_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const da87_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "quantity_protection_q: {}", item.quantity_protection_q);
    loggerOMnet->log(Level, "delta_protection_q: {}", item.delta_protection_q);
    loggerOMnet->log(Level, "exposure_time_interval_i: {}", item.exposure_time_interval_i);
    loggerOMnet->log(Level, "frozen_time_i: {}", item.frozen_time_i);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "include_futures_c: {}", item.include_futures_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const auth_section_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "auth_id: {}", item.auth_id);
    loggerOMnet->log(Level, "login_user_s: {}", std::string(item.login_user_s,sizeof(item.login_user_s)).c_str());
    loggerOMnet->log(Level, "auth_reject_status_c: {}", item.auth_reject_status_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const account_data_external_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.countersign);
    print(item.prop_trade_account);
    print(item.prop_deliv_account);
    print(item.prop_pos_account);
    print(item.prop_margin_account);
    print(item.sink_account);
    print(item.prop_origin_account);
    print(item.prop_call_account);
    loggerOMnet->log(Level, "member_exposure_limit_q: {}", item.member_exposure_limit_q);
    loggerOMnet->log(Level, "rank_class_i: {}", item.rank_class_i);
    loggerOMnet->log(Level, "risk_currency_s: {}", std::string(item.risk_currency_s,sizeof(item.risk_currency_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "investor_type_s: {}", std::string(item.investor_type_s,sizeof(item.investor_type_s)).c_str());
    loggerOMnet->log(Level, "nationality_s: {}", std::string(item.nationality_s,sizeof(item.nationality_s)).c_str());
    loggerOMnet->log(Level, "account_text_s: {}", std::string(item.account_text_s,sizeof(item.account_text_s)).c_str());
    loggerOMnet->log(Level, "ext_acc_id_s: {}", std::string(item.ext_acc_id_s,sizeof(item.ext_acc_id_s)).c_str());
    loggerOMnet->log(Level, "ext_acc_controller_s: {}", std::string(item.ext_acc_controller_s,sizeof(item.ext_acc_controller_s)).c_str());
    loggerOMnet->log(Level, "ext_acc_registrar_s: {}", std::string(item.ext_acc_registrar_s,sizeof(item.ext_acc_registrar_s)).c_str());
    loggerOMnet->log(Level, "org_number_s: {}", std::string(item.org_number_s,sizeof(item.org_number_s)).c_str());
    loggerOMnet->log(Level, "account_alias_s: {}", std::string(item.account_alias_s,sizeof(item.account_alias_s)).c_str());
    loggerOMnet->log(Level, "diary_number_s: {}", std::string(item.diary_number_s,sizeof(item.diary_number_s)).c_str());
    loggerOMnet->log(Level, "acc_type_s: {}", std::string(item.acc_type_s,sizeof(item.acc_type_s)).c_str());
    loggerOMnet->log(Level, "fee_type_s: {}", std::string(item.fee_type_s,sizeof(item.fee_type_s)).c_str());
    loggerOMnet->log(Level, "cust_bank_id_s: {}", std::string(item.cust_bank_id_s,sizeof(item.cust_bank_id_s)).c_str());
    loggerOMnet->log(Level, "acc_state_c: {}", item.acc_state_c);
    loggerOMnet->log(Level, "read_access_c: {}", item.read_access_c);
    loggerOMnet->log(Level, "auto_net_c: {}", item.auto_net_c);
    loggerOMnet->log(Level, "risk_cur_conv_c: {}", item.risk_cur_conv_c);
    loggerOMnet->log(Level, "risk_margin_net_c: {}", item.risk_margin_net_c);
    loggerOMnet->log(Level, "acc_allow_nov_c: {}", item.acc_allow_nov_c);
    loggerOMnet->log(Level, "allow_partial_settlement_c: {}", item.allow_partial_settlement_c);
    loggerOMnet->log(Level, "cash_collateral_interest_c: {}", item.cash_collateral_interest_c);
    loggerOMnet->log(Level, "dd_in_base_c: {}", item.dd_in_base_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const modify_acc_access_type_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const modify_commission_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.party);
    loggerOMnet->log(Level, "account_id_s: {}", std::string(item.account_id_s,sizeof(item.account_id_s)).c_str());
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "user_code_s: {}", std::string(item.user_code_s,sizeof(item.user_code_s)).c_str());
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level, "commission_i: {}", item.commission_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const da18_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "date_non_trading_s: {}", std::string(item.date_non_trading_s,sizeof(item.date_non_trading_s)).c_str());
    loggerOMnet->log(Level, "closed_for_trading_c: {}", item.closed_for_trading_c);
    loggerOMnet->log(Level, "closed_for_settlement_c: {}", item.closed_for_settlement_c);
    loggerOMnet->log(Level, "closed_for_clearing_c: {}", item.closed_for_clearing_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const da50_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "date_non_trading_s: {}", std::string(item.date_non_trading_s,sizeof(item.date_non_trading_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const changes_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "sequence_number_u: {}", item.sequence_number_u);
    loggerOMnet->log(Level, "ob_position_u: {}", item.ob_position_u);
    loggerOMnet->log(Level, "quantity_difference_i: {}", item.quantity_difference_i);
    loggerOMnet->log(Level, "ob_command_c: {}", item.ob_command_c);
    loggerOMnet->log(Level, "change_reason_c: {}", item.change_reason_c);
    loggerOMnet->log(Level, "combo_mark_c: {}", item.combo_mark_c);
    loggerOMnet->log(Level, "mbo_flags_c: {}", item.mbo_flags_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const order_change_separate_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.order_number_u);
    loggerOMnet->log(Level, "mp_quantity_i: {}", item.mp_quantity_i);
    loggerOMnet->log(Level, "total_volume_i: {}", item.total_volume_i);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "change_reason_c: {}", item.change_reason_c);
    loggerOMnet->log(Level, "ex_client_s: {}", std::string(item.ex_client_s,sizeof(item.ex_client_s)).c_str());
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.originator_trading_code);
    print(item.execution_timestamp);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const payment_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.paying_member);
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "amount_q: {}", item.amount_q);
    print(item.currency);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const auth_by_whom_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.trading_code);
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const position_closeout_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.series);
    loggerOMnet->log(Level, "final_held_q: {}", item.final_held_q);
    loggerOMnet->log(Level, "closeout_qty_i: {}", item.closeout_qty_i);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const position_closeout_status_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.series);
    loggerOMnet->log(Level, "final_held_q: {}", item.final_held_q);
    loggerOMnet->log(Level, "closeout_qty_i: {}", item.closeout_qty_i);
    loggerOMnet->log(Level, "closeout_status_i: {}", item.closeout_status_i);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const acc_access_type_key_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const search_series_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "instrument_group_c: {}", item.instrument_group_c);
    loggerOMnet->log(Level, "modifier_c: {}", item.modifier_c);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "expiration_date_n: {}", item.expiration_date_n);
    loggerOMnet->log(Level, "strike_price_i: {}", item.strike_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_collateral_transaction_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "collateral_transaction_state_c: {}", item.collateral_transaction_state_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_settlement_instruction_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "le_state_c: {}", item.le_state_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const other_series_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "instrument_group_c: {}", item.instrument_group_c);
    loggerOMnet->log(Level, "modifier_c: {}", item.modifier_c);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "expiration_date_n: {}", item.expiration_date_n);
    loggerOMnet->log(Level, "strike_price_i: {}", item.strike_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rectify_deal_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "trade_number_i: {}", item.trade_number_i);
    loggerOMnet->log(Level, "trade_quantity_i: {}", item.trade_quantity_i);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "reserved_1_c: {}", item.reserved_1_c);
    loggerOMnet->log(Level, "reserved_2_s: {}", std::string(item.reserved_2_s,sizeof(item.reserved_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rectify_trade_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level, "trade_quantity_i: {}", item.trade_quantity_i);
    loggerOMnet->log(Level, "open_close_req_c: {}", item.open_close_req_c);
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const store_account_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.countersign);
    print(item.prop_trade_account);
    print(item.prop_settlement_account);
    print(item.prop_delivery_account);
    print(item.prop_pos_account);
    print(item.prop_margin_account);
    print(item.sink_account);
    print(item.prop_origin_account);
    print(item.prop_call_account);
    print(item.cash_opt_account);
    loggerOMnet->log(Level, "diary_number_s: {}", std::string(item.diary_number_s,sizeof(item.diary_number_s)).c_str());
    loggerOMnet->log(Level, "acc_type_s: {}", std::string(item.acc_type_s,sizeof(item.acc_type_s)).c_str());
    loggerOMnet->log(Level, "fee_type_s: {}", std::string(item.fee_type_s,sizeof(item.fee_type_s)).c_str());
    loggerOMnet->log(Level, "cust_bank_id_s: {}", std::string(item.cust_bank_id_s,sizeof(item.cust_bank_id_s)).c_str());
    loggerOMnet->log(Level, "risk_cur_id_s: {}", std::string(item.risk_cur_id_s,sizeof(item.risk_cur_id_s)).c_str());
    loggerOMnet->log(Level, "base_cur_id_s: {}", std::string(item.base_cur_id_s,sizeof(item.base_cur_id_s)).c_str());
    loggerOMnet->log(Level, "investor_type_s: {}", std::string(item.investor_type_s,sizeof(item.investor_type_s)).c_str());
    loggerOMnet->log(Level, "nationality_s: {}", std::string(item.nationality_s,sizeof(item.nationality_s)).c_str());
    loggerOMnet->log(Level, "account_text_s: {}", std::string(item.account_text_s,sizeof(item.account_text_s)).c_str());
    loggerOMnet->log(Level, "ext_acc_id_s: {}", std::string(item.ext_acc_id_s,sizeof(item.ext_acc_id_s)).c_str());
    loggerOMnet->log(Level, "ext_acc_controller_s: {}", std::string(item.ext_acc_controller_s,sizeof(item.ext_acc_controller_s)).c_str());
    loggerOMnet->log(Level, "ext_acc_registrar_s: {}", std::string(item.ext_acc_registrar_s,sizeof(item.ext_acc_registrar_s)).c_str());
    loggerOMnet->log(Level, "org_number_s: {}", std::string(item.org_number_s,sizeof(item.org_number_s)).c_str());
    loggerOMnet->log(Level, "account_alias_s: {}", std::string(item.account_alias_s,sizeof(item.account_alias_s)).c_str());
    loggerOMnet->log(Level, "acc_state_c: {}", item.acc_state_c);
    loggerOMnet->log(Level, "read_access_c: {}", item.read_access_c);
    loggerOMnet->log(Level, "auto_net_c: {}", item.auto_net_c);
    loggerOMnet->log(Level, "foreign_holder_c: {}", item.foreign_holder_c);
    loggerOMnet->log(Level, "risk_cur_conv_c: {}", item.risk_cur_conv_c);
    loggerOMnet->log(Level, "margin_net_c: {}", item.margin_net_c);
    loggerOMnet->log(Level, "account_collateral_handling_c: {}", item.account_collateral_handling_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const series_bo_multi_update_bu1009_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "chg_type_n: {}", item.chg_type_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.da9);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const series_multi_update_bu1002_item_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "chg_type_n: {}", item.chg_type_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.da2);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const settle_price_update_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "settle_price_i: {}", item.settle_price_i);
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "settlement_price_type_c: {}", item.settlement_price_type_c);
    loggerOMnet->log(Level, "date_and_time_s: {}", std::string(item.date_and_time_s,sizeof(item.date_and_time_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const set_delta_limit_trans_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.ref_delta_limits);
    print(item.last_delta_limits);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const bid_side_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.trd_rpt_part);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ask_side_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.trd_rpt_part);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const da4_da19_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "subscription_price_i: {}", item.subscription_price_i);
    loggerOMnet->log(Level, "interest_rate_i: {}", item.interest_rate_i);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "com_id_s: {}", std::string(item.com_id_s,sizeof(item.com_id_s)).c_str());
    loggerOMnet->log(Level, "isin_code_s: {}", std::string(item.isin_code_s,sizeof(item.isin_code_s)).c_str());
    loggerOMnet->log(Level, "dec_in_price_n: {}", item.dec_in_price_n);
    loggerOMnet->log(Level, "date_release_s: {}", std::string(item.date_release_s,sizeof(item.date_release_s)).c_str());
    loggerOMnet->log(Level, "date_termination_s: {}", std::string(item.date_termination_s,sizeof(item.date_termination_s)).c_str());
    loggerOMnet->log(Level, "date_dated_s: {}", std::string(item.date_dated_s,sizeof(item.date_dated_s)).c_str());
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "base_cur_s: {}", std::string(item.base_cur_s,sizeof(item.base_cur_s)).c_str());
    loggerOMnet->log(Level, "deliverable_c: {}", item.deliverable_c);
    loggerOMnet->log(Level, "coupon_frequency_n: {}", item.coupon_frequency_n);
    loggerOMnet->log(Level, "nominal_value_q: {}", item.nominal_value_q);
    loggerOMnet->log(Level, "day_count_n: {}", item.day_count_n);
    loggerOMnet->log(Level, "days_in_interest_year_n: {}", item.days_in_interest_year_n);
    loggerOMnet->log(Level, "coupon_interest_i: {}", item.coupon_interest_i);
    loggerOMnet->log(Level, "coupon_settlement_days_n: {}", item.coupon_settlement_days_n);
    loggerOMnet->log(Level, "underlying_type_c: {}", item.underlying_type_c);
    loggerOMnet->log(Level, "price_unit_c: {}", item.price_unit_c);
    loggerOMnet->log(Level, "dec_in_nominal_n: {}", item.dec_in_nominal_n);
    loggerOMnet->log(Level, "state_number_n: {}", item.state_number_n);
    loggerOMnet->log(Level, "linked_commodity_n: {}", item.linked_commodity_n);
    loggerOMnet->log(Level, "fixed_income_type_c: {}", item.fixed_income_type_c);
    loggerOMnet->log(Level, "underlying_status_c: {}", item.underlying_status_c);
    loggerOMnet->log(Level, "underlying_issuer_s: {}", std::string(item.underlying_issuer_s,sizeof(item.underlying_issuer_s)).c_str());
    loggerOMnet->log(Level, "time_delivery_start_s: {}", std::string(item.time_delivery_start_s,sizeof(item.time_delivery_start_s)).c_str());
    loggerOMnet->log(Level, "time_delivery_stop_s: {}", std::string(item.time_delivery_stop_s,sizeof(item.time_delivery_stop_s)).c_str());
    loggerOMnet->log(Level, "sector_code_s: {}", std::string(item.sector_code_s,sizeof(item.sector_code_s)).c_str());
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.coupon);
    loggerOMnet->log(Level, "virtual_c: {}", item.virtual_c);
    loggerOMnet->log(Level, "member_circ_numb_s: {}", std::string(item.member_circ_numb_s,sizeof(item.member_circ_numb_s)).c_str());
    loggerOMnet->log(Level, "inv_scheme_c: {}", item.inv_scheme_c);
    loggerOMnet->log(Level, "date_closing_s: {}", std::string(item.date_closing_s,sizeof(item.date_closing_s)).c_str());
    loggerOMnet->log(Level, "date_last_s: {}", std::string(item.date_last_s,sizeof(item.date_last_s)).c_str());
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "cur_unit_c: {}", item.cur_unit_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const withdraw_collateral_mwa_ssi_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level, "ssi_id_q: {}", item.ssi_id_q);
    loggerOMnet->log(Level, "remaining_collateral_amount_q: {}", item.remaining_collateral_amount_q);
    loggerOMnet->log(Level, "isin_code_s: {}", std::string(item.isin_code_s,sizeof(item.isin_code_s)).c_str());
    loggerOMnet->log(Level, "clh_account_id_s: {}", std::string(item.clh_account_id_s,sizeof(item.clh_account_id_s)).c_str());
    loggerOMnet->log(Level, "passthrough_s: {}", std::string(item.passthrough_s,sizeof(item.passthrough_s)).c_str());
    loggerOMnet->log(Level, "instr_ref_s: {}", std::string(item.instr_ref_s,sizeof(item.instr_ref_s)).c_str());
    loggerOMnet->log(Level, "reason_s: {}", std::string(item.reason_s,sizeof(item.reason_s)).c_str());
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "cm_sim_remaining_type_c: {}", item.cm_sim_remaining_type_c);
    loggerOMnet->log(Level, "dec_in_remaining_amount_n: {}", item.dec_in_remaining_amount_n);
    loggerOMnet->log(Level, "dec_in_amount_n: {}", item.dec_in_amount_n);
    loggerOMnet->log(Level, "collateral_transaction_state_c: {}", item.collateral_transaction_state_c);
    loggerOMnet->log(Level, "collateral_transaction_type_c: {}", item.collateral_transaction_type_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const aat_participant_connection_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.aat_participant);
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "le_state_c: {}", item.le_state_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.trading_code);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const aat_report_connection_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "report_name_s: {}", std::string(item.report_name_s,sizeof(item.report_name_s)).c_str());
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "le_state_c: {}", item.le_state_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.trading_code);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const aat_rg_connection_status_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "connect_type_c: {}", item.connect_type_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const aat_user_connection_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "username_s: {}", std::string(item.username_s,sizeof(item.username_s)).c_str());
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "le_state_c: {}", item.le_state_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.trading_code);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const accept_reject_trade_report_for_clearing_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "trade_report_nbr_q: {}", item.trade_report_nbr_q);
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "confirm_reject_c: {}", item.confirm_reject_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const account_fee_type_update_bu13_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "chg_type_n: {}", item.chg_type_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.da13);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const account_status_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.account);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const account_type_update_bu12_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "chg_type_n: {}", item.chg_type_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.da12);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const account_vim_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const acc_access_type_attributes_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "desc_long_s: {}", std::string(item.desc_long_s,sizeof(item.desc_long_s)).c_str());
    loggerOMnet->log(Level, "allow_all_account_i: {}", item.allow_all_account_i);
    loggerOMnet->log(Level, "version_i: {}", item.version_i);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "le_state_c: {}", item.le_state_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const acc_access_type_itm_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "le_state_c: {}", item.le_state_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.trading_code);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const add_tm_combo_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "no_of_legs_n: {}", item.no_of_legs_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const alter_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_number_u);
    print(item.order_var);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const annul_exercise_req_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "exercise_number_i: {}", item.exercise_number_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_aat_connection_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    loggerOMnet->log(Level, "username_s: {}", std::string(item.username_s,sizeof(item.username_s)).c_str());
    loggerOMnet->log(Level, "version_i: {}", item.version_i);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "le_state_c: {}", item.le_state_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.trading_code);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_aat_connection_participant_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    print(item.aat_participant);
    loggerOMnet->log(Level, "version_i: {}", item.version_i);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "le_state_c: {}", item.le_state_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.trading_code);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_aat_connection_report_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    loggerOMnet->log(Level, "report_name_s: {}", std::string(item.report_name_s,sizeof(item.report_name_s)).c_str());
    loggerOMnet->log(Level, "version_i: {}", item.version_i);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "le_state_c: {}", item.le_state_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.trading_code);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_aat_connection_risk_group_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    loggerOMnet->log(Level, "version_i: {}", item.version_i);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "le_state_c: {}", item.le_state_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.trading_code);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_account_ext_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_account_fee_type_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_account_hdr_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_account_type_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_account_type_rule_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_acc_access_type_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    loggerOMnet->log(Level, "desc_long_s: {}", std::string(item.desc_long_s,sizeof(item.desc_long_s)).c_str());
    loggerOMnet->log(Level, "allow_all_account_i: {}", item.allow_all_account_i);
    loggerOMnet->log(Level, "version_i: {}", item.version_i);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "le_state_c: {}", item.le_state_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_api_delivery_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "from_date_s: {}", std::string(item.from_date_s,sizeof(item.from_date_s)).c_str());
    loggerOMnet->log(Level, "sequence_first_i: {}", item.sequence_first_i);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_api_give_up_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "from_date_s: {}", std::string(item.from_date_s,sizeof(item.from_date_s)).c_str());
    loggerOMnet->log(Level, "sequence_first_i: {}", item.sequence_first_i);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_api_trade_hdr_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "from_date_s: {}", std::string(item.from_date_s,sizeof(item.from_date_s)).c_str());
    loggerOMnet->log(Level, "sequence_first_i: {}", item.sequence_first_i);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_authorized_report_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_average_price_trade_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_bi26_signals_sent_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_bi27_broadcasts_sent_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "items_c: {}", item.items_c);
    print(item.item1);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_bi73_signals_sent_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_bi7_signals_sent_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_block_size_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "max_block_order_size_i: {}", item.max_block_order_size_i);
    loggerOMnet->log(Level, "max_block_price_size_i: {}", item.max_block_price_size_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_broker_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_business_date_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "omex_version_s: {}", std::string(item.omex_version_s,sizeof(item.omex_version_s)).c_str());
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "utc_date_s: {}", std::string(item.utc_date_s,sizeof(item.utc_date_s)).c_str());
    loggerOMnet->log(Level, "utc_time_s: {}", std::string(item.utc_time_s,sizeof(item.utc_time_s)).c_str());
    loggerOMnet->log(Level, "tz_variable_s: {}", std::string(item.tz_variable_s,sizeof(item.tz_variable_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "utc_offset_i: {}", item.utc_offset_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_central_group_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_clearing_date_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "omex_version_s: {}", std::string(item.omex_version_s,sizeof(item.omex_version_s)).c_str());
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_clearing_date_ext_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "omex_version_s: {}", std::string(item.omex_version_s,sizeof(item.omex_version_s)).c_str());
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_closeout_log_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_collateral_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_combo_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_c: {}", item.items_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_commission_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.party);
    loggerOMnet->log(Level, "send_receive_c: {}", item.send_receive_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_conf_give_up_req_items_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_converted_series_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_cool_off_period_ended_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_corp_action_da53_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_create_flexible_deriv_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_currency_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_currency_ranking_connections_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_deal_source_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_delivery_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_delta_limit_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_dh_margin_components_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "margin_time_s: {}", std::string(item.margin_time_s,sizeof(item.margin_time_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "sequence_number_n: {}", item.sequence_number_n);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level, "run_type_c: {}", item.run_type_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_dh_margin_components_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level, "scanning_risk_q: {}", item.scanning_risk_q);
    loggerOMnet->log(Level, "inter_month_spread_charge_q: {}", item.inter_month_spread_charge_q);
    loggerOMnet->log(Level, "delivery_charge_q: {}", item.delivery_charge_q);
    loggerOMnet->log(Level, "dh_inter_com_spread_credit_q: {}", item.dh_inter_com_spread_credit_q);
    loggerOMnet->log(Level, "short_option_minimum_charge_q: {}", item.short_option_minimum_charge_q);
    loggerOMnet->log(Level, "premium_margin_q: {}", item.premium_margin_q);
    loggerOMnet->log(Level, "opt_premium_margin_q: {}", item.opt_premium_margin_q);
    loggerOMnet->log(Level, "var_margin_q: {}", item.var_margin_q);
    loggerOMnet->log(Level, "cco_id_s: {}", std::string(item.cco_id_s,sizeof(item.cco_id_s)).c_str());
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "risk_type_used_c: {}", item.risk_type_used_c);
    loggerOMnet->log(Level, "filler_6_s: {}", std::string(item.filler_6_s,sizeof(item.filler_6_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_error_msg_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_etpr_delta_limit_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_exception_days_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_exchange_da24_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_exchange_rate_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_exercise_req_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_fixing_dates_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_fixing_val_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_give_up_request_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_greeks_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "marg_run_nbr_n: {}", item.marg_run_nbr_n);
    loggerOMnet->log(Level, "marg_call_nbr_n: {}", item.marg_call_nbr_n);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "filler_6_s: {}", std::string(item.filler_6_s,sizeof(item.filler_6_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_haircut_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_hdr_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_instrument_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_instrument_class_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_instrument_group_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_instrument_status_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_limit_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_list_ver_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "info_type_i: {}", item.info_type_i);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "list_name_s: {}", std::string(item.list_name_s,sizeof(item.list_name_s)).c_str());
    loggerOMnet->log(Level, "report_version_s: {}", std::string(item.report_version_s,sizeof(item.report_version_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "file_type_s: {}", std::string(item.file_type_s,sizeof(item.file_type_s)).c_str());
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "text_buffer_s: {}", std::string(item.text_buffer_s,sizeof(item.text_buffer_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_list_ver_nrs_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "buffer_length_n: {}", item.buffer_length_n);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "file_name_s: {}", std::string(item.file_name_s,sizeof(item.file_name_s)).c_str());
    loggerOMnet->log(Level, "report_no_i: {}", item.report_no_i);
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "report_spec_s: {}", std::string(item.report_spec_s,sizeof(item.report_spec_s)).c_str());
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "report_version_s: {}", std::string(item.report_version_s,sizeof(item.report_version_s)).c_str());
    loggerOMnet->log(Level, "ascii_bin_c: {}", item.ascii_bin_c);
    print(item.data_buffer_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_manual_payments_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_marginable_spread_status_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "rejected_items_n: {}", item.rejected_items_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_marginable_spread_status_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.series);
    loggerOMnet->log(Level, "spread_status_c: {}", item.spread_status_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_acc_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_data_used_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "marg_run_nbr_n: {}", item.marg_run_nbr_n);
    loggerOMnet->log(Level, "marg_call_nbr_n: {}", item.marg_call_nbr_n);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "filler_6_s: {}", std::string(item.filler_6_s,sizeof(item.filler_6_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_detail_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "marg_run_nbr_n: {}", item.marg_run_nbr_n);
    loggerOMnet->log(Level, "marg_call_nbr_n: {}", item.marg_call_nbr_n);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "filler_6_s: {}", std::string(item.filler_6_s,sizeof(item.filler_6_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_ext_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_mem_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_pa_acc_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_prop_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "marg_run_nbr_n: {}", item.marg_run_nbr_n);
    loggerOMnet->log(Level, "marg_call_nbr_n: {}", item.marg_call_nbr_n);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "filler_6_s: {}", std::string(item.filler_6_s,sizeof(item.filler_6_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_requirement_account_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "margin_time_s: {}", std::string(item.margin_time_s,sizeof(item.margin_time_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "sequence_number_n: {}", item.sequence_number_n);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level, "run_type_c: {}", item.run_type_c);
    loggerOMnet->log(Level, "incl_t_plus_one_prices_c: {}", item.incl_t_plus_one_prices_c);
    print(item.price_collection_id);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_results_internal_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "sequence_number_n: {}", item.sequence_number_n);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_series_param_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_series_param_ext_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "marg_run_nbr_n: {}", item.marg_run_nbr_n);
    loggerOMnet->log(Level, "marg_call_nbr_n: {}", item.marg_call_nbr_n);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "filler_6_s: {}", std::string(item.filler_6_s,sizeof(item.filler_6_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_margin_ulg_price_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_marg_calc_runs_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_marg_sim_add_trade_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_market_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_member_obligation_da57_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_missing_delivery_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_missing_give_up_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_missing_trade_change_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_missing_trade_hdr_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_mm_protection_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_next_series_hdr_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.next_series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_non_trading_days_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_non_trad_settl_days_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_open_interest_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_open_interest_ext_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_order_hdr_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.next_series);
    print(item.next_order_number_u);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_partition_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_paynote_info_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_position_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_position_history_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.partition_low);
    print(item.partition_high);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "nbr_held_q: {}", item.nbr_held_q);
    loggerOMnet->log(Level, "nbr_written_q: {}", item.nbr_written_q);
    loggerOMnet->log(Level, "qty_closed_out_q: {}", item.qty_closed_out_q);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_prel_settlement_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_price_limit_trigger_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_propagate_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_realtime_ulg_price_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_rectify_d_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "reserved_2_s: {}", std::string(item.reserved_2_s,sizeof(item.reserved_2_s)).c_str());
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_rectify_d_cont_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_rectify_ext_cont_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_rectify_t_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "reserved_2_s: {}", std::string(item.reserved_2_s,sizeof(item.reserved_2_s)).c_str());
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "instance_next_c: {}", item.instance_next_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_report_nrs_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_report_ver_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_risk_margin_scaling_factor_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_rm_margin_sim_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "segment_number_out_n: {}", item.segment_number_out_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_rm_param_obj_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "sequence_number_n: {}", item.sequence_number_n);
    loggerOMnet->log(Level, "margin_date_s: {}", std::string(item.margin_date_s,sizeof(item.margin_date_s)).c_str());
    loggerOMnet->log(Level, "margin_time_s: {}", std::string(item.margin_time_s,sizeof(item.margin_time_s)).c_str());
    loggerOMnet->log(Level, "run_type_c: {}", item.run_type_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_segment_hdr_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_seg_hdr_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_series_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_series_bo_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "date_trading_s: {}", std::string(item.date_trading_s,sizeof(item.date_trading_s)).c_str());
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_state_type_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_tot_equil_prices_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "instance_c: {}", item.instance_c);
    loggerOMnet->log(Level, "instance_next_c: {}", item.instance_next_c);
    print(item.series_next);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_tot_ob_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_number_u);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_tot_order_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "order_index_u: {}", item.order_index_u);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_trade_report_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_trade_report_types_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_trade_statistics_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_trading_state_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_trd_report_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "order_index_u: {}", item.order_index_u);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_trd_report_party_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_number_u);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_underlying_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_underlying_adjustment_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_updated_pos_info_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.partition_low);
    print(item.partition_high);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_used_marg_params_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "sequence_number_n: {}", item.sequence_number_n);
    loggerOMnet->log(Level, "margin_date_s: {}", std::string(item.margin_date_s,sizeof(item.margin_date_s)).c_str());
    loggerOMnet->log(Level, "margin_time_s: {}", std::string(item.margin_time_s,sizeof(item.margin_time_s)).c_str());
    loggerOMnet->log(Level, "run_type_c: {}", item.run_type_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_user_type_info_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "ust_id_s: {}", std::string(item.ust_id_s,sizeof(item.ust_id_s)).c_str());
    loggerOMnet->log(Level, "ext_or_int_c: {}", item.ext_or_int_c);
    loggerOMnet->log(Level, "is_trader_c: {}", item.is_trader_c);
    loggerOMnet->log(Level, "program_trader_c: {}", item.program_trader_c);
    loggerOMnet->log(Level, "trader_authorization_c: {}", item.trader_authorization_c);
    loggerOMnet->log(Level, "hide_firm_order_trade_c: {}", item.hide_firm_order_trade_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const answer_valuation_group_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const application_status_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "application_status_i: {}", item.application_status_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const average_price_trade_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const base_call_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "base_collateral_req_q: {}", item.base_collateral_req_q);
    loggerOMnet->log(Level, "adjusted_base_collateral_req_q: {}", item.adjusted_base_collateral_req_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const basic_order_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "premium_i: {}", item.premium_i);
    loggerOMnet->log(Level, "quantity_i: {}", item.quantity_i);
    loggerOMnet->log(Level, "block_n: {}", item.block_n);
    loggerOMnet->log(Level, "time_validity_n: {}", item.time_validity_n);
    loggerOMnet->log(Level, "exch_order_type_n: {}", item.exch_order_type_n);
    loggerOMnet->log(Level, "order_type_c: {}", item.order_type_c);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const basic_order_book_order_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.owner);
    print(item.give_up_member);
    print(item.order_number_u);
    print(item.timestamp_in);
    print(item.timestamp_created);
    loggerOMnet->log(Level, "sequence_number_u: {}", item.sequence_number_u);
    loggerOMnet->log(Level, "ob_position_u: {}", item.ob_position_u);
    loggerOMnet->log(Level, "premium_i: {}", item.premium_i);
    loggerOMnet->log(Level, "quantity_i: {}", item.quantity_i);
    loggerOMnet->log(Level, "original_quantity_i: {}", item.original_quantity_i);
    loggerOMnet->log(Level, "block_n: {}", item.block_n);
    loggerOMnet->log(Level, "time_validity_n: {}", item.time_validity_n);
    loggerOMnet->log(Level, "exch_order_type_n: {}", item.exch_order_type_n);
    loggerOMnet->log(Level, "transaction_number_n: {}", item.transaction_number_n);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level, "ex_client_s: {}", std::string(item.ex_client_s,sizeof(item.ex_client_s)).c_str());
    loggerOMnet->log(Level, "open_close_req_c: {}", item.open_close_req_c);
    loggerOMnet->log(Level, "order_type_c: {}", item.order_type_c);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "change_reason_c: {}", item.change_reason_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const basic_order_update_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "premium_i: {}", item.premium_i);
    loggerOMnet->log(Level, "quantity_i: {}", item.quantity_i);
    loggerOMnet->log(Level, "balance_quantity_i: {}", item.balance_quantity_i);
    loggerOMnet->log(Level, "time_validity_n: {}", item.time_validity_n);
    loggerOMnet->log(Level, "exch_order_type_n: {}", item.exch_order_type_n);
    loggerOMnet->log(Level, "delta_quantity_c: {}", item.delta_quantity_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const basic_trade_ticker_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.timestamp_match);
    print(item.time_of_publication);
    loggerOMnet->log(Level, "execution_event_nbr_u: {}", item.execution_event_nbr_u);
    loggerOMnet->log(Level, "match_group_nbr_u: {}", item.match_group_nbr_u);
    loggerOMnet->log(Level, "deal_quantity_i: {}", item.deal_quantity_i);
    loggerOMnet->log(Level, "deal_price_i: {}", item.deal_price_i);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "aggressive: {}", item.aggressive);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const bdx_cl_otc_trade_op_on_hold_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const bdx_marg_calc_runs_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const bi84_bdx_info_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "sequence_number_u: {}", item.sequence_number_u);
    loggerOMnet->log(Level, "sent_date_s: {}", std::string(item.sent_date_s,sizeof(item.sent_date_s)).c_str());
    loggerOMnet->log(Level, "sent_time_s: {}", std::string(item.sent_time_s,sizeof(item.sent_time_s)).c_str());
    print(item.user_code);
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "host_name_s: {}", std::string(item.host_name_s,sizeof(item.host_name_s)).c_str());
    loggerOMnet->log(Level, "event_status_i: {}", item.event_status_i);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const block_order_response_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    print(item.order_number_u);
    loggerOMnet->log(Level, "items_c: {}", item.items_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const block_order_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.give_up_member);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "items_c: {}", item.items_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const block_order_trans_p_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.trading_code);
    print(item.give_up_member);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "items_c: {}", item.items_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const block_price_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.give_up_member);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level, "items_c: {}", item.items_c);
    loggerOMnet->log(Level, "stp_key_i: {}", item.stp_key_i);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const block_price_trans_p_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.trading_code);
    print(item.give_up_member);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level, "items_c: {}", item.items_c);
    loggerOMnet->log(Level, "stp_key_i: {}", item.stp_key_i);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const block_unblock_ptlg_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "ptl_id_s: {}", std::string(item.ptl_id_s,sizeof(item.ptl_id_s)).c_str());
    loggerOMnet->log(Level, "ptl_blocked_c: {}", item.ptl_blocked_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const broadcast_hdr_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const broadcast_segment_hdr_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const broker_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_var);
    print(item.party);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const broker_trans_p_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.trading_code);
    print(item.order_var);
    print(item.party);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cancel_trade_report_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "trade_report_nbr_q: {}", item.trade_report_nbr_q);
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "confirm_reject_c: {}", item.confirm_reject_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cash_collateral_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.collateral_base);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const central_group_update_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "chg_type_n: {}", item.chg_type_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.da28);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const change_account_state_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "acc_state_c: {}", item.acc_state_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const clearing_house_account_light_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "clh_account_id_s: {}", std::string(item.clh_account_id_s,sizeof(item.clh_account_id_s)).c_str());
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "bank_name_s: {}", std::string(item.bank_name_s,sizeof(item.bank_name_s)).c_str());
    loggerOMnet->log(Level, "bic_code_s: {}", std::string(item.bic_code_s,sizeof(item.bic_code_s)).c_str());
    loggerOMnet->log(Level, "account_number_s: {}", std::string(item.account_number_s,sizeof(item.account_number_s)).c_str());
    loggerOMnet->log(Level, "account_name_s: {}", std::string(item.account_name_s,sizeof(item.account_name_s)).c_str());
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const clearing_info_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.give_up_member);
    loggerOMnet->log(Level, "ex_client_s: {}", std::string(item.ex_client_s,sizeof(item.ex_client_s)).c_str());
    loggerOMnet->log(Level, "open_close_req_c: {}", item.open_close_req_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const clearing_message_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "broadcast_number_n: {}", item.broadcast_number_n);
    loggerOMnet->log(Level, "yyyymmdd_s: {}", std::string(item.yyyymmdd_s,sizeof(item.yyyymmdd_s)).c_str());
    loggerOMnet->log(Level, "hhmmss_s: {}", std::string(item.hhmmss_s,sizeof(item.hhmmss_s)).c_str());
    loggerOMnet->log(Level, "country_c: {}", item.country_c);
    loggerOMnet->log(Level, "market_c: {}", item.market_c);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cl_account_base_api_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.countersign);
    print(item.prop_trade_account);
    print(item.prop_settlement_account);
    print(item.prop_pos_account);
    print(item.prop_margin_account);
    print(item.sink_account);
    print(item.prop_origin_account);
    print(item.prop_call_account);
    print(item.prop_delivery_account);
    loggerOMnet->log(Level, "member_exposure_limit_q: {}", item.member_exposure_limit_q);
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "investor_type_s: {}", std::string(item.investor_type_s,sizeof(item.investor_type_s)).c_str());
    loggerOMnet->log(Level, "nationality_s: {}", std::string(item.nationality_s,sizeof(item.nationality_s)).c_str());
    loggerOMnet->log(Level, "account_text_s: {}", std::string(item.account_text_s,sizeof(item.account_text_s)).c_str());
    loggerOMnet->log(Level, "org_number_s: {}", std::string(item.org_number_s,sizeof(item.org_number_s)).c_str());
    loggerOMnet->log(Level, "account_alias_s: {}", std::string(item.account_alias_s,sizeof(item.account_alias_s)).c_str());
    loggerOMnet->log(Level, "diary_number_s: {}", std::string(item.diary_number_s,sizeof(item.diary_number_s)).c_str());
    loggerOMnet->log(Level, "acc_type_s: {}", std::string(item.acc_type_s,sizeof(item.acc_type_s)).c_str());
    loggerOMnet->log(Level, "fee_type_s: {}", std::string(item.fee_type_s,sizeof(item.fee_type_s)).c_str());
    loggerOMnet->log(Level, "cust_bank_id_s: {}", std::string(item.cust_bank_id_s,sizeof(item.cust_bank_id_s)).c_str());
    loggerOMnet->log(Level, "acc_state_c: {}", item.acc_state_c);
    loggerOMnet->log(Level, "read_access_c: {}", item.read_access_c);
    loggerOMnet->log(Level, "auto_net_c: {}", item.auto_net_c);
    loggerOMnet->log(Level, "acc_allow_nov_c: {}", item.acc_allow_nov_c);
    loggerOMnet->log(Level, "auto_take_up_c: {}", item.auto_take_up_c);
    loggerOMnet->log(Level, "foreign_holder_c: {}", item.foreign_holder_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cl_account_base_collateral_api_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.base_collateral_account);
    loggerOMnet->log(Level, "bc_adjustment_factor_i: {}", item.bc_adjustment_factor_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cl_account_collateral_attribute_api_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.cash_opt_account);
    loggerOMnet->log(Level, "base_cur_id_s: {}", std::string(item.base_cur_id_s,sizeof(item.base_cur_id_s)).c_str());
    loggerOMnet->log(Level, "account_collateral_handling_c: {}", item.account_collateral_handling_c);
    loggerOMnet->log(Level, "cash_collateral_interest_c: {}", item.cash_collateral_interest_c);
    loggerOMnet->log(Level, "dd_in_base_c: {}", item.dd_in_base_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cl_account_intraday_funding_api_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.intraday_funding_account);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cl_account_non_ccp_margin_api_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.prop_non_ccp_margin_account);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cl_account_risk_attribute_api_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "rank_class_i: {}", item.rank_class_i);
    loggerOMnet->log(Level, "risk_currency_s: {}", std::string(item.risk_currency_s,sizeof(item.risk_currency_s)).c_str());
    loggerOMnet->log(Level, "risk_cur_conv_c: {}", item.risk_cur_conv_c);
    loggerOMnet->log(Level, "risk_margin_net_c: {}", item.risk_margin_net_c);
    loggerOMnet->log(Level, "margin_class_s: {}", std::string(item.margin_class_s,sizeof(item.margin_class_s)).c_str());
    loggerOMnet->log(Level, "risk_scale_s: {}", std::string(item.risk_scale_s,sizeof(item.risk_scale_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cl_account_settlement_attribute_api_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "allow_partial_settlement_c: {}", item.allow_partial_settlement_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cl_otc_operation_info_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "cl_otc_trade_operation_c: {}", item.cl_otc_trade_operation_c);
    loggerOMnet->log(Level, "le_state_c: {}", item.le_state_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "orig_deal_number_i: {}", item.orig_deal_number_i);
    print(item.series);
    loggerOMnet->log(Level, "sequence_number_i: {}", item.sequence_number_i);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "tx_status_i: {}", item.tx_status_i);
    print(item.trading_code);
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cl_otc_trade_operation_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.pos_account);
    loggerOMnet->log(Level, "orig_trade_number_i: {}", item.orig_trade_number_i);
    loggerOMnet->log(Level, "trade_type_c: {}", item.trade_type_c);
    loggerOMnet->log(Level, "trade_report_reason_c: {}", item.trade_report_reason_c);
    loggerOMnet->log(Level, "buy_sell_c: {}", item.buy_sell_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "trade_quantity_i: {}", item.trade_quantity_i);
    loggerOMnet->log(Level, "total_surplus_deficit_q: {}", item.total_surplus_deficit_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cl_trade_base_api_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.trading_code);
    print(item.series);
    print(item.give_up_member);
    print(item.order_number_u);
    loggerOMnet->log(Level, "sequence_number_i: {}", item.sequence_number_i);
    loggerOMnet->log(Level, "trade_number_i: {}", item.trade_number_i);
    loggerOMnet->log(Level, "deal_price_i: {}", item.deal_price_i);
    loggerOMnet->log(Level, "trade_quantity_i: {}", item.trade_quantity_i);
    print(item.account);
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level, "bought_or_sold_c: {}", item.bought_or_sold_c);
    loggerOMnet->log(Level, "deal_source_c: {}", item.deal_source_c);
    loggerOMnet->log(Level, "open_close_req_c: {}", item.open_close_req_c);
    loggerOMnet->log(Level, "trade_type_c: {}", item.trade_type_c);
    loggerOMnet->log(Level, "le_state_c: {}", item.le_state_c);
    print(item.user_code);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "asof_date_s: {}", std::string(item.asof_date_s,sizeof(item.asof_date_s)).c_str());
    loggerOMnet->log(Level, "asof_time_s: {}", std::string(item.asof_time_s,sizeof(item.asof_time_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "trade_state_c: {}", item.trade_state_c);
    loggerOMnet->log(Level, "attention_c: {}", item.attention_c);
    loggerOMnet->log(Level, "deal_number_i: {}", item.deal_number_i);
    loggerOMnet->log(Level, "global_deal_no_u: {}", item.global_deal_no_u);
    loggerOMnet->log(Level, "orig_trade_number_i: {}", item.orig_trade_number_i);
    print(item.orig_series);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "big_attention_u: {}", item.big_attention_u);
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    print(item.execution_timestamp);
    loggerOMnet->log(Level, "trade_venue_c: {}", item.trade_venue_c);
    loggerOMnet->log(Level, "instance_c: {}", item.instance_c);
    loggerOMnet->log(Level, "exch_order_type_n: {}", item.exch_order_type_n);
    print(item.party);
    loggerOMnet->log(Level, "trade_rep_code_n: {}", item.trade_rep_code_n);
    loggerOMnet->log(Level, "state_number_n: {}", item.state_number_n);
    print(item.match_id);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cl_trade_secur_part_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.countersign_code);
    print(item.new_series);
    print(item.party);
    print(item.pos_account);
    print(item.combo_series);
    loggerOMnet->log(Level, "nbr_held_q: {}", item.nbr_held_q);
    loggerOMnet->log(Level, "nbr_written_q: {}", item.nbr_written_q);
    loggerOMnet->log(Level, "total_held_q: {}", item.total_held_q);
    loggerOMnet->log(Level, "total_written_q: {}", item.total_written_q);
    loggerOMnet->log(Level, "ext_seq_nbr_i: {}", item.ext_seq_nbr_i);
    loggerOMnet->log(Level, "ext_status_i: {}", item.ext_status_i);
    loggerOMnet->log(Level, "rem_quantity_i: {}", item.rem_quantity_i);
    loggerOMnet->log(Level, "quantity_i: {}", item.quantity_i);
    loggerOMnet->log(Level, "ext_trade_number_u: {}", item.ext_trade_number_u);
    loggerOMnet->log(Level, "orig_ext_trade_number_u: {}", item.orig_ext_trade_number_u);
    loggerOMnet->log(Level, "residual_i: {}", item.residual_i);
    loggerOMnet->log(Level, "give_up_number_i: {}", item.give_up_number_i);
    loggerOMnet->log(Level, "commission_i: {}", item.commission_i);
    loggerOMnet->log(Level, "combo_deal_price_i: {}", item.combo_deal_price_i);
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "passthrough_s: {}", std::string(item.passthrough_s,sizeof(item.passthrough_s)).c_str());
    loggerOMnet->log(Level, "ex_client_s: {}", std::string(item.ex_client_s,sizeof(item.ex_client_s)).c_str());
    loggerOMnet->log(Level, "ext_trade_fee_type_c: {}", item.ext_trade_fee_type_c);
    loggerOMnet->log(Level, "give_up_state_c: {}", item.give_up_state_c);
    loggerOMnet->log(Level, "reserved_2_s: {}", std::string(item.reserved_2_s,sizeof(item.reserved_2_s)).c_str());
    loggerOMnet->log(Level, "orig_trade_type_c: {}", item.orig_trade_type_c);
    loggerOMnet->log(Level, "open_close_c: {}", item.open_close_c);
    loggerOMnet->log(Level, "reserved_1_c: {}", item.reserved_1_c);
    loggerOMnet->log(Level, "client_category_c: {}", item.client_category_c);
    loggerOMnet->log(Level, "instigant_c: {}", item.instigant_c);
    loggerOMnet->log(Level, "cab_price_ind_c: {}", item.cab_price_ind_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cl_trade_source_series_api_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.source_series);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cl_trade_trade_report_api_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "time_of_agreement_date_s: {}", std::string(item.time_of_agreement_date_s,sizeof(item.time_of_agreement_date_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_time_s: {}", std::string(item.time_of_agreement_time_s,sizeof(item.time_of_agreement_time_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cl_transfer_position_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    print(item.new_account);
    loggerOMnet->log(Level, "nbr_held_q: {}", item.nbr_held_q);
    loggerOMnet->log(Level, "nbr_written_q: {}", item.nbr_written_q);
    loggerOMnet->log(Level, "open_close_req_c: {}", item.open_close_req_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cm_collateral_mwa_info_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "remaining_collateral_amount_q: {}", item.remaining_collateral_amount_q);
    loggerOMnet->log(Level, "cm_sim_remaining_type_c: {}", item.cm_sim_remaining_type_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cm_collateral_sim_failure_reason_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "failure_reason_s: {}", std::string(item.failure_reason_s,sizeof(item.failure_reason_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cm_collateral_sim_result_sgx_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "collateral_amount_q: {}", item.collateral_amount_q);
    loggerOMnet->log(Level, "dec_in_amount_n: {}", item.dec_in_amount_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cm_collateral_sim_sgx_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "remaining_collateral_amount_q: {}", item.remaining_collateral_amount_q);
    loggerOMnet->log(Level, "isin_code_s: {}", std::string(item.isin_code_s,sizeof(item.isin_code_s)).c_str());
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "cm_sim_remaining_type_c: {}", item.cm_sim_remaining_type_c);
    loggerOMnet->log(Level, "dec_in_remaining_amount_n: {}", item.dec_in_remaining_amount_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const collateral_evaluation_run_info_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level, "request_nbr_u: {}", item.request_nbr_u);
    loggerOMnet->log(Level, "margin_sequence_nbr_u: {}", item.margin_sequence_nbr_u);
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "valuation_date_s: {}", std::string(item.valuation_date_s,sizeof(item.valuation_date_s)).c_str());
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "margin_date_s: {}", std::string(item.margin_date_s,sizeof(item.margin_date_s)).c_str());
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "ca_batch_isin_code_s: {}", std::string(item.ca_batch_isin_code_s,sizeof(item.ca_batch_isin_code_s)).c_str());
    loggerOMnet->log(Level, "is_intraday_c: {}", item.is_intraday_c);
    loggerOMnet->log(Level, "collateral_state_c: {}", item.collateral_state_c);
    loggerOMnet->log(Level, "is_final_c: {}", item.is_final_c);
    loggerOMnet->log(Level, "collateral_evaluation_type_c: {}", item.collateral_evaluation_type_c);
    loggerOMnet->log(Level, "create_direct_debit_c: {}", item.create_direct_debit_c);
    loggerOMnet->log(Level, "coll_payment_state_c: {}", item.coll_payment_state_c);
    loggerOMnet->log(Level, "intraday_evaluation_c: {}", item.intraday_evaluation_c);
    loggerOMnet->log(Level, "collateral_transaction_state_c: {}", item.collateral_transaction_state_c);
    loggerOMnet->log(Level, "trigger_new_margin_calc_c: {}", item.trigger_new_margin_calc_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const collateral_information_base_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.margin_account);
    print(item.currency);
    print(item.base_currency);
    loggerOMnet->log(Level, "initial_margin_req_q: {}", item.initial_margin_req_q);
    loggerOMnet->log(Level, "variation_margin_req_q: {}", item.variation_margin_req_q);
    loggerOMnet->log(Level, "contingent_variation_margin_req_q: {}", item.contingent_variation_margin_req_q);
    loggerOMnet->log(Level, "margin_maintenance_q: {}", item.margin_maintenance_q);
    loggerOMnet->log(Level, "margin_extraordinary_q: {}", item.margin_extraordinary_q);
    loggerOMnet->log(Level, "margin_total_q: {}", item.margin_total_q);
    loggerOMnet->log(Level, "collateral_guarantee_q: {}", item.collateral_guarantee_q);
    loggerOMnet->log(Level, "collateral_cash_q: {}", item.collateral_cash_q);
    loggerOMnet->log(Level, "collateral_security_q: {}", item.collateral_security_q);
    loggerOMnet->log(Level, "total_surplus_deficit_q: {}", item.total_surplus_deficit_q);
    loggerOMnet->log(Level, "total_margin_req_q: {}", item.total_margin_req_q);
    loggerOMnet->log(Level, "collateral_fixed_income_q: {}", item.collateral_fixed_income_q);
    loggerOMnet->log(Level, "collateral_equity_q: {}", item.collateral_equity_q);
    loggerOMnet->log(Level, "otcf_margin_q: {}", item.otcf_margin_q);
    loggerOMnet->log(Level, "otcf_additional_margin_q: {}", item.otcf_additional_margin_q);
    loggerOMnet->log(Level, "otcf_settlement_variation_q: {}", item.otcf_settlement_variation_q);
    loggerOMnet->log(Level, "external_margin_req_q: {}", item.external_margin_req_q);
    loggerOMnet->log(Level, "settlement_requirement_q: {}", item.settlement_requirement_q);
    loggerOMnet->log(Level, "collateral_cash_after_settlement_q: {}", item.collateral_cash_after_settlement_q);
    loggerOMnet->log(Level, "additional_margin_req_q: {}", item.additional_margin_req_q);
    loggerOMnet->log(Level, "pai_q: {}", item.pai_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const collateral_information_default_fund_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "margin_mutual_fund_q: {}", item.margin_mutual_fund_q);
    loggerOMnet->log(Level, "margin_default_fund_q: {}", item.margin_default_fund_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const collateral_information_payment_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "adjusted_collateral_cash_q: {}", item.adjusted_collateral_cash_q);
    loggerOMnet->log(Level, "cash_collateral_limit_q: {}", item.cash_collateral_limit_q);
    loggerOMnet->log(Level, "settlement_requirement_q: {}", item.settlement_requirement_q);
    loggerOMnet->log(Level, "collateral_cash_after_settlement_q: {}", item.collateral_cash_after_settlement_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const collateral_information_payment_delivery_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "payment_margin_valuation_date_q: {}", item.payment_margin_valuation_date_q);
    loggerOMnet->log(Level, "payment_margin_future_date_q: {}", item.payment_margin_future_date_q);
    loggerOMnet->log(Level, "delivery_margin_valuation_date_q: {}", item.delivery_margin_valuation_date_q);
    loggerOMnet->log(Level, "payment_margin_overdue_q: {}", item.payment_margin_overdue_q);
    loggerOMnet->log(Level, "delivery_margin_overdue_q: {}", item.delivery_margin_overdue_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const collateral_info_sgx_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.trading_code);
    print(item.user_code);
    loggerOMnet->log(Level, "collateral_nbr_q: {}", item.collateral_nbr_q);
    loggerOMnet->log(Level, "version_n: {}", item.version_n);
    loggerOMnet->log(Level, "timestamp_date_s: {}", std::string(item.timestamp_date_s,sizeof(item.timestamp_date_s)).c_str());
    loggerOMnet->log(Level, "timestamp_time_s: {}", std::string(item.timestamp_time_s,sizeof(item.timestamp_time_s)).c_str());
    loggerOMnet->log(Level, "asof_date_s: {}", std::string(item.asof_date_s,sizeof(item.asof_date_s)).c_str());
    loggerOMnet->log(Level, "asof_time_s: {}", std::string(item.asof_time_s,sizeof(item.asof_time_s)).c_str());
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "collateral_type_c: {}", item.collateral_type_c);
    loggerOMnet->log(Level, "state_c: {}", item.state_c);
    loggerOMnet->log(Level, "preliminary_amount_q: {}", item.preliminary_amount_q);
    loggerOMnet->log(Level, "dec_in_amount_n: {}", item.dec_in_amount_n);
    loggerOMnet->log(Level, "isin_code_s: {}", std::string(item.isin_code_s,sizeof(item.isin_code_s)).c_str());
    loggerOMnet->log(Level, "collateral_series_expired_c: {}", item.collateral_series_expired_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const collateral_payment_transaction_recon_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "total_sum_debit_q: {}", item.total_sum_debit_q);
    loggerOMnet->log(Level, "total_sum_credit_q: {}", item.total_sum_credit_q);
    loggerOMnet->log(Level, "sum_debit_bank_q: {}", item.sum_debit_bank_q);
    loggerOMnet->log(Level, "sum_credit_bank_q: {}", item.sum_credit_bank_q);
    loggerOMnet->log(Level, "sum_debit_internal_transfer_q: {}", item.sum_debit_internal_transfer_q);
    loggerOMnet->log(Level, "sum_credit_internal_transfer_q: {}", item.sum_credit_internal_transfer_q);
    loggerOMnet->log(Level, "sum_debit_cash_settlement_q: {}", item.sum_debit_cash_settlement_q);
    loggerOMnet->log(Level, "sum_credit_cash_settlement_q: {}", item.sum_credit_cash_settlement_q);
    loggerOMnet->log(Level, "total_nbr_of_debit_u: {}", item.total_nbr_of_debit_u);
    loggerOMnet->log(Level, "total_nbr_of_credit_u: {}", item.total_nbr_of_credit_u);
    loggerOMnet->log(Level, "nbr_of_debit_bank_u: {}", item.nbr_of_debit_bank_u);
    loggerOMnet->log(Level, "nbr_of_credit_bank_u: {}", item.nbr_of_credit_bank_u);
    loggerOMnet->log(Level, "nbr_of_debit_internal_transfer_u: {}", item.nbr_of_debit_internal_transfer_u);
    loggerOMnet->log(Level, "nbr_of_credit_internal_transfer_u: {}", item.nbr_of_credit_internal_transfer_u);
    loggerOMnet->log(Level, "nbr_of_debit_cash_settlement_u: {}", item.nbr_of_debit_cash_settlement_u);
    loggerOMnet->log(Level, "nbr_of_credit_cash_settlement_u: {}", item.nbr_of_credit_cash_settlement_u);
    loggerOMnet->log(Level, "request_nbr_u: {}", item.request_nbr_u);
    loggerOMnet->log(Level, "dec_in_amount_n: {}", item.dec_in_amount_n);
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "instr_ref_s: {}", std::string(item.instr_ref_s,sizeof(item.instr_ref_s)).c_str());
    loggerOMnet->log(Level, "ext_confirm_c: {}", item.ext_confirm_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const collateral_transaction_base_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.collateral_account);
    print(item.collateral_account_party);
    loggerOMnet->log(Level, "amount_q: {}", item.amount_q);
    loggerOMnet->log(Level, "gross_amount_q: {}", item.gross_amount_q);
    loggerOMnet->log(Level, "collateral_transaction_nbr_q: {}", item.collateral_transaction_nbr_q);
    loggerOMnet->log(Level, "instruction_nbr_u: {}", item.instruction_nbr_u);
    loggerOMnet->log(Level, "coll_payment_nbr_u: {}", item.coll_payment_nbr_u);
    loggerOMnet->log(Level, "ext_coll_payment_nbr_u: {}", item.ext_coll_payment_nbr_u);
    loggerOMnet->log(Level, "request_nbr_u: {}", item.request_nbr_u);
    loggerOMnet->log(Level, "version_n: {}", item.version_n);
    loggerOMnet->log(Level, "dec_in_amount_n: {}", item.dec_in_amount_n);
    loggerOMnet->log(Level, "valuation_date_s: {}", std::string(item.valuation_date_s,sizeof(item.valuation_date_s)).c_str());
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "isin_code_s: {}", std::string(item.isin_code_s,sizeof(item.isin_code_s)).c_str());
    loggerOMnet->log(Level, "instr_ref_s: {}", std::string(item.instr_ref_s,sizeof(item.instr_ref_s)).c_str());
    loggerOMnet->log(Level, "reason_s: {}", std::string(item.reason_s,sizeof(item.reason_s)).c_str());
    loggerOMnet->log(Level, "passthrough_s: {}", std::string(item.passthrough_s,sizeof(item.passthrough_s)).c_str());
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level, "settlement_instr_date_s: {}", std::string(item.settlement_instr_date_s,sizeof(item.settlement_instr_date_s)).c_str());
    loggerOMnet->log(Level, "sender_bic_code_s: {}", std::string(item.sender_bic_code_s,sizeof(item.sender_bic_code_s)).c_str());
    loggerOMnet->log(Level, "csd_code_s: {}", std::string(item.csd_code_s,sizeof(item.csd_code_s)).c_str());
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "ext_confirm_c: {}", item.ext_confirm_c);
    loggerOMnet->log(Level, "collateral_transaction_type_c: {}", item.collateral_transaction_type_c);
    loggerOMnet->log(Level, "collateral_transaction_state_c: {}", item.collateral_transaction_state_c);
    loggerOMnet->log(Level, "released_holding_c: {}", item.released_holding_c);
    loggerOMnet->log(Level, "collateral_type_c: {}", item.collateral_type_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level, "date_termination_s: {}", std::string(item.date_termination_s,sizeof(item.date_termination_s)).c_str());
    loggerOMnet->log(Level, "coupon_interest_i: {}", item.coupon_interest_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const coll_val_per_series_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.collateral_account);
    print(item.margin_account);
    print(item.series);
    print(item.currency);
    loggerOMnet->log(Level, "collateral_amount_q: {}", item.collateral_amount_q);
    loggerOMnet->log(Level, "market_value_q: {}", item.market_value_q);
    loggerOMnet->log(Level, "coll_value_ins_cur_before_limit_adjust_q: {}", item.coll_value_ins_cur_before_limit_adjust_q);
    loggerOMnet->log(Level, "coll_value_ins_cur_after_limit_adjust_q: {}", item.coll_value_ins_cur_after_limit_adjust_q);
    loggerOMnet->log(Level, "ex_rate_q: {}", item.ex_rate_q);
    loggerOMnet->log(Level, "coll_value_ins_cur_after_ser_limit_adjust_q: {}", item.coll_value_ins_cur_after_ser_limit_adjust_q);
    loggerOMnet->log(Level, "collateral_price_i: {}", item.collateral_price_i);
    loggerOMnet->log(Level, "percentage_after_haircut_i: {}", item.percentage_after_haircut_i);
    loggerOMnet->log(Level, "vag_id_s: {}", std::string(item.vag_id_s,sizeof(item.vag_id_s)).c_str());
    loggerOMnet->log(Level, "dec_in_rate_n: {}", item.dec_in_rate_n);
    loggerOMnet->log(Level, "dec_in_amount_n: {}", item.dec_in_amount_n);
    loggerOMnet->log(Level, "dec_in_collateral_price_n: {}", item.dec_in_collateral_price_n);
    loggerOMnet->log(Level, "isin_code_s: {}", std::string(item.isin_code_s,sizeof(item.isin_code_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "final_collateral_amount_q: {}", item.final_collateral_amount_q);
    loggerOMnet->log(Level, "post_collateral_amount_q: {}", item.post_collateral_amount_q);
    loggerOMnet->log(Level, "post_final_collateral_amount_q: {}", item.post_final_collateral_amount_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const coll_val_per_series_base_cur_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.base_currency);
    loggerOMnet->log(Level, "coll_value_base_curr_before_limit_adjust_q: {}", item.coll_value_base_curr_before_limit_adjust_q);
    loggerOMnet->log(Level, "coll_value_base_curr_after_limit_adjust_q: {}", item.coll_value_base_curr_after_limit_adjust_q);
    loggerOMnet->log(Level, "coll_value_base_cur_after_ser_limit_adjust_q: {}", item.coll_value_base_cur_after_ser_limit_adjust_q);
    loggerOMnet->log(Level, "series_limit_i: {}", item.series_limit_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const coll_val_per_series_risk_cur_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.risk_currency);
    print(item.coll_value_currency);
    loggerOMnet->log(Level, "collateral_value_q: {}", item.collateral_value_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const coll_val_per_val_group_tsn_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.margin_account);
    print(item.base_currency);
    loggerOMnet->log(Level, "coll_value_base_curr_before_limit_ajust_q: {}", item.coll_value_base_curr_before_limit_ajust_q);
    loggerOMnet->log(Level, "coll_value_base_curr_after_limit_adjust_q: {}", item.coll_value_base_curr_after_limit_adjust_q);
    loggerOMnet->log(Level, "coll_value_base_cur_after_ser_limit_adjust_q: {}", item.coll_value_base_cur_after_ser_limit_adjust_q);
    loggerOMnet->log(Level, "group_limit_i: {}", item.group_limit_i);
    loggerOMnet->log(Level, "actual_group_percentage_i: {}", item.actual_group_percentage_i);
    loggerOMnet->log(Level, "vag_id_s: {}", std::string(item.vag_id_s,sizeof(item.vag_id_s)).c_str());
    loggerOMnet->log(Level, "dec_in_actual_group_percentage_n: {}", item.dec_in_actual_group_percentage_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const combo_acc_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_var);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    print(item.order_number_u);
    print(item.give_up_member);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const combo_acc_trans_p_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.trading_code);
    print(item.order_var);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    print(item.order_number_u);
    print(item.give_up_member);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const combo_series_multi_update_bu1005_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const combo_trade_report_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "ext_t_state_c: {}", item.ext_t_state_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const combo_trans_part_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_var);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    print(item.give_up_member);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const combo_trans_part_p_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.trading_code);
    print(item.order_var);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    print(item.give_up_member);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const combo_update_bu5_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "chg_type_n: {}", item.chg_type_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.da5);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const confirm_give_up_request_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "give_up_number_i: {}", item.give_up_number_i);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const confirm_rectify_d_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "rectify_deal_number_q: {}", item.rectify_deal_number_q);
    loggerOMnet->log(Level, "operation_c: {}", item.operation_c);
    loggerOMnet->log(Level, "confirm_reject_c: {}", item.confirm_reject_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const confirm_rectify_t_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "rectify_trade_number_i: {}", item.rectify_trade_number_i);
    loggerOMnet->log(Level, "confirm_reject_c: {}", item.confirm_reject_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const cool_off_period_ended_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    print(item.series);
    print(item.timestamp);
    loggerOMnet->log(Level, "lower_limit_i: {}", item.lower_limit_i);
    loggerOMnet->log(Level, "upper_limit_i: {}", item.upper_limit_i);
    loggerOMnet->log(Level, "cool_off_ended_type_c: {}", item.cool_off_ended_type_c);
    loggerOMnet->log(Level, "price_limit_unit_c: {}", item.price_limit_unit_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const corporate_action_info_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "corp_action_ref_s: {}", std::string(item.corp_action_ref_s,sizeof(item.corp_action_ref_s)).c_str());
    loggerOMnet->log(Level, "corp_event_ref_s: {}", std::string(item.corp_event_ref_s,sizeof(item.corp_event_ref_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const corp_action_update_bu53_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "chg_type_n: {}", item.chg_type_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const create_aat_connection_hdr_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "connect_type_c: {}", item.connect_type_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    loggerOMnet->log(Level, "version_i: {}", item.version_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const create_aat_rg_connection_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "connect_type_c: {}", item.connect_type_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const create_acc_access_type_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    loggerOMnet->log(Level, "desc_long_s: {}", std::string(item.desc_long_s,sizeof(item.desc_long_s)).c_str());
    loggerOMnet->log(Level, "allow_all_account_i: {}", item.allow_all_account_i);
    loggerOMnet->log(Level, "version_i: {}", item.version_i);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const create_currency_ranking_connections_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.participant);
    loggerOMnet->log(Level, "currency_ranking_id_s: {}", std::string(item.currency_ranking_id_s,sizeof(item.currency_ranking_id_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const create_flexible_deriv_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "date_expiration_s: {}", std::string(item.date_expiration_s,sizeof(item.date_expiration_s)).c_str());
    loggerOMnet->log(Level, "strike_price_i: {}", item.strike_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const currency_ranking_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.key);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const currency_ranking_attributes_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    print(item.trading_code);
    loggerOMnet->log(Level, "le_state_c: {}", item.le_state_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const currency_ranking_entry_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.currency_series);
    loggerOMnet->log(Level, "currency_rank_n: {}", item.currency_rank_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "cash_collateral_limit_q: {}", item.cash_collateral_limit_q);
    loggerOMnet->log(Level, "direct_credit_limit_q: {}", item.direct_credit_limit_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const deficit_to_cover_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "deficit_to_cover_q: {}", item.deficit_to_cover_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const delete_aat_connection_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "connect_type_c: {}", item.connect_type_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    loggerOMnet->log(Level, "version_i: {}", item.version_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const delete_acc_access_type_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    loggerOMnet->log(Level, "version_i: {}", item.version_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const delete_currency_ranking_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.key);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const delete_currency_ranking_connections_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const delete_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_number_u);
    print(item.whose);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const delete_trans_p_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.trading_code);
    print(item.order_number_u);
    print(item.whose);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const deposit_withdraw_collateral_txn_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.deposit_withdraw_collateral_ssi);
    loggerOMnet->log(Level, "filler_4_s: {}", std::string(item.filler_4_s,sizeof(item.filler_4_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const deposit_withdraw_transfer_collateral_txn_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "filler_4_s: {}", std::string(item.filler_4_s,sizeof(item.filler_4_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const destination_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "destination_level_c: {}", item.destination_level_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const directed_collateral_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const directed_delivery_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    print(item.cl_delivery_api);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const directed_give_up_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    print(item.cl_give_up_api);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const directed_pos_info_update_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    print(item.pos_info_update_api);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const directed_quote_request_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    print(item.series);
    print(item.user_code);
    print(item.order_number_u);
    print(item.timestamp_created);
    loggerOMnet->log(Level, "time_to_respond_i: {}", item.time_to_respond_i);
    loggerOMnet->log(Level, "mp_quantity_i: {}", item.mp_quantity_i);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const directed_quote_request_ack_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    print(item.series);
    print(item.user_code);
    print(item.order_number_u);
    print(item.timestamp_created);
    loggerOMnet->log(Level, "time_to_respond_i: {}", item.time_to_respond_i);
    loggerOMnet->log(Level, "mp_quantity_i: {}", item.mp_quantity_i);
    print(item.ex_user_code);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "items_c: {}", item.items_c);
    loggerOMnet->log(Level, "quote_request_status_c: {}", item.quote_request_status_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const directed_quote_request_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "mp_quantity_i: {}", item.mp_quantity_i);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "items_c: {}", item.items_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const directed_quote_request_trans_p_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.trading_code);
    loggerOMnet->log(Level, "mp_quantity_i: {}", item.mp_quantity_i);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "items_c: {}", item.items_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const directed_trade_change_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    print(item.cl_trade_change_api);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const directed_trade_report_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "broadcast_reason_c: {}", item.broadcast_reason_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const document_url_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "items_c: {}", item.items_c);
    loggerOMnet->log(Level, "url_link_s: {}", std::string(item.url_link_s,sizeof(item.url_link_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const equil_price_update_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const etpr_delta_limit_change_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const etpr_limit_change_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const exception_days_update_bu78_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "chg_type_n: {}", item.chg_type_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.da78);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const exchange_info_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const exercise_req_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "quantity_i: {}", item.quantity_i);
    loggerOMnet->log(Level, "trade_number_i: {}", item.trade_number_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const extended_trade_ticker_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "trade_condition_n: {}", item.trade_condition_n);
    loggerOMnet->log(Level, "deal_info_n: {}", item.deal_info_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const fixed_income_trade_ticker_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "corresponding_yield_price_i: {}", item.corresponding_yield_price_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const free_text_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const give_up_request_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "trade_number_i: {}", item.trade_number_i);
    loggerOMnet->log(Level, "trade_quantity_i: {}", item.trade_quantity_i);
    loggerOMnet->log(Level, "commission_i: {}", item.commission_i);
    loggerOMnet->log(Level, "give_up_text_s: {}", std::string(item.give_up_text_s,sizeof(item.give_up_text_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const guarantee_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.collateral_base);
    loggerOMnet->log(Level, "guarantee_type_c: {}", item.guarantee_type_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const haircut_update_bu47_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "chg_type_n: {}", item.chg_type_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.da47);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const half_trade_ticker_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.trading_code);
    loggerOMnet->log(Level, "trade_quantity_i: {}", item.trade_quantity_i);
    loggerOMnet->log(Level, "block_n: {}", item.block_n);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "deal_source_c: {}", item.deal_source_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const hv_alter_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_number_u);
    print(item.order_var);
    print(item.give_up_member);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "total_volume_i: {}", item.total_volume_i);
    loggerOMnet->log(Level, "delta_quantity_c: {}", item.delta_quantity_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level, "balance_quantity_i: {}", item.balance_quantity_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const hv_alter_trans_p_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.trading_code);
    print(item.order_number_u);
    print(item.order_var);
    print(item.give_up_member);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "total_volume_i: {}", item.total_volume_i);
    loggerOMnet->log(Level, "delta_quantity_c: {}", item.delta_quantity_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level, "balance_quantity_i: {}", item.balance_quantity_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const hv_order_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_var);
    print(item.give_up_member);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "total_volume_i: {}", item.total_volume_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const hv_order_trans_p_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.trading_code);
    print(item.order_var);
    print(item.give_up_member);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "total_volume_i: {}", item.total_volume_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const hv_price_2_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.give_up_member);
    print(item.order_number_bid_u);
    print(item.order_number_ask_u);
    loggerOMnet->log(Level, "bid_premium_i: {}", item.bid_premium_i);
    loggerOMnet->log(Level, "ask_premium_i: {}", item.ask_premium_i);
    loggerOMnet->log(Level, "bid_quantity_i: {}", item.bid_quantity_i);
    loggerOMnet->log(Level, "ask_quantity_i: {}", item.ask_quantity_i);
    loggerOMnet->log(Level, "bid_total_volume_i: {}", item.bid_total_volume_i);
    loggerOMnet->log(Level, "ask_total_volume_i: {}", item.ask_total_volume_i);
    loggerOMnet->log(Level, "block_n: {}", item.block_n);
    loggerOMnet->log(Level, "time_validity_n: {}", item.time_validity_n);
    loggerOMnet->log(Level, "ex_client_s: {}", std::string(item.ex_client_s,sizeof(item.ex_client_s)).c_str());
    loggerOMnet->log(Level, "order_type_c: {}", item.order_type_c);
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "stp_key_i: {}", item.stp_key_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const hv_price_2_trans_p_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.trading_code);
    print(item.give_up_member);
    print(item.order_number_bid_u);
    print(item.order_number_ask_u);
    loggerOMnet->log(Level, "bid_premium_i: {}", item.bid_premium_i);
    loggerOMnet->log(Level, "ask_premium_i: {}", item.ask_premium_i);
    loggerOMnet->log(Level, "bid_quantity_i: {}", item.bid_quantity_i);
    loggerOMnet->log(Level, "ask_quantity_i: {}", item.ask_quantity_i);
    loggerOMnet->log(Level, "bid_total_volume_i: {}", item.bid_total_volume_i);
    loggerOMnet->log(Level, "ask_total_volume_i: {}", item.ask_total_volume_i);
    loggerOMnet->log(Level, "block_n: {}", item.block_n);
    loggerOMnet->log(Level, "time_validity_n: {}", item.time_validity_n);
    loggerOMnet->log(Level, "ex_client_s: {}", std::string(item.ex_client_s,sizeof(item.ex_client_s)).c_str());
    loggerOMnet->log(Level, "order_type_c: {}", item.order_type_c);
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "stp_key_i: {}", item.stp_key_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const inactive_order_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "inactive_c: {}", item.inactive_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const indicative_quote_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "buy_quantity_u: {}", item.buy_quantity_u);
    loggerOMnet->log(Level, "sell_quantity_u: {}", item.sell_quantity_u);
    loggerOMnet->log(Level, "buy_price_i: {}", item.buy_price_i);
    loggerOMnet->log(Level, "sell_price_i: {}", item.sell_price_i);
    loggerOMnet->log(Level, "bid_quote_action: {}", item.bid_quote_action);
    loggerOMnet->log(Level, "ask_quote_action: {}", item.ask_quote_action);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const info_heartbeat_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "heartbeat_interval_c: {}", item.heartbeat_interval_c);
    loggerOMnet->log(Level, "instance_c: {}", item.instance_c);
    loggerOMnet->log(Level, "tot_instances_c: {}", item.tot_instances_c);
    loggerOMnet->log(Level, "description_s: {}", std::string(item.description_s,sizeof(item.description_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const info_ready_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "info_type_i: {}", item.info_type_i);
    print(item.series);
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "sent_date_s: {}", std::string(item.sent_date_s,sizeof(item.sent_date_s)).c_str());
    loggerOMnet->log(Level, "sent_time_s: {}", std::string(item.sent_time_s,sizeof(item.sent_time_s)).c_str());
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "seq_num_srm_n: {}", item.seq_num_srm_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const instrument_status_info_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const inst_class_update_bu10_bu20_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "chg_type_n: {}", item.chg_type_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.da10_da20);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const irs_counterparty_pay_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.irs_leg);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const irs_member_pay_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.irs_leg);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const item_hdr_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const limit_change_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const long_stop_order_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_var);
    print(item.stop_series);
    loggerOMnet->log(Level, "limit_premium_i: {}", item.limit_premium_i);
    print(item.give_up_member);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "total_volume_i: {}", item.total_volume_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const long_stop_order_trans_p_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.trading_code);
    print(item.order_var);
    print(item.stop_series);
    loggerOMnet->log(Level, "limit_premium_i: {}", item.limit_premium_i);
    print(item.give_up_member);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "total_volume_i: {}", item.total_volume_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const marginable_spread_item_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.series);
    loggerOMnet->log(Level, "rpt_intra_held_q: {}", item.rpt_intra_held_q);
    loggerOMnet->log(Level, "rpt_intra_written_q: {}", item.rpt_intra_written_q);
    loggerOMnet->log(Level, "rpt_inter_held_q: {}", item.rpt_inter_held_q);
    loggerOMnet->log(Level, "rpt_inter_written_q: {}", item.rpt_inter_written_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_collateral_evaluation_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.margin_account);
    print(item.cash_optimization_account);
    print(item.currency);
    print(item.base_currency);
    loggerOMnet->log(Level, "settlement_requirement_q: {}", item.settlement_requirement_q);
    loggerOMnet->log(Level, "collateral_cash_q: {}", item.collateral_cash_q);
    loggerOMnet->log(Level, "adjusted_collateral_cash_q: {}", item.adjusted_collateral_cash_q);
    loggerOMnet->log(Level, "collateral_cash_after_settlement_q: {}", item.collateral_cash_after_settlement_q);
    loggerOMnet->log(Level, "collateral_noncash_q: {}", item.collateral_noncash_q);
    loggerOMnet->log(Level, "credit_debit_coll_acc_margin_q: {}", item.credit_debit_coll_acc_margin_q);
    loggerOMnet->log(Level, "credit_debit_coll_acc_settlement_q: {}", item.credit_debit_coll_acc_settlement_q);
    loggerOMnet->log(Level, "total_credit_debit_coll_acc_q: {}", item.total_credit_debit_coll_acc_q);
    loggerOMnet->log(Level, "ext_credit_debit_margin_q: {}", item.ext_credit_debit_margin_q);
    loggerOMnet->log(Level, "ext_credit_debit_settlement_q: {}", item.ext_credit_debit_settlement_q);
    loggerOMnet->log(Level, "total_ext_credit_debit_q: {}", item.total_ext_credit_debit_q);
    loggerOMnet->log(Level, "margin_total_q: {}", item.margin_total_q);
    loggerOMnet->log(Level, "total_collateral_value_q: {}", item.total_collateral_value_q);
    loggerOMnet->log(Level, "total_surplus_deficit_q: {}", item.total_surplus_deficit_q);
    loggerOMnet->log(Level, "total_surplus_deficit_base_cur_q: {}", item.total_surplus_deficit_base_cur_q);
    loggerOMnet->log(Level, "total_surplus_deficit_base_cur_after_fx_haircut_q: {}", item.total_surplus_deficit_base_cur_after_fx_haircut_q);
    loggerOMnet->log(Level, "ex_rate_q: {}", item.ex_rate_q);
    loggerOMnet->log(Level, "cash_collateral_limit_q: {}", item.cash_collateral_limit_q);
    loggerOMnet->log(Level, "direct_credit_limit_q: {}", item.direct_credit_limit_q);
    loggerOMnet->log(Level, "instr_ref_s: {}", std::string(item.instr_ref_s,sizeof(item.instr_ref_s)).c_str());
    loggerOMnet->log(Level, "fx_percentage_after_haircut_i: {}", item.fx_percentage_after_haircut_i);
    loggerOMnet->log(Level, "dec_in_rate_n: {}", item.dec_in_rate_n);
    loggerOMnet->log(Level, "dd_in_base_c: {}", item.dd_in_base_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_collateral_evaluation_base_sgx_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.margin_account);
    print(item.currency);
    print(item.base_currency);
    loggerOMnet->log(Level, "settlement_requirement_q: {}", item.settlement_requirement_q);
    loggerOMnet->log(Level, "collateral_cash_q: {}", item.collateral_cash_q);
    loggerOMnet->log(Level, "acc_bal_residual_q: {}", item.acc_bal_residual_q);
    loggerOMnet->log(Level, "collateral_fixed_income_q: {}", item.collateral_fixed_income_q);
    loggerOMnet->log(Level, "collateral_equity_q: {}", item.collateral_equity_q);
    loggerOMnet->log(Level, "collateral_guarantee_q: {}", item.collateral_guarantee_q);
    loggerOMnet->log(Level, "collateral_noncash_q: {}", item.collateral_noncash_q);
    loggerOMnet->log(Level, "total_collateral_value_q: {}", item.total_collateral_value_q);
    loggerOMnet->log(Level, "margin_maintenance_q: {}", item.margin_maintenance_q);
    loggerOMnet->log(Level, "margin_extraordinary_q: {}", item.margin_extraordinary_q);
    loggerOMnet->log(Level, "total_margin_req_q: {}", item.total_margin_req_q);
    loggerOMnet->log(Level, "external_margin_req_q: {}", item.external_margin_req_q);
    loggerOMnet->log(Level, "margin_total_q: {}", item.margin_total_q);
    loggerOMnet->log(Level, "ex_rate_q: {}", item.ex_rate_q);
    loggerOMnet->log(Level, "acc_bal_residual_base_cur_q: {}", item.acc_bal_residual_base_cur_q);
    loggerOMnet->log(Level, "collateral_cash_base_cur_q: {}", item.collateral_cash_base_cur_q);
    loggerOMnet->log(Level, "collateral_noncash_base_cur_q: {}", item.collateral_noncash_base_cur_q);
    loggerOMnet->log(Level, "external_margin_req_base_cur_q: {}", item.external_margin_req_base_cur_q);
    loggerOMnet->log(Level, "margin_maintenance_base_cur_q: {}", item.margin_maintenance_base_cur_q);
    loggerOMnet->log(Level, "margin_extraordinary_base_cur_q: {}", item.margin_extraordinary_base_cur_q);
    loggerOMnet->log(Level, "margin_total_base_cur_q: {}", item.margin_total_base_cur_q);
    loggerOMnet->log(Level, "ext_credit_debit_margin_q: {}", item.ext_credit_debit_margin_q);
    loggerOMnet->log(Level, "ext_credit_debit_settlement_q: {}", item.ext_credit_debit_settlement_q);
    loggerOMnet->log(Level, "total_ext_credit_debit_q: {}", item.total_ext_credit_debit_q);
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "dec_in_rate_n: {}", item.dec_in_rate_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_collateral_evaluation_cash_optimization_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.cash_optimization_account);
    print(item.currency);
    loggerOMnet->log(Level, "total_ext_credit_debit_q: {}", item.total_ext_credit_debit_q);
    loggerOMnet->log(Level, "instr_ref_s: {}", std::string(item.instr_ref_s,sizeof(item.instr_ref_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_collateral_evaluation_collrank_sgx_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "usd_equivalent_q: {}", item.usd_equivalent_q);
    loggerOMnet->log(Level, "collateral_fixed_income_base_cur_q: {}", item.collateral_fixed_income_base_cur_q);
    loggerOMnet->log(Level, "collateral_equity_base_cur_q: {}", item.collateral_equity_base_cur_q);
    loggerOMnet->log(Level, "collateral_guarantee_base_cur_q: {}", item.collateral_guarantee_base_cur_q);
    loggerOMnet->log(Level, "total_collateral_value_base_cur_q: {}", item.total_collateral_value_base_cur_q);
    loggerOMnet->log(Level, "total_margin_req_base_cur_q: {}", item.total_margin_req_base_cur_q);
    loggerOMnet->log(Level, "rank1_surpl_def_base_cur_after_fx_haircut_q: {}", item.rank1_surpl_def_base_cur_after_fx_haircut_q);
    loggerOMnet->log(Level, "rank2_surpl_def_base_cur_after_fx_haircut_q: {}", item.rank2_surpl_def_base_cur_after_fx_haircut_q);
    loggerOMnet->log(Level, "rank3_surpl_def_base_cur_after_fx_haircut_q: {}", item.rank3_surpl_def_base_cur_after_fx_haircut_q);
    loggerOMnet->log(Level, "rank4_surpl_def_base_cur_after_fx_haircut_q: {}", item.rank4_surpl_def_base_cur_after_fx_haircut_q);
    loggerOMnet->log(Level, "rank5_surpl_def_base_cur_after_fx_haircut_q: {}", item.rank5_surpl_def_base_cur_after_fx_haircut_q);
    loggerOMnet->log(Level, "rank1_fx_percentage_after_haircut_i: {}", item.rank1_fx_percentage_after_haircut_i);
    loggerOMnet->log(Level, "rank2_fx_percentage_after_haircut_i: {}", item.rank2_fx_percentage_after_haircut_i);
    loggerOMnet->log(Level, "rank3_fx_percentage_after_haircut_i: {}", item.rank3_fx_percentage_after_haircut_i);
    loggerOMnet->log(Level, "rank4_fx_percentage_after_haircut_i: {}", item.rank4_fx_percentage_after_haircut_i);
    loggerOMnet->log(Level, "rank5_fx_percentage_after_haircut_i: {}", item.rank5_fx_percentage_after_haircut_i);
    loggerOMnet->log(Level, "equity_surplus_deficit_base_cur_q: {}", item.equity_surplus_deficit_base_cur_q);
    loggerOMnet->log(Level, "equity_sd_base_cur_after_fx_haircut_q: {}", item.equity_sd_base_cur_after_fx_haircut_q);
    loggerOMnet->log(Level, "rank3_surp_fx_percentage_after_haircut_i: {}", item.rank3_surp_fx_percentage_after_haircut_i);
    loggerOMnet->log(Level, "allocated_equity_deficit_base_cur_q: {}", item.allocated_equity_deficit_base_cur_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_collateral_evaluation_df_sgx_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "cash_df_requirement_q: {}", item.cash_df_requirement_q);
    loggerOMnet->log(Level, "cash_surplus_deficit_q: {}", item.cash_surplus_deficit_q);
    loggerOMnet->log(Level, "noncash_surplus_deficit_q: {}", item.noncash_surplus_deficit_q);
    loggerOMnet->log(Level, "cash_df_requirement_base_cur_q: {}", item.cash_df_requirement_base_cur_q);
    loggerOMnet->log(Level, "cash_surplus_deficit_base_cur_q: {}", item.cash_surplus_deficit_base_cur_q);
    loggerOMnet->log(Level, "noncash_surplus_deficit_base_cur_q: {}", item.noncash_surplus_deficit_base_cur_q);
    loggerOMnet->log(Level, "fx_percentage_after_haircut_i: {}", item.fx_percentage_after_haircut_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_collateral_evaluation_grand_total_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.margin_account);
    print(item.base_currency);
    loggerOMnet->log(Level, "grand_total_surplus_deficit_base_cur_q: {}", item.grand_total_surplus_deficit_base_cur_q);
    loggerOMnet->log(Level, "grand_total_surplus_deficit_base_cur_after_fx_haircut_q: {}", item.grand_total_surplus_deficit_base_cur_after_fx_haircut_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_collateral_evaluation_grand_total_sgx_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.margin_account);
    print(item.base_currency);
    loggerOMnet->log(Level, "sum_rank1_surpl_def_base_cur_after_fx_haircut_q: {}", item.sum_rank1_surpl_def_base_cur_after_fx_haircut_q);
    loggerOMnet->log(Level, "sum_rank2_surpl_def_base_cur_after_fx_haircut_q: {}", item.sum_rank2_surpl_def_base_cur_after_fx_haircut_q);
    loggerOMnet->log(Level, "sum_rank3_surpl_def_base_cur_after_fx_haircut_q: {}", item.sum_rank3_surpl_def_base_cur_after_fx_haircut_q);
    loggerOMnet->log(Level, "sum_rank4_surpl_def_base_cur_after_fx_haircut_q: {}", item.sum_rank4_surpl_def_base_cur_after_fx_haircut_q);
    loggerOMnet->log(Level, "sum_rank5_surpl_def_base_cur_after_fx_haircut_q: {}", item.sum_rank5_surpl_def_base_cur_after_fx_haircut_q);
    loggerOMnet->log(Level, "margin_total_base_cur_q: {}", item.margin_total_base_cur_q);
    loggerOMnet->log(Level, "sum_noncash_surplus_deficit_base_cur_q: {}", item.sum_noncash_surplus_deficit_base_cur_q);
    loggerOMnet->log(Level, "sum_cash_surplus_deficit_base_cur_q: {}", item.sum_cash_surplus_deficit_base_cur_q);
    loggerOMnet->log(Level, "grand_total_surplus_deficit_base_cur_after_fx_haircut_q: {}", item.grand_total_surplus_deficit_base_cur_after_fx_haircut_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_result_additional_margin_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "additional_margin_q: {}", item.additional_margin_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_result_base_api_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "total_margin_req_q: {}", item.total_margin_req_q);
    loggerOMnet->log(Level, "initial_margin_req_q: {}", item.initial_margin_req_q);
    loggerOMnet->log(Level, "variation_margin_req_q: {}", item.variation_margin_req_q);
    loggerOMnet->log(Level, "contingent_variation_margin_req_q: {}", item.contingent_variation_margin_req_q);
    loggerOMnet->log(Level, "info_naked_risk_margin_q: {}", item.info_naked_risk_margin_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_result_components_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "risk_margin_open_q: {}", item.risk_margin_open_q);
    loggerOMnet->log(Level, "risk_margin_deliv_q: {}", item.risk_margin_deliv_q);
    loggerOMnet->log(Level, "spot_val_margin_q: {}", item.spot_val_margin_q);
    loggerOMnet->log(Level, "for_val_margin_q: {}", item.for_val_margin_q);
    loggerOMnet->log(Level, "fut_val_margin_q: {}", item.fut_val_margin_q);
    loggerOMnet->log(Level, "opt_val_margin_q: {}", item.opt_val_margin_q);
    loggerOMnet->log(Level, "deliv_val_margin_q: {}", item.deliv_val_margin_q);
    loggerOMnet->log(Level, "payment_margin_future_date_q: {}", item.payment_margin_future_date_q);
    loggerOMnet->log(Level, "long_opt_min_val_q: {}", item.long_opt_min_val_q);
    loggerOMnet->log(Level, "today_opt_premium_q: {}", item.today_opt_premium_q);
    loggerOMnet->log(Level, "risk_currency_s: {}", std::string(item.risk_currency_s,sizeof(item.risk_currency_s)).c_str());
    loggerOMnet->log(Level, "instr_currency_s: {}", std::string(item.instr_currency_s,sizeof(item.instr_currency_s)).c_str());
    loggerOMnet->log(Level, "instrument_or_risk_currency_c: {}", item.instrument_or_risk_currency_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_result_components_cfm_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "info_market_value_theo_q: {}", item.info_market_value_theo_q);
    loggerOMnet->log(Level, "market_value_margin_settled_q: {}", item.market_value_margin_settled_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_result_components_pdh_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "financial_margin_q: {}", item.financial_margin_q);
    loggerOMnet->log(Level, "info_inter_comm_spread_credit_q: {}", item.info_inter_comm_spread_credit_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_result_otcf_margin_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "otcf_margin_q: {}", item.otcf_margin_q);
    loggerOMnet->log(Level, "otcf_additional_margin_q: {}", item.otcf_additional_margin_q);
    loggerOMnet->log(Level, "pai_q: {}", item.pai_q);
    loggerOMnet->log(Level, "otcf_settlement_variation_q: {}", item.otcf_settlement_variation_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_result_overdue_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "delivery_margin_valuation_date_q: {}", item.delivery_margin_valuation_date_q);
    loggerOMnet->log(Level, "delivery_margin_overdue_q: {}", item.delivery_margin_overdue_q);
    loggerOMnet->log(Level, "payment_margin_valuation_date_q: {}", item.payment_margin_valuation_date_q);
    loggerOMnet->log(Level, "payment_margin_overdue_q: {}", item.payment_margin_overdue_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_result_pos_unit_api_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.series);
    loggerOMnet->log(Level, "pos_unit_id_q: {}", item.pos_unit_id_q);
    loggerOMnet->log(Level, "margin_req_u: {}", item.margin_req_u);
    loggerOMnet->log(Level, "market_value_q: {}", item.market_value_q);
    loggerOMnet->log(Level, "nbr_held_q: {}", item.nbr_held_q);
    loggerOMnet->log(Level, "nbr_written_q: {}", item.nbr_written_q);
    loggerOMnet->log(Level, "naked_margin_q: {}", item.naked_margin_q);
    loggerOMnet->log(Level, "today_option_premium_q: {}", item.today_option_premium_q);
    loggerOMnet->log(Level, "risk_margin_without_scaling_q: {}", item.risk_margin_without_scaling_q);
    loggerOMnet->log(Level, "offset_reduction_adj_q: {}", item.offset_reduction_adj_q);
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "gross_or_net_c: {}", item.gross_or_net_c);
    loggerOMnet->log(Level, "margin_class_s: {}", std::string(item.margin_class_s,sizeof(item.margin_class_s)).c_str());
    loggerOMnet->log(Level, "marg_meth_inst_c: {}", item.marg_meth_inst_c);
    loggerOMnet->log(Level, "marg_item_type_c: {}", item.marg_item_type_c);
    loggerOMnet->log(Level, "account_calculation_type_c: {}", item.account_calculation_type_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_result_pos_unit_cfm_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "market_value_theo_q: {}", item.market_value_theo_q);
    loggerOMnet->log(Level, "price_spread_margin_q: {}", item.price_spread_margin_q);
    loggerOMnet->log(Level, "sensitivity_forecast_primary_q: {}", item.sensitivity_forecast_primary_q);
    loggerOMnet->log(Level, "sensitivity_discount_primary_q: {}", item.sensitivity_discount_primary_q);
    loggerOMnet->log(Level, "market_value_margin_settled_q: {}", item.market_value_margin_settled_q);
    loggerOMnet->log(Level, "sensitivity_forecast_secondary_q: {}", item.sensitivity_forecast_secondary_q);
    loggerOMnet->log(Level, "sensitivity_discount_secondary_q: {}", item.sensitivity_discount_secondary_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_result_pos_unit_delivery_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "closing_date_s: {}", std::string(item.closing_date_s,sizeof(item.closing_date_s)).c_str());
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_result_pos_unit_forward_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "acc_bought_for_q: {}", item.acc_bought_for_q);
    loggerOMnet->log(Level, "acc_sold_for_q: {}", item.acc_sold_for_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_result_pos_unit_pdh_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "cash_margin_q: {}", item.cash_margin_q);
    loggerOMnet->log(Level, "orig_market_value_q: {}", item.orig_market_value_q);
    loggerOMnet->log(Level, "unconv_market_value_q: {}", item.unconv_market_value_q);
    loggerOMnet->log(Level, "financial_margin_q: {}", item.financial_margin_q);
    loggerOMnet->log(Level, "inter_comm_spread_credit_q: {}", item.inter_comm_spread_credit_q);
    loggerOMnet->log(Level, "quantity_rnp_q: {}", item.quantity_rnp_q);
    loggerOMnet->log(Level, "rest_long_pos_bef_inter_comm_q: {}", item.rest_long_pos_bef_inter_comm_q);
    loggerOMnet->log(Level, "rest_short_pos_bef_inter_comm_q: {}", item.rest_short_pos_bef_inter_comm_q);
    loggerOMnet->log(Level, "cash_currency_s: {}", std::string(item.cash_currency_s,sizeof(item.cash_currency_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "contract_spread_credit_q: {}", item.contract_spread_credit_q);
    loggerOMnet->log(Level, "time_spread_credit_q: {}", item.time_spread_credit_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const margin_result_pos_unit_settlement_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const marg_calc_runs_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "valuation_date_s: {}", std::string(item.valuation_date_s,sizeof(item.valuation_date_s)).c_str());
    loggerOMnet->log(Level, "start_date_s: {}", std::string(item.start_date_s,sizeof(item.start_date_s)).c_str());
    loggerOMnet->log(Level, "start_time_s: {}", std::string(item.start_time_s,sizeof(item.start_time_s)).c_str());
    loggerOMnet->log(Level, "incl_t_plus_one_prices_c: {}", item.incl_t_plus_one_prices_c);
    loggerOMnet->log(Level, "incl_t_plus_one_positions_c: {}", item.incl_t_plus_one_positions_c);
    loggerOMnet->log(Level, "sequence_number_n: {}", item.sequence_number_n);
    loggerOMnet->log(Level, "run_type_c: {}", item.run_type_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const market_info_base_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "opening_price_i: {}", item.opening_price_i);
    loggerOMnet->log(Level, "high_price_i: {}", item.high_price_i);
    loggerOMnet->log(Level, "low_price_i: {}", item.low_price_i);
    loggerOMnet->log(Level, "last_price_i: {}", item.last_price_i);
    loggerOMnet->log(Level, "volume_u: {}", item.volume_u);
    loggerOMnet->log(Level, "turnover_u: {}", item.turnover_u);
    loggerOMnet->log(Level, "number_of_deals_u: {}", item.number_of_deals_u);
    loggerOMnet->log(Level, "hhmmss_s: {}", std::string(item.hhmmss_s,sizeof(item.hhmmss_s)).c_str());
    loggerOMnet->log(Level, "trend_indicator_c: {}", item.trend_indicator_c);
    loggerOMnet->log(Level, "deal_source_c: {}", item.deal_source_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const market_info_index_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "opening_price_i: {}", item.opening_price_i);
    loggerOMnet->log(Level, "high_price_i: {}", item.high_price_i);
    loggerOMnet->log(Level, "low_price_i: {}", item.low_price_i);
    loggerOMnet->log(Level, "last_price_i: {}", item.last_price_i);
    loggerOMnet->log(Level, "change_previous_i: {}", item.change_previous_i);
    loggerOMnet->log(Level, "change_yesterday_i: {}", item.change_yesterday_i);
    loggerOMnet->log(Level, "points_of_movement_i: {}", item.points_of_movement_i);
    loggerOMnet->log(Level, "date_time_of_dist_s: {}", std::string(item.date_time_of_dist_s,sizeof(item.date_time_of_dist_s)).c_str());
    loggerOMnet->log(Level, "date_time_of_comp_s: {}", std::string(item.date_time_of_comp_s,sizeof(item.date_time_of_comp_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const market_info_net_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "net_change_i: {}", item.net_change_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const market_info_reason_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "edited_price_info_reason_c: {}", item.edited_price_info_reason_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const market_info_series_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "reserved_i: {}", item.reserved_i);
    loggerOMnet->log(Level, "all_or_none_c: {}", item.all_or_none_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const market_info_sgx_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "turnover_value_q: {}", item.turnover_value_q);
    loggerOMnet->log(Level, "trade_reported_volume_u: {}", item.trade_reported_volume_u);
    loggerOMnet->log(Level, "trade_reported_volume_t_session_u: {}", item.trade_reported_volume_t_session_u);
    loggerOMnet->log(Level, "combo_quantity_u: {}", item.combo_quantity_u);
    loggerOMnet->log(Level, "previous_last_price_i: {}", item.previous_last_price_i);
    loggerOMnet->log(Level, "previous_last_price_updated_date_s: {}", std::string(item.previous_last_price_updated_date_s,sizeof(item.previous_last_price_updated_date_s)).c_str());
    loggerOMnet->log(Level, "previous_last_price_updated_time_s: {}", std::string(item.previous_last_price_updated_time_s,sizeof(item.previous_last_price_updated_time_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const market_info_trd_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "last_trade_report_price_i: {}", item.last_trade_report_price_i);
    loggerOMnet->log(Level, "last_trade_report_qty_u: {}", item.last_trade_report_qty_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const market_maker_protection_info_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    print(item.trading_code);
    print(item.series);
    loggerOMnet->log(Level, "calc_quantity_protection_q: {}", item.calc_quantity_protection_q);
    loggerOMnet->log(Level, "calc_delta_protection_q: {}", item.calc_delta_protection_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const mass_quote_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.stp_key);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const mass_quote_update_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    print(item.trading_code);
    print(item.execution_timestamp);
    print(item.order_number_u);
    loggerOMnet->log(Level, "sequence_number_u: {}", item.sequence_number_u);
    loggerOMnet->log(Level, "stp_key_i: {}", item.stp_key_i);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const member_deposit_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.collateral_base);
    loggerOMnet->log(Level, "member_deposit_type_c: {}", item.member_deposit_type_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level, "fund_name_s: {}", std::string(item.fund_name_s,sizeof(item.fund_name_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const message_core_info_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "sequence_number_u: {}", item.sequence_number_u);
    loggerOMnet->log(Level, "message_information_type_c: {}", item.message_information_type_c);
    loggerOMnet->log(Level, "message_source_s: {}", std::string(item.message_source_s,sizeof(item.message_source_s)).c_str());
    loggerOMnet->log(Level, "yyyymmdd_s: {}", std::string(item.yyyymmdd_s,sizeof(item.yyyymmdd_s)).c_str());
    loggerOMnet->log(Level, "hhmmss_s: {}", std::string(item.hhmmss_s,sizeof(item.hhmmss_s)).c_str());
    loggerOMnet->log(Level, "message_priority_c: {}", item.message_priority_c);
    loggerOMnet->log(Level, "message_header_s: {}", std::string(item.message_header_s,sizeof(item.message_header_s)).c_str());
    loggerOMnet->log(Level, "update_status_note_c: {}", item.update_status_note_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const message_information_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const mm_protection_update_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "chg_type_n: {}", item.chg_type_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.da87);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const modify_aat_connection_hdr_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "connect_type_c: {}", item.connect_type_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    loggerOMnet->log(Level, "version_i: {}", item.version_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const modify_account_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.auth_section);
    print(item.account);
    print(item.account_data_external);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const modify_acc_access_type_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    loggerOMnet->log(Level, "desc_long_s: {}", std::string(item.desc_long_s,sizeof(item.desc_long_s)).c_str());
    loggerOMnet->log(Level, "allow_all_account_i: {}", item.allow_all_account_i);
    loggerOMnet->log(Level, "version_i: {}", item.version_i);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const modify_commission_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.party);
    loggerOMnet->log(Level, "send_receive_c: {}", item.send_receive_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const mp_trade_price_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.order_number_u);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "deal_source_c: {}", item.deal_source_c);
    loggerOMnet->log(Level, "trade_condition_n: {}", item.trade_condition_n);
    loggerOMnet->log(Level, "deal_price_i: {}", item.deal_price_i);
    loggerOMnet->log(Level, "deal_quantity_i: {}", item.deal_quantity_i);
    loggerOMnet->log(Level, "ext_t_state_c: {}", item.ext_t_state_c);
    loggerOMnet->log(Level, "opposing_deal_source_c: {}", item.opposing_deal_source_c);
    loggerOMnet->log(Level, "exch_order_type_n: {}", item.exch_order_type_n);
    print(item.opposing_order_number_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const mra_account_vim_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const multi_order_response_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "transaction_status_i: {}", item.transaction_status_i);
    loggerOMnet->log(Level, "trans_ack_i: {}", item.trans_ack_i);
    loggerOMnet->log(Level, "item_number_c: {}", item.item_number_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const non_trading_days_update_bu18_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "chg_type_n: {}", item.chg_type_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.da18);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const non_trad_settl_days_update_bu50_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "chg_type_n: {}", item.chg_type_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.da50);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_account_type_basic_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "acc_type_s: {}", std::string(item.acc_type_s,sizeof(item.acc_type_s)).c_str());
    loggerOMnet->log(Level, "description_s: {}", std::string(item.description_s,sizeof(item.description_s)).c_str());
    loggerOMnet->log(Level, "open_close_c: {}", item.open_close_c);
    loggerOMnet->log(Level, "transitory_c: {}", item.transitory_c);
    loggerOMnet->log(Level, "market_maker_c: {}", item.market_maker_c);
    loggerOMnet->log(Level, "own_inventory_c: {}", item.own_inventory_c);
    loggerOMnet->log(Level, "exclusive_opening_sell_c: {}", item.exclusive_opening_sell_c);
    loggerOMnet->log(Level, "positions_allowed_c: {}", item.positions_allowed_c);
    loggerOMnet->log(Level, "trades_allowed_c: {}", item.trades_allowed_c);
    loggerOMnet->log(Level, "atr_id_s: {}", std::string(item.atr_id_s,sizeof(item.atr_id_s)).c_str());
    loggerOMnet->log(Level, "origin_c: {}", item.origin_c);
    loggerOMnet->log(Level, "allowed_collateral_c: {}", item.allowed_collateral_c);
    loggerOMnet->log(Level, "acct_type_c: {}", item.acct_type_c);
    loggerOMnet->log(Level, "custodian_c: {}", item.custodian_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_block_size_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "maximum_size_u: {}", item.maximum_size_u);
    loggerOMnet->log(Level, "minimum_size_n: {}", item.minimum_size_n);
    loggerOMnet->log(Level, "block_n: {}", item.block_n);
    loggerOMnet->log(Level, "lot_type_c: {}", item.lot_type_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_calc_rule_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "accr_intr_round_u: {}", item.accr_intr_round_u);
    loggerOMnet->log(Level, "clean_pr_round_u: {}", item.clean_pr_round_u);
    loggerOMnet->log(Level, "yield_conv_n: {}", item.yield_conv_n);
    loggerOMnet->log(Level, "ex_coupon_n: {}", item.ex_coupon_n);
    loggerOMnet->log(Level, "accr_intr_ud_c: {}", item.accr_intr_ud_c);
    loggerOMnet->log(Level, "clean_pr_ud_c: {}", item.clean_pr_ud_c);
    loggerOMnet->log(Level, "day_count_conv_c: {}", item.day_count_conv_c);
    loggerOMnet->log(Level, "eom_count_conv_c: {}", item.eom_count_conv_c);
    loggerOMnet->log(Level, "set_start_consid_c: {}", item.set_start_consid_c);
    loggerOMnet->log(Level, "set_end_consid_c: {}", item.set_end_consid_c);
    loggerOMnet->log(Level, "calculation_conv_c: {}", item.calculation_conv_c);
    loggerOMnet->log(Level, "ex_coupon_calc_type_c: {}", item.ex_coupon_calc_type_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_combo_series_leg_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "ratio_n: {}", item.ratio_n);
    loggerOMnet->log(Level, "op_if_buy_c: {}", item.op_if_buy_c);
    loggerOMnet->log(Level, "op_if_sell_c: {}", item.op_if_sell_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_coupon_dates_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "date_coupdiv_s: {}", std::string(item.date_coupdiv_s,sizeof(item.date_coupdiv_s)).c_str());
    loggerOMnet->log(Level, "date_booksclose_s: {}", std::string(item.date_booksclose_s,sizeof(item.date_booksclose_s)).c_str());
    loggerOMnet->log(Level, "dividend_i: {}", item.dividend_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_delta_header_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "download_ref_number_q: {}", item.download_ref_number_q);
    print(item.full_answer_timestamp);
    loggerOMnet->log(Level, "full_answer_c: {}", item.full_answer_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_fixed_income_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "nominal_value_q: {}", item.nominal_value_q);
    loggerOMnet->log(Level, "coupon_interest_i: {}", item.coupon_interest_i);
    loggerOMnet->log(Level, "dec_in_nominal_n: {}", item.dec_in_nominal_n);
    loggerOMnet->log(Level, "coupon_settlement_days_n: {}", item.coupon_settlement_days_n);
    loggerOMnet->log(Level, "coupon_frequency_n: {}", item.coupon_frequency_n);
    loggerOMnet->log(Level, "rate_determ_days_n: {}", item.rate_determ_days_n);
    loggerOMnet->log(Level, "date_release_s: {}", std::string(item.date_release_s,sizeof(item.date_release_s)).c_str());
    loggerOMnet->log(Level, "date_termination_s: {}", std::string(item.date_termination_s,sizeof(item.date_termination_s)).c_str());
    loggerOMnet->log(Level, "date_dated_s: {}", std::string(item.date_dated_s,sizeof(item.date_dated_s)).c_str());
    loggerOMnet->log(Level, "date_proceed_s: {}", std::string(item.date_proceed_s,sizeof(item.date_proceed_s)).c_str());
    loggerOMnet->log(Level, "fixed_income_type_c: {}", item.fixed_income_type_c);
    loggerOMnet->log(Level, "day_calc_rule_c: {}", item.day_calc_rule_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_inst_class_basic_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.upper_level_series);
    loggerOMnet->log(Level, "price_quot_factor_i: {}", item.price_quot_factor_i);
    loggerOMnet->log(Level, "contract_size_i: {}", item.contract_size_i);
    loggerOMnet->log(Level, "redemption_value_i: {}", item.redemption_value_i);
    loggerOMnet->log(Level, "undisclosed_min_ord_val_i: {}", item.undisclosed_min_ord_val_i);
    loggerOMnet->log(Level, "opt_min_ord_val_i: {}", item.opt_min_ord_val_i);
    loggerOMnet->log(Level, "opt_min_trade_val_i: {}", item.opt_min_trade_val_i);
    loggerOMnet->log(Level, "derivate_level_n: {}", item.derivate_level_n);
    loggerOMnet->log(Level, "dec_in_strike_price_n: {}", item.dec_in_strike_price_n);
    loggerOMnet->log(Level, "dec_in_contr_size_n: {}", item.dec_in_contr_size_n);
    loggerOMnet->log(Level, "rnt_id_n: {}", item.rnt_id_n);
    loggerOMnet->log(Level, "virt_commodity_n: {}", item.virt_commodity_n);
    loggerOMnet->log(Level, "settlement_days_n: {}", item.settlement_days_n);
    loggerOMnet->log(Level, "settl_day_unit_c: {}", item.settl_day_unit_c);
    loggerOMnet->log(Level, "inc_id_s: {}", std::string(item.inc_id_s,sizeof(item.inc_id_s)).c_str());
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "trc_id_s: {}", std::string(item.trc_id_s,sizeof(item.trc_id_s)).c_str());
    loggerOMnet->log(Level, "base_cur_s: {}", std::string(item.base_cur_s,sizeof(item.base_cur_s)).c_str());
    loggerOMnet->log(Level, "traded_c: {}", item.traded_c);
    loggerOMnet->log(Level, "price_unit_premium_c: {}", item.price_unit_premium_c);
    loggerOMnet->log(Level, "price_unit_strike_c: {}", item.price_unit_strike_c);
    loggerOMnet->log(Level, "trd_cur_unit_c: {}", item.trd_cur_unit_c);
    loggerOMnet->log(Level, "db_operation_c: {}", item.db_operation_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_inst_class_cms_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "valuation_group_id_s: {}", std::string(item.valuation_group_id_s,sizeof(item.valuation_group_id_s)).c_str());
    loggerOMnet->log(Level, "haircut_id_s: {}", std::string(item.haircut_id_s,sizeof(item.haircut_id_s)).c_str());
    loggerOMnet->log(Level, "vag_limit_i: {}", item.vag_limit_i);
    loggerOMnet->log(Level, "collateral_type_c: {}", item.collateral_type_c);
    loggerOMnet->log(Level, "eligible_as_margin_coll_c: {}", item.eligible_as_margin_coll_c);
    loggerOMnet->log(Level, "eligible_as_def_fund_coll_c: {}", item.eligible_as_def_fund_coll_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_inst_class_ext14_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "tar_instrument_indicator_c: {}", item.tar_instrument_indicator_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "reference_inc_id_s: {}", std::string(item.reference_inc_id_s,sizeof(item.reference_inc_id_s)).c_str());
    loggerOMnet->log(Level, "max_length_expiration_i: {}", item.max_length_expiration_i);
    loggerOMnet->log(Level, "trade_days_ltd_exp_i: {}", item.trade_days_ltd_exp_i);
    loggerOMnet->log(Level, "trade_days_sett_exp_i: {}", item.trade_days_sett_exp_i);
    loggerOMnet->log(Level, "trade_days_delv_start_exp_i: {}", item.trade_days_delv_start_exp_i);
    loggerOMnet->log(Level, "trade_days_delv_end_exp_i: {}", item.trade_days_delv_end_exp_i);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_inst_class_oat_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "limit_order_allwd_c: {}", item.limit_order_allwd_c);
    loggerOMnet->log(Level, "market_orders_allowed_c: {}", item.market_orders_allowed_c);
    loggerOMnet->log(Level, "fill_or_kill_allowed_c: {}", item.fill_or_kill_allowed_c);
    loggerOMnet->log(Level, "fill_and_kill_allowed_c: {}", item.fill_and_kill_allowed_c);
    loggerOMnet->log(Level, "fill_and_store_c: {}", item.fill_and_store_c);
    loggerOMnet->log(Level, "all_or_none_c: {}", item.all_or_none_c);
    loggerOMnet->log(Level, "imb_orders_allwd_c: {}", item.imb_orders_allwd_c);
    loggerOMnet->log(Level, "mtl_orders_rlot_allwd_c: {}", item.mtl_orders_rlot_allwd_c);
    loggerOMnet->log(Level, "allow_hidd_aggr_c: {}", item.allow_hidd_aggr_c);
    loggerOMnet->log(Level, "best_limit_c: {}", item.best_limit_c);
    loggerOMnet->log(Level, "market_bid_c: {}", item.market_bid_c);
    loggerOMnet->log(Level, "price_stabilization_c: {}", item.price_stabilization_c);
    loggerOMnet->log(Level, "short_sell_c: {}", item.short_sell_c);
    loggerOMnet->log(Level, "short_sell_validation_c: {}", item.short_sell_validation_c);
    loggerOMnet->log(Level, "allow_cp_mar_c: {}", item.allow_cp_mar_c);
    loggerOMnet->log(Level, "allow_cp_lim_c: {}", item.allow_cp_lim_c);
    loggerOMnet->log(Level, "allow_undisclosed_qty_c: {}", item.allow_undisclosed_qty_c);
    loggerOMnet->log(Level, "sso_orders_allowed_c: {}", item.sso_orders_allowed_c);
    loggerOMnet->log(Level, "stop_orders_allowed_c: {}", item.stop_orders_allowed_c);
    loggerOMnet->log(Level, "good_till_session_c: {}", item.good_till_session_c);
    loggerOMnet->log(Level, "priority_ranking_c: {}", item.priority_ranking_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_inst_class_secur_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "exerc_limit_i: {}", item.exerc_limit_i);
    loggerOMnet->log(Level, "dec_in_deliv_n: {}", item.dec_in_deliv_n);
    loggerOMnet->log(Level, "cleared_dec_in_qty_n: {}", item.cleared_dec_in_qty_n);
    loggerOMnet->log(Level, "dec_in_fixing_n: {}", item.dec_in_fixing_n);
    loggerOMnet->log(Level, "exerc_limit_unit_c: {}", item.exerc_limit_unit_c);
    loggerOMnet->log(Level, "settl_cur_id_s: {}", std::string(item.settl_cur_id_s,sizeof(item.settl_cur_id_s)).c_str());
    loggerOMnet->log(Level, "csd_id_s: {}", std::string(item.csd_id_s,sizeof(item.csd_id_s)).c_str());
    loggerOMnet->log(Level, "fixing_req_c: {}", item.fixing_req_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_inst_series_basic_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "step_size_multiple_n: {}", item.step_size_multiple_n);
    loggerOMnet->log(Level, "ins_id_s: {}", std::string(item.ins_id_s,sizeof(item.ins_id_s)).c_str());
    loggerOMnet->log(Level, "long_ins_id_s: {}", std::string(item.long_ins_id_s,sizeof(item.long_ins_id_s)).c_str());
    loggerOMnet->log(Level, "date_last_trading_s: {}", std::string(item.date_last_trading_s,sizeof(item.date_last_trading_s)).c_str());
    loggerOMnet->log(Level, "time_last_trading_s: {}", std::string(item.time_last_trading_s,sizeof(item.time_last_trading_s)).c_str());
    loggerOMnet->log(Level, "date_first_trading_s: {}", std::string(item.date_first_trading_s,sizeof(item.date_first_trading_s)).c_str());
    loggerOMnet->log(Level, "time_first_trading_s: {}", std::string(item.time_first_trading_s,sizeof(item.time_first_trading_s)).c_str());
    loggerOMnet->log(Level, "series_status_c: {}", item.series_status_c);
    loggerOMnet->log(Level, "suspended_c: {}", item.suspended_c);
    loggerOMnet->log(Level, "traded_in_click_c: {}", item.traded_in_click_c);
    loggerOMnet->log(Level, "db_operation_c: {}", item.db_operation_c);
    loggerOMnet->log(Level, "trade_reporting_only_c: {}", item.trade_reporting_only_c);
    loggerOMnet->log(Level, "traded_c: {}", item.traded_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_inst_series_basic_single_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.upper_level_series);
    loggerOMnet->log(Level, "contract_size_i: {}", item.contract_size_i);
    loggerOMnet->log(Level, "price_quot_factor_i: {}", item.price_quot_factor_i);
    loggerOMnet->log(Level, "state_number_n: {}", item.state_number_n);
    loggerOMnet->log(Level, "ex_coupon_n: {}", item.ex_coupon_n);
    loggerOMnet->log(Level, "isin_code_s: {}", std::string(item.isin_code_s,sizeof(item.isin_code_s)).c_str());
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "first_settlement_date_s: {}", std::string(item.first_settlement_date_s,sizeof(item.first_settlement_date_s)).c_str());
    loggerOMnet->log(Level, "date_notation_s: {}", std::string(item.date_notation_s,sizeof(item.date_notation_s)).c_str());
    loggerOMnet->log(Level, "deliverable_c: {}", item.deliverable_c);
    loggerOMnet->log(Level, "effective_exp_date_s: {}", std::string(item.effective_exp_date_s,sizeof(item.effective_exp_date_s)).c_str());
    loggerOMnet->log(Level, "ext_info_source_c: {}", item.ext_info_source_c);
    loggerOMnet->log(Level, "participant_defined_c: {}", item.participant_defined_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_inst_series_bo_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "isin_code_old_s: {}", std::string(item.isin_code_old_s,sizeof(item.isin_code_old_s)).c_str());
    loggerOMnet->log(Level, "tm_template_c: {}", item.tm_template_c);
    loggerOMnet->log(Level, "tm_series_c: {}", item.tm_series_c);
    loggerOMnet->log(Level, "accept_collateral_c: {}", item.accept_collateral_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_inst_series_ext1_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "series_sequence_number_u: {}", item.series_sequence_number_u);
    loggerOMnet->log(Level, "abbr_name_s: {}", std::string(item.abbr_name_s,sizeof(item.abbr_name_s)).c_str());
    loggerOMnet->log(Level, "stock_code_s: {}", std::string(item.stock_code_s,sizeof(item.stock_code_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_inst_series_id_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "orderbook_id_i: {}", item.orderbook_id_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_inst_series_power_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "date_delivery_start_s: {}", std::string(item.date_delivery_start_s,sizeof(item.date_delivery_start_s)).c_str());
    loggerOMnet->log(Level, "date_delivery_stop_s: {}", std::string(item.date_delivery_stop_s,sizeof(item.date_delivery_stop_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_inst_type_basic_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "min_show_vol_u: {}", item.min_show_vol_u);
    loggerOMnet->log(Level, "hidden_vol_meth_n: {}", item.hidden_vol_meth_n);
    loggerOMnet->log(Level, "pub_inf_id_n: {}", item.pub_inf_id_n);
    loggerOMnet->log(Level, "int_id_s: {}", std::string(item.int_id_s,sizeof(item.int_id_s)).c_str());
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "traded_c: {}", item.traded_c);
    loggerOMnet->log(Level, "directed_trade_information_c: {}", item.directed_trade_information_c);
    loggerOMnet->log(Level, "public_deal_information_c: {}", item.public_deal_information_c);
    loggerOMnet->log(Level, "pricing_method_c: {}", item.pricing_method_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_inst_type_co_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "option_price_limit_factor_i: {}", item.option_price_limit_factor_i);
    loggerOMnet->log(Level, "trade_report_price_check_c: {}", item.trade_report_price_check_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_inst_type_secur_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "settlement_product_s: {}", std::string(item.settlement_product_s,sizeof(item.settlement_product_s)).c_str());
    loggerOMnet->log(Level, "maintain_positions_c: {}", item.maintain_positions_c);
    loggerOMnet->log(Level, "post_trade_proc_c: {}", item.post_trade_proc_c);
    loggerOMnet->log(Level, "pos_handling_c: {}", item.pos_handling_c);
    loggerOMnet->log(Level, "pre_novation_collateral_check_c: {}", item.pre_novation_collateral_check_c);
    loggerOMnet->log(Level, "settlement_type_c: {}", item.settlement_type_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_pre_trade_limit_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "opt_long_total_credit_q: {}", item.opt_long_total_credit_q);
    loggerOMnet->log(Level, "opt_short_total_credit_q: {}", item.opt_short_total_credit_q);
    loggerOMnet->log(Level, "fut_total_buy_credit_q: {}", item.fut_total_buy_credit_q);
    loggerOMnet->log(Level, "fut_total_sell_credit_q: {}", item.fut_total_sell_credit_q);
    loggerOMnet->log(Level, "order_rate_limit_i: {}", item.order_rate_limit_i);
    loggerOMnet->log(Level, "ptl_suffix_s: {}", std::string(item.ptl_suffix_s,sizeof(item.ptl_suffix_s)).c_str());
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "spons_user_name_s: {}", std::string(item.spons_user_name_s,sizeof(item.spons_user_name_s)).c_str());
    loggerOMnet->log(Level, "sponsored_client_country_id_s: {}", std::string(item.sponsored_client_country_id_s,sizeof(item.sponsored_client_country_id_s)).c_str());
    loggerOMnet->log(Level, "sponsored_client_ex_customer_s: {}", std::string(item.sponsored_client_ex_customer_s,sizeof(item.sponsored_client_ex_customer_s)).c_str());
    loggerOMnet->log(Level, "warning_breach_lvl_n: {}", item.warning_breach_lvl_n);
    loggerOMnet->log(Level, "not_breach_lvl_n: {}", item.not_breach_lvl_n);
    loggerOMnet->log(Level, "enable_warn_email_c: {}", item.enable_warn_email_c);
    loggerOMnet->log(Level, "enable_not_email_c: {}", item.enable_not_email_c);
    loggerOMnet->log(Level, "enable_breach_email_c: {}", item.enable_breach_email_c);
    loggerOMnet->log(Level, "db_operation_c: {}", item.db_operation_c);
    loggerOMnet->log(Level, "intraday_c: {}", item.intraday_c);
    loggerOMnet->log(Level, "valid_from_date_s: {}", std::string(item.valid_from_date_s,sizeof(item.valid_from_date_s)).c_str());
    loggerOMnet->log(Level, "enable_restr_instr_c: {}", item.enable_restr_instr_c);
    loggerOMnet->log(Level, "enable_def_user_c: {}", item.enable_def_user_c);
    loggerOMnet->log(Level, "netted_consumption_c: {}", item.netted_consumption_c);
    loggerOMnet->log(Level, "clearing_part_group_c: {}", item.clearing_part_group_c);
    loggerOMnet->log(Level, "parent_node_c: {}", item.parent_node_c);
    loggerOMnet->log(Level, "ptl_blocked_c: {}", item.ptl_blocked_c);
    loggerOMnet->log(Level, "yyyymmddhhmmss_s: {}", std::string(item.yyyymmddhhmmss_s,sizeof(item.yyyymmddhhmmss_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_pre_trade_limit_coeff_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "opt_long_coeff_i: {}", item.opt_long_coeff_i);
    loggerOMnet->log(Level, "opt_short_coeff_i: {}", item.opt_short_coeff_i);
    loggerOMnet->log(Level, "fut_coeff_i: {}", item.fut_coeff_i);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "valid_from_date_s: {}", std::string(item.valid_from_date_s,sizeof(item.valid_from_date_s)).c_str());
    loggerOMnet->log(Level, "db_operation_c: {}", item.db_operation_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_pre_trade_limit_id_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "ptl_id_s: {}", std::string(item.ptl_id_s,sizeof(item.ptl_id_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_pre_trade_limit_not_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "not_email_addr_s: {}", std::string(item.not_email_addr_s,sizeof(item.not_email_addr_s)).c_str());
    loggerOMnet->log(Level, "valid_from_date_s: {}", std::string(item.valid_from_date_s,sizeof(item.valid_from_date_s)).c_str());
    loggerOMnet->log(Level, "db_operation_c: {}", item.db_operation_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_pre_trade_limit_param_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "max_order_size_q: {}", item.max_order_size_q);
    loggerOMnet->log(Level, "open_buy_q: {}", item.open_buy_q);
    loggerOMnet->log(Level, "open_sell_q: {}", item.open_sell_q);
    loggerOMnet->log(Level, "traded_bought_q: {}", item.traded_bought_q);
    loggerOMnet->log(Level, "traded_sold_q: {}", item.traded_sold_q);
    loggerOMnet->log(Level, "traded_net_q: {}", item.traded_net_q);
    loggerOMnet->log(Level, "total_buy_q: {}", item.total_buy_q);
    loggerOMnet->log(Level, "total_sell_q: {}", item.total_sell_q);
    loggerOMnet->log(Level, "total_net_buy_q: {}", item.total_net_buy_q);
    loggerOMnet->log(Level, "total_net_sell_q: {}", item.total_net_sell_q);
    loggerOMnet->log(Level, "price_limit_i: {}", item.price_limit_i);
    loggerOMnet->log(Level, "pre_trade_limit_param_unit_c: {}", item.pre_trade_limit_param_unit_c);
    loggerOMnet->log(Level, "valid_from_date_s: {}", std::string(item.valid_from_date_s,sizeof(item.valid_from_date_s)).c_str());
    loggerOMnet->log(Level, "db_operation_c: {}", item.db_operation_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_pre_trade_limit_user_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.user_code);
    loggerOMnet->log(Level, "valid_from_date_s: {}", std::string(item.valid_from_date_s,sizeof(item.valid_from_date_s)).c_str());
    loggerOMnet->log(Level, "db_operation_c: {}", item.db_operation_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_price_tick_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.tick_size);
    loggerOMnet->log(Level, "dec_in_premium_n: {}", item.dec_in_premium_n);
    loggerOMnet->log(Level, "is_fractions_c: {}", item.is_fractions_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_remove_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_report_create_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "report_name_s: {}", std::string(item.report_name_s,sizeof(item.report_name_s)).c_str());
    loggerOMnet->log(Level, "report_spec_s: {}", std::string(item.report_spec_s,sizeof(item.report_spec_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_report_param_create_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "param_no_n: {}", item.param_no_n);
    loggerOMnet->log(Level, "param_name_s: {}", std::string(item.param_name_s,sizeof(item.param_name_s)).c_str());
    loggerOMnet->log(Level, "param_type_c: {}", item.param_type_c);
    loggerOMnet->log(Level, "param_inp_value_c: {}", item.param_inp_value_c);
    loggerOMnet->log(Level, "param_value_s: {}", std::string(item.param_value_s,sizeof(item.param_value_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_underlying_basic_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "linked_commodity_n: {}", item.linked_commodity_n);
    loggerOMnet->log(Level, "state_number_n: {}", item.state_number_n);
    loggerOMnet->log(Level, "dec_in_price_n: {}", item.dec_in_price_n);
    loggerOMnet->log(Level, "com_id_s: {}", std::string(item.com_id_s,sizeof(item.com_id_s)).c_str());
    loggerOMnet->log(Level, "isin_code_s: {}", std::string(item.isin_code_s,sizeof(item.isin_code_s)).c_str());
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "base_cur_s: {}", std::string(item.base_cur_s,sizeof(item.base_cur_s)).c_str());
    loggerOMnet->log(Level, "deliverable_c: {}", item.deliverable_c);
    loggerOMnet->log(Level, "underlying_type_c: {}", item.underlying_type_c);
    loggerOMnet->log(Level, "price_unit_c: {}", item.price_unit_c);
    loggerOMnet->log(Level, "underlying_status_c: {}", item.underlying_status_c);
    loggerOMnet->log(Level, "underlying_issuer_s: {}", std::string(item.underlying_issuer_s,sizeof(item.underlying_issuer_s)).c_str());
    loggerOMnet->log(Level, "sector_code_s: {}", std::string(item.sector_code_s,sizeof(item.sector_code_s)).c_str());
    loggerOMnet->log(Level, "virtual_c: {}", item.virtual_c);
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ext_provider_c: {}", item.ext_provider_c);
    loggerOMnet->log(Level, "external_id_s: {}", std::string(item.external_id_s,sizeof(item.external_id_s)).c_str());
    loggerOMnet->log(Level, "cur_unit_c: {}", item.cur_unit_c);
    loggerOMnet->log(Level, "db_operation_c: {}", item.db_operation_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ns_underlying_ext1_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "subscription_price_i: {}", item.subscription_price_i);
    loggerOMnet->log(Level, "interest_rate_i: {}", item.interest_rate_i);
    loggerOMnet->log(Level, "member_circ_numb_s: {}", std::string(item.member_circ_numb_s,sizeof(item.member_circ_numb_s)).c_str());
    loggerOMnet->log(Level, "inv_scheme_c: {}", item.inv_scheme_c);
    loggerOMnet->log(Level, "date_closing_s: {}", std::string(item.date_closing_s,sizeof(item.date_closing_s)).c_str());
    loggerOMnet->log(Level, "date_last_s: {}", std::string(item.date_last_s,sizeof(item.date_last_s)).c_str());
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ob_changes_id_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    print(item.changes);
    print(item.order_number_u);
    print(item.order_no_id);
    print(item.party);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ob_changes_no_id_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    print(item.changes);
    print(item.order_number_u);
    print(item.order_no_id);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ob_levels_closing_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "closing_price_i: {}", item.closing_price_i);
    loggerOMnet->log(Level, "open_balance_u: {}", item.open_balance_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ob_levels_id_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "block_n: {}", item.block_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ob_levels_next_query_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "instance_c: {}", item.instance_c);
    loggerOMnet->log(Level, "instance_next_c: {}", item.instance_next_c);
    print(item.series_next);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ob_levels_order_number_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.order_number_bid_u);
    print(item.order_number_ask_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ob_levels_query_data_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ob_levels_total_quantity_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "total_quantity_bid_u: {}", item.total_quantity_bid_u);
    loggerOMnet->log(Level, "total_quantity_ask_u: {}", item.total_quantity_ask_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const order_change_combined_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "mp_quantity_i: {}", item.mp_quantity_i);
    loggerOMnet->log(Level, "total_volume_i: {}", item.total_volume_i);
    loggerOMnet->log(Level, "item_number_c: {}", item.item_number_c);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "change_reason_c: {}", item.change_reason_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const order_chg_sep_trans_ack_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "trans_ack_i: {}", item.trans_ack_i);
    print(item.order_change_separate);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const order_info_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.timestamp_in);
    print(item.timestamp_created);
    print(item.order_number_u);
    print(item.party);
    print(item.order);
    loggerOMnet->log(Level, "total_volume_i: {}", item.total_volume_i);
    loggerOMnet->log(Level, "display_quantity_i: {}", item.display_quantity_i);
    loggerOMnet->log(Level, "orig_total_volume_i: {}", item.orig_total_volume_i);
    loggerOMnet->log(Level, "orig_shown_quantity_i: {}", item.orig_shown_quantity_i);
    loggerOMnet->log(Level, "order_state_u: {}", item.order_state_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const order_leg_trade_info_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.match_id);
    print(item.order_number_u);
    loggerOMnet->log(Level, "trade_price_i: {}", item.trade_price_i);
    loggerOMnet->log(Level, "trade_quantity_i: {}", item.trade_quantity_i);
    loggerOMnet->log(Level, "item_number_c: {}", item.item_number_c);
    loggerOMnet->log(Level, "deal_source_c: {}", item.deal_source_c);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const order_owner_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.owner);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const order_price_change_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.order_number_u);
    loggerOMnet->log(Level, "premium_i: {}", item.premium_i);
    print(item.execution_timestamp);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "change_reason_c: {}", item.change_reason_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const order_return_info_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "trans_ack_i: {}", item.trans_ack_i);
    print(item.order_number_u);
    print(item.originator_trading_code);
    print(item.execution_timestamp);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const order_state_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "order_state_u: {}", item.order_state_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const order_status_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level, "open_close_req_c: {}", item.open_close_req_c);
    loggerOMnet->log(Level, "premium_i: {}", item.premium_i);
    print(item.party);
    loggerOMnet->log(Level, "orig_shown_quantity_i: {}", item.orig_shown_quantity_i);
    loggerOMnet->log(Level, "orig_total_volume_i: {}", item.orig_total_volume_i);
    loggerOMnet->log(Level, "rem_quantity_i: {}", item.rem_quantity_i);
    loggerOMnet->log(Level, "transaction_number_n: {}", item.transaction_number_n);
    loggerOMnet->log(Level, "exch_order_type_n: {}", item.exch_order_type_n);
    print(item.give_up_member);
    loggerOMnet->log(Level, "ex_client_s: {}", std::string(item.ex_client_s,sizeof(item.ex_client_s)).c_str());
    loggerOMnet->log(Level, "order_type_c: {}", item.order_type_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const order_submitter_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.submitter);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const order_trade_info_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.match_id);
    loggerOMnet->log(Level, "trade_price_i: {}", item.trade_price_i);
    loggerOMnet->log(Level, "trade_quantity_i: {}", item.trade_quantity_i);
    loggerOMnet->log(Level, "item_number_c: {}", item.item_number_c);
    loggerOMnet->log(Level, "deal_source_c: {}", item.deal_source_c);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const order_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_var);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    print(item.give_up_member);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const otc_base_trade_report_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.party);
    print(item.account);
    print(item.give_up_account);
    print(item.series);
    loggerOMnet->log(Level, "passthrough_s: {}", std::string(item.passthrough_s,sizeof(item.passthrough_s)).c_str());
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "asof_date_s: {}", std::string(item.asof_date_s,sizeof(item.asof_date_s)).c_str());
    loggerOMnet->log(Level, "participant_info_s: {}", std::string(item.participant_info_s,sizeof(item.participant_info_s)).c_str());
    loggerOMnet->log(Level, "name_s: {}", std::string(item.name_s,sizeof(item.name_s)).c_str());
    loggerOMnet->log(Level, "bought_or_sold_c: {}", item.bought_or_sold_c);
    loggerOMnet->log(Level, "trade_report_category_c: {}", item.trade_report_category_c);
    loggerOMnet->log(Level, "private_match_field_s: {}", std::string(item.private_match_field_s,sizeof(item.private_match_field_s)).c_str());
    loggerOMnet->log(Level, "give_up_text_s: {}", std::string(item.give_up_text_s,sizeof(item.give_up_text_s)).c_str());
    loggerOMnet->log(Level, "filler_4_s: {}", std::string(item.filler_4_s,sizeof(item.filler_4_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const otc_cash_flow_base_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.series);
    loggerOMnet->log(Level, "description_s: {}", std::string(item.description_s,sizeof(item.description_s)).c_str());
    loggerOMnet->log(Level, "sequence_number_i: {}", item.sequence_number_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const otc_cash_flow_info_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "trade_report_nbr_q: {}", item.trade_report_nbr_q);
    loggerOMnet->log(Level, "notional_amount_q: {}", item.notional_amount_q);
    loggerOMnet->log(Level, "consideration_u: {}", item.consideration_u);
    loggerOMnet->log(Level, "interest_rate_i: {}", item.interest_rate_i);
    loggerOMnet->log(Level, "spread_i: {}", item.spread_i);
    loggerOMnet->log(Level, "dec_in_nominal_n: {}", item.dec_in_nominal_n);
    loggerOMnet->log(Level, "dec_in_consideration_n: {}", item.dec_in_consideration_n);
    loggerOMnet->log(Level, "dec_in_rate_n: {}", item.dec_in_rate_n);
    loggerOMnet->log(Level, "dec_in_spread_n: {}", item.dec_in_spread_n);
    loggerOMnet->log(Level, "days_in_period_n: {}", item.days_in_period_n);
    loggerOMnet->log(Level, "days_per_year_n: {}", item.days_per_year_n);
    loggerOMnet->log(Level, "passthrough_s: {}", std::string(item.passthrough_s,sizeof(item.passthrough_s)).c_str());
    loggerOMnet->log(Level, "start_date_s: {}", std::string(item.start_date_s,sizeof(item.start_date_s)).c_str());
    loggerOMnet->log(Level, "end_date_s: {}", std::string(item.end_date_s,sizeof(item.end_date_s)).c_str());
    loggerOMnet->log(Level, "payment_date_s: {}", std::string(item.payment_date_s,sizeof(item.payment_date_s)).c_str());
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "fixed_or_float_c: {}", item.fixed_or_float_c);
    loggerOMnet->log(Level, "pay_or_receive_c: {}", item.pay_or_receive_c);
    loggerOMnet->log(Level, "otc_cash_flow_type_c: {}", item.otc_cash_flow_type_c);
    loggerOMnet->log(Level, "business_day_conv_c: {}", item.business_day_conv_c);
    loggerOMnet->log(Level, "basis_swap_relation_c: {}", item.basis_swap_relation_c);
    loggerOMnet->log(Level, "reset_date_s: {}", std::string(item.reset_date_s,sizeof(item.reset_date_s)).c_str());
    loggerOMnet->log(Level, "fixing_value_i: {}", item.fixing_value_i);
    loggerOMnet->log(Level, "trade_clearing_date: {}", std::string(item.trade_clearing_date,sizeof(item.trade_clearing_date)).c_str());
    loggerOMnet->log(Level, "sequence_number_i: {}", item.sequence_number_i);
    loggerOMnet->log(Level, "accumulated_consideration_q: {}", item.accumulated_consideration_q);
    loggerOMnet->log(Level, "estimated_accumulated_consideration_q: {}", item.estimated_accumulated_consideration_q);
    loggerOMnet->log(Level, "estimated_consideration_date_s: {}", std::string(item.estimated_consideration_date_s,sizeof(item.estimated_consideration_date_s)).c_str());
    loggerOMnet->log(Level, "is_flow_reset_c: {}", item.is_flow_reset_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const otc_clearing_info_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.position_account);
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "orig_clearing_date_s: {}", std::string(item.orig_clearing_date_s,sizeof(item.orig_clearing_date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const otc_fra_data_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.float_rate_series);
    loggerOMnet->log(Level, "fixed_consideration_q: {}", item.fixed_consideration_q);
    loggerOMnet->log(Level, "float_consideration_q: {}", item.float_consideration_q);
    loggerOMnet->log(Level, "pay_amount_q: {}", item.pay_amount_q);
    loggerOMnet->log(Level, "float_interest_rate_i: {}", item.float_interest_rate_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const otc_fra_trade_report_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.float_rate_index);
    loggerOMnet->log(Level, "notional_amount_q: {}", item.notional_amount_q);
    loggerOMnet->log(Level, "fixed_interest_rate_i: {}", item.fixed_interest_rate_i);
    loggerOMnet->log(Level, "float_rate_fixing_date_s: {}", std::string(item.float_rate_fixing_date_s,sizeof(item.float_rate_fixing_date_s)).c_str());
    loggerOMnet->log(Level, "date_termination_s: {}", std::string(item.date_termination_s,sizeof(item.date_termination_s)).c_str());
    loggerOMnet->log(Level, "day_count_conv_c: {}", item.day_count_conv_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const otc_give_up_info_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level, "give_up_number_i: {}", item.give_up_number_i);
    loggerOMnet->log(Level, "give_up_text_s: {}", std::string(item.give_up_text_s,sizeof(item.give_up_text_s)).c_str());
    loggerOMnet->log(Level, "take_up_or_reject_text_s: {}", std::string(item.take_up_or_reject_text_s,sizeof(item.take_up_or_reject_text_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const otc_give_up_state_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "give_up_state_c: {}", item.give_up_state_c);
    loggerOMnet->log(Level, "give_up_sub_state_c: {}", item.give_up_sub_state_c);
    loggerOMnet->log(Level, "give_up_reason_c: {}", item.give_up_reason_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const otc_irs_data_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "flow_version_n: {}", item.flow_version_n);
    loggerOMnet->log(Level, "delivery_unit_date_s: {}", std::string(item.delivery_unit_date_s,sizeof(item.delivery_unit_date_s)).c_str());
    loggerOMnet->log(Level, "termination_state_c: {}", item.termination_state_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const otc_irs_trade_report_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.upfront);
    loggerOMnet->log(Level, "date_termination_s: {}", std::string(item.date_termination_s,sizeof(item.date_termination_s)).c_str());
    loggerOMnet->log(Level, "notional_amount_q: {}", item.notional_amount_q);
    loggerOMnet->log(Level, "business_day_conv_c: {}", item.business_day_conv_c);
    loggerOMnet->log(Level, "rate_reset_c: {}", item.rate_reset_c);
    loggerOMnet->log(Level, "reset_days_c: {}", item.reset_days_c);
    loggerOMnet->log(Level, "payment_set_c: {}", item.payment_set_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const otc_operation_info_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "sequence_number_i: {}", item.sequence_number_i);
    loggerOMnet->log(Level, "trade_operation_c: {}", item.trade_operation_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const otc_option_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.opt_series);
    loggerOMnet->log(Level, "premium_settlement_date_s: {}", std::string(item.premium_settlement_date_s,sizeof(item.premium_settlement_date_s)).c_str());
    loggerOMnet->log(Level, "premium_i: {}", item.premium_i);
    loggerOMnet->log(Level, "expiration_date_s: {}", std::string(item.expiration_date_s,sizeof(item.expiration_date_s)).c_str());
    loggerOMnet->log(Level, "bought_or_sold_c: {}", item.bought_or_sold_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const otc_trade_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.pos_account);
    print(item.series);
    loggerOMnet->log(Level, "trade_report_number_q: {}", item.trade_report_number_q);
    loggerOMnet->log(Level, "trade_quantity_i: {}", item.trade_quantity_i);
    loggerOMnet->log(Level, "trade_price_i: {}", item.trade_price_i);
    loggerOMnet->log(Level, "trade_clean_price: {}", item.trade_clean_price);
    loggerOMnet->log(Level, "bought_or_sold_c: {}", item.bought_or_sold_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const otc_trade_operation_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.trading_code);
    loggerOMnet->log(Level, "trade_report_number_q: {}", item.trade_report_number_q);
    loggerOMnet->log(Level, "party_trade_report_number_q: {}", item.party_trade_report_number_q);
    loggerOMnet->log(Level, "trade_operation_number_q: {}", item.trade_operation_number_q);
    loggerOMnet->log(Level, "participant_info_s: {}", std::string(item.participant_info_s,sizeof(item.participant_info_s)).c_str());
    loggerOMnet->log(Level, "trade_report_state_c: {}", item.trade_report_state_c);
    loggerOMnet->log(Level, "trade_report_sub_state_c: {}", item.trade_report_sub_state_c);
    loggerOMnet->log(Level, "trade_report_reason_c: {}", item.trade_report_reason_c);
    loggerOMnet->log(Level, "trade_operation_c: {}", item.trade_operation_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const otc_trade_report_data_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.trading_code);
    print(item.user_code);
    print(item.auth_by_whom);
    loggerOMnet->log(Level, "delivery_unit_u: {}", item.delivery_unit_u);
    loggerOMnet->log(Level, "trade_report_type_i: {}", item.trade_report_type_i);
    loggerOMnet->log(Level, "trade_report_nbr_q: {}", item.trade_report_nbr_q);
    loggerOMnet->log(Level, "party_trade_report_nbr_q: {}", item.party_trade_report_nbr_q);
    loggerOMnet->log(Level, "sequence_number_i: {}", item.sequence_number_i);
    loggerOMnet->log(Level, "netting_req_nbr_u: {}", item.netting_req_nbr_u);
    loggerOMnet->log(Level, "pay_calc_req_nbr_u: {}", item.pay_calc_req_nbr_u);
    loggerOMnet->log(Level, "deal_number_i: {}", item.deal_number_i);
    loggerOMnet->log(Level, "trade_report_version_n: {}", item.trade_report_version_n);
    loggerOMnet->log(Level, "timestamp_date_s: {}", std::string(item.timestamp_date_s,sizeof(item.timestamp_date_s)).c_str());
    loggerOMnet->log(Level, "timestamp_time_s: {}", std::string(item.timestamp_time_s,sizeof(item.timestamp_time_s)).c_str());
    loggerOMnet->log(Level, "isin_code_s: {}", std::string(item.isin_code_s,sizeof(item.isin_code_s)).c_str());
    loggerOMnet->log(Level, "trade_report_state_c: {}", item.trade_report_state_c);
    loggerOMnet->log(Level, "trade_report_sub_state_c: {}", item.trade_report_sub_state_c);
    loggerOMnet->log(Level, "trade_report_reason_c: {}", item.trade_report_reason_c);
    loggerOMnet->log(Level, "authorization_state_c: {}", item.authorization_state_c);
    print(item.reported_by);
    loggerOMnet->log(Level, "affirmation_state_c: {}", item.affirmation_state_c);
    print(item.affirmed_by);
    loggerOMnet->log(Level, "trade_type_c: {}", item.trade_type_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const pay_note_info_ready_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "info_type_i: {}", item.info_type_i);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "sent_date_s: {}", std::string(item.sent_date_s,sizeof(item.sent_date_s)).c_str());
    loggerOMnet->log(Level, "sent_time_s: {}", std::string(item.sent_time_s,sizeof(item.sent_time_s)).c_str());
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const position_closeout_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const position_closeout_status_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const price_2_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "bid_premium_i: {}", item.bid_premium_i);
    loggerOMnet->log(Level, "ask_premium_i: {}", item.ask_premium_i);
    print(item.order_number_bid_u);
    print(item.order_number_ask_u);
    loggerOMnet->log(Level, "bid_quantity_i: {}", item.bid_quantity_i);
    loggerOMnet->log(Level, "ask_quantity_i: {}", item.ask_quantity_i);
    loggerOMnet->log(Level, "block_n: {}", item.block_n);
    loggerOMnet->log(Level, "time_validity_n: {}", item.time_validity_n);
    loggerOMnet->log(Level, "ex_client_s: {}", std::string(item.ex_client_s,sizeof(item.ex_client_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const price_depth_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "price_i: {}", item.price_i);
    loggerOMnet->log(Level, "price_depth_position_c: {}", item.price_depth_position_c);
    loggerOMnet->log(Level, "price_depth_operator_c: {}", item.price_depth_operator_c);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const price_depth_delete_levels_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "price_depth_position_c: {}", item.price_depth_position_c);
    loggerOMnet->log(Level, "levels_to_delete_c: {}", item.levels_to_delete_c);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const price_depth_series_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "synchronization_number_u: {}", item.synchronization_number_u);
    loggerOMnet->log(Level, "block_n: {}", item.block_n);
    loggerOMnet->log(Level, "premium_levels_c: {}", item.premium_levels_c);
    loggerOMnet->log(Level, "demands_populated_c: {}", item.demands_populated_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "reserved1_u: {}", item.reserved1_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const price_depth_tot_orders_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "total_no_of_bid_orders_u: {}", item.total_no_of_bid_orders_u);
    loggerOMnet->log(Level, "total_no_of_ask_orders_u: {}", item.total_no_of_ask_orders_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const price_depth_with_orders_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "price_i: {}", item.price_i);
    loggerOMnet->log(Level, "no_of_orders_u: {}", item.no_of_orders_u);
    loggerOMnet->log(Level, "price_depth_position_c: {}", item.price_depth_position_c);
    loggerOMnet->log(Level, "price_depth_operator_c: {}", item.price_depth_operator_c);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const price_depth_with_volume_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "price_i: {}", item.price_i);
    loggerOMnet->log(Level, "quantity_u: {}", item.quantity_u);
    loggerOMnet->log(Level, "hidden_quantity_c: {}", item.hidden_quantity_c);
    loggerOMnet->log(Level, "price_depth_position_c: {}", item.price_depth_position_c);
    loggerOMnet->log(Level, "price_depth_operator_c: {}", item.price_depth_operator_c);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const price_depth_with_volume_orders_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "price_i: {}", item.price_i);
    loggerOMnet->log(Level, "quantity_u: {}", item.quantity_u);
    loggerOMnet->log(Level, "no_of_orders_u: {}", item.no_of_orders_u);
    loggerOMnet->log(Level, "hidden_quantity_c: {}", item.hidden_quantity_c);
    loggerOMnet->log(Level, "price_depth_position_c: {}", item.price_depth_position_c);
    loggerOMnet->log(Level, "price_depth_operator_c: {}", item.price_depth_operator_c);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const price_limit_trigger_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    print(item.series);
    print(item.timestamp);
    loggerOMnet->log(Level, "lower_limit_i: {}", item.lower_limit_i);
    loggerOMnet->log(Level, "upper_limit_i: {}", item.upper_limit_i);
    loggerOMnet->log(Level, "next_lower_limit_i: {}", item.next_lower_limit_i);
    loggerOMnet->log(Level, "next_upper_limit_i: {}", item.next_upper_limit_i);
    loggerOMnet->log(Level, "cool_off_time_i: {}", item.cool_off_time_i);
    loggerOMnet->log(Level, "tier_c: {}", item.tier_c);
    loggerOMnet->log(Level, "price_limit_unit_c: {}", item.price_limit_unit_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const price_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_var);
    print(item.order_number_u);
    print(item.give_up_member);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const price_trans_p_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.trading_code);
    print(item.order_var);
    print(item.order_number_u);
    print(item.give_up_member);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const private_price_list_id_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "private_price_list_id_s: {}", std::string(item.private_price_list_id_s,sizeof(item.private_price_list_id_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const quantity_condition_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "minimum_quantity_i: {}", item.minimum_quantity_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_aat_connection_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "connect_type_c: {}", item.connect_type_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    print(item.participant);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    loggerOMnet->log(Level, "search_id_s: {}", std::string(item.search_id_s,sizeof(item.search_id_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_account_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "query_on_date_c: {}", item.query_on_date_c);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_account_fee_type_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_account_prop_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_account_type_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_account_type_rule_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_acc_access_type_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.ex_user_code);
    loggerOMnet->log(Level, "acc_access_type_s: {}", std::string(item.acc_access_type_s,sizeof(item.acc_access_type_s)).c_str());
    print(item.account);
    loggerOMnet->log(Level, "only_wildcard_i: {}", item.only_wildcard_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_acc_access_type_ext_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.key);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_amended_trades_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_api_delivery_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "from_date_s: {}", std::string(item.from_date_s,sizeof(item.from_date_s)).c_str());
    loggerOMnet->log(Level, "sequence_first_i: {}", item.sequence_first_i);
    loggerOMnet->log(Level, "to_date_s: {}", std::string(item.to_date_s,sizeof(item.to_date_s)).c_str());
    loggerOMnet->log(Level, "sequence_last_i: {}", item.sequence_last_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_api_give_up_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "from_date_s: {}", std::string(item.from_date_s,sizeof(item.from_date_s)).c_str());
    loggerOMnet->log(Level, "sequence_first_i: {}", item.sequence_first_i);
    loggerOMnet->log(Level, "to_date_s: {}", std::string(item.to_date_s,sizeof(item.to_date_s)).c_str());
    loggerOMnet->log(Level, "sequence_last_i: {}", item.sequence_last_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_api_trade_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "from_date_s: {}", std::string(item.from_date_s,sizeof(item.from_date_s)).c_str());
    loggerOMnet->log(Level, "sequence_first_i: {}", item.sequence_first_i);
    loggerOMnet->log(Level, "to_date_s: {}", std::string(item.to_date_s,sizeof(item.to_date_s)).c_str());
    loggerOMnet->log(Level, "sequence_last_i: {}", item.sequence_last_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_authorized_report_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_average_price_trade_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "trade_number_i: {}", item.trade_number_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_bi26_signals_sent_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_bi26_signals_sent_cl_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_bi27_broadcasts_sent_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "sent_date_s: {}", std::string(item.sent_date_s,sizeof(item.sent_date_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_bi73_signals_sent_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.search_series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "seq_num_srm_n: {}", item.seq_num_srm_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_bi7_signals_sent_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.search_series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "seq_num_srm_n: {}", item.seq_num_srm_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_bi7_signals_sent_cl_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.search_series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "seq_num_srm_n: {}", item.seq_num_srm_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_bi81_broadcasts_sent_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "message_information_type_c: {}", item.message_information_type_c);
    loggerOMnet->log(Level, "message_priority_c: {}", item.message_priority_c);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "from_sequence_number_u: {}", item.from_sequence_number_u);
    loggerOMnet->log(Level, "to_sequence_number_u: {}", item.to_sequence_number_u);
    print(item.search_series);
    loggerOMnet->log(Level, "update_status_note_c: {}", item.update_status_note_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_block_size_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_broker_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_business_date_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_central_group_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_clearing_date_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.search_series);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_clearing_date_ext_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.search_series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_closeout_log_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.account);
    loggerOMnet->log(Level, "series_id_s: {}", std::string(item.series_id_s,sizeof(item.series_id_s)).c_str());
    loggerOMnet->log(Level, "from_date_s: {}", std::string(item.from_date_s,sizeof(item.from_date_s)).c_str());
    loggerOMnet->log(Level, "from_time_s: {}", std::string(item.from_time_s,sizeof(item.from_time_s)).c_str());
    loggerOMnet->log(Level, "to_date_s: {}", std::string(item.to_date_s,sizeof(item.to_date_s)).c_str());
    loggerOMnet->log(Level, "to_time_s: {}", std::string(item.to_time_s,sizeof(item.to_time_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_collateral_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "series_id_s: {}", std::string(item.series_id_s,sizeof(item.series_id_s)).c_str());
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "collateral_type_c: {}", item.collateral_type_c);
    loggerOMnet->log(Level, "state_c: {}", item.state_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_collateral_evaluation_run_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.margin_account);
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "valuation_date_s: {}", std::string(item.valuation_date_s,sizeof(item.valuation_date_s)).c_str());
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "from_time_s: {}", std::string(item.from_time_s,sizeof(item.from_time_s)).c_str());
    loggerOMnet->log(Level, "to_time_s: {}", std::string(item.to_time_s,sizeof(item.to_time_s)).c_str());
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "collateral_evaluation_type_c: {}", item.collateral_evaluation_type_c);
    loggerOMnet->log(Level, "is_final_c: {}", item.is_final_c);
    loggerOMnet->log(Level, "is_intraday_c: {}", item.is_intraday_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_collateral_information_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    print(item.margin_account);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "valuation_date_s: {}", std::string(item.valuation_date_s,sizeof(item.valuation_date_s)).c_str());
    loggerOMnet->log(Level, "request_nbr_u: {}", item.request_nbr_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_collateral_transaction_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.collateral_account);
    loggerOMnet->log(Level, "instruction_nbr_u: {}", item.instruction_nbr_u);
    loggerOMnet->log(Level, "coll_payment_nbr_u: {}", item.coll_payment_nbr_u);
    loggerOMnet->log(Level, "ext_coll_payment_nbr_u: {}", item.ext_coll_payment_nbr_u);
    loggerOMnet->log(Level, "from_date_s: {}", std::string(item.from_date_s,sizeof(item.from_date_s)).c_str());
    loggerOMnet->log(Level, "to_date_s: {}", std::string(item.to_date_s,sizeof(item.to_date_s)).c_str());
    loggerOMnet->log(Level, "from_time_s: {}", std::string(item.from_time_s,sizeof(item.from_time_s)).c_str());
    loggerOMnet->log(Level, "to_time_s: {}", std::string(item.to_time_s,sizeof(item.to_time_s)).c_str());
    loggerOMnet->log(Level, "instr_ref_s: {}", std::string(item.instr_ref_s,sizeof(item.instr_ref_s)).c_str());
    loggerOMnet->log(Level, "cancel_ref_s: {}", std::string(item.cancel_ref_s,sizeof(item.cancel_ref_s)).c_str());
    loggerOMnet->log(Level, "series_id_s: {}", std::string(item.series_id_s,sizeof(item.series_id_s)).c_str());
    loggerOMnet->log(Level, "account_number_s: {}", std::string(item.account_number_s,sizeof(item.account_number_s)).c_str());
    loggerOMnet->log(Level, "bic_code_s: {}", std::string(item.bic_code_s,sizeof(item.bic_code_s)).c_str());
    loggerOMnet->log(Level, "clh_bank_account_number_s: {}", std::string(item.clh_bank_account_number_s,sizeof(item.clh_bank_account_number_s)).c_str());
    loggerOMnet->log(Level, "clh_bank_bic_code_s: {}", std::string(item.clh_bank_bic_code_s,sizeof(item.clh_bank_bic_code_s)).c_str());
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "collateral_transaction_type_c: {}", item.collateral_transaction_type_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_collateral_transaction_specific_version_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "collateral_transaction_nbr_q: {}", item.collateral_transaction_nbr_q);
    loggerOMnet->log(Level, "request_nbr_u: {}", item.request_nbr_u);
    loggerOMnet->log(Level, "valuation_date_s: {}", std::string(item.valuation_date_s,sizeof(item.valuation_date_s)).c_str());
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_collateral_transaction_version_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "collateral_transaction_nbr_q: {}", item.collateral_transaction_nbr_q);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_collateral_version_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "collateral_nbr_q: {}", item.collateral_nbr_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_coll_val_per_series_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.collateral_account);
    print(item.margin_account);
    loggerOMnet->log(Level, "request_nbr_u: {}", item.request_nbr_u);
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "series_id_s: {}", std::string(item.series_id_s,sizeof(item.series_id_s)).c_str());
    loggerOMnet->log(Level, "valuation_date_s: {}", std::string(item.valuation_date_s,sizeof(item.valuation_date_s)).c_str());
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_coll_val_per_val_group_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.margin_account);
    loggerOMnet->log(Level, "request_nbr_u: {}", item.request_nbr_u);
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "vag_id_s: {}", std::string(item.vag_id_s,sizeof(item.vag_id_s)).c_str());
    loggerOMnet->log(Level, "valuation_date_s: {}", std::string(item.valuation_date_s,sizeof(item.valuation_date_s)).c_str());
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_combo_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_commission_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.party);
    loggerOMnet->log(Level, "send_receive_c: {}", item.send_receive_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_conf_give_up_req_items_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "give_up_number_i: {}", item.give_up_number_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_converted_series_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "adjust_ident_n: {}", item.adjust_ident_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_cool_off_period_ended_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "only_this_series_c: {}", item.only_this_series_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_corp_action_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_currency_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_currency_ranking_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.key);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_currency_ranking_accounts_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.participant);
    loggerOMnet->log(Level, "currency_ranking_id_s: {}", std::string(item.currency_ranking_id_s,sizeof(item.currency_ranking_id_s)).c_str());
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_currency_ranking_connections_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_deal_source_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_delta_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "download_ref_number_q: {}", item.download_ref_number_q);
    print(item.full_answer_timestamp);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_delta_limit_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "only_this_series_c: {}", item.only_this_series_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_dh_margin_components_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "sequence_number_n: {}", item.sequence_number_n);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "run_type_c: {}", item.run_type_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_error_msg_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.search_series);
    print(item.account);
    loggerOMnet->log(Level, "error_id_u: {}", item.error_id_u);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "from_date_s: {}", std::string(item.from_date_s,sizeof(item.from_date_s)).c_str());
    loggerOMnet->log(Level, "to_date_s: {}", std::string(item.to_date_s,sizeof(item.to_date_s)).c_str());
    loggerOMnet->log(Level, "from_time_s: {}", std::string(item.from_time_s,sizeof(item.from_time_s)).c_str());
    loggerOMnet->log(Level, "to_time_s: {}", std::string(item.to_time_s,sizeof(item.to_time_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_exception_days_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_exchange_dq24_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_exchange_rate_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_exercise_req_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.search_series);
    print(item.account);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_fixing_dates_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_fixing_val_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.search_series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_give_up_request_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.party);
    loggerOMnet->log(Level, "ext_trade_number_u: {}", item.ext_trade_number_u);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "state_c: {}", item.state_c);
    loggerOMnet->log(Level, "buy_or_sell_c: {}", item.buy_or_sell_c);
    loggerOMnet->log(Level, "send_or_receive_c: {}", item.send_or_receive_c);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "series_id_s: {}", std::string(item.series_id_s,sizeof(item.series_id_s)).c_str());
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "give_up_text_s: {}", std::string(item.give_up_text_s,sizeof(item.give_up_text_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_greeks_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "intra_day2_c: {}", item.intra_day2_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "marg_run_nbr_n: {}", item.marg_run_nbr_n);
    loggerOMnet->log(Level, "marg_call_nbr_n: {}", item.marg_call_nbr_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_haircut_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_hdr_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_instrument_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_instrument_class_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_instrument_group_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_instrument_status_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "state_level_e: {}", item.state_level_e);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_limit_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "only_this_series_c: {}", item.only_this_series_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_list_ver_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "report_version_s: {}", std::string(item.report_version_s,sizeof(item.report_version_s)).c_str());
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level, "info_type_i: {}", item.info_type_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_list_ver_nrs_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "file_name_s: {}", std::string(item.file_name_s,sizeof(item.file_name_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_manual_payments_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_margin_acc_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    print(item.account);
    loggerOMnet->log(Level, "cust_bank_id_s: {}", std::string(item.cust_bank_id_s,sizeof(item.cust_bank_id_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_margin_collateral_evaluation_sgx_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.margin_account);
    loggerOMnet->log(Level, "request_nbr_u: {}", item.request_nbr_u);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "valuation_date_s: {}", std::string(item.valuation_date_s,sizeof(item.valuation_date_s)).c_str());
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_margin_data_used_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "intra_day2_c: {}", item.intra_day2_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "marg_run_nbr_n: {}", item.marg_run_nbr_n);
    loggerOMnet->log(Level, "marg_call_nbr_n: {}", item.marg_call_nbr_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_margin_detail_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "intra_day2_c: {}", item.intra_day2_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    print(item.account);
    loggerOMnet->log(Level, "marg_run_nbr_n: {}", item.marg_run_nbr_n);
    loggerOMnet->log(Level, "marg_call_nbr_n: {}", item.marg_call_nbr_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_margin_ext_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_margin_mem_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_margin_pa_acc_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    print(item.account);
    loggerOMnet->log(Level, "cust_bank_id_s: {}", std::string(item.cust_bank_id_s,sizeof(item.cust_bank_id_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_margin_prop_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "intra_day2_c: {}", item.intra_day2_c);
    loggerOMnet->log(Level, "incl_marg_calc_acc_c: {}", item.incl_marg_calc_acc_c);
    loggerOMnet->log(Level, "marg_run_nbr_n: {}", item.marg_run_nbr_n);
    loggerOMnet->log(Level, "marg_call_nbr_n: {}", item.marg_call_nbr_n);
    print(item.account);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_margin_requirement_account_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    print(item.mra_account);
    loggerOMnet->log(Level, "sequence_number_n: {}", item.sequence_number_n);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "run_type_c: {}", item.run_type_c);
    loggerOMnet->log(Level, "instrument_or_risk_currency_c: {}", item.instrument_or_risk_currency_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_margin_results_internal_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "margin_date_s: {}", std::string(item.margin_date_s,sizeof(item.margin_date_s)).c_str());
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "sequence_number_n: {}", item.sequence_number_n);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "run_type_rm_internal_c: {}", item.run_type_rm_internal_c);
    loggerOMnet->log(Level, "margin_calculation_type_c: {}", item.margin_calculation_type_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_margin_series_param_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_margin_series_param_ext_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "intra_day2_c: {}", item.intra_day2_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "marg_run_nbr_n: {}", item.marg_run_nbr_n);
    loggerOMnet->log(Level, "marg_call_nbr_n: {}", item.marg_call_nbr_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_margin_ulg_price_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_marg_calc_runs_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "run_type_c: {}", item.run_type_c);
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_marg_sim_add_trade_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "sub_user_s: {}", std::string(item.sub_user_s,sizeof(item.sub_user_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_market_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_member_obligation_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "on_behalf_of_type_c: {}", item.on_behalf_of_type_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_missing_collateral_transaction_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "sequence_first_i: {}", item.sequence_first_i);
    loggerOMnet->log(Level, "sequence_last_i: {}", item.sequence_last_i);
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_missing_delivery_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "sequence_first_i: {}", item.sequence_first_i);
    loggerOMnet->log(Level, "sequence_last_i: {}", item.sequence_last_i);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_missing_give_up_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "sequence_first_i: {}", item.sequence_first_i);
    loggerOMnet->log(Level, "sequence_last_i: {}", item.sequence_last_i);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_missing_trade_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "sequence_first_i: {}", item.sequence_first_i);
    loggerOMnet->log(Level, "sequence_last_i: {}", item.sequence_last_i);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_missing_trade_change_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "instance_c: {}", item.instance_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level, "sequence_first_i: {}", item.sequence_first_i);
    loggerOMnet->log(Level, "sequence_last_i: {}", item.sequence_last_i);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_mm_protection_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_non_trading_days_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_non_trad_settl_days_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_open_interest_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.search_series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_open_interest_ext_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.search_series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_order_private_filter_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.search_series);
    print(item.whose);
    print(item.order_number_u);
    loggerOMnet->log(Level, "order_filter_i: {}", item.order_filter_i);
    loggerOMnet->log(Level, "stp_key_i: {}", item.stp_key_i);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_order_private_filter_p_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.search_series);
    print(item.whose);
    print(item.order_number_u);
    loggerOMnet->log(Level, "order_filter_i: {}", item.order_filter_i);
    loggerOMnet->log(Level, "stp_key_i: {}", item.stp_key_i);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_partition_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_paynote_info_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "pay_note_number_i: {}", item.pay_note_number_i);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_position_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.search_series);
    print(item.account);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_position_history_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_pos_level_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "series_id_s: {}", std::string(item.series_id_s,sizeof(item.series_id_s)).c_str());
    loggerOMnet->log(Level, "summary_i: {}", item.summary_i);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "account_type_s: {}", std::string(item.account_type_s,sizeof(item.account_type_s)).c_str());
    loggerOMnet->log(Level, "level_type_i: {}", item.level_type_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_prel_settlement_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "settlement_price_type_c: {}", item.settlement_price_type_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_pre_trade_limit_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_price_limit_trigger_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "only_this_series_c: {}", item.only_this_series_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_realtime_ulg_price_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_rectify_d_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.search_series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_rectify_d_cont_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "rectify_deal_number_q: {}", item.rectify_deal_number_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_rectify_t_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "instance_c: {}", item.instance_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    print(item.search_series);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_rectify_t_cont_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "rectify_trade_number_i: {}", item.rectify_trade_number_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_report_nrs_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "report_no_i: {}", item.report_no_i);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "ex_customer_s: {}", std::string(item.ex_customer_s,sizeof(item.ex_customer_s)).c_str());
    loggerOMnet->log(Level, "report_spec_s: {}", std::string(item.report_spec_s,sizeof(item.report_spec_s)).c_str());
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "only_account_reports_c: {}", item.only_account_reports_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_report_ver_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "info_type_i: {}", item.info_type_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_risk_margin_scaling_factor_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "sequence_number_n: {}", item.sequence_number_n);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "run_type_c: {}", item.run_type_c);
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_risk_margin_scaling_factor_internal_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "sequence_number_n: {}", item.sequence_number_n);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "run_type_c: {}", item.run_type_c);
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_rm_margin_sim_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "qry_segment_number_n: {}", item.qry_segment_number_n);
    loggerOMnet->log(Level, "last_qry_segment_c: {}", item.last_qry_segment_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_rm_param_obj_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "series_id_s: {}", std::string(item.series_id_s,sizeof(item.series_id_s)).c_str());
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "sequence_number_n: {}", item.sequence_number_n);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "margin_class_s: {}", std::string(item.margin_class_s,sizeof(item.margin_class_s)).c_str());
    loggerOMnet->log(Level, "run_type_c: {}", item.run_type_c);
    loggerOMnet->log(Level, "margin_class_filter_c: {}", item.margin_class_filter_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_segment_hdr_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_series_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_settlement_instruction_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "bank_id_s: {}", std::string(item.bank_id_s,sizeof(item.bank_id_s)).c_str());
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "int_id_s: {}", std::string(item.int_id_s,sizeof(item.int_id_s)).c_str());
    loggerOMnet->log(Level, "ssi_type_c: {}", item.ssi_type_c);
    loggerOMnet->log(Level, "ssi_id_q: {}", item.ssi_id_q);
    loggerOMnet->log(Level, "tax_code_c: {}", item.tax_code_c);
    loggerOMnet->log(Level, "clh_account_info_only_c: {}", item.clh_account_info_only_c);
    loggerOMnet->log(Level, "clh_account_id_s: {}", std::string(item.clh_account_id_s,sizeof(item.clh_account_id_s)).c_str());
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_simulate_fee_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "deal_price_i: {}", item.deal_price_i);
    loggerOMnet->log(Level, "deal_quantity_i: {}", item.deal_quantity_i);
    print(item.account);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "open_close_req_c: {}", item.open_close_req_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_state_type_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_tot_equil_prices_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_tot_ob_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_number_u);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "only_this_series_c: {}", item.only_this_series_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_tot_order_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.whose);
    loggerOMnet->log(Level, "stp_key_i: {}", item.stp_key_i);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "order_index_u: {}", item.order_index_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_tot_party_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_number_u);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_trade_report_otc_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.party);
    print(item.account);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "from_date_s: {}", std::string(item.from_date_s,sizeof(item.from_date_s)).c_str());
    loggerOMnet->log(Level, "to_date_s: {}", std::string(item.to_date_s,sizeof(item.to_date_s)).c_str());
    loggerOMnet->log(Level, "passthrough_s: {}", std::string(item.passthrough_s,sizeof(item.passthrough_s)).c_str());
    loggerOMnet->log(Level, "series_id_s: {}", std::string(item.series_id_s,sizeof(item.series_id_s)).c_str());
    loggerOMnet->log(Level, "trade_report_type_i: {}", item.trade_report_type_i);
    loggerOMnet->log(Level, "trade_report_state_c: {}", item.trade_report_state_c);
    loggerOMnet->log(Level, "bought_or_sold_c: {}", item.bought_or_sold_c);
    loggerOMnet->log(Level, "date_span_type_c: {}", item.date_span_type_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_trade_report_types_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_trade_statistics_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_trade_ticker_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.search_series);
    print(item.timestamp);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_trading_state_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_underlying_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_underlying_adjustment_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "date_adjust_s: {}", std::string(item.date_adjust_s,sizeof(item.date_adjust_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_updated_pos_info_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.search_series);
    print(item.account);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "modified_date_s: {}", std::string(item.modified_date_s,sizeof(item.modified_date_s)).c_str());
    loggerOMnet->log(Level, "modified_time_s: {}", std::string(item.modified_time_s,sizeof(item.modified_time_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_used_marg_params_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "sequence_number_n: {}", item.sequence_number_n);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "margin_class_s: {}", std::string(item.margin_class_s,sizeof(item.margin_class_s)).c_str());
    loggerOMnet->log(Level, "run_type_c: {}", item.run_type_c);
    loggerOMnet->log(Level, "margin_class_filter_c: {}", item.margin_class_filter_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_user_type_info_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const query_valuation_group_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const ranking_time_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.timestamp_ranking);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rectify_deal_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "instance_c: {}", item.instance_c);
    loggerOMnet->log(Level, "operation_c: {}", item.operation_c);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.other_series);
    loggerOMnet->log(Level, "deal_price_i: {}", item.deal_price_i);
    loggerOMnet->log(Level, "deal_number_i: {}", item.deal_number_i);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rectify_otc_trade_report_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "trade_report_nbr_q: {}", item.trade_report_nbr_q);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rectify_trade_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "trade_number_i: {}", item.trade_number_i);
    loggerOMnet->log(Level, "items_c: {}", item.items_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const register_account_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    print(item.store_account);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const reject_give_up_request_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "give_up_number_i: {}", item.give_up_number_i);
    loggerOMnet->log(Level, "give_up_text_s: {}", std::string(item.give_up_text_s,sizeof(item.give_up_text_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const report_marginable_spread_rm_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const report_ready_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "report_no_i: {}", item.report_no_i);
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "report_spec_s: {}", std::string(item.report_spec_s,sizeof(item.report_spec_s)).c_str());
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "as_of_date_s: {}", std::string(item.as_of_date_s,sizeof(item.as_of_date_s)).c_str());
    loggerOMnet->log(Level, "sent_date_s: {}", std::string(item.sent_date_s,sizeof(item.sent_date_s)).c_str());
    loggerOMnet->log(Level, "sent_time_s: {}", std::string(item.sent_time_s,sizeof(item.sent_time_s)).c_str());
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const reserve_order_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "display_quantity_i: {}", item.display_quantity_i);
    loggerOMnet->log(Level, "original_display_quantity_i: {}", item.original_display_quantity_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const restore_position_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "closeout_qty_i: {}", item.closeout_qty_i);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const risk_exposure_limit_vim_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.mra_account);
    loggerOMnet->log(Level, "trade_report_nbr_q: {}", item.trade_report_nbr_q);
    loggerOMnet->log(Level, "margin_requirement_q: {}", item.margin_requirement_q);
    loggerOMnet->log(Level, "margin_requirement_without_trade_q: {}", item.margin_requirement_without_trade_q);
    loggerOMnet->log(Level, "exposure_limit_q: {}", item.exposure_limit_q);
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const risk_scale_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level, "risk_margin_scaling_factor_n: {}", item.risk_margin_scaling_factor_n);
    loggerOMnet->log(Level, "country_id_s: {}", std::string(item.country_id_s,sizeof(item.country_id_s)).c_str());
    loggerOMnet->log(Level, "mar_id_s: {}", std::string(item.mar_id_s,sizeof(item.mar_id_s)).c_str());
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rm_margin_simulation_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "pos_sim_c: {}", item.pos_sim_c);
    loggerOMnet->log(Level, "price_sim_c: {}", item.price_sim_c);
    loggerOMnet->log(Level, "vol_sim_c: {}", item.vol_sim_c);
    loggerOMnet->log(Level, "output_level_c: {}", item.output_level_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "date_s: {}", std::string(item.date_s,sizeof(item.date_s)).c_str());
    loggerOMnet->log(Level, "series_exp_today_sim_c: {}", item.series_exp_today_sim_c);
    loggerOMnet->log(Level, "fut_pl_sim_c: {}", item.fut_pl_sim_c);
    loggerOMnet->log(Level, "sub_user_s: {}", std::string(item.sub_user_s,sizeof(item.sub_user_s)).c_str());
    loggerOMnet->log(Level, "margin_class_s: {}", std::string(item.margin_class_s,sizeof(item.margin_class_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rm_margin_sim_del_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "market_margin_q: {}", item.market_margin_q);
    loggerOMnet->log(Level, "market_currency_s: {}", std::string(item.market_currency_s,sizeof(item.market_currency_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "nbr_held_q: {}", item.nbr_held_q);
    loggerOMnet->log(Level, "nbr_written_q: {}", item.nbr_written_q);
    loggerOMnet->log(Level, "market_value_q: {}", item.market_value_q);
    loggerOMnet->log(Level, "price_spread_margin_q: {}", item.price_spread_margin_q);
    loggerOMnet->log(Level, "naked_margin_q: {}", item.naked_margin_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rm_margin_sim_failure_reason_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "failure_reason_s: {}", std::string(item.failure_reason_s,sizeof(item.failure_reason_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rm_margin_sim_markets_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rm_margin_sim_oms2_ivl_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "val_ivl_mid_i: {}", item.val_ivl_mid_i);
    loggerOMnet->log(Level, "val_ivl_low_i: {}", item.val_ivl_low_i);
    loggerOMnet->log(Level, "val_ivl_high_i: {}", item.val_ivl_high_i);
    loggerOMnet->log(Level, "dec_in_ivl_n: {}", item.dec_in_ivl_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rm_margin_sim_pay_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "market_margin_q: {}", item.market_margin_q);
    loggerOMnet->log(Level, "market_currency_s: {}", std::string(item.market_currency_s,sizeof(item.market_currency_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "naked_margin_q: {}", item.naked_margin_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rm_margin_sim_pos_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "market_margin_q: {}", item.market_margin_q);
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "nbr_held_q: {}", item.nbr_held_q);
    loggerOMnet->log(Level, "nbr_written_q: {}", item.nbr_written_q);
    loggerOMnet->log(Level, "market_value_q: {}", item.market_value_q);
    loggerOMnet->log(Level, "price_spread_margin_q: {}", item.price_spread_margin_q);
    loggerOMnet->log(Level, "naked_margin_q: {}", item.naked_margin_q);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rm_margin_sim_prices_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "bid_price_i: {}", item.bid_price_i);
    loggerOMnet->log(Level, "ask_price_i: {}", item.ask_price_i);
    loggerOMnet->log(Level, "marg_price_i: {}", item.marg_price_i);
    loggerOMnet->log(Level, "fixing_value_i: {}", item.fixing_value_i);
    loggerOMnet->log(Level, "margin_one_long_q: {}", item.margin_one_long_q);
    loggerOMnet->log(Level, "margin_one_short_q: {}", item.margin_one_short_q);
    loggerOMnet->log(Level, "dec_in_price_n: {}", item.dec_in_price_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rm_margin_sim_repo_trades_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.pos_account);
    print(item.series);
    loggerOMnet->log(Level, "sim_qty_q: {}", item.sim_qty_q);
    loggerOMnet->log(Level, "clean_price_i: {}", item.clean_price_i);
    loggerOMnet->log(Level, "repo_rate_i: {}", item.repo_rate_i);
    loggerOMnet->log(Level, "item_type_c: {}", item.item_type_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rm_margin_sim_settl_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "market_margin_q: {}", item.market_margin_q);
    loggerOMnet->log(Level, "market_currency_s: {}", std::string(item.market_currency_s,sizeof(item.market_currency_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "nbr_held_q: {}", item.nbr_held_q);
    loggerOMnet->log(Level, "nbr_written_q: {}", item.nbr_written_q);
    loggerOMnet->log(Level, "market_value_q: {}", item.market_value_q);
    loggerOMnet->log(Level, "price_spread_margin_q: {}", item.price_spread_margin_q);
    loggerOMnet->log(Level, "naked_margin_q: {}", item.naked_margin_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rm_margin_sim_sum_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "market_margin_q: {}", item.market_margin_q);
    loggerOMnet->log(Level, "risk_margin_q: {}", item.risk_margin_q);
    loggerOMnet->log(Level, "market_currency_s: {}", std::string(item.market_currency_s,sizeof(item.market_currency_s)).c_str());
    loggerOMnet->log(Level, "risk_currency_s: {}", std::string(item.risk_currency_s,sizeof(item.risk_currency_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rm_margin_sim_sum_pay_ulg_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "market_margin_q: {}", item.market_margin_q);
    loggerOMnet->log(Level, "market_currency_s: {}", std::string(item.market_currency_s,sizeof(item.market_currency_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rm_margin_sim_sum_pos_ulg_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "market_margin_q: {}", item.market_margin_q);
    loggerOMnet->log(Level, "market_currency_s: {}", std::string(item.market_currency_s,sizeof(item.market_currency_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "naked_margin_q: {}", item.naked_margin_q);
    loggerOMnet->log(Level, "marg_price_i: {}", item.marg_price_i);
    loggerOMnet->log(Level, "dec_in_price_n: {}", item.dec_in_price_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rm_margin_sim_trades_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "item_type_c: {}", item.item_type_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.series);
    loggerOMnet->log(Level, "sim_qty_q: {}", item.sim_qty_q);
    loggerOMnet->log(Level, "trade_price_sim_i: {}", item.trade_price_sim_i);
    loggerOMnet->log(Level, "reserved_i: {}", item.reserved_i);
    loggerOMnet->log(Level, "closing_date_s: {}", std::string(item.closing_date_s,sizeof(item.closing_date_s)).c_str());
    loggerOMnet->log(Level, "date_settlement_s: {}", std::string(item.date_settlement_s,sizeof(item.date_settlement_s)).c_str());
    loggerOMnet->log(Level, "reserved_8_s: {}", std::string(item.reserved_8_s,sizeof(item.reserved_8_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rm_margin_sim_trades_account_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rm_margin_sim_vola_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "vol_ivl_long_mid_i: {}", item.vol_ivl_long_mid_i);
    loggerOMnet->log(Level, "vol_ivl_short_mid_i: {}", item.vol_ivl_short_mid_i);
    loggerOMnet->log(Level, "vol_ivl_long_low_i: {}", item.vol_ivl_long_low_i);
    loggerOMnet->log(Level, "vol_ivl_short_low_i: {}", item.vol_ivl_short_low_i);
    loggerOMnet->log(Level, "vol_ivl_long_high_i: {}", item.vol_ivl_long_high_i);
    loggerOMnet->log(Level, "vol_ivl_short_high_i: {}", item.vol_ivl_short_high_i);
    loggerOMnet->log(Level, "margin_one_short_q: {}", item.margin_one_short_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const rpt_service_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "report_system_event_c: {}", item.report_system_event_c);
    loggerOMnet->log(Level, "service_description_s: {}", std::string(item.service_description_s,sizeof(item.service_description_s)).c_str());
    loggerOMnet->log(Level, "subsystem_c: {}", item.subsystem_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const run_info_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "request_nbr_u: {}", item.request_nbr_u);
    loggerOMnet->log(Level, "margin_sequence_nbr_u: {}", item.margin_sequence_nbr_u);
    loggerOMnet->log(Level, "valuation_date_s: {}", std::string(item.valuation_date_s,sizeof(item.valuation_date_s)).c_str());
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "margin_date_s: {}", std::string(item.margin_date_s,sizeof(item.margin_date_s)).c_str());
    loggerOMnet->log(Level, "margin_time_s: {}", std::string(item.margin_time_s,sizeof(item.margin_time_s)).c_str());
    loggerOMnet->log(Level, "clh_id_s: {}", std::string(item.clh_id_s,sizeof(item.clh_id_s)).c_str());
    loggerOMnet->log(Level, "collateral_evaluation_type_c: {}", item.collateral_evaluation_type_c);
    loggerOMnet->log(Level, "create_direct_debit_c: {}", item.create_direct_debit_c);
    loggerOMnet->log(Level, "intraday_evaluation_c: {}", item.intraday_evaluation_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const security_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.collateral_base);
    loggerOMnet->log(Level, "security_type_c: {}", item.security_type_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const segment_instance_number_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "instance_c: {}", item.instance_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "sequence_number_u: {}", item.sequence_number_u);
    print(item.trading_code);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const sequence_number_info_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "sequence_number_n: {}", item.sequence_number_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const sequence_number_info_int_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "created_clearing_date_s: {}", std::string(item.created_clearing_date_s,sizeof(item.created_clearing_date_s)).c_str());
    loggerOMnet->log(Level, "modified_clearing_date_s: {}", std::string(item.modified_clearing_date_s,sizeof(item.modified_clearing_date_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const series_bo_multi_update_bu1009_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const series_bo_update_bu9_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "chg_type_n: {}", item.chg_type_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.da9);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const series_multi_update_bu1002_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const series_update_bu2_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "chg_type_n: {}", item.chg_type_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.da2);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const settlement_instruction_info_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "account_number_s: {}", std::string(item.account_number_s,sizeof(item.account_number_s)).c_str());
    loggerOMnet->log(Level, "account_name_s: {}", std::string(item.account_name_s,sizeof(item.account_name_s)).c_str());
    loggerOMnet->log(Level, "bic_code_s: {}", std::string(item.bic_code_s,sizeof(item.bic_code_s)).c_str());
    loggerOMnet->log(Level, "aba_number_s: {}", std::string(item.aba_number_s,sizeof(item.aba_number_s)).c_str());
    loggerOMnet->log(Level, "clh_bank_account_number_s: {}", std::string(item.clh_bank_account_number_s,sizeof(item.clh_bank_account_number_s)).c_str());
    loggerOMnet->log(Level, "clh_bank_account_name_s: {}", std::string(item.clh_bank_account_name_s,sizeof(item.clh_bank_account_name_s)).c_str());
    loggerOMnet->log(Level, "clh_bank_bic_code_s: {}", std::string(item.clh_bank_bic_code_s,sizeof(item.clh_bank_bic_code_s)).c_str());
    loggerOMnet->log(Level, "intermediary_bic_code_s: {}", std::string(item.intermediary_bic_code_s,sizeof(item.intermediary_bic_code_s)).c_str());
    loggerOMnet->log(Level, "intermediary_bank_name_s: {}", std::string(item.intermediary_bank_name_s,sizeof(item.intermediary_bank_name_s)).c_str());
    loggerOMnet->log(Level, "bank_id_s: {}", std::string(item.bank_id_s,sizeof(item.bank_id_s)).c_str());
    loggerOMnet->log(Level, "clh_bank_id_s: {}", std::string(item.clh_bank_id_s,sizeof(item.clh_bank_id_s)).c_str());
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const settle_price_update_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const set_delta_limit_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.item);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const set_deny_exercise_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.account);
    loggerOMnet->log(Level, "deny_exercise_q: {}", item.deny_exercise_q);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const set_mm_protection_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.da87);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const single_order_insert_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const single_order_update_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_number_u);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const srs_cfm_param_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "cfm_id_s: {}", std::string(item.cfm_id_s,sizeof(item.cfm_id_s)).c_str());
    loggerOMnet->log(Level, "vol_int_down_i: {}", item.vol_int_down_i);
    loggerOMnet->log(Level, "vol_int_up_i: {}", item.vol_int_up_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const srs_dh_param_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "down_int_scan_q: {}", item.down_int_scan_q);
    loggerOMnet->log(Level, "up_int_scan_q: {}", item.up_int_scan_q);
    loggerOMnet->log(Level, "deliv_charge_spreads_rm_q: {}", item.deliv_charge_spreads_rm_q);
    loggerOMnet->log(Level, "deliv_charge_outrights_rm_q: {}", item.deliv_charge_outrights_rm_q);
    loggerOMnet->log(Level, "vol_down_rm_i: {}", item.vol_down_rm_i);
    loggerOMnet->log(Level, "vol_up_rm_i: {}", item.vol_up_rm_i);
    loggerOMnet->log(Level, "delta_scale_fac_rm_i: {}", item.delta_scale_fac_rm_i);
    loggerOMnet->log(Level, "down_int_3t_rm_n: {}", item.down_int_3t_rm_n);
    loggerOMnet->log(Level, "up_int_3t_rm_n: {}", item.up_int_3t_rm_n);
    loggerOMnet->log(Level, "dhg_id_s: {}", std::string(item.dhg_id_s,sizeof(item.dhg_id_s)).c_str());
    loggerOMnet->log(Level, "cco_id_s: {}", std::string(item.cco_id_s,sizeof(item.cco_id_s)).c_str());
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const srs_marg_param_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    loggerOMnet->log(Level, "margin_class_s: {}", std::string(item.margin_class_s,sizeof(item.margin_class_s)).c_str());
    loggerOMnet->log(Level, "marg_meth_inst_c: {}", item.marg_meth_inst_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const srs_oms2_param_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "oms_id_s: {}", std::string(item.oms_id_s,sizeof(item.oms_id_s)).c_str());
    loggerOMnet->log(Level, "window_class_id_s: {}", std::string(item.window_class_id_s,sizeof(item.window_class_id_s)).c_str());
    loggerOMnet->log(Level, "val_int_down_i: {}", item.val_int_down_i);
    loggerOMnet->log(Level, "val_int_up_i: {}", item.val_int_up_i);
    loggerOMnet->log(Level, "vol_int_down_i: {}", item.vol_int_down_i);
    loggerOMnet->log(Level, "vol_int_up_i: {}", item.vol_int_up_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const srs_pri_param_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "ppr_id_s: {}", std::string(item.ppr_id_s,sizeof(item.ppr_id_s)).c_str());
    loggerOMnet->log(Level, "dividend_yield_i: {}", item.dividend_yield_i);
    loggerOMnet->log(Level, "risk_free_rate_i: {}", item.risk_free_rate_i);
    loggerOMnet->log(Level, "fixed_vol_rm_i: {}", item.fixed_vol_rm_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const standard_settlement_instruction_details_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.account);
    print(item.trading_code);
    loggerOMnet->log(Level, "version_n: {}", item.version_n);
    loggerOMnet->log(Level, "ssi_type_c: {}", item.ssi_type_c);
    loggerOMnet->log(Level, "state_c: {}", item.state_c);
    loggerOMnet->log(Level, "ssi_id_q: {}", item.ssi_id_q);
    loggerOMnet->log(Level, "bank_id_s: {}", std::string(item.bank_id_s,sizeof(item.bank_id_s)).c_str());
    loggerOMnet->log(Level, "int_id_s: {}", std::string(item.int_id_s,sizeof(item.int_id_s)).c_str());
    loggerOMnet->log(Level, "bank_name_s: {}", std::string(item.bank_name_s,sizeof(item.bank_name_s)).c_str());
    loggerOMnet->log(Level, "bic_code_s: {}", std::string(item.bic_code_s,sizeof(item.bic_code_s)).c_str());
    loggerOMnet->log(Level, "account_number_s: {}", std::string(item.account_number_s,sizeof(item.account_number_s)).c_str());
    loggerOMnet->log(Level, "account_name_s: {}", std::string(item.account_name_s,sizeof(item.account_name_s)).c_str());
    loggerOMnet->log(Level, "currency_s: {}", std::string(item.currency_s,sizeof(item.currency_s)).c_str());
    loggerOMnet->log(Level, "clh_account_id_s: {}", std::string(item.clh_account_id_s,sizeof(item.clh_account_id_s)).c_str());
    loggerOMnet->log(Level, "aba_number_s: {}", std::string(item.aba_number_s,sizeof(item.aba_number_s)).c_str());
    loggerOMnet->log(Level, "tax_code_c: {}", item.tax_code_c);
    loggerOMnet->log(Level, "created_date_s: {}", std::string(item.created_date_s,sizeof(item.created_date_s)).c_str());
    loggerOMnet->log(Level, "created_time_s: {}", std::string(item.created_time_s,sizeof(item.created_time_s)).c_str());
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const standard_trade_report_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "quantity_i: {}", item.quantity_i);
    loggerOMnet->log(Level, "premium_i: {}", item.premium_i);
    loggerOMnet->log(Level, "filler_8_s: {}", std::string(item.filler_8_s,sizeof(item.filler_8_s)).c_str());
    loggerOMnet->log(Level, "customer_info_s: {}", std::string(item.customer_info_s,sizeof(item.customer_info_s)).c_str());
    loggerOMnet->log(Level, "open_close_req_c: {}", item.open_close_req_c);
    loggerOMnet->log(Level, "ext_t_state_c: {}", item.ext_t_state_c);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_date_s: {}", std::string(item.time_of_agreement_date_s,sizeof(item.time_of_agreement_date_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_time_s: {}", std::string(item.time_of_agreement_time_s,sizeof(item.time_of_agreement_time_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    print(item.match_id);
    print(item.order_number_u);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const stop_order_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_var);
    print(item.stop_series);
    loggerOMnet->log(Level, "limit_premium_i: {}", item.limit_premium_i);
    print(item.give_up_member);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "total_volume_i: {}", item.total_volume_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const stop_order_trans_p_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.trading_code);
    print(item.order_var);
    print(item.stop_series);
    loggerOMnet->log(Level, "limit_premium_i: {}", item.limit_premium_i);
    print(item.give_up_member);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level, "total_volume_i: {}", item.total_volume_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const sub_item_hdr_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "named_struct_n: {}", item.named_struct_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const suspend_resume_trading_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "on_off_c: {}", item.on_off_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const time_in_force_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "time_validity_n: {}", item.time_validity_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const tm_trade_rpt_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_var);
    print(item.party);
    loggerOMnet->log(Level, "commodity_n: {}", item.commodity_n);
    loggerOMnet->log(Level, "expiration_date_n: {}", item.expiration_date_n);
    loggerOMnet->log(Level, "strike_price_i: {}", item.strike_price_i);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const trade_report_1_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.order_var);
    print(item.party);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    print(item.give_up_member);
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_date_s: {}", std::string(item.time_of_agreement_date_s,sizeof(item.time_of_agreement_date_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_time_s: {}", std::string(item.time_of_agreement_time_s,sizeof(item.time_of_agreement_time_s)).c_str());
    loggerOMnet->log(Level, "deferred_publication_c: {}", item.deferred_publication_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const trade_report_1_trans_p_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.trading_code);
    print(item.order_var);
    print(item.party);
    loggerOMnet->log(Level, "exchange_info_s: {}", std::string(item.exchange_info_s,sizeof(item.exchange_info_s)).c_str());
    print(item.give_up_member);
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_date_s: {}", std::string(item.time_of_agreement_date_s,sizeof(item.time_of_agreement_date_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_time_s: {}", std::string(item.time_of_agreement_time_s,sizeof(item.time_of_agreement_time_s)).c_str());
    loggerOMnet->log(Level, "deferred_publication_c: {}", item.deferred_publication_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const trade_report_2_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "mp_quantity_i: {}", item.mp_quantity_i);
    loggerOMnet->log(Level, "premium_i: {}", item.premium_i);
    loggerOMnet->log(Level, "block_n: {}", item.block_n);
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_date_s: {}", std::string(item.time_of_agreement_date_s,sizeof(item.time_of_agreement_date_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_time_s: {}", std::string(item.time_of_agreement_time_s,sizeof(item.time_of_agreement_time_s)).c_str());
    loggerOMnet->log(Level, "ext_t_state_c: {}", item.ext_t_state_c);
    loggerOMnet->log(Level, "deferred_publication_c: {}", item.deferred_publication_c);
    print(item.bid_side);
    print(item.ask_side);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const trade_report_base_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.series);
    print(item.party);
    print(item.order_number_u);
    loggerOMnet->log(Level, "premium_i: {}", item.premium_i);
    loggerOMnet->log(Level, "quantity_i: {}", item.quantity_i);
    loggerOMnet->log(Level, "bid_or_ask_c: {}", item.bid_or_ask_c);
    loggerOMnet->log(Level, "trade_report_type: {}", item.trade_report_type);
    loggerOMnet->log(Level, "time_of_agreement_date_s: {}", std::string(item.time_of_agreement_date_s,sizeof(item.time_of_agreement_date_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_time_s: {}", std::string(item.time_of_agreement_time_s,sizeof(item.time_of_agreement_time_s)).c_str());
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "deferred_publication_c: {}", item.deferred_publication_c);
    loggerOMnet->log(Level, "ob_command_c: {}", item.ob_command_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const trade_report_trade_ticker_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "trade_report_type: {}", item.trade_report_type);
    loggerOMnet->log(Level, "settlement_date_s: {}", std::string(item.settlement_date_s,sizeof(item.settlement_date_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_date_s: {}", std::string(item.time_of_agreement_date_s,sizeof(item.time_of_agreement_date_s)).c_str());
    loggerOMnet->log(Level, "time_of_agreement_time_s: {}", std::string(item.time_of_agreement_time_s,sizeof(item.time_of_agreement_time_s)).c_str());
    loggerOMnet->log(Level, "outside_info_spread_c: {}", item.outside_info_spread_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const trade_report_trans_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    loggerOMnet->log(Level, "mp_quantity_i: {}", item.mp_quantity_i);
    loggerOMnet->log(Level, "premium_i: {}", item.premium_i);
    loggerOMnet->log(Level, "block_n: {}", item.block_n);
    loggerOMnet->log(Level, "ext_t_state_c: {}", item.ext_t_state_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    print(item.bid_side);
    print(item.ask_side);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const trade_ticker_amend_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "execution_event_nbr_u: {}", item.execution_event_nbr_u);
    loggerOMnet->log(Level, "match_group_nbr_u: {}", item.match_group_nbr_u);
    loggerOMnet->log(Level, "trade_state_c: {}", item.trade_state_c);
    loggerOMnet->log(Level, "include_in_statistics_c: {}", item.include_in_statistics_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const trans_segment_hdr_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    loggerOMnet->log(Level, "items_n: {}", item.items_n);
    loggerOMnet->log(Level, "size_n: {}", item.size_n);
    loggerOMnet->log(Level, "segment_number_n: {}", item.segment_number_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const trigger_on_session_order_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "session_type_id_n: {}", item.session_type_id_n);
    loggerOMnet->log(Level, "time_validity_n: {}", item.time_validity_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const trigger_order_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.stop_series);
    loggerOMnet->log(Level, "limit_premium_i: {}", item.limit_premium_i);
    loggerOMnet->log(Level, "time_validity_n: {}", item.time_validity_n);
    loggerOMnet->log(Level, "stop_condition_c: {}", item.stop_condition_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const underlying_update_bu4_bu19_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "chg_type_n: {}", item.chg_type_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    print(item.da4_da19);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const undo_info_ready_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.broadcast_type);
    loggerOMnet->log(Level, "info_type_i: {}", item.info_type_i);
    print(item.series);
    loggerOMnet->log(Level, "business_date_s: {}", std::string(item.business_date_s,sizeof(item.business_date_s)).c_str());
    loggerOMnet->log(Level, "clearing_date_s: {}", std::string(item.clearing_date_s,sizeof(item.clearing_date_s)).c_str());
    loggerOMnet->log(Level, "sent_date_s: {}", std::string(item.sent_date_s,sizeof(item.sent_date_s)).c_str());
    loggerOMnet->log(Level, "sent_time_s: {}", std::string(item.sent_time_s,sizeof(item.sent_time_s)).c_str());
    loggerOMnet->log(Level, "seq_num_srm_n: {}", item.seq_num_srm_n);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const used_comb_com_group_params_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "ccg_id_s: {}", std::string(item.ccg_id_s,sizeof(item.ccg_id_s)).c_str());
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "credit_rate_rm_i: {}", item.credit_rate_rm_i);
    loggerOMnet->log(Level, "tier_1_rm_n: {}", item.tier_1_rm_n);
    loggerOMnet->log(Level, "tier_2_rm_n: {}", item.tier_2_rm_n);
    loggerOMnet->log(Level, "tier_3_rm_n: {}", item.tier_3_rm_n);
    loggerOMnet->log(Level, "tier_4_rm_n: {}", item.tier_4_rm_n);
    loggerOMnet->log(Level, "priority_n: {}", item.priority_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "cco_id_1_s: {}", std::string(item.cco_id_1_s,sizeof(item.cco_id_1_s)).c_str());
    loggerOMnet->log(Level, "cco_id_2_s: {}", std::string(item.cco_id_2_s,sizeof(item.cco_id_2_s)).c_str());
    loggerOMnet->log(Level, "cco_id_3_s: {}", std::string(item.cco_id_3_s,sizeof(item.cco_id_3_s)).c_str());
    loggerOMnet->log(Level, "cco_id_4_s: {}", std::string(item.cco_id_4_s,sizeof(item.cco_id_4_s)).c_str());
    loggerOMnet->log(Level, "ds_ratio_1_rm_i: {}", item.ds_ratio_1_rm_i);
    loggerOMnet->log(Level, "ds_ratio_2_rm_i: {}", item.ds_ratio_2_rm_i);
    loggerOMnet->log(Level, "ds_ratio_3_rm_i: {}", item.ds_ratio_3_rm_i);
    loggerOMnet->log(Level, "ds_ratio_4_rm_i: {}", item.ds_ratio_4_rm_i);
    loggerOMnet->log(Level, "a_or_b_1_rm_c: {}", item.a_or_b_1_rm_c);
    loggerOMnet->log(Level, "a_or_b_2_rm_c: {}", item.a_or_b_2_rm_c);
    loggerOMnet->log(Level, "a_or_b_3_rm_c: {}", item.a_or_b_3_rm_c);
    loggerOMnet->log(Level, "a_or_b_4_rm_c: {}", item.a_or_b_4_rm_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const used_comb_com_params_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "short_opt_min_charge_i: {}", item.short_opt_min_charge_i);
    loggerOMnet->log(Level, "init_to_maint_speculator_rm_i: {}", item.init_to_maint_speculator_rm_i);
    loggerOMnet->log(Level, "init_to_maint_omnibus_rm_i: {}", item.init_to_maint_omnibus_rm_i);
    loggerOMnet->log(Level, "init_to_maint_hedge_rm_i: {}", item.init_to_maint_hedge_rm_i);
    loggerOMnet->log(Level, "cco_id_s: {}", std::string(item.cco_id_s,sizeof(item.cco_id_s)).c_str());
    loggerOMnet->log(Level, "tie_id_s: {}", std::string(item.tie_id_s,sizeof(item.tie_id_s)).c_str());
    loggerOMnet->log(Level, "irm_id_s: {}", std::string(item.irm_id_s,sizeof(item.irm_id_s)).c_str());
    loggerOMnet->log(Level, "ccg_id_s: {}", std::string(item.ccg_id_s,sizeof(item.ccg_id_s)).c_str());
    loggerOMnet->log(Level, "ic_tie_id_s: {}", std::string(item.ic_tie_id_s,sizeof(item.ic_tie_id_s)).c_str());
    loggerOMnet->log(Level, "risk_expo_rm_c: {}", item.risk_expo_rm_c);
    loggerOMnet->log(Level, "limit_opt_rm_c: {}", item.limit_opt_rm_c);
    loggerOMnet->log(Level, "written_opt_rm_c: {}", item.written_opt_rm_c);
    loggerOMnet->log(Level, "exp_month_in_rpf_rm_c: {}", item.exp_month_in_rpf_rm_c);
    loggerOMnet->log(Level, "granularity_c: {}", item.granularity_c);
    loggerOMnet->log(Level, "filler_6_s: {}", std::string(item.filler_6_s,sizeof(item.filler_6_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const used_delta_hedge_params_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "dhg_id_s: {}", std::string(item.dhg_id_s,sizeof(item.dhg_id_s)).c_str());
    loggerOMnet->log(Level, "extr_move_cov_rm_i: {}", item.extr_move_cov_rm_i);
    loggerOMnet->log(Level, "offset_days_zero_risk_rm_i: {}", item.offset_days_zero_risk_rm_i);
    loggerOMnet->log(Level, "erosion_rm_i: {}", item.erosion_rm_i);
    loggerOMnet->log(Level, "er_trd_days_in_year_rm_i: {}", item.er_trd_days_in_year_rm_i);
    loggerOMnet->log(Level, "offset_days_intr_rm_n: {}", item.offset_days_intr_rm_n);
    loggerOMnet->log(Level, "offset_days_end_rm_n: {}", item.offset_days_end_rm_n);
    loggerOMnet->log(Level, "val_interv_base_scan_c: {}", item.val_interv_base_scan_c);
    loggerOMnet->log(Level, "dec_in_risk_array_c: {}", item.dec_in_risk_array_c);
    loggerOMnet->log(Level, "cap_neg_scenario_price_c: {}", item.cap_neg_scenario_price_c);
    loggerOMnet->log(Level, "zero_risk_till_exp_date_rm_c: {}", item.zero_risk_till_exp_date_rm_c);
    loggerOMnet->log(Level, "incl_opt_prem_rm_c: {}", item.incl_opt_prem_rm_c);
    loggerOMnet->log(Level, "backtest_phys_del_rm_c: {}", item.backtest_phys_del_rm_c);
    loggerOMnet->log(Level, "base_for_adjustment_c: {}", item.base_for_adjustment_c);
    loggerOMnet->log(Level, "deliv_margin_rm_c: {}", item.deliv_margin_rm_c);
    loggerOMnet->log(Level, "paym_margin_rm_c: {}", item.paym_margin_rm_c);
    loggerOMnet->log(Level, "base_offset_days_rm_c: {}", item.base_offset_days_rm_c);
    loggerOMnet->log(Level, "val_interv_type_scan_c: {}", item.val_interv_type_scan_c);
    loggerOMnet->log(Level, "vol_interv_type_rm_c: {}", item.vol_interv_type_rm_c);
    loggerOMnet->log(Level, "time_dep_base_dhg_c: {}", item.time_dep_base_dhg_c);
    loggerOMnet->log(Level, "incl_in_seq_nbr_change_c: {}", item.incl_in_seq_nbr_change_c);
    loggerOMnet->log(Level, "reference_date_dhg_c: {}", item.reference_date_dhg_c);
    loggerOMnet->log(Level, "reference_time_of_day_c: {}", item.reference_time_of_day_c);
    loggerOMnet->log(Level, "interpolation_rm_c: {}", item.interpolation_rm_c);
    loggerOMnet->log(Level, "filler_3_s: {}", std::string(item.filler_3_s,sizeof(item.filler_3_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const used_global_risk_marg_class_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "pgr_id_s: {}", std::string(item.pgr_id_s,sizeof(item.pgr_id_s)).c_str());
    loggerOMnet->log(Level, "mrg_id_s: {}", std::string(item.mrg_id_s,sizeof(item.mrg_id_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const used_global_risk_params_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "pgr_id_s: {}", std::string(item.pgr_id_s,sizeof(item.pgr_id_s)).c_str());
    loggerOMnet->log(Level, "default_currency_s: {}", std::string(item.default_currency_s,sizeof(item.default_currency_s)).c_str());
    loggerOMnet->log(Level, "exchange_complex_s: {}", std::string(item.exchange_complex_s,sizeof(item.exchange_complex_s)).c_str());
    loggerOMnet->log(Level, "risk_file_exchange_acronym_s: {}", std::string(item.risk_file_exchange_acronym_s,sizeof(item.risk_file_exchange_acronym_s)).c_str());
    loggerOMnet->log(Level, "risk_file_exchange_code_s: {}", std::string(item.risk_file_exchange_code_s,sizeof(item.risk_file_exchange_code_s)).c_str());
    loggerOMnet->log(Level, "gross_marg_meth_intra_c: {}", item.gross_marg_meth_intra_c);
    loggerOMnet->log(Level, "filler_1_s: {}", item.filler_1_s);
    loggerOMnet->log(Level, "iter_max_no_i: {}", item.iter_max_no_i);
    loggerOMnet->log(Level, "iter_accuracy_q: {}", item.iter_accuracy_q);
    loggerOMnet->log(Level, "margin_offset_limit_n: {}", item.margin_offset_limit_n);
    loggerOMnet->log(Level, "dec_in_accuracy_n: {}", item.dec_in_accuracy_n);
    loggerOMnet->log(Level, "time_steps_n: {}", item.time_steps_n);
    loggerOMnet->log(Level, "dec_in_delta_weight_n: {}", item.dec_in_delta_weight_n);
    loggerOMnet->log(Level, "incl_expiring_series_c: {}", item.incl_expiring_series_c);
    loggerOMnet->log(Level, "create_riskparam_file_c: {}", item.create_riskparam_file_c);
    loggerOMnet->log(Level, "decimal_composit_delta_c: {}", item.decimal_composit_delta_c);
    loggerOMnet->log(Level, "gross_marg_meth_c: {}", item.gross_marg_meth_c);
    loggerOMnet->log(Level, "delta_weight_1_i: {}", item.delta_weight_1_i);
    loggerOMnet->log(Level, "delta_weight_2_i: {}", item.delta_weight_2_i);
    loggerOMnet->log(Level, "delta_weight_3_i: {}", item.delta_weight_3_i);
    loggerOMnet->log(Level, "delta_weight_4_i: {}", item.delta_weight_4_i);
    loggerOMnet->log(Level, "delta_weight_5_i: {}", item.delta_weight_5_i);
    loggerOMnet->log(Level, "delta_weight_6_i: {}", item.delta_weight_6_i);
    loggerOMnet->log(Level, "delta_weight_7_i: {}", item.delta_weight_7_i);
    loggerOMnet->log(Level, "delta_weight_8_i: {}", item.delta_weight_8_i);
    loggerOMnet->log(Level, "delta_weight_9_i: {}", item.delta_weight_9_i);
    loggerOMnet->log(Level, "delta_weight_10_i: {}", item.delta_weight_10_i);
    loggerOMnet->log(Level, "delta_weight_11_i: {}", item.delta_weight_11_i);
    loggerOMnet->log(Level, "delta_weight_12_i: {}", item.delta_weight_12_i);
    loggerOMnet->log(Level, "delta_weight_13_i: {}", item.delta_weight_13_i);
    loggerOMnet->log(Level, "delta_weight_14_i: {}", item.delta_weight_14_i);
    loggerOMnet->log(Level, "delta_weight_15_i: {}", item.delta_weight_15_i);
    loggerOMnet->log(Level, "delta_weight_16_i: {}", item.delta_weight_16_i);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const used_inter_month_spread_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "irm_id_s: {}", std::string(item.irm_id_s,sizeof(item.irm_id_s)).c_str());
    loggerOMnet->log(Level, "priority_n: {}", item.priority_n);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level, "charge_rm_q: {}", item.charge_rm_q);
    loggerOMnet->log(Level, "tier_1_rm_n: {}", item.tier_1_rm_n);
    loggerOMnet->log(Level, "tier_2_rm_n: {}", item.tier_2_rm_n);
    loggerOMnet->log(Level, "tier_3_rm_n: {}", item.tier_3_rm_n);
    loggerOMnet->log(Level, "tier_4_rm_n: {}", item.tier_4_rm_n);
    loggerOMnet->log(Level, "ds_ratio_1_rm_c: {}", item.ds_ratio_1_rm_c);
    loggerOMnet->log(Level, "ds_ratio_2_rm_c: {}", item.ds_ratio_2_rm_c);
    loggerOMnet->log(Level, "ds_ratio_3_rm_c: {}", item.ds_ratio_3_rm_c);
    loggerOMnet->log(Level, "ds_ratio_4_rm_c: {}", item.ds_ratio_4_rm_c);
    loggerOMnet->log(Level, "a_or_b_1_rm_c: {}", item.a_or_b_1_rm_c);
    loggerOMnet->log(Level, "a_or_b_2_rm_c: {}", item.a_or_b_2_rm_c);
    loggerOMnet->log(Level, "a_or_b_3_rm_c: {}", item.a_or_b_3_rm_c);
    loggerOMnet->log(Level, "a_or_b_4_rm_c: {}", item.a_or_b_4_rm_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const used_price_params_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "ppr_id_s: {}", std::string(item.ppr_id_s,sizeof(item.ppr_id_s)).c_str());
    loggerOMnet->log(Level, "iter_low_bound_rm_i: {}", item.iter_low_bound_rm_i);
    loggerOMnet->log(Level, "iter_high_bound_rm_i: {}", item.iter_high_bound_rm_i);
    loggerOMnet->log(Level, "days_per_year_rm_n: {}", item.days_per_year_rm_n);
    loggerOMnet->log(Level, "interest_rate_rm_c: {}", item.interest_rate_rm_c);
    loggerOMnet->log(Level, "use_dividend_rm_c: {}", item.use_dividend_rm_c);
    loggerOMnet->log(Level, "dividend_yield_type_c: {}", item.dividend_yield_type_c);
    loggerOMnet->log(Level, "theo_pr_meth_rm_c: {}", item.theo_pr_meth_rm_c);
    loggerOMnet->log(Level, "theo_pr_meth_div_rm_c: {}", item.theo_pr_meth_div_rm_c);
    loggerOMnet->log(Level, "opt_price_base_1_rm_c: {}", item.opt_price_base_1_rm_c);
    loggerOMnet->log(Level, "opt_price_base_2_rm_c: {}", item.opt_price_base_2_rm_c);
    loggerOMnet->log(Level, "opt_mid_price_rm_c: {}", item.opt_mid_price_rm_c);
    loggerOMnet->log(Level, "reverse_prices_rm_c: {}", item.reverse_prices_rm_c);
    loggerOMnet->log(Level, "vol_used_rm_c: {}", item.vol_used_rm_c);
    loggerOMnet->log(Level, "real_time_price_opt_rm_c: {}", item.real_time_price_opt_rm_c);
    loggerOMnet->log(Level, "real_time_price_fut_rm_c: {}", item.real_time_price_fut_rm_c);
    loggerOMnet->log(Level, "interpolation_rm_c: {}", item.interpolation_rm_c);
    loggerOMnet->log(Level, "time_dep_base_ppr_c: {}", item.time_dep_base_ppr_c);
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const used_tier_t& item) {
    loggerOMnet->log(Level,"{");
    loggerOMnet->log(Level, "tie_id_s: {}", std::string(item.tie_id_s,sizeof(item.tie_id_s)).c_str());
    loggerOMnet->log(Level, "tier_number_i: {}", item.tier_number_i);
    loggerOMnet->log(Level, "max_tier_number_i: {}", item.max_tier_number_i);
    loggerOMnet->log(Level, "reference_date_c: {}", item.reference_date_c);
    loggerOMnet->log(Level, "reference_time_of_day_c: {}", item.reference_time_of_day_c);
    loggerOMnet->log(Level, "filler_2_s: {}", std::string(item.filler_2_s,sizeof(item.filler_2_s)).c_str());
    loggerOMnet->log(Level,"}");
}

void OMnetLogger::print(const withdraw_collateral_mwa_txn_t& item) {
    loggerOMnet->log(Level,"{");
    print(item.transaction_type);
    print(item.series);
    print(item.withdraw_collateral_mwa_ssi);
    loggerOMnet->log(Level, "filler_4_s: {}", std::string(item.filler_4_s,sizeof(item.filler_4_s)).c_str());
    loggerOMnet->log(Level,"}");
}

