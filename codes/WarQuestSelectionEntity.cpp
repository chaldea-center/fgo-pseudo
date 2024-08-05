void __fastcall WarQuestSelectionEntity___ctor(WarQuestSelectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF56F & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF56F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarQuestSelectionEntity__CreatePK(int32_t warId, int32_t questId, const MethodInfo *method)
{
  if ( (byte_49FF56E & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&questId);
    byte_49FF56E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warId,
           questId,
           (const MethodInfo_2E398EC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarQuestSelectionEntity__CreatePrimaryKey(
        WarQuestSelectionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarQuestSelectionEntity__CreatePK(this->fields.warId, this->fields.questId, v2);
}