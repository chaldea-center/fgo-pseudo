void __fastcall LotteryShopBuyItemConfirmMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  struct LotteryShopBuyItemConfirmMenu_StaticFields *static_fields; // x0
  __int64 v11; // x1
  struct LotteryShopBuyItemConfirmMenu_StaticFields *v12; // x0

  if ( (byte_4B111BA & 1) == 0 )
  {
    sub_1BCA7E0(&LotteryShopBuyItemConfirmMenu_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_24322/*"treasurechest_img_bg"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_17753/*"btn_txt_event_"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_24326/*"treasurechest_img_line"*/, v7, v8);
    byte_4B111BA = 1;
  }
  LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->VALENTINE_BTN_NAME = (struct System_String_o *)StringLiteral_17753/*"btn_txt_event_"*/;
  sub_1BCA784(LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields, StringLiteral_17753/*"btn_txt_event_"*/);
  v9 = StringLiteral_24322/*"treasurechest_img_bg"*/;
  static_fields = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields;
  static_fields->PAY_INFO_BG_SPITE_NAME = (struct System_String_o *)StringLiteral_24322/*"treasurechest_img_bg"*/;
  sub_1BCA784(&static_fields->PAY_INFO_BG_SPITE_NAME, v9);
  v11 = StringLiteral_24326/*"treasurechest_img_line"*/;
  v12 = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v12->PAY_INFO_LINE_SPITE_NAME = (struct System_String_o *)StringLiteral_24326/*"treasurechest_img_line"*/;
  sub_1BCA784(&v12->PAY_INFO_LINE_SPITE_NAME, v11);
  LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->randomShopBuyLimit = 10;
}


void __fastcall LotteryShopBuyItemConfirmMenu___ctor(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B111B9 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B111B9 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall LotteryShopBuyItemConfirmMenu__CallOnDecide(
        LotteryShopBuyItemConfirmMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct System_Action_int__o *onDecide; // x20
  struct System_Action_int__o **p_onDecide; // x0

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    p_onDecide = &this->fields.onDecide;
    *p_onDecide = 0LL;
    sub_1BCA784(p_onDecide, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__Close(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  LotteryShopBuyItemConfirmMenu__Close_31181480(this, 0LL, v2);
}


void __fastcall LotteryShopBuyItemConfirmMenu__Close_31181480(
        LotteryShopBuyItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B111B3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_LotteryShopBuyItemConfirmMenu_EndClose__, v5, v6);
    byte_4B111B3 = 1;
  }
  this->fields.onClose = callback;
  sub_1BCA784(&this->fields.onClose, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_LotteryShopBuyItemConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall LotteryShopBuyItemConfirmMenu__EndClose(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o *onClose; // x20

  LotteryShopBuyItemConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  onClose = this->fields.onClose;
  if ( onClose )
  {
    this->fields.onClose = 0LL;
    sub_1BCA784(&this->fields.onClose, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClose->fields.m_target)(
      onClose->fields.original_method_info,
      *(_QWORD *)&onClose->fields.extra_arg);
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__EndOpen(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LotteryShopBuyItemConfirmMenu__EndShowItemDetailDialog(
        LotteryShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B111B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B111B8 = 1;
  }
  v5 = Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


int32_t __fastcall LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Master_object; // x19
  int64_t UserId; // x0
  __int64 v12; // x1
  int64_t v13; // x19

  if ( (byte_4B111AC & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v3, v4);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B111AC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_12;
  UserId = (int64_t)UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)Master_object, UserId, 0LL);
  v13 = UserId;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v12);
  if ( !v13 )
LABEL_12:
    sub_1BCAA3C(UserId, v12);
  return BalanceConfig_TypeInfo->static_fields->PresentBoxMax - *(_DWORD *)(v13 + 24);
}


int32_t __fastcall LotteryShopBuyItemConfirmMenu__GetUserItemBuyableCount(
        LotteryShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ShopGroupMaster_o *Master_object; // x0
  __int64 v14; // x1
  ShopGroupMaster_o *v15; // x21
  int BuyableCount; // w21
  __int64 v17; // x1
  Il2CppObject *v18; // x22
  int64_t UserId; // x23
  ShopEntity_o *v20; // x8
  int MasterName_k__BackingField_high; // w20
  LotteryShopBuyItemConfirmMenu_o *Prices; // x0
  const MethodInfo *v23; // x1
  LotteryShopBuyItemConfirmMenu_c *v24; // x8
  int randomShopBuyLimit; // w20
  int32_t PresentBoxSpace; // w0

  if ( (byte_4B111B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopGroupMaster___, shopEntity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&LotteryShopBuyItemConfirmMenu_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    byte_4B111B0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity);
  Master_object = (ShopGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopGroupMaster___);
  if ( !shopEntity )
    goto LABEL_23;
  v15 = Master_object;
  Master_object = (ShopGroupMaster_o *)ShopEntity__getTargetId(shopEntity, 0, 0LL);
  if ( !v15 )
    goto LABEL_23;
  BuyableCount = ShopGroupMaster__GetBuyableCount(v15, (int32_t)Master_object, 0LL);
  v18 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
  UserId = NetworkManager__get_UserId(0LL);
  Master_object = (ShopGroupMaster_o *)ShopEntity__GetItemID(shopEntity, 0LL);
  if ( !v18
    || (Master_object = (ShopGroupMaster_o *)UserItemMaster__GetEntityDefinitely(
                                               (UserItemMaster_o *)v18,
                                               UserId,
                                               (int32_t)Master_object,
                                               0LL)) == 0LL
    || (v20 = this->fields.shopEntity) == 0LL )
  {
LABEL_23:
    sub_1BCAA3C(Master_object, v14);
  }
  MasterName_k__BackingField_high = HIDWORD(Master_object->fields._MasterName_k__BackingField);
  Prices = (LotteryShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(v20, 0, 0LL);
  v24 = LotteryShopBuyItemConfirmMenu_TypeInfo;
  if ( BuyableCount <= MasterName_k__BackingField_high / (int)Prices )
    randomShopBuyLimit = BuyableCount;
  else
    randomShopBuyLimit = MasterName_k__BackingField_high / (int)Prices;
  if ( !LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo, v23);
    v24 = LotteryShopBuyItemConfirmMenu_TypeInfo;
  }
  if ( randomShopBuyLimit > v24->static_fields->randomShopBuyLimit )
  {
    randomShopBuyLimit = v24->static_fields->randomShopBuyLimit;
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24, v23);
      randomShopBuyLimit = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->randomShopBuyLimit;
    }
  }
  PresentBoxSpace = LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(Prices, v23);
  if ( randomShopBuyLimit <= (PresentBoxSpace & ~(PresentBoxSpace >> 31)) )
    return randomShopBuyLimit;
  else
    return PresentBoxSpace & ~(PresentBoxSpace >> 31);
}


void __fastcall LotteryShopBuyItemConfirmMenu__Init(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  UILabel_o *messageLabel; // x20

  if ( (byte_4B111B2 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopBuyItemUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B111B2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        this->fields.state = 0,
        this->fields.shopEntity = 0LL,
        sub_1BCA784(&this->fields.shopEntity, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.nameLabel) == 0LL) )
  {
    sub_1BCAA3C(gameObject, v7);
  }
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo, v8);
  ShopBuyItemUtility__SetDefaultMessageLabel(messageLabel, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall LotteryShopBuyItemConfirmMenu__IsPlayedScriptSkipSelected(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.isPlayedScriptSkipSelected;
}


int64_t __fastcall LotteryShopBuyItemConfirmMenu__ItemMaxOverCheck(
        LotteryShopBuyItemConfirmMenu_o *this,
        int64_t count,
        int64_t price,
        const MethodInfo *method)
{
  int64_t v5; // x20
  BalanceConfig_c *v6; // x0
  int64_t UserItemMax; // x8

  v5 = count;
  if ( (byte_4B111AF & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, count, price);
    byte_4B111AF = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, count);
    v6 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v6->static_fields->UserItemMax;
  if ( price * v5 > UserItemMax )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6, count);
      UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
    }
    return UserItemMax / price;
  }
  return v5;
}


void __fastcall LotteryShopBuyItemConfirmMenu__OnClickCancel(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4B111B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__, method, v2);
    byte_4B111B4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1BCAA3C(0LL, v6);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    LotteryShopBuyItemConfirmMenu__CallOnDecide(this, 0, v8);
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__OnClickCheckbox(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  _BOOL4 isPlayedScriptSkipSelected; // w8
  bool v7; // zf
  bool v8; // w8
  bool v9; // w0
  const MethodInfo *v10; // x1

  if ( (byte_4B111B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__, method, v2);
    byte_4B111B1 = 1;
  }
  v4 = Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__;
  if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  isPlayedScriptSkipSelected = this->fields.isPlayedScriptSkipSelected;
  v7 = !isPlayedScriptSkipSelected;
  v8 = !isPlayedScriptSkipSelected;
  v9 = v7;
  this->fields.isPlayedScriptSkipSelected = v8;
  EventRewardSaveData__SetLotteryShopSkipState(v9, 0LL);
  LotteryShopBuyItemConfirmMenu__SetCheckMark(this, v10);
}


void __fastcall LotteryShopBuyItemConfirmMenu__OnClickDecide(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B111B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__, method, v2);
    byte_4B111B5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    LotteryShopBuyItemConfirmMenu__CallOnDecide(this, this->fields.buyCount, v6);
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__OnClickDetail(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  struct ShopEntity_o *shopEntity; // x8
  CommonUI_o *v17; // x20
  System_String_o *name; // x21
  System_String_o *infoMessage; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v20; // x23

  if ( (byte_4B111B7 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v4, v5);
    sub_1BCA7E0(&Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B111B7 = 1;
  }
  v10 = Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__;
  if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity
    || (v17 = (CommonUI_o *)Instance,
        name = shopEntity->fields.name,
        infoMessage = shopEntity->fields.infoMessage,
        v20 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v13,
                                                          v14,
                                                          v15),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v20,
          (Il2CppObject *)this,
          (intptr_t)Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
          0LL),
        !v17) )
  {
    sub_1BCAA3C(Instance, v13);
  }
  CommonUI__OpenItemDetailDialog_30842472(v17, name, infoMessage, v20, 0LL);
}


void __fastcall LotteryShopBuyItemConfirmMenu__Open(
        LotteryShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *entity,
        ShopBuyItemListViewItem_o *item,
        System_Action_int__o *onDecide,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  struct ShopEntity_o **p_shopEntity; // x22
  int64_t gameObject; // x0
  System_String_o *v39; // x1
  const MethodInfo *v40; // x1
  bool IsPreparation; // w20
  const MethodInfo *v42; // x2
  UILabel_o *nameLabel; // x23
  struct ShopEntity_o *shopEntity; // x8
  ItemIconComponent_o *shopItemIcon; // x23
  int32_t v46; // w24
  ItemIconComponent_o *payItemIcon; // x22
  __int64 v48; // x1
  UISprite_o *payInfoBg; // x22
  LotteryShopBuyItemConfirmMenu_c *v50; // x0
  System_String_o *PAY_INFO_BG_SPITE_NAME; // x23
  _BOOL8 v52; // x0
  const MethodInfo *v53; // x1
  int v54; // w23
  __int64 v55; // x1
  UILabel_o *warningLabel; // x22
  __int64 v57; // x1
  __int64 v58; // x1
  Il2CppObject *Master_object; // x22
  ShopEntity_o *Shop_k__BackingField; // x8
  int64_t v61; // x21
  int32_t *p_UserItemMax; // x21
  int32_t v63; // w23
  BalanceConfig_c *v64; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v66; // x22
  UILabel_o *haveNum; // x21
  UILabel_o *haveText; // x21
  UILabel_o *needText; // x21
  UILabel_o *payInfoLabel; // x21
  UILabel_o *checkboxLabel; // x21
  const MethodInfo *v72; // x2
  int UserItemBuyableCount; // w21
  const MethodInfo *v74; // x3
  __int64 v75; // x1
  const MethodInfo *v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  System_Action_o *v80; // x20
  System_String_o *itemName; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B111AB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, item);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_LotteryShopBuyItemConfirmMenu_EndOpen__, v19, v20);
    sub_1BCA7E0(&LotteryShopBuyItemConfirmMenu_TypeInfo, v21, v22);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_8441/*"LOTTERY_SHOP_PAY_INFO"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_8439/*"LOTTERY_SHOP_HAVE_EVENT_ITEM"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_8442/*"LOTTERY_SHOP_SKIP_INFO"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_8440/*"LOTTERY_SHOP_NEED_EVENT_ITEM"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_8769/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v35, v36);
    byte_4B111AB = 1;
  }
  message = 0LL;
  itemName = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1BCA784(&this->fields.onDecide, onDecide);
    p_shopEntity = &this->fields.shopEntity;
    this->fields.shopEntity = entity;
    sub_1BCA784(&this->fields.shopEntity, entity);
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.buyCount = 1;
      this->fields.isPlayedScriptSkipSelected = EventRewardSaveData__GetLotteryShopSkipState(0LL);
      LotteryShopBuyItemConfirmMenu__SetCheckMark(this, v40);
      gameObject = (int64_t)this->fields.shopEntity;
      if ( gameObject )
      {
        gameObject = ShopEntity__GetItemCount((ShopEntity_o *)gameObject, 0LL);
        this->fields.itemCount = gameObject;
        if ( item )
        {
          IsPreparation = ShopBuyItemListViewItem__GetIsPreparation(item, &message, &itemName, 0LL);
          LotteryShopBuyItemConfirmMenu__UpdateCountValue(this, this->fields.buyCount, v42);
          gameObject = (int64_t)this->fields.shopEntity;
          if ( gameObject )
          {
            nameLabel = this->fields.nameLabel;
            gameObject = (int64_t)ShopEntity__getName((ShopEntity_o *)gameObject, 0LL);
            if ( nameLabel )
            {
              UILabel__set_text(nameLabel, (System_String_o *)gameObject, 0LL);
              shopEntity = this->fields.shopEntity;
              if ( shopEntity )
              {
                gameObject = (int64_t)this->fields.messageLabel;
                if ( gameObject )
                {
                  UILabel__set_text((UILabel_o *)gameObject, shopEntity->fields.detail, 0LL);
                  gameObject = (int64_t)this->fields.shopEntity;
                  if ( gameObject )
                  {
                    shopItemIcon = this->fields.shopItemIcon;
                    v46 = *(_DWORD *)(gameObject + 48);
                    gameObject = ShopEntity__get_TargetId((ShopEntity_o *)gameObject, 0LL);
                    if ( *p_shopEntity )
                    {
                      if ( shopItemIcon )
                      {
                        ItemIconComponent__SetPurchase(
                          shopItemIcon,
                          v46,
                          gameObject,
                          (*p_shopEntity)->fields.imageId,
                          0LL);
                        gameObject = (int64_t)item->fields._Shop_k__BackingField;
                        if ( gameObject )
                        {
                          payItemIcon = this->fields.payItemIcon;
                          gameObject = ShopEntity__GetItemID((ShopEntity_o *)gameObject, 0LL);
                          if ( payItemIcon )
                          {
                            ItemIconComponent__SetItem(payItemIcon, gameObject, -1, 0LL);
                            payInfoBg = this->fields.payInfoBg;
                            v50 = LotteryShopBuyItemConfirmMenu_TypeInfo;
                            if ( !LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo, v48);
                              v50 = LotteryShopBuyItemConfirmMenu_TypeInfo;
                            }
                            PAY_INFO_BG_SPITE_NAME = v50->static_fields->PAY_INFO_BG_SPITE_NAME;
                            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v48);
                            AtlasManager__SetEventUI(payInfoBg, PAY_INFO_BG_SPITE_NAME, 0LL);
                            v52 = AtlasManager__SetEventUI(
                                    this->fields.payInfoLine,
                                    LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->PAY_INFO_LINE_SPITE_NAME,
                                    0LL);
                            gameObject = LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(
                                           (LotteryShopBuyItemConfirmMenu_o *)v52,
                                           v53);
                            if ( this->fields.payInfo )
                            {
                              v54 = gameObject;
                              UnityEngine_GameObject__SetActive(this->fields.payInfo, (int)gameObject > 0, 0LL);
                              warningLabel = this->fields.warningLabel;
                              if ( v54 <= 0 )
                              {
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
                                gameObject = (int64_t)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_8769/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/,
                                                        0LL);
                                v39 = (System_String_o *)gameObject;
                                if ( !warningLabel )
                                  goto LABEL_53;
                              }
                              else
                              {
                                v39 = (System_String_o *)StringLiteral_1/*""*/;
                                if ( !warningLabel )
                                  goto LABEL_53;
                              }
                              UILabel__set_text(warningLabel, v39, 0LL);
                              if ( !DataManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v57);
                              Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v58);
                              gameObject = NetworkManager__get_UserId(0LL);
                              Shop_k__BackingField = item->fields._Shop_k__BackingField;
                              if ( Shop_k__BackingField )
                              {
                                v61 = gameObject;
                                gameObject = ShopEntity__GetItemID(Shop_k__BackingField, 0LL);
                                if ( Master_object )
                                {
                                  gameObject = (int64_t)UserItemMaster__GetEntityDefinitely(
                                                          (UserItemMaster_o *)Master_object,
                                                          v61,
                                                          gameObject,
                                                          0LL);
                                  if ( gameObject )
                                  {
                                    p_UserItemMax = (int32_t *)(gameObject + 28);
                                    v63 = *(_DWORD *)(gameObject + 28);
                                    v64 = BalanceConfig_TypeInfo;
                                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v39);
                                      v64 = BalanceConfig_TypeInfo;
                                    }
                                    static_fields = v64->static_fields;
                                    if ( v63 > static_fields->UserItemMax )
                                    {
                                      if ( !v64->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(v64, v39);
                                        static_fields = BalanceConfig_TypeInfo->static_fields;
                                      }
                                      p_UserItemMax = &static_fields->UserItemMax;
                                    }
                                    v66 = *p_UserItemMax;
                                    haveNum = this->fields.haveNum;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
                                    gameObject = (int64_t)LocalizationManager__GetNumberFormatLong(v66, 0LL);
                                    if ( haveNum )
                                    {
                                      UILabel__set_text(haveNum, (System_String_o *)gameObject, 0LL);
                                      haveText = this->fields.haveText;
                                      gameObject = (int64_t)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8439/*"LOTTERY_SHOP_HAVE_EVENT_ITEM"*/,
                                                              0LL);
                                      if ( haveText )
                                      {
                                        UILabel__set_text(haveText, (System_String_o *)gameObject, 0LL);
                                        needText = this->fields.needText;
                                        gameObject = (int64_t)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_8440/*"LOTTERY_SHOP_NEED_EVENT_ITEM"*/,
                                                                0LL);
                                        if ( needText )
                                        {
                                          UILabel__set_text(needText, (System_String_o *)gameObject, 0LL);
                                          payInfoLabel = this->fields.payInfoLabel;
                                          gameObject = (int64_t)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_8441/*"LOTTERY_SHOP_PAY_INFO"*/,
                                                                  0LL);
                                          if ( payInfoLabel )
                                          {
                                            UILabel__set_text(payInfoLabel, (System_String_o *)gameObject, 0LL);
                                            checkboxLabel = this->fields.checkboxLabel;
                                            gameObject = (int64_t)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_8442/*"LOTTERY_SHOP_SKIP_INFO"*/,
                                                                    0LL);
                                            if ( checkboxLabel )
                                            {
                                              UILabel__set_text(checkboxLabel, (System_String_o *)gameObject, 0LL);
                                              UserItemBuyableCount = LotteryShopBuyItemConfirmMenu__GetUserItemBuyableCount(
                                                                       this,
                                                                       this->fields.shopEntity,
                                                                       v72);
                                              LotteryShopBuyItemConfirmMenu__SetItemSlider(
                                                this,
                                                UserItemBuyableCount,
                                                IsPreparation,
                                                v74);
                                              gameObject = (int64_t)this->fields.decideButton;
                                              if ( gameObject )
                                              {
                                                if ( UserItemBuyableCount <= 0 )
                                                  v75 = 3LL;
                                                else
                                                  v75 = 0LL;
                                                (*(void (__fastcall **)(int64_t, __int64, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
                                                  gameObject,
                                                  v75,
                                                  1LL,
                                                  *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
                                                LotteryShopBuyItemConfirmMenu__SetDecideButtonImage(
                                                  this,
                                                  this->fields.shopEntity,
                                                  v76);
                                                this->fields.state = 1;
                                                v80 = (System_Action_o *)sub_1BCAA2C(
                                                                           System_Action_TypeInfo,
                                                                           v77,
                                                                           v78,
                                                                           v79);
                                                System_Action___ctor(
                                                  v80,
                                                  (Il2CppObject *)this,
                                                  Method_LotteryShopBuyItemConfirmMenu_EndOpen__,
                                                  0LL);
                                                BaseDialog__Open((BaseDialog_o *)this, v80, 0, 0LL);
                                                return;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_53:
    sub_1BCAA3C(gameObject, v39);
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__SetCheckMark(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *checkMarkSprite; // x0

  checkMarkSprite = (UnityEngine_Component_o *)this->fields.checkMarkSprite;
  if ( !checkMarkSprite
    || (checkMarkSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkMarkSprite, 0LL)) == 0LL )
  {
    sub_1BCAA3C(checkMarkSprite, method);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)checkMarkSprite,
    this->fields.isPlayedScriptSkipSelected,
    0LL);
}


void __fastcall LotteryShopBuyItemConfirmMenu__SetCheckboxSelectState(
        LotteryShopBuyItemConfirmMenu_o *this,
        bool isSelected,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.isPlayedScriptSkipSelected = isSelected;
  EventRewardSaveData__SetLotteryShopSkipState(isSelected, 0LL);
  LotteryShopBuyItemConfirmMenu__SetCheckMark(this, v4);
}


void __fastcall LotteryShopBuyItemConfirmMenu__SetDecideButtonImage(
        LotteryShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  ShopDetailMaster_o *Master_object; // x0
  __int64 v18; // x1
  ShopDetailEntity_o *ShopDetailEntity; // x0
  __int64 v20; // x1
  int okTextImageId; // w8
  UISprite_o *v22; // x21
  LotteryShopBuyItemConfirmMenu_c *v23; // x0
  System_String_o *VALENTINE_BTN_NAME; // x22
  System_String_o *v25; // x20
  System_String_o *v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x20
  UISprite_o *decideButtonImg; // x20
  int v30; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B111AD & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, shopEntity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopDetailMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, v9, v10);
    sub_1BCA7E0(&LotteryShopBuyItemConfirmMenu_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17804/*"btn_txt_trade"*/, v15, v16);
    byte_4B111AD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity);
  Master_object = (ShopDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopDetailMaster___);
  if ( !shopEntity || !Master_object )
    goto LABEL_23;
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(Master_object, shopEntity->fields.id, 0LL);
  if ( !ShopDetailEntity )
  {
    v30 = 0;
    if ( shopEntity->fields.payType != 6 )
      return;
LABEL_17:
    decideButtonImg = this->fields.decideButtonImg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20);
    AtlasManager__SetCommon(decideButtonImg, 0LL);
    Master_object = (ShopDetailMaster_o *)this->fields.decideButtonImg;
    if ( Master_object )
    {
      UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_17804/*"btn_txt_trade"*/, 0LL);
      Master_object = (ShopDetailMaster_o *)this->fields.decideButtonImg;
      if ( Master_object )
      {
        ((void (__fastcall *)(ShopDetailMaster_o *, Il2CppMethodPointer))Master_object->klass[1].vtable._5_ForForceDerived.method)(
          Master_object,
          Master_object->klass[1].vtable._6_preProcess.methodPtr);
        return;
      }
    }
LABEL_23:
    sub_1BCAA3C(Master_object, v18);
  }
  okTextImageId = ShopDetailEntity->fields.okTextImageId;
  v30 = okTextImageId;
  if ( shopEntity->fields.payType == 6 )
  {
    if ( !okTextImageId )
      goto LABEL_17;
    v22 = this->fields.decideButtonImg;
    v23 = LotteryShopBuyItemConfirmMenu_TypeInfo;
    if ( !LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo, v20);
      v23 = LotteryShopBuyItemConfirmMenu_TypeInfo;
    }
    VALENTINE_BTN_NAME = v23->static_fields->VALENTINE_BTN_NAME;
    v25 = System_Int32__ToString((int)shopEntity + 24, 0LL);
    v26 = System_Int32__ToString((int32_t)&v30, 0LL);
    v28 = System_String__Concat_62414484(VALENTINE_BTN_NAME, v25, (System_String_o *)StringLiteral_16290/*"_"*/, v26, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v27);
    if ( !EventRewardRootComponent__setRewardInfoImg(v22, v28, 0LL) )
      goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LotteryShopBuyItemConfirmMenu__SetItemSlider(
        LotteryShopBuyItemConfirmMenu_o *this,
        int32_t buyableCount,
        bool isPreparation,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  int32_t v7; // w1

  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_11;
  if ( buyableCount < 2 || isPreparation )
    UISliderWithButton__grayMode(itemSlider, 0LL);
  else
    UISliderWithButton__normalMode(itemSlider, 0LL);
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
LABEL_11:
    sub_1BCAA3C(itemSlider, *(_QWORD *)&buyableCount);
  if ( buyableCount <= 1 )
    v7 = 1;
  else
    v7 = buyableCount;
  UISliderWithButton__init(itemSlider, v7, 0, 1, 0LL);
}


void __fastcall LotteryShopBuyItemConfirmMenu__SliderValueChange(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  int v4; // w20
  LotteryShopBuyItemConfirmMenu_o *Prices; // x0
  const MethodInfo *v6; // x3
  int64_t v7; // x21
  int32_t v8; // w22
  int32_t v9; // w1
  const MethodInfo *v10; // x2

  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_10;
  itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0LL);
  if ( !this->fields.shopEntity )
    goto LABEL_10;
  v4 = (int)itemSlider;
  Prices = (LotteryShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(this->fields.shopEntity, 0, 0LL);
  v7 = (int)Prices;
  if ( this->fields.itemCount >= 2 )
  {
    v8 = 1;
    while ( 1 )
    {
      itemSlider = (UISliderWithButton_o *)this->fields.shopEntity;
      if ( !itemSlider )
        break;
      Prices = (LotteryShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices((ShopEntity_o *)itemSlider, v8++, 0LL);
      if ( v7 < (int)Prices )
        v7 = (int)Prices;
      if ( v8 >= this->fields.itemCount )
        goto LABEL_9;
    }
LABEL_10:
    sub_1BCAA3C(itemSlider, method);
  }
LABEL_9:
  v9 = LotteryShopBuyItemConfirmMenu__ItemMaxOverCheck(Prices, v4, v7, v6);
  this->fields.buyCount = v9;
  LotteryShopBuyItemConfirmMenu__UpdateCountValue(this, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LotteryShopBuyItemConfirmMenu__UpdateCountValue(
        LotteryShopBuyItemConfirmMenu_o *this,
        int32_t count,
        const MethodInfo *method)
{
  LotteryShopBuyItemConfirmMenu_o *v4; // x20
  struct ShopEntity_o *shopEntity; // x8
  UILabel_o *needNum; // x20
  __int64 setNum; // x21

  v4 = this;
  if ( (byte_4B111AE & 1) == 0 )
  {
    this = (LotteryShopBuyItemConfirmMenu_o *)sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&count, method);
    byte_4B111AE = 1;
  }
  shopEntity = v4->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_8;
  needNum = v4->fields.needNum;
  setNum = shopEntity->fields.setNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&count);
  this = (LotteryShopBuyItemConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(setNum * count, 0LL);
  if ( !needNum )
LABEL_8:
    sub_1BCAA3C(this, *(_QWORD *)&count);
  UILabel__set_text(needNum, (System_String_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall LotteryShopBuyItemConfirmMenu__get_closeBtnObject(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B111B6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B111B6 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}