void __fastcall UserSupportDeckEntity___ctor(UserSupportDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BBE24 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BBE24 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserSupportDeckEntity__CreatePK(
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  if ( (byte_49BBE23 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&supportDeckId);
    byte_49BBE23 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           supportDeckId,
           (const MethodInfo_2EFFDB4 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserSupportDeckEntity__CreatePrimaryKey(
        UserSupportDeckEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserSupportDeckEntity__CreatePK(this->fields.userId, this->fields.supportDeckId, v2);
}