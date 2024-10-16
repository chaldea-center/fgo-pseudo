void __fastcall AreaEntity___ctor(AreaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5983 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_int___ctor__, method);
    byte_4AB5983 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3163B90 *)Method_DataEntityBase_int___ctor__);
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