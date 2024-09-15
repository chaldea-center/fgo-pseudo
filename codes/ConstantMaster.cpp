void __fastcall ConstantMaster___ctor(ConstantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2DD87 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__, method);
    byte_4A2DD87 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    101,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
}


int32_t __fastcall ConstantMaster__GetFlagTransformSvtRestrict(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A2DD97 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_9276/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/, v1);
    byte_4A2DD97 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9276/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/, v1);
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

  if ( (byte_4A2DD8B & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, name);
    byte_4A2DD8B = 1;
  }
  result = 0LL;
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          name,
                          (const MethodInfo_2E628A8 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( EntityFromId_object )
  {
    if ( !result )
      sub_1B7641C(EntityFromId_object, v8);
    return (float)SLODWORD(result[1].monitor) / 1000.0;
  }
  return def;
}


int32_t __fastcall ConstantMaster__GetValue(ConstantMaster_o *this, System_String_o *name, const MethodInfo *method)
{
  _BOOL8 EntityFromId_object; // x0
  __int64 v6; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A2DD89 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, name);
    byte_4A2DD89 = 1;
  }
  result = 0LL;
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          name,
                          (const MethodInfo_2E628A8 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( !EntityFromId_object )
    return -1;
  if ( !result )
    sub_1B7641C(EntityFromId_object, v6);
  return (int32_t)result[1].monitor;
}


int32_t __fastcall ConstantMaster__GetValue_38871636(
        ConstantMaster_o *this,
        System_String_o *name,
        int32_t def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId_object; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A2DD8A & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, name);
    byte_4A2DD8A = 1;
  }
  result = 0LL;
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          name,
                          (const MethodInfo_2E628A8 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( EntityFromId_object )
  {
    if ( !result )
      sub_1B7641C(EntityFromId_object, v8);
    return (int32_t)result[1].monitor;
  }
  return def;
}


bool __fastcall ConstantMaster__IsDisableServantEffectFilter(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A2DD92 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_5046/*"DISABLE_SERVANT_EFFECT_FILTER"*/, v1);
    byte_4A2DD92 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_5046/*"DISABLE_SERVANT_EFFECT_FILTER"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220101(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A2DD8D & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_6384/*"FLAG_20220101"*/, v1);
    byte_4A2DD8D = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6384/*"FLAG_20220101"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220119(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A2DD8E & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_6385/*"FLAG_20220119"*/, v1);
    byte_4A2DD8E = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6385/*"FLAG_20220119"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220511(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A2DD8F & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_6386/*"FLAG_20220511"*/, v1);
    byte_4A2DD8F = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6386/*"FLAG_20220511"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20220730(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A2DD91 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_6387/*"FLAG_20220730"*/, v1);
    byte_4A2DD91 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6387/*"FLAG_20220730"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20230402(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A2DD93 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_6388/*"FLAG_20230402"*/, v1);
    byte_4A2DD93 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6388/*"FLAG_20230402"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20240804(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A2DD96 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_6389/*"FLAG_20240804"*/, v1);
    byte_4A2DD96 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6389/*"FLAG_20240804"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFlag20211217(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A2DD8C & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_6383/*"FLAG_20211217"*/, v1);
    byte_4A2DD8C = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6383/*"FLAG_20211217"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFlagTransformSvtRestrict(const MethodInfo *method)
{
  return ConstantMaster__GetFlagTransformSvtRestrict(method) > 0;
}


bool __fastcall ConstantMaster__IsNotDisplayBattleAttribute(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A2DD95 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_9277/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/, v1);
    byte_4A2DD95 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9277/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsNotUseRestrictionDialog(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A2DD94 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_9292/*"NOT_USE_RESTRICTION_DIALOG"*/, v1);
    byte_4A2DD94 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9292/*"NOT_USE_RESTRICTION_DIALOG"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsOtherImage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  int32_t Value; // w0
  uint64_t v6; // x19
  uint64_t v8; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v10; // 0:x0.8
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x1.8

  if ( (byte_4A2DD90 & 1) == 0 )
  {
    sub_1B761C0(&System_DateTime_TypeInfo, v1);
    sub_1B761C0(&NetworkManager_TypeInfo, v2);
    sub_1B761C0(&StringLiteral_8299/*"LOGIN_DAY"*/, v3);
    byte_4A2DD90 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8299/*"LOGIN_DAY"*/, v4);
  v8 = NetworkManager__getServerDateTime_38212880(Value, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v10.fields._dateData = (uint64_t)&dateData;
  v6 = System_DateTime__get_Date(v10, 0LL).fields._dateData;
  v11.fields._dateData = (uint64_t)&v8;
  v13.fields._dateData = System_DateTime__get_Date(v11, 0LL).fields._dateData;
  v12.fields._dateData = v6;
  return System_DateTime__op_Equality(v12, v13, 0LL);
}


float __fastcall ConstantMaster__getRateValue(System_String_o *name, const MethodInfo *method)
{
  return (float)ConstantMaster__getValue(name, method) / 1000.0;
}


int32_t __fastcall ConstantMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A2DD88 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_ConstantMaster___, method);
    sub_1B761C0(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A2DD88 = 1;
  }
  result = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase__TryGetEntityFromId_object_(
                               (DataMasterBase_o *)Instance,
                               &result,
                               name,
                               (const MethodInfo_2E628A8 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( result )
      return (int32_t)result[1].monitor;
LABEL_10:
    sub_1B7641C(Instance, v6);
  }
  return -1;
}