void __fastcall PaymentHistoryEntity___ctor(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B570 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B570 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall PaymentHistoryEntity__CreatePrimaryKey(
        PaymentHistoryEntity_o *this,
        const MethodInfo *method)
{
  return System_Int32__ToString((int)this + 16, 0LL);
}


System_String_o *__fastcall PaymentHistoryEntity__GetDispPrice(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  int32_t price; // w19

  if ( (byte_4A5B56F & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5B56F = 1;
  }
  price = this->fields.price;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetNumberFormat(price, 0LL);
}


System_String_o *__fastcall PaymentHistoryEntity__GetTypeText(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  __int64 *v4; // x8

  if ( (byte_4A5B56E & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10352/*"PAYMENT_HISTORY_EXTERNAL"*/);
    sub_1B885B0(&StringLiteral_10353/*"PAYMENT_HISTORY_INTERNAL"*/);
    byte_4A5B56E = 1;
  }
  type = this->fields.type;
  if ( type == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = &StringLiteral_10352/*"PAYMENT_HISTORY_EXTERNAL"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0LL);
  }
  if ( type == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = &StringLiteral_10353/*"PAYMENT_HISTORY_INTERNAL"*/;
    return LocalizationManager__Get((System_String_o *)*v4, 0LL);
  }
  return 0LL;
}


System_String_o *__fastcall PaymentHistoryEntity__get_CreatedAtToString(
        PaymentHistoryEntity_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_createdAtString; // x19
  int64_t createdAt; // x20
  System_String_o *Date; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5B56D & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5B56D = 1;
  }
  p_createdAtString = (ServantStatusBattleListViewItem_o *)&this->fields.createdAtString;
  if ( System_String__IsNullOrEmpty(this->fields.createdAtString, 0LL) )
  {
    createdAt = this->fields.createdAt;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Date = LocalizationManager__GetDate(createdAt, 0LL);
    p_createdAtString->klass = (ServantStatusBattleListViewItem_c *)Date;
    sub_1B88554(p_createdAtString, (int32_t)Date, v6, v7);
  }
  return (System_String_o *)p_createdAtString->klass;
}