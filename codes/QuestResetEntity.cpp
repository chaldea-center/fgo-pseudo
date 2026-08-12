void QuestResetEntity___ctor(QuestResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971010 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5971010 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t QuestResetEntity__CreatePrimaryKey(QuestResetEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


bool QuestResetEntity__IsShowConfirmMessage(QuestResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597100F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23364/*"noConfirmMsg"*/);
    byte_597100F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23364/*"noConfirmMsg"*/, 0, 0) == 0;
}