void SupportServantSelectMenu___ctor(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D28ED8 & 1) == 0 )
  {
    sub_1C94098(&BaseMenu_TypeInfo);
    byte_4D28ED8 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void SupportServantSelectMenu__Callback(
        SupportServantSelectMenu_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct SupportServantSelectMenu_CallbackFunc_o *v9; // x22
  struct SupportServantSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C9403C(p_callbackFunc, 0, classPos, (int32_t)entity, (System_String_o *)method, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, UserServantEntity_o *, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      (unsigned int)classPos,
      entity,
      v9->fields.method);
  }
}


void SupportServantSelectMenu__ClearScrollValue(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_1C942F0(0, method);
  ListViewManager__ClearScrollBarValue(supportServantListViewManager, 1, 0);
}


void SupportServantSelectMenu__EndCardFavoriteRequest(
        SupportServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  struct SupportServantListViewManager_o *v5; // x20
  SupportServantListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4D28ED7 & 1) == 0 )
  {
    sub_1C94098(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_SupportServantSelectMenu_OnSelectItem__);
    byte_4D28ED7 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (SupportServantListViewManager__UpdateItemState(supportServantListViewManager, 1, method),
        v5 = this->fields.supportServantListViewManager,
        v6 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C942E4(SupportServantListViewManager_CallbackFunc_TypeInfo),
        SupportServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
          v7),
        !v5) )
  {
    sub_1C942F0(supportServantListViewManager, result);
  }
  v5->fields.callbackFunc = v6;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  SupportServantListViewManager__SetMode_36430008(v5, 2, v14);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantSelectMenu__EndClickTabChoice(
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
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
      sub_1C942F0(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_36424200(supportServantListViewManager, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantSelectMenu__EndClickTabLock(
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
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
      sub_1C942F0(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_36424200(supportServantListViewManager, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantSelectMenu__EndClickTabNormal(
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
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
      sub_1C942F0(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_36424200(supportServantListViewManager, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 0, method);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantSelectMenu__EndClickTabPush(
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
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
      sub_1C942F0(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_36424200(supportServantListViewManager, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 3, method);
}


void SupportServantSelectMenu__EndOpen(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  struct SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4D28ECC & 1) == 0 )
  {
    sub_1C94098(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_SupportServantSelectMenu_OnSelectItem__);
    byte_4D28ECC = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v4 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C942E4(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v5);
  if ( !supportServantListViewManager )
    sub_1C942F0(v6, v7);
  supportServantListViewManager->fields.callbackFunc = v4;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&supportServantListViewManager->fields.callbackFunc,
    (int32_t)v4,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  SupportServantListViewManager__SetMode_36430008(supportServantListViewManager, 2, v14);
}


void SupportServantSelectMenu__EndStatusSync(
        SupportServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_requestCallback; // x0
  struct SupportServantSelectMenu_RequestCallbackFunc_o *v9; // x19
  struct SupportServantSelectMenu_RequestCallbackFunc_o *requestCallback; // t1

  requestCallback = this->fields.requestCallback;
  p_requestCallback = (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback;
  v9 = requestCallback;
  if ( requestCallback )
  {
    p_requestCallback->klass = 0;
    sub_1C9403C(p_requestCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      1,
      v9->fields.method);
  }
}


void SupportServantSelectMenu__Init(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  UICommonButton_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v7; // x2

  if ( (byte_4D28ECA & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_12624/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    byte_4D28ECA = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    goto LABEL_9;
  SupportServantListViewManager__DestroyList(supportServantListViewManager, method);
  this->fields.state = 0;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportServantListViewManager = (SupportServantListViewManager_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_12624/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                       0);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0),
        (normalTabButton = this->fields.normalTabButton) == 0) )
  {
LABEL_9:
    sub_1C942F0(supportServantListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0);
  UICommonButton__SetColliderEnable(normalTabButton, enabled, 1, 0);
  SupportServantSelectMenu__setModeTabKind(this, 0, v7);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void SupportServantSelectMenu__ModifyItem(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportServantListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_1C942F0(0, method);
  SupportServantListViewManager__RequestListObject_36424200(supportServantListViewManager, 4, v2);
}


void SupportServantSelectMenu__OnClickCancel(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewManager_o *supportServantListViewManager; // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4D28ED3 & 1) == 0 )
  {
    sub_1C94098(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_1C94098(&Method_SupportServantSelectMenu_OnClickCancel__);
    sub_1C94098(&Method_SupportServantSelectMenu_endCancelButton__);
    sub_1C94098(&StringLiteral_4494/*"ClassPos"*/);
    byte_4D28ED3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SupportServantSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4494/*"ClassPos"*/, this->fields.classPos, 0);
    supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      sub_1C942F0(0, v5);
    ListViewManager__SetScrollBarValue(supportServantListViewManager, 0);
    v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C942E4(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_endCancelButton__,
      v8);
    SupportServantSelectMenu__statusRequest(this, v7, v9);
  }
}


void SupportServantSelectMenu__OnClickScaleChange(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4D28ED5 & 1) == 0 )
  {
    sub_1C94098(&Method_SupportServantSelectMenu_OnClickScaleChange__);
    byte_4D28ED5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SupportServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ChangeIconScale(supportServantListViewManager, v5),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewManager__GetScaleButtonSpriteName(
                                                                               supportServantListViewManager,
                                                                               v5),
          !scaleChangeTabSprite) )
    {
      sub_1C942F0(supportServantListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)supportServantListViewManager, 0);
  }
}


void SupportServantSelectMenu__OnSelectItem(
        SupportServantSelectMenu_o *this,
        int32_t kind,
        int32_t offset,
        const MethodInfo *method)
{
  __int64 v7; // x20
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  SupportServantListViewItem_o *Item; // x1
  SupportServantListViewItem_o **v23; // x19
  int32_t tabModeKind; // w8
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  int32_t v27; // w1
  _QWORD *v28; // x0
  struct SupportServantListViewManager_o *v29; // x19
  SupportServantListViewManager_CallbackFunc_o *v30; // x0
  const MethodInfo *v31; // x3
  void *v32; // x2
  struct SupportServantListViewManager_CallbackFunc_o *v33; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  const MethodInfo *v40; // x2
  _BOOL4 isInput; // w23
  _QWORD *v42; // x8
  System_Reflection_MethodBase_o *v43; // x0
  const MethodInfo *v44; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v47; // q1
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x4
  int32_t classPos; // w2
  UserServantEntity_o *v53; // x3
  int32_t v54; // w1
  SupportServantListViewItem_o *v55; // x8
  _QWORD *v56; // x0
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v58; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v61; // x27
  UserServantEntity_o *v62; // x8
  int32_t m_CancellationTokenSource; // w28
  int32_t v64; // w26
  Il2CppObject *Master_object; // x23
  System_String_o *v66; // x21
  System_String_o *v67; // x22
  __int64 v68; // x24
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  SupportServantListViewManager_o *v75; // x28
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  SupportServantListViewManager_o *v82; // x27
  int32_t v83; // w0
  Il2CppClass *v84; // x8
  int32_t v85; // w25
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  SupportServantListViewManager_o *v92; // x25
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  SupportServantListViewManager_o *v99; // x25
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  SupportServantListViewManager_o *v106; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v107; // x8
  int32_t v108; // w19
  int32_t v109; // w0
  int32_t v110; // w2
  int32_t v111; // w3
  System_String_o *v112; // x4
  int32_t v113; // w5
  int64_t v114; // x6
  System_String_o *v115; // x7
  SupportServantListViewManager_o *v116; // x19
  System_String_o *v117; // x19
  System_String_o *v118; // x22
  System_String_o *v119; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v121; // x25
  _QWORD *v122; // x0
  System_Reflection_MethodBase_o *v123; // x0
  const MethodInfo *v124; // x1
  __int64 v125; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16

  if ( (byte_4D28ECD & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Rarity_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_1C94098(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__);
    sub_1C94098(&SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo);
    sub_1C94098(&StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C94098(&StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C94098(&StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C94098(&StringLiteral_11998/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4D28ECD = 1;
  }
  v7 = sub_1C942E4(SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_106;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( this->fields.state == 2 )
  {
    if ( offset < 0 )
    {
      Item = 0;
    }
    else
    {
      supportServantListViewManager = this->fields.supportServantListViewManager;
      if ( !supportServantListViewManager )
        goto LABEL_106;
      Item = SupportServantListViewManager__GetItem(supportServantListViewManager, offset, v16);
    }
    *(_QWORD *)(v7 + 24) = Item;
    v23 = (SupportServantListViewItem_o **)(v7 + 24);
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)Item, (int32_t)v16, v17, v18, v19, v20, v21);
    if ( kind == 2 )
    {
      tabModeKind = this->fields.tabModeKind;
      if ( tabModeKind == 2 )
      {
        if ( !*v23 )
          goto LABEL_106;
        (*v23)->fields.isSwapChoice ^= 1u;
        v28 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v28 = (_QWORD *)sub_1C940B0(Method_SupportServantSelectMenu_OnSelectItem__);
        v26 = (System_Reflection_MethodBase_o *)sub_1C9407C(v28, v28[4]);
        v27 = 0;
        goto LABEL_20;
      }
      if ( tabModeKind == 1 )
      {
        if ( !*v23 )
          goto LABEL_106;
        (*v23)->fields.isSwapLock ^= 1u;
        v25 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v25 = (_QWORD *)sub_1C940B0(Method_SupportServantSelectMenu_OnSelectItem__);
        v26 = (System_Reflection_MethodBase_o *)sub_1C9407C(v25, v25[4]);
        v27 = 11;
        goto LABEL_20;
      }
      supportServantListViewManager = (SupportServantListViewManager_o *)*v23;
      if ( !*v23 )
        goto LABEL_106;
      if ( tabModeKind == 3 )
      {
        isInput = supportServantListViewManager->fields.isInput;
        v42 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v42 = (_QWORD *)sub_1C940B0(Method_SupportServantSelectMenu_OnSelectItem__);
        v43 = (System_Reflection_MethodBase_o *)sub_1C9407C(v42, v42[4]);
        if ( !isInput )
        {
          OverwriteAssetSoundName__PlaySystemSe(v43, 2, 0, 0);
          this->fields.state = 2;
          v29 = this->fields.supportServantListViewManager;
          v30 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C942E4(SupportServantListViewManager_CallbackFunc_TypeInfo);
          v32 = Method_SupportServantSelectMenu_OnSelectItem__;
LABEL_21:
          v33 = v30;
          SupportServantListViewManager_CallbackFunc___ctor(v30, (Il2CppObject *)this, (intptr_t)v32, v31);
          if ( v29 )
          {
            v29->fields.callbackFunc = v33;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&v29->fields.callbackFunc,
              (int32_t)v33,
              v34,
              v35,
              v36,
              v37,
              v38,
              v39);
            SupportServantListViewManager__SetMode_36430008(v29, 2, v40);
            return;
          }
LABEL_106:
          sub_1C942F0(supportServantListViewManager, v9);
        }
        OverwriteAssetSoundName__PlaySystemSe(v43, 0, 0, 0);
        supportServantListViewManager = (SupportServantListViewManager_o *)UserGameMaster__getSelfUserGame(0);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        dropList = (int64_t)supportServantListViewManager->fields.dropList;
        if ( !dropList )
          goto LABEL_35;
        if ( !*v23 )
          goto LABEL_106;
        userServantEntity = (*v23)->fields.userServantEntity;
        if ( !userServantEntity )
          goto LABEL_106;
        v47 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v127.fields.fakeValue = v47;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v126 = v127;
        if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v126, 0) )
        {
LABEL_35:
          SupportServantSelectMenu__PushRequest(this, *v23, v44);
          return;
        }
        supportServantListViewManager = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                             (DataManager_o *)supportServantListViewManager,
                                                                             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
                   dropList,
                   (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        supportServantListViewManager = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                             (DataManager_o *)supportServantListViewManager,
                                                                             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !Entity )
          goto LABEL_106;
        v58 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
        klass = Entity[5].klass;
        monitor = Entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v128.fields.currentCryptoKey = klass;
        *(_QWORD *)&v128.fields.fakeValue = monitor;
        supportServantListViewManager = (SupportServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                                             v128,
                                                                             0);
        if ( !v58 )
          goto LABEL_106;
        v61 = DataMasterBase_object__object__int___GetEntity(
                v58,
                (int32_t)supportServantListViewManager,
                (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        supportServantListViewManager = (SupportServantListViewManager_o *)UserServantEntity__GetOverwriteStatus(
                                                                             (UserServantEntity_o *)Entity,
                                                                             0,
                                                                             0);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        if ( !*v23 )
          goto LABEL_106;
        v62 = (*v23)->fields.userServantEntity;
        if ( !v62 )
          goto LABEL_106;
        m_CancellationTokenSource = (int32_t)supportServantListViewManager->fields.m_CancellationTokenSource;
        supportServantListViewManager = (SupportServantListViewManager_o *)UserServantEntity__GetOverwriteStatus(
                                                                             v62,
                                                                             0,
                                                                             0);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        v64 = (int32_t)supportServantListViewManager->fields.m_CancellationTokenSource;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_11998/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
        v67 = LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
        v68 = sub_1C94140(object___TypeInfo, 6);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        supportServantListViewManager = (SupportServantListViewManager_o *)Rarity__getRarityType(
                                                                             m_CancellationTokenSource,
                                                                             0);
        if ( !v68 )
          goto LABEL_106;
        v75 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1C941D4(
                                                                                   supportServantListViewManager,
                                                                                   *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
        {
          if ( !*(_DWORD *)(v68 + 24) )
            goto LABEL_107;
          *(_QWORD *)(v68 + 32) = v75;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v68 + 32), (int32_t)v75, v69, v70, v71, v72, v73, v74);
          if ( !v61 )
            goto LABEL_106;
          supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getClassName(
                                                                               (ServantEntity_o *)v61,
                                                                               0);
          v82 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1C941D4(
                                                                                     supportServantListViewManager,
                                                                                     *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v68 + 24) <= 1u )
              goto LABEL_107;
            *(_QWORD *)(v68 + 40) = v82;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v68 + 40), (int32_t)v82, v76, v77, v78, v79, v80, v81);
            v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                    (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                    0);
            v84 = Entity[6].klass;
            *(_QWORD *)&v129.fields.fakeValue = Entity[6].monitor;
            v85 = v83;
            *(_QWORD *)&v129.fields.currentCryptoKey = v84;
            supportServantListViewManager = (SupportServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                                                 v129,
                                                                                 0);
            if ( !Master_object )
              goto LABEL_106;
            supportServantListViewManager = (SupportServantListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                                 (ServantLimitImageMaster_o *)Master_object,
                                                                                 v85,
                                                                                 (int32_t)supportServantListViewManager,
                                                                                 1,
                                                                                 0);
            v92 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1C941D4(
                                                                                       supportServantListViewManager,
                                                                                       *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v68 + 24) <= 2u )
                goto LABEL_107;
              *(_QWORD *)(v68 + 48) = v92;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v68 + 48), (int32_t)v92, v86, v87, v88, v89, v90, v91);
              supportServantListViewManager = (SupportServantListViewManager_o *)Rarity__getRarityType(v64, 0);
              v99 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1C941D4(
                                                                                         supportServantListViewManager,
                                                                                         *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v68 + 24) <= 3u )
                  goto LABEL_107;
                *(_QWORD *)(v68 + 56) = v99;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)(v68 + 56), (int32_t)v99, v93, v94, v95, v96, v97, v98);
                if ( !*v23 )
                  goto LABEL_106;
                supportServantListViewManager = (SupportServantListViewManager_o *)(*v23)->fields.servantEntity;
                if ( !supportServantListViewManager )
                  goto LABEL_106;
                supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getClassName(
                                                                                     (ServantEntity_o *)supportServantListViewManager,
                                                                                     0);
                v106 = supportServantListViewManager;
                if ( !supportServantListViewManager
                  || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1C941D4(
                                                                                           supportServantListViewManager,
                                                                                           *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v68 + 24) <= 4u )
                    goto LABEL_107;
                  *(_QWORD *)(v68 + 64) = v106;
                  sub_1C9403C(
                    (GrandQuestFolderBoardItem_o *)(v68 + 64),
                    (int32_t)v106,
                    v100,
                    v101,
                    v102,
                    v103,
                    v104,
                    v105);
                  supportServantListViewManager = (SupportServantListViewManager_o *)*v23;
                  if ( !*v23 )
                    goto LABEL_106;
                  supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewItem__get_SvtId(
                                                                                       (SupportServantListViewItem_o *)supportServantListViewManager,
                                                                                       v9);
                  if ( !*v23 )
                    goto LABEL_106;
                  v107 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.userServantEntity;
                  if ( !v107 )
                    goto LABEL_106;
                  v108 = (int)supportServantListViewManager;
                  v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v107[6], 0);
                  supportServantListViewManager = (SupportServantListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                                       (ServantLimitImageMaster_o *)Master_object,
                                                                                       v108,
                                                                                       v109,
                                                                                       1,
                                                                                       0);
                  v116 = supportServantListViewManager;
                  if ( !supportServantListViewManager
                    || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1C941D4(
                                                                                             supportServantListViewManager,
                                                                                             *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v68 + 24) > 5u )
                    {
                      *(_QWORD *)(v68 + 72) = v116;
                      sub_1C9403C(
                        (GrandQuestFolderBoardItem_o *)(v68 + 72),
                        (int32_t)v116,
                        v110,
                        v111,
                        v112,
                        v113,
                        v114,
                        v115);
                      v117 = System_String__Format_64459188(v67, (System_Object_array *)v68, 0);
                      v118 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                      v119 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v121 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C942E4(CommonConfirmDialog_ClickDelegate_TypeInfo);
                      CommonConfirmDialog_ClickDelegate___ctor(
                        v121,
                        (Il2CppObject *)v7,
                        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__,
                        0);
                      supportServantListViewManager = (SupportServantListViewManager_o *)BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        supportServantListViewManager = (SupportServantListViewManager_o *)BalanceConfig_TypeInfo;
                      }
                      if ( !Instance )
                        goto LABEL_106;
                      CommonUI__OpenConfirmDialog_31583464(
                        (CommonUI_o *)Instance,
                        v66,
                        v117,
                        v118,
                        v119,
                        v121,
                        HIDWORD(supportServantListViewManager->fields.sort[2].fields.isPresentBoxFilterList),
                        (int32_t)supportServantListViewManager->fields.sort[2].fields.isSvtEquipEffectFilterDic,
                        15.0,
                        700,
                        0,
                        480,
                        -162.5,
                        0,
                        0,
                        240,
                        0,
                        0);
                      return;
                    }
LABEL_107:
                    sub_1C942F8(supportServantListViewManager);
                  }
                }
              }
            }
          }
        }
        v125 = sub_1C94314();
        sub_1C941C0(v125, 0);
      }
      if ( LOBYTE(supportServantListViewManager->fields.objectList) )
      {
        v48 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v48 = (_QWORD *)sub_1C940B0(Method_SupportServantSelectMenu_OnSelectItem__);
        v49 = (System_Reflection_MethodBase_o *)sub_1C9407C(v48, v48[4]);
        OverwriteAssetSoundName__PlaySystemSe(v49, 0, 0, 0);
        SupportServantSelectMenu__Init(this, v50);
        supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0);
        if ( !*v23 )
          goto LABEL_106;
        classPos = this->fields.classPos;
        v53 = (*v23)->fields.userServantEntity;
        v54 = 2;
      }
      else
      {
        if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(
               (SupportServantListViewItem_o *)supportServantListViewManager,
               v9) )
        {
          goto LABEL_50;
        }
        supportServantListViewManager = (SupportServantListViewManager_o *)*v23;
        if ( !*v23 )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewItem__get_IsUseServant(
                                                                             (SupportServantListViewItem_o *)supportServantListViewManager,
                                                                             v9);
        if ( ((unsigned __int8)supportServantListViewManager & 1) != 0 )
          goto LABEL_50;
        v55 = *v23;
        if ( !*v23 )
          goto LABEL_106;
        if ( v55->fields.isEventJoin || v55->fields.isUseInSet )
        {
LABEL_50:
          v56 = Method_SupportServantSelectMenu_OnSelectItem__;
          if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
            v56 = (_QWORD *)sub_1C940B0(Method_SupportServantSelectMenu_OnSelectItem__);
          v26 = (System_Reflection_MethodBase_o *)sub_1C9407C(v56, v56[4]);
          v27 = 2;
LABEL_20:
          OverwriteAssetSoundName__PlaySystemSe(v26, v27, 0, 0);
          v29 = this->fields.supportServantListViewManager;
          v30 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C942E4(SupportServantListViewManager_CallbackFunc_TypeInfo);
          v32 = Method_SupportServantSelectMenu_OnSelectItem__;
          goto LABEL_21;
        }
        v122 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v122 = (_QWORD *)sub_1C940B0(Method_SupportServantSelectMenu_OnSelectItem__);
        v123 = (System_Reflection_MethodBase_o *)sub_1C9407C(v122, v122[4]);
        OverwriteAssetSoundName__PlaySystemSe(v123, 0, 0, 0);
        SupportServantSelectMenu__Init(this, v124);
        supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0);
        if ( !*v23 )
          goto LABEL_106;
        classPos = this->fields.classPos;
        v53 = (*v23)->fields.userServantEntity;
        v54 = 1;
      }
      SupportServantSelectMenu__Callback(this, v54, classPos, v53, v51);
    }
  }
}


void SupportServantSelectMenu__Open(
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v25; // x1
  UnityEngine_GameObject_o *v26; // x27
  struct SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v28; // x21
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  const MethodInfo *v36; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v38; // x20
  const MethodInfo *v39; // [xsp+0h] [xbp-70h]

  if ( (byte_4D28ECB & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_SupportServantSelectMenu_EndOpen__);
    sub_1C94098(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_1C94098(&StringLiteral_4494/*"ClassPos"*/);
    byte_4D28ECB = 1;
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)supportServantData);
  this->fields.callbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_16;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0);
  if ( !v26 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v26, (unsigned __int8)gameObject & 1, 0);
  this->fields.classPos = classPos;
  if ( UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4494/*"ClassPos"*/, -1, 0) != classPos )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    ListViewManager__ClearScrollBarValue((ListViewManager_o *)gameObject, 1, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_16;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0, 1, 0, 73, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_16;
  TitleInfoControl__setBackBtnSprite_40657648((TitleInfoControl_o *)gameObject, 1, 0, 0, 0);
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
    v39);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v28 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C942E4(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v29);
  if ( !supportServantListViewManager
    || (supportServantListViewManager->fields.callbackFunc = v28,
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&supportServantListViewManager->fields.callbackFunc,
          (int32_t)v28,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35),
        SupportServantListViewManager__SetMode_36430008(supportServantListViewManager, 1, v36),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager) == 0)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = (UnityEngine_GameObject_o *)SupportServantListViewManager__GetScaleButtonSpriteName(
                                                   (SupportServantListViewManager_o *)gameObject,
                                                   v25),
        !scaleChangeTabSprite) )
  {
LABEL_16:
    sub_1C942F0(gameObject, v25);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0);
  this->fields.state = 2;
  v38 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_SupportServantSelectMenu_EndOpen__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v38, 0);
}


void SupportServantSelectMenu__PushRequest(
        SupportServantSelectMenu_o *this,
        SupportServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t m_CachedPtr; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q0
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v17; // x0
  __int128 v18; // q1
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  Il2CppObject *Request_object; // x0
  __int128 v21; // q1
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w26
  int32_t v24; // w27
  int32_t v25; // w28
  int32_t v26; // w29
  bool IsLock; // w21
  char v28; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v32; // w0
  __int64 v33; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct System_Threading_SynchronizationContext_o *context; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  struct System_Threading_Thread_o *v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4D28ED6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SupportServantSelectMenu_EndCardFavoriteRequest__);
    byte_4D28ED6 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !userServantEntity )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  m_CachedPtr = v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v45, 0);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0);
  v14 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v7->fields.writeMasterDataThread;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v43, 0);
  v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v42, 0);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_SupportServantSelectMenu_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v41, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                      userServantEntity->fields.imageLimitCount,
                      0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(userServantEntity->fields.dispLimitCount, 0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
          userServantEntity->fields.commandCardLimitCount,
          0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(userServantEntity->fields.iconLimitCount, 0);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
          userServantEntity->fields.portraitLimitCount,
          0);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                  userServantEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                       userServantEntity->fields.randomLimitCount,
                       0);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
          userServantEntity->fields.randomLimitCountSupport,
          0);
  v33 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v46, 0);
  if ( !v22 )
LABEL_18:
    sub_1C942F0(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    imageLimitCount,
    v23,
    v24,
    v25,
    v26,
    context == (struct System_Threading_SynchronizationContext_o *)v37,
    IsLock,
    v28 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != (struct System_Threading_Thread_o *)v39,
    0);
}


void SupportServantSelectMenu__add_callbackFunc(
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

  if ( (byte_4D28EC8 & 1) == 0 )
  {
    sub_1C94098(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    byte_4D28EC8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportServantSelectMenu_CallbackFunc_c *)v8->klass != SupportServantSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  SupportServantSelectMenu__remove_callbackFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantSelectMenu__endCancelButton(
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
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0) )
    {
LABEL_7:
      sub_1C942F0(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_36424200(supportServantListViewManager, 4, v5);
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0);
  if ( !supportServantListViewManager )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0);
  SupportServantSelectMenu__Callback(this, 0, -1, 0, v6);
}


void SupportServantSelectMenu__onClickChoiceTabButton(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4D28ED0 & 1) == 0 )
  {
    sub_1C94098(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_1C94098(&Method_SupportServantSelectMenu_EndClickTabChoice__);
    sub_1C94098(&Method_SupportServantSelectMenu_onClickChoiceTabButton__);
    byte_4D28ED0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SupportServantSelectMenu_onClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C942E4(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabChoice__,
          v8);
        SupportServantSelectMenu__statusRequest(this, v7, v9);
        return;
      }
      v10 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C942E4(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabChoice__,
        v11);
      SupportServantSelectMenu__statusRequest(this, v10, v12);
    }
    SupportServantSelectMenu__setModeTabKind(this, 2, v5);
  }
}


void SupportServantSelectMenu__onClickLockTabButton(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4D28ECF & 1) == 0 )
  {
    sub_1C94098(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_1C94098(&Method_SupportServantSelectMenu_EndClickTabLock__);
    sub_1C94098(&Method_SupportServantSelectMenu_onClickLockTabButton__);
    byte_4D28ECF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SupportServantSelectMenu_onClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C942E4(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabLock__,
          v8);
        SupportServantSelectMenu__statusRequest(this, v7, v9);
        return;
      }
      v10 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C942E4(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabLock__,
        v11);
      SupportServantSelectMenu__statusRequest(this, v10, v12);
    }
    SupportServantSelectMenu__setModeTabKind(this, 1, v5);
  }
}


void SupportServantSelectMenu__onClickNormalTabButton(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4D28ECE & 1) == 0 )
  {
    sub_1C94098(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_1C94098(&Method_SupportServantSelectMenu_EndClickTabNormal__);
    sub_1C94098(&Method_SupportServantSelectMenu_onClickNormalTabButton__);
    byte_4D28ECE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SupportServantSelectMenu_onClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C942E4(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabNormal__,
      v6);
    SupportServantSelectMenu__statusRequest(this, v5, v7);
  }
}


void SupportServantSelectMenu__onClickPushTabButton(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4D28ED1 & 1) == 0 )
  {
    sub_1C94098(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_1C94098(&Method_SupportServantSelectMenu_EndClickTabPush__);
    sub_1C94098(&Method_SupportServantSelectMenu_onClickPushTabButton__);
    byte_4D28ED1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_SupportServantSelectMenu_onClickPushTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_SupportServantSelectMenu_onClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C942E4(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabPush__,
      v6);
    SupportServantSelectMenu__statusRequest(this, v5, v7);
  }
}


void SupportServantSelectMenu__remove_callbackFunc(
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

  if ( (byte_4D28EC9 & 1) == 0 )
  {
    sub_1C94098(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    byte_4D28EC9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportServantSelectMenu_CallbackFunc_c *)v8->klass != SupportServantSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  SupportServantSelectMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantSelectMenu__setModeTabKind(
        SupportServantSelectMenu_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *normalTabButton; // x0
  UICommonButton_o *v6; // x21
  bool enabled; // w0
  System_String_o **v8; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v10; // w0
  System_String_o **v11; // x8
  UICommonButton_o *choiceTabButton; // x21
  bool v13; // w0
  System_String_o **v14; // x8
  UICommonButton_o *pushTabButton; // x21
  bool v16; // w0
  __int64 *v17; // x8
  const MethodInfo *v18; // x2
  UILabel_o *explanationLabel; // x21
  __int64 *v20; // x8
  struct SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v22; // x21
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w1

  if ( (byte_4D28ED2 & 1) == 0 )
  {
    sub_1C94098(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_1C94098(&StringLiteral_11705/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C94098(&StringLiteral_17742/*"button_push_reg"*/);
    sub_1C94098(&StringLiteral_17743/*"button_push_unreg"*/);
    sub_1C94098(&StringLiteral_17728/*"button_allchoice_reg"*/);
    sub_1C94098(&StringLiteral_17731/*"button_alllock_unreg"*/);
    sub_1C94098(&StringLiteral_11703/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C94098(&StringLiteral_11704/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C94098(&StringLiteral_17744/*"button_select_reg"*/);
    sub_1C94098(&StringLiteral_12624/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    sub_1C94098(&StringLiteral_17745/*"button_select_unreg"*/);
    sub_1C94098(&StringLiteral_17730/*"button_alllock_reg"*/);
    sub_1C94098(&StringLiteral_17729/*"button_allchoice_unreg"*/);
    byte_4D28ED2 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( normalTabButton )
    {
      UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0);
      v6 = this->fields.normalTabButton;
      if ( v6 )
      {
        enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0);
        UICommonButton__SetColliderEnable(v6, enabled, 1, 0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
        if ( normalTabButton )
        {
          v8 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17745/*"button_select_unreg"*/ : &StringLiteral_17744/*"button_select_reg"*/);
          UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
          normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
          if ( normalTabButton )
          {
            UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0);
            lockTabButton = this->fields.lockTabButton;
            if ( lockTabButton )
            {
              v10 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
              UICommonButton__SetColliderEnable(lockTabButton, v10, 1, 0);
              normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
              if ( normalTabButton )
              {
                v11 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17730/*"button_alllock_reg"*/ : &StringLiteral_17731/*"button_alllock_unreg"*/);
                UISprite__set_spriteName((UISprite_o *)normalTabButton, *v11, 0);
                normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
                if ( normalTabButton )
                {
                  UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0);
                  choiceTabButton = this->fields.choiceTabButton;
                  if ( choiceTabButton )
                  {
                    v13 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
                    UICommonButton__SetColliderEnable(choiceTabButton, v13, 1, 0);
                    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
                    if ( normalTabButton )
                    {
                      v14 = (System_String_o **)(this->fields.tabModeKind == 2
                                               ? &StringLiteral_17728/*"button_allchoice_reg"*/
                                               : &StringLiteral_17729/*"button_allchoice_unreg"*/);
                      UISprite__set_spriteName((UISprite_o *)normalTabButton, *v14, 0);
                      normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
                      if ( normalTabButton )
                      {
                        UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0);
                        pushTabButton = this->fields.pushTabButton;
                        if ( pushTabButton )
                        {
                          v16 = UnityEngine_Behaviour__get_enabled(
                                  (UnityEngine_Behaviour_o *)this->fields.pushTabButton,
                                  0);
                          UICommonButton__SetColliderEnable(pushTabButton, v16, 1, 0);
                          normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
                          if ( normalTabButton )
                          {
                            if ( this->fields.tabModeKind == 3 )
                              v17 = &StringLiteral_17742/*"button_push_reg"*/;
                            else
                              v17 = &StringLiteral_17743/*"button_push_unreg"*/;
                            UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v17, 0);
                            switch ( this->fields.tabModeKind )
                            {
                              case 0:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v20 = &StringLiteral_12624/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
                                goto LABEL_41;
                              case 1:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v20 = &StringLiteral_11704/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
                                goto LABEL_41;
                              case 2:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v20 = &StringLiteral_11703/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
                                goto LABEL_41;
                              case 3:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v20 = &StringLiteral_11705/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_41:
                                normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                                               (System_String_o *)*v20,
                                                                               0);
                                if ( !explanationLabel )
                                  break;
                                UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0);
LABEL_43:
                                normalTabButton = (UnityEngine_Behaviour_o *)this->fields.supportServantListViewManager;
                                if ( !normalTabButton )
                                  break;
                                LOBYTE(normalTabButton[20].klass) = this->fields.tabModeKind != 0;
                                if ( this->fields.state != 2 )
                                {
                                  v30 = 1;
                                  goto LABEL_48;
                                }
                                SupportServantListViewManager__UpdateItemState(
                                  (SupportServantListViewManager_o *)normalTabButton,
                                  modeKind == 3,
                                  v18);
                                supportServantListViewManager = this->fields.supportServantListViewManager;
                                v22 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C942E4(SupportServantListViewManager_CallbackFunc_TypeInfo);
                                SupportServantListViewManager_CallbackFunc___ctor(
                                  v22,
                                  (Il2CppObject *)this,
                                  (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
                                  v23);
                                if ( supportServantListViewManager )
                                {
                                  supportServantListViewManager->fields.callbackFunc = v22;
                                  sub_1C9403C(
                                    (GrandQuestFolderBoardItem_o *)&supportServantListViewManager->fields.callbackFunc,
                                    (int32_t)v22,
                                    v24,
                                    v25,
                                    v26,
                                    v27,
                                    v28,
                                    v29);
                                  v30 = 2;
                                  normalTabButton = (UnityEngine_Behaviour_o *)supportServantListViewManager;
LABEL_48:
                                  SupportServantListViewManager__SetMode_36430008(
                                    (SupportServantListViewManager_o *)normalTabButton,
                                    v30,
                                    v18);
                                  return;
                                }
                                break;
                              default:
                                goto LABEL_43;
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
    sub_1C942F0(normalTabButton, *(_QWORD *)&modeKind);
  }
}


void SupportServantSelectMenu__statusRequest(
        SupportServantSelectMenu_o *this,
        SupportServantSelectMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tabModeKind; // w8
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // x1
  System_Int64_array *v16; // x2
  bool v17; // w4
  bool v18; // w5
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  System_Int64_array *v26; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D28ED4 & 1) == 0 )
  {
    sub_1C94098(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C94098(&Method_SupportServantSelectMenu_EndStatusSync__);
    byte_4D28ED4 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v26 = 0;
  choiceList = 0;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_21;
    if ( SupportServantListViewManager__GetSwapChoiceList(supportServantListViewManager, &choiceList, &v26, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                           v25,
                                                                           (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v16 = v26;
        v15 = choiceList;
        v18 = 1;
        v17 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C942F0(supportServantListViewManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_21;
    if ( SupportServantListViewManager__GetSwapLockList(supportServantListViewManager, &lockList, &unlockList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                           v14,
                                                                           (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v16 = unlockList;
        v15 = lockList;
        v17 = 1;
        v18 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantListViewManager,
          v15,
          v16,
          0,
          v17,
          v18,
          0);
        return;
      }
      goto LABEL_21;
    }
  }
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}


void SupportServantSelectMenu_CallbackFunc___ctor(
        SupportServantSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC52E4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC5284;
}


System_IAsyncResult_o *SupportServantSelectMenu_CallbackFunc__BeginInvoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v12[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v13; // [xsp+10h] [xbp-60h]
  int32_t v14; // [xsp+28h] [xbp-48h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-44h] BYREF

  v14 = classPos;
  v15 = result;
  if ( (byte_4D28ED9 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&SupportSelectRootComponent_ResultKind_TypeInfo);
    byte_4D28ED9 = 1;
  }
  v13 = 0u;
  v12[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  *(_QWORD *)&v13 = entity;
  return (System_IAsyncResult_o *)sub_1C9404C(this, v12, callback, object);
}


void SupportServantSelectMenu_CallbackFunc__EndInvoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void SupportServantSelectMenu_CallbackFunc__Invoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, UserServantEntity_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    classPos,
    entity,
    this->fields.method);
}


void SupportServantSelectMenu_RequestCallbackFunc___ctor(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC5344;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC52FC;
}


System_IAsyncResult_o *SupportServantSelectMenu_RequestCallbackFunc__BeginInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4D28EDA & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D28EDA = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void SupportServantSelectMenu_RequestCallbackFunc__EndInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void SupportServantSelectMenu_RequestCallbackFunc__Invoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}


void SupportServantSelectMenu___c__DisplayClass31_0___ctor(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SupportServantSelectMenu___c__DisplayClass31_0___OnSelectItem_b__0(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct SupportServantSelectMenu_o *_4__this; // x20
  struct SupportServantListViewManager_o *supportServantListViewManager; // x19
  SupportServantListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x2

  if ( (byte_4D28EDB & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_1C94098(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__);
    byte_4D28EDB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31583752(v7, _9__1, 0);
      return;
    }
LABEL_12:
    sub_1C942F0(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v17 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C942E4(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v18);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  supportServantListViewManager->fields.callbackFunc = v17;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&supportServantListViewManager->fields.callbackFunc,
    (int32_t)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  SupportServantListViewManager__SetMode_36430008(supportServantListViewManager, 2, v25);
}


void SupportServantSelectMenu___c__DisplayClass31_0___OnSelectItem_b__1(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C942F0(this, method);
  SupportServantSelectMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}