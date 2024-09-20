void __fastcall MapButtonEntity___ctor(MapButtonEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B48B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B48B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


void __fastcall MapButtonEntity___ctor_39393328(
        MapButtonEntity_o *this,
        MapButtonEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5B48C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B48C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1B8880C(v5, v6);
  *(_QWORD *)&this->fields.id = *(_QWORD *)&cSrc->fields.id;
  this->fields.targetMapId = cSrc->fields.targetMapId;
  this->fields.imageId = cSrc->fields.imageId;
}


System_String_o *__fastcall MapButtonEntity__CreatePK(
        int32_t id,
        int32_t priority,
        int32_t targetMapId,
        const MethodInfo *method)
{
  if ( (byte_4A5B48D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5B48D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           priority,
           targetMapId,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall MapButtonEntity__CreatePrimaryKey(MapButtonEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MapButtonEntity__CreatePK(this->fields.id, this->fields.priority, this->fields.targetMapId, v2);
}