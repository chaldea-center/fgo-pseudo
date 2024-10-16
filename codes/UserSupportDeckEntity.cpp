void __fastcall UserSupportDeckEntity___ctor(UserSupportDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6C3C & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB6C3C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserSupportDeckEntity__CreatePK(
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  if ( (byte_4AB6C3B & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&supportDeckId);
    byte_4AB6C3B = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           supportDeckId,
           (const MethodInfo_2EC26A0 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserSupportDeckEntity__CreatePrimaryKey(
        UserSupportDeckEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserSupportDeckEntity__CreatePK(this->fields.userId, this->fields.supportDeckId, v2);
}