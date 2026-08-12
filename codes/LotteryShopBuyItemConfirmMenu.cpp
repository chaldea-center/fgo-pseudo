void LotteryShopBuyItemConfirmMenu___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct LotteryShopBuyItemConfirmMenu_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct LotteryShopBuyItemConfirmMenu_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596AC61 & 1) == 0 )
  {
    sub_2213A60(&LotteryShopBuyItemConfirmMenu_TypeInfo);
    sub_2213A60(&StringLiteral_25516/*"treasurechest_img_bg"*/);
    sub_2213A60(&StringLiteral_18336/*"btn_txt_event_"*/);
    sub_2213A60(&StringLiteral_25520/*"treasurechest_img_line"*/);
    byte_596AC61 = 1;
  }
  v7 = StringLiteral_18336/*"btn_txt_event_"*/;
  LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->VALENTINE_BTN_NAME = (struct System_String_o *)StringLiteral_18336/*"btn_txt_event_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_25516/*"treasurechest_img_bg"*/;
  static_fields = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields;
  static_fields->PAY_INFO_BG_SPITE_NAME = (struct System_String_o *)StringLiteral_25516/*"treasurechest_img_bg"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->PAY_INFO_BG_SPITE_NAME,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_25520/*"treasurechest_img_line"*/;
  v17 = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v17->PAY_INFO_LINE_SPITE_NAME = (struct System_String_o *)StringLiteral_25520/*"treasurechest_img_line"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->PAY_INFO_LINE_SPITE_NAME, v16, v18, v19, v20, v21, v22, v23);
  LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->randomShopBuyLimit = 10;
}


void LotteryShopBuyItemConfirmMenu___ctor(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596AC60 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596AC60 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void LotteryShopBuyItemConfirmMenu__CallOnDecide(
        LotteryShopBuyItemConfirmMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_int__o *onDecide; // x20

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    this->fields.onDecide = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      (unsigned int)result,
      onDecide->fields.method);
  }
}


void LotteryShopBuyItemConfirmMenu__Close(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  LotteryShopBuyItemConfirmMenu__Close_38893580(this, 0, v2);
}


void LotteryShopBuyItemConfirmMenu__Close_38893580(
        LotteryShopBuyItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596AC5A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_LotteryShopBuyItemConfirmMenu_EndClose__);
    byte_596AC5A = 1;
  }
  this->fields.onClose = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClose,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_LotteryShopBuyItemConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void LotteryShopBuyItemConfirmMenu__EndClose(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_Action_o *onClose; // x20

  LotteryShopBuyItemConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  onClose = this->fields.onClose;
  if ( onClose )
  {
    this->fields.onClose = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClose, 0, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_596AC5F & 1) == 0 )
  {
    sub_2213A60(&Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AC5F = 1;
  }
  v3 = Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__;
  if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


int32_t LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Master_object; // x19
  _QWORD *p_image; // x0
  __int64 v7; // x2
  _QWORD *v8; // x19

  if ( (byte_596AC53 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596AC53 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3, v4);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  p_image = &NetworkManager_TypeInfo->_1.image;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3, v4);
    p_image = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !Master_object )
    goto LABEL_16;
  p_image = UserPresentBoxMaster__getVaildList(
              (UserPresentBoxMaster_o *)Master_object,
              *(_QWORD *)(p_image[23] + 64LL),
              0);
  v8 = p_image;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v3, v7);
  if ( !v8 )
LABEL_16:
    sub_2213CDC(p_image, v3);
  return BalanceConfig_TypeInfo->static_fields->PresentBoxMax - *((_DWORD *)v8 + 6);
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
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x22
  NetworkManager_c *v12; // x0
  int64_t userIdNumber; // x23
  ShopEntity_o *v14; // x8
  int MasterName_k__BackingField_high; // w20
  const MethodInfo *v16; // x1
  __int64 v17; // x2
  int v18; // w8
  LotteryShopBuyItemConfirmMenu_c *v19; // x0
  int randomShopBuyLimit; // w20
  int32_t PresentBoxSpace; // w0

  if ( (byte_596AC57 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ShopGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LotteryShopBuyItemConfirmMenu_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596AC57 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity, method);
  Master_object = (ShopGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopGroupMaster___);
  if ( !shopEntity )
    goto LABEL_27;
  v7 = Master_object;
  Master_object = (ShopGroupMaster_o *)ShopEntity__getTargetId(shopEntity, 0, 0);
  if ( !v7 )
    goto LABEL_27;
  BuyableCount = ShopGroupMaster__GetBuyableCount(v7, (int32_t)Master_object, 0);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v12 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
    v12 = NetworkManager_TypeInfo;
  }
  userIdNumber = v12->static_fields->userIdNumber;
  Master_object = (ShopGroupMaster_o *)ShopEntity__GetItemID(shopEntity, 0);
  if ( !v11
    || (Master_object = (ShopGroupMaster_o *)UserItemMaster__GetEntityDefinitely(
                                               (UserItemMaster_o *)v11,
                                               userIdNumber,
                                               (int32_t)Master_object,
                                               0)) == 0
    || (v14 = this->fields.shopEntity) == 0 )
  {
LABEL_27:
    sub_2213CDC(Master_object, v6);
  }
  MasterName_k__BackingField_high = HIDWORD(Master_object->fields._MasterName_k__BackingField);
  v18 = MasterName_k__BackingField_high / ShopEntity__GetPrices(v14, 0, 0);
  v19 = LotteryShopBuyItemConfirmMenu_TypeInfo;
  if ( BuyableCount >= v18 )
    randomShopBuyLimit = v18;
  else
    randomShopBuyLimit = BuyableCount;
  if ( !*(&LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo, v16, v17);
    v19 = LotteryShopBuyItemConfirmMenu_TypeInfo;
  }
  if ( randomShopBuyLimit > v19->static_fields->randomShopBuyLimit )
  {
    randomShopBuyLimit = v19->static_fields->randomShopBuyLimit;
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v16, v17);
      randomShopBuyLimit = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->randomShopBuyLimit;
    }
  }
  PresentBoxSpace = LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace((LotteryShopBuyItemConfirmMenu_o *)v19, v16);
  if ( randomShopBuyLimit >= (PresentBoxSpace & ~(PresentBoxSpace >> 31)) )
    return PresentBoxSpace & ~(PresentBoxSpace >> 31);
  else
    return randomShopBuyLimit;
}


void LotteryShopBuyItemConfirmMenu__Init(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *messageLabel; // x20

  if ( (byte_596AC59 & 1) == 0 )
  {
    sub_2213A60(&ShopBuyItemUtility_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AC59 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        this->fields.state = 0,
        this->fields.shopEntity = 0,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.shopEntity, 0, v5, v6, v7, v8, v9, v10),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.nameLabel) == 0) )
  {
    sub_2213CDC(gameObject, v4);
  }
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.messageLabel;
  if ( !*(&ShopBuyItemUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo, v11, v12);
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
  int64_t v5; // x20
  BalanceConfig_c *v6; // x0
  int64_t UserItemMax; // x8

  v5 = count;
  if ( (byte_596AC56 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596AC56 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, count, price);
    v6 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v6->static_fields->UserItemMax;
  if ( price * v5 > UserItemMax )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, count, price);
      UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
    }
    return UserItemMax / price;
  }
  return v5;
}


void LotteryShopBuyItemConfirmMenu__OnClickCancel(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x2

  if ( (byte_596AC5B & 1) == 0 )
  {
    sub_2213A60(&Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__);
    byte_596AC5B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_LotteryShopBuyItemConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_2213CDC(0, v5);
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

  if ( (byte_596AC58 & 1) == 0 )
  {
    sub_2213A60(&Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__);
    byte_596AC58 = 1;
  }
  v3 = Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__;
  if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_LotteryShopBuyItemConfirmMenu_OnClickCheckbox__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596AC5C & 1) == 0 )
  {
    sub_2213A60(&Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__);
    byte_596AC5C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_LotteryShopBuyItemConfirmMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596AC5E & 1) == 0 )
  {
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__);
    sub_2213A60(&Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AC5E = 1;
  }
  v3 = Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__;
  if ( (*((_BYTE *)Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_LotteryShopBuyItemConfirmMenu_OnClickDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity
    || (v8 = (CommonUI_o *)Instance,
        name = shopEntity->fields.name,
        infoMessage = shopEntity->fields.infoMessage,
        v11 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
          0),
        !v8) )
  {
    sub_2213CDC(Instance, v6);
  }
  CommonUI__OpenItemDetailDialog_37450192(v8, name, infoMessage, v11, 0);
}


void LotteryShopBuyItemConfirmMenu__Open(
        LotteryShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *entity,
        ShopBuyItemListViewItem_o *item,
        System_Action_int__o *onDecide,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t state; // w8
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  void *gameObject; // x0
  System_String_o *v20; // x1
  const MethodInfo *v21; // x1
  bool IsPreparation; // w20
  const MethodInfo *v23; // x2
  UILabel_o *nameLabel; // x22
  struct ShopEntity_o *shopEntity; // x8
  ItemIconComponent_o *shopItemIcon; // x22
  int32_t v27; // w23
  struct ShopEntity_o *v28; // x8
  ItemIconComponent_o *payItemIcon; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  UISprite_o *payInfoBg; // x22
  LotteryShopBuyItemConfirmMenu_c *v33; // x0
  System_String_o *PAY_INFO_BG_SPITE_NAME; // x23
  _BOOL8 v35; // x0
  const MethodInfo *v36; // x1
  int v37; // w22
  __int64 v38; // x1
  __int64 v39; // x2
  bool v40; // cc
  UILabel_o *warningLabel; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x2
  Il2CppObject *Master_object; // x22
  __int64 v46; // x9
  ShopEntity_o *Shop_k__BackingField; // x0
  int64_t v48; // x21
  __int64 v49; // x2
  int32_t *p_UserItemMax; // x21
  int32_t v51; // w23
  BalanceConfig_c *v52; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v54; // x22
  UILabel_o *haveNum; // x21
  UILabel_o *haveText; // x21
  UILabel_o *needText; // x21
  UILabel_o *payInfoLabel; // x21
  UILabel_o *checkboxLabel; // x21
  const MethodInfo *v60; // x2
  int32_t UserItemBuyableCount; // w21
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x2
  System_Action_o *v64; // x20
  System_String_o *itemName; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *message; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596AC52 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_LotteryShopBuyItemConfirmMenu_EndOpen__);
    sub_2213A60(&LotteryShopBuyItemConfirmMenu_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_8692/*"LOTTERY_SHOP_PAY_INFO"*/);
    sub_2213A60(&StringLiteral_8690/*"LOTTERY_SHOP_HAVE_EVENT_ITEM"*/);
    sub_2213A60(&StringLiteral_8693/*"LOTTERY_SHOP_SKIP_INFO"*/);
    sub_2213A60(&StringLiteral_8691/*"LOTTERY_SHOP_NEED_EVENT_ITEM"*/);
    sub_2213A60(&StringLiteral_9037/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AC52 = 1;
  }
  state = this->fields.state;
  message = 0;
  itemName = 0;
  if ( !state )
  {
    this->fields.onDecide = onDecide;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
      (int32_t)onDecide,
      (System_String_o *)item,
      (System_String_o *)onDecide,
      (int32_t)method,
      v5,
      v6,
      v7);
    this->fields.shopEntity = entity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.shopEntity,
      (int32_t)entity,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      this->fields.buyCount = 1;
      this->fields.isPlayedScriptSkipSelected = EventRewardSaveData__GetLotteryShopSkipState(0);
      LotteryShopBuyItemConfirmMenu__SetCheckMark(this, v21);
      gameObject = this->fields.shopEntity;
      if ( gameObject )
      {
        gameObject = (void *)ShopEntity__GetItemCount((ShopEntity_o *)gameObject, 0);
        this->fields.itemCount = (int)gameObject;
        if ( item )
        {
          IsPreparation = ShopBuyItemListViewItem__GetIsPreparation(item, &message, &itemName, 0);
          LotteryShopBuyItemConfirmMenu__UpdateCountValue(this, this->fields.buyCount, v23);
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
                    v27 = *((_DWORD *)gameObject + 12);
                    gameObject = (void *)ShopEntity__get_TargetId((ShopEntity_o *)gameObject, 0);
                    v28 = this->fields.shopEntity;
                    if ( v28 )
                    {
                      if ( shopItemIcon )
                      {
                        ItemIconComponent__SetPurchase(shopItemIcon, v27, (int32_t)gameObject, v28->fields.imageId, 0);
                        gameObject = item->fields._Shop_k__BackingField;
                        if ( gameObject )
                        {
                          payItemIcon = this->fields.payItemIcon;
                          gameObject = (void *)ShopEntity__GetItemID((ShopEntity_o *)gameObject, 0);
                          if ( payItemIcon )
                          {
                            ItemIconComponent__SetItem(payItemIcon, (int32_t)gameObject, -1, 1, 0);
                            payInfoBg = this->fields.payInfoBg;
                            v33 = LotteryShopBuyItemConfirmMenu_TypeInfo;
                            if ( !*(&LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
                            {
                              j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo, v30, v31);
                              v33 = LotteryShopBuyItemConfirmMenu_TypeInfo;
                            }
                            PAY_INFO_BG_SPITE_NAME = v33->static_fields->PAY_INFO_BG_SPITE_NAME;
                            if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v30, v31);
                            AtlasManager__SetEventUI(payInfoBg, PAY_INFO_BG_SPITE_NAME, 0);
                            v35 = AtlasManager__SetEventUI(
                                    this->fields.payInfoLine,
                                    LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->PAY_INFO_LINE_SPITE_NAME,
                                    0);
                            gameObject = (void *)LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(
                                                   (LotteryShopBuyItemConfirmMenu_o *)v35,
                                                   v36);
                            if ( this->fields.payInfo )
                            {
                              v37 = (int)gameObject;
                              UnityEngine_GameObject__SetActive(this->fields.payInfo, (int)gameObject > 0, 0);
                              v40 = v37 <= 0;
                              warningLabel = this->fields.warningLabel;
                              if ( v40 )
                              {
                                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38, v39);
                                gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_9037/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, 0);
                                v20 = (System_String_o *)gameObject;
                                if ( !warningLabel )
                                  goto LABEL_54;
                              }
                              else
                              {
                                v20 = (System_String_o *)StringLiteral_1/*""*/;
                                if ( !warningLabel )
                                  goto LABEL_54;
                              }
                              UILabel__set_text(warningLabel, v20, 0);
                              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42, v43);
                              Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
                              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20, v44);
                              if ( !byte_5969EF2 )
                              {
                                sub_2213A60(&NetworkManager_TypeInfo);
                                byte_5969EF2 = 1;
                              }
                              gameObject = NetworkManager_TypeInfo;
                              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                              {
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20, v44);
                                gameObject = NetworkManager_TypeInfo;
                              }
                              if ( item->fields._Shop_k__BackingField )
                              {
                                v46 = *((_QWORD *)gameObject + 23);
                                Shop_k__BackingField = item->fields._Shop_k__BackingField;
                                v48 = *(_QWORD *)(v46 + 64);
                                gameObject = (void *)ShopEntity__GetItemID(Shop_k__BackingField, 0);
                                if ( Master_object )
                                {
                                  gameObject = UserItemMaster__GetEntityDefinitely(
                                                 (UserItemMaster_o *)Master_object,
                                                 v48,
                                                 (int32_t)gameObject,
                                                 0);
                                  if ( gameObject )
                                  {
                                    p_UserItemMax = (int32_t *)((char *)gameObject + 28);
                                    v51 = *((_DWORD *)gameObject + 7);
                                    v52 = BalanceConfig_TypeInfo;
                                    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                                    {
                                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v20, v49);
                                      v52 = BalanceConfig_TypeInfo;
                                    }
                                    static_fields = v52->static_fields;
                                    if ( v51 > static_fields->UserItemMax )
                                    {
                                      if ( !*(&v52->_2.cctor_finished + 1) )
                                      {
                                        j_il2cpp_runtime_class_init_0(v52, v20, v49);
                                        static_fields = BalanceConfig_TypeInfo->static_fields;
                                      }
                                      p_UserItemMax = &static_fields->UserItemMax;
                                    }
                                    v54 = *p_UserItemMax;
                                    haveNum = this->fields.haveNum;
                                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v49);
                                    gameObject = LocalizationManager__GetNumberFormatLong(v54, 0);
                                    if ( haveNum )
                                    {
                                      UILabel__set_text(haveNum, (System_String_o *)gameObject, 0);
                                      haveText = this->fields.haveText;
                                      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8690/*"LOTTERY_SHOP_HAVE_EVENT_ITEM"*/, 0);
                                      if ( haveText )
                                      {
                                        UILabel__set_text(haveText, (System_String_o *)gameObject, 0);
                                        needText = this->fields.needText;
                                        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8691/*"LOTTERY_SHOP_NEED_EVENT_ITEM"*/, 0);
                                        if ( needText )
                                        {
                                          UILabel__set_text(needText, (System_String_o *)gameObject, 0);
                                          payInfoLabel = this->fields.payInfoLabel;
                                          gameObject = LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_8692/*"LOTTERY_SHOP_PAY_INFO"*/,
                                                         0);
                                          if ( payInfoLabel )
                                          {
                                            UILabel__set_text(payInfoLabel, (System_String_o *)gameObject, 0);
                                            checkboxLabel = this->fields.checkboxLabel;
                                            gameObject = LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_8693/*"LOTTERY_SHOP_SKIP_INFO"*/,
                                                           0);
                                            if ( checkboxLabel )
                                            {
                                              UILabel__set_text(checkboxLabel, (System_String_o *)gameObject, 0);
                                              UserItemBuyableCount = LotteryShopBuyItemConfirmMenu__GetUserItemBuyableCount(
                                                                       this,
                                                                       this->fields.shopEntity,
                                                                       v60);
                                              LotteryShopBuyItemConfirmMenu__SetItemSlider(
                                                this,
                                                UserItemBuyableCount,
                                                IsPreparation,
                                                v62);
                                              gameObject = this->fields.decideButton;
                                              if ( gameObject )
                                              {
                                                (*(void (**)(void))(*(_QWORD *)gameObject + 536LL))();
                                                LotteryShopBuyItemConfirmMenu__SetDecideButtonImage(
                                                  this,
                                                  this->fields.shopEntity,
                                                  v63);
                                                this->fields.state = 1;
                                                v64 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                                                System_Action___ctor(
                                                  v64,
                                                  (Il2CppObject *)this,
                                                  Method_LotteryShopBuyItemConfirmMenu_EndOpen__,
                                                  0);
                                                BaseDialog__Open((BaseDialog_o *)this, v64, 0, 0, 0);
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
LABEL_54:
    sub_2213CDC(gameObject, v20);
  }
}


void LotteryShopBuyItemConfirmMenu__SetCheckMark(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *checkMarkSprite; // x0

  checkMarkSprite = (UnityEngine_Component_o *)this->fields.checkMarkSprite;
  if ( !checkMarkSprite
    || (checkMarkSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkMarkSprite, 0)) == 0 )
  {
    sub_2213CDC(checkMarkSprite, method);
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
  int v5; // w8
  ShopDetailMaster_o *Master_object; // x0
  __int64 v7; // x1
  ShopDetailEntity_o *ShopDetailEntity; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t v11; // w9
  int32_t okTextImageId; // w8
  UISprite_o *v13; // x21
  LotteryShopBuyItemConfirmMenu_c *v14; // x0
  System_String_o *VALENTINE_BTN_NAME; // x22
  System_String_o *v16; // x20
  System_String_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *v20; // x20
  int32_t payType; // w8
  UISprite_o *decideButtonImg; // x20
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596AC54 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ShopDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    sub_2213A60(&LotteryShopBuyItemConfirmMenu_TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    sub_2213A60(&StringLiteral_18393/*"btn_txt_trade"*/);
    byte_596AC54 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v23 = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity, method);
  Master_object = (ShopDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopDetailMaster___);
  if ( !shopEntity || !Master_object )
    goto LABEL_23;
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(Master_object, shopEntity->fields.id, 0);
  if ( !ShopDetailEntity )
  {
    payType = shopEntity->fields.payType;
    v23 = 0;
    if ( payType != 6 )
      return;
LABEL_17:
    decideButtonImg = this->fields.decideButtonImg;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v10);
    AtlasManager__SetCommon(decideButtonImg, 0);
    Master_object = (ShopDetailMaster_o *)this->fields.decideButtonImg;
    if ( Master_object )
    {
      UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)StringLiteral_18393/*"btn_txt_trade"*/, 0);
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
    sub_2213CDC(Master_object, v7);
  }
  v11 = shopEntity->fields.payType;
  okTextImageId = ShopDetailEntity->fields.okTextImageId;
  v23 = okTextImageId;
  if ( v11 == 6 )
  {
    if ( !okTextImageId )
      goto LABEL_17;
    v13 = this->fields.decideButtonImg;
    v14 = LotteryShopBuyItemConfirmMenu_TypeInfo;
    if ( !*(&LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo, v9, v10);
      v14 = LotteryShopBuyItemConfirmMenu_TypeInfo;
    }
    VALENTINE_BTN_NAME = v14->static_fields->VALENTINE_BTN_NAME;
    v16 = System_Int32__ToString((int)shopEntity + 24, 0);
    v17 = System_Int32__ToString((int32_t)&v23, 0);
    v20 = System_String__Concat_75696856(VALENTINE_BTN_NAME, v16, (System_String_o *)StringLiteral_16746/*"_"*/, v17, 0);
    if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v18, v19);
    if ( !EventRewardRootComponent__setRewardInfoImg(v13, v20, 0) )
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
  if ( buyableCount < 2 || isPreparation )
  {
    if ( !itemSlider )
      goto LABEL_12;
    UISliderWithButton__grayMode(itemSlider, 0);
  }
  else
  {
    if ( !itemSlider )
      goto LABEL_12;
    UISliderWithButton__normalMode(itemSlider, 0);
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
LABEL_12:
    sub_2213CDC(itemSlider, *(_QWORD *)&buyableCount);
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
      if ( v7 <= (int)Prices )
        v7 = (int)Prices;
      if ( v8 >= this->fields.itemCount )
        goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(itemSlider, method);
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
  int32_t setNum; // w21

  v4 = this;
  if ( (byte_596AC55 & 1) == 0 )
  {
    this = (LotteryShopBuyItemConfirmMenu_o *)sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596AC55 = 1;
  }
  shopEntity = v4->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_8;
  needNum = v4->fields.needNum;
  setNum = shopEntity->fields.setNum;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&count, method);
  this = (LotteryShopBuyItemConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(setNum * (__int64)count, 0);
  if ( !needNum )
LABEL_8:
    sub_2213CDC(this, *(_QWORD *)&count);
  UILabel__set_text(needNum, (System_String_o *)this, 0);
}


UnityEngine_GameObject_o *LotteryShopBuyItemConfirmMenu__get_closeBtnObject(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596AC5D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AC5D = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}