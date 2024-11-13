void __fastcall SupportServantSelectMenu___ctor(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12C56 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B12C56 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
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
    sub_1BCA784(p_callbackFunc, 0LL, *(int64_t *)&classPos, (int32_t)entity, (System_String_o *)method, v5, v6, v7);
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
    sub_1BCAA3C(0LL, method);
  ListViewManager__ClearScrollBarValue(supportServantListViewManager, 1, 0LL);
}


void __fastcall SupportServantSelectMenu__EndCardFavoriteRequest(
        SupportServantSelectMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  SupportServantListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  SupportServantListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3

  if ( (byte_4B12C55 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantListViewManager_CallbackFunc_TypeInfo, result, method);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_OnSelectItem__, v4, v5);
    byte_4B12C55 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  this->fields.state = 2;
  if ( !supportServantListViewManager
    || (SupportServantListViewManager__UpdateItemState(supportServantListViewManager, 1, 0LL),
        v7 = this->fields.supportServantListViewManager,
        v11 = (SupportServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                                v8,
                                                                v9,
                                                                v10),
        SupportServantListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
          v12),
        !v7) )
  {
    sub_1BCAA3C(supportServantListViewManager, result);
  }
  SupportServantListViewManager__SetMode(v7, 2, v11, 0LL);
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
      sub_1BCAA3C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_34058108(supportServantListViewManager, 3, 0LL);
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
      sub_1BCAA3C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_34058108(supportServantListViewManager, 3, 0LL);
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
      sub_1BCAA3C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_34058108(supportServantListViewManager, 3, 0LL);
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
      sub_1BCAA3C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_34058108(supportServantListViewManager, 3, 0LL);
  }
  SupportServantSelectMenu__setModeTabKind(this, 3, method);
}


void __fastcall SupportServantSelectMenu__EndOpen(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  SupportServantListViewManager_o *supportServantListViewManager; // x20
  SupportServantListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B12C4A & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_OnSelectItem__, v5, v6);
    byte_4B12C4A = 1;
  }
  this->fields.state = 2;
  supportServantListViewManager = this->fields.supportServantListViewManager;
  v8 = (SupportServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                         SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
  SupportServantListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v9);
  if ( !supportServantListViewManager )
    sub_1BCAA3C(v10, v11);
  SupportServantListViewManager__SetMode(supportServantListViewManager, 2, v8, 0LL);
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
    sub_1BCA784(p_requestCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      1LL,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall SupportServantSelectMenu__Init(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  __int64 v7; // x1
  UILabel_o *explanationLabel; // x20
  UICommonButton_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v11; // x2

  if ( (byte_4B12C48 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_12622/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v4, v5);
    byte_4B12C48 = 1;
  }
  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    goto LABEL_9;
  SupportServantListViewManager__DestroyList(supportServantListViewManager, 0LL);
  this->fields.state = 0;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  supportServantListViewManager = (SupportServantListViewManager_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_12622/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/,
                                                                       0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantListViewManager, 0LL),
        (normalTabButton = this->fields.normalTabButton) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(supportServantListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
  UICommonButton__SetColliderEnable(normalTabButton, enabled, 1, 0LL);
  SupportServantSelectMenu__setModeTabKind(this, 0, v11);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantSelectMenu__ModifyItem(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  SupportServantListViewManager_o *supportServantListViewManager; // x0

  supportServantListViewManager = this->fields.supportServantListViewManager;
  if ( !supportServantListViewManager )
    sub_1BCAA3C(0LL, method);
  SupportServantListViewManager__SetMode_34058108(supportServantListViewManager, 3, 0LL);
}


void __fastcall SupportServantSelectMenu__OnClickCancel(SupportServantSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  ListViewManager_o *supportServantListViewManager; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  SupportServantSelectMenu_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B12C51 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_OnClickCancel__, v4, v5);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_endCancelButton__, v6, v7);
    sub_1BCA7E0(&StringLiteral_4589/*"ClassPos"*/, v8, v9);
    byte_4B12C51 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v10 = Method_SupportServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_SupportServantSelectMenu_OnClickCancel__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0LL);
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4589/*"ClassPos"*/, this->fields.classPos, 0LL);
    supportServantListViewManager = (ListViewManager_o *)this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      sub_1BCAA3C(0LL, v12);
    ListViewManager__SetScrollBarValue(supportServantListViewManager, 0LL);
    v17 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                              SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                              v14,
                                                              v15,
                                                              v16);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_endCancelButton__,
      v18);
    SupportServantSelectMenu__statusRequest(this, v17, v19);
  }
}


void __fastcall SupportServantSelectMenu__OnClickScaleChange(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4B12C53 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SupportServantSelectMenu_OnClickScaleChange__, method, v2);
    byte_4B12C53 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_SupportServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SupportServantSelectMenu_OnClickScaleChange__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
      sub_1BCAA3C(supportServantListViewManager, v6);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x20
  int64_t supportServantListViewManager; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  SupportServantListViewItem_o *Item; // x1
  SupportServantListViewItem_o **v67; // x19
  int32_t tabModeKind; // w8
  _QWORD *v69; // x0
  System_Reflection_MethodBase_o *v70; // x0
  int32_t v71; // w1
  _QWORD *v72; // x0
  SupportServantListViewManager_o *v73; // x19
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  SupportServantListViewManager_CallbackFunc_o *v77; // x0
  const MethodInfo *v78; // x3
  intptr_t v79; // w2
  SupportServantListViewManager_CallbackFunc_o *v80; // x20
  _BOOL4 v81; // w23
  _QWORD *v82; // x8
  System_Reflection_MethodBase_o *v83; // x0
  const MethodInfo *v84; // x2
  int64_t v85; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v87; // q1
  _QWORD *v88; // x0
  System_Reflection_MethodBase_o *v89; // x0
  const MethodInfo *v90; // x1
  const MethodInfo *v91; // x4
  int32_t classPos; // w2
  UserServantEntity_o *v93; // x3
  int32_t v94; // w1
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  SupportServantListViewItem_o *v98; // x8
  _QWORD *v99; // x0
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v101; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  __int64 v104; // x1
  Il2CppObject *v105; // x26
  __int64 v106; // x1
  Il2CppObject *Master_object; // x24
  System_String_o *v108; // x21
  System_String_o *v109; // x22
  __int64 v110; // x23
  __int64 v111; // x1
  int32_t Rarity; // w27
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x27
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  int64_t v126; // x26
  int32_t v127; // w0
  Il2CppClass *v128; // x8
  int32_t v129; // w25
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  int64_t v136; // x25
  int32_t v137; // w0
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  int64_t v144; // x25
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  int64_t v151; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v152; // x8
  int32_t v153; // w19
  int32_t v154; // w0
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  int64_t v161; // x19
  System_String_o *v162; // x19
  System_String_o *v163; // x22
  System_String_o *v164; // x23
  Il2CppObject *Instance; // x24
  __int64 v166; // x1
  __int64 v167; // x2
  __int64 v168; // x3
  CommonConfirmDialog_ClickDelegate_o *v169; // x25
  _QWORD *v170; // x0
  System_Reflection_MethodBase_o *v171; // x0
  const MethodInfo *v172; // x1
  __int64 v173; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v174; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v175; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v177; // 0:x0.16

  if ( (byte_4B12C4B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&offset);
    sub_1BCA7E0(&SupportServantListViewManager_CallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v21, v22);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&object___TypeInfo, v25, v26);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29, v30);
    sub_1BCA7E0(&Rarity_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_OnSelectItem__, v37, v38);
    sub_1BCA7E0(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__, v39, v40);
    sub_1BCA7E0(&SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo, v41, v42);
    sub_1BCA7E0(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v49, v50);
    byte_4B12C4B = 1;
  }
  v51 = sub_1BCAA2C(
          SupportServantSelectMenu___c__DisplayClass31_0_TypeInfo,
          *(_QWORD *)&kind,
          *(_QWORD *)&offset,
          method);
  System_Object___ctor((Il2CppObject *)v51, 0LL);
  if ( !v51 )
    goto LABEL_104;
  *(_QWORD *)(v51 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 16), (int64_t)this, v54, v55, v56, v57, v58, v59);
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
    *(_QWORD *)(v51 + 24) = Item;
    v67 = (SupportServantListViewItem_o **)(v51 + 24);
    sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 24), (int64_t)Item, v60, v61, v62, v63, v64, v65);
    if ( kind == 2 )
    {
      tabModeKind = this->fields.tabModeKind;
      if ( tabModeKind == 2 )
      {
        supportServantListViewManager = (int64_t)*v67;
        if ( !*v67 )
          goto LABEL_104;
        SupportServantListViewItem__SwapChoice((SupportServantListViewItem_o *)supportServantListViewManager, 0LL);
        v72 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v72 = (_QWORD *)sub_1BCA7F8(Method_SupportServantSelectMenu_OnSelectItem__);
        v70 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v72, v72[4]);
        v71 = 0;
        goto LABEL_20;
      }
      if ( tabModeKind == 1 )
      {
        supportServantListViewManager = (int64_t)*v67;
        if ( !*v67 )
          goto LABEL_104;
        SupportServantListViewItem__SwapLock((SupportServantListViewItem_o *)supportServantListViewManager, 0LL);
        v69 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v69 = (_QWORD *)sub_1BCA7F8(Method_SupportServantSelectMenu_OnSelectItem__);
        v70 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v69, v69[4]);
        v71 = 11;
        goto LABEL_20;
      }
      supportServantListViewManager = (int64_t)*v67;
      if ( !*v67 )
        goto LABEL_104;
      if ( tabModeKind == 3 )
      {
        v81 = *(unsigned __int8 *)(supportServantListViewManager + 196);
        v82 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v82 = (_QWORD *)sub_1BCA7F8(Method_SupportServantSelectMenu_OnSelectItem__);
        v83 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v82, v82[4]);
        if ( !v81 )
        {
          OverwriteAssetSoundName__PlaySystemSe(v83, 2, 0LL);
          this->fields.state = 2;
          v73 = this->fields.supportServantListViewManager;
          v77 = (SupportServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                  SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                                  v95,
                                                                  v96,
                                                                  v97);
          v79 = (int)Method_SupportServantSelectMenu_OnSelectItem__;
LABEL_21:
          v80 = v77;
          SupportServantListViewManager_CallbackFunc___ctor(v77, (Il2CppObject *)this, v79, v78);
          if ( v73 )
          {
            SupportServantListViewManager__SetMode(v73, 2, v80, 0LL);
            return;
          }
LABEL_104:
          sub_1BCAA3C(supportServantListViewManager, v53);
        }
        OverwriteAssetSoundName__PlaySystemSe(v83, 0, 0LL);
        supportServantListViewManager = (int64_t)UserGameMaster__getSelfUserGame(0LL);
        if ( !supportServantListViewManager )
          goto LABEL_104;
        v85 = *(_QWORD *)(supportServantListViewManager + 120);
        if ( !v85 )
          goto LABEL_35;
        if ( !*v67 )
          goto LABEL_104;
        userServantEntity = (*v67)->fields.userServantEntity;
        if ( !userServantEntity )
          goto LABEL_104;
        v87 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v175.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v175.fields.fakeValue = v87;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v53);
        v174 = v175;
        if ( v85 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v174, 0LL) )
        {
LABEL_35:
          SupportServantSelectMenu__PushRequest(this, *v67, v84);
          return;
        }
        supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_104;
        supportServantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)supportServantListViewManager,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !supportServantListViewManager )
          goto LABEL_104;
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager,
                   v85,
                   (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        supportServantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantListViewManager )
          goto LABEL_104;
        supportServantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)supportServantListViewManager,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !Entity )
          goto LABEL_104;
        v101 = (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantListViewManager;
        klass = Entity[5].klass;
        monitor = Entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53);
        *(_QWORD *)&v176.fields.currentCryptoKey = klass;
        *(_QWORD *)&v176.fields.fakeValue = monitor;
        supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v176, 0LL);
        if ( !v101 )
          goto LABEL_104;
        v105 = DataMasterBase_object__object__int___GetEntity(
                 v101,
                 supportServantListViewManager,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v104);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v106);
        v108 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
        v109 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
        v110 = sub_1BCA888(object___TypeInfo, 6LL);
        Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v111);
        supportServantListViewManager = (int64_t)Rarity__getRarityType(Rarity, 0LL);
        if ( !v110 )
          goto LABEL_104;
        v119 = supportServantListViewManager;
        if ( !supportServantListViewManager
          || (supportServantListViewManager = sub_1BCA91C(
                                                supportServantListViewManager,
                                                *(_QWORD *)(*(_QWORD *)v110 + 64LL))) != 0 )
        {
          if ( !*(_DWORD *)(v110 + 24) )
            goto LABEL_105;
          *(_QWORD *)(v110 + 32) = v119;
          sub_1BCA784((PartyOrganizationUtility_o *)(v110 + 32), v119, v113, v114, v115, v116, v117, v118);
          if ( !v105 )
            goto LABEL_104;
          supportServantListViewManager = (int64_t)ServantEntity__getClassName((ServantEntity_o *)v105, 0LL);
          v126 = supportServantListViewManager;
          if ( !supportServantListViewManager
            || (supportServantListViewManager = sub_1BCA91C(
                                                  supportServantListViewManager,
                                                  *(_QWORD *)(*(_QWORD *)v110 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v110 + 24) <= 1u )
              goto LABEL_105;
            *(_QWORD *)(v110 + 40) = v126;
            sub_1BCA784((PartyOrganizationUtility_o *)(v110 + 40), v126, v120, v121, v122, v123, v124, v125);
            v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                     0LL);
            v128 = Entity[6].klass;
            *(_QWORD *)&v177.fields.fakeValue = Entity[6].monitor;
            v129 = v127;
            *(_QWORD *)&v177.fields.currentCryptoKey = v128;
            supportServantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v177,
                                              0LL);
            if ( !Master_object )
              goto LABEL_104;
            supportServantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                       (ServantLimitImageMaster_o *)Master_object,
                                                       v129,
                                                       supportServantListViewManager,
                                                       0LL);
            v136 = supportServantListViewManager;
            if ( !supportServantListViewManager
              || (supportServantListViewManager = sub_1BCA91C(
                                                    supportServantListViewManager,
                                                    *(_QWORD *)(*(_QWORD *)v110 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v110 + 24) <= 2u )
                goto LABEL_105;
              *(_QWORD *)(v110 + 48) = v136;
              sub_1BCA784((PartyOrganizationUtility_o *)(v110 + 48), v136, v130, v131, v132, v133, v134, v135);
              if ( !*v67 )
                goto LABEL_104;
              supportServantListViewManager = (int64_t)(*v67)->fields.userServantEntity;
              if ( !supportServantListViewManager )
                goto LABEL_104;
              v137 = UserServantEntity__getRarity((UserServantEntity_o *)supportServantListViewManager, 0LL);
              supportServantListViewManager = (int64_t)Rarity__getRarityType(v137, 0LL);
              v144 = supportServantListViewManager;
              if ( !supportServantListViewManager
                || (supportServantListViewManager = sub_1BCA91C(
                                                      supportServantListViewManager,
                                                      *(_QWORD *)(*(_QWORD *)v110 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v110 + 24) <= 3u )
                  goto LABEL_105;
                *(_QWORD *)(v110 + 56) = v144;
                sub_1BCA784((PartyOrganizationUtility_o *)(v110 + 56), v144, v138, v139, v140, v141, v142, v143);
                if ( !*v67 )
                  goto LABEL_104;
                supportServantListViewManager = (int64_t)(*v67)->fields.servantEntity;
                if ( !supportServantListViewManager )
                  goto LABEL_104;
                supportServantListViewManager = (int64_t)ServantEntity__getClassName(
                                                           (ServantEntity_o *)supportServantListViewManager,
                                                           0LL);
                v151 = supportServantListViewManager;
                if ( !supportServantListViewManager
                  || (supportServantListViewManager = sub_1BCA91C(
                                                        supportServantListViewManager,
                                                        *(_QWORD *)(*(_QWORD *)v110 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v110 + 24) <= 4u )
                    goto LABEL_105;
                  *(_QWORD *)(v110 + 64) = v151;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v110 + 64), v151, v145, v146, v147, v148, v149, v150);
                  supportServantListViewManager = (int64_t)*v67;
                  if ( !*v67 )
                    goto LABEL_104;
                  supportServantListViewManager = SupportServantListViewItem__get_SvtId(
                                                    (SupportServantListViewItem_o *)supportServantListViewManager,
                                                    0LL);
                  if ( !*v67 )
                    goto LABEL_104;
                  v152 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v67)->fields.userServantEntity;
                  if ( !v152 )
                    goto LABEL_104;
                  v153 = supportServantListViewManager;
                  v154 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v152[6], 0LL);
                  supportServantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                             (ServantLimitImageMaster_o *)Master_object,
                                                             v153,
                                                             v154,
                                                             0LL);
                  v161 = supportServantListViewManager;
                  if ( !supportServantListViewManager
                    || (supportServantListViewManager = sub_1BCA91C(
                                                          supportServantListViewManager,
                                                          *(_QWORD *)(*(_QWORD *)v110 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v110 + 24) > 5u )
                    {
                      *(_QWORD *)(v110 + 72) = v161;
                      sub_1BCA784((PartyOrganizationUtility_o *)(v110 + 72), v161, v155, v156, v157, v158, v159, v160);
                      v162 = System_String__Format_62415728(v109, (System_Object_array *)v110, 0LL);
                      v163 = LocalizationManager__Get((System_String_o *)StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                      v164 = LocalizationManager__Get((System_String_o *)StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      v169 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                      CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                      v166,
                                                                      v167,
                                                                      v168);
                      CommonConfirmDialog_ClickDelegate___ctor(
                        v169,
                        (Il2CppObject *)v51,
                        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__0__,
                        0LL);
                      supportServantListViewManager = (int64_t)BalanceConfig_TypeInfo;
                      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v53);
                      if ( !Instance )
                        goto LABEL_104;
                      CommonUI__OpenConfirmDialog_30766228(
                        (CommonUI_o *)Instance,
                        v108,
                        v162,
                        v163,
                        v164,
                        v169,
                        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                        0,
                        0,
                        0LL);
                      return;
                    }
LABEL_105:
                    sub_1BCAA44(supportServantListViewManager, v53);
                  }
                }
              }
            }
          }
        }
        v173 = sub_1BCAA60();
        sub_1BCA908(v173, 0LL);
      }
      if ( *(_BYTE *)(supportServantListViewManager + 188) )
      {
        v88 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v88 = (_QWORD *)sub_1BCA7F8(Method_SupportServantSelectMenu_OnSelectItem__);
        v89 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v88, v88[4]);
        OverwriteAssetSoundName__PlaySystemSe(v89, 0, 0LL);
        SupportServantSelectMenu__Init(this, v90);
        supportServantListViewManager = (int64_t)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !supportServantListViewManager )
          goto LABEL_104;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
        if ( !*v67 )
          goto LABEL_104;
        classPos = this->fields.classPos;
        v93 = (*v67)->fields.userServantEntity;
        v94 = 2;
      }
      else
      {
        if ( SupportServantListViewItem__get_IsCanNotSelectHeroine(
               (SupportServantListViewItem_o *)supportServantListViewManager,
               0LL) )
        {
          goto LABEL_50;
        }
        supportServantListViewManager = (int64_t)*v67;
        if ( !*v67 )
          goto LABEL_104;
        supportServantListViewManager = SupportServantListViewItem__get_IsUseServant(
                                          (SupportServantListViewItem_o *)supportServantListViewManager,
                                          0LL);
        if ( (supportServantListViewManager & 1) != 0 )
          goto LABEL_50;
        v98 = *v67;
        if ( !*v67 )
          goto LABEL_104;
        if ( v98->fields.isEventJoin || v98->fields.isUseInSet )
        {
LABEL_50:
          v99 = Method_SupportServantSelectMenu_OnSelectItem__;
          if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
            v99 = (_QWORD *)sub_1BCA7F8(Method_SupportServantSelectMenu_OnSelectItem__);
          v70 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v99, v99[4]);
          v71 = 2;
LABEL_20:
          OverwriteAssetSoundName__PlaySystemSe(v70, v71, 0LL);
          v73 = this->fields.supportServantListViewManager;
          v77 = (SupportServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                  SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                                  v74,
                                                                  v75,
                                                                  v76);
          v79 = (int)Method_SupportServantSelectMenu_OnSelectItem__;
          goto LABEL_21;
        }
        v170 = Method_SupportServantSelectMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_SupportServantSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
          v170 = (_QWORD *)sub_1BCA7F8(Method_SupportServantSelectMenu_OnSelectItem__);
        v171 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v170, v170[4]);
        OverwriteAssetSoundName__PlaySystemSe(v171, 0, 0LL);
        SupportServantSelectMenu__Init(this, v172);
        supportServantListViewManager = (int64_t)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !supportServantListViewManager )
          goto LABEL_104;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantListViewManager, 0, 0LL);
        if ( !*v67 )
          goto LABEL_104;
        classPos = this->fields.classPos;
        v93 = (*v67)->fields.userServantEntity;
        v94 = 1;
      }
      SupportServantSelectMenu__Callback(this, v94, classPos, v93, v91);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v33; // x1
  UnityEngine_GameObject_o *v34; // x27
  SupportServantListViewManager_o *supportServantListViewManager; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  SupportServantListViewManager_CallbackFunc_o *v39; // x21
  const MethodInfo *v40; // x3
  UISprite_o *scaleChangeTabSprite; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_o *v45; // x20

  if ( (byte_4B12C49 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, supportServantData, *(_QWORD *)&nowDeckNum);
    sub_1BCA7E0(&SupportServantListViewManager_CallbackFunc_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_EndOpen__, v20, v21);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_OnSelectItem__, v22, v23);
    sub_1BCA7E0(&StringLiteral_4589/*"ClassPos"*/, v24, v25);
    byte_4B12C49 = 1;
  }
  SupportServantSelectMenu__Init(this, (const MethodInfo *)supportServantData);
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v26, v27, v28, v29, v30, v31);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_16;
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v34 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v34, (unsigned __int8)gameObject & 1, 0LL);
  this->fields.classPos = classPos;
  if ( UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_4589/*"ClassPos"*/, -1, 0LL) != classPos )
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
  TitleInfoControl__setBackBtnSprite_37887988((TitleInfoControl_o *)gameObject, 1, 0, 0, 0LL);
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
  v39 = (SupportServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                          SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                          v36,
                                                          v37,
                                                          v38);
  SupportServantListViewManager_CallbackFunc___ctor(
    v39,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v40);
  if ( !supportServantListViewManager
    || (SupportServantListViewManager__SetMode(supportServantListViewManager, 1, v39, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportServantListViewManager) == 0LL)
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        gameObject = (UnityEngine_GameObject_o *)SupportServantListViewManager__GetScaleButtonSpriteName(
                                                   (SupportServantListViewManager_o *)gameObject,
                                                   0LL),
        !scaleChangeTabSprite) )
  {
LABEL_16:
    sub_1BCAA3C(gameObject, v33);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)gameObject, 0LL);
  this->fields.state = 2;
  v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v42, v43, v44);
  System_Action___ctor(v45, (Il2CppObject *)this, Method_SupportServantSelectMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v45, 0LL);
}


void __fastcall SupportServantSelectMenu__PushRequest(
        SupportServantSelectMenu_o *this,
        SupportServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  DataManager_o *limitCountSupport; // x0
  __int64 v22; // x1
  DataManager_o *v23; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v25; // x21
  int64_t v26; // x22
  __int64 v27; // x24
  __int64 v28; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int64 v30; // x1
  __int128 v31; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v34; // x0
  __int128 v35; // q1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  NetworkManager_ResultCallbackFunc_o *v39; // x21
  __int64 v40; // x1
  Il2CppObject *Request_object; // x0
  __int128 v42; // q1
  CardFavoriteRequest_o *v43; // x20
  int32_t v44; // w26
  int32_t v45; // w27
  int32_t v46; // w28
  int32_t v47; // w29
  bool IsLock; // w21
  char v49; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v53; // w0
  __int64 v54; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v58; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v60; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v61; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B12C54 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_EndCardFavoriteRequest__, v19, v20);
    byte_4B12C54 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v23 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v23 || !userServantEntity )
    goto LABEL_18;
  v25 = (UserServantCollectionMaster_o *)limitCountSupport;
  v26 = *(_QWORD *)&v23->fields.m_CachedPtr;
  v28 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
  *(_QWORD *)&v66.fields.currentCryptoKey = v28;
  *(_QWORD *)&v66.fields.fakeValue = v27;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
  if ( !v25 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v25, v26, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v31 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v23->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v65.fields.fakeValue = v31;
  v61 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30);
  v64 = v65;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v64, 0LL);
  v35 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v23->fields.masterLoadThreads;
  v60 = v34;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v35;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v63, 0LL);
  v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v36, v37, v38);
  NetworkManager_ResultCallbackFunc___ctor(
    v39,
    (Il2CppObject *)this,
    Method_SupportServantSelectMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
  Request_object = NetworkManager__getRequest_object_(
                     v39,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v42 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v43 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v42;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v62, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v49 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v54 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v67.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v53;
  *(_QWORD *)&v67.fields.currentCryptoKey = v54;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v67, 0LL);
  if ( !v43 )
LABEL_18:
    sub_1BCAA3C(limitCountSupport, v22);
  CardFavoriteRequest__beginRequest(
    v43,
    targetUsrSVtId,
    imageLimitCount,
    v44,
    v45,
    v46,
    v47,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v58,
    IsLock,
    v49 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v61 != (struct System_Threading_SynchronizationContext_o *)v60,
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

  if ( (byte_4B12C46 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B12C46 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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
      sub_1BCAA3C(supportServantListViewManager, isRequest);
    }
    SupportServantListViewManager__SetMode_34058108(supportServantListViewManager, 3, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B12C4E & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_EndClickTabChoice__, v4, v5);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_onClickChoiceTabButton__, v6, v7);
    byte_4B12C4E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_SupportServantSelectMenu_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_SupportServantSelectMenu_onClickChoiceTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v14 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                  SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                  v10,
                                                                  v11,
                                                                  v12);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabChoice__,
          v15);
        SupportServantSelectMenu__statusRequest(this, v14, v16);
        return;
      }
      v17 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                v10,
                                                                v11,
                                                                v12);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabChoice__,
        v18);
      SupportServantSelectMenu__statusRequest(this, v17, v19);
    }
    SupportServantSelectMenu__setModeTabKind(this, 2, v11);
  }
}


void __fastcall SupportServantSelectMenu__onClickLockTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  int32_t tabModeKind; // w8
  SupportServantSelectMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  SupportServantSelectMenu_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B12C4D & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_EndClickTabLock__, v4, v5);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_onClickLockTabButton__, v6, v7);
    byte_4B12C4D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_SupportServantSelectMenu_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickLockTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_SupportServantSelectMenu_onClickLockTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v14 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                  SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                  v10,
                                                                  v11,
                                                                  v12);
        SupportServantSelectMenu_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_SupportServantSelectMenu_EndClickTabLock__,
          v15);
        SupportServantSelectMenu__statusRequest(this, v14, v16);
        return;
      }
      v17 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                                v10,
                                                                v11,
                                                                v12);
      SupportServantSelectMenu_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndClickTabLock__,
        v18);
      SupportServantSelectMenu__statusRequest(this, v17, v19);
    }
    SupportServantSelectMenu__setModeTabKind(this, 1, v11);
  }
}


void __fastcall SupportServantSelectMenu__onClickNormalTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  SupportServantSelectMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B12C4C & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_EndClickTabNormal__, v4, v5);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_onClickNormalTabButton__, v6, v7);
    byte_4B12C4C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_SupportServantSelectMenu_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickNormalTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_SupportServantSelectMenu_onClickNormalTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                              SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                              v10,
                                                              v11,
                                                              v12);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabNormal__,
      v14);
    SupportServantSelectMenu__statusRequest(this, v13, v15);
  }
}


void __fastcall SupportServantSelectMenu__onClickPushTabButton(
        SupportServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  SupportServantSelectMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B12C4F & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantSelectMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_EndClickTabPush__, v4, v5);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_onClickPushTabButton__, v6, v7);
    byte_4B12C4F = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v8 = Method_SupportServantSelectMenu_onClickPushTabButton__;
    if ( (*((_BYTE *)Method_SupportServantSelectMenu_onClickPushTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_SupportServantSelectMenu_onClickPushTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (SupportServantSelectMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                              SupportServantSelectMenu_RequestCallbackFunc_TypeInfo,
                                                              v10,
                                                              v11,
                                                              v12);
    SupportServantSelectMenu_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_SupportServantSelectMenu_EndClickTabPush__,
      v14);
    SupportServantSelectMenu__statusRequest(this, v13, v15);
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

  if ( (byte_4B12C47 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B12C47 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  SupportServantSelectMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantSelectMenu__setModeTabKind(
        SupportServantSelectMenu_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Behaviour_o *normalTabButton; // x0
  UICommonButton_o *v34; // x21
  bool enabled; // w0
  System_String_o **v36; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v38; // w0
  System_String_o **v39; // x8
  UICommonButton_o *choiceTabButton; // x21
  bool v41; // w0
  System_String_o **v42; // x8
  UICommonButton_o *pushTabButton; // x21
  bool v44; // w0
  __int64 *v45; // x8
  UILabel_o *explanationLabel; // x21
  __int64 *v47; // x8
  SupportServantListViewManager_o *supportServantListViewManager; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  SupportServantListViewManager_CallbackFunc_o *v52; // x21
  const MethodInfo *v53; // x3

  if ( (byte_4B12C50 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_OnSelectItem__, v7, v8);
    sub_1BCA7E0(&StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17839/*"button_push_reg"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17840/*"button_push_unreg"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17825/*"button_allchoice_reg"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_17828/*"button_alllock_unreg"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17841/*"button_select_reg"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_12622/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_17842/*"button_select_unreg"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_17827/*"button_alllock_reg"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_17826/*"button_allchoice_unreg"*/, v31, v32);
    byte_4B12C50 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    v34 = this->fields.normalTabButton;
    if ( !v34 )
      goto LABEL_48;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
    UICommonButton__SetColliderEnable(v34, enabled, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    v36 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17842/*"button_select_unreg"*/ : &StringLiteral_17841/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v36, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_48;
    v38 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v38, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    v39 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17827/*"button_alllock_reg"*/ : &StringLiteral_17828/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v39, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_48;
    v41 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v41, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    v42 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17825/*"button_allchoice_reg"*/ : &StringLiteral_17826/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v42, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0LL);
    pushTabButton = this->fields.pushTabButton;
    if ( !pushTabButton )
      goto LABEL_48;
    v44 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
    UICommonButton__SetColliderEnable(pushTabButton, v44, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
    if ( !normalTabButton )
      goto LABEL_48;
    if ( this->fields.tabModeKind == 3 )
      v45 = &StringLiteral_17839/*"button_push_reg"*/;
    else
      v45 = &StringLiteral_17840/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v45, 0LL);
    switch ( this->fields.tabModeKind )
    {
      case 0:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        v47 = &StringLiteral_12622/*"SUPPORT_SERVANT_SELECT_EXPLANATION"*/;
        goto LABEL_41;
      case 1:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        v47 = &StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_41;
      case 2:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        v47 = &StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_41;
      case 3:
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        v47 = &StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_41:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v47, 0LL);
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
          v52 = (SupportServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                  SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                                  v49,
                                                                  v50,
                                                                  v51);
          SupportServantListViewManager_CallbackFunc___ctor(
            v52,
            (Il2CppObject *)this,
            (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
            v53);
          if ( supportServantListViewManager )
          {
            SupportServantListViewManager__SetMode(supportServantListViewManager, 2, v52, 0LL);
            return;
          }
LABEL_48:
          sub_1BCAA3C(normalTabButton, *(_QWORD *)&modeKind);
        }
        SupportServantListViewManager__SetMode_34058108((SupportServantListViewManager_o *)normalTabButton, 1, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t tabModeKind; // w8
  SupportServantListViewManager_o *supportServantListViewManager; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  __int64 v23; // x1
  System_Int64_array *v24; // x1
  System_Int64_array *v25; // x2
  bool v26; // w4
  bool v27; // w5
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  NetworkManager_ResultCallbackFunc_o *v37; // x20
  __int64 v38; // x1
  System_Int64_array *v39; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B12C52 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_EndStatusSync__, v9, v10);
    byte_4B12C52 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v39 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantListViewManager = this->fields.supportServantListViewManager;
    if ( !supportServantListViewManager )
      goto LABEL_21;
    if ( SupportServantListViewManager__GetSwapChoiceList(supportServantListViewManager, &choiceList, &v39, 0LL) )
    {
      this->fields.requestCallback = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requestCallback,
        (int64_t)callback,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v37 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v34,
                                                     v35,
                                                     v36);
      NetworkManager_ResultCallbackFunc___ctor(
        v37,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v38);
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                           v37,
                                                                           (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v25 = v39;
        v24 = choiceList;
        v27 = 1;
        v26 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1BCAA3C(supportServantListViewManager, callback);
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
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requestCallback,
        (int64_t)callback,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      v22 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v19,
                                                     v20,
                                                     v21);
      NetworkManager_ResultCallbackFunc___ctor(
        v22,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
      supportServantListViewManager = (SupportServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                                           v22,
                                                                           (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantListViewManager )
      {
        v25 = unlockList;
        v24 = lockList;
        v26 = 1;
        v27 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantListViewManager,
          v24,
          v25,
          0,
          v26,
          v27,
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A09ABC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A09A5C;
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
  _QWORD v14[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v15; // [xsp+10h] [xbp-60h]
  int32_t v16; // [xsp+28h] [xbp-48h] BYREF
  int32_t v17; // [xsp+2Ch] [xbp-44h] BYREF

  v16 = classPos;
  v17 = result;
  if ( (byte_4B12C57 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&classPos);
    sub_1BCA7E0(&SupportSelectRootComponent_ResultKind_TypeInfo, v11, v12);
    byte_4B12C57 = 1;
  }
  v15 = 0u;
  v14[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_ResultKind_TypeInfo, &v17);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  *(_QWORD *)&v15 = entity;
  return (System_IAsyncResult_o *)sub_1BCA794(this, v14, callback, object);
}


void __fastcall SupportServantSelectMenu_CallbackFunc__EndInvoke(
        SupportServantSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A09B1C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A09AD4;
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
  if ( (byte_4B12C58 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isRequest, callback);
    byte_4B12C58 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall SupportServantSelectMenu_RequestCallbackFunc__EndInvoke(
        SupportServantSelectMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  CommonUI_o *v17; // x20
  System_Action_o *_9__1; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x2
  __int64 v26; // x3
  struct SupportServantSelectMenu_o *_4__this; // x20
  SupportServantListViewManager_o *supportServantListViewManager; // x19
  SupportServantListViewManager_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3

  if ( (byte_4B12C59 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&SupportServantListViewManager_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SupportServantSelectMenu_OnSelectItem__, v9, v10);
    sub_1BCA7E0(&Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__, v11, v12);
    byte_4B12C59 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SupportServantSelectMenu___c__DisplayClass31_0__OnSelectItem_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v19, v20, v21, v22, v23, v24);
    }
    if ( v17 )
    {
      CommonUI__CloseConfirmDialog_30766896(v17, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(Instance, v14);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  supportServantListViewManager = _4__this->fields.supportServantListViewManager;
  v29 = (SupportServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                          SupportServantListViewManager_CallbackFunc_TypeInfo,
                                                          v14,
                                                          v25,
                                                          v26);
  SupportServantListViewManager_CallbackFunc___ctor(
    v29,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_SupportServantSelectMenu_OnSelectItem__,
    v30);
  if ( !supportServantListViewManager )
    goto LABEL_12;
  SupportServantListViewManager__SetMode(supportServantListViewManager, 2, v29, 0LL);
}


void __fastcall SupportServantSelectMenu___c__DisplayClass31_0___OnSelectItem_b__1(
        SupportServantSelectMenu___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  SupportServantSelectMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}