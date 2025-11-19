void SupportServantSelectMenu___ctor(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CB2A8D & 1) == 0 )
  {
    sub_1C6BA08(&BaseMenu_TypeInfo);
    byte_4CB2A8D = 1;
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
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct SupportServantSelectMenu_CallbackFunc_o *v6; // x22
  struct SupportServantSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v6 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C6B9AC(p_callbackFunc, 0, classPos, (const MethodInfo *)entity);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, UserServantEntity_o *, intptr_t))v6->fields.invoke_impl)(
      v6->fields.method_code,
      (unsigned int)result,
      (unsigned int)classPos,
      entity,
      v6->fields.method);
  }
}


void SupportServantSelectMenu__ClearScrollValue(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_1C6BC60(0, method);
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4CB2A8C & 1) == 0 )
  {
    sub_1C6BA08(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SupportServantSelectMenu_OnSelectItem__);
    byte_4CB2A8C = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (SupportServantListViewManager__UpdateItemState(supportServantListViewManager, 1, method),
        v5 = this->fields.supportServantListViewManager,
        v6 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C6BC54(SupportServantListViewManager_CallbackFunc_TypeInfo),
        SupportServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
          v7),
        !v5) )
  {
    sub_1C6BC60(supportServantListViewManager, result);
  }
  v5->fields.callbackFunc = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9);
  SupportServantListViewManager__SetMode_36075480(v5, 2, v10);
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
      sub_1C6BC60(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_36069672(supportServantListViewManager, 4, v5);
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
      sub_1C6BC60(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_36069672(supportServantListViewManager, 4, v5);
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
      sub_1C6BC60(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_36069672(supportServantListViewManager, 4, v5);
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
      sub_1C6BC60(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_36069672(supportServantListViewManager, 4, v5);
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4CB2A81 & 1) == 0 )
  {
    sub_1C6BA08(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SupportServantSelectMenu_OnSelectItem__);
    byte_4CB2A81 = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v4 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C6BC54(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v5);
  if ( !supportServantListViewManager )
    sub_1C6BC60(v6, v7);
  supportServantListViewManager->fields.callbackFunc = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&supportServantListViewManager->fields.callbackFunc, (int32_t)v4, v8, v9);
  SupportServantListViewManager__SetMode_36075480(supportServantListViewManager, 2, v10);
}


void SupportServantSelectMenu__EndStatusSync(
        SupportServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_requestCallback; // x0
  struct SupportServantSelectMenu_RequestCallbackFunc_o *v5; // x19
  struct SupportServantSelectMenu_RequestCallbackFunc_o *requestCallback; // t1

  requestCallback = this->fields.requestCallback;
  p_requestCallback = (CGThumbnailListItem_o *)&this->fields.requestCallback;
  v5 = requestCallback;
  if ( requestCallback )
  {
    p_requestCallback->klass = 0;
    sub_1C6B9AC(p_requestCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      1,
      v5->fields.method);
  }
}


void SupportServantSelectMenu__Init(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  UICommonButton_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v7; // x2

  if ( (byte_4CB2A7F & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_12574/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    byte_4CB2A7F = 1;
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
                                                                       (System_String_o *)StringLiteral_12574/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                       0);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0),
        (normalTabButton = this->fields.normalTabButton) == 0) )
  {
LABEL_9:
    sub_1C6BC60(supportServantListViewManager, method);
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
    sub_1C6BC60(0, method);
  SupportServantListViewManager__RequestListObject_36069672(supportServantListViewManager, 4, v2);
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

  if ( (byte_4CB2A88 & 1) == 0 )
  {
    sub_1C6BA08(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SupportServantSelectMenu_OnClickCancel__);
    sub_1C6BA08(&Method_SupportServantSelectMenu_endCancelButton__);
    sub_1C6BA08(&StringLiteral_4481/*"ClassPos"*/);
    byte_4CB2A88 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_SupportServantSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4481/*"ClassPos"*/, this->fields.classPos, 0);
    supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      sub_1C6BC60(0, v5);
    ListViewManager__SetScrollBarValue(supportServantListViewManager, 0);
    v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C6BC54(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4CB2A8A & 1) == 0 )
  {
    sub_1C6BA08(&Method_SupportServantSelectMenu_OnClickScaleChange__);
    byte_4CB2A8A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_SupportServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
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
      sub_1C6BC60(supportServantListViewManager, v5);
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
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  SupportServantListViewItem_o *Item; // x1
  SupportServantListViewItem_o **v15; // x19
  int32_t tabModeKind; // w8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  int32_t v19; // w1
  _QWORD *v20; // x0
  struct SupportServantListViewManager_o *v21; // x19
  SupportServantListViewManager_CallbackFunc_o *v22; // x0
  const MethodInfo *v23; // x3
  void *v24; // x2
  struct SupportServantListViewManager_CallbackFunc_o *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  _BOOL4 isInput; // w23
  _QWORD *v30; // x8
  System_Reflection_MethodBase_o *v31; // x0
  const MethodInfo *v32; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v35; // q1
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x4
  int32_t classPos; // w2
  UserServantEntity_o *v41; // x3
  int32_t v42; // w1
  SupportServantListViewItem_o *v43; // x8
  _QWORD *v44; // x0
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v46; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v49; // x27
  UserServantEntity_o *v50; // x8
  int32_t m_CancellationTokenSource; // w28
  int32_t v52; // w26
  Il2CppObject *Master_object; // x23
  System_String_o *v54; // x21
  System_String_o *v55; // x22
  __int64 v56; // x24
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  SupportServantListViewManager_o *v59; // x28
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  SupportServantListViewManager_o *v62; // x27
  int32_t v63; // w0
  Il2CppClass *v64; // x8
  int32_t v65; // w25
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  SupportServantListViewManager_o *v68; // x25
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  SupportServantListViewManager_o *v71; // x25
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  SupportServantListViewManager_o *v74; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v75; // x8
  int32_t v76; // w19
  int32_t v77; // w0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  SupportServantListViewManager_o *v80; // x19
  System_String_o *v81; // x19
  System_String_o *v82; // x22
  System_String_o *v83; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v85; // x25
  _QWORD *v86; // x0
  System_Reflection_MethodBase_o *v87; // x0
  const MethodInfo *v88; // x1
  __int64 v89; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_4CB2A82 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C6BA08(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&Rarity_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_1C6BA08(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__);
    sub_1C6BA08(&SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_11949/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_11947/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_11948/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_11950/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4CB2A82 = 1;
  }
  v7 = sub_1C6BC54(SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_106;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
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
      Item = SupportServantListViewManager__GetItem(supportServantListViewManager, offset, v12);
    }
    *(_QWORD *)(v7 + 24) = Item;
    v15 = (SupportServantListViewItem_o **)(v7 + 24);
    sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)Item, (int32_t)v12, v13);
    if ( kind == 2 )
    {
      tabModeKind = this->fields.tabModeKind;
      if ( tabModeKind == 2 )
      {
        if ( !*v15 )
          goto LABEL_106;
        (*v15)->fields.isSwapChoice ^= 1u;
        v20 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v20 = (_QWORD *)sub_1C6BA20(Method_SupportServantSelectMenu_OnSelectItem__);
        v18 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v20, v20[4]);
        v19 = 0;
        goto LABEL_20;
      }
      if ( tabModeKind == 1 )
      {
        if ( !*v15 )
          goto LABEL_106;
        (*v15)->fields.isSwapLock ^= 1u;
        v17 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v17 = (_QWORD *)sub_1C6BA20(Method_SupportServantSelectMenu_OnSelectItem__);
        v18 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v17, v17[4]);
        v19 = 11;
        goto LABEL_20;
      }
      supportServantListViewManager = (SupportServantListViewManager_o *)*v15;
      if ( !*v15 )
        goto LABEL_106;
      if ( tabModeKind == 3 )
      {
        isInput = supportServantListViewManager->fields.isInput;
        v30 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v30 = (_QWORD *)sub_1C6BA20(Method_SupportServantSelectMenu_OnSelectItem__);
        v31 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v30, v30[4]);
        if ( !isInput )
        {
          OverwriteAssetSoundName__PlaySystemSe(v31, 2, 0, 0);
          this->fields.state = 2;
          v21 = this->fields.supportServantListViewManager;
          v22 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C6BC54(SupportServantListViewManager_CallbackFunc_TypeInfo);
          v24 = Method_SupportServantSelectMenu_OnSelectItem__;
LABEL_21:
          v25 = v22;
          SupportServantListViewManager_CallbackFunc___ctor(v22, (Il2CppObject *)this, (intptr_t)v24, v23);
          if ( v21 )
          {
            v21->fields.callbackFunc = v25;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v21->fields.callbackFunc, (int32_t)v25, v26, v27);
            SupportServantListViewManager__SetMode_36075480(v21, 2, v28);
            return;
          }
LABEL_106:
          sub_1C6BC60(supportServantListViewManager, v9);
        }
        OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0);
        supportServantListViewManager = (SupportServantListViewManager_o *)UserGameMaster__getSelfUserGame(0);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        dropList = (int64_t)supportServantListViewManager->fields.dropList;
        if ( !dropList )
          goto LABEL_35;
        if ( !*v15 )
          goto LABEL_106;
        userServantEntity = (*v15)->fields.userServantEntity;
        if ( !userServantEntity )
          goto LABEL_106;
        v35 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v91.fields.fakeValue = v35;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v90 = v91;
        if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v90, 0) )
        {
LABEL_35:
          SupportServantSelectMenu__PushRequest(this, *v15, v32);
          return;
        }
        supportServantListViewManager = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                             (DataManager_o *)supportServantListViewManager,
                                                                             (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
                   dropList,
                   (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        supportServantListViewManager = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                             (DataManager_o *)supportServantListViewManager,
                                                                             (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !Entity )
          goto LABEL_106;
        v46 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
        klass = Entity[5].klass;
        monitor = Entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v92.fields.currentCryptoKey = klass;
        *(_QWORD *)&v92.fields.fakeValue = monitor;
        supportServantListViewManager = (SupportServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                                             v92,
                                                                             0);
        if ( !v46 )
          goto LABEL_106;
        v49 = DataMasterBase_object__object__int___GetEntity(
                v46,
                (int32_t)supportServantListViewManager,
                (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        supportServantListViewManager = (SupportServantListViewManager_o *)UserServantEntity__GetOverwriteStatus(
                                                                             (UserServantEntity_o *)Entity,
                                                                             0,
                                                                             0);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        if ( !*v15 )
          goto LABEL_106;
        v50 = (*v15)->fields.userServantEntity;
        if ( !v50 )
          goto LABEL_106;
        m_CancellationTokenSource = (int32_t)supportServantListViewManager->fields.m_CancellationTokenSource;
        supportServantListViewManager = (SupportServantListViewManager_o *)UserServantEntity__GetOverwriteStatus(
                                                                             v50,
                                                                             0,
                                                                             0);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        v52 = (int32_t)supportServantListViewManager->fields.m_CancellationTokenSource;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11950/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
        v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11949/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
        v56 = sub_1C6BAB0(object___TypeInfo, 6);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        supportServantListViewManager = (SupportServantListViewManager_o *)Rarity__getRarityType(
                                                                             m_CancellationTokenSource,
                                                                             0);
        if ( !v56 )
          goto LABEL_106;
        v59 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1C6BB44(
                                                                                   supportServantListViewManager,
                                                                                   *(_QWORD *)(*(_QWORD *)v56 + 64LL))) != 0 )
        {
          if ( !*(_DWORD *)(v56 + 24) )
            goto LABEL_107;
          *(_QWORD *)(v56 + 32) = v59;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v56 + 32), (int32_t)v59, v57, v58);
          if ( !v49 )
            goto LABEL_106;
          supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getClassName(
                                                                               (ServantEntity_o *)v49,
                                                                               0);
          v62 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1C6BB44(
                                                                                     supportServantListViewManager,
                                                                                     *(_QWORD *)(*(_QWORD *)v56 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v56 + 24) <= 1u )
              goto LABEL_107;
            *(_QWORD *)(v56 + 40) = v62;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v56 + 40), (int32_t)v62, v60, v61);
            v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                    (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                    0);
            v64 = Entity[6].klass;
            *(_QWORD *)&v93.fields.fakeValue = Entity[6].monitor;
            v65 = v63;
            *(_QWORD *)&v93.fields.currentCryptoKey = v64;
            supportServantListViewManager = (SupportServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                                                 v93,
                                                                                 0);
            if ( !Master_object )
              goto LABEL_106;
            supportServantListViewManager = (SupportServantListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                                 (ServantLimitImageMaster_o *)Master_object,
                                                                                 v65,
                                                                                 (int32_t)supportServantListViewManager,
                                                                                 1,
                                                                                 0);
            v68 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1C6BB44(
                                                                                       supportServantListViewManager,
                                                                                       *(_QWORD *)(*(_QWORD *)v56 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v56 + 24) <= 2u )
                goto LABEL_107;
              *(_QWORD *)(v56 + 48) = v68;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v56 + 48), (int32_t)v68, v66, v67);
              supportServantListViewManager = (SupportServantListViewManager_o *)Rarity__getRarityType(v52, 0);
              v71 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1C6BB44(
                                                                                         supportServantListViewManager,
                                                                                         *(_QWORD *)(*(_QWORD *)v56 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v56 + 24) <= 3u )
                  goto LABEL_107;
                *(_QWORD *)(v56 + 56) = v71;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v56 + 56), (int32_t)v71, v69, v70);
                if ( !*v15 )
                  goto LABEL_106;
                supportServantListViewManager = (SupportServantListViewManager_o *)(*v15)->fields.servantEntity;
                if ( !supportServantListViewManager )
                  goto LABEL_106;
                supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getClassName(
                                                                                     (ServantEntity_o *)supportServantListViewManager,
                                                                                     0);
                v74 = supportServantListViewManager;
                if ( !supportServantListViewManager
                  || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1C6BB44(
                                                                                           supportServantListViewManager,
                                                                                           *(_QWORD *)(*(_QWORD *)v56 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v56 + 24) <= 4u )
                    goto LABEL_107;
                  *(_QWORD *)(v56 + 64) = v74;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v56 + 64), (int32_t)v74, v72, v73);
                  supportServantListViewManager = (SupportServantListViewManager_o *)*v15;
                  if ( !*v15 )
                    goto LABEL_106;
                  supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewItem__get_SvtId(
                                                                                       (SupportServantListViewItem_o *)supportServantListViewManager,
                                                                                       v9);
                  if ( !*v15 )
                    goto LABEL_106;
                  v75 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v15)->fields.userServantEntity;
                  if ( !v75 )
                    goto LABEL_106;
                  v76 = (int)supportServantListViewManager;
                  v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v75[6], 0);
                  supportServantListViewManager = (SupportServantListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                                       (ServantLimitImageMaster_o *)Master_object,
                                                                                       v76,
                                                                                       v77,
                                                                                       1,
                                                                                       0);
                  v80 = supportServantListViewManager;
                  if ( !supportServantListViewManager
                    || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1C6BB44(
                                                                                             supportServantListViewManager,
                                                                                             *(_QWORD *)(*(_QWORD *)v56 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v56 + 24) > 5u )
                    {
                      *(_QWORD *)(v56 + 72) = v80;
                      sub_1C6B9AC((CGThumbnailListItem_o *)(v56 + 72), (int32_t)v80, v78, v79);
                      v81 = System_String__Format_64008236(v55, (System_Object_array *)v56, 0);
                      v82 = LocalizationManager__Get((System_String_o *)StringLiteral_11948/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                      v83 = LocalizationManager__Get((System_String_o *)StringLiteral_11947/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v85 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C6BC54(CommonConfirmDialog_ClickDelegate_TypeInfo);
                      CommonConfirmDialog_ClickDelegate___ctor(
                        v85,
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
                      CommonUI__OpenConfirmDialog_31417724(
                        (CommonUI_o *)Instance,
                        v54,
                        v81,
                        v82,
                        v83,
                        v85,
                        (int32_t)supportServantListViewManager->fields.sort[2].fields.isPresentBoxFilterList,
                        HIDWORD(supportServantListViewManager->fields.sort[2].fields.isPresentBoxRarityFilterList),
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
                    sub_1C6BC68(supportServantListViewManager);
                  }
                }
              }
            }
          }
        }
        v89 = sub_1C6BC84();
        sub_1C6BB30(v89, 0);
      }
      if ( LOBYTE(supportServantListViewManager->fields.objectList) )
      {
        v36 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v36 = (_QWORD *)sub_1C6BA20(Method_SupportServantSelectMenu_OnSelectItem__);
        v37 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v36, v36[4]);
        OverwriteAssetSoundName__PlaySystemSe(v37, 0, 0, 0);
        SupportServantSelectMenu__Init(this, v38);
        supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0);
        if ( !*v15 )
          goto LABEL_106;
        classPos = this->fields.classPos;
        v41 = (*v15)->fields.userServantEntity;
        v42 = 2;
      }
      else
      {
        if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(
               (SupportServantListViewItem_o *)supportServantListViewManager,
               v9) )
        {
          goto LABEL_50;
        }
        supportServantListViewManager = (SupportServantListViewManager_o *)*v15;
        if ( !*v15 )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewItem__get_IsUseServant(
                                                                             (SupportServantListViewItem_o *)supportServantListViewManager,
                                                                             v9);
        if ( ((unsigned __int8)supportServantListViewManager & 1) != 0 )
          goto LABEL_50;
        v43 = *v15;
        if ( !*v15 )
          goto LABEL_106;
        if ( v43->fields.isEventJoin || v43->fields.isUseInSet )
        {
LABEL_50:
          v44 = Method_SupportServantSelectMenu_OnSelectItem__;
          if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
            v44 = (_QWORD *)sub_1C6BA20(Method_SupportServantSelectMenu_OnSelectItem__);
          v18 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v44, v44[4]);
          v19 = 2;
LABEL_20:
          OverwriteAssetSoundName__PlaySystemSe(v18, v19, 0, 0);
          v21 = this->fields.supportServantListViewManager;
          v22 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C6BC54(SupportServantListViewManager_CallbackFunc_TypeInfo);
          v24 = Method_SupportServantSelectMenu_OnSelectItem__;
          goto LABEL_21;
        }
        v86 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v86 = (_QWORD *)sub_1C6BA20(Method_SupportServantSelectMenu_OnSelectItem__);
        v87 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v86, v86[4]);
        OverwriteAssetSoundName__PlaySystemSe(v87, 0, 0, 0);
        SupportServantSelectMenu__Init(this, v88);
        supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0);
        if ( !*v15 )
          goto LABEL_106;
        classPos = this->fields.classPos;
        v41 = (*v15)->fields.userServantEntity;
        v42 = 1;
      }
      SupportServantSelectMenu__Callback(this, v42, classPos, v41, v39);
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
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v21; // x1
  UnityEngine_GameObject_o *v22; // x27
  struct SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v30; // x20
  const MethodInfo *v31; // [xsp+0h] [xbp-70h]

  if ( (byte_4CB2A80 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SupportServantSelectMenu_EndOpen__);
    sub_1C6BA08(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_1C6BA08(&StringLiteral_4481/*"ClassPos"*/);
    byte_4CB2A80 = 1;
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)supportServantData);
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v18, v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_16;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0);
  if ( !v22 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v22, (unsigned __int8)gameObject & 1, 0);
  this->fields.classPos = classPos;
  if ( UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4481/*"ClassPos"*/, -1, 0) != classPos )
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
  TitleInfoControl__setBackBtnSprite_40069396((TitleInfoControl_o *)gameObject, 1, 0, 0, 0);
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
    v31);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v24 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C6BC54(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v24,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v25);
  if ( !supportServantListViewManager
    || (supportServantListViewManager->fields.callbackFunc = v24,
        sub_1C6B9AC(
          (CGThumbnailListItem_o *)&supportServantListViewManager->fields.callbackFunc,
          (int32_t)v24,
          v26,
          v27),
        SupportServantListViewManager__SetMode_36075480(supportServantListViewManager, 1, v28),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager) == 0)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = (UnityEngine_GameObject_o *)SupportServantListViewManager__GetScaleButtonSpriteName(
                                                   (SupportServantListViewManager_o *)gameObject,
                                                   v21),
        !scaleChangeTabSprite) )
  {
LABEL_16:
    sub_1C6BC60(gameObject, v21);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0);
  this->fields.state = 2;
  v30 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_SupportServantSelectMenu_EndOpen__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v30, 0);
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

  if ( (byte_4CB2A8B & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SupportServantSelectMenu_EndCardFavoriteRequest__);
    byte_4CB2A8B = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v45, 0);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v43, 0);
  v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v42, 0);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_SupportServantSelectMenu_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v41, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                      userServantEntity->fields.imageLimitCount,
                      0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(userServantEntity->fields.dispLimitCount, 0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
          userServantEntity->fields.commandCardLimitCount,
          0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(userServantEntity->fields.iconLimitCount, 0);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
          userServantEntity->fields.portraitLimitCount,
          0);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                  userServantEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                       userServantEntity->fields.randomLimitCount,
                       0);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
          userServantEntity->fields.randomLimitCountSupport,
          0);
  v33 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v46, 0);
  if ( !v22 )
LABEL_18:
    sub_1C6BC60(limitCountSupport, v6);
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

  if ( (byte_4CB2A7D & 1) == 0 )
  {
    sub_1C6BA08(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    byte_4CB2A7D = 1;
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
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
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
      sub_1C6BC60(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_36069672(supportServantListViewManager, 4, v5);
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

  if ( (byte_4CB2A85 & 1) == 0 )
  {
    sub_1C6BA08(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SupportServantSelectMenu_EndClickTabChoice__);
    sub_1C6BA08(&Method_SupportServantSelectMenu_onClickChoiceTabButton__);
    byte_4CB2A85 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_SupportServantSelectMenu_onClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C6BC54(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabChoice__,
          v8);
        SupportServantSelectMenu__statusRequest(this, v7, v9);
        return;
      }
      v10 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C6BC54(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4CB2A84 & 1) == 0 )
  {
    sub_1C6BA08(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SupportServantSelectMenu_EndClickTabLock__);
    sub_1C6BA08(&Method_SupportServantSelectMenu_onClickLockTabButton__);
    byte_4CB2A84 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_SupportServantSelectMenu_onClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C6BC54(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabLock__,
          v8);
        SupportServantSelectMenu__statusRequest(this, v7, v9);
        return;
      }
      v10 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C6BC54(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4CB2A83 & 1) == 0 )
  {
    sub_1C6BA08(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SupportServantSelectMenu_EndClickTabNormal__);
    sub_1C6BA08(&Method_SupportServantSelectMenu_onClickNormalTabButton__);
    byte_4CB2A83 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_SupportServantSelectMenu_onClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C6BC54(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4CB2A86 & 1) == 0 )
  {
    sub_1C6BA08(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SupportServantSelectMenu_EndClickTabPush__);
    sub_1C6BA08(&Method_SupportServantSelectMenu_onClickPushTabButton__);
    byte_4CB2A86 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_SupportServantSelectMenu_onClickPushTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_SupportServantSelectMenu_onClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C6BC54(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4CB2A7E & 1) == 0 )
  {
    sub_1C6BA08(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    byte_4CB2A7E = 1;
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
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
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
  const MethodInfo *v25; // x3
  int32_t v26; // w1

  if ( (byte_4CB2A87 & 1) == 0 )
  {
    sub_1C6BA08(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_1C6BA08(&StringLiteral_11657/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C6BA08(&StringLiteral_17669/*"button_push_reg"*/);
    sub_1C6BA08(&StringLiteral_17670/*"button_push_unreg"*/);
    sub_1C6BA08(&StringLiteral_17655/*"button_allchoice_reg"*/);
    sub_1C6BA08(&StringLiteral_17658/*"button_alllock_unreg"*/);
    sub_1C6BA08(&StringLiteral_11655/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C6BA08(&StringLiteral_11656/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C6BA08(&StringLiteral_17671/*"button_select_reg"*/);
    sub_1C6BA08(&StringLiteral_12574/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    sub_1C6BA08(&StringLiteral_17672/*"button_select_unreg"*/);
    sub_1C6BA08(&StringLiteral_17657/*"button_alllock_reg"*/);
    sub_1C6BA08(&StringLiteral_17656/*"button_allchoice_unreg"*/);
    byte_4CB2A87 = 1;
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
          v8 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17672/*"button_select_unreg"*/ : &StringLiteral_17671/*"button_select_reg"*/);
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
                v11 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17657/*"button_alllock_reg"*/ : &StringLiteral_17658/*"button_alllock_unreg"*/);
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
                                               ? &StringLiteral_17655/*"button_allchoice_reg"*/
                                               : &StringLiteral_17656/*"button_allchoice_unreg"*/);
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
                              v17 = &StringLiteral_17669/*"button_push_reg"*/;
                            else
                              v17 = &StringLiteral_17670/*"button_push_unreg"*/;
                            UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v17, 0);
                            switch ( this->fields.tabModeKind )
                            {
                              case 0:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v20 = &StringLiteral_12574/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
                                goto LABEL_41;
                              case 1:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v20 = &StringLiteral_11656/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
                                goto LABEL_41;
                              case 2:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v20 = &StringLiteral_11655/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
                                goto LABEL_41;
                              case 3:
                                explanationLabel = this->fields.explanationLabel;
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v20 = &StringLiteral_11657/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
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
                                  v26 = 1;
                                  goto LABEL_48;
                                }
                                SupportServantListViewManager__UpdateItemState(
                                  (SupportServantListViewManager_o *)normalTabButton,
                                  modeKind == 3,
                                  v18);
                                supportServantListViewManager = this->fields.supportServantListViewManager;
                                v22 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C6BC54(SupportServantListViewManager_CallbackFunc_TypeInfo);
                                SupportServantListViewManager_CallbackFunc___ctor(
                                  v22,
                                  (Il2CppObject *)this,
                                  (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
                                  v23);
                                if ( supportServantListViewManager )
                                {
                                  supportServantListViewManager->fields.callbackFunc = v22;
                                  sub_1C6B9AC(
                                    (CGThumbnailListItem_o *)&supportServantListViewManager->fields.callbackFunc,
                                    (int32_t)v22,
                                    v24,
                                    v25);
                                  v26 = 2;
                                  normalTabButton = (UnityEngine_Behaviour_o *)supportServantListViewManager;
LABEL_48:
                                  SupportServantListViewManager__SetMode_36075480(
                                    (SupportServantListViewManager_o *)normalTabButton,
                                    v26,
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
    sub_1C6BC60(normalTabButton, *(_QWORD *)&modeKind);
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
  const MethodInfo *v9; // x3
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  System_Int64_array *v11; // x1
  System_Int64_array *v12; // x2
  bool v13; // w4
  bool v14; // w5
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CB2A89 & 1) == 0 )
  {
    sub_1C6BA08(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SupportServantSelectMenu_EndStatusSync__);
    byte_4CB2A89 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v18 = 0;
  choiceList = 0;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_21;
    if ( SupportServantListViewManager__GetSwapChoiceList(supportServantListViewManager, &choiceList, &v18, v3) )
    {
      this->fields.requestCallback = callback;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v15, v16);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                           v17,
                                                                           (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v12 = v18;
        v11 = choiceList;
        v14 = 1;
        v13 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C6BC60(supportServantListViewManager, callback);
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
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.requestCallback, (int32_t)callback, v8, v9);
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                           v10,
                                                                           (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v12 = unlockList;
        v11 = lockList;
        v13 = 1;
        v14 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantListViewManager,
          v11,
          v12,
          0,
          v13,
          v14,
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9E5B0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9E550;
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
  if ( (byte_4CB2A8E & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&SupportSelectRootComponent_ResultKind_TypeInfo);
    byte_4CB2A8E = 1;
  }
  v13 = 0u;
  v12[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  *(_QWORD *)&v13 = entity;
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v12, callback, object);
}


void SupportServantSelectMenu_CallbackFunc__EndInvoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9E610;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9E5C8;
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
  if ( (byte_4CB2A8F & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB2A8F = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void SupportServantSelectMenu_RequestCallbackFunc__EndInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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
  const MethodInfo *v10; // x3
  struct SupportServantSelectMenu_o *_4__this; // x20
  struct SupportServantListViewManager_o *supportServantListViewManager; // x19
  SupportServantListViewManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2

  if ( (byte_4CB2A90 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_1C6BA08(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__);
    byte_4CB2A90 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31417952(v7, _9__1, 0);
      return;
    }
LABEL_12:
    sub_1C6BC60(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v13 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C6BC54(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v14);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  supportServantListViewManager->fields.callbackFunc = v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)&supportServantListViewManager->fields.callbackFunc, (int32_t)v13, v15, v16);
  SupportServantListViewManager__SetMode_36075480(supportServantListViewManager, 2, v17);
}


void SupportServantSelectMenu___c__DisplayClass31_0___OnSelectItem_b__1(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C6BC60(this, method);
  SupportServantSelectMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}