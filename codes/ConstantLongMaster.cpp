void ConstantLongMaster___ctor(ConstantLongMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C270F0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string___ctor__);
    byte_4C270F0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    106,
    (const MethodInfo_338A52C *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string___ctor__);
}


int64_t ConstantLongMaster__GetValue(ConstantLongMaster_o *this, System_String_o *name, const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v6; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C270F2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntityFromId__);
    byte_4C270F2 = 1;
  }
  result = 0;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_338BF00 *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntityFromId__);
  if ( !EntityFromId )
    return -1;
  if ( !result )
    sub_1C2D6EC(EntityFromId, v6);
  return *(int64_t *)((char *)&off_18 + (_QWORD)result);
}


int64_t ConstantLongMaster__GetValue_41671288(
        ConstantLongMaster_o *this,
        System_String_o *name,
        int64_t def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C270F3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntityFromId__);
    byte_4C270F3 = 1;
  }
  result = 0;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_338BF00 *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntityFromId__);
  if ( EntityFromId )
  {
    if ( !result )
      sub_1C2D6EC(EntityFromId, v8);
    return *(int64_t *)((char *)&off_18 + (_QWORD)result);
  }
  return def;
}


float ConstantLongMaster__getRateValue(System_String_o *name, const MethodInfo *method)
{
  return (float)ConstantLongMaster__getValue(name, method) / 1000.0;
}


int64_t ConstantLongMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C270F1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ConstantLongMaster___);
    sub_1C2D490(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C270F1 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ConstantLongMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__object___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               (Il2CppObject *)name,
                               (const MethodInfo_338C89C *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity[1].monitor;
LABEL_10:
    sub_1C2D6EC(Instance, v4);
  }
  return -1;
}