void __fastcall QuestResetEntity___ctor(QuestResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438FD3A & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438FD3A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall QuestResetEntity__CreatePrimaryKey(QuestResetEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}