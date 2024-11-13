void __fastcall TreasureBoxBulkBuyConfirmMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  struct TreasureBoxBulkBuyConfirmMenu_StaticFields *static_fields; // x0

  if ( (byte_4B11328 & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureBoxBulkBuyConfirmMenu_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17804/*"btn_txt_trade"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_17786/*"btn_txt_sale"*/, v5, v6);
    byte_4B11328 = 1;
  }
  TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_17804/*"btn_txt_trade"*/;
  sub_1BCA784(TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields, StringLiteral_17804/*"btn_txt_trade"*/);
  v7 = StringLiteral_17786/*"btn_txt_sale"*/;
  static_fields = TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields;
  static_fields->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17786/*"btn_txt_sale"*/;
  sub_1BCA784(&static_fields->DECIED_BTN_NAME_LIMIT_MATERIAL, v7);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu___ctor(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11327 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B11327 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__CallOnClose(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_onClose; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = &this->fields.onClose;
  v3 = onClose;
  if ( onClose )
  {
    *p_onClose = 0LL;
    sub_1BCA784(p_onClose, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__CallOnDecide(
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
    *p_onDecide = 0LL;
    sub_1BCA784(p_onDecide, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Close(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TreasureBoxBulkBuyConfirmMenu__Close_31335484(this, 0LL, v2);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Close_31335484(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B1131F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_TreasureBoxBulkBuyConfirmMenu_EndClose__, v5, v6);
    byte_4B1131F = 1;
  }
  this->fields.onClose = callback;
  sub_1BCA784(&this->fields.onClose, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_TreasureBoxBulkBuyConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_1BCAA3C(0LL, v4);
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
    sub_1BCAA3C(UserItemBuyableCount, v5);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  int64_t v12; // x21

  if ( (byte_4B1131E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, userGameEntity, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1131E = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.treasureBoxEntity
    || (v12 = Instance,
        Instance = TreasureBoxEntity__get_ConsumeItemId(this->fields.treasureBoxEntity, 0LL),
        !MasterData_object)
    || (Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                              (UserItemMaster_o *)MasterData_object,
                              v12,
                              Instance,
                              0LL)) == 0 )
  {
LABEL_10:
    sub_1BCAA3C(Instance, v9);
  }
  return *(_DWORD *)(Instance + 28) / this->fields.payNum;
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Init(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.treasureBoxEntity = 0LL;
  sub_1BCA784(&this->fields.treasureBoxEntity, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall TreasureBoxBulkBuyConfirmMenu__IsEnable(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  __int64 v13; // x1
  Il2CppObject *Entity; // x19

  if ( (byte_4B11322 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B11322 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity || !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             treasureBoxEntity->fields.eventId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !Entity )
LABEL_10:
    sub_1BCAA3C(Instance, v11);
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
  if ( (byte_4B11325 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, count, price);
    byte_4B11325 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, count);
    v6 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v6->static_fields->UserItemMax;
  if ( price * v5 > UserItemMax )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6, count);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4B11323 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__, method, v2);
    byte_4B11323 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1BCAA3C(0LL, v6);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    TreasureBoxBulkBuyConfirmMenu__Close_31335484(this, 0LL, v8);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__OnClickDecide(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B11320 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__, method, v2);
    byte_4B11320 = 1;
  }
  if ( this->fields.state == 2 && !TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(this, method) )
  {
    this->fields.state = 3;
    v4 = Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.decideSe, 0LL);
    TreasureBoxBulkBuyConfirmMenu__CallOnDecide(this, this->fields.buyCount, v6);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  struct TreasureBoxEntity_o **p_treasureBoxEntity; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v39; // x1
  __int64 v40; // x1
  Il2CppObject *Component_object; // x21
  __int64 v42; // x1
  UILabel_o *titleLb; // x21
  __int64 v44; // x1
  _DWORD *monitor; // x8
  EventItemComponent_o *eventTreasureBoxItemInfo; // x20
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v49; // x2
  int32_t ItemSliderMax; // w0
  int32_t payNum; // w8
  UILabel_o *exchangeDestinationCount; // x20
  TreasureBoxBulkBuyConfirmMenu_o *NumberFormatLong; // x0
  const MethodInfo *v54; // x3
  UILabel_o *warningLabel; // x20
  TreasureBoxBulkBuyConfirmMenu_o *v56; // x0
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x1
  UserGameEntity_o *v59; // x1
  const MethodInfo *v60; // x2
  UILabel_o *exchangeOrigin; // x20
  TreasureBoxBulkBuyConfirmMenu_o *v62; // x0
  const MethodInfo *v63; // x3
  UILabel_o *exchangeDestination; // x20
  TreasureBoxBulkBuyConfirmMenu_o *v65; // x0
  const MethodInfo *v66; // x3
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  System_Action_o *v70; // x20

  if ( (byte_4B1131A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, treasure, onDecide);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonConsumeMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_TreasureBoxBulkBuyConfirmMenu_EndOpen__, v21, v22);
    sub_1BCA7E0(&StringLiteral_13595/*"TREASURE_BOX_USER_EVENT_ITEM"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_24322/*"treasurechest_img_bg"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_24326/*"treasurechest_img_line"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_13594/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_24321/*"treasurechest_btn_txt"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_13585/*"TREASURE_BOX_BULK_BUY_TITLE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v35, v36);
    byte_4B1131A = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1BCA784(&this->fields.onDecide, onDecide);
    this->fields.treasureBoxEntity = treasure;
    p_treasureBoxEntity = &this->fields.treasureBoxEntity;
    sub_1BCA784(&this->fields.treasureBoxEntity, treasure);
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
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v40);
    AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24322/*"treasurechest_img_bg"*/, 0LL);
    AtlasManager__SetEventUI(this->fields.eventItemRootLine, (System_String_o *)StringLiteral_24326/*"treasurechest_img_line"*/, 0LL);
    AtlasManager__SetEventUI(this->fields.decideButtonImg, (System_String_o *)StringLiteral_24321/*"treasurechest_btn_txt"*/, 0LL);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13585/*"TREASURE_BOX_BULK_BUY_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_26;
    UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44);
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
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
      sub_1BCAA44(gameObject, v39);
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
    ItemSliderMax = TreasureBoxBulkBuyConfirmMenu__GetItemSliderMax(this, SelfUserGame, v49);
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
      v54);
    warningLabel = this->fields.warningLabel;
    gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v39);
    if ( !warningLabel )
LABEL_26:
      sub_1BCAA3C(gameObject, v39);
    UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v56, this->fields.warningLabel, (System_String_o *)StringLiteral_1/*""*/, v57);
    TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(this, v58);
    TreasureBoxBulkBuyConfirmMenu__SetItemSlider(this, v59, v60);
    exchangeOrigin = this->fields.exchangeOrigin;
    v62 = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13594/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v62, exchangeOrigin, (System_String_o *)v62, v63);
    exchangeDestination = this->fields.exchangeDestination;
    v65 = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13595/*"TREASURE_BOX_USER_EVENT_ITEM"*/, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v65, exchangeDestination, (System_String_o *)v65, v66);
    this->fields.state = 1;
    v70 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v67, v68, v69);
    System_Action___ctor(v70, (Il2CppObject *)this, Method_TreasureBoxBulkBuyConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v70, 0, 0LL);
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
    sub_1BCAA3C(itemSlider, userGameEntity);
  UISliderWithButton__init(itemSlider, this->fields.buyCount, 1, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TreasureBoxBulkBuyConfirmMenu__SetLabelActive(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UILabel_o *label,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B1131B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, label, isActive);
    byte_4B1131B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1BCAA3C(gameObject, v7);
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

  if ( (byte_4B1131C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, label, text);
    byte_4B1131C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1BCAA3C(v6, v7);
    WrapControlText__textAdjust(label, text, label->fields.mFontSize, 0, 0, 0LL);
  }
}


bool __fastcall TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _BOOL8 IsEnable; // x0
  const MethodInfo *v7; // x3
  bool v8; // w20
  __int64 v9; // x1
  UILabel_o *warningLabel; // x21
  TreasureBoxBulkBuyConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  UnityEngine_GameObject_o *decideButton; // x0

  if ( (byte_4B11321 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_12142/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v4, v5);
    byte_4B11321 = 1;
  }
  IsEnable = TreasureBoxBulkBuyConfirmMenu__IsEnable(this, method);
  v8 = IsEnable;
  if ( !IsEnable )
  {
    TreasureBoxBulkBuyConfirmMenu__SetLabelActive(
      (TreasureBoxBulkBuyConfirmMenu_o *)IsEnable,
      this->fields.warningLabel,
      1,
      v7);
    warningLabel = this->fields.warningLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    v11 = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12142/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v11, warningLabel, (System_String_o *)v11, v12);
    decideButton = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !decideButton
      || (((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))decideButton->klass[1]._1.implementedInterfaces)(
            decideButton,
            3LL,
            0LL,
            decideButton->klass[1]._1.interfaceOffsets),
          (decideButton = this->fields.exchangeBase) == 0LL) )
    {
      sub_1BCAA3C(decideButton, v13);
    }
    UnityEngine_GameObject__SetActive(decideButton, 0, 0LL);
  }
  return !v8;
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__SetSpriteName(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B1131D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, sprite, spriteName);
    byte_4B1131D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sprite);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1BCAA3C(v6, v7);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(0LL, isActive);
  UnityEngine_GameObject__SetActive(exchangeBase, !isActive, 0LL);
  TreasureBoxBulkBuyConfirmMenu__SetLabelActive(v6, this->fields.warningLabel, isActive, v7);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__SliderValueChange(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v5; // x3
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  __int64 v7; // x1
  int32_t v8; // w21
  UILabel_o *exchangeDestinationCount; // x20
  int32_t payNum; // w19
  TreasureBoxBulkBuyConfirmMenu_o *NumberFormatLong; // x0
  const MethodInfo *v12; // x3

  if ( (byte_4B11324 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B11324 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider
    || (itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0LL),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0LL) )
  {
    sub_1BCAA3C(itemSlider, method);
  }
  v8 = TreasureBoxBulkBuyConfirmMenu__ItemMaxOverCheck(
         (TreasureBoxBulkBuyConfirmMenu_o *)itemSlider,
         (int)itemSlider,
         treasureBoxEntity->fields.maxDrawNumOnce,
         v5);
  this->fields.buyCount = v8;
  exchangeDestinationCount = this->fields.exchangeDestinationCount;
  payNum = this->fields.payNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  NumberFormatLong = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__GetNumberFormatLong(payNum * v8, 0LL);
  TreasureBoxBulkBuyConfirmMenu__SetLabelText(
    NumberFormatLong,
    exchangeDestinationCount,
    (System_String_o *)NumberFormatLong,
    v12);
}


UnityEngine_GameObject_o *__fastcall TreasureBoxBulkBuyConfirmMenu__get_closeBtnObject(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B11326 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11326 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}