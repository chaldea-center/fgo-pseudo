void __fastcall ViewQuestEnemyInfoEntity___ctor(ViewQuestEnemyInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE6F0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataEntityBase_int___ctor__, method);
    byte_4BFE6F0 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3278C9C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ViewQuestEnemyInfoEntity__CreatePrimaryKey(
        ViewQuestEnemyInfoEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.questId;
}