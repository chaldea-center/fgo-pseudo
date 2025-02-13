void __fastcall LotteryShopBuyItemConfirmMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct LotteryShopBuyItemConfirmMenu_StaticFields *static_fields; // x0
  __int64 v3; // x1
  struct LotteryShopBuyItemConfirmMenu_StaticFields *v4; // x0

  if ( (byte_4BD73F8 & 1) == 0 )
  {
    sub_1C21E38(&LotteryShopBuyItemConfirmMenu_TypeInfo);
    sub_1C21E38(&StringLiteral_24504/*"treasurechest_img_bg"*/);
    sub_1C21E38(&StringLiteral_17870/*"btn_txt_event_"*/);
    sub_1C21E38(&StringLiteral_24508/*"treasurechest_img_line"*/);
    byte_4BD73F8 = 1;
  }
  LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->VALENTINE_BTN_NAME = (struct System_String_o *)StringLiteral_17870/*"btn_txt_event_"*/;
  sub_1C21DDC(LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields, StringLiteral_17870/*"btn_txt_event_"*/);
  v1 = StringLiteral_24504/*"treasurechest_img_bg"*/;
  static_fields = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields;
  static_fields->PAY_INFO_BG_SPITE_NAME = (struct System_String_o *)StringLiteral_24504/*"treasurechest_img_bg"*/;
  sub_1C21DDC(&static_fields->PAY_INFO_BG_SPITE_NAME, v1);
  v3 = StringLiteral_24508/*"treasurechest_img_line"*/;
  v4 = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v4->PAY_INFO_LINE_SPITE_NAME = (struct System_String_o *)StringLiteral_24508/*"treasurechest_img_line"*/;
  sub_1C21DDC(&v4->PAY_INFO_LINE_SPITE_NAME, v3);
  LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->randomShopBuyLimit = 10;
}


void __fastcall LotteryShopBuyItemConfirmMenu___ctor(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BD73F7 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BD73F7 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
    sub_1C21DDC(p_onDecide, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__Close(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  LotteryShopBuyItemConfirmMenu__Close_31538752(this, 0LL, v2);
}


void __fastcall LotteryShopBuyItemConfirmMenu__Close_31538752(
        LotteryShopBuyItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4BD73F1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_LotteryShopBuyItemConfirmMenu_EndClose__);
    byte_4BD73F1 = 1;
  }
  this->fields.onClose = callback;
  sub_1C21DDC(&this->fields.onClose, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_LotteryShopBuyItemConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
    sub_1C22094(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  onClose = this->fields.onClose;
  if ( onClose )
  {
    this->fields.onClose = 0LL;
    sub_1C21DDC(&this->fields.onClose, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClose->fields.m_target)(
      onClose->fields.original_method_info,
      *(_QWORD *)&onClose->fields.extra_arg);
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__EndOpen(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall LotteryShopBuyItemConfirmMenu__EndShowItemDetailDialog(
        LotteryShopBuyItemConfirmMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BD73F6 & 1) == 0 )
  {
    sub_1C21E38(&Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD73F6 = 1;
  }
  v3 = Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


int32_t __fastcall LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Master_object; // x19
  _QWORD *p_image; // x0
  _QWORD *v5; // x19

  if ( (byte_4BD73EA & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD73EA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
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
              0LL);
  v5 = p_image;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v5 )
LABEL_16:
    sub_1C22094(p_image, v2);
  return BalanceConfig_TypeInfo->static_fields->PresentBoxMax - *((_DWORD *)v5 + 6);
}


int32_t __fastcall LotteryShopBuyItemConfirmMenu__GetUserItemBuyableCount(
        LotteryShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  ShopGroupMaster_o *Master_object; // x0
  __int64 v6; // x1
  ShopGroupMaster_o *v7; // x21
  int BuyableCount; // w21
  Il2CppObject *v9; // x22
  NetworkManager_c *v10; // x0
  int64_t userIdNumber; // x23
  ShopEntity_o *v12; // x8
  int MasterName_k__BackingField_high; // w20
  LotteryShopBuyItemConfirmMenu_o *Prices; // x0
  const MethodInfo *v15; // x1
  LotteryShopBuyItemConfirmMenu_c *v16; // x8
  int randomShopBuyLimit; // w20
  int32_t PresentBoxSpace; // w0

  if ( (byte_4BD73EE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ShopGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&LotteryShopBuyItemConfirmMenu_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD73EE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShopGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ShopGroupMaster___);
  if ( !shopEntity )
    goto LABEL_27;
  v7 = Master_object;
  Master_object = (ShopGroupMaster_o *)ShopEntity__getTargetId(shopEntity, 0, 0LL);
  if ( !v7 )
    goto LABEL_27;
  BuyableCount = ShopGroupMaster__GetBuyableCount(v7, (int32_t)Master_object, 0LL);
  v9 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  userIdNumber = v10->static_fields->userIdNumber;
  Master_object = (ShopGroupMaster_o *)ShopEntity__GetItemID(shopEntity, 0LL);
  if ( !v9
    || (Master_object = (ShopGroupMaster_o *)UserItemMaster__GetEntityDefinitely(
                                               (UserItemMaster_o *)v9,
                                               userIdNumber,
                                               (int32_t)Master_object,
                                               0LL)) == 0LL
    || (v12 = this->fields.shopEntity) == 0LL )
  {
LABEL_27:
    sub_1C22094(Master_object, v6);
  }
  MasterName_k__BackingField_high = HIDWORD(Master_object->fields._MasterName_k__BackingField);
  Prices = (LotteryShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(v12, 0, 0LL);
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


void __fastcall LotteryShopBuyItemConfirmMenu__Init(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UILabel_o *messageLabel; // x20

  if ( (byte_4BD73F0 & 1) == 0 )
  {
    sub_1C21E38(&ShopBuyItemUtility_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD73F0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        this->fields.state = 0,
        this->fields.shopEntity = 0LL,
        sub_1C21DDC(&this->fields.shopEntity, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.nameLabel) == 0LL) )
  {
    sub_1C22094(gameObject, v4);
  }
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
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
  BalanceConfig_c *v6; // x0
  int64_t UserItemMax; // x8

  if ( (byte_4BD73ED & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD73ED = 1;
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


void __fastcall LotteryShopBuyItemConfirmMenu__OnClickCancel(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4BD73F2 & 1) == 0 )
  {
    sub_1C21E38(&Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__);
    byte_4BD73F2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C22094(0LL, v5);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    LotteryShopBuyItemConfirmMenu__CallOnDecide(this, 0, v7);
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__OnClickCheckbox(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  _BOOL4 isPlayedScriptSkipSelected; // w8
  bool v6; // zf
  bool v7; // w8
  bool v8; // w0
  const MethodInfo *v9; // x1

  if ( (byte_4BD73EF & 1) == 0 )
  {
    sub_1C21E38(&Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__);
    byte_4BD73EF = 1;
  }
  v3 = Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__;
  if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  isPlayedScriptSkipSelected = this->fields.isPlayedScriptSkipSelected;
  v6 = !isPlayedScriptSkipSelected;
  v7 = !isPlayedScriptSkipSelected;
  v8 = v6;
  this->fields.isPlayedScriptSkipSelected = v7;
  EventRewardSaveData__SetLotteryShopSkipState(v8, 0LL);
  LotteryShopBuyItemConfirmMenu__SetCheckMark(this, v9);
}


void __fastcall LotteryShopBuyItemConfirmMenu__OnClickDecide(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BD73F3 & 1) == 0 )
  {
    sub_1C21E38(&Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__);
    byte_4BD73F3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    LotteryShopBuyItemConfirmMenu__CallOnDecide(this, this->fields.buyCount, v5);
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__OnClickDetail(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
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

  if ( (byte_4BD73F5 & 1) == 0 )
  {
    sub_1C21E38(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
    sub_1C21E38(&Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD73F5 = 1;
  }
  v3 = Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__;
  if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity
    || (v8 = (CommonUI_o *)Instance,
        name = shopEntity->fields.name,
        infoMessage = shopEntity->fields.infoMessage,
        v11 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C22084(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
          0LL),
        !v8) )
  {
    sub_1C22094(Instance, v6);
  }
  CommonUI__OpenItemDetailDialog_31205140(v8, name, infoMessage, v11, 0LL);
}


void __fastcall LotteryShopBuyItemConfirmMenu__Open(
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

  if ( (byte_4BD73E9 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_LotteryShopBuyItemConfirmMenu_EndOpen__);
    sub_1C21E38(&LotteryShopBuyItemConfirmMenu_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_8494/*"LOTTERY_SHOP_PAY_INFO"*/);
    sub_1C21E38(&StringLiteral_8492/*"LOTTERY_SHOP_HAVE_EVENT_ITEM"*/);
    sub_1C21E38(&StringLiteral_8495/*"LOTTERY_SHOP_SKIP_INFO"*/);
    sub_1C21E38(&StringLiteral_8493/*"LOTTERY_SHOP_NEED_EVENT_ITEM"*/);
    sub_1C21E38(&StringLiteral_8828/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD73E9 = 1;
  }
  message = 0LL;
  itemName = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1C21DDC(&this->fields.onDecide, onDecide);
    p_shopEntity = &this->fields.shopEntity;
    this->fields.shopEntity = entity;
    sub_1C21DDC(&this->fields.shopEntity, entity);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.buyCount = 1;
      this->fields.isPlayedScriptSkipSelected = EventRewardSaveData__GetLotteryShopSkipState(0LL);
      LotteryShopBuyItemConfirmMenu__SetCheckMark(this, v12);
      gameObject = this->fields.shopEntity;
      if ( gameObject )
      {
        gameObject = (void *)ShopEntity__GetItemCount((ShopEntity_o *)gameObject, 0LL);
        this->fields.itemCount = (int)gameObject;
        if ( item )
        {
          IsPreparation = ShopBuyItemListViewItem__GetIsPreparation(item, &message, &itemName, 0LL);
          LotteryShopBuyItemConfirmMenu__UpdateCountValue(this, this->fields.buyCount, v14);
          gameObject = this->fields.shopEntity;
          if ( gameObject )
          {
            nameLabel = this->fields.nameLabel;
            gameObject = ShopEntity__getName((ShopEntity_o *)gameObject, 0LL);
            if ( nameLabel )
            {
              UILabel__set_text(nameLabel, (System_String_o *)gameObject, 0LL);
              shopEntity = this->fields.shopEntity;
              if ( shopEntity )
              {
                gameObject = this->fields.messageLabel;
                if ( gameObject )
                {
                  UILabel__set_text((UILabel_o *)gameObject, shopEntity->fields.detail, 0LL);
                  gameObject = this->fields.shopEntity;
                  if ( gameObject )
                  {
                    shopItemIcon = this->fields.shopItemIcon;
                    v18 = *((_DWORD *)gameObject + 12);
                    gameObject = (void *)ShopEntity__get_TargetId((ShopEntity_o *)gameObject, 0LL);
                    if ( *p_shopEntity )
                    {
                      if ( shopItemIcon )
                      {
                        ItemIconComponent__SetPurchase(
                          shopItemIcon,
                          v18,
                          (int32_t)gameObject,
                          (*p_shopEntity)->fields.imageId,
                          0LL);
                        gameObject = item->fields._Shop_k__BackingField;
                        if ( gameObject )
                        {
                          payItemIcon = this->fields.payItemIcon;
                          gameObject = (void *)ShopEntity__GetItemID((ShopEntity_o *)gameObject, 0LL);
                          if ( payItemIcon )
                          {
                            ItemIconComponent__SetItem(payItemIcon, (int32_t)gameObject, -1, 1, 0LL);
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
                            AtlasManager__SetEventUI(payInfoBg, PAY_INFO_BG_SPITE_NAME, 0LL);
                            v23 = AtlasManager__SetEventUI(
                                    this->fields.payInfoLine,
                                    LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->PAY_INFO_LINE_SPITE_NAME,
                                    0LL);
                            gameObject = (void *)LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(
                                                   (LotteryShopBuyItemConfirmMenu_o *)v23,
                                                   v24);
                            if ( this->fields.payInfo )
                            {
                              v25 = (int)gameObject;
                              UnityEngine_GameObject__SetActive(this->fields.payInfo, (int)gameObject > 0, 0LL);
                              warningLabel = this->fields.warningLabel;
                              if ( v25 <= 0 )
                              {
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8828/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
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
                              UILabel__set_text(warningLabel, v11, 0LL);
                              if ( !DataManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                              Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              if ( !byte_4BD6FF5 )
                              {
                                sub_1C21E38(&NetworkManager_TypeInfo);
                                byte_4BD6FF5 = 1;
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
                                gameObject = (void *)ShopEntity__GetItemID(Shop_k__BackingField, 0LL);
                                if ( Master_object )
                                {
                                  gameObject = UserItemMaster__GetEntityDefinitely(
                                                 (UserItemMaster_o *)Master_object,
                                                 v30,
                                                 (int32_t)gameObject,
                                                 0LL);
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
                                    gameObject = LocalizationManager__GetNumberFormatLong(v35, 0LL);
                                    if ( haveNum )
                                    {
                                      UILabel__set_text(haveNum, (System_String_o *)gameObject, 0LL);
                                      haveText = this->fields.haveText;
                                      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8492/*"LOTTERY_SHOP_HAVE_EVENT_ITEM"*/, 0LL);
                                      if ( haveText )
                                      {
                                        UILabel__set_text(haveText, (System_String_o *)gameObject, 0LL);
                                        needText = this->fields.needText;
                                        gameObject = LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_8493/*"LOTTERY_SHOP_NEED_EVENT_ITEM"*/,
                                                       0LL);
                                        if ( needText )
                                        {
                                          UILabel__set_text(needText, (System_String_o *)gameObject, 0LL);
                                          payInfoLabel = this->fields.payInfoLabel;
                                          gameObject = LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_8494/*"LOTTERY_SHOP_PAY_INFO"*/,
                                                         0LL);
                                          if ( payInfoLabel )
                                          {
                                            UILabel__set_text(payInfoLabel, (System_String_o *)gameObject, 0LL);
                                            checkboxLabel = this->fields.checkboxLabel;
                                            gameObject = LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_8495/*"LOTTERY_SHOP_SKIP_INFO"*/,
                                                           0LL);
                                            if ( checkboxLabel )
                                            {
                                              UILabel__set_text(checkboxLabel, (System_String_o *)gameObject, 0LL);
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
                                                  v44 = 3LL;
                                                else
                                                  v44 = 0LL;
                                                (*(void (__fastcall **)(void *, __int64, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
                                                  gameObject,
                                                  v44,
                                                  1LL,
                                                  *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
                                                LotteryShopBuyItemConfirmMenu__SetDecideButtonImage(
                                                  this,
                                                  this->fields.shopEntity,
                                                  v45);
                                                this->fields.state = 1;
                                                v46 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                                                System_Action___ctor(
                                                  v46,
                                                  (Il2CppObject *)this,
                                                  Method_LotteryShopBuyItemConfirmMenu_EndOpen__,
                                                  0LL);
                                                BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
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
    sub_1C22094(gameObject, v11);
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
    sub_1C22094(checkMarkSprite, method);
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
  ShopDetailMaster_o *Master_object; // x0
  __int64 v6; // x1
  ShopDetailEntity_o *ShopDetailEntity; // x0
  int okTextImageId; // w8
  UISprite_o *v9; // x21
  LotteryShopBuyItemConfirmMenu_c *v10; // x0
  System_String_o *VALENTINE_BTN_NAME; // x22
  System_String_o *v12; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  UISprite_o *decideButtonImg; // x20
  int v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BD73EB & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ShopDetailMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&EventRewardRootComponent_TypeInfo);
    sub_1C21E38(&LotteryShopBuyItemConfirmMenu_TypeInfo);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    sub_1C21E38(&StringLiteral_17923/*"btn_txt_trade"*/);
    byte_4BD73EB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShopDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ShopDetailMaster___);
  if ( !shopEntity || !Master_object )
    goto LABEL_23;
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(Master_object, shopEntity->fields.id, 0LL);
  if ( !ShopDetailEntity )
  {
    v16 = 0;
    if ( shopEntity->fields.payType != 6 )
      return;
LABEL_17:
    decideButtonImg = this->fields.decideButtonImg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon(decideButtonImg, 0LL);
    Master_object = (ShopDetailMaster_o *)this->fields.decideButtonImg;
    if ( Master_object )
    {
      UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_17923/*"btn_txt_trade"*/, 0LL);
      Master_object = (ShopDetailMaster_o *)this->fields.decideButtonImg;
      if ( Master_object )
      {
        (*(void (__fastcall **)(ShopDetailMaster_o *, _QWORD))&Master_object->klass[1]._2.thread_static_fields_offset)(
          Master_object,
          *(_QWORD *)&Master_object->klass[1]._2.token);
        return;
      }
    }
LABEL_23:
    sub_1C22094(Master_object, v6);
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
    v12 = System_Int32__ToString((int)shopEntity + 24, 0LL);
    v13 = System_Int32__ToString((int32_t)&v16, 0LL);
    v14 = System_String__Concat_63128740(VALENTINE_BTN_NAME, v12, (System_String_o *)StringLiteral_16399/*"_"*/, v13, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    if ( !EventRewardRootComponent__setRewardInfoImg(v9, v14, 0LL) )
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
    sub_1C22094(itemSlider, *(_QWORD *)&buyableCount);
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
    sub_1C22094(itemSlider, method);
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
  if ( (byte_4BD73EC & 1) == 0 )
  {
    this = (LotteryShopBuyItemConfirmMenu_o *)sub_1C21E38(&LocalizationManager_TypeInfo);
    byte_4BD73EC = 1;
  }
  shopEntity = v4->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_8;
  needNum = v4->fields.needNum;
  setNum = shopEntity->fields.setNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (LotteryShopBuyItemConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(setNum * count, 0LL);
  if ( !needNum )
LABEL_8:
    sub_1C22094(this, *(_QWORD *)&count);
  UILabel__set_text(needNum, (System_String_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall LotteryShopBuyItemConfirmMenu__get_closeBtnObject(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4BD73F4 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD73F4 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C22094(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}