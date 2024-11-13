void __fastcall MapGimmickPathEntity___ctor(MapGimmickPathEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16564 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16564 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MapGimmickPathEntity__CreatePK(
        int32_t mapGimmickId,
        int32_t pathId,
        int32_t commonReleaseId,
        const MethodInfo *method)
{
  if ( (byte_4B16563 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataEntityBase_CreateMultiplePK_int__int__int___,
      *(_QWORD *)&pathId,
      *(_QWORD *)&commonReleaseId);
    byte_4B16563 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           mapGimmickId,
           pathId,
           commonReleaseId,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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