void __fastcall QuestRestrictionEntity___ctor(QuestRestrictionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4217C84 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4217C84 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t restrictionId,
        const MethodInfo *method)
{
  if ( (byte_4217C83 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&phase);
    byte_4217C83 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           phase,
           restrictionId,
           (const MethodInfo_1713844 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestRestrictionEntity__CreatePrimaryKey(
        QuestRestrictionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestRestrictionEntity__CreatePK(this->fields.questId, this->fields.phase, this->fields.restrictionId, v2);
}