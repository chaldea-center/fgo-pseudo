void __fastcall PaymentHistoryEntity___ctor(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4B25 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB4B25 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
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

  if ( (byte_4BB4B24 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    byte_4BB4B24 = 1;
  }
  price = this->fields.price;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetNumberFormat(price, 0LL);
}


System_String_o *__fastcall PaymentHistoryEntity__GetTypeText(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t type; // w8
  __int64 *v6; // x8

  if ( (byte_4BB4B23 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_10537/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/, v3);
    sub_1C13D24(&StringLiteral_10538/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/, v4);
    byte_4BB4B23 = 1;
  }
  type = this->fields.type;
  if ( type == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_10537/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_MY_SERVANT_POSITION_MAIN"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0LL);
  }
  if ( type == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_10538/*"PARTY_ORGANIZATION_SERVANT_SWAP_EXPLANATION_FIXED_SUPPORT_POSITION"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0LL);
  }
  return 0LL;
}


System_String_o *__fastcall PaymentHistoryEntity__get_CreatedAtToString(
        PaymentHistoryEntity_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_createdAtString; // x19
  int64_t createdAt; // x20
  System_String_o *Date; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BB4B22 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    byte_4BB4B22 = 1;
  }
  p_createdAtString = (PartyOrganizationUtility_o *)&this->fields.createdAtString;
  if ( System_String__IsNullOrEmpty(this->fields.createdAtString, 0LL) )
  {
    createdAt = this->fields.createdAt;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Date = LocalizationManager__GetDate(createdAt, 0LL);
    p_createdAtString->klass = (PartyOrganizationUtility_c *)Date;
    sub_1C13CC8(p_createdAtString, (int64_t)Date, v6, v7, v8, v9, v10, v11);
  }
  return (System_String_o *)p_createdAtString->klass;
}