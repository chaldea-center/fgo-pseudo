void __fastcall ConstantMaster___ctor(ConstantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AFA5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
    byte_4A5AFA5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    101,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
}


int32_t __fastcall ConstantMaster__GetFlagTransformSvtRestrict(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A5AFB5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9279/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/);
    byte_4A5AFB5 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9279/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/, v1);
}


float __fastcall ConstantMaster__GetRateValue(
        ConstantMaster_o *this,
        System_String_o *name,
        float def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId_object; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5AFA9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
    byte_4A5AFA9 = 1;
  }
  result = 0LL;
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          name,
                          (const MethodInfo_2E7FDA8 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( EntityFromId_object )
  {
    if ( !result )
      sub_1B8880C(EntityFromId_object, v8);
    return (float)SLODWORD(result[1].monitor) / 1000.0;
  }
  return def;
}


int32_t __fastcall ConstantMaster__GetValue(ConstantMaster_o *this, System_String_o *name, const MethodInfo *method)
{
  _BOOL8 EntityFromId_object; // x0
  __int64 v6; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5AFA7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
    byte_4A5AFA7 = 1;
  }
  result = 0LL;
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          name,
                          (const MethodInfo_2E7FDA8 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( !EntityFromId_object )
    return -1;
  if ( !result )
    sub_1B8880C(EntityFromId_object, v6);
  return (int32_t)result[1].monitor;
}


int32_t __fastcall ConstantMaster__GetValue_39051884(
        ConstantMaster_o *this,
        System_String_o *name,
        int32_t def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId_object; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5AFA8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
    byte_4A5AFA8 = 1;
  }
  result = 0LL;
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          name,
                          (const MethodInfo_2E7FDA8 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( EntityFromId_object )
  {
    if ( !result )
      sub_1B8880C(EntityFromId_object, v8);
    return (int32_t)result[1].monitor;
  }
  return def;
}


bool __fastcall ConstantMaster__IsDisableServantEffectFilter(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A5AFB0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5047/*"DISABLE_SERVANT_EFFECT_FILTER"*/);
    byte_4A5AFB0 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_5047/*"DISABLE_SERVANT_EFFECT_FILTER"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220101(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A5AFAB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6385/*"FLAG_20220101"*/);
    byte_4A5AFAB = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6385/*"FLAG_20220101"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220119(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A5AFAC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6386/*"FLAG_20220119"*/);
    byte_4A5AFAC = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6386/*"FLAG_20220119"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220511(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A5AFAD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6387/*"FLAG_20220511"*/);
    byte_4A5AFAD = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6387/*"FLAG_20220511"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220730(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A5AFAF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6388/*"FLAG_20220730"*/);
    byte_4A5AFAF = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6388/*"FLAG_20220730"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20230402(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A5AFB1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6389/*"FLAG_20230402"*/);
    byte_4A5AFB1 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6389/*"FLAG_20230402"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20240804(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A5AFB4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6390/*"FLAG_20240804"*/);
    byte_4A5AFB4 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6390/*"FLAG_20240804"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFlag20211217(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A5AFAA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6384/*"FLAG_20211217"*/);
    byte_4A5AFAA = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6384/*"FLAG_20211217"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFlagTransformSvtRestrict(const MethodInfo *method)
{
  return ConstantMaster__GetFlagTransformSvtRestrict(method) > 0;
}


bool __fastcall ConstantMaster__IsNotDisplayBattleAttribute(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A5AFB3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9280/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/);
    byte_4A5AFB3 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9280/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsNotUseRestrictionDialog(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A5AFB2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9295/*"NOT_USE_RESTRICTION_DIALOG"*/);
    byte_4A5AFB2 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9295/*"NOT_USE_RESTRICTION_DIALOG"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsOtherImage(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  int32_t Value; // w0
  uint64_t v3; // x19
  uint64_t v5; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v7; // 0:x0.8
  System_DateTime_o v8; // 0:x0.8
  System_DateTime_o v9; // 0:x0.8
  System_DateTime_o v10; // 0:x1.8

  if ( (byte_4A5AFAE & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8300/*"LOGIN_DAY"*/);
    byte_4A5AFAE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8300/*"LOGIN_DAY"*/, v1);
  v5 = NetworkManager__getServerDateTime_38479168(Value, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v7.fields._dateData = (uint64_t)&dateData;
  v3 = System_DateTime__get_Date(v7, 0LL).fields._dateData;
  v8.fields._dateData = (uint64_t)&v5;
  v10.fields._dateData = System_DateTime__get_Date(v8, 0LL).fields._dateData;
  v9.fields._dateData = v3;
  return System_DateTime__op_Equality(v9, v10, 0LL);
}


float __fastcall ConstantMaster__getRateValue(System_String_o *name, const MethodInfo *method)
{
  return (float)ConstantMaster__getValue(name, method) / 1000.0;
}


int32_t __fastcall ConstantMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5AFA6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1B885B0(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AFA6 = 1;
  }
  result = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase__TryGetEntityFromId_object_(
                               (DataMasterBase_o *)Instance,
                               &result,
                               name,
                               (const MethodInfo_2E7FDA8 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( result )
      return (int32_t)result[1].monitor;
LABEL_10:
    sub_1B8880C(Instance, v4);
  }
  return -1;
}