void __fastcall EventBulletinBoardReleaseEntity___ctor(
        EventBulletinBoardReleaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_438DD78 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438DD78 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventBulletinBoardReleaseEntity__CreatePK(
        int32_t bulletinBoardId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  if ( (byte_438DD77 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438DD77 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           bulletinBoardId,
           condType,
           condTargetId,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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