void __fastcall SupportServantSelectMenu___ctor(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49F8F80 & 1) == 0 )
  {
    sub_1B640C8(&BaseMenu_TypeInfo, method);
    byte_49F8F80 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantSelectMenu__Callback(
        SupportServantSelectMenu_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct SupportServantSelectMenu_CallbackFunc_o *v6; // x22
  struct SupportServantSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v6 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, classPos, (int32_t)entity);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, UserServantEntity_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      (unsigned int)result,
      (unsigned int)classPos,
      entity,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall SupportServantSelectMenu__ClearScrollValue(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_1B64324(0LL);
  ListViewManager__ClearScrollBarValue(supportServantListViewManager, 1, 0LL);
}


void __fastcall SupportServantSelectMenu__EndCardFavoriteRequest(
        SupportServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  SupportServantListViewManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  SupportServantListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3

  if ( (byte_49F8F7F & 1) == 0 )
  {
    sub_1B640C8(&SupportServantListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B640C8(&Method_SupportServantSelectMenu_OnSelectItem__, v4);
    byte_49F8F7F = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (SupportServantListViewManager__UpdateItemState(supportServantListViewManager, 1, 0LL),
        v6 = this->fields.supportServantListViewManager,
        v9 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                               v7,
                                                               v8),
        SupportServantListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
          v10),
        !v6) )
  {
    sub_1B64324(supportServantListViewManager);
  }
  SupportServantListViewManager__SetMode(v6, 2, v9, 0LL);
}


void __fastcall SupportServantSelectMenu__EndClickTabChoice(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B64324(supportServantListViewManager);
    }
    SupportServantListViewManager__SetMode_33116592(supportServantListViewManager, 3, 0LL);
  }
  SupportServantSelectMenu__setModeTabKind(this, 2, method);
}


void __fastcall SupportServantSelectMenu__EndClickTabLock(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B64324(supportServantListViewManager);
    }
    SupportServantListViewManager__SetMode_33116592(supportServantListViewManager, 3, 0LL);
  }
  SupportServantSelectMenu__setModeTabKind(this, 1, method);
}


void __fastcall SupportServantSelectMenu__EndClickTabNormal(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B64324(supportServantListViewManager);
    }
    SupportServantListViewManager__SetMode_33116592(supportServantListViewManager, 3, 0LL);
  }
  SupportServantSelectMenu__setModeTabKind(this, 0, method);
}


void __fastcall SupportServantSelectMenu__EndClickTabPush(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1B64324(supportServantListViewManager);
    }
    SupportServantListViewManager__SetMode_33116592(supportServantListViewManager, 3, 0LL);
  }
  SupportServantSelectMenu__setModeTabKind(this, 3, method);
}


void __fastcall SupportServantSelectMenu__EndOpen(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0

  if ( (byte_49F8F74 & 1) == 0 )
  {
    sub_1B640C8(&SupportServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SupportServantSelectMenu_OnSelectItem__, v4);
    byte_49F8F74 = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v6 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                         SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                         method,
                                                         v2);
  SupportServantListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v7);
  if ( !supportServantListViewManager )
    sub_1B64324(v8);
  SupportServantListViewManager__SetMode(supportServantListViewManager, 2, v6, 0LL);
}


void __fastcall SupportServantSelectMenu__EndStatusSync(
        SupportServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_requestCallback; // x0
  struct SupportServantSelectMenu_RequestCallbackFunc_o *v5; // x19
  struct SupportServantSelectMenu_RequestCallbackFunc_o *requestCallback; // t1

  requestCallback = this->fields.requestCallback;
  p_requestCallback = (ServantStatusBattleListViewItem_o *)&this->fields.requestCallback;
  v5 = requestCallback;
  if ( requestCallback )
  {
    p_requestCallback->klass = 0LL;
    sub_1B6406C(p_requestCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      1LL,
      *(_QWORD *)&v5->fields.extra_arg);
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

  if ( (byte_49F8F72 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_12411/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v3);
    byte_49F8F72 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    goto LABEL_9;
  SupportServantListViewManager__DestroyList(supportServantListViewManager, 0LL);
  this->fields.state = 0;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportServantListViewManager = (SupportServantListViewManager_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_12411/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                       0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0LL),
        (normalTabButton = this->fields.normalTabButton) == 0LL) )
  {
LABEL_9:
    sub_1B64324(supportServantListViewManager);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
  UICommonButton__SetColliderEnable(normalTabButton, enabled, 1, 0LL);
  SupportServantSelectMenu__setModeTabKind(this, 0, v8);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantSelectMenu__ModifyItem(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_1B64324(0LL);
  SupportServantListViewManager__SetMode_33116592(supportServantListViewManager, 3, 0LL);
}


void __fastcall SupportServantSelectMenu__OnClickCancel(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ListViewManager_o *supportServantListViewManager; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_49F8F7B & 1) == 0 )
  {
    sub_1B640C8(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SupportServantSelectMenu_OnClickCancel__, v3);
    sub_1B640C8(&Method_SupportServantSelectMenu_endCancelButton__, v4);
    sub_1B640C8(&StringLiteral_4498/*"ClassPos"*/, v5);
    byte_49F8F7B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_SupportServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_SupportServantSelectMenu_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4498/*"ClassPos"*/, this->fields.classPos, 0LL);
    supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      sub_1B64324(0LL);
    ListViewManager__SetScrollBarValue(supportServantListViewManager, 0LL);
    v11 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                              SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                              v9,
                                                              v10);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_endCancelButton__,
      v12);
    SupportServantSelectMenu__statusRequest(this, v11, v13);
  }
}


void __fastcall SupportServantSelectMenu__OnClickScaleChange(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_49F8F7D & 1) == 0 )
  {
    sub_1B640C8(&Method_SupportServantSelectMenu_OnClickScaleChange__, method);
    byte_49F8F7D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_SupportServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ChangeIconScale(supportServantListViewManager, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewManager__GetScaleButtonSpriteName(
                                                                               supportServantListViewManager,
                                                                               0LL),
          !scaleChangeTabSprite) )
    {
      sub_1B64324(supportServantListViewManager);
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
  __int64 v29; // x20
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  SupportServantListViewItem_o *Item; // x1
  SupportServantListViewItem_o **v36; // x19
  int32_t tabModeKind; // w8
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  int32_t v40; // w1
  _QWORD *v41; // x0
  SupportServantListViewManager_o *v42; // x19
  __int64 v43; // x1
  __int64 v44; // x2
  SupportServantListViewManager_CallbackFunc_o *v45; // x0
  const MethodInfo *v46; // x3
  intptr_t v47; // w2
  SupportServantListViewManager_CallbackFunc_o *v48; // x20
  _BOOL4 v49; // w23
  _QWORD *v50; // x8
  System_Reflection_MethodBase_o *v51; // x0
  const MethodInfo *v52; // x2
  int64_t dragParentObject; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v55; // q1
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x4
  int32_t classPos; // w2
  UserServantEntity_o *v61; // x3
  int32_t v62; // w1
  __int64 v63; // x1
  __int64 v64; // x2
  SupportServantListViewItem_o *v65; // x8
  _QWORD *v66; // x0
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v68; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v71; // x25
  Il2CppObject *Master_object; // x21
  int32_t v73; // w22
  int32_t v74; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v75; // x8
  int32_t v76; // w22
  int32_t v77; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v79; // x21
  System_String_o *v80; // x22
  __int64 v81; // x23
  int32_t Rarity; // w26
  __int64 v83; // x1
  int32_t v84; // w2
  int32_t v85; // w3
  SupportServantListViewManager_o *v86; // x26
  int32_t v87; // w2
  int32_t v88; // w3
  SupportServantListViewManager_o *v89; // x26
  int32_t v90; // w2
  int32_t v91; // w3
  SupportServantListViewManager_o *v92; // x25
  int32_t v93; // w0
  int32_t v94; // w2
  int32_t v95; // w3
  SupportServantListViewManager_o *v96; // x25
  int32_t v97; // w2
  int32_t v98; // w3
  SupportServantListViewManager_o *v99; // x25
  int32_t v100; // w2
  int32_t v101; // w3
  SupportServantListViewManager_o *v102; // x19
  System_String_o *v103; // x19
  System_String_o *v104; // x22
  System_String_o *v105; // x23
  Il2CppObject *Instance; // x24
  __int64 v107; // x1
  __int64 v108; // x2
  CommonConfirmDialog_ClickDelegate_o *v109; // x25
  _QWORD *v110; // x0
  System_Reflection_MethodBase_o *v111; // x0
  const MethodInfo *v112; // x1
  __int64 v113; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16

  if ( (byte_49F8F75 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&SupportServantListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&object___TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1B640C8(&Rarity_TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B640C8(&Method_SupportServantSelectMenu_OnSelectItem__, v22);
    sub_1B640C8(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__, v23);
    sub_1B640C8(&SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo, v24);
    sub_1B640C8(&StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v25);
    sub_1B640C8(&StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v26);
    sub_1B640C8(&StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v27);
    sub_1B640C8(&StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v28);
    byte_49F8F75 = 1;
  }
  v29 = sub_1B64314(SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&offset);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_106;
  *(_QWORD *)(v29 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 16), (int32_t)this, v31, v32);
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
        goto LABEL_106;
      Item = SupportServantListViewManager__GetItem(supportServantListViewManager, offset, 0LL);
    }
    *(_QWORD *)(v29 + 24) = Item;
    v36 = (SupportServantListViewItem_o **)(v29 + 24);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 24), (int32_t)Item, v33, v34);
    if ( kind == 2 )
    {
      tabModeKind = this->fields.tabModeKind;
      if ( tabModeKind == 2 )
      {
        supportServantListViewManager = (SupportServantListViewManager_o *)*v36;
        if ( !*v36 )
          goto LABEL_106;
        SupportServantListViewItem__SwapChoice((SupportServantListViewItem_o *)supportServantListViewManager, 0LL);
        v41 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v41 = (_QWORD *)sub_1B640E0(Method_SupportServantSelectMenu_OnSelectItem__);
        v39 = (System_Reflection_MethodBase_o *)sub_1B640AC(v41, v41[4]);
        v40 = 0;
        goto LABEL_20;
      }
      if ( tabModeKind == 1 )
      {
        supportServantListViewManager = (SupportServantListViewManager_o *)*v36;
        if ( !*v36 )
          goto LABEL_106;
        SupportServantListViewItem__SwapLock((SupportServantListViewItem_o *)supportServantListViewManager, 0LL);
        v38 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v38 = (_QWORD *)sub_1B640E0(Method_SupportServantSelectMenu_OnSelectItem__);
        v39 = (System_Reflection_MethodBase_o *)sub_1B640AC(v38, v38[4]);
        v40 = 11;
        goto LABEL_20;
      }
      supportServantListViewManager = (SupportServantListViewManager_o *)*v36;
      if ( !*v36 )
        goto LABEL_106;
      if ( tabModeKind == 3 )
      {
        v49 = BYTE4(supportServantListViewManager->fields.itemList);
        v50 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v50 = (_QWORD *)sub_1B640E0(Method_SupportServantSelectMenu_OnSelectItem__);
        v51 = (System_Reflection_MethodBase_o *)sub_1B640AC(v50, v50[4]);
        if ( !v49 )
        {
          OverwriteAssetSoundName__PlaySystemSe(v51, 2, 0LL);
          this->fields.state = 2;
          v42 = this->fields.supportServantListViewManager;
          v45 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                  SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                                  v63,
                                                                  v64);
          v47 = (int)Method_SupportServantSelectMenu_OnSelectItem__;
LABEL_21:
          v48 = v45;
          SupportServantListViewManager_CallbackFunc___ctor(v45, (Il2CppObject *)this, v47, v46);
          if ( v42 )
          {
            SupportServantListViewManager__SetMode(v42, 2, v48, 0LL);
            return;
          }
LABEL_106:
          sub_1B64324(supportServantListViewManager);
        }
        OverwriteAssetSoundName__PlaySystemSe(v51, 0, 0LL);
        supportServantListViewManager = (SupportServantListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        dragParentObject = (int64_t)supportServantListViewManager->fields.dragParentObject;
        if ( !dragParentObject )
          goto LABEL_35;
        if ( !*v36 )
          goto LABEL_106;
        userServantEntity = (*v36)->fields.userServantEntity;
        if ( !userServantEntity )
          goto LABEL_106;
        v55 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v115.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v115.fields.fakeValue = v55;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v114 = v115;
        if ( dragParentObject == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v114, 0LL) )
        {
LABEL_35:
          SupportServantSelectMenu__PushRequest(this, *v36, v52);
          return;
        }
        supportServantListViewManager = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                             (DataManager_o *)supportServantListViewManager,
                                                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
                   dragParentObject,
                   (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        supportServantListViewManager = (SupportServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                             (DataManager_o *)supportServantListViewManager,
                                                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !Entity )
          goto LABEL_106;
        v68 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
        klass = Entity[5].klass;
        monitor = Entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v116.fields.currentCryptoKey = klass;
        *(_QWORD *)&v116.fields.fakeValue = monitor;
        supportServantListViewManager = (SupportServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                             v116,
                                                                             0LL);
        if ( !v68 )
          goto LABEL_106;
        v71 = DataMasterBase_object__object__int___GetEntity(
                v68,
                (int32_t)supportServantListViewManager,
                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                0LL);
        supportServantListViewManager = (SupportServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                             (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                                                             0LL);
        if ( !Master_object )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                             (ServantLimitImageMaster_o *)Master_object,
                                                                             v73,
                                                                             (int32_t)supportServantListViewManager,
                                                                             0LL);
        if ( !*v36 )
          goto LABEL_106;
        v74 = (int)supportServantListViewManager;
        supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewItem__get_SvtId(
                                                                             *v36,
                                                                             0LL);
        if ( !*v36 )
          goto LABEL_106;
        v75 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v36)->fields.userServantEntity;
        if ( !v75 )
          goto LABEL_106;
        v76 = (int)supportServantListViewManager;
        v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v75[6], 0LL);
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       (ServantLimitImageMaster_o *)Master_object,
                                       v76,
                                       v77,
                                       0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
        v80 = LocalizationManager__Get((System_String_o *)StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
        v81 = sub_1B64170(object___TypeInfo, 6LL);
        Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        supportServantListViewManager = (SupportServantListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
        if ( !v81 )
          goto LABEL_106;
        v86 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B64204(
                                                                                   supportServantListViewManager,
                                                                                   *(_QWORD *)(*(_QWORD *)v81 + 64LL))) != 0LL )
        {
          if ( !*(_DWORD *)(v81 + 24) )
            goto LABEL_107;
          *(_QWORD *)(v81 + 32) = v86;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v81 + 32), (int32_t)v86, v84, v85);
          if ( !v71 )
            goto LABEL_106;
          supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getClassName(
                                                                               (ServantEntity_o *)v71,
                                                                               0LL);
          v89 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B64204(
                                                                                     supportServantListViewManager,
                                                                                     *(_QWORD *)(*(_QWORD *)v81 + 64LL))) != 0LL )
          {
            if ( *(_DWORD *)(v81 + 24) <= 1u )
              goto LABEL_107;
            *(_QWORD *)(v81 + 40) = v89;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v81 + 40), (int32_t)v89, v87, v88);
            supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getName(
                                                                                 (ServantEntity_o *)v71,
                                                                                 v74,
                                                                                 -1,
                                                                                 0LL);
            v92 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B64204(
                                                                                       supportServantListViewManager,
                                                                                       *(_QWORD *)(*(_QWORD *)v81 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v81 + 24) <= 2u )
                goto LABEL_107;
              *(_QWORD *)(v81 + 48) = v92;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v81 + 48), (int32_t)v92, v90, v91);
              if ( !*v36 )
                goto LABEL_106;
              supportServantListViewManager = (SupportServantListViewManager_o *)(*v36)->fields.userServantEntity;
              if ( !supportServantListViewManager )
                goto LABEL_106;
              v93 = UserServantEntity__getRarity((UserServantEntity_o *)supportServantListViewManager, 0LL);
              supportServantListViewManager = (SupportServantListViewManager_o *)Rarity__getRarityType(v93, 0LL);
              v96 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B64204(
                                                                                         supportServantListViewManager,
                                                                                         *(_QWORD *)(*(_QWORD *)v81 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v81 + 24) <= 3u )
                  goto LABEL_107;
                *(_QWORD *)(v81 + 56) = v96;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v81 + 56), (int32_t)v96, v94, v95);
                if ( !*v36 )
                  goto LABEL_106;
                supportServantListViewManager = (SupportServantListViewManager_o *)(*v36)->fields.servantEntity;
                if ( !supportServantListViewManager )
                  goto LABEL_106;
                supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getClassName(
                                                                                     (ServantEntity_o *)supportServantListViewManager,
                                                                                     0LL);
                v99 = supportServantListViewManager;
                if ( !supportServantListViewManager
                  || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B64204(
                                                                                           supportServantListViewManager,
                                                                                           *(_QWORD *)(*(_QWORD *)v81 + 64LL))) != 0LL )
                {
                  if ( *(_DWORD *)(v81 + 24) <= 4u )
                    goto LABEL_107;
                  *(_QWORD *)(v81 + 64) = v99;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v81 + 64), (int32_t)v99, v97, v98);
                  if ( !*v36 )
                    goto LABEL_106;
                  supportServantListViewManager = (SupportServantListViewManager_o *)(*v36)->fields.servantEntity;
                  if ( !supportServantListViewManager )
                    goto LABEL_106;
                  supportServantListViewManager = (SupportServantListViewManager_o *)ServantEntity__getName(
                                                                                       (ServantEntity_o *)supportServantListViewManager,
                                                                                       ServantLimitCountSealAfter,
                                                                                       -1,
                                                                                       0LL);
                  v102 = supportServantListViewManager;
                  if ( !supportServantListViewManager
                    || (supportServantListViewManager = (SupportServantListViewManager_o *)sub_1B64204(
                                                                                             supportServantListViewManager,
                                                                                             *(_QWORD *)(*(_QWORD *)v81 + 64LL))) != 0LL )
                  {
                    if ( *(_DWORD *)(v81 + 24) > 5u )
                    {
                      *(_QWORD *)(v81 + 72) = v102;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v81 + 72), (int32_t)v102, v100, v101);
                      v103 = System_String__Format_61389904(v80, (System_Object_array *)v81, 0LL);
                      v104 = LocalizationManager__Get((System_String_o *)StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                      v105 = LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v109 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                      CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                      v107,
                                                                      v108);
                      CommonConfirmDialog_ClickDelegate___ctor(
                        v109,
                        (Il2CppObject *)v29,
                        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__,
                        0LL);
                      supportServantListViewManager = (SupportServantListViewManager_o *)BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      if ( !Instance )
                        goto LABEL_106;
                      CommonUI__OpenConfirmDialog_30344968(
                        (CommonUI_o *)Instance,
                        v79,
                        v103,
                        v104,
                        v105,
                        v109,
                        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                        0,
                        0,
                        0LL);
                      return;
                    }
LABEL_107:
                    sub_1B6432C(supportServantListViewManager, v83);
                  }
                }
              }
            }
          }
        }
        v113 = sub_1B64348();
        sub_1B641F0(v113, 0LL);
      }
      if ( BYTE4(supportServantListViewManager->fields.sort) )
      {
        v56 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v56 = (_QWORD *)sub_1B640E0(Method_SupportServantSelectMenu_OnSelectItem__);
        v57 = (System_Reflection_MethodBase_o *)sub_1B640AC(v56, v56[4]);
        OverwriteAssetSoundName__PlaySystemSe(v57, 0, 0LL);
        SupportServantSelectMenu__Init(this, v58);
        supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
        if ( !*v36 )
          goto LABEL_106;
        classPos = this->fields.classPos;
        v61 = (*v36)->fields.userServantEntity;
        v62 = 2;
      }
      else
      {
        if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(
               (SupportServantListViewItem_o *)supportServantListViewManager,
               0LL) )
        {
          goto LABEL_50;
        }
        supportServantListViewManager = (SupportServantListViewManager_o *)*v36;
        if ( !*v36 )
          goto LABEL_106;
        supportServantListViewManager = (SupportServantListViewManager_o *)SupportServantListViewItem__get_IsUseServant(
                                                                             (SupportServantListViewItem_o *)supportServantListViewManager,
                                                                             0LL);
        if ( ((unsigned __int8)supportServantListViewManager & 1) != 0 )
          goto LABEL_50;
        v65 = *v36;
        if ( !*v36 )
          goto LABEL_106;
        if ( v65->fields.isEventJoin || v65->fields.isUseInSet )
        {
LABEL_50:
          v66 = Method_SupportServantSelectMenu_OnSelectItem__;
          if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
            v66 = (_QWORD *)sub_1B640E0(Method_SupportServantSelectMenu_OnSelectItem__);
          v39 = (System_Reflection_MethodBase_o *)sub_1B640AC(v66, v66[4]);
          v40 = 2;
LABEL_20:
          OverwriteAssetSoundName__PlaySystemSe(v39, v40, 0LL);
          v42 = this->fields.supportServantListViewManager;
          v45 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                  SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                                  v43,
                                                                  v44);
          v47 = (int)Method_SupportServantSelectMenu_OnSelectItem__;
          goto LABEL_21;
        }
        v110 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v110 = (_QWORD *)sub_1B640E0(Method_SupportServantSelectMenu_OnSelectItem__);
        v111 = (System_Reflection_MethodBase_o *)sub_1B640AC(v110, v110[4]);
        OverwriteAssetSoundName__PlaySystemSe(v111, 0, 0LL);
        SupportServantSelectMenu__Init(this, v112);
        supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL);
        if ( !supportServantListViewManager )
          goto LABEL_106;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
        if ( !*v36 )
          goto LABEL_106;
        classPos = this->fields.classPos;
        v61 = (*v36)->fields.userServantEntity;
        v62 = 1;
      }
      SupportServantSelectMenu__Callback(this, v62, classPos, v61, v59);
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
  int32_t v22; // w2
  int32_t v23; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v25; // x27
  SupportServantListViewManager_o *supportServantListViewManager; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  SupportServantListViewManager_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3
  UISprite_o *scaleChangeTabSprite; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_o *v34; // x20

  if ( (byte_49F8F73 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, supportServantData);
    sub_1B640C8(&SupportServantListViewManager_CallbackFunc_TypeInfo, v18);
    sub_1B640C8(&Method_SupportServantSelectMenu_EndOpen__, v19);
    sub_1B640C8(&Method_SupportServantSelectMenu_OnSelectItem__, v20);
    sub_1B640C8(&StringLiteral_4498/*"ClassPos"*/, v21);
    byte_49F8F73 = 1;
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)supportServantData);
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v22, v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_16;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v25 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v25, (unsigned __int8)gameObject & 1, 0LL);
  this->fields.classPos = classPos;
  if ( UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4498/*"ClassPos"*/, -1, 0LL) != classPos )
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
  TitleInfoControl__setBackBtnSprite_36875508((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
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
    0LL);
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v29 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                          SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                          v27,
                                                          v28);
  SupportServantListViewManager_CallbackFunc___ctor(
    v29,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v30);
  if ( !supportServantListViewManager
    || (SupportServantListViewManager__SetMode(supportServantListViewManager, 1, v29, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager) == 0LL)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = (UnityEngine_GameObject_o *)SupportServantListViewManager__GetScaleButtonSpriteName(
                                                   (SupportServantListViewManager_o *)gameObject,
                                                   0LL),
        !scaleChangeTabSprite) )
  {
LABEL_16:
    sub_1B64324(gameObject);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
  this->fields.state = 2;
  v34 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v32, v33);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_SupportServantSelectMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v34, 0LL);
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
  DataManager_o *v14; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v16; // x21
  int64_t v17; // x22
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v21; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v24; // x0
  __int128 v25; // q1
  __int64 v26; // x1
  __int64 v27; // x2
  NetworkManager_ResultCallbackFunc_o *v28; // x21
  Il2CppObject *Request_object; // x0
  __int128 v30; // q1
  CardFavoriteRequest_o *v31; // x20
  int32_t v32; // w26
  int32_t v33; // w27
  int32_t v34; // w28
  int32_t v35; // w29
  bool IsLock; // w21
  char v37; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v41; // w0
  __int64 v42; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v46; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v48; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v49; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_49F8F7E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&Method_SupportServantSelectMenu_EndCardFavoriteRequest__, v12);
    byte_49F8F7E = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v14 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v14 || !userServantEntity )
    goto LABEL_18;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  v17 = *(_QWORD *)&v14->fields.m_CachedPtr;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v19;
  *(_QWORD *)&v54.fields.fakeValue = v18;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v54, 0LL);
  if ( !v16 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, v17, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v14->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v21;
  v49 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v53;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v52, 0LL);
  v25 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v14->fields.masterLoadThreads;
  v48 = v24;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v25;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v51, 0LL);
  v28 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27);
  NetworkManager_ResultCallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_SupportServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v28,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v30 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v31 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v30;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v50, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v37 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v42 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v41;
  *(_QWORD *)&v55.fields.currentCryptoKey = v42;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v55, 0LL);
  if ( !v31 )
LABEL_18:
    sub_1B64324(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v31,
    targetUsrSVtId,
    imageLimitCount,
    v32,
    v33,
    v34,
    v35,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v46,
    IsLock,
    v37 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v49 != (struct System_Threading_SynchronizationContext_o *)v48,
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

  if ( (byte_49F8F70 & 1) == 0 )
  {
    sub_1B640C8(&SupportServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_49F8F70 = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
  SupportServantSelectMenu__remove_callbackFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__endCancelButton(
        SupportServantSelectMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  const MethodInfo *v5; // x4

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
LABEL_7:
      sub_1B64324(supportServantListViewManager);
    }
    SupportServantListViewManager__SetMode_33116592(supportServantListViewManager, 3, 0LL);
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantListViewManager = (SupportServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0LL);
  if ( !supportServantListViewManager )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
  SupportServantSelectMenu__Callback(this, 0, -1, 0LL, v5);
}


void __fastcall SupportServantSelectMenu__onClickChoiceTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_49F8F78 & 1) == 0 )
  {
    sub_1B640C8(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SupportServantSelectMenu_EndClickTabChoice__, v3);
    sub_1B640C8(&Method_SupportServantSelectMenu_onClickChoiceTabButton__, v4);
    byte_49F8F78 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SupportServantSelectMenu_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_SupportServantSelectMenu_onClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v10 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                  SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                  v7,
                                                                  v8);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabChoice__,
          v11);
        SupportServantSelectMenu__statusRequest(this, v10, v12);
        return;
      }
      v13 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                v7,
                                                                v8);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabChoice__,
        v14);
      SupportServantSelectMenu__statusRequest(this, v13, v15);
    }
    SupportServantSelectMenu__setModeTabKind(this, 2, v8);
  }
}


void __fastcall SupportServantSelectMenu__onClickLockTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_49F8F77 & 1) == 0 )
  {
    sub_1B640C8(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SupportServantSelectMenu_EndClickTabLock__, v3);
    sub_1B640C8(&Method_SupportServantSelectMenu_onClickLockTabButton__, v4);
    byte_49F8F77 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SupportServantSelectMenu_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_SupportServantSelectMenu_onClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v10 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                  SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                  v7,
                                                                  v8);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabLock__,
          v11);
        SupportServantSelectMenu__statusRequest(this, v10, v12);
        return;
      }
      v13 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                                SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                v7,
                                                                v8);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabLock__,
        v14);
      SupportServantSelectMenu__statusRequest(this, v13, v15);
    }
    SupportServantSelectMenu__setModeTabKind(this, 1, v8);
  }
}


void __fastcall SupportServantSelectMenu__onClickNormalTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49F8F76 & 1) == 0 )
  {
    sub_1B640C8(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SupportServantSelectMenu_EndClickTabNormal__, v3);
    sub_1B640C8(&Method_SupportServantSelectMenu_onClickNormalTabButton__, v4);
    byte_49F8F76 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SupportServantSelectMenu_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_SupportServantSelectMenu_onClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                             SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                             v7,
                                                             v8);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabNormal__,
      v10);
    SupportServantSelectMenu__statusRequest(this, v9, v11);
  }
}


void __fastcall SupportServantSelectMenu__onClickPushTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49F8F79 & 1) == 0 )
  {
    sub_1B640C8(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SupportServantSelectMenu_EndClickTabPush__, v3);
    sub_1B640C8(&Method_SupportServantSelectMenu_onClickPushTabButton__, v4);
    byte_49F8F79 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_SupportServantSelectMenu_onClickPushTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_SupportServantSelectMenu_onClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                             SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                             v7,
                                                             v8);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabPush__,
      v10);
    SupportServantSelectMenu__statusRequest(this, v9, v11);
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

  if ( (byte_49F8F71 & 1) == 0 )
  {
    sub_1B640C8(&SupportServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_49F8F71 = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
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
  __int64 *v31; // x8
  UILabel_o *explanationLabel; // x21
  __int64 *v33; // x8
  SupportServantListViewManager_o *supportServantListViewManager; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  SupportServantListViewManager_CallbackFunc_o *v37; // x21
  const MethodInfo *v38; // x3

  if ( (byte_49F8F7A & 1) == 0 )
  {
    sub_1B640C8(&SupportServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&Method_SupportServantSelectMenu_OnSelectItem__, v6);
    sub_1B640C8(&StringLiteral_11570/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v7);
    sub_1B640C8(&StringLiteral_17591/*"button_push_reg"*/, v8);
    sub_1B640C8(&StringLiteral_17592/*"button_push_unreg"*/, v9);
    sub_1B640C8(&StringLiteral_17577/*"button_allchoice_reg"*/, v10);
    sub_1B640C8(&StringLiteral_17580/*"button_alllock_unreg"*/, v11);
    sub_1B640C8(&StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v12);
    sub_1B640C8(&StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v13);
    sub_1B640C8(&StringLiteral_17593/*"button_select_reg"*/, v14);
    sub_1B640C8(&StringLiteral_12411/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v15);
    sub_1B640C8(&StringLiteral_17594/*"button_select_unreg"*/, v16);
    sub_1B640C8(&StringLiteral_17579/*"button_alllock_reg"*/, v17);
    sub_1B640C8(&StringLiteral_17578/*"button_allchoice_unreg"*/, v18);
    byte_49F8F7A = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    v20 = this->fields.normalTabButton;
    if ( !v20 )
      goto LABEL_48;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
    UICommonButton__SetColliderEnable(v20, enabled, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    v22 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17594/*"button_select_unreg"*/ : &StringLiteral_17593/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v22, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_48;
    v24 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v24, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    v25 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17579/*"button_alllock_reg"*/ : &StringLiteral_17580/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v25, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_48;
    v27 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v27, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    v28 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17577/*"button_allchoice_reg"*/ : &StringLiteral_17578/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v28, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0LL);
    pushTabButton = this->fields.pushTabButton;
    if ( !pushTabButton )
      goto LABEL_48;
    v30 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
    UICommonButton__SetColliderEnable(pushTabButton, v30, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    if ( this->fields.tabModeKind == 3 )
      v31 = &StringLiteral_17591/*"button_push_reg"*/;
    else
      v31 = &StringLiteral_17592/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v31, 0LL);
    switch ( this->fields.tabModeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_12411/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
        goto LABEL_41;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_41;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_41;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11570/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_41:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v33, 0LL);
        if ( !explanationLabel )
          goto LABEL_48;
        UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0LL);
LABEL_43:
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.supportServantListViewManager;
        if ( !normalTabButton )
          goto LABEL_48;
        LOBYTE(normalTabButton[20].klass) = this->fields.tabModeKind != 0;
        if ( this->fields.state == 2 )
        {
          SupportServantListViewManager__UpdateItemState(
            (SupportServantListViewManager_o *)normalTabButton,
            modeKind == 3,
            0LL);
          supportServantListViewManager = this->fields.supportServantListViewManager;
          v37 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                  SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                                  v35,
                                                                  v36);
          SupportServantListViewManager_CallbackFunc___ctor(
            v37,
            (Il2CppObject *)this,
            (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
            v38);
          if ( supportServantListViewManager )
          {
            SupportServantListViewManager__SetMode(supportServantListViewManager, 2, v37, 0LL);
            return;
          }
LABEL_48:
          sub_1B64324(normalTabButton);
        }
        SupportServantListViewManager__SetMode_33116592((SupportServantListViewManager_o *)normalTabButton, 1, 0LL);
        break;
      default:
        goto LABEL_43;
    }
  }
}


void __fastcall SupportServantSelectMenu__statusRequest(
        SupportServantSelectMenu_o *this,
        SupportServantSelectMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t tabModeKind; // w8
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // x1
  System_Int64_array *v16; // x2
  bool v17; // w4
  bool v18; // w5
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  __int64 v22; // x2
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  System_Int64_array *v24; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49F8F7C & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B640C8(&Method_SupportServantSelectMenu_EndStatusSync__, v7);
    byte_49F8F7C = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v24 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_21;
    if ( SupportServantListViewManager__GetSwapChoiceList(supportServantListViewManager, &choiceList, &v24, 0LL) )
    {
      this->fields.requestCallback = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v19, v20);
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v21, v22);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                           v23,
                                                                           (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v16 = v24;
        v15 = choiceList;
        v18 = 1;
        v17 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B64324(supportServantListViewManager);
    }
  }
  else if ( tabModeKind == 1 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_21;
    if ( SupportServantListViewManager__GetSwapLockList(supportServantListViewManager, &lockList, &unlockList, 0LL) )
    {
      this->fields.requestCallback = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestCallback, (int32_t)callback, v10, v11);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                           v14,
                                                                           (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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
          0LL);
        return;
      }
      goto LABEL_21;
    }
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu_CallbackFunc___ctor(
        SupportServantSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A8D60;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A8D00;
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
  _QWORD v13[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v14; // [xsp+10h] [xbp-60h]
  int32_t v15; // [xsp+28h] [xbp-48h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-44h] BYREF

  v15 = classPos;
  v16 = result;
  if ( (byte_49F8F81 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&SupportSelectRootComponent_ResultKind_TypeInfo, v11);
    byte_49F8F81 = 1;
  }
  v14 = 0u;
  v13[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_ResultKind_TypeInfo, &v16);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  *(_QWORD *)&v14 = entity;
  return (System_IAsyncResult_o *)sub_1B6407C(this, v13, callback, object);
}


void __fastcall SupportServantSelectMenu_CallbackFunc__EndInvoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall SupportServantSelectMenu_CallbackFunc__Invoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        UserServantEntity_o *entity,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, UserServantEntity_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    classPos,
    entity,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu_RequestCallbackFunc___ctor(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A8DC0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A8D78;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportServantSelectMenu_RequestCallbackFunc__BeginInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_49F8F82 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isRequest);
    byte_49F8F82 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall SupportServantSelectMenu_RequestCallbackFunc__EndInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall SupportServantSelectMenu_RequestCallbackFunc__Invoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  CommonUI_o *v12; // x20
  System_Action_o *_9__1; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  struct SupportServantSelectMenu_o *_4__this; // x20
  SupportServantListViewManager_o *supportServantListViewManager; // x19
  SupportServantListViewManager_CallbackFunc_o *v20; // x21
  const MethodInfo *v21; // x3

  if ( (byte_49F8F83 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&SupportServantListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SupportServantSelectMenu_OnSelectItem__, v7);
    sub_1B640C8(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__, v8);
    byte_49F8F83 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v14, v15);
    }
    if ( v12 )
    {
      CommonUI__CloseConfirmDialog_30345628(v12, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1B64324(Instance);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v20 = (SupportServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                          SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                          v16,
                                                          v17);
  SupportServantListViewManager_CallbackFunc___ctor(
    v20,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v21);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  SupportServantListViewManager__SetMode(supportServantListViewManager, 2, v20, 0LL);
}


void __fastcall SupportServantSelectMenu___c__DisplayClass31_0___OnSelectItem_b__1(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  SupportServantSelectMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}