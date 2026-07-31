void WarQuestSelectionEntity___ctor(WarQuestSelectionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939A5C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939A5C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarQuestSelectionEntity__CreatePK(int32_t warId, int32_t questId, const MethodInfo *method)
{
  if ( (byte_5939A5B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939A5B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warId,
           questId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *WarQuestSelectionEntity__CreatePrimaryKey(WarQuestSelectionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarQuestSelectionEntity__CreatePK(this->fields.warId, this->fields.questId, v2);
}