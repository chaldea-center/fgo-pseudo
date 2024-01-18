void __fastcall SupportServantSelectMenu___ctor(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_418B36D & 1) == 0 )
  {
    sub_B2C35C(&BaseMenu_TypeInfo, method);
    byte_418B36D = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__Callback(
        SupportServantSelectMenu_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  SupportServantSelectMenu_CallbackFunc_o *v9; // x22
  struct SupportServantSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(
      p_callbackFunc,
      0LL,
      *(System_String_array ***)&classPos,
      (System_String_array **)entity,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    SupportServantSelectMenu_CallbackFunc__Invoke(v9, result, classPos, entity, 0LL);
  }
}


void __fastcall SupportServantSelectMenu__ClearScrollValue(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_B2C434(0LL, method);
  ListViewManager__ClearScrollBarValue(supportServantListViewManager, 1, 0LL);
}


void __fastcall SupportServantSelectMenu__EndCardFavoriteRequest(
        SupportServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  struct SupportServantListViewManager_o *v6; // x20
  SupportServantListViewManager_CallbackFunc_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_418B36C & 1) == 0 )
  {
    sub_B2C35C(&SupportServantListViewManager_CallbackFunc_TypeInfo, result);
    sub_B2C35C(&Method_SupportServantSelectMenu_OnSelectItem__, v4);
    byte_418B36C = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (SupportServantListViewManager__UpdateItemState(supportServantListViewManager, 1, method),
        v6 = this->fields.supportServantListViewManager,
        v7 = (SupportServantListViewManager_CallbackFunc_o *)sub_B2C42C(SupportServantListViewManager_CallbackFunc_TypeInfo),
        SupportServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
          0LL),
        !v6) )
  {
    sub_B2C434(supportServantListViewManager, result);
  }
  v6->fields.callbackFunc = v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v6->fields.callbackFunc,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  SupportServantListViewManager__SetMode_31683636(v6, 2, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__EndClickTabChoice(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_B2C434(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_31677796(supportServantListViewManager, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__EndClickTabLock(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_B2C434(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_31677796(supportServantListViewManager, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__EndClickTabNormal(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_B2C434(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_31677796(supportServantListViewManager, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__EndClickTabPush(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_B2C434(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_31677796(supportServantListViewManager, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 3, method);
}


void __fastcall SupportServantSelectMenu__EndOpen(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct SupportServantListViewManager_o *supportServantListViewManager; // x19
  SupportServantListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_418B361 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_SupportServantSelectMenu_OnSelectItem__, v3);
    byte_418B361 = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v5 = (SupportServantListViewManager_CallbackFunc_o *)sub_B2C42C(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !supportServantListViewManager )
    sub_B2C434(v6, v7);
  supportServantListViewManager->fields.callbackFunc = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&supportServantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  SupportServantListViewManager__SetMode_31683636(supportServantListViewManager, 2, v14);
}


void __fastcall SupportServantSelectMenu__EndStatusSync(
        SupportServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_requestCallback; // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v9; // x19
  struct SupportServantSelectMenu_RequestCallbackFunc_o *requestCallback; // t1

  requestCallback = this->fields.requestCallback;
  p_requestCallback = (BattleServantConfConponent_o *)&this->fields.requestCallback;
  v9 = requestCallback;
  if ( requestCallback )
  {
    p_requestCallback->klass = 0LL;
    sub_B2C2F8(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    SupportServantSelectMenu_RequestCallbackFunc__Invoke(v9, 1, 0LL);
  }
}


void __fastcall SupportServantSelectMenu__Init(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  UICommonButton_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v8; // x2

  if ( (byte_418B35F & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_12559/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v3);
    byte_418B35F = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    goto LABEL_10;
  SupportServantListViewManager__DestroyList(supportServantListViewManager, method);
  this->fields.state = 0;
  explanationLabel = this->fields.explanationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  supportServantListViewManager = (SupportServantListViewManager_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_12559/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                       0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0LL),
        (normalTabButton = this->fields.normalTabButton) == 0LL) )
  {
LABEL_10:
    sub_B2C434(supportServantListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
  UICommonButton__SetColliderEnable(normalTabButton, enabled, 1, 0LL);
  SupportServantSelectMenu__setModeTabKind(this, 0, v8);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantSelectMenu__ModifyItem(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportServantListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_B2C434(0LL, method);
  SupportServantListViewManager__RequestListObject_31677796(supportServantListViewManager, 4, v2);
}


void __fastcall SupportServantSelectMenu__OnClickCancel(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ListViewManager_o *supportServantListViewManager; // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_418B368 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_SupportServantSelectMenu_endCancelButton__, v4);
    sub_B2C35C(&StringLiteral_4020/*"ClassPos"*/, v5);
    byte_418B368 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4020/*"ClassPos"*/, this->fields.classPos, 0LL);
    supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      sub_B2C434(0LL, v6);
    ListViewManager__SetScrollBarValue(supportServantListViewManager, 0LL);
    v8 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B2C42C(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_endCancelButton__,
      0LL);
    SupportServantSelectMenu__statusRequest(this, v8, v9);
  }
}


void __fastcall SupportServantSelectMenu__OnClickScaleChange(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_418B36A & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B36A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ChangeIconScale(supportServantListViewManager, v3),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewManager__GetScaleButtonSpriteName(
                                                                               supportServantListViewManager,
                                                                               v3),
          !scaleChangeTabSprite) )
    {
      sub_B2C434(supportServantListViewManager, v3);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)supportServantListViewManager, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__OnSelectItem(
        SupportServantSelectMenu_o *this,
        int32_t kind,
        int32_t offset,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x19
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  MethodInfo *v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **Item; // x1
  SupportServantListViewItem_o **v46; // x20
  int32_t tabModeKind; // w9
  int32_t v48; // w0
  struct SupportServantListViewManager_o *v49; // x19
  SupportServantListViewManager_CallbackFunc_o *v50; // x20
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  const MethodInfo *v57; // x2
  SupportServantListViewItem_o *v58; // x8
  const MethodInfo *v59; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v62; // q1
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x4
  int32_t classPos; // w2
  UserServantEntity_o *v66; // x3
  int32_t v67; // w1
  SupportServantListViewItem_o *v68; // x8
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v70; // x21
  __int64 v71; // x22
  __int64 v72; // x23
  ServantEntity_o *v73; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v75; // w22
  int32_t v76; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v77; // x8
  int32_t v78; // w22
  int32_t v79; // w0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v81; // x21
  System_String_o *v82; // x22
  __int64 v83; // x24
  int32_t Rarity; // w26
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x26
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x26
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x25
  int32_t v106; // w0
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x25
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x25
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x20
  System_String_o *v128; // x20
  System_String_o *v129; // x22
  System_String_o *v130; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v132; // x25
  const MethodInfo *v133; // x1
  __int64 v134; // x0
  __int64 v135; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16

  if ( (byte_418B362 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&SupportServantListViewManager_CallbackFunc_TypeInfo, v7);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&object___TypeInfo, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_B2C35C(&Rarity_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B2C35C(&SoundManager_TypeInfo, v22);
    sub_B2C35C(&Method_SupportServantSelectMenu_OnSelectItem__, v23);
    sub_B2C35C(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__, v24);
    sub_B2C35C(&SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo, v25);
    sub_B2C35C(&StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v26);
    sub_B2C35C(&StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v27);
    sub_B2C35C(&StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v28);
    sub_B2C35C(&StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v29);
    byte_418B362 = 1;
  }
  v30 = sub_B2C42C(SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo);
  SupportServantSelectMenu___c__DisplayClass31_0___ctor((SupportServantSelectMenu___c__DisplayClass31_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_121;
  *(_QWORD *)(v30 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)this, v33, v34, v35, v36, v37, v38);
  if ( this->fields.state == 2 )
  {
    if ( (offset & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      supportServantListViewManager = this->fields.supportServantListViewManager;
      if ( !supportServantListViewManager )
        goto LABEL_121;
      Item = (System_Int32_array **)SupportServantListViewManager__GetItem(supportServantListViewManager, offset, v39);
    }
    *(_QWORD *)(v30 + 24) = Item;
    v46 = (SupportServantListViewItem_o **)(v30 + 24);
    sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 24), Item, (System_String_array **)v39, v40, v41, v42, v43, v44);
    if ( kind == 2 )
    {
      tabModeKind = this->fields.tabModeKind;
      if ( tabModeKind == 2 )
      {
        if ( !*v46 )
          goto LABEL_121;
        (*v46)->fields.isSwapChoice ^= 1u;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        v48 = 0;
        goto LABEL_22;
      }
      if ( tabModeKind == 1 )
      {
        if ( !*v46 )
          goto LABEL_121;
        (*v46)->fields.isSwapLock ^= 1u;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        v48 = 11;
        goto LABEL_22;
      }
      v58 = *v46;
      if ( !*v46 )
        goto LABEL_121;
      if ( tabModeKind == 3 )
      {
        if ( !v58->fields.isEnabled )
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
          this->fields.state = 2;
LABEL_23:
          v49 = this->fields.supportServantListViewManager;
          v50 = (SupportServantListViewManager_CallbackFunc_o *)sub_B2C42C(SupportServantListViewManager_CallbackFunc_TypeInfo);
          SupportServantListViewManager_CallbackFunc___ctor(
            v50,
            (Il2CppObject *)this,
            (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
            0LL);
          if ( v49 )
          {
            v49->fields.callbackFunc = v50;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v49->fields.callbackFunc,
              (System_Int32_array **)v50,
              v51,
              v52,
              v53,
              v54,
              v55,
              v56);
            SupportServantListViewManager__SetMode_31683636(v49, 2, v57);
            return;
          }
LABEL_121:
          sub_B2C434(supportServantListViewManager, v32);
        }
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        supportServantListViewManager = (SupportServantListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( !supportServantListViewManager )
          goto LABEL_121;
        dropList = (int64_t)supportServantListViewManager->fields.dropList;
        if ( !dropList )
          goto LABEL_39;
        if ( !*v46 )
          goto LABEL_121;
        userServantEntity = (*v46)->fields.userServantEntity;
        if ( !userServantEntity )
          goto LABEL_121;
        v62 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v137.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v137.fields.fakeValue = v62;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v136 = v137;
        if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v136, 0LL) )
        {
LABEL_39:
          SupportServantSelectMenu__PushRequest(this, *v46, v59);
          return;
        }
        supportServantListViewManager = (SupportServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_121;
        supportServantListViewManager = (SupportServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)supportServantListViewManager,
                                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !supportServantListViewManager )
          goto LABEL_121;
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)supportServantListViewManager,
                   dropList,
                   (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        supportServantListViewManager = (SupportServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_121;
        supportServantListViewManager = (SupportServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)supportServantListViewManager,
                                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !Entity )
          goto LABEL_121;
        v70 = (DataMasterBase_WarMaster__WarEntity__int__o *)supportServantListViewManager;
        v72 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
        v71 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v138.fields.currentCryptoKey = v72;
        *(_QWORD *)&v138.fields.fakeValue = v71;
        supportServantListViewManager = (SupportServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                             v138,
                                                                             0LL);
        if ( !v70 )
          goto LABEL_121;
        v73 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v70,
                                   (int32_t)supportServantListViewManager,
                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(Entity->fields.svtId, 0LL);
        supportServantListViewManager = (SupportServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                             Entity->fields.limitCount,
                                                                             0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_121;
        supportServantListViewManager = (SupportServantListViewManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                             Master_WarQuestSelectionMaster,
                                                                             v75,
                                                                             (int32_t)supportServantListViewManager,
                                                                             0LL);
        if ( !*v46 )
          goto LABEL_121;
        v76 = (int)supportServantListViewManager;
        supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewItem__get_SvtId(
                                                                             *v46,
                                                                             v32);
        if ( !*v46 )
          goto LABEL_121;
        v77 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v46)->fields.userServantEntity;
        if ( !v77 )
          goto LABEL_121;
        v78 = (int)supportServantListViewManager;
        v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v77[6], 0LL);
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       Master_WarQuestSelectionMaster,
                                       v78,
                                       v79,
                                       0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v81 = LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
        v82 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
        v83 = sub_B2C374(object___TypeInfo, 6LL);
        Rarity = UserServantEntity__getRarity(Entity, 0LL);
        if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        supportServantListViewManager = (SupportServantListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
        if ( !v83 )
          goto LABEL_121;
        v91 = (System_Int32_array **)supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B2C41C(
                                                                                   supportServantListViewManager,
                                                                                   *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0LL )
        {
          if ( !*(_DWORD *)(v83 + 24) )
            goto LABEL_122;
          *(_QWORD *)(v83 + 32) = v91;
          sub_B2C2F8((BattleServantConfConponent_o *)(v83 + 32), v91, v85, v86, v87, v88, v89, v90);
          if ( !v73 )
            goto LABEL_121;
          supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getClassName(v73, 0LL);
          v98 = (System_Int32_array **)supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B2C41C(
                                                                                     supportServantListViewManager,
                                                                                     *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v83 + 24) <= 1u )
              goto LABEL_122;
            *(_QWORD *)(v83 + 40) = v98;
            sub_B2C2F8((BattleServantConfConponent_o *)(v83 + 40), v98, v92, v93, v94, v95, v96, v97);
            supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getName(v73, v76, -1, 0LL);
            v105 = (System_Int32_array **)supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B2C41C(
                                                                                       supportServantListViewManager,
                                                                                       *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v83 + 24) <= 2u )
                goto LABEL_122;
              *(_QWORD *)(v83 + 48) = v105;
              sub_B2C2F8((BattleServantConfConponent_o *)(v83 + 48), v105, v99, v100, v101, v102, v103, v104);
              if ( !*v46 )
                goto LABEL_121;
              supportServantListViewManager = (SupportServantListViewManager_o *)(*v46)->fields.userServantEntity;
              if ( !supportServantListViewManager )
                goto LABEL_121;
              v106 = UserServantEntity__getRarity((UserServantEntity_o *)supportServantListViewManager, 0LL);
              supportServantListViewManager = (SupportServantListViewManager_o *)Rarity__getRarityType(v106, 0LL);
              v113 = (System_Int32_array **)supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B2C41C(
                                                                                         supportServantListViewManager,
                                                                                         *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v83 + 24) <= 3u )
                  goto LABEL_122;
                *(_QWORD *)(v83 + 56) = v113;
                sub_B2C2F8((BattleServantConfConponent_o *)(v83 + 56), v113, v107, v108, v109, v110, v111, v112);
                if ( !*v46 )
                  goto LABEL_121;
                supportServantListViewManager = (SupportServantListViewManager_o *)(*v46)->fields.servantEntity;
                if ( !supportServantListViewManager )
                  goto LABEL_121;
                supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getClassName(
                                                                                     (ServantEntity_o *)supportServantListViewManager,
                                                                                     0LL);
                v120 = (System_Int32_array **)supportServantListViewManager;
                if ( !supportServantListViewManager
                  || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B2C41C(
                                                                                           supportServantListViewManager,
                                                                                           *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0LL )
                {
                  if ( *(_DWORD *)(v83 + 24) <= 4u )
                    goto LABEL_122;
                  *(_QWORD *)(v83 + 64) = v120;
                  sub_B2C2F8((BattleServantConfConponent_o *)(v83 + 64), v120, v114, v115, v116, v117, v118, v119);
                  if ( !*v46 )
                    goto LABEL_121;
                  supportServantListViewManager = (SupportServantListViewManager_o *)(*v46)->fields.servantEntity;
                  if ( !supportServantListViewManager )
                    goto LABEL_121;
                  supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getName(
                                                                                       (ServantEntity_o *)supportServantListViewManager,
                                                                                       ServantLimitCountSealAfter,
                                                                                       -1,
                                                                                       0LL);
                  v127 = (System_Int32_array **)supportServantListViewManager;
                  if ( !supportServantListViewManager
                    || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_B2C41C(
                                                                                             supportServantListViewManager,
                                                                                             *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0LL )
                  {
                    if ( *(_DWORD *)(v83 + 24) > 5u )
                    {
                      *(_QWORD *)(v83 + 72) = v127;
                      sub_B2C2F8((BattleServantConfConponent_o *)(v83 + 72), v127, v121, v122, v123, v124, v125, v126);
                      v128 = System_String__Format_44384256(v82, (System_Object_array *)v83, 0LL);
                      v129 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                      v130 = LocalizationManager__Get((System_String_o *)StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v132 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                      CommonConfirmDialog_ClickDelegate___ctor(
                        v132,
                        (Il2CppObject *)v30,
                        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__,
                        0LL);
                      supportServantListViewManager = (SupportServantListViewManager_o *)BalanceConfig_TypeInfo;
                      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      }
                      if ( !Instance )
                        goto LABEL_121;
                      CommonUI__OpenConfirmDialog_17970624(
                        Instance,
                        v81,
                        v128,
                        v129,
                        v130,
                        v132,
                        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                        0,
                        0,
                        0LL);
                      return;
                    }
LABEL_122:
                    v134 = sub_B2C460(supportServantListViewManager);
                    sub_B2C400(v134, 0LL);
                  }
                }
              }
            }
          }
        }
        v135 = sub_B2C454(supportServantListViewManager);
        sub_B2C400(v135, 0LL);
      }
      if ( v58->fields.isBase )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        SupportServantSelectMenu__Init(this, v63);
        supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL);
        if ( !supportServantListViewManager )
          goto LABEL_121;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
        if ( !*v46 )
          goto LABEL_121;
        classPos = this->fields.classPos;
        v66 = (*v46)->fields.userServantEntity;
        v67 = 2;
      }
      else
      {
        if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(*v46, v32) )
          goto LABEL_126;
        supportServantListViewManager = (SupportServantListViewManager_o *)*v46;
        if ( !*v46 )
          goto LABEL_121;
        supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewItem__get_IsUseServant(
                                                                             (SupportServantListViewItem_o *)supportServantListViewManager,
                                                                             v32);
        if ( ((unsigned __int8)supportServantListViewManager & 1) != 0 )
          goto LABEL_126;
        v68 = *v46;
        if ( !*v46 )
          goto LABEL_121;
        if ( v68->fields.isEventJoin || v68->fields.isUseInSet )
        {
LABEL_126:
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v48 = 2;
LABEL_22:
          SoundManager__playSystemSe(v48, 0LL);
          goto LABEL_23;
        }
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        SupportServantSelectMenu__Init(this, v133);
        supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL);
        if ( !supportServantListViewManager )
          goto LABEL_121;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
        if ( !*v46 )
          goto LABEL_121;
        classPos = this->fields.classPos;
        v66 = (*v46)->fields.userServantEntity;
        v67 = 1;
      }
      SupportServantSelectMenu__Callback(this, v67, classPos, v66, v64);
    }
  }
}


void __fastcall SupportServantSelectMenu__Open(
        SupportServantSelectMenu_o *this,
        SupportServantData_array *supportServantData,
        int32_t nowDeckNum,
        int32_t classPos,
        EventUpValSetupInfo_o *eventSetupInfo,
        int32_t nowDeckId,
        System_Int32_array *fixMainDeckIds,
        System_Int32_array *fixEventDeckIds,
        SupportServantSelectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v29; // x1
  UnityEngine_GameObject_o *v30; // x27
  struct SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v41; // x20
  const MethodInfo *v42; // [xsp+0h] [xbp-60h]

  if ( (byte_418B360 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, supportServantData);
    sub_B2C35C(&SupportServantListViewManager_CallbackFunc_TypeInfo, v18);
    sub_B2C35C(&Method_SupportServantSelectMenu_EndOpen__, v19);
    sub_B2C35C(&Method_SupportServantSelectMenu_OnSelectItem__, v20);
    sub_B2C35C(&StringLiteral_4020/*"ClassPos"*/, v21);
    byte_418B360 = 1;
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)supportServantData);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_16;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v30 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v30, (unsigned __int8)gameObject & 1, 0LL);
  this->fields.classPos = classPos;
  if ( UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4020/*"ClassPos"*/, -1, 0LL) != classPos )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    ListViewManager__ClearScrollBarValue((ListViewManager_o *)gameObject, 1, 0LL);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_16;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 70, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_16;
  TitleInfoControl__setBackBtnSprite_19529688((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager;
  if ( !gameObject )
    goto LABEL_16;
  SupportServantListViewManager__CreateList(
    (SupportServantListViewManager_o *)gameObject,
    supportServantData,
    nowDeckNum,
    classPos,
    eventSetupInfo,
    nowDeckId,
    fixMainDeckIds,
    fixEventDeckIds,
    v42);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v32 = (SupportServantListViewManager_CallbackFunc_o *)sub_B2C42C(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v32,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    0LL);
  if ( !supportServantListViewManager
    || (supportServantListViewManager->fields.callbackFunc = v32,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&supportServantListViewManager->fields.callbackFunc,
          (System_Int32_array **)v32,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        SupportServantListViewManager__SetMode_31683636(supportServantListViewManager, 1, v39),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager) == 0LL)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = (UnityEngine_GameObject_o *)SupportServantListViewManager__GetScaleButtonSpriteName(
                                                   (SupportServantListViewManager_o *)gameObject,
                                                   v29),
        !scaleChangeTabSprite) )
  {
LABEL_16:
    sub_B2C434(gameObject, v29);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
  this->fields.state = 2;
  v41 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_SupportServantSelectMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v41, 0LL);
}


void __fastcall SupportServantSelectMenu__PushRequest(
        SupportServantSelectMenu_o *this,
        SupportServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *limitCountSupport; // x0
  __int64 v14; // x1
  struct UserServantEntity_o *userServantEntity; // x19
  DataManager_o *v16; // x23
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v24; // x8
  int64_t v25; // x0
  __int128 v26; // q0
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v29; // q0
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w27
  int32_t v32; // w28
  int32_t v33; // w21
  bool IsLock; // w23
  char v35; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v39; // w0
  __int64 v40; // x8
  int32_t randomSettingSupport; // w19
  int32_t v42; // [xsp+50h] [xbp-110h]
  int32_t v43; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  __int64 v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_418B36B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B2C35C(&Method_SupportServantSelectMenu_EndCardFavoriteRequest__, v12);
    byte_418B36B = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v16 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v16 || !userServantEntity )
    goto LABEL_21;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v16->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v53, 0LL);
  if ( !v17 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  v24 = *(_QWORD *)&v16->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = v24;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v51, 0LL);
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v16->fields.writeMasterDataThread;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_SupportServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v27,
                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v49, 0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v35 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v40 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v39;
  *(_QWORD *)&v54.fields.currentCryptoKey = v40;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v54, 0LL);
  if ( !v30 )
LABEL_21:
    sub_B2C434(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    v43,
    v42,
    v31,
    v32,
    v33,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v45,
    IsLock,
    v35 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != v47,
    0LL);
}


void __fastcall SupportServantSelectMenu__add_callbackFunc(
        SupportServantSelectMenu_o *this,
        SupportServantSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportServantSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportServantSelectMenu_o *v11; // x0
  SupportServantSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_418B35D & 1) == 0 )
  {
    sub_B2C35C(&SupportServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_418B35D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportServantSelectMenu_CallbackFunc_c *)v8->klass != SupportServantSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SupportServantSelectMenu__remove_callbackFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__endCancelButton(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x4

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, method),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
LABEL_7:
      sub_B2C434(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_31677796(supportServantListViewManager, 4, v5);
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0LL);
  if ( !supportServantListViewManager )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
  SupportServantSelectMenu__Callback(this, 0, -1, 0LL, v6);
}


void __fastcall SupportServantSelectMenu__onClickChoiceTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_418B365 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_SupportServantSelectMenu_EndClickTabChoice__, v4);
    byte_418B365 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B2C42C(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabChoice__,
          0LL);
        SupportServantSelectMenu__statusRequest(this, v7, v8);
        return;
      }
      v9 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B2C42C(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabChoice__,
        0LL);
      SupportServantSelectMenu__statusRequest(this, v9, v10);
    }
    SupportServantSelectMenu__setModeTabKind(this, 2, v5);
  }
}


void __fastcall SupportServantSelectMenu__onClickLockTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_418B364 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_SupportServantSelectMenu_EndClickTabLock__, v4);
    byte_418B364 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B2C42C(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabLock__,
          0LL);
        SupportServantSelectMenu__statusRequest(this, v7, v8);
        return;
      }
      v9 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B2C42C(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabLock__,
        0LL);
      SupportServantSelectMenu__statusRequest(this, v9, v10);
    }
    SupportServantSelectMenu__setModeTabKind(this, 1, v5);
  }
}


void __fastcall SupportServantSelectMenu__onClickNormalTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SupportServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_418B363 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_SupportServantSelectMenu_EndClickTabNormal__, v4);
    byte_418B363 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v5 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B2C42C(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabNormal__,
      0LL);
    SupportServantSelectMenu__statusRequest(this, v5, v6);
  }
}


void __fastcall SupportServantSelectMenu__onClickPushTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SupportServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_418B366 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_SupportServantSelectMenu_EndClickTabPush__, v4);
    byte_418B366 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v5 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_B2C42C(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabPush__,
      0LL);
    SupportServantSelectMenu__statusRequest(this, v5, v6);
  }
}


void __fastcall SupportServantSelectMenu__remove_callbackFunc(
        SupportServantSelectMenu_o *this,
        SupportServantSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportServantSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportServantSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportServantSelectMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_418B35E & 1) == 0 )
  {
    sub_B2C35C(&SupportServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_418B35E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportServantSelectMenu_CallbackFunc_c *)v8->klass != SupportServantSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SupportServantSelectMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__setModeTabKind(
        SupportServantSelectMenu_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  UnityEngine_Behaviour_o *normalTabButton; // x0
  UICommonButton_o *v20; // x21
  bool enabled; // w0
  System_String_o **v22; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v24; // w0
  System_String_o **v25; // x8
  UICommonButton_o *choiceTabButton; // x21
  bool v27; // w0
  System_String_o **v28; // x8
  UICommonButton_o *pushTabButton; // x21
  bool v30; // w0
  System_String_o **v31; // x8
  const MethodInfo *v32; // x2
  UILabel_o *explanationLabel; // x21
  __int64 *v34; // x8
  struct SupportServantListViewManager_o *supportServantListViewManager; // x8
  struct SupportServantListViewManager_o *v36; // x20
  SupportServantListViewManager_CallbackFunc_o *v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int32_t v44; // w1

  if ( (byte_418B367 & 1) == 0 )
  {
    sub_B2C35C(&SupportServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_SupportServantSelectMenu_OnSelectItem__, v6);
    sub_B2C35C(&StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v7);
    sub_B2C35C(&StringLiteral_17137/*"button_push_reg"*/, v8);
    sub_B2C35C(&StringLiteral_17138/*"button_push_unreg"*/, v9);
    sub_B2C35C(&StringLiteral_17123/*"button_allchoice_reg"*/, v10);
    sub_B2C35C(&StringLiteral_17126/*"button_alllock_unreg"*/, v11);
    sub_B2C35C(&StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v12);
    sub_B2C35C(&StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v13);
    sub_B2C35C(&StringLiteral_17139/*"button_select_reg"*/, v14);
    sub_B2C35C(&StringLiteral_12559/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v15);
    sub_B2C35C(&StringLiteral_17140/*"button_select_unreg"*/, v16);
    sub_B2C35C(&StringLiteral_17125/*"button_alllock_reg"*/, v17);
    sub_B2C35C(&StringLiteral_17124/*"button_allchoice_unreg"*/, v18);
    byte_418B367 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( normalTabButton )
    {
      UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
      v20 = this->fields.normalTabButton;
      if ( v20 )
      {
        enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
        UICommonButton__SetColliderEnable(v20, enabled, 1, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
        if ( normalTabButton )
        {
          v22 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17140/*"button_select_unreg"*/ : &StringLiteral_17139/*"button_select_reg"*/);
          UISprite__set_spriteName((UISprite_o *)normalTabButton, *v22, 0LL);
          normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
          if ( normalTabButton )
          {
            UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
            lockTabButton = this->fields.lockTabButton;
            if ( lockTabButton )
            {
              v24 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
              UICommonButton__SetColliderEnable(lockTabButton, v24, 1, 0LL);
              normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
              if ( normalTabButton )
              {
                v25 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17125/*"button_alllock_reg"*/ : &StringLiteral_17126/*"button_alllock_unreg"*/);
                UISprite__set_spriteName((UISprite_o *)normalTabButton, *v25, 0LL);
                normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
                if ( normalTabButton )
                {
                  UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
                  choiceTabButton = this->fields.choiceTabButton;
                  if ( choiceTabButton )
                  {
                    v27 = UnityEngine_Behaviour__get_enabled(
                            (UnityEngine_Behaviour_o *)this->fields.choiceTabButton,
                            0LL);
                    UICommonButton__SetColliderEnable(choiceTabButton, v27, 1, 0LL);
                    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
                    if ( normalTabButton )
                    {
                      v28 = (System_String_o **)(this->fields.tabModeKind == 2
                                               ? &StringLiteral_17123/*"button_allchoice_reg"*/
                                               : &StringLiteral_17124/*"button_allchoice_unreg"*/);
                      UISprite__set_spriteName((UISprite_o *)normalTabButton, *v28, 0LL);
                      normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
                      if ( normalTabButton )
                      {
                        UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0LL);
                        pushTabButton = this->fields.pushTabButton;
                        if ( pushTabButton )
                        {
                          v30 = UnityEngine_Behaviour__get_enabled(
                                  (UnityEngine_Behaviour_o *)this->fields.pushTabButton,
                                  0LL);
                          UICommonButton__SetColliderEnable(pushTabButton, v30, 1, 0LL);
                          normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
                          if ( normalTabButton )
                          {
                            if ( this->fields.tabModeKind == 3 )
                              v31 = (System_String_o **)&StringLiteral_17137/*"button_push_reg"*/;
                            else
                              v31 = (System_String_o **)&StringLiteral_17138/*"button_push_unreg"*/;
                            UISprite__set_spriteName((UISprite_o *)normalTabButton, *v31, 0LL);
                            switch ( this->fields.tabModeKind )
                            {
                              case 0:
                                explanationLabel = this->fields.explanationLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v34 = &StringLiteral_12559/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
                                goto LABEL_45;
                              case 1:
                                explanationLabel = this->fields.explanationLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v34 = &StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
                                goto LABEL_45;
                              case 2:
                                explanationLabel = this->fields.explanationLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v34 = &StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
                                goto LABEL_45;
                              case 3:
                                explanationLabel = this->fields.explanationLabel;
                                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                }
                                v34 = &StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_45:
                                normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                                               (System_String_o *)*v34,
                                                                               0LL);
                                if ( !explanationLabel )
                                  break;
                                UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0LL);
LABEL_47:
                                supportServantListViewManager = this->fields.supportServantListViewManager;
                                if ( !supportServantListViewManager )
                                  break;
                                supportServantListViewManager->fields.isCanNotLongPush = this->fields.tabModeKind != 0;
                                normalTabButton = (UnityEngine_Behaviour_o *)this->fields.supportServantListViewManager;
                                if ( !normalTabButton )
                                  break;
                                if ( this->fields.state != 2 )
                                {
                                  v44 = 1;
                                  goto LABEL_53;
                                }
                                SupportServantListViewManager__UpdateItemState(
                                  (SupportServantListViewManager_o *)normalTabButton,
                                  modeKind == 3,
                                  v32);
                                v36 = this->fields.supportServantListViewManager;
                                v37 = (SupportServantListViewManager_CallbackFunc_o *)sub_B2C42C(SupportServantListViewManager_CallbackFunc_TypeInfo);
                                SupportServantListViewManager_CallbackFunc___ctor(
                                  v37,
                                  (Il2CppObject *)this,
                                  (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
                                  0LL);
                                if ( v36 )
                                {
                                  v36->fields.callbackFunc = v37;
                                  sub_B2C2F8(
                                    (BattleServantConfConponent_o *)&v36->fields.callbackFunc,
                                    (System_Int32_array **)v37,
                                    v38,
                                    v39,
                                    v40,
                                    v41,
                                    v42,
                                    v43);
                                  v44 = 2;
                                  normalTabButton = (UnityEngine_Behaviour_o *)v36;
LABEL_53:
                                  SupportServantListViewManager__SetMode_31683636(
                                    (SupportServantListViewManager_o *)normalTabButton,
                                    v44,
                                    v32);
                                  return;
                                }
                                break;
                              default:
                                goto LABEL_47;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_B2C434(normalTabButton, *(_QWORD *)&modeKind);
  }
}


void __fastcall SupportServantSelectMenu__statusRequest(
        SupportServantSelectMenu_o *this,
        SupportServantSelectMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t tabModeKind; // w8
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // x2
  System_Int64_array *v19; // x1
  bool v20; // w4
  bool v21; // w5
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  NetworkManager_ResultCallbackFunc_o *v28; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_418B369 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B2C35C(&Method_SupportServantSelectMenu_EndStatusSync__, v8);
    byte_418B369 = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_23;
    if ( SupportServantListViewManager__GetSwapChoiceList(supportServantListViewManager, &choiceList, &unchoiceList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v28 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                           v28,
                                                                           (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v18 = unchoiceList;
        v19 = choiceList;
        v21 = 1;
        v20 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B2C434(supportServantListViewManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_23;
    if ( SupportServantListViewManager__GetSwapLockList(supportServantListViewManager, &lockList, &unlockList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                           v17,
                                                                           (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v18 = unlockList;
        v19 = lockList;
        v20 = 1;
        v21 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantListViewManager,
          v19,
          v18,
          0,
          v20,
          v21,
          0LL);
        return;
      }
      goto LABEL_23;
    }
  }
  if ( callback )
    SupportServantSelectMenu_RequestCallbackFunc__Invoke(callback, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu_CallbackFunc___ctor(
        SupportServantSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportServantSelectMenu_CallbackFunc__BeginInvoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v13[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v14; // [xsp+28h] [xbp-28h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-24h] BYREF

  v15 = result;
  v14 = classPos;
  if ( (byte_41847DD & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&SupportSelectRootComponent_ResultKind_TypeInfo, v11);
    byte_41847DD = 1;
  }
  v13[3] = 0LL;
  v13[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13[2] = (__int64)entity;
  return (System_IAsyncResult_o *)sub_B2C300(this, v13, callback, object);
}


void __fastcall SupportServantSelectMenu_CallbackFunc__EndInvoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu_CallbackFunc__Invoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v9; // x26
  SupportServantSelectMenu_CallbackFunc_o **v10; // x27
  __int64 v11; // x28
  unsigned int v12; // w25
  __int64 class_0; // x0
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int v16; // w24
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, UserServantEntity_o *, _QWORD); // x0
  SupportServantSelectMenu_CallbackFunc_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(unsigned int *, _QWORD, UserServantEntity_o *, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  unsigned int v30; // w25
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x10
  _DWORD *v35; // x11
  unsigned int v36; // [xsp+4h] [xbp-5Ch] BYREF
  SupportServantSelectMenu_CallbackFunc_o *v37; // [xsp+8h] [xbp-58h] BYREF

  v37 = this;
  v36 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v37;
    v9 = 1LL;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v5 + 24);
  if ( v9 )
  {
    v10 = (SupportServantSelectMenu_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v23 = v10[v11];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(unsigned int *, _QWORD, UserServantEntity_o *, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&classPos, entity);
      if ( (sub_B2C38C(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int *)v36, (unsigned int)classPos, entity, v25);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v24 )
    {
      v26(&v36 - 4, (unsigned int)classPos, entity, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B2C384(v25);
      v28 = sub_B2C788(v25);
      if ( (v27 & 1) != 0 )
      {
        v30 = v36;
        if ( (v28 & 1) != 0 )
        {
          v31 = *v24;
          v32 = *(_QWORD *)(v25 + 24);
          v33 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v34 = 0LL;
            v35 = (_DWORD *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((_QWORD *)v35 - 1) != v32 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v31 + 16LL * (*v35 + (int)v33) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AC5258(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, UserServantEntity_o *, _QWORD))sub_B2C40C(v20, v25);
        (*v22)(v24, v30, (unsigned int)classPos, entity, v22);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v15 = *v24;
          v16 = v36;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v15 + 16LL * (int)(*v18 + v12) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AC5258(v24, class_0, v12, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, UserServantEntity_o *, _QWORD))v19)(
            v24,
            v16,
            (unsigned int)classPos,
            entity,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, UserServantEntity_o *, _QWORD))(*v24
                                                                                           + 16LL
                                                                                           * *(unsigned __int16 *)(v25 + 72)
                                                                                           + 312))(
            v24,
            v36,
            (unsigned int)classPos,
            entity,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, UserServantEntity_o *, __int64))v26)(
      v24,
      v36,
      (unsigned int)classPos,
      entity,
      v25);
    goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu_RequestCallbackFunc___ctor(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportServantSelectMenu_RequestCallbackFunc__BeginInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_41847DE & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isRequest);
    byte_41847DE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall SupportServantSelectMenu_RequestCallbackFunc__EndInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu_RequestCallbackFunc__Invoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  SupportServantSelectMenu_RequestCallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  SupportServantSelectMenu_RequestCallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (SupportServantSelectMenu_RequestCallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isRequest, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isRequest, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isRequest, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isRequest,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isRequest, v22);
    goto LABEL_37;
  }
}


void __fastcall SupportServantSelectMenu___c__DisplayClass31_0___ctor(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu___c__DisplayClass31_0___OnSelectItem_b__0(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  CommonUI_o *v11; // x20
  System_Action_o *_9__1; // x22
  struct SupportServantSelectMenu_o *_4__this; // x8
  struct SupportServantSelectMenu_o *v14; // x20
  SupportServantListViewManager_o *supportServantListViewManager; // x19
  __int64 v16; // x21
  __int64 v17; // x9

  if ( (byte_41847DC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&SupportServantListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_SupportServantSelectMenu_OnSelectItem__, v7);
    sub_B2C35C(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__, v8);
    byte_41847DC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B2C2F8(&this->fields.__9__1, _9__1);
    }
    if ( v11 )
    {
      CommonUI__CloseConfirmDialog_17971588(v11, _9__1, 0LL);
      return;
    }
LABEL_13:
    sub_B2C434(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.state = 2;
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_13;
  supportServantListViewManager = v14->fields.supportServantListViewManager;
  v16 = sub_B2C42C(SupportServantListViewManager_CallbackFunc_TypeInfo);
  v17 = *(_QWORD *)Method_SupportServantSelectMenu_OnSelectItem__;
  *(_QWORD *)(v16 + 40) = Method_SupportServantSelectMenu_OnSelectItem__;
  *(_QWORD *)(v16 + 16) = v17;
  *(_QWORD *)(v16 + 32) = v14;
  sub_B2C2F8(v16 + 32, v14);
  if ( !supportServantListViewManager )
    goto LABEL_13;
  SupportServantListViewManager__SetMode(
    supportServantListViewManager,
    2,
    (SupportServantListViewManager_CallbackFunc_o *)v16,
    0LL);
}


void __fastcall SupportServantSelectMenu___c__DisplayClass31_0___OnSelectItem_b__1(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  SupportServantSelectMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  SupportServantSelectMenu__PushRequest(_4__this, this->fields.item, 0LL);
}