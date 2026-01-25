void QuestResetEntity___ctor(QuestResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEDE5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEEDE5 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
}


int32_t QuestResetEntity__CreatePrimaryKey(QuestResetEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


bool QuestResetEntity__IsShowConfirmMessage(QuestResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEDE4 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22447/*"noConfirmMsg"*/);
    byte_4CEEDE4 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22447/*"noConfirmMsg"*/, 0, 0) == 0;
}