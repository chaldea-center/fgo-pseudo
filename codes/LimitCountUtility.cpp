void LimitCountUtility___ctor(LimitCountUtility_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool LimitCountUtility__CheckOption(int32_t svtId, int32_t limitCountStage, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_5937B31 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    byte_5937B31 = 1;
  }
  if ( limitCountStage == 4 )
  {
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, *(_QWORD *)&limitCountStage);
    if ( !OptionManager__GetFriendImageLimitCount(0) )
      return 0;
  }
  else if ( limitCountStage >= 11 )
  {
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, *(_QWORD *)&limitCountStage);
    if ( !OptionManager__GetFriendCostume(0) )
      return 0;
  }
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, *(_QWORD *)&limitCountStage);
  if ( OptionManager__GetSpoilerSetting(0) )
    return 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v7);
  return ServantLimitSpoilerProtectionMaster__CheckLimitCount(
           (ServantLimitSpoilerProtectionMaster_o *)Master_object,
           svtId,
           limitCountStage,
           0);
}


int32_t LimitCountUtility__ConvertLimitCountStageIndexOneToZero(int32_t limitCountStage, const MethodInfo *method)
{
  int32_t v2; // w8

  v2 = limitCountStage - 1;
  if ( limitCountStage <= 0 )
    v2 = 0;
  if ( limitCountStage <= 4 )
    return v2;
  return limitCountStage;
}


int32_t LimitCountUtility__ConvertLimitCountStageIndexZeroToOne(int32_t limitCountStage, const MethodInfo *method)
{
  if ( limitCountStage < 5 )
    ++limitCountStage;
  return limitCountStage;
}


int32_t LimitCountUtility__ConvertLimitCountToStage(
        int32_t stageLimitCount,
        bool hasRewardStage,
        const MethodInfo *method)
{
  if ( stageLimitCount <= 4 )
  {
    if ( stageLimitCount > 2 )
    {
      if ( stageLimitCount != 3 )
      {
        if ( hasRewardStage )
          return 4;
        else
          return 3;
      }
    }
    else if ( stageLimitCount == 1 )
    {
      return 2;
    }
    else if ( stageLimitCount != 2 )
    {
      return 1;
    }
  }
  return stageLimitCount;
}


// local variable allocation has failed, the output may be wrong!
int32_t LimitCountUtility__ConvertStageToLimitCount(
        int32_t limitCount,
        int32_t limitCountStage,
        bool hasRewardStage,
        const MethodInfo *method)
{
  int v5; // w20

  v5 = limitCountStage;
  if ( (byte_5937B2F & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5937B2F = 1;
  }
  if ( v5 > 4 )
    return v5;
  if ( v5 != 2 )
  {
    if ( v5 == 3 )
    {
      if ( hasRewardStage )
        v5 = 3;
      else
        v5 = 4;
    }
    else if ( v5 != 4 )
    {
      v5 = 0;
    }
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&limitCountStage);
  return System_Math__Min_76940292(v5, limitCount, 0);
}


int32_t LimitCountUtility__ConvertStageToLimitCount_47970664(int32_t limitCountStage, const MethodInfo *method)
{
  if ( limitCountStage <= 4 )
  {
    if ( (unsigned int)(limitCountStage - 2) > 2 )
      return 0;
    else
      return dword_ED1114[limitCountStage - 2];
  }
  return limitCountStage;
}


int32_t LimitCountUtility__GetLimitCountStageCheckZero(
        int32_t limitCount,
        int32_t limitCountStage,
        bool hasRewardStage,
        const MethodInfo *method)
{
  if ( limitCountStage <= 0 )
  {
    if ( limitCount > 4 )
      return limitCount;
    if ( limitCount > 2 )
    {
      if ( limitCount == 3 )
        return limitCount;
      if ( hasRewardStage )
        return 4;
      else
        return 3;
    }
    else if ( limitCount == 1 || limitCount == 2 )
    {
      return 2;
    }
    else
    {
      return 1;
    }
  }
  return limitCountStage;
}


System_Collections_Generic_IEnumerable_int__o *LimitCountUtility__GetLimitCountStageList(
        int32_t maxLimitCountStage,
        bool hasRewardStage,
        const MethodInfo *method)
{
  bool v5; // w21
  __int64 v6; // x20
  int32_t CurrentManagedThreadId; // w0
  System_Collections_Generic_IEnumerable_int__o *result; // x0

  if ( (byte_5937B32 & 1) == 0 )
  {
    sub_21FFC50(&LimitCountUtility__GetLimitCountStageList_d__21_TypeInfo);
    byte_5937B32 = 1;
  }
  v5 = hasRewardStage;
  v6 = sub_21FFEBC(LimitCountUtility__GetLimitCountStageList_d__21_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = -2;
  CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
  *(_DWORD *)(v6 + 36) = maxLimitCountStage;
  *(_DWORD *)(v6 + 24) = CurrentManagedThreadId;
  result = (System_Collections_Generic_IEnumerable_int__o *)v6;
  *(_BYTE *)(v6 + 29) = v5;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t LimitCountUtility__GetOptionAfter(
        int32_t svtId,
        int32_t limitCount,
        int32_t limitCountStage,
        bool hasRewardStage,
        const MethodInfo *method)
{
  int v5; // w21
  int v8; // w22
  int32_t result; // w0

  v5 = limitCountStage;
  if ( limitCountStage >= 2 )
  {
    if ( hasRewardStage )
      v8 = 4;
    else
      v8 = 3;
    while ( !LimitCountUtility__CheckOption(svtId, v5, *(const MethodInfo **)&limitCountStage) )
    {
      if ( (unsigned int)v5 < 0xB )
      {
        --v5;
      }
      else
      {
        v5 = limitCount;
        if ( limitCount <= 4 )
        {
          result = 1;
          if ( limitCount > 2 )
          {
            v5 = limitCount;
            if ( limitCount != 3 )
              v5 = v8;
          }
          else
          {
            if ( limitCount != 1 && limitCount != 2 )
              return result;
            v5 = 2;
          }
        }
      }
      result = v5;
      if ( v5 <= 1 )
        return result;
    }
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
int32_t LimitCountUtility__GetSealAfter(
        int32_t svtId,
        int32_t limitCount,
        int32_t limitCountStage,
        bool hasRewardStage,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int32_t v10; // w22
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  int ServantLimitCountSealAfter; // w0

  if ( (byte_5937B30 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5937B30 = 1;
  }
  if ( limitCountStage <= 4 )
  {
    v10 = LimitCountUtility__ConvertStageToLimitCount(
            limitCount,
            limitCountStage,
            hasRewardStage,
            (const MethodInfo *)hasRewardStage);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !Master_object )
      sub_21FFECC(0, v12);
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Master_object,
                                   svtId,
                                   v10,
                                   0);
    if ( v10 != ServantLimitCountSealAfter )
    {
      if ( ServantLimitCountSealAfter <= 4 )
      {
        if ( ServantLimitCountSealAfter > 2 )
        {
          limitCountStage = ServantLimitCountSealAfter;
          if ( ServantLimitCountSealAfter != 3 )
          {
            if ( hasRewardStage )
              return 4;
            else
              return 3;
          }
        }
        else if ( ServantLimitCountSealAfter == 1 || ServantLimitCountSealAfter == 2 )
        {
          return 2;
        }
        else
        {
          return 1;
        }
      }
      else
      {
        return ServantLimitCountSealAfter;
      }
    }
  }
  return limitCountStage;
}


bool LimitCountUtility__IsCostume(int32_t value, const MethodInfo *method)
{
  return value > 10;
}


bool LimitCountUtility__IsOtherImage(int32_t value, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0

  if ( (byte_5937B2E & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5937B2E = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  return v3->static_fields->OtherImageLimitCount == value;
}


bool LimitCountUtility__IsRewardStage(int32_t limitCountStage, const MethodInfo *method)
{
  return limitCountStage == 4;
}


bool LimitCountUtility__IsSealed(
        int32_t svtId,
        int32_t limitCount,
        int32_t limitCountStage,
        bool hasRewardStage,
        const MethodInfo *method)
{
  return LimitCountUtility__GetSealAfter(svtId, limitCount, limitCountStage, hasRewardStage, method) != limitCountStage;
}


bool LimitCountUtility__IsSpecialStage(int32_t value, const MethodInfo *method)
{
  return value > 4;
}


void LimitCountUtility__GetLimitCountStageList_d__21___ctor(
        LimitCountUtility__GetLimitCountStageList_d__21_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool LimitCountUtility__GetLimitCountStageList_d__21__MoveNext(
        LimitCountUtility__GetLimitCountStageList_d__21_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  int32_t i_5__3; // w8
  int32_t loop_5__2; // w10
  int v5; // w9
  _BOOL4 hasRewardStage; // w8
  int32_t v7; // w8
  bool v8; // w8
  int32_t v9; // w10

  _1__state = this->fields.__1__state;
  if ( (unsigned int)(_1__state - 1) >= 2 )
  {
    if ( _1__state )
      return 0;
    hasRewardStage = this->fields.hasRewardStage;
    v5 = 1;
    this->fields.__1__state = -1;
    if ( hasRewardStage )
      v7 = 4;
    else
      v7 = 3;
    *(_QWORD *)&this->fields._loop_5__2 = 0x100000004LL;
    this->fields._loop_5__2 = v7;
  }
  else
  {
    loop_5__2 = this->fields._loop_5__2;
    i_5__3 = this->fields._i_5__3;
    this->fields.__1__state = -1;
    v5 = i_5__3 + 1;
    this->fields._i_5__3 = i_5__3 + 1;
    if ( i_5__3 + 1 > loop_5__2 )
      return 0;
  }
  v8 = 1;
  if ( v5 <= this->fields.maxLimitCountStage )
  {
    v9 = 1;
  }
  else
  {
    v5 = -v5;
    v9 = 2;
  }
  this->fields.__1__state = v9;
  this->fields.__2__current = v5;
  return v8;
}


System_Collections_Generic_IEnumerator_int__o *LimitCountUtility__GetLimitCountStageList_d__21__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        LimitCountUtility__GetLimitCountStageList_d__21_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  LimitCountUtility__GetLimitCountStageList_d__21_o *v4; // x20
  bool _3__hasRewardStage; // w9
  System_Collections_Generic_IEnumerator_int__o *result; // x0

  if ( (byte_5937B33 & 1) == 0 )
  {
    sub_21FFC50(&LimitCountUtility__GetLimitCountStageList_d__21_TypeInfo);
    byte_5937B33 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v4 = this;
  }
  else
  {
    v4 = (LimitCountUtility__GetLimitCountStageList_d__21_o *)sub_21FFEBC(LimitCountUtility__GetLimitCountStageList_d__21_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__hasRewardStage = this->fields.__3__hasRewardStage;
  result = (System_Collections_Generic_IEnumerator_int__o *)v4;
  v4->fields.maxLimitCountStage = this->fields.__3__maxLimitCountStage;
  v4->fields.hasRewardStage = _3__hasRewardStage;
  return result;
}


int32_t LimitCountUtility__GetLimitCountStageList_d__21__System_Collections_Generic_IEnumerator_System_Int32__get_Current(
        LimitCountUtility__GetLimitCountStageList_d__21_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn LimitCountUtility__GetLimitCountStageList_d__21__System_Collections_IEnumerator_Reset(
        LimitCountUtility__GetLimitCountStageList_d__21_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_LimitCountUtility__GetLimitCountStageList_d__21_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *LimitCountUtility__GetLimitCountStageList_d__21__System_Collections_IEnumerator_get_Current(
        LimitCountUtility__GetLimitCountStageList_d__21_o *this,
        const MethodInfo *method)
{
  int32_t _2__current; // [xsp+Ch] [xbp-4h] BYREF

  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &_2__current);
}


void LimitCountUtility__GetLimitCountStageList_d__21__System_IDisposable_Dispose(
        LimitCountUtility__GetLimitCountStageList_d__21_o *this,
        const MethodInfo *method)
{
  ;
}