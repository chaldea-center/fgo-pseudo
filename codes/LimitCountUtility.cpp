void LimitCountUtility___ctor(LimitCountUtility_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool LimitCountUtility__CheckOption(int32_t svtId, int32_t limitCountStage, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4D2BD29 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&OptionManager_TypeInfo);
    byte_4D2BD29 = 1;
  }
  if ( limitCountStage == 4 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( !OptionManager__GetFriendImageLimitCount(0) )
      return 0;
  }
  else if ( limitCountStage >= 11 )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( !OptionManager__GetFriendCostume(0) )
      return 0;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetSpoilerSetting(0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___);
  if ( !Master_object )
    sub_1C942F0(0, v6);
  return ServantLimitSpoilerProtectionMaster__CheckLimitCount(
           (ServantLimitSpoilerProtectionMaster_o *)Master_object,
           svtId,
           limitCountStage,
           0);
}


int32_t LimitCountUtility__ConvertLimitCountStageIndexOneToZero(int32_t limitCountStage, const MethodInfo *method)
{
  if ( limitCountStage <= 4 )
  {
    if ( limitCountStage <= 0 )
      return 0;
    else
      --limitCountStage;
  }
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
    switch ( stageLimitCount )
    {
      case 1:
      case 2:
        stageLimitCount = 2;
        break;
      case 3:
        return stageLimitCount;
      case 4:
        if ( hasRewardStage )
          stageLimitCount = 4;
        else
          stageLimitCount = 3;
        break;
      default:
        stageLimitCount = 1;
        break;
    }
  }
  return stageLimitCount;
}


int32_t LimitCountUtility__ConvertStageToLimitCount(
        int32_t limitCount,
        int32_t limitCountStage,
        bool hasRewardStage,
        const MethodInfo *method)
{
  if ( (byte_4D2BD27 & 1) == 0 )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D2BD27 = 1;
  }
  if ( limitCountStage > 4 )
    return limitCountStage;
  if ( limitCountStage != 2 )
  {
    if ( limitCountStage == 3 )
    {
      if ( hasRewardStage )
        limitCountStage = 3;
      else
        limitCountStage = 4;
    }
    else if ( limitCountStage != 4 )
    {
      limitCountStage = 0;
    }
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_65939892(limitCountStage, limitCount, 0);
}


int32_t LimitCountUtility__ConvertStageToLimitCount_41797224(int32_t limitCountStage, const MethodInfo *method)
{
  if ( limitCountStage <= 4 )
  {
    if ( (unsigned int)(limitCountStage - 2) > 2 )
      return 0;
    else
      return dword_D337C4[limitCountStage - 2];
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
    {
      return limitCount;
    }
    else
    {
      limitCountStage = limitCount;
      switch ( limitCount )
      {
        case 1:
        case 2:
          limitCountStage = 2;
          break;
        case 3:
          return limitCountStage;
        case 4:
          if ( hasRewardStage )
            limitCountStage = 4;
          else
            limitCountStage = 3;
          break;
        default:
          limitCountStage = 1;
          break;
      }
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

  if ( (byte_4D2BD2A & 1) == 0 )
  {
    sub_1C94098(&LimitCountUtility__GetLimitCountStageList_d__21_TypeInfo);
    byte_4D2BD2A = 1;
  }
  v5 = hasRewardStage;
  v6 = sub_1C942E4(LimitCountUtility__GetLimitCountStageList_d__21_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = -2;
  *(_DWORD *)(v6 + 24) = System_Environment__get_CurrentManagedThreadId(0);
  *(_DWORD *)(v6 + 36) = maxLimitCountStage;
  *(_BYTE *)(v6 + 29) = v5;
  return (System_Collections_Generic_IEnumerable_int__o *)v6;
}


// local variable allocation has failed, the output may be wrong!
int32_t LimitCountUtility__GetOptionAfter(
        int32_t svtId,
        int32_t limitCount,
        int32_t limitCountStage,
        bool hasRewardStage,
        const MethodInfo *method)
{
  int v5; // w19
  int v8; // w22
  int v9; // w23

  v5 = limitCountStage;
  if ( limitCountStage >= 2 )
  {
    v8 = limitCount - 1;
    if ( hasRewardStage )
      v9 = 4;
    else
      v9 = 3;
    while ( !LimitCountUtility__CheckOption(svtId, v5, *(const MethodInfo **)&limitCountStage) )
    {
      if ( v5 < 11 )
      {
        --v5;
      }
      else
      {
        v5 = limitCount;
        if ( limitCount <= 4 )
        {
          v5 = limitCount;
          switch ( v8 )
          {
            case 0:
            case 1:
              v5 = 2;
              goto LABEL_11;
            case 2:
              goto LABEL_11;
            case 3:
              v5 = v9;
              goto LABEL_11;
            default:
              v5 = 1;
              break;
          }
          return v5;
        }
      }
LABEL_11:
      if ( v5 <= 1 )
        return v5;
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
  int32_t v9; // w22
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  int ServantLimitCountSealAfter; // w0

  if ( (byte_4D2BD28 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2BD28 = 1;
  }
  if ( limitCountStage <= 4 )
  {
    v9 = LimitCountUtility__ConvertStageToLimitCount(
           limitCount,
           limitCountStage,
           hasRewardStage,
           (const MethodInfo *)hasRewardStage);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !Master_object )
      sub_1C942F0(0, v11);
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Master_object,
                                   svtId,
                                   v9,
                                   0);
    if ( v9 != ServantLimitCountSealAfter )
    {
      limitCountStage = ServantLimitCountSealAfter;
      if ( ServantLimitCountSealAfter <= 4 )
      {
        switch ( ServantLimitCountSealAfter )
        {
          case 1:
          case 2:
            limitCountStage = 2;
            break;
          case 3:
            return limitCountStage;
          case 4:
            if ( hasRewardStage )
              limitCountStage = 4;
            else
              limitCountStage = 3;
            break;
          default:
            limitCountStage = 1;
            break;
        }
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

  if ( (byte_4D2BD26 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D2BD26 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
  int32_t v5; // w9
  int32_t v6; // w8
  bool v7; // w8

  _1__state = this->fields.__1__state;
  if ( (unsigned int)(_1__state - 1) >= 2 )
  {
    if ( _1__state )
      return 0;
    v5 = 1;
    if ( this->fields.hasRewardStage )
      v6 = 4;
    else
      v6 = 3;
    this->fields._loop_5__2 = v6;
    this->fields._i_5__3 = 1;
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
  v7 = 1;
  if ( v5 <= this->fields.maxLimitCountStage )
  {
    this->fields.__1__state = 1;
    this->fields.__2__current = v5;
  }
  else
  {
    *(_QWORD *)&this->fields.__1__state = 0xFFFFFFFF00000002LL;
  }
  return v7;
}


System_Collections_Generic_IEnumerator_int__o *LimitCountUtility__GetLimitCountStageList_d__21__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        LimitCountUtility__GetLimitCountStageList_d__21_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  LimitCountUtility__GetLimitCountStageList_d__21_o *v4; // x20
  System_Collections_Generic_IEnumerator_int__o *result; // x0

  if ( (byte_4D2BD2C & 1) == 0 )
  {
    sub_1C94098(&LimitCountUtility__GetLimitCountStageList_d__21_TypeInfo);
    byte_4D2BD2C = 1;
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
    v4 = (LimitCountUtility__GetLimitCountStageList_d__21_o *)sub_1C942E4(LimitCountUtility__GetLimitCountStageList_d__21_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  result = (System_Collections_Generic_IEnumerator_int__o *)v4;
  v4->fields.maxLimitCountStage = this->fields.__3__maxLimitCountStage;
  v4->fields.hasRewardStage = this->fields.__3__hasRewardStage;
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_LimitCountUtility__GetLimitCountStageList_d__21_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *LimitCountUtility__GetLimitCountStageList_d__21__System_Collections_IEnumerator_get_Current(
        LimitCountUtility__GetLimitCountStageList_d__21_o *this,
        const MethodInfo *method)
{
  int32_t _2__current; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2BD2B & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    byte_4D2BD2B = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &_2__current);
}


void LimitCountUtility__GetLimitCountStageList_d__21__System_IDisposable_Dispose(
        LimitCountUtility__GetLimitCountStageList_d__21_o *this,
        const MethodInfo *method)
{
  ;
}