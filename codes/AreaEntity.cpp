void AreaEntity___ctor(AreaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC6F9D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_int___ctor__);
    byte_4CC6F9D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_340699C *)Method_DataEntityBase_int___ctor__);
}


int32_t AreaEntity__CreatePrimaryKey(AreaEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t AreaEntity__getAreaId(AreaEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t AreaEntity__getAreaPosX(AreaEntity_o *this, const MethodInfo *method)
{
  return this->fields.x;
}


int32_t AreaEntity__getAreaPosY(AreaEntity_o *this, const MethodInfo *method)
{
  return this->fields.y;
}


int32_t AreaEntity__getWorldId(AreaEntity_o *this, const MethodInfo *method)
{
  return this->fields.worldId;
}