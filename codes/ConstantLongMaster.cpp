void ConstantLongMaster___ctor(ConstantLongMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE4B8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string___ctor__);
    byte_4CEE4B8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    106,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string___ctor__);
}


int64_t ConstantLongMaster__GetValue(
        ConstantLongMaster_o *this,
        System_String_o *name,
        int64_t def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEE4B9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntityFromId__);
    byte_4CEE4B9 = 1;
  }
  result = 0;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_3432464 *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntityFromId__);
  if ( EntityFromId )
  {
    if ( !result )
      sub_1C7BD40(EntityFromId, v8);
    return *(int64_t *)((char *)&off_18 + (_QWORD)result);
  }
  return def;
}