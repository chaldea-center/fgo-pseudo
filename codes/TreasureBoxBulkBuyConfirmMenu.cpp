void __fastcall TreasureBoxBulkBuyConfirmMenu___cctor(const MethodInfo *method)
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
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct TreasureBoxBulkBuyConfirmMenu_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42EAC8A & 1) == 0 )
  {
    sub_B5D5C4(&TreasureBoxBulkBuyConfirmMenu_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_17312/*"btn_txt_trade"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17295/*"btn_txt_sale"*/, v11, v12, v13);
    byte_42EAC8A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_17312/*"btn_txt_trade"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17312/*"btn_txt_trade"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = TreasureBoxBulkBuyConfirmMenu_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_17295/*"btn_txt_sale"*/;
  v16->DECIED_BTN_NAME_LIMIT_MATERIAL = (struct System_String_o *)StringLiteral_17295/*"btn_txt_sale"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->DECIED_BTN_NAME_LIMIT_MATERIAL, v17, v18, v19, v20, v21, v22, v23);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu___ctor(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAC89 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAC89 = 1;
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
    sub_B5D560(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


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

  if ( (byte_42EAC81 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, result, (_DWORD)method, v3);
    byte_42EAC81 = 1;
  }
  onDecide = this->fields.onDecide;
  p_onDecide = (BattleServantConfConponent_o *)&this->fields.onDecide;
  v11 = onDecide;
  if ( onDecide )
  {
    p_onDecide->klass = 0LL;
    sub_B5D560(p_onDecide, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action_int___Invoke(v11, result, (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Close(TreasureBoxBulkBuyConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TreasureBoxBulkBuyConfirmMenu__Close_29237744(this, 0LL, v2);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__Close_29237744(
        TreasureBoxBulkBuyConfirmMenu_o *this,
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

  if ( (byte_42EAC80 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_TreasureBoxBulkBuyConfirmMenu_EndClose__, v10, v11, v12);
    byte_42EAC80 = 1;
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
  System_Action___ctor(v13, (Il2CppObject *)this, Method_TreasureBoxBulkBuyConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D69C(0LL, v4);
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
    sub_B5D69C(UserItemBuyableCount, v5);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t Instance; // x0
  __int64 v12; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8

  if ( (byte_42EAC7F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)userGameEntity, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EAC7F = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    sub_B5D69C(Instance, v12);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.treasureBoxEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.treasureBoxEntity, 0LL, v5, v6, v7, v8, v9, v10);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall TreasureBoxBulkBuyConfirmMenu__IsEnable(
        TreasureBoxBulkBuyConfirmMenu_o *this,
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  WarEntity_o *Entity; // x19

  if ( (byte_42EAC84 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EAC84 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  treasureBoxEntity = this->fields.treasureBoxEntity;
  if ( !treasureBoxEntity || !Instance )
    goto LABEL_11;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             treasureBoxEntity->fields.eventId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !Entity )
LABEL_11:
    sub_B5D69C(Instance, v15);
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
  if ( (byte_42EAC87 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, count, price, method);
    byte_42EAC87 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42EAC85 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAC85 = 1;
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
    TreasureBoxBulkBuyConfirmMenu__Close_29237744(this, 0LL, v7);
  }
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__OnClickDecide(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t decideSe; // w20
  const MethodInfo *v6; // x2

  if ( (byte_42EAC82 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAC82 = 1;
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
    TreasureBoxBulkBuyConfirmMenu__CallOnDecide(this, this->fields.buyCount, v6);
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
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  struct TreasureBoxEntity_o **p_treasureBoxEntity; // x20
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v68; // x1
  UISprite_o *Component_srcLineSprite; // x21
  UILabel_o *titleLb; // x21
  _DWORD *monitor; // x8
  int32_t v72; // w9
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  struct TreasureBoxEntity_o *v74; // x8
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v76; // x2
  int32_t ItemSliderMax; // w0
  int32_t payNum; // w8
  UILabel_o *exchangeDestinationCount; // x20
  System_String_o *NumberFormatLong; // x0
  const MethodInfo *v81; // x3
  UILabel_o *warningLabel; // x20
  TreasureBoxBulkBuyConfirmMenu_o *v83; // x0
  const MethodInfo *v84; // x3
  const MethodInfo *v85; // x1
  UserGameEntity_o *v86; // x1
  const MethodInfo *v87; // x2
  UILabel_o *exchangeOrigin; // x20
  System_String_o *v89; // x0
  const MethodInfo *v90; // x3
  UILabel_o *exchangeDestination; // x20
  System_String_o *v92; // x0
  const MethodInfo *v93; // x3
  System_Action_o *v94; // x20
  __int64 v95; // x0

  if ( (byte_42EAC7B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)treasure, (_DWORD)onDecide, *(_QWORD *)&se);
    sub_B5D5C4(&AtlasManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v24, v25, v26);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v27, v28, v29);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&Method_TreasureBoxBulkBuyConfirmMenu_EndOpen__, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_13603/*"TREASURE_BOX_USER_EVENT_ITEM"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_23103/*"treasurechest_img_bg"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_23107/*"treasurechest_img_line"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_13602/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_23102/*"treasurechest_btn_txt"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_13593/*"TREASURE_BOX_BULK_BUY_TITLE"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_1/*""*/, v57, v58, v59);
    byte_42EAC7B = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B5D560(
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.treasureBoxEntity,
      (System_Int32_array **)treasure,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
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
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(Component_srcLineSprite, (System_String_o *)StringLiteral_23103/*"treasurechest_img_bg"*/, 0LL);
    AtlasManager__SetEventUI(this->fields.eventItemRootLine, (System_String_o *)StringLiteral_23107/*"treasurechest_img_line"*/, 0LL);
    AtlasManager__SetEventUI(this->fields.decideButtonImg, (System_String_o *)StringLiteral_23102/*"treasurechest_btn_txt"*/, 0LL);
    titleLb = this->fields.titleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13593/*"TREASURE_BOX_BULK_BUY_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_31;
    UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !*p_treasureBoxEntity )
      goto LABEL_31;
    if ( !gameObject )
      goto LABEL_31;
    DataMasterBase_WarMaster__WarEntity__int___GetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
      (*p_treasureBoxEntity)->fields.iconId,
      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
      v95 = sub_B5D6C8(gameObject);
      sub_B5D668(v95, 0LL);
    }
    monitor = gameObject[1].monitor;
    if ( !monitor )
      goto LABEL_31;
    v72 = monitor[8];
    treasureBoxEntity = this->fields.treasureBoxEntity;
    this->fields.payNum = v72;
    if ( !treasureBoxEntity )
      goto LABEL_31;
    gameObject = (UnityEngine_GameObject_o *)this->fields.eventTreasureBoxItemInfo;
    if ( !gameObject )
      goto LABEL_31;
    EventItemComponent__Set((EventItemComponent_o *)gameObject, treasureBoxEntity->fields.iconId, 0LL);
    v74 = this->fields.treasureBoxEntity;
    if ( !v74 )
      goto LABEL_31;
    gameObject = (UnityEngine_GameObject_o *)this->fields.eventItemIcon;
    if ( !gameObject )
      goto LABEL_31;
    ItemIconComponent__SetItem((ItemIconComponent_o *)gameObject, v74->fields.iconId, -1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    ItemSliderMax = TreasureBoxBulkBuyConfirmMenu__GetItemSliderMax(this, SelfUserGame, v76);
    payNum = this->fields.payNum;
    exchangeDestinationCount = this->fields.exchangeDestinationCount;
    this->fields.buyCount = ItemSliderMax;
    NumberFormatLong = LocalizationManager__GetNumberFormatLong(payNum * ItemSliderMax, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(
      (TreasureBoxBulkBuyConfirmMenu_o *)NumberFormatLong,
      exchangeDestinationCount,
      NumberFormatLong,
      v81);
    warningLabel = this->fields.warningLabel;
    gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !warningLabel )
LABEL_31:
      sub_B5D69C(gameObject, v68);
    UILabel__set_fontSize(warningLabel, BalanceConfig_TypeInfo->static_fields->DefaultFontSize, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText(v83, this->fields.warningLabel, (System_String_o *)StringLiteral_1/*""*/, v84);
    TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(this, v85);
    TreasureBoxBulkBuyConfirmMenu__SetItemSlider(this, v86, v87);
    exchangeOrigin = this->fields.exchangeOrigin;
    v89 = LocalizationManager__Get((System_String_o *)StringLiteral_13602/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText((TreasureBoxBulkBuyConfirmMenu_o *)v89, exchangeOrigin, v89, v90);
    exchangeDestination = this->fields.exchangeDestination;
    v92 = LocalizationManager__Get((System_String_o *)StringLiteral_13603/*"TREASURE_BOX_USER_EVENT_ITEM"*/, 0LL);
    TreasureBoxBulkBuyConfirmMenu__SetLabelText((TreasureBoxBulkBuyConfirmMenu_o *)v92, exchangeDestination, v92, v93);
    this->fields.state = 1;
    v94 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v94, (Il2CppObject *)this, Method_TreasureBoxBulkBuyConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v94, 0, 0LL);
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
    sub_B5D69C(itemSlider, userGameEntity);
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

  if ( (byte_42EAC7C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)label, isActive, method);
    byte_42EAC7C = 1;
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
      sub_B5D69C(gameObject, v7);
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

  if ( (byte_42EAC7D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)label, (_DWORD)text, method);
    byte_42EAC7D = 1;
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
      sub_B5D69C(v6, v7);
    WrapControlText__textAdjust(label, text, label->fields.mFontSize, 0, 0, 0LL);
  }
}


bool __fastcall TreasureBoxBulkBuyConfirmMenu__SetShopNotEnableWarning(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  _BOOL8 IsEnable; // x0
  const MethodInfo *v9; // x3
  UILabel_o *warningLabel; // x20
  System_String_o *v12; // x0
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  UnityEngine_GameObject_o *decideButton; // x0

  if ( (byte_42EAC83 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12254/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, v5, v6, v7);
    byte_42EAC83 = 1;
  }
  IsEnable = TreasureBoxBulkBuyConfirmMenu__IsEnable(this, method);
  if ( IsEnable )
    return 0;
  TreasureBoxBulkBuyConfirmMenu__SetLabelActive(
    (TreasureBoxBulkBuyConfirmMenu_o *)IsEnable,
    this->fields.warningLabel,
    1,
    v9);
  warningLabel = this->fields.warningLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12254/*"SHOP_BUY_CONFIRM_PERIOD_WARNING"*/, 0LL);
  TreasureBoxBulkBuyConfirmMenu__SetLabelText((TreasureBoxBulkBuyConfirmMenu_o *)v12, warningLabel, v12, v13);
  decideButton = (UnityEngine_GameObject_o *)this->fields.decideButton;
  if ( !decideButton
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))decideButton->klass[1]._1.implementedInterfaces)(
          decideButton,
          3LL,
          0LL,
          decideButton->klass[1]._1.interfaceOffsets),
        (decideButton = this->fields.exchangeBase) == 0LL) )
  {
    sub_B5D69C(decideButton, v14);
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

  if ( (byte_42EAC7E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)sprite, (_DWORD)spriteName, method);
    byte_42EAC7E = 1;
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
      sub_B5D69C(v6, v7);
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
    sub_B5D69C(0LL, isActive);
  UnityEngine_GameObject__SetActive(exchangeBase, !isActive, 0LL);
  TreasureBoxBulkBuyConfirmMenu__SetLabelActive(v6, this->fields.warningLabel, isActive, v7);
}


void __fastcall TreasureBoxBulkBuyConfirmMenu__SliderValueChange(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v6; // x3
  struct TreasureBoxEntity_o *treasureBoxEntity; // x8
  int32_t v8; // w21
  UILabel_o *exchangeDestinationCount; // x20
  int32_t payNum; // w19
  System_String_o *NumberFormatLong; // x0
  const MethodInfo *v12; // x3

  if ( (byte_42EAC86 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAC86 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider
    || (itemSlider = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(itemSlider, 0LL),
        (treasureBoxEntity = this->fields.treasureBoxEntity) == 0LL) )
  {
    sub_B5D69C(itemSlider, method);
  }
  v8 = TreasureBoxBulkBuyConfirmMenu__ItemMaxOverCheck(
         (TreasureBoxBulkBuyConfirmMenu_o *)itemSlider,
         (int)itemSlider,
         treasureBoxEntity->fields.maxDrawNumOnce,
         v6);
  this->fields.buyCount = v8;
  exchangeDestinationCount = this->fields.exchangeDestinationCount;
  payNum = this->fields.payNum;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormatLong = LocalizationManager__GetNumberFormatLong(payNum * v8, 0LL);
  TreasureBoxBulkBuyConfirmMenu__SetLabelText(
    (TreasureBoxBulkBuyConfirmMenu_o *)NumberFormatLong,
    exchangeDestinationCount,
    NumberFormatLong,
    v12);
}


UnityEngine_GameObject_o *__fastcall TreasureBoxBulkBuyConfirmMenu__get_closeBtnObject(
        TreasureBoxBulkBuyConfirmMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42EAC88 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAC88 = 1;
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