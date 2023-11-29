void __fastcall LotteryShopBuyItemConfirmMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  struct LotteryShopBuyItemConfirmMenu_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct LotteryShopBuyItemConfirmMenu_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40F8E09 & 1) == 0 )
  {
    sub_B16FFC(&LotteryShopBuyItemConfirmMenu_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_22705, v8);
    sub_B16FFC(&StringLiteral_16987, v9);
    sub_B16FFC(&StringLiteral_22709, v10);
    byte_40F8E09 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_16987;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16987;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_22705;
  v13->PAY_INFO_BG_SPITE_NAME = (struct System_String_o *)StringLiteral_22705;
  sub_B16F98((BattleServantConfConponent_o *)&v13->PAY_INFO_BG_SPITE_NAME, v14, v15, v16, v17, v18, v19, v20);
  v21 = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_22709;
  v21->PAY_INFO_LINE_SPITE_NAME = (struct System_String_o *)StringLiteral_22709;
  sub_B16F98((BattleServantConfConponent_o *)&v21->PAY_INFO_LINE_SPITE_NAME, v22, v23, v24, v25, v26, v27, v28);
  LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->randomShopBuyLimit = 10;
}


void __fastcall LotteryShopBuyItemConfirmMenu___ctor(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40F8E08 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F8E08 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_40F8E02 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, *(_QWORD *)&result);
    byte_40F8E02 = 1;
  }
  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    this->fields.onDecide = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_int___Invoke(onDecide, result, (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__Close(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  LotteryShopBuyItemConfirmMenu__Close_23159652(this, 0LL, v2);
}


void __fastcall LotteryShopBuyItemConfirmMenu__Close_23159652(
        LotteryShopBuyItemConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F8E01 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_LotteryShopBuyItemConfirmMenu_EndClose__, v10);
    byte_40F8E01 = 1;
  }
  this->fields.onClose = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_LotteryShopBuyItemConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall LotteryShopBuyItemConfirmMenu__EndClose(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Action_o *onClose; // x20

  LotteryShopBuyItemConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  onClose = this->fields.onClose;
  if ( onClose )
  {
    this->fields.onClose = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.onClose, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(onClose, 0LL);
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
  CommonUI_o *Instance; // x0

  if ( (byte_40F8E07 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F8E07 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


int32_t __fastcall LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  UserPresentBoxMaster_o *Master_WarQuestSelectionMaster; // x19
  int64_t UserId; // x0
  UserPresentBoxEntity_array *VaildList; // x19

  if ( (byte_40F8DFA & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v2);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    byte_40F8DFA = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  VaildList = UserPresentBoxMaster__getVaildList(Master_WarQuestSelectionMaster, UserId, 0LL);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !VaildList )
LABEL_15:
    sub_B170D4();
  return BalanceConfig_TypeInfo->static_fields->PresentBoxMax - VaildList->max_length;
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  ShopGroupMaster_o *v10; // x21
  int32_t TargetId; // w0
  int BuyableCount; // w21
  UserItemMaster_o *v13; // x22
  int64_t UserId; // x23
  int32_t ItemID; // w0
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w20
  LotteryShopBuyItemConfirmMenu_o *Prices; // x0
  const MethodInfo *v19; // x1
  int randomShopBuyLimit; // w20
  LotteryShopBuyItemConfirmMenu_c *v21; // x8
  int32_t PresentBoxSpace; // w0

  if ( (byte_40F8DFE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ShopGroupMaster___, shopEntity);
    sub_B16FFC(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&LotteryShopBuyItemConfirmMenu_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    byte_40F8DFE = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ShopGroupMaster___);
  if ( !shopEntity )
    goto LABEL_28;
  v10 = (ShopGroupMaster_o *)Master_WarQuestSelectionMaster;
  TargetId = ShopEntity__getTargetId(shopEntity, 0, 0LL);
  if ( !v10 )
    goto LABEL_28;
  BuyableCount = ShopGroupMaster__GetBuyableCount(v10, TargetId, 0LL);
  v13 = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  ItemID = ShopEntity__GetItemID(shopEntity, 0LL);
  if ( !v13
    || (EntityDefinitely = UserItemMaster__GetEntityDefinitely(v13, UserId, ItemID, 0LL)) == 0LL
    || !this->fields.shopEntity )
  {
LABEL_28:
    sub_B170D4();
  }
  num = EntityDefinitely->fields.num;
  Prices = (LotteryShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(this->fields.shopEntity, 0, 0LL);
  if ( BuyableCount <= num / (int)Prices )
    randomShopBuyLimit = BuyableCount;
  else
    randomShopBuyLimit = num / (int)Prices;
  v21 = LotteryShopBuyItemConfirmMenu_TypeInfo;
  if ( (BYTE3(LotteryShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo);
    v21 = LotteryShopBuyItemConfirmMenu_TypeInfo;
  }
  if ( randomShopBuyLimit > v21->static_fields->randomShopBuyLimit )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      randomShopBuyLimit = v21->static_fields->randomShopBuyLimit;
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        randomShopBuyLimit = LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->randomShopBuyLimit;
      }
    }
    else
    {
      randomShopBuyLimit = v21->static_fields->randomShopBuyLimit;
    }
  }
  PresentBoxSpace = LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(Prices, v19);
  if ( randomShopBuyLimit <= (PresentBoxSpace & ~(PresentBoxSpace >> 31)) )
    return randomShopBuyLimit;
  else
    return PresentBoxSpace & ~(PresentBoxSpace >> 31);
}


void __fastcall LotteryShopBuyItemConfirmMenu__Init(LotteryShopBuyItemConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UILabel_o *nameLabel; // x0
  UILabel_o *messageLabel; // x20

  if ( (byte_40F8E00 & 1) == 0 )
  {
    sub_B16FFC(&ShopBuyItemUtility_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40F8E00 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        this->fields.state = 0,
        this->fields.shopEntity = 0LL,
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.shopEntity, 0LL, v5, v6, v7, v8, v9, v10),
        (nameLabel = this->fields.nameLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1, 0LL);
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
  if ( (byte_40F8DFD & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, count);
    byte_40F8DFD = 1;
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
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40F8E03 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F8E03 = 1;
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
      sub_B170D4();
    UISliderWithButton__grayMode(itemSlider, 0LL);
    LotteryShopBuyItemConfirmMenu__CallOnDecide(this, 0, v4);
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__OnClickCheckbox(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  _BOOL4 isPlayedScriptSkipSelected; // w8
  bool v4; // zf
  bool v5; // w8
  bool v6; // w0
  const MethodInfo *v7; // x1

  if ( (byte_40F8DFF & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F8DFF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  isPlayedScriptSkipSelected = this->fields.isPlayedScriptSkipSelected;
  v4 = !isPlayedScriptSkipSelected;
  v5 = !isPlayedScriptSkipSelected;
  v6 = v4;
  this->fields.isPlayedScriptSkipSelected = v5;
  EventRewardSaveData__SetLotteryShopSkipState(v6, 0LL);
  LotteryShopBuyItemConfirmMenu__SetCheckMark(this, v7);
}


void __fastcall LotteryShopBuyItemConfirmMenu__OnClickDecide(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F8E04 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F8E04 = 1;
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
    LotteryShopBuyItemConfirmMenu__CallOnDecide(this, this->fields.buyCount, v3);
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__OnClickDetail(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  struct ShopEntity_o *shopEntity; // x8
  System_String_o *name; // x21
  System_String_o *infoMessage; // x22
  CommonUI_o *v14; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v15; // x23

  if ( (byte_40F8E06 & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40F8E06 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity
    || (name = shopEntity->fields.name,
        infoMessage = shopEntity->fields.infoMessage,
        v14 = (CommonUI_o *)Instance,
        v15 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v7,
                                                          v8,
                                                          v9,
                                                          v10),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_LotteryShopBuyItemConfirmMenu_EndShowItemDetailDialog__,
          0LL),
        !v14) )
  {
    sub_B170D4();
  }
  CommonUI__OpenItemDetailDialog_18297320(v14, name, infoMessage, v15, 0LL);
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  struct ShopEntity_o **p_shopEntity; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v34; // x1
  ShopEntity_o *shopEntity; // x0
  bool IsPreparation; // w20
  const MethodInfo *v37; // x2
  ShopEntity_o *v38; // x0
  UILabel_o *nameLabel; // x23
  System_String_o *Name; // x0
  struct ShopEntity_o *v41; // x8
  UILabel_o *messageLabel; // x0
  struct ShopEntity_o *v43; // x0
  ItemIconComponent_o *shopItemIcon; // x23
  int32_t purchaseType; // w24
  int32_t TargetId; // w0
  ShopEntity_o *Shop_k__BackingField; // x0
  ItemIconComponent_o *payItemIcon; // x22
  int32_t ItemID; // w0
  UISprite_o *payInfoBg; // x22
  LotteryShopBuyItemConfirmMenu_c *v51; // x0
  System_String_o *PAY_INFO_BG_SPITE_NAME; // x23
  _BOOL8 v53; // x0
  const MethodInfo *v54; // x1
  int32_t PresentBoxSpace; // w0
  int v56; // w23
  const MethodInfo *v57; // x1
  UILabel_o *warningLabel; // x22
  System_String_o *v59; // x1
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  ShopEntity_o *v62; // x8
  int64_t v63; // x21
  int32_t v64; // w0
  UserItemEntity_o *EntityDefinitely; // x0
  const MethodInfo *v66; // x1
  int32_t *p_num; // x21
  int32_t num; // w23
  BalanceConfig_c *v69; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_UserItemMax; // x8
  int32_t UserItemMax; // t1
  int64_t v73; // x22
  UILabel_o *haveNum; // x21
  System_String_o *NumberFormatLong; // x0
  UILabel_o *haveText; // x21
  const MethodInfo *v77; // x1
  System_String_o *v78; // x0
  UILabel_o *needText; // x21
  const MethodInfo *v80; // x1
  System_String_o *v81; // x0
  UILabel_o *payInfoLabel; // x21
  const MethodInfo *v83; // x1
  System_String_o *v84; // x0
  UILabel_o *checkboxLabel; // x21
  const MethodInfo *v86; // x1
  System_String_o *v87; // x0
  const MethodInfo *v88; // x2
  int UserItemBuyableCount; // w21
  const MethodInfo *v90; // x3
  struct UICommonButton_o *decideButton; // x0
  __int64 v92; // x1
  const MethodInfo *v93; // x2
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  System_Action_o *v98; // x20
  System_String_o *v99; // [xsp+0h] [xbp-40h] BYREF
  System_String_o *message; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F8DF9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, entity);
    sub_B16FFC(&AtlasManager_TypeInfo, v12);
    sub_B16FFC(&BalanceConfig_TypeInfo, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_UserItemMaster___, v14);
    sub_B16FFC(&DataManager_TypeInfo, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&Method_LotteryShopBuyItemConfirmMenu_EndOpen__, v17);
    sub_B16FFC(&LotteryShopBuyItemConfirmMenu_TypeInfo, v18);
    sub_B16FFC(&NetworkManager_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_8426, v20);
    sub_B16FFC(&StringLiteral_8424, v21);
    sub_B16FFC(&StringLiteral_8427, v22);
    sub_B16FFC(&StringLiteral_8425, v23);
    sub_B16FFC(&StringLiteral_8718, v24);
    sub_B16FFC(&StringLiteral_1, v25);
    byte_40F8DF9 = 1;
  }
  v99 = 0LL;
  message = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B16F98(
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.shopEntity,
      (System_Int32_array **)entity,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      this->fields.buyCount = 1;
      this->fields.isPlayedScriptSkipSelected = EventRewardSaveData__GetLotteryShopSkipState(0LL);
      LotteryShopBuyItemConfirmMenu__SetCheckMark(this, v34);
      shopEntity = this->fields.shopEntity;
      if ( shopEntity )
      {
        this->fields.itemCount = ShopEntity__GetItemCount(shopEntity, 0LL);
        if ( item )
        {
          IsPreparation = ShopBuyItemListViewItem__GetIsPreparation(item, &message, &v99, 0LL);
          LotteryShopBuyItemConfirmMenu__UpdateCountValue(this, this->fields.buyCount, v37);
          v38 = this->fields.shopEntity;
          if ( v38 )
          {
            nameLabel = this->fields.nameLabel;
            Name = ShopEntity__getName(v38, 0LL);
            if ( nameLabel )
            {
              UILabel__set_text(nameLabel, Name, 0LL);
              v41 = this->fields.shopEntity;
              if ( v41 )
              {
                messageLabel = this->fields.messageLabel;
                if ( messageLabel )
                {
                  UILabel__set_text(messageLabel, v41->fields.detail, 0LL);
                  v43 = this->fields.shopEntity;
                  if ( v43 )
                  {
                    shopItemIcon = this->fields.shopItemIcon;
                    purchaseType = v43->fields.purchaseType;
                    TargetId = ShopEntity__get_TargetId(v43, 0LL);
                    if ( *p_shopEntity )
                    {
                      if ( shopItemIcon )
                      {
                        ItemIconComponent__SetPurchase(
                          shopItemIcon,
                          purchaseType,
                          TargetId,
                          (*p_shopEntity)->fields.imageId,
                          0LL);
                        Shop_k__BackingField = item->fields._Shop_k__BackingField;
                        if ( Shop_k__BackingField )
                        {
                          payItemIcon = this->fields.payItemIcon;
                          ItemID = ShopEntity__GetItemID(Shop_k__BackingField, 0LL);
                          if ( payItemIcon )
                          {
                            ItemIconComponent__SetItem(payItemIcon, ItemID, -1, 0LL);
                            payInfoBg = this->fields.payInfoBg;
                            v51 = LotteryShopBuyItemConfirmMenu_TypeInfo;
                            if ( (BYTE3(LotteryShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo);
                              v51 = LotteryShopBuyItemConfirmMenu_TypeInfo;
                            }
                            PAY_INFO_BG_SPITE_NAME = v51->static_fields->PAY_INFO_BG_SPITE_NAME;
                            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !AtlasManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                            }
                            AtlasManager__SetEventUI(payInfoBg, PAY_INFO_BG_SPITE_NAME, 0LL);
                            v53 = AtlasManager__SetEventUI(
                                    this->fields.payInfoLine,
                                    LotteryShopBuyItemConfirmMenu_TypeInfo->static_fields->PAY_INFO_LINE_SPITE_NAME,
                                    0LL);
                            PresentBoxSpace = LotteryShopBuyItemConfirmMenu__GetPresentBoxSpace(
                                                (LotteryShopBuyItemConfirmMenu_o *)v53,
                                                v54);
                            if ( this->fields.payInfo )
                            {
                              v56 = PresentBoxSpace;
                              UnityEngine_GameObject__SetActive(this->fields.payInfo, PresentBoxSpace > 0, 0LL);
                              warningLabel = this->fields.warningLabel;
                              if ( v56 <= 0 )
                              {
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v59 = LocalizationManager__Get((System_String_o *)StringLiteral_8718, v57);
                                if ( !warningLabel )
                                  goto LABEL_61;
                              }
                              else
                              {
                                v59 = (System_String_o *)StringLiteral_1;
                                if ( !warningLabel )
                                  goto LABEL_61;
                              }
                              UILabel__set_text(warningLabel, v59, 0LL);
                              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !DataManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                              }
                              Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserItemMaster___);
                              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                && !NetworkManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              }
                              UserId = NetworkManager__get_UserId(0LL);
                              v62 = item->fields._Shop_k__BackingField;
                              if ( v62 )
                              {
                                v63 = UserId;
                                v64 = ShopEntity__GetItemID(v62, 0LL);
                                if ( Master_WarQuestSelectionMaster )
                                {
                                  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                                                       Master_WarQuestSelectionMaster,
                                                       v63,
                                                       v64,
                                                       0LL);
                                  if ( EntityDefinitely )
                                  {
                                    p_num = &EntityDefinitely->fields.num;
                                    num = EntityDefinitely->fields.num;
                                    v69 = BalanceConfig_TypeInfo;
                                    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !BalanceConfig_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                      v69 = BalanceConfig_TypeInfo;
                                    }
                                    static_fields = v69->static_fields;
                                    UserItemMax = static_fields->UserItemMax;
                                    p_UserItemMax = &static_fields->UserItemMax;
                                    if ( num > UserItemMax )
                                    {
                                      if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 )
                                      {
                                        p_num = p_UserItemMax;
                                        if ( !v69->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(v69);
                                          p_num = &BalanceConfig_TypeInfo->static_fields->UserItemMax;
                                        }
                                      }
                                      else
                                      {
                                        p_num = p_UserItemMax;
                                      }
                                    }
                                    v73 = *p_num;
                                    haveNum = this->fields.haveNum;
                                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    }
                                    NumberFormatLong = LocalizationManager__GetNumberFormatLong(v73, v66);
                                    if ( haveNum )
                                    {
                                      UILabel__set_text(haveNum, NumberFormatLong, 0LL);
                                      haveText = this->fields.haveText;
                                      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_8424, v77);
                                      if ( haveText )
                                      {
                                        UILabel__set_text(haveText, v78, 0LL);
                                        needText = this->fields.needText;
                                        v81 = LocalizationManager__Get((System_String_o *)StringLiteral_8425, v80);
                                        if ( needText )
                                        {
                                          UILabel__set_text(needText, v81, 0LL);
                                          payInfoLabel = this->fields.payInfoLabel;
                                          v84 = LocalizationManager__Get((System_String_o *)StringLiteral_8426, v83);
                                          if ( payInfoLabel )
                                          {
                                            UILabel__set_text(payInfoLabel, v84, 0LL);
                                            checkboxLabel = this->fields.checkboxLabel;
                                            v87 = LocalizationManager__Get((System_String_o *)StringLiteral_8427, v86);
                                            if ( checkboxLabel )
                                            {
                                              UILabel__set_text(checkboxLabel, v87, 0LL);
                                              UserItemBuyableCount = LotteryShopBuyItemConfirmMenu__GetUserItemBuyableCount(
                                                                       this,
                                                                       this->fields.shopEntity,
                                                                       v88);
                                              LotteryShopBuyItemConfirmMenu__SetItemSlider(
                                                this,
                                                UserItemBuyableCount,
                                                IsPreparation,
                                                v90);
                                              decideButton = this->fields.decideButton;
                                              if ( decideButton )
                                              {
                                                if ( UserItemBuyableCount >= 1 )
                                                  v92 = 0LL;
                                                else
                                                  v92 = 3LL;
                                                ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
                                                  decideButton,
                                                  v92,
                                                  1LL,
                                                  decideButton->klass->vtable._15_OnPress.methodPtr);
                                                LotteryShopBuyItemConfirmMenu__SetDecideButtonImage(
                                                  this,
                                                  this->fields.shopEntity,
                                                  v93);
                                                this->fields.state = 1;
                                                v98 = (System_Action_o *)sub_B170CC(
                                                                           System_Action_TypeInfo,
                                                                           v94,
                                                                           v95,
                                                                           v96,
                                                                           v97);
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
    sub_B170D4();
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__SetCheckMark(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *checkMarkSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  checkMarkSprite = (UnityEngine_Component_o *)this->fields.checkMarkSprite;
  if ( !checkMarkSprite || (gameObject = UnityEngine_Component__get_gameObject(checkMarkSprite, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, this->fields.isPlayedScriptSkipSelected, 0LL);
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
  ShopDetailMaster_o *Master_WarQuestSelectionMaster; // x0
  ShopDetailEntity_o *ShopDetailEntity; // x0
  int okTextImageId; // w8
  UISprite_o *decideButtonImg; // x21
  LotteryShopBuyItemConfirmMenu_c *v15; // x0
  System_String_o *VALENTINE_BTN_NAME; // x22
  System_String_o *v17; // x20
  System_String_o *v18; // x0
  System_String_o *v19; // x20
  UISprite_o *v20; // x20
  UISprite_o *v21; // x0
  struct UISprite_o *v22; // x0
  int v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8DFB & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, shopEntity);
    sub_B16FFC(&Method_DataManager_GetMaster_ShopDetailMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, v7);
    sub_B16FFC(&LotteryShopBuyItemConfirmMenu_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_15842, v9);
    sub_B16FFC(&StringLiteral_17036, v10);
    byte_40F8DFB = 1;
  }
  v23 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ShopDetailMaster___);
  if ( !shopEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(Master_WarQuestSelectionMaster, shopEntity->fields.id, 0LL);
  if ( ShopDetailEntity )
    okTextImageId = ShopDetailEntity->fields.okTextImageId;
  else
    okTextImageId = 0;
  v23 = okTextImageId;
  if ( shopEntity->fields.payType == 6 )
  {
    if ( !okTextImageId )
      goto LABEL_20;
    decideButtonImg = this->fields.decideButtonImg;
    v15 = LotteryShopBuyItemConfirmMenu_TypeInfo;
    if ( (BYTE3(LotteryShopBuyItemConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LotteryShopBuyItemConfirmMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LotteryShopBuyItemConfirmMenu_TypeInfo);
      v15 = LotteryShopBuyItemConfirmMenu_TypeInfo;
    }
    VALENTINE_BTN_NAME = v15->static_fields->VALENTINE_BTN_NAME;
    v17 = System_Int32__ToString((int)shopEntity + 24, 0LL);
    v18 = System_Int32__ToString((int32_t)&v23, 0LL);
    v19 = System_String__Concat_43747144(VALENTINE_BTN_NAME, v17, (System_String_o *)StringLiteral_15842, v18, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    if ( !EventRewardRootComponent__setRewardInfoImg(decideButtonImg, v19, 0LL) )
    {
LABEL_20:
      v20 = this->fields.decideButtonImg;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCommon(v20, 0LL);
      v21 = this->fields.decideButtonImg;
      if ( v21 )
      {
        UISprite__set_spriteName(v21, (System_String_o *)StringLiteral_17036, 0LL);
        v22 = this->fields.decideButtonImg;
        if ( v22 )
        {
          ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v22->klass->vtable._33_MakePixelPerfect.method)(
            v22,
            v22->klass->vtable._34_get_minWidth.methodPtr);
          return;
        }
      }
LABEL_27:
      sub_B170D4();
    }
  }
}


void __fastcall LotteryShopBuyItemConfirmMenu__SetItemSlider(
        LotteryShopBuyItemConfirmMenu_o *this,
        int32_t buyableCount,
        bool isPreparation,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  UISliderWithButton_o *v7; // x0
  int32_t v8; // w1

  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_11;
  if ( buyableCount < 2 || isPreparation )
    UISliderWithButton__grayMode(itemSlider, 0LL);
  else
    UISliderWithButton__normalMode(itemSlider, 0LL);
  v7 = this->fields.itemSlider;
  if ( !v7 )
LABEL_11:
    sub_B170D4();
  if ( buyableCount <= 1 )
    v8 = 1;
  else
    v8 = buyableCount;
  UISliderWithButton__init(v7, v8, 0, 1, 0LL);
}


void __fastcall LotteryShopBuyItemConfirmMenu__SliderValueChange(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  int32_t v4; // w0
  int32_t v5; // w20
  LotteryShopBuyItemConfirmMenu_o *Prices; // x0
  const MethodInfo *v7; // x3
  int64_t v8; // x21
  int32_t v9; // w22
  ShopEntity_o *shopEntity; // x0
  int32_t v11; // w1
  const MethodInfo *v12; // x2

  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_10;
  v4 = UISliderWithButton__sliderValueChange(itemSlider, 0LL);
  if ( !this->fields.shopEntity )
    goto LABEL_10;
  v5 = v4;
  Prices = (LotteryShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(this->fields.shopEntity, 0, 0LL);
  v8 = (int)Prices;
  if ( this->fields.itemCount >= 2 )
  {
    v9 = 1;
    while ( 1 )
    {
      shopEntity = this->fields.shopEntity;
      if ( !shopEntity )
        break;
      Prices = (LotteryShopBuyItemConfirmMenu_o *)ShopEntity__GetPrices(shopEntity, v9++, 0LL);
      if ( v8 < (int)Prices )
        v8 = (int)Prices;
      if ( v9 >= this->fields.itemCount )
        goto LABEL_9;
    }
LABEL_10:
    sub_B170D4();
  }
LABEL_9:
  v11 = LotteryShopBuyItemConfirmMenu__ItemMaxOverCheck(Prices, v5, v8, v7);
  this->fields.buyCount = v11;
  LotteryShopBuyItemConfirmMenu__UpdateCountValue(this, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LotteryShopBuyItemConfirmMenu__UpdateCountValue(
        LotteryShopBuyItemConfirmMenu_o *this,
        int32_t count,
        const MethodInfo *method)
{
  struct ShopEntity_o *shopEntity; // x8
  UILabel_o *needNum; // x20
  __int64 setNum; // x21
  System_String_o *NumberFormatLong; // x0

  if ( (byte_40F8DFC & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&count);
    byte_40F8DFC = 1;
  }
  shopEntity = this->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_9;
  needNum = this->fields.needNum;
  setNum = shopEntity->fields.setNum;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormatLong = LocalizationManager__GetNumberFormatLong(setNum * count, *(const MethodInfo **)&count);
  if ( !needNum )
LABEL_9:
    sub_B170D4();
  UILabel__set_text(needNum, NumberFormatLong, 0LL);
}


UnityEngine_GameObject_o *__fastcall LotteryShopBuyItemConfirmMenu__get_closeBtnObject(
        LotteryShopBuyItemConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40F8E05 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8E05 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}