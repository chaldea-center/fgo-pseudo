void __fastcall QuestResetEntity___ctor(QuestResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418AF06 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_418AF06 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall QuestResetEntity__CreatePrimaryKey(QuestResetEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}