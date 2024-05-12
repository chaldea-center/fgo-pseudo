void __fastcall WarQuestSelectionEntity___ctor(WarQuestSelectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438BE44 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438BE44 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarQuestSelectionEntity__CreatePK(int32_t warId, int32_t questId, const MethodInfo *method)
{
  if ( (byte_438BE43 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438BE43 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warId,
           questId,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarQuestSelectionEntity__CreatePrimaryKey(
        WarQuestSelectionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarQuestSelectionEntity__CreatePK(this->fields.warId, this->fields.questId, v2);
}