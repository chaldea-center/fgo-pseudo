void __fastcall QuestAddEntity___ctor(QuestAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438B673 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438B673 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestAddEntity__CreatePK(int32_t questId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_438B672 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438B672 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           priority,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestAddEntity__CreatePrimaryKey(QuestAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestAddEntity__CreatePK(this->fields.questId, this->fields.priority, v2);
}