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

  if ( (byte_40FB189 & 1) == 0 )
  {
    sub_B16FFC(&BoostSupportRequestMenu_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11019/*"RECOMMENDED_ICON"*/, v8);
    byte_40FB189 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoostSupportRequestMenu_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_11019/*"RECOMMENDED_ICON"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_11019/*"RECOMMENDED_ICON"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall BoostSupportRequestMenu___ctor(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FB188 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FB188 = 1;
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  _BOOL4 isBoostItemUseConfirm; // w19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Action_o *v23; // x19

  if ( (byte_40FB181 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&OptionManager_TypeInfo, v8);
    sub_B16FFC(&Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__, v9);
    sub_B16FFC(&BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo, v10);
    byte_40FB181 = 1;
  }
  v11 = sub_B170CC(
          BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo,
          *(_QWORD *)&result,
          *(_QWORD *)&index,
          method,
          v4);
  BoostSupportRequestMenu___c__DisplayClass26_0___ctor((BoostSupportRequestMenu___c__DisplayClass26_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v11 + 24) = result;
  *(_DWORD *)(v11 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v23 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v11,
    Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__,
    0LL);
  OptionManager__SaveData(v23, 0LL);
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
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FB182 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_BoostSupportRequestMenu_EndClose__, v10);
    byte_40FB182 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_BoostSupportRequestMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_B170D4();
  return BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, index, method);
}


void __fastcall BoostSupportRequestMenu__Init(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_B170D4();
  ListViewManager__DestroyList(itemListViewManager, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall BoostSupportRequestMenu__OnClickCancel(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FB183 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB183 = 1;
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

  if ( (byte_40FB184 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB184 = 1;
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

  if ( (byte_40FB186 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16940/*"btn_on"*/, v3);
    sub_B16FFC(&StringLiteral_16939/*"btn_off"*/, v4);
    byte_40FB186 = 1;
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
      sub_B170D4();
    if ( isBoostItemUseConfirm )
      v7 = &StringLiteral_16939/*"btn_off"*/;
    else
      v7 = &StringLiteral_16940/*"btn_on"*/;
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
  WebViewManager_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  BoostEntity_o *boostEntity; // x20
  CommonUI_o *v18; // x21
  BoostFunctionUtility_CallbackFunc_o *v19; // x22
  const MethodInfo *v20; // x3
  int32_t id; // w2
  BoostSupportRequestMenu_o *v22; // x0
  int32_t v23; // w1
  struct BoostEntity_o *v24; // x8

  if ( (byte_40FB185 & 1) == 0 )
  {
    sub_B16FFC(&Method_BoostSupportRequestMenu_Callback__, *(_QWORD *)&kind);
    sub_B16FFC(&BoostFunctionUtility_CallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    byte_40FB185 = 1;
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
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Item )
          {
            boostEntity = Item->fields.boostEntity;
            v18 = (CommonUI_o *)Instance;
            v19 = (BoostFunctionUtility_CallbackFunc_o *)sub_B170CC(
                                                           BoostFunctionUtility_CallbackFunc_TypeInfo,
                                                           v13,
                                                           v14,
                                                           v15,
                                                           v16);
            BoostFunctionUtility_CallbackFunc___ctor(
              v19,
              (Il2CppObject *)this,
              Method_BoostSupportRequestMenu_Callback__,
              0LL);
            if ( v18 )
            {
              CommonUI__OpenBoostSupportRequestReconfirmationMenu(v18, boostEntity, v19, 0LL);
              return;
            }
          }
LABEL_35:
          sub_B170D4();
        }
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(8, 0LL);
        if ( !Item )
          goto LABEL_35;
        v24 = Item->fields.boostEntity;
        if ( v24 )
          id = v24->fields.id;
        else
          id = 0;
        v23 = 2;
        v22 = this;
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
        v22 = this;
        v23 = 0;
      }
      BoostSupportRequestMenu__Callback(v22, v23, id, v20);
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
  System_String_o *v46; // x0
  UILabel_o *titleDetailLabel; // x21
  System_String_o *v48; // x0
  UILabel_o *useConfirmOptionLabel; // x21
  System_String_o *v50; // x0
  UILabel_o *decideLabel; // x21
  System_String_o *v52; // x0
  UILabel_o *cancelLabel; // x21
  System_String_o *v54; // x0
  WebViewManager_o *Instance; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v58; // x21
  BoostSupportRequestMenu_c *v59; // x0
  System_Int32_array *ScriptIntArrayParam; // x19
  BoostFunctionUtility_o *v61; // x0
  const MethodInfo *v62; // x3
  BoostSupportRequestMenu_o *SupportRequestAllowed; // x0
  const MethodInfo *v64; // x3
  BoostEntity_array *v65; // x22
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  System_Collections_Generic_List_int__o *v70; // x23
  CommonConsumeEntity_array *IdEntityList; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  int max_length; // w8
  int v75; // w19
  BoostEntity_array *v76; // x28
  BoostEntity_o *v77; // x22
  WebViewManager_o *v78; // x0
  CommonConsumeMaster_o *v79; // x0
  int v80; // w8
  CommonConsumeEntity_array *v81; // x24
  unsigned int v82; // w26
  CommonConsumeEntity_o *v83; // x22
  UnityEngine_GameObject_o *eventItemsInfoBase; // x0
  __int64 v85; // x2
  struct UserItemEntity_array *v86; // x0
  struct UserItemEntity_array **p_mUsrItemEntityList; // x24
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  unsigned int v94; // w28
  struct UserItemEntity_array *v95; // x27
  WebViewManager_o *v96; // x0
  UserItemMaster_o *v97; // x25
  int64_t UserId; // x26
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v100; // x1
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x25
  Il2CppClass **v108; // x0
  const MethodInfo *v109; // x4
  struct EventItemComponent_array *eventItemIconList; // x8
  EventItemComponent_o *v111; // x0
  struct EventItemComponent_array *v112; // x8
  EventItemComponent_o *v113; // x0
  struct EventItemComponent_array *v114; // x8
  EventItemComponent_o *v115; // x0
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x0
  BoostSupportRequestItemListViewManager_o *v117; // x21
  __int64 v118; // x1
  __int64 v119; // x2
  __int64 v120; // x3
  __int64 v121; // x4
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v122; // x22
  const MethodInfo *v123; // x2
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v125; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  System_Action_o *v131; // x20
  BoostSupportRequestMenu_o *v132; // [xsp+10h] [xbp-A0h]
  System_Int32_array *recommendedBoostIds; // [xsp+18h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_int__o v134; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v135; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_40FB17F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_B16FFC(&Method_BoostSupportRequestMenu_EndOpen__, v13);
    sub_B16FFC(&Method_BoostSupportRequestMenu_OnSelectItem__, v14);
    sub_B16FFC(&BoostSupportRequestMenu_TypeInfo, v15);
    sub_B16FFC(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v28);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v29);
    sub_B16FFC(&LocalizationManager_TypeInfo, v30);
    sub_B16FFC(&NetworkManager_TypeInfo, v31);
    sub_B16FFC(&OptionManager_TypeInfo, v32);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    sub_B16FFC(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v34);
    sub_B16FFC(&SingletonTemplate_BoostFunctionUtility__TypeInfo, v35);
    sub_B16FFC(&SoundManager_TypeInfo, v36);
    sub_B16FFC(&UserItemEntity___TypeInfo, v37);
    sub_B16FFC(&StringLiteral_2587/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/, v38);
    sub_B16FFC(&StringLiteral_16940/*"btn_on"*/, v39);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v40);
    sub_B16FFC(&StringLiteral_2593/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, v41);
    sub_B16FFC(&StringLiteral_2586/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, v42);
    sub_B16FFC(&StringLiteral_2589/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, v43);
    sub_B16FFC(&StringLiteral_16939/*"btn_off"*/, v44);
    byte_40FB17F = 1;
  }
  memset(&v135, 0, sizeof(v135));
  this->fields.callbackFunc = callback;
  sub_B16F98(
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
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_2593/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_87;
  UILabel__set_text(titleLabel, v46, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_2587/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_87;
  UILabel__set_text(titleDetailLabel, v48, 0LL);
  useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_2589/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, 0LL);
  if ( !useConfirmOptionLabel )
    goto LABEL_87;
  UILabel__set_text(useConfirmOptionLabel, v50, 0LL);
  decideLabel = this->fields.decideLabel;
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_2586/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_87;
  UILabel__set_text(decideLabel, v52, 0LL);
  cancelLabel = this->fields.cancelLabel;
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_87;
  UILabel__set_text(cancelLabel, v54, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_87;
  Entity = QuestPhaseMaster__GetEntity(MasterData_WarQuestSelectionMaster, questId, questPhase, 0LL);
  if ( Entity )
  {
    v58 = Entity;
    v59 = BoostSupportRequestMenu_TypeInfo;
    if ( (BYTE3(BoostSupportRequestMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoostSupportRequestMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostSupportRequestMenu_TypeInfo);
      v59 = BoostSupportRequestMenu_TypeInfo;
    }
    ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(v58, v59->static_fields->RECOMMENDED_ICON, 0LL, 0LL);
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
  v61 = (BoostFunctionUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
  if ( !v61 )
    goto LABEL_87;
  SupportRequestAllowed = (BoostSupportRequestMenu_o *)BoostFunctionUtility__GetSupportRequestAllowed(
                                                         v61,
                                                         questId,
                                                         questPhase,
                                                         v62);
  recommendedBoostIds = ScriptIntArrayParam;
  v65 = BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
          SupportRequestAllowed,
          (BoostEntity_array *)SupportRequestAllowed,
          ScriptIntArrayParam,
          v64);
  v70 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v66,
                                                    v67,
                                                    v68,
                                                    v69);
  System_Collections_Generic_List_int____ctor(
    v70,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v65 )
    goto LABEL_87;
  max_length = v65->max_length;
  if ( max_length >= 1 )
  {
    v75 = 0;
    while ( 1 )
    {
      if ( v75 >= (unsigned int)max_length )
        goto LABEL_88;
      v76 = v65;
      v77 = v65->m_Items[v75];
      if ( !v77 )
        goto LABEL_87;
      if ( v77->fields.commonConsumeId )
      {
        v78 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v78 )
          goto LABEL_87;
        v79 = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v78,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !v79 )
          goto LABEL_87;
        IdEntityList = CommonConsumeMaster__GetIdEntityList(v79, v77->fields.commonConsumeId, 0LL);
        if ( !IdEntityList )
          goto LABEL_87;
        v80 = IdEntityList->max_length;
        v81 = IdEntityList;
        if ( v80 >= 1 )
          break;
      }
LABEL_44:
      max_length = v76->max_length;
      ++v75;
      v65 = v76;
      if ( v75 >= max_length )
        goto LABEL_45;
    }
    v82 = 0;
    while ( v82 < v80 )
    {
      v83 = v81->m_Items[v82];
      if ( !v83 )
        goto LABEL_87;
      if ( v83->fields.type == 1 )
      {
        if ( !v70 )
          goto LABEL_87;
        IdEntityList = (CommonConsumeEntity_array *)System_Collections_Generic_List_int___Contains(
                                                      v70,
                                                      v83->fields.objectId,
                                                      (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)IdEntityList & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v70,
            v83->fields.objectId,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v80 = v81->max_length;
      if ( (int)++v82 >= v80 )
        goto LABEL_44;
    }
LABEL_88:
    sub_B17100(IdEntityList, v72, v73);
    sub_B170A0();
  }
LABEL_45:
  if ( !v70 )
    goto LABEL_87;
  eventItemsInfoBase = this->fields.eventItemsInfoBase;
  if ( !eventItemsInfoBase )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive(eventItemsInfoBase, v70->fields._size > 0, 0LL);
  v86 = (struct UserItemEntity_array *)sub_B17014(UserItemEntity___TypeInfo, (unsigned int)v70->fields._size, v85);
  this->fields.mUsrItemEntityList = v86;
  p_mUsrItemEntityList = &this->fields.mUsrItemEntityList;
  v132 = this;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mUsrItemEntityList,
    (System_Int32_array **)v86,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v134,
    v70,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v135 = v134;
  v94 = 0;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v135,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v95 = *p_mUsrItemEntityList;
    v96 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v96 )
      sub_B170D4();
    v97 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v96,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( v70->fields._size <= v94 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( !v97 )
      sub_B170D4();
    EntityDefinitely = UserItemMaster__GetEntityDefinitely(v97, UserId, v70->fields._items->m_Items[v94 + 1], 0LL);
    if ( !v95 )
      sub_B170D4();
    v107 = (System_Int32_array **)EntityDefinitely;
    if ( EntityDefinitely )
    {
      EntityDefinitely = (UserItemEntity_o *)sub_B170BC(EntityDefinitely, v95->obj.klass->_1.element_class);
      if ( !EntityDefinitely )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    if ( v94 >= v95->max_length )
    {
      sub_B17100(EntityDefinitely, v100, v101);
      sub_B170A0();
    }
    v108 = &v95->obj.klass + (int)v94;
    v108[4] = (Il2CppClass *)v107;
    sub_B16F98((BattleServantConfConponent_o *)(v108 + 4), v107, v101, v102, v103, v104, v105, v106);
    ++v94;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v135,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v70->fields._size >= 1 )
  {
    eventItemIconList = v132->fields.eventItemIconList;
    if ( eventItemIconList )
    {
      if ( !eventItemIconList->max_length )
        goto LABEL_88;
      v111 = eventItemIconList->m_Items[0];
      if ( v111 )
      {
        EventItemComponent__Set(v111, v70->fields._items->m_Items[1], 0LL);
        if ( v70->fields._size < 2 )
          goto LABEL_74;
        v112 = v132->fields.eventItemIconList;
        if ( v112 )
        {
          if ( v112->max_length <= 1 )
            goto LABEL_88;
          v113 = v112->m_Items[1];
          if ( v113 )
          {
            EventItemComponent__Set(v113, v70->fields._items->m_Items[2], 0LL);
            if ( v70->fields._size < 3 )
              goto LABEL_74;
            v114 = v132->fields.eventItemIconList;
            if ( v114 )
            {
              if ( v114->max_length <= 2 )
                goto LABEL_88;
              v115 = v114->m_Items[2];
              if ( v115 )
              {
                EventItemComponent__Set(v115, v70->fields._items->m_Items[3], 0LL);
                goto LABEL_74;
              }
            }
          }
        }
      }
    }
LABEL_87:
    sub_B170D4();
  }
LABEL_74:
  itemListViewManager = v132->fields.itemListViewManager;
  if ( !itemListViewManager )
    goto LABEL_87;
  BoostSupportRequestItemListViewManager__CreateList(
    itemListViewManager,
    v65,
    recommendedBoostIds,
    v132->fields.mUsrItemEntityList,
    v109);
  v117 = v132->fields.itemListViewManager;
  v122 = (BoostSupportRequestItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                    BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo,
                                                                    v118,
                                                                    v119,
                                                                    v120,
                                                                    v121);
  BoostSupportRequestItemListViewManager_CallbackFunc___ctor(
    v122,
    (Il2CppObject *)v132,
    Method_BoostSupportRequestMenu_OnSelectItem__,
    0LL);
  if ( !v117 )
    goto LABEL_87;
  BoostSupportRequestItemListViewManager__SetCallBack(v117, v122, v123);
  setupConfirmSprite = v132->fields.setupConfirmSprite;
  if ( !setupConfirmSprite )
    goto LABEL_87;
  if ( v132->fields.isBoostItemUseConfirm )
    v125 = &StringLiteral_16940/*"btn_on"*/;
  else
    v125 = &StringLiteral_16939/*"btn_off"*/;
  UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v125, 0LL);
  if ( !isRetryBattle )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v132, 0LL);
  if ( !gameObject )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v132->fields.state = 1;
  v131 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v127, v128, v129, v130);
  System_Action___ctor(v131, (Il2CppObject *)v132, Method_BoostSupportRequestMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)v132, v131, 0, 0LL);
}


BoostEntity_array *__fastcall BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
        BoostSupportRequestMenu_o *this,
        BoostEntity_array *boostEntityList,
        System_Int32_array *recommendedBoostIds,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BoostEntity_array *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x8
  unsigned __int64 v23; // x24
  signed __int64 v24; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x23
  const MethodInfo_2F25CD8 *v26; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x0
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v28; // x0

  v6 = boostEntityList;
  if ( (byte_40FB180 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, boostEntityList);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoostEntity__AddRange__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoostEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoostEntity__get_Count__, v11);
    sub_B16FFC(&System_Collections_Generic_List_BoostEntity__TypeInfo, v12);
    byte_40FB180 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                                                                  boostEntityList,
                                                                                                  recommendedBoostIds,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !v6 )
    goto LABEL_25;
  if ( recommendedBoostIds && *(_QWORD *)&recommendedBoostIds->max_length )
  {
    v22 = *(_QWORD *)&v6->max_length;
    if ( (int)v22 >= 1 )
    {
      v23 = 0LL;
      v24 = (int)v22;
      while ( 1 )
      {
        v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)v6->m_Items[v23];
        if ( v25 )
        {
          if ( System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
                 v25->fields.missionTargetId,
                 (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            if ( !v18 )
              goto LABEL_25;
            v26 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BoostEntity__Add__;
            v27 = v18;
          }
          else
          {
            if ( !v13 )
              goto LABEL_25;
            v26 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BoostEntity__Add__;
            v27 = v13;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v27, v25, v26);
        }
        if ( (__int64)++v23 >= v24 )
          break;
        if ( v23 >= v6->max_length )
        {
          sub_B17100(v19, v20, v21);
          sub_B170A0();
        }
      }
    }
    if ( v18 )
    {
      if ( v18->fields._size >= 1 )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
          (System_Collections_Generic_IEnumerable_T__o *)v13,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
        v28 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18;
        return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      v28,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
      }
      if ( v13 )
      {
        v28 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13;
        return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      v28,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
      }
    }
LABEL_25:
    sub_B170D4();
  }
  return v6;
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

  if ( (byte_40FB17D & 1) == 0 )
  {
    sub_B16FFC(&BoostFunctionUtility_CallbackFunc_TypeInfo, value);
    byte_40FB17D = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_B173C8(v8);
  BoostSupportRequestMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestMenu__get_closeBtnObject(
        BoostSupportRequestMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_40FB187 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB187 = 1;
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

  if ( (byte_40FB17E & 1) == 0 )
  {
    sub_B16FFC(&BoostFunctionUtility_CallbackFunc_TypeInfo, value);
    byte_40FB17E = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_B173C8(v8);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BoostSupportRequestMenu_o *_4__this; // x0
  BattleServantConfConponent_o *p_callbackFunc; // x0
  BoostFunctionUtility_CallbackFunc_o *v11; // x20
  BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1
  const MethodInfo *v13; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&_4__this->fields.callbackFunc;
  v11 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    BoostFunctionUtility_CallbackFunc__Invoke(v11, this->fields.result, this->fields.index, v13);
}