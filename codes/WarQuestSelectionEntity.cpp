void __fastcall WarQuestSelectionEntity___ctor(WarQuestSelectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C1EF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C1EF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarQuestSelectionEntity__CreatePK(int32_t warId, int32_t questId, const MethodInfo *method)
{
  if ( (byte_4A5C1EE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5C1EE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warId,
           questId,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarQuestSelectionEntity__CreatePrimaryKey(
        WarQuestSelectionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarQuestSelectionEntity__CreatePK(this->fields.warId, this->fields.questId, v2);
}