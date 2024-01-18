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

  if ( (byte_418998B & 1) == 0 )
  {
    sub_B2C35C(&TreasureBoxBulkBuyConfirmMenu_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_17102/*"btn_txt_trade"*/, v8);
    sub_B2C35C(&StringLiteral_17085/*"btn_txt_sale"*/, v9);
    byte_418998B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_17102/*"btn_txt_trade"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17102/*"btn_txt_trade"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_17085/*"btn_txt_sale"*/;
  v12->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17085/*"btn_txt_sale"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->DECIED_BTN_NAME_LIMIT_MATERIAL, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu___ctor(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_418998A & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418998A = 1;
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
    sub_B2C2F8(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4189982 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int__Invoke__, *(_QWORD *)&result);
    byte_4189982 = 1;
  }
  onDecide = this->fields.onDecide;
  p_onDecide = (BattleServantConfConponent_o *)&this->fields.onDecide;
  v11 = onDecide;
  if ( onDecide )
  {
    p_onDecide->klass = 0LL;
    sub_B2C2F8(p_onDecide, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action_int___Invoke(v11, result, (const MethodInfo_24BA55C *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Close(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TreasureBoxBulkBuyConfirmMenu__Close_28560140(this, 0LL, v2);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Close_28560140(
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
  System_Action_o *v11; // x20

  if ( (byte_4189981 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_TreasureBoxBulkBuyConfirmMenu_EndClose__, v10);
    byte_4189981 = 1;
  }
  this->fields.onClose = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TreasureBoxBulkBuyConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__EndClose(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  TreasureBoxBulkBuyConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  TreasureBoxBulkBuyConfirmMenu__CallOnClose(this, v5);
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
  __int64 UserItemBuyableCount; // x0
  __int64 v5; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  int maxDrawNumOnce; // w8

  UserItemBuyableCount = TreasureBoxBulkBuyConfirmMenu__GetUserItemBuyableCount(this, userGameEntity, method);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity )
    sub_B2C434(UserItemBuyableCount, v5);
  maxDrawNumOnce = treasureBoxEntity->fields.maxDrawNumOnce;
  if ( (int)UserItemBuyableCount > maxDrawNumOnce && maxDrawNumOnce )
    LODWORD(UserItemBuyableCount) = maxDrawNumOnce;
  return UserItemBuyableCount;
}


int32_t __fastcall TreasureBoxBulkBuyConfirmMenu__GetUserItemBuyableCount(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Instance; // x0
  __int64 v7; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8

  if ( (byte_4189980 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, userGameEntity);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4189980 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity
    || !MasterData_WarQuestSelectionMaster
    || (Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                              MasterData_WarQuestSelectionMaster,
                              Instance,
                              treasureBoxEntity->fields.iconId,
                              0LL)) == 0 )
  {
LABEL_11:
    sub_B2C434(Instance, v7);
  }
  return *(_DWORD *)(Instance + 28) / this->fields.payNum;
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Init(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.treasureBoxEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.treasureBoxEntity, 0LL, v5, v6, v7, v8, v9, v10);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall TreasureBoxBulkBuyConfirmMenu__IsEnable(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  WarEntity_o *Entity; // x19

  if ( (byte_4189985 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4189985 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity || !Instance )
    goto LABEL_11;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             treasureBoxEntity->fields.eventId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !Entity )
LABEL_11:
    sub_B2C434(Instance, v7);
  return (__int64)Instance <= (__int64)Entity->fields.coordinate;
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
  if ( (byte_4189988 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, count);
    byte_4189988 = 1;
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
  __int64 v3; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4189986 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189986 = 1;
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
      sub_B2C434(0LL, v3);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    TreasureBoxBulkBuyConfirmMenu__Close_28560140(this, 0LL, v5);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__OnClickDecide(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  int32_t decideSe; // w20
  const MethodInfo *v4; // x2

  if ( (byte_4189983 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189983 = 1;
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
  __int64 v36; // x1
  UISprite_o *Component_srcLineSprite; // x21
  UILabel_o *titleLb; // x21
  _DWORD *monitor; // x8
  int32_t v40; // w9
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  struct TreasureBoxEntity_o *v42; // x8
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v44; // x2
  int32_t ItemSliderMax; // w0
  int32_t payNum; // w8
  UILabel_o *exchangeDestinationCount; // x20
  System_String_o *NumberFormatLong; // x0
  const MethodInfo *v49; // x3
  UILabel_o *warningLabel; // x20
  TreasureBoxBulkBuyConfirmMenu_o *v51; // x0
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x1
  UserGameEntity_o *v54; // x1
  const MethodInfo *v55; // x2
  UILabel_o *exchangeOrigin; // x20
  System_String_o *v57; // x0
  const MethodInfo *v58; // x3
  UILabel_o *exchangeDestination; // x20
  System_String_o *v60; // x0
  const MethodInfo *v61; // x3
  System_Action_o *v62; // x20
  __int64 v63; // x0

  if ( (byte_418997C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, treasure);
    sub_B2C35C(&AtlasManager_TypeInfo, v12);
    sub_B2C35C(&BalanceConfig_TypeInfo, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v15);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v16);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B2C35C(&Method_TreasureBoxBulkBuyConfirmMenu_EndOpen__, v20);
    sub_B2C35C(&StringLiteral_13447/*"TREASURE_BOX_USER_EVENT_ITEM"*/, v21);
    sub_B2C35C(&StringLiteral_22798/*"treasurechest_img_bg"*/, v22);
    sub_B2C35C(&StringLiteral_22802/*"treasurechest_img_line"*/, v23);
    sub_B2C35C(&StringLiteral_13446/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, v24);
    sub_B2C35C(&StringLiteral_22797/*"treasurechest_btn_txt"*/, v25);
    sub_B2C35C(&StringLiteral_13437/*"TREASURE_BOX_BULK_BUY_TITLE"*/, v26);
    sub_B2C35C(&StringLiteral_1/*""*/, v27);
    byte_418997C = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B2C2F8(
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
    sub_B2C2F8(
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
    gameObject = this->fields.exchangeBase;
    this->fields.decideSe = se;
    this->fields.buyCount = 1;
    if ( !gameObject )
      goto LABEL_31;
    Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              gameObject,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(Component_srcLineSprite, (System_String_o *)StringLiteral_22798/*"treasurechest_img_bg"*/, 0LL);
    AtlasManager__SetEventUI(this->fields.eventItemRootLine, (System_String_o *)StringLiteral_22802/*"treasurechest_img_line"*/, 0LL);
    AtlasManager__SetEventUI(this->fields.decideButtonImg, (System_String_o *)StringLiteral_22797/*"treasurechest_btn_txt"*/, 0LL);
    titleLb = this->fields.titleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13437/*"TREASURE_BOX_BULK_BUY_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_31;
    UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !*p_treasureBoxEntity )
      goto LABEL_31;
    if ( !gameObject )
      goto LABEL_31;
    DataMasterBase_WarMaster__WarEntity__int___GetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
      (*p_treasureBoxEntity)->fields.iconId,
      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
    if ( !*p_treasureBoxEntity )
      goto LABEL_31;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_GameObject_o *)CommonConsumeMaster__GetIdEntityList(
                                               (CommonConsumeMaster_o *)gameObject,
                                               (*p_treasureBoxEntity)->fields.commonConsumeId,
                                               0LL);
    if ( !gameObject )
      goto LABEL_31;
    if ( !LODWORD(gameObject[1].klass) )
    {
      v63 = sub_B2C460(gameObject);
      sub_B2C400(v63, 0LL);
    }
    monitor = gameObject[1].monitor;
    if ( !monitor )
      goto LABEL_31;
    v40 = monitor[8];
    treasureBoxEntity = this->fields.treasureBoxEntity;
    this->fields.payNum = v40;
    if ( !treasureBoxEntity )
      goto LABEL_31;
    gameObject = (UnityEngine_GameObject_o *)this->fields.eventTreasureBoxItemInfo;
    if ( !gameObject )
      goto LABEL_31;
    EventItemComponent__Set((EventItemComponent_o *)gameObject, treasureBoxEntity->fields.iconId, 0LL);
    v42 = this->fields.treasureBoxEntity;
    if ( !v42 )
      goto LABEL_31;
    gameObject = (UnityEngine_GameObject_o *)this->fields.eventItemIcon;
    if ( !gameObject )
      goto LABEL_31;
    ItemIconComponent__SetItem((ItemIconComponent_o *)gameObject, v42->fields.iconId, -1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    ItemSliderMax = TreasureBoxBulkBuyConfirmMenu__GetItemSliderMax(this, SelfUserGame, v44);
    payNum = this->fields.payNum;
    exchangeDestinationCount = this->fields.exchangeDestinationCount;
    this->fields.buyCount = ItemSliderMax;
    NumberFormatLong = LocalizationManager__GetNumberFormatLong(payNum * ItemSliderMax, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(
      (TreasureBoxBulkBuyConfirmMenu_o *)NumberFormatLong,
      exchangeDestinationCount,
      NumberFormatLong,
      v49);
    warningLabel = this->fields.warningLabel;
    gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !warningLabel )
LABEL_31:
      sub_B2C434(gameObject, v36);
    UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v51, this->fields.warningLabel, (System_String_o *)StringLiteral_1/*""*/, v52);
    TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(this, v53);
    TreasureBoxBulkBuyConfirmMenu__SetItemSlider(this, v54, v55);
    exchangeOrigin = this->fields.exchangeOrigin;
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_13446/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText((TreasureBoxBulkBuyConfirmMenu_o *)v57, exchangeOrigin, v57, v58);
    exchangeDestination = this->fields.exchangeDestination;
    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_13447/*"TREASURE_BOX_USER_EVENT_ITEM"*/, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText((TreasureBoxBulkBuyConfirmMenu_o *)v60, exchangeDestination, v60, v61);
    this->fields.state = 1;
    v62 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v62, (Il2CppObject *)this, Method_TreasureBoxBulkBuyConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v62, 0, 0LL);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__SetItemSlider(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0

  itemSlider = this->fields.itemSlider;
  if ( !itemSlider || (UISliderWithButton__normalMode(itemSlider, 0LL), (itemSlider = this->fields.itemSlider) == 0LL) )
    sub_B2C434(itemSlider, userGameEntity);
  UISliderWithButton__init(itemSlider, this->fields.buyCount, 1, 1, 0LL);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__SetLabelActive(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_418997D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, label);
    byte_418997D = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_B2C434(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__SetLabelText(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_418997E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, label);
    byte_418997E = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_B2C434(v6, v7);
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
  __int64 v10; // x1
  UnityEngine_GameObject_o *decideButton; // x0

  if ( (byte_4189984 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_12107/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v3);
    byte_4189984 = 1;
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
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12107/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0LL);
  TreasureBoxBulkBuyConfirmMenu__SetLabelText((TreasureBoxBulkBuyConfirmMenu_o *)v8, warningLabel, v8, v9);
  decideButton = (UnityEngine_GameObject_o *)this->fields.decideButton;
  if ( !decideButton
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))decideButton->klass[1]._1.implementedInterfaces)(
          decideButton,
          3LL,
          0LL,
          decideButton->klass[1]._1.interfaceOffsets),
        (decideButton = this->fields.exchangeBase) == 0LL) )
  {
    sub_B2C434(decideButton, v10);
  }
  UnityEngine_GameObject__SetActive(decideButton, 0, 0LL);
  return 1;
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__SetSpriteName(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_418997F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, sprite);
    byte_418997F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !sprite )
      sub_B2C434(v6, v7);
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
    sub_B2C434(0LL, isActive);
  UnityEngine_GameObject__SetActive(exchangeBase, !isActive, 0LL);
  TreasureBoxBulkBuyConfirmMenu__SetLabelActive(v6, this->fields.warningLabel, isActive, v7);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__SliderValueChange(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v4; // x3
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  int32_t v6; // w21
  UILabel_o *exchangeDestinationCount; // x20
  int32_t payNum; // w19
  System_String_o *NumberFormatLong; // x0
  const MethodInfo *v10; // x3

  if ( (byte_4189987 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_4189987 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider
    || (itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0LL),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0LL) )
  {
    sub_B2C434(itemSlider, method);
  }
  v6 = TreasureBoxBulkBuyConfirmMenu__ItemMaxOverCheck(
         (TreasureBoxBulkBuyConfirmMenu_o *)itemSlider,
         (int)itemSlider,
         treasureBoxEntity->fields.maxDrawNumOnce,
         v4);
  this->fields.buyCount = v6;
  exchangeDestinationCount = this->fields.exchangeDestinationCount;
  payNum = this->fields.payNum;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormatLong = LocalizationManager__GetNumberFormatLong(payNum * v6, 0LL);
  TreasureBoxBulkBuyConfirmMenu__SetLabelText(
    (TreasureBoxBulkBuyConfirmMenu_o *)NumberFormatLong,
    exchangeDestinationCount,
    NumberFormatLong,
    v10);
}


UnityEngine_GameObject_o *__fastcall TreasureBoxBulkBuyConfirmMenu__get_closeBtnObject(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4189989 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189989 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_B2C434(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}