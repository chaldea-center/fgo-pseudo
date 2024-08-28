void __fastcall TreasureBoxBulkBuyConfirmMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct TreasureBoxBulkBuyConfirmMenu_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A0CFB7 & 1) == 0 )
  {
    sub_1B686D4(&TreasureBoxBulkBuyConfirmMenu_TypeInfo, v1);
    sub_1B686D4(&StringLiteral_17561/*"btn_txt_trade"*/, v4);
    sub_1B686D4(&StringLiteral_17544/*"btn_txt_sale"*/, v5);
    byte_4A0CFB7 = 1;
  }
  TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_17561/*"btn_txt_trade"*/;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields,
    StringLiteral_17561/*"btn_txt_trade"*/,
    v2,
    v3);
  v6 = StringLiteral_17544/*"btn_txt_sale"*/;
  static_fields = TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields;
  static_fields->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17544/*"btn_txt_sale"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->DECIED_BTN_NAME_LIMIT_MATERIAL, v6, v8, v9);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu___ctor(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A0CFB6 & 1) == 0 )
  {
    sub_1B686D4(&BaseDialog_TypeInfo, method);
    byte_4A0CFB6 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__CallOnClose(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_onClose; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = (ServantStatusBattleListViewItem_o *)&this->fields.onClose;
  v5 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_1B68678(p_onClose, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__CallOnDecide(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_onDecide; // x0
  struct System_Action_int__o *v5; // x20
  struct System_Action_int__o *onDecide; // t1

  onDecide = this->fields.onDecide;
  p_onDecide = (ServantStatusBattleListViewItem_o *)&this->fields.onDecide;
  v5 = onDecide;
  if ( onDecide )
  {
    p_onDecide->klass = 0LL;
    sub_1B68678(p_onDecide, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Close(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TreasureBoxBulkBuyConfirmMenu__Close_46000260(this, 0LL, v2);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Close_46000260(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A0CFAE & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, callback);
    sub_1B686D4(&Method_TreasureBoxBulkBuyConfirmMenu_EndClose__, v6);
    byte_4A0CFAE = 1;
  }
  this->fields.onClose = callback;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TreasureBoxBulkBuyConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
    sub_1B68930(0LL, v4);
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
    sub_1B68930(UserItemBuyableCount, v5);
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
  Il2CppObject *MasterData_object; // x20
  int64_t v9; // x21

  if ( (byte_4A0CFAD & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserItemMaster___, userGameEntity);
    sub_1B686D4(&NetworkManager_TypeInfo, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A0CFAD = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.treasureBoxEntity
    || (v9 = Instance,
        Instance = TreasureBoxEntity__get_ConsumeItemId(this->fields.treasureBoxEntity, 0LL),
        !MasterData_object)
    || (Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                              (UserItemMaster_o *)MasterData_object,
                              v9,
                              Instance,
                              0LL)) == 0 )
  {
LABEL_10:
    sub_1B68930(Instance, v7);
  }
  return *(_DWORD *)(Instance + 28) / this->fields.payNum;
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Init(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B68930(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.treasureBoxEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.treasureBoxEntity, 0, v5, v6);
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
  Il2CppObject *Entity; // x19

  if ( (byte_4A0CFB1 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1B686D4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v3);
    sub_1B686D4(&NetworkManager_TypeInfo, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A0CFB1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventMaster___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity || !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             treasureBoxEntity->fields.eventId,
             (const MethodInfo_30E44C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !Entity )
LABEL_10:
    sub_1B68930(Instance, v7);
  return (__int64)Instance <= (__int64)Entity[6].monitor;
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
  if ( (byte_4A0CFB4 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, count);
    byte_4A0CFB4 = 1;
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


void __fastcall TreasureBoxBulkBuyConfirmMenu__OnClickCancel(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4A0CFB2 & 1) == 0 )
  {
    sub_1B686D4(&Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__, method);
    byte_4A0CFB2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1B68930(0LL, v5);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    TreasureBoxBulkBuyConfirmMenu__Close_46000260(this, 0LL, v7);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__OnClickDecide(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A0CFAF & 1) == 0 )
  {
    sub_1B686D4(&Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__, method);
    byte_4A0CFAF = 1;
  }
  if ( this->fields.state == 2 && !TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(this, method) )
  {
    this->fields.state = 3;
    v3 = Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.decideSe, 0LL);
    TreasureBoxBulkBuyConfirmMenu__CallOnDecide(this, this->fields.buyCount, v5);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Open(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        TreasureBoxEntity_o *treasure,
        System_Action_int__o *onDecide,
        int32_t se,
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
  struct TreasureBoxEntity_o **p_treasureBoxEntity; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x21
  UILabel_o *titleLb; // x21
  _DWORD *monitor; // x8
  EventItemComponent_o *eventTreasureBoxItemInfo; // x20
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v34; // x2
  int32_t ItemSliderMax; // w0
  int32_t payNum; // w8
  UILabel_o *exchangeDestinationCount; // x20
  TreasureBoxBulkBuyConfirmMenu_o *NumberFormatLong; // x0
  const MethodInfo *v39; // x3
  UILabel_o *warningLabel; // x20
  TreasureBoxBulkBuyConfirmMenu_o *v41; // x0
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x1
  UserGameEntity_o *v44; // x1
  const MethodInfo *v45; // x2
  UILabel_o *exchangeOrigin; // x20
  TreasureBoxBulkBuyConfirmMenu_o *v47; // x0
  const MethodInfo *v48; // x3
  UILabel_o *exchangeDestination; // x20
  TreasureBoxBulkBuyConfirmMenu_o *v50; // x0
  const MethodInfo *v51; // x3
  System_Action_o *v52; // x20

  if ( (byte_4A0CFA9 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, treasure);
    sub_1B686D4(&AtlasManager_TypeInfo, v9);
    sub_1B686D4(&BalanceConfig_TypeInfo, v10);
    sub_1B686D4(&Method_DataManager_GetMaster_CommonConsumeMaster___, v11);
    sub_1B686D4(&DataManager_TypeInfo, v12);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v13);
    sub_1B686D4(&LocalizationManager_TypeInfo, v14);
    sub_1B686D4(&Method_TreasureBoxBulkBuyConfirmMenu_EndOpen__, v15);
    sub_1B686D4(&StringLiteral_13369/*"TREASURE_BOX_USER_EVENT_ITEM"*/, v16);
    sub_1B686D4(&StringLiteral_23987/*"treasurechest_img_bg"*/, v17);
    sub_1B686D4(&StringLiteral_23991/*"treasurechest_img_line"*/, v18);
    sub_1B686D4(&StringLiteral_13368/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, v19);
    sub_1B686D4(&StringLiteral_23986/*"treasurechest_btn_txt"*/, v20);
    sub_1B686D4(&StringLiteral_13359/*"TREASURE_BOX_BULK_BUY_TITLE"*/, v21);
    sub_1B686D4(&StringLiteral_1/*""*/, v22);
    byte_4A0CFA9 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, (int32_t)onDecide, (int32_t)onDecide, se);
    this->fields.treasureBoxEntity = treasure;
    p_treasureBoxEntity = &this->fields.treasureBoxEntity;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.treasureBoxEntity, (int32_t)treasure, v24, v25);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = this->fields.exchangeBase;
    this->fields.decideSe = se;
    this->fields.buyCount = 1;
    if ( !gameObject )
      goto LABEL_26;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_23987/*"treasurechest_img_bg"*/, 0LL);
    AtlasManager__SetEventUI(this->fields.eventItemRootLine, (System_String_o *)StringLiteral_23991/*"treasurechest_img_line"*/, 0LL);
    AtlasManager__SetEventUI(this->fields.decideButtonImg, (System_String_o *)StringLiteral_23986/*"treasurechest_btn_txt"*/, 0LL);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13359/*"TREASURE_BOX_BULK_BUY_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_26;
    UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_CommonConsumeMaster___);
    if ( !*p_treasureBoxEntity )
      goto LABEL_26;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)CommonConsumeMaster__GetIdEntityList(
                                               (CommonConsumeMaster_o *)gameObject,
                                               (*p_treasureBoxEntity)->fields.commonConsumeId,
                                               0LL);
    if ( !gameObject )
      goto LABEL_26;
    if ( !LODWORD(gameObject[1].klass) )
      sub_1B68938(gameObject, v27);
    monitor = gameObject[1].monitor;
    if ( !monitor )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)this->fields.treasureBoxEntity;
    this->fields.payNum = monitor[8];
    if ( !gameObject )
      goto LABEL_26;
    eventTreasureBoxItemInfo = this->fields.eventTreasureBoxItemInfo;
    gameObject = (UnityEngine_GameObject_o *)TreasureBoxEntity__get_ConsumeItemId(
                                               (TreasureBoxEntity_o *)gameObject,
                                               0LL);
    if ( !eventTreasureBoxItemInfo )
      goto LABEL_26;
    EventItemComponent__Set(eventTreasureBoxItemInfo, (int32_t)gameObject, 0LL);
    treasureBoxEntity = this->fields.treasureBoxEntity;
    if ( !treasureBoxEntity )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)this->fields.eventItemIcon;
    if ( !gameObject )
      goto LABEL_26;
    ItemIconComponent__SetItem((ItemIconComponent_o *)gameObject, treasureBoxEntity->fields.iconId, -1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    ItemSliderMax = TreasureBoxBulkBuyConfirmMenu__GetItemSliderMax(this, SelfUserGame, v34);
    payNum = this->fields.payNum;
    exchangeDestinationCount = this->fields.exchangeDestinationCount;
    this->fields.buyCount = ItemSliderMax;
    NumberFormatLong = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(
                                                            payNum * ItemSliderMax,
                                                            0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(
      NumberFormatLong,
      exchangeDestinationCount,
      (System_String_o *)NumberFormatLong,
      v39);
    warningLabel = this->fields.warningLabel;
    gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !warningLabel )
LABEL_26:
      sub_1B68930(gameObject, v27);
    UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v41, this->fields.warningLabel, (System_String_o *)StringLiteral_1/*""*/, v42);
    TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(this, v43);
    TreasureBoxBulkBuyConfirmMenu__SetItemSlider(this, v44, v45);
    exchangeOrigin = this->fields.exchangeOrigin;
    v47 = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13368/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v47, exchangeOrigin, (System_String_o *)v47, v48);
    exchangeDestination = this->fields.exchangeDestination;
    v50 = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13369/*"TREASURE_BOX_USER_EVENT_ITEM"*/, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v50, exchangeDestination, (System_String_o *)v50, v51);
    this->fields.state = 1;
    v52 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v52, (Il2CppObject *)this, Method_TreasureBoxBulkBuyConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0LL);
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
    sub_1B68930(itemSlider, userGameEntity);
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

  if ( (byte_4A0CFAA & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, label);
    byte_4A0CFAA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1B68930(gameObject, v7);
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

  if ( (byte_4A0CFAB & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, label);
    byte_4A0CFAB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1B68930(v6, v7);
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
  bool v6; // w20
  UILabel_o *warningLabel; // x21
  TreasureBoxBulkBuyConfirmMenu_o *v8; // x0
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  UnityEngine_GameObject_o *decideButton; // x0

  if ( (byte_4A0CFB0 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_11952/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v3);
    byte_4A0CFB0 = 1;
  }
  IsEnable = TreasureBoxBulkBuyConfirmMenu__IsEnable(this, method);
  v6 = IsEnable;
  if ( !IsEnable )
  {
    TreasureBoxBulkBuyConfirmMenu__SetLabelActive(
      (TreasureBoxBulkBuyConfirmMenu_o *)IsEnable,
      this->fields.warningLabel,
      1,
      v5);
    warningLabel = this->fields.warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11952/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v8, warningLabel, (System_String_o *)v8, v9);
    decideButton = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !decideButton
      || (((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))decideButton->klass[1]._1.implementedInterfaces)(
            decideButton,
            3LL,
            0LL,
            decideButton->klass[1]._1.interfaceOffsets),
          (decideButton = this->fields.exchangeBase) == 0LL) )
    {
      sub_1B68930(decideButton, v10);
    }
    UnityEngine_GameObject__SetActive(decideButton, 0, 0LL);
  }
  return !v6;
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__SetSpriteName(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A0CFAC & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, sprite);
    byte_4A0CFAC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1B68930(v6, v7);
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
    sub_1B68930(0LL, isActive);
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
  TreasureBoxBulkBuyConfirmMenu_o *NumberFormatLong; // x0
  const MethodInfo *v10; // x3

  if ( (byte_4A0CFB3 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    byte_4A0CFB3 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider
    || (itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0LL),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0LL) )
  {
    sub_1B68930(itemSlider, method);
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
  NumberFormatLong = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(payNum * v6, 0LL);
  TreasureBoxBulkBuyConfirmMenu__SetLabelText(
    NumberFormatLong,
    exchangeDestinationCount,
    (System_String_o *)NumberFormatLong,
    v10);
}


UnityEngine_GameObject_o *__fastcall TreasureBoxBulkBuyConfirmMenu__get_closeBtnObject(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A0CFB5 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0CFB5 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B68930(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}