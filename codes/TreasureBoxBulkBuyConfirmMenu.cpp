void TreasureBoxBulkBuyConfirmMenu___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct TreasureBoxBulkBuyConfirmMenu_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596ADC9 & 1) == 0 )
  {
    sub_2213A60(&TreasureBoxBulkBuyConfirmMenu_TypeInfo);
    sub_2213A60(&StringLiteral_18393/*"btn_txt_trade"*/);
    sub_2213A60(&StringLiteral_18370/*"btn_txt_sale"*/);
    byte_596ADC9 = 1;
  }
  v7 = StringLiteral_18393/*"btn_txt_trade"*/;
  TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_18393/*"btn_txt_trade"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_18370/*"btn_txt_sale"*/;
  static_fields = TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields;
  static_fields->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_18370/*"btn_txt_sale"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->DECIED_BTN_NAME_LIMIT_MATERIAL,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void TreasureBoxBulkBuyConfirmMenu___ctor(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596ADC8 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596ADC8 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TreasureBoxBulkBuyConfirmMenu__CallOnClose(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_onClose; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = (MissionNaviTransitionBoardItem_o *)&this->fields.onClose;
  v9 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0;
    sub_2213A04(p_onClose, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void TreasureBoxBulkBuyConfirmMenu__CallOnDecide(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_onDecide; // x0
  struct System_Action_int__o *v9; // x20
  struct System_Action_int__o *onDecide; // t1

  onDecide = this->fields.onDecide;
  p_onDecide = (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide;
  v9 = onDecide;
  if ( onDecide )
  {
    p_onDecide->klass = 0;
    sub_2213A04(p_onDecide, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      v9->fields.method);
  }
}


void TreasureBoxBulkBuyConfirmMenu__Close(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TreasureBoxBulkBuyConfirmMenu__Close_39047352(this, 0, v2);
}


void TreasureBoxBulkBuyConfirmMenu__Close_39047352(
        TreasureBoxBulkBuyConfirmMenu_o *this,
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

  if ( (byte_596ADC0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_TreasureBoxBulkBuyConfirmMenu_EndClose__);
    byte_596ADC0 = 1;
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
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TreasureBoxBulkBuyConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void TreasureBoxBulkBuyConfirmMenu__EndClose(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  TreasureBoxBulkBuyConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  TreasureBoxBulkBuyConfirmMenu__CallOnClose(this, v5);
}


void TreasureBoxBulkBuyConfirmMenu__EndOpen(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t TreasureBoxBulkBuyConfirmMenu__GetItemSliderMax(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  __int64 UserItemBuyableCount; // x0
  __int64 v5; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  int maxDrawNumOnce; // w8
  int v8; // w9

  UserItemBuyableCount = TreasureBoxBulkBuyConfirmMenu__GetUserItemBuyableCount(this, userGameEntity, method);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity )
    sub_2213CDC(UserItemBuyableCount, v5);
  maxDrawNumOnce = treasureBoxEntity->fields.maxDrawNumOnce;
  if ( maxDrawNumOnce )
    v8 = maxDrawNumOnce;
  else
    v8 = UserItemBuyableCount;
  if ( (int)UserItemBuyableCount > maxDrawNumOnce )
    LODWORD(UserItemBuyableCount) = v8;
  return UserItemBuyableCount;
}


int32_t TreasureBoxBulkBuyConfirmMenu__GetUserItemBuyableCount(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *MasterData_object; // x20
  int64_t v8; // x21

  if ( (byte_596ADBF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596ADBF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.treasureBoxEntity
    || (v8 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
        Instance = (DataManager_o *)TreasureBoxEntity__get_ConsumeItemId(this->fields.treasureBoxEntity, 0),
        !MasterData_object)
    || (Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                      (UserItemMaster_o *)MasterData_object,
                                      v8,
                                      (int32_t)Instance,
                                      0)) == 0 )
  {
LABEL_14:
    sub_2213CDC(Instance, v5);
  }
  return SHIDWORD(Instance->fields.m_CancellationTokenSource) / this->fields.payNum;
}


void TreasureBoxBulkBuyConfirmMenu__Init(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.treasureBoxEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.treasureBoxEntity, 0, v5, v6, v7, v8, v9, v10);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


bool TreasureBoxBulkBuyConfirmMenu__IsEnable(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Entity; // x19

  if ( (byte_596ADC3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596ADC3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity || !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             treasureBoxEntity->fields.eventId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  Instance = (DataManager_o *)NetworkManager__getTime(0);
  if ( !Entity )
LABEL_10:
    sub_2213CDC(Instance, v4);
  return (__int64)Instance <= (__int64)Entity[6].monitor;
}


int64_t TreasureBoxBulkBuyConfirmMenu__ItemMaxOverCheck(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        int64_t count,
        int64_t price,
        const MethodInfo *method)
{
  int64_t v5; // x20
  BalanceConfig_c *v6; // x0
  int64_t UserItemMax; // x8

  v5 = count;
  if ( (byte_596ADC6 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596ADC6 = 1;
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


void TreasureBoxBulkBuyConfirmMenu__OnClickCancel(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x2

  if ( (byte_596ADC4 & 1) == 0 )
  {
    sub_2213A60(&Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__);
    byte_596ADC4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_2213CDC(0, v5);
    UISliderWithButton__grayMode(itemSlider, 0);
    TreasureBoxBulkBuyConfirmMenu__Close_39047352(this, 0, v7);
  }
}


void TreasureBoxBulkBuyConfirmMenu__OnClickDecide(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596ADC1 & 1) == 0 )
  {
    sub_2213A60(&Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__);
    byte_596ADC1 = 1;
  }
  if ( this->fields.state == 2 && !TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(this, method) )
  {
    this->fields.state = 3;
    v3 = Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.decideSe, 0, 0);
    TreasureBoxBulkBuyConfirmMenu__CallOnDecide(this, this->fields.buyCount, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void TreasureBoxBulkBuyConfirmMenu__Open(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        TreasureBoxEntity_o *treasure,
        System_Action_int__o *onDecide,
        int32_t se,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct TreasureBoxEntity_o **p_treasureBoxEntity; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *Component_object; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  UILabel_o *titleLb; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  _DWORD *monitor; // x8
  EventItemComponent_o *eventTreasureBoxItemInfo; // x20
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v33; // x2
  int32_t ItemSliderMax; // w0
  int32_t payNum; // w8
  UILabel_o *exchangeDestinationCount; // x20
  TreasureBoxBulkBuyConfirmMenu_o *NumberFormatLong; // x0
  const MethodInfo *v38; // x3
  __int64 v39; // x2
  UILabel_o *warningLabel; // x20
  TreasureBoxBulkBuyConfirmMenu_o *v41; // x0
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  UILabel_o *exchangeOrigin; // x20
  TreasureBoxBulkBuyConfirmMenu_o *v46; // x0
  const MethodInfo *v47; // x3
  UILabel_o *exchangeDestination; // x20
  TreasureBoxBulkBuyConfirmMenu_o *v49; // x0
  const MethodInfo *v50; // x3
  System_Action_o *v51; // x20

  if ( (byte_596ADBB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_TreasureBoxBulkBuyConfirmMenu_EndOpen__);
    sub_2213A60(&StringLiteral_14082/*"TREASURE_BOX_USER_EVENT_ITEM"*/);
    sub_2213A60(&StringLiteral_25516/*"treasurechest_img_bg"*/);
    sub_2213A60(&StringLiteral_25520/*"treasurechest_img_line"*/);
    sub_2213A60(&StringLiteral_14081/*"TREASURE_BOX_PAY_EVENT_ITEM"*/);
    sub_2213A60(&StringLiteral_25515/*"treasurechest_btn_txt"*/);
    sub_2213A60(&StringLiteral_14073/*"TREASURE_BOX_BULK_BUY_TITLE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596ADBB = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
      (int32_t)onDecide,
      (System_String_o *)onDecide,
      *(System_String_o **)&se,
      (int32_t)method,
      v5,
      v6,
      v7);
    this->fields.treasureBoxEntity = treasure;
    p_treasureBoxEntity = &this->fields.treasureBoxEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.treasureBoxEntity,
      (int32_t)treasure,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = this->fields.exchangeBase;
    this->fields.buyCount = 1;
    this->fields.decideSe = se;
    if ( !gameObject )
      goto LABEL_26;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21, v22);
    AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_25516/*"treasurechest_img_bg"*/, 0);
    AtlasManager__SetEventUI(this->fields.eventItemRootLine, (System_String_o *)StringLiteral_25520/*"treasurechest_img_line"*/, 0);
    AtlasManager__SetEventUI(this->fields.decideButtonImg, (System_String_o *)StringLiteral_25515/*"treasurechest_btn_txt"*/, 0);
    titleLb = this->fields.titleLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14073/*"TREASURE_BOX_BULK_BUY_TITLE"*/, 0);
    if ( !titleLb )
      goto LABEL_26;
    UILabel__set_text(titleLb, (System_String_o *)gameObject, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27, v28);
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
    if ( !*p_treasureBoxEntity )
      goto LABEL_26;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)CommonConsumeMaster__GetIdEntityList(
                                               (CommonConsumeMaster_o *)gameObject,
                                               (*p_treasureBoxEntity)->fields.commonConsumeId,
                                               0);
    if ( !gameObject )
      goto LABEL_26;
    if ( !LODWORD(gameObject[1].klass) )
      sub_2213CE4(gameObject);
    monitor = gameObject[1].monitor;
    if ( !monitor )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)this->fields.treasureBoxEntity;
    this->fields.payNum = monitor[8];
    if ( !gameObject )
      goto LABEL_26;
    eventTreasureBoxItemInfo = this->fields.eventTreasureBoxItemInfo;
    gameObject = (UnityEngine_GameObject_o *)TreasureBoxEntity__get_ConsumeItemId((TreasureBoxEntity_o *)gameObject, 0);
    if ( !eventTreasureBoxItemInfo )
      goto LABEL_26;
    EventItemComponent__Set(eventTreasureBoxItemInfo, (int32_t)gameObject, 0);
    treasureBoxEntity = this->fields.treasureBoxEntity;
    if ( !treasureBoxEntity )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)this->fields.eventItemIcon;
    if ( !gameObject )
      goto LABEL_26;
    ItemIconComponent__SetItem((ItemIconComponent_o *)gameObject, treasureBoxEntity->fields.iconId, -1, 1, 0);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    ItemSliderMax = TreasureBoxBulkBuyConfirmMenu__GetItemSliderMax(this, SelfUserGame, v33);
    payNum = this->fields.payNum;
    exchangeDestinationCount = this->fields.exchangeDestinationCount;
    this->fields.buyCount = ItemSliderMax;
    NumberFormatLong = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(
                                                            payNum * ItemSliderMax,
                                                            0);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(
      NumberFormatLong,
      exchangeDestinationCount,
      (System_String_o *)NumberFormatLong,
      v38);
    warningLabel = this->fields.warningLabel;
    gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v20, v39);
    if ( !warningLabel )
LABEL_26:
      sub_2213CDC(gameObject, v20);
    UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v41, this->fields.warningLabel, (System_String_o *)StringLiteral_1/*""*/, v42);
    TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(this, v43);
    TreasureBoxBulkBuyConfirmMenu__SetItemSlider(this, v44);
    exchangeOrigin = this->fields.exchangeOrigin;
    v46 = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14081/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, 0);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v46, exchangeOrigin, (System_String_o *)v46, v47);
    exchangeDestination = this->fields.exchangeDestination;
    v49 = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14082/*"TREASURE_BOX_USER_EVENT_ITEM"*/, 0);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v49, exchangeDestination, (System_String_o *)v49, v50);
    this->fields.state = 1;
    v51 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v51, (Il2CppObject *)this, Method_TreasureBoxBulkBuyConfirmMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0, 0);
  }
}


void TreasureBoxBulkBuyConfirmMenu__SetItemSlider(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t buyCount; // w20
  UISliderWithButton_o *itemSlider; // x0

  buyCount = this->fields.buyCount;
  itemSlider = this->fields.itemSlider;
  if ( buyCount < 2 )
  {
    if ( !itemSlider )
      goto LABEL_8;
    UISliderWithButton__grayMode(itemSlider, 0);
  }
  else
  {
    if ( !itemSlider )
      goto LABEL_8;
    UISliderWithButton__normalMode(itemSlider, 0);
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
LABEL_8:
    sub_2213CDC(itemSlider, method);
  UISliderWithButton__init(itemSlider, this->fields.buyCount, buyCount > 1, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void TreasureBoxBulkBuyConfirmMenu__SetLabelActive(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_596ADBC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596ADBC = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label, isActive);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0)) == 0 )
      sub_2213CDC(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void TreasureBoxBulkBuyConfirmMenu__SetLabelText(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_596ADBD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596ADBD = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label, text);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_2213CDC(v6, v7);
    WrapControlText__textAdjust(label, text, label->fields.mFontSize, 0, 0);
  }
}


bool TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  _BOOL8 IsEnable; // x0
  const MethodInfo *v4; // x3
  bool v5; // w20
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *warningLabel; // x21
  TreasureBoxBulkBuyConfirmMenu_o *v9; // x0
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  UnityEngine_GameObject_o *decideButton; // x0

  if ( (byte_596ADC2 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12579/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/);
    byte_596ADC2 = 1;
  }
  IsEnable = TreasureBoxBulkBuyConfirmMenu__IsEnable(this, method);
  v5 = IsEnable;
  if ( !IsEnable )
  {
    TreasureBoxBulkBuyConfirmMenu__SetLabelActive(
      (TreasureBoxBulkBuyConfirmMenu_o *)IsEnable,
      this->fields.warningLabel,
      1,
      v4);
    warningLabel = this->fields.warningLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
    v9 = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12579/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v9, warningLabel, (System_String_o *)v9, v10);
    decideButton = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !decideButton
      || (((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, Il2CppClass **))decideButton->klass[1]._1.nestedTypes)(
            decideButton,
            3,
            0,
            decideButton->klass[1]._1.implementedInterfaces),
          (decideButton = this->fields.exchangeBase) == 0) )
    {
      sub_2213CDC(decideButton, v11);
    }
    UnityEngine_GameObject__SetActive(decideButton, 0, 0);
  }
  return !v5;
}


void TreasureBoxBulkBuyConfirmMenu__SetSpriteName(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_596ADBE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596ADBE = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite, spriteName);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( !v6 )
  {
    if ( !sprite )
      sub_2213CDC(v6, v7);
    UISprite__set_spriteName(sprite, spriteName, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void TreasureBoxBulkBuyConfirmMenu__SetWarningActive(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *exchangeBase; // x0
  TreasureBoxBulkBuyConfirmMenu_o *v6; // x0
  const MethodInfo *v7; // x3

  exchangeBase = this->fields.exchangeBase;
  if ( !exchangeBase )
    sub_2213CDC(0, isActive);
  UnityEngine_GameObject__SetActive(exchangeBase, !isActive, 0);
  TreasureBoxBulkBuyConfirmMenu__SetLabelActive(v6, this->fields.warningLabel, isActive, v7);
}


void TreasureBoxBulkBuyConfirmMenu__SliderValueChange(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v4; // x3
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t v8; // w21
  LocalizationManager_c *v9; // x0
  UILabel_o *exchangeDestinationCount; // x20
  int32_t payNum; // w22
  TreasureBoxBulkBuyConfirmMenu_o *NumberFormatLong; // x0
  const MethodInfo *v13; // x3

  if ( (byte_596ADC5 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596ADC5 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider
    || (itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0) )
  {
    sub_2213CDC(itemSlider, method);
  }
  v8 = TreasureBoxBulkBuyConfirmMenu__ItemMaxOverCheck(
         (TreasureBoxBulkBuyConfirmMenu_o *)itemSlider,
         (int)itemSlider,
         treasureBoxEntity->fields.maxDrawNumOnce,
         v4);
  v9 = LocalizationManager_TypeInfo;
  exchangeDestinationCount = this->fields.exchangeDestinationCount;
  payNum = this->fields.payNum;
  this->fields.buyCount = v8;
  if ( !*(&v9->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v9, v6, v7);
  NumberFormatLong = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(payNum * v8, 0);
  TreasureBoxBulkBuyConfirmMenu__SetLabelText(
    NumberFormatLong,
    exchangeDestinationCount,
    (System_String_o *)NumberFormatLong,
    v13);
}


UnityEngine_GameObject_o *TreasureBoxBulkBuyConfirmMenu__get_closeBtnObject(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596ADC7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596ADC7 = 1;
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