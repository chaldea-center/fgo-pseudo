void __fastcall QuestReleaseEntity___ctor(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45169 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B45169 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestReleaseEntity__CreatePK(
        int32_t questId,
        int32_t type,
        int32_t targetId,
        int64_t value,
        const MethodInfo *method)
{
  if ( (byte_4B45168 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int__int__long___, *(_QWORD *)&type);
    byte_4B45168 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__long_(
           questId,
           type,
           targetId,
           value,
           (const MethodInfo_30324D0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
}


System_String_o *__fastcall QuestReleaseEntity__CreatePrimaryKey(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return QuestReleaseEntity__CreatePK(
           this->fields.questId,
           this->fields.type,
           this->fields.targetId,
           this->fields.value,
           v2);
}


int32_t __fastcall QuestReleaseEntity__getClosedMessageId(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.closedMessageId;
}


int32_t __fastcall QuestReleaseEntity__getImagePriority(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.imagePriority;
}


int32_t __fastcall QuestReleaseEntity__getQuestId(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t __fastcall QuestReleaseEntity__getTargetId(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.targetId;
}


int32_t __fastcall QuestReleaseEntity__getType(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


int64_t __fastcall QuestReleaseEntity__getValue(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.value;
}


int32_t __fastcall QuestReleaseEntity__getValueInt(QuestReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.value;
}