void UserExternalPaymentStoneEntity___ctor(UserExternalPaymentStoneEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939591 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939591 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserExternalPaymentStoneEntity__CreatePK(int64_t userId, int32_t type, const MethodInfo *method)
{
  if ( (byte_5939590 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_5939590 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           type,
           (const MethodInfo_3821070 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserExternalPaymentStoneEntity__CreatePrimaryKey(
        UserExternalPaymentStoneEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserExternalPaymentStoneEntity__CreatePK(this->fields.userId, this->fields.type, v2);
}