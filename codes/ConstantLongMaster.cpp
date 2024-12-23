void __fastcall ConstantLongMaster___ctor(ConstantLongMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B669F8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string___ctor__, method);
    byte_4B669F8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    106,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string___ctor__);
}


int64_t __fastcall ConstantLongMaster__GetValue(
        ConstantLongMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId_object; // x0
  __int64 v6; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B669FA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_TryGetEntityFromId_ConstantLongEntity___, name);
    byte_4B669FA = 1;
  }
  result = 0LL;
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          name,
                          (const MethodInfo_2F595B0 *)Method_DataMasterBase_TryGetEntityFromId_ConstantLongEntity___);
  if ( !EntityFromId_object )
    return -1LL;
  if ( !result )
    sub_1BE4D28(EntityFromId_object, v6);
  return (int64_t)result[1].monitor;
}


int64_t __fastcall ConstantLongMaster__GetValue_39975832(
        ConstantLongMaster_o *this,
        System_String_o *name,
        int64_t def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId_object; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B669FB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_TryGetEntityFromId_ConstantLongEntity___, name);
    byte_4B669FB = 1;
  }
  result = 0LL;
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          name,
                          (const MethodInfo_2F595B0 *)Method_DataMasterBase_TryGetEntityFromId_ConstantLongEntity___);
  if ( EntityFromId_object )
  {
    if ( !result )
      sub_1BE4D28(EntityFromId_object, v8);
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

  if ( (byte_4B669F9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ConstantLongMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntity__, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B669F9 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ConstantLongMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__object___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               (Il2CppObject *)name,
                               (const MethodInfo_31FDB6C *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity[1].monitor;
LABEL_10:
    sub_1BE4D28(Instance, v6);
  }
  return -1LL;
}