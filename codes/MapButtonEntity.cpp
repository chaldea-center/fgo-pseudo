void __fastcall MapButtonEntity___ctor(MapButtonEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEE4B & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FEE4B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall MapButtonEntity___ctor_39076036(
        MapButtonEntity_o *this,
        MapButtonEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_49FEE4C & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_49FEE4C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1B64C5C(v5, v6);
  *(_QWORD *)&this->fields.id = *(_QWORD *)&cSrc->fields.id;
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
  if ( (byte_49FEE4D & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&priority);
    byte_49FEE4D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           priority,
           targetMapId,
           (const MethodInfo_2E3A394 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall MapButtonEntity__CreatePrimaryKey(MapButtonEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MapButtonEntity__CreatePK(this->fields.id, this->fields.priority, this->fields.targetMapId, v2);
}