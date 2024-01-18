void __fastcall QuestSpotReleaseEntity___ctor(QuestSpotReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41860B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41860B2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestSpotReleaseEntity__CreatePK(
        int32_t questId,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_41860B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&spotId);
    byte_41860B1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           spotId,
           priority,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestSpotReleaseEntity__CreatePrimaryKey(
        QuestSpotReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestSpotReleaseEntity__CreatePK(this->fields.questId, this->fields.spotId, this->fields.priority, v2);
}


int32_t __fastcall QuestSpotReleaseEntity__get_CondType(QuestSpotReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}