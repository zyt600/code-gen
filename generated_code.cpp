void OMnetLogger::print(const answer_instrument_class_item_t& item) {
    loggerOMnetAPI->log(Level,"{");
    for(int i=0; i<12; i++){
        print(item.item[i]);
    }
    loggerOMnetAPI->log(Level,"}");
}

