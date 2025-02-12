void __fastcall SupportServantSelectMenu___ctor(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BB10E1 & 1) == 0 )
  {
    sub_1C13D24(&BaseMenu_TypeInfo, method);
    byte_4BB10E1 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct SupportServantSelectMenu_CallbackFunc_o *v9; // x22
  struct SupportServantSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1C13CC8(p_callbackFunc, 0LL, *(int64_t *)&classPos, (int32_t)entity, (System_String_o *)method, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, UserServantEntity_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      (unsigned int)result,
      (unsigned int)classPos,
      entity,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall SupportServantSelectMenu__ClearScrollValue(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_1C13F80(0LL, method);
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
  SupportServantListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3

  if ( (byte_4BB10E0 & 1) == 0 )
  {
    sub_1C13D24(&SupportServantListViewManager_CallbackFunc_TypeInfo, result);
    sub_1C13D24(&Method_SupportServantSelectMenu_OnSelectItem__, v4);
    byte_4BB10E0 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (SupportServantListViewManager__UpdateItemState(supportServantListViewManager, 1, 0LL),
        v6 = this->fields.supportServantListViewManager,
        v7 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C13F70(SupportServantListViewManager_CallbackFunc_TypeInfo),
        SupportServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
          v8),
        !v6) )
  {
    sub_1C13F80(supportServantListViewManager, result);
  }
  SupportServantListViewManager__SetMode(v6, 2, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1C13F80(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_34438164(supportServantListViewManager, 3, 0LL);
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

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1C13F80(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_34438164(supportServantListViewManager, 3, 0LL);
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

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1C13F80(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_34438164(supportServantListViewManager, 3, 0LL);
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

  if ( isRequest )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager
      || (SupportServantListViewManager__ModifyList(supportServantListViewManager, 0, 0LL),
          (supportServantListViewManager = this->fields.supportServantListViewManager) == 0LL) )
    {
      sub_1C13F80(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_34438164(supportServantListViewManager, 3, 0LL);
  }
  SupportServantSelectMenu__setModeTabKind(this, 3, method);
}


void __fastcall SupportServantSelectMenu__EndOpen(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BB10D5 & 1) == 0 )
  {
    sub_1C13D24(&SupportServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_SupportServantSelectMenu_OnSelectItem__, v3);
    byte_4BB10D5 = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v5 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C13F70(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v6);
  if ( !supportServantListViewManager )
    sub_1C13F80(v7, v8);
  SupportServantListViewManager__SetMode(supportServantListViewManager, 2, v5, 0LL);
}


void __fastcall SupportServantSelectMenu__EndStatusSync(
        SupportServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_requestCallback; // x0
  struct SupportServantSelectMenu_RequestCallbackFunc_o *v9; // x19
  struct SupportServantSelectMenu_RequestCallbackFunc_o *requestCallback; // t1

  requestCallback = this->fields.requestCallback;
  p_requestCallback = (PartyOrganizationUtility_o *)&this->fields.requestCallback;
  v9 = requestCallback;
  if ( requestCallback )
  {
    p_requestCallback->klass = 0LL;
    sub_1C13CC8(p_requestCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      1LL,
      *(_QWORD *)&v9->fields.extra_arg);
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

  if ( (byte_4BB10D3 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_12688/*"SUPPORT_SELECT_NAME_BASE"*/, v3);
    byte_4BB10D3 = 1;
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
                                                                       (System_String_o *)StringLiteral_12688/*"SUPPORT_SELECT_NAME_BASE"*/,
                                                                       0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0LL),
        (normalTabButton = this->fields.normalTabButton) == 0LL) )
  {
LABEL_9:
    sub_1C13F80(supportServantListViewManager, method);
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
    sub_1C13F80(0LL, method);
  SupportServantListViewManager__SetMode_34438164(supportServantListViewManager, 3, 0LL);
}


void __fastcall SupportServantSelectMenu__OnClickCancel(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  ListViewManager_o *supportServantListViewManager; // x0
  SupportServantSelectMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4BB10DC & 1) == 0 )
  {
    sub_1C13D24(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_SupportServantSelectMenu_OnClickCancel__, v3);
    sub_1C13D24(&Method_SupportServantSelectMenu_endCancelButton__, v4);
    sub_1C13D24(&StringLiteral_4603/*"ClassIcon{0}"*/, v5);
    byte_4BB10DC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_SupportServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C13D3C(Method_SupportServantSelectMenu_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C13D08(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4603/*"ClassIcon{0}"*/, this->fields.classPos, 0LL);
    supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      sub_1C13F80(0LL, v8);
    ListViewManager__SetScrollBarValue(supportServantListViewManager, 0LL);
    v10 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C13F70(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_endCancelButton__,
      v11);
    SupportServantSelectMenu__statusRequest(this, v10, v12);
  }
}


void __fastcall SupportServantSelectMenu__OnClickScaleChange(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4BB10DE & 1) == 0 )
  {
    sub_1C13D24(&Method_SupportServantSelectMenu_OnClickScaleChange__, method);
    byte_4BB10DE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_SupportServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
      sub_1C13F80(supportServantListViewManager, v5);
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
  int64_t supportServantListViewManager; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  SupportServantListViewItem_o *Item; // x1
  SupportServantListViewItem_o **v45; // x19
  int32_t tabModeKind; // w8
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  int32_t v49; // w1
  _QWORD *v50; // x0
  SupportServantListViewManager_o *v51; // x19
  SupportServantListViewManager_CallbackFunc_o *v52; // x0
  const MethodInfo *v53; // x3
  intptr_t v54; // w2
  SupportServantListViewManager_CallbackFunc_o *v55; // x20
  _BOOL4 v56; // w23
  _QWORD *v57; // x8
  System_Reflection_MethodBase_o *v58; // x0
  const MethodInfo *v59; // x2
  int64_t v60; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v62; // q1
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x4
  int32_t classPos; // w2
  UserServantEntity_o *v68; // x3
  int32_t v69; // w1
  SupportServantListViewItem_o *v70; // x8
  _QWORD *v71; // x0
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v73; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v76; // x26
  Il2CppObject *Master_object; // x24
  System_String_o *v78; // x21
  System_String_o *v79; // x22
  __int64 v80; // x23
  int32_t Rarity; // w27
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x27
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x26
  int32_t v96; // w0
  Il2CppClass *v97; // x8
  int32_t v98; // w25
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x25
  int32_t v106; // w0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x25
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  int64_t v120; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v121; // x8
  int32_t v122; // w19
  int32_t v123; // w0
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  int64_t v130; // x19
  System_String_o *v131; // x19
  System_String_o *v132; // x22
  System_String_o *v133; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v135; // x25
  _QWORD *v136; // x0
  System_Reflection_MethodBase_o *v137; // x0
  const MethodInfo *v138; // x1
  __int64 v139; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v140; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v141; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16

  if ( (byte_4BB10D6 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1C13D24(&SupportServantListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1C13D24(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_1C13D24(&DataManager_TypeInfo, v12);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_1C13D24(&LocalizationManager_TypeInfo, v15);
    sub_1C13D24(&object___TypeInfo, v16);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1C13D24(&Rarity_TypeInfo, v19);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1C13D24(&Method_SupportServantSelectMenu_OnSelectItem__, v22);
    sub_1C13D24(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__, v23);
    sub_1C13D24(&SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo, v24);
    sub_1C13D24(&StringLiteral_12091/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, v25);
    sub_1C13D24(&StringLiteral_12089/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, v26);
    sub_1C13D24(&StringLiteral_12090/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, v27);
    sub_1C13D24(&StringLiteral_12092/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, v28);
    byte_4BB10D6 = 1;
  }
  v29 = sub_1C13F70(SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_104;
  *(_QWORD *)(v29 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v29 + 16), (int64_t)this, v32, v33, v34, v35, v36, v37);
  if ( this->fields.state == 2 )
  {
    if ( (offset & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      supportServantListViewManager = (int64_t)this->fields.supportServantListViewManager;
      if ( !supportServantListViewManager )
        goto LABEL_104;
      Item = SupportServantListViewManager__GetItem(
               (SupportServantListViewManager_o *)supportServantListViewManager,
               offset,
               0LL);
    }
    *(_QWORD *)(v29 + 24) = Item;
    v45 = (SupportServantListViewItem_o **)(v29 + 24);
    sub_1C13CC8((PartyOrganizationUtility_o *)(v29 + 24), (int64_t)Item, v38, v39, v40, v41, v42, v43);
    if ( kind == 2 )
    {
      tabModeKind = this->fields.tabModeKind;
      if ( tabModeKind == 2 )
      {
        supportServantListViewManager = (int64_t)*v45;
        if ( !*v45 )
          goto LABEL_104;
        SupportServantListViewItem__SwapChoice((SupportServantListViewItem_o *)supportServantListViewManager, 0LL);
        v50 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v50 = (_QWORD *)sub_1C13D3C(Method_SupportServantSelectMenu_OnSelectItem__);
        v48 = (System_Reflection_MethodBase_o *)sub_1C13D08(v50, v50[4]);
        v49 = 0;
        goto LABEL_20;
      }
      if ( tabModeKind == 1 )
      {
        supportServantListViewManager = (int64_t)*v45;
        if ( !*v45 )
          goto LABEL_104;
        SupportServantListViewItem__SwapLock((SupportServantListViewItem_o *)supportServantListViewManager, 0LL);
        v47 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v47 = (_QWORD *)sub_1C13D3C(Method_SupportServantSelectMenu_OnSelectItem__);
        v48 = (System_Reflection_MethodBase_o *)sub_1C13D08(v47, v47[4]);
        v49 = 11;
        goto LABEL_20;
      }
      supportServantListViewManager = (int64_t)*v45;
      if ( !*v45 )
        goto LABEL_104;
      if ( tabModeKind == 3 )
      {
        v56 = *(unsigned __int8 *)(supportServantListViewManager + 196);
        v57 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v57 = (_QWORD *)sub_1C13D3C(Method_SupportServantSelectMenu_OnSelectItem__);
        v58 = (System_Reflection_MethodBase_o *)sub_1C13D08(v57, v57[4]);
        if ( !v56 )
        {
          OverwriteAssetSoundName__PlaySystemSe(v58, 2, 0, 0LL);
          this->fields.state = 2;
          v51 = this->fields.supportServantListViewManager;
          v52 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C13F70(SupportServantListViewManager_CallbackFunc_TypeInfo);
          v54 = (int)Method_SupportServantSelectMenu_OnSelectItem__;
LABEL_21:
          v55 = v52;
          SupportServantListViewManager_CallbackFunc___ctor(v52, (Il2CppObject *)this, v54, v53);
          if ( v51 )
          {
            SupportServantListViewManager__SetMode(v51, 2, v55, 0LL);
            return;
          }
LABEL_104:
          sub_1C13F80(supportServantListViewManager, v31);
        }
        OverwriteAssetSoundName__PlaySystemSe(v58, 0, 0, 0LL);
        supportServantListViewManager = (int64_t)UserGameMaster__getSelfUserGame(0LL);
        if ( !supportServantListViewManager )
          goto LABEL_104;
        v60 = *(_QWORD *)(supportServantListViewManager + 120);
        if ( !v60 )
          goto LABEL_35;
        if ( !*v45 )
          goto LABEL_104;
        userServantEntity = (*v45)->fields.userServantEntity;
        if ( !userServantEntity )
          goto LABEL_104;
        v62 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v141.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v141.fields.fakeValue = v62;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v140 = v141;
        if ( v60 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v140, 0LL) )
        {
LABEL_35:
          SupportServantSelectMenu__PushRequest(this, *v45, v59);
          return;
        }
        supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_104;
        supportServantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)supportServantListViewManager,
                                                   (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !supportServantListViewManager )
          goto LABEL_104;
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
                   v60,
                   (const MethodInfo_323AB80 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_104;
        supportServantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)supportServantListViewManager,
                                                   (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !Entity )
          goto LABEL_104;
        v73 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
        klass = Entity[5].klass;
        monitor = Entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v142.fields.currentCryptoKey = klass;
        *(_QWORD *)&v142.fields.fakeValue = monitor;
        supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v142, 0LL);
        if ( !v73 )
          goto LABEL_104;
        v76 = DataMasterBase_object__object__int___GetEntity(
                v73,
                supportServantListViewManager,
                (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12092/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12091/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
        v80 = sub_1C13DCC(object___TypeInfo, 6LL);
        Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        supportServantListViewManager = (int64_t)Rarity__getRarityType(Rarity, 0LL);
        if ( !v80 )
          goto LABEL_104;
        v88 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = sub_1C13E60(
                                                supportServantListViewManager,
                                                *(_QWORD *)(*(_QWORD *)v80 + 64LL))) != 0 )
        {
          if ( !*(_DWORD *)(v80 + 24) )
            goto LABEL_105;
          *(_QWORD *)(v80 + 32) = v88;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v80 + 32), v88, v82, v83, v84, v85, v86, v87);
          if ( !v76 )
            goto LABEL_104;
          supportServantListViewManager = (int64_t)ServantEntity__getClassName((ServantEntity_o *)v76, 0LL);
          v95 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = sub_1C13E60(
                                                  supportServantListViewManager,
                                                  *(_QWORD *)(*(_QWORD *)v80 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v80 + 24) <= 1u )
              goto LABEL_105;
            *(_QWORD *)(v80 + 40) = v95;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v80 + 40), v95, v89, v90, v91, v92, v93, v94);
            v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                    (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                    0LL);
            v97 = Entity[6].klass;
            *(_QWORD *)&v143.fields.fakeValue = Entity[6].monitor;
            v98 = v96;
            *(_QWORD *)&v143.fields.currentCryptoKey = v97;
            supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                              v143,
                                              0LL);
            if ( !Master_object )
              goto LABEL_104;
            supportServantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                       (ServantLimitImageMaster_o *)Master_object,
                                                       v98,
                                                       supportServantListViewManager,
                                                       0LL);
            v105 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = sub_1C13E60(
                                                    supportServantListViewManager,
                                                    *(_QWORD *)(*(_QWORD *)v80 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v80 + 24) <= 2u )
                goto LABEL_105;
              *(_QWORD *)(v80 + 48) = v105;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v80 + 48), v105, v99, v100, v101, v102, v103, v104);
              if ( !*v45 )
                goto LABEL_104;
              supportServantListViewManager = (int64_t)(*v45)->fields.userServantEntity;
              if ( !supportServantListViewManager )
                goto LABEL_104;
              v106 = UserServantEntity__getRarity((UserServantEntity_o *)supportServantListViewManager, 0LL);
              supportServantListViewManager = (int64_t)Rarity__getRarityType(v106, 0LL);
              v113 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = sub_1C13E60(
                                                      supportServantListViewManager,
                                                      *(_QWORD *)(*(_QWORD *)v80 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v80 + 24) <= 3u )
                  goto LABEL_105;
                *(_QWORD *)(v80 + 56) = v113;
                sub_1C13CC8((PartyOrganizationUtility_o *)(v80 + 56), v113, v107, v108, v109, v110, v111, v112);
                if ( !*v45 )
                  goto LABEL_104;
                supportServantListViewManager = (int64_t)(*v45)->fields.servantEntity;
                if ( !supportServantListViewManager )
                  goto LABEL_104;
                supportServantListViewManager = (int64_t)ServantEntity__getClassName(
                                                           (ServantEntity_o *)supportServantListViewManager,
                                                           0LL);
                v120 = supportServantListViewManager;
                if ( !supportServantListViewManager
                  || (supportServantListViewManager = sub_1C13E60(
                                                        supportServantListViewManager,
                                                        *(_QWORD *)(*(_QWORD *)v80 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v80 + 24) <= 4u )
                    goto LABEL_105;
                  *(_QWORD *)(v80 + 64) = v120;
                  sub_1C13CC8((PartyOrganizationUtility_o *)(v80 + 64), v120, v114, v115, v116, v117, v118, v119);
                  supportServantListViewManager = (int64_t)*v45;
                  if ( !*v45 )
                    goto LABEL_104;
                  supportServantListViewManager = SupportServantListViewItem__get_SvtId(
                                                    (SupportServantListViewItem_o *)supportServantListViewManager,
                                                    0LL);
                  if ( !*v45 )
                    goto LABEL_104;
                  v121 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v45)->fields.userServantEntity;
                  if ( !v121 )
                    goto LABEL_104;
                  v122 = supportServantListViewManager;
                  v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v121[6], 0LL);
                  supportServantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                             (ServantLimitImageMaster_o *)Master_object,
                                                             v122,
                                                             v123,
                                                             0LL);
                  v130 = supportServantListViewManager;
                  if ( !supportServantListViewManager
                    || (supportServantListViewManager = sub_1C13E60(
                                                          supportServantListViewManager,
                                                          *(_QWORD *)(*(_QWORD *)v80 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v80 + 24) > 5u )
                    {
                      *(_QWORD *)(v80 + 72) = v130;
                      sub_1C13CC8((PartyOrganizationUtility_o *)(v80 + 72), v130, v124, v125, v126, v127, v128, v129);
                      v131 = System_String__Format_62982452(v79, (System_Object_array *)v80, 0LL);
                      v132 = LocalizationManager__Get((System_String_o *)StringLiteral_12090/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                      v133 = LocalizationManager__Get((System_String_o *)StringLiteral_12089/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v135 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C13F70(CommonConfirmDialog_ClickDelegate_TypeInfo);
                      CommonConfirmDialog_ClickDelegate___ctor(
                        v135,
                        (Il2CppObject *)v29,
                        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__,
                        0LL);
                      supportServantListViewManager = (int64_t)BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      if ( !Instance )
                        goto LABEL_104;
                      CommonUI__OpenConfirmDialog_31070492(
                        (CommonUI_o *)Instance,
                        v78,
                        v131,
                        v132,
                        v133,
                        v135,
                        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                        0,
                        0,
                        0LL);
                      return;
                    }
LABEL_105:
                    sub_1C13F88(supportServantListViewManager, v31);
                  }
                }
              }
            }
          }
        }
        v139 = sub_1C13FA4();
        sub_1C13E4C(v139, 0LL);
      }
      if ( *(_BYTE *)(supportServantListViewManager + 188) )
      {
        v63 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v63 = (_QWORD *)sub_1C13D3C(Method_SupportServantSelectMenu_OnSelectItem__);
        v64 = (System_Reflection_MethodBase_o *)sub_1C13D08(v63, v63[4]);
        OverwriteAssetSoundName__PlaySystemSe(v64, 0, 0, 0LL);
        SupportServantSelectMenu__Init(this, v65);
        supportServantListViewManager = (int64_t)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !supportServantListViewManager )
          goto LABEL_104;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
        if ( !*v45 )
          goto LABEL_104;
        classPos = this->fields.classPos;
        v68 = (*v45)->fields.userServantEntity;
        v69 = 2;
      }
      else
      {
        if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(
               (SupportServantListViewItem_o *)supportServantListViewManager,
               0LL) )
        {
          goto LABEL_50;
        }
        supportServantListViewManager = (int64_t)*v45;
        if ( !*v45 )
          goto LABEL_104;
        supportServantListViewManager = SupportServantListViewItem__get_IsUseServant(
                                          (SupportServantListViewItem_o *)supportServantListViewManager,
                                          0LL);
        if ( (supportServantListViewManager & 1) != 0 )
          goto LABEL_50;
        v70 = *v45;
        if ( !*v45 )
          goto LABEL_104;
        if ( v70->fields.isEventJoin || v70->fields.isUseInSet )
        {
LABEL_50:
          v71 = Method_SupportServantSelectMenu_OnSelectItem__;
          if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
            v71 = (_QWORD *)sub_1C13D3C(Method_SupportServantSelectMenu_OnSelectItem__);
          v48 = (System_Reflection_MethodBase_o *)sub_1C13D08(v71, v71[4]);
          v49 = 2;
LABEL_20:
          OverwriteAssetSoundName__PlaySystemSe(v48, v49, 0, 0LL);
          v51 = this->fields.supportServantListViewManager;
          v52 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C13F70(SupportServantListViewManager_CallbackFunc_TypeInfo);
          v54 = (int)Method_SupportServantSelectMenu_OnSelectItem__;
          goto LABEL_21;
        }
        v136 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v136 = (_QWORD *)sub_1C13D3C(Method_SupportServantSelectMenu_OnSelectItem__);
        v137 = (System_Reflection_MethodBase_o *)sub_1C13D08(v136, v136[4]);
        OverwriteAssetSoundName__PlaySystemSe(v137, 0, 0, 0LL);
        SupportServantSelectMenu__Init(this, v138);
        supportServantListViewManager = (int64_t)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !supportServantListViewManager )
          goto LABEL_104;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
        if ( !*v45 )
          goto LABEL_104;
        classPos = this->fields.classPos;
        v68 = (*v45)->fields.userServantEntity;
        v69 = 1;
      }
      SupportServantSelectMenu__Callback(this, v69, classPos, v68, v66);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  UnityEngine_GameObject_o *v30; // x27
  SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v32; // x21
  const MethodInfo *v33; // x3
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v35; // x20

  if ( (byte_4BB10D4 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, supportServantData);
    sub_1C13D24(&SupportServantListViewManager_CallbackFunc_TypeInfo, v18);
    sub_1C13D24(&Method_SupportServantSelectMenu_EndOpen__, v19);
    sub_1C13D24(&Method_SupportServantSelectMenu_OnSelectItem__, v20);
    sub_1C13D24(&StringLiteral_4603/*"ClassIcon{0}"*/, v21);
    byte_4BB10D4 = 1;
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)supportServantData);
  this->fields.callbackFunc = callback;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v22, v23, v24, v25, v26, v27);
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
  if ( UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4603/*"ClassIcon{0}"*/, -1, 0LL) != classPos )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    ListViewManager__ClearScrollBarValue((ListViewManager_o *)gameObject, 1, 0LL);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_16;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)gameObject, 0LL, 1, 0LL, 71, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_16;
  TitleInfoControl__setBackBtnSprite_38286168((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
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
  v32 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C13F70(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v32,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v33);
  if ( !supportServantListViewManager
    || (SupportServantListViewManager__SetMode(supportServantListViewManager, 1, v32, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager) == 0LL)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = (UnityEngine_GameObject_o *)SupportServantListViewManager__GetScaleButtonSpriteName(
                                                   (SupportServantListViewManager_o *)gameObject,
                                                   0LL),
        !scaleChangeTabSprite) )
  {
LABEL_16:
    sub_1C13F80(gameObject, v29);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
  this->fields.state = 2;
  v35 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_SupportServantSelectMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v35, 0LL);
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
  DataManager_o *v15; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v25; // x0
  __int128 v26; // q1
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  Il2CppObject *Request_object; // x0
  __int128 v29; // q1
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w26
  int32_t v32; // w27
  int32_t v33; // w28
  int32_t v34; // w29
  bool IsLock; // w21
  char v36; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v40; // w0
  __int64 v41; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4BB10DF & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1C13D24(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1C13D24(&NetworkManager_TypeInfo, v6);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C13D24(&Method_SupportServantSelectMenu_EndCardFavoriteRequest__, v12);
    byte_4BB10DF = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userServantEntity )
    goto LABEL_18;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v15->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v51, 0LL);
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_SupportServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47494132(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1C13F80(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    imageLimitCount,
    v31,
    v32,
    v33,
    v34,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v45,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != (struct System_Threading_SynchronizationContext_o *)v47,
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

  if ( (byte_4BB10D1 & 1) == 0 )
  {
    sub_1C13D24(&SupportServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4BB10D1 = 1;
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
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C14240(v8);
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
      sub_1C13F80(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_34438164(supportServantListViewManager, 3, 0LL);
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
  const MethodInfo *v7; // x2
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4BB10D9 & 1) == 0 )
  {
    sub_1C13D24(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_SupportServantSelectMenu_EndClickTabChoice__, v3);
    sub_1C13D24(&Method_SupportServantSelectMenu_onClickChoiceTabButton__, v4);
    byte_4BB10D9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SupportServantSelectMenu_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C13D3C(Method_SupportServantSelectMenu_onClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v9 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C13F70(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabChoice__,
          v10);
        SupportServantSelectMenu__statusRequest(this, v9, v11);
        return;
      }
      v12 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C13F70(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabChoice__,
        v13);
      SupportServantSelectMenu__statusRequest(this, v12, v14);
    }
    SupportServantSelectMenu__setModeTabKind(this, 2, v7);
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
  const MethodInfo *v7; // x2
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4BB10D8 & 1) == 0 )
  {
    sub_1C13D24(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_SupportServantSelectMenu_EndClickTabLock__, v3);
    sub_1C13D24(&Method_SupportServantSelectMenu_onClickLockTabButton__, v4);
    byte_4BB10D8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SupportServantSelectMenu_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C13D3C(Method_SupportServantSelectMenu_onClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v9 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C13F70(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabLock__,
          v10);
        SupportServantSelectMenu__statusRequest(this, v9, v11);
        return;
      }
      v12 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C13F70(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabLock__,
        v13);
      SupportServantSelectMenu__statusRequest(this, v12, v14);
    }
    SupportServantSelectMenu__setModeTabKind(this, 1, v7);
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
  SupportServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4BB10D7 & 1) == 0 )
  {
    sub_1C13D24(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_SupportServantSelectMenu_EndClickTabNormal__, v3);
    sub_1C13D24(&Method_SupportServantSelectMenu_onClickNormalTabButton__, v4);
    byte_4BB10D7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SupportServantSelectMenu_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C13D3C(Method_SupportServantSelectMenu_onClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C13F70(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabNormal__,
      v8);
    SupportServantSelectMenu__statusRequest(this, v7, v9);
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
  SupportServantSelectMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4BB10DA & 1) == 0 )
  {
    sub_1C13D24(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1C13D24(&Method_SupportServantSelectMenu_EndClickTabPush__, v3);
    sub_1C13D24(&Method_SupportServantSelectMenu_onClickPushTabButton__, v4);
    byte_4BB10DA = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_SupportServantSelectMenu_onClickPushTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C13D3C(Method_SupportServantSelectMenu_onClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1C13F70(SupportServantSelectMenu_RequestCallbackFunc_TypeInfo);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabPush__,
      v8);
    SupportServantSelectMenu__statusRequest(this, v7, v9);
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

  if ( (byte_4BB10D2 & 1) == 0 )
  {
    sub_1C13D24(&SupportServantSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4BB10D2 = 1;
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
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C14240(v8);
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
  SupportServantListViewManager_CallbackFunc_o *v35; // x21
  const MethodInfo *v36; // x3

  if ( (byte_4BB10DB & 1) == 0 )
  {
    sub_1C13D24(&SupportServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_1C13D24(&LocalizationManager_TypeInfo, v5);
    sub_1C13D24(&Method_SupportServantSelectMenu_OnSelectItem__, v6);
    sub_1C13D24(&StringLiteral_11822/*"SERVANT_FRAME_PURCHASE_NUMBERO2"*/, v7);
    sub_1C13D24(&StringLiteral_17931/*"button_allchoice_reg"*/, v8);
    sub_1C13D24(&StringLiteral_17932/*"button_allchoice_unreg"*/, v9);
    sub_1C13D24(&StringLiteral_17917/*"buffStateNoticeName"*/, v10);
    sub_1C13D24(&StringLiteral_17920/*"bufferSize"*/, v11);
    sub_1C13D24(&StringLiteral_11820/*"SERVANT_FRAME_PURCHASE_MESSAGE_START"*/, v12);
    sub_1C13D24(&StringLiteral_11821/*"SERVANT_FRAME_PURCHASE_NUMBERO1"*/, v13);
    sub_1C13D24(&StringLiteral_17933/*"button_alllock_reg"*/, v14);
    sub_1C13D24(&StringLiteral_12688/*"SUPPORT_SELECT_NAME_BASE"*/, v15);
    sub_1C13D24(&StringLiteral_17934/*"button_alllock_unreg"*/, v16);
    sub_1C13D24(&StringLiteral_17919/*"buffer is null"*/, v17);
    sub_1C13D24(&StringLiteral_17918/*"buffer"*/, v18);
    byte_4BB10DB = 1;
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
    v22 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17934/*"button_alllock_unreg"*/ : &StringLiteral_17933/*"button_alllock_reg"*/);
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
    v25 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17919/*"buffer is null"*/ : &StringLiteral_17920/*"bufferSize"*/);
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
    v28 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17917/*"buffStateNoticeName"*/ : &StringLiteral_17918/*"buffer"*/);
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
      v31 = &StringLiteral_17931/*"button_allchoice_reg"*/;
    else
      v31 = &StringLiteral_17932/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v31, 0LL);
    switch ( this->fields.tabModeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_12688/*"SUPPORT_SELECT_NAME_BASE"*/;
        goto LABEL_41;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11821/*"SERVANT_FRAME_PURCHASE_NUMBERO1"*/;
        goto LABEL_41;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11820/*"SERVANT_FRAME_PURCHASE_MESSAGE_START"*/;
        goto LABEL_41;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = &StringLiteral_11822/*"SERVANT_FRAME_PURCHASE_NUMBERO2"*/;
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
          v35 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C13F70(SupportServantListViewManager_CallbackFunc_TypeInfo);
          SupportServantListViewManager_CallbackFunc___ctor(
            v35,
            (Il2CppObject *)this,
            (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
            v36);
          if ( supportServantListViewManager )
          {
            SupportServantListViewManager__SetMode(supportServantListViewManager, 2, v35, 0LL);
            return;
          }
LABEL_48:
          sub_1C13F80(normalTabButton, *(_QWORD *)&modeKind);
        }
        SupportServantListViewManager__SetMode_34438164((SupportServantListViewManager_o *)normalTabButton, 1, 0LL);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  System_Int64_array *v17; // x1
  System_Int64_array *v18; // x2
  bool v19; // w4
  bool v20; // w5
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  System_Int64_array *v28; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BB10DD & 1) == 0 )
  {
    sub_1C13D24(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1C13D24(&NetworkManager_TypeInfo, v5);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1C13D24(&Method_SupportServantSelectMenu_EndStatusSync__, v7);
    byte_4BB10DD = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v28 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_21;
    if ( SupportServantListViewManager__GetSwapChoiceList(supportServantListViewManager, &choiceList, &v28, 0LL) )
    {
      this->fields.requestCallback = callback;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.requestCallback,
        (int64_t)callback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                           v27,
                                                                           (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v18 = v28;
        v17 = choiceList;
        v20 = 1;
        v19 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C13F80(supportServantListViewManager, callback);
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
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.requestCallback,
        (int64_t)callback,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                           v16,
                                                                           (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C13DE4(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A52108;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A520A8;
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  _QWORD v16[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v17; // [xsp+10h] [xbp-60h]
  int32_t v18; // [xsp+28h] [xbp-48h] BYREF
  int32_t v19; // [xsp+2Ch] [xbp-44h] BYREF

  v18 = classPos;
  v19 = result;
  if ( (byte_4BB10E2 & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, *(_QWORD *)&result);
    sub_1C13D24(&SupportSelectRootComponent_ResultKind_TypeInfo, v11);
    byte_4BB10E2 = 1;
  }
  v17 = 0u;
  v16[0] = j_il2cpp_value_box_0(
             SupportSelectRootComponent_ResultKind_TypeInfo,
             &v19,
             *(_QWORD *)&classPos,
             entity,
             callback);
  v16[1] = j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
  *(_QWORD *)&v17 = entity;
  return (System_IAsyncResult_o *)sub_1C13CD8(this, v16, callback, object);
}


void __fastcall SupportServantSelectMenu_CallbackFunc__EndInvoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C13DE4(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A52168;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A52120;
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
  if ( (byte_4BB10E3 & 1) == 0 )
  {
    sub_1C13D24(&bool_TypeInfo, isRequest);
    byte_4BB10E3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C13CD8(this, v9, callback, object);
}


void __fastcall SupportServantSelectMenu_RequestCallbackFunc__EndInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
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
  CommonUI_o *v11; // x20
  System_Action_o *_9__1; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct SupportServantSelectMenu_o *_4__this; // x20
  SupportServantListViewManager_o *supportServantListViewManager; // x19
  SupportServantListViewManager_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3

  if ( (byte_4BB10E4 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, isDecide);
    sub_1C13D24(&SupportServantListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C13D24(&Method_SupportServantSelectMenu_OnSelectItem__, v7);
    sub_1C13D24(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__, v8);
    byte_4BB10E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v13, v14, v15, v16, v17, v18);
    }
    if ( v11 )
    {
      CommonUI__CloseConfirmDialog_31071160(v11, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1C13F80(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v21 = (SupportServantListViewManager_CallbackFunc_o *)sub_1C13F70(SupportServantListViewManager_CallbackFunc_TypeInfo);
  SupportServantListViewManager_CallbackFunc___ctor(
    v21,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v22);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  SupportServantListViewManager__SetMode(supportServantListViewManager, 2, v21, 0LL);
}


void __fastcall SupportServantSelectMenu___c__DisplayClass31_0___OnSelectItem_b__1(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C13F80(this, method);
  SupportServantSelectMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}