void TreasureBoxBulkBuyConfirmMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TreasureBoxBulkBuyConfirmMenu_StaticFields *static_fields; // x0

  if ( (byte_4D2B2E9 & 1) == 0 )
  {
    sub_1C93AD4(&TreasureBoxBulkBuyConfirmMenu_TypeInfo);
    sub_1C93AD4(&StringLiteral_17754/*"btn_txt_trade"*/);
    sub_1C93AD4(&StringLiteral_17732/*"btn_txt_sale"*/);
    byte_4D2B2E9 = 1;
  }
  TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_17754/*"btn_txt_trade"*/;
  sub_1C93A78(TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields, StringLiteral_17754/*"btn_txt_trade"*/);
  v1 = StringLiteral_17732/*"btn_txt_sale"*/;
  static_fields = TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields;
  static_fields->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17732/*"btn_txt_sale"*/;
  sub_1C93A78(&static_fields->DECIED_BTN_NAME_LIMIT_MATERIAL, v1);
}


void TreasureBoxBulkBuyConfirmMenu___ctor(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D2B2E8 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2B2E8 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TreasureBoxBulkBuyConfirmMenu__CallOnClose(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_onClose; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = &this->fields.onClose;
  v3 = onClose;
  if ( onClose )
  {
    *p_onClose = 0;
    sub_1C93A78(p_onClose, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
  }
}


void TreasureBoxBulkBuyConfirmMenu__CallOnDecide(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct System_Action_int__o **p_onDecide; // x0
  struct System_Action_int__o *v4; // x20
  struct System_Action_int__o *onDecide; // t1

  onDecide = this->fields.onDecide;
  p_onDecide = &this->fields.onDecide;
  v4 = onDecide;
  if ( onDecide )
  {
    *p_onDecide = 0;
    sub_1C93A78(p_onDecide, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      (unsigned int)result,
      v4->fields.method);
  }
}


void TreasureBoxBulkBuyConfirmMenu__Close(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TreasureBoxBulkBuyConfirmMenu__Close_33127252(this, 0, v2);
}


void TreasureBoxBulkBuyConfirmMenu__Close_33127252(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4D2B2E0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_TreasureBoxBulkBuyConfirmMenu_EndClose__);
    byte_4D2B2E0 = 1;
  }
  this->fields.onClose = callback;
  sub_1C93A78(&this->fields.onClose, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_TreasureBoxBulkBuyConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void TreasureBoxBulkBuyConfirmMenu__EndClose(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  TreasureBoxBulkBuyConfirmMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
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

  UserItemBuyableCount = TreasureBoxBulkBuyConfirmMenu__GetUserItemBuyableCount(this, userGameEntity, method);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity )
    sub_1C93D2C(UserItemBuyableCount, v5);
  maxDrawNumOnce = treasureBoxEntity->fields.maxDrawNumOnce;
  if ( (int)UserItemBuyableCount > maxDrawNumOnce && maxDrawNumOnce )
    LODWORD(UserItemBuyableCount) = maxDrawNumOnce;
  return UserItemBuyableCount;
}


int32_t TreasureBoxBulkBuyConfirmMenu__GetUserItemBuyableCount(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UserGameEntity_o *userGameEntity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  int64_t v7; // x21

  if ( (byte_4D2B2DF & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B2DF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.treasureBoxEntity
    || (v7 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
        Instance = (DataManager_o *)TreasureBoxEntity__get_ConsumeItemId(this->fields.treasureBoxEntity, 0),
        !MasterData_object)
    || (Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                      (UserItemMaster_o *)MasterData_object,
                                      v7,
                                      (int32_t)Instance,
                                      0)) == 0 )
  {
LABEL_14:
    sub_1C93D2C(Instance, v5);
  }
  return SHIDWORD(Instance->fields.m_CancellationTokenSource) / this->fields.payNum;
}


void TreasureBoxBulkBuyConfirmMenu__Init(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.treasureBoxEntity = 0;
  sub_1C93A78(&this->fields.treasureBoxEntity, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


bool TreasureBoxBulkBuyConfirmMenu__IsEnable(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  Il2CppObject *Entity; // x19

  if ( (byte_4D2B2E3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B2E3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMaster___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity || !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             treasureBoxEntity->fields.eventId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0);
  if ( !Entity )
LABEL_10:
    sub_1C93D2C(Instance, v4);
  return (__int64)Instance <= (__int64)Entity[6].monitor;
}


int64_t TreasureBoxBulkBuyConfirmMenu__ItemMaxOverCheck(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        int64_t count,
        int64_t price,
        const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0
  int64_t UserItemMax; // x8

  if ( (byte_4D2B2E6 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2B2E6 = 1;
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


void TreasureBoxBulkBuyConfirmMenu__OnClickCancel(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4D2B2E4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__);
    byte_4D2B2E4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C93D2C(0, v5);
    UISliderWithButton__grayMode(itemSlider, 0);
    TreasureBoxBulkBuyConfirmMenu__Close_33127252(this, 0, v7);
  }
}


void TreasureBoxBulkBuyConfirmMenu__OnClickDecide(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2B2E1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__);
    byte_4D2B2E1 = 1;
  }
  if ( this->fields.state == 2 && !TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(this, method) )
  {
    this->fields.state = 3;
    v3 = Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.decideSe, 0, 0);
    TreasureBoxBulkBuyConfirmMenu__CallOnDecide(this, this->fields.buyCount, v5);
  }
}


void TreasureBoxBulkBuyConfirmMenu__Open(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        TreasureBoxEntity_o *treasure,
        System_Action_int__o *onDecide,
        int32_t se,
        const MethodInfo *method)
{
  struct TreasureBoxEntity_o **p_treasureBoxEntity; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x21
  UILabel_o *titleLb; // x21
  _DWORD *monitor; // x8
  EventItemComponent_o *eventTreasureBoxItemInfo; // x20
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v18; // x2
  int32_t ItemSliderMax; // w0
  int32_t payNum; // w8
  UILabel_o *exchangeDestinationCount; // x20
  TreasureBoxBulkBuyConfirmMenu_o *NumberFormatLong; // x0
  const MethodInfo *v23; // x3
  UILabel_o *warningLabel; // x20
  TreasureBoxBulkBuyConfirmMenu_o *v25; // x0
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  UILabel_o *exchangeOrigin; // x20
  TreasureBoxBulkBuyConfirmMenu_o *v30; // x0
  const MethodInfo *v31; // x3
  UILabel_o *exchangeDestination; // x20
  TreasureBoxBulkBuyConfirmMenu_o *v33; // x0
  const MethodInfo *v34; // x3
  System_Action_o *v35; // x20

  if ( (byte_4D2B2DB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_TreasureBoxBulkBuyConfirmMenu_EndOpen__);
    sub_1C93AD4(&StringLiteral_13623/*"TREASURE_BOX_USER_EVENT_ITEM"*/);
    sub_1C93AD4(&StringLiteral_24514/*"treasurechest_img_bg"*/);
    sub_1C93AD4(&StringLiteral_24518/*"treasurechest_img_line"*/);
    sub_1C93AD4(&StringLiteral_13622/*"TREASURE_BOX_PAY_EVENT_ITEM"*/);
    sub_1C93AD4(&StringLiteral_24513/*"treasurechest_btn_txt"*/);
    sub_1C93AD4(&StringLiteral_13614/*"TREASURE_BOX_BULK_BUY_TITLE"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2B2DB = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1C93A78(&this->fields.onDecide, onDecide);
    this->fields.treasureBoxEntity = treasure;
    p_treasureBoxEntity = &this->fields.treasureBoxEntity;
    sub_1C93A78(&this->fields.treasureBoxEntity, treasure);
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
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24514/*"treasurechest_img_bg"*/, 0);
    AtlasManager__SetEventUI(this->fields.eventItemRootLine, (System_String_o *)StringLiteral_24518/*"treasurechest_img_line"*/, 0);
    AtlasManager__SetEventUI(this->fields.decideButtonImg, (System_String_o *)StringLiteral_24513/*"treasurechest_btn_txt"*/, 0);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13614/*"TREASURE_BOX_BULK_BUY_TITLE"*/, 0);
    if ( !titleLb )
      goto LABEL_26;
    UILabel__set_text(titleLb, (System_String_o *)gameObject, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
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
      sub_1C93D34(gameObject);
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
    ItemSliderMax = TreasureBoxBulkBuyConfirmMenu__GetItemSliderMax(this, SelfUserGame, v18);
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
      v23);
    warningLabel = this->fields.warningLabel;
    gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !warningLabel )
LABEL_26:
      sub_1C93D2C(gameObject, v11);
    UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v25, this->fields.warningLabel, (System_String_o *)StringLiteral_1/*""*/, v26);
    TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(this, v27);
    TreasureBoxBulkBuyConfirmMenu__SetItemSlider(this, v28);
    exchangeOrigin = this->fields.exchangeOrigin;
    v30 = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13622/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, 0);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v30, exchangeOrigin, (System_String_o *)v30, v31);
    exchangeDestination = this->fields.exchangeDestination;
    v33 = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13623/*"TREASURE_BOX_USER_EVENT_ITEM"*/, 0);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v33, exchangeDestination, (System_String_o *)v33, v34);
    this->fields.state = 1;
    v35 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_TreasureBoxBulkBuyConfirmMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0, 0);
  }
}


void TreasureBoxBulkBuyConfirmMenu__SetItemSlider(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  int32_t buyCount; // w20

  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_7;
  buyCount = this->fields.buyCount;
  if ( buyCount >= 2 )
    UISliderWithButton__normalMode(itemSlider, 0);
  else
    UISliderWithButton__grayMode(itemSlider, 0);
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
LABEL_7:
    sub_1C93D2C(itemSlider, method);
  UISliderWithButton__init(itemSlider, this->fields.buyCount, buyCount > 1, 1, 0);
}


void TreasureBoxBulkBuyConfirmMenu__SetLabelActive(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4D2B2DC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B2DC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0)) == 0 )
      sub_1C93D2C(gameObject, v7);
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

  if ( (byte_4D2B2DD & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B2DD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( !v6 )
  {
    if ( !label )
      sub_1C93D2C(v6, v7);
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
  UILabel_o *warningLabel; // x21
  TreasureBoxBulkBuyConfirmMenu_o *v7; // x0
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  UnityEngine_GameObject_o *decideButton; // x0

  if ( (byte_4D2B2E2 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_12150/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/);
    byte_4D2B2E2 = 1;
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
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12150/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v7, warningLabel, (System_String_o *)v7, v8);
    decideButton = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !decideButton
      || (((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, Il2CppClass **))decideButton->klass[1]._1.nestedTypes)(
            decideButton,
            3,
            0,
            decideButton->klass[1]._1.implementedInterfaces),
          (decideButton = this->fields.exchangeBase) == 0) )
    {
      sub_1C93D2C(decideButton, v9);
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

  if ( (byte_4D2B2DE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B2DE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0, 0);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1C93D2C(v6, v7);
    UISprite__set_spriteName(sprite, spriteName, 0);
  }
}


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
    sub_1C93D2C(0, isActive);
  UnityEngine_GameObject__SetActive(exchangeBase, !isActive, 0);
  TreasureBoxBulkBuyConfirmMenu__SetLabelActive(v6, this->fields.warningLabel, isActive, v7);
}


void TreasureBoxBulkBuyConfirmMenu__SliderValueChange(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v4; // x3
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  int32_t v6; // w21
  UILabel_o *exchangeDestinationCount; // x20
  int32_t payNum; // w19
  TreasureBoxBulkBuyConfirmMenu_o *NumberFormatLong; // x0
  const MethodInfo *v10; // x3

  if ( (byte_4D2B2E5 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2B2E5 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider
    || (itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0) )
  {
    sub_1C93D2C(itemSlider, method);
  }
  v6 = TreasureBoxBulkBuyConfirmMenu__ItemMaxOverCheck(
         (TreasureBoxBulkBuyConfirmMenu_o *)itemSlider,
         (int)itemSlider,
         treasureBoxEntity->fields.maxDrawNumOnce,
         v4);
  this->fields.buyCount = v6;
  exchangeDestinationCount = this->fields.exchangeDestinationCount;
  payNum = this->fields.payNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormatLong = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(payNum * v6, 0);
  TreasureBoxBulkBuyConfirmMenu__SetLabelText(
    NumberFormatLong,
    exchangeDestinationCount,
    (System_String_o *)NumberFormatLong,
    v10);
}


UnityEngine_GameObject_o *TreasureBoxBulkBuyConfirmMenu__get_closeBtnObject(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4D2B2E7 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B2E7 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C93D2C(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}