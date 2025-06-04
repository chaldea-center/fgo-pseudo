void __fastcall LotteryShopBuyItemConfirmMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  struct LotteryShopBuyItemConfirmMenu_StaticFields *static_fields; // x0
  struct LotteryShopBuyItemConfirmMenu_StaticFields *v6; // x0

  if ( (byte_4AFC9CB & 1) == 0 )
  {
    sub_1BC3008(&LotteryShopBuyItemConfirmMenu_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_23969/*"treasurechest_img_bg"*/, v2);
    sub_1BC3008(&StringLiteral_17408/*"btn_txt_event_"*/, v3);
    sub_1BC3008(&StringLiteral_23973/*"treasurechest_img_line"*/, v4);
    byte_4AFC9CB = 1;
  }
  LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->VALENTINE_BTN_NAME = (struct System_String_o *)StringLiteral_17408/*"btn_txt_event_"*/;
  sub_1BC2FAC(LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields);
  static_fields = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields;
  static_fields->PAY_INFO_BG_SPITE_NAME = (struct System_String_o *)StringLiteral_23969/*"treasurechest_img_bg"*/;
  sub_1BC2FAC(&static_fields->PAY_INFO_BG_SPITE_NAME);
  v6 = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v6->PAY_INFO_LINE_SPITE_NAME = (struct System_String_o *)StringLiteral_23973/*"treasurechest_img_line"*/;
  sub_1BC2FAC(&v6->PAY_INFO_LINE_SPITE_NAME);
  LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->randomShopBuyLimit = 10;
}


void __fastcall LotteryShopBuyItemConfirmMenu___ctor(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4AFC9CA & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4AFC9CA = 1;
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
    sub_1BC2FAC(p_onDecide);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__Close(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  LotteryShopBuyItemConfirmMenu__Close_31527076(this, 0LL, v2);
}


void __fastcall LotteryShopBuyItemConfirmMenu__Close_31527076(
        LotteryShopBuyItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4AFC9C4 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_LotteryShopBuyItemConfirmMenu_EndClose__, v5);
    byte_4AFC9C4 = 1;
  }
  this->fields.onClose = callback;
  sub_1BC2FAC(&this->fields.onClose);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_LotteryShopBuyItemConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1BC3264(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  onClose = this->fields.onClose;
  if ( onClose )
  {
    this->fields.onClose = 0LL;
    sub_1BC2FAC(&this->fields.onClose);
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
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4AFC9C9 & 1) == 0 )
  {
    sub_1BC3008(&Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__, isDecide);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4AFC9C9 = 1;
  }
  v4 = Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BC3020(Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v7);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


int32_t __fastcall LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x19
  _QWORD *p_image; // x0
  _QWORD *v8; // x19

  if ( (byte_4AFC9BD & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v2);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    byte_4AFC9BD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v5);
    byte_4AFC1F1 = 1;
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
  v8 = p_image;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v8 )
LABEL_16:
    sub_1BC3264(p_image, v5);
  return BalanceConfig_TypeInfo->static_fields->PresentBoxMax - *((_DWORD *)v8 + 6);
}


int32_t __fastcall LotteryShopBuyItemConfirmMenu__GetUserItemBuyableCount(
        LotteryShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ShopGroupMaster_o *Master_object; // x0
  __int64 v10; // x1
  ShopGroupMaster_o *v11; // x21
  int BuyableCount; // w21
  __int64 v13; // x1
  Il2CppObject *v14; // x22
  NetworkManager_c *v15; // x0
  int64_t userIdNumber; // x23
  ShopEntity_o *v17; // x8
  int MasterName_k__BackingField_high; // w20
  LotteryShopBuyItemConfirmMenu_o *Prices; // x0
  const MethodInfo *v20; // x1
  LotteryShopBuyItemConfirmMenu_c *v21; // x8
  int randomShopBuyLimit; // w20
  int32_t PresentBoxSpace; // w0

  if ( (byte_4AFC9C1 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ShopGroupMaster___, shopEntity);
    sub_1BC3008(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&LotteryShopBuyItemConfirmMenu_TypeInfo, v7);
    sub_1BC3008(&NetworkManager_TypeInfo, v8);
    byte_4AFC9C1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShopGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ShopGroupMaster___);
  if ( !shopEntity )
    goto LABEL_27;
  v11 = Master_object;
  Master_object = (ShopGroupMaster_o *)ShopEntity__getTargetId(shopEntity, 0, 0LL);
  if ( !v11 )
    goto LABEL_27;
  BuyableCount = ShopGroupMaster__GetBuyableCount(v11, (int32_t)Master_object, 0LL);
  v14 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v13);
    byte_4AFC1F1 = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  userIdNumber = v15->static_fields->userIdNumber;
  Master_object = (ShopGroupMaster_o *)ShopEntity__GetItemID(shopEntity, 0LL);
  if ( !v14
    || (Master_object = (ShopGroupMaster_o *)UserItemMaster__GetEntityDefinitely(
                                               (UserItemMaster_o *)v14,
                                               userIdNumber,
                                               (int32_t)Master_object,
                                               0LL)) == 0LL
    || (v17 = this->fields.shopEntity) == 0LL )
  {
LABEL_27:
    sub_1BC3264(Master_object, v10);
  }
  MasterName_k__BackingField_high = HIDWORD(Master_object->fields._MasterName_k__BackingField);
  Prices = (LotteryShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(v17, 0, 0LL);
  v21 = LotteryShopBuyItemConfirmMenu_TypeInfo;
  if ( BuyableCount <= MasterName_k__BackingField_high / (int)Prices )
    randomShopBuyLimit = BuyableCount;
  else
    randomShopBuyLimit = MasterName_k__BackingField_high / (int)Prices;
  if ( !LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo);
    v21 = LotteryShopBuyItemConfirmMenu_TypeInfo;
  }
  if ( randomShopBuyLimit > v21->static_fields->randomShopBuyLimit )
  {
    randomShopBuyLimit = v21->static_fields->randomShopBuyLimit;
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      randomShopBuyLimit = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->randomShopBuyLimit;
    }
  }
  PresentBoxSpace = LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(Prices, v20);
  if ( randomShopBuyLimit <= (PresentBoxSpace & ~(PresentBoxSpace >> 31)) )
    return randomShopBuyLimit;
  else
    return PresentBoxSpace & ~(PresentBoxSpace >> 31);
}


void __fastcall LotteryShopBuyItemConfirmMenu__Init(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  UILabel_o *messageLabel; // x20

  if ( (byte_4AFC9C3 & 1) == 0 )
  {
    sub_1BC3008(&ShopBuyItemUtility_TypeInfo, method);
    sub_1BC3008(&StringLiteral_1/*""*/, v3);
    byte_4AFC9C3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        this->fields.state = 0,
        this->fields.shopEntity = 0LL,
        sub_1BC2FAC(&this->fields.shopEntity),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.nameLabel) == 0LL) )
  {
    sub_1BC3264(gameObject, v5);
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
  int64_t v5; // x20
  BalanceConfig_c *v6; // x0
  int64_t UserItemMax; // x8

  v5 = count;
  if ( (byte_4AFC9C0 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, count);
    byte_4AFC9C0 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v6->static_fields->UserItemMax;
  if ( price * v5 > UserItemMax )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4AFC9C5 & 1) == 0 )
  {
    sub_1BC3008(&Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__, method);
    byte_4AFC9C5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1BC3264(0LL, v5);
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

  if ( (byte_4AFC9C2 & 1) == 0 )
  {
    sub_1BC3008(&Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__, method);
    byte_4AFC9C2 = 1;
  }
  v3 = Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__;
  if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BC3020(Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
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

  if ( (byte_4AFC9C6 & 1) == 0 )
  {
    sub_1BC3008(&Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__, method);
    byte_4AFC9C6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    LotteryShopBuyItemConfirmMenu__CallOnDecide(this, this->fields.buyCount, v5);
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__OnClickDetail(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct ShopEntity_o *shopEntity; // x8
  CommonUI_o *v11; // x20
  System_String_o *name; // x21
  System_String_o *infoMessage; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v14; // x23

  if ( (byte_4AFC9C8 & 1) == 0 )
  {
    sub_1BC3008(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v3);
    sub_1BC3008(&Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AFC9C8 = 1;
  }
  v6 = Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__;
  if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BC3020(Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity
    || (v11 = (CommonUI_o *)Instance,
        name = shopEntity->fields.name,
        infoMessage = shopEntity->fields.infoMessage,
        v14 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BC3254(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
          0LL),
        !v11) )
  {
    sub_1BC3264(Instance, v9);
  }
  CommonUI__OpenItemDetailDialog_30809372(v11, name, infoMessage, v14, 0LL);
}


void __fastcall LotteryShopBuyItemConfirmMenu__Open(
        LotteryShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *entity,
        ShopBuyItemListViewItem_o *item,
        System_Action_int__o *onDecide,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  struct ShopEntity_o **p_shopEntity; // x22
  void *gameObject; // x0
  System_String_o *v25; // x1
  const MethodInfo *v26; // x1
  bool IsPreparation; // w20
  const MethodInfo *v28; // x2
  UILabel_o *nameLabel; // x23
  struct ShopEntity_o *shopEntity; // x8
  ItemIconComponent_o *shopItemIcon; // x23
  int32_t v32; // w24
  ItemIconComponent_o *payItemIcon; // x22
  UISprite_o *payInfoBg; // x22
  LotteryShopBuyItemConfirmMenu_c *v35; // x0
  System_String_o *PAY_INFO_BG_SPITE_NAME; // x23
  _BOOL8 v37; // x0
  const MethodInfo *v38; // x1
  int v39; // w23
  UILabel_o *warningLabel; // x22
  Il2CppObject *Master_object; // x22
  __int64 v42; // x9
  ShopEntity_o *Shop_k__BackingField; // x0
  int64_t v44; // x21
  int32_t *p_UserItemMax; // x21
  int32_t v46; // w23
  BalanceConfig_c *v47; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v49; // x22
  UILabel_o *haveNum; // x21
  UILabel_o *haveText; // x21
  UILabel_o *needText; // x21
  UILabel_o *payInfoLabel; // x21
  UILabel_o *checkboxLabel; // x21
  const MethodInfo *v55; // x2
  int UserItemBuyableCount; // w21
  const MethodInfo *v57; // x3
  __int64 v58; // x1
  const MethodInfo *v59; // x2
  System_Action_o *v60; // x20
  System_String_o *itemName; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4AFC9BC & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, entity);
    sub_1BC3008(&AtlasManager_TypeInfo, v9);
    sub_1BC3008(&BalanceConfig_TypeInfo, v10);
    sub_1BC3008(&Method_DataManager_GetMaster_UserItemMaster___, v11);
    sub_1BC3008(&DataManager_TypeInfo, v12);
    sub_1BC3008(&LocalizationManager_TypeInfo, v13);
    sub_1BC3008(&Method_LotteryShopBuyItemConfirmMenu_EndOpen__, v14);
    sub_1BC3008(&LotteryShopBuyItemConfirmMenu_TypeInfo, v15);
    sub_1BC3008(&NetworkManager_TypeInfo, v16);
    sub_1BC3008(&StringLiteral_8263/*"LOTTERY_SHOP_PAY_INFO"*/, v17);
    sub_1BC3008(&StringLiteral_8261/*"LOTTERY_SHOP_HAVE_EVENT_ITEM"*/, v18);
    sub_1BC3008(&StringLiteral_8264/*"LOTTERY_SHOP_SKIP_INFO"*/, v19);
    sub_1BC3008(&StringLiteral_8262/*"LOTTERY_SHOP_NEED_EVENT_ITEM"*/, v20);
    sub_1BC3008(&StringLiteral_8593/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, v21);
    sub_1BC3008(&StringLiteral_1/*""*/, v22);
    byte_4AFC9BC = 1;
  }
  message = 0LL;
  itemName = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1BC2FAC(&this->fields.onDecide);
    p_shopEntity = &this->fields.shopEntity;
    this->fields.shopEntity = entity;
    sub_1BC2FAC(&this->fields.shopEntity);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.buyCount = 1;
      this->fields.isPlayedScriptSkipSelected = EventRewardSaveData__GetLotteryShopSkipState(0LL);
      LotteryShopBuyItemConfirmMenu__SetCheckMark(this, v26);
      gameObject = this->fields.shopEntity;
      if ( gameObject )
      {
        gameObject = (void *)ShopEntity__GetItemCount((ShopEntity_o *)gameObject, 0LL);
        this->fields.itemCount = (int)gameObject;
        if ( item )
        {
          IsPreparation = ShopBuyItemListViewItem__GetIsPreparation(item, &message, &itemName, 0LL);
          LotteryShopBuyItemConfirmMenu__UpdateCountValue(this, this->fields.buyCount, v28);
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
                    v32 = *((_DWORD *)gameObject + 12);
                    gameObject = (void *)ShopEntity__get_TargetId((ShopEntity_o *)gameObject, 0LL);
                    if ( *p_shopEntity )
                    {
                      if ( shopItemIcon )
                      {
                        ItemIconComponent__SetPurchase(
                          shopItemIcon,
                          v32,
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
                            v35 = LotteryShopBuyItemConfirmMenu_TypeInfo;
                            if ( !LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo);
                              v35 = LotteryShopBuyItemConfirmMenu_TypeInfo;
                            }
                            PAY_INFO_BG_SPITE_NAME = v35->static_fields->PAY_INFO_BG_SPITE_NAME;
                            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                            AtlasManager__SetEventUI(payInfoBg, PAY_INFO_BG_SPITE_NAME, 0LL);
                            v37 = AtlasManager__SetEventUI(
                                    this->fields.payInfoLine,
                                    LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->PAY_INFO_LINE_SPITE_NAME,
                                    0LL);
                            gameObject = (void *)LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(
                                                   (LotteryShopBuyItemConfirmMenu_o *)v37,
                                                   v38);
                            if ( this->fields.payInfo )
                            {
                              v39 = (int)gameObject;
                              UnityEngine_GameObject__SetActive(this->fields.payInfo, (int)gameObject > 0, 0LL);
                              warningLabel = this->fields.warningLabel;
                              if ( v39 <= 0 )
                              {
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8593/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0LL);
                                v25 = (System_String_o *)gameObject;
                                if ( !warningLabel )
                                  goto LABEL_57;
                              }
                              else
                              {
                                v25 = (System_String_o *)StringLiteral_1/*""*/;
                                if ( !warningLabel )
                                  goto LABEL_57;
                              }
                              UILabel__set_text(warningLabel, v25, 0LL);
                              if ( !DataManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                              Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserItemMaster___);
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              if ( !byte_4AFC1F1 )
                              {
                                sub_1BC3008(&NetworkManager_TypeInfo, v25);
                                byte_4AFC1F1 = 1;
                              }
                              gameObject = NetworkManager_TypeInfo;
                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                gameObject = NetworkManager_TypeInfo;
                              }
                              if ( item->fields._Shop_k__BackingField )
                              {
                                v42 = *((_QWORD *)gameObject + 23);
                                Shop_k__BackingField = item->fields._Shop_k__BackingField;
                                v44 = *(_QWORD *)(v42 + 64);
                                gameObject = (void *)ShopEntity__GetItemID(Shop_k__BackingField, 0LL);
                                if ( Master_object )
                                {
                                  gameObject = UserItemMaster__GetEntityDefinitely(
                                                 (UserItemMaster_o *)Master_object,
                                                 v44,
                                                 (int32_t)gameObject,
                                                 0LL);
                                  if ( gameObject )
                                  {
                                    p_UserItemMax = (int32_t *)((char *)gameObject + 28);
                                    v46 = *((_DWORD *)gameObject + 7);
                                    v47 = BalanceConfig_TypeInfo;
                                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                      v47 = BalanceConfig_TypeInfo;
                                    }
                                    static_fields = v47->static_fields;
                                    if ( v46 > static_fields->UserItemMax )
                                    {
                                      if ( !v47->_2.cctor_finished )
                                      {
                                        j_il2cpp_runtime_class_init_0(v47);
                                        static_fields = BalanceConfig_TypeInfo->static_fields;
                                      }
                                      p_UserItemMax = &static_fields->UserItemMax;
                                    }
                                    v49 = *p_UserItemMax;
                                    haveNum = this->fields.haveNum;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    gameObject = LocalizationManager__GetNumberFormatLong(v49, 0LL);
                                    if ( haveNum )
                                    {
                                      UILabel__set_text(haveNum, (System_String_o *)gameObject, 0LL);
                                      haveText = this->fields.haveText;
                                      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8261/*"LOTTERY_SHOP_HAVE_EVENT_ITEM"*/, 0LL);
                                      if ( haveText )
                                      {
                                        UILabel__set_text(haveText, (System_String_o *)gameObject, 0LL);
                                        needText = this->fields.needText;
                                        gameObject = LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_8262/*"LOTTERY_SHOP_NEED_EVENT_ITEM"*/,
                                                       0LL);
                                        if ( needText )
                                        {
                                          UILabel__set_text(needText, (System_String_o *)gameObject, 0LL);
                                          payInfoLabel = this->fields.payInfoLabel;
                                          gameObject = LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_8263/*"LOTTERY_SHOP_PAY_INFO"*/,
                                                         0LL);
                                          if ( payInfoLabel )
                                          {
                                            UILabel__set_text(payInfoLabel, (System_String_o *)gameObject, 0LL);
                                            checkboxLabel = this->fields.checkboxLabel;
                                            gameObject = LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_8264/*"LOTTERY_SHOP_SKIP_INFO"*/,
                                                           0LL);
                                            if ( checkboxLabel )
                                            {
                                              UILabel__set_text(checkboxLabel, (System_String_o *)gameObject, 0LL);
                                              UserItemBuyableCount = LotteryShopBuyItemConfirmMenu__GetUserItemBuyableCount(
                                                                       this,
                                                                       this->fields.shopEntity,
                                                                       v55);
                                              LotteryShopBuyItemConfirmMenu__SetItemSlider(
                                                this,
                                                UserItemBuyableCount,
                                                IsPreparation,
                                                v57);
                                              gameObject = this->fields.decideButton;
                                              if ( gameObject )
                                              {
                                                if ( UserItemBuyableCount <= 0 )
                                                  v58 = 3LL;
                                                else
                                                  v58 = 0LL;
                                                (*(void (__fastcall **)(void *, __int64, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
                                                  gameObject,
                                                  v58,
                                                  1LL,
                                                  *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
                                                LotteryShopBuyItemConfirmMenu__SetDecideButtonImage(
                                                  this,
                                                  this->fields.shopEntity,
                                                  v59);
                                                this->fields.state = 1;
                                                v60 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                                                System_Action___ctor(
                                                  v60,
                                                  (Il2CppObject *)this,
                                                  Method_LotteryShopBuyItemConfirmMenu_EndOpen__,
                                                  0LL);
                                                BaseDialog__Open((BaseDialog_o *)this, v60, 0, 0LL);
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
    sub_1BC3264(gameObject, v25);
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
    sub_1BC3264(checkMarkSprite, method);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ShopDetailMaster_o *Master_object; // x0
  __int64 v12; // x1
  ShopDetailEntity_o *ShopDetailEntity; // x0
  int okTextImageId; // w8
  UISprite_o *v15; // x21
  LotteryShopBuyItemConfirmMenu_c *v16; // x0
  System_String_o *VALENTINE_BTN_NAME; // x22
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  UISprite_o *decideButtonImg; // x20
  int v22; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4AFC9BE & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, shopEntity);
    sub_1BC3008(&Method_DataManager_GetMaster_ShopDetailMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&EventRewardRootComponent_TypeInfo, v7);
    sub_1BC3008(&LotteryShopBuyItemConfirmMenu_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_15961/*"_"*/, v9);
    sub_1BC3008(&StringLiteral_17461/*"btn_txt_trade"*/, v10);
    byte_4AFC9BE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ShopDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ShopDetailMaster___);
  if ( !shopEntity || !Master_object )
    goto LABEL_23;
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(Master_object, shopEntity->fields.id, 0LL);
  if ( !ShopDetailEntity )
  {
    v22 = 0;
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
      UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_17461/*"btn_txt_trade"*/, 0LL);
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
    sub_1BC3264(Master_object, v12);
  }
  okTextImageId = ShopDetailEntity->fields.okTextImageId;
  v22 = okTextImageId;
  if ( shopEntity->fields.payType == 6 )
  {
    if ( !okTextImageId )
      goto LABEL_17;
    v15 = this->fields.decideButtonImg;
    v16 = LotteryShopBuyItemConfirmMenu_TypeInfo;
    if ( !LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo);
      v16 = LotteryShopBuyItemConfirmMenu_TypeInfo;
    }
    VALENTINE_BTN_NAME = v16->static_fields->VALENTINE_BTN_NAME;
    v18 = System_Int32__ToString((int)shopEntity + 24, 0LL);
    v19 = System_Int32__ToString((int32_t)&v22, 0LL);
    v20 = System_String__Concat_62388900(VALENTINE_BTN_NAME, v18, (System_String_o *)StringLiteral_15961/*"_"*/, v19, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    if ( !EventRewardRootComponent__setRewardInfoImg(v15, v20, 0LL) )
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
    sub_1BC3264(itemSlider, *(_QWORD *)&buyableCount);
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
    sub_1BC3264(itemSlider, method);
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
  if ( (byte_4AFC9BF & 1) == 0 )
  {
    this = (LotteryShopBuyItemConfirmMenu_o *)sub_1BC3008(&LocalizationManager_TypeInfo, *(_QWORD *)&count);
    byte_4AFC9BF = 1;
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
    sub_1BC3264(this, *(_QWORD *)&count);
  UILabel__set_text(needNum, (System_String_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall LotteryShopBuyItemConfirmMenu__get_closeBtnObject(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4AFC9C7 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFC9C7 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BC3264(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}