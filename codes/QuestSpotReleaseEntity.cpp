void __fastcall QuestSpotReleaseEntity___ctor(QuestSpotReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4389959 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4389959 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestSpotReleaseEntity__CreatePK(
        int32_t questId,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4389958 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4389958 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           spotId,
           priority,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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