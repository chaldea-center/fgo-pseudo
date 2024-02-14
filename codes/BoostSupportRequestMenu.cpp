void __fastcall BoostSupportRequestMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4214C78 & 1) == 0 )
  {
    sub_B0D8A4(&BoostSupportRequestMenu_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11082/*"RECOMMENDED_ICON"*/, v8);
    byte_4214C78 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoostSupportRequestMenu_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_11082/*"RECOMMENDED_ICON"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_11082/*"RECOMMENDED_ICON"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall BoostSupportRequestMenu___ctor(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4214C77 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4214C77 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall BoostSupportRequestMenu__Awake(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestMenu__Callback(
        BoostSupportRequestMenu_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  _BOOL4 isBoostItemUseConfirm; // w19
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_o *v21; // x19

  if ( (byte_4214C70 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&OptionManager_TypeInfo, v7);
    sub_B0D8A4(&Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__, v8);
    sub_B0D8A4(&BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo, v9);
    byte_4214C70 = 1;
  }
  v10 = sub_B0D974(BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&index);
  BoostSupportRequestMenu___c__DisplayClass26_0___ctor((BoostSupportRequestMenu___c__DisplayClass26_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  *(_QWORD *)(v10 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v10 + 24) = result;
  *(_DWORD *)(v10 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v21 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v10,
    Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__,
    0LL);
  OptionManager__SaveData(v21, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20

  if ( (byte_4214C71 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_BoostSupportRequestMenu_EndClose__, v10);
    byte_4214C71 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_BoostSupportRequestMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B0D840(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_B0D97C(0LL);
  return BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, index, method);
}


void __fastcall BoostSupportRequestMenu__Init(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_B0D97C(0LL);
  ListViewManager__DestroyList(itemListViewManager, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall BoostSupportRequestMenu__OnClickCancel(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4214C72 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4214C72 = 1;
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

  if ( (byte_4214C73 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4214C73 = 1;
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
  __int64 v4; // x1
  _BOOL4 isBoostItemUseConfirm; // w8
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v7; // x8

  if ( (byte_4214C75 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17057/*"btn_on"*/, v3);
    sub_B0D8A4(&StringLiteral_17056/*"btn_off"*/, v4);
    byte_4214C75 = 1;
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
      sub_B0D97C(0LL);
    if ( isBoostItemUseConfirm )
      v7 = &StringLiteral_17056/*"btn_off"*/;
    else
      v7 = &StringLiteral_17057/*"btn_on"*/;
    UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v7, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestMenu__OnSelectItem(
        BoostSupportRequestMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x0
  BoostSupportRequsetItemListViewItem_o *Item; // x20
  CommonUI_o *v12; // x21
  BoostEntity_o *BoostEntity; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  BoostFunctionUtility_CallbackFunc_o *v16; // x22
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  BoostSupportRequestMenu_o *v19; // x0
  int32_t v20; // w1
  int32_t ItemId; // w0

  if ( (byte_4214C74 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BoostSupportRequestMenu_Callback__, *(_QWORD *)&kind);
    sub_B0D8A4(&BoostFunctionUtility_CallbackFunc_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&SoundManager_TypeInfo, v9);
    byte_4214C74 = 1;
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
        goto LABEL_32;
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
          itemListViewManager = (BoostSupportRequestItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Item )
          {
            v12 = (CommonUI_o *)itemListViewManager;
            BoostEntity = BoostSupportRequsetItemListViewItem__get_BoostEntity(Item, 0LL);
            v16 = (BoostFunctionUtility_CallbackFunc_o *)sub_B0D974(
                                                           BoostFunctionUtility_CallbackFunc_TypeInfo,
                                                           v14,
                                                           v15);
            BoostFunctionUtility_CallbackFunc___ctor(
              v16,
              (Il2CppObject *)this,
              Method_BoostSupportRequestMenu_Callback__,
              0LL);
            if ( v12 )
            {
              CommonUI__OpenBoostSupportRequestReconfirmationMenu(v12, BoostEntity, v16, 0LL);
              return;
            }
          }
LABEL_32:
          sub_B0D97C(itemListViewManager);
        }
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(8, 0LL);
        if ( !Item )
          goto LABEL_32;
        ItemId = BoostSupportRequsetItemListViewItem__get_ItemId(Item, 0LL);
        v20 = 2;
        v18 = ItemId;
        v19 = this;
      }
      else
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(1, 0LL);
        v18 = -1;
        v19 = this;
        v20 = 0;
      }
      BoostSupportRequestMenu__Callback(v19, v20, v18, v17);
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  UILabel_o *titleLabel; // x21
  EventItemComponent_o *Instance; // x0
  UILabel_o *titleDetailLabel; // x21
  UILabel_o *useConfirmOptionLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v52; // x21
  BoostSupportRequestMenu_c *v53; // x0
  System_Int32_array *ScriptIntArrayParam; // x19
  const MethodInfo *v55; // x3
  BoostSupportRequestMenu_o *SupportRequestAllowed; // x0
  const MethodInfo *v57; // x3
  BoostEntity_array *v58; // x22
  __int64 v59; // x1
  __int64 v60; // x2
  System_Collections_Generic_List_int__o *v61; // x23
  int max_length; // w8
  int v63; // w19
  BoostEntity_array *v64; // x28
  BoostEntity_o *v65; // x22
  int baseObject; // w8
  EventItemComponent_o *v67; // x24
  unsigned int v68; // w26
  __int64 v69; // x22
  struct UserItemEntity_array *v70; // x0
  struct UserItemEntity_array **p_mUsrItemEntityList; // x24
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  unsigned int v78; // w28
  struct UserItemEntity_array *v79; // x27
  WebViewManager_o *v80; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int64_t UserId; // x0
  UserItemEntity_o *EntityDefinitely; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x25
  Il2CppClass **v91; // x0
  const MethodInfo *v92; // x4
  struct EventItemComponent_array *eventItemIconList; // x8
  struct EventItemComponent_array *v94; // x8
  struct EventItemComponent_array *v95; // x8
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x21
  __int64 v97; // x1
  __int64 v98; // x2
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v99; // x22
  const MethodInfo *v100; // x2
  __int64 *v101; // x8
  __int64 v102; // x1
  __int64 v103; // x2
  System_Action_o *v104; // x20
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // x0
  BoostSupportRequestMenu_o *v108; // [xsp+10h] [xbp-A0h]
  System_Int32_array *recommendedBoostIds; // [xsp+18h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_int__o v110; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v111; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4214C6E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_BoostSupportRequestMenu_EndOpen__, v13);
    sub_B0D8A4(&Method_BoostSupportRequestMenu_OnSelectItem__, v14);
    sub_B0D8A4(&BoostSupportRequestMenu_TypeInfo, v15);
    sub_B0D8A4(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v28);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v29);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v30);
    sub_B0D8A4(&NetworkManager_TypeInfo, v31);
    sub_B0D8A4(&OptionManager_TypeInfo, v32);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    sub_B0D8A4(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v34);
    sub_B0D8A4(&SingletonTemplate_BoostFunctionUtility__TypeInfo, v35);
    sub_B0D8A4(&SoundManager_TypeInfo, v36);
    sub_B0D8A4(&UserItemEntity___TypeInfo, v37);
    sub_B0D8A4(&StringLiteral_2609/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/, v38);
    sub_B0D8A4(&StringLiteral_17057/*"btn_on"*/, v39);
    sub_B0D8A4(&StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, v40);
    sub_B0D8A4(&StringLiteral_2615/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, v41);
    sub_B0D8A4(&StringLiteral_2608/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, v42);
    sub_B0D8A4(&StringLiteral_2611/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, v43);
    sub_B0D8A4(&StringLiteral_17056/*"btn_off"*/, v44);
    byte_4214C6E = 1;
  }
  memset(&v111, 0, sizeof(v111));
  this->fields.callbackFunc = callback;
  sub_B0D840(
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
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2615/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_87;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2609/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_87;
  UILabel__set_text(titleDetailLabel, (System_String_o *)Instance, 0LL);
  useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2611/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, 0LL);
  if ( !useConfirmOptionLabel )
    goto LABEL_87;
  UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Instance, 0LL);
  decideLabel = this->fields.decideLabel;
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2608/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_87;
  UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
  cancelLabel = this->fields.cancelLabel;
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_87;
  UILabel__set_text(cancelLabel, (System_String_o *)Instance, 0LL);
  Instance = (EventItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  Instance = (EventItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_87;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( Entity )
  {
    v52 = Entity;
    v53 = BoostSupportRequestMenu_TypeInfo;
    if ( (BYTE3(BoostSupportRequestMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoostSupportRequestMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostSupportRequestMenu_TypeInfo);
      v53 = BoostSupportRequestMenu_TypeInfo;
    }
    ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(v52, v53->static_fields->RECOMMENDED_ICON, 0LL, 0LL);
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
  Instance = (EventItemComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  SupportRequestAllowed = (BoostSupportRequestMenu_o *)BoostFunctionUtility__GetSupportRequestAllowed(
                                                         (BoostFunctionUtility_o *)Instance,
                                                         questId,
                                                         questPhase,
                                                         v55);
  recommendedBoostIds = ScriptIntArrayParam;
  v58 = BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
          SupportRequestAllowed,
          (BoostEntity_array *)SupportRequestAllowed,
          ScriptIntArrayParam,
          v57);
  v61 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v59, v60);
  System_Collections_Generic_List_int____ctor(
    v61,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v58 )
    goto LABEL_87;
  max_length = v58->max_length;
  if ( max_length >= 1 )
  {
    v63 = 0;
    while ( 1 )
    {
      if ( v63 >= (unsigned int)max_length )
        goto LABEL_88;
      v64 = v58;
      v65 = v58->m_Items[v63];
      if ( !v65 )
        goto LABEL_87;
      if ( v65->fields.commonConsumeId )
      {
        Instance = (EventItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_87;
        Instance = (EventItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !Instance )
          goto LABEL_87;
        Instance = (EventItemComponent_o *)CommonConsumeMaster__GetIdEntityList(
                                             (CommonConsumeMaster_o *)Instance,
                                             v65->fields.commonConsumeId,
                                             0LL);
        if ( !Instance )
          goto LABEL_87;
        baseObject = (int)Instance->fields.baseObject;
        v67 = Instance;
        if ( baseObject >= 1 )
          break;
      }
LABEL_44:
      max_length = v64->max_length;
      ++v63;
      v58 = v64;
      if ( v63 >= max_length )
        goto LABEL_45;
    }
    v68 = 0;
    while ( v68 < baseObject )
    {
      v69 = *((_QWORD *)&v67->fields.baseSp + (int)v68);
      if ( !v69 )
        goto LABEL_87;
      if ( *(_DWORD *)(v69 + 24) == 1 )
      {
        if ( !v61 )
          goto LABEL_87;
        Instance = (EventItemComponent_o *)System_Collections_Generic_List_int___Contains(
                                             v61,
                                             *(_DWORD *)(v69 + 28),
                                             (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v61,
            *(_DWORD *)(v69 + 28),
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      baseObject = (int)v67->fields.baseObject;
      if ( (int)++v68 >= baseObject )
        goto LABEL_44;
    }
LABEL_88:
    v105 = sub_B0D9A8(Instance);
    sub_B0D948(v105, 0LL);
  }
LABEL_45:
  if ( !v61 )
    goto LABEL_87;
  Instance = (EventItemComponent_o *)this->fields.eventItemsInfoBase;
  if ( !Instance )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v61->fields._size > 0, 0LL);
  v70 = (struct UserItemEntity_array *)sub_B0D8BC(UserItemEntity___TypeInfo, (unsigned int)v61->fields._size);
  this->fields.mUsrItemEntityList = v70;
  p_mUsrItemEntityList = &this->fields.mUsrItemEntityList;
  v108 = this;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mUsrItemEntityList,
    (System_Int32_array **)v70,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v110,
    v61,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v111 = v110;
  v78 = 0;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v111,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v79 = *p_mUsrItemEntityList;
    v80 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v80 )
      sub_B0D97C(0LL);
    MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v80,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( v61->fields._size <= v78 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B0D97C(UserId);
    EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                         MasterData_WarQuestSelectionMaster,
                         UserId,
                         v61->fields._items->m_Items[v78 + 1],
                         0LL);
    if ( !v79 )
      sub_B0D97C(EntityDefinitely);
    v90 = (System_Int32_array **)EntityDefinitely;
    if ( EntityDefinitely )
    {
      EntityDefinitely = (UserItemEntity_o *)sub_B0D964(EntityDefinitely, v79->obj.klass->_1.element_class);
      if ( !EntityDefinitely )
      {
        v107 = sub_B0D99C(0LL);
        sub_B0D948(v107, 0LL);
      }
    }
    if ( v78 >= v79->max_length )
    {
      v106 = sub_B0D9A8(EntityDefinitely);
      sub_B0D948(v106, 0LL);
    }
    v91 = &v79->obj.klass + (int)v78;
    v91[4] = (Il2CppClass *)v90;
    sub_B0D840((BattleServantConfConponent_o *)(v91 + 4), v90, v84, v85, v86, v87, v88, v89);
    ++v78;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v111,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v61->fields._size >= 1 )
  {
    eventItemIconList = v108->fields.eventItemIconList;
    if ( eventItemIconList )
    {
      if ( !eventItemIconList->max_length )
        goto LABEL_88;
      Instance = eventItemIconList->m_Items[0];
      if ( Instance )
      {
        EventItemComponent__Set(Instance, v61->fields._items->m_Items[1], 0LL);
        if ( v61->fields._size < 2 )
          goto LABEL_74;
        v94 = v108->fields.eventItemIconList;
        if ( v94 )
        {
          if ( v94->max_length <= 1 )
            goto LABEL_88;
          Instance = v94->m_Items[1];
          if ( Instance )
          {
            EventItemComponent__Set(Instance, v61->fields._items->m_Items[2], 0LL);
            if ( v61->fields._size < 3 )
              goto LABEL_74;
            v95 = v108->fields.eventItemIconList;
            if ( v95 )
            {
              if ( v95->max_length <= 2 )
                goto LABEL_88;
              Instance = v95->m_Items[2];
              if ( Instance )
              {
                EventItemComponent__Set(Instance, v61->fields._items->m_Items[3], 0LL);
                goto LABEL_74;
              }
            }
          }
        }
      }
    }
LABEL_87:
    sub_B0D97C(Instance);
  }
LABEL_74:
  Instance = (EventItemComponent_o *)v108->fields.itemListViewManager;
  if ( !Instance )
    goto LABEL_87;
  BoostSupportRequestItemListViewManager__CreateList(
    (BoostSupportRequestItemListViewManager_o *)Instance,
    v58,
    recommendedBoostIds,
    v108->fields.mUsrItemEntityList,
    v92);
  itemListViewManager = v108->fields.itemListViewManager;
  v99 = (BoostSupportRequestItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                   BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo,
                                                                   v97,
                                                                   v98);
  BoostSupportRequestItemListViewManager_CallbackFunc___ctor(
    v99,
    (Il2CppObject *)v108,
    Method_BoostSupportRequestMenu_OnSelectItem__,
    0LL);
  if ( !itemListViewManager )
    goto LABEL_87;
  BoostSupportRequestItemListViewManager__SetCallBack(itemListViewManager, v99, v100);
  Instance = (EventItemComponent_o *)v108->fields.setupConfirmSprite;
  if ( !Instance )
    goto LABEL_87;
  if ( v108->fields.isBoostItemUseConfirm )
    v101 = &StringLiteral_17057/*"btn_on"*/;
  else
    v101 = &StringLiteral_17056/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v101, 0LL);
  if ( !isRetryBattle )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
  }
  Instance = (EventItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v108, 0LL);
  if ( !Instance )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v108->fields.state = 1;
  v104 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v102, v103);
  System_Action___ctor(v104, (Il2CppObject *)v108, Method_BoostSupportRequestMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)v108, v104, 0, 0LL);
}


BoostEntity_array *__fastcall BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
        BoostSupportRequestMenu_o *this,
        BoostEntity_array *boostEntityList,
        System_Int32_array *recommendedBoostIds,
        const MethodInfo *method)
{
  BoostEntity_array *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  _BOOL8 v16; // x0
  __int64 v17; // x8
  unsigned __int64 v18; // x24
  signed __int64 v19; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x23
  const MethodInfo_2FC56E8 *v21; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x0
  __int64 v23; // x0
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v24; // x0

  v5 = boostEntityList;
  if ( (byte_4214C6F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, boostEntityList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoostEntity__AddRange__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoostEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoostEntity__get_Count__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_BoostEntity__TypeInfo, v11);
    byte_4214C6F = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                                                                  boostEntityList,
                                                                                                  recommendedBoostIds);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !v5 )
    goto LABEL_25;
  if ( recommendedBoostIds && *(_QWORD *)&recommendedBoostIds->max_length )
  {
    v17 = *(_QWORD *)&v5->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = 0LL;
      v19 = (int)v17;
      while ( 1 )
      {
        v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)v5->m_Items[v18];
        if ( v20 )
        {
          v16 = System_Linq_Enumerable__Contains_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
                  v20->fields.missionTargetId,
                  (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( v16 )
          {
            if ( !v15 )
              goto LABEL_25;
            v21 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BoostEntity__Add__;
            v22 = v15;
          }
          else
          {
            if ( !v12 )
              goto LABEL_25;
            v21 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BoostEntity__Add__;
            v22 = v12;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v22, v20, v21);
        }
        if ( (__int64)++v18 >= v19 )
          break;
        if ( v18 >= v5->max_length )
        {
          v23 = sub_B0D9A8(v16);
          sub_B0D948(v23, 0LL);
        }
      }
    }
    if ( v15 )
    {
      if ( v15->fields._size >= 1 )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
          (System_Collections_Generic_IEnumerable_T__o *)v12,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
        v24 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15;
        return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      v24,
                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
      }
      if ( v12 )
      {
        v24 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12;
        return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      v24,
                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
      }
    }
LABEL_25:
    sub_B0D97C(v16);
  }
  return v5;
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

  if ( (byte_4214C6C & 1) == 0 )
  {
    sub_B0D8A4(&BoostFunctionUtility_CallbackFunc_TypeInfo, value);
    byte_4214C6C = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_B0DC70(v8);
  BoostSupportRequestMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestMenu__get_closeBtnObject(
        BoostSupportRequestMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4214C76 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4214C76 = 1;
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

  if ( (byte_4214C6D & 1) == 0 )
  {
    sub_B0D8A4(&BoostFunctionUtility_CallbackFunc_TypeInfo, value);
    byte_4214C6D = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_B0DC70(v8);
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
    sub_B0D97C(0LL);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = &_4__this->fields.callbackFunc;
  v5 = callbackFunc;
  *p_callbackFunc = 0LL;
  sub_B0D840(p_callbackFunc, 0LL);
  if ( callbackFunc )
    BoostFunctionUtility_CallbackFunc__Invoke(v5, this->fields.result, this->fields.index, v7);
}