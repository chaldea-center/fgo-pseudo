void __fastcall UserGachaExtraCountEntity___ctor(UserGachaExtraCountEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67913 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B67913 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserGachaExtraCountEntity__CreatePK(
        int64_t userId,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  if ( (byte_4B67912 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&extraGroupId);
    byte_4B67912 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           extraGroupId,
           (const MethodInfo_2F5743C *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserGachaExtraCountEntity__CreatePrimaryKey(
        UserGachaExtraCountEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserGachaExtraCountEntity__CreatePK(this->fields.userId, this->fields.extraGroupId, v2);
}