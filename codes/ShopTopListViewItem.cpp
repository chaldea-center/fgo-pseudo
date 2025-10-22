void ShopTopListViewItem___ctor(
        ShopTopListViewItem_o *this,
        int32_t index,
        ShopTopItemInfo_o *info,
        bool isUse,
        ShopListNotice_o *shopListNotice,
        ShopNoticeTween_o *shopNoticeTween,
        const MethodInfo *method)
{
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  ListViewItem___ctor_43860152((ListViewItem_o *)this, index, 0);
  this->fields.info = info;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.info, (int32_t)info, v12, v13);
  this->fields._IsUse_k__BackingField = isUse;
  this->fields.shopListNotice = shopListNotice;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.shopListNotice, (int32_t)shopListNotice, v14, v15);
  this->fields._ShopNoticeTween_k__BackingField = shopNoticeTween;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._ShopNoticeTween_k__BackingField,
    (int32_t)shopNoticeTween,
    v16,
    v17);
}


void ShopTopListViewItem__SetShopListNotice(
        ShopTopListViewItem_o *this,
        ShopListNotice_o *shopListNotice,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.shopListNotice = shopListNotice;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.shopListNotice, (int32_t)shopListNotice, (int32_t)method, v3);
}


int32_t ShopTopListViewItem__get_ExchangeServantEventId(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopListNotice_o *shopListNotice; // x8

  shopListNotice = this->fields.shopListNotice;
  if ( shopListNotice )
    return shopListNotice->fields._ExchangeServantEventId_k__BackingField;
  else
    return 0;
}


int64_t ShopTopListViewItem__get_ExchangeServantTimeLimit(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopListNotice_o *shopListNotice; // x8

  shopListNotice = this->fields.shopListNotice;
  if ( shopListNotice )
    return shopListNotice->fields._ExchangeServatTimeLimit_k__BackingField;
  else
    return 0;
}


System_String_o *ShopTopListViewItem__get_ImageName(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C3E7C0(this, method);
  return info->fields._ImageName_k__BackingField;
}


System_String_o *ShopTopListViewItem__get_InfoText(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  ShopTopListViewItem_o *v2; // x19
  struct ShopTopItemInfo_o *info; // x8
  System_String_o *TextCode_k__BackingField; // x19

  v2 = this;
  if ( (byte_4C5311C & 1) == 0 )
  {
    this = (ShopTopListViewItem_o *)sub_1C3E564(&LocalizationManager_TypeInfo);
    byte_4C5311C = 1;
  }
  info = v2->fields.info;
  if ( !info )
    sub_1C3E7C0(this, method);
  TextCode_k__BackingField = info->fields._TextCode_k__BackingField;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(TextCode_k__BackingField, 0);
}


bool ShopTopListViewItem__get_IsBlank(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C3E7C0(this, method);
  return info->fields._Kind_k__BackingField == 24;
}


bool ShopTopListViewItem__get_IsIndefiniteExchangeServant(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopListNotice_o *shopListNotice; // x8

  shopListNotice = this->fields.shopListNotice;
  return shopListNotice && shopListNotice->fields._IsIndefiniteExchangeServant_k__BackingField;
}


bool ShopTopListViewItem__get_IsPeriod(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  ShopTopListViewItem_o *v2; // x19
  struct ShopTopItemInfo_o *info; // x8

  v2 = this;
  if ( (byte_4C5311D & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    this = (ShopTopListViewItem_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5311D = 1;
  }
  info = v2->fields.info;
  if ( !info )
    goto LABEL_9;
  if ( info->fields._Kind_k__BackingField == 5 )
  {
    this = (ShopTopListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopTopListViewItem_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( this )
        return EventMaster__IsEnableEventShop((EventMaster_o *)this, 0);
    }
LABEL_9:
    sub_1C3E7C0(this, method);
  }
  return 0;
}


bool ShopTopListViewItem__get_IsShowNew(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopListNotice_o *shopListNotice; // x8

  shopListNotice = this->fields.shopListNotice;
  return shopListNotice && shopListNotice->fields._IsShowNew_k__BackingField;
}


bool ShopTopListViewItem__get_IsUse(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsUse_k__BackingField;
}


int32_t ShopTopListViewItem__get_LimitedType(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopListNotice_o *shopListNotice; // x8

  shopListNotice = this->fields.shopListNotice;
  if ( shopListNotice )
    return shopListNotice->fields._LimitedType_k__BackingField;
  else
    return 0;
}


int64_t ShopTopListViewItem__get_MonthlyTimeLimit(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopListNotice_o *shopListNotice; // x8

  shopListNotice = this->fields.shopListNotice;
  if ( shopListNotice )
    return shopListNotice->fields._MonthlyTimeLimit_k__BackingField;
  else
    return 0;
}


int64_t ShopTopListViewItem__get_MostRecentTimeLimit(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)this->fields.shopListNotice;
  if ( result )
    return ShopListNotice__get_MostRecentTimeLimit((ShopListNotice_o *)result, 0);
  return result;
}


int64_t ShopTopListViewItem__get_PeriodTimeLimit(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopListNotice_o *shopListNotice; // x8

  shopListNotice = this->fields.shopListNotice;
  if ( shopListNotice )
    return shopListNotice->fields._PeriodTimeLimit_k__BackingField;
  else
    return 0;
}


ShopNoticeTween_o *ShopTopListViewItem__get_ShopNoticeTween(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._ShopNoticeTween_k__BackingField;
}


int32_t ShopTopListViewItem__get_ShopType(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C3E7C0(this, method);
  return info->fields._ShopType_k__BackingField;
}


int32_t ShopTopListViewItem__get_State(ShopTopListViewItem_o *this, const MethodInfo *method)
{
  struct ShopTopItemInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C3E7C0(this, method);
  return info->fields._State_k__BackingField;
}


void ShopTopListViewItem__set_IsUse(ShopTopListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsUse_k__BackingField = value;
}


void ShopTopListViewItem__set_ShopNoticeTween(
        ShopTopListViewItem_o *this,
        ShopNoticeTween_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ShopNoticeTween_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._ShopNoticeTween_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}