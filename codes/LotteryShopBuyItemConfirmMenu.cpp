void LotteryShopBuyItemConfirmMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct LotteryShopBuyItemConfirmMenu_StaticFields *static_fields; // x0
  __int64 v3; // x1
  struct LotteryShopBuyItemConfirmMenu_StaticFields *v4; // x0

  if ( (byte_4C515C0 & 1) == 0 )
  {
    sub_1C3E564(&LotteryShopBuyItemConfirmMenu_TypeInfo);
    sub_1C3E564(&StringLiteral_24227/*"treasurechest_img_bg"*/);
    sub_1C3E564(&StringLiteral_17581/*"btn_txt_event_"*/);
    sub_1C3E564(&StringLiteral_24231/*"treasurechest_img_line"*/);
    byte_4C515C0 = 1;
  }
  LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->VALENTINE_BTN_NAME = (struct System_String_o *)StringLiteral_17581/*"btn_txt_event_"*/;
  sub_1C3E508(LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields, StringLiteral_17581/*"btn_txt_event_"*/);
  v1 = StringLiteral_24227/*"treasurechest_img_bg"*/;
  static_fields = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields;
  static_fields->PAY_INFO_BG_SPITE_NAME = (struct System_String_o *)StringLiteral_24227/*"treasurechest_img_bg"*/;
  sub_1C3E508(&static_fields->PAY_INFO_BG_SPITE_NAME, v1);
  v3 = StringLiteral_24231/*"treasurechest_img_line"*/;
  v4 = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v4->PAY_INFO_LINE_SPITE_NAME = (struct System_String_o *)StringLiteral_24231/*"treasurechest_img_line"*/;
  sub_1C3E508(&v4->PAY_INFO_LINE_SPITE_NAME, v3);
  LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->randomShopBuyLimit = 10;
}


void LotteryShopBuyItemConfirmMenu___ctor(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C515BF & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    byte_4C515BF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void LotteryShopBuyItemConfirmMenu__CallOnDecide(
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
    *p_onDecide = 0;
    sub_1C3E508(p_onDecide, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      (unsigned int)result,
      onDecide->fields.method);
  }
}


void LotteryShopBuyItemConfirmMenu__Close(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  LotteryShopBuyItemConfirmMenu__Close_32388288(this, 0, v2);
}


void LotteryShopBuyItemConfirmMenu__Close_32388288(
        LotteryShopBuyItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4C515B9 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_LotteryShopBuyItemConfirmMenu_EndClose__);
    byte_4C515B9 = 1;
  }
  this->fields.onClose = callback;
  sub_1C3E508(&this->fields.onClose, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_LotteryShopBuyItemConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void LotteryShopBuyItemConfirmMenu__EndClose(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o *onClose; // x20

  LotteryShopBuyItemConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  onClose = this->fields.onClose;
  if ( onClose )
  {
    this->fields.onClose = 0;
    sub_1C3E508(&this->fields.onClose, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))onClose->fields.invoke_impl)(
      onClose->fields.method_code,
      onClose->fields.method);
  }
}


void LotteryShopBuyItemConfirmMenu__EndOpen(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void LotteryShopBuyItemConfirmMenu__EndShowItemDetailDialog(
        LotteryShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C515BE & 1) == 0 )
  {
    sub_1C3E564(&Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C515BE = 1;
  }
  v3 = Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


int32_t LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Master_object; // x19
  _QWORD *p_image; // x0
  _QWORD *v5; // x19

  if ( (byte_4C515B2 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C515B2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  p_image = &NetworkManager_TypeInfo->_1.image;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    p_image = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !Master_object )
    goto LABEL_16;
  p_image = UserPresentBoxMaster__getVaildList(
              (UserPresentBoxMaster_o *)Master_object,
              *(_QWORD *)(p_image[23] + 64LL),
              0);
  v5 = p_image;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v5 )
LABEL_16:
    sub_1C3E7C0(p_image, v2);
  return BalanceConfig_TypeInfo->static_fields->PresentBoxMax - *((_DWORD *)v5 + 6);
}


int32_t LotteryShopBuyItemConfirmMenu__GetUserItemBuyableCount(
        LotteryShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  ShopGroupMaster_o *Master_object; // x0
  __int64 v6; // x1
  ShopGroupMaster_o *v7; // x21
  int32_t BuyableCount; // w21
  Il2CppObject *v9; // x22
  NetworkManager_c *v10; // x0
  int64_t userIdNumber; // x23
  ShopEntity_o *v12; // x8
  int MasterName_k__BackingField_high; // w20
  LotteryShopBuyItemConfirmMenu_o *Prices; // x0
  const MethodInfo *v15; // x1
  LotteryShopBuyItemConfirmMenu_c *v16; // x8
  int32_t randomShopBuyLimit; // w20
  int32_t PresentBoxSpace; // w0

  if ( (byte_4C515B6 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ShopGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&LotteryShopBuyItemConfirmMenu_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C515B6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShopGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ShopGroupMaster___);
  if ( !shopEntity )
    goto LABEL_27;
  v7 = Master_object;
  Master_object = (ShopGroupMaster_o *)ShopEntity__getTargetId(shopEntity, 0, 0);
  if ( !v7 )
    goto LABEL_27;
  BuyableCount = ShopGroupMaster__GetBuyableCount(v7, (int32_t)Master_object, 0);
  v9 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  userIdNumber = v10->static_fields->userIdNumber;
  Master_object = (ShopGroupMaster_o *)ShopEntity__GetItemID(shopEntity, 0);
  if ( !v9
    || (Master_object = (ShopGroupMaster_o *)UserItemMaster__GetEntityDefinitely(
                                               (UserItemMaster_o *)v9,
                                               userIdNumber,
                                               (int32_t)Master_object,
                                               0)) == 0
    || (v12 = this->fields.shopEntity) == 0 )
  {
LABEL_27:
    sub_1C3E7C0(Master_object, v6);
  }
  MasterName_k__BackingField_high = HIDWORD(Master_object->fields._MasterName_k__BackingField);
  Prices = (LotteryShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(v12, 0, 0);
  v16 = LotteryShopBuyItemConfirmMenu_TypeInfo;
  if ( BuyableCount <= MasterName_k__BackingField_high / (int)Prices )
    randomShopBuyLimit = BuyableCount;
  else
    randomShopBuyLimit = MasterName_k__BackingField_high / (int)Prices;
  if ( !LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo);
    v16 = LotteryShopBuyItemConfirmMenu_TypeInfo;
  }
  if ( randomShopBuyLimit > v16->static_fields->randomShopBuyLimit )
  {
    randomShopBuyLimit = v16->static_fields->randomShopBuyLimit;
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      randomShopBuyLimit = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->randomShopBuyLimit;
    }
  }
  PresentBoxSpace = LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(Prices, v15);
  if ( randomShopBuyLimit <= (PresentBoxSpace & ~(PresentBoxSpace >> 31)) )
    return randomShopBuyLimit;
  else
    return PresentBoxSpace & ~(PresentBoxSpace >> 31);
}


void LotteryShopBuyItemConfirmMenu__Init(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UILabel_o *messageLabel; // x20

  if ( (byte_4C515B8 & 1) == 0 )
  {
    sub_1C3E564(&ShopBuyItemUtility_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C515B8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        this->fields.state = 0,
        this->fields.shopEntity = 0,
        sub_1C3E508(&this->fields.shopEntity, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.nameLabel) == 0) )
  {
    sub_1C3E7C0(gameObject, v4);
  }
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.messageLabel;
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  ShopBuyItemUtility__SetDefaultMessageLabel(messageLabel, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


bool LotteryShopBuyItemConfirmMenu__IsPlayedScriptSkipSelected(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.isPlayedScriptSkipSelected;
}


int64_t LotteryShopBuyItemConfirmMenu__ItemMaxOverCheck(
        LotteryShopBuyItemConfirmMenu_o *this,
        int64_t count,
        int64_t price,
        const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0
  int64_t UserItemMax; // x8

  if ( (byte_4C515B5 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C515B5 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v6->static_fields->UserItemMax;
  if ( price * count > UserItemMax )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
    }
    return UserItemMax / price;
  }
  return count;
}


void LotteryShopBuyItemConfirmMenu__OnClickCancel(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C515BA & 1) == 0 )
  {
    sub_1C3E564(&Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__);
    byte_4C515BA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C3E7C0(0, v5);
    UISliderWithButton__grayMode(itemSlider, 0);
    LotteryShopBuyItemConfirmMenu__CallOnDecide(this, 0, v7);
  }
}


void LotteryShopBuyItemConfirmMenu__OnClickCheckbox(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  _BOOL4 isPlayedScriptSkipSelected; // w8
  bool v6; // zf
  bool v7; // w8
  bool v8; // w0
  const MethodInfo *v9; // x1

  if ( (byte_4C515B7 & 1) == 0 )
  {
    sub_1C3E564(&Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__);
    byte_4C515B7 = 1;
  }
  v3 = Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__;
  if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isPlayedScriptSkipSelected = this->fields.isPlayedScriptSkipSelected;
  v6 = !isPlayedScriptSkipSelected;
  v7 = !isPlayedScriptSkipSelected;
  v8 = v6;
  this->fields.isPlayedScriptSkipSelected = v7;
  EventRewardSaveData__SetLotteryShopSkipState(v8, 0);
  LotteryShopBuyItemConfirmMenu__SetCheckMark(this, v9);
}


void LotteryShopBuyItemConfirmMenu__OnClickDecide(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C515BB & 1) == 0 )
  {
    sub_1C3E564(&Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__);
    byte_4C515BB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    LotteryShopBuyItemConfirmMenu__CallOnDecide(this, this->fields.buyCount, v5);
  }
}


void LotteryShopBuyItemConfirmMenu__OnClickDetail(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct ShopEntity_o *shopEntity; // x8
  CommonUI_o *v8; // x20
  System_String_o *name; // x21
  System_String_o *infoMessage; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v11; // x23

  if ( (byte_4C515BD & 1) == 0 )
  {
    sub_1C3E564(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
    sub_1C3E564(&Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C515BD = 1;
  }
  v3 = Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__;
  if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity
    || (v8 = (CommonUI_o *)Instance,
        name = shopEntity->fields.name,
        infoMessage = shopEntity->fields.infoMessage,
        v11 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C3E7B0(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
          0),
        !v8) )
  {
    sub_1C3E7C0(Instance, v6);
  }
  CommonUI__OpenItemDetailDialog_31317860(v8, name, infoMessage, v11, 0);
}


void LotteryShopBuyItemConfirmMenu__Open(
        LotteryShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *entity,
        ShopBuyItemListViewItem_o *item,
        System_Action_int__o *onDecide,
        const MethodInfo *method)
{
  struct ShopEntity_o **p_shopEntity; // x22
  void *gameObject; // x0
  System_String_o *v11; // x1
  const MethodInfo *v12; // x1
  bool IsPreparation; // w20
  const MethodInfo *v14; // x2
  UILabel_o *nameLabel; // x23
  struct ShopEntity_o *shopEntity; // x8
  ItemIconComponent_o *shopItemIcon; // x23
  int32_t v18; // w24
  ItemIconComponent_o *payItemIcon; // x22
  UISprite_o *payInfoBg; // x22
  LotteryShopBuyItemConfirmMenu_c *v21; // x0
  System_String_o *PAY_INFO_BG_SPITE_NAME; // x23
  _BOOL8 v23; // x0
  const MethodInfo *v24; // x1
  int v25; // w23
  UILabel_o *warningLabel; // x22
  Il2CppObject *Master_object; // x22
  __int64 v28; // x9
  ShopEntity_o *Shop_k__BackingField; // x0
  int64_t v30; // x21
  int32_t *p_UserItemMax; // x21
  int32_t v32; // w23
  BalanceConfig_c *v33; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v35; // x22
  UILabel_o *haveNum; // x21
  UILabel_o *haveText; // x21
  UILabel_o *needText; // x21
  UILabel_o *payInfoLabel; // x21
  UILabel_o *checkboxLabel; // x21
  const MethodInfo *v41; // x2
  int UserItemBuyableCount; // w21
  const MethodInfo *v43; // x3
  __int64 v44; // x1
  const MethodInfo *v45; // x2
  System_Action_o *v46; // x20
  System_String_o *itemName; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C515B1 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_LotteryShopBuyItemConfirmMenu_EndOpen__);
    sub_1C3E564(&LotteryShopBuyItemConfirmMenu_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&StringLiteral_8343/*"LOTTERY_SHOP_PAY_INFO"*/);
    sub_1C3E564(&StringLiteral_8341/*"LOTTERY_SHOP_HAVE_EVENT_ITEM"*/);
    sub_1C3E564(&StringLiteral_8344/*"LOTTERY_SHOP_SKIP_INFO"*/);
    sub_1C3E564(&StringLiteral_8342/*"LOTTERY_SHOP_NEED_EVENT_ITEM"*/);
    sub_1C3E564(&StringLiteral_8674/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C515B1 = 1;
  }
  message = 0;
  itemName = 0;
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1C3E508(&this->fields.onDecide, onDecide);
    p_shopEntity = &this->fields.shopEntity;
    this->fields.shopEntity = entity;
    sub_1C3E508(&this->fields.shopEntity, entity);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      this->fields.buyCount = 1;
      this->fields.isPlayedScriptSkipSelected = EventRewardSaveData__GetLotteryShopSkipState(0);
      LotteryShopBuyItemConfirmMenu__SetCheckMark(this, v12);
      gameObject = this->fields.shopEntity;
      if ( gameObject )
      {
        gameObject = (void *)ShopEntity__GetItemCount((ShopEntity_o *)gameObject, 0);
        this->fields.itemCount = (int)gameObject;
        if ( item )
        {
          IsPreparation = ShopBuyItemListViewItem__GetIsPreparation(item, &message, &itemName, 0);
          LotteryShopBuyItemConfirmMenu__UpdateCountValue(this, this->fields.buyCount, v14);
          gameObject = this->fields.shopEntity;
          if ( gameObject )
          {
            nameLabel = this->fields.nameLabel;
            gameObject = ShopEntity__getName((ShopEntity_o *)gameObject, 0);
            if ( nameLabel )
            {
              UILabel__set_text(nameLabel, (System_String_o *)gameObject, 0);
              shopEntity = this->fields.shopEntity;
              if ( shopEntity )
              {
                gameObject = this->fields.messageLabel;
                if ( gameObject )
                {
                  UILabel__set_text((UILabel_o *)gameObject, shopEntity->fields.detail, 0);
                  gameObject = this->fields.shopEntity;
                  if ( gameObject )
                  {
                    shopItemIcon = this->fields.shopItemIcon;
                    v18 = *((_DWORD *)gameObject + 12);
                    gameObject = (void *)ShopEntity__get_TargetId((ShopEntity_o *)gameObject, 0);
                    if ( *p_shopEntity )
                    {
                      if ( shopItemIcon )
                      {
                        ItemIconComponent__SetPurchase(
                          shopItemIcon,
                          v18,
                          (int32_t)gameObject,
                          (*p_shopEntity)->fields.imageId,
                          0);
                        gameObject = item->fields._Shop_k__BackingField;
                        if ( gameObject )
                        {
                          payItemIcon = this->fields.payItemIcon;
                          gameObject = (void *)ShopEntity__GetItemID((ShopEntity_o *)gameObject, 0);
                          if ( payItemIcon )
                          {
                            ItemIconComponent__SetItem(payItemIcon, (int32_t)gameObject, -1, 1, 0);
                            payInfoBg = this->fields.payInfoBg;
                            v21 = LotteryShopBuyItemConfirmMenu_TypeInfo;
                            if ( !LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo);
                              v21 = LotteryShopBuyItemConfirmMenu_TypeInfo;
                            }
                            PAY_INFO_BG_SPITE_NAME = v21->static_fields->PAY_INFO_BG_SPITE_NAME;
                            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                            AtlasManager__SetEventUI(payInfoBg, PAY_INFO_BG_SPITE_NAME, 0);
                            v23 = AtlasManager__SetEventUI(
                                    this->fields.payInfoLine,
                                    LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->PAY_INFO_LINE_SPITE_NAME,
                                    0);
                            gameObject = (void *)LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(
                                                   (LotteryShopBuyItemConfirmMenu_o *)v23,
                                                   v24);
                            if ( this->fields.payInfo )
                            {
                              v25 = (int)gameObject;
                              UnityEngine_GameObject__SetActive(this->fields.payInfo, (int)gameObject > 0, 0);
                              warningLabel = this->fields.warningLabel;
                              if ( v25 <= 0 )
                              {
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8674/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0);
                                v11 = (System_String_o *)gameObject;
                                if ( !warningLabel )
                                  goto LABEL_57;
                              }
                              else
                              {
                                v11 = (System_String_o *)StringLiteral_1/*""*/;
                                if ( !warningLabel )
                                  goto LABEL_57;
                              }
                              UILabel__set_text(warningLabel, v11, 0);
                              if ( !DataManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                              Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserItemMaster___);
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              if ( !byte_4C50AE2 )
                              {
                                sub_1C3E564(&NetworkManager_TypeInfo);
                                byte_4C50AE2 = 1;
                              }
                              gameObject = NetworkManager_TypeInfo;
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                gameObject = NetworkManager_TypeInfo;
                              }
                              if ( item->fields._Shop_k__BackingField )
                              {
                                v28 = *((_QWORD *)gameObject + 23);
                                Shop_k__BackingField = item->fields._Shop_k__BackingField;
                                v30 = *(_QWORD *)(v28 + 64);
                                gameObject = (void *)ShopEntity__GetItemID(Shop_k__BackingField, 0);
                                if ( Master_object )
                                {
                                  gameObject = UserItemMaster__GetEntityDefinitely(
                                                 (UserItemMaster_o *)Master_object,
                                                 v30,
                                                 (int32_t)gameObject,
                                                 0);
                                  if ( gameObject )
                                  {
                                    p_UserItemMax = (int32_t *)((char *)gameObject + 28);
                                    v32 = *((_DWORD *)gameObject + 7);
                                    v33 = BalanceConfig_TypeInfo;
                                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                      v33 = BalanceConfig_TypeInfo;
                                    }
                                    static_fields = v33->static_fields;
                                    if ( v32 > static_fields->UserItemMax )
                                    {
                                      if ( !v33->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(v33);
                                        static_fields = BalanceConfig_TypeInfo->static_fields;
                                      }
                                      p_UserItemMax = &static_fields->UserItemMax;
                                    }
                                    v35 = *p_UserItemMax;
                                    haveNum = this->fields.haveNum;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    gameObject = LocalizationManager__GetNumberFormatLong(v35, 0);
                                    if ( haveNum )
                                    {
                                      UILabel__set_text(haveNum, (System_String_o *)gameObject, 0);
                                      haveText = this->fields.haveText;
                                      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8341/*"LOTTERY_SHOP_HAVE_EVENT_ITEM"*/, 0);
                                      if ( haveText )
                                      {
                                        UILabel__set_text(haveText, (System_String_o *)gameObject, 0);
                                        needText = this->fields.needText;
                                        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8342/*"LOTTERY_SHOP_NEED_EVENT_ITEM"*/, 0);
                                        if ( needText )
                                        {
                                          UILabel__set_text(needText, (System_String_o *)gameObject, 0);
                                          payInfoLabel = this->fields.payInfoLabel;
                                          gameObject = LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_8343/*"LOTTERY_SHOP_PAY_INFO"*/,
                                                         0);
                                          if ( payInfoLabel )
                                          {
                                            UILabel__set_text(payInfoLabel, (System_String_o *)gameObject, 0);
                                            checkboxLabel = this->fields.checkboxLabel;
                                            gameObject = LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_8344/*"LOTTERY_SHOP_SKIP_INFO"*/,
                                                           0);
                                            if ( checkboxLabel )
                                            {
                                              UILabel__set_text(checkboxLabel, (System_String_o *)gameObject, 0);
                                              UserItemBuyableCount = LotteryShopBuyItemConfirmMenu__GetUserItemBuyableCount(
                                                                       this,
                                                                       this->fields.shopEntity,
                                                                       v41);
                                              LotteryShopBuyItemConfirmMenu__SetItemSlider(
                                                this,
                                                UserItemBuyableCount,
                                                IsPreparation,
                                                v43);
                                              gameObject = this->fields.decideButton;
                                              if ( gameObject )
                                              {
                                                if ( UserItemBuyableCount <= 0 )
                                                  v44 = 3;
                                                else
                                                  v44 = 0;
                                                (*(void (__fastcall **)(void *, __int64, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
                                                  gameObject,
                                                  v44,
                                                  1,
                                                  *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
                                                LotteryShopBuyItemConfirmMenu__SetDecideButtonImage(
                                                  this,
                                                  this->fields.shopEntity,
                                                  v45);
                                                this->fields.state = 1;
                                                v46 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
                                                System_Action___ctor(
                                                  v46,
                                                  (Il2CppObject *)this,
                                                  Method_LotteryShopBuyItemConfirmMenu_EndOpen__,
                                                  0);
                                                BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0, 0);
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
LABEL_57:
    sub_1C3E7C0(gameObject, v11);
  }
}


void LotteryShopBuyItemConfirmMenu__SetCheckMark(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *checkMarkSprite; // x0

  checkMarkSprite = (UnityEngine_Component_o *)this->fields.checkMarkSprite;
  if ( !checkMarkSprite
    || (checkMarkSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkMarkSprite, 0)) == 0 )
  {
    sub_1C3E7C0(checkMarkSprite, method);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)checkMarkSprite,
    this->fields.isPlayedScriptSkipSelected,
    0);
}


void LotteryShopBuyItemConfirmMenu__SetCheckboxSelectState(
        LotteryShopBuyItemConfirmMenu_o *this,
        bool isSelected,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.isPlayedScriptSkipSelected = isSelected;
  EventRewardSaveData__SetLotteryShopSkipState(isSelected, 0);
  LotteryShopBuyItemConfirmMenu__SetCheckMark(this, v4);
}


void LotteryShopBuyItemConfirmMenu__SetDecideButtonImage(
        LotteryShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  ShopDetailMaster_o *Master_object; // x0
  __int64 v6; // x1
  ShopDetailEntity_o *ShopDetailEntity; // x0
  int32_t okTextImageId; // w8
  UISprite_o *v9; // x21
  LotteryShopBuyItemConfirmMenu_c *v10; // x0
  System_String_o *VALENTINE_BTN_NAME; // x22
  System_String_o *v12; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  UISprite_o *decideButtonImg; // x20
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C515B3 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ShopDetailMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&EventRewardRootComponent_TypeInfo);
    sub_1C3E564(&LotteryShopBuyItemConfirmMenu_TypeInfo);
    sub_1C3E564(&StringLiteral_16119/*"_"*/);
    sub_1C3E564(&StringLiteral_17636/*"btn_txt_trade"*/);
    byte_4C515B3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShopDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ShopDetailMaster___);
  if ( !shopEntity || !Master_object )
    goto LABEL_23;
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(Master_object, shopEntity->fields.id, 0);
  if ( !ShopDetailEntity )
  {
    v16 = 0;
    if ( shopEntity->fields.payType != 6 )
      return;
LABEL_17:
    decideButtonImg = this->fields.decideButtonImg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon(decideButtonImg, 0);
    Master_object = (ShopDetailMaster_o *)this->fields.decideButtonImg;
    if ( Master_object )
    {
      UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_17636/*"btn_txt_trade"*/, 0);
      Master_object = (ShopDetailMaster_o *)this->fields.decideButtonImg;
      if ( Master_object )
      {
        (*(void (__fastcall **)(ShopDetailMaster_o *, _QWORD))&Master_object->klass[1]._2.element_size)(
          Master_object,
          *(_QWORD *)&Master_object->klass[1]._2.static_fields_size);
        return;
      }
    }
LABEL_23:
    sub_1C3E7C0(Master_object, v6);
  }
  okTextImageId = ShopDetailEntity->fields.okTextImageId;
  v16 = okTextImageId;
  if ( shopEntity->fields.payType == 6 )
  {
    if ( !okTextImageId )
      goto LABEL_17;
    v9 = this->fields.decideButtonImg;
    v10 = LotteryShopBuyItemConfirmMenu_TypeInfo;
    if ( !LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo);
      v10 = LotteryShopBuyItemConfirmMenu_TypeInfo;
    }
    VALENTINE_BTN_NAME = v10->static_fields->VALENTINE_BTN_NAME;
    v12 = System_Int32__ToString((int)shopEntity + 24, 0);
    v13 = System_Int32__ToString((int32_t)&v16, 0);
    v14 = System_String__Concat_63676720(VALENTINE_BTN_NAME, v12, (System_String_o *)StringLiteral_16119/*"_"*/, v13, 0);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    if ( !EventRewardRootComponent__setRewardInfoImg(v9, v14, 0) )
      goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
void LotteryShopBuyItemConfirmMenu__SetItemSlider(
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
    UISliderWithButton__grayMode(itemSlider, 0);
  else
    UISliderWithButton__normalMode(itemSlider, 0);
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
LABEL_11:
    sub_1C3E7C0(itemSlider, *(_QWORD *)&buyableCount);
  if ( buyableCount <= 1 )
    v7 = 1;
  else
    v7 = buyableCount;
  UISliderWithButton__init(itemSlider, v7, 0, 1, 0);
}


void LotteryShopBuyItemConfirmMenu__SliderValueChange(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
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
  itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0);
  if ( !this->fields.shopEntity )
    goto LABEL_10;
  v4 = (int)itemSlider;
  Prices = (LotteryShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(this->fields.shopEntity, 0, 0);
  v7 = (int)Prices;
  if ( this->fields.itemCount >= 2 )
  {
    v8 = 1;
    while ( 1 )
    {
      itemSlider = (UISliderWithButton_o *)this->fields.shopEntity;
      if ( !itemSlider )
        break;
      Prices = (LotteryShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices((ShopEntity_o *)itemSlider, v8++, 0);
      if ( v7 < (int)Prices )
        v7 = (int)Prices;
      if ( v8 >= this->fields.itemCount )
        goto LABEL_9;
    }
LABEL_10:
    sub_1C3E7C0(itemSlider, method);
  }
LABEL_9:
  v9 = LotteryShopBuyItemConfirmMenu__ItemMaxOverCheck(Prices, v4, v7, v6);
  this->fields.buyCount = v9;
  LotteryShopBuyItemConfirmMenu__UpdateCountValue(this, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void LotteryShopBuyItemConfirmMenu__UpdateCountValue(
        LotteryShopBuyItemConfirmMenu_o *this,
        int32_t count,
        const MethodInfo *method)
{
  LotteryShopBuyItemConfirmMenu_o *v4; // x20
  struct ShopEntity_o *shopEntity; // x8
  UILabel_o *needNum; // x20
  __int64 setNum; // x21

  v4 = this;
  if ( (byte_4C515B4 & 1) == 0 )
  {
    this = (LotteryShopBuyItemConfirmMenu_o *)sub_1C3E564(&LocalizationManager_TypeInfo);
    byte_4C515B4 = 1;
  }
  shopEntity = v4->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_8;
  needNum = v4->fields.needNum;
  setNum = shopEntity->fields.setNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (LotteryShopBuyItemConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(setNum * count, 0);
  if ( !needNum )
LABEL_8:
    sub_1C3E7C0(this, *(_QWORD *)&count);
  UILabel__set_text(needNum, (System_String_o *)this, 0);
}


UnityEngine_GameObject_o *LotteryShopBuyItemConfirmMenu__get_closeBtnObject(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C515BC & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C515BC = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C3E7C0(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}