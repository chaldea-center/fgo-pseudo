void __fastcall ShopTopListViewItem___ctor(
        ShopTopListViewItem_o *this,
        int32_t index,
        ShopTopItemInfo_o *info,
        bool isUse,
        ShopListNotice_o *shopListNotice,
        ShopNoticeTween_o *shopNoticeTween,
        const MethodInfo *method)
{
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.info = info;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.info,
    (System_Int32_array **)info,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._IsUse_k__BackingField = isUse;
  this->fields.shopListNotice = shopListNotice;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.shopListNotice,
    (System_Int32_array **)shopListNotice,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._ShopNoticeTween_k__BackingField = shopNoticeTween;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._ShopNoticeTween_k__BackingField,
    (System_Int32_array **)shopNoticeTween,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void __fastcall ShopTopListViewItem__SetShopListNotice(
        ShopTopListViewItem_o *this,
        ShopListNotice_o *shopListNotice,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.shopListNotice = shopListNotice;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.shopListNotice,
    (System_Int32_array **)shopListNotice,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


int32_t __fastcall ShopTopListViewItem__get_ExchangeServantEventId(
        ShopTopListViewItem_o *this,
        const MethodInfo *method)
{
  struct ShopListNotice_o *shopListNotice; // x8

  shopListNotice = this->fields.shopListNotice;
  if ( shopListNotice )
    return shopListNotice->fields._ExchangeServantEventId_k__BackingField;
  else
    return 0;
}


int64_t __fastcall ShopTopListViewItem__get_ExchangeServantTimeLimit(
        ShopTopListViewItem_o *this,
        const MethodInfo *method)
{
  struct ShopListNotice_o *shopListNotice; // x8

  shopListNotice = this->fields.shopListNotice;
  if ( shopListNotice )
    return shopListNotice->fields._ExchangeServatTimeLimit_k__BackingField;
  else
    return 0LL;
}


System_String_o *__fastcall ShopTopListViewItem__get_ImageName(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B2C434(this, method);
  return info->fields._ImageName_k__BackingField;
}


System_String_o *__fastcall ShopTopListViewItem__get_InfoText(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  ShopTopListViewItem_o *v2; // x19
  struct ShopTopItemInfo_o *info; // x8
  System_String_o *TextCode_k__BackingField; // x19

  v2 = this;
  if ( (byte_4189216 & 1) == 0 )
  {
    this = (ShopTopListViewItem_o *)sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_4189216 = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_B2C434(this, method);
  TextCode_k__BackingField = info->fields._TextCode_k__BackingField;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(TextCode_k__BackingField, 0LL);
}


bool __fastcall ShopTopListViewItem__get_IsBlank(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B2C434(this, method);
  return info->fields._Kind_k__BackingField == 21;
}


bool __fastcall ShopTopListViewItem__get_IsIndefiniteExchangeServant(
        ShopTopListViewItem_o *this,
        const MethodInfo *method)
{
  struct ShopListNotice_o *shopListNotice; // x8

  shopListNotice = this->fields.shopListNotice;
  return shopListNotice && shopListNotice->fields._IsIndefiniteExchangeServant_k__BackingField;
}


bool __fastcall ShopTopListViewItem__get_IsPeriod(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  ShopTopListViewItem_o *v2; // x19
  __int64 v3; // x1
  struct ShopTopItemInfo_o *info; // x8

  v2 = this;
  if ( (byte_4189217 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, method);
    this = (ShopTopListViewItem_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4189217 = 1;
  }
  info = v2->fields.info;
  if ( !info )
    goto LABEL_9;
  if ( info->fields._Kind_k__BackingField == 5 )
  {
    this = (ShopTopListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopTopListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
      if ( this )
        return EventMaster__IsEnableEventShop((EventMaster_o *)this, 0LL);
    }
LABEL_9:
    sub_B2C434(this, method);
  }
  return 0;
}


bool __fastcall ShopTopListViewItem__get_IsShowNew(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopListNotice_o *shopListNotice; // x8

  shopListNotice = this->fields.shopListNotice;
  return shopListNotice && shopListNotice->fields._IsShowNew_k__BackingField;
}


bool __fastcall ShopTopListViewItem__get_IsUse(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsUse_k__BackingField;
}


int32_t __fastcall ShopTopListViewItem__get_LimitedType(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopListNotice_o *shopListNotice; // x8

  shopListNotice = this->fields.shopListNotice;
  if ( shopListNotice )
    return shopListNotice->fields._LimitedType_k__BackingField;
  else
    return 0;
}


int64_t __fastcall ShopTopListViewItem__get_MonthlyTimeLimit(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopListNotice_o *shopListNotice; // x8

  shopListNotice = this->fields.shopListNotice;
  if ( shopListNotice )
    return shopListNotice->fields._MonthlyTimeLimit_k__BackingField;
  else
    return 0LL;
}


int64_t __fastcall ShopTopListViewItem__get_MostRecentTimeLimit(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopListNotice_o *shopListNotice; // x8
  int64_t PeriodTimeLimit_k__BackingField; // x9
  int64_t MonthlyTimeLimit_k__BackingField; // x10
  int64_t ExchangeServatTimeLimit_k__BackingField; // x8

  shopListNotice = this->fields.shopListNotice;
  if ( !shopListNotice )
    return 0LL;
  PeriodTimeLimit_k__BackingField = shopListNotice->fields._PeriodTimeLimit_k__BackingField;
  MonthlyTimeLimit_k__BackingField = shopListNotice->fields._MonthlyTimeLimit_k__BackingField;
  ExchangeServatTimeLimit_k__BackingField = shopListNotice->fields._ExchangeServatTimeLimit_k__BackingField;
  if ( PeriodTimeLimit_k__BackingField >= MonthlyTimeLimit_k__BackingField )
    PeriodTimeLimit_k__BackingField = MonthlyTimeLimit_k__BackingField;
  if ( PeriodTimeLimit_k__BackingField >= ExchangeServatTimeLimit_k__BackingField )
    return ExchangeServatTimeLimit_k__BackingField;
  else
    return PeriodTimeLimit_k__BackingField;
}


int64_t __fastcall ShopTopListViewItem__get_PeriodTimeLimit(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopListNotice_o *shopListNotice; // x8

  shopListNotice = this->fields.shopListNotice;
  if ( shopListNotice )
    return shopListNotice->fields._PeriodTimeLimit_k__BackingField;
  else
    return 0LL;
}


ShopNoticeTween_o *__fastcall ShopTopListViewItem__get_ShopNoticeTween(
        ShopTopListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ShopNoticeTween_k__BackingField;
}


int32_t __fastcall ShopTopListViewItem__get_ShopType(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B2C434(this, method);
  return info->fields._ShopType_k__BackingField;
}


int32_t __fastcall ShopTopListViewItem__get_State(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B2C434(this, method);
  return info->fields._State_k__BackingField;
}


void __fastcall ShopTopListViewItem__set_IsUse(ShopTopListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsUse_k__BackingField = value;
}


void __fastcall ShopTopListViewItem__set_ShopNoticeTween(
        ShopTopListViewItem_o *this,
        ShopNoticeTween_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ShopNoticeTween_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._ShopNoticeTween_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}