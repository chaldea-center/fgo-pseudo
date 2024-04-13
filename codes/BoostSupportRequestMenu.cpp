void __fastcall BoostSupportRequestMenu___cctor(const MethodInfo *method)
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
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42EA54E & 1) == 0 )
  {
    sub_B5D5C4(&BoostSupportRequestMenu_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_11188/*"RECOMMENDED_ICON"*/, v8, v9, v10);
    byte_42EA54E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoostSupportRequestMenu_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_11188/*"RECOMMENDED_ICON"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_11188/*"RECOMMENDED_ICON"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall BoostSupportRequestMenu___ctor(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA54D & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA54D = 1;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  _BOOL4 isBoostItemUseConfirm; // w19
  System_Action_o *v26; // x19

  if ( (byte_42EA546 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, index, method);
    sub_B5D5C4(&OptionManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__, v10, v11, v12);
    sub_B5D5C4(&BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo, v13, v14, v15);
    byte_42EA546 = 1;
  }
  v16 = sub_B5D694(BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo);
  BoostSupportRequestMenu___c__DisplayClass26_0___ctor((BoostSupportRequestMenu___c__DisplayClass26_0_o *)v16, 0LL);
  if ( !v16 )
    sub_B5D69C(v17, v18);
  *(_QWORD *)(v16 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_DWORD *)(v16 + 24) = result;
  *(_DWORD *)(v16 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v26 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v16,
    Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__,
    0LL);
  OptionManager__SaveData(v26, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EA547 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BoostSupportRequestMenu_EndClose__, v10, v11, v12);
    byte_42EA547 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_B5D69C(0LL, index);
  return BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, index, 0LL);
}


void __fastcall BoostSupportRequestMenu__Init(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_B5D69C(0LL, method);
  ListViewManager__DestroyList(itemListViewManager, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall BoostSupportRequestMenu__OnClickCancel(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x3

  if ( (byte_42EA548 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA548 = 1;
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
    BoostSupportRequestMenu__Callback(this, 0, -1, v5);
  }
}


void __fastcall BoostSupportRequestMenu__OnClickDecide(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x3

  if ( (byte_42EA549 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA549 = 1;
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
    BoostSupportRequestMenu__Callback(this, 1, -1, v5);
  }
}


void __fastcall BoostSupportRequestMenu__OnClickSetupConfirm(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  _BOOL4 isBoostItemUseConfirm; // w8
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v14; // x8

  if ( (byte_42EA54B & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v8, v9, v10);
    byte_42EA54B = 1;
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
      sub_B5D69C(0LL, v11);
    if ( isBoostItemUseConfirm )
      v14 = &StringLiteral_17214/*"btn_off"*/;
    else
      v14 = &StringLiteral_17215/*"btn_on"*/;
    UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v14, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestMenu__OnSelectItem(
        BoostSupportRequestMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x0
  BoostSupportRequsetItemListViewItem_o *Item; // x20
  BoostEntity_o *boostEntity; // x20
  CommonUI_o *v19; // x21
  BoostFunctionUtility_CallbackFunc_o *v20; // x22
  const MethodInfo *v21; // x3
  int32_t id; // w2
  BoostSupportRequestMenu_o *v23; // x0
  int32_t v24; // w1
  struct BoostEntity_o *v25; // x8

  if ( (byte_42EA54A & 1) == 0 )
  {
    sub_B5D5C4(&Method_BoostSupportRequestMenu_Callback__, kind, n, method);
    sub_B5D5C4(&BoostFunctionUtility_CallbackFunc_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&SoundManager_TypeInfo, v13, v14, v15);
    byte_42EA54A = 1;
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
      Item = BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, n, 0LL);
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
          itemListViewManager = (BoostSupportRequestItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Item )
          {
            boostEntity = Item->fields.boostEntity;
            v19 = (CommonUI_o *)itemListViewManager;
            v20 = (BoostFunctionUtility_CallbackFunc_o *)sub_B5D694(BoostFunctionUtility_CallbackFunc_TypeInfo);
            BoostFunctionUtility_CallbackFunc___ctor(
              v20,
              (Il2CppObject *)this,
              Method_BoostSupportRequestMenu_Callback__,
              0LL);
            if ( v19 )
            {
              CommonUI__OpenBoostSupportRequestReconfirmationMenu(v19, boostEntity, v20, 0LL);
              return;
            }
          }
LABEL_35:
          sub_B5D69C(itemListViewManager, *(_QWORD *)&kind);
        }
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(8, 0LL);
        if ( !Item )
          goto LABEL_35;
        v25 = Item->fields.boostEntity;
        if ( v25 )
          id = v25->fields.id;
        else
          id = 0;
        v24 = 2;
        v23 = this;
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
        v23 = this;
        v24 = 0;
      }
      BoostSupportRequestMenu__Callback(v23, v24, id, v21);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  UILabel_o *titleLabel; // x21
  EventItemComponent_o *Instance; // x0
  __int64 v111; // x1
  UILabel_o *titleDetailLabel; // x21
  UILabel_o *useConfirmOptionLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v117; // x21
  BoostSupportRequestMenu_c *v118; // x0
  System_Int32_array *ScriptIntArrayParam; // x19
  BoostSupportRequestMenu_o *SupportRequestAllowed; // x0
  const MethodInfo *v121; // x3
  BoostEntity_array *v122; // x22
  System_Collections_Generic_List_int__o *v123; // x23
  int max_length; // w8
  int v125; // w19
  BoostEntity_array *v126; // x28
  BoostEntity_o *v127; // x22
  int baseObject; // w8
  EventItemComponent_o *v129; // x24
  unsigned int v130; // w26
  __int64 v131; // x22
  struct UserItemEntity_array *v132; // x0
  struct UserItemEntity_array **p_mUsrItemEntityList; // x24
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  unsigned int v140; // w28
  struct UserItemEntity_array *v141; // x27
  WebViewManager_o *v142; // x0
  __int64 v143; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int64_t UserId; // x0
  __int64 v146; // x1
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v148; // x1
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  System_Int32_array **v155; // x25
  Il2CppClass **v156; // x0
  struct EventItemComponent_array *eventItemIconList; // x8
  struct EventItemComponent_array *v158; // x8
  struct EventItemComponent_array *v159; // x8
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x21
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v161; // x22
  __int64 *v162; // x8
  System_Action_o *v163; // x20
  __int64 v164; // x0
  __int64 v165; // x0
  __int64 v166; // x0
  BoostSupportRequestMenu_o *v167; // [xsp+10h] [xbp-A0h]
  System_Int32_array *recommendedBoostIds; // [xsp+18h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_int__o v169; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v170; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42EA544 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, questId, questPhase, callback);
    sub_B5D5C4(&Method_BoostSupportRequestMenu_EndOpen__, v13, v14, v15);
    sub_B5D5C4(&Method_BoostSupportRequestMenu_OnSelectItem__, v16, v17, v18);
    sub_B5D5C4(&BoostSupportRequestMenu_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v28, v29, v30);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v46, v47, v48);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v49, v50, v51);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v52, v53, v54);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v55, v56, v57);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v58, v59, v60);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v61, v62, v63);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v64, v65, v66);
    sub_B5D5C4(&NetworkManager_TypeInfo, v67, v68, v69);
    sub_B5D5C4(&OptionManager_TypeInfo, v70, v71, v72);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v73, v74, v75);
    sub_B5D5C4(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v76, v77, v78);
    sub_B5D5C4(&SingletonTemplate_BoostFunctionUtility__TypeInfo, v79, v80, v81);
    sub_B5D5C4(&SoundManager_TypeInfo, v82, v83, v84);
    sub_B5D5C4(&UserItemEntity___TypeInfo, v85, v86, v87);
    sub_B5D5C4(&StringLiteral_2652/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/, v88, v89, v90);
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, v91, v92, v93);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v94, v95, v96);
    sub_B5D5C4(&StringLiteral_2658/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, v97, v98, v99);
    sub_B5D5C4(&StringLiteral_2651/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, v100, v101, v102);
    sub_B5D5C4(&StringLiteral_2654/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, v103, v104, v105);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v106, v107, v108);
    byte_42EA544 = 1;
  }
  memset(&v170, 0, sizeof(v170));
  this->fields.callbackFunc = callback;
  sub_B5D560(
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
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2658/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_87;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2652/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_87;
  UILabel__set_text(titleDetailLabel, (System_String_o *)Instance, 0LL);
  useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2654/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, 0LL);
  if ( !useConfirmOptionLabel )
    goto LABEL_87;
  UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Instance, 0LL);
  decideLabel = this->fields.decideLabel;
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2651/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_87;
  UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
  cancelLabel = this->fields.cancelLabel;
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_87;
  UILabel__set_text(cancelLabel, (System_String_o *)Instance, 0LL);
  Instance = (EventItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  Instance = (EventItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_87;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( Entity )
  {
    v117 = Entity;
    v118 = BoostSupportRequestMenu_TypeInfo;
    if ( (BYTE3(BoostSupportRequestMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoostSupportRequestMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostSupportRequestMenu_TypeInfo);
      v118 = BoostSupportRequestMenu_TypeInfo;
    }
    ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                            v117,
                            v118->static_fields->RECOMMENDED_ICON,
                            0LL,
                            0LL);
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
  Instance = (EventItemComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  SupportRequestAllowed = (BoostSupportRequestMenu_o *)BoostFunctionUtility__GetSupportRequestAllowed(
                                                         (BoostFunctionUtility_o *)Instance,
                                                         questId,
                                                         questPhase,
                                                         0LL);
  recommendedBoostIds = ScriptIntArrayParam;
  v122 = BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
           SupportRequestAllowed,
           (BoostEntity_array *)SupportRequestAllowed,
           ScriptIntArrayParam,
           v121);
  v123 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v123,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !v122 )
    goto LABEL_87;
  max_length = v122->max_length;
  if ( max_length >= 1 )
  {
    v125 = 0;
    while ( 1 )
    {
      if ( v125 >= (unsigned int)max_length )
        goto LABEL_88;
      v126 = v122;
      v127 = v122->m_Items[v125];
      if ( !v127 )
        goto LABEL_87;
      if ( v127->fields.commonConsumeId )
      {
        Instance = (EventItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_87;
        Instance = (EventItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !Instance )
          goto LABEL_87;
        Instance = (EventItemComponent_o *)CommonConsumeMaster__GetIdEntityList(
                                             (CommonConsumeMaster_o *)Instance,
                                             v127->fields.commonConsumeId,
                                             0LL);
        if ( !Instance )
          goto LABEL_87;
        baseObject = (int)Instance->fields.baseObject;
        v129 = Instance;
        if ( baseObject >= 1 )
          break;
      }
LABEL_44:
      max_length = v126->max_length;
      ++v125;
      v122 = v126;
      if ( v125 >= max_length )
        goto LABEL_45;
    }
    v130 = 0;
    while ( v130 < baseObject )
    {
      v131 = *((_QWORD *)&v129->fields.baseSp + (int)v130);
      if ( !v131 )
        goto LABEL_87;
      if ( *(_DWORD *)(v131 + 24) == 1 )
      {
        if ( !v123 )
          goto LABEL_87;
        Instance = (EventItemComponent_o *)System_Collections_Generic_List_int___Contains(
                                             v123,
                                             *(_DWORD *)(v131 + 28),
                                             (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v123,
            *(_DWORD *)(v131 + 28),
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      baseObject = (int)v129->fields.baseObject;
      if ( (int)++v130 >= baseObject )
        goto LABEL_44;
    }
LABEL_88:
    v164 = sub_B5D6C8(Instance);
    sub_B5D668(v164, 0LL);
  }
LABEL_45:
  if ( !v123 )
    goto LABEL_87;
  Instance = (EventItemComponent_o *)this->fields.eventItemsInfoBase;
  if ( !Instance )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v123->fields._size > 0, 0LL);
  v132 = (struct UserItemEntity_array *)sub_B5D5DC(UserItemEntity___TypeInfo, (unsigned int)v123->fields._size);
  this->fields.mUsrItemEntityList = v132;
  p_mUsrItemEntityList = &this->fields.mUsrItemEntityList;
  v167 = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mUsrItemEntityList,
    (System_Int32_array **)v132,
    v134,
    v135,
    v136,
    v137,
    v138,
    v139);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v169,
    v123,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v170 = v169;
  v140 = 0;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v170,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v141 = *p_mUsrItemEntityList;
    v142 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v142 )
      sub_B5D69C(0LL, v143);
    MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v142,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( v123->fields._size <= v140 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(UserId, v146);
    EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                         MasterData_WarQuestSelectionMaster,
                         UserId,
                         v123->fields._items->m_Items[v140 + 1],
                         0LL);
    if ( !v141 )
      sub_B5D69C(EntityDefinitely, v148);
    v155 = (System_Int32_array **)EntityDefinitely;
    if ( EntityDefinitely )
    {
      EntityDefinitely = (UserItemEntity_o *)sub_B5D684(EntityDefinitely, v141->obj.klass->_1.element_class);
      if ( !EntityDefinitely )
      {
        v166 = sub_B5D6BC(0LL);
        sub_B5D668(v166, 0LL);
      }
    }
    if ( v140 >= v141->max_length )
    {
      v165 = sub_B5D6C8(EntityDefinitely);
      sub_B5D668(v165, 0LL);
    }
    v156 = &v141->obj.klass + (int)v140;
    v156[4] = (Il2CppClass *)v155;
    sub_B5D560((BattleServantConfConponent_o *)(v156 + 4), v155, v149, v150, v151, v152, v153, v154);
    ++v140;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v170,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v123->fields._size >= 1 )
  {
    eventItemIconList = v167->fields.eventItemIconList;
    if ( eventItemIconList )
    {
      if ( !eventItemIconList->max_length )
        goto LABEL_88;
      Instance = eventItemIconList->m_Items[0];
      if ( Instance )
      {
        EventItemComponent__Set(Instance, v123->fields._items->m_Items[1], 0LL);
        if ( v123->fields._size < 2 )
          goto LABEL_74;
        v158 = v167->fields.eventItemIconList;
        if ( v158 )
        {
          if ( v158->max_length <= 1 )
            goto LABEL_88;
          Instance = v158->m_Items[1];
          if ( Instance )
          {
            EventItemComponent__Set(Instance, v123->fields._items->m_Items[2], 0LL);
            if ( v123->fields._size < 3 )
              goto LABEL_74;
            v159 = v167->fields.eventItemIconList;
            if ( v159 )
            {
              if ( v159->max_length <= 2 )
                goto LABEL_88;
              Instance = v159->m_Items[2];
              if ( Instance )
              {
                EventItemComponent__Set(Instance, v123->fields._items->m_Items[3], 0LL);
                goto LABEL_74;
              }
            }
          }
        }
      }
    }
LABEL_87:
    sub_B5D69C(Instance, v111);
  }
LABEL_74:
  Instance = (EventItemComponent_o *)v167->fields.itemListViewManager;
  if ( !Instance )
    goto LABEL_87;
  BoostSupportRequestItemListViewManager__CreateList(
    (BoostSupportRequestItemListViewManager_o *)Instance,
    v122,
    recommendedBoostIds,
    v167->fields.mUsrItemEntityList,
    0LL);
  itemListViewManager = v167->fields.itemListViewManager;
  v161 = (BoostSupportRequestItemListViewManager_CallbackFunc_o *)sub_B5D694(BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
  BoostSupportRequestItemListViewManager_CallbackFunc___ctor(
    v161,
    (Il2CppObject *)v167,
    Method_BoostSupportRequestMenu_OnSelectItem__,
    0LL);
  if ( !itemListViewManager )
    goto LABEL_87;
  BoostSupportRequestItemListViewManager__SetCallBack(itemListViewManager, v161, 0LL);
  Instance = (EventItemComponent_o *)v167->fields.setupConfirmSprite;
  if ( !Instance )
    goto LABEL_87;
  if ( v167->fields.isBoostItemUseConfirm )
    v162 = &StringLiteral_17215/*"btn_on"*/;
  else
    v162 = &StringLiteral_17214/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v162, 0LL);
  if ( !isRetryBattle )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
  }
  Instance = (EventItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v167, 0LL);
  if ( !Instance )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v167->fields.state = 1;
  v163 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v163, (Il2CppObject *)v167, Method_BoostSupportRequestMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)v167, v163, 0, 0LL);
}


BoostEntity_array *__fastcall BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
        BoostSupportRequestMenu_o *this,
        BoostEntity_array *boostEntityList,
        System_Int32_array *recommendedBoostIds,
        const MethodInfo *method)
{
  BoostEntity_array *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x22
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x8
  unsigned __int64 v29; // x24
  signed __int64 v30; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x23
  const MethodInfo_3056FC0 *v32; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x0
  __int64 v34; // x0
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v35; // x0

  v5 = boostEntityList;
  if ( (byte_42EA545 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Contains_int___,
      (_DWORD)boostEntityList,
      (_DWORD)recommendedBoostIds,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoostEntity__AddRange__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoostEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoostEntity__get_Count__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_BoostEntity__TypeInfo, v21, v22, v23);
    byte_42EA545 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !v5 )
    goto LABEL_25;
  if ( recommendedBoostIds && *(_QWORD *)&recommendedBoostIds->max_length )
  {
    v28 = *(_QWORD *)&v5->max_length;
    if ( (int)v28 >= 1 )
    {
      v29 = 0LL;
      v30 = (int)v28;
      while ( 1 )
      {
        v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)v5->m_Items[v29];
        if ( v31 )
        {
          v26 = System_Linq_Enumerable__Contains_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
                  v31->fields.missionTargetId,
                  (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
          if ( v26 )
          {
            if ( !v25 )
              goto LABEL_25;
            v32 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BoostEntity__Add__;
            v33 = v25;
          }
          else
          {
            if ( !v24 )
              goto LABEL_25;
            v32 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BoostEntity__Add__;
            v33 = v24;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v33, v31, v32);
        }
        if ( (__int64)++v29 >= v30 )
          break;
        if ( v29 >= v5->max_length )
        {
          v34 = sub_B5D6C8(v26);
          sub_B5D668(v34, 0LL);
        }
      }
    }
    if ( v25 )
    {
      if ( v25->fields._size >= 1 )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v25,
          (System_Collections_Generic_IEnumerable_T__o *)v24,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
        v35 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25;
        return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      v35,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
      }
      if ( v24 )
      {
        v35 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24;
        return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      v35,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
      }
    }
LABEL_25:
    sub_B5D69C(v26, v27);
  }
  return v5;
}


void __fastcall BoostSupportRequestMenu__add_callbackFunc(
        BoostSupportRequestMenu_o *this,
        BoostFunctionUtility_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct BoostFunctionUtility_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  BoostSupportRequestMenu_o *v12; // x0
  BoostFunctionUtility_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EA542 & 1) == 0 )
  {
    sub_B5D5C4(&BoostFunctionUtility_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA542 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (BoostFunctionUtility_CallbackFunc_c *)v9->klass != BoostFunctionUtility_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (BoostSupportRequestMenu_o *)sub_B5D990(v9);
  BoostSupportRequestMenu__remove_callbackFunc(v12, v13, v14);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestMenu__get_closeBtnObject(
        BoostSupportRequestMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *closeButton; // x20
  bool v6; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_42EA54C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA54C = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
    return this->fields.closeButton;
  return result;
}


void __fastcall BoostSupportRequestMenu__remove_callbackFunc(
        BoostSupportRequestMenu_o *this,
        BoostFunctionUtility_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct BoostFunctionUtility_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  BoostSupportRequestMenu_o *v12; // x0
  int32_t v13; // w1
  const MethodInfo *v14; // x2

  if ( (byte_42EA543 & 1) == 0 )
  {
    sub_B5D5C4(&BoostFunctionUtility_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA543 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (BoostFunctionUtility_CallbackFunc_c *)v9->klass != BoostFunctionUtility_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (BoostSupportRequestMenu_o *)sub_B5D990(v9);
  BoostSupportRequestMenu__GetItem(v12, v13, v14);
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
    sub_B5D69C(0LL, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = &_4__this->fields.callbackFunc;
  v5 = callbackFunc;
  *p_callbackFunc = 0LL;
  sub_B5D560(p_callbackFunc);
  if ( callbackFunc )
    BoostFunctionUtility_CallbackFunc__Invoke(v5, this->fields.result, this->fields.index, v7);
}