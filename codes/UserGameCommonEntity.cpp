void __fastcall UserGameCommonEntity___ctor(UserGameCommonEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF5C3 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF5C3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserGameCommonEntity__CreatePK(int64_t userId, int32_t no, const MethodInfo *method)
{
  if ( (byte_49FF5C2 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&no);
    byte_49FF5C2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           no,
           (const MethodInfo_2E399F4 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserGameCommonEntity__CreatePrimaryKey(
        UserGameCommonEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserGameCommonEntity__CreatePK(this->fields.userId, this->fields.no, v2);
}