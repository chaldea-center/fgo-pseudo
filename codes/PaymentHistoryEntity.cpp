void PaymentHistoryEntity___ctor(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CE30 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2CE30 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *PaymentHistoryEntity__CreatePrimaryKey(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  return System_Int32__ToString((int)this + 16, 0);
}


System_String_o *PaymentHistoryEntity__GetDispPrice(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  int32_t price; // w19

  if ( (byte_4D2CE2F & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    byte_4D2CE2F = 1;
  }
  price = this->fields.price;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetNumberFormat(price, 0);
}


System_String_o *PaymentHistoryEntity__GetTypeText(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  __int64 *v4; // x8
  int32_t subType; // w8

  if ( (byte_4D2CE2E & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10369/*"PAYMENT_HISTORY_EXTERNAL"*/);
    sub_1C94098(&StringLiteral_10370/*"PAYMENT_HISTORY_EXTERNAL_GIFT_CARD"*/);
    sub_1C94098(&StringLiteral_10371/*"PAYMENT_HISTORY_INTERNAL"*/);
    byte_4D2CE2E = 1;
  }
  type = this->fields.type;
  if ( type == 2 )
  {
    subType = this->fields.subType;
    if ( subType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10370/*"PAYMENT_HISTORY_EXTERNAL_GIFT_CARD"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0);
    }
    if ( !subType )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10369/*"PAYMENT_HISTORY_EXTERNAL"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0);
    }
    return 0;
  }
  if ( type != 1 )
    return 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = &StringLiteral_10371/*"PAYMENT_HISTORY_INTERNAL"*/;
  return LocalizationManager__Get((System_String_o *)*v4, 0);
}


System_String_o *PaymentHistoryEntity__get_CreatedAtToString(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_createdAtString; // x19
  int64_t createdAt; // x20
  System_String_o *Date; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2CE2D & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    byte_4D2CE2D = 1;
  }
  p_createdAtString = (GrandQuestFolderBoardItem_o *)&this->fields.createdAtString;
  if ( System_String__IsNullOrEmpty(this->fields.createdAtString, 0) )
  {
    createdAt = this->fields.createdAt;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Date = LocalizationManager__GetDate(createdAt, 0);
    p_createdAtString->klass = (GrandQuestFolderBoardItem_c *)Date;
    sub_1C9403C(p_createdAtString, (int32_t)Date, v6, v7, v8, v9, v10, v11);
  }
  return (System_String_o *)p_createdAtString->klass;
}