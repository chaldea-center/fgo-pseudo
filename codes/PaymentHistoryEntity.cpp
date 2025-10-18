void PaymentHistoryEntity___ctor(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C43571 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_string___ctor__);
    byte_4C43571 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_339EC34 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *PaymentHistoryEntity__CreatePrimaryKey(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  return System_Int32__ToString((int)this + 16, 0);
}


System_String_o *PaymentHistoryEntity__GetDispPrice(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  int32_t price; // w19

  if ( (byte_4C43570 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    byte_4C43570 = 1;
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

  if ( (byte_4C4356F & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_10337/*"PAYMENT_HISTORY_EXTERNAL"*/);
    sub_1C37058(&StringLiteral_10338/*"PAYMENT_HISTORY_EXTERNAL_GIFT_CARD"*/);
    sub_1C37058(&StringLiteral_10339/*"PAYMENT_HISTORY_INTERNAL"*/);
    byte_4C4356F = 1;
  }
  type = this->fields.type;
  if ( type == 2 )
  {
    subType = this->fields.subType;
    if ( subType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10338/*"PAYMENT_HISTORY_EXTERNAL_GIFT_CARD"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0);
    }
    if ( !subType )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_10337/*"PAYMENT_HISTORY_EXTERNAL"*/;
      return LocalizationManager__Get((System_String_o *)*v4, 0);
    }
    return 0;
  }
  if ( type != 1 )
    return 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = &StringLiteral_10339/*"PAYMENT_HISTORY_INTERNAL"*/;
  return LocalizationManager__Get((System_String_o *)*v4, 0);
}


System_String_o *PaymentHistoryEntity__get_CreatedAtToString(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_createdAtString; // x19
  int64_t createdAt; // x20
  System_String_o *Date; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C4356E & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    byte_4C4356E = 1;
  }
  p_createdAtString = (CGThumbnailListItem_o *)&this->fields.createdAtString;
  if ( System_String__IsNullOrEmpty(this->fields.createdAtString, 0) )
  {
    createdAt = this->fields.createdAt;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Date = LocalizationManager__GetDate(createdAt, 0);
    p_createdAtString->klass = (CGThumbnailListItem_c *)Date;
    sub_1C36FFC(p_createdAtString, (int32_t)Date, v6, v7);
  }
  return (System_String_o *)p_createdAtString->klass;
}