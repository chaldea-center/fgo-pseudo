void __fastcall PaymentHistoryEntity___ctor(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1661C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B1661C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall PaymentHistoryEntity__CreatePrimaryKey(
        PaymentHistoryEntity_o *this,
        const MethodInfo *method)
{
  return System_Int32__ToString((int)this + 16, 0LL);
}


System_String_o *__fastcall PaymentHistoryEntity__GetDispPrice(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t price; // w19

  if ( (byte_4B1661B & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B1661B = 1;
  }
  price = this->fields.price;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__GetNumberFormat(price, 0LL);
}


System_String_o *__fastcall PaymentHistoryEntity__GetTypeText(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t type; // w8
  __int64 *v9; // x8

  if ( (byte_4B1661A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10485/*"PAYMENT_HISTORY_EXTERNAL"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_10486/*"PAYMENT_HISTORY_INTERNAL"*/, v6, v7);
    byte_4B1661A = 1;
  }
  type = this->fields.type;
  if ( type == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v9 = &StringLiteral_10485/*"PAYMENT_HISTORY_EXTERNAL"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0LL);
  }
  if ( type == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v9 = &StringLiteral_10486/*"PAYMENT_HISTORY_INTERNAL"*/;
    return LocalizationManager__Get((System_String_o *)*v9, 0LL);
  }
  return 0LL;
}


System_String_o *__fastcall PaymentHistoryEntity__get_CreatedAtToString(
        PaymentHistoryEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_createdAtString; // x19
  __int64 v5; // x1
  int64_t createdAt; // x20
  System_String_o *Date; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B16619 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B16619 = 1;
  }
  p_createdAtString = (PartyOrganizationUtility_o *)&this->fields.createdAtString;
  if ( System_String__IsNullOrEmpty(this->fields.createdAtString, 0LL) )
  {
    createdAt = this->fields.createdAt;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
    Date = LocalizationManager__GetDate(createdAt, 0LL);
    p_createdAtString->klass = (PartyOrganizationUtility_c *)Date;
    sub_1BCA784(p_createdAtString, (int64_t)Date, v8, v9, v10, v11, v12, v13);
  }
  return (System_String_o *)p_createdAtString->klass;
}