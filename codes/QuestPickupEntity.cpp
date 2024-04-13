void __fastcall QuestPickupEntity___ctor(QuestPickupEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED257 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42ED257 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall QuestPickupEntity__CreatePrimaryKey(QuestPickupEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}