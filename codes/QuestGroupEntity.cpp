void __fastcall QuestGroupEntity___ctor(QuestGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB61BC & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB61BC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestGroupEntity__CreatePK(
        int32_t questId,
        int32_t type,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_4AB61BB & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_4AB61BB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           type,
           groupId,
           (const MethodInfo_2EC2A28 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall QuestGroupEntity__CreatePrimaryKey(QuestGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return QuestGroupEntity__CreatePK(this->fields.questId, this->fields.type, this->fields.groupId, v2);
}