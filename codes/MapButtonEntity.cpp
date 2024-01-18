void __fastcall MapButtonEntity___ctor(MapButtonEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186325 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4186325 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall MapButtonEntity___ctor_22137200(
        MapButtonEntity_o *this,
        MapButtonEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4186326 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_4186326 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B2C434(v5, v6);
  this->fields.id = cSrc->fields.id;
  this->fields.priority = cSrc->fields.priority;
  this->fields.targetMapId = cSrc->fields.targetMapId;
  this->fields.imageId = cSrc->fields.imageId;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MapButtonEntity__CreatePK(
        int32_t id,
        int32_t priority,
        int32_t targetMapId,
        const MethodInfo *method)
{
  if ( (byte_4186327 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&priority);
    byte_4186327 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           priority,
           targetMapId,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall MapButtonEntity__CreatePrimaryKey(MapButtonEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MapButtonEntity__CreatePK(this->fields.id, this->fields.priority, this->fields.targetMapId, v2);
}