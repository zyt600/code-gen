#include <iostream>
#include "omex_sgx.h"

void print_quad_word(quad_word* ptr) {
    std::cout << "quad_word: " << ptr->quad_word << std::endl;
}

void print_transaction_type_t(transaction_type_t* ptr) {
    std::cout << "central_module_c: " << ptr->central_module_c << std::endl;
    std::cout << "server_type_c: " << ptr->server_type_c << std::endl;
    std::cout << "transaction_number_n: " << ptr->transaction_number_n << std::endl;
}

void print_series_t(series_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "instrument_group_c: " << ptr->instrument_group_c << std::endl;
    std::cout << "modifier_c: " << ptr->modifier_c << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "expiration_date_n: " << ptr->expiration_date_n << std::endl;
    std::cout << "strike_price_i: " << ptr->strike_price_i << std::endl;
}

void print_account_t(account_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_countersign_t(countersign_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_prop_trade_account_t(prop_trade_account_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_prop_deliv_account_t(prop_deliv_account_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_prop_pos_account_t(prop_pos_account_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_prop_margin_account_t(prop_margin_account_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_sink_account_t(sink_account_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_prop_origin_account_t(prop_origin_account_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_prop_call_account_t(prop_call_account_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_prop_settlement_account_t(prop_settlement_account_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_delivery_account_t(delivery_account_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_deliv_base_t(deliv_base_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "instrument_group_c: " << ptr->instrument_group_c << std::endl;
    std::cout << "modifier_c: " << ptr->modifier_c << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "expiration_date_n: " << ptr->expiration_date_n << std::endl;
    std::cout << "strike_price_i: " << ptr->strike_price_i << std::endl;
}

void print_party_t(party_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_participant_t(participant_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_trading_code_t(trading_code_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "user_id_s: " << ptr->user_id_s << std::endl;
}

void print_tick_size_t(tick_size_t* ptr) {
    std::cout << "step_size_i: " << ptr->step_size_i << std::endl;
    std::cout << "lower_limit_i: " << ptr->lower_limit_i << std::endl;
    std::cout << "upper_limit_i: " << ptr->upper_limit_i << std::endl;
}

void print_transaction_type_low_t(transaction_type_low_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
}

void print_transaction_type_high_t(transaction_type_high_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
}

void print_series_fields_used_t(series_fields_used_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "instrument_group_c: " << ptr->instrument_group_c << std::endl;
    std::cout << "modifier_c: " << ptr->modifier_c << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "expiration_date_n: " << ptr->expiration_date_n << std::endl;
    std::cout << "strike_price_i: " << ptr->strike_price_i << std::endl;
}

void print_partition_low_t(partition_low_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "instrument_group_c: " << ptr->instrument_group_c << std::endl;
    std::cout << "modifier_c: " << ptr->modifier_c << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "expiration_date_n: " << ptr->expiration_date_n << std::endl;
    std::cout << "strike_price_i: " << ptr->strike_price_i << std::endl;
}

void print_partition_high_t(partition_high_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "instrument_group_c: " << ptr->instrument_group_c << std::endl;
    std::cout << "modifier_c: " << ptr->modifier_c << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "expiration_date_n: " << ptr->expiration_date_n << std::endl;
    std::cout << "strike_price_i: " << ptr->strike_price_i << std::endl;
}

void print_new_series_t(new_series_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "instrument_group_c: " << ptr->instrument_group_c << std::endl;
    std::cout << "modifier_c: " << ptr->modifier_c << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "expiration_date_n: " << ptr->expiration_date_n << std::endl;
    std::cout << "strike_price_i: " << ptr->strike_price_i << std::endl;
}

void print_ex_user_code_t(ex_user_code_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "user_id_s: " << ptr->user_id_s << std::endl;
}

void print_user_code_t(user_code_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "user_id_s: " << ptr->user_id_s << std::endl;
}

void print_new_account_t(new_account_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_order_var_t(order_var_t* ptr) {
    std::cout << "mp_quantity_i: " << ptr->mp_quantity_i << std::endl;
    std::cout << "premium_i: " << ptr->premium_i << std::endl;
    std::cout << "block_n: " << ptr->block_n << std::endl;
    std::cout << "time_validity_n: " << ptr->time_validity_n << std::endl;
    std::cout << "exch_order_type_n: " << ptr->exch_order_type_n << std::endl;
    std::cout << "trigger_order_time_validity_n: " << ptr->trigger_order_time_validity_n << std::endl;
    std::cout << "ex_client_s: " << ptr->ex_client_s << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
    std::cout << "open_close_req_c: " << ptr->open_close_req_c << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "ext_t_state_c: " << ptr->ext_t_state_c << std::endl;
    std::cout << "order_type_c: " << ptr->order_type_c << std::endl;
    std::cout << "stop_condition_c: " << ptr->stop_condition_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_give_up_member_t(give_up_member_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_combo_series_t(combo_series_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "instrument_group_c: " << ptr->instrument_group_c << std::endl;
    std::cout << "modifier_c: " << ptr->modifier_c << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "expiration_date_n: " << ptr->expiration_date_n << std::endl;
    std::cout << "strike_price_i: " << ptr->strike_price_i << std::endl;
}

void print_upper_level_series_t(upper_level_series_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "instrument_group_c: " << ptr->instrument_group_c << std::endl;
    std::cout << "modifier_c: " << ptr->modifier_c << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "expiration_date_n: " << ptr->expiration_date_n << std::endl;
    std::cout << "strike_price_i: " << ptr->strike_price_i << std::endl;
}

void print_status_item_t(status_item_t* ptr) {
    std::cout << "field_s: " << ptr->field_s << std::endl;
    std::cout << "stat_description_s: " << ptr->stat_description_s << std::endl;
}

void print_account_data_t(account_data_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "countersign: " << ptr->countersign << std::endl;
    std::cout << "prop_trade_account: " << ptr->prop_trade_account << std::endl;
    std::cout << "prop_deliv_account: " << ptr->prop_deliv_account << std::endl;
    std::cout << "prop_pos_account: " << ptr->prop_pos_account << std::endl;
    std::cout << "prop_margin_account: " << ptr->prop_margin_account << std::endl;
    std::cout << "sink_account: " << ptr->sink_account << std::endl;
    std::cout << "prop_origin_account: " << ptr->prop_origin_account << std::endl;
    std::cout << "prop_call_account: " << ptr->prop_call_account << std::endl;
    std::cout << "prop_non_ccp_margin_account: " << ptr->prop_non_ccp_margin_account << std::endl;
    std::cout << "prop_settlement_account: " << ptr->prop_settlement_account << std::endl;
    std::cout << "rank_class_i: " << ptr->rank_class_i << std::endl;
    std::cout << "risk_currency_s: " << ptr->risk_currency_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "investor_type_s: " << ptr->investor_type_s << std::endl;
    std::cout << "nationality_s: " << ptr->nationality_s << std::endl;
    std::cout << "account_text_s: " << ptr->account_text_s << std::endl;
    std::cout << "ext_acc_id_s: " << ptr->ext_acc_id_s << std::endl;
    std::cout << "ext_acc_controller_s: " << ptr->ext_acc_controller_s << std::endl;
    std::cout << "ext_acc_registrar_s: " << ptr->ext_acc_registrar_s << std::endl;
    std::cout << "org_number_s: " << ptr->org_number_s << std::endl;
    std::cout << "account_alias_s: " << ptr->account_alias_s << std::endl;
    std::cout << "diary_number_s: " << ptr->diary_number_s << std::endl;
    std::cout << "acc_type_s: " << ptr->acc_type_s << std::endl;
    std::cout << "fee_type_s: " << ptr->fee_type_s << std::endl;
    std::cout << "cust_bank_id_s: " << ptr->cust_bank_id_s << std::endl;
    std::cout << "acc_state_c: " << ptr->acc_state_c << std::endl;
    std::cout << "read_access_c: " << ptr->read_access_c << std::endl;
    std::cout << "auto_net_c: " << ptr->auto_net_c << std::endl;
    std::cout << "risk_cur_conv_c: " << ptr->risk_cur_conv_c << std::endl;
    std::cout << "risk_margin_net_c: " << ptr->risk_margin_net_c << std::endl;
    std::cout << "acc_allow_nov_c: " << ptr->acc_allow_nov_c << std::endl;
    std::cout << "cash_collateral_interest_c: " << ptr->cash_collateral_interest_c << std::endl;
    std::cout << "dd_in_base_c: " << ptr->dd_in_base_c << std::endl;
    std::cout << "foreign_holder_c: " << ptr->foreign_holder_c << std::endl;
}

void print_cl_delivery_api_t(cl_delivery_api_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "delivery_account: " << ptr->delivery_account << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "deliv_base: " << ptr->deliv_base << std::endl;
    std::cout << "deliv_base_quantity_q: " << ptr->deliv_base_quantity_q << std::endl;
    std::cout << "delivery_quantity_q: " << ptr->delivery_quantity_q << std::endl;
    std::cout << "delivery_number_i: " << ptr->delivery_number_i << std::endl;
    std::cout << "key_number_i: " << ptr->key_number_i << std::endl;
    std::cout << "delivery_origin_i: " << ptr->delivery_origin_i << std::endl;
    std::cout << "class_no_i: " << ptr->class_no_i << std::endl;
    std::cout << "sequence_number_i: " << ptr->sequence_number_i << std::endl;
    std::cout << "event_type_i: " << ptr->event_type_i << std::endl;
    std::cout << "original_delivery_number_i: " << ptr->original_delivery_number_i << std::endl;
    std::cout << "original_key_number_i: " << ptr->original_key_number_i << std::endl;
    std::cout << "delivery_unit_u: " << ptr->delivery_unit_u << std::endl;
    std::cout << "delivery_properties_u: " << ptr->delivery_properties_u << std::endl;
    std::cout << "propagation_u: " << ptr->propagation_u << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "clearing_account: " << ptr->clearing_account << std::endl;
    std::cout << "original_date_s: " << ptr->original_date_s << std::endl;
    std::cout << "passthrough_s: " << ptr->passthrough_s << std::endl;
    std::cout << "delivery_type_c: " << ptr->delivery_type_c << std::endl;
    std::cout << "originator_type_c: " << ptr->originator_type_c << std::endl;
    std::cout << "delivery_state_c: " << ptr->delivery_state_c << std::endl;
    std::cout << "bought_or_sold_c: " << ptr->bought_or_sold_c << std::endl;
    std::cout << "ext_trade_fee_type_c: " << ptr->ext_trade_fee_type_c << std::endl;
    std::cout << "giving_up_exchange_s: " << ptr->giving_up_exchange_s << std::endl;
    std::cout << "settlement_instr_date_s: " << ptr->settlement_instr_date_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_cl_give_up_api_t(cl_give_up_api_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "sequence_number_i: " << ptr->sequence_number_i << std::endl;
    std::cout << "gup_reason_i: " << ptr->gup_reason_i << std::endl;
    std::cout << "give_up_number_i: " << ptr->give_up_number_i << std::endl;
    std::cout << "trade_quantity_i: " << ptr->trade_quantity_i << std::endl;
    std::cout << "deal_price_i: " << ptr->deal_price_i << std::endl;
    std::cout << "trade_number_i: " << ptr->trade_number_i << std::endl;
    std::cout << "commission_i: " << ptr->commission_i << std::endl;
    std::cout << "bought_or_sold_c: " << ptr->bought_or_sold_c << std::endl;
    std::cout << "state_c: " << ptr->state_c << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "give_up_text_s: " << ptr->give_up_text_s << std::endl;
    std::cout << "asof_date_s: " << ptr->asof_date_s << std::endl;
    std::cout << "asof_time_s: " << ptr->asof_time_s << std::endl;
    std::cout << "orig_clearing_date_s: " << ptr->orig_clearing_date_s << std::endl;
    std::cout << "old_trade_c: " << ptr->old_trade_c << std::endl;
    std::cout << "ext_trade_fee_type_c: " << ptr->ext_trade_fee_type_c << std::endl;
    std::cout << "deal_source_c: " << ptr->deal_source_c << std::endl;
    std::cout << "reserved_prop_c: " << ptr->reserved_prop_c << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "ext_trade_number_u: " << ptr->ext_trade_number_u << std::endl;
    std::cout << "orig_ext_trade_number_u: " << ptr->orig_ext_trade_number_u << std::endl;
    std::cout << "trade_venue_c: " << ptr->trade_venue_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_old_series_t(old_series_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "instrument_group_c: " << ptr->instrument_group_c << std::endl;
    std::cout << "modifier_c: " << ptr->modifier_c << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "expiration_date_n: " << ptr->expiration_date_n << std::endl;
    std::cout << "strike_price_i: " << ptr->strike_price_i << std::endl;
}

void print_time_spec_t(time_spec_t* ptr) {
    std::cout << "tv_sec: " << ptr->tv_sec << std::endl;
    std::cout << "tv_nsec: " << ptr->tv_nsec << std::endl;
}

void print_currency_ranking_connection_t(currency_ranking_connection_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "currency_ranking_id_s: " << ptr->currency_ranking_id_s << std::endl;
}

void print_ccy_rnk_cnx_attributes_t(ccy_rnk_cnx_attributes_t* ptr) {
    std::cout << "version_i: " << ptr->version_i << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "le_state_c: " << ptr->le_state_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_ref_delta_limits_t(ref_delta_limits_t* ptr) {
    std::cout << "upper_limit_i: " << ptr->upper_limit_i << std::endl;
    std::cout << "lower_limit_i: " << ptr->lower_limit_i << std::endl;
    std::cout << "price_limit_unit_c: " << ptr->price_limit_unit_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_last_delta_limits_t(last_delta_limits_t* ptr) {
    std::cout << "upper_limit_i: " << ptr->upper_limit_i << std::endl;
    std::cout << "lower_limit_i: " << ptr->lower_limit_i << std::endl;
    std::cout << "price_limit_unit_c: " << ptr->price_limit_unit_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_da24_t(da24_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "exchange_short_s: " << ptr->exchange_short_s << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "tz_exchange_s: " << ptr->tz_exchange_s << std::endl;
    std::cout << "master_clh_id_s: " << ptr->master_clh_id_s << std::endl;
    std::cout << "country_s: " << ptr->country_s << std::endl;
    std::cout << "date_implementation_s: " << ptr->date_implementation_s << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_cl_trade_change_api_t(cl_trade_change_api_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trade_number_i: " << ptr->trade_number_i << std::endl;
    std::cout << "sequence_number_i: " << ptr->sequence_number_i << std::endl;
    std::cout << "trade_state_c: " << ptr->trade_state_c << std::endl;
    std::cout << "le_state_c: " << ptr->le_state_c << std::endl;
    std::cout << "give_up_state_c: " << ptr->give_up_state_c << std::endl;
    std::cout << "instance_c: " << ptr->instance_c << std::endl;
    std::cout << "rem_quantity_i: " << ptr->rem_quantity_i << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "big_attention_u: " << ptr->big_attention_u << std::endl;
}

void print_server_partition_t(server_partition_t* ptr) {
    std::cout << "server_name_s: " << ptr->server_name_s << std::endl;
    std::cout << "transaction_type_low: " << ptr->transaction_type_low << std::endl;
    std::cout << "transaction_type_high: " << ptr->transaction_type_high << std::endl;
    std::cout << "series_fields_used: " << ptr->series_fields_used << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "event_type_i: " << ptr->event_type_i << std::endl;
}

void print_orig_deal_part_t(orig_deal_part_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "asof_date_s: " << ptr->asof_date_s << std::endl;
    std::cout << "asof_time_s: " << ptr->asof_time_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "deal_price_i: " << ptr->deal_price_i << std::endl;
    std::cout << "deal_number_i: " << ptr->deal_number_i << std::endl;
    std::cout << "deal_quantity_i: " << ptr->deal_quantity_i << std::endl;
}

void print_rectify_deal_part_t(rectify_deal_part_t* ptr) {
    std::cout << "new_series: " << ptr->new_series << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "asof_date_s: " << ptr->asof_date_s << std::endl;
    std::cout << "asof_time_s: " << ptr->asof_time_s << std::endl;
    std::cout << "rectify_deal_number_q: " << ptr->rectify_deal_number_q << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "ex_user_code: " << ptr->ex_user_code << std::endl;
    std::cout << "state_i: " << ptr->state_i << std::endl;
    std::cout << "new_deal_price_i: " << ptr->new_deal_price_i << std::endl;
}

void print_ans_rect_t_item_t(ans_rect_t_item_t* ptr) {
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "asof_date_s: " << ptr->asof_date_s << std::endl;
    std::cout << "asof_time_s: " << ptr->asof_time_s << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "orig_clearing_date_s: " << ptr->orig_clearing_date_s << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "user_code: " << ptr->user_code << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trade_number_i: " << ptr->trade_number_i << std::endl;
    std::cout << "rectify_trade_number_i: " << ptr->rectify_trade_number_i << std::endl;
    std::cout << "ext_seq_nbr_i: " << ptr->ext_seq_nbr_i << std::endl;
    std::cout << "state_c: " << ptr->state_c << std::endl;
    std::cout << "bought_or_sold_c: " << ptr->bought_or_sold_c << std::endl;
    std::cout << "reserved_prop_c: " << ptr->reserved_prop_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "new_account: " << ptr->new_account << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "trade_quantity_i: " << ptr->trade_quantity_i << std::endl;
    std::cout << "deal_price_i: " << ptr->deal_price_i << std::endl;
}

void print_order_no_id_t(order_no_id_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "mp_quantity_i: " << ptr->mp_quantity_i << std::endl;
    std::cout << "premium_i: " << ptr->premium_i << std::endl;
    std::cout << "block_n: " << ptr->block_n << std::endl;
    std::cout << "exch_order_type_n: " << ptr->exch_order_type_n << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_order_t(order_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "ex_user_code: " << ptr->ex_user_code << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "order_index_u: " << ptr->order_index_u << std::endl;
    std::cout << "transaction_number_n: " << ptr->transaction_number_n << std::endl;
    std::cout << "change_reason_c: " << ptr->change_reason_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_pos_info_update_api_t(pos_info_update_api_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "deny_exercise_q: " << ptr->deny_exercise_q << std::endl;
    std::cout << "qty_closed_out_q: " << ptr->qty_closed_out_q << std::endl;
    std::cout << "quantity_cover_u: " << ptr->quantity_cover_u << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "reserved_prop_c: " << ptr->reserved_prop_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_da5_t(da5_t* ptr) {
    std::cout << "combo_series: " << ptr->combo_series << std::endl;
    std::cout << "cbs_id_s: " << ptr->cbs_id_s << std::endl;
    std::cout << "items_c: " << ptr->items_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_trd_rpt_cust_t(trd_rpt_cust_t* ptr) {
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "ex_client_s: " << ptr->ex_client_s << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "open_close_req_c: " << ptr->open_close_req_c << std::endl;
    std::cout << "exch_order_type_n: " << ptr->exch_order_type_n << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_da53_t(da53_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "corp_action_code_s: " << ptr->corp_action_code_s << std::endl;
    std::cout << "corp_action_type_c: " << ptr->corp_action_type_c << std::endl;
    std::cout << "corp_action_status_c: " << ptr->corp_action_status_c << std::endl;
    std::cout << "corp_action_level_c: " << ptr->corp_action_level_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_deposit_withdraw_collateral_ssi_t(deposit_withdraw_collateral_ssi_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "amount_q: " << ptr->amount_q << std::endl;
    std::cout << "gross_amount_q: " << ptr->gross_amount_q << std::endl;
    std::cout << "ssi_id_q: " << ptr->ssi_id_q << std::endl;
    std::cout << "isin_code_s: " << ptr->isin_code_s << std::endl;
    std::cout << "passthrough_s: " << ptr->passthrough_s << std::endl;
    std::cout << "instr_ref_s: " << ptr->instr_ref_s << std::endl;
    std::cout << "cancel_ref_s: " << ptr->cancel_ref_s << std::endl;
    std::cout << "csd_code_s: " << ptr->csd_code_s << std::endl;
    std::cout << "reason_s: " << ptr->reason_s << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "dec_in_amount_n: " << ptr->dec_in_amount_n << std::endl;
    std::cout << "collateral_transaction_type_c: " << ptr->collateral_transaction_type_c << std::endl;
    std::cout << "collateral_transaction_state_c: " << ptr->collateral_transaction_state_c << std::endl;
    std::cout << "clh_account_id_s: " << ptr->clh_account_id_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_delta_limits_t(delta_limits_t* ptr) {
    std::cout << "upper_limit_i: " << ptr->upper_limit_i << std::endl;
    std::cout << "lower_limit_i: " << ptr->lower_limit_i << std::endl;
    std::cout << "price_source_rule_n: " << ptr->price_source_rule_n << std::endl;
    std::cout << "price_limit_unit_c: " << ptr->price_limit_unit_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_originator_trading_code_t(originator_trading_code_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "user_id_s: " << ptr->user_id_s << std::endl;
}

void print_prop_delivery_account_t(prop_delivery_account_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_cash_opt_account_t(cash_opt_account_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_da9_t(da9_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "upper_level_series: " << ptr->upper_level_series << std::endl;
    std::cout << "contract_size_i: " << ptr->contract_size_i << std::endl;
    std::cout << "price_quot_factor_i: " << ptr->price_quot_factor_i << std::endl;
    std::cout << "state_number_n: " << ptr->state_number_n << std::endl;
    std::cout << "ins_id_s: " << ptr->ins_id_s << std::endl;
    std::cout << "isin_code_s: " << ptr->isin_code_s << std::endl;
    std::cout << "stopped_by_issue_c: " << ptr->stopped_by_issue_c << std::endl;
    std::cout << "isin_code_old_s: " << ptr->isin_code_old_s << std::endl;
    std::cout << "date_notation_s: " << ptr->date_notation_s << std::endl;
    std::cout << "date_last_trading_s: " << ptr->date_last_trading_s << std::endl;
    std::cout << "time_last_trading_s: " << ptr->time_last_trading_s << std::endl;
    std::cout << "date_delivery_start_s: " << ptr->date_delivery_start_s << std::endl;
    std::cout << "date_delivery_stop_s: " << ptr->date_delivery_stop_s << std::endl;
    std::cout << "deliverable_c: " << ptr->deliverable_c << std::endl;
    std::cout << "suspended_c: " << ptr->suspended_c << std::endl;
    std::cout << "series_status_c: " << ptr->series_status_c << std::endl;
    std::cout << "tm_template_c: " << ptr->tm_template_c << std::endl;
    std::cout << "tm_series_c: " << ptr->tm_series_c << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "start_date_s: " << ptr->start_date_s << std::endl;
    std::cout << "end_date_s: " << ptr->end_date_s << std::endl;
    std::cout << "accept_collateral_c: " << ptr->accept_collateral_c << std::endl;
    std::cout << "date_first_trading_s: " << ptr->date_first_trading_s << std::endl;
    std::cout << "time_first_trading_s: " << ptr->time_first_trading_s << std::endl;
    std::cout << "traded_in_click_c: " << ptr->traded_in_click_c << std::endl;
    std::cout << "traded_c: " << ptr->traded_c << std::endl;
    std::cout << "effective_exp_date_s: " << ptr->effective_exp_date_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_da2_t(da2_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "upper_level_series: " << ptr->upper_level_series << std::endl;
    std::cout << "contract_size_i: " << ptr->contract_size_i << std::endl;
    std::cout << "price_quot_factor_i: " << ptr->price_quot_factor_i << std::endl;
    std::cout << "series_sequence_number_u: " << ptr->series_sequence_number_u << std::endl;
    std::cout << "state_number_n: " << ptr->state_number_n << std::endl;
    std::cout << "step_size_multiple_n: " << ptr->step_size_multiple_n << std::endl;
    std::cout << "ins_id_s: " << ptr->ins_id_s << std::endl;
    std::cout << "isin_code_s: " << ptr->isin_code_s << std::endl;
    std::cout << "suspended_c: " << ptr->suspended_c << std::endl;
    std::cout << "date_last_trading_s: " << ptr->date_last_trading_s << std::endl;
    std::cout << "time_last_trading_s: " << ptr->time_last_trading_s << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "start_date_s: " << ptr->start_date_s << std::endl;
    std::cout << "end_date_s: " << ptr->end_date_s << std::endl;
    std::cout << "date_delivery_start_s: " << ptr->date_delivery_start_s << std::endl;
    std::cout << "date_delivery_stop_s: " << ptr->date_delivery_stop_s << std::endl;
    std::cout << "series_status_c: " << ptr->series_status_c << std::endl;
    std::cout << "long_ins_id_s: " << ptr->long_ins_id_s << std::endl;
    std::cout << "date_first_trading_s: " << ptr->date_first_trading_s << std::endl;
    std::cout << "time_first_trading_s: " << ptr->time_first_trading_s << std::endl;
    std::cout << "traded_in_click_c: " << ptr->traded_in_click_c << std::endl;
    std::cout << "abbr_name_s: " << ptr->abbr_name_s << std::endl;
    std::cout << "stock_code_s: " << ptr->stock_code_s << std::endl;
    std::cout << "ext_info_source_c: " << ptr->ext_info_source_c << std::endl;
    std::cout << "effective_exp_date_s: " << ptr->effective_exp_date_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_trd_rpt_part_t(trd_rpt_part_t* ptr) {
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "ex_client_s: " << ptr->ex_client_s << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "open_close_req_c: " << ptr->open_close_req_c << std::endl;
}

void print_aat_rg_connection_status_item_t(aat_rg_connection_status_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "aat_connection_status_i: " << ptr->aat_connection_status_i << std::endl;
}

void print_broadcast_type_t(broadcast_type_t* ptr) {
    std::cout << "central_module_c: " << ptr->central_module_c << std::endl;
    std::cout << "server_type_c: " << ptr->server_type_c << std::endl;
    std::cout << "transaction_number_n: " << ptr->transaction_number_n << std::endl;
}

void print_da13_t(da13_t* ptr) {
    std::cout << "fee_type_s: " << ptr->fee_type_s << std::endl;
    std::cout << "description_s: " << ptr->description_s << std::endl;
}

void print_account_status_item_t(account_status_item_t* ptr) {
    std::cout << "status_item: " << ptr->status_item << std::endl;
}

void print_da12_t(da12_t* ptr) {
    std::cout << "acc_type_s: " << ptr->acc_type_s << std::endl;
    std::cout << "description_s: " << ptr->description_s << std::endl;
    std::cout << "open_close_c: " << ptr->open_close_c << std::endl;
    std::cout << "transitory_c: " << ptr->transitory_c << std::endl;
    std::cout << "market_maker_c: " << ptr->market_maker_c << std::endl;
    std::cout << "own_inventory_c: " << ptr->own_inventory_c << std::endl;
    std::cout << "exclusive_opening_sell_c: " << ptr->exclusive_opening_sell_c << std::endl;
    std::cout << "positions_allowed_c: " << ptr->positions_allowed_c << std::endl;
    std::cout << "trades_allowed_c: " << ptr->trades_allowed_c << std::endl;
    std::cout << "atr_id_s: " << ptr->atr_id_s << std::endl;
    std::cout << "origin_c: " << ptr->origin_c << std::endl;
    std::cout << "handled_non_ccp_c: " << ptr->handled_non_ccp_c << std::endl;
    std::cout << "custodian_c: " << ptr->custodian_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_add_tm_combo_item_t(add_tm_combo_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "ratio_n: " << ptr->ratio_n << std::endl;
    std::cout << "op_if_buy_c: " << ptr->op_if_buy_c << std::endl;
    std::cout << "op_if_sell_c: " << ptr->op_if_sell_c << std::endl;
}

void print_answer_account_ext_item_t(answer_account_ext_item_t* ptr) {
    std::cout << "account_data: " << ptr->account_data << std::endl;
}

void print_answer_account_fee_type_item_t(answer_account_fee_type_item_t* ptr) {
    std::cout << "fee_type_s: " << ptr->fee_type_s << std::endl;
    std::cout << "description_s: " << ptr->description_s << std::endl;
}

void print_answer_account_type_item_t(answer_account_type_item_t* ptr) {
    std::cout << "acc_type_s: " << ptr->acc_type_s << std::endl;
    std::cout << "description_s: " << ptr->description_s << std::endl;
    std::cout << "open_close_c: " << ptr->open_close_c << std::endl;
    std::cout << "transitory_c: " << ptr->transitory_c << std::endl;
    std::cout << "market_maker_c: " << ptr->market_maker_c << std::endl;
    std::cout << "own_inventory_c: " << ptr->own_inventory_c << std::endl;
    std::cout << "exclusive_opening_sell_c: " << ptr->exclusive_opening_sell_c << std::endl;
    std::cout << "positions_allowed_c: " << ptr->positions_allowed_c << std::endl;
    std::cout << "trades_allowed_c: " << ptr->trades_allowed_c << std::endl;
    std::cout << "atr_id_s: " << ptr->atr_id_s << std::endl;
    std::cout << "origin_c: " << ptr->origin_c << std::endl;
    std::cout << "handled_non_ccp_c: " << ptr->handled_non_ccp_c << std::endl;
    std::cout << "custodian_c: " << ptr->custodian_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_account_type_rule_item_t(answer_account_type_rule_item_t* ptr) {
    std::cout << "atr_id_s: " << ptr->atr_id_s << std::endl;
    std::cout << "create_over_api_c: " << ptr->create_over_api_c << std::endl;
    std::cout << "activate_at_reg_c: " << ptr->activate_at_reg_c << std::endl;
    std::cout << "account_field_no_n: " << ptr->account_field_no_n << std::endl;
    std::cout << "attribute_rule_c: " << ptr->attribute_rule_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_answer_acc_access_type_item_t(answer_acc_access_type_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "le_state_c: " << ptr->le_state_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
}

void print_answer_api_delivery_item_t(answer_api_delivery_item_t* ptr) {
    std::cout << "cl_delivery_api: " << ptr->cl_delivery_api << std::endl;
}

void print_answer_api_give_up_item_t(answer_api_give_up_item_t* ptr) {
    std::cout << "cl_give_up_api: " << ptr->cl_give_up_api << std::endl;
}

void print_answer_authorized_report_item_t(answer_authorized_report_item_t* ptr) {
    std::cout << "report_no_i: " << ptr->report_no_i << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "report_name_s: " << ptr->report_name_s << std::endl;
    std::cout << "report_template_s: " << ptr->report_template_s << std::endl;
    std::cout << "report_template_desc_s: " << ptr->report_template_desc_s << std::endl;
    std::cout << "report_file_prefix_s: " << ptr->report_file_prefix_s << std::endl;
    std::cout << "report_file_ext_c: " << ptr->report_file_ext_c << std::endl;
    std::cout << "report_spec_s: " << ptr->report_spec_s << std::endl;
    std::cout << "report_spec_desc_s: " << ptr->report_spec_desc_s << std::endl;
    std::cout << "report_owner_type_c: " << ptr->report_owner_type_c << std::endl;
    std::cout << "csb_id_s: " << ptr->csb_id_s << std::endl;
    std::cout << "css_id_s: " << ptr->css_id_s << std::endl;
    std::cout << "bank_id_s: " << ptr->bank_id_s << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_answer_average_price_trade_item_t(answer_average_price_trade_item_t* ptr) {
    std::cout << "trade_number_i: " << ptr->trade_number_i << std::endl;
    std::cout << "quantity_i: " << ptr->quantity_i << std::endl;
}

void print_answer_bi26_signals_sent_item_t(answer_bi26_signals_sent_item_t* ptr) {
    std::cout << "info_type_i: " << ptr->info_type_i << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "sent_date_s: " << ptr->sent_date_s << std::endl;
    std::cout << "sent_time_s: " << ptr->sent_time_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_bi27_broadcasts_sent_item1_t(answer_bi27_broadcasts_sent_item1_t* ptr) {
    std::cout << "broadcast_number_n: " << ptr->broadcast_number_n << std::endl;
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "yyyymmdd_s: " << ptr->yyyymmdd_s << std::endl;
    std::cout << "hhmmss_s: " << ptr->hhmmss_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item2: " << ptr->item2 << std::endl;
}

void print_answer_bi73_signals_sent_item_t(answer_bi73_signals_sent_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "info_type_i: " << ptr->info_type_i << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "sent_date_s: " << ptr->sent_date_s << std::endl;
    std::cout << "sent_time_s: " << ptr->sent_time_s << std::endl;
    std::cout << "seq_num_srm_n: " << ptr->seq_num_srm_n << std::endl;
}

void print_answer_bi7_signals_sent_item_t(answer_bi7_signals_sent_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "info_type_i: " << ptr->info_type_i << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "sent_date_s: " << ptr->sent_date_s << std::endl;
    std::cout << "sent_time_s: " << ptr->sent_time_s << std::endl;
    std::cout << "seq_num_srm_n: " << ptr->seq_num_srm_n << std::endl;
}

void print_answer_broker_item_t(answer_broker_item_t* ptr) {
    std::cout << "user_id_s: " << ptr->user_id_s << std::endl;
    std::cout << "program_trader_c: " << ptr->program_trader_c << std::endl;
    std::cout << "cst_id_n: " << ptr->cst_id_n << std::endl;
    std::cout << "usr_id_n: " << ptr->usr_id_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_central_group_item_t(answer_central_group_item_t* ptr) {
    std::cout << "central_group_s: " << ptr->central_group_s << std::endl;
    std::cout << "leg_number_n: " << ptr->leg_number_n << std::endl;
    std::cout << "sort_type_c: " << ptr->sort_type_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "long_ins_id_s: " << ptr->long_ins_id_s << std::endl;
}

void print_answer_clearing_date_item_t(answer_clearing_date_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "next_clearing_date_s: " << ptr->next_clearing_date_s << std::endl;
    std::cout << "prev_clearing_date_s: " << ptr->prev_clearing_date_s << std::endl;
    std::cout << "tra_cl_next_day_c: " << ptr->tra_cl_next_day_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_answer_clearing_date_ext_item_t(answer_clearing_date_ext_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "next_clearing_date_s: " << ptr->next_clearing_date_s << std::endl;
    std::cout << "prev_clearing_date_s: " << ptr->prev_clearing_date_s << std::endl;
    std::cout << "tra_cl_next_day_c: " << ptr->tra_cl_next_day_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_answer_closeout_log_item_t(answer_closeout_log_item_t* ptr) {
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "closeout_qty_i: " << ptr->closeout_qty_i << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "open_close_c: " << ptr->open_close_c << std::endl;
    std::cout << "state_c: " << ptr->state_c << std::endl;
}

void print_answer_combo_item_t(answer_combo_item_t* ptr) {
    std::cout << "combo_series: " << ptr->combo_series << std::endl;
    std::cout << "cbs_id_s: " << ptr->cbs_id_s << std::endl;
    std::cout << "items_c: " << ptr->items_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_commission_item_t(answer_commission_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "user_code_s: " << ptr->user_code_s << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "commission_i: " << ptr->commission_i << std::endl;
}

void print_answer_conf_give_up_req_items_item_t(answer_conf_give_up_req_items_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "trade_quantity_i: " << ptr->trade_quantity_i << std::endl;
    std::cout << "open_close_req_c: " << ptr->open_close_req_c << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
}

void print_answer_converted_series_item_t(answer_converted_series_item_t* ptr) {
    std::cout << "adjust_ident_n: " << ptr->adjust_ident_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "contract_size_i: " << ptr->contract_size_i << std::endl;
    std::cout << "price_quot_factor_i: " << ptr->price_quot_factor_i << std::endl;
    std::cout << "old_series: " << ptr->old_series << std::endl;
    std::cout << "new_series: " << ptr->new_series << std::endl;
}

void print_answer_cool_off_period_ended_item_t(answer_cool_off_period_ended_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "timestamp: " << ptr->timestamp << std::endl;
    std::cout << "lower_limit_i: " << ptr->lower_limit_i << std::endl;
    std::cout << "upper_limit_i: " << ptr->upper_limit_i << std::endl;
    std::cout << "cool_off_ended_type_c: " << ptr->cool_off_ended_type_c << std::endl;
    std::cout << "price_limit_unit_c: " << ptr->price_limit_unit_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_corp_action_da53_item_t(answer_corp_action_da53_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "corp_action_code_s: " << ptr->corp_action_code_s << std::endl;
    std::cout << "corp_action_type_c: " << ptr->corp_action_type_c << std::endl;
    std::cout << "corp_action_status_c: " << ptr->corp_action_status_c << std::endl;
    std::cout << "corp_action_level_c: " << ptr->corp_action_level_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_answer_currency_item_t(answer_currency_item_t* ptr) {
    std::cout << "sec_rel_primary_n: " << ptr->sec_rel_primary_n << std::endl;
    std::cout << "third_rel_primary_n: " << ptr->third_rel_primary_n << std::endl;
    std::cout << "base_cur_s: " << ptr->base_cur_s << std::endl;
    std::cout << "pri_unit_s: " << ptr->pri_unit_s << std::endl;
    std::cout << "sec_unit_s: " << ptr->sec_unit_s << std::endl;
    std::cout << "third_unit_s: " << ptr->third_unit_s << std::endl;
    std::cout << "pri_not_s: " << ptr->pri_not_s << std::endl;
    std::cout << "sec_not_s: " << ptr->sec_not_s << std::endl;
    std::cout << "third_not_s: " << ptr->third_not_s << std::endl;
    std::cout << "acc_as_pay_c: " << ptr->acc_as_pay_c << std::endl;
}

void print_answer_currency_ranking_connections_item_t(answer_currency_ranking_connections_item_t* ptr) {
    std::cout << "currency_ranking_connection: " << ptr->currency_ranking_connection << std::endl;
    std::cout << "ccy_rnk_cnx_attributes: " << ptr->ccy_rnk_cnx_attributes << std::endl;
}

void print_answer_deal_source_item_t(answer_deal_source_item_t* ptr) {
    std::cout << "ds_attribute_q: " << ptr->ds_attribute_q << std::endl;
    std::cout << "deal_source_n: " << ptr->deal_source_n << std::endl;
    std::cout << "desc_long_s: " << ptr->desc_long_s << std::endl;
    std::cout << "desc_abbreviated_s: " << ptr->desc_abbreviated_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_delivery_item_t(answer_delivery_item_t* ptr) {
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "event_type_i: " << ptr->event_type_i << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "class_no_i: " << ptr->class_no_i << std::endl;
    std::cout << "deliv_base_quantity_q: " << ptr->deliv_base_quantity_q << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "delivery_quantity_q: " << ptr->delivery_quantity_q << std::endl;
    std::cout << "deliv_base: " << ptr->deliv_base << std::endl;
}

void print_answer_delta_limit_item_t(answer_delta_limit_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "ref_delta_limits: " << ptr->ref_delta_limits << std::endl;
    std::cout << "last_delta_limits: " << ptr->last_delta_limits << std::endl;
    std::cout << "price_u_calc_limit_i: " << ptr->price_u_calc_limit_i << std::endl;
    std::cout << "price_l_calc_limit_i: " << ptr->price_l_calc_limit_i << std::endl;
}

void print_answer_error_msg_item_t(answer_error_msg_item_t* ptr) {
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "error_operation_s: " << ptr->error_operation_s << std::endl;
    std::cout << "error_id_u: " << ptr->error_id_u << std::endl;
    std::cout << "error_problem_s: " << ptr->error_problem_s << std::endl;
}

void print_answer_etpr_delta_limit_item_t(answer_etpr_delta_limit_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "ref_delta_limits: " << ptr->ref_delta_limits << std::endl;
    std::cout << "price_u_calc_limit_i: " << ptr->price_u_calc_limit_i << std::endl;
    std::cout << "price_l_calc_limit_i: " << ptr->price_l_calc_limit_i << std::endl;
    std::cout << "reference_premium_i: " << ptr->reference_premium_i << std::endl;
}

void print_answer_exception_days_item_t(answer_exception_days_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "date_exception_s: " << ptr->date_exception_s << std::endl;
}

void print_answer_exchange_da24_item_t(answer_exchange_da24_item_t* ptr) {
    std::cout << "da24: " << ptr->da24 << std::endl;
}

void print_answer_exchange_rate_item_t(answer_exchange_rate_item_t* ptr) {
    std::cout << "rate_nominal_i: " << ptr->rate_nominal_i << std::endl;
    std::cout << "price_quot_factor_i: " << ptr->price_quot_factor_i << std::endl;
    std::cout << "rate_low_i: " << ptr->rate_low_i << std::endl;
    std::cout << "rate_high_i: " << ptr->rate_high_i << std::endl;
    std::cout << "dec_in_rate_n: " << ptr->dec_in_rate_n << std::endl;
    std::cout << "dec_in_contr_size_n: " << ptr->dec_in_contr_size_n << std::endl;
    std::cout << "price_currency_s: " << ptr->price_currency_s << std::endl;
    std::cout << "other_currency_s: " << ptr->other_currency_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_exercise_req_item_t(answer_exercise_req_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "reserved_1_c: " << ptr->reserved_1_c << std::endl;
    std::cout << "reserved_2_s: " << ptr->reserved_2_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "ex_user_code: " << ptr->ex_user_code << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "asof_date_s: " << ptr->asof_date_s << std::endl;
    std::cout << "asof_time_s: " << ptr->asof_time_s << std::endl;
    std::cout << "quantity_i: " << ptr->quantity_i << std::endl;
    std::cout << "trade_number_i: " << ptr->trade_number_i << std::endl;
    std::cout << "exercise_number_i: " << ptr->exercise_number_i << std::endl;
    std::cout << "state_c: " << ptr->state_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_answer_fixing_dates_item_t(answer_fixing_dates_item_t* ptr) {
    std::cout << "reg_cl_date_s: " << ptr->reg_cl_date_s << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "fixing_value_i: " << ptr->fixing_value_i << std::endl;
    std::cout << "dec_in_fixing_n: " << ptr->dec_in_fixing_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_fixing_val_item_t(answer_fixing_val_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "fixing_value_i: " << ptr->fixing_value_i << std::endl;
    std::cout << "dec_in_fixing_n: " << ptr->dec_in_fixing_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_give_up_request_item_t(answer_give_up_request_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "give_up_number_i: " << ptr->give_up_number_i << std::endl;
    std::cout << "trade_quantity_i: " << ptr->trade_quantity_i << std::endl;
    std::cout << "deal_price_i: " << ptr->deal_price_i << std::endl;
    std::cout << "trade_number_i: " << ptr->trade_number_i << std::endl;
    std::cout << "commission_i: " << ptr->commission_i << std::endl;
    std::cout << "bought_or_sold_c: " << ptr->bought_or_sold_c << std::endl;
    std::cout << "state_c: " << ptr->state_c << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "give_up_text_s: " << ptr->give_up_text_s << std::endl;
    std::cout << "asof_date_s: " << ptr->asof_date_s << std::endl;
    std::cout << "asof_time_s: " << ptr->asof_time_s << std::endl;
    std::cout << "orig_clearing_date_s: " << ptr->orig_clearing_date_s << std::endl;
    std::cout << "old_trade_c: " << ptr->old_trade_c << std::endl;
    std::cout << "ext_trade_fee_type_c: " << ptr->ext_trade_fee_type_c << std::endl;
    std::cout << "deal_source_c: " << ptr->deal_source_c << std::endl;
    std::cout << "reserved_prop_c: " << ptr->reserved_prop_c << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "ext_trade_number_u: " << ptr->ext_trade_number_u << std::endl;
    std::cout << "orig_ext_trade_number_u: " << ptr->orig_ext_trade_number_u << std::endl;
}

void print_answer_greeks_item_t(answer_greeks_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "delta_i: " << ptr->delta_i << std::endl;
    std::cout << "gamma_i: " << ptr->gamma_i << std::endl;
    std::cout << "vega_i: " << ptr->vega_i << std::endl;
    std::cout << "theta_i: " << ptr->theta_i << std::endl;
    std::cout << "rho_i: " << ptr->rho_i << std::endl;
}

void print_answer_haircut_item_t(answer_haircut_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "description_s: " << ptr->description_s << std::endl;
    std::cout << "haircut_rate_u: " << ptr->haircut_rate_u << std::endl;
    std::cout << "time_to_maturity_u: " << ptr->time_to_maturity_u << std::endl;
}

void print_answer_instrument_item_t(answer_instrument_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "min_show_vol_u: " << ptr->min_show_vol_u << std::endl;
    std::cout << "hidden_vol_meth_n: " << ptr->hidden_vol_meth_n << std::endl;
    std::cout << "pub_inf_id_n: " << ptr->pub_inf_id_n << std::endl;
    std::cout << "int_id_s: " << ptr->int_id_s << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "maintain_positions_c: " << ptr->maintain_positions_c << std::endl;
    std::cout << "traded_c: " << ptr->traded_c << std::endl;
    std::cout << "post_trade_proc_c: " << ptr->post_trade_proc_c << std::endl;
    std::cout << "pos_handling_c: " << ptr->pos_handling_c << std::endl;
    std::cout << "directed_trade_information_c: " << ptr->directed_trade_information_c << std::endl;
    std::cout << "public_deal_information_c: " << ptr->public_deal_information_c << std::endl;
    std::cout << "pricing_method_c: " << ptr->pricing_method_c << std::endl;
    std::cout << "settlement_type_c: " << ptr->settlement_type_c << std::endl;
}

void print_answer_instrument_class_item_t(answer_instrument_class_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "upper_level_series: " << ptr->upper_level_series << std::endl;
    std::cout << "price_quot_factor_i: " << ptr->price_quot_factor_i << std::endl;
    std::cout << "contract_size_i: " << ptr->contract_size_i << std::endl;
    std::cout << "exerc_limit_i: " << ptr->exerc_limit_i << std::endl;
    std::cout << "redemption_value_i: " << ptr->redemption_value_i << std::endl;
    std::cout << "min_qty_increment_i: " << ptr->min_qty_increment_i << std::endl;
    std::cout << "derivate_level_n: " << ptr->derivate_level_n << std::endl;
    std::cout << "dec_in_strike_price_n: " << ptr->dec_in_strike_price_n << std::endl;
    std::cout << "dec_in_contr_size_n: " << ptr->dec_in_contr_size_n << std::endl;
    std::cout << "rnt_id_n: " << ptr->rnt_id_n << std::endl;
    std::cout << "dec_in_premium_n: " << ptr->dec_in_premium_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
    std::cout << "dec_in_deliv_n: " << ptr->dec_in_deliv_n << std::endl;
    std::cout << "items_block_n: " << ptr->items_block_n << std::endl;
    std::cout << "block_size: " << ptr->block_size << std::endl;
    std::cout << "cleared_dec_in_qty_n: " << ptr->cleared_dec_in_qty_n << std::endl;
    std::cout << "virt_commodity_n: " << ptr->virt_commodity_n << std::endl;
    std::cout << "dec_in_fixing_n: " << ptr->dec_in_fixing_n << std::endl;
    std::cout << "base_cur_s: " << ptr->base_cur_s << std::endl;
    std::cout << "traded_c: " << ptr->traded_c << std::endl;
    std::cout << "exerc_limit_unit_c: " << ptr->exerc_limit_unit_c << std::endl;
    std::cout << "inc_id_s: " << ptr->inc_id_s << std::endl;
    std::cout << "trc_id_s: " << ptr->trc_id_s << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "is_fractions_c: " << ptr->is_fractions_c << std::endl;
    std::cout << "price_unit_premium_c: " << ptr->price_unit_premium_c << std::endl;
    std::cout << "price_unit_strike_c: " << ptr->price_unit_strike_c << std::endl;
    std::cout << "settl_cur_id_s: " << ptr->settl_cur_id_s << std::endl;
    std::cout << "credit_class_s: " << ptr->credit_class_s << std::endl;
    std::cout << "csd_id_s: " << ptr->csd_id_s << std::endl;
    std::cout << "trd_cur_unit_c: " << ptr->trd_cur_unit_c << std::endl;
    std::cout << "collateral_type_c: " << ptr->collateral_type_c << std::endl;
    std::cout << "fixing_req_c: " << ptr->fixing_req_c << std::endl;
    std::cout << "mbs_id_s: " << ptr->mbs_id_s << std::endl;
    std::cout << "valuation_group_id_s: " << ptr->valuation_group_id_s << std::endl;
    std::cout << "gross_settlement_c: " << ptr->gross_settlement_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_answer_instrument_group_item_t(answer_instrument_group_item_t* ptr) {
    std::cout << "instrument_group_c: " << ptr->instrument_group_c << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "ing_id_s: " << ptr->ing_id_s << std::endl;
    std::cout << "group_type_c: " << ptr->group_type_c << std::endl;
    std::cout << "tailor_made_c: " << ptr->tailor_made_c << std::endl;
    std::cout << "option_type_c: " << ptr->option_type_c << std::endl;
    std::cout << "option_style_c: " << ptr->option_style_c << std::endl;
    std::cout << "warrant_c: " << ptr->warrant_c << std::endl;
    std::cout << "repo_type_c: " << ptr->repo_type_c << std::endl;
    std::cout << "buy_sell_back_c: " << ptr->buy_sell_back_c << std::endl;
    std::cout << "future_styled_c: " << ptr->future_styled_c << std::endl;
    std::cout << "is_exclusive_opening_sell_c: " << ptr->is_exclusive_opening_sell_c << std::endl;
    std::cout << "knock_variant_c: " << ptr->knock_variant_c << std::endl;
    std::cout << "binary_variant_c: " << ptr->binary_variant_c << std::endl;
    std::cout << "option_variant_c: " << ptr->option_variant_c << std::endl;
    std::cout << "physical_delivery_c: " << ptr->physical_delivery_c << std::endl;
    std::cout << "forward_style_c: " << ptr->forward_style_c << std::endl;
    std::cout << "swap_style_c: " << ptr->swap_style_c << std::endl;
    std::cout << "maturity_c: " << ptr->maturity_c << std::endl;
    std::cout << "group_short_name_s: " << ptr->group_short_name_s << std::endl;
    std::cout << "overnight_index_swap_c: " << ptr->overnight_index_swap_c << std::endl;
}

void print_answer_instrument_status_item_t(answer_instrument_status_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "state_number_n: " << ptr->state_number_n << std::endl;
    std::cout << "state_level_e: " << ptr->state_level_e << std::endl;
}

void print_answer_limit_item_t(answer_limit_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "upper_limit_i: " << ptr->upper_limit_i << std::endl;
    std::cout << "lower_limit_i: " << ptr->lower_limit_i << std::endl;
    std::cout << "reference_premium_i: " << ptr->reference_premium_i << std::endl;
    std::cout << "price_source_rule_n: " << ptr->price_source_rule_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_manual_payments_item_t(answer_manual_payments_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "amount_u: " << ptr->amount_u << std::endl;
    std::cout << "invc_text_s: " << ptr->invc_text_s << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "pay_or_receive_c: " << ptr->pay_or_receive_c << std::endl;
    std::cout << "settlement_instr_date_s: " << ptr->settlement_instr_date_s << std::endl;
}

void print_answer_margin_acc_item_t(answer_margin_acc_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "market_currency_s: " << ptr->market_currency_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "market_margin_q: " << ptr->market_margin_q << std::endl;
    std::cout << "risk_margin_q: " << ptr->risk_margin_q << std::endl;
    std::cout << "cust_bank_id_s: " << ptr->cust_bank_id_s << std::endl;
    std::cout << "risk_currency_s: " << ptr->risk_currency_s << std::endl;
    std::cout << "acc_risk_type_c: " << ptr->acc_risk_type_c << std::endl;
    std::cout << "offset_reduction_adj_q: " << ptr->offset_reduction_adj_q << std::endl;
}

void print_answer_margin_data_used_item_t(answer_margin_data_used_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "vol_src_c: " << ptr->vol_src_c << std::endl;
    std::cout << "margin_one_writ_opt_q: " << ptr->margin_one_writ_opt_q << std::endl;
    std::cout << "bid_price_i: " << ptr->bid_price_i << std::endl;
    std::cout << "ask_price_i: " << ptr->ask_price_i << std::endl;
    std::cout << "marg_price_i: " << ptr->marg_price_i << std::endl;
    std::cout << "fixing_value_i: " << ptr->fixing_value_i << std::endl;
    std::cout << "val_ivl_mid_i: " << ptr->val_ivl_mid_i << std::endl;
    std::cout << "val_ivl_low_i: " << ptr->val_ivl_low_i << std::endl;
    std::cout << "val_ivl_high_i: " << ptr->val_ivl_high_i << std::endl;
    std::cout << "vol_ivl_held_mid_i: " << ptr->vol_ivl_held_mid_i << std::endl;
    std::cout << "vol_ivl_writ_mid_i: " << ptr->vol_ivl_writ_mid_i << std::endl;
    std::cout << "vol_ivl_held_low_i: " << ptr->vol_ivl_held_low_i << std::endl;
    std::cout << "vol_ivl_writ_low_i: " << ptr->vol_ivl_writ_low_i << std::endl;
    std::cout << "vol_ivl_held_high_i: " << ptr->vol_ivl_held_high_i << std::endl;
    std::cout << "vol_ivl_writ_high_i: " << ptr->vol_ivl_writ_high_i << std::endl;
    std::cout << "remaining_contract_size_i: " << ptr->remaining_contract_size_i << std::endl;
    std::cout << "dec_in_price_n: " << ptr->dec_in_price_n << std::endl;
    std::cout << "opt_price_model_c: " << ptr->opt_price_model_c << std::endl;
    std::cout << "opt_ulg_price_src_c: " << ptr->opt_ulg_price_src_c << std::endl;
    std::cout << "ulg_vola_i: " << ptr->ulg_vola_i << std::endl;
    std::cout << "flat_rate_increase_i: " << ptr->flat_rate_increase_i << std::endl;
    std::cout << "flat_rate_decrease_i: " << ptr->flat_rate_decrease_i << std::endl;
    std::cout << "flat_rate_gain_discount_i: " << ptr->flat_rate_gain_discount_i << std::endl;
    std::cout << "filler_4_s: " << ptr->filler_4_s << std::endl;
}

void print_answer_margin_detail_item_t(answer_margin_detail_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "margin_req_u: " << ptr->margin_req_u << std::endl;
    std::cout << "market_value_q: " << ptr->market_value_q << std::endl;
    std::cout << "nbr_held_q: " << ptr->nbr_held_q << std::endl;
    std::cout << "nbr_written_q: " << ptr->nbr_written_q << std::endl;
    std::cout << "held_marg_q: " << ptr->held_marg_q << std::endl;
    std::cout << "writ_marg_q: " << ptr->writ_marg_q << std::endl;
    std::cout << "cash_margin_q: " << ptr->cash_margin_q << std::endl;
    std::cout << "naked_margin_q: " << ptr->naked_margin_q << std::endl;
    std::cout << "pay_margin_q: " << ptr->pay_margin_q << std::endl;
    std::cout << "orig_market_value_q: " << ptr->orig_market_value_q << std::endl;
    std::cout << "unconv_market_value_q: " << ptr->unconv_market_value_q << std::endl;
    std::cout << "quantity_cover_u: " << ptr->quantity_cover_u << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "gross_or_net_c: " << ptr->gross_or_net_c << std::endl;
    std::cout << "cash_currency_s: " << ptr->cash_currency_s << std::endl;
    std::cout << "margin_class_s: " << ptr->margin_class_s << std::endl;
    std::cout << "marg_meth_inst_c: " << ptr->marg_meth_inst_c << std::endl;
    std::cout << "marg_item_type_c: " << ptr->marg_item_type_c << std::endl;
}

void print_answer_margin_ext_item_t(answer_margin_ext_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "margin_req_u: " << ptr->margin_req_u << std::endl;
    std::cout << "market_value_q: " << ptr->market_value_q << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_answer_margin_mem_item_t(answer_margin_mem_item_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "risk_currency_s: " << ptr->risk_currency_s << std::endl;
    std::cout << "cust_bank_id_s: " << ptr->cust_bank_id_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "risk_margin_q: " << ptr->risk_margin_q << std::endl;
}

void print_answer_margin_pa_acc_item_t(answer_margin_pa_acc_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "market_currency_s: " << ptr->market_currency_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "market_margin_q: " << ptr->market_margin_q << std::endl;
    std::cout << "market_value_q: " << ptr->market_value_q << std::endl;
    std::cout << "cash_margin_q: " << ptr->cash_margin_q << std::endl;
    std::cout << "prod_area_c: " << ptr->prod_area_c << std::endl;
    std::cout << "acc_risk_type_c: " << ptr->acc_risk_type_c << std::endl;
    std::cout << "prod_area_text_s: " << ptr->prod_area_text_s << std::endl;
    std::cout << "cust_bank_id_s: " << ptr->cust_bank_id_s << std::endl;
    std::cout << "offset_reduction_adj_q: " << ptr->offset_reduction_adj_q << std::endl;
}

void print_answer_margin_prop_item_t(answer_margin_prop_item_t* ptr) {
    std::cout << "origin_margin_account: " << ptr->origin_margin_account << std::endl;
    std::cout << "margin_calc_account: " << ptr->margin_calc_account << std::endl;
    std::cout << "premium_margin_q: " << ptr->premium_margin_q << std::endl;
    std::cout << "risk_open_margin_q: " << ptr->risk_open_margin_q << std::endl;
    std::cout << "pl_del_margin_q: " << ptr->pl_del_margin_q << std::endl;
    std::cout << "risk_del_margin_q: " << ptr->risk_del_margin_q << std::endl;
    std::cout << "pay_margin_q: " << ptr->pay_margin_q << std::endl;
    std::cout << "var_margin_q: " << ptr->var_margin_q << std::endl;
    std::cout << "opt_premium_margin_q: " << ptr->opt_premium_margin_q << std::endl;
    std::cout << "long_opt_min_margin_q: " << ptr->long_opt_min_margin_q << std::endl;
    std::cout << "additional_margin_q: " << ptr->additional_margin_q << std::endl;
    std::cout << "flat_rate_margin_q: " << ptr->flat_rate_margin_q << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "source_s: " << ptr->source_s << std::endl;
    std::cout << "margin_has_propagated_c: " << ptr->margin_has_propagated_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "pai_q: " << ptr->pai_q << std::endl;
}

void print_collection_id_t(collection_id_t* ptr) {
    std::cout << "valuation_date_s: " << ptr->valuation_date_s << std::endl;
    std::cout << "sequence_number_n: " << ptr->sequence_number_n << std::endl;
}

void print_answer_margin_series_param_item_t(answer_margin_series_param_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "down_int_q: " << ptr->down_int_q << std::endl;
    std::cout << "up_int_q: " << ptr->up_int_q << std::endl;
    std::cout << "risk_free_rate_i: " << ptr->risk_free_rate_i << std::endl;
    std::cout << "held_vol_down_i: " << ptr->held_vol_down_i << std::endl;
    std::cout << "held_vol_up_i: " << ptr->held_vol_up_i << std::endl;
    std::cout << "writ_vol_down_i: " << ptr->writ_vol_down_i << std::endl;
    std::cout << "writ_vol_up_i: " << ptr->writ_vol_up_i << std::endl;
    std::cout << "fixed_vol_i: " << ptr->fixed_vol_i << std::endl;
    std::cout << "held_for_adj_i: " << ptr->held_for_adj_i << std::endl;
    std::cout << "writ_for_adj_i: " << ptr->writ_for_adj_i << std::endl;
    std::cout << "pur_id_s: " << ptr->pur_id_s << std::endl;
    std::cout << "win_id_s: " << ptr->win_id_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "bid_marg_vol_i: " << ptr->bid_marg_vol_i << std::endl;
    std::cout << "ask_marg_vol_i: " << ptr->ask_marg_vol_i << std::endl;
    std::cout << "dividend_yield_i: " << ptr->dividend_yield_i << std::endl;
    std::cout << "ind_bid_marg_vol_i: " << ptr->ind_bid_marg_vol_i << std::endl;
    std::cout << "ind_ask_marg_vol_i: " << ptr->ind_ask_marg_vol_i << std::endl;
}

void print_answer_margin_series_param_ext_item_t(answer_margin_series_param_ext_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "down_int_q: " << ptr->down_int_q << std::endl;
    std::cout << "up_int_q: " << ptr->up_int_q << std::endl;
    std::cout << "risk_free_rate_i: " << ptr->risk_free_rate_i << std::endl;
    std::cout << "held_vol_down_i: " << ptr->held_vol_down_i << std::endl;
    std::cout << "held_vol_up_i: " << ptr->held_vol_up_i << std::endl;
    std::cout << "writ_vol_down_i: " << ptr->writ_vol_down_i << std::endl;
    std::cout << "writ_vol_up_i: " << ptr->writ_vol_up_i << std::endl;
    std::cout << "fixed_vol_i: " << ptr->fixed_vol_i << std::endl;
    std::cout << "dividend_yield_i: " << ptr->dividend_yield_i << std::endl;
    std::cout << "marg_param_id_s: " << ptr->marg_param_id_s << std::endl;
    std::cout << "price_param_id_s: " << ptr->price_param_id_s << std::endl;
    std::cout << "win_id_s: " << ptr->win_id_s << std::endl;
    std::cout << "tdp_id_s: " << ptr->tdp_id_s << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_answer_margin_ulg_price_item_t(answer_margin_ulg_price_item_t* ptr) {
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "bid_price_i: " << ptr->bid_price_i << std::endl;
    std::cout << "ask_price_i: " << ptr->ask_price_i << std::endl;
    std::cout << "marg_price_i: " << ptr->marg_price_i << std::endl;
    std::cout << "last_paid_i: " << ptr->last_paid_i << std::endl;
    std::cout << "bid_theo_c: " << ptr->bid_theo_c << std::endl;
    std::cout << "ask_theo_c: " << ptr->ask_theo_c << std::endl;
    std::cout << "last_theo_c: " << ptr->last_theo_c << std::endl;
    std::cout << "marg_theo_c: " << ptr->marg_theo_c << std::endl;
}

void print_answer_marg_sim_add_trade_item_t(answer_marg_sim_add_trade_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "sim_qty_q: " << ptr->sim_qty_q << std::endl;
    std::cout << "trade_price_sim_i: " << ptr->trade_price_sim_i << std::endl;
    std::cout << "closing_date_s: " << ptr->closing_date_s << std::endl;
    std::cout << "date_settlement_s: " << ptr->date_settlement_s << std::endl;
    std::cout << "item_type_c: " << ptr->item_type_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "reserved_i: " << ptr->reserved_i << std::endl;
    std::cout << "reserved_8_s: " << ptr->reserved_8_s << std::endl;
}

void print_answer_market_item_t(answer_market_item_t* ptr) {
    std::cout << "normal_trading_days_n: " << ptr->normal_trading_days_n << std::endl;
    std::cout << "normal_settl_days_n: " << ptr->normal_settl_days_n << std::endl;
    std::cout << "normal_clearing_days_n: " << ptr->normal_clearing_days_n << std::endl;
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "mar_id_s: " << ptr->mar_id_s << std::endl;
    std::cout << "market_type_c: " << ptr->market_type_c << std::endl;
    std::cout << "index_market_c: " << ptr->index_market_c << std::endl;
    std::cout << "bic_code_s: " << ptr->bic_code_s << std::endl;
    std::cout << "mic_code_s: " << ptr->mic_code_s << std::endl;
    std::cout << "tm_clearing_market_c: " << ptr->tm_clearing_market_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_answer_member_obligation_da57_item_t(answer_member_obligation_da57_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "cst_id_n: " << ptr->cst_id_n << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "right_type_c: " << ptr->right_type_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_missing_delivery_item_t(answer_missing_delivery_item_t* ptr) {
    std::cout << "cl_delivery_api: " << ptr->cl_delivery_api << std::endl;
}

void print_answer_missing_give_up_item_t(answer_missing_give_up_item_t* ptr) {
    std::cout << "cl_give_up_api: " << ptr->cl_give_up_api << std::endl;
}

void print_answer_missing_trade_change_item_t(answer_missing_trade_change_item_t* ptr) {
    std::cout << "cl_trade_change_api: " << ptr->cl_trade_change_api << std::endl;
}

void print_answer_mm_protection_item_t(answer_mm_protection_item_t* ptr) {
    std::cout << "quantity_protection_q: " << ptr->quantity_protection_q << std::endl;
    std::cout << "delta_protection_q: " << ptr->delta_protection_q << std::endl;
    std::cout << "exposure_time_interval_i: " << ptr->exposure_time_interval_i << std::endl;
    std::cout << "frozen_time_i: " << ptr->frozen_time_i << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "include_futures_c: " << ptr->include_futures_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_non_trading_days_item_t(answer_non_trading_days_item_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "date_non_trading_s: " << ptr->date_non_trading_s << std::endl;
    std::cout << "closed_for_trading_c: " << ptr->closed_for_trading_c << std::endl;
    std::cout << "closed_for_settlement_c: " << ptr->closed_for_settlement_c << std::endl;
    std::cout << "closed_for_clearing_c: " << ptr->closed_for_clearing_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_answer_non_trad_settl_days_item_t(answer_non_trad_settl_days_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "date_non_trading_s: " << ptr->date_non_trading_s << std::endl;
}

void print_answer_open_interest_item_t(answer_open_interest_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "final_open_interest_q: " << ptr->final_open_interest_q << std::endl;
}

void print_answer_open_interest_ext_item_t(answer_open_interest_ext_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "gross_open_interest_q: " << ptr->gross_open_interest_q << std::endl;
    std::cout << "net_open_interest_q: " << ptr->net_open_interest_q << std::endl;
    std::cout << "member_net_open_interest_q: " << ptr->member_net_open_interest_q << std::endl;
}

void print_answer_partition_item_t(answer_partition_item_t* ptr) {
    std::cout << "server_partition: " << ptr->server_partition << std::endl;
}

void print_answer_paynote_info_item_t(answer_paynote_info_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "pay_note_number_i: " << ptr->pay_note_number_i << std::endl;
    std::cout << "event_type_c: " << ptr->event_type_c << std::endl;
    std::cout << "settle_class_c: " << ptr->settle_class_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "amount_u: " << ptr->amount_u << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "pay_or_receive_c: " << ptr->pay_or_receive_c << std::endl;
    std::cout << "settlement_instr_date_s: " << ptr->settlement_instr_date_s << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
}

void print_answer_position_item_t(answer_position_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "reserved_prop_c: " << ptr->reserved_prop_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "nbr_held_q: " << ptr->nbr_held_q << std::endl;
    std::cout << "nbr_written_q: " << ptr->nbr_written_q << std::endl;
    std::cout << "deny_exercise_q: " << ptr->deny_exercise_q << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "quantity_cover_u: " << ptr->quantity_cover_u << std::endl;
    std::cout << "qty_closed_out_q: " << ptr->qty_closed_out_q << std::endl;
}

void print_answer_prel_settlement_item_t(answer_prel_settlement_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "settl_price_i: " << ptr->settl_price_i << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "settlement_price_type_c: " << ptr->settlement_price_type_c << std::endl;
    std::cout << "date_and_time_s: " << ptr->date_and_time_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_answer_price_limit_trigger_item_t(answer_price_limit_trigger_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "timestamp: " << ptr->timestamp << std::endl;
    std::cout << "lower_limit_i: " << ptr->lower_limit_i << std::endl;
    std::cout << "upper_limit_i: " << ptr->upper_limit_i << std::endl;
    std::cout << "next_lower_limit_i: " << ptr->next_lower_limit_i << std::endl;
    std::cout << "next_upper_limit_i: " << ptr->next_upper_limit_i << std::endl;
    std::cout << "cool_off_time_i: " << ptr->cool_off_time_i << std::endl;
    std::cout << "tier_c: " << ptr->tier_c << std::endl;
    std::cout << "price_limit_unit_c: " << ptr->price_limit_unit_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_propagate_item_t(answer_propagate_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "prop_type_c: " << ptr->prop_type_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_answer_realtime_ulg_price_item_t(answer_realtime_ulg_price_item_t* ptr) {
    std::cout << "bid_price_i: " << ptr->bid_price_i << std::endl;
    std::cout << "ask_price_i: " << ptr->ask_price_i << std::endl;
    std::cout << "last_paid_i: " << ptr->last_paid_i << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "bid_theo_c: " << ptr->bid_theo_c << std::endl;
    std::cout << "ask_theo_c: " << ptr->ask_theo_c << std::endl;
    std::cout << "last_theo_c: " << ptr->last_theo_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_answer_rectify_d_item_t(answer_rectify_d_item_t* ptr) {
    std::cout << "orig_deal_part: " << ptr->orig_deal_part << std::endl;
    std::cout << "rectify_deal_part: " << ptr->rectify_deal_part << std::endl;
}

void print_answer_rectify_d_cont_item_t(answer_rectify_d_cont_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trade_number_i: " << ptr->trade_number_i << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "trade_quantity_i: " << ptr->trade_quantity_i << std::endl;
}

void print_answer_rectify_ext_cont_item_t(answer_rectify_ext_cont_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "trade_quantity_i: " << ptr->trade_quantity_i << std::endl;
    std::cout << "open_close_req_c: " << ptr->open_close_req_c << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
}

void print_answer_rectify_t_item_t(answer_rectify_t_item_t* ptr) {
    std::cout << "ans_rect_t_item: " << ptr->ans_rect_t_item << std::endl;
}

void print_answer_report_nrs_item_t(answer_report_nrs_item_t* ptr) {
    std::cout << "report_no_i: " << ptr->report_no_i << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "report_spec_s: " << ptr->report_spec_s << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "report_version_s: " << ptr->report_version_s << std::endl;
    std::cout << "ascii_bin_c: " << ptr->ascii_bin_c << std::endl;
    std::cout << "file_name_s: " << ptr->file_name_s << std::endl;
    std::cout << "file_type_s: " << ptr->file_type_s << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_report_ver_item_t(answer_report_ver_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "info_type_i: " << ptr->info_type_i << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "report_owner_s: " << ptr->report_owner_s << std::endl;
    std::cout << "report_version_s: " << ptr->report_version_s << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "file_type_s: " << ptr->file_type_s << std::endl;
    std::cout << "description_s: " << ptr->description_s << std::endl;
    std::cout << "ascii_bin_c: " << ptr->ascii_bin_c << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
}

void print_answer_series_item_t(answer_series_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "upper_level_series: " << ptr->upper_level_series << std::endl;
    std::cout << "contract_size_i: " << ptr->contract_size_i << std::endl;
    std::cout << "price_quot_factor_i: " << ptr->price_quot_factor_i << std::endl;
    std::cout << "series_sequence_number_u: " << ptr->series_sequence_number_u << std::endl;
    std::cout << "state_number_n: " << ptr->state_number_n << std::endl;
    std::cout << "step_size_multiple_n: " << ptr->step_size_multiple_n << std::endl;
    std::cout << "ins_id_s: " << ptr->ins_id_s << std::endl;
    std::cout << "isin_code_s: " << ptr->isin_code_s << std::endl;
    std::cout << "suspended_c: " << ptr->suspended_c << std::endl;
    std::cout << "date_last_trading_s: " << ptr->date_last_trading_s << std::endl;
    std::cout << "time_last_trading_s: " << ptr->time_last_trading_s << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "start_date_s: " << ptr->start_date_s << std::endl;
    std::cout << "end_date_s: " << ptr->end_date_s << std::endl;
    std::cout << "date_delivery_start_s: " << ptr->date_delivery_start_s << std::endl;
    std::cout << "date_delivery_stop_s: " << ptr->date_delivery_stop_s << std::endl;
    std::cout << "series_status_c: " << ptr->series_status_c << std::endl;
    std::cout << "long_ins_id_s: " << ptr->long_ins_id_s << std::endl;
    std::cout << "date_first_trading_s: " << ptr->date_first_trading_s << std::endl;
    std::cout << "time_first_trading_s: " << ptr->time_first_trading_s << std::endl;
    std::cout << "traded_in_click_c: " << ptr->traded_in_click_c << std::endl;
    std::cout << "abbr_name_s: " << ptr->abbr_name_s << std::endl;
    std::cout << "stock_code_s: " << ptr->stock_code_s << std::endl;
    std::cout << "ext_info_source_c: " << ptr->ext_info_source_c << std::endl;
    std::cout << "effective_exp_date_s: " << ptr->effective_exp_date_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_series_bo_item_t(answer_series_bo_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "upper_level_series: " << ptr->upper_level_series << std::endl;
    std::cout << "contract_size_i: " << ptr->contract_size_i << std::endl;
    std::cout << "price_quot_factor_i: " << ptr->price_quot_factor_i << std::endl;
    std::cout << "state_number_n: " << ptr->state_number_n << std::endl;
    std::cout << "ins_id_s: " << ptr->ins_id_s << std::endl;
    std::cout << "isin_code_s: " << ptr->isin_code_s << std::endl;
    std::cout << "stopped_by_issue_c: " << ptr->stopped_by_issue_c << std::endl;
    std::cout << "isin_code_old_s: " << ptr->isin_code_old_s << std::endl;
    std::cout << "date_notation_s: " << ptr->date_notation_s << std::endl;
    std::cout << "date_last_trading_s: " << ptr->date_last_trading_s << std::endl;
    std::cout << "time_last_trading_s: " << ptr->time_last_trading_s << std::endl;
    std::cout << "date_delivery_start_s: " << ptr->date_delivery_start_s << std::endl;
    std::cout << "date_delivery_stop_s: " << ptr->date_delivery_stop_s << std::endl;
    std::cout << "deliverable_c: " << ptr->deliverable_c << std::endl;
    std::cout << "suspended_c: " << ptr->suspended_c << std::endl;
    std::cout << "series_status_c: " << ptr->series_status_c << std::endl;
    std::cout << "tm_template_c: " << ptr->tm_template_c << std::endl;
    std::cout << "tm_series_c: " << ptr->tm_series_c << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "start_date_s: " << ptr->start_date_s << std::endl;
    std::cout << "end_date_s: " << ptr->end_date_s << std::endl;
    std::cout << "accept_collateral_c: " << ptr->accept_collateral_c << std::endl;
    std::cout << "date_first_trading_s: " << ptr->date_first_trading_s << std::endl;
    std::cout << "time_first_trading_s: " << ptr->time_first_trading_s << std::endl;
    std::cout << "traded_in_click_c: " << ptr->traded_in_click_c << std::endl;
    std::cout << "traded_c: " << ptr->traded_c << std::endl;
    std::cout << "effective_exp_date_s: " << ptr->effective_exp_date_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_answer_state_type_item_t(answer_state_type_item_t* ptr) {
    std::cout << "state_type_number_n: " << ptr->state_type_number_n << std::endl;
    std::cout << "state_type_name_s: " << ptr->state_type_name_s << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
}

void print_series_next_t(series_next_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "instrument_group_c: " << ptr->instrument_group_c << std::endl;
    std::cout << "modifier_c: " << ptr->modifier_c << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "expiration_date_n: " << ptr->expiration_date_n << std::endl;
    std::cout << "strike_price_i: " << ptr->strike_price_i << std::endl;
}

void print_answer_tot_equil_prices_item_t(answer_tot_equil_prices_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "equilibrium_quantity_i: " << ptr->equilibrium_quantity_i << std::endl;
    std::cout << "equilibrium_price_i: " << ptr->equilibrium_price_i << std::endl;
    std::cout << "best_bid_premium_i: " << ptr->best_bid_premium_i << std::endl;
    std::cout << "best_ask_premium_i: " << ptr->best_ask_premium_i << std::endl;
    std::cout << "best_bid_quantity_i: " << ptr->best_bid_quantity_i << std::endl;
    std::cout << "best_ask_quantity_i: " << ptr->best_ask_quantity_i << std::endl;
    std::cout << "matching_price_type_c: " << ptr->matching_price_type_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_answer_tot_ob_item_t(answer_tot_ob_item_t* ptr) {
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "sequence_number_u: " << ptr->sequence_number_u << std::endl;
    std::cout << "ob_position_u: " << ptr->ob_position_u << std::endl;
    std::cout << "combo_mark_c: " << ptr->combo_mark_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "order_no_id: " << ptr->order_no_id << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
}

void print_answer_tot_order_item_t(answer_tot_order_item_t* ptr) {
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "sequence_number_u: " << ptr->sequence_number_u << std::endl;
    std::cout << "ob_position_u: " << ptr->ob_position_u << std::endl;
    std::cout << "combo_mark_c: " << ptr->combo_mark_c << std::endl;
    std::cout << "order_category_c: " << ptr->order_category_c << std::endl;
    std::cout << "stp_key_i: " << ptr->stp_key_i << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "order: " << ptr->order << std::endl;
    std::cout << "total_volume_i: " << ptr->total_volume_i << std::endl;
    std::cout << "display_quantity_i: " << ptr->display_quantity_i << std::endl;
    std::cout << "orig_shown_quantity_i: " << ptr->orig_shown_quantity_i << std::endl;
    std::cout << "orig_total_volume_i: " << ptr->orig_total_volume_i << std::endl;
    std::cout << "timestamp_in: " << ptr->timestamp_in << std::endl;
    std::cout << "timestamp_created: " << ptr->timestamp_created << std::endl;
    std::cout << "filler_4_s: " << ptr->filler_4_s << std::endl;
}

void print_answer_trade_report_types_item_t(answer_trade_report_types_item_t* ptr) {
    std::cout << "initial_trr_min_value_u: " << ptr->initial_trr_min_value_u << std::endl;
    std::cout << "trc_id_s: " << ptr->trc_id_s << std::endl;
    std::cout << "trr_id_s: " << ptr->trr_id_s << std::endl;
    std::cout << "condition_s: " << ptr->condition_s << std::endl;
    std::cout << "authorized_c: " << ptr->authorized_c << std::endl;
    std::cout << "ext_t_state_c: " << ptr->ext_t_state_c << std::endl;
    std::cout << "allow_interbank_c: " << ptr->allow_interbank_c << std::endl;
    std::cout << "allow_within_participant_c: " << ptr->allow_within_participant_c << std::endl;
    std::cout << "cbo_trade_report_c: " << ptr->cbo_trade_report_c << std::endl;
    std::cout << "allow_non_std_settlement_c: " << ptr->allow_non_std_settlement_c << std::endl;
    std::cout << "time_of_agree_req_c: " << ptr->time_of_agree_req_c << std::endl;
    std::cout << "time_of_agree_gran_c: " << ptr->time_of_agree_gran_c << std::endl;
    std::cout << "allow_delayed_c: " << ptr->allow_delayed_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_answer_trade_statistics_item_t(answer_trade_statistics_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "bid_premium_i: " << ptr->bid_premium_i << std::endl;
    std::cout << "ask_premium_i: " << ptr->ask_premium_i << std::endl;
    std::cout << "opening_price_i: " << ptr->opening_price_i << std::endl;
    std::cout << "settle_price_i: " << ptr->settle_price_i << std::endl;
    std::cout << "last_price_i: " << ptr->last_price_i << std::endl;
    std::cout << "high_price_i: " << ptr->high_price_i << std::endl;
    std::cout << "low_price_i: " << ptr->low_price_i << std::endl;
    std::cout << "volume_today_i: " << ptr->volume_today_i << std::endl;
    std::cout << "volume_yesterday_i: " << ptr->volume_yesterday_i << std::endl;
    std::cout << "turnaround_yesterday_u: " << ptr->turnaround_yesterday_u << std::endl;
    std::cout << "turnaround_today_u: " << ptr->turnaround_today_u << std::endl;
    std::cout << "open_balance_u: " << ptr->open_balance_u << std::endl;
    std::cout << "revised_open_balance_u: " << ptr->revised_open_balance_u << std::endl;
    std::cout << "volatility_i: " << ptr->volatility_i << std::endl;
    std::cout << "underlying_price_i: " << ptr->underlying_price_i << std::endl;
    std::cout << "corr_opening_price_i: " << ptr->corr_opening_price_i << std::endl;
    std::cout << "corr_high_price_i: " << ptr->corr_high_price_i << std::endl;
    std::cout << "corr_low_price_i: " << ptr->corr_low_price_i << std::endl;
    std::cout << "corr_last_price_i: " << ptr->corr_last_price_i << std::endl;
    std::cout << "bid_theo_c: " << ptr->bid_theo_c << std::endl;
    std::cout << "ask_theo_c: " << ptr->ask_theo_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_trading_state_item_t(answer_trading_state_item_t* ptr) {
    std::cout << "state_name_s: " << ptr->state_name_s << std::endl;
    std::cout << "state_number_n: " << ptr->state_number_n << std::endl;
    std::cout << "iss_def_warning_interval_n: " << ptr->iss_def_warning_interval_n << std::endl;
    std::cout << "iss_def_num_of_warnings_n: " << ptr->iss_def_num_of_warnings_n << std::endl;
    std::cout << "state_type_number_n: " << ptr->state_type_number_n << std::endl;
    std::cout << "continues_matching_c: " << ptr->continues_matching_c << std::endl;
    std::cout << "trading_end_c: " << ptr->trading_end_c << std::endl;
    std::cout << "price_quotation_required_c: " << ptr->price_quotation_required_c << std::endl;
    std::cout << "market_orders_allowed_c: " << ptr->market_orders_allowed_c << std::endl;
    std::cout << "fill_or_kill_allowed_c: " << ptr->fill_or_kill_allowed_c << std::endl;
    std::cout << "fill_and_kill_allowed_c: " << ptr->fill_and_kill_allowed_c << std::endl;
    std::cout << "edited_ob_changes_avail_c: " << ptr->edited_ob_changes_avail_c << std::endl;
    std::cout << "ob_changes_avail_c: " << ptr->ob_changes_avail_c << std::endl;
    std::cout << "end_of_clearing_day_c: " << ptr->end_of_clearing_day_c << std::endl;
    std::cout << "state_priority_c: " << ptr->state_priority_c << std::endl;
    std::cout << "fill_and_store_c: " << ptr->fill_and_store_c << std::endl;
    std::cout << "all_or_none_c: " << ptr->all_or_none_c << std::endl;
    std::cout << "imb_orders_allwd_c: " << ptr->imb_orders_allwd_c << std::endl;
    std::cout << "mtl_orders_rlot_allwd_c: " << ptr->mtl_orders_rlot_allwd_c << std::endl;
    std::cout << "allow_hidd_aggr_c: " << ptr->allow_hidd_aggr_c << std::endl;
    std::cout << "best_limit_c: " << ptr->best_limit_c << std::endl;
    std::cout << "market_bid_c: " << ptr->market_bid_c << std::endl;
    std::cout << "price_stabilization_c: " << ptr->price_stabilization_c << std::endl;
    std::cout << "short_sell_c: " << ptr->short_sell_c << std::endl;
    std::cout << "allow_cp_mar_c: " << ptr->allow_cp_mar_c << std::endl;
    std::cout << "allow_cp_lim_c: " << ptr->allow_cp_lim_c << std::endl;
    std::cout << "allow_undisclosed_qty_c: " << ptr->allow_undisclosed_qty_c << std::endl;
    std::cout << "sso_orders_allowed_c: " << ptr->sso_orders_allowed_c << std::endl;
    std::cout << "stop_orders_allowed_c: " << ptr->stop_orders_allowed_c << std::endl;
    std::cout << "good_till_session_c: " << ptr->good_till_session_c << std::endl;
    std::cout << "priority_ranking_c: " << ptr->priority_ranking_c << std::endl;
    std::cout << "fix_state_number_c: " << ptr->fix_state_number_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_answer_trd_report_item_t(answer_trd_report_item_t* ptr) {
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "sequence_number_u: " << ptr->sequence_number_u << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "time_of_agreement_date_s: " << ptr->time_of_agreement_date_s << std::endl;
    std::cout << "time_of_agreement_time_s: " << ptr->time_of_agreement_time_s << std::endl;
    std::cout << "deferred_publication_c: " << ptr->deferred_publication_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_answer_trd_report_party_item_t(answer_trd_report_party_item_t* ptr) {
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "time_of_agreement_date_s: " << ptr->time_of_agreement_date_s << std::endl;
    std::cout << "time_of_agreement_time_s: " << ptr->time_of_agreement_time_s << std::endl;
    std::cout << "deferred_publication_c: " << ptr->deferred_publication_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_answer_underlying_item_t(answer_underlying_item_t* ptr) {
    std::cout << "subscription_price_i: " << ptr->subscription_price_i << std::endl;
    std::cout << "interest_rate_i: " << ptr->interest_rate_i << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "com_id_s: " << ptr->com_id_s << std::endl;
    std::cout << "isin_code_s: " << ptr->isin_code_s << std::endl;
    std::cout << "dec_in_price_n: " << ptr->dec_in_price_n << std::endl;
    std::cout << "date_release_s: " << ptr->date_release_s << std::endl;
    std::cout << "date_termination_s: " << ptr->date_termination_s << std::endl;
    std::cout << "date_dated_s: " << ptr->date_dated_s << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "base_cur_s: " << ptr->base_cur_s << std::endl;
    std::cout << "deliverable_c: " << ptr->deliverable_c << std::endl;
    std::cout << "coupon_frequency_n: " << ptr->coupon_frequency_n << std::endl;
    std::cout << "nominal_value_q: " << ptr->nominal_value_q << std::endl;
    std::cout << "day_count_n: " << ptr->day_count_n << std::endl;
    std::cout << "days_in_interest_year_n: " << ptr->days_in_interest_year_n << std::endl;
    std::cout << "coupon_interest_i: " << ptr->coupon_interest_i << std::endl;
    std::cout << "coupon_settlement_days_n: " << ptr->coupon_settlement_days_n << std::endl;
    std::cout << "underlying_type_c: " << ptr->underlying_type_c << std::endl;
    std::cout << "price_unit_c: " << ptr->price_unit_c << std::endl;
    std::cout << "dec_in_nominal_n: " << ptr->dec_in_nominal_n << std::endl;
    std::cout << "state_number_n: " << ptr->state_number_n << std::endl;
    std::cout << "linked_commodity_n: " << ptr->linked_commodity_n << std::endl;
    std::cout << "fixed_income_type_c: " << ptr->fixed_income_type_c << std::endl;
    std::cout << "underlying_status_c: " << ptr->underlying_status_c << std::endl;
    std::cout << "underlying_issuer_s: " << ptr->underlying_issuer_s << std::endl;
    std::cout << "time_delivery_start_s: " << ptr->time_delivery_start_s << std::endl;
    std::cout << "time_delivery_stop_s: " << ptr->time_delivery_stop_s << std::endl;
    std::cout << "sector_code_s: " << ptr->sector_code_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "coupon: " << ptr->coupon << std::endl;
    std::cout << "virtual_c: " << ptr->virtual_c << std::endl;
    std::cout << "member_circ_numb_s: " << ptr->member_circ_numb_s << std::endl;
    std::cout << "inv_scheme_c: " << ptr->inv_scheme_c << std::endl;
    std::cout << "date_closing_s: " << ptr->date_closing_s << std::endl;
    std::cout << "date_last_s: " << ptr->date_last_s << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "cur_unit_c: " << ptr->cur_unit_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_answer_underlying_adjustment_item_t(answer_underlying_adjustment_item_t* ptr) {
    std::cout << "no_of_shares_issued_q: " << ptr->no_of_shares_issued_q << std::endl;
    std::cout << "free_float_q: " << ptr->free_float_q << std::endl;
    std::cout << "adjust_ident_n: " << ptr->adjust_ident_n << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "date_adjust_s: " << ptr->date_adjust_s << std::endl;
    std::cout << "date_conversion_s: " << ptr->date_conversion_s << std::endl;
    std::cout << "deal_price_modifier_c: " << ptr->deal_price_modifier_c << std::endl;
    std::cout << "contract_size_modifier_c: " << ptr->contract_size_modifier_c << std::endl;
    std::cout << "strike_price_modifier_c: " << ptr->strike_price_modifier_c << std::endl;
    std::cout << "contracts_modifier_c: " << ptr->contracts_modifier_c << std::endl;
    std::cout << "und_price_modifier_c: " << ptr->und_price_modifier_c << std::endl;
    std::cout << "so_strike_price_modifier_c: " << ptr->so_strike_price_modifier_c << std::endl;
    std::cout << "so_contract_size_modifier_c: " << ptr->so_contract_size_modifier_c << std::endl;
    std::cout << "so_deal_price_modifier_c: " << ptr->so_deal_price_modifier_c << std::endl;
    std::cout << "deal_price_mod_factor_i: " << ptr->deal_price_mod_factor_i << std::endl;
    std::cout << "contr_size_mod_factor_i: " << ptr->contr_size_mod_factor_i << std::endl;
    std::cout << "strike_price_mod_factor_i: " << ptr->strike_price_mod_factor_i << std::endl;
    std::cout << "contracts_mod_factor_i: " << ptr->contracts_mod_factor_i << std::endl;
    std::cout << "und_price_mod_factor_i: " << ptr->und_price_mod_factor_i << std::endl;
    std::cout << "so_strike_price_mod_factor_i: " << ptr->so_strike_price_mod_factor_i << std::endl;
    std::cout << "so_contr_size_mod_factor_i: " << ptr->so_contr_size_mod_factor_i << std::endl;
    std::cout << "so_deal_price_mod_factor_i: " << ptr->so_deal_price_mod_factor_i << std::endl;
    std::cout << "pqf_mod_factor_i: " << ptr->pqf_mod_factor_i << std::endl;
    std::cout << "so_pqf_mod_factor_i: " << ptr->so_pqf_mod_factor_i << std::endl;
    std::cout << "new_commodity_n: " << ptr->new_commodity_n << std::endl;
    std::cout << "so_commodity_n: " << ptr->so_commodity_n << std::endl;
    std::cout << "pqf_modifier_c: " << ptr->pqf_modifier_c << std::endl;
    std::cout << "so_pqf_modifier_c: " << ptr->so_pqf_modifier_c << std::endl;
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "so_country_c: " << ptr->so_country_c << std::endl;
    std::cout << "so_market_c: " << ptr->so_market_c << std::endl;
    std::cout << "adjusted_c: " << ptr->adjusted_c << std::endl;
    std::cout << "spinoff_c: " << ptr->spinoff_c << std::endl;
    std::cout << "is_adjust_same_series_c: " << ptr->is_adjust_same_series_c << std::endl;
    std::cout << "price_info_prev_day_c: " << ptr->price_info_prev_day_c << std::endl;
    std::cout << "no_of_shares_issued_op_c: " << ptr->no_of_shares_issued_op_c << std::endl;
    std::cout << "free_float_op_c: " << ptr->free_float_op_c << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "delivery_change: " << ptr->delivery_change << std::endl;
}

void print_answer_updated_pos_info_item_t(answer_updated_pos_info_item_t* ptr) {
    std::cout << "pos_info_update_api: " << ptr->pos_info_update_api << std::endl;
}

void print_answer_user_type_info_item_t(answer_user_type_info_item_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "trans_or_bdx_c: " << ptr->trans_or_bdx_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_answer_valuation_group_item_t(answer_valuation_group_item_t* ptr) {
    std::cout << "vag_limit_i: " << ptr->vag_limit_i << std::endl;
    std::cout << "valuation_group_id_s: " << ptr->valuation_group_id_s << std::endl;
    std::cout << "description_s: " << ptr->description_s << std::endl;
}

void print_average_price_trade_item_t(average_price_trade_item_t* ptr) {
    std::cout << "trade_number_i: " << ptr->trade_number_i << std::endl;
}

void print_block_order_response_item_t(block_order_response_item_t* ptr) {
    std::cout << "transaction_status_i: " << ptr->transaction_status_i << std::endl;
    std::cout << "trans_ack_i: " << ptr->trans_ack_i << std::endl;
    std::cout << "item_number_c: " << ptr->item_number_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_block_order_trans_item_t(block_order_trans_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "total_volume_i: " << ptr->total_volume_i << std::endl;
}

void print_block_order_trans_p_item_t(block_order_trans_p_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "total_volume_i: " << ptr->total_volume_i << std::endl;
}

void print_block_price_trans_item_t(block_price_trans_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_number_bid_u: " << ptr->order_number_bid_u << std::endl;
    std::cout << "order_number_ask_u: " << ptr->order_number_ask_u << std::endl;
    std::cout << "bid_premium_i: " << ptr->bid_premium_i << std::endl;
    std::cout << "ask_premium_i: " << ptr->ask_premium_i << std::endl;
    std::cout << "bid_quantity_i: " << ptr->bid_quantity_i << std::endl;
    std::cout << "ask_quantity_i: " << ptr->ask_quantity_i << std::endl;
    std::cout << "bid_total_volume_i: " << ptr->bid_total_volume_i << std::endl;
    std::cout << "ask_total_volume_i: " << ptr->ask_total_volume_i << std::endl;
    std::cout << "block_n: " << ptr->block_n << std::endl;
    std::cout << "time_validity_n: " << ptr->time_validity_n << std::endl;
    std::cout << "order_type_c: " << ptr->order_type_c << std::endl;
    std::cout << "ex_client_s: " << ptr->ex_client_s << std::endl;
    std::cout << "delta_quantity_c: " << ptr->delta_quantity_c << std::endl;
}

void print_block_price_trans_p_item_t(block_price_trans_p_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_number_bid_u: " << ptr->order_number_bid_u << std::endl;
    std::cout << "order_number_ask_u: " << ptr->order_number_ask_u << std::endl;
    std::cout << "bid_premium_i: " << ptr->bid_premium_i << std::endl;
    std::cout << "ask_premium_i: " << ptr->ask_premium_i << std::endl;
    std::cout << "bid_quantity_i: " << ptr->bid_quantity_i << std::endl;
    std::cout << "ask_quantity_i: " << ptr->ask_quantity_i << std::endl;
    std::cout << "bid_total_volume_i: " << ptr->bid_total_volume_i << std::endl;
    std::cout << "ask_total_volume_i: " << ptr->ask_total_volume_i << std::endl;
    std::cout << "block_n: " << ptr->block_n << std::endl;
    std::cout << "time_validity_n: " << ptr->time_validity_n << std::endl;
    std::cout << "order_type_c: " << ptr->order_type_c << std::endl;
    std::cout << "ex_client_s: " << ptr->ex_client_s << std::endl;
    std::cout << "delta_quantity_c: " << ptr->delta_quantity_c << std::endl;
}

void print_collateral_base_t(collateral_base_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "amount_q: " << ptr->amount_q << std::endl;
    std::cout << "passthrough_s: " << ptr->passthrough_s << std::endl;
    std::cout << "effective_date_s: " << ptr->effective_date_s << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "effective_until_s: " << ptr->effective_until_s << std::endl;
}

void print_da28_t(da28_t* ptr) {
    std::cout << "central_group_s: " << ptr->central_group_s << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_clearing_message_item_t(clearing_message_item_t* ptr) {
    std::cout << "text_line_s: " << ptr->text_line_s << std::endl;
}

void print_base_collateral_account_t(base_collateral_account_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_pos_account_t(pos_account_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_orig_series_t(orig_series_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "instrument_group_c: " << ptr->instrument_group_c << std::endl;
    std::cout << "modifier_c: " << ptr->modifier_c << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "expiration_date_n: " << ptr->expiration_date_n << std::endl;
    std::cout << "strike_price_i: " << ptr->strike_price_i << std::endl;
}

void print_match_id_t(match_id_t* ptr) {
    std::cout << "execution_event_nbr_u: " << ptr->execution_event_nbr_u << std::endl;
    std::cout << "match_group_nbr_u: " << ptr->match_group_nbr_u << std::endl;
    std::cout << "match_item_nbr_u: " << ptr->match_item_nbr_u << std::endl;
}

void print_countersign_code_t(countersign_code_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "user_id_s: " << ptr->user_id_s << std::endl;
}

void print_margin_account_t(margin_account_t* ptr) {
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_currency_t(currency_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "instrument_group_c: " << ptr->instrument_group_c << std::endl;
    std::cout << "modifier_c: " << ptr->modifier_c << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "expiration_date_n: " << ptr->expiration_date_n << std::endl;
    std::cout << "strike_price_i: " << ptr->strike_price_i << std::endl;
}

void print_combo_series_multi_update_bu1005_item_t(combo_series_multi_update_bu1005_item_t* ptr) {
    std::cout << "chg_type_n: " << ptr->chg_type_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "da5: " << ptr->da5 << std::endl;
}

void print_combo_trade_report_trans_item_t(combo_trade_report_trans_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "mp_quantity_i: " << ptr->mp_quantity_i << std::endl;
    std::cout << "premium_i: " << ptr->premium_i << std::endl;
    std::cout << "block_n: " << ptr->block_n << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "time_of_agreement_date_s: " << ptr->time_of_agreement_date_s << std::endl;
    std::cout << "time_of_agreement_time_s: " << ptr->time_of_agreement_time_s << std::endl;
    std::cout << "deferred_publication_c: " << ptr->deferred_publication_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "bid_side: " << ptr->bid_side << std::endl;
    std::cout << "ask_side: " << ptr->ask_side << std::endl;
}

void print_confirm_give_up_request_item_t(confirm_give_up_request_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "trade_quantity_i: " << ptr->trade_quantity_i << std::endl;
    std::cout << "open_close_req_c: " << ptr->open_close_req_c << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
}

void print_corp_action_update_bu53_item_t(corp_action_update_bu53_item_t* ptr) {
    std::cout << "da53: " << ptr->da53 << std::endl;
}

void print_create_acc_access_type_item_t(create_acc_access_type_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
}

void print_create_currency_ranking_connections_item_t(create_currency_ranking_connections_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
}

void print_currency_ranking_key_t(currency_ranking_key_t* ptr) {
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "currency_ranking_id_s: " << ptr->currency_ranking_id_s << std::endl;
    std::cout << "version_i: " << ptr->version_i << std::endl;
    std::cout << "filler_4_s: " << ptr->filler_4_s << std::endl;
}

void print_currency_ranking_item_t(currency_ranking_item_t* ptr) {
    std::cout << "currency_series: " << ptr->currency_series << std::endl;
    std::cout << "currency_rank_n: " << ptr->currency_rank_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "cash_collateral_limit_q: " << ptr->cash_collateral_limit_q << std::endl;
    std::cout << "direct_credit_limit_q: " << ptr->direct_credit_limit_q << std::endl;
}

void print_delete_currency_ranking_connections_item_t(delete_currency_ranking_connections_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "currency_ranking_id_s: " << ptr->currency_ranking_id_s << std::endl;
    std::cout << "version_i: " << ptr->version_i << std::endl;
}

void print_whose_t(whose_t* ptr) {
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "ex_client_s: " << ptr->ex_client_s << std::endl;
}

void print_deposit_withdraw_transfer_collateral_txn_item_t(deposit_withdraw_transfer_collateral_txn_item_t* ptr) {
    std::cout << "deposit_withdraw_collateral_ssi: " << ptr->deposit_withdraw_collateral_ssi << std::endl;
}

void print_directed_quote_request_ack_item_t(directed_quote_request_ack_item_t* ptr) {
    std::cout << "party: " << ptr->party << std::endl;
}

void print_directed_quote_request_trans_item_t(directed_quote_request_trans_item_t* ptr) {
    std::cout << "party: " << ptr->party << std::endl;
}

void print_directed_quote_request_trans_p_item_t(directed_quote_request_trans_p_item_t* ptr) {
    std::cout << "party: " << ptr->party << std::endl;
}

void print_equil_price_update_item_t(equil_price_update_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "equilibrium_quantity_i: " << ptr->equilibrium_quantity_i << std::endl;
    std::cout << "equilibrium_price_i: " << ptr->equilibrium_price_i << std::endl;
    std::cout << "best_bid_premium_i: " << ptr->best_bid_premium_i << std::endl;
    std::cout << "best_ask_premium_i: " << ptr->best_ask_premium_i << std::endl;
    std::cout << "best_bid_quantity_i: " << ptr->best_bid_quantity_i << std::endl;
    std::cout << "best_ask_quantity_i: " << ptr->best_ask_quantity_i << std::endl;
    std::cout << "matching_price_type_c: " << ptr->matching_price_type_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_etpr_delta_limit_change_item_t(etpr_delta_limit_change_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "delta_limits: " << ptr->delta_limits << std::endl;
}

void print_etpr_limit_change_item_t(etpr_limit_change_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "upper_limit_i: " << ptr->upper_limit_i << std::endl;
    std::cout << "lower_limit_i: " << ptr->lower_limit_i << std::endl;
    std::cout << "reference_premium_i: " << ptr->reference_premium_i << std::endl;
    std::cout << "filler_4_s: " << ptr->filler_4_s << std::endl;
}

void print_da78_t(da78_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "date_exception_s: " << ptr->date_exception_s << std::endl;
}

void print_da47_t(da47_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "description_s: " << ptr->description_s << std::endl;
    std::cout << "haircut_rate_u: " << ptr->haircut_rate_u << std::endl;
    std::cout << "time_to_maturity_u: " << ptr->time_to_maturity_u << std::endl;
}

void print_instrument_status_info_item_t(instrument_status_info_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "seconds_to_state_change_n: " << ptr->seconds_to_state_change_n << std::endl;
    std::cout << "state_number_n: " << ptr->state_number_n << std::endl;
    std::cout << "warning_msg_s: " << ptr->warning_msg_s << std::endl;
    std::cout << "state_level_e: " << ptr->state_level_e << std::endl;
    std::cout << "actual_start_date_s: " << ptr->actual_start_date_s << std::endl;
    std::cout << "actual_start_time_s: " << ptr->actual_start_time_s << std::endl;
    std::cout << "next_planned_start_date_s: " << ptr->next_planned_start_date_s << std::endl;
    std::cout << "next_planned_start_time_s: " << ptr->next_planned_start_time_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_da10_da20_t(da10_da20_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "upper_level_series: " << ptr->upper_level_series << std::endl;
    std::cout << "price_quot_factor_i: " << ptr->price_quot_factor_i << std::endl;
    std::cout << "contract_size_i: " << ptr->contract_size_i << std::endl;
    std::cout << "exerc_limit_i: " << ptr->exerc_limit_i << std::endl;
    std::cout << "redemption_value_i: " << ptr->redemption_value_i << std::endl;
    std::cout << "min_qty_increment_i: " << ptr->min_qty_increment_i << std::endl;
    std::cout << "derivate_level_n: " << ptr->derivate_level_n << std::endl;
    std::cout << "dec_in_strike_price_n: " << ptr->dec_in_strike_price_n << std::endl;
    std::cout << "dec_in_contr_size_n: " << ptr->dec_in_contr_size_n << std::endl;
    std::cout << "rnt_id_n: " << ptr->rnt_id_n << std::endl;
    std::cout << "dec_in_premium_n: " << ptr->dec_in_premium_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
    std::cout << "dec_in_deliv_n: " << ptr->dec_in_deliv_n << std::endl;
    std::cout << "items_block_n: " << ptr->items_block_n << std::endl;
    std::cout << "block_size: " << ptr->block_size << std::endl;
    std::cout << "cleared_dec_in_qty_n: " << ptr->cleared_dec_in_qty_n << std::endl;
    std::cout << "virt_commodity_n: " << ptr->virt_commodity_n << std::endl;
    std::cout << "dec_in_fixing_n: " << ptr->dec_in_fixing_n << std::endl;
    std::cout << "base_cur_s: " << ptr->base_cur_s << std::endl;
    std::cout << "traded_c: " << ptr->traded_c << std::endl;
    std::cout << "exerc_limit_unit_c: " << ptr->exerc_limit_unit_c << std::endl;
    std::cout << "inc_id_s: " << ptr->inc_id_s << std::endl;
    std::cout << "trc_id_s: " << ptr->trc_id_s << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "is_fractions_c: " << ptr->is_fractions_c << std::endl;
    std::cout << "price_unit_premium_c: " << ptr->price_unit_premium_c << std::endl;
    std::cout << "price_unit_strike_c: " << ptr->price_unit_strike_c << std::endl;
    std::cout << "settl_cur_id_s: " << ptr->settl_cur_id_s << std::endl;
    std::cout << "credit_class_s: " << ptr->credit_class_s << std::endl;
    std::cout << "csd_id_s: " << ptr->csd_id_s << std::endl;
    std::cout << "trd_cur_unit_c: " << ptr->trd_cur_unit_c << std::endl;
    std::cout << "collateral_type_c: " << ptr->collateral_type_c << std::endl;
    std::cout << "fixing_req_c: " << ptr->fixing_req_c << std::endl;
    std::cout << "mbs_id_s: " << ptr->mbs_id_s << std::endl;
    std::cout << "valuation_group_id_s: " << ptr->valuation_group_id_s << std::endl;
    std::cout << "gross_settlement_c: " << ptr->gross_settlement_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_irs_leg_t(irs_leg_t* ptr) {
    std::cout << "fixed_interest_rate_i: " << ptr->fixed_interest_rate_i << std::endl;
    std::cout << "float_rate_index: " << ptr->float_rate_index << std::endl;
    std::cout << "spread_i: " << ptr->spread_i << std::endl;
    std::cout << "init_interest_rate_i: " << ptr->init_interest_rate_i << std::endl;
    std::cout << "first_rollover_date_s: " << ptr->first_rollover_date_s << std::endl;
    std::cout << "day_count_conv_c: " << ptr->day_count_conv_c << std::endl;
    std::cout << "rollover_period_c: " << ptr->rollover_period_c << std::endl;
    std::cout << "rollover_day_c: " << ptr->rollover_day_c << std::endl;
    std::cout << "fixed_or_float_c: " << ptr->fixed_or_float_c << std::endl;
    std::cout << "party_pay: " << ptr->party_pay << std::endl;
    std::cout << "effective_date_s: " << ptr->effective_date_s << std::endl;
    std::cout << "filler_4_s: " << ptr->filler_4_s << std::endl;
}

void print_limit_change_item_t(limit_change_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "upper_limit_i: " << ptr->upper_limit_i << std::endl;
    std::cout << "lower_limit_i: " << ptr->lower_limit_i << std::endl;
    std::cout << "reference_premium_i: " << ptr->reference_premium_i << std::endl;
    std::cout << "price_source_rule_n: " << ptr->price_source_rule_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_stop_series_t(stop_series_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "instrument_group_c: " << ptr->instrument_group_c << std::endl;
    std::cout << "modifier_c: " << ptr->modifier_c << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "expiration_date_n: " << ptr->expiration_date_n << std::endl;
    std::cout << "strike_price_i: " << ptr->strike_price_i << std::endl;
}

void print_stp_key_t(stp_key_t* ptr) {
    std::cout << "stp_key_i: " << ptr->stp_key_i << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_mass_quote_trans_item_t(mass_quote_trans_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "buy_price_i: " << ptr->buy_price_i << std::endl;
    std::cout << "buy_quantity_u: " << ptr->buy_quantity_u << std::endl;
    std::cout << "sell_price_i: " << ptr->sell_price_i << std::endl;
    std::cout << "sell_quantity_u: " << ptr->sell_quantity_u << std::endl;
}

void print_mass_quote_update_item_t(mass_quote_update_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "buy_price_i: " << ptr->buy_price_i << std::endl;
    std::cout << "buy_quantity_u: " << ptr->buy_quantity_u << std::endl;
    std::cout << "sell_price_i: " << ptr->sell_price_i << std::endl;
    std::cout << "sell_quantity_u: " << ptr->sell_quantity_u << std::endl;
}

void print_message_information_item_t(message_information_item_t* ptr) {
    std::cout << "text_line_s: " << ptr->text_line_s << std::endl;
}

void print_da87_t(da87_t* ptr) {
    std::cout << "quantity_protection_q: " << ptr->quantity_protection_q << std::endl;
    std::cout << "delta_protection_q: " << ptr->delta_protection_q << std::endl;
    std::cout << "exposure_time_interval_i: " << ptr->exposure_time_interval_i << std::endl;
    std::cout << "frozen_time_i: " << ptr->frozen_time_i << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "include_futures_c: " << ptr->include_futures_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_auth_section_t(auth_section_t* ptr) {
    std::cout << "auth_id: " << ptr->auth_id << std::endl;
    std::cout << "login_user_s: " << ptr->login_user_s << std::endl;
    std::cout << "auth_reject_status_c: " << ptr->auth_reject_status_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_account_data_external_t(account_data_external_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "countersign: " << ptr->countersign << std::endl;
    std::cout << "prop_trade_account: " << ptr->prop_trade_account << std::endl;
    std::cout << "prop_deliv_account: " << ptr->prop_deliv_account << std::endl;
    std::cout << "prop_pos_account: " << ptr->prop_pos_account << std::endl;
    std::cout << "prop_margin_account: " << ptr->prop_margin_account << std::endl;
    std::cout << "sink_account: " << ptr->sink_account << std::endl;
    std::cout << "prop_origin_account: " << ptr->prop_origin_account << std::endl;
    std::cout << "prop_call_account: " << ptr->prop_call_account << std::endl;
    std::cout << "member_exposure_limit_q: " << ptr->member_exposure_limit_q << std::endl;
    std::cout << "rank_class_i: " << ptr->rank_class_i << std::endl;
    std::cout << "risk_currency_s: " << ptr->risk_currency_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "investor_type_s: " << ptr->investor_type_s << std::endl;
    std::cout << "nationality_s: " << ptr->nationality_s << std::endl;
    std::cout << "account_text_s: " << ptr->account_text_s << std::endl;
    std::cout << "ext_acc_id_s: " << ptr->ext_acc_id_s << std::endl;
    std::cout << "ext_acc_controller_s: " << ptr->ext_acc_controller_s << std::endl;
    std::cout << "ext_acc_registrar_s: " << ptr->ext_acc_registrar_s << std::endl;
    std::cout << "org_number_s: " << ptr->org_number_s << std::endl;
    std::cout << "account_alias_s: " << ptr->account_alias_s << std::endl;
    std::cout << "diary_number_s: " << ptr->diary_number_s << std::endl;
    std::cout << "acc_type_s: " << ptr->acc_type_s << std::endl;
    std::cout << "fee_type_s: " << ptr->fee_type_s << std::endl;
    std::cout << "cust_bank_id_s: " << ptr->cust_bank_id_s << std::endl;
    std::cout << "acc_state_c: " << ptr->acc_state_c << std::endl;
    std::cout << "read_access_c: " << ptr->read_access_c << std::endl;
    std::cout << "auto_net_c: " << ptr->auto_net_c << std::endl;
    std::cout << "risk_cur_conv_c: " << ptr->risk_cur_conv_c << std::endl;
    std::cout << "risk_margin_net_c: " << ptr->risk_margin_net_c << std::endl;
    std::cout << "acc_allow_nov_c: " << ptr->acc_allow_nov_c << std::endl;
    std::cout << "allow_partial_settlement_c: " << ptr->allow_partial_settlement_c << std::endl;
    std::cout << "cash_collateral_interest_c: " << ptr->cash_collateral_interest_c << std::endl;
    std::cout << "dd_in_base_c: " << ptr->dd_in_base_c << std::endl;
}

void print_modify_acc_access_type_item_t(modify_acc_access_type_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
}

void print_modify_commission_item_t(modify_commission_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "account_id_s: " << ptr->account_id_s << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "user_code_s: " << ptr->user_code_s << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "commission_i: " << ptr->commission_i << std::endl;
}

void print_da18_t(da18_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "date_non_trading_s: " << ptr->date_non_trading_s << std::endl;
    std::cout << "closed_for_trading_c: " << ptr->closed_for_trading_c << std::endl;
    std::cout << "closed_for_settlement_c: " << ptr->closed_for_settlement_c << std::endl;
    std::cout << "closed_for_clearing_c: " << ptr->closed_for_clearing_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_da50_t(da50_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "date_non_trading_s: " << ptr->date_non_trading_s << std::endl;
}

void print_changes_t(changes_t* ptr) {
    std::cout << "sequence_number_u: " << ptr->sequence_number_u << std::endl;
    std::cout << "ob_position_u: " << ptr->ob_position_u << std::endl;
    std::cout << "quantity_difference_i: " << ptr->quantity_difference_i << std::endl;
    std::cout << "ob_command_c: " << ptr->ob_command_c << std::endl;
    std::cout << "change_reason_c: " << ptr->change_reason_c << std::endl;
    std::cout << "combo_mark_c: " << ptr->combo_mark_c << std::endl;
    std::cout << "mbo_flags_c: " << ptr->mbo_flags_c << std::endl;
}

void print_order_change_separate_t(order_change_separate_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "mp_quantity_i: " << ptr->mp_quantity_i << std::endl;
    std::cout << "total_volume_i: " << ptr->total_volume_i << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "change_reason_c: " << ptr->change_reason_c << std::endl;
    std::cout << "ex_client_s: " << ptr->ex_client_s << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "originator_trading_code: " << ptr->originator_trading_code << std::endl;
    std::cout << "execution_timestamp: " << ptr->execution_timestamp << std::endl;
}

void print_payment_t(payment_t* ptr) {
    std::cout << "paying_member: " << ptr->paying_member << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "amount_q: " << ptr->amount_q << std::endl;
    std::cout << "currency: " << ptr->currency << std::endl;
}

void print_auth_by_whom_t(auth_by_whom_t* ptr) {
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
}

void print_position_closeout_item_t(position_closeout_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "final_held_q: " << ptr->final_held_q << std::endl;
    std::cout << "closeout_qty_i: " << ptr->closeout_qty_i << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
}

void print_position_closeout_status_item_t(position_closeout_status_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "final_held_q: " << ptr->final_held_q << std::endl;
    std::cout << "closeout_qty_i: " << ptr->closeout_qty_i << std::endl;
    std::cout << "closeout_status_i: " << ptr->closeout_status_i << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
}

void print_acc_access_type_key_t(acc_access_type_key_t* ptr) {
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
}

void print_search_series_t(search_series_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "instrument_group_c: " << ptr->instrument_group_c << std::endl;
    std::cout << "modifier_c: " << ptr->modifier_c << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "expiration_date_n: " << ptr->expiration_date_n << std::endl;
    std::cout << "strike_price_i: " << ptr->strike_price_i << std::endl;
}

void print_query_collateral_transaction_item_t(query_collateral_transaction_item_t* ptr) {
    std::cout << "collateral_transaction_state_c: " << ptr->collateral_transaction_state_c << std::endl;
}

void print_query_settlement_instruction_item_t(query_settlement_instruction_item_t* ptr) {
    std::cout << "le_state_c: " << ptr->le_state_c << std::endl;
}

void print_other_series_t(other_series_t* ptr) {
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "instrument_group_c: " << ptr->instrument_group_c << std::endl;
    std::cout << "modifier_c: " << ptr->modifier_c << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "expiration_date_n: " << ptr->expiration_date_n << std::endl;
    std::cout << "strike_price_i: " << ptr->strike_price_i << std::endl;
}

void print_rectify_deal_item_t(rectify_deal_item_t* ptr) {
    std::cout << "trade_number_i: " << ptr->trade_number_i << std::endl;
    std::cout << "trade_quantity_i: " << ptr->trade_quantity_i << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "reserved_1_c: " << ptr->reserved_1_c << std::endl;
    std::cout << "reserved_2_s: " << ptr->reserved_2_s << std::endl;
}

void print_rectify_trade_item_t(rectify_trade_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "trade_quantity_i: " << ptr->trade_quantity_i << std::endl;
    std::cout << "open_close_req_c: " << ptr->open_close_req_c << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
}

void print_store_account_t(store_account_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "countersign: " << ptr->countersign << std::endl;
    std::cout << "prop_trade_account: " << ptr->prop_trade_account << std::endl;
    std::cout << "prop_settlement_account: " << ptr->prop_settlement_account << std::endl;
    std::cout << "prop_delivery_account: " << ptr->prop_delivery_account << std::endl;
    std::cout << "prop_pos_account: " << ptr->prop_pos_account << std::endl;
    std::cout << "prop_margin_account: " << ptr->prop_margin_account << std::endl;
    std::cout << "sink_account: " << ptr->sink_account << std::endl;
    std::cout << "prop_origin_account: " << ptr->prop_origin_account << std::endl;
    std::cout << "prop_call_account: " << ptr->prop_call_account << std::endl;
    std::cout << "cash_opt_account: " << ptr->cash_opt_account << std::endl;
    std::cout << "diary_number_s: " << ptr->diary_number_s << std::endl;
    std::cout << "acc_type_s: " << ptr->acc_type_s << std::endl;
    std::cout << "fee_type_s: " << ptr->fee_type_s << std::endl;
    std::cout << "cust_bank_id_s: " << ptr->cust_bank_id_s << std::endl;
    std::cout << "risk_cur_id_s: " << ptr->risk_cur_id_s << std::endl;
    std::cout << "base_cur_id_s: " << ptr->base_cur_id_s << std::endl;
    std::cout << "investor_type_s: " << ptr->investor_type_s << std::endl;
    std::cout << "nationality_s: " << ptr->nationality_s << std::endl;
    std::cout << "account_text_s: " << ptr->account_text_s << std::endl;
    std::cout << "ext_acc_id_s: " << ptr->ext_acc_id_s << std::endl;
    std::cout << "ext_acc_controller_s: " << ptr->ext_acc_controller_s << std::endl;
    std::cout << "ext_acc_registrar_s: " << ptr->ext_acc_registrar_s << std::endl;
    std::cout << "org_number_s: " << ptr->org_number_s << std::endl;
    std::cout << "account_alias_s: " << ptr->account_alias_s << std::endl;
    std::cout << "acc_state_c: " << ptr->acc_state_c << std::endl;
    std::cout << "read_access_c: " << ptr->read_access_c << std::endl;
    std::cout << "auto_net_c: " << ptr->auto_net_c << std::endl;
    std::cout << "foreign_holder_c: " << ptr->foreign_holder_c << std::endl;
    std::cout << "risk_cur_conv_c: " << ptr->risk_cur_conv_c << std::endl;
    std::cout << "margin_net_c: " << ptr->margin_net_c << std::endl;
    std::cout << "account_collateral_handling_c: " << ptr->account_collateral_handling_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_series_bo_multi_update_bu1009_item_t(series_bo_multi_update_bu1009_item_t* ptr) {
    std::cout << "chg_type_n: " << ptr->chg_type_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "da9: " << ptr->da9 << std::endl;
}

void print_series_multi_update_bu1002_item_t(series_multi_update_bu1002_item_t* ptr) {
    std::cout << "chg_type_n: " << ptr->chg_type_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "da2: " << ptr->da2 << std::endl;
}

void print_settle_price_update_item_t(settle_price_update_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "settle_price_i: " << ptr->settle_price_i << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "settlement_price_type_c: " << ptr->settlement_price_type_c << std::endl;
    std::cout << "date_and_time_s: " << ptr->date_and_time_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_set_delta_limit_trans_item_t(set_delta_limit_trans_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "ref_delta_limits: " << ptr->ref_delta_limits << std::endl;
    std::cout << "last_delta_limits: " << ptr->last_delta_limits << std::endl;
}

void print_bid_side_t(bid_side_t* ptr) {
    std::cout << "trd_rpt_part: " << ptr->trd_rpt_part << std::endl;
}

void print_ask_side_t(ask_side_t* ptr) {
    std::cout << "trd_rpt_part: " << ptr->trd_rpt_part << std::endl;
}

void print_da4_da19_t(da4_da19_t* ptr) {
    std::cout << "subscription_price_i: " << ptr->subscription_price_i << std::endl;
    std::cout << "interest_rate_i: " << ptr->interest_rate_i << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "com_id_s: " << ptr->com_id_s << std::endl;
    std::cout << "isin_code_s: " << ptr->isin_code_s << std::endl;
    std::cout << "dec_in_price_n: " << ptr->dec_in_price_n << std::endl;
    std::cout << "date_release_s: " << ptr->date_release_s << std::endl;
    std::cout << "date_termination_s: " << ptr->date_termination_s << std::endl;
    std::cout << "date_dated_s: " << ptr->date_dated_s << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "base_cur_s: " << ptr->base_cur_s << std::endl;
    std::cout << "deliverable_c: " << ptr->deliverable_c << std::endl;
    std::cout << "coupon_frequency_n: " << ptr->coupon_frequency_n << std::endl;
    std::cout << "nominal_value_q: " << ptr->nominal_value_q << std::endl;
    std::cout << "day_count_n: " << ptr->day_count_n << std::endl;
    std::cout << "days_in_interest_year_n: " << ptr->days_in_interest_year_n << std::endl;
    std::cout << "coupon_interest_i: " << ptr->coupon_interest_i << std::endl;
    std::cout << "coupon_settlement_days_n: " << ptr->coupon_settlement_days_n << std::endl;
    std::cout << "underlying_type_c: " << ptr->underlying_type_c << std::endl;
    std::cout << "price_unit_c: " << ptr->price_unit_c << std::endl;
    std::cout << "dec_in_nominal_n: " << ptr->dec_in_nominal_n << std::endl;
    std::cout << "state_number_n: " << ptr->state_number_n << std::endl;
    std::cout << "linked_commodity_n: " << ptr->linked_commodity_n << std::endl;
    std::cout << "fixed_income_type_c: " << ptr->fixed_income_type_c << std::endl;
    std::cout << "underlying_status_c: " << ptr->underlying_status_c << std::endl;
    std::cout << "underlying_issuer_s: " << ptr->underlying_issuer_s << std::endl;
    std::cout << "time_delivery_start_s: " << ptr->time_delivery_start_s << std::endl;
    std::cout << "time_delivery_stop_s: " << ptr->time_delivery_stop_s << std::endl;
    std::cout << "sector_code_s: " << ptr->sector_code_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "coupon: " << ptr->coupon << std::endl;
    std::cout << "virtual_c: " << ptr->virtual_c << std::endl;
    std::cout << "member_circ_numb_s: " << ptr->member_circ_numb_s << std::endl;
    std::cout << "inv_scheme_c: " << ptr->inv_scheme_c << std::endl;
    std::cout << "date_closing_s: " << ptr->date_closing_s << std::endl;
    std::cout << "date_last_s: " << ptr->date_last_s << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "cur_unit_c: " << ptr->cur_unit_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_withdraw_collateral_mwa_ssi_t(withdraw_collateral_mwa_ssi_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "ssi_id_q: " << ptr->ssi_id_q << std::endl;
    std::cout << "remaining_collateral_amount_q: " << ptr->remaining_collateral_amount_q << std::endl;
    std::cout << "isin_code_s: " << ptr->isin_code_s << std::endl;
    std::cout << "clh_account_id_s: " << ptr->clh_account_id_s << std::endl;
    std::cout << "passthrough_s: " << ptr->passthrough_s << std::endl;
    std::cout << "instr_ref_s: " << ptr->instr_ref_s << std::endl;
    std::cout << "reason_s: " << ptr->reason_s << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "cm_sim_remaining_type_c: " << ptr->cm_sim_remaining_type_c << std::endl;
    std::cout << "dec_in_remaining_amount_n: " << ptr->dec_in_remaining_amount_n << std::endl;
    std::cout << "dec_in_amount_n: " << ptr->dec_in_amount_n << std::endl;
    std::cout << "collateral_transaction_state_c: " << ptr->collateral_transaction_state_c << std::endl;
    std::cout << "collateral_transaction_type_c: " << ptr->collateral_transaction_type_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_aat_participant_connection_t(aat_participant_connection_t* ptr) {
    std::cout << "aat_participant: " << ptr->aat_participant << std::endl;
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "le_state_c: " << ptr->le_state_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
}

void print_aat_report_connection_t(aat_report_connection_t* ptr) {
    std::cout << "report_name_s: " << ptr->report_name_s << std::endl;
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "le_state_c: " << ptr->le_state_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
}

void print_aat_rg_connection_status_t(aat_rg_connection_status_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "connect_type_c: " << ptr->connect_type_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_aat_user_connection_t(aat_user_connection_t* ptr) {
    std::cout << "username_s: " << ptr->username_s << std::endl;
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "le_state_c: " << ptr->le_state_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
}

void print_accept_reject_trade_report_for_clearing_t(accept_reject_trade_report_for_clearing_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trade_report_nbr_q: " << ptr->trade_report_nbr_q << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "confirm_reject_c: " << ptr->confirm_reject_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_account_fee_type_update_bu13_t(account_fee_type_update_bu13_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "chg_type_n: " << ptr->chg_type_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "da13: " << ptr->da13 << std::endl;
}

void print_account_status_t(account_status_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_account_type_update_bu12_t(account_type_update_bu12_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "chg_type_n: " << ptr->chg_type_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "da12: " << ptr->da12 << std::endl;
}

void print_account_vim_t(account_vim_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
}

void print_acc_access_type_attributes_t(acc_access_type_attributes_t* ptr) {
    std::cout << "desc_long_s: " << ptr->desc_long_s << std::endl;
    std::cout << "allow_all_account_i: " << ptr->allow_all_account_i << std::endl;
    std::cout << "version_i: " << ptr->version_i << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "le_state_c: " << ptr->le_state_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_acc_access_type_itm_t(acc_access_type_itm_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "le_state_c: " << ptr->le_state_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
}

void print_add_tm_combo_t(add_tm_combo_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "no_of_legs_n: " << ptr->no_of_legs_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_alter_trans_t(alter_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
}

void print_annul_exercise_req_t(annul_exercise_req_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "exercise_number_i: " << ptr->exercise_number_i << std::endl;
}

void print_answer_aat_connection_t(answer_aat_connection_t* ptr) {
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
    std::cout << "username_s: " << ptr->username_s << std::endl;
    std::cout << "version_i: " << ptr->version_i << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "le_state_c: " << ptr->le_state_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
}

void print_answer_aat_connection_participant_t(answer_aat_connection_participant_t* ptr) {
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
    std::cout << "aat_participant: " << ptr->aat_participant << std::endl;
    std::cout << "version_i: " << ptr->version_i << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "le_state_c: " << ptr->le_state_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
}

void print_answer_aat_connection_report_t(answer_aat_connection_report_t* ptr) {
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
    std::cout << "report_name_s: " << ptr->report_name_s << std::endl;
    std::cout << "version_i: " << ptr->version_i << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "le_state_c: " << ptr->le_state_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
}

void print_answer_aat_connection_risk_group_t(answer_aat_connection_risk_group_t* ptr) {
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
    std::cout << "version_i: " << ptr->version_i << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "le_state_c: " << ptr->le_state_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
}

void print_answer_account_ext_t(answer_account_ext_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_account_fee_type_t(answer_account_fee_type_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_account_hdr_t(answer_account_hdr_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
}

void print_answer_account_type_t(answer_account_type_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_account_type_rule_t(answer_account_type_rule_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_acc_access_type_t(answer_acc_access_type_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
    std::cout << "desc_long_s: " << ptr->desc_long_s << std::endl;
    std::cout << "allow_all_account_i: " << ptr->allow_all_account_i << std::endl;
    std::cout << "version_i: " << ptr->version_i << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "le_state_c: " << ptr->le_state_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_api_delivery_t(answer_api_delivery_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "from_date_s: " << ptr->from_date_s << std::endl;
    std::cout << "sequence_first_i: " << ptr->sequence_first_i << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_api_give_up_t(answer_api_give_up_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "from_date_s: " << ptr->from_date_s << std::endl;
    std::cout << "sequence_first_i: " << ptr->sequence_first_i << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_api_trade_hdr_t(answer_api_trade_hdr_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "from_date_s: " << ptr->from_date_s << std::endl;
    std::cout << "sequence_first_i: " << ptr->sequence_first_i << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_authorized_report_t(answer_authorized_report_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_average_price_trade_t(answer_average_price_trade_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_bi26_signals_sent_t(answer_bi26_signals_sent_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_bi27_broadcasts_sent_t(answer_bi27_broadcasts_sent_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "items_c: " << ptr->items_c << std::endl;
    std::cout << "item1: " << ptr->item1 << std::endl;
}

void print_answer_bi73_signals_sent_t(answer_bi73_signals_sent_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_bi7_signals_sent_t(answer_bi7_signals_sent_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_block_size_t(answer_block_size_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "max_block_order_size_i: " << ptr->max_block_order_size_i << std::endl;
    std::cout << "max_block_price_size_i: " << ptr->max_block_price_size_i << std::endl;
}

void print_answer_broker_t(answer_broker_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_business_date_t(answer_business_date_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "omex_version_s: " << ptr->omex_version_s << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "utc_date_s: " << ptr->utc_date_s << std::endl;
    std::cout << "utc_time_s: " << ptr->utc_time_s << std::endl;
    std::cout << "tz_variable_s: " << ptr->tz_variable_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "utc_offset_i: " << ptr->utc_offset_i << std::endl;
}

void print_answer_central_group_t(answer_central_group_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_clearing_date_t(answer_clearing_date_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "omex_version_s: " << ptr->omex_version_s << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_clearing_date_ext_t(answer_clearing_date_ext_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "omex_version_s: " << ptr->omex_version_s << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_closeout_log_t(answer_closeout_log_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_collateral_t(answer_collateral_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
}

void print_answer_combo_t(answer_combo_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_c: " << ptr->items_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_commission_t(answer_commission_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "send_receive_c: " << ptr->send_receive_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_conf_give_up_req_items_t(answer_conf_give_up_req_items_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_converted_series_t(answer_converted_series_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_cool_off_period_ended_t(answer_cool_off_period_ended_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_corp_action_da53_t(answer_corp_action_da53_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_create_flexible_deriv_t(answer_create_flexible_deriv_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
}

void print_answer_currency_t(answer_currency_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_currency_ranking_connections_t(answer_currency_ranking_connections_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_deal_source_t(answer_deal_source_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_delivery_t(answer_delivery_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_delta_limit_t(answer_delta_limit_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_dh_margin_components_t(answer_dh_margin_components_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "margin_time_s: " << ptr->margin_time_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "sequence_number_n: " << ptr->sequence_number_n << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
    std::cout << "run_type_c: " << ptr->run_type_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_answer_dh_margin_components_item_t(answer_dh_margin_components_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "scanning_risk_q: " << ptr->scanning_risk_q << std::endl;
    std::cout << "inter_month_spread_charge_q: " << ptr->inter_month_spread_charge_q << std::endl;
    std::cout << "delivery_charge_q: " << ptr->delivery_charge_q << std::endl;
    std::cout << "dh_inter_com_spread_credit_q: " << ptr->dh_inter_com_spread_credit_q << std::endl;
    std::cout << "short_option_minimum_charge_q: " << ptr->short_option_minimum_charge_q << std::endl;
    std::cout << "premium_margin_q: " << ptr->premium_margin_q << std::endl;
    std::cout << "opt_premium_margin_q: " << ptr->opt_premium_margin_q << std::endl;
    std::cout << "var_margin_q: " << ptr->var_margin_q << std::endl;
    std::cout << "cco_id_s: " << ptr->cco_id_s << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "risk_type_used_c: " << ptr->risk_type_used_c << std::endl;
    std::cout << "filler_6_s: " << ptr->filler_6_s << std::endl;
}

void print_answer_error_msg_t(answer_error_msg_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_etpr_delta_limit_t(answer_etpr_delta_limit_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_exception_days_t(answer_exception_days_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_exchange_da24_t(answer_exchange_da24_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_exchange_rate_t(answer_exchange_rate_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_exercise_req_t(answer_exercise_req_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_fixing_dates_t(answer_fixing_dates_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_fixing_val_t(answer_fixing_val_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_give_up_request_t(answer_give_up_request_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_greeks_t(answer_greeks_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "marg_run_nbr_n: " << ptr->marg_run_nbr_n << std::endl;
    std::cout << "marg_call_nbr_n: " << ptr->marg_call_nbr_n << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "filler_6_s: " << ptr->filler_6_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_haircut_t(answer_haircut_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_hdr_t(answer_hdr_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
}

void print_answer_instrument_t(answer_instrument_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_instrument_class_t(answer_instrument_class_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_instrument_group_t(answer_instrument_group_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_instrument_status_t(answer_instrument_status_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_limit_t(answer_limit_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_list_ver_t(answer_list_ver_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "info_type_i: " << ptr->info_type_i << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "list_name_s: " << ptr->list_name_s << std::endl;
    std::cout << "report_version_s: " << ptr->report_version_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "file_type_s: " << ptr->file_type_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "text_buffer_s: " << ptr->text_buffer_s << std::endl;
}

void print_answer_list_ver_nrs_t(answer_list_ver_nrs_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "buffer_length_n: " << ptr->buffer_length_n << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "file_name_s: " << ptr->file_name_s << std::endl;
    std::cout << "report_no_i: " << ptr->report_no_i << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "report_spec_s: " << ptr->report_spec_s << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "report_version_s: " << ptr->report_version_s << std::endl;
    std::cout << "ascii_bin_c: " << ptr->ascii_bin_c << std::endl;
    std::cout << "data_buffer_s: " << ptr->data_buffer_s << std::endl;
}

void print_answer_manual_payments_t(answer_manual_payments_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_marginable_spread_status_t(answer_marginable_spread_status_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "rejected_items_n: " << ptr->rejected_items_n << std::endl;
}

void print_answer_marginable_spread_status_item_t(answer_marginable_spread_status_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "spread_status_c: " << ptr->spread_status_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_answer_margin_acc_t(answer_margin_acc_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_margin_data_used_t(answer_margin_data_used_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "marg_run_nbr_n: " << ptr->marg_run_nbr_n << std::endl;
    std::cout << "marg_call_nbr_n: " << ptr->marg_call_nbr_n << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "filler_6_s: " << ptr->filler_6_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_margin_detail_t(answer_margin_detail_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "marg_run_nbr_n: " << ptr->marg_run_nbr_n << std::endl;
    std::cout << "marg_call_nbr_n: " << ptr->marg_call_nbr_n << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "filler_6_s: " << ptr->filler_6_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_margin_ext_t(answer_margin_ext_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_margin_mem_t(answer_margin_mem_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_margin_pa_acc_t(answer_margin_pa_acc_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_margin_prop_t(answer_margin_prop_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "marg_run_nbr_n: " << ptr->marg_run_nbr_n << std::endl;
    std::cout << "marg_call_nbr_n: " << ptr->marg_call_nbr_n << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "filler_6_s: " << ptr->filler_6_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_margin_requirement_account_t(answer_margin_requirement_account_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "margin_time_s: " << ptr->margin_time_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "sequence_number_n: " << ptr->sequence_number_n << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
    std::cout << "run_type_c: " << ptr->run_type_c << std::endl;
    std::cout << "incl_t_plus_one_prices_c: " << ptr->incl_t_plus_one_prices_c << std::endl;
    std::cout << "price_collection_id: " << ptr->price_collection_id << std::endl;
}

void print_answer_margin_results_internal_t(answer_margin_results_internal_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "sequence_number_n: " << ptr->sequence_number_n << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_margin_series_param_t(answer_margin_series_param_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_margin_series_param_ext_t(answer_margin_series_param_ext_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "marg_run_nbr_n: " << ptr->marg_run_nbr_n << std::endl;
    std::cout << "marg_call_nbr_n: " << ptr->marg_call_nbr_n << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "filler_6_s: " << ptr->filler_6_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_margin_ulg_price_t(answer_margin_ulg_price_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_marg_calc_runs_t(answer_marg_calc_runs_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
}

void print_answer_marg_sim_add_trade_t(answer_marg_sim_add_trade_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_market_t(answer_market_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_member_obligation_da57_t(answer_member_obligation_da57_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_missing_delivery_t(answer_missing_delivery_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_missing_give_up_t(answer_missing_give_up_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_missing_trade_change_t(answer_missing_trade_change_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_missing_trade_hdr_t(answer_missing_trade_hdr_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
}

void print_answer_mm_protection_t(answer_mm_protection_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_next_series_hdr_t(answer_next_series_hdr_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "next_series: " << ptr->next_series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_non_trading_days_t(answer_non_trading_days_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_non_trad_settl_days_t(answer_non_trad_settl_days_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_open_interest_t(answer_open_interest_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_open_interest_ext_t(answer_open_interest_ext_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_order_hdr_t(answer_order_hdr_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "next_series: " << ptr->next_series << std::endl;
    std::cout << "next_order_number_u: " << ptr->next_order_number_u << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
}

void print_answer_partition_t(answer_partition_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_paynote_info_t(answer_paynote_info_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_position_t(answer_position_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_position_history_t(answer_position_history_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "nbr_held_q: " << ptr->nbr_held_q << std::endl;
    std::cout << "nbr_written_q: " << ptr->nbr_written_q << std::endl;
    std::cout << "qty_closed_out_q: " << ptr->qty_closed_out_q << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
}

void print_answer_prel_settlement_t(answer_prel_settlement_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_price_limit_trigger_t(answer_price_limit_trigger_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_propagate_t(answer_propagate_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_realtime_ulg_price_t(answer_realtime_ulg_price_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_rectify_d_t(answer_rectify_d_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "reserved_2_s: " << ptr->reserved_2_s << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_rectify_d_cont_t(answer_rectify_d_cont_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_rectify_ext_cont_t(answer_rectify_ext_cont_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_rectify_t_t(answer_rectify_t_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "reserved_2_s: " << ptr->reserved_2_s << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "instance_next_c: " << ptr->instance_next_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_report_nrs_t(answer_report_nrs_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_report_ver_t(answer_report_ver_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_risk_margin_scaling_factor_t(answer_risk_margin_scaling_factor_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
}

void print_answer_rm_margin_sim_t(answer_rm_margin_sim_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "segment_number_out_n: " << ptr->segment_number_out_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
}

void print_answer_rm_param_obj_t(answer_rm_param_obj_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "sequence_number_n: " << ptr->sequence_number_n << std::endl;
    std::cout << "margin_date_s: " << ptr->margin_date_s << std::endl;
    std::cout << "margin_time_s: " << ptr->margin_time_s << std::endl;
    std::cout << "run_type_c: " << ptr->run_type_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_segment_hdr_t(answer_segment_hdr_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_seg_hdr_t(answer_seg_hdr_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
}

void print_answer_series_t(answer_series_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_series_bo_t(answer_series_bo_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "date_trading_s: " << ptr->date_trading_s << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_state_type_t(answer_state_type_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_tot_equil_prices_t(answer_tot_equil_prices_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "instance_c: " << ptr->instance_c << std::endl;
    std::cout << "instance_next_c: " << ptr->instance_next_c << std::endl;
    std::cout << "series_next: " << ptr->series_next << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_tot_ob_t(answer_tot_ob_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_tot_order_t(answer_tot_order_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_index_u: " << ptr->order_index_u << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_trade_report_t(answer_trade_report_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
}

void print_answer_trade_report_types_t(answer_trade_report_types_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_trade_statistics_t(answer_trade_statistics_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_trading_state_t(answer_trading_state_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_trd_report_t(answer_trd_report_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_index_u: " << ptr->order_index_u << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_trd_report_party_t(answer_trd_report_party_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_underlying_t(answer_underlying_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_underlying_adjustment_t(answer_underlying_adjustment_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_updated_pos_info_t(answer_updated_pos_info_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "partition_low: " << ptr->partition_low << std::endl;
    std::cout << "partition_high: " << ptr->partition_high << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_used_marg_params_t(answer_used_marg_params_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "sequence_number_n: " << ptr->sequence_number_n << std::endl;
    std::cout << "margin_date_s: " << ptr->margin_date_s << std::endl;
    std::cout << "margin_time_s: " << ptr->margin_time_s << std::endl;
    std::cout << "run_type_c: " << ptr->run_type_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_answer_user_type_info_t(answer_user_type_info_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "ust_id_s: " << ptr->ust_id_s << std::endl;
    std::cout << "ext_or_int_c: " << ptr->ext_or_int_c << std::endl;
    std::cout << "is_trader_c: " << ptr->is_trader_c << std::endl;
    std::cout << "program_trader_c: " << ptr->program_trader_c << std::endl;
    std::cout << "trader_authorization_c: " << ptr->trader_authorization_c << std::endl;
    std::cout << "hide_firm_order_trade_c: " << ptr->hide_firm_order_trade_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_answer_valuation_group_t(answer_valuation_group_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_application_status_t(application_status_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "application_status_i: " << ptr->application_status_i << std::endl;
}

void print_average_price_trade_t(average_price_trade_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_base_call_t(base_call_t* ptr) {
    std::cout << "base_collateral_req_q: " << ptr->base_collateral_req_q << std::endl;
    std::cout << "adjusted_base_collateral_req_q: " << ptr->adjusted_base_collateral_req_q << std::endl;
}

void print_basic_order_t(basic_order_t* ptr) {
    std::cout << "premium_i: " << ptr->premium_i << std::endl;
    std::cout << "quantity_i: " << ptr->quantity_i << std::endl;
    std::cout << "block_n: " << ptr->block_n << std::endl;
    std::cout << "time_validity_n: " << ptr->time_validity_n << std::endl;
    std::cout << "exch_order_type_n: " << ptr->exch_order_type_n << std::endl;
    std::cout << "order_type_c: " << ptr->order_type_c << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_basic_order_book_order_t(basic_order_book_order_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "owner: " << ptr->owner << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "timestamp_in: " << ptr->timestamp_in << std::endl;
    std::cout << "timestamp_created: " << ptr->timestamp_created << std::endl;
    std::cout << "sequence_number_u: " << ptr->sequence_number_u << std::endl;
    std::cout << "ob_position_u: " << ptr->ob_position_u << std::endl;
    std::cout << "premium_i: " << ptr->premium_i << std::endl;
    std::cout << "quantity_i: " << ptr->quantity_i << std::endl;
    std::cout << "original_quantity_i: " << ptr->original_quantity_i << std::endl;
    std::cout << "block_n: " << ptr->block_n << std::endl;
    std::cout << "time_validity_n: " << ptr->time_validity_n << std::endl;
    std::cout << "exch_order_type_n: " << ptr->exch_order_type_n << std::endl;
    std::cout << "transaction_number_n: " << ptr->transaction_number_n << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
    std::cout << "ex_client_s: " << ptr->ex_client_s << std::endl;
    std::cout << "open_close_req_c: " << ptr->open_close_req_c << std::endl;
    std::cout << "order_type_c: " << ptr->order_type_c << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "change_reason_c: " << ptr->change_reason_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_basic_order_update_t(basic_order_update_t* ptr) {
    std::cout << "premium_i: " << ptr->premium_i << std::endl;
    std::cout << "quantity_i: " << ptr->quantity_i << std::endl;
    std::cout << "balance_quantity_i: " << ptr->balance_quantity_i << std::endl;
    std::cout << "time_validity_n: " << ptr->time_validity_n << std::endl;
    std::cout << "exch_order_type_n: " << ptr->exch_order_type_n << std::endl;
    std::cout << "delta_quantity_c: " << ptr->delta_quantity_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_basic_trade_ticker_t(basic_trade_ticker_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "timestamp_match: " << ptr->timestamp_match << std::endl;
    std::cout << "time_of_publication: " << ptr->time_of_publication << std::endl;
    std::cout << "execution_event_nbr_u: " << ptr->execution_event_nbr_u << std::endl;
    std::cout << "match_group_nbr_u: " << ptr->match_group_nbr_u << std::endl;
    std::cout << "deal_quantity_i: " << ptr->deal_quantity_i << std::endl;
    std::cout << "deal_price_i: " << ptr->deal_price_i << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "aggressive: " << ptr->aggressive << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_bdx_cl_otc_trade_op_on_hold_t(bdx_cl_otc_trade_op_on_hold_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
}

void print_bdx_marg_calc_runs_t(bdx_marg_calc_runs_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
}

void print_bi84_bdx_info_t(bi84_bdx_info_t* ptr) {
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "sequence_number_u: " << ptr->sequence_number_u << std::endl;
    std::cout << "sent_date_s: " << ptr->sent_date_s << std::endl;
    std::cout << "sent_time_s: " << ptr->sent_time_s << std::endl;
    std::cout << "user_code: " << ptr->user_code << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "host_name_s: " << ptr->host_name_s << std::endl;
    std::cout << "event_status_i: " << ptr->event_status_i << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_block_order_response_t(block_order_response_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "items_c: " << ptr->items_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_block_order_trans_t(block_order_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "items_c: " << ptr->items_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_block_order_trans_p_t(block_order_trans_p_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "items_c: " << ptr->items_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_block_price_trans_t(block_price_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
    std::cout << "items_c: " << ptr->items_c << std::endl;
    std::cout << "stp_key_i: " << ptr->stp_key_i << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_block_price_trans_p_t(block_price_trans_p_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
    std::cout << "items_c: " << ptr->items_c << std::endl;
    std::cout << "stp_key_i: " << ptr->stp_key_i << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_block_unblock_ptlg_t(block_unblock_ptlg_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "ptl_id_s: " << ptr->ptl_id_s << std::endl;
    std::cout << "ptl_blocked_c: " << ptr->ptl_blocked_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_broadcast_hdr_t(broadcast_hdr_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
}

void print_broadcast_segment_hdr_t(broadcast_segment_hdr_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_broker_trans_t(broker_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
}

void print_broker_trans_p_t(broker_trans_p_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
}

void print_cancel_trade_report_t(cancel_trade_report_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trade_report_nbr_q: " << ptr->trade_report_nbr_q << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "confirm_reject_c: " << ptr->confirm_reject_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_cash_collateral_t(cash_collateral_t* ptr) {
    std::cout << "collateral_base: " << ptr->collateral_base << std::endl;
}

void print_central_group_update_t(central_group_update_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "chg_type_n: " << ptr->chg_type_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "da28: " << ptr->da28 << std::endl;
}

void print_change_account_state_t(change_account_state_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "acc_state_c: " << ptr->acc_state_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_clearing_house_account_light_t(clearing_house_account_light_t* ptr) {
    std::cout << "clh_account_id_s: " << ptr->clh_account_id_s << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "bank_name_s: " << ptr->bank_name_s << std::endl;
    std::cout << "bic_code_s: " << ptr->bic_code_s << std::endl;
    std::cout << "account_number_s: " << ptr->account_number_s << std::endl;
    std::cout << "account_name_s: " << ptr->account_name_s << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_clearing_info_t(clearing_info_t* ptr) {
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "ex_client_s: " << ptr->ex_client_s << std::endl;
    std::cout << "open_close_req_c: " << ptr->open_close_req_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_clearing_message_t(clearing_message_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "broadcast_number_n: " << ptr->broadcast_number_n << std::endl;
    std::cout << "yyyymmdd_s: " << ptr->yyyymmdd_s << std::endl;
    std::cout << "hhmmss_s: " << ptr->hhmmss_s << std::endl;
    std::cout << "country_c: " << ptr->country_c << std::endl;
    std::cout << "market_c: " << ptr->market_c << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_cl_account_base_api_t(cl_account_base_api_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "countersign: " << ptr->countersign << std::endl;
    std::cout << "prop_trade_account: " << ptr->prop_trade_account << std::endl;
    std::cout << "prop_settlement_account: " << ptr->prop_settlement_account << std::endl;
    std::cout << "prop_pos_account: " << ptr->prop_pos_account << std::endl;
    std::cout << "prop_margin_account: " << ptr->prop_margin_account << std::endl;
    std::cout << "sink_account: " << ptr->sink_account << std::endl;
    std::cout << "prop_origin_account: " << ptr->prop_origin_account << std::endl;
    std::cout << "prop_call_account: " << ptr->prop_call_account << std::endl;
    std::cout << "prop_delivery_account: " << ptr->prop_delivery_account << std::endl;
    std::cout << "member_exposure_limit_q: " << ptr->member_exposure_limit_q << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "investor_type_s: " << ptr->investor_type_s << std::endl;
    std::cout << "nationality_s: " << ptr->nationality_s << std::endl;
    std::cout << "account_text_s: " << ptr->account_text_s << std::endl;
    std::cout << "org_number_s: " << ptr->org_number_s << std::endl;
    std::cout << "account_alias_s: " << ptr->account_alias_s << std::endl;
    std::cout << "diary_number_s: " << ptr->diary_number_s << std::endl;
    std::cout << "acc_type_s: " << ptr->acc_type_s << std::endl;
    std::cout << "fee_type_s: " << ptr->fee_type_s << std::endl;
    std::cout << "cust_bank_id_s: " << ptr->cust_bank_id_s << std::endl;
    std::cout << "acc_state_c: " << ptr->acc_state_c << std::endl;
    std::cout << "read_access_c: " << ptr->read_access_c << std::endl;
    std::cout << "auto_net_c: " << ptr->auto_net_c << std::endl;
    std::cout << "acc_allow_nov_c: " << ptr->acc_allow_nov_c << std::endl;
    std::cout << "auto_take_up_c: " << ptr->auto_take_up_c << std::endl;
    std::cout << "foreign_holder_c: " << ptr->foreign_holder_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_cl_account_base_collateral_api_t(cl_account_base_collateral_api_t* ptr) {
    std::cout << "base_collateral_account: " << ptr->base_collateral_account << std::endl;
    std::cout << "bc_adjustment_factor_i: " << ptr->bc_adjustment_factor_i << std::endl;
}

void print_cl_account_collateral_attribute_api_t(cl_account_collateral_attribute_api_t* ptr) {
    std::cout << "cash_opt_account: " << ptr->cash_opt_account << std::endl;
    std::cout << "base_cur_id_s: " << ptr->base_cur_id_s << std::endl;
    std::cout << "account_collateral_handling_c: " << ptr->account_collateral_handling_c << std::endl;
    std::cout << "cash_collateral_interest_c: " << ptr->cash_collateral_interest_c << std::endl;
    std::cout << "dd_in_base_c: " << ptr->dd_in_base_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_cl_account_intraday_funding_api_t(cl_account_intraday_funding_api_t* ptr) {
    std::cout << "intraday_funding_account: " << ptr->intraday_funding_account << std::endl;
}

void print_cl_account_non_ccp_margin_api_t(cl_account_non_ccp_margin_api_t* ptr) {
    std::cout << "prop_non_ccp_margin_account: " << ptr->prop_non_ccp_margin_account << std::endl;
}

void print_cl_account_risk_attribute_api_t(cl_account_risk_attribute_api_t* ptr) {
    std::cout << "rank_class_i: " << ptr->rank_class_i << std::endl;
    std::cout << "risk_currency_s: " << ptr->risk_currency_s << std::endl;
    std::cout << "risk_cur_conv_c: " << ptr->risk_cur_conv_c << std::endl;
    std::cout << "risk_margin_net_c: " << ptr->risk_margin_net_c << std::endl;
    std::cout << "margin_class_s: " << ptr->margin_class_s << std::endl;
    std::cout << "risk_scale_s: " << ptr->risk_scale_s << std::endl;
}

void print_cl_account_settlement_attribute_api_t(cl_account_settlement_attribute_api_t* ptr) {
    std::cout << "allow_partial_settlement_c: " << ptr->allow_partial_settlement_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_cl_otc_operation_info_t(cl_otc_operation_info_t* ptr) {
    std::cout << "cl_otc_trade_operation_c: " << ptr->cl_otc_trade_operation_c << std::endl;
    std::cout << "le_state_c: " << ptr->le_state_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "orig_deal_number_i: " << ptr->orig_deal_number_i << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "sequence_number_i: " << ptr->sequence_number_i << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "tx_status_i: " << ptr->tx_status_i << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
}

void print_cl_otc_trade_operation_t(cl_otc_trade_operation_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "pos_account: " << ptr->pos_account << std::endl;
    std::cout << "orig_trade_number_i: " << ptr->orig_trade_number_i << std::endl;
    std::cout << "trade_type_c: " << ptr->trade_type_c << std::endl;
    std::cout << "trade_report_reason_c: " << ptr->trade_report_reason_c << std::endl;
    std::cout << "buy_sell_c: " << ptr->buy_sell_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "trade_quantity_i: " << ptr->trade_quantity_i << std::endl;
    std::cout << "total_surplus_deficit_q: " << ptr->total_surplus_deficit_q << std::endl;
}

void print_cl_trade_base_api_t(cl_trade_base_api_t* ptr) {
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "sequence_number_i: " << ptr->sequence_number_i << std::endl;
    std::cout << "trade_number_i: " << ptr->trade_number_i << std::endl;
    std::cout << "deal_price_i: " << ptr->deal_price_i << std::endl;
    std::cout << "trade_quantity_i: " << ptr->trade_quantity_i << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
    std::cout << "bought_or_sold_c: " << ptr->bought_or_sold_c << std::endl;
    std::cout << "deal_source_c: " << ptr->deal_source_c << std::endl;
    std::cout << "open_close_req_c: " << ptr->open_close_req_c << std::endl;
    std::cout << "trade_type_c: " << ptr->trade_type_c << std::endl;
    std::cout << "le_state_c: " << ptr->le_state_c << std::endl;
    std::cout << "user_code: " << ptr->user_code << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "asof_date_s: " << ptr->asof_date_s << std::endl;
    std::cout << "asof_time_s: " << ptr->asof_time_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "trade_state_c: " << ptr->trade_state_c << std::endl;
    std::cout << "attention_c: " << ptr->attention_c << std::endl;
    std::cout << "deal_number_i: " << ptr->deal_number_i << std::endl;
    std::cout << "global_deal_no_u: " << ptr->global_deal_no_u << std::endl;
    std::cout << "orig_trade_number_i: " << ptr->orig_trade_number_i << std::endl;
    std::cout << "orig_series: " << ptr->orig_series << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "big_attention_u: " << ptr->big_attention_u << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "execution_timestamp: " << ptr->execution_timestamp << std::endl;
    std::cout << "trade_venue_c: " << ptr->trade_venue_c << std::endl;
    std::cout << "instance_c: " << ptr->instance_c << std::endl;
    std::cout << "exch_order_type_n: " << ptr->exch_order_type_n << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "trade_rep_code_n: " << ptr->trade_rep_code_n << std::endl;
    std::cout << "state_number_n: " << ptr->state_number_n << std::endl;
    std::cout << "match_id: " << ptr->match_id << std::endl;
}

void print_cl_trade_secur_part_t(cl_trade_secur_part_t* ptr) {
    std::cout << "countersign_code: " << ptr->countersign_code << std::endl;
    std::cout << "new_series: " << ptr->new_series << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "pos_account: " << ptr->pos_account << std::endl;
    std::cout << "combo_series: " << ptr->combo_series << std::endl;
    std::cout << "nbr_held_q: " << ptr->nbr_held_q << std::endl;
    std::cout << "nbr_written_q: " << ptr->nbr_written_q << std::endl;
    std::cout << "total_held_q: " << ptr->total_held_q << std::endl;
    std::cout << "total_written_q: " << ptr->total_written_q << std::endl;
    std::cout << "ext_seq_nbr_i: " << ptr->ext_seq_nbr_i << std::endl;
    std::cout << "ext_status_i: " << ptr->ext_status_i << std::endl;
    std::cout << "rem_quantity_i: " << ptr->rem_quantity_i << std::endl;
    std::cout << "quantity_i: " << ptr->quantity_i << std::endl;
    std::cout << "ext_trade_number_u: " << ptr->ext_trade_number_u << std::endl;
    std::cout << "orig_ext_trade_number_u: " << ptr->orig_ext_trade_number_u << std::endl;
    std::cout << "residual_i: " << ptr->residual_i << std::endl;
    std::cout << "give_up_number_i: " << ptr->give_up_number_i << std::endl;
    std::cout << "commission_i: " << ptr->commission_i << std::endl;
    std::cout << "combo_deal_price_i: " << ptr->combo_deal_price_i << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "passthrough_s: " << ptr->passthrough_s << std::endl;
    std::cout << "ex_client_s: " << ptr->ex_client_s << std::endl;
    std::cout << "ext_trade_fee_type_c: " << ptr->ext_trade_fee_type_c << std::endl;
    std::cout << "give_up_state_c: " << ptr->give_up_state_c << std::endl;
    std::cout << "reserved_2_s: " << ptr->reserved_2_s << std::endl;
    std::cout << "orig_trade_type_c: " << ptr->orig_trade_type_c << std::endl;
    std::cout << "open_close_c: " << ptr->open_close_c << std::endl;
    std::cout << "reserved_1_c: " << ptr->reserved_1_c << std::endl;
    std::cout << "client_category_c: " << ptr->client_category_c << std::endl;
    std::cout << "instigant_c: " << ptr->instigant_c << std::endl;
    std::cout << "cab_price_ind_c: " << ptr->cab_price_ind_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_cl_trade_source_series_api_t(cl_trade_source_series_api_t* ptr) {
    std::cout << "source_series: " << ptr->source_series << std::endl;
}

void print_cl_trade_trade_report_api_t(cl_trade_trade_report_api_t* ptr) {
    std::cout << "time_of_agreement_date_s: " << ptr->time_of_agreement_date_s << std::endl;
    std::cout << "time_of_agreement_time_s: " << ptr->time_of_agreement_time_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_cl_transfer_position_t(cl_transfer_position_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "new_account: " << ptr->new_account << std::endl;
    std::cout << "nbr_held_q: " << ptr->nbr_held_q << std::endl;
    std::cout << "nbr_written_q: " << ptr->nbr_written_q << std::endl;
    std::cout << "open_close_req_c: " << ptr->open_close_req_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
}

void print_cm_collateral_mwa_info_t(cm_collateral_mwa_info_t* ptr) {
    std::cout << "remaining_collateral_amount_q: " << ptr->remaining_collateral_amount_q << std::endl;
    std::cout << "cm_sim_remaining_type_c: " << ptr->cm_sim_remaining_type_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_cm_collateral_sim_failure_reason_t(cm_collateral_sim_failure_reason_t* ptr) {
    std::cout << "failure_reason_s: " << ptr->failure_reason_s << std::endl;
}

void print_cm_collateral_sim_result_sgx_t(cm_collateral_sim_result_sgx_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "collateral_amount_q: " << ptr->collateral_amount_q << std::endl;
    std::cout << "dec_in_amount_n: " << ptr->dec_in_amount_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_cm_collateral_sim_sgx_t(cm_collateral_sim_sgx_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "remaining_collateral_amount_q: " << ptr->remaining_collateral_amount_q << std::endl;
    std::cout << "isin_code_s: " << ptr->isin_code_s << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "cm_sim_remaining_type_c: " << ptr->cm_sim_remaining_type_c << std::endl;
    std::cout << "dec_in_remaining_amount_n: " << ptr->dec_in_remaining_amount_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_collateral_evaluation_run_info_t(collateral_evaluation_run_info_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "request_nbr_u: " << ptr->request_nbr_u << std::endl;
    std::cout << "margin_sequence_nbr_u: " << ptr->margin_sequence_nbr_u << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "valuation_date_s: " << ptr->valuation_date_s << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "margin_date_s: " << ptr->margin_date_s << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "ca_batch_isin_code_s: " << ptr->ca_batch_isin_code_s << std::endl;
    std::cout << "is_intraday_c: " << ptr->is_intraday_c << std::endl;
    std::cout << "collateral_state_c: " << ptr->collateral_state_c << std::endl;
    std::cout << "is_final_c: " << ptr->is_final_c << std::endl;
    std::cout << "collateral_evaluation_type_c: " << ptr->collateral_evaluation_type_c << std::endl;
    std::cout << "create_direct_debit_c: " << ptr->create_direct_debit_c << std::endl;
    std::cout << "coll_payment_state_c: " << ptr->coll_payment_state_c << std::endl;
    std::cout << "intraday_evaluation_c: " << ptr->intraday_evaluation_c << std::endl;
    std::cout << "collateral_transaction_state_c: " << ptr->collateral_transaction_state_c << std::endl;
    std::cout << "trigger_new_margin_calc_c: " << ptr->trigger_new_margin_calc_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_collateral_information_base_t(collateral_information_base_t* ptr) {
    std::cout << "margin_account: " << ptr->margin_account << std::endl;
    std::cout << "currency: " << ptr->currency << std::endl;
    std::cout << "base_currency: " << ptr->base_currency << std::endl;
    std::cout << "initial_margin_req_q: " << ptr->initial_margin_req_q << std::endl;
    std::cout << "variation_margin_req_q: " << ptr->variation_margin_req_q << std::endl;
    std::cout << "contingent_variation_margin_req_q: " << ptr->contingent_variation_margin_req_q << std::endl;
    std::cout << "margin_maintenance_q: " << ptr->margin_maintenance_q << std::endl;
    std::cout << "margin_extraordinary_q: " << ptr->margin_extraordinary_q << std::endl;
    std::cout << "margin_total_q: " << ptr->margin_total_q << std::endl;
    std::cout << "collateral_guarantee_q: " << ptr->collateral_guarantee_q << std::endl;
    std::cout << "collateral_cash_q: " << ptr->collateral_cash_q << std::endl;
    std::cout << "collateral_security_q: " << ptr->collateral_security_q << std::endl;
    std::cout << "total_surplus_deficit_q: " << ptr->total_surplus_deficit_q << std::endl;
    std::cout << "total_margin_req_q: " << ptr->total_margin_req_q << std::endl;
    std::cout << "collateral_fixed_income_q: " << ptr->collateral_fixed_income_q << std::endl;
    std::cout << "collateral_equity_q: " << ptr->collateral_equity_q << std::endl;
    std::cout << "otcf_margin_q: " << ptr->otcf_margin_q << std::endl;
    std::cout << "otcf_additional_margin_q: " << ptr->otcf_additional_margin_q << std::endl;
    std::cout << "otcf_settlement_variation_q: " << ptr->otcf_settlement_variation_q << std::endl;
    std::cout << "external_margin_req_q: " << ptr->external_margin_req_q << std::endl;
    std::cout << "settlement_requirement_q: " << ptr->settlement_requirement_q << std::endl;
    std::cout << "collateral_cash_after_settlement_q: " << ptr->collateral_cash_after_settlement_q << std::endl;
    std::cout << "additional_margin_req_q: " << ptr->additional_margin_req_q << std::endl;
    std::cout << "pai_q: " << ptr->pai_q << std::endl;
}

void print_collateral_information_default_fund_t(collateral_information_default_fund_t* ptr) {
    std::cout << "margin_mutual_fund_q: " << ptr->margin_mutual_fund_q << std::endl;
    std::cout << "margin_default_fund_q: " << ptr->margin_default_fund_q << std::endl;
}

void print_collateral_information_payment_t(collateral_information_payment_t* ptr) {
    std::cout << "adjusted_collateral_cash_q: " << ptr->adjusted_collateral_cash_q << std::endl;
    std::cout << "cash_collateral_limit_q: " << ptr->cash_collateral_limit_q << std::endl;
    std::cout << "settlement_requirement_q: " << ptr->settlement_requirement_q << std::endl;
    std::cout << "collateral_cash_after_settlement_q: " << ptr->collateral_cash_after_settlement_q << std::endl;
}

void print_collateral_information_payment_delivery_t(collateral_information_payment_delivery_t* ptr) {
    std::cout << "payment_margin_valuation_date_q: " << ptr->payment_margin_valuation_date_q << std::endl;
    std::cout << "payment_margin_future_date_q: " << ptr->payment_margin_future_date_q << std::endl;
    std::cout << "delivery_margin_valuation_date_q: " << ptr->delivery_margin_valuation_date_q << std::endl;
    std::cout << "payment_margin_overdue_q: " << ptr->payment_margin_overdue_q << std::endl;
    std::cout << "delivery_margin_overdue_q: " << ptr->delivery_margin_overdue_q << std::endl;
}

void print_collateral_info_sgx_t(collateral_info_sgx_t* ptr) {
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "user_code: " << ptr->user_code << std::endl;
    std::cout << "collateral_nbr_q: " << ptr->collateral_nbr_q << std::endl;
    std::cout << "version_n: " << ptr->version_n << std::endl;
    std::cout << "timestamp_date_s: " << ptr->timestamp_date_s << std::endl;
    std::cout << "timestamp_time_s: " << ptr->timestamp_time_s << std::endl;
    std::cout << "asof_date_s: " << ptr->asof_date_s << std::endl;
    std::cout << "asof_time_s: " << ptr->asof_time_s << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "collateral_type_c: " << ptr->collateral_type_c << std::endl;
    std::cout << "state_c: " << ptr->state_c << std::endl;
    std::cout << "preliminary_amount_q: " << ptr->preliminary_amount_q << std::endl;
    std::cout << "dec_in_amount_n: " << ptr->dec_in_amount_n << std::endl;
    std::cout << "isin_code_s: " << ptr->isin_code_s << std::endl;
    std::cout << "collateral_series_expired_c: " << ptr->collateral_series_expired_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_collateral_payment_transaction_recon_t(collateral_payment_transaction_recon_t* ptr) {
    std::cout << "total_sum_debit_q: " << ptr->total_sum_debit_q << std::endl;
    std::cout << "total_sum_credit_q: " << ptr->total_sum_credit_q << std::endl;
    std::cout << "sum_debit_bank_q: " << ptr->sum_debit_bank_q << std::endl;
    std::cout << "sum_credit_bank_q: " << ptr->sum_credit_bank_q << std::endl;
    std::cout << "sum_debit_internal_transfer_q: " << ptr->sum_debit_internal_transfer_q << std::endl;
    std::cout << "sum_credit_internal_transfer_q: " << ptr->sum_credit_internal_transfer_q << std::endl;
    std::cout << "sum_debit_cash_settlement_q: " << ptr->sum_debit_cash_settlement_q << std::endl;
    std::cout << "sum_credit_cash_settlement_q: " << ptr->sum_credit_cash_settlement_q << std::endl;
    std::cout << "total_nbr_of_debit_u: " << ptr->total_nbr_of_debit_u << std::endl;
    std::cout << "total_nbr_of_credit_u: " << ptr->total_nbr_of_credit_u << std::endl;
    std::cout << "nbr_of_debit_bank_u: " << ptr->nbr_of_debit_bank_u << std::endl;
    std::cout << "nbr_of_credit_bank_u: " << ptr->nbr_of_credit_bank_u << std::endl;
    std::cout << "nbr_of_debit_internal_transfer_u: " << ptr->nbr_of_debit_internal_transfer_u << std::endl;
    std::cout << "nbr_of_credit_internal_transfer_u: " << ptr->nbr_of_credit_internal_transfer_u << std::endl;
    std::cout << "nbr_of_debit_cash_settlement_u: " << ptr->nbr_of_debit_cash_settlement_u << std::endl;
    std::cout << "nbr_of_credit_cash_settlement_u: " << ptr->nbr_of_credit_cash_settlement_u << std::endl;
    std::cout << "request_nbr_u: " << ptr->request_nbr_u << std::endl;
    std::cout << "dec_in_amount_n: " << ptr->dec_in_amount_n << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "instr_ref_s: " << ptr->instr_ref_s << std::endl;
    std::cout << "ext_confirm_c: " << ptr->ext_confirm_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_collateral_transaction_base_t(collateral_transaction_base_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "collateral_account: " << ptr->collateral_account << std::endl;
    std::cout << "collateral_account_party: " << ptr->collateral_account_party << std::endl;
    std::cout << "amount_q: " << ptr->amount_q << std::endl;
    std::cout << "gross_amount_q: " << ptr->gross_amount_q << std::endl;
    std::cout << "collateral_transaction_nbr_q: " << ptr->collateral_transaction_nbr_q << std::endl;
    std::cout << "instruction_nbr_u: " << ptr->instruction_nbr_u << std::endl;
    std::cout << "coll_payment_nbr_u: " << ptr->coll_payment_nbr_u << std::endl;
    std::cout << "ext_coll_payment_nbr_u: " << ptr->ext_coll_payment_nbr_u << std::endl;
    std::cout << "request_nbr_u: " << ptr->request_nbr_u << std::endl;
    std::cout << "version_n: " << ptr->version_n << std::endl;
    std::cout << "dec_in_amount_n: " << ptr->dec_in_amount_n << std::endl;
    std::cout << "valuation_date_s: " << ptr->valuation_date_s << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "isin_code_s: " << ptr->isin_code_s << std::endl;
    std::cout << "instr_ref_s: " << ptr->instr_ref_s << std::endl;
    std::cout << "reason_s: " << ptr->reason_s << std::endl;
    std::cout << "passthrough_s: " << ptr->passthrough_s << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "settlement_instr_date_s: " << ptr->settlement_instr_date_s << std::endl;
    std::cout << "sender_bic_code_s: " << ptr->sender_bic_code_s << std::endl;
    std::cout << "csd_code_s: " << ptr->csd_code_s << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "ext_confirm_c: " << ptr->ext_confirm_c << std::endl;
    std::cout << "collateral_transaction_type_c: " << ptr->collateral_transaction_type_c << std::endl;
    std::cout << "collateral_transaction_state_c: " << ptr->collateral_transaction_state_c << std::endl;
    std::cout << "released_holding_c: " << ptr->released_holding_c << std::endl;
    std::cout << "collateral_type_c: " << ptr->collateral_type_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "date_termination_s: " << ptr->date_termination_s << std::endl;
    std::cout << "coupon_interest_i: " << ptr->coupon_interest_i << std::endl;
}

void print_coll_val_per_series_t(coll_val_per_series_t* ptr) {
    std::cout << "collateral_account: " << ptr->collateral_account << std::endl;
    std::cout << "margin_account: " << ptr->margin_account << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "currency: " << ptr->currency << std::endl;
    std::cout << "collateral_amount_q: " << ptr->collateral_amount_q << std::endl;
    std::cout << "market_value_q: " << ptr->market_value_q << std::endl;
    std::cout << "coll_value_ins_cur_before_limit_adjust_q: " << ptr->coll_value_ins_cur_before_limit_adjust_q << std::endl;
    std::cout << "coll_value_ins_cur_after_limit_adjust_q: " << ptr->coll_value_ins_cur_after_limit_adjust_q << std::endl;
    std::cout << "ex_rate_q: " << ptr->ex_rate_q << std::endl;
    std::cout << "coll_value_ins_cur_after_ser_limit_adjust_q: " << ptr->coll_value_ins_cur_after_ser_limit_adjust_q << std::endl;
    std::cout << "collateral_price_i: " << ptr->collateral_price_i << std::endl;
    std::cout << "percentage_after_haircut_i: " << ptr->percentage_after_haircut_i << std::endl;
    std::cout << "vag_id_s: " << ptr->vag_id_s << std::endl;
    std::cout << "dec_in_rate_n: " << ptr->dec_in_rate_n << std::endl;
    std::cout << "dec_in_amount_n: " << ptr->dec_in_amount_n << std::endl;
    std::cout << "dec_in_collateral_price_n: " << ptr->dec_in_collateral_price_n << std::endl;
    std::cout << "isin_code_s: " << ptr->isin_code_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "final_collateral_amount_q: " << ptr->final_collateral_amount_q << std::endl;
    std::cout << "post_collateral_amount_q: " << ptr->post_collateral_amount_q << std::endl;
    std::cout << "post_final_collateral_amount_q: " << ptr->post_final_collateral_amount_q << std::endl;
}

void print_coll_val_per_series_base_cur_t(coll_val_per_series_base_cur_t* ptr) {
    std::cout << "base_currency: " << ptr->base_currency << std::endl;
    std::cout << "coll_value_base_curr_before_limit_adjust_q: " << ptr->coll_value_base_curr_before_limit_adjust_q << std::endl;
    std::cout << "coll_value_base_curr_after_limit_adjust_q: " << ptr->coll_value_base_curr_after_limit_adjust_q << std::endl;
    std::cout << "coll_value_base_cur_after_ser_limit_adjust_q: " << ptr->coll_value_base_cur_after_ser_limit_adjust_q << std::endl;
    std::cout << "series_limit_i: " << ptr->series_limit_i << std::endl;
}

void print_coll_val_per_series_risk_cur_t(coll_val_per_series_risk_cur_t* ptr) {
    std::cout << "risk_currency: " << ptr->risk_currency << std::endl;
    std::cout << "coll_value_currency: " << ptr->coll_value_currency << std::endl;
    std::cout << "collateral_value_q: " << ptr->collateral_value_q << std::endl;
}

void print_coll_val_per_val_group_tsn_t(coll_val_per_val_group_tsn_t* ptr) {
    std::cout << "margin_account: " << ptr->margin_account << std::endl;
    std::cout << "base_currency: " << ptr->base_currency << std::endl;
    std::cout << "coll_value_base_curr_before_limit_ajust_q: " << ptr->coll_value_base_curr_before_limit_ajust_q << std::endl;
    std::cout << "coll_value_base_curr_after_limit_adjust_q: " << ptr->coll_value_base_curr_after_limit_adjust_q << std::endl;
    std::cout << "coll_value_base_cur_after_ser_limit_adjust_q: " << ptr->coll_value_base_cur_after_ser_limit_adjust_q << std::endl;
    std::cout << "group_limit_i: " << ptr->group_limit_i << std::endl;
    std::cout << "actual_group_percentage_i: " << ptr->actual_group_percentage_i << std::endl;
    std::cout << "vag_id_s: " << ptr->vag_id_s << std::endl;
    std::cout << "dec_in_actual_group_percentage_n: " << ptr->dec_in_actual_group_percentage_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_combo_acc_trans_t(combo_acc_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
}

void print_combo_acc_trans_p_t(combo_acc_trans_p_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
}

void print_combo_series_multi_update_bu1005_t(combo_series_multi_update_bu1005_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_combo_trade_report_trans_t(combo_trade_report_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "ext_t_state_c: " << ptr->ext_t_state_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_combo_trans_part_t(combo_trans_part_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
}

void print_combo_trans_part_p_t(combo_trans_part_p_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
}

void print_combo_update_bu5_t(combo_update_bu5_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "chg_type_n: " << ptr->chg_type_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "da5: " << ptr->da5 << std::endl;
}

void print_confirm_give_up_request_t(confirm_give_up_request_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "give_up_number_i: " << ptr->give_up_number_i << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_confirm_rectify_d_t(confirm_rectify_d_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "rectify_deal_number_q: " << ptr->rectify_deal_number_q << std::endl;
    std::cout << "operation_c: " << ptr->operation_c << std::endl;
    std::cout << "confirm_reject_c: " << ptr->confirm_reject_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_confirm_rectify_t_t(confirm_rectify_t_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "rectify_trade_number_i: " << ptr->rectify_trade_number_i << std::endl;
    std::cout << "confirm_reject_c: " << ptr->confirm_reject_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_cool_off_period_ended_t(cool_off_period_ended_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "timestamp: " << ptr->timestamp << std::endl;
    std::cout << "lower_limit_i: " << ptr->lower_limit_i << std::endl;
    std::cout << "upper_limit_i: " << ptr->upper_limit_i << std::endl;
    std::cout << "cool_off_ended_type_c: " << ptr->cool_off_ended_type_c << std::endl;
    std::cout << "price_limit_unit_c: " << ptr->price_limit_unit_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_corporate_action_info_t(corporate_action_info_t* ptr) {
    std::cout << "corp_action_ref_s: " << ptr->corp_action_ref_s << std::endl;
    std::cout << "corp_event_ref_s: " << ptr->corp_event_ref_s << std::endl;
}

void print_corp_action_update_bu53_t(corp_action_update_bu53_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "chg_type_n: " << ptr->chg_type_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_create_aat_connection_hdr_t(create_aat_connection_hdr_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "connect_type_c: " << ptr->connect_type_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
    std::cout << "version_i: " << ptr->version_i << std::endl;
}

void print_create_aat_rg_connection_t(create_aat_rg_connection_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "connect_type_c: " << ptr->connect_type_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
}

void print_create_acc_access_type_t(create_acc_access_type_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
    std::cout << "desc_long_s: " << ptr->desc_long_s << std::endl;
    std::cout << "allow_all_account_i: " << ptr->allow_all_account_i << std::endl;
    std::cout << "version_i: " << ptr->version_i << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_create_currency_ranking_connections_t(create_currency_ranking_connections_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "currency_ranking_id_s: " << ptr->currency_ranking_id_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_create_flexible_deriv_t(create_flexible_deriv_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "date_expiration_s: " << ptr->date_expiration_s << std::endl;
    std::cout << "strike_price_i: " << ptr->strike_price_i << std::endl;
}

void print_currency_ranking_t(currency_ranking_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "key: " << ptr->key << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_currency_ranking_attributes_t(currency_ranking_attributes_t* ptr) {
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "le_state_c: " << ptr->le_state_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_currency_ranking_entry_t(currency_ranking_entry_t* ptr) {
    std::cout << "currency_series: " << ptr->currency_series << std::endl;
    std::cout << "currency_rank_n: " << ptr->currency_rank_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "cash_collateral_limit_q: " << ptr->cash_collateral_limit_q << std::endl;
    std::cout << "direct_credit_limit_q: " << ptr->direct_credit_limit_q << std::endl;
}

void print_deficit_to_cover_t(deficit_to_cover_t* ptr) {
    std::cout << "deficit_to_cover_q: " << ptr->deficit_to_cover_q << std::endl;
}

void print_delete_aat_connection_t(delete_aat_connection_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "connect_type_c: " << ptr->connect_type_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
    std::cout << "version_i: " << ptr->version_i << std::endl;
}

void print_delete_acc_access_type_t(delete_acc_access_type_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
    std::cout << "version_i: " << ptr->version_i << std::endl;
}

void print_delete_currency_ranking_t(delete_currency_ranking_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "key: " << ptr->key << std::endl;
}

void print_delete_currency_ranking_connections_t(delete_currency_ranking_connections_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_delete_trans_t(delete_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "whose: " << ptr->whose << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
}

void print_delete_trans_p_t(delete_trans_p_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "whose: " << ptr->whose << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
}

void print_deposit_withdraw_collateral_txn_t(deposit_withdraw_collateral_txn_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "deposit_withdraw_collateral_ssi: " << ptr->deposit_withdraw_collateral_ssi << std::endl;
    std::cout << "filler_4_s: " << ptr->filler_4_s << std::endl;
}

void print_deposit_withdraw_transfer_collateral_txn_t(deposit_withdraw_transfer_collateral_txn_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "filler_4_s: " << ptr->filler_4_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_destination_item_t(destination_item_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "destination_level_c: " << ptr->destination_level_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_directed_collateral_t(directed_collateral_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
}

void print_directed_delivery_t(directed_delivery_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "cl_delivery_api: " << ptr->cl_delivery_api << std::endl;
}

void print_directed_give_up_t(directed_give_up_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "cl_give_up_api: " << ptr->cl_give_up_api << std::endl;
}

void print_directed_pos_info_update_t(directed_pos_info_update_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "pos_info_update_api: " << ptr->pos_info_update_api << std::endl;
}

void print_directed_quote_request_t(directed_quote_request_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "user_code: " << ptr->user_code << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "timestamp_created: " << ptr->timestamp_created << std::endl;
    std::cout << "time_to_respond_i: " << ptr->time_to_respond_i << std::endl;
    std::cout << "mp_quantity_i: " << ptr->mp_quantity_i << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_directed_quote_request_ack_t(directed_quote_request_ack_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "user_code: " << ptr->user_code << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "timestamp_created: " << ptr->timestamp_created << std::endl;
    std::cout << "time_to_respond_i: " << ptr->time_to_respond_i << std::endl;
    std::cout << "mp_quantity_i: " << ptr->mp_quantity_i << std::endl;
    std::cout << "ex_user_code: " << ptr->ex_user_code << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "items_c: " << ptr->items_c << std::endl;
    std::cout << "quote_request_status_c: " << ptr->quote_request_status_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_directed_quote_request_trans_t(directed_quote_request_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "mp_quantity_i: " << ptr->mp_quantity_i << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "items_c: " << ptr->items_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_directed_quote_request_trans_p_t(directed_quote_request_trans_p_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "mp_quantity_i: " << ptr->mp_quantity_i << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "items_c: " << ptr->items_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_directed_trade_change_t(directed_trade_change_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "cl_trade_change_api: " << ptr->cl_trade_change_api << std::endl;
}

void print_directed_trade_report_t(directed_trade_report_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "broadcast_reason_c: " << ptr->broadcast_reason_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
}

void print_document_url_t(document_url_t* ptr) {
    std::cout << "items_c: " << ptr->items_c << std::endl;
    std::cout << "url_link_s: " << ptr->url_link_s << std::endl;
}

void print_equil_price_update_t(equil_price_update_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_etpr_delta_limit_change_t(etpr_delta_limit_change_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_etpr_limit_change_t(etpr_limit_change_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_exception_days_update_bu78_t(exception_days_update_bu78_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "chg_type_n: " << ptr->chg_type_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "da78: " << ptr->da78 << std::endl;
}

void print_exchange_info_t(exchange_info_t* ptr) {
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
}

void print_exercise_req_t(exercise_req_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "quantity_i: " << ptr->quantity_i << std::endl;
    std::cout << "trade_number_i: " << ptr->trade_number_i << std::endl;
}

void print_extended_trade_ticker_t(extended_trade_ticker_t* ptr) {
    std::cout << "trade_condition_n: " << ptr->trade_condition_n << std::endl;
    std::cout << "deal_info_n: " << ptr->deal_info_n << std::endl;
}

void print_fixed_income_trade_ticker_t(fixed_income_trade_ticker_t* ptr) {
    std::cout << "corresponding_yield_price_i: " << ptr->corresponding_yield_price_i << std::endl;
}

void print_free_text_t(free_text_t* ptr) {
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_give_up_request_t(give_up_request_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "trade_number_i: " << ptr->trade_number_i << std::endl;
    std::cout << "trade_quantity_i: " << ptr->trade_quantity_i << std::endl;
    std::cout << "commission_i: " << ptr->commission_i << std::endl;
    std::cout << "give_up_text_s: " << ptr->give_up_text_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_guarantee_t(guarantee_t* ptr) {
    std::cout << "collateral_base: " << ptr->collateral_base << std::endl;
    std::cout << "guarantee_type_c: " << ptr->guarantee_type_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_haircut_update_bu47_t(haircut_update_bu47_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "chg_type_n: " << ptr->chg_type_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "da47: " << ptr->da47 << std::endl;
}

void print_half_trade_ticker_t(half_trade_ticker_t* ptr) {
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "trade_quantity_i: " << ptr->trade_quantity_i << std::endl;
    std::cout << "block_n: " << ptr->block_n << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "deal_source_c: " << ptr->deal_source_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_hv_alter_trans_t(hv_alter_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "total_volume_i: " << ptr->total_volume_i << std::endl;
    std::cout << "delta_quantity_c: " << ptr->delta_quantity_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "balance_quantity_i: " << ptr->balance_quantity_i << std::endl;
}

void print_hv_alter_trans_p_t(hv_alter_trans_p_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "total_volume_i: " << ptr->total_volume_i << std::endl;
    std::cout << "delta_quantity_c: " << ptr->delta_quantity_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "balance_quantity_i: " << ptr->balance_quantity_i << std::endl;
}

void print_hv_order_trans_t(hv_order_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "total_volume_i: " << ptr->total_volume_i << std::endl;
}

void print_hv_order_trans_p_t(hv_order_trans_p_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "total_volume_i: " << ptr->total_volume_i << std::endl;
}

void print_hv_price_2_trans_t(hv_price_2_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "order_number_bid_u: " << ptr->order_number_bid_u << std::endl;
    std::cout << "order_number_ask_u: " << ptr->order_number_ask_u << std::endl;
    std::cout << "bid_premium_i: " << ptr->bid_premium_i << std::endl;
    std::cout << "ask_premium_i: " << ptr->ask_premium_i << std::endl;
    std::cout << "bid_quantity_i: " << ptr->bid_quantity_i << std::endl;
    std::cout << "ask_quantity_i: " << ptr->ask_quantity_i << std::endl;
    std::cout << "bid_total_volume_i: " << ptr->bid_total_volume_i << std::endl;
    std::cout << "ask_total_volume_i: " << ptr->ask_total_volume_i << std::endl;
    std::cout << "block_n: " << ptr->block_n << std::endl;
    std::cout << "time_validity_n: " << ptr->time_validity_n << std::endl;
    std::cout << "ex_client_s: " << ptr->ex_client_s << std::endl;
    std::cout << "order_type_c: " << ptr->order_type_c << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "stp_key_i: " << ptr->stp_key_i << std::endl;
}

void print_hv_price_2_trans_p_t(hv_price_2_trans_p_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "order_number_bid_u: " << ptr->order_number_bid_u << std::endl;
    std::cout << "order_number_ask_u: " << ptr->order_number_ask_u << std::endl;
    std::cout << "bid_premium_i: " << ptr->bid_premium_i << std::endl;
    std::cout << "ask_premium_i: " << ptr->ask_premium_i << std::endl;
    std::cout << "bid_quantity_i: " << ptr->bid_quantity_i << std::endl;
    std::cout << "ask_quantity_i: " << ptr->ask_quantity_i << std::endl;
    std::cout << "bid_total_volume_i: " << ptr->bid_total_volume_i << std::endl;
    std::cout << "ask_total_volume_i: " << ptr->ask_total_volume_i << std::endl;
    std::cout << "block_n: " << ptr->block_n << std::endl;
    std::cout << "time_validity_n: " << ptr->time_validity_n << std::endl;
    std::cout << "ex_client_s: " << ptr->ex_client_s << std::endl;
    std::cout << "order_type_c: " << ptr->order_type_c << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "stp_key_i: " << ptr->stp_key_i << std::endl;
}

void print_inactive_order_t(inactive_order_t* ptr) {
    std::cout << "inactive_c: " << ptr->inactive_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_indicative_quote_t(indicative_quote_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "buy_quantity_u: " << ptr->buy_quantity_u << std::endl;
    std::cout << "sell_quantity_u: " << ptr->sell_quantity_u << std::endl;
    std::cout << "buy_price_i: " << ptr->buy_price_i << std::endl;
    std::cout << "sell_price_i: " << ptr->sell_price_i << std::endl;
    std::cout << "bid_quote_action: " << ptr->bid_quote_action << std::endl;
    std::cout << "ask_quote_action: " << ptr->ask_quote_action << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_info_heartbeat_t(info_heartbeat_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "heartbeat_interval_c: " << ptr->heartbeat_interval_c << std::endl;
    std::cout << "instance_c: " << ptr->instance_c << std::endl;
    std::cout << "tot_instances_c: " << ptr->tot_instances_c << std::endl;
    std::cout << "description_s: " << ptr->description_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_info_ready_t(info_ready_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "info_type_i: " << ptr->info_type_i << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "sent_date_s: " << ptr->sent_date_s << std::endl;
    std::cout << "sent_time_s: " << ptr->sent_time_s << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "seq_num_srm_n: " << ptr->seq_num_srm_n << std::endl;
}

void print_instrument_status_info_t(instrument_status_info_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_inst_class_update_bu10_bu20_t(inst_class_update_bu10_bu20_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "chg_type_n: " << ptr->chg_type_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "da10_da20: " << ptr->da10_da20 << std::endl;
}

void print_irs_counterparty_pay_t(irs_counterparty_pay_t* ptr) {
    std::cout << "irs_leg: " << ptr->irs_leg << std::endl;
}

void print_irs_member_pay_t(irs_member_pay_t* ptr) {
    std::cout << "irs_leg: " << ptr->irs_leg << std::endl;
}

void print_item_hdr_t(item_hdr_t* ptr) {
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
}

void print_limit_change_t(limit_change_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_long_stop_order_trans_t(long_stop_order_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "stop_series: " << ptr->stop_series << std::endl;
    std::cout << "limit_premium_i: " << ptr->limit_premium_i << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "total_volume_i: " << ptr->total_volume_i << std::endl;
}

void print_long_stop_order_trans_p_t(long_stop_order_trans_p_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "stop_series: " << ptr->stop_series << std::endl;
    std::cout << "limit_premium_i: " << ptr->limit_premium_i << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "total_volume_i: " << ptr->total_volume_i << std::endl;
}

void print_marginable_spread_item_t(marginable_spread_item_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "rpt_intra_held_q: " << ptr->rpt_intra_held_q << std::endl;
    std::cout << "rpt_intra_written_q: " << ptr->rpt_intra_written_q << std::endl;
    std::cout << "rpt_inter_held_q: " << ptr->rpt_inter_held_q << std::endl;
    std::cout << "rpt_inter_written_q: " << ptr->rpt_inter_written_q << std::endl;
}

void print_margin_collateral_evaluation_t(margin_collateral_evaluation_t* ptr) {
    std::cout << "margin_account: " << ptr->margin_account << std::endl;
    std::cout << "cash_optimization_account: " << ptr->cash_optimization_account << std::endl;
    std::cout << "currency: " << ptr->currency << std::endl;
    std::cout << "base_currency: " << ptr->base_currency << std::endl;
    std::cout << "settlement_requirement_q: " << ptr->settlement_requirement_q << std::endl;
    std::cout << "collateral_cash_q: " << ptr->collateral_cash_q << std::endl;
    std::cout << "adjusted_collateral_cash_q: " << ptr->adjusted_collateral_cash_q << std::endl;
    std::cout << "collateral_cash_after_settlement_q: " << ptr->collateral_cash_after_settlement_q << std::endl;
    std::cout << "collateral_noncash_q: " << ptr->collateral_noncash_q << std::endl;
    std::cout << "credit_debit_coll_acc_margin_q: " << ptr->credit_debit_coll_acc_margin_q << std::endl;
    std::cout << "credit_debit_coll_acc_settlement_q: " << ptr->credit_debit_coll_acc_settlement_q << std::endl;
    std::cout << "total_credit_debit_coll_acc_q: " << ptr->total_credit_debit_coll_acc_q << std::endl;
    std::cout << "ext_credit_debit_margin_q: " << ptr->ext_credit_debit_margin_q << std::endl;
    std::cout << "ext_credit_debit_settlement_q: " << ptr->ext_credit_debit_settlement_q << std::endl;
    std::cout << "total_ext_credit_debit_q: " << ptr->total_ext_credit_debit_q << std::endl;
    std::cout << "margin_total_q: " << ptr->margin_total_q << std::endl;
    std::cout << "total_collateral_value_q: " << ptr->total_collateral_value_q << std::endl;
    std::cout << "total_surplus_deficit_q: " << ptr->total_surplus_deficit_q << std::endl;
    std::cout << "total_surplus_deficit_base_cur_q: " << ptr->total_surplus_deficit_base_cur_q << std::endl;
    std::cout << "total_surplus_deficit_base_cur_after_fx_haircut_q: " << ptr->total_surplus_deficit_base_cur_after_fx_haircut_q << std::endl;
    std::cout << "ex_rate_q: " << ptr->ex_rate_q << std::endl;
    std::cout << "cash_collateral_limit_q: " << ptr->cash_collateral_limit_q << std::endl;
    std::cout << "direct_credit_limit_q: " << ptr->direct_credit_limit_q << std::endl;
    std::cout << "instr_ref_s: " << ptr->instr_ref_s << std::endl;
    std::cout << "fx_percentage_after_haircut_i: " << ptr->fx_percentage_after_haircut_i << std::endl;
    std::cout << "dec_in_rate_n: " << ptr->dec_in_rate_n << std::endl;
    std::cout << "dd_in_base_c: " << ptr->dd_in_base_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_margin_collateral_evaluation_base_sgx_t(margin_collateral_evaluation_base_sgx_t* ptr) {
    std::cout << "margin_account: " << ptr->margin_account << std::endl;
    std::cout << "currency: " << ptr->currency << std::endl;
    std::cout << "base_currency: " << ptr->base_currency << std::endl;
    std::cout << "settlement_requirement_q: " << ptr->settlement_requirement_q << std::endl;
    std::cout << "collateral_cash_q: " << ptr->collateral_cash_q << std::endl;
    std::cout << "acc_bal_residual_q: " << ptr->acc_bal_residual_q << std::endl;
    std::cout << "collateral_fixed_income_q: " << ptr->collateral_fixed_income_q << std::endl;
    std::cout << "collateral_equity_q: " << ptr->collateral_equity_q << std::endl;
    std::cout << "collateral_guarantee_q: " << ptr->collateral_guarantee_q << std::endl;
    std::cout << "collateral_noncash_q: " << ptr->collateral_noncash_q << std::endl;
    std::cout << "total_collateral_value_q: " << ptr->total_collateral_value_q << std::endl;
    std::cout << "margin_maintenance_q: " << ptr->margin_maintenance_q << std::endl;
    std::cout << "margin_extraordinary_q: " << ptr->margin_extraordinary_q << std::endl;
    std::cout << "total_margin_req_q: " << ptr->total_margin_req_q << std::endl;
    std::cout << "external_margin_req_q: " << ptr->external_margin_req_q << std::endl;
    std::cout << "margin_total_q: " << ptr->margin_total_q << std::endl;
    std::cout << "ex_rate_q: " << ptr->ex_rate_q << std::endl;
    std::cout << "acc_bal_residual_base_cur_q: " << ptr->acc_bal_residual_base_cur_q << std::endl;
    std::cout << "collateral_cash_base_cur_q: " << ptr->collateral_cash_base_cur_q << std::endl;
    std::cout << "collateral_noncash_base_cur_q: " << ptr->collateral_noncash_base_cur_q << std::endl;
    std::cout << "external_margin_req_base_cur_q: " << ptr->external_margin_req_base_cur_q << std::endl;
    std::cout << "margin_maintenance_base_cur_q: " << ptr->margin_maintenance_base_cur_q << std::endl;
    std::cout << "margin_extraordinary_base_cur_q: " << ptr->margin_extraordinary_base_cur_q << std::endl;
    std::cout << "margin_total_base_cur_q: " << ptr->margin_total_base_cur_q << std::endl;
    std::cout << "ext_credit_debit_margin_q: " << ptr->ext_credit_debit_margin_q << std::endl;
    std::cout << "ext_credit_debit_settlement_q: " << ptr->ext_credit_debit_settlement_q << std::endl;
    std::cout << "total_ext_credit_debit_q: " << ptr->total_ext_credit_debit_q << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "dec_in_rate_n: " << ptr->dec_in_rate_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_margin_collateral_evaluation_cash_optimization_t(margin_collateral_evaluation_cash_optimization_t* ptr) {
    std::cout << "cash_optimization_account: " << ptr->cash_optimization_account << std::endl;
    std::cout << "currency: " << ptr->currency << std::endl;
    std::cout << "total_ext_credit_debit_q: " << ptr->total_ext_credit_debit_q << std::endl;
    std::cout << "instr_ref_s: " << ptr->instr_ref_s << std::endl;
}

void print_margin_collateral_evaluation_collrank_sgx_t(margin_collateral_evaluation_collrank_sgx_t* ptr) {
    std::cout << "usd_equivalent_q: " << ptr->usd_equivalent_q << std::endl;
    std::cout << "collateral_fixed_income_base_cur_q: " << ptr->collateral_fixed_income_base_cur_q << std::endl;
    std::cout << "collateral_equity_base_cur_q: " << ptr->collateral_equity_base_cur_q << std::endl;
    std::cout << "collateral_guarantee_base_cur_q: " << ptr->collateral_guarantee_base_cur_q << std::endl;
    std::cout << "total_collateral_value_base_cur_q: " << ptr->total_collateral_value_base_cur_q << std::endl;
    std::cout << "total_margin_req_base_cur_q: " << ptr->total_margin_req_base_cur_q << std::endl;
    std::cout << "rank1_surpl_def_base_cur_after_fx_haircut_q: " << ptr->rank1_surpl_def_base_cur_after_fx_haircut_q << std::endl;
    std::cout << "rank2_surpl_def_base_cur_after_fx_haircut_q: " << ptr->rank2_surpl_def_base_cur_after_fx_haircut_q << std::endl;
    std::cout << "rank3_surpl_def_base_cur_after_fx_haircut_q: " << ptr->rank3_surpl_def_base_cur_after_fx_haircut_q << std::endl;
    std::cout << "rank4_surpl_def_base_cur_after_fx_haircut_q: " << ptr->rank4_surpl_def_base_cur_after_fx_haircut_q << std::endl;
    std::cout << "rank5_surpl_def_base_cur_after_fx_haircut_q: " << ptr->rank5_surpl_def_base_cur_after_fx_haircut_q << std::endl;
    std::cout << "rank1_fx_percentage_after_haircut_i: " << ptr->rank1_fx_percentage_after_haircut_i << std::endl;
    std::cout << "rank2_fx_percentage_after_haircut_i: " << ptr->rank2_fx_percentage_after_haircut_i << std::endl;
    std::cout << "rank3_fx_percentage_after_haircut_i: " << ptr->rank3_fx_percentage_after_haircut_i << std::endl;
    std::cout << "rank4_fx_percentage_after_haircut_i: " << ptr->rank4_fx_percentage_after_haircut_i << std::endl;
    std::cout << "rank5_fx_percentage_after_haircut_i: " << ptr->rank5_fx_percentage_after_haircut_i << std::endl;
    std::cout << "equity_surplus_deficit_base_cur_q: " << ptr->equity_surplus_deficit_base_cur_q << std::endl;
    std::cout << "equity_sd_base_cur_after_fx_haircut_q: " << ptr->equity_sd_base_cur_after_fx_haircut_q << std::endl;
    std::cout << "rank3_surp_fx_percentage_after_haircut_i: " << ptr->rank3_surp_fx_percentage_after_haircut_i << std::endl;
    std::cout << "allocated_equity_deficit_base_cur_q: " << ptr->allocated_equity_deficit_base_cur_q << std::endl;
}

void print_margin_collateral_evaluation_df_sgx_t(margin_collateral_evaluation_df_sgx_t* ptr) {
    std::cout << "cash_df_requirement_q: " << ptr->cash_df_requirement_q << std::endl;
    std::cout << "cash_surplus_deficit_q: " << ptr->cash_surplus_deficit_q << std::endl;
    std::cout << "noncash_surplus_deficit_q: " << ptr->noncash_surplus_deficit_q << std::endl;
    std::cout << "cash_df_requirement_base_cur_q: " << ptr->cash_df_requirement_base_cur_q << std::endl;
    std::cout << "cash_surplus_deficit_base_cur_q: " << ptr->cash_surplus_deficit_base_cur_q << std::endl;
    std::cout << "noncash_surplus_deficit_base_cur_q: " << ptr->noncash_surplus_deficit_base_cur_q << std::endl;
    std::cout << "fx_percentage_after_haircut_i: " << ptr->fx_percentage_after_haircut_i << std::endl;
}

void print_margin_collateral_evaluation_grand_total_t(margin_collateral_evaluation_grand_total_t* ptr) {
    std::cout << "margin_account: " << ptr->margin_account << std::endl;
    std::cout << "base_currency: " << ptr->base_currency << std::endl;
    std::cout << "grand_total_surplus_deficit_base_cur_q: " << ptr->grand_total_surplus_deficit_base_cur_q << std::endl;
    std::cout << "grand_total_surplus_deficit_base_cur_after_fx_haircut_q: " << ptr->grand_total_surplus_deficit_base_cur_after_fx_haircut_q << std::endl;
}

void print_margin_collateral_evaluation_grand_total_sgx_t(margin_collateral_evaluation_grand_total_sgx_t* ptr) {
    std::cout << "margin_account: " << ptr->margin_account << std::endl;
    std::cout << "base_currency: " << ptr->base_currency << std::endl;
    std::cout << "sum_rank1_surpl_def_base_cur_after_fx_haircut_q: " << ptr->sum_rank1_surpl_def_base_cur_after_fx_haircut_q << std::endl;
    std::cout << "sum_rank2_surpl_def_base_cur_after_fx_haircut_q: " << ptr->sum_rank2_surpl_def_base_cur_after_fx_haircut_q << std::endl;
    std::cout << "sum_rank3_surpl_def_base_cur_after_fx_haircut_q: " << ptr->sum_rank3_surpl_def_base_cur_after_fx_haircut_q << std::endl;
    std::cout << "sum_rank4_surpl_def_base_cur_after_fx_haircut_q: " << ptr->sum_rank4_surpl_def_base_cur_after_fx_haircut_q << std::endl;
    std::cout << "sum_rank5_surpl_def_base_cur_after_fx_haircut_q: " << ptr->sum_rank5_surpl_def_base_cur_after_fx_haircut_q << std::endl;
    std::cout << "margin_total_base_cur_q: " << ptr->margin_total_base_cur_q << std::endl;
    std::cout << "sum_noncash_surplus_deficit_base_cur_q: " << ptr->sum_noncash_surplus_deficit_base_cur_q << std::endl;
    std::cout << "sum_cash_surplus_deficit_base_cur_q: " << ptr->sum_cash_surplus_deficit_base_cur_q << std::endl;
    std::cout << "grand_total_surplus_deficit_base_cur_after_fx_haircut_q: " << ptr->grand_total_surplus_deficit_base_cur_after_fx_haircut_q << std::endl;
}

void print_margin_result_additional_margin_t(margin_result_additional_margin_t* ptr) {
    std::cout << "additional_margin_q: " << ptr->additional_margin_q << std::endl;
}

void print_margin_result_base_api_t(margin_result_base_api_t* ptr) {
    std::cout << "total_margin_req_q: " << ptr->total_margin_req_q << std::endl;
    std::cout << "initial_margin_req_q: " << ptr->initial_margin_req_q << std::endl;
    std::cout << "variation_margin_req_q: " << ptr->variation_margin_req_q << std::endl;
    std::cout << "contingent_variation_margin_req_q: " << ptr->contingent_variation_margin_req_q << std::endl;
    std::cout << "info_naked_risk_margin_q: " << ptr->info_naked_risk_margin_q << std::endl;
}

void print_margin_result_components_t(margin_result_components_t* ptr) {
    std::cout << "risk_margin_open_q: " << ptr->risk_margin_open_q << std::endl;
    std::cout << "risk_margin_deliv_q: " << ptr->risk_margin_deliv_q << std::endl;
    std::cout << "spot_val_margin_q: " << ptr->spot_val_margin_q << std::endl;
    std::cout << "for_val_margin_q: " << ptr->for_val_margin_q << std::endl;
    std::cout << "fut_val_margin_q: " << ptr->fut_val_margin_q << std::endl;
    std::cout << "opt_val_margin_q: " << ptr->opt_val_margin_q << std::endl;
    std::cout << "deliv_val_margin_q: " << ptr->deliv_val_margin_q << std::endl;
    std::cout << "payment_margin_future_date_q: " << ptr->payment_margin_future_date_q << std::endl;
    std::cout << "long_opt_min_val_q: " << ptr->long_opt_min_val_q << std::endl;
    std::cout << "today_opt_premium_q: " << ptr->today_opt_premium_q << std::endl;
    std::cout << "risk_currency_s: " << ptr->risk_currency_s << std::endl;
    std::cout << "instr_currency_s: " << ptr->instr_currency_s << std::endl;
    std::cout << "instrument_or_risk_currency_c: " << ptr->instrument_or_risk_currency_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_margin_result_components_cfm_t(margin_result_components_cfm_t* ptr) {
    std::cout << "info_market_value_theo_q: " << ptr->info_market_value_theo_q << std::endl;
    std::cout << "market_value_margin_settled_q: " << ptr->market_value_margin_settled_q << std::endl;
}

void print_margin_result_components_pdh_t(margin_result_components_pdh_t* ptr) {
    std::cout << "financial_margin_q: " << ptr->financial_margin_q << std::endl;
    std::cout << "info_inter_comm_spread_credit_q: " << ptr->info_inter_comm_spread_credit_q << std::endl;
}

void print_margin_result_otcf_margin_t(margin_result_otcf_margin_t* ptr) {
    std::cout << "otcf_margin_q: " << ptr->otcf_margin_q << std::endl;
    std::cout << "otcf_additional_margin_q: " << ptr->otcf_additional_margin_q << std::endl;
    std::cout << "pai_q: " << ptr->pai_q << std::endl;
    std::cout << "otcf_settlement_variation_q: " << ptr->otcf_settlement_variation_q << std::endl;
}

void print_margin_result_overdue_t(margin_result_overdue_t* ptr) {
    std::cout << "delivery_margin_valuation_date_q: " << ptr->delivery_margin_valuation_date_q << std::endl;
    std::cout << "delivery_margin_overdue_q: " << ptr->delivery_margin_overdue_q << std::endl;
    std::cout << "payment_margin_valuation_date_q: " << ptr->payment_margin_valuation_date_q << std::endl;
    std::cout << "payment_margin_overdue_q: " << ptr->payment_margin_overdue_q << std::endl;
}

void print_margin_result_pos_unit_api_t(margin_result_pos_unit_api_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "pos_unit_id_q: " << ptr->pos_unit_id_q << std::endl;
    std::cout << "margin_req_u: " << ptr->margin_req_u << std::endl;
    std::cout << "market_value_q: " << ptr->market_value_q << std::endl;
    std::cout << "nbr_held_q: " << ptr->nbr_held_q << std::endl;
    std::cout << "nbr_written_q: " << ptr->nbr_written_q << std::endl;
    std::cout << "naked_margin_q: " << ptr->naked_margin_q << std::endl;
    std::cout << "today_option_premium_q: " << ptr->today_option_premium_q << std::endl;
    std::cout << "risk_margin_without_scaling_q: " << ptr->risk_margin_without_scaling_q << std::endl;
    std::cout << "offset_reduction_adj_q: " << ptr->offset_reduction_adj_q << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "gross_or_net_c: " << ptr->gross_or_net_c << std::endl;
    std::cout << "margin_class_s: " << ptr->margin_class_s << std::endl;
    std::cout << "marg_meth_inst_c: " << ptr->marg_meth_inst_c << std::endl;
    std::cout << "marg_item_type_c: " << ptr->marg_item_type_c << std::endl;
    std::cout << "account_calculation_type_c: " << ptr->account_calculation_type_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_margin_result_pos_unit_cfm_t(margin_result_pos_unit_cfm_t* ptr) {
    std::cout << "market_value_theo_q: " << ptr->market_value_theo_q << std::endl;
    std::cout << "price_spread_margin_q: " << ptr->price_spread_margin_q << std::endl;
    std::cout << "sensitivity_forecast_primary_q: " << ptr->sensitivity_forecast_primary_q << std::endl;
    std::cout << "sensitivity_discount_primary_q: " << ptr->sensitivity_discount_primary_q << std::endl;
    std::cout << "market_value_margin_settled_q: " << ptr->market_value_margin_settled_q << std::endl;
    std::cout << "sensitivity_forecast_secondary_q: " << ptr->sensitivity_forecast_secondary_q << std::endl;
    std::cout << "sensitivity_discount_secondary_q: " << ptr->sensitivity_discount_secondary_q << std::endl;
}

void print_margin_result_pos_unit_delivery_t(margin_result_pos_unit_delivery_t* ptr) {
    std::cout << "closing_date_s: " << ptr->closing_date_s << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
}

void print_margin_result_pos_unit_forward_t(margin_result_pos_unit_forward_t* ptr) {
    std::cout << "acc_bought_for_q: " << ptr->acc_bought_for_q << std::endl;
    std::cout << "acc_sold_for_q: " << ptr->acc_sold_for_q << std::endl;
}

void print_margin_result_pos_unit_pdh_t(margin_result_pos_unit_pdh_t* ptr) {
    std::cout << "cash_margin_q: " << ptr->cash_margin_q << std::endl;
    std::cout << "orig_market_value_q: " << ptr->orig_market_value_q << std::endl;
    std::cout << "unconv_market_value_q: " << ptr->unconv_market_value_q << std::endl;
    std::cout << "financial_margin_q: " << ptr->financial_margin_q << std::endl;
    std::cout << "inter_comm_spread_credit_q: " << ptr->inter_comm_spread_credit_q << std::endl;
    std::cout << "quantity_rnp_q: " << ptr->quantity_rnp_q << std::endl;
    std::cout << "rest_long_pos_bef_inter_comm_q: " << ptr->rest_long_pos_bef_inter_comm_q << std::endl;
    std::cout << "rest_short_pos_bef_inter_comm_q: " << ptr->rest_short_pos_bef_inter_comm_q << std::endl;
    std::cout << "cash_currency_s: " << ptr->cash_currency_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "contract_spread_credit_q: " << ptr->contract_spread_credit_q << std::endl;
    std::cout << "time_spread_credit_q: " << ptr->time_spread_credit_q << std::endl;
}

void print_margin_result_pos_unit_settlement_t(margin_result_pos_unit_settlement_t* ptr) {
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
}

void print_marg_calc_runs_t(marg_calc_runs_t* ptr) {
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "valuation_date_s: " << ptr->valuation_date_s << std::endl;
    std::cout << "start_date_s: " << ptr->start_date_s << std::endl;
    std::cout << "start_time_s: " << ptr->start_time_s << std::endl;
    std::cout << "incl_t_plus_one_prices_c: " << ptr->incl_t_plus_one_prices_c << std::endl;
    std::cout << "incl_t_plus_one_positions_c: " << ptr->incl_t_plus_one_positions_c << std::endl;
    std::cout << "sequence_number_n: " << ptr->sequence_number_n << std::endl;
    std::cout << "run_type_c: " << ptr->run_type_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_market_info_base_t(market_info_base_t* ptr) {
    std::cout << "opening_price_i: " << ptr->opening_price_i << std::endl;
    std::cout << "high_price_i: " << ptr->high_price_i << std::endl;
    std::cout << "low_price_i: " << ptr->low_price_i << std::endl;
    std::cout << "last_price_i: " << ptr->last_price_i << std::endl;
    std::cout << "volume_u: " << ptr->volume_u << std::endl;
    std::cout << "turnover_u: " << ptr->turnover_u << std::endl;
    std::cout << "number_of_deals_u: " << ptr->number_of_deals_u << std::endl;
    std::cout << "hhmmss_s: " << ptr->hhmmss_s << std::endl;
    std::cout << "trend_indicator_c: " << ptr->trend_indicator_c << std::endl;
    std::cout << "deal_source_c: " << ptr->deal_source_c << std::endl;
}

void print_market_info_index_t(market_info_index_t* ptr) {
    std::cout << "opening_price_i: " << ptr->opening_price_i << std::endl;
    std::cout << "high_price_i: " << ptr->high_price_i << std::endl;
    std::cout << "low_price_i: " << ptr->low_price_i << std::endl;
    std::cout << "last_price_i: " << ptr->last_price_i << std::endl;
    std::cout << "change_previous_i: " << ptr->change_previous_i << std::endl;
    std::cout << "change_yesterday_i: " << ptr->change_yesterday_i << std::endl;
    std::cout << "points_of_movement_i: " << ptr->points_of_movement_i << std::endl;
    std::cout << "date_time_of_dist_s: " << ptr->date_time_of_dist_s << std::endl;
    std::cout << "date_time_of_comp_s: " << ptr->date_time_of_comp_s << std::endl;
}

void print_market_info_net_t(market_info_net_t* ptr) {
    std::cout << "net_change_i: " << ptr->net_change_i << std::endl;
}

void print_market_info_reason_t(market_info_reason_t* ptr) {
    std::cout << "edited_price_info_reason_c: " << ptr->edited_price_info_reason_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_market_info_series_t(market_info_series_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "reserved_i: " << ptr->reserved_i << std::endl;
    std::cout << "all_or_none_c: " << ptr->all_or_none_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_market_info_sgx_t(market_info_sgx_t* ptr) {
    std::cout << "turnover_value_q: " << ptr->turnover_value_q << std::endl;
    std::cout << "trade_reported_volume_u: " << ptr->trade_reported_volume_u << std::endl;
    std::cout << "trade_reported_volume_t_session_u: " << ptr->trade_reported_volume_t_session_u << std::endl;
    std::cout << "combo_quantity_u: " << ptr->combo_quantity_u << std::endl;
    std::cout << "previous_last_price_i: " << ptr->previous_last_price_i << std::endl;
    std::cout << "previous_last_price_updated_date_s: " << ptr->previous_last_price_updated_date_s << std::endl;
    std::cout << "previous_last_price_updated_time_s: " << ptr->previous_last_price_updated_time_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_market_info_trd_t(market_info_trd_t* ptr) {
    std::cout << "last_trade_report_price_i: " << ptr->last_trade_report_price_i << std::endl;
    std::cout << "last_trade_report_qty_u: " << ptr->last_trade_report_qty_u << std::endl;
}

void print_market_maker_protection_info_t(market_maker_protection_info_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "calc_quantity_protection_q: " << ptr->calc_quantity_protection_q << std::endl;
    std::cout << "calc_delta_protection_q: " << ptr->calc_delta_protection_q << std::endl;
}

void print_mass_quote_trans_t(mass_quote_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "stp_key: " << ptr->stp_key << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_mass_quote_update_t(mass_quote_update_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "execution_timestamp: " << ptr->execution_timestamp << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "sequence_number_u: " << ptr->sequence_number_u << std::endl;
    std::cout << "stp_key_i: " << ptr->stp_key_i << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_member_deposit_t(member_deposit_t* ptr) {
    std::cout << "collateral_base: " << ptr->collateral_base << std::endl;
    std::cout << "member_deposit_type_c: " << ptr->member_deposit_type_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "fund_name_s: " << ptr->fund_name_s << std::endl;
}

void print_message_core_info_t(message_core_info_t* ptr) {
    std::cout << "sequence_number_u: " << ptr->sequence_number_u << std::endl;
    std::cout << "message_information_type_c: " << ptr->message_information_type_c << std::endl;
    std::cout << "message_source_s: " << ptr->message_source_s << std::endl;
    std::cout << "yyyymmdd_s: " << ptr->yyyymmdd_s << std::endl;
    std::cout << "hhmmss_s: " << ptr->hhmmss_s << std::endl;
    std::cout << "message_priority_c: " << ptr->message_priority_c << std::endl;
    std::cout << "message_header_s: " << ptr->message_header_s << std::endl;
    std::cout << "update_status_note_c: " << ptr->update_status_note_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_message_information_t(message_information_t* ptr) {
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_mm_protection_update_t(mm_protection_update_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "chg_type_n: " << ptr->chg_type_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "da87: " << ptr->da87 << std::endl;
}

void print_modify_aat_connection_hdr_t(modify_aat_connection_hdr_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "connect_type_c: " << ptr->connect_type_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
    std::cout << "version_i: " << ptr->version_i << std::endl;
}

void print_modify_account_t(modify_account_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "auth_section: " << ptr->auth_section << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "account_data_external: " << ptr->account_data_external << std::endl;
}

void print_modify_acc_access_type_t(modify_acc_access_type_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
    std::cout << "desc_long_s: " << ptr->desc_long_s << std::endl;
    std::cout << "allow_all_account_i: " << ptr->allow_all_account_i << std::endl;
    std::cout << "version_i: " << ptr->version_i << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_modify_commission_t(modify_commission_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "send_receive_c: " << ptr->send_receive_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_mp_trade_price_t(mp_trade_price_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "deal_source_c: " << ptr->deal_source_c << std::endl;
    std::cout << "trade_condition_n: " << ptr->trade_condition_n << std::endl;
    std::cout << "deal_price_i: " << ptr->deal_price_i << std::endl;
    std::cout << "deal_quantity_i: " << ptr->deal_quantity_i << std::endl;
    std::cout << "ext_t_state_c: " << ptr->ext_t_state_c << std::endl;
    std::cout << "opposing_deal_source_c: " << ptr->opposing_deal_source_c << std::endl;
    std::cout << "exch_order_type_n: " << ptr->exch_order_type_n << std::endl;
    std::cout << "opposing_order_number_u: " << ptr->opposing_order_number_u << std::endl;
}

void print_mra_account_vim_t(mra_account_vim_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
}

void print_multi_order_response_t(multi_order_response_t* ptr) {
    std::cout << "transaction_status_i: " << ptr->transaction_status_i << std::endl;
    std::cout << "trans_ack_i: " << ptr->trans_ack_i << std::endl;
    std::cout << "item_number_c: " << ptr->item_number_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_non_trading_days_update_bu18_t(non_trading_days_update_bu18_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "chg_type_n: " << ptr->chg_type_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "da18: " << ptr->da18 << std::endl;
}

void print_non_trad_settl_days_update_bu50_t(non_trad_settl_days_update_bu50_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "chg_type_n: " << ptr->chg_type_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "da50: " << ptr->da50 << std::endl;
}

void print_ns_account_type_basic_t(ns_account_type_basic_t* ptr) {
    std::cout << "acc_type_s: " << ptr->acc_type_s << std::endl;
    std::cout << "description_s: " << ptr->description_s << std::endl;
    std::cout << "open_close_c: " << ptr->open_close_c << std::endl;
    std::cout << "transitory_c: " << ptr->transitory_c << std::endl;
    std::cout << "market_maker_c: " << ptr->market_maker_c << std::endl;
    std::cout << "own_inventory_c: " << ptr->own_inventory_c << std::endl;
    std::cout << "exclusive_opening_sell_c: " << ptr->exclusive_opening_sell_c << std::endl;
    std::cout << "positions_allowed_c: " << ptr->positions_allowed_c << std::endl;
    std::cout << "trades_allowed_c: " << ptr->trades_allowed_c << std::endl;
    std::cout << "atr_id_s: " << ptr->atr_id_s << std::endl;
    std::cout << "origin_c: " << ptr->origin_c << std::endl;
    std::cout << "allowed_collateral_c: " << ptr->allowed_collateral_c << std::endl;
    std::cout << "acct_type_c: " << ptr->acct_type_c << std::endl;
    std::cout << "custodian_c: " << ptr->custodian_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_ns_block_size_t(ns_block_size_t* ptr) {
    std::cout << "maximum_size_u: " << ptr->maximum_size_u << std::endl;
    std::cout << "minimum_size_n: " << ptr->minimum_size_n << std::endl;
    std::cout << "block_n: " << ptr->block_n << std::endl;
    std::cout << "lot_type_c: " << ptr->lot_type_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_ns_calc_rule_t(ns_calc_rule_t* ptr) {
    std::cout << "accr_intr_round_u: " << ptr->accr_intr_round_u << std::endl;
    std::cout << "clean_pr_round_u: " << ptr->clean_pr_round_u << std::endl;
    std::cout << "yield_conv_n: " << ptr->yield_conv_n << std::endl;
    std::cout << "ex_coupon_n: " << ptr->ex_coupon_n << std::endl;
    std::cout << "accr_intr_ud_c: " << ptr->accr_intr_ud_c << std::endl;
    std::cout << "clean_pr_ud_c: " << ptr->clean_pr_ud_c << std::endl;
    std::cout << "day_count_conv_c: " << ptr->day_count_conv_c << std::endl;
    std::cout << "eom_count_conv_c: " << ptr->eom_count_conv_c << std::endl;
    std::cout << "set_start_consid_c: " << ptr->set_start_consid_c << std::endl;
    std::cout << "set_end_consid_c: " << ptr->set_end_consid_c << std::endl;
    std::cout << "calculation_conv_c: " << ptr->calculation_conv_c << std::endl;
    std::cout << "ex_coupon_calc_type_c: " << ptr->ex_coupon_calc_type_c << std::endl;
}

void print_ns_combo_series_leg_t(ns_combo_series_leg_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "ratio_n: " << ptr->ratio_n << std::endl;
    std::cout << "op_if_buy_c: " << ptr->op_if_buy_c << std::endl;
    std::cout << "op_if_sell_c: " << ptr->op_if_sell_c << std::endl;
}

void print_ns_coupon_dates_t(ns_coupon_dates_t* ptr) {
    std::cout << "date_coupdiv_s: " << ptr->date_coupdiv_s << std::endl;
    std::cout << "date_booksclose_s: " << ptr->date_booksclose_s << std::endl;
    std::cout << "dividend_i: " << ptr->dividend_i << std::endl;
}

void print_ns_delta_header_t(ns_delta_header_t* ptr) {
    std::cout << "download_ref_number_q: " << ptr->download_ref_number_q << std::endl;
    std::cout << "full_answer_timestamp: " << ptr->full_answer_timestamp << std::endl;
    std::cout << "full_answer_c: " << ptr->full_answer_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_ns_fixed_income_t(ns_fixed_income_t* ptr) {
    std::cout << "nominal_value_q: " << ptr->nominal_value_q << std::endl;
    std::cout << "coupon_interest_i: " << ptr->coupon_interest_i << std::endl;
    std::cout << "dec_in_nominal_n: " << ptr->dec_in_nominal_n << std::endl;
    std::cout << "coupon_settlement_days_n: " << ptr->coupon_settlement_days_n << std::endl;
    std::cout << "coupon_frequency_n: " << ptr->coupon_frequency_n << std::endl;
    std::cout << "rate_determ_days_n: " << ptr->rate_determ_days_n << std::endl;
    std::cout << "date_release_s: " << ptr->date_release_s << std::endl;
    std::cout << "date_termination_s: " << ptr->date_termination_s << std::endl;
    std::cout << "date_dated_s: " << ptr->date_dated_s << std::endl;
    std::cout << "date_proceed_s: " << ptr->date_proceed_s << std::endl;
    std::cout << "fixed_income_type_c: " << ptr->fixed_income_type_c << std::endl;
    std::cout << "day_calc_rule_c: " << ptr->day_calc_rule_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_ns_inst_class_basic_t(ns_inst_class_basic_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "upper_level_series: " << ptr->upper_level_series << std::endl;
    std::cout << "price_quot_factor_i: " << ptr->price_quot_factor_i << std::endl;
    std::cout << "contract_size_i: " << ptr->contract_size_i << std::endl;
    std::cout << "redemption_value_i: " << ptr->redemption_value_i << std::endl;
    std::cout << "undisclosed_min_ord_val_i: " << ptr->undisclosed_min_ord_val_i << std::endl;
    std::cout << "opt_min_ord_val_i: " << ptr->opt_min_ord_val_i << std::endl;
    std::cout << "opt_min_trade_val_i: " << ptr->opt_min_trade_val_i << std::endl;
    std::cout << "derivate_level_n: " << ptr->derivate_level_n << std::endl;
    std::cout << "dec_in_strike_price_n: " << ptr->dec_in_strike_price_n << std::endl;
    std::cout << "dec_in_contr_size_n: " << ptr->dec_in_contr_size_n << std::endl;
    std::cout << "rnt_id_n: " << ptr->rnt_id_n << std::endl;
    std::cout << "virt_commodity_n: " << ptr->virt_commodity_n << std::endl;
    std::cout << "settlement_days_n: " << ptr->settlement_days_n << std::endl;
    std::cout << "settl_day_unit_c: " << ptr->settl_day_unit_c << std::endl;
    std::cout << "inc_id_s: " << ptr->inc_id_s << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "trc_id_s: " << ptr->trc_id_s << std::endl;
    std::cout << "base_cur_s: " << ptr->base_cur_s << std::endl;
    std::cout << "traded_c: " << ptr->traded_c << std::endl;
    std::cout << "price_unit_premium_c: " << ptr->price_unit_premium_c << std::endl;
    std::cout << "price_unit_strike_c: " << ptr->price_unit_strike_c << std::endl;
    std::cout << "trd_cur_unit_c: " << ptr->trd_cur_unit_c << std::endl;
    std::cout << "db_operation_c: " << ptr->db_operation_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_ns_inst_class_cms_t(ns_inst_class_cms_t* ptr) {
    std::cout << "valuation_group_id_s: " << ptr->valuation_group_id_s << std::endl;
    std::cout << "haircut_id_s: " << ptr->haircut_id_s << std::endl;
    std::cout << "vag_limit_i: " << ptr->vag_limit_i << std::endl;
    std::cout << "collateral_type_c: " << ptr->collateral_type_c << std::endl;
    std::cout << "eligible_as_margin_coll_c: " << ptr->eligible_as_margin_coll_c << std::endl;
    std::cout << "eligible_as_def_fund_coll_c: " << ptr->eligible_as_def_fund_coll_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_ns_inst_class_ext14_t(ns_inst_class_ext14_t* ptr) {
    std::cout << "tar_instrument_indicator_c: " << ptr->tar_instrument_indicator_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "reference_inc_id_s: " << ptr->reference_inc_id_s << std::endl;
    std::cout << "max_length_expiration_i: " << ptr->max_length_expiration_i << std::endl;
    std::cout << "trade_days_ltd_exp_i: " << ptr->trade_days_ltd_exp_i << std::endl;
    std::cout << "trade_days_sett_exp_i: " << ptr->trade_days_sett_exp_i << std::endl;
    std::cout << "trade_days_delv_start_exp_i: " << ptr->trade_days_delv_start_exp_i << std::endl;
    std::cout << "trade_days_delv_end_exp_i: " << ptr->trade_days_delv_end_exp_i << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_ns_inst_class_oat_t(ns_inst_class_oat_t* ptr) {
    std::cout << "limit_order_allwd_c: " << ptr->limit_order_allwd_c << std::endl;
    std::cout << "market_orders_allowed_c: " << ptr->market_orders_allowed_c << std::endl;
    std::cout << "fill_or_kill_allowed_c: " << ptr->fill_or_kill_allowed_c << std::endl;
    std::cout << "fill_and_kill_allowed_c: " << ptr->fill_and_kill_allowed_c << std::endl;
    std::cout << "fill_and_store_c: " << ptr->fill_and_store_c << std::endl;
    std::cout << "all_or_none_c: " << ptr->all_or_none_c << std::endl;
    std::cout << "imb_orders_allwd_c: " << ptr->imb_orders_allwd_c << std::endl;
    std::cout << "mtl_orders_rlot_allwd_c: " << ptr->mtl_orders_rlot_allwd_c << std::endl;
    std::cout << "allow_hidd_aggr_c: " << ptr->allow_hidd_aggr_c << std::endl;
    std::cout << "best_limit_c: " << ptr->best_limit_c << std::endl;
    std::cout << "market_bid_c: " << ptr->market_bid_c << std::endl;
    std::cout << "price_stabilization_c: " << ptr->price_stabilization_c << std::endl;
    std::cout << "short_sell_c: " << ptr->short_sell_c << std::endl;
    std::cout << "short_sell_validation_c: " << ptr->short_sell_validation_c << std::endl;
    std::cout << "allow_cp_mar_c: " << ptr->allow_cp_mar_c << std::endl;
    std::cout << "allow_cp_lim_c: " << ptr->allow_cp_lim_c << std::endl;
    std::cout << "allow_undisclosed_qty_c: " << ptr->allow_undisclosed_qty_c << std::endl;
    std::cout << "sso_orders_allowed_c: " << ptr->sso_orders_allowed_c << std::endl;
    std::cout << "stop_orders_allowed_c: " << ptr->stop_orders_allowed_c << std::endl;
    std::cout << "good_till_session_c: " << ptr->good_till_session_c << std::endl;
    std::cout << "priority_ranking_c: " << ptr->priority_ranking_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_ns_inst_class_secur_t(ns_inst_class_secur_t* ptr) {
    std::cout << "exerc_limit_i: " << ptr->exerc_limit_i << std::endl;
    std::cout << "dec_in_deliv_n: " << ptr->dec_in_deliv_n << std::endl;
    std::cout << "cleared_dec_in_qty_n: " << ptr->cleared_dec_in_qty_n << std::endl;
    std::cout << "dec_in_fixing_n: " << ptr->dec_in_fixing_n << std::endl;
    std::cout << "exerc_limit_unit_c: " << ptr->exerc_limit_unit_c << std::endl;
    std::cout << "settl_cur_id_s: " << ptr->settl_cur_id_s << std::endl;
    std::cout << "csd_id_s: " << ptr->csd_id_s << std::endl;
    std::cout << "fixing_req_c: " << ptr->fixing_req_c << std::endl;
}

void print_ns_inst_series_basic_t(ns_inst_series_basic_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "step_size_multiple_n: " << ptr->step_size_multiple_n << std::endl;
    std::cout << "ins_id_s: " << ptr->ins_id_s << std::endl;
    std::cout << "long_ins_id_s: " << ptr->long_ins_id_s << std::endl;
    std::cout << "date_last_trading_s: " << ptr->date_last_trading_s << std::endl;
    std::cout << "time_last_trading_s: " << ptr->time_last_trading_s << std::endl;
    std::cout << "date_first_trading_s: " << ptr->date_first_trading_s << std::endl;
    std::cout << "time_first_trading_s: " << ptr->time_first_trading_s << std::endl;
    std::cout << "series_status_c: " << ptr->series_status_c << std::endl;
    std::cout << "suspended_c: " << ptr->suspended_c << std::endl;
    std::cout << "traded_in_click_c: " << ptr->traded_in_click_c << std::endl;
    std::cout << "db_operation_c: " << ptr->db_operation_c << std::endl;
    std::cout << "trade_reporting_only_c: " << ptr->trade_reporting_only_c << std::endl;
    std::cout << "traded_c: " << ptr->traded_c << std::endl;
}

void print_ns_inst_series_basic_single_t(ns_inst_series_basic_single_t* ptr) {
    std::cout << "upper_level_series: " << ptr->upper_level_series << std::endl;
    std::cout << "contract_size_i: " << ptr->contract_size_i << std::endl;
    std::cout << "price_quot_factor_i: " << ptr->price_quot_factor_i << std::endl;
    std::cout << "state_number_n: " << ptr->state_number_n << std::endl;
    std::cout << "ex_coupon_n: " << ptr->ex_coupon_n << std::endl;
    std::cout << "isin_code_s: " << ptr->isin_code_s << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "first_settlement_date_s: " << ptr->first_settlement_date_s << std::endl;
    std::cout << "date_notation_s: " << ptr->date_notation_s << std::endl;
    std::cout << "deliverable_c: " << ptr->deliverable_c << std::endl;
    std::cout << "effective_exp_date_s: " << ptr->effective_exp_date_s << std::endl;
    std::cout << "ext_info_source_c: " << ptr->ext_info_source_c << std::endl;
    std::cout << "participant_defined_c: " << ptr->participant_defined_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_ns_inst_series_bo_t(ns_inst_series_bo_t* ptr) {
    std::cout << "isin_code_old_s: " << ptr->isin_code_old_s << std::endl;
    std::cout << "tm_template_c: " << ptr->tm_template_c << std::endl;
    std::cout << "tm_series_c: " << ptr->tm_series_c << std::endl;
    std::cout << "accept_collateral_c: " << ptr->accept_collateral_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_ns_inst_series_ext1_t(ns_inst_series_ext1_t* ptr) {
    std::cout << "series_sequence_number_u: " << ptr->series_sequence_number_u << std::endl;
    std::cout << "abbr_name_s: " << ptr->abbr_name_s << std::endl;
    std::cout << "stock_code_s: " << ptr->stock_code_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_ns_inst_series_id_t(ns_inst_series_id_t* ptr) {
    std::cout << "orderbook_id_i: " << ptr->orderbook_id_i << std::endl;
}

void print_ns_inst_series_power_t(ns_inst_series_power_t* ptr) {
    std::cout << "date_delivery_start_s: " << ptr->date_delivery_start_s << std::endl;
    std::cout << "date_delivery_stop_s: " << ptr->date_delivery_stop_s << std::endl;
}

void print_ns_inst_type_basic_t(ns_inst_type_basic_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "min_show_vol_u: " << ptr->min_show_vol_u << std::endl;
    std::cout << "hidden_vol_meth_n: " << ptr->hidden_vol_meth_n << std::endl;
    std::cout << "pub_inf_id_n: " << ptr->pub_inf_id_n << std::endl;
    std::cout << "int_id_s: " << ptr->int_id_s << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "traded_c: " << ptr->traded_c << std::endl;
    std::cout << "directed_trade_information_c: " << ptr->directed_trade_information_c << std::endl;
    std::cout << "public_deal_information_c: " << ptr->public_deal_information_c << std::endl;
    std::cout << "pricing_method_c: " << ptr->pricing_method_c << std::endl;
}

void print_ns_inst_type_co_t(ns_inst_type_co_t* ptr) {
    std::cout << "option_price_limit_factor_i: " << ptr->option_price_limit_factor_i << std::endl;
    std::cout << "trade_report_price_check_c: " << ptr->trade_report_price_check_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_ns_inst_type_secur_t(ns_inst_type_secur_t* ptr) {
    std::cout << "settlement_product_s: " << ptr->settlement_product_s << std::endl;
    std::cout << "maintain_positions_c: " << ptr->maintain_positions_c << std::endl;
    std::cout << "post_trade_proc_c: " << ptr->post_trade_proc_c << std::endl;
    std::cout << "pos_handling_c: " << ptr->pos_handling_c << std::endl;
    std::cout << "pre_novation_collateral_check_c: " << ptr->pre_novation_collateral_check_c << std::endl;
    std::cout << "settlement_type_c: " << ptr->settlement_type_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_ns_pre_trade_limit_t(ns_pre_trade_limit_t* ptr) {
    std::cout << "opt_long_total_credit_q: " << ptr->opt_long_total_credit_q << std::endl;
    std::cout << "opt_short_total_credit_q: " << ptr->opt_short_total_credit_q << std::endl;
    std::cout << "fut_total_buy_credit_q: " << ptr->fut_total_buy_credit_q << std::endl;
    std::cout << "fut_total_sell_credit_q: " << ptr->fut_total_sell_credit_q << std::endl;
    std::cout << "order_rate_limit_i: " << ptr->order_rate_limit_i << std::endl;
    std::cout << "ptl_suffix_s: " << ptr->ptl_suffix_s << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "spons_user_name_s: " << ptr->spons_user_name_s << std::endl;
    std::cout << "sponsored_client_country_id_s: " << ptr->sponsored_client_country_id_s << std::endl;
    std::cout << "sponsored_client_ex_customer_s: " << ptr->sponsored_client_ex_customer_s << std::endl;
    std::cout << "warning_breach_lvl_n: " << ptr->warning_breach_lvl_n << std::endl;
    std::cout << "not_breach_lvl_n: " << ptr->not_breach_lvl_n << std::endl;
    std::cout << "enable_warn_email_c: " << ptr->enable_warn_email_c << std::endl;
    std::cout << "enable_not_email_c: " << ptr->enable_not_email_c << std::endl;
    std::cout << "enable_breach_email_c: " << ptr->enable_breach_email_c << std::endl;
    std::cout << "db_operation_c: " << ptr->db_operation_c << std::endl;
    std::cout << "intraday_c: " << ptr->intraday_c << std::endl;
    std::cout << "valid_from_date_s: " << ptr->valid_from_date_s << std::endl;
    std::cout << "enable_restr_instr_c: " << ptr->enable_restr_instr_c << std::endl;
    std::cout << "enable_def_user_c: " << ptr->enable_def_user_c << std::endl;
    std::cout << "netted_consumption_c: " << ptr->netted_consumption_c << std::endl;
    std::cout << "clearing_part_group_c: " << ptr->clearing_part_group_c << std::endl;
    std::cout << "parent_node_c: " << ptr->parent_node_c << std::endl;
    std::cout << "ptl_blocked_c: " << ptr->ptl_blocked_c << std::endl;
    std::cout << "yyyymmddhhmmss_s: " << ptr->yyyymmddhhmmss_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_ns_pre_trade_limit_coeff_t(ns_pre_trade_limit_coeff_t* ptr) {
    std::cout << "opt_long_coeff_i: " << ptr->opt_long_coeff_i << std::endl;
    std::cout << "opt_short_coeff_i: " << ptr->opt_short_coeff_i << std::endl;
    std::cout << "fut_coeff_i: " << ptr->fut_coeff_i << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "valid_from_date_s: " << ptr->valid_from_date_s << std::endl;
    std::cout << "db_operation_c: " << ptr->db_operation_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_ns_pre_trade_limit_id_t(ns_pre_trade_limit_id_t* ptr) {
    std::cout << "ptl_id_s: " << ptr->ptl_id_s << std::endl;
}

void print_ns_pre_trade_limit_not_t(ns_pre_trade_limit_not_t* ptr) {
    std::cout << "not_email_addr_s: " << ptr->not_email_addr_s << std::endl;
    std::cout << "valid_from_date_s: " << ptr->valid_from_date_s << std::endl;
    std::cout << "db_operation_c: " << ptr->db_operation_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_ns_pre_trade_limit_param_t(ns_pre_trade_limit_param_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "max_order_size_q: " << ptr->max_order_size_q << std::endl;
    std::cout << "open_buy_q: " << ptr->open_buy_q << std::endl;
    std::cout << "open_sell_q: " << ptr->open_sell_q << std::endl;
    std::cout << "traded_bought_q: " << ptr->traded_bought_q << std::endl;
    std::cout << "traded_sold_q: " << ptr->traded_sold_q << std::endl;
    std::cout << "traded_net_q: " << ptr->traded_net_q << std::endl;
    std::cout << "total_buy_q: " << ptr->total_buy_q << std::endl;
    std::cout << "total_sell_q: " << ptr->total_sell_q << std::endl;
    std::cout << "total_net_buy_q: " << ptr->total_net_buy_q << std::endl;
    std::cout << "total_net_sell_q: " << ptr->total_net_sell_q << std::endl;
    std::cout << "price_limit_i: " << ptr->price_limit_i << std::endl;
    std::cout << "pre_trade_limit_param_unit_c: " << ptr->pre_trade_limit_param_unit_c << std::endl;
    std::cout << "valid_from_date_s: " << ptr->valid_from_date_s << std::endl;
    std::cout << "db_operation_c: " << ptr->db_operation_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_ns_pre_trade_limit_user_t(ns_pre_trade_limit_user_t* ptr) {
    std::cout << "user_code: " << ptr->user_code << std::endl;
    std::cout << "valid_from_date_s: " << ptr->valid_from_date_s << std::endl;
    std::cout << "db_operation_c: " << ptr->db_operation_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_ns_price_tick_t(ns_price_tick_t* ptr) {
    std::cout << "tick_size: " << ptr->tick_size << std::endl;
    std::cout << "dec_in_premium_n: " << ptr->dec_in_premium_n << std::endl;
    std::cout << "is_fractions_c: " << ptr->is_fractions_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_ns_remove_t(ns_remove_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
}

void print_ns_report_create_t(ns_report_create_t* ptr) {
    std::cout << "report_name_s: " << ptr->report_name_s << std::endl;
    std::cout << "report_spec_s: " << ptr->report_spec_s << std::endl;
}

void print_ns_report_param_create_t(ns_report_param_create_t* ptr) {
    std::cout << "param_no_n: " << ptr->param_no_n << std::endl;
    std::cout << "param_name_s: " << ptr->param_name_s << std::endl;
    std::cout << "param_type_c: " << ptr->param_type_c << std::endl;
    std::cout << "param_inp_value_c: " << ptr->param_inp_value_c << std::endl;
    std::cout << "param_value_s: " << ptr->param_value_s << std::endl;
}

void print_ns_underlying_basic_t(ns_underlying_basic_t* ptr) {
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "linked_commodity_n: " << ptr->linked_commodity_n << std::endl;
    std::cout << "state_number_n: " << ptr->state_number_n << std::endl;
    std::cout << "dec_in_price_n: " << ptr->dec_in_price_n << std::endl;
    std::cout << "com_id_s: " << ptr->com_id_s << std::endl;
    std::cout << "isin_code_s: " << ptr->isin_code_s << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "base_cur_s: " << ptr->base_cur_s << std::endl;
    std::cout << "deliverable_c: " << ptr->deliverable_c << std::endl;
    std::cout << "underlying_type_c: " << ptr->underlying_type_c << std::endl;
    std::cout << "price_unit_c: " << ptr->price_unit_c << std::endl;
    std::cout << "underlying_status_c: " << ptr->underlying_status_c << std::endl;
    std::cout << "underlying_issuer_s: " << ptr->underlying_issuer_s << std::endl;
    std::cout << "sector_code_s: " << ptr->sector_code_s << std::endl;
    std::cout << "virtual_c: " << ptr->virtual_c << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ext_provider_c: " << ptr->ext_provider_c << std::endl;
    std::cout << "external_id_s: " << ptr->external_id_s << std::endl;
    std::cout << "cur_unit_c: " << ptr->cur_unit_c << std::endl;
    std::cout << "db_operation_c: " << ptr->db_operation_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_ns_underlying_ext1_t(ns_underlying_ext1_t* ptr) {
    std::cout << "subscription_price_i: " << ptr->subscription_price_i << std::endl;
    std::cout << "interest_rate_i: " << ptr->interest_rate_i << std::endl;
    std::cout << "member_circ_numb_s: " << ptr->member_circ_numb_s << std::endl;
    std::cout << "inv_scheme_c: " << ptr->inv_scheme_c << std::endl;
    std::cout << "date_closing_s: " << ptr->date_closing_s << std::endl;
    std::cout << "date_last_s: " << ptr->date_last_s << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_ob_changes_id_t(ob_changes_id_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "changes: " << ptr->changes << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "order_no_id: " << ptr->order_no_id << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
}

void print_ob_changes_no_id_t(ob_changes_no_id_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "changes: " << ptr->changes << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "order_no_id: " << ptr->order_no_id << std::endl;
}

void print_ob_levels_closing_t(ob_levels_closing_t* ptr) {
    std::cout << "closing_price_i: " << ptr->closing_price_i << std::endl;
    std::cout << "open_balance_u: " << ptr->open_balance_u << std::endl;
}

void print_ob_levels_id_t(ob_levels_id_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "block_n: " << ptr->block_n << std::endl;
}

void print_ob_levels_next_query_t(ob_levels_next_query_t* ptr) {
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "instance_c: " << ptr->instance_c << std::endl;
    std::cout << "instance_next_c: " << ptr->instance_next_c << std::endl;
    std::cout << "series_next: " << ptr->series_next << std::endl;
}

void print_ob_levels_order_number_t(ob_levels_order_number_t* ptr) {
    std::cout << "order_number_bid_u: " << ptr->order_number_bid_u << std::endl;
    std::cout << "order_number_ask_u: " << ptr->order_number_ask_u << std::endl;
}

void print_ob_levels_query_data_t(ob_levels_query_data_t* ptr) {
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_ob_levels_total_quantity_t(ob_levels_total_quantity_t* ptr) {
    std::cout << "total_quantity_bid_u: " << ptr->total_quantity_bid_u << std::endl;
    std::cout << "total_quantity_ask_u: " << ptr->total_quantity_ask_u << std::endl;
}

void print_order_change_combined_t(order_change_combined_t* ptr) {
    std::cout << "mp_quantity_i: " << ptr->mp_quantity_i << std::endl;
    std::cout << "total_volume_i: " << ptr->total_volume_i << std::endl;
    std::cout << "item_number_c: " << ptr->item_number_c << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "change_reason_c: " << ptr->change_reason_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_order_chg_sep_trans_ack_t(order_chg_sep_trans_ack_t* ptr) {
    std::cout << "trans_ack_i: " << ptr->trans_ack_i << std::endl;
    std::cout << "order_change_separate: " << ptr->order_change_separate << std::endl;
}

void print_order_info_t(order_info_t* ptr) {
    std::cout << "timestamp_in: " << ptr->timestamp_in << std::endl;
    std::cout << "timestamp_created: " << ptr->timestamp_created << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "order: " << ptr->order << std::endl;
    std::cout << "total_volume_i: " << ptr->total_volume_i << std::endl;
    std::cout << "display_quantity_i: " << ptr->display_quantity_i << std::endl;
    std::cout << "orig_total_volume_i: " << ptr->orig_total_volume_i << std::endl;
    std::cout << "orig_shown_quantity_i: " << ptr->orig_shown_quantity_i << std::endl;
    std::cout << "order_state_u: " << ptr->order_state_u << std::endl;
}

void print_order_leg_trade_info_t(order_leg_trade_info_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "match_id: " << ptr->match_id << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "trade_price_i: " << ptr->trade_price_i << std::endl;
    std::cout << "trade_quantity_i: " << ptr->trade_quantity_i << std::endl;
    std::cout << "item_number_c: " << ptr->item_number_c << std::endl;
    std::cout << "deal_source_c: " << ptr->deal_source_c << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_order_owner_t(order_owner_t* ptr) {
    std::cout << "owner: " << ptr->owner << std::endl;
}

void print_order_price_change_t(order_price_change_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "premium_i: " << ptr->premium_i << std::endl;
    std::cout << "execution_timestamp: " << ptr->execution_timestamp << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "change_reason_c: " << ptr->change_reason_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_order_return_info_t(order_return_info_t* ptr) {
    std::cout << "trans_ack_i: " << ptr->trans_ack_i << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "originator_trading_code: " << ptr->originator_trading_code << std::endl;
    std::cout << "execution_timestamp: " << ptr->execution_timestamp << std::endl;
}

void print_order_state_t(order_state_t* ptr) {
    std::cout << "order_state_u: " << ptr->order_state_u << std::endl;
}

void print_order_status_t(order_status_t* ptr) {
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
    std::cout << "open_close_req_c: " << ptr->open_close_req_c << std::endl;
    std::cout << "premium_i: " << ptr->premium_i << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "orig_shown_quantity_i: " << ptr->orig_shown_quantity_i << std::endl;
    std::cout << "orig_total_volume_i: " << ptr->orig_total_volume_i << std::endl;
    std::cout << "rem_quantity_i: " << ptr->rem_quantity_i << std::endl;
    std::cout << "transaction_number_n: " << ptr->transaction_number_n << std::endl;
    std::cout << "exch_order_type_n: " << ptr->exch_order_type_n << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "ex_client_s: " << ptr->ex_client_s << std::endl;
    std::cout << "order_type_c: " << ptr->order_type_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_order_submitter_t(order_submitter_t* ptr) {
    std::cout << "submitter: " << ptr->submitter << std::endl;
}

void print_order_trade_info_t(order_trade_info_t* ptr) {
    std::cout << "match_id: " << ptr->match_id << std::endl;
    std::cout << "trade_price_i: " << ptr->trade_price_i << std::endl;
    std::cout << "trade_quantity_i: " << ptr->trade_quantity_i << std::endl;
    std::cout << "item_number_c: " << ptr->item_number_c << std::endl;
    std::cout << "deal_source_c: " << ptr->deal_source_c << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_order_trans_t(order_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
}

void print_otc_base_trade_report_t(otc_base_trade_report_t* ptr) {
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "give_up_account: " << ptr->give_up_account << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "passthrough_s: " << ptr->passthrough_s << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "asof_date_s: " << ptr->asof_date_s << std::endl;
    std::cout << "participant_info_s: " << ptr->participant_info_s << std::endl;
    std::cout << "name_s: " << ptr->name_s << std::endl;
    std::cout << "bought_or_sold_c: " << ptr->bought_or_sold_c << std::endl;
    std::cout << "trade_report_category_c: " << ptr->trade_report_category_c << std::endl;
    std::cout << "private_match_field_s: " << ptr->private_match_field_s << std::endl;
    std::cout << "give_up_text_s: " << ptr->give_up_text_s << std::endl;
    std::cout << "filler_4_s: " << ptr->filler_4_s << std::endl;
}

void print_otc_cash_flow_base_t(otc_cash_flow_base_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "description_s: " << ptr->description_s << std::endl;
    std::cout << "sequence_number_i: " << ptr->sequence_number_i << std::endl;
}

void print_otc_cash_flow_info_t(otc_cash_flow_info_t* ptr) {
    std::cout << "trade_report_nbr_q: " << ptr->trade_report_nbr_q << std::endl;
    std::cout << "notional_amount_q: " << ptr->notional_amount_q << std::endl;
    std::cout << "consideration_u: " << ptr->consideration_u << std::endl;
    std::cout << "interest_rate_i: " << ptr->interest_rate_i << std::endl;
    std::cout << "spread_i: " << ptr->spread_i << std::endl;
    std::cout << "dec_in_nominal_n: " << ptr->dec_in_nominal_n << std::endl;
    std::cout << "dec_in_consideration_n: " << ptr->dec_in_consideration_n << std::endl;
    std::cout << "dec_in_rate_n: " << ptr->dec_in_rate_n << std::endl;
    std::cout << "dec_in_spread_n: " << ptr->dec_in_spread_n << std::endl;
    std::cout << "days_in_period_n: " << ptr->days_in_period_n << std::endl;
    std::cout << "days_per_year_n: " << ptr->days_per_year_n << std::endl;
    std::cout << "passthrough_s: " << ptr->passthrough_s << std::endl;
    std::cout << "start_date_s: " << ptr->start_date_s << std::endl;
    std::cout << "end_date_s: " << ptr->end_date_s << std::endl;
    std::cout << "payment_date_s: " << ptr->payment_date_s << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "fixed_or_float_c: " << ptr->fixed_or_float_c << std::endl;
    std::cout << "pay_or_receive_c: " << ptr->pay_or_receive_c << std::endl;
    std::cout << "otc_cash_flow_type_c: " << ptr->otc_cash_flow_type_c << std::endl;
    std::cout << "business_day_conv_c: " << ptr->business_day_conv_c << std::endl;
    std::cout << "basis_swap_relation_c: " << ptr->basis_swap_relation_c << std::endl;
    std::cout << "reset_date_s: " << ptr->reset_date_s << std::endl;
    std::cout << "fixing_value_i: " << ptr->fixing_value_i << std::endl;
    std::cout << "trade_clearing_date: " << ptr->trade_clearing_date << std::endl;
    std::cout << "sequence_number_i: " << ptr->sequence_number_i << std::endl;
    std::cout << "accumulated_consideration_q: " << ptr->accumulated_consideration_q << std::endl;
    std::cout << "estimated_accumulated_consideration_q: " << ptr->estimated_accumulated_consideration_q << std::endl;
    std::cout << "estimated_consideration_date_s: " << ptr->estimated_consideration_date_s << std::endl;
    std::cout << "is_flow_reset_c: " << ptr->is_flow_reset_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_otc_clearing_info_t(otc_clearing_info_t* ptr) {
    std::cout << "position_account: " << ptr->position_account << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "orig_clearing_date_s: " << ptr->orig_clearing_date_s << std::endl;
}

void print_otc_fra_data_t(otc_fra_data_t* ptr) {
    std::cout << "float_rate_series: " << ptr->float_rate_series << std::endl;
    std::cout << "fixed_consideration_q: " << ptr->fixed_consideration_q << std::endl;
    std::cout << "float_consideration_q: " << ptr->float_consideration_q << std::endl;
    std::cout << "pay_amount_q: " << ptr->pay_amount_q << std::endl;
    std::cout << "float_interest_rate_i: " << ptr->float_interest_rate_i << std::endl;
}

void print_otc_fra_trade_report_t(otc_fra_trade_report_t* ptr) {
    std::cout << "float_rate_index: " << ptr->float_rate_index << std::endl;
    std::cout << "notional_amount_q: " << ptr->notional_amount_q << std::endl;
    std::cout << "fixed_interest_rate_i: " << ptr->fixed_interest_rate_i << std::endl;
    std::cout << "float_rate_fixing_date_s: " << ptr->float_rate_fixing_date_s << std::endl;
    std::cout << "date_termination_s: " << ptr->date_termination_s << std::endl;
    std::cout << "day_count_conv_c: " << ptr->day_count_conv_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_otc_give_up_info_t(otc_give_up_info_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "give_up_number_i: " << ptr->give_up_number_i << std::endl;
    std::cout << "give_up_text_s: " << ptr->give_up_text_s << std::endl;
    std::cout << "take_up_or_reject_text_s: " << ptr->take_up_or_reject_text_s << std::endl;
}

void print_otc_give_up_state_t(otc_give_up_state_t* ptr) {
    std::cout << "give_up_state_c: " << ptr->give_up_state_c << std::endl;
    std::cout << "give_up_sub_state_c: " << ptr->give_up_sub_state_c << std::endl;
    std::cout << "give_up_reason_c: " << ptr->give_up_reason_c << std::endl;
}

void print_otc_irs_data_t(otc_irs_data_t* ptr) {
    std::cout << "flow_version_n: " << ptr->flow_version_n << std::endl;
    std::cout << "delivery_unit_date_s: " << ptr->delivery_unit_date_s << std::endl;
    std::cout << "termination_state_c: " << ptr->termination_state_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_otc_irs_trade_report_t(otc_irs_trade_report_t* ptr) {
    std::cout << "upfront: " << ptr->upfront << std::endl;
    std::cout << "date_termination_s: " << ptr->date_termination_s << std::endl;
    std::cout << "notional_amount_q: " << ptr->notional_amount_q << std::endl;
    std::cout << "business_day_conv_c: " << ptr->business_day_conv_c << std::endl;
    std::cout << "rate_reset_c: " << ptr->rate_reset_c << std::endl;
    std::cout << "reset_days_c: " << ptr->reset_days_c << std::endl;
    std::cout << "payment_set_c: " << ptr->payment_set_c << std::endl;
}

void print_otc_operation_info_t(otc_operation_info_t* ptr) {
    std::cout << "sequence_number_i: " << ptr->sequence_number_i << std::endl;
    std::cout << "trade_operation_c: " << ptr->trade_operation_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_otc_option_t(otc_option_t* ptr) {
    std::cout << "opt_series: " << ptr->opt_series << std::endl;
    std::cout << "premium_settlement_date_s: " << ptr->premium_settlement_date_s << std::endl;
    std::cout << "premium_i: " << ptr->premium_i << std::endl;
    std::cout << "expiration_date_s: " << ptr->expiration_date_s << std::endl;
    std::cout << "bought_or_sold_c: " << ptr->bought_or_sold_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_otc_trade_t(otc_trade_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "pos_account: " << ptr->pos_account << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trade_report_number_q: " << ptr->trade_report_number_q << std::endl;
    std::cout << "trade_quantity_i: " << ptr->trade_quantity_i << std::endl;
    std::cout << "trade_price_i: " << ptr->trade_price_i << std::endl;
    std::cout << "trade_clean_price: " << ptr->trade_clean_price << std::endl;
    std::cout << "bought_or_sold_c: " << ptr->bought_or_sold_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_otc_trade_operation_t(otc_trade_operation_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "trade_report_number_q: " << ptr->trade_report_number_q << std::endl;
    std::cout << "party_trade_report_number_q: " << ptr->party_trade_report_number_q << std::endl;
    std::cout << "trade_operation_number_q: " << ptr->trade_operation_number_q << std::endl;
    std::cout << "participant_info_s: " << ptr->participant_info_s << std::endl;
    std::cout << "trade_report_state_c: " << ptr->trade_report_state_c << std::endl;
    std::cout << "trade_report_sub_state_c: " << ptr->trade_report_sub_state_c << std::endl;
    std::cout << "trade_report_reason_c: " << ptr->trade_report_reason_c << std::endl;
    std::cout << "trade_operation_c: " << ptr->trade_operation_c << std::endl;
}

void print_otc_trade_report_data_t(otc_trade_report_data_t* ptr) {
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "user_code: " << ptr->user_code << std::endl;
    std::cout << "auth_by_whom: " << ptr->auth_by_whom << std::endl;
    std::cout << "delivery_unit_u: " << ptr->delivery_unit_u << std::endl;
    std::cout << "trade_report_type_i: " << ptr->trade_report_type_i << std::endl;
    std::cout << "trade_report_nbr_q: " << ptr->trade_report_nbr_q << std::endl;
    std::cout << "party_trade_report_nbr_q: " << ptr->party_trade_report_nbr_q << std::endl;
    std::cout << "sequence_number_i: " << ptr->sequence_number_i << std::endl;
    std::cout << "netting_req_nbr_u: " << ptr->netting_req_nbr_u << std::endl;
    std::cout << "pay_calc_req_nbr_u: " << ptr->pay_calc_req_nbr_u << std::endl;
    std::cout << "deal_number_i: " << ptr->deal_number_i << std::endl;
    std::cout << "trade_report_version_n: " << ptr->trade_report_version_n << std::endl;
    std::cout << "timestamp_date_s: " << ptr->timestamp_date_s << std::endl;
    std::cout << "timestamp_time_s: " << ptr->timestamp_time_s << std::endl;
    std::cout << "isin_code_s: " << ptr->isin_code_s << std::endl;
    std::cout << "trade_report_state_c: " << ptr->trade_report_state_c << std::endl;
    std::cout << "trade_report_sub_state_c: " << ptr->trade_report_sub_state_c << std::endl;
    std::cout << "trade_report_reason_c: " << ptr->trade_report_reason_c << std::endl;
    std::cout << "authorization_state_c: " << ptr->authorization_state_c << std::endl;
    std::cout << "reported_by: " << ptr->reported_by << std::endl;
    std::cout << "affirmation_state_c: " << ptr->affirmation_state_c << std::endl;
    std::cout << "affirmed_by: " << ptr->affirmed_by << std::endl;
    std::cout << "trade_type_c: " << ptr->trade_type_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_pay_note_info_ready_t(pay_note_info_ready_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "info_type_i: " << ptr->info_type_i << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "sent_date_s: " << ptr->sent_date_s << std::endl;
    std::cout << "sent_time_s: " << ptr->sent_time_s << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_position_closeout_t(position_closeout_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_position_closeout_status_t(position_closeout_status_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_price_2_trans_t(price_2_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "bid_premium_i: " << ptr->bid_premium_i << std::endl;
    std::cout << "ask_premium_i: " << ptr->ask_premium_i << std::endl;
    std::cout << "order_number_bid_u: " << ptr->order_number_bid_u << std::endl;
    std::cout << "order_number_ask_u: " << ptr->order_number_ask_u << std::endl;
    std::cout << "bid_quantity_i: " << ptr->bid_quantity_i << std::endl;
    std::cout << "ask_quantity_i: " << ptr->ask_quantity_i << std::endl;
    std::cout << "block_n: " << ptr->block_n << std::endl;
    std::cout << "time_validity_n: " << ptr->time_validity_n << std::endl;
    std::cout << "ex_client_s: " << ptr->ex_client_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_price_depth_t(price_depth_t* ptr) {
    std::cout << "price_i: " << ptr->price_i << std::endl;
    std::cout << "price_depth_position_c: " << ptr->price_depth_position_c << std::endl;
    std::cout << "price_depth_operator_c: " << ptr->price_depth_operator_c << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_price_depth_delete_levels_t(price_depth_delete_levels_t* ptr) {
    std::cout << "price_depth_position_c: " << ptr->price_depth_position_c << std::endl;
    std::cout << "levels_to_delete_c: " << ptr->levels_to_delete_c << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_price_depth_series_t(price_depth_series_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "synchronization_number_u: " << ptr->synchronization_number_u << std::endl;
    std::cout << "block_n: " << ptr->block_n << std::endl;
    std::cout << "premium_levels_c: " << ptr->premium_levels_c << std::endl;
    std::cout << "demands_populated_c: " << ptr->demands_populated_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "reserved1_u: " << ptr->reserved1_u << std::endl;
}

void print_price_depth_tot_orders_t(price_depth_tot_orders_t* ptr) {
    std::cout << "total_no_of_bid_orders_u: " << ptr->total_no_of_bid_orders_u << std::endl;
    std::cout << "total_no_of_ask_orders_u: " << ptr->total_no_of_ask_orders_u << std::endl;
}

void print_price_depth_with_orders_t(price_depth_with_orders_t* ptr) {
    std::cout << "price_i: " << ptr->price_i << std::endl;
    std::cout << "no_of_orders_u: " << ptr->no_of_orders_u << std::endl;
    std::cout << "price_depth_position_c: " << ptr->price_depth_position_c << std::endl;
    std::cout << "price_depth_operator_c: " << ptr->price_depth_operator_c << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_price_depth_with_volume_t(price_depth_with_volume_t* ptr) {
    std::cout << "price_i: " << ptr->price_i << std::endl;
    std::cout << "quantity_u: " << ptr->quantity_u << std::endl;
    std::cout << "hidden_quantity_c: " << ptr->hidden_quantity_c << std::endl;
    std::cout << "price_depth_position_c: " << ptr->price_depth_position_c << std::endl;
    std::cout << "price_depth_operator_c: " << ptr->price_depth_operator_c << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
}

void print_price_depth_with_volume_orders_t(price_depth_with_volume_orders_t* ptr) {
    std::cout << "price_i: " << ptr->price_i << std::endl;
    std::cout << "quantity_u: " << ptr->quantity_u << std::endl;
    std::cout << "no_of_orders_u: " << ptr->no_of_orders_u << std::endl;
    std::cout << "hidden_quantity_c: " << ptr->hidden_quantity_c << std::endl;
    std::cout << "price_depth_position_c: " << ptr->price_depth_position_c << std::endl;
    std::cout << "price_depth_operator_c: " << ptr->price_depth_operator_c << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
}

void print_price_limit_trigger_t(price_limit_trigger_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "timestamp: " << ptr->timestamp << std::endl;
    std::cout << "lower_limit_i: " << ptr->lower_limit_i << std::endl;
    std::cout << "upper_limit_i: " << ptr->upper_limit_i << std::endl;
    std::cout << "next_lower_limit_i: " << ptr->next_lower_limit_i << std::endl;
    std::cout << "next_upper_limit_i: " << ptr->next_upper_limit_i << std::endl;
    std::cout << "cool_off_time_i: " << ptr->cool_off_time_i << std::endl;
    std::cout << "tier_c: " << ptr->tier_c << std::endl;
    std::cout << "price_limit_unit_c: " << ptr->price_limit_unit_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_price_trans_t(price_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
}

void print_price_trans_p_t(price_trans_p_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
}

void print_private_price_list_id_t(private_price_list_id_t* ptr) {
    std::cout << "private_price_list_id_s: " << ptr->private_price_list_id_s << std::endl;
}

void print_quantity_condition_t(quantity_condition_t* ptr) {
    std::cout << "minimum_quantity_i: " << ptr->minimum_quantity_i << std::endl;
}

void print_query_aat_connection_t(query_aat_connection_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "connect_type_c: " << ptr->connect_type_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
    std::cout << "search_id_s: " << ptr->search_id_s << std::endl;
}

void print_query_account_t(query_account_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "query_on_date_c: " << ptr->query_on_date_c << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_query_account_fee_type_t(query_account_fee_type_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_account_prop_t(query_account_prop_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_account_type_t(query_account_type_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_account_type_rule_t(query_account_type_rule_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_acc_access_type_t(query_acc_access_type_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "ex_user_code: " << ptr->ex_user_code << std::endl;
    std::cout << "acc_access_type_s: " << ptr->acc_access_type_s << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "only_wildcard_i: " << ptr->only_wildcard_i << std::endl;
}

void print_query_acc_access_type_ext_t(query_acc_access_type_ext_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "key: " << ptr->key << std::endl;
}

void print_query_amended_trades_t(query_amended_trades_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_api_delivery_t(query_api_delivery_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "from_date_s: " << ptr->from_date_s << std::endl;
    std::cout << "sequence_first_i: " << ptr->sequence_first_i << std::endl;
    std::cout << "to_date_s: " << ptr->to_date_s << std::endl;
    std::cout << "sequence_last_i: " << ptr->sequence_last_i << std::endl;
}

void print_query_api_give_up_t(query_api_give_up_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "from_date_s: " << ptr->from_date_s << std::endl;
    std::cout << "sequence_first_i: " << ptr->sequence_first_i << std::endl;
    std::cout << "to_date_s: " << ptr->to_date_s << std::endl;
    std::cout << "sequence_last_i: " << ptr->sequence_last_i << std::endl;
}

void print_query_api_trade_t(query_api_trade_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "from_date_s: " << ptr->from_date_s << std::endl;
    std::cout << "sequence_first_i: " << ptr->sequence_first_i << std::endl;
    std::cout << "to_date_s: " << ptr->to_date_s << std::endl;
    std::cout << "sequence_last_i: " << ptr->sequence_last_i << std::endl;
}

void print_query_authorized_report_t(query_authorized_report_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_query_average_price_trade_t(query_average_price_trade_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "trade_number_i: " << ptr->trade_number_i << std::endl;
}

void print_query_bi26_signals_sent_t(query_bi26_signals_sent_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_bi26_signals_sent_cl_t(query_bi26_signals_sent_cl_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_bi27_broadcasts_sent_t(query_bi27_broadcasts_sent_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "sent_date_s: " << ptr->sent_date_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_bi73_signals_sent_t(query_bi73_signals_sent_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "seq_num_srm_n: " << ptr->seq_num_srm_n << std::endl;
}

void print_query_bi7_signals_sent_t(query_bi7_signals_sent_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "seq_num_srm_n: " << ptr->seq_num_srm_n << std::endl;
}

void print_query_bi7_signals_sent_cl_t(query_bi7_signals_sent_cl_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "seq_num_srm_n: " << ptr->seq_num_srm_n << std::endl;
}

void print_query_bi81_broadcasts_sent_t(query_bi81_broadcasts_sent_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "message_information_type_c: " << ptr->message_information_type_c << std::endl;
    std::cout << "message_priority_c: " << ptr->message_priority_c << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "from_sequence_number_u: " << ptr->from_sequence_number_u << std::endl;
    std::cout << "to_sequence_number_u: " << ptr->to_sequence_number_u << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
    std::cout << "update_status_note_c: " << ptr->update_status_note_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_query_block_size_t(query_block_size_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
}

void print_query_broker_t(query_broker_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_query_business_date_t(query_business_date_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
}

void print_query_central_group_t(query_central_group_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_clearing_date_t(query_clearing_date_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
}

void print_query_clearing_date_ext_t(query_clearing_date_ext_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_closeout_log_t(query_closeout_log_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "series_id_s: " << ptr->series_id_s << std::endl;
    std::cout << "from_date_s: " << ptr->from_date_s << std::endl;
    std::cout << "from_time_s: " << ptr->from_time_s << std::endl;
    std::cout << "to_date_s: " << ptr->to_date_s << std::endl;
    std::cout << "to_time_s: " << ptr->to_time_s << std::endl;
}

void print_query_collateral_t(query_collateral_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "series_id_s: " << ptr->series_id_s << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "collateral_type_c: " << ptr->collateral_type_c << std::endl;
    std::cout << "state_c: " << ptr->state_c << std::endl;
}

void print_query_collateral_evaluation_run_t(query_collateral_evaluation_run_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "margin_account: " << ptr->margin_account << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "valuation_date_s: " << ptr->valuation_date_s << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "from_time_s: " << ptr->from_time_s << std::endl;
    std::cout << "to_time_s: " << ptr->to_time_s << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "collateral_evaluation_type_c: " << ptr->collateral_evaluation_type_c << std::endl;
    std::cout << "is_final_c: " << ptr->is_final_c << std::endl;
    std::cout << "is_intraday_c: " << ptr->is_intraday_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_query_collateral_information_t(query_collateral_information_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "margin_account: " << ptr->margin_account << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "valuation_date_s: " << ptr->valuation_date_s << std::endl;
    std::cout << "request_nbr_u: " << ptr->request_nbr_u << std::endl;
}

void print_query_collateral_transaction_t(query_collateral_transaction_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "collateral_account: " << ptr->collateral_account << std::endl;
    std::cout << "instruction_nbr_u: " << ptr->instruction_nbr_u << std::endl;
    std::cout << "coll_payment_nbr_u: " << ptr->coll_payment_nbr_u << std::endl;
    std::cout << "ext_coll_payment_nbr_u: " << ptr->ext_coll_payment_nbr_u << std::endl;
    std::cout << "from_date_s: " << ptr->from_date_s << std::endl;
    std::cout << "to_date_s: " << ptr->to_date_s << std::endl;
    std::cout << "from_time_s: " << ptr->from_time_s << std::endl;
    std::cout << "to_time_s: " << ptr->to_time_s << std::endl;
    std::cout << "instr_ref_s: " << ptr->instr_ref_s << std::endl;
    std::cout << "cancel_ref_s: " << ptr->cancel_ref_s << std::endl;
    std::cout << "series_id_s: " << ptr->series_id_s << std::endl;
    std::cout << "account_number_s: " << ptr->account_number_s << std::endl;
    std::cout << "bic_code_s: " << ptr->bic_code_s << std::endl;
    std::cout << "clh_bank_account_number_s: " << ptr->clh_bank_account_number_s << std::endl;
    std::cout << "clh_bank_bic_code_s: " << ptr->clh_bank_bic_code_s << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "collateral_transaction_type_c: " << ptr->collateral_transaction_type_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_query_collateral_transaction_specific_version_t(query_collateral_transaction_specific_version_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "collateral_transaction_nbr_q: " << ptr->collateral_transaction_nbr_q << std::endl;
    std::cout << "request_nbr_u: " << ptr->request_nbr_u << std::endl;
    std::cout << "valuation_date_s: " << ptr->valuation_date_s << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_collateral_transaction_version_t(query_collateral_transaction_version_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "collateral_transaction_nbr_q: " << ptr->collateral_transaction_nbr_q << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_collateral_version_t(query_collateral_version_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "collateral_nbr_q: " << ptr->collateral_nbr_q << std::endl;
}

void print_query_coll_val_per_series_t(query_coll_val_per_series_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "collateral_account: " << ptr->collateral_account << std::endl;
    std::cout << "margin_account: " << ptr->margin_account << std::endl;
    std::cout << "request_nbr_u: " << ptr->request_nbr_u << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "series_id_s: " << ptr->series_id_s << std::endl;
    std::cout << "valuation_date_s: " << ptr->valuation_date_s << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_coll_val_per_val_group_t(query_coll_val_per_val_group_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "margin_account: " << ptr->margin_account << std::endl;
    std::cout << "request_nbr_u: " << ptr->request_nbr_u << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "vag_id_s: " << ptr->vag_id_s << std::endl;
    std::cout << "valuation_date_s: " << ptr->valuation_date_s << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_combo_t(query_combo_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_commission_t(query_commission_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "send_receive_c: " << ptr->send_receive_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_query_conf_give_up_req_items_t(query_conf_give_up_req_items_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "give_up_number_i: " << ptr->give_up_number_i << std::endl;
}

void print_query_converted_series_t(query_converted_series_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "adjust_ident_n: " << ptr->adjust_ident_n << std::endl;
}

void print_query_cool_off_period_ended_t(query_cool_off_period_ended_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "only_this_series_c: " << ptr->only_this_series_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_query_corp_action_t(query_corp_action_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_currency_t(query_currency_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_currency_ranking_t(query_currency_ranking_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "key: " << ptr->key << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_currency_ranking_accounts_t(query_currency_ranking_accounts_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "participant: " << ptr->participant << std::endl;
    std::cout << "currency_ranking_id_s: " << ptr->currency_ranking_id_s << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_currency_ranking_connections_t(query_currency_ranking_connections_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_deal_source_t(query_deal_source_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_delta_t(query_delta_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "download_ref_number_q: " << ptr->download_ref_number_q << std::endl;
    std::cout << "full_answer_timestamp: " << ptr->full_answer_timestamp << std::endl;
}

void print_query_delta_limit_trans_t(query_delta_limit_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "only_this_series_c: " << ptr->only_this_series_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_query_dh_margin_components_t(query_dh_margin_components_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "sequence_number_n: " << ptr->sequence_number_n << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "run_type_c: " << ptr->run_type_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_query_error_msg_t(query_error_msg_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "error_id_u: " << ptr->error_id_u << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "from_date_s: " << ptr->from_date_s << std::endl;
    std::cout << "to_date_s: " << ptr->to_date_s << std::endl;
    std::cout << "from_time_s: " << ptr->from_time_s << std::endl;
    std::cout << "to_time_s: " << ptr->to_time_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_exception_days_t(query_exception_days_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_exchange_dq24_t(query_exchange_dq24_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_exchange_rate_t(query_exchange_rate_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_exercise_req_t(query_exercise_req_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_fixing_dates_t(query_fixing_dates_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
}

void print_query_fixing_val_t(query_fixing_val_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_give_up_request_t(query_give_up_request_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "ext_trade_number_u: " << ptr->ext_trade_number_u << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "state_c: " << ptr->state_c << std::endl;
    std::cout << "buy_or_sell_c: " << ptr->buy_or_sell_c << std::endl;
    std::cout << "send_or_receive_c: " << ptr->send_or_receive_c << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "series_id_s: " << ptr->series_id_s << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "give_up_text_s: " << ptr->give_up_text_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_greeks_t(query_greeks_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "intra_day2_c: " << ptr->intra_day2_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "marg_run_nbr_n: " << ptr->marg_run_nbr_n << std::endl;
    std::cout << "marg_call_nbr_n: " << ptr->marg_call_nbr_n << std::endl;
}

void print_query_haircut_t(query_haircut_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_hdr_t(query_hdr_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
}

void print_query_instrument_t(query_instrument_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_instrument_class_t(query_instrument_class_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_instrument_group_t(query_instrument_group_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_instrument_status_t(query_instrument_status_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "state_level_e: " << ptr->state_level_e << std::endl;
}

void print_query_limit_trans_t(query_limit_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "only_this_series_c: " << ptr->only_this_series_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_query_list_ver_t(query_list_ver_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "report_version_s: " << ptr->report_version_s << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "info_type_i: " << ptr->info_type_i << std::endl;
}

void print_query_list_ver_nrs_t(query_list_ver_nrs_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "file_name_s: " << ptr->file_name_s << std::endl;
}

void print_query_manual_payments_t(query_manual_payments_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
}

void print_query_margin_acc_t(query_margin_acc_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "cust_bank_id_s: " << ptr->cust_bank_id_s << std::endl;
}

void print_query_margin_collateral_evaluation_sgx_t(query_margin_collateral_evaluation_sgx_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "margin_account: " << ptr->margin_account << std::endl;
    std::cout << "request_nbr_u: " << ptr->request_nbr_u << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "valuation_date_s: " << ptr->valuation_date_s << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_query_margin_data_used_t(query_margin_data_used_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "intra_day2_c: " << ptr->intra_day2_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "marg_run_nbr_n: " << ptr->marg_run_nbr_n << std::endl;
    std::cout << "marg_call_nbr_n: " << ptr->marg_call_nbr_n << std::endl;
}

void print_query_margin_detail_t(query_margin_detail_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "intra_day2_c: " << ptr->intra_day2_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "marg_run_nbr_n: " << ptr->marg_run_nbr_n << std::endl;
    std::cout << "marg_call_nbr_n: " << ptr->marg_call_nbr_n << std::endl;
}

void print_query_margin_ext_t(query_margin_ext_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_margin_mem_t(query_margin_mem_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_margin_pa_acc_t(query_margin_pa_acc_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "cust_bank_id_s: " << ptr->cust_bank_id_s << std::endl;
}

void print_query_margin_prop_t(query_margin_prop_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "intra_day2_c: " << ptr->intra_day2_c << std::endl;
    std::cout << "incl_marg_calc_acc_c: " << ptr->incl_marg_calc_acc_c << std::endl;
    std::cout << "marg_run_nbr_n: " << ptr->marg_run_nbr_n << std::endl;
    std::cout << "marg_call_nbr_n: " << ptr->marg_call_nbr_n << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
}

void print_query_margin_requirement_account_t(query_margin_requirement_account_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "mra_account: " << ptr->mra_account << std::endl;
    std::cout << "sequence_number_n: " << ptr->sequence_number_n << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "run_type_c: " << ptr->run_type_c << std::endl;
    std::cout << "instrument_or_risk_currency_c: " << ptr->instrument_or_risk_currency_c << std::endl;
}

void print_query_margin_results_internal_t(query_margin_results_internal_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "margin_date_s: " << ptr->margin_date_s << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "sequence_number_n: " << ptr->sequence_number_n << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "run_type_rm_internal_c: " << ptr->run_type_rm_internal_c << std::endl;
    std::cout << "margin_calculation_type_c: " << ptr->margin_calculation_type_c << std::endl;
}

void print_query_margin_series_param_t(query_margin_series_param_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_margin_series_param_ext_t(query_margin_series_param_ext_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "intra_day2_c: " << ptr->intra_day2_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "marg_run_nbr_n: " << ptr->marg_run_nbr_n << std::endl;
    std::cout << "marg_call_nbr_n: " << ptr->marg_call_nbr_n << std::endl;
}

void print_query_margin_ulg_price_t(query_margin_ulg_price_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_marg_calc_runs_t(query_marg_calc_runs_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "run_type_c: " << ptr->run_type_c << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_query_marg_sim_add_trade_t(query_marg_sim_add_trade_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "sub_user_s: " << ptr->sub_user_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_market_t(query_market_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_member_obligation_t(query_member_obligation_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "on_behalf_of_type_c: " << ptr->on_behalf_of_type_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_query_missing_collateral_transaction_t(query_missing_collateral_transaction_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "sequence_first_i: " << ptr->sequence_first_i << std::endl;
    std::cout << "sequence_last_i: " << ptr->sequence_last_i << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
}

void print_query_missing_delivery_t(query_missing_delivery_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "sequence_first_i: " << ptr->sequence_first_i << std::endl;
    std::cout << "sequence_last_i: " << ptr->sequence_last_i << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
}

void print_query_missing_give_up_t(query_missing_give_up_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "sequence_first_i: " << ptr->sequence_first_i << std::endl;
    std::cout << "sequence_last_i: " << ptr->sequence_last_i << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
}

void print_query_missing_trade_t(query_missing_trade_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "sequence_first_i: " << ptr->sequence_first_i << std::endl;
    std::cout << "sequence_last_i: " << ptr->sequence_last_i << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
}

void print_query_missing_trade_change_t(query_missing_trade_change_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "instance_c: " << ptr->instance_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "sequence_first_i: " << ptr->sequence_first_i << std::endl;
    std::cout << "sequence_last_i: " << ptr->sequence_last_i << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
}

void print_query_mm_protection_t(query_mm_protection_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_non_trading_days_t(query_non_trading_days_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_non_trad_settl_days_t(query_non_trad_settl_days_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_open_interest_t(query_open_interest_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_open_interest_ext_t(query_open_interest_ext_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
}

void print_query_order_private_filter_t(query_order_private_filter_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
    std::cout << "whose: " << ptr->whose << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "order_filter_i: " << ptr->order_filter_i << std::endl;
    std::cout << "stp_key_i: " << ptr->stp_key_i << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_query_order_private_filter_p_t(query_order_private_filter_p_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
    std::cout << "whose: " << ptr->whose << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "order_filter_i: " << ptr->order_filter_i << std::endl;
    std::cout << "stp_key_i: " << ptr->stp_key_i << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_query_partition_t(query_partition_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_paynote_info_t(query_paynote_info_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "pay_note_number_i: " << ptr->pay_note_number_i << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
}

void print_query_position_t(query_position_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_position_history_t(query_position_history_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
}

void print_query_pos_level_t(query_pos_level_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "series_id_s: " << ptr->series_id_s << std::endl;
    std::cout << "summary_i: " << ptr->summary_i << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "account_type_s: " << ptr->account_type_s << std::endl;
    std::cout << "level_type_i: " << ptr->level_type_i << std::endl;
}

void print_query_prel_settlement_t(query_prel_settlement_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "settlement_price_type_c: " << ptr->settlement_price_type_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_query_pre_trade_limit_t(query_pre_trade_limit_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_price_limit_trigger_t(query_price_limit_trigger_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "only_this_series_c: " << ptr->only_this_series_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_query_realtime_ulg_price_t(query_realtime_ulg_price_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_rectify_d_t(query_rectify_d_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_rectify_d_cont_t(query_rectify_d_cont_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "rectify_deal_number_q: " << ptr->rectify_deal_number_q << std::endl;
}

void print_query_rectify_t_t(query_rectify_t_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "instance_c: " << ptr->instance_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
}

void print_query_rectify_t_cont_t(query_rectify_t_cont_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "rectify_trade_number_i: " << ptr->rectify_trade_number_i << std::endl;
}

void print_query_report_nrs_t(query_report_nrs_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "report_no_i: " << ptr->report_no_i << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "ex_customer_s: " << ptr->ex_customer_s << std::endl;
    std::cout << "report_spec_s: " << ptr->report_spec_s << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "only_account_reports_c: " << ptr->only_account_reports_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_query_report_ver_t(query_report_ver_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "info_type_i: " << ptr->info_type_i << std::endl;
}

void print_query_risk_margin_scaling_factor_t(query_risk_margin_scaling_factor_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "sequence_number_n: " << ptr->sequence_number_n << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "run_type_c: " << ptr->run_type_c << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_query_risk_margin_scaling_factor_internal_t(query_risk_margin_scaling_factor_internal_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "sequence_number_n: " << ptr->sequence_number_n << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "run_type_c: " << ptr->run_type_c << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_query_rm_margin_sim_t(query_rm_margin_sim_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "qry_segment_number_n: " << ptr->qry_segment_number_n << std::endl;
    std::cout << "last_qry_segment_c: " << ptr->last_qry_segment_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
}

void print_query_rm_param_obj_t(query_rm_param_obj_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "series_id_s: " << ptr->series_id_s << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "sequence_number_n: " << ptr->sequence_number_n << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "margin_class_s: " << ptr->margin_class_s << std::endl;
    std::cout << "run_type_c: " << ptr->run_type_c << std::endl;
    std::cout << "margin_class_filter_c: " << ptr->margin_class_filter_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_query_segment_hdr_t(query_segment_hdr_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_series_t(query_series_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_settlement_instruction_t(query_settlement_instruction_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "bank_id_s: " << ptr->bank_id_s << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "int_id_s: " << ptr->int_id_s << std::endl;
    std::cout << "ssi_type_c: " << ptr->ssi_type_c << std::endl;
    std::cout << "ssi_id_q: " << ptr->ssi_id_q << std::endl;
    std::cout << "tax_code_c: " << ptr->tax_code_c << std::endl;
    std::cout << "clh_account_info_only_c: " << ptr->clh_account_info_only_c << std::endl;
    std::cout << "clh_account_id_s: " << ptr->clh_account_id_s << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_query_simulate_fee_t(query_simulate_fee_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "deal_price_i: " << ptr->deal_price_i << std::endl;
    std::cout << "deal_quantity_i: " << ptr->deal_quantity_i << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "open_close_req_c: " << ptr->open_close_req_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_state_type_t(query_state_type_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_tot_equil_prices_t(query_tot_equil_prices_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_tot_ob_t(query_tot_ob_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "only_this_series_c: " << ptr->only_this_series_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_tot_order_t(query_tot_order_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "whose: " << ptr->whose << std::endl;
    std::cout << "stp_key_i: " << ptr->stp_key_i << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "order_index_u: " << ptr->order_index_u << std::endl;
}

void print_query_tot_party_t(query_tot_party_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_query_trade_report_otc_t(query_trade_report_otc_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "from_date_s: " << ptr->from_date_s << std::endl;
    std::cout << "to_date_s: " << ptr->to_date_s << std::endl;
    std::cout << "passthrough_s: " << ptr->passthrough_s << std::endl;
    std::cout << "series_id_s: " << ptr->series_id_s << std::endl;
    std::cout << "trade_report_type_i: " << ptr->trade_report_type_i << std::endl;
    std::cout << "trade_report_state_c: " << ptr->trade_report_state_c << std::endl;
    std::cout << "bought_or_sold_c: " << ptr->bought_or_sold_c << std::endl;
    std::cout << "date_span_type_c: " << ptr->date_span_type_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_query_trade_report_types_t(query_trade_report_types_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_trade_statistics_t(query_trade_statistics_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_trade_ticker_t(query_trade_ticker_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
    std::cout << "timestamp: " << ptr->timestamp << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_trading_state_t(query_trading_state_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_underlying_t(query_underlying_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_underlying_adjustment_t(query_underlying_adjustment_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "date_adjust_s: " << ptr->date_adjust_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_updated_pos_info_t(query_updated_pos_info_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "search_series: " << ptr->search_series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "modified_date_s: " << ptr->modified_date_s << std::endl;
    std::cout << "modified_time_s: " << ptr->modified_time_s << std::endl;
}

void print_query_used_marg_params_t(query_used_marg_params_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "sequence_number_n: " << ptr->sequence_number_n << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "margin_class_s: " << ptr->margin_class_s << std::endl;
    std::cout << "run_type_c: " << ptr->run_type_c << std::endl;
    std::cout << "margin_class_filter_c: " << ptr->margin_class_filter_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_query_user_type_info_t(query_user_type_info_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_query_valuation_group_t(query_valuation_group_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_ranking_time_t(ranking_time_t* ptr) {
    std::cout << "timestamp_ranking: " << ptr->timestamp_ranking << std::endl;
}

void print_rectify_deal_t(rectify_deal_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "instance_c: " << ptr->instance_c << std::endl;
    std::cout << "operation_c: " << ptr->operation_c << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "other_series: " << ptr->other_series << std::endl;
    std::cout << "deal_price_i: " << ptr->deal_price_i << std::endl;
    std::cout << "deal_number_i: " << ptr->deal_number_i << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_rectify_otc_trade_report_t(rectify_otc_trade_report_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trade_report_nbr_q: " << ptr->trade_report_nbr_q << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
}

void print_rectify_trade_t(rectify_trade_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trade_number_i: " << ptr->trade_number_i << std::endl;
    std::cout << "items_c: " << ptr->items_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_register_account_t(register_account_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "store_account: " << ptr->store_account << std::endl;
}

void print_reject_give_up_request_t(reject_give_up_request_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "give_up_number_i: " << ptr->give_up_number_i << std::endl;
    std::cout << "give_up_text_s: " << ptr->give_up_text_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_report_marginable_spread_rm_t(report_marginable_spread_rm_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
}

void print_report_ready_t(report_ready_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "report_no_i: " << ptr->report_no_i << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "report_spec_s: " << ptr->report_spec_s << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "as_of_date_s: " << ptr->as_of_date_s << std::endl;
    std::cout << "sent_date_s: " << ptr->sent_date_s << std::endl;
    std::cout << "sent_time_s: " << ptr->sent_time_s << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_reserve_order_t(reserve_order_t* ptr) {
    std::cout << "display_quantity_i: " << ptr->display_quantity_i << std::endl;
    std::cout << "original_display_quantity_i: " << ptr->original_display_quantity_i << std::endl;
}

void print_restore_position_t(restore_position_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "closeout_qty_i: " << ptr->closeout_qty_i << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
}

void print_risk_exposure_limit_vim_t(risk_exposure_limit_vim_t* ptr) {
    std::cout << "mra_account: " << ptr->mra_account << std::endl;
    std::cout << "trade_report_nbr_q: " << ptr->trade_report_nbr_q << std::endl;
    std::cout << "margin_requirement_q: " << ptr->margin_requirement_q << std::endl;
    std::cout << "margin_requirement_without_trade_q: " << ptr->margin_requirement_without_trade_q << std::endl;
    std::cout << "exposure_limit_q: " << ptr->exposure_limit_q << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_risk_scale_t(risk_scale_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "risk_margin_scaling_factor_n: " << ptr->risk_margin_scaling_factor_n << std::endl;
    std::cout << "country_id_s: " << ptr->country_id_s << std::endl;
    std::cout << "mar_id_s: " << ptr->mar_id_s << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_rm_margin_simulation_t(rm_margin_simulation_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "pos_sim_c: " << ptr->pos_sim_c << std::endl;
    std::cout << "price_sim_c: " << ptr->price_sim_c << std::endl;
    std::cout << "vol_sim_c: " << ptr->vol_sim_c << std::endl;
    std::cout << "output_level_c: " << ptr->output_level_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "date_s: " << ptr->date_s << std::endl;
    std::cout << "series_exp_today_sim_c: " << ptr->series_exp_today_sim_c << std::endl;
    std::cout << "fut_pl_sim_c: " << ptr->fut_pl_sim_c << std::endl;
    std::cout << "sub_user_s: " << ptr->sub_user_s << std::endl;
    std::cout << "margin_class_s: " << ptr->margin_class_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_rm_margin_sim_del_t(rm_margin_sim_del_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "market_margin_q: " << ptr->market_margin_q << std::endl;
    std::cout << "market_currency_s: " << ptr->market_currency_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "nbr_held_q: " << ptr->nbr_held_q << std::endl;
    std::cout << "nbr_written_q: " << ptr->nbr_written_q << std::endl;
    std::cout << "market_value_q: " << ptr->market_value_q << std::endl;
    std::cout << "price_spread_margin_q: " << ptr->price_spread_margin_q << std::endl;
    std::cout << "naked_margin_q: " << ptr->naked_margin_q << std::endl;
}

void print_rm_margin_sim_failure_reason_t(rm_margin_sim_failure_reason_t* ptr) {
    std::cout << "failure_reason_s: " << ptr->failure_reason_s << std::endl;
}

void print_rm_margin_sim_markets_t(rm_margin_sim_markets_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
}

void print_rm_margin_sim_oms2_ivl_t(rm_margin_sim_oms2_ivl_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "val_ivl_mid_i: " << ptr->val_ivl_mid_i << std::endl;
    std::cout << "val_ivl_low_i: " << ptr->val_ivl_low_i << std::endl;
    std::cout << "val_ivl_high_i: " << ptr->val_ivl_high_i << std::endl;
    std::cout << "dec_in_ivl_n: " << ptr->dec_in_ivl_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_rm_margin_sim_pay_t(rm_margin_sim_pay_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "market_margin_q: " << ptr->market_margin_q << std::endl;
    std::cout << "market_currency_s: " << ptr->market_currency_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "naked_margin_q: " << ptr->naked_margin_q << std::endl;
}

void print_rm_margin_sim_pos_t(rm_margin_sim_pos_t* ptr) {
    std::cout << "market_margin_q: " << ptr->market_margin_q << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "nbr_held_q: " << ptr->nbr_held_q << std::endl;
    std::cout << "nbr_written_q: " << ptr->nbr_written_q << std::endl;
    std::cout << "market_value_q: " << ptr->market_value_q << std::endl;
    std::cout << "price_spread_margin_q: " << ptr->price_spread_margin_q << std::endl;
    std::cout << "naked_margin_q: " << ptr->naked_margin_q << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
}

void print_rm_margin_sim_prices_t(rm_margin_sim_prices_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "bid_price_i: " << ptr->bid_price_i << std::endl;
    std::cout << "ask_price_i: " << ptr->ask_price_i << std::endl;
    std::cout << "marg_price_i: " << ptr->marg_price_i << std::endl;
    std::cout << "fixing_value_i: " << ptr->fixing_value_i << std::endl;
    std::cout << "margin_one_long_q: " << ptr->margin_one_long_q << std::endl;
    std::cout << "margin_one_short_q: " << ptr->margin_one_short_q << std::endl;
    std::cout << "dec_in_price_n: " << ptr->dec_in_price_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_rm_margin_sim_repo_trades_t(rm_margin_sim_repo_trades_t* ptr) {
    std::cout << "pos_account: " << ptr->pos_account << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "sim_qty_q: " << ptr->sim_qty_q << std::endl;
    std::cout << "clean_price_i: " << ptr->clean_price_i << std::endl;
    std::cout << "repo_rate_i: " << ptr->repo_rate_i << std::endl;
    std::cout << "item_type_c: " << ptr->item_type_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_rm_margin_sim_settl_t(rm_margin_sim_settl_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "market_margin_q: " << ptr->market_margin_q << std::endl;
    std::cout << "market_currency_s: " << ptr->market_currency_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "nbr_held_q: " << ptr->nbr_held_q << std::endl;
    std::cout << "nbr_written_q: " << ptr->nbr_written_q << std::endl;
    std::cout << "market_value_q: " << ptr->market_value_q << std::endl;
    std::cout << "price_spread_margin_q: " << ptr->price_spread_margin_q << std::endl;
    std::cout << "naked_margin_q: " << ptr->naked_margin_q << std::endl;
}

void print_rm_margin_sim_sum_t(rm_margin_sim_sum_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "market_margin_q: " << ptr->market_margin_q << std::endl;
    std::cout << "risk_margin_q: " << ptr->risk_margin_q << std::endl;
    std::cout << "market_currency_s: " << ptr->market_currency_s << std::endl;
    std::cout << "risk_currency_s: " << ptr->risk_currency_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_rm_margin_sim_sum_pay_ulg_t(rm_margin_sim_sum_pay_ulg_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "market_margin_q: " << ptr->market_margin_q << std::endl;
    std::cout << "market_currency_s: " << ptr->market_currency_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_rm_margin_sim_sum_pos_ulg_t(rm_margin_sim_sum_pos_ulg_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "market_margin_q: " << ptr->market_margin_q << std::endl;
    std::cout << "market_currency_s: " << ptr->market_currency_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "naked_margin_q: " << ptr->naked_margin_q << std::endl;
    std::cout << "marg_price_i: " << ptr->marg_price_i << std::endl;
    std::cout << "dec_in_price_n: " << ptr->dec_in_price_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_rm_margin_sim_trades_t(rm_margin_sim_trades_t* ptr) {
    std::cout << "item_type_c: " << ptr->item_type_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "sim_qty_q: " << ptr->sim_qty_q << std::endl;
    std::cout << "trade_price_sim_i: " << ptr->trade_price_sim_i << std::endl;
    std::cout << "reserved_i: " << ptr->reserved_i << std::endl;
    std::cout << "closing_date_s: " << ptr->closing_date_s << std::endl;
    std::cout << "date_settlement_s: " << ptr->date_settlement_s << std::endl;
    std::cout << "reserved_8_s: " << ptr->reserved_8_s << std::endl;
}

void print_rm_margin_sim_trades_account_t(rm_margin_sim_trades_account_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
}

void print_rm_margin_sim_vola_t(rm_margin_sim_vola_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "vol_ivl_long_mid_i: " << ptr->vol_ivl_long_mid_i << std::endl;
    std::cout << "vol_ivl_short_mid_i: " << ptr->vol_ivl_short_mid_i << std::endl;
    std::cout << "vol_ivl_long_low_i: " << ptr->vol_ivl_long_low_i << std::endl;
    std::cout << "vol_ivl_short_low_i: " << ptr->vol_ivl_short_low_i << std::endl;
    std::cout << "vol_ivl_long_high_i: " << ptr->vol_ivl_long_high_i << std::endl;
    std::cout << "vol_ivl_short_high_i: " << ptr->vol_ivl_short_high_i << std::endl;
    std::cout << "margin_one_short_q: " << ptr->margin_one_short_q << std::endl;
}

void print_rpt_service_t(rpt_service_t* ptr) {
    std::cout << "report_system_event_c: " << ptr->report_system_event_c << std::endl;
    std::cout << "service_description_s: " << ptr->service_description_s << std::endl;
    std::cout << "subsystem_c: " << ptr->subsystem_c << std::endl;
}

void print_run_info_t(run_info_t* ptr) {
    std::cout << "request_nbr_u: " << ptr->request_nbr_u << std::endl;
    std::cout << "margin_sequence_nbr_u: " << ptr->margin_sequence_nbr_u << std::endl;
    std::cout << "valuation_date_s: " << ptr->valuation_date_s << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "margin_date_s: " << ptr->margin_date_s << std::endl;
    std::cout << "margin_time_s: " << ptr->margin_time_s << std::endl;
    std::cout << "clh_id_s: " << ptr->clh_id_s << std::endl;
    std::cout << "collateral_evaluation_type_c: " << ptr->collateral_evaluation_type_c << std::endl;
    std::cout << "create_direct_debit_c: " << ptr->create_direct_debit_c << std::endl;
    std::cout << "intraday_evaluation_c: " << ptr->intraday_evaluation_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_security_t(security_t* ptr) {
    std::cout << "collateral_base: " << ptr->collateral_base << std::endl;
    std::cout << "security_type_c: " << ptr->security_type_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_segment_instance_number_t(segment_instance_number_t* ptr) {
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "instance_c: " << ptr->instance_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "sequence_number_u: " << ptr->sequence_number_u << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
}

void print_sequence_number_info_t(sequence_number_info_t* ptr) {
    std::cout << "sequence_number_n: " << ptr->sequence_number_n << std::endl;
}

void print_sequence_number_info_int_t(sequence_number_info_int_t* ptr) {
    std::cout << "created_clearing_date_s: " << ptr->created_clearing_date_s << std::endl;
    std::cout << "modified_clearing_date_s: " << ptr->modified_clearing_date_s << std::endl;
}

void print_series_bo_multi_update_bu1009_t(series_bo_multi_update_bu1009_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_series_bo_update_bu9_t(series_bo_update_bu9_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "chg_type_n: " << ptr->chg_type_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "da9: " << ptr->da9 << std::endl;
}

void print_series_multi_update_bu1002_t(series_multi_update_bu1002_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_series_update_bu2_t(series_update_bu2_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "chg_type_n: " << ptr->chg_type_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "da2: " << ptr->da2 << std::endl;
}

void print_settlement_instruction_info_t(settlement_instruction_info_t* ptr) {
    std::cout << "account_number_s: " << ptr->account_number_s << std::endl;
    std::cout << "account_name_s: " << ptr->account_name_s << std::endl;
    std::cout << "bic_code_s: " << ptr->bic_code_s << std::endl;
    std::cout << "aba_number_s: " << ptr->aba_number_s << std::endl;
    std::cout << "clh_bank_account_number_s: " << ptr->clh_bank_account_number_s << std::endl;
    std::cout << "clh_bank_account_name_s: " << ptr->clh_bank_account_name_s << std::endl;
    std::cout << "clh_bank_bic_code_s: " << ptr->clh_bank_bic_code_s << std::endl;
    std::cout << "intermediary_bic_code_s: " << ptr->intermediary_bic_code_s << std::endl;
    std::cout << "intermediary_bank_name_s: " << ptr->intermediary_bank_name_s << std::endl;
    std::cout << "bank_id_s: " << ptr->bank_id_s << std::endl;
    std::cout << "clh_bank_id_s: " << ptr->clh_bank_id_s << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_settle_price_update_t(settle_price_update_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_set_delta_limit_trans_t(set_delta_limit_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "item: " << ptr->item << std::endl;
}

void print_set_deny_exercise_t(set_deny_exercise_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "deny_exercise_q: " << ptr->deny_exercise_q << std::endl;
}

void print_set_mm_protection_t(set_mm_protection_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "da87: " << ptr->da87 << std::endl;
}

void print_single_order_insert_t(single_order_insert_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
}

void print_single_order_update_t(single_order_update_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
}

void print_srs_cfm_param_t(srs_cfm_param_t* ptr) {
    std::cout << "cfm_id_s: " << ptr->cfm_id_s << std::endl;
    std::cout << "vol_int_down_i: " << ptr->vol_int_down_i << std::endl;
    std::cout << "vol_int_up_i: " << ptr->vol_int_up_i << std::endl;
}

void print_srs_dh_param_t(srs_dh_param_t* ptr) {
    std::cout << "down_int_scan_q: " << ptr->down_int_scan_q << std::endl;
    std::cout << "up_int_scan_q: " << ptr->up_int_scan_q << std::endl;
    std::cout << "deliv_charge_spreads_rm_q: " << ptr->deliv_charge_spreads_rm_q << std::endl;
    std::cout << "deliv_charge_outrights_rm_q: " << ptr->deliv_charge_outrights_rm_q << std::endl;
    std::cout << "vol_down_rm_i: " << ptr->vol_down_rm_i << std::endl;
    std::cout << "vol_up_rm_i: " << ptr->vol_up_rm_i << std::endl;
    std::cout << "delta_scale_fac_rm_i: " << ptr->delta_scale_fac_rm_i << std::endl;
    std::cout << "down_int_3t_rm_n: " << ptr->down_int_3t_rm_n << std::endl;
    std::cout << "up_int_3t_rm_n: " << ptr->up_int_3t_rm_n << std::endl;
    std::cout << "dhg_id_s: " << ptr->dhg_id_s << std::endl;
    std::cout << "cco_id_s: " << ptr->cco_id_s << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_srs_marg_param_t(srs_marg_param_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "margin_class_s: " << ptr->margin_class_s << std::endl;
    std::cout << "marg_meth_inst_c: " << ptr->marg_meth_inst_c << std::endl;
}

void print_srs_oms2_param_t(srs_oms2_param_t* ptr) {
    std::cout << "oms_id_s: " << ptr->oms_id_s << std::endl;
    std::cout << "window_class_id_s: " << ptr->window_class_id_s << std::endl;
    std::cout << "val_int_down_i: " << ptr->val_int_down_i << std::endl;
    std::cout << "val_int_up_i: " << ptr->val_int_up_i << std::endl;
    std::cout << "vol_int_down_i: " << ptr->vol_int_down_i << std::endl;
    std::cout << "vol_int_up_i: " << ptr->vol_int_up_i << std::endl;
}

void print_srs_pri_param_t(srs_pri_param_t* ptr) {
    std::cout << "ppr_id_s: " << ptr->ppr_id_s << std::endl;
    std::cout << "dividend_yield_i: " << ptr->dividend_yield_i << std::endl;
    std::cout << "risk_free_rate_i: " << ptr->risk_free_rate_i << std::endl;
    std::cout << "fixed_vol_rm_i: " << ptr->fixed_vol_rm_i << std::endl;
}

void print_standard_settlement_instruction_details_t(standard_settlement_instruction_details_t* ptr) {
    std::cout << "account: " << ptr->account << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "version_n: " << ptr->version_n << std::endl;
    std::cout << "ssi_type_c: " << ptr->ssi_type_c << std::endl;
    std::cout << "state_c: " << ptr->state_c << std::endl;
    std::cout << "ssi_id_q: " << ptr->ssi_id_q << std::endl;
    std::cout << "bank_id_s: " << ptr->bank_id_s << std::endl;
    std::cout << "int_id_s: " << ptr->int_id_s << std::endl;
    std::cout << "bank_name_s: " << ptr->bank_name_s << std::endl;
    std::cout << "bic_code_s: " << ptr->bic_code_s << std::endl;
    std::cout << "account_number_s: " << ptr->account_number_s << std::endl;
    std::cout << "account_name_s: " << ptr->account_name_s << std::endl;
    std::cout << "currency_s: " << ptr->currency_s << std::endl;
    std::cout << "clh_account_id_s: " << ptr->clh_account_id_s << std::endl;
    std::cout << "aba_number_s: " << ptr->aba_number_s << std::endl;
    std::cout << "tax_code_c: " << ptr->tax_code_c << std::endl;
    std::cout << "created_date_s: " << ptr->created_date_s << std::endl;
    std::cout << "created_time_s: " << ptr->created_time_s << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_standard_trade_report_t(standard_trade_report_t* ptr) {
    std::cout << "quantity_i: " << ptr->quantity_i << std::endl;
    std::cout << "premium_i: " << ptr->premium_i << std::endl;
    std::cout << "filler_8_s: " << ptr->filler_8_s << std::endl;
    std::cout << "customer_info_s: " << ptr->customer_info_s << std::endl;
    std::cout << "open_close_req_c: " << ptr->open_close_req_c << std::endl;
    std::cout << "ext_t_state_c: " << ptr->ext_t_state_c << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "time_of_agreement_date_s: " << ptr->time_of_agreement_date_s << std::endl;
    std::cout << "time_of_agreement_time_s: " << ptr->time_of_agreement_time_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "match_id: " << ptr->match_id << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
}

void print_stop_order_trans_t(stop_order_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "stop_series: " << ptr->stop_series << std::endl;
    std::cout << "limit_premium_i: " << ptr->limit_premium_i << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "total_volume_i: " << ptr->total_volume_i << std::endl;
}

void print_stop_order_trans_p_t(stop_order_trans_p_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "stop_series: " << ptr->stop_series << std::endl;
    std::cout << "limit_premium_i: " << ptr->limit_premium_i << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "total_volume_i: " << ptr->total_volume_i << std::endl;
}

void print_sub_item_hdr_t(sub_item_hdr_t* ptr) {
    std::cout << "named_struct_n: " << ptr->named_struct_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
}

void print_suspend_resume_trading_t(suspend_resume_trading_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "on_off_c: " << ptr->on_off_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_time_in_force_t(time_in_force_t* ptr) {
    std::cout << "time_validity_n: " << ptr->time_validity_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_tm_trade_rpt_trans_t(tm_trade_rpt_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "commodity_n: " << ptr->commodity_n << std::endl;
    std::cout << "expiration_date_n: " << ptr->expiration_date_n << std::endl;
    std::cout << "strike_price_i: " << ptr->strike_price_i << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
}

void print_trade_report_1_trans_t(trade_report_1_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "time_of_agreement_date_s: " << ptr->time_of_agreement_date_s << std::endl;
    std::cout << "time_of_agreement_time_s: " << ptr->time_of_agreement_time_s << std::endl;
    std::cout << "deferred_publication_c: " << ptr->deferred_publication_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_trade_report_1_trans_p_t(trade_report_1_trans_p_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "trading_code: " << ptr->trading_code << std::endl;
    std::cout << "order_var: " << ptr->order_var << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "exchange_info_s: " << ptr->exchange_info_s << std::endl;
    std::cout << "give_up_member: " << ptr->give_up_member << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "time_of_agreement_date_s: " << ptr->time_of_agreement_date_s << std::endl;
    std::cout << "time_of_agreement_time_s: " << ptr->time_of_agreement_time_s << std::endl;
    std::cout << "deferred_publication_c: " << ptr->deferred_publication_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_trade_report_2_trans_t(trade_report_2_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "mp_quantity_i: " << ptr->mp_quantity_i << std::endl;
    std::cout << "premium_i: " << ptr->premium_i << std::endl;
    std::cout << "block_n: " << ptr->block_n << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "time_of_agreement_date_s: " << ptr->time_of_agreement_date_s << std::endl;
    std::cout << "time_of_agreement_time_s: " << ptr->time_of_agreement_time_s << std::endl;
    std::cout << "ext_t_state_c: " << ptr->ext_t_state_c << std::endl;
    std::cout << "deferred_publication_c: " << ptr->deferred_publication_c << std::endl;
    std::cout << "bid_side: " << ptr->bid_side << std::endl;
    std::cout << "ask_side: " << ptr->ask_side << std::endl;
}

void print_trade_report_base_t(trade_report_base_t* ptr) {
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "party: " << ptr->party << std::endl;
    std::cout << "order_number_u: " << ptr->order_number_u << std::endl;
    std::cout << "premium_i: " << ptr->premium_i << std::endl;
    std::cout << "quantity_i: " << ptr->quantity_i << std::endl;
    std::cout << "bid_or_ask_c: " << ptr->bid_or_ask_c << std::endl;
    std::cout << "trade_report_type: " << ptr->trade_report_type << std::endl;
    std::cout << "time_of_agreement_date_s: " << ptr->time_of_agreement_date_s << std::endl;
    std::cout << "time_of_agreement_time_s: " << ptr->time_of_agreement_time_s << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "deferred_publication_c: " << ptr->deferred_publication_c << std::endl;
    std::cout << "ob_command_c: " << ptr->ob_command_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_trade_report_trade_ticker_t(trade_report_trade_ticker_t* ptr) {
    std::cout << "trade_report_type: " << ptr->trade_report_type << std::endl;
    std::cout << "settlement_date_s: " << ptr->settlement_date_s << std::endl;
    std::cout << "time_of_agreement_date_s: " << ptr->time_of_agreement_date_s << std::endl;
    std::cout << "time_of_agreement_time_s: " << ptr->time_of_agreement_time_s << std::endl;
    std::cout << "outside_info_spread_c: " << ptr->outside_info_spread_c << std::endl;
}

void print_trade_report_trans_t(trade_report_trans_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "mp_quantity_i: " << ptr->mp_quantity_i << std::endl;
    std::cout << "premium_i: " << ptr->premium_i << std::endl;
    std::cout << "block_n: " << ptr->block_n << std::endl;
    std::cout << "ext_t_state_c: " << ptr->ext_t_state_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
    std::cout << "bid_side: " << ptr->bid_side << std::endl;
    std::cout << "ask_side: " << ptr->ask_side << std::endl;
}

void print_trade_ticker_amend_t(trade_ticker_amend_t* ptr) {
    std::cout << "execution_event_nbr_u: " << ptr->execution_event_nbr_u << std::endl;
    std::cout << "match_group_nbr_u: " << ptr->match_group_nbr_u << std::endl;
    std::cout << "trade_state_c: " << ptr->trade_state_c << std::endl;
    std::cout << "include_in_statistics_c: " << ptr->include_in_statistics_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_trans_segment_hdr_t(trans_segment_hdr_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "items_n: " << ptr->items_n << std::endl;
    std::cout << "size_n: " << ptr->size_n << std::endl;
    std::cout << "segment_number_n: " << ptr->segment_number_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_trigger_on_session_order_t(trigger_on_session_order_t* ptr) {
    std::cout << "session_type_id_n: " << ptr->session_type_id_n << std::endl;
    std::cout << "time_validity_n: " << ptr->time_validity_n << std::endl;
}

void print_trigger_order_t(trigger_order_t* ptr) {
    std::cout << "stop_series: " << ptr->stop_series << std::endl;
    std::cout << "limit_premium_i: " << ptr->limit_premium_i << std::endl;
    std::cout << "time_validity_n: " << ptr->time_validity_n << std::endl;
    std::cout << "stop_condition_c: " << ptr->stop_condition_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
}

void print_underlying_update_bu4_bu19_t(underlying_update_bu4_bu19_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "chg_type_n: " << ptr->chg_type_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "da4_da19: " << ptr->da4_da19 << std::endl;
}

void print_undo_info_ready_t(undo_info_ready_t* ptr) {
    std::cout << "broadcast_type: " << ptr->broadcast_type << std::endl;
    std::cout << "info_type_i: " << ptr->info_type_i << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "business_date_s: " << ptr->business_date_s << std::endl;
    std::cout << "clearing_date_s: " << ptr->clearing_date_s << std::endl;
    std::cout << "sent_date_s: " << ptr->sent_date_s << std::endl;
    std::cout << "sent_time_s: " << ptr->sent_time_s << std::endl;
    std::cout << "seq_num_srm_n: " << ptr->seq_num_srm_n << std::endl;
}

void print_used_comb_com_group_params_t(used_comb_com_group_params_t* ptr) {
    std::cout << "ccg_id_s: " << ptr->ccg_id_s << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "credit_rate_rm_i: " << ptr->credit_rate_rm_i << std::endl;
    std::cout << "tier_1_rm_n: " << ptr->tier_1_rm_n << std::endl;
    std::cout << "tier_2_rm_n: " << ptr->tier_2_rm_n << std::endl;
    std::cout << "tier_3_rm_n: " << ptr->tier_3_rm_n << std::endl;
    std::cout << "tier_4_rm_n: " << ptr->tier_4_rm_n << std::endl;
    std::cout << "priority_n: " << ptr->priority_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "cco_id_1_s: " << ptr->cco_id_1_s << std::endl;
    std::cout << "cco_id_2_s: " << ptr->cco_id_2_s << std::endl;
    std::cout << "cco_id_3_s: " << ptr->cco_id_3_s << std::endl;
    std::cout << "cco_id_4_s: " << ptr->cco_id_4_s << std::endl;
    std::cout << "ds_ratio_1_rm_i: " << ptr->ds_ratio_1_rm_i << std::endl;
    std::cout << "ds_ratio_2_rm_i: " << ptr->ds_ratio_2_rm_i << std::endl;
    std::cout << "ds_ratio_3_rm_i: " << ptr->ds_ratio_3_rm_i << std::endl;
    std::cout << "ds_ratio_4_rm_i: " << ptr->ds_ratio_4_rm_i << std::endl;
    std::cout << "a_or_b_1_rm_c: " << ptr->a_or_b_1_rm_c << std::endl;
    std::cout << "a_or_b_2_rm_c: " << ptr->a_or_b_2_rm_c << std::endl;
    std::cout << "a_or_b_3_rm_c: " << ptr->a_or_b_3_rm_c << std::endl;
    std::cout << "a_or_b_4_rm_c: " << ptr->a_or_b_4_rm_c << std::endl;
}

void print_used_comb_com_params_t(used_comb_com_params_t* ptr) {
    std::cout << "short_opt_min_charge_i: " << ptr->short_opt_min_charge_i << std::endl;
    std::cout << "init_to_maint_speculator_rm_i: " << ptr->init_to_maint_speculator_rm_i << std::endl;
    std::cout << "init_to_maint_omnibus_rm_i: " << ptr->init_to_maint_omnibus_rm_i << std::endl;
    std::cout << "init_to_maint_hedge_rm_i: " << ptr->init_to_maint_hedge_rm_i << std::endl;
    std::cout << "cco_id_s: " << ptr->cco_id_s << std::endl;
    std::cout << "tie_id_s: " << ptr->tie_id_s << std::endl;
    std::cout << "irm_id_s: " << ptr->irm_id_s << std::endl;
    std::cout << "ccg_id_s: " << ptr->ccg_id_s << std::endl;
    std::cout << "ic_tie_id_s: " << ptr->ic_tie_id_s << std::endl;
    std::cout << "risk_expo_rm_c: " << ptr->risk_expo_rm_c << std::endl;
    std::cout << "limit_opt_rm_c: " << ptr->limit_opt_rm_c << std::endl;
    std::cout << "written_opt_rm_c: " << ptr->written_opt_rm_c << std::endl;
    std::cout << "exp_month_in_rpf_rm_c: " << ptr->exp_month_in_rpf_rm_c << std::endl;
    std::cout << "granularity_c: " << ptr->granularity_c << std::endl;
    std::cout << "filler_6_s: " << ptr->filler_6_s << std::endl;
}

void print_used_delta_hedge_params_t(used_delta_hedge_params_t* ptr) {
    std::cout << "dhg_id_s: " << ptr->dhg_id_s << std::endl;
    std::cout << "extr_move_cov_rm_i: " << ptr->extr_move_cov_rm_i << std::endl;
    std::cout << "offset_days_zero_risk_rm_i: " << ptr->offset_days_zero_risk_rm_i << std::endl;
    std::cout << "erosion_rm_i: " << ptr->erosion_rm_i << std::endl;
    std::cout << "er_trd_days_in_year_rm_i: " << ptr->er_trd_days_in_year_rm_i << std::endl;
    std::cout << "offset_days_intr_rm_n: " << ptr->offset_days_intr_rm_n << std::endl;
    std::cout << "offset_days_end_rm_n: " << ptr->offset_days_end_rm_n << std::endl;
    std::cout << "val_interv_base_scan_c: " << ptr->val_interv_base_scan_c << std::endl;
    std::cout << "dec_in_risk_array_c: " << ptr->dec_in_risk_array_c << std::endl;
    std::cout << "cap_neg_scenario_price_c: " << ptr->cap_neg_scenario_price_c << std::endl;
    std::cout << "zero_risk_till_exp_date_rm_c: " << ptr->zero_risk_till_exp_date_rm_c << std::endl;
    std::cout << "incl_opt_prem_rm_c: " << ptr->incl_opt_prem_rm_c << std::endl;
    std::cout << "backtest_phys_del_rm_c: " << ptr->backtest_phys_del_rm_c << std::endl;
    std::cout << "base_for_adjustment_c: " << ptr->base_for_adjustment_c << std::endl;
    std::cout << "deliv_margin_rm_c: " << ptr->deliv_margin_rm_c << std::endl;
    std::cout << "paym_margin_rm_c: " << ptr->paym_margin_rm_c << std::endl;
    std::cout << "base_offset_days_rm_c: " << ptr->base_offset_days_rm_c << std::endl;
    std::cout << "val_interv_type_scan_c: " << ptr->val_interv_type_scan_c << std::endl;
    std::cout << "vol_interv_type_rm_c: " << ptr->vol_interv_type_rm_c << std::endl;
    std::cout << "time_dep_base_dhg_c: " << ptr->time_dep_base_dhg_c << std::endl;
    std::cout << "incl_in_seq_nbr_change_c: " << ptr->incl_in_seq_nbr_change_c << std::endl;
    std::cout << "reference_date_dhg_c: " << ptr->reference_date_dhg_c << std::endl;
    std::cout << "reference_time_of_day_c: " << ptr->reference_time_of_day_c << std::endl;
    std::cout << "interpolation_rm_c: " << ptr->interpolation_rm_c << std::endl;
    std::cout << "filler_3_s: " << ptr->filler_3_s << std::endl;
}

void print_used_global_risk_marg_class_t(used_global_risk_marg_class_t* ptr) {
    std::cout << "pgr_id_s: " << ptr->pgr_id_s << std::endl;
    std::cout << "mrg_id_s: " << ptr->mrg_id_s << std::endl;
}

void print_used_global_risk_params_t(used_global_risk_params_t* ptr) {
    std::cout << "pgr_id_s: " << ptr->pgr_id_s << std::endl;
    std::cout << "default_currency_s: " << ptr->default_currency_s << std::endl;
    std::cout << "exchange_complex_s: " << ptr->exchange_complex_s << std::endl;
    std::cout << "risk_file_exchange_acronym_s: " << ptr->risk_file_exchange_acronym_s << std::endl;
    std::cout << "risk_file_exchange_code_s: " << ptr->risk_file_exchange_code_s << std::endl;
    std::cout << "gross_marg_meth_intra_c: " << ptr->gross_marg_meth_intra_c << std::endl;
    std::cout << "filler_1_s: " << ptr->filler_1_s << std::endl;
    std::cout << "iter_max_no_i: " << ptr->iter_max_no_i << std::endl;
    std::cout << "iter_accuracy_q: " << ptr->iter_accuracy_q << std::endl;
    std::cout << "margin_offset_limit_n: " << ptr->margin_offset_limit_n << std::endl;
    std::cout << "dec_in_accuracy_n: " << ptr->dec_in_accuracy_n << std::endl;
    std::cout << "time_steps_n: " << ptr->time_steps_n << std::endl;
    std::cout << "dec_in_delta_weight_n: " << ptr->dec_in_delta_weight_n << std::endl;
    std::cout << "incl_expiring_series_c: " << ptr->incl_expiring_series_c << std::endl;
    std::cout << "create_riskparam_file_c: " << ptr->create_riskparam_file_c << std::endl;
    std::cout << "decimal_composit_delta_c: " << ptr->decimal_composit_delta_c << std::endl;
    std::cout << "gross_marg_meth_c: " << ptr->gross_marg_meth_c << std::endl;
    std::cout << "delta_weight_1_i: " << ptr->delta_weight_1_i << std::endl;
    std::cout << "delta_weight_2_i: " << ptr->delta_weight_2_i << std::endl;
    std::cout << "delta_weight_3_i: " << ptr->delta_weight_3_i << std::endl;
    std::cout << "delta_weight_4_i: " << ptr->delta_weight_4_i << std::endl;
    std::cout << "delta_weight_5_i: " << ptr->delta_weight_5_i << std::endl;
    std::cout << "delta_weight_6_i: " << ptr->delta_weight_6_i << std::endl;
    std::cout << "delta_weight_7_i: " << ptr->delta_weight_7_i << std::endl;
    std::cout << "delta_weight_8_i: " << ptr->delta_weight_8_i << std::endl;
    std::cout << "delta_weight_9_i: " << ptr->delta_weight_9_i << std::endl;
    std::cout << "delta_weight_10_i: " << ptr->delta_weight_10_i << std::endl;
    std::cout << "delta_weight_11_i: " << ptr->delta_weight_11_i << std::endl;
    std::cout << "delta_weight_12_i: " << ptr->delta_weight_12_i << std::endl;
    std::cout << "delta_weight_13_i: " << ptr->delta_weight_13_i << std::endl;
    std::cout << "delta_weight_14_i: " << ptr->delta_weight_14_i << std::endl;
    std::cout << "delta_weight_15_i: " << ptr->delta_weight_15_i << std::endl;
    std::cout << "delta_weight_16_i: " << ptr->delta_weight_16_i << std::endl;
}

void print_used_inter_month_spread_t(used_inter_month_spread_t* ptr) {
    std::cout << "irm_id_s: " << ptr->irm_id_s << std::endl;
    std::cout << "priority_n: " << ptr->priority_n << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
    std::cout << "charge_rm_q: " << ptr->charge_rm_q << std::endl;
    std::cout << "tier_1_rm_n: " << ptr->tier_1_rm_n << std::endl;
    std::cout << "tier_2_rm_n: " << ptr->tier_2_rm_n << std::endl;
    std::cout << "tier_3_rm_n: " << ptr->tier_3_rm_n << std::endl;
    std::cout << "tier_4_rm_n: " << ptr->tier_4_rm_n << std::endl;
    std::cout << "ds_ratio_1_rm_c: " << ptr->ds_ratio_1_rm_c << std::endl;
    std::cout << "ds_ratio_2_rm_c: " << ptr->ds_ratio_2_rm_c << std::endl;
    std::cout << "ds_ratio_3_rm_c: " << ptr->ds_ratio_3_rm_c << std::endl;
    std::cout << "ds_ratio_4_rm_c: " << ptr->ds_ratio_4_rm_c << std::endl;
    std::cout << "a_or_b_1_rm_c: " << ptr->a_or_b_1_rm_c << std::endl;
    std::cout << "a_or_b_2_rm_c: " << ptr->a_or_b_2_rm_c << std::endl;
    std::cout << "a_or_b_3_rm_c: " << ptr->a_or_b_3_rm_c << std::endl;
    std::cout << "a_or_b_4_rm_c: " << ptr->a_or_b_4_rm_c << std::endl;
}

void print_used_price_params_t(used_price_params_t* ptr) {
    std::cout << "ppr_id_s: " << ptr->ppr_id_s << std::endl;
    std::cout << "iter_low_bound_rm_i: " << ptr->iter_low_bound_rm_i << std::endl;
    std::cout << "iter_high_bound_rm_i: " << ptr->iter_high_bound_rm_i << std::endl;
    std::cout << "days_per_year_rm_n: " << ptr->days_per_year_rm_n << std::endl;
    std::cout << "interest_rate_rm_c: " << ptr->interest_rate_rm_c << std::endl;
    std::cout << "use_dividend_rm_c: " << ptr->use_dividend_rm_c << std::endl;
    std::cout << "dividend_yield_type_c: " << ptr->dividend_yield_type_c << std::endl;
    std::cout << "theo_pr_meth_rm_c: " << ptr->theo_pr_meth_rm_c << std::endl;
    std::cout << "theo_pr_meth_div_rm_c: " << ptr->theo_pr_meth_div_rm_c << std::endl;
    std::cout << "opt_price_base_1_rm_c: " << ptr->opt_price_base_1_rm_c << std::endl;
    std::cout << "opt_price_base_2_rm_c: " << ptr->opt_price_base_2_rm_c << std::endl;
    std::cout << "opt_mid_price_rm_c: " << ptr->opt_mid_price_rm_c << std::endl;
    std::cout << "reverse_prices_rm_c: " << ptr->reverse_prices_rm_c << std::endl;
    std::cout << "vol_used_rm_c: " << ptr->vol_used_rm_c << std::endl;
    std::cout << "real_time_price_opt_rm_c: " << ptr->real_time_price_opt_rm_c << std::endl;
    std::cout << "real_time_price_fut_rm_c: " << ptr->real_time_price_fut_rm_c << std::endl;
    std::cout << "interpolation_rm_c: " << ptr->interpolation_rm_c << std::endl;
    std::cout << "time_dep_base_ppr_c: " << ptr->time_dep_base_ppr_c << std::endl;
}

void print_used_tier_t(used_tier_t* ptr) {
    std::cout << "tie_id_s: " << ptr->tie_id_s << std::endl;
    std::cout << "tier_number_i: " << ptr->tier_number_i << std::endl;
    std::cout << "max_tier_number_i: " << ptr->max_tier_number_i << std::endl;
    std::cout << "reference_date_c: " << ptr->reference_date_c << std::endl;
    std::cout << "reference_time_of_day_c: " << ptr->reference_time_of_day_c << std::endl;
    std::cout << "filler_2_s: " << ptr->filler_2_s << std::endl;
}

void print_withdraw_collateral_mwa_txn_t(withdraw_collateral_mwa_txn_t* ptr) {
    std::cout << "transaction_type: " << ptr->transaction_type << std::endl;
    std::cout << "series: " << ptr->series << std::endl;
    std::cout << "withdraw_collateral_mwa_ssi: " << ptr->withdraw_collateral_mwa_ssi << std::endl;
    std::cout << "filler_4_s: " << ptr->filler_4_s << std::endl;
}

