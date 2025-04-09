void __fastcall ConstantLongMaster___ctor(ConstantLongMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BACA1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string___ctor__, method);
    byte_49BACA1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    106,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string___ctor__);
}


int64_t __fastcall ConstantLongMaster__GetValue(
        ConstantLongMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v6; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BACA3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntityFromId__, name);
    byte_49BACA3 = 1;
  }
  result = 0LL;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_31A1B04 *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntityFromId__);
  if ( !EntityFromId )
    return -1LL;
  if ( !result )
    sub_1B4D1EC(EntityFromId, v6);
  return (int64_t)result[1].monitor;
}


int64_t __fastcall ConstantLongMaster__GetValue_39608788(
        ConstantLongMaster_o *this,
        System_String_o *name,
        int64_t def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49BACA4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntityFromId__, name);
    byte_49BACA4 = 1;
  }
  result = 0LL;
  EntityFromId = DataMasterBase_object__object__object___TryGetEntityFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &result,
                   name,
                   (const MethodInfo_31A1B04 *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntityFromId__);
  if ( EntityFromId )
  {
    if ( !result )
      sub_1B4D1EC(EntityFromId, v8);
    return (int64_t)result[1].monitor;
  }
  return def;
}


float __fastcall ConstantLongMaster__getRateValue(System_String_o *name, const MethodInfo *method)
{
  return (float)ConstantLongMaster__getValue(name, method) / 1000.0;
}


int64_t __fastcall ConstantLongMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BACA2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ConstantLongMaster___, method);
    sub_1B4CF90(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntity__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49BACA2 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ConstantLongMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__object___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               (Il2CppObject *)name,
                               (const MethodInfo_31A24A0 *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity[1].monitor;
LABEL_10:
    sub_1B4D1EC(Instance, v6);
  }
  return -1LL;
}