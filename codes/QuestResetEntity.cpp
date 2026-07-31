void QuestResetEntity___ctor(QuestResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938E52 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938E52 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t QuestResetEntity__CreatePrimaryKey(QuestResetEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


bool QuestResetEntity__IsShowConfirmMessage(QuestResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938E51 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23318/*"noConfirmMsg"*/);
    byte_5938E51 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23318/*"noConfirmMsg"*/, 0, 0) == 0;
}