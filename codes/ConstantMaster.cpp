void __fastcall ConstantMaster___ctor(ConstantMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16037 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__, method, v2);
    byte_4B16037 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    101,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
}


int32_t __fastcall ConstantMaster__GetFlagTransformSvtRestrict(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2

  if ( (byte_4B16043 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9411/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/, v1, v2);
    byte_4B16043 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9411/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/, v1);
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

  if ( (byte_4B1603B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, name, method);
    byte_4B1603B = 1;
  }
  result = 0LL;
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          name,
                          (const MethodInfo_2F13130 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( EntityFromId_object )
  {
    if ( !result )
      sub_1BCAA3C(EntityFromId_object, v8);
    return (float)SLODWORD(result[1].monitor) / 1000.0;
  }
  return def;
}


int32_t __fastcall ConstantMaster__GetValue(ConstantMaster_o *this, System_String_o *name, const MethodInfo *method)
{
  _BOOL8 EntityFromId_object; // x0
  __int64 v6; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16039 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, name, method);
    byte_4B16039 = 1;
  }
  result = 0LL;
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          name,
                          (const MethodInfo_2F13130 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( !EntityFromId_object )
    return -1;
  if ( !result )
    sub_1BCAA3C(EntityFromId_object, v6);
  return (int32_t)result[1].monitor;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ConstantMaster__GetValue_39773052(
        ConstantMaster_o *this,
        System_String_o *name,
        int32_t def,
        const MethodInfo *method)
{
  int32_t v4; // w19
  _BOOL8 EntityFromId_object; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  v4 = def;
  if ( (byte_4B1603A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, name, *(_QWORD *)&def);
    byte_4B1603A = 1;
  }
  result = 0LL;
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          name,
                          (const MethodInfo_2F13130 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( EntityFromId_object )
  {
    if ( !result )
      sub_1BCAA3C(EntityFromId_object, v8);
    return (int32_t)result[1].monitor;
  }
  return v4;
}


bool __fastcall ConstantMaster__IsDisableServantEffectFilter(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1603D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5121/*"DISABLE_SERVANT_EFFECT_FILTER"*/, v1, v2);
    byte_4B1603D = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_5121/*"DISABLE_SERVANT_EFFECT_FILTER"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20240804(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2

  if ( (byte_4B16040 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6508/*"FLAG_20240804"*/, v1, v2);
    byte_4B16040 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6508/*"FLAG_20240804"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20241004(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2

  if ( (byte_4B16042 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6509/*"FLAG_20241004"*/, v1, v2);
    byte_4B16042 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6509/*"FLAG_20241004"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFlagTransformSvtRestrict(const MethodInfo *method)
{
  return ConstantMaster__GetFlagTransformSvtRestrict(method) > 0;
}


bool __fastcall ConstantMaster__IsNotDisplayBattleAttribute(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1603F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9412/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/, v1, v2);
    byte_4B1603F = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9412/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsNotUseRestrictionDialog(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1603E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9427/*"NOT_USE_RESTRICTION_DIALOG"*/, v1, v2);
    byte_4B1603E = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9427/*"NOT_USE_RESTRICTION_DIALOG"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsOtherImage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x1
  int32_t Value; // w0
  __int64 v9; // x1
  uint64_t v10; // x19
  uint64_t v12; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v14; // 0:x0.8
  System_DateTime_o v15; // 0:x0.8
  System_DateTime_o v16; // 0:x0.8
  System_DateTime_o v17; // 0:x1.8

  if ( (byte_4B1603C & 1) == 0 )
  {
    sub_1BCA7E0(&System_DateTime_TypeInfo, v1, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_8426/*"LOGIN_DAY"*/, v5, v6);
    byte_4B1603C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8426/*"LOGIN_DAY"*/, v7);
  v12 = NetworkManager__getServerDateTime_39270492(Value, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v9);
  v14.fields._dateData = (uint64_t)&dateData;
  v10 = System_DateTime__get_Date(v14, 0LL).fields._dateData;
  v15.fields._dateData = (uint64_t)&v12;
  v17.fields._dateData = System_DateTime__get_Date(v15, 0LL).fields._dateData;
  v16.fields._dateData = v10;
  return System_DateTime__op_Equality(v16, v17, 0LL);
}


bool __fastcall ConstantMaster__IsUseSimpleMesh(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2

  if ( (byte_4B16041 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6503/*"FIGURE_USE_SIMPLE_MESH"*/, v1, v2);
    byte_4B16041 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6503/*"FIGURE_USE_SIMPLE_MESH"*/, v1) == 1;
}


float __fastcall ConstantMaster__getRateValue(System_String_o *name, const MethodInfo *method)
{
  return (float)ConstantMaster__getValue(name, method) / 1000.0;
}


int32_t __fastcall ConstantMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16038 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16038 = 1;
  }
  result = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase__TryGetEntityFromId_object_(
                               (DataMasterBase_o *)Instance,
                               &result,
                               name,
                               (const MethodInfo_2F13130 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( result )
      return (int32_t)result[1].monitor;
LABEL_10:
    sub_1BCAA3C(Instance, v9);
  }
  return -1;
}