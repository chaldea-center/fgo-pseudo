void __fastcall TreasureBoxBulkBuyConfirmMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct TreasureBoxBulkBuyConfirmMenu_StaticFields *static_fields; // x0

  if ( (byte_4A56404 & 1) == 0 )
  {
    sub_1B885B0(&TreasureBoxBulkBuyConfirmMenu_TypeInfo);
    sub_1B885B0(&StringLiteral_17626/*"btn_txt_trade"*/);
    sub_1B885B0(&StringLiteral_17609/*"btn_txt_sale"*/);
    byte_4A56404 = 1;
  }
  TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields->DECIED_BTN_NAME_DEFAULT = (struct System_String_o *)StringLiteral_17626/*"btn_txt_trade"*/;
  sub_1B88554(TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields, StringLiteral_17626/*"btn_txt_trade"*/);
  v1 = StringLiteral_17609/*"btn_txt_sale"*/;
  static_fields = TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields;
  static_fields->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17609/*"btn_txt_sale"*/;
  sub_1B88554(&static_fields->DECIED_BTN_NAME_LIMIT_MATERIAL, v1);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu___ctor(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A56403 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A56403 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
    sub_1B88554(p_onClose, 0LL);
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
    sub_1B88554(p_onDecide, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Close(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TreasureBoxBulkBuyConfirmMenu__Close_30761024(this, 0LL, v2);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Close_30761024(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4A563FB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_TreasureBoxBulkBuyConfirmMenu_EndClose__);
    byte_4A563FB = 1;
  }
  this->fields.onClose = callback;
  sub_1B88554(&this->fields.onClose, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_TreasureBoxBulkBuyConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
    sub_1B8880C(0LL, v4);
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
    sub_1B8880C(UserItemBuyableCount, v5);
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
  int64_t Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  int64_t v7; // x21

  if ( (byte_4A563FA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A563FA = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.treasureBoxEntity
    || (v7 = Instance,
        Instance = TreasureBoxEntity__get_ConsumeItemId(this->fields.treasureBoxEntity, 0LL),
        !MasterData_object)
    || (Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                              (UserItemMaster_o *)MasterData_object,
                              v7,
                              Instance,
                              0LL)) == 0 )
  {
LABEL_10:
    sub_1B8880C(Instance, v5);
  }
  return *(_DWORD *)(Instance + 28) / this->fields.payNum;
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Init(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.treasureBoxEntity = 0LL;
  sub_1B88554(&this->fields.treasureBoxEntity, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall TreasureBoxBulkBuyConfirmMenu__IsEnable(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  Il2CppObject *Entity; // x19

  if ( (byte_4A563FE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A563FE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity || !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             treasureBoxEntity->fields.eventId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !Entity )
LABEL_10:
    sub_1B8880C(Instance, v4);
  return (__int64)Instance <= (__int64)Entity[6].monitor;
}


int64_t __fastcall TreasureBoxBulkBuyConfirmMenu__ItemMaxOverCheck(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        int64_t count,
        int64_t price,
        const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0
  int64_t UserItemMax; // x8

  if ( (byte_4A56401 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A56401 = 1;
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


void __fastcall TreasureBoxBulkBuyConfirmMenu__OnClickCancel(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4A563FF & 1) == 0 )
  {
    sub_1B885B0(&Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__);
    byte_4A563FF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_TreasureBoxBulkBuyConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1B8880C(0LL, v5);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    TreasureBoxBulkBuyConfirmMenu__Close_30761024(this, 0LL, v7);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__OnClickDecide(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A563FC & 1) == 0 )
  {
    sub_1B885B0(&Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__);
    byte_4A563FC = 1;
  }
  if ( this->fields.state == 2 && !TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(this, method) )
  {
    this->fields.state = 3;
    v3 = Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_TreasureBoxBulkBuyConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  struct TreasureBoxEntity_o **p_treasureBoxEntity; // x20
  __int64 gameObject; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x21
  UILabel_o *titleLb; // x21
  __int64 v14; // x8
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
  UserGameEntity_o *v28; // x1
  const MethodInfo *v29; // x2
  UILabel_o *exchangeOrigin; // x20
  TreasureBoxBulkBuyConfirmMenu_o *v31; // x0
  const MethodInfo *v32; // x3
  UILabel_o *exchangeDestination; // x20
  TreasureBoxBulkBuyConfirmMenu_o *v34; // x0
  const MethodInfo *v35; // x3
  System_Action_o *v36; // x20

  if ( (byte_4A563F6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_TreasureBoxBulkBuyConfirmMenu_EndOpen__);
    sub_1B885B0(&StringLiteral_13432/*"TREASURE_BOX_USER_EVENT_ITEM"*/);
    sub_1B885B0(&StringLiteral_24070/*"treasurechest_img_bg"*/);
    sub_1B885B0(&StringLiteral_24074/*"treasurechest_img_line"*/);
    sub_1B885B0(&StringLiteral_13431/*"TREASURE_BOX_PAY_EVENT_ITEM"*/);
    sub_1B885B0(&StringLiteral_24069/*"treasurechest_btn_txt"*/);
    sub_1B885B0(&StringLiteral_13422/*"TREASURE_BOX_BULK_BUY_TITLE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A563F6 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1B88554(&this->fields.onDecide, onDecide);
    this->fields.treasureBoxEntity = treasure;
    p_treasureBoxEntity = &this->fields.treasureBoxEntity;
    sub_1B88554(&this->fields.treasureBoxEntity, treasure);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)this->fields.exchangeBase;
    this->fields.decideSe = se;
    this->fields.buyCount = 1;
    if ( !gameObject )
      goto LABEL_26;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)gameObject,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24070/*"treasurechest_img_bg"*/, 0LL);
    AtlasManager__SetEventUI(this->fields.eventItemRootLine, (System_String_o *)StringLiteral_24074/*"treasurechest_img_line"*/, 0LL);
    AtlasManager__SetEventUI(this->fields.decideButtonImg, (System_String_o *)StringLiteral_24069/*"treasurechest_btn_txt"*/, 0LL);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13422/*"TREASURE_BOX_BULK_BUY_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_26;
    UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
    if ( !*p_treasureBoxEntity )
      goto LABEL_26;
    if ( !gameObject )
      goto LABEL_26;
    gameObject = (__int64)CommonConsumeMaster__GetIdEntityList(
                            (CommonConsumeMaster_o *)gameObject,
                            (*p_treasureBoxEntity)->fields.commonConsumeId,
                            0LL);
    if ( !gameObject )
      goto LABEL_26;
    if ( !*(_DWORD *)(gameObject + 24) )
      sub_1B88814(gameObject, v11);
    v14 = *(_QWORD *)(gameObject + 32);
    if ( !v14 )
      goto LABEL_26;
    gameObject = (__int64)this->fields.treasureBoxEntity;
    this->fields.payNum = *(_DWORD *)(v14 + 32);
    if ( !gameObject )
      goto LABEL_26;
    eventTreasureBoxItemInfo = this->fields.eventTreasureBoxItemInfo;
    gameObject = TreasureBoxEntity__get_ConsumeItemId((TreasureBoxEntity_o *)gameObject, 0LL);
    if ( !eventTreasureBoxItemInfo )
      goto LABEL_26;
    EventItemComponent__Set(eventTreasureBoxItemInfo, gameObject, 0LL);
    treasureBoxEntity = this->fields.treasureBoxEntity;
    if ( !treasureBoxEntity )
      goto LABEL_26;
    gameObject = (__int64)this->fields.eventItemIcon;
    if ( !gameObject )
      goto LABEL_26;
    ItemIconComponent__SetItem((ItemIconComponent_o *)gameObject, treasureBoxEntity->fields.iconId, -1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    ItemSliderMax = TreasureBoxBulkBuyConfirmMenu__GetItemSliderMax(this, SelfUserGame, v18);
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
      v23);
    warningLabel = this->fields.warningLabel;
    gameObject = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      gameObject = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !warningLabel )
LABEL_26:
      sub_1B8880C(gameObject, v11);
    UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v25, this->fields.warningLabel, (System_String_o *)StringLiteral_1/*""*/, v26);
    TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(this, v27);
    TreasureBoxBulkBuyConfirmMenu__SetItemSlider(this, v28, v29);
    exchangeOrigin = this->fields.exchangeOrigin;
    v31 = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13431/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v31, exchangeOrigin, (System_String_o *)v31, v32);
    exchangeDestination = this->fields.exchangeDestination;
    v34 = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13432/*"TREASURE_BOX_USER_EVENT_ITEM"*/, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v34, exchangeDestination, (System_String_o *)v34, v35);
    this->fields.state = 1;
    v36 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v36, (Il2CppObject *)this, Method_TreasureBoxBulkBuyConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0LL);
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
    sub_1B8880C(itemSlider, userGameEntity);
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

  if ( (byte_4A563F7 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A563F7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !label || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL)) == 0LL )
      sub_1B8880C(gameObject, v7);
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

  if ( (byte_4A563F8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A563F8 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !label )
      sub_1B8880C(v6, v7);
    WrapControlText__textAdjust(label, text, label->fields.mFontSize, 0, 0, 0LL);
  }
}


bool __fastcall TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(
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

  if ( (byte_4A563FD & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12002/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/);
    byte_4A563FD = 1;
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
    v7 = (TreasureBoxBulkBuyConfirmMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12002/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v7, warningLabel, (System_String_o *)v7, v8);
    decideButton = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !decideButton
      || (((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))decideButton->klass[1]._1.implementedInterfaces)(
            decideButton,
            3LL,
            0LL,
            decideButton->klass[1]._1.interfaceOffsets),
          (decideButton = this->fields.exchangeBase) == 0LL) )
    {
      sub_1B8880C(decideButton, v9);
    }
    UnityEngine_GameObject__SetActive(decideButton, 0, 0LL);
  }
  return !v5;
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__SetSpriteName(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A563F9 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A563F9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !sprite )
      sub_1B8880C(v6, v7);
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
    sub_1B8880C(0LL, isActive);
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

  if ( (byte_4A56400 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A56400 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider
    || (itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0LL),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0LL) )
  {
    sub_1B8880C(itemSlider, method);
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

  if ( (byte_4A56402 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56402 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}