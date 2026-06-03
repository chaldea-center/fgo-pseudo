void QuestResetEntity___ctor(QuestResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77E31 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_int___ctor__);
    byte_4E77E31 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3533444 *)Method_DataEntityBase_int___ctor__);
}


int32_t QuestResetEntity__CreatePrimaryKey(QuestResetEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


bool QuestResetEntity__IsShowConfirmMessage(QuestResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77E30 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22676/*"noConfirmMsg"*/);
    byte_4E77E30 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22676/*"noConfirmMsg"*/, 0, 0) == 0;
}