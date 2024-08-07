void __fastcall UserGachaExtraCountEntity___ctor(UserGachaExtraCountEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF807 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF807 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserGachaExtraCountEntity__CreatePK(
        int64_t userId,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  if ( (byte_49FF806 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&extraGroupId);
    byte_49FF806 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           extraGroupId,
           (const MethodInfo_2E3A00C *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserGachaExtraCountEntity__CreatePrimaryKey(
        UserGachaExtraCountEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserGachaExtraCountEntity__CreatePK(this->fields.userId, this->fields.extraGroupId, v2);
}