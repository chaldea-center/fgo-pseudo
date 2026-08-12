void ShopNotice___ctor(ShopNotice_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopNotice__CompareShopListNotice(ShopNotice_o *this, ShopListNotice_o *listNotice, const MethodInfo *method)
{
  int32_t LimitedType_k__BackingField; // w21
  System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType__c *v6; // x0
  System_Func_T1__T2__T3__T4__TResult__o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  bool IsSpecialSummonable_k__BackingField; // w10
  bool IsStartUpSummon_k__BackingField; // w11
  int32_t v12; // w12
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  int64_t PeriodTimeLimit_k__BackingField; // x8
  int64_t ExchangeServatTimeLimit_k__BackingField; // x1

  if ( (byte_596C875 & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType__TypeInfo);
    sub_2213A60(&Method_ShopListNotice_GetShopLimitedType__);
    byte_596C875 = 1;
  }
  if ( listNotice )
  {
    LimitedType_k__BackingField = listNotice->fields._LimitedType_k__BackingField;
    v6 = System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType__TypeInfo;
    this->fields._IsShowNew_k__BackingField |= listNotice->fields._IsShowNew_k__BackingField;
    v7 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_2213CCC(v6);
    System_Func_bool__bool__bool__bool__Int32Enum____ctor(
      v7,
      (Il2CppObject *)listNotice,
      Method_ShopListNotice_GetShopLimitedType__,
      0);
    ShopNotice__SetLimitedType(
      this,
      LimitedType_k__BackingField,
      (System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType__o *)v7,
      v8);
    IsSpecialSummonable_k__BackingField = listNotice->fields._IsSpecialSummonable_k__BackingField;
    IsStartUpSummon_k__BackingField = this->fields._IsStartUpSummon_k__BackingField;
    v12 = listNotice->fields._LimitedType_k__BackingField;
    this->fields._IsIndefiniteExchangeServant_k__BackingField |= listNotice->fields._IsIndefiniteExchangeServant_k__BackingField;
    this->fields._IsStartUpSummon_k__BackingField = IsStartUpSummon_k__BackingField
                                                 || IsSpecialSummonable_k__BackingField;
    if ( v12 )
    {
      ShopNotice__SetPeriodTimeLimit(this, listNotice->fields._PeriodTimeLimit_k__BackingField, v9);
      ShopNotice__SetMonthlyTimeLimit(this, listNotice->fields._MonthlyTimeLimit_k__BackingField, v13);
      ShopNotice__SetExchangeServantTimeLimit(
        this,
        listNotice->fields._ExchangeServatTimeLimit_k__BackingField,
        listNotice->fields._ExchangeServantEventId_k__BackingField,
        v14);
      PeriodTimeLimit_k__BackingField = listNotice->fields._PeriodTimeLimit_k__BackingField;
      if ( PeriodTimeLimit_k__BackingField >= listNotice->fields._MonthlyTimeLimit_k__BackingField )
        PeriodTimeLimit_k__BackingField = listNotice->fields._MonthlyTimeLimit_k__BackingField;
      if ( PeriodTimeLimit_k__BackingField >= listNotice->fields._ExchangeServatTimeLimit_k__BackingField )
        ExchangeServatTimeLimit_k__BackingField = listNotice->fields._ExchangeServatTimeLimit_k__BackingField;
      else
        ExchangeServatTimeLimit_k__BackingField = PeriodTimeLimit_k__BackingField;
      ShopNotice__SetMostRecentTimeLimit(this, ExchangeServatTimeLimit_k__BackingField, v15);
    }
  }
}


bool ShopNotice__HasFlag(ShopNotice_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.limitedTypeFlag & flag) != 0;
}


// local variable allocation has failed, the output may be wrong!
void ShopNotice__SetExchangeServantTimeLimit(
        ShopNotice_o *this,
        int64_t timeLimit,
        int32_t eventId,
        const MethodInfo *method)
{
  int64_t ExchangeServantTimeLimit_k__BackingField; // x8

  if ( (byte_596C878 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596C878 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, timeLimit, *(_QWORD *)&eventId);
  if ( NetworkManager__getTime(0) <= timeLimit )
  {
    ExchangeServantTimeLimit_k__BackingField = this->fields._ExchangeServantTimeLimit_k__BackingField;
    if ( !ExchangeServantTimeLimit_k__BackingField || ExchangeServantTimeLimit_k__BackingField > timeLimit )
    {
      this->fields._ExchangeServantTimeLimit_k__BackingField = timeLimit;
      this->fields._ExchangeServantEventId_k__BackingField = eventId;
    }
  }
}


void ShopNotice__SetFlag(ShopNotice_o *this, int32_t type, const MethodInfo *method)
{
  if ( (unsigned int)(type - 1) <= 3 )
    type = *((_DWORD *)&xmmword_E9CBD0 + (unsigned int)(type - 1));
  this->fields.limitedTypeFlag |= type;
}


void ShopNotice__SetIsIndefiniteExchangeServant(
        ShopNotice_o *this,
        bool isIndefiniteExchangeServant,
        const MethodInfo *method)
{
  this->fields._IsIndefiniteExchangeServant_k__BackingField = this->fields._IsIndefiniteExchangeServant_k__BackingField
                                                           || isIndefiniteExchangeServant;
}


void ShopNotice__SetIsShowNew(ShopNotice_o *this, bool isShowNew, const MethodInfo *method)
{
  this->fields._IsShowNew_k__BackingField = this->fields._IsShowNew_k__BackingField || isShowNew;
}


void ShopNotice__SetIsSpecialSummonable(ShopNotice_o *this, bool isSpecialSummonable, const MethodInfo *method)
{
  this->fields._IsStartUpSummon_k__BackingField = this->fields._IsStartUpSummon_k__BackingField || isSpecialSummonable;
}


// local variable allocation has failed, the output may be wrong!
void ShopNotice__SetLimitedType(
        ShopNotice_o *this,
        int32_t type,
        System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType__o *GetShopLimitedType,
        const MethodInfo *method)
{
  unsigned int v4; // w9

  if ( type && this->fields._LimitedType_k__BackingField != 30 )
  {
    if ( (unsigned int)type <= 4 )
      *(_QWORD *)&type = *((unsigned int *)&xmmword_E9CBD0 + type - 1);
    v4 = this->fields.limitedTypeFlag | type;
    this->fields.limitedTypeFlag = v4;
    if ( !GetShopLimitedType )
      sub_2213CDC(this, *(_QWORD *)&type);
    this->fields._LimitedType_k__BackingField = ((__int64 (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, _QWORD, intptr_t))GetShopLimitedType->fields.invoke_impl)(
                                                  GetShopLimitedType->fields.method_code,
                                                  (v4 >> 1) & 1,
                                                  (v4 >> 2) & 1,
                                                  (v4 >> 3) & 1,
                                                  (v4 >> 4) & 1,
                                                  GetShopLimitedType->fields.method);
  }
}


void ShopNotice__SetMonthlyTimeLimit(ShopNotice_o *this, int64_t timeLimit, const MethodInfo *method)
{
  int64_t MonthlyTimeLimit_k__BackingField; // x8
  int64_t v6; // x9
  int64_t v7; // x8

  if ( (byte_596C877 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596C877 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, timeLimit, method);
  if ( NetworkManager__getTime(0) <= timeLimit )
  {
    MonthlyTimeLimit_k__BackingField = this->fields._MonthlyTimeLimit_k__BackingField;
    if ( MonthlyTimeLimit_k__BackingField >= timeLimit )
      v6 = timeLimit;
    else
      v6 = this->fields._MonthlyTimeLimit_k__BackingField;
    if ( MonthlyTimeLimit_k__BackingField )
      v7 = v6;
    else
      v7 = timeLimit;
    this->fields._MonthlyTimeLimit_k__BackingField = v7;
  }
}


void ShopNotice__SetMostRecentTimeLimit(ShopNotice_o *this, int64_t timeLimit, const MethodInfo *method)
{
  int64_t MostRecentTimeLimit_k__BackingField; // x8
  int64_t v6; // x9
  int64_t v7; // x8

  if ( (byte_596C879 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596C879 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, timeLimit, method);
  if ( NetworkManager__getTime(0) <= timeLimit )
  {
    MostRecentTimeLimit_k__BackingField = this->fields._MostRecentTimeLimit_k__BackingField;
    if ( MostRecentTimeLimit_k__BackingField >= timeLimit )
      v6 = timeLimit;
    else
      v6 = this->fields._MostRecentTimeLimit_k__BackingField;
    if ( MostRecentTimeLimit_k__BackingField )
      v7 = v6;
    else
      v7 = timeLimit;
    this->fields._MostRecentTimeLimit_k__BackingField = v7;
  }
}


void ShopNotice__SetPeriodTimeLimit(ShopNotice_o *this, int64_t timeLimit, const MethodInfo *method)
{
  int64_t PeriodTimeLimit_k__BackingField; // x8
  int64_t v6; // x9
  int64_t v7; // x8

  if ( (byte_596C876 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596C876 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, timeLimit, method);
  if ( NetworkManager__getTime(0) <= timeLimit )
  {
    PeriodTimeLimit_k__BackingField = this->fields._PeriodTimeLimit_k__BackingField;
    if ( PeriodTimeLimit_k__BackingField >= timeLimit )
      v6 = timeLimit;
    else
      v6 = this->fields._PeriodTimeLimit_k__BackingField;
    if ( PeriodTimeLimit_k__BackingField )
      v7 = v6;
    else
      v7 = timeLimit;
    this->fields._PeriodTimeLimit_k__BackingField = v7;
  }
}


int32_t ShopNotice__get_ExchangeServantEventId(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._ExchangeServantEventId_k__BackingField;
}


int64_t ShopNotice__get_ExchangeServantTimeLimit(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._ExchangeServantTimeLimit_k__BackingField;
}


bool ShopNotice__get_IsIndefiniteExchangeServant(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._IsIndefiniteExchangeServant_k__BackingField;
}


bool ShopNotice__get_IsShowNew(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._IsShowNew_k__BackingField;
}


bool ShopNotice__get_IsStartUpSummon(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._IsStartUpSummon_k__BackingField;
}


int32_t ShopNotice__get_LimitedType(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._LimitedType_k__BackingField;
}


int64_t ShopNotice__get_MonthlyTimeLimit(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._MonthlyTimeLimit_k__BackingField;
}


int64_t ShopNotice__get_MostRecentTimeLimit(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._MostRecentTimeLimit_k__BackingField;
}


int64_t ShopNotice__get_PeriodTimeLimit(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._PeriodTimeLimit_k__BackingField;
}


void ShopNotice__set_ExchangeServantEventId(ShopNotice_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ExchangeServantEventId_k__BackingField = value;
}


void ShopNotice__set_ExchangeServantTimeLimit(ShopNotice_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._ExchangeServantTimeLimit_k__BackingField = value;
}


void ShopNotice__set_IsIndefiniteExchangeServant(ShopNotice_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsIndefiniteExchangeServant_k__BackingField = value;
}


void ShopNotice__set_IsShowNew(ShopNotice_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsShowNew_k__BackingField = value;
}


void ShopNotice__set_IsStartUpSummon(ShopNotice_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsStartUpSummon_k__BackingField = value;
}


void ShopNotice__set_LimitedType(ShopNotice_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._LimitedType_k__BackingField = value;
}


void ShopNotice__set_MonthlyTimeLimit(ShopNotice_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._MonthlyTimeLimit_k__BackingField = value;
}


void ShopNotice__set_MostRecentTimeLimit(ShopNotice_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._MostRecentTimeLimit_k__BackingField = value;
}


void ShopNotice__set_PeriodTimeLimit(ShopNotice_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._PeriodTimeLimit_k__BackingField = value;
}