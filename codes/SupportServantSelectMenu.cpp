void SupportServantSelectMenu___ctor(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596CDA7 & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    byte_596CDA7 = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method, v2);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantSelectMenu__Callback(
        SupportServantSelectMenu_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct SupportServantSelectMenu_CallbackFunc_o *v9; // x22
  struct SupportServantSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(
      p_callbackFunc,
      0,
      *(System_String_o **)&classPos,
      (System_String_o *)entity,
      (int32_t)method,
      v5,
      v6,
      v7);
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
    sub_2213CDC(0, method);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_596CDA6 & 1) == 0 )
  {
    sub_2213A60(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SupportServantSelectMenu_OnSelectItem__);
    byte_596CDA6 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (SupportServantListViewManager__UpdateItemState(supportServantListViewManager, 1, method),
        v5 = this->fields.supportServantListViewManager,
        v6 = (SupportServantListViewManager_CallbackFunc_o *)sub_2213CCC(SupportServantListViewManager_CallbackFunc_TypeInfo),
        SupportServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
          v7),
        !v5) )
  {
    sub_2213CDC(supportServantListViewManager, result);
  }
  v5->fields.callbackFunc = v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  SupportServantListViewManager__SetMode_42605972(v5, 2, v14);
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
      sub_2213CDC(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_42600240(supportServantListViewManager, 4, v5);
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
      sub_2213CDC(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_42600240(supportServantListViewManager, 4, v5);
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
      sub_2213CDC(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_42600240(supportServantListViewManager, 4, v5);
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
      sub_2213CDC(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_42600240(supportServantListViewManager, 4, v5);
  }
  SupportServantSelectMenu__setModeTabKind(this, 3, method);
}


void SupportServantSelectMenu__EndOpen(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  SupportServantListViewManager_CallbackFunc_c *v3; // x0
  struct SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2

  if ( (byte_596CD9B & 1) == 0 )
  {
    sub_2213A60(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SupportServantSelectMenu_OnSelectItem__);
    byte_596CD9B = 1;
  }
  v3 = SupportServantListViewManager_CallbackFunc_TypeInfo;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  v5 = (SupportServantListViewManager_CallbackFunc_o *)sub_2213CCC(v3);
  SupportServantListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v6);
  if ( !supportServantListViewManager )
    sub_2213CDC(v7, v8);
  supportServantListViewManager->fields.callbackFunc = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&supportServantListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  SupportServantListViewManager__SetMode_42605972(supportServantListViewManager, 2, v15);
}


void SupportServantSelectMenu__EndStatusSync(
        SupportServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_requestCallback; // x0
  struct SupportServantSelectMenu_RequestCallbackFunc_o *v9; // x19
  struct SupportServantSelectMenu_RequestCallbackFunc_o *requestCallback; // t1

  requestCallback = this->fields.requestCallback;
  p_requestCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback;
  v9 = requestCallback;
  if ( requestCallback )
  {
    p_requestCallback->klass = 0;
    sub_2213A04(p_requestCallback, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      1,
      v9->fields.method);
  }
}


void SupportServantSelectMenu__Init(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  LocalizationManager_c *v6; // x0
  UILabel_o *explanationLabel; // x20
  UICommonButton_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v10; // x2

  if ( (byte_596CD99 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_13096/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    byte_596CD99 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    goto LABEL_9;
  SupportServantListViewManager__DestroyList(supportServantListViewManager, method);
  v6 = LocalizationManager_TypeInfo;
  explanationLabel = this->fields.explanationLabel;
  this->fields.state = 0;
  if ( !*(&v6->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v6, v4, v5);
  supportServantListViewManager = (SupportServantListViewManager_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_13096/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                       0);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0),
        (normalTabButton = this->fields.normalTabButton) == 0) )
  {
LABEL_9:
    sub_2213CDC(supportServantListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0);
  UICommonButton__SetColliderEnable(normalTabButton, enabled, 1, 0);
  SupportServantSelectMenu__setModeTabKind(this, 0, v10);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void SupportServantSelectMenu__ModifyItem(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportServantListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_2213CDC(0, method);
  SupportServantListViewManager__RequestListObject_42600240(supportServantListViewManager, 4, v2);
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

  if ( (byte_596CDA2 & 1) == 0 )
  {
    sub_2213A60(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SupportServantSelectMenu_OnClickCancel__);
    sub_2213A60(&Method_SupportServantSelectMenu_endCancelButton__);
    sub_2213A60(&StringLiteral_4664/*"ClassPos"*/);
    byte_596CDA2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SupportServantSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4664/*"ClassPos"*/, this->fields.classPos, 0);
    supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      sub_2213CDC(0, v5);
    ListViewManager__SetScrollBarValue(supportServantListViewManager, 0);
    v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_2213CCC(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_596CDA4 & 1) == 0 )
  {
    sub_2213A60(&Method_SupportServantSelectMenu_OnClickScaleChange__);
    byte_596CDA4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SupportServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
      sub_2213CDC(supportServantListViewManager, v5);
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
  __int64 v7; // x19
  __int64 supportServantListViewManager; // x0
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  MethodInfo *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  SupportServantListViewItem_o *Item; // x1
  SupportServantListViewItem_o **v23; // x21
  int32_t tabModeKind; // w8
  _BYTE *v25; // x8
  System_Reflection_MethodBase_o *v26; // x0
  int32_t v27; // w1
  _BYTE *v28; // x8
  int v29; // w23
  System_Reflection_MethodBase_o *v30; // x0
  const MethodInfo *v31; // x2
  int64_t v32; // x22
  struct UserServantEntity_o *v33; // x8
  __int128 v34; // q1
  System_Reflection_MethodBase_o *v35; // x0
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x4
  int32_t classPos; // w2
  UserServantEntity_o *userServantEntity; // x3
  SupportServantSelectMenu_o *v40; // x0
  int32_t v41; // w1
  struct SupportServantListViewManager_o *v42; // x19
  SupportServantListViewManager_CallbackFunc_o *v43; // x0
  const MethodInfo *v44; // x3
  void *v45; // x2
  SupportServantListViewItem_o *v46; // x8
  struct SupportServantListViewManager_CallbackFunc_o *v47; // x21
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  const MethodInfo *v54; // x2
  __int64 v55; // x25
  ServantEntity_o *ServantEntity; // x27
  UserServantEntity_o *v57; // x8
  int32_t v58; // w28
  __int64 v59; // x2
  int32_t v60; // w26
  __int64 v61; // x1
  __int64 v62; // x2
  Il2CppObject *Master_object; // x22
  System_String_o *v64; // x20
  System_String_o *v65; // x23
  __int64 v66; // x1
  __int64 v67; // x2
  System_Object_array *v68; // x24
  __int64 v69; // x28
  System_String_o *ClassName; // x28
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x27
  __int64 v74; // x28
  int32_t v75; // w0
  __int64 v76; // x8
  int32_t v77; // w25
  System_String_o *LimitCountSealedServantName; // x25
  System_String_o *RarityType; // x25
  System_String_o *v80; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v81; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v82; // x8
  int32_t v83; // w21
  int32_t v84; // w0
  System_String_o *v85; // x21
  System_String_o *v86; // x21
  System_String_o *v87; // x22
  System_String_o *v88; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v90; // x25
  __int64 v91; // x2
  System_Reflection_MethodBase_o *v92; // x0
  const MethodInfo *v93; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_596CD9C & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_2213A60(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__);
    sub_2213A60(&SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo);
    sub_2213A60(&StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_596CD9C = 1;
  }
  v7 = sub_2213CCC(SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_80;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( this->fields.state == 2 )
  {
    if ( offset < 0 )
    {
      Item = 0;
    }
    else
    {
      supportServantListViewManager = (__int64)this->fields.supportServantListViewManager;
      if ( !supportServantListViewManager )
        goto LABEL_80;
      Item = SupportServantListViewManager__GetItem(
               (SupportServantListViewManager_o *)supportServantListViewManager,
               offset,
               v16);
    }
    *(_QWORD *)(v7 + 24) = Item;
    v23 = (SupportServantListViewItem_o **)(v7 + 24);
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v7 + 24),
      (int32_t)Item,
      (System_String_o *)v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( kind == 2 )
    {
      tabModeKind = this->fields.tabModeKind;
      supportServantListViewManager = (__int64)*v23;
      if ( tabModeKind != 3 )
      {
        if ( tabModeKind == 2 )
        {
          if ( !supportServantListViewManager )
            goto LABEL_80;
          v28 = Method_SupportServantSelectMenu_OnSelectItem__;
          *(_BYTE *)(supportServantListViewManager + 297) ^= 1u;
          if ( (v28[83] & 2) != 0 )
            v28 = (_BYTE *)sub_2213A78(v28);
          v26 = (System_Reflection_MethodBase_o *)sub_2213A44(v28, *((_QWORD *)v28 + 4));
          v27 = 0;
          goto LABEL_45;
        }
        if ( tabModeKind == 1 )
        {
          if ( !supportServantListViewManager )
            goto LABEL_80;
          v25 = Method_SupportServantSelectMenu_OnSelectItem__;
          *(_BYTE *)(supportServantListViewManager + 296) ^= 1u;
          if ( (v25[83] & 2) != 0 )
            v25 = (_BYTE *)sub_2213A78(v25);
          v26 = (System_Reflection_MethodBase_o *)sub_2213A44(v25, *((_QWORD *)v25 + 4));
          v27 = 11;
          goto LABEL_45;
        }
        if ( !supportServantListViewManager )
          goto LABEL_80;
        if ( *(_BYTE *)(supportServantListViewManager + 208) )
        {
          v35 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_SupportServantSelectMenu_OnSelectItem__);
          OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0, 0);
          SupportServantSelectMenu__Init(this, v36);
          supportServantListViewManager = (__int64)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
          if ( !supportServantListViewManager )
            goto LABEL_80;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0);
          if ( !*v23 )
            goto LABEL_80;
          classPos = this->fields.classPos;
          userServantEntity = (*v23)->fields.userServantEntity;
          v40 = this;
          v41 = 2;
        }
        else
        {
          if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(
                 (SupportServantListViewItem_o *)supportServantListViewManager,
                 v9) )
          {
            goto LABEL_44;
          }
          supportServantListViewManager = (__int64)*v23;
          if ( !*v23 )
            goto LABEL_80;
          supportServantListViewManager = SupportServantListViewItem__get_IsUseServant(
                                            (SupportServantListViewItem_o *)supportServantListViewManager,
                                            v9);
          if ( (supportServantListViewManager & 1) != 0 )
            goto LABEL_44;
          v46 = *v23;
          if ( !*v23 )
            goto LABEL_80;
          if ( v46->fields.isEventJoin || v46->fields.isUseInSet )
          {
LABEL_44:
            v26 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_SupportServantSelectMenu_OnSelectItem__);
            v27 = 2;
LABEL_45:
            OverwriteAssetSoundName__PlaySystemSe(v26, v27, 0, 0);
            v42 = this->fields.supportServantListViewManager;
            v43 = (SupportServantListViewManager_CallbackFunc_o *)sub_2213CCC(SupportServantListViewManager_CallbackFunc_TypeInfo);
            v45 = Method_SupportServantSelectMenu_OnSelectItem__;
LABEL_46:
            v47 = v43;
            SupportServantListViewManager_CallbackFunc___ctor(v43, (Il2CppObject *)this, (intptr_t)v45, v44);
            if ( v42 )
            {
              v42->fields.callbackFunc = v47;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v42->fields.callbackFunc,
                (int32_t)v47,
                v48,
                v49,
                v50,
                v51,
                v52,
                v53);
              SupportServantListViewManager__SetMode_42605972(v42, 2, v54);
              return;
            }
            goto LABEL_80;
          }
          v92 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_SupportServantSelectMenu_OnSelectItem__);
          OverwriteAssetSoundName__PlaySystemSe(v92, 0, 0, 0);
          SupportServantSelectMenu__Init(this, v93);
          supportServantListViewManager = (__int64)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
          if ( !supportServantListViewManager )
            goto LABEL_80;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0);
          if ( !*v23 )
            goto LABEL_80;
          classPos = this->fields.classPos;
          userServantEntity = (*v23)->fields.userServantEntity;
          v40 = this;
          v41 = 1;
        }
        SupportServantSelectMenu__Callback(v40, v41, classPos, userServantEntity, v37);
        return;
      }
      if ( !supportServantListViewManager )
        goto LABEL_80;
      v29 = *(unsigned __int8 *)(supportServantListViewManager + 216);
      v30 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_SupportServantSelectMenu_OnSelectItem__);
      if ( !v29 )
      {
        OverwriteAssetSoundName__PlaySystemSe(v30, 2, 0, 0);
        v42 = this->fields.supportServantListViewManager;
        this->fields.state = 2;
        v43 = (SupportServantListViewManager_CallbackFunc_o *)sub_2213CCC(SupportServantListViewManager_CallbackFunc_TypeInfo);
        v45 = Method_SupportServantSelectMenu_OnSelectItem__;
        goto LABEL_46;
      }
      OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0, 0);
      supportServantListViewManager = (__int64)UserGameMaster__getSelfUserGame(0);
      if ( !supportServantListViewManager )
        goto LABEL_80;
      v32 = *(_QWORD *)(supportServantListViewManager + 128);
      if ( !v32 )
        goto LABEL_30;
      if ( !*v23 )
        goto LABEL_80;
      v33 = (*v23)->fields.userServantEntity;
      if ( !v33 )
        goto LABEL_80;
      v34 = *(_OWORD *)&v33->fields.id.fields.fakeValue;
      *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&v33->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v95.fields.fakeValue = v34;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v31);
      v94 = v95;
      if ( v32 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v94, 0) )
      {
LABEL_30:
        SupportServantSelectMenu__PushRequest(this, *v23, v31);
        return;
      }
      supportServantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !supportServantListViewManager )
        goto LABEL_80;
      supportServantListViewManager = (__int64)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)supportServantListViewManager,
                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !supportServantListViewManager )
        goto LABEL_80;
      supportServantListViewManager = (__int64)DataMasterBase_object__object__long___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
                                                 v32,
                                                 (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !supportServantListViewManager )
        goto LABEL_80;
      v55 = supportServantListViewManager;
      ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)supportServantListViewManager, -1, 0);
      supportServantListViewManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v55, 0, 0);
      if ( !supportServantListViewManager )
        goto LABEL_80;
      if ( !*v23 )
        goto LABEL_80;
      v57 = (*v23)->fields.userServantEntity;
      if ( !v57 )
        goto LABEL_80;
      v58 = *(_DWORD *)(supportServantListViewManager + 24);
      supportServantListViewManager = (__int64)UserServantEntity__GetOverwriteStatus(v57, 0, 0);
      if ( !supportServantListViewManager )
        goto LABEL_80;
      v60 = *(_DWORD *)(supportServantListViewManager + 24);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v59);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v61, v62);
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
      v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
      v68 = (System_Object_array *)sub_2213B20(object___TypeInfo, 6);
      if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v66, v67);
      supportServantListViewManager = (__int64)Rarity__getRarityType(v58, 0);
      if ( !v68 )
        goto LABEL_80;
      v69 = supportServantListViewManager;
      sub_1FFE8F8(v68, supportServantListViewManager);
      supportServantListViewManager = sub_1FFE2C4(v68, 0, v69);
      if ( !ServantEntity )
        goto LABEL_80;
      ClassName = ServantEntity__getClassName(ServantEntity, 0);
      sub_1FFE8F8(v68, ClassName);
      sub_1FFE2C4(v68, 1, ClassName);
      v74 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
      v73 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v71, v72);
      *(_QWORD *)&v96.fields.currentCryptoKey = v74;
      *(_QWORD *)&v96.fields.fakeValue = v73;
      v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v96, 0);
      v76 = *(_QWORD *)(v55 + 96);
      *(_QWORD *)&v97.fields.fakeValue = *(_QWORD *)(v55 + 104);
      v77 = v75;
      *(_QWORD *)&v97.fields.currentCryptoKey = v76;
      supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v97, 0);
      if ( !Master_object )
        goto LABEL_80;
      LimitCountSealedServantName = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                      (ServantLimitImageMaster_o *)Master_object,
                                      v77,
                                      supportServantListViewManager,
                                      1,
                                      1,
                                      0);
      sub_1FFE8F8(v68, LimitCountSealedServantName);
      sub_1FFE2C4(v68, 2, LimitCountSealedServantName);
      RarityType = Rarity__getRarityType(v60, 0);
      sub_1FFE8F8(v68, RarityType);
      supportServantListViewManager = sub_1FFE2C4(v68, 3, RarityType);
      if ( !*v23 )
        goto LABEL_80;
      supportServantListViewManager = (__int64)(*v23)->fields.servantEntity;
      if ( !supportServantListViewManager )
        goto LABEL_80;
      v80 = ServantEntity__getClassName((ServantEntity_o *)supportServantListViewManager, 0);
      sub_1FFE8F8(v68, v80);
      supportServantListViewManager = sub_1FFE2C4(v68, 4, v80);
      if ( !*v23 )
        goto LABEL_80;
      v81 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.servantEntity;
      if ( !v81 )
        goto LABEL_80;
      supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v81[1], 0);
      if ( !*v23 )
        goto LABEL_80;
      v82 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.userServantEntity;
      if ( !v82 )
        goto LABEL_80;
      v83 = supportServantListViewManager;
      v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v82[6], 0);
      v85 = ServantLimitImageMaster__GetLimitCountSealedServantName(
              (ServantLimitImageMaster_o *)Master_object,
              v83,
              v84,
              1,
              1,
              0);
      sub_1FFE8F8(v68, v85);
      sub_1FFE2C4(v68, 5, v85);
      v86 = System_String__Format_75698016(v65, v68, 0);
      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
      v88 = LocalizationManager__Get((System_String_o *)StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v90 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v90,
        (Il2CppObject *)v7,
        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__,
        0);
      supportServantListViewManager = (__int64)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v91);
      if ( !Instance )
LABEL_80:
        sub_2213CDC(supportServantListViewManager, v9);
      CommonUI__OpenConfirmDialog_37373584(
        (CommonUI_o *)Instance,
        v64,
        v86,
        v87,
        v88,
        v90,
        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
        BalanceConfig_TypeInfo->static_fields->PushSvtDialogFontSize,
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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v25; // x1
  UnityEngine_GameObject_o *v26; // x27
  System_String_o *v27; // x0
  struct SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  const MethodInfo *v37; // x2
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_c *v39; // x0
  System_Action_o *v40; // x20
  const MethodInfo *v41; // [xsp+0h] [xbp-70h]

  if ( (byte_596CD9A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SupportServantSelectMenu_EndOpen__);
    sub_2213A60(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_2213A60(&StringLiteral_4664/*"ClassPos"*/);
    byte_596CD9A = 1;
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)supportServantData);
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
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
  v27 = (System_String_o *)StringLiteral_4664/*"ClassPos"*/;
  this->fields.classPos = classPos;
  if ( UnityEngine_PlayerPrefs__GetInt(v27, -1, 0) != classPos )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    ListViewManager__ClearScrollBarValue((ListViewManager_o *)gameObject, 1, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_16;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0, 1, 0, 74, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_16;
  TitleInfoControl__setBackBtnSprite_46859020((TitleInfoControl_o *)gameObject, 1, 0, 0, 0);
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
    v41);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v29 = (SupportServantListViewManager_CallbackFunc_o *)sub_2213CCC(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v29,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v30);
  if ( !supportServantListViewManager
    || (supportServantListViewManager->fields.callbackFunc = v29,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&supportServantListViewManager->fields.callbackFunc,
          (int32_t)v29,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36),
        SupportServantListViewManager__SetMode_42605972(supportServantListViewManager, 1, v37),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager) == 0)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = (UnityEngine_GameObject_o *)SupportServantListViewManager__GetScaleButtonSpriteName(
                                                   (SupportServantListViewManager_o *)gameObject,
                                                   v25),
        !scaleChangeTabSprite) )
  {
LABEL_16:
    sub_2213CDC(gameObject, v25);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0);
  v39 = System_Action_TypeInfo;
  this->fields.state = 2;
  v40 = (System_Action_o *)sub_2213CCC(v39);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_SupportServantSelectMenu_EndOpen__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v40, 0);
}


void SupportServantSelectMenu__PushRequest(
        SupportServantSelectMenu_o *this,
        SupportServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_596CDA5 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SupportServantSelectMenu_EndCardFavoriteRequest__);
    byte_596CDA5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_SupportServantSelectMenu_EndCardFavoriteRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_2213CDC(Instance, v6);
  CardFavoriteRequest__beginRequestPush((CardFavoriteRequest_o *)Instance, selectItem->fields.userServantEntity, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SupportServantSelectMenu_o *v13; // x0
  SupportServantSelectMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596CD97 & 1) == 0 )
  {
    sub_2213A60(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    byte_596CD97 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, SupportServantSelectMenu_CallbackFunc_TypeInfo, v9, v10);
  SupportServantSelectMenu__remove_callbackFunc(v13, v14, v15);
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
      sub_2213CDC(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__RequestListObject_42600240(supportServantListViewManager, 4, v5);
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

  if ( (byte_596CD9F & 1) == 0 )
  {
    sub_2213A60(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SupportServantSelectMenu_EndClickTabChoice__);
    sub_2213A60(&Method_SupportServantSelectMenu_onClickChoiceTabButton__);
    byte_596CD9F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SupportServantSelectMenu_onClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_2213CCC(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabChoice__,
          v8);
        SupportServantSelectMenu__statusRequest(this, v7, v9);
        return;
      }
      v10 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_2213CCC(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_596CD9E & 1) == 0 )
  {
    sub_2213A60(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SupportServantSelectMenu_EndClickTabLock__);
    sub_2213A60(&Method_SupportServantSelectMenu_onClickLockTabButton__);
    byte_596CD9E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SupportServantSelectMenu_onClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_2213CCC(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabLock__,
          v8);
        SupportServantSelectMenu__statusRequest(this, v7, v9);
        return;
      }
      v10 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_2213CCC(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_596CD9D & 1) == 0 )
  {
    sub_2213A60(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SupportServantSelectMenu_EndClickTabNormal__);
    sub_2213A60(&Method_SupportServantSelectMenu_onClickNormalTabButton__);
    byte_596CD9D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SupportServantSelectMenu_onClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_2213CCC(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_596CDA0 & 1) == 0 )
  {
    sub_2213A60(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SupportServantSelectMenu_EndClickTabPush__);
    sub_2213A60(&Method_SupportServantSelectMenu_onClickPushTabButton__);
    byte_596CDA0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_SupportServantSelectMenu_onClickPushTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SupportServantSelectMenu_onClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_2213CCC(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SupportServantSelectMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596CD98 & 1) == 0 )
  {
    sub_2213A60(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    byte_596CD98 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, SupportServantSelectMenu_CallbackFunc_TypeInfo, v9, v10);
  SupportServantSelectMenu__Init(v13, v14);
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
  int32_t tabModeKind; // w8
  UILabel_o *explanationLabel; // x21
  __int64 *v21; // x8
  int32_t state; // w9
  struct SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x3
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1

  if ( (byte_596CDA1 & 1) == 0 )
  {
    sub_2213A60(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_2213A60(&StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_2213A60(&StringLiteral_18431/*"button_push_reg"*/);
    sub_2213A60(&StringLiteral_18432/*"button_push_unreg"*/);
    sub_2213A60(&StringLiteral_18417/*"button_allchoice_reg"*/);
    sub_2213A60(&StringLiteral_18420/*"button_alllock_unreg"*/);
    sub_2213A60(&StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_2213A60(&StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_2213A60(&StringLiteral_18433/*"button_select_reg"*/);
    sub_2213A60(&StringLiteral_13096/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_18434/*"button_select_unreg"*/);
    sub_2213A60(&StringLiteral_18419/*"button_alllock_reg"*/);
    sub_2213A60(&StringLiteral_18418/*"button_allchoice_unreg"*/);
    byte_596CDA1 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_53;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0);
    v6 = this->fields.normalTabButton;
    if ( !v6 )
      goto LABEL_53;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0);
    UICommonButton__SetColliderEnable(v6, enabled, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_53;
    v8 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_18434/*"button_select_unreg"*/ : &StringLiteral_18433/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_53;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_53;
    v10 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
    UICommonButton__SetColliderEnable(lockTabButton, v10, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_53;
    v11 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_18419/*"button_alllock_reg"*/ : &StringLiteral_18420/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v11, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_53;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_53;
    v13 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
    UICommonButton__SetColliderEnable(choiceTabButton, v13, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_53;
    v14 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_18417/*"button_allchoice_reg"*/ : &StringLiteral_18418/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v14, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton )
      goto LABEL_53;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0);
    pushTabButton = this->fields.pushTabButton;
    if ( !pushTabButton )
      goto LABEL_53;
    v16 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0);
    UICommonButton__SetColliderEnable(pushTabButton, v16, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
    if ( !normalTabButton )
      goto LABEL_53;
    if ( this->fields.tabModeKind == 3 )
      v17 = &StringLiteral_18431/*"button_push_reg"*/;
    else
      v17 = &StringLiteral_18432/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v17, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind > 1 )
    {
      if ( tabModeKind == 2 )
      {
        explanationLabel = this->fields.explanationLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v18);
        v21 = &StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_45;
      }
      if ( tabModeKind == 3 )
      {
        explanationLabel = this->fields.explanationLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v18);
        v21 = &StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
        goto LABEL_45;
      }
    }
    else
    {
      if ( !tabModeKind )
      {
        explanationLabel = this->fields.explanationLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v18);
        v21 = &StringLiteral_13096/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
        goto LABEL_45;
      }
      if ( tabModeKind == 1 )
      {
        explanationLabel = this->fields.explanationLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v18);
        v21 = &StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
LABEL_45:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v21, 0);
        if ( !explanationLabel )
          goto LABEL_53;
        UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0);
      }
    }
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.supportServantListViewManager;
    if ( normalTabButton )
    {
      state = this->fields.state;
      LOBYTE(normalTabButton[20].klass) = this->fields.tabModeKind != 0;
      if ( state != 2 )
      {
        v32 = 1;
        goto LABEL_52;
      }
      SupportServantListViewManager__UpdateItemState(
        (SupportServantListViewManager_o *)normalTabButton,
        modeKind == 3,
        v18);
      supportServantListViewManager = this->fields.supportServantListViewManager;
      v24 = (SupportServantListViewManager_CallbackFunc_o *)sub_2213CCC(SupportServantListViewManager_CallbackFunc_TypeInfo);
      SupportServantListViewManager_CallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
        v25);
      if ( supportServantListViewManager )
      {
        supportServantListViewManager->fields.callbackFunc = v24;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&supportServantListViewManager->fields.callbackFunc,
          (int32_t)v24,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        normalTabButton = (UnityEngine_Behaviour_o *)supportServantListViewManager;
        v32 = 2;
LABEL_52:
        SupportServantListViewManager__SetMode_42605972((SupportServantListViewManager_o *)normalTabButton, v32, v18);
        return;
      }
    }
LABEL_53:
    sub_2213CDC(normalTabButton, *(_QWORD *)&modeKind);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_Int64_array *v17; // x1
  System_Int64_array *v18; // x2
  bool v19; // w4
  bool v20; // w5
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  System_Int64_array *v30; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596CDA3 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SupportServantSelectMenu_EndStatusSync__);
    byte_596CDA3 = 1;
  }
  tabModeKind = this->fields.tabModeKind;
  unlockList = 0;
  lockList = 0;
  v30 = 0;
  choiceList = 0;
  if ( tabModeKind == 2 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_21;
    if ( SupportServantListViewManager__GetSwapChoiceList(supportServantListViewManager, &choiceList, &v30, v3) )
    {
      this->fields.requestCallback = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28, v29);
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                           v27,
                                                                           (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v18 = v30;
        v17 = choiceList;
        v19 = 0;
        v20 = 1;
        goto LABEL_17;
      }
LABEL_21:
      sub_2213CDC(supportServantListViewManager, callback);
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
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                           v14,
                                                                           (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v18 = unlockList;
        v17 = lockList;
        v19 = 1;
        v20 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantListViewManager,
          v17,
          v18,
          0,
          v19,
          v20,
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_200765C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20075FC;
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
  _QWORD v12[2]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v13; // [xsp+10h] [xbp-50h]
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v14 = classPos;
  if ( (byte_596CDA8 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectRootComponent_ResultKind_TypeInfo);
    byte_596CDA8 = 1;
  }
  v13 = 0u;
  v12[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(qword_5984348, &v14);
  *(_QWORD *)&v13 = entity;
  return (System_IAsyncResult_o *)sub_2213A14(this, v12, callback, object);
}


void SupportServantSelectMenu_CallbackFunc__EndInvoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_20076BC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2007674;
}


System_IAsyncResult_o *SupportServantSelectMenu_RequestCallbackFunc__BeginInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void SupportServantSelectMenu_RequestCallbackFunc__EndInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct SupportServantSelectMenu_o *_4__this; // x20
  struct SupportServantListViewManager_o *supportServantListViewManager; // x19
  SupportServantListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x2

  if ( (byte_596CDA9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&SupportServantListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SupportServantSelectMenu_OnSelectItem__);
    sub_2213A60(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__);
    byte_596CDA9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_37373868(v7, _9__1, 0);
      return;
    }
LABEL_12:
    sub_2213CDC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  _4__this->fields.state = 2;
  v17 = (SupportServantListViewManager_CallbackFunc_o *)sub_2213CCC(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v18);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  supportServantListViewManager->fields.callbackFunc = v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&supportServantListViewManager->fields.callbackFunc,
    (int32_t)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  SupportServantListViewManager__SetMode_42605972(supportServantListViewManager, 2, v25);
}


void SupportServantSelectMenu___c__DisplayClass31_0___OnSelectItem_b__1(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  SupportServantSelectMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}