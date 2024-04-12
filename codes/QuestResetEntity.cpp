void __fastcall QuestResetEntity___ctor(QuestResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B4902 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B4902 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall QuestResetEntity__CreatePrimaryKey(QuestResetEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}