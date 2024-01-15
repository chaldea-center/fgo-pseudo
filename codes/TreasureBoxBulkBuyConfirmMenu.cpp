void __fastcall TreasureBoxBulkBuyConfirmMenu___cctor(const MethodInfo *method)
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
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct TreasureBoxBulkBuyConfirmMenu_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FB853 & 1) == 0 )
  {
    sub_B16FFC(&TreasureBoxBulkBuyConfirmMenu_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_17036/*"btn_txt_trade"*/, v8);
    sub_B16FFC(&StringLiteral_17019/*"btn_txt_sale"*/, v9);
    byte_40FB853 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_17036/*"btn_txt_trade"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17036/*"btn_txt_trade"*/;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_17019/*"btn_txt_sale"*/;
  v12->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17019/*"btn_txt_sale"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v12->DECIED_BTN_NAME_LIMIT_MATERIAL, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu___ctor(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FB852 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FB852 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__CallOnClose(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_onClose; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = (BattleServantConfConponent_o *)&this->fields.onClose;
  v9 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_B16F98(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TreasureBoxBulkBuyConfirmMenu__CallOnDecide(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_onDecide; // x20
  System_Action_int__o *v11; // x21
  struct System_Action_int__o *onDecide; // t1

  if ( (byte_40FB84A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, *(_QWORD *)&result);
    byte_40FB84A = 1;
  }
  onDecide = this->fields.onDecide;
  p_onDecide = (BattleServantConfConponent_o *)&this->fields.onDecide;
  v11 = onDecide;
  if ( onDecide )
  {
    p_onDecide->klass = 0LL;
    sub_B16F98(p_onDecide, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action_int___Invoke(v11, result, (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Close(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TreasureBoxBulkBuyConfirmMenu__Close_27965904(this, 0LL, v2);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Close_27965904(
        TreasureBoxBulkBuyConfirmMenu_o *this,
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

  if ( (byte_40FB849 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_TreasureBoxBulkBuyConfirmMenu_EndClose__, v10);
    byte_40FB849 = 1;
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
  System_Action___ctor(v15, (Il2CppObject *)this, Method_TreasureBoxBulkBuyConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__EndClose(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  TreasureBoxBulkBuyConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  TreasureBoxBulkBuyConfirmMenu__CallOnClose(this, v4);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__EndOpen(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t __fastcall TreasureBoxBulkBuyConfirmMenu__GetItemSliderMax(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  int32_t result; // w0
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  int32_t maxDrawNumOnce; // w8

  result = TreasureBoxBulkBuyConfirmMenu__GetUserItemBuyableCount(this, userGameEntity, method);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity )
    sub_B170D4();
  maxDrawNumOnce = treasureBoxEntity->fields.maxDrawNumOnce;
  if ( result > maxDrawNumOnce )
  {
    if ( maxDrawNumOnce )
      return maxDrawNumOnce;
  }
  return result;
}


int32_t __fastcall TreasureBoxBulkBuyConfirmMenu__GetUserItemBuyableCount(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  UserItemEntity_o *EntityDefinitely; // x0

  if ( (byte_40FB848 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, userGameEntity);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FB848 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity
    || !MasterData_WarQuestSelectionMaster
    || (EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                             MasterData_WarQuestSelectionMaster,
                             UserId,
                             treasureBoxEntity->fields.iconId,
                             0LL)) == 0LL )
  {
LABEL_11:
    sub_B170D4();
  }
  return EntityDefinitely->fields.num / this->fields.payNum;
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Init(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.treasureBoxEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.treasureBoxEntity, 0LL, v4, v5, v6, v7, v8, v9);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall TreasureBoxBulkBuyConfirmMenu__IsEnable(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  WarEntity_o *Entity; // x19
  int64_t Time; // x0

  if ( (byte_40FB84D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FB84D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_11;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             treasureBoxEntity->fields.eventId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !Entity )
LABEL_11:
    sub_B170D4();
  return Time <= (__int64)Entity->fields.coordinate;
}


int64_t __fastcall TreasureBoxBulkBuyConfirmMenu__ItemMaxOverCheck(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        int64_t count,
        int64_t price,
        const MethodInfo *method)
{
  int64_t v5; // x20
  BalanceConfig_c *v6; // x0
  int64_t UserItemMax; // x8

  v5 = count;
  if ( (byte_40FB850 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, count);
    byte_40FB850 = 1;
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


void __fastcall TreasureBoxBulkBuyConfirmMenu__OnClickCancel(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40FB84E & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB84E = 1;
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
    TreasureBoxBulkBuyConfirmMenu__Close_27965904(this, 0LL, v4);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__OnClickDecide(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  int32_t decideSe; // w20
  const MethodInfo *v4; // x2

  if ( (byte_40FB84B & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB84B = 1;
  }
  if ( this->fields.state == 2 && !TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(this, method) )
  {
    this->fields.state = 3;
    decideSe = this->fields.decideSe;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(decideSe, 0LL);
    TreasureBoxBulkBuyConfirmMenu__CallOnDecide(this, this->fields.buyCount, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TreasureBoxBulkBuyConfirmMenu__Open(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        TreasureBoxEntity_o *treasure,
        System_Action_int__o *onDecide,
        int32_t se,
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
  __int64 v26; // x1
  __int64 v27; // x1
  struct TreasureBoxEntity_o **p_treasureBoxEntity; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *exchangeBase; // x0
  UISprite_o *Component_srcLineSprite; // x21
  UILabel_o *titleLb; // x21
  System_String_o *v39; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v42; // x0
  CommonConsumeMaster_o *v43; // x0
  CommonConsumeEntity_array *IdEntityList; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  CommonConsumeEntity_o *v47; // x8
  int32_t num; // w9
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  EventItemComponent_o *eventTreasureBoxItemInfo; // x0
  struct TreasureBoxEntity_o *v51; // x8
  ItemIconComponent_o *eventItemIcon; // x0
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v54; // x2
  int32_t ItemSliderMax; // w0
  int32_t payNum; // w8
  UILabel_o *exchangeDestinationCount; // x20
  System_String_o *NumberFormatLong; // x0
  const MethodInfo *v59; // x3
  UILabel_o *warningLabel; // x20
  TreasureBoxBulkBuyConfirmMenu_o *v61; // x0
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x1
  UserGameEntity_o *v64; // x1
  const MethodInfo *v65; // x2
  UILabel_o *exchangeOrigin; // x20
  System_String_o *v67; // x0
  const MethodInfo *v68; // x3
  UILabel_o *exchangeDestination; // x20
  System_String_o *v70; // x0
  const MethodInfo *v71; // x3
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  System_Action_o *v76; // x20

  if ( (byte_40FB844 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, treasure);
    sub_B16FFC(&AtlasManager_TypeInfo, v12);
    sub_B16FFC(&BalanceConfig_TypeInfo, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v15);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v16);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&Method_TreasureBoxBulkBuyConfirmMenu_EndOpen__, v20);
    sub_B16FFC(&StringLiteral_13391/*"TREASURE_BOX_USER_EVENT_ITEM"*/, v21);
    sub_B16FFC(&StringLiteral_22705/*"treasurechest_img_bg"*/, v22);
    sub_B16FFC(&StringLiteral_22709/*"treasurechest_img_line"*/, v23);
    sub_B16FFC(&StringLiteral_13390/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, v24);
    sub_B16FFC(&StringLiteral_22704/*"treasurechest_btn_txt"*/, v25);
    sub_B16FFC(&StringLiteral_13381/*"TREASURE_BOX_BULK_BUY_TITLE"*/, v26);
    sub_B16FFC(&StringLiteral_1/*""*/, v27);
    byte_40FB844 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      (System_String_array **)onDecide,
      *(System_String_array ***)&se,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.treasureBoxEntity = treasure;
    p_treasureBoxEntity = &this->fields.treasureBoxEntity;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.treasureBoxEntity,
      (System_Int32_array **)treasure,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    exchangeBase = this->fields.exchangeBase;
    this->fields.decideSe = se;
    this->fields.buyCount = 1;
    if ( !exchangeBase )
      goto LABEL_31;
    Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              exchangeBase,
                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(Component_srcLineSprite, (System_String_o *)StringLiteral_22705/*"treasurechest_img_bg"*/, 0LL);
    AtlasManager__SetEventUI(this->fields.eventItemRootLine, (System_String_o *)StringLiteral_22709/*"treasurechest_img_line"*/, 0LL);
    AtlasManager__SetEventUI(this->fields.decideButtonImg, (System_String_o *)StringLiteral_22704/*"treasurechest_btn_txt"*/, 0LL);
    titleLb = this->fields.titleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_13381/*"TREASURE_BOX_BULK_BUY_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_31;
    UILabel__set_text(titleLb, v39, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !*p_treasureBoxEntity )
      goto LABEL_31;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_31;
    DataMasterBase_WarMaster__WarEntity__int___GetEntity(
      MasterData_WarQuestSelectionMaster,
      (*p_treasureBoxEntity)->fields.iconId,
      (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v42 )
      goto LABEL_31;
    v43 = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v42,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !*p_treasureBoxEntity )
      goto LABEL_31;
    if ( !v43 )
      goto LABEL_31;
    IdEntityList = CommonConsumeMaster__GetIdEntityList(v43, (*p_treasureBoxEntity)->fields.commonConsumeId, 0LL);
    if ( !IdEntityList )
      goto LABEL_31;
    if ( !IdEntityList->max_length )
    {
      sub_B17100(IdEntityList, v45, v46);
      sub_B170A0();
    }
    v47 = IdEntityList->m_Items[0];
    if ( !v47 )
      goto LABEL_31;
    num = v47->fields.num;
    treasureBoxEntity = this->fields.treasureBoxEntity;
    this->fields.payNum = num;
    if ( !treasureBoxEntity )
      goto LABEL_31;
    eventTreasureBoxItemInfo = this->fields.eventTreasureBoxItemInfo;
    if ( !eventTreasureBoxItemInfo )
      goto LABEL_31;
    EventItemComponent__Set(eventTreasureBoxItemInfo, treasureBoxEntity->fields.iconId, 0LL);
    v51 = this->fields.treasureBoxEntity;
    if ( !v51 )
      goto LABEL_31;
    eventItemIcon = this->fields.eventItemIcon;
    if ( !eventItemIcon )
      goto LABEL_31;
    ItemIconComponent__SetItem(eventItemIcon, v51->fields.iconId, -1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    ItemSliderMax = TreasureBoxBulkBuyConfirmMenu__GetItemSliderMax(this, SelfUserGame, v54);
    payNum = this->fields.payNum;
    exchangeDestinationCount = this->fields.exchangeDestinationCount;
    this->fields.buyCount = ItemSliderMax;
    NumberFormatLong = LocalizationManager__GetNumberFormatLong(payNum * ItemSliderMax, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(
      (TreasureBoxBulkBuyConfirmMenu_o *)NumberFormatLong,
      exchangeDestinationCount,
      NumberFormatLong,
      v59);
    warningLabel = this->fields.warningLabel;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !warningLabel )
LABEL_31:
      sub_B170D4();
    UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v61, this->fields.warningLabel, (System_String_o *)StringLiteral_1/*""*/, v62);
    TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(this, v63);
    TreasureBoxBulkBuyConfirmMenu__SetItemSlider(this, v64, v65);
    exchangeOrigin = this->fields.exchangeOrigin;
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_13390/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText((TreasureBoxBulkBuyConfirmMenu_o *)v67, exchangeOrigin, v67, v68);
    exchangeDestination = this->fields.exchangeDestination;
    v70 = LocalizationManager__Get((System_String_o *)StringLiteral_13391/*"TREASURE_BOX_USER_EVENT_ITEM"*/, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText((TreasureBoxBulkBuyConfirmMenu_o *)v70, exchangeDestination, v70, v71);
    this->fields.state = 1;
    v76 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v72, v73, v74, v75);
    System_Action___ctor(v76, (Il2CppObject *)this, Method_TreasureBoxBulkBuyConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v76, 0, 0LL);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__SetItemSlider(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  UISliderWithButton_o *v5; // x0

  itemSlider = this->fields.itemSlider;
  if ( !itemSlider || (UISliderWithButton__normalMode(itemSlider, 0LL), (v5 = this->fields.itemSlider) == 0LL) )
    sub_B170D4();
  UISliderWithButton__init(v5, this->fields.buyCount, 1, 1, 0LL);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__SetLabelActive(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FB845 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, label);
    byte_40FB845 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__SetLabelText(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  if ( (byte_40FB846 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, label);
    byte_40FB846 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL) )
  {
    if ( !label )
      sub_B170D4();
    WrapControlText__textAdjust(label, text, label->fields.mFontSize, 0, 0, 0LL);
  }
}


bool __fastcall TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL8 IsEnable; // x0
  const MethodInfo *v5; // x3
  UILabel_o *warningLabel; // x20
  System_String_o *v8; // x0
  const MethodInfo *v9; // x3
  struct UICommonButton_o *decideButton; // x0
  UnityEngine_GameObject_o *exchangeBase; // x0

  if ( (byte_40FB84C & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_12056/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v3);
    byte_40FB84C = 1;
  }
  IsEnable = TreasureBoxBulkBuyConfirmMenu__IsEnable(this, method);
  if ( IsEnable )
    return 0;
  TreasureBoxBulkBuyConfirmMenu__SetLabelActive(
    (TreasureBoxBulkBuyConfirmMenu_o *)IsEnable,
    this->fields.warningLabel,
    1,
    v5);
  warningLabel = this->fields.warningLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12056/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0LL);
  TreasureBoxBulkBuyConfirmMenu__SetLabelText((TreasureBoxBulkBuyConfirmMenu_o *)v8, warningLabel, v8, v9);
  decideButton = this->fields.decideButton;
  if ( !decideButton
    || (((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
          decideButton,
          3LL,
          0LL,
          decideButton->klass->vtable._15_OnPress.methodPtr),
        (exchangeBase = this->fields.exchangeBase) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(exchangeBase, 0, 0LL);
  return 1;
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__SetSpriteName(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( (byte_40FB847 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, sprite);
    byte_40FB847 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL) )
  {
    if ( !sprite )
      sub_B170D4();
    UISprite__set_spriteName(sprite, spriteName, 0LL);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__SetWarningActive(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *exchangeBase; // x0
  TreasureBoxBulkBuyConfirmMenu_o *v6; // x0
  const MethodInfo *v7; // x3

  exchangeBase = this->fields.exchangeBase;
  if ( !exchangeBase )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(exchangeBase, !isActive, 0LL);
  TreasureBoxBulkBuyConfirmMenu__SetLabelActive(v6, this->fields.warningLabel, isActive, v7);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__SliderValueChange(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  TreasureBoxBulkBuyConfirmMenu_o *v4; // x0
  const MethodInfo *v5; // x3
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  int32_t v7; // w21
  UILabel_o *exchangeDestinationCount; // x20
  int32_t payNum; // w19
  System_String_o *NumberFormatLong; // x0
  const MethodInfo *v11; // x3

  if ( (byte_40FB84F & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40FB84F = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider
    || (v4 = (TreasureBoxBulkBuyConfirmMenu_o *)UISliderWithButton__sliderValueChange(itemSlider, 0LL),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0LL) )
  {
    sub_B170D4();
  }
  v7 = TreasureBoxBulkBuyConfirmMenu__ItemMaxOverCheck(v4, (int)v4, treasureBoxEntity->fields.maxDrawNumOnce, v5);
  this->fields.buyCount = v7;
  exchangeDestinationCount = this->fields.exchangeDestinationCount;
  payNum = this->fields.payNum;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormatLong = LocalizationManager__GetNumberFormatLong(payNum * v7, 0LL);
  TreasureBoxBulkBuyConfirmMenu__SetLabelText(
    (TreasureBoxBulkBuyConfirmMenu_o *)NumberFormatLong,
    exchangeDestinationCount,
    NumberFormatLong,
    v11);
}


UnityEngine_GameObject_o *__fastcall TreasureBoxBulkBuyConfirmMenu__get_closeBtnObject(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FB851 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB851 = 1;
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