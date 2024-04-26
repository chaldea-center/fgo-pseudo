void __fastcall BoostSupportRequestMenu___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_4353E70 & 1) == 0 )
  {
    sub_B70694(&BoostSupportRequestMenu_TypeInfo);
    sub_B70694(&StringLiteral_11209/*"RECOMMENDED_ICON"*/);
    byte_4353E70 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoostSupportRequestMenu_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_11209/*"RECOMMENDED_ICON"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_11209/*"RECOMMENDED_ICON"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall BoostSupportRequestMenu___ctor(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4353E6F & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_4353E6F = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall BoostSupportRequestMenu__Awake(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall BoostSupportRequestMenu__Callback(
        BoostSupportRequestMenu_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  _BOOL4 isBoostItemUseConfirm; // w19
  System_Action_o *v17; // x19

  if ( (byte_4353E68 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__);
    sub_B70694(&BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo);
    byte_4353E68 = 1;
  }
  v7 = sub_B70764(BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo);
  BoostSupportRequestMenu___c__DisplayClass26_0___ctor((BoostSupportRequestMenu___c__DisplayClass26_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = result;
  *(_DWORD *)(v7 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v17 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v7,
    Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__,
    0LL);
  OptionManager__SaveData(v17, 0LL);
}


void __fastcall BoostSupportRequestMenu__CheckSerializeFieldAssertion(
        BoostSupportRequestMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BoostSupportRequestMenu__Close(
        BoostSupportRequestMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4353E69 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BoostSupportRequestMenu_EndClose__);
    byte_4353E69 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_BoostSupportRequestMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall BoostSupportRequestMenu__EndClose(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  BoostSupportRequestMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B70630(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall BoostSupportRequestMenu__EndOpen(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


BoostSupportRequsetItemListViewItem_o *__fastcall BoostSupportRequestMenu__GetItem(
        BoostSupportRequestMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x0

  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_B7076C(0LL, index);
  return BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, index, method);
}


void __fastcall BoostSupportRequestMenu__Init(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_B7076C(0LL, method);
  ListViewManager__DestroyList(itemListViewManager, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall BoostSupportRequestMenu__OnClickCancel(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4353E6A & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353E6A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    this->fields.state = 3;
    BoostSupportRequestMenu__Callback(this, 0, -1, v3);
  }
}


void __fastcall BoostSupportRequestMenu__OnClickDecide(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4353E6B & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353E6B = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    this->fields.state = 3;
    BoostSupportRequestMenu__Callback(this, 1, -1, v3);
  }
}


void __fastcall BoostSupportRequestMenu__OnClickSetupConfirm(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL4 isBoostItemUseConfirm; // w8
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v6; // x8

  if ( (byte_4353E6D & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_4353E6D = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_B7076C(0LL, v3);
    if ( isBoostItemUseConfirm )
      v6 = &StringLiteral_17261/*"btn_off"*/;
    else
      v6 = &StringLiteral_17262/*"btn_on"*/;
    UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v6, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestMenu__OnSelectItem(
        BoostSupportRequestMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x0
  BoostSupportRequsetItemListViewItem_o *Item; // x20
  BoostEntity_o *boostEntity; // x20
  CommonUI_o *v10; // x21
  BoostFunctionUtility_CallbackFunc_o *v11; // x22
  const MethodInfo *v12; // x3
  int32_t id; // w2
  BoostSupportRequestMenu_o *v14; // x0
  int32_t v15; // w1
  struct BoostEntity_o *v16; // x8

  if ( (byte_4353E6C & 1) == 0 )
  {
    sub_B70694(&Method_BoostSupportRequestMenu_Callback__);
    sub_B70694(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353E6C = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      itemListViewManager = this->fields.itemListViewManager;
      if ( !itemListViewManager )
        goto LABEL_35;
      Item = BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, n, *(const MethodInfo **)&n);
    }
    if ( kind == 3 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
    }
    else
    {
      if ( kind == 2 )
      {
        if ( this->fields.isBoostItemUseConfirm )
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          itemListViewManager = (BoostSupportRequestItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Item )
          {
            boostEntity = Item->fields.boostEntity;
            v10 = (CommonUI_o *)itemListViewManager;
            v11 = (BoostFunctionUtility_CallbackFunc_o *)sub_B70764(BoostFunctionUtility_CallbackFunc_TypeInfo);
            BoostFunctionUtility_CallbackFunc___ctor(
              v11,
              (Il2CppObject *)this,
              Method_BoostSupportRequestMenu_Callback__,
              0LL);
            if ( v10 )
            {
              CommonUI__OpenBoostSupportRequestReconfirmationMenu(v10, boostEntity, v11, 0LL);
              return;
            }
          }
LABEL_35:
          sub_B7076C(itemListViewManager, *(_QWORD *)&kind);
        }
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(8, 0LL);
        if ( !Item )
          goto LABEL_35;
        v16 = Item->fields.boostEntity;
        if ( v16 )
          id = v16->fields.id;
        else
          id = 0;
        v15 = 2;
        v14 = this;
      }
      else
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(1, 0LL);
        id = -1;
        v14 = this;
        v15 = 0;
      }
      BoostSupportRequestMenu__Callback(v14, v15, id, v12);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestMenu__Open(
        BoostSupportRequestMenu_o *this,
        int32_t questId,
        int32_t questPhase,
        BoostFunctionUtility_CallbackFunc_o *callback,
        bool isRetryBattle,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UILabel_o *titleLabel; // x21
  EventItemComponent_o *Instance; // x0
  __int64 v15; // x1
  UILabel_o *titleDetailLabel; // x21
  UILabel_o *useConfirmOptionLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v21; // x21
  BoostSupportRequestMenu_c *v22; // x0
  System_Int32_array *ScriptIntArrayParam; // x19
  BoostSupportRequestMenu_o *SupportRequestAllowed; // x0
  const MethodInfo *v25; // x3
  BoostEntity_array *v26; // x22
  System_Collections_Generic_List_int__o *v27; // x23
  int max_length; // w8
  int v29; // w19
  BoostEntity_array *v30; // x28
  BoostEntity_o *v31; // x22
  int baseObject; // w8
  EventItemComponent_o *v33; // x24
  unsigned int v34; // w26
  __int64 v35; // x22
  struct UserItemEntity_array *v36; // x0
  struct UserItemEntity_array **p_mUsrItemEntityList; // x24
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  unsigned int v44; // w28
  struct UserItemEntity_array *v45; // x27
  WebViewManager_o *v46; // x0
  __int64 v47; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int64_t UserId; // x0
  __int64 v50; // x1
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x25
  Il2CppClass **v60; // x0
  const MethodInfo *v61; // x4
  struct EventItemComponent_array *eventItemIconList; // x8
  struct EventItemComponent_array *v63; // x8
  struct EventItemComponent_array *v64; // x8
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x21
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v66; // x22
  const MethodInfo *v67; // x2
  __int64 *v68; // x8
  System_Action_o *v69; // x20
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x0
  BoostSupportRequestMenu_o *v73; // [xsp+10h] [xbp-A0h]
  System_Int32_array *recommendedBoostIds; // [xsp+18h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_int__o v75; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v76; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4353E66 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BoostSupportRequestMenu_EndOpen__);
    sub_B70694(&Method_BoostSupportRequestMenu_OnSelectItem__);
    sub_B70694(&BoostSupportRequestMenu_TypeInfo);
    sub_B70694(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_BoostFunctionUtility__TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&UserItemEntity___TypeInfo);
    sub_B70694(&StringLiteral_2660/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/);
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    sub_B70694(&StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B70694(&StringLiteral_2666/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/);
    sub_B70694(&StringLiteral_2659/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/);
    sub_B70694(&StringLiteral_2662/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/);
    sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_4353E66 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  this->fields.callbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    *(System_String_array ***)&questPhase,
    (System_String_array **)callback,
    (System_Boolean_array **)isRetryBattle,
    (System_Int32_array **)method,
    v6,
    v7);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2666/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_87;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2660/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_87;
  UILabel__set_text(titleDetailLabel, (System_String_o *)Instance, 0LL);
  useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2662/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, 0LL);
  if ( !useConfirmOptionLabel )
    goto LABEL_87;
  UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Instance, 0LL);
  decideLabel = this->fields.decideLabel;
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2659/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_87;
  UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
  cancelLabel = this->fields.cancelLabel;
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_87;
  UILabel__set_text(cancelLabel, (System_String_o *)Instance, 0LL);
  Instance = (EventItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  Instance = (EventItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_87;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( Entity )
  {
    v21 = Entity;
    v22 = BoostSupportRequestMenu_TypeInfo;
    if ( (BYTE3(BoostSupportRequestMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoostSupportRequestMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostSupportRequestMenu_TypeInfo);
      v22 = BoostSupportRequestMenu_TypeInfo;
    }
    ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(v21, v22->static_fields->RECOMMENDED_ICON, 0LL, 0LL);
  }
  else
  {
    ScriptIntArrayParam = 0LL;
  }
  if ( (BYTE3(SingletonTemplate_BoostFunctionUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_BoostFunctionUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_BoostFunctionUtility__TypeInfo);
  }
  Instance = (EventItemComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  SupportRequestAllowed = (BoostSupportRequestMenu_o *)BoostFunctionUtility__GetSupportRequestAllowed(
                                                         (BoostFunctionUtility_o *)Instance,
                                                         questId,
                                                         questPhase,
                                                         0LL);
  recommendedBoostIds = ScriptIntArrayParam;
  v26 = BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
          SupportRequestAllowed,
          (BoostEntity_array *)SupportRequestAllowed,
          ScriptIntArrayParam,
          v25);
  v27 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v26 )
    goto LABEL_87;
  max_length = v26->max_length;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= (unsigned int)max_length )
        goto LABEL_88;
      v30 = v26;
      v31 = v26->m_Items[v29];
      if ( !v31 )
        goto LABEL_87;
      if ( v31->fields.commonConsumeId )
      {
        Instance = (EventItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_87;
        Instance = (EventItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !Instance )
          goto LABEL_87;
        Instance = (EventItemComponent_o *)CommonConsumeMaster__GetIdEntityList(
                                             (CommonConsumeMaster_o *)Instance,
                                             v31->fields.commonConsumeId,
                                             0LL);
        if ( !Instance )
          goto LABEL_87;
        baseObject = (int)Instance->fields.baseObject;
        v33 = Instance;
        if ( baseObject >= 1 )
          break;
      }
LABEL_44:
      max_length = v30->max_length;
      ++v29;
      v26 = v30;
      if ( v29 >= max_length )
        goto LABEL_45;
    }
    v34 = 0;
    while ( v34 < baseObject )
    {
      v35 = *((_QWORD *)&v33->fields.baseSp + (int)v34);
      if ( !v35 )
        goto LABEL_87;
      if ( *(_DWORD *)(v35 + 24) == 1 )
      {
        if ( !v27 )
          goto LABEL_87;
        Instance = (EventItemComponent_o *)System_Collections_Generic_List_int___Contains(
                                             v27,
                                             *(_DWORD *)(v35 + 28),
                                             (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v27,
            *(_DWORD *)(v35 + 28),
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      baseObject = (int)v33->fields.baseObject;
      if ( (int)++v34 >= baseObject )
        goto LABEL_44;
    }
LABEL_88:
    v70 = sub_B70798(Instance);
    sub_B70738(v70, 0LL);
  }
LABEL_45:
  if ( !v27 )
    goto LABEL_87;
  Instance = (EventItemComponent_o *)this->fields.eventItemsInfoBase;
  if ( !Instance )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v27->fields._size > 0, 0LL);
  v36 = (struct UserItemEntity_array *)sub_B706AC(UserItemEntity___TypeInfo, (unsigned int)v27->fields._size);
  this->fields.mUsrItemEntityList = v36;
  p_mUsrItemEntityList = &this->fields.mUsrItemEntityList;
  v73 = this;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mUsrItemEntityList,
    (System_Int32_array **)v36,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    v27,
    (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v76 = v75;
  v44 = 0;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v76,
            (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v45 = *p_mUsrItemEntityList;
    v46 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v46 )
      sub_B7076C(0LL, v47);
    MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v46,
                                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( v27->fields._size <= v44 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B7076C(UserId, v50);
    EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                         MasterData_WarQuestSelectionMaster,
                         UserId,
                         v27->fields._items->m_Items[v44 + 1],
                         0LL);
    if ( !v45 )
      sub_B7076C(EntityDefinitely, v52);
    v59 = (System_Int32_array **)EntityDefinitely;
    if ( EntityDefinitely )
    {
      EntityDefinitely = (UserItemEntity_o *)sub_B70754(EntityDefinitely, v45->obj.klass->_1.element_class);
      if ( !EntityDefinitely )
      {
        v72 = sub_B7078C(0LL);
        sub_B70738(v72, 0LL);
      }
    }
    if ( v44 >= v45->max_length )
    {
      v71 = sub_B70798(EntityDefinitely);
      sub_B70738(v71, 0LL);
    }
    v60 = &v45->obj.klass + (int)v44;
    v60[4] = (Il2CppClass *)v59;
    sub_B70630((BattleServantConfConponent_o *)(v60 + 4), v59, v53, v54, v55, v56, v57, v58);
    ++v44;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v76,
    (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v27->fields._size >= 1 )
  {
    eventItemIconList = v73->fields.eventItemIconList;
    if ( eventItemIconList )
    {
      if ( !eventItemIconList->max_length )
        goto LABEL_88;
      Instance = eventItemIconList->m_Items[0];
      if ( Instance )
      {
        EventItemComponent__Set(Instance, v27->fields._items->m_Items[1], 0LL);
        if ( v27->fields._size < 2 )
          goto LABEL_74;
        v63 = v73->fields.eventItemIconList;
        if ( v63 )
        {
          if ( v63->max_length <= 1 )
            goto LABEL_88;
          Instance = v63->m_Items[1];
          if ( Instance )
          {
            EventItemComponent__Set(Instance, v27->fields._items->m_Items[2], 0LL);
            if ( v27->fields._size < 3 )
              goto LABEL_74;
            v64 = v73->fields.eventItemIconList;
            if ( v64 )
            {
              if ( v64->max_length <= 2 )
                goto LABEL_88;
              Instance = v64->m_Items[2];
              if ( Instance )
              {
                EventItemComponent__Set(Instance, v27->fields._items->m_Items[3], 0LL);
                goto LABEL_74;
              }
            }
          }
        }
      }
    }
LABEL_87:
    sub_B7076C(Instance, v15);
  }
LABEL_74:
  Instance = (EventItemComponent_o *)v73->fields.itemListViewManager;
  if ( !Instance )
    goto LABEL_87;
  BoostSupportRequestItemListViewManager__CreateList(
    (BoostSupportRequestItemListViewManager_o *)Instance,
    v26,
    recommendedBoostIds,
    v73->fields.mUsrItemEntityList,
    v61);
  itemListViewManager = v73->fields.itemListViewManager;
  v66 = (BoostSupportRequestItemListViewManager_CallbackFunc_o *)sub_B70764(BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
  BoostSupportRequestItemListViewManager_CallbackFunc___ctor(
    v66,
    (Il2CppObject *)v73,
    Method_BoostSupportRequestMenu_OnSelectItem__,
    0LL);
  if ( !itemListViewManager )
    goto LABEL_87;
  BoostSupportRequestItemListViewManager__SetCallBack(itemListViewManager, v66, v67);
  Instance = (EventItemComponent_o *)v73->fields.setupConfirmSprite;
  if ( !Instance )
    goto LABEL_87;
  if ( v73->fields.isBoostItemUseConfirm )
    v68 = &StringLiteral_17262/*"btn_on"*/;
  else
    v68 = &StringLiteral_17261/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v68, 0LL);
  if ( !isRetryBattle )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
  }
  Instance = (EventItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v73, 0LL);
  if ( !Instance )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v73->fields.state = 1;
  v69 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v69, (Il2CppObject *)v73, Method_BoostSupportRequestMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)v73, v69, 0, 0LL);
}


BoostEntity_array *__fastcall BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
        BoostSupportRequestMenu_o *this,
        BoostEntity_array *boostEntityList,
        System_Int32_array *recommendedBoostIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  unsigned __int64 v11; // x24
  signed __int64 v12; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x23
  const MethodInfo_3025688 *v14; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x0
  __int64 v16; // x0
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v17; // x0

  if ( (byte_4353E67 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B70694(&Method_System_Collections_Generic_List_BoostEntity__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BoostEntity__get_Count__);
    sub_B70694(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_4353E67 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !boostEntityList )
    goto LABEL_25;
  if ( recommendedBoostIds && *(_QWORD *)&recommendedBoostIds->max_length )
  {
    v10 = *(_QWORD *)&boostEntityList->max_length;
    if ( (int)v10 >= 1 )
    {
      v11 = 0LL;
      v12 = (int)v10;
      while ( 1 )
      {
        v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)boostEntityList->m_Items[v11];
        if ( v13 )
        {
          v8 = System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
                 v13->fields.missionTargetId,
                 (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( v8 )
          {
            if ( !v7 )
              goto LABEL_25;
            v14 = (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BoostEntity__Add__;
            v15 = v7;
          }
          else
          {
            if ( !v6 )
              goto LABEL_25;
            v14 = (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BoostEntity__Add__;
            v15 = v6;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v15, v13, v14);
        }
        if ( (__int64)++v11 >= v12 )
          break;
        if ( v11 >= boostEntityList->max_length )
        {
          v16 = sub_B70798(v8);
          sub_B70738(v16, 0LL);
        }
      }
    }
    if ( v7 )
    {
      if ( v7->fields._size >= 1 )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
          (System_Collections_Generic_IEnumerable_T__o *)v6,
          (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
        v17 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7;
        return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      v17,
                                      (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
      }
      if ( v6 )
      {
        v17 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6;
        return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      v17,
                                      (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
      }
    }
LABEL_25:
    sub_B7076C(v8, v9);
  }
  return boostEntityList;
}


void __fastcall BoostSupportRequestMenu__add_callbackFunc(
        BoostSupportRequestMenu_o *this,
        BoostFunctionUtility_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct BoostFunctionUtility_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoostSupportRequestMenu_o *v11; // x0
  BoostFunctionUtility_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4353E64 & 1) == 0 )
  {
    sub_B70694(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_4353E64 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (BoostFunctionUtility_CallbackFunc_c *)v8->klass != BoostFunctionUtility_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
  BoostSupportRequestMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestMenu__get_closeBtnObject(
        BoostSupportRequestMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4353E6E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353E6E = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL);
  result = 0LL;
  if ( !v4 )
    return this->fields.closeButton;
  return result;
}


void __fastcall BoostSupportRequestMenu__remove_callbackFunc(
        BoostSupportRequestMenu_o *this,
        BoostFunctionUtility_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct BoostFunctionUtility_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoostSupportRequestMenu_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_4353E65 & 1) == 0 )
  {
    sub_B70694(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_4353E65 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (BoostFunctionUtility_CallbackFunc_c *)v8->klass != BoostFunctionUtility_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
  BoostSupportRequestMenu__GetItem(v11, v12, v13);
}


void __fastcall BoostSupportRequestMenu___c__DisplayClass26_0___ctor(
        BoostSupportRequestMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BoostSupportRequestMenu___c__DisplayClass26_0___Callback_b__0(
        BoostSupportRequestMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct BoostSupportRequestMenu_o *_4__this; // x0
  struct BoostFunctionUtility_CallbackFunc_o **p_callbackFunc; // x0
  BoostFunctionUtility_CallbackFunc_o *v5; // x20
  BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1
  const MethodInfo *v7; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = &_4__this->fields.callbackFunc;
  v5 = callbackFunc;
  *p_callbackFunc = 0LL;
  sub_B70630(p_callbackFunc);
  if ( callbackFunc )
    BoostFunctionUtility_CallbackFunc__Invoke(v5, this->fields.result, this->fields.index, v7);
}