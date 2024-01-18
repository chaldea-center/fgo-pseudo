void __fastcall UserGachaExtraCountEntity___ctor(UserGachaExtraCountEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186FC1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4186FC1 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserGachaExtraCountEntity__CreatePK(
        int64_t userId,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  if ( (byte_4186FC0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&extraGroupId);
    byte_4186FC0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           extraGroupId,
           (const MethodInfo_1732A38 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserGachaExtraCountEntity__CreatePrimaryKey(
        UserGachaExtraCountEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserGachaExtraCountEntity__CreatePK(this->fields.userId, this->fields.extraGroupId, v2);
}