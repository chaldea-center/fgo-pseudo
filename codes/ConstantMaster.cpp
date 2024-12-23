void __fastcall ConstantMaster___ctor(ConstantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B669FC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__, method);
    byte_4B669FC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    105,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_ConstantMaster__ConstantEntity__string___ctor__);
}


int32_t __fastcall ConstantMaster__GetFlagTransformSvtRestrict(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4B66A08 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_9433/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/, v1);
    byte_4B66A08 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9433/*"NOT_CHANGE_BEHAVIOR_TRANSFORM_SVT_ID"*/, v1);
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

  if ( (byte_4B66A00 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, name);
    byte_4B66A00 = 1;
  }
  result = 0LL;
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          name,
                          (const MethodInfo_2F595B0 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( EntityFromId_object )
  {
    if ( !result )
      sub_1BE4D28(EntityFromId_object, v8);
    return (float)SLODWORD(result[1].monitor) / 1000.0;
  }
  return def;
}


int32_t __fastcall ConstantMaster__GetValue(ConstantMaster_o *this, System_String_o *name, const MethodInfo *method)
{
  _BOOL8 EntityFromId_object; // x0
  __int64 v6; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B669FE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, name);
    byte_4B669FE = 1;
  }
  result = 0LL;
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          name,
                          (const MethodInfo_2F595B0 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( !EntityFromId_object )
    return -1;
  if ( !result )
    sub_1BE4D28(EntityFromId_object, v6);
  return (int32_t)result[1].monitor;
}


int32_t __fastcall ConstantMaster__GetValue_39976388(
        ConstantMaster_o *this,
        System_String_o *name,
        int32_t def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId_object; // x0
  __int64 v8; // x1
  Il2CppObject *result; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B669FF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, name);
    byte_4B669FF = 1;
  }
  result = 0LL;
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          name,
                          (const MethodInfo_2F595B0 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( EntityFromId_object )
  {
    if ( !result )
      sub_1BE4D28(EntityFromId_object, v8);
    return (int32_t)result[1].monitor;
  }
  return def;
}


bool __fastcall ConstantMaster__IsDisableServantEffectFilter(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4B66A02 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_5132/*"DISABLE_SERVANT_EFFECT_FILTER"*/, v1);
    byte_4B66A02 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_5132/*"DISABLE_SERVANT_EFFECT_FILTER"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsEnableFixGetQuestPhaseDetail(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4B66A09 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_5546/*"ENABLE_FIX_GET_QUEST_PHASE_DETAIL"*/, v1);
    byte_4B66A09 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_5546/*"ENABLE_FIX_GET_QUEST_PHASE_DETAIL"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20240804(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4B66A05 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_6524/*"FLAG_20240804"*/, v1);
    byte_4B66A05 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6524/*"FLAG_20240804"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFLAG20241004(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4B66A07 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_6525/*"FLAG_20241004"*/, v1);
    byte_4B66A07 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6525/*"FLAG_20241004"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsFlagTransformSvtRestrict(const MethodInfo *method)
{
  return ConstantMaster__GetFlagTransformSvtRestrict(method) > 0;
}


bool __fastcall ConstantMaster__IsNotDisplayBattleAttribute(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4B66A04 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_9434/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/, v1);
    byte_4B66A04 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9434/*"NOT_DISPLAY_BATTLE_ATTRIBUTE"*/, v1) == 1;
}


bool __fastcall ConstantMaster__IsNotUseRestrictionDialog(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4B66A03 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_9449/*"NOT_USE_RESTRICTION_DIALOG"*/, v1);
    byte_4B66A03 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_9449/*"NOT_USE_RESTRICTION_DIALOG"*/, v1) == 1;
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

  if ( (byte_4B66A01 & 1) == 0 )
  {
    sub_1BE4ACC(&System_DateTime_TypeInfo, v1);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_8446/*"LOGIN_DAY"*/, v3);
    byte_4B66A01 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8446/*"LOGIN_DAY"*/, v4);
  v8 = NetworkManager__getServerDateTime_39466056(Value, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v10.fields._dateData = (uint64_t)&dateData;
  v6 = System_DateTime__get_Date(v10, 0LL).fields._dateData;
  v11.fields._dateData = (uint64_t)&v8;
  v13.fields._dateData = System_DateTime__get_Date(v11, 0LL).fields._dateData;
  v12.fields._dateData = v6;
  return System_DateTime__op_Equality(v12, v13, 0LL);
}


bool __fastcall ConstantMaster__IsUseSimpleMesh(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4B66A06 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_6519/*"FIGURE_USE_SIMPLE_MESH"*/, v1);
    byte_4B66A06 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_6519/*"FIGURE_USE_SIMPLE_MESH"*/, v1) == 1;
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

  if ( (byte_4B669FD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ConstantMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B669FD = 1;
  }
  result = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase__TryGetEntityFromId_object_(
                               (DataMasterBase_o *)Instance,
                               &result,
                               name,
                               (const MethodInfo_2F595B0 *)Method_DataMasterBase_TryGetEntityFromId_ConstantEntity___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( result )
      return (int32_t)result[1].monitor;
LABEL_10:
    sub_1BE4D28(Instance, v6);
  }
  return -1;
}