void __fastcall ShopTopListViewItem___ctor(
        ShopTopListViewItem_o *this,
        int32_t index,
        ShopTopItemInfo_o *info,
        bool isUse,
        ShopListNotice_o *shopListNotice,
        ShopNoticeTween_o *shopNoticeTween,
        const MethodInfo *method)
{
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  ListViewItem___ctor_41884928((ListViewItem_o *)this, index, 0LL);
  this->fields.info = info;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.info, (int64_t)info, v12, v13, v14, v15, v16, v17);
  this->fields._IsUse_k__BackingField = isUse;
  this->fields.shopListNotice = shopListNotice;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.shopListNotice,
    (int64_t)shopListNotice,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._ShopNoticeTween_k__BackingField = shopNoticeTween;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._ShopNoticeTween_k__BackingField,
    (int64_t)shopNoticeTween,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.shopListNotice = shopListNotice;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.shopListNotice,
    (int64_t)shopListNotice,
    (int64_t)method,
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
    sub_1C13F80(this, method);
  return info->fields._ImageName_k__BackingField;
}


System_String_o *__fastcall ShopTopListViewItem__get_InfoText(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  ShopTopListViewItem_o *v2; // x19
  struct ShopTopItemInfo_o *info; // x8
  System_String_o *TextCode_k__BackingField; // x19

  v2 = this;
  if ( (byte_4BB0C60 & 1) == 0 )
  {
    this = (ShopTopListViewItem_o *)sub_1C13D24(&LocalizationManager_TypeInfo, method);
    byte_4BB0C60 = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1C13F80(this, method);
  TextCode_k__BackingField = info->fields._TextCode_k__BackingField;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(TextCode_k__BackingField, 0LL);
}


bool __fastcall ShopTopListViewItem__get_IsBlank(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C13F80(this, method);
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
  if ( (byte_4BB0C61 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMaster___, method);
    this = (ShopTopListViewItem_o *)sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BB0C61 = 1;
  }
  info = v2->fields.info;
  if ( !info )
    goto LABEL_9;
  if ( info->fields._Kind_k__BackingField == 5 )
  {
    this = (ShopTopListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopTopListViewItem_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( this )
        return EventMaster__IsEnableEventShop((EventMaster_o *)this, 0LL);
    }
LABEL_9:
    sub_1C13F80(this, method);
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
  int64_t result; // x0

  result = (int64_t)this->fields.shopListNotice;
  if ( result )
    return ShopListNotice__get_MostRecentTimeLimit((ShopListNotice_o *)result, 0LL);
  return result;
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
    sub_1C13F80(this, method);
  return info->fields._ShopType_k__BackingField;
}


int32_t __fastcall ShopTopListViewItem__get_State(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C13F80(this, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ShopNoticeTween_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._ShopNoticeTween_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}