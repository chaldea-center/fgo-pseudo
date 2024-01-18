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
  __int64 v6; // x1
  int32_t LimitedType_k__BackingField; // w21
  System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType__o *v8; // x22
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  int64_t PeriodTimeLimit_k__BackingField; // x8
  int64_t ExchangeServatTimeLimit_k__BackingField; // x1

  if ( (byte_4189198 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType___ctor__, listNotice);
    sub_B2C35C(&System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType__TypeInfo, v5);
    sub_B2C35C(&Method_ShopListNotice_GetShopLimitedType__, v6);
    byte_4189198 = 1;
  }
  if ( listNotice )
  {
    this->fields._IsShowNew_k__BackingField |= listNotice->fields._IsShowNew_k__BackingField;
    LimitedType_k__BackingField = listNotice->fields._LimitedType_k__BackingField;
    v8 = (System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType__o *)sub_B2C42C(System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType__TypeInfo);
    System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType____ctor(
      v8,
      (Il2CppObject *)listNotice,
      Method_ShopListNotice_GetShopLimitedType__,
      (const MethodInfo_271FAC4 *)Method_System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType___ctor__);
    ShopNotice__SetLimitedType(this, LimitedType_k__BackingField, v8, v9);
    this->fields._IsIndefiniteExchangeServant_k__BackingField |= listNotice->fields._IsIndefiniteExchangeServant_k__BackingField;
    this->fields._IsStartUpSummon_k__BackingField |= listNotice->fields._IsSpecialSummonable_k__BackingField;
    if ( listNotice->fields._LimitedType_k__BackingField )
    {
      ShopNotice__SetPeriodTimeLimit(this, listNotice->fields._PeriodTimeLimit_k__BackingField, v10);
      ShopNotice__SetMonthlyTimeLimit(this, listNotice->fields._MonthlyTimeLimit_k__BackingField, v11);
      ShopNotice__SetExchangeServantTimeLimit(
        this,
        listNotice->fields._ExchangeServatTimeLimit_k__BackingField,
        listNotice->fields._ExchangeServantEventId_k__BackingField,
        v12);
      PeriodTimeLimit_k__BackingField = listNotice->fields._PeriodTimeLimit_k__BackingField;
      if ( PeriodTimeLimit_k__BackingField >= listNotice->fields._MonthlyTimeLimit_k__BackingField )
        PeriodTimeLimit_k__BackingField = listNotice->fields._MonthlyTimeLimit_k__BackingField;
      if ( PeriodTimeLimit_k__BackingField >= listNotice->fields._ExchangeServatTimeLimit_k__BackingField )
        ExchangeServatTimeLimit_k__BackingField = listNotice->fields._ExchangeServatTimeLimit_k__BackingField;
      else
        ExchangeServatTimeLimit_k__BackingField = PeriodTimeLimit_k__BackingField;
      ShopNotice__SetMostRecentTimeLimit(this, ExchangeServatTimeLimit_k__BackingField, v13);
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

  if ( (byte_418919C & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, timeLimit);
    byte_418919C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
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
    type = dword_31A38E4[type - 1];
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
  int32_t v5; // w21
  ShopNotice_o *v6; // x19
  int v7; // w8

  v5 = type;
  v6 = this;
  if ( (byte_4189199 & 1) == 0 )
  {
    this = (ShopNotice_o *)sub_B2C35C(
                             &Method_System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType__Invoke__,
                             *(_QWORD *)&type);
    byte_4189199 = 1;
  }
  if ( v5 && v6->fields._LimitedType_k__BackingField != 30 )
  {
    if ( (unsigned int)(v5 - 1) <= 3 )
      v5 = dword_31A38E4[v5 - 1];
    v7 = v6->fields.limitedTypeFlag | v5;
    v6->fields.limitedTypeFlag = v7;
    if ( !GetShopLimitedType )
      sub_B2C434(this, *(_QWORD *)&type);
    v6->fields._LimitedType_k__BackingField = System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType___Invoke(
                                                GetShopLimitedType,
                                                (v7 & 2) != 0,
                                                (v7 & 4) != 0,
                                                (v7 & 8) != 0,
                                                (v7 & 0x10) != 0,
                                                (const MethodInfo_271FAD8 *)Method_System_Func_bool__bool__bool__bool__ShopListNotice_ShopLimitedType__Invoke__);
  }
}


void __fastcall ShopNotice__SetMonthlyTimeLimit(ShopNotice_o *this, int64_t timeLimit, const MethodInfo *method)
{
  int64_t MonthlyTimeLimit_k__BackingField; // x8

  if ( (byte_418919B & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, timeLimit);
    byte_418919B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
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

  if ( (byte_418919D & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, timeLimit);
    byte_418919D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
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

  if ( (byte_418919A & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, timeLimit);
    byte_418919A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
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