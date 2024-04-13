void __fastcall EventBulletinBoardReleaseEntity___ctor(
        EventBulletinBoardReleaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB11B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EB11B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventBulletinBoardReleaseEntity__CreatePK(
        int32_t bulletinBoardId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  if ( (byte_42EB11A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, condType, condTargetId, method);
    byte_42EB11A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           bulletinBoardId,
           condType,
           condTargetId,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventBulletinBoardReleaseEntity__CreatePrimaryKey(
        EventBulletinBoardReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventBulletinBoardReleaseEntity__CreatePK(
           this->fields.bulletinBoardId,
           this->fields.condType,
           this->fields.condTargetId,
           v2);
}