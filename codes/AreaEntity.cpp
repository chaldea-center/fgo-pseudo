void __fastcall AreaEntity___ctor(AreaEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB769 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EB769 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall AreaEntity__CreatePrimaryKey(AreaEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall AreaEntity__getAreaId(AreaEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall AreaEntity__getAreaPosX(AreaEntity_o *this, const MethodInfo *method)
{
  return this->fields.x;
}


int32_t __fastcall AreaEntity__getAreaPosY(AreaEntity_o *this, const MethodInfo *method)
{
  return this->fields.y;
}


int32_t __fastcall AreaEntity__getWorldId(AreaEntity_o *this, const MethodInfo *method)
{
  return this->fields.worldId;
}