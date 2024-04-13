void __fastcall NpcServantEquipEntity___ctor(NpcServantEquipEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6297 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_long___ctor__, (_DWORD)method, v2, v3);
    byte_42E6297 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23FAD14 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall NpcServantEquipEntity__CreatePrimaryKey(NpcServantEquipEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}