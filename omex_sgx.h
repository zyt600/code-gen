typedef struct answer_instrument_class_item
{
   series_t series;
   upper_level_series_t upper_level_series;
   int32_t price_quot_factor_i;
   int32_t contract_size_i;
   int32_t exerc_limit_i;
   int32_t redemption_value_i;
   int32_t min_qty_increment_i;
   uint16_t derivate_level_n;
   uint16_t dec_in_strike_price_n;
   uint16_t dec_in_contr_size_n;
   uint16_t rnt_id_n;
   uint16_t dec_in_premium_n;
   uint16_t items_n;
   struct	
   {	
      tick_size_t tick_size;
   } item [12];
   uint16_t dec_in_deliv_n;
   uint16_t items_block_n;
   struct	
   {	
      int64_t maximum_size_u;
      uint32_t minimum_size_n;
      uint32_t block_n;
      uint8_t lot_type_c;
      char filler_3_s [3];
   } block_size [4];
   uint16_t cleared_dec_in_qty_n;
   uint16_t virt_commodity_n;
   uint16_t dec_in_fixing_n;
   char base_cur_s [3];
   uint8_t traded_c;
   uint8_t exerc_limit_unit_c;
   char inc_id_s [14];
   char trc_id_s [10];
   char name_s [32];
   char is_fractions_c;
   uint8_t price_unit_premium_c;
   uint8_t price_unit_strike_c;
   char settl_cur_id_s [32];
   char credit_class_s [3];
   char csd_id_s [12];
   uint8_t trd_cur_unit_c;
   uint8_t collateral_type_c;
   uint8_t fixing_req_c;
   char mbs_id_s [2];
   char valuation_group_id_s [12];
   uint8_t gross_settlement_c;
   char filler_1_s;
} answer_instrument_class_item_t;
