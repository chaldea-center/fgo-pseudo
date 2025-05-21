void __fastcall PaymentHistoryEntity___ctor(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44F10 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B44F10 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
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

  if ( (byte_4B44F0F & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    byte_4B44F0F = 1;
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

  if ( (byte_4B44F0E & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_10334/*"PAYMENT_HISTORY_EXTERNAL"*/, v3);
    sub_1BDB878(&StringLiteral_10335/*"PAYMENT_HISTORY_INTERNAL"*/, v4);
    byte_4B44F0E = 1;
  }
  type = this->fields.type;
  if ( type == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_10334/*"PAYMENT_HISTORY_EXTERNAL"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0LL);
  }
  if ( type == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_10335/*"PAYMENT_HISTORY_INTERNAL"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0LL);
  }
  return 0LL;
}


System_String_o *__fastcall PaymentHistoryEntity__get_CreatedAtToString(
        PaymentHistoryEntity_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_createdAtString; // x19
  int64_t createdAt; // x20
  System_String_o *Date; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B44F0D & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    byte_4B44F0D = 1;
  }
  p_createdAtString = (CGThumbnailListItem_o *)&this->fields.createdAtString;
  if ( System_String__IsNullOrEmpty(this->fields.createdAtString, 0LL) )
  {
    createdAt = this->fields.createdAt;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Date = LocalizationManager__GetDate(createdAt, 0LL);
    p_createdAtString->klass = (CGThumbnailListItem_c *)Date;
    sub_1BDB81C(p_createdAtString, (int32_t)Date, v6, v7);
  }
  return (System_String_o *)p_createdAtString->klass;
}