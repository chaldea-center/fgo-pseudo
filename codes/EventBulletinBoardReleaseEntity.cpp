void __fastcall EventBulletinBoardReleaseEntity___ctor(
        EventBulletinBoardReleaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_418A2DA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418A2DA = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventBulletinBoardReleaseEntity__CreatePK(
        int32_t bulletinBoardId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  if ( (byte_418A2D9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&condType);
    byte_418A2D9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           bulletinBoardId,
           condType,
           condTargetId,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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