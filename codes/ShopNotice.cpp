void __fastcall ShopNotice___ctor(ShopNotice_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopNotice__CompareShopListNotice(
        ShopNotice_o *this,
        ShopListNotice_o *listNotice,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t LimitedType_k__BackingField; // w21
  System_Func_T1__T2__T3__T4__TResult__o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  int64_t PeriodTimeLimit_k__BackingField; // x8
  int64_t ExchangeServatTimeLimit_k__BackingField; // x1

  if ( (byte_4B18842 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType__TypeInfo, listNotice);
    sub_1BCAFF8(&Method_ShopListNotice_GetShopLimitedType__, v5);
    byte_4B18842 = 1;
  }
  if ( listNotice )
  {
    this->fields._IsShowNew_k__BackingField |= listNotice->fields._IsShowNew_k__BackingField;
    LimitedType_k__BackingField = listNotice->fields._LimitedType_k__BackingField;
    v7 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_1BCB244(System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType__TypeInfo);
    System_Func_bool__bool__bool__bool__Int32Enum____ctor(
      v7,
      (Il2CppObject *)listNotice,
      Method_ShopListNotice_GetShopLimitedType__,
      0LL);
    ShopNotice__SetLimitedType(
      this,
      LimitedType_k__BackingField,
      (System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType__o *)v7,
      v8);
    this->fields._IsIndefiniteExchangeServant_k__BackingField |= listNotice->fields._IsIndefiniteExchangeServant_k__BackingField;
    this->fields._IsStartUpSummon_k__BackingField |= listNotice->fields._IsSpecialSummonable_k__BackingField;
    if ( listNotice->fields._LimitedType_k__BackingField )
    {
      ShopNotice__SetPeriodTimeLimit(this, listNotice->fields._PeriodTimeLimit_k__BackingField, v9);
      ShopNotice__SetMonthlyTimeLimit(this, listNotice->fields._MonthlyTimeLimit_k__BackingField, v10);
      ShopNotice__SetExchangeServantTimeLimit(
        this,
        listNotice->fields._ExchangeServatTimeLimit_k__BackingField,
        listNotice->fields._ExchangeServantEventId_k__BackingField,
        v11);
      PeriodTimeLimit_k__BackingField = listNotice->fields._PeriodTimeLimit_k__BackingField;
      if ( PeriodTimeLimit_k__BackingField >= listNotice->fields._MonthlyTimeLimit_k__BackingField )
        PeriodTimeLimit_k__BackingField = listNotice->fields._MonthlyTimeLimit_k__BackingField;
      if ( PeriodTimeLimit_k__BackingField >= listNotice->fields._ExchangeServatTimeLimit_k__BackingField )
        ExchangeServatTimeLimit_k__BackingField = listNotice->fields._ExchangeServatTimeLimit_k__BackingField;
      else
        ExchangeServatTimeLimit_k__BackingField = PeriodTimeLimit_k__BackingField;
      ShopNotice__SetMostRecentTimeLimit(this, ExchangeServatTimeLimit_k__BackingField, v12);
    }
  }
}


bool __fastcall ShopNotice__HasFlag(ShopNotice_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.limitedTypeFlag & flag) != 0;
}


void __fastcall ShopNotice__SetExchangeServantTimeLimit(
        ShopNotice_o *this,
        int64_t timeLimit,
        int32_t eventId,
        const MethodInfo *method)
{
  int64_t ExchangeServantTimeLimit_k__BackingField; // x8

  if ( (byte_4B18845 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, timeLimit);
    byte_4B18845 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( NetworkManager__getTime(0LL) <= timeLimit )
  {
    ExchangeServantTimeLimit_k__BackingField = this->fields._ExchangeServantTimeLimit_k__BackingField;
    if ( !ExchangeServantTimeLimit_k__BackingField || ExchangeServantTimeLimit_k__BackingField > timeLimit )
    {
      this->fields._ExchangeServantTimeLimit_k__BackingField = timeLimit;
      this->fields._ExchangeServantEventId_k__BackingField = eventId;
    }
  }
}


void __fastcall ShopNotice__SetFlag(ShopNotice_o *this, int32_t type, const MethodInfo *method)
{
  if ( (unsigned int)(type - 1) <= 3 )
    type = dword_BE3100[type - 1];
  this->fields.limitedTypeFlag |= type;
}


void __fastcall ShopNotice__SetIsIndefiniteExchangeServant(
        ShopNotice_o *this,
        bool isIndefiniteExchangeServant,
        const MethodInfo *method)
{
  this->fields._IsIndefiniteExchangeServant_k__BackingField = this->fields._IsIndefiniteExchangeServant_k__BackingField
                                                           || isIndefiniteExchangeServant;
}


void __fastcall ShopNotice__SetIsShowNew(ShopNotice_o *this, bool isShowNew, const MethodInfo *method)
{
  this->fields._IsShowNew_k__BackingField = this->fields._IsShowNew_k__BackingField || isShowNew;
}


void __fastcall ShopNotice__SetIsSpecialSummonable(
        ShopNotice_o *this,
        bool isSpecialSummonable,
        const MethodInfo *method)
{
  this->fields._IsStartUpSummon_k__BackingField = this->fields._IsStartUpSummon_k__BackingField || isSpecialSummonable;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopNotice__SetLimitedType(
        ShopNotice_o *this,
        int32_t type,
        System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType__o *GetShopLimitedType,
        const MethodInfo *method)
{
  unsigned int v4; // w8

  if ( type && this->fields._LimitedType_k__BackingField != 30 )
  {
    if ( (unsigned int)(type - 1) <= 3 )
      *(_QWORD *)&type = dword_BE3100[type - 1];
    v4 = this->fields.limitedTypeFlag | type;
    this->fields.limitedTypeFlag = v4;
    if ( !GetShopLimitedType )
      sub_1BCB254(this, *(_QWORD *)&type);
    this->fields._LimitedType_k__BackingField = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))GetShopLimitedType->fields.m_target)(
                                                  GetShopLimitedType->fields.original_method_info,
                                                  (v4 >> 1) & 1,
                                                  (v4 >> 2) & 1,
                                                  (v4 >> 3) & 1,
                                                  (v4 >> 4) & 1,
                                                  *(_QWORD *)&GetShopLimitedType->fields.extra_arg);
  }
}


void __fastcall ShopNotice__SetMonthlyTimeLimit(ShopNotice_o *this, int64_t timeLimit, const MethodInfo *method)
{
  int64_t MonthlyTimeLimit_k__BackingField; // x8

  if ( (byte_4B18844 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, timeLimit);
    byte_4B18844 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( NetworkManager__getTime(0LL) <= timeLimit )
  {
    MonthlyTimeLimit_k__BackingField = this->fields._MonthlyTimeLimit_k__BackingField;
    if ( MonthlyTimeLimit_k__BackingField > timeLimit || MonthlyTimeLimit_k__BackingField == 0 )
      MonthlyTimeLimit_k__BackingField = timeLimit;
    this->fields._MonthlyTimeLimit_k__BackingField = MonthlyTimeLimit_k__BackingField;
  }
}


void __fastcall ShopNotice__SetMostRecentTimeLimit(ShopNotice_o *this, int64_t timeLimit, const MethodInfo *method)
{
  int64_t MostRecentTimeLimit_k__BackingField; // x8

  if ( (byte_4B18846 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, timeLimit);
    byte_4B18846 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( NetworkManager__getTime(0LL) <= timeLimit )
  {
    MostRecentTimeLimit_k__BackingField = this->fields._MostRecentTimeLimit_k__BackingField;
    if ( MostRecentTimeLimit_k__BackingField > timeLimit || MostRecentTimeLimit_k__BackingField == 0 )
      MostRecentTimeLimit_k__BackingField = timeLimit;
    this->fields._MostRecentTimeLimit_k__BackingField = MostRecentTimeLimit_k__BackingField;
  }
}


void __fastcall ShopNotice__SetPeriodTimeLimit(ShopNotice_o *this, int64_t timeLimit, const MethodInfo *method)
{
  int64_t PeriodTimeLimit_k__BackingField; // x8

  if ( (byte_4B18843 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, timeLimit);
    byte_4B18843 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( NetworkManager__getTime(0LL) <= timeLimit )
  {
    PeriodTimeLimit_k__BackingField = this->fields._PeriodTimeLimit_k__BackingField;
    if ( PeriodTimeLimit_k__BackingField > timeLimit || PeriodTimeLimit_k__BackingField == 0 )
      PeriodTimeLimit_k__BackingField = timeLimit;
    this->fields._PeriodTimeLimit_k__BackingField = PeriodTimeLimit_k__BackingField;
  }
}


int32_t __fastcall ShopNotice__get_ExchangeServantEventId(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._ExchangeServantEventId_k__BackingField;
}


int64_t __fastcall ShopNotice__get_ExchangeServantTimeLimit(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._ExchangeServantTimeLimit_k__BackingField;
}


bool __fastcall ShopNotice__get_IsIndefiniteExchangeServant(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._IsIndefiniteExchangeServant_k__BackingField;
}


bool __fastcall ShopNotice__get_IsShowNew(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._IsShowNew_k__BackingField;
}


bool __fastcall ShopNotice__get_IsStartUpSummon(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._IsStartUpSummon_k__BackingField;
}


int32_t __fastcall ShopNotice__get_LimitedType(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._LimitedType_k__BackingField;
}


int64_t __fastcall ShopNotice__get_MonthlyTimeLimit(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._MonthlyTimeLimit_k__BackingField;
}


int64_t __fastcall ShopNotice__get_MostRecentTimeLimit(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._MostRecentTimeLimit_k__BackingField;
}


int64_t __fastcall ShopNotice__get_PeriodTimeLimit(ShopNotice_o *this, const MethodInfo *method)
{
  return this->fields._PeriodTimeLimit_k__BackingField;
}


void __fastcall ShopNotice__set_ExchangeServantEventId(ShopNotice_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ExchangeServantEventId_k__BackingField = value;
}


void __fastcall ShopNotice__set_ExchangeServantTimeLimit(ShopNotice_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._ExchangeServantTimeLimit_k__BackingField = value;
}


void __fastcall ShopNotice__set_IsIndefiniteExchangeServant(ShopNotice_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsIndefiniteExchangeServant_k__BackingField = value;
}


void __fastcall ShopNotice__set_IsShowNew(ShopNotice_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsShowNew_k__BackingField = value;
}


void __fastcall ShopNotice__set_IsStartUpSummon(ShopNotice_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsStartUpSummon_k__BackingField = value;
}


void __fastcall ShopNotice__set_LimitedType(ShopNotice_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._LimitedType_k__BackingField = value;
}


void __fastcall ShopNotice__set_MonthlyTimeLimit(ShopNotice_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._MonthlyTimeLimit_k__BackingField = value;
}


void __fastcall ShopNotice__set_MostRecentTimeLimit(ShopNotice_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._MostRecentTimeLimit_k__BackingField = value;
}


void __fastcall ShopNotice__set_PeriodTimeLimit(ShopNotice_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._PeriodTimeLimit_k__BackingField = value;
}