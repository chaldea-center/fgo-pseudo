void __fastcall QuestRestrictionEntity___ctor(QuestRestrictionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418AF09 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418AF09 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t restrictionId,
        const MethodInfo *method)
{
  if ( (byte_418AF08 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&phase);
    byte_418AF08 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           phase,
           restrictionId,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestRestrictionEntity__CreatePrimaryKey(
        QuestRestrictionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestRestrictionEntity__CreatePK(this->fields.questId, this->fields.phase, this->fields.restrictionId, v2);
}