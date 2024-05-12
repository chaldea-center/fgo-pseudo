void __fastcall UserGachaExtraCountEntity___ctor(UserGachaExtraCountEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4389D05 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4389D05 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserGachaExtraCountEntity__CreatePK(
        int64_t userId,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  if ( (byte_4389D04 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4389D04 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           extraGroupId,
           (const MethodInfo_1D172EC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserGachaExtraCountEntity__CreatePrimaryKey(
        UserGachaExtraCountEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserGachaExtraCountEntity__CreatePK(this->fields.userId, this->fields.extraGroupId, v2);
}