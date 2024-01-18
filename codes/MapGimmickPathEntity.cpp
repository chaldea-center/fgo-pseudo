void __fastcall MapGimmickPathEntity___ctor(MapGimmickPathEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41858AA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41858AA = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MapGimmickPathEntity__CreatePK(
        int32_t mapGimmickId,
        int32_t pathId,
        int32_t commonReleaseId,
        const MethodInfo *method)
{
  if ( (byte_41858A9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&pathId);
    byte_41858A9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           mapGimmickId,
           pathId,
           commonReleaseId,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall MapGimmickPathEntity__CreatePrimaryKey(
        MapGimmickPathEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MapGimmickPathEntity__CreatePK(
           this->fields.mapGimmickId,
           this->fields.pathId,
           this->fields.commonReleaseId,
           v2);
}


int32_t __fastcall MapGimmickPathEntity__GetMapGimmickPathType(MapGimmickPathEntity_o *this, const MethodInfo *method)
{
  return this->fields.valueType;
}