void MapButtonEntity___ctor(MapButtonEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27766 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27766 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


void MapButtonEntity___ctor_42139688(MapButtonEntity_o *this, MapButtonEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C27767 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27767 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1C2D6EC(v5, v6);
  *(_QWORD *)&this->fields.id = *(_QWORD *)&cSrc->fields.id;
  this->fields.targetMapId = cSrc->fields.targetMapId;
  this->fields.imageId = cSrc->fields.imageId;
}


System_String_o *MapButtonEntity__CreatePK(int32_t id, int32_t priority, int32_t targetMapId, const MethodInfo *method)
{
  if ( (byte_4C27768 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C27768 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           priority,
           targetMapId,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *MapButtonEntity__CreatePrimaryKey(MapButtonEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MapButtonEntity__CreatePK(this->fields.id, this->fields.priority, this->fields.targetMapId, v2);
}