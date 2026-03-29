void QuestResetEntity___ctor(QuestResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3115B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D3115B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
}


int32_t QuestResetEntity__CreatePrimaryKey(QuestResetEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


bool QuestResetEntity__IsShowConfirmMessage(QuestResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3115A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22511/*"noConfirmMsg"*/);
    byte_4D3115A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22511/*"noConfirmMsg"*/, 0, 0) == 0;
}