void PaymentHistoryEntity___ctor(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970E5D & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970E5D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *PaymentHistoryEntity__CreatePrimaryKey(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  return System_Int32__ToString((int)this + 16, 0);
}


System_String_o *PaymentHistoryEntity__GetDispPrice(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  int32_t price; // w19

  if ( (byte_5970E5C & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_5970E5C = 1;
  }
  price = this->fields.price;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__GetNumberFormat(price, 0);
}


System_String_o *PaymentHistoryEntity__GetTypeText(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  LocalizationManager_c *v4; // x0
  __int64 *v5; // x19
  int32_t subType; // w8

  if ( (byte_5970E5B & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10752/*"PAYMENT_HISTORY_EXTERNAL"*/);
    sub_2213A60(&StringLiteral_10753/*"PAYMENT_HISTORY_EXTERNAL_GIFT_CARD"*/);
    sub_2213A60(&StringLiteral_10754/*"PAYMENT_HISTORY_INTERNAL"*/);
    byte_5970E5B = 1;
  }
  type = this->fields.type;
  if ( type == 2 )
  {
    subType = this->fields.subType;
    if ( subType == 1 )
    {
      v4 = LocalizationManager_TypeInfo;
      v5 = &StringLiteral_10753/*"PAYMENT_HISTORY_EXTERNAL_GIFT_CARD"*/;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        return LocalizationManager__Get((System_String_o *)*v5, 0);
      goto LABEL_6;
    }
    if ( !subType )
    {
      v4 = LocalizationManager_TypeInfo;
      v5 = &StringLiteral_10752/*"PAYMENT_HISTORY_EXTERNAL"*/;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        return LocalizationManager__Get((System_String_o *)*v5, 0);
      goto LABEL_6;
    }
  }
  else if ( type == 1 )
  {
    v4 = LocalizationManager_TypeInfo;
    v5 = &StringLiteral_10754/*"PAYMENT_HISTORY_INTERNAL"*/;
    if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      return LocalizationManager__Get((System_String_o *)*v5, 0);
LABEL_6:
    j_il2cpp_runtime_class_init_0(v4, method);
    return LocalizationManager__Get((System_String_o *)*v5, 0);
  }
  return 0;
}


System_String_o *PaymentHistoryEntity__get_CreatedAtToString(PaymentHistoryEntity_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_createdAtString; // x19
  __int64 v4; // x1
  int64_t createdAt; // x20
  System_String_o *Date; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5970E5A & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_5970E5A = 1;
  }
  p_createdAtString = (MissionNaviTransitionBoardItem_o *)&this->fields.createdAtString;
  if ( System_String__IsNullOrEmpty(this->fields.createdAtString, 0) )
  {
    createdAt = this->fields.createdAt;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
    Date = LocalizationManager__GetDate(createdAt, 0);
    p_createdAtString->klass = (MissionNaviTransitionBoardItem_c *)Date;
    sub_2213A04(p_createdAtString, (int32_t)Date, v7, v8, v9, v10, v11, v12);
  }
  return (System_String_o *)p_createdAtString->klass;
}