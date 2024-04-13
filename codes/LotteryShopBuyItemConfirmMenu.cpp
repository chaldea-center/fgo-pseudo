void __fastcall LotteryShopBuyItemConfirmMenu___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  struct LotteryShopBuyItemConfirmMenu_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct LotteryShopBuyItemConfirmMenu_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E7267 & 1) == 0 )
  {
    sub_B5D5C4(&LotteryShopBuyItemConfirmMenu_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_23103/*"treasurechest_img_bg"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17262/*"btn_txt_event_"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23107/*"treasurechest_img_line"*/, v14, v15, v16);
    byte_42E7267 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_17262/*"btn_txt_event_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17262/*"btn_txt_event_"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_23103/*"treasurechest_img_bg"*/;
  v19->PAY_INFO_BG_SPITE_NAME = (struct System_String_o *)StringLiteral_23103/*"treasurechest_img_bg"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->PAY_INFO_BG_SPITE_NAME, v20, v21, v22, v23, v24, v25, v26);
  v27 = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_23107/*"treasurechest_img_line"*/;
  v27->PAY_INFO_LINE_SPITE_NAME = (struct System_String_o *)StringLiteral_23107/*"treasurechest_img_line"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v27->PAY_INFO_LINE_SPITE_NAME, v28, v29, v30, v31, v32, v33, v34);
  LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->randomShopBuyLimit = 10;
}


void __fastcall LotteryShopBuyItemConfirmMenu___ctor(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7266 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7266 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall LotteryShopBuyItemConfirmMenu__CallOnDecide(
        LotteryShopBuyItemConfirmMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_int__o *onDecide; // x21

  if ( (byte_42E7260 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, result, (_DWORD)method, v3);
    byte_42E7260 = 1;
  }
  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    this->fields.onDecide = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_int___Invoke(onDecide, result, (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__Close(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  LotteryShopBuyItemConfirmMenu__Close_22609080(this, 0LL, v2);
}


void __fastcall LotteryShopBuyItemConfirmMenu__Close_22609080(
        LotteryShopBuyItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E725F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_LotteryShopBuyItemConfirmMenu_EndClose__, v10, v11, v12);
    byte_42E725F = 1;
  }
  this->fields.onClose = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_LotteryShopBuyItemConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall LotteryShopBuyItemConfirmMenu__EndClose(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Action_o *onClose; // x20

  LotteryShopBuyItemConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  onClose = this->fields.onClose;
  if ( onClose )
  {
    this->fields.onClose = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.onClose, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(onClose, 0LL);
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
  __int64 v3; // x3
  char v4; // w1
  int v5; // w2
  __int64 v6; // x3
  CommonUI_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E7265 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v4, v5, v6);
    byte_42E7265 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


int32_t __fastcall LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UserPresentBoxMaster_o *Master_WarQuestSelectionMaster; // x19
  int64_t UserId; // x0
  __int64 v15; // x1
  int64_t v16; // x19

  if ( (byte_42E7258 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v4, v5, v6);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&NetworkManager_TypeInfo, v10, v11, v12);
    byte_42E7258 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  UserId = (int64_t)UserPresentBoxMaster__getVaildList(Master_WarQuestSelectionMaster, UserId, 0LL);
  v16 = UserId;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v16 )
LABEL_15:
    sub_B5D69C(UserId, v15);
  return BalanceConfig_TypeInfo->static_fields->PresentBoxMax - *(_DWORD *)(v16 + 24);
}


int32_t __fastcall LotteryShopBuyItemConfirmMenu__GetUserItemBuyableCount(
        LotteryShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  ShopGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x1
  ShopGroupMaster_o *v20; // x21
  int BuyableCount; // w21
  UserItemMaster_o *v22; // x22
  int64_t UserId; // x23
  int MasterName_k__BackingField_high; // w20
  LotteryShopBuyItemConfirmMenu_o *Prices; // x0
  const MethodInfo *v26; // x1
  int randomShopBuyLimit; // w20
  LotteryShopBuyItemConfirmMenu_c *v28; // x8
  int32_t PresentBoxSpace; // w0

  if ( (byte_42E725C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopGroupMaster___, (_DWORD)shopEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserItemMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&LotteryShopBuyItemConfirmMenu_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    byte_42E725C = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopGroupMaster___);
  if ( !shopEntity )
    goto LABEL_28;
  v20 = Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (ShopGroupMaster_o *)ShopEntity__getTargetId(shopEntity, 0, 0LL);
  if ( !v20 )
    goto LABEL_28;
  BuyableCount = ShopGroupMaster__GetBuyableCount(v20, (int32_t)Master_WarQuestSelectionMaster, 0LL);
  v22 = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Master_WarQuestSelectionMaster = (ShopGroupMaster_o *)ShopEntity__GetItemID(shopEntity, 0LL);
  if ( !v22
    || (Master_WarQuestSelectionMaster = (ShopGroupMaster_o *)UserItemMaster__GetEntityDefinitely(
                                                                v22,
                                                                UserId,
                                                                (int32_t)Master_WarQuestSelectionMaster,
                                                                0LL)) == 0LL
    || !this->fields.shopEntity )
  {
LABEL_28:
    sub_B5D69C(Master_WarQuestSelectionMaster, v19);
  }
  MasterName_k__BackingField_high = HIDWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField);
  Prices = (LotteryShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(this->fields.shopEntity, 0, 0LL);
  if ( BuyableCount <= MasterName_k__BackingField_high / (int)Prices )
    randomShopBuyLimit = BuyableCount;
  else
    randomShopBuyLimit = MasterName_k__BackingField_high / (int)Prices;
  v28 = LotteryShopBuyItemConfirmMenu_TypeInfo;
  if ( (BYTE3(LotteryShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo);
    v28 = LotteryShopBuyItemConfirmMenu_TypeInfo;
  }
  if ( randomShopBuyLimit > v28->static_fields->randomShopBuyLimit )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      randomShopBuyLimit = v28->static_fields->randomShopBuyLimit;
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        randomShopBuyLimit = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->randomShopBuyLimit;
      }
    }
    else
    {
      randomShopBuyLimit = v28->static_fields->randomShopBuyLimit;
    }
  }
  PresentBoxSpace = LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(Prices, v26);
  if ( randomShopBuyLimit <= (PresentBoxSpace & ~(PresentBoxSpace >> 31)) )
    return randomShopBuyLimit;
  else
    return PresentBoxSpace & ~(PresentBoxSpace >> 31);
}


void __fastcall LotteryShopBuyItemConfirmMenu__Init(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UILabel_o *messageLabel; // x20

  if ( (byte_42E725E & 1) == 0 )
  {
    sub_B5D5C4(&ShopBuyItemUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E725E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        this->fields.state = 0,
        this->fields.shopEntity = 0LL,
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.shopEntity, 0LL, v10, v11, v12, v13, v14, v15),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.nameLabel) == 0LL) )
  {
    sub_B5D69C(gameObject, v9);
  }
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( (BYTE3(ShopBuyItemUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopBuyItemUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopBuyItemUtility_TypeInfo);
  }
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
  if ( (byte_42E725B & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, count, price, method);
    byte_42E725B = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v6->static_fields->UserItemMax;
  if ( price * v5 > UserItemMax )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42E7261 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7261 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_B5D69C(0LL, v5);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    LotteryShopBuyItemConfirmMenu__CallOnDecide(this, 0, v7);
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__OnClickCheckbox(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 isPlayedScriptSkipSelected; // w8
  bool v6; // zf
  bool v7; // w8
  bool v8; // w0
  const MethodInfo *v9; // x1

  if ( (byte_42E725D & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E725D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E7262 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7262 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    LotteryShopBuyItemConfirmMenu__CallOnDecide(this, this->fields.buyCount, v5);
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__OnClickDetail(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  struct ShopEntity_o *shopEntity; // x8
  System_String_o *name; // x21
  System_String_o *infoMessage; // x22
  CommonUI_o *v19; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v20; // x23

  if ( (byte_42E7264 & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42E7264 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity
    || (name = shopEntity->fields.name,
        infoMessage = shopEntity->fields.infoMessage,
        v19 = (CommonUI_o *)Instance,
        v20 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v20,
          (Il2CppObject *)this,
          Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
          0LL),
        !v19) )
  {
    sub_B5D69C(Instance, v15);
  }
  CommonUI__OpenItemDetailDialog_18267660(v19, name, infoMessage, v20, 0LL);
}


void __fastcall LotteryShopBuyItemConfirmMenu__Open(
        LotteryShopBuyItemConfirmMenu_o *this,
        ShopEntity_o *entity,
        ShopBuyItemListViewItem_o *item,
        System_Action_int__o *onDecide,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  struct ShopEntity_o **p_shopEntity; // x22
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  int64_t gameObject; // x0
  System_String_o *v62; // x1
  const MethodInfo *v63; // x1
  bool IsPreparation; // w20
  const MethodInfo *v65; // x2
  UILabel_o *nameLabel; // x23
  struct ShopEntity_o *shopEntity; // x8
  ItemIconComponent_o *shopItemIcon; // x23
  int32_t v69; // w24
  ItemIconComponent_o *payItemIcon; // x22
  UISprite_o *payInfoBg; // x22
  LotteryShopBuyItemConfirmMenu_c *v72; // x0
  System_String_o *PAY_INFO_BG_SPITE_NAME; // x23
  _BOOL8 v74; // x0
  const MethodInfo *v75; // x1
  int v76; // w23
  UILabel_o *warningLabel; // x22
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x22
  ShopEntity_o *Shop_k__BackingField; // x8
  int64_t v80; // x21
  int32_t *v81; // x21
  int32_t v82; // w23
  BalanceConfig_c *v83; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_UserItemMax; // x8
  int32_t UserItemMax; // t1
  int64_t v87; // x22
  UILabel_o *haveNum; // x21
  UILabel_o *haveText; // x21
  UILabel_o *needText; // x21
  UILabel_o *payInfoLabel; // x21
  UILabel_o *checkboxLabel; // x21
  const MethodInfo *v93; // x2
  int UserItemBuyableCount; // w21
  const MethodInfo *v95; // x3
  __int64 v96; // x1
  const MethodInfo *v97; // x2
  System_Action_o *v98; // x20
  System_String_o *v99; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E7257 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)entity, (_DWORD)item, onDecide);
    sub_B5D5C4(&AtlasManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserItemMaster___, v18, v19, v20);
    sub_B5D5C4(&DataManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_LotteryShopBuyItemConfirmMenu_EndOpen__, v27, v28, v29);
    sub_B5D5C4(&LotteryShopBuyItemConfirmMenu_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&NetworkManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_8540/*"LOTTERY_SHOP_PAY_INFO"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_8538/*"LOTTERY_SHOP_HAVE_EVENT_ITEM"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_8541/*"LOTTERY_SHOP_SKIP_INFO"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_8539/*"LOTTERY_SHOP_NEED_EVENT_ITEM"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_8837/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_1/*""*/, v51, v52, v53);
    byte_42E7257 = 1;
  }
  v99 = 0LL;
  message = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      (System_String_array **)item,
      (System_String_array **)onDecide,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    p_shopEntity = &this->fields.shopEntity;
    this->fields.shopEntity = entity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.shopEntity,
      (System_Int32_array **)entity,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.buyCount = 1;
      this->fields.isPlayedScriptSkipSelected = EventRewardSaveData__GetLotteryShopSkipState(0LL);
      LotteryShopBuyItemConfirmMenu__SetCheckMark(this, v63);
      gameObject = (int64_t)this->fields.shopEntity;
      if ( gameObject )
      {
        gameObject = ShopEntity__GetItemCount((ShopEntity_o *)gameObject, 0LL);
        this->fields.itemCount = gameObject;
        if ( item )
        {
          IsPreparation = ShopBuyItemListViewItem__GetIsPreparation(item, &message, &v99, 0LL);
          LotteryShopBuyItemConfirmMenu__UpdateCountValue(this, this->fields.buyCount, v65);
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
                    v69 = *(_DWORD *)(gameObject + 48);
                    gameObject = ShopEntity__get_TargetId((ShopEntity_o *)gameObject, 0LL);
                    if ( *p_shopEntity )
                    {
                      if ( shopItemIcon )
                      {
                        ItemIconComponent__SetPurchase(
                          shopItemIcon,
                          v69,
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
                            v72 = LotteryShopBuyItemConfirmMenu_TypeInfo;
                            if ( (BYTE3(LotteryShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo);
                              v72 = LotteryShopBuyItemConfirmMenu_TypeInfo;
                            }
                            PAY_INFO_BG_SPITE_NAME = v72->static_fields->PAY_INFO_BG_SPITE_NAME;
                            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !AtlasManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                            }
                            AtlasManager__SetEventUI(payInfoBg, PAY_INFO_BG_SPITE_NAME, 0LL);
                            v74 = AtlasManager__SetEventUI(
                                    this->fields.payInfoLine,
                                    LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->PAY_INFO_LINE_SPITE_NAME,
                                    0LL);
                            gameObject = LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(
                                           (LotteryShopBuyItemConfirmMenu_o *)v74,
                                           v75);
                            if ( this->fields.payInfo )
                            {
                              v76 = gameObject;
                              UnityEngine_GameObject__SetActive(this->fields.payInfo, (int)gameObject > 0, 0LL);
                              warningLabel = this->fields.warningLabel;
                              if ( v76 <= 0 )
                              {
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                gameObject = (int64_t)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_8837/*"MISSION_ACTION_PRESENT_BOX_FULL_WARNING"*/,
                                                        0LL);
                                v62 = (System_String_o *)gameObject;
                                if ( !warningLabel )
                                  goto LABEL_61;
                              }
                              else
                              {
                                v62 = (System_String_o *)StringLiteral_1/*""*/;
                                if ( !warningLabel )
                                  goto LABEL_61;
                              }
                              UILabel__set_text(warningLabel, v62, 0LL);
                              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !DataManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                              }
                              Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserItemMaster___);
                              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !NetworkManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              }
                              gameObject = NetworkManager__get_UserId(0LL);
                              Shop_k__BackingField = item->fields._Shop_k__BackingField;
                              if ( Shop_k__BackingField )
                              {
                                v80 = gameObject;
                                gameObject = ShopEntity__GetItemID(Shop_k__BackingField, 0LL);
                                if ( Master_WarQuestSelectionMaster )
                                {
                                  gameObject = (int64_t)UserItemMaster__GetEntityDefinitely(
                                                          Master_WarQuestSelectionMaster,
                                                          v80,
                                                          gameObject,
                                                          0LL);
                                  if ( gameObject )
                                  {
                                    v81 = (int32_t *)(gameObject + 28);
                                    v82 = *(_DWORD *)(gameObject + 28);
                                    v83 = BalanceConfig_TypeInfo;
                                    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !BalanceConfig_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                      v83 = BalanceConfig_TypeInfo;
                                    }
                                    static_fields = v83->static_fields;
                                    UserItemMax = static_fields->UserItemMax;
                                    p_UserItemMax = &static_fields->UserItemMax;
                                    if ( v82 > UserItemMax )
                                    {
                                      if ( (BYTE3(v83->vtable._0_Equals.methodPtr) & 4) != 0 )
                                      {
                                        v81 = p_UserItemMax;
                                        if ( !v83->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(v83);
                                          v81 = &BalanceConfig_TypeInfo->static_fields->UserItemMax;
                                        }
                                      }
                                      else
                                      {
                                        v81 = p_UserItemMax;
                                      }
                                    }
                                    v87 = *v81;
                                    haveNum = this->fields.haveNum;
                                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    }
                                    gameObject = (int64_t)LocalizationManager__GetNumberFormatLong(v87, 0LL);
                                    if ( haveNum )
                                    {
                                      UILabel__set_text(haveNum, (System_String_o *)gameObject, 0LL);
                                      haveText = this->fields.haveText;
                                      gameObject = (int64_t)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8538/*"LOTTERY_SHOP_HAVE_EVENT_ITEM"*/,
                                                              0LL);
                                      if ( haveText )
                                      {
                                        UILabel__set_text(haveText, (System_String_o *)gameObject, 0LL);
                                        needText = this->fields.needText;
                                        gameObject = (int64_t)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_8539/*"LOTTERY_SHOP_NEED_EVENT_ITEM"*/,
                                                                0LL);
                                        if ( needText )
                                        {
                                          UILabel__set_text(needText, (System_String_o *)gameObject, 0LL);
                                          payInfoLabel = this->fields.payInfoLabel;
                                          gameObject = (int64_t)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_8540/*"LOTTERY_SHOP_PAY_INFO"*/,
                                                                  0LL);
                                          if ( payInfoLabel )
                                          {
                                            UILabel__set_text(payInfoLabel, (System_String_o *)gameObject, 0LL);
                                            checkboxLabel = this->fields.checkboxLabel;
                                            gameObject = (int64_t)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_8541/*"LOTTERY_SHOP_SKIP_INFO"*/,
                                                                    0LL);
                                            if ( checkboxLabel )
                                            {
                                              UILabel__set_text(checkboxLabel, (System_String_o *)gameObject, 0LL);
                                              UserItemBuyableCount = LotteryShopBuyItemConfirmMenu__GetUserItemBuyableCount(
                                                                       this,
                                                                       this->fields.shopEntity,
                                                                       v93);
                                              LotteryShopBuyItemConfirmMenu__SetItemSlider(
                                                this,
                                                UserItemBuyableCount,
                                                IsPreparation,
                                                v95);
                                              gameObject = (int64_t)this->fields.decideButton;
                                              if ( gameObject )
                                              {
                                                if ( UserItemBuyableCount >= 1 )
                                                  v96 = 0LL;
                                                else
                                                  v96 = 3LL;
                                                (*(void (__fastcall **)(int64_t, __int64, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
                                                  gameObject,
                                                  v96,
                                                  1LL,
                                                  *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
                                                LotteryShopBuyItemConfirmMenu__SetDecideButtonImage(
                                                  this,
                                                  this->fields.shopEntity,
                                                  v97);
                                                this->fields.state = 1;
                                                v98 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                                                System_Action___ctor(
                                                  v98,
                                                  (Il2CppObject *)this,
                                                  Method_LotteryShopBuyItemConfirmMenu_EndOpen__,
                                                  0LL);
                                                BaseDialog__Open((BaseDialog_o *)this, v98, 0, 0LL);
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
LABEL_61:
    sub_B5D69C(gameObject, v62);
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
    sub_B5D69C(checkMarkSprite, method);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  ShopDetailMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v25; // x1
  ShopDetailEntity_o *ShopDetailEntity; // x0
  int okTextImageId; // w8
  UISprite_o *decideButtonImg; // x21
  LotteryShopBuyItemConfirmMenu_c *v29; // x0
  System_String_o *VALENTINE_BTN_NAME; // x22
  System_String_o *v31; // x20
  System_String_o *v32; // x0
  System_String_o *v33; // x20
  UISprite_o *v34; // x20
  int v35; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E7259 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)shopEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopDetailMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LotteryShopBuyItemConfirmMenu_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_17312/*"btn_txt_trade"*/, v21, v22, v23);
    byte_42E7259 = 1;
  }
  v35 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopDetailMaster___);
  if ( !shopEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(Master_WarQuestSelectionMaster, shopEntity->fields.id, 0LL);
  if ( ShopDetailEntity )
    okTextImageId = ShopDetailEntity->fields.okTextImageId;
  else
    okTextImageId = 0;
  v35 = okTextImageId;
  if ( shopEntity->fields.payType == 6 )
  {
    if ( !okTextImageId )
      goto LABEL_20;
    decideButtonImg = this->fields.decideButtonImg;
    v29 = LotteryShopBuyItemConfirmMenu_TypeInfo;
    if ( (BYTE3(LotteryShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo);
      v29 = LotteryShopBuyItemConfirmMenu_TypeInfo;
    }
    VALENTINE_BTN_NAME = v29->static_fields->VALENTINE_BTN_NAME;
    v31 = System_Int32__ToString((int)shopEntity + 24, 0LL);
    v32 = System_Int32__ToString((int32_t)&v35, 0LL);
    v33 = System_String__Concat_44581200(VALENTINE_BTN_NAME, v31, (System_String_o *)StringLiteral_16096/*"_"*/, v32, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    if ( !EventRewardRootComponent__setRewardInfoImg(decideButtonImg, v33, 0LL) )
    {
LABEL_20:
      v34 = this->fields.decideButtonImg;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCommon(v34, 0LL);
      Master_WarQuestSelectionMaster = (ShopDetailMaster_o *)this->fields.decideButtonImg;
      if ( Master_WarQuestSelectionMaster )
      {
        UISprite__set_spriteName(
          (UISprite_o *)Master_WarQuestSelectionMaster,
          (System_String_o *)StringLiteral_17312/*"btn_txt_trade"*/,
          0LL);
        Master_WarQuestSelectionMaster = (ShopDetailMaster_o *)this->fields.decideButtonImg;
        if ( Master_WarQuestSelectionMaster )
        {
          ((void (__fastcall *)(ShopDetailMaster_o *, Il2CppMethodPointer))Master_WarQuestSelectionMaster->klass[1].vtable._5_ForForceDerived.method)(
            Master_WarQuestSelectionMaster,
            Master_WarQuestSelectionMaster->klass[1].vtable._6_preProcess.methodPtr);
          return;
        }
      }
LABEL_27:
      sub_B5D69C(Master_WarQuestSelectionMaster, v25);
    }
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
    sub_B5D69C(itemSlider, *(_QWORD *)&buyableCount);
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
    sub_B5D69C(itemSlider, method);
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
  __int64 v3; // x3
  LotteryShopBuyItemConfirmMenu_o *v5; // x20
  struct ShopEntity_o *shopEntity; // x8
  UILabel_o *needNum; // x20
  __int64 setNum; // x21

  v5 = this;
  if ( (byte_42E725A & 1) == 0 )
  {
    this = (LotteryShopBuyItemConfirmMenu_o *)sub_B5D5C4(&LocalizationManager_TypeInfo, count, (_DWORD)method, v3);
    byte_42E725A = 1;
  }
  shopEntity = v5->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_9;
  needNum = v5->fields.needNum;
  setNum = shopEntity->fields.setNum;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (LotteryShopBuyItemConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(setNum * count, 0LL);
  if ( !needNum )
LABEL_9:
    sub_B5D69C(this, *(_QWORD *)&count);
  UILabel__set_text(needNum, (System_String_o *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall LotteryShopBuyItemConfirmMenu__get_closeBtnObject(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E7263 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7263 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}