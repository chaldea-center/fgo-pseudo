void __fastcall FavoriteChangeComponent___ctor(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FavoriteChangeComponent__EndCardFavoriteRequest(
        FavoriteChangeComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  FavoriteChangeListViewManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  FavoriteChangeListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_421546E & 1) == 0 )
  {
    sub_B0D8A4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, result);
    sub_B0D8A4(&Method_FavoriteChangeComponent_OnClickServant__, v4);
    byte_421546E = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, 0LL),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL)
    || (ListViewManager__SortItem((ListViewManager_o *)favoriteChangeManager, -1, 0, -1, 0LL),
        v6 = this->fields.favoriteChangeManager,
        v9 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                               v7,
                                                               v8),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !v6) )
  {
    sub_B0D97C(favoriteChangeManager);
  }
  FavoriteChangeListViewManager__SetMode(v6, 2, v9, 0LL);
}


void __fastcall FavoriteChangeComponent__EndClickTabChoice(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, 0LL),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL) )
    {
      sub_B0D97C(favoriteChangeManager);
    }
    FavoriteChangeListViewManager__SetMode_21852144(favoriteChangeManager, 2, 0LL);
  }
  FavoriteChangeComponent__setModeTabKind(this, 2, method);
}


void __fastcall FavoriteChangeComponent__EndClickTabLock(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, 0LL),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL) )
    {
      sub_B0D97C(favoriteChangeManager);
    }
    FavoriteChangeListViewManager__SetMode_21852144(favoriteChangeManager, 2, 0LL);
  }
  FavoriteChangeComponent__setModeTabKind(this, 1, method);
}


void __fastcall FavoriteChangeComponent__EndClickTabNormal(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, 0LL),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL) )
    {
      sub_B0D97C(favoriteChangeManager);
    }
    FavoriteChangeListViewManager__SetMode_21852144(favoriteChangeManager, 2, 0LL);
  }
  FavoriteChangeComponent__setModeTabKind(this, 0, method);
}


void __fastcall FavoriteChangeComponent__EndClickTabPush(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, 0LL),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL) )
    {
      sub_B0D97C(favoriteChangeManager);
    }
    FavoriteChangeListViewManager__SetMode_21852144(favoriteChangeManager, 2, 0LL);
  }
  FavoriteChangeComponent__setModeTabKind(this, 3, method);
}


void __fastcall FavoriteChangeComponent__EndCloseConfirmSelectFavorite(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_421546C & 1) == 0 )
  {
    sub_B0D8A4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FavoriteChangeComponent_OnClickServant__, v4);
    byte_421546C = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  v6 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B0D974(
                                                         FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                         method,
                                                         v2);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0LL);
  if ( !favoriteChangeManager )
    sub_B0D97C(v7);
  FavoriteChangeListViewManager__SetMode(favoriteChangeManager, 2, v6, 0LL);
}


void __fastcall FavoriteChangeComponent__EndStatusSync(
        FavoriteChangeComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_requedstCallback; // x0
  FavoriteChangeComponent_RequestCallbackFunc_o *v9; // x19
  struct FavoriteChangeComponent_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (BattleServantConfConponent_o *)&this->fields.requedstCallback;
  v9 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0LL;
    sub_B0D840(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    FavoriteChangeComponent_RequestCallbackFunc__Invoke(v9, 1, 0LL);
  }
}


void __fastcall FavoriteChangeComponent__EndePushRequest(
        FavoriteChangeComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  FavoriteChangeListViewManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  FavoriteChangeListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_4215470 & 1) == 0 )
  {
    sub_B0D8A4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, result);
    sub_B0D8A4(&Method_FavoriteChangeComponent_OnClickServant__, v4);
    byte_4215470 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__UpdateDisplayState(favoriteChangeManager, 1, 0LL),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL)
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, 0LL),
        v6 = this->fields.favoriteChangeManager,
        v9 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                               v7,
                                                               v8),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !v6) )
  {
    sub_B0D97C(favoriteChangeManager);
  }
  FavoriteChangeListViewManager__SetMode(v6, 2, v9, 0LL);
}


void __fastcall FavoriteChangeComponent__Init(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4215467 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_7050/*"HEADER_MSG_FAVORITE"*/, v3);
    byte_4215467 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager )
    goto LABEL_9;
  FavoriteChangeListViewManager__DestroyList(favoriteChangeManager, 0LL);
  this->fields.state = 0;
  infoLb = this->fields.infoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  favoriteChangeManager = (FavoriteChangeListViewManager_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_7050/*"HEADER_MSG_FAVORITE"*/,
                                                               0LL);
  if ( !infoLb )
LABEL_9:
    sub_B0D97C(favoriteChangeManager);
  UILabel__set_text(infoLb, (System_String_o *)favoriteChangeManager, 0LL);
  FavoriteChangeComponent__setModeTabKind(this, 0, v6);
}


void __fastcall FavoriteChangeComponent__OnClickScaleChange(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4215478 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4215478 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      sub_B0D97C(0LL);
    FavoriteChangeListViewManager__ChangeIconScale(favoriteChangeManager, 0LL);
    FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent__OnClickServant(
        FavoriteChangeComponent_o *this,
        int32_t kind,
        int32_t n,
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
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x20
  __int64 favoriteChangeManager; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  FavoriteChangeListViewItem_o **v54; // x21
  __int64 v55; // x8
  __int128 v56; // q1
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x2
  int32_t tabModeKind; // w8
  int32_t v60; // w0
  __int64 v61; // x1
  __int64 v62; // x2
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v64; // x20
  ServantStatusDialog_ResultDelegate_o *v65; // x22
  SoundManager_c *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  FavoriteChangeListViewManager_o *v69; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v70; // x21
  ServantEntity_o *servantEntity; // x22
  int64_t v72; // x23
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v74; // x23
  __int64 v75; // x24
  __int64 v76; // x25
  ServantEntity_o *v77; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x23
  int32_t v79; // w24
  FavoriteChangeListViewItem_o *v80; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v81; // x9
  int32_t v82; // w27
  int32_t svtId; // w24
  int32_t v84; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v86; // x23
  UserServantEntity_o *v87; // x0
  UserServantEntity_o *v88; // x0
  System_String_o *v89; // x23
  const MethodInfo *v90; // x2
  int64_t v91; // x22
  struct UserServantEntity_o *v92; // x8
  __int128 v93; // q0
  UserServantEntity_o *v94; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v95; // x22
  __int64 v96; // x23
  __int64 v97; // x24
  ServantEntity_o *v98; // x26
  ServantLimitImageMaster_o *v99; // x22
  int32_t v100; // w23
  FavoriteChangeListViewItem_o *v101; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v102; // x9
  int32_t v103; // w28
  int32_t v104; // w23
  int32_t v105; // w0
  int32_t v106; // w24
  System_String_o *v107; // x22
  System_String_o *v108; // x23
  System_Object_array *v109; // x25
  int32_t v110; // w27
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x27
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **v124; // x27
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **v131; // x26
  int32_t v132; // w0
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **v139; // x26
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_Int32_array **v146; // x26
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Int32_array **v153; // x21
  System_String_o *v154; // x21
  System_String_o *v155; // x23
  System_String_o *v156; // x24
  WebViewManager_o *v157; // x25
  __int64 v158; // x1
  __int64 v159; // x2
  CommonConfirmDialog_ClickDelegate_o *v160; // x26
  CommonUI_o *v161; // x0
  System_String_o *v162; // x1
  System_String_o *v163; // x2
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v165; // x3
  System_String_o *v166; // x4
  CommonConfirmDialog_ClickDelegate_o *v167; // x5
  System_String_o *v168; // x0
  System_String_o *v169; // x28
  System_Object_array *v170; // x23
  int32_t Rarity; // w26
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  System_Int32_array **v178; // x26
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  System_Int32_array **v185; // x26
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  System_Int32_array **v192; // x25
  int32_t v193; // w0
  System_String_array **v194; // x2
  System_String_array **v195; // x3
  System_Boolean_array **v196; // x4
  System_Int32_array **v197; // x5
  System_Int32_array *v198; // x6
  System_Int32_array *v199; // x7
  System_Int32_array **v200; // x21
  System_String_array **v201; // x2
  System_String_array **v202; // x3
  System_Boolean_array **v203; // x4
  System_Int32_array **v204; // x5
  System_Int32_array *v205; // x6
  System_Int32_array *v206; // x7
  System_Int32_array **v207; // x21
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  System_Int32_array **v214; // x21
  System_String_o *v215; // x21
  System_String_o *v216; // x22
  System_String_o *v217; // x23
  WebViewManager_o *Instance; // x24
  __int64 v219; // x1
  __int64 v220; // x2
  CommonConfirmDialog_ClickDelegate_o *v221; // x25
  __int64 v222; // x0
  __int64 v223; // x0
  System_String_o *title; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v225; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v226; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v227; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v228; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v229; // 0:x0.16

  if ( (byte_421546B & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, v7);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_B0D8A4(&DataManager_TypeInfo, v12);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_B0D8A4(&Method_FavoriteChangeComponent_OnClickServant__, v15);
    sub_B0D8A4(&Method_FavoriteChangeComponent_closeSvtDetail__, v16);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    sub_B0D8A4(&object___TypeInfo, v18);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_B0D8A4(&Rarity_TypeInfo, v21);
    sub_B0D8A4(&ServantStatusDialog_ResultDelegate_TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24);
    sub_B0D8A4(&SoundManager_TypeInfo, v25);
    sub_B0D8A4(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__, v26);
    sub_B0D8A4(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__, v27);
    sub_B0D8A4(&FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo, v28);
    sub_B0D8A4(&StringLiteral_12023/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, v29);
    sub_B0D8A4(&StringLiteral_12021/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, v30);
    sub_B0D8A4(&StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v31);
    sub_B0D8A4(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v32);
    sub_B0D8A4(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v33);
    sub_B0D8A4(&StringLiteral_12020/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, v34);
    sub_B0D8A4(&StringLiteral_12024/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, v35);
    sub_B0D8A4(&StringLiteral_1/*""*/, v36);
    sub_B0D8A4(&StringLiteral_12022/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, v37);
    sub_B0D8A4(&StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v38);
    byte_421546B = 1;
  }
  v39 = sub_B0D974(FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n);
  FavoriteChangeComponent___c__DisplayClass31_0___ctor((FavoriteChangeComponent___c__DisplayClass31_0_o *)v39, 0LL);
  if ( !v39 )
    goto LABEL_182;
  *(_QWORD *)(v39 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v39 + 16), (System_Int32_array **)this, v41, v42, v43, v44, v45, v46);
  if ( (n & 0x80000000) != 0 )
  {
    v53 = 0LL;
  }
  else
  {
    favoriteChangeManager = (__int64)this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_182;
    v53 = (System_Int32_array **)FavoriteChangeListViewManager__GetItem(
                                   (FavoriteChangeListViewManager_o *)favoriteChangeManager,
                                   n,
                                   0LL);
  }
  *(_QWORD *)(v39 + 24) = v53;
  v54 = (FavoriteChangeListViewItem_o **)(v39 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v39 + 24), v53, v47, v48, v49, v50, v51, v52);
  if ( !*(_QWORD *)(v39 + 24) )
    goto LABEL_182;
  v55 = *(_QWORD *)(*(_QWORD *)(v39 + 24) + 112LL);
  if ( !v55 )
    goto LABEL_182;
  v56 = *(_OWORD *)(v55 + 32);
  *(_OWORD *)&v227.fields.currentCryptoKey = *(_OWORD *)(v55 + 16);
  *(_OWORD *)&v227.fields.fakeValue = v56;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v226 = v227;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v226, 0LL);
  this->fields.usrSvtId = favoriteChangeManager;
  if ( kind == 1 )
  {
    FavoriteChangeComponent__setFavoriteRequest(this, *v54, v58);
    return;
  }
  if ( kind == 2 )
  {
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v54 )
    {
      userSvtEntity = (*v54)->fields.userSvtEntity;
      v64 = (CommonUI_o *)favoriteChangeManager;
      v65 = (ServantStatusDialog_ResultDelegate_o *)sub_B0D974(ServantStatusDialog_ResultDelegate_TypeInfo, v61, v62);
      ServantStatusDialog_ResultDelegate___ctor(
        v65,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_closeSvtDetail__,
        0LL);
      if ( v64 )
      {
        CommonUI__OpenServantStatusDialog_17028192(v64, 0, userSvtEntity, v65, 0, 0LL);
        return;
      }
    }
    goto LABEL_182;
  }
  if ( kind != 3 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( !*v54 )
      goto LABEL_182;
    (*v54)->fields.isSwapChoice ^= 1u;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v60 = 0;
    goto LABEL_47;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v54 )
      goto LABEL_182;
    (*v54)->fields.isSwapLock ^= 1u;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v60 = 11;
    goto LABEL_47;
  }
  favoriteChangeManager = (__int64)*v54;
  if ( !*v54 )
    goto LABEL_182;
  if ( tabModeKind != 3 )
  {
    if ( FavoriteChangeListViewItem__get_IsCanNotSelect((FavoriteChangeListViewItem_o *)favoriteChangeManager, v57) )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
        || SoundManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_46;
      }
      v66 = SoundManager_TypeInfo;
LABEL_45:
      j_il2cpp_runtime_class_init_0(v66);
LABEL_46:
      v60 = 2;
LABEL_47:
      SoundManager__playSystemSe(v60, 0LL);
      goto LABEL_48;
    }
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( *v54 )
    {
      servantEntity = (*v54)->fields.servantEntity;
      favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
      if ( favoriteChangeManager )
      {
        v72 = *(_QWORD *)(favoriteChangeManager + 112);
        favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( favoriteChangeManager )
        {
          favoriteChangeManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)favoriteChangeManager,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( favoriteChangeManager )
          {
            Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)favoriteChangeManager,
                       v72,
                       (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( favoriteChangeManager )
            {
              favoriteChangeManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)favoriteChangeManager,
                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( Entity )
              {
                v74 = (DataMasterBase_WarMaster__WarEntity__int__o *)favoriteChangeManager;
                v76 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
                v75 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v228.fields.currentCryptoKey = v76;
                *(_QWORD *)&v228.fields.fakeValue = v75;
                favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v228, 0LL);
                if ( v74 )
                {
                  v77 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v74,
                                             favoriteChangeManager,
                                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                  v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(Entity->fields.svtId, 0LL);
                  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                            Entity->fields.limitCount,
                                            0LL);
                  if ( Master_WarQuestSelectionMaster )
                  {
                    favoriteChangeManager = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                              Master_WarQuestSelectionMaster,
                                              v79,
                                              favoriteChangeManager,
                                              0LL);
                    v80 = *v54;
                    if ( *v54 )
                    {
                      v81 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v80->fields.userSvtEntity;
                      if ( v81 )
                      {
                        v82 = favoriteChangeManager;
                        svtId = v80->fields.svtId;
                        v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v81[6], 0LL);
                        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                       Master_WarQuestSelectionMaster,
                                                       svtId,
                                                       v84,
                                                       0LL);
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        favoriteChangeManager = (__int64)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12024/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/,
                                                           0LL);
                        if ( *v54 )
                        {
                          v86 = (System_String_o *)favoriteChangeManager;
                          v87 = (*v54)->fields.userSvtEntity;
                          title = v86;
                          if ( !v87 )
                            goto LABEL_79;
                          favoriteChangeManager = UserServantEntity__IsEventJoin(v87, 0LL);
                          if ( (favoriteChangeManager & 1) == 0 )
                            goto LABEL_79;
                          if ( !*v54 )
                            goto LABEL_182;
                          v88 = (*v54)->fields.userSvtEntity;
                          if ( !v88 || !UserServantEntity__IsNoPeriod(v88, 0LL) )
                          {
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v89 = LocalizationManager__Get((System_String_o *)StringLiteral_12022/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
                          }
                          else
                          {
LABEL_79:
                            v89 = (System_String_o *)StringLiteral_1/*""*/;
                          }
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v168 = LocalizationManager__Get((System_String_o *)StringLiteral_12023/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
                          v169 = System_String__Concat_43849904(v168, v89, 0LL);
                          v170 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 6LL);
                          Rarity = UserServantEntity__getRarity(Entity, 0LL);
                          if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !Rarity_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                          }
                          favoriteChangeManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
                          if ( v170 )
                          {
                            v178 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B0D964(
                                                        favoriteChangeManager,
                                                        v170->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( !v170->max_length )
                              goto LABEL_183;
                            v170->m_Items[0] = (Il2CppObject *)v178;
                            sub_B0D840(
                              (BattleServantConfConponent_o *)v170->m_Items,
                              v178,
                              v172,
                              v173,
                              v174,
                              v175,
                              v176,
                              v177);
                            if ( !v77 )
                              goto LABEL_182;
                            favoriteChangeManager = (__int64)ServantEntity__getClassName(v77, 0LL);
                            v185 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B0D964(
                                                        favoriteChangeManager,
                                                        v170->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v170->max_length <= 1 )
                              goto LABEL_183;
                            v170->m_Items[1] = (Il2CppObject *)v185;
                            sub_B0D840(
                              (BattleServantConfConponent_o *)&v170->m_Items[1],
                              v185,
                              v179,
                              v180,
                              v181,
                              v182,
                              v183,
                              v184);
                            favoriteChangeManager = (__int64)ServantEntity__getName(v77, v82, -1, 0LL);
                            v192 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B0D964(
                                                        favoriteChangeManager,
                                                        v170->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v170->max_length <= 2 )
                              goto LABEL_183;
                            v170->m_Items[2] = (Il2CppObject *)v192;
                            sub_B0D840(
                              (BattleServantConfConponent_o *)&v170->m_Items[2],
                              v192,
                              v186,
                              v187,
                              v188,
                              v189,
                              v190,
                              v191);
                            if ( !*v54 )
                              goto LABEL_182;
                            favoriteChangeManager = (__int64)(*v54)->fields.userSvtEntity;
                            if ( !favoriteChangeManager )
                              goto LABEL_182;
                            v193 = UserServantEntity__getRarity((UserServantEntity_o *)favoriteChangeManager, 0LL);
                            favoriteChangeManager = (__int64)Rarity__getRarityType(v193, 0LL);
                            v200 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B0D964(
                                                        favoriteChangeManager,
                                                        v170->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v170->max_length <= 3 )
                              goto LABEL_183;
                            v170->m_Items[3] = (Il2CppObject *)v200;
                            sub_B0D840(
                              (BattleServantConfConponent_o *)&v170->m_Items[3],
                              v200,
                              v194,
                              v195,
                              v196,
                              v197,
                              v198,
                              v199);
                            if ( !servantEntity )
                              goto LABEL_182;
                            favoriteChangeManager = (__int64)ServantEntity__getClassName(servantEntity, 0LL);
                            v207 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B0D964(
                                                        favoriteChangeManager,
                                                        v170->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v170->max_length <= 4 )
                              goto LABEL_183;
                            v170->m_Items[4] = (Il2CppObject *)v207;
                            sub_B0D840(
                              (BattleServantConfConponent_o *)&v170->m_Items[4],
                              v207,
                              v201,
                              v202,
                              v203,
                              v204,
                              v205,
                              v206);
                            favoriteChangeManager = (__int64)ServantEntity__getName(
                                                               servantEntity,
                                                               ServantLimitCountSealAfter,
                                                               -1,
                                                               0LL);
                            v214 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B0D964(
                                                        favoriteChangeManager,
                                                        v170->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v170->max_length <= 5 )
                            {
LABEL_183:
                              v222 = sub_B0D9A8(favoriteChangeManager);
                              sub_B0D948(v222, 0LL);
                            }
                            v170->m_Items[5] = (Il2CppObject *)v214;
                            sub_B0D840(
                              (BattleServantConfConponent_o *)&v170->m_Items[5],
                              v214,
                              v208,
                              v209,
                              v210,
                              v211,
                              v212,
                              v213);
                            v215 = System_String__Format_43928628(v169, v170, 0LL);
                            v216 = LocalizationManager__Get((System_String_o *)StringLiteral_12021/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                            v217 = LocalizationManager__Get((System_String_o *)StringLiteral_12020/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v221 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                                            CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                            v219,
                                                                            v220);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v221,
                              (Il2CppObject *)v39,
                              Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__,
                              0LL);
                            favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
                            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !BalanceConfig_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            }
                            if ( Instance )
                            {
                              v162 = title;
                              v161 = (CommonUI_o *)Instance;
                              v163 = v215;
                              static_fields = BalanceConfig_TypeInfo->static_fields;
                              v165 = v216;
                              v166 = v217;
                              v167 = v221;
                              goto LABEL_181;
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
LABEL_182:
    sub_B0D97C(favoriteChangeManager);
  }
  if ( *(_QWORD *)(favoriteChangeManager + 112) )
  {
    if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(favoriteChangeManager + 112), 0LL) )
    {
LABEL_38:
      v66 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
        || SoundManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_46;
      }
      goto LABEL_45;
    }
    favoriteChangeManager = (__int64)*v54;
    if ( !*v54 )
      goto LABEL_182;
  }
  if ( FavoriteChangeListViewItem__get_IsHerioneReave((FavoriteChangeListViewItem_o *)favoriteChangeManager, v57) )
    goto LABEL_38;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !favoriteChangeManager )
    goto LABEL_182;
  v91 = *(_QWORD *)(favoriteChangeManager + 120);
  if ( !v91 )
  {
LABEL_91:
    FavoriteChangeComponent__PushRequest(this, *v54, v90);
    goto LABEL_48;
  }
  if ( !*v54 )
    goto LABEL_182;
  v92 = (*v54)->fields.userSvtEntity;
  if ( !v92 )
    goto LABEL_182;
  v93 = *(_OWORD *)&v92->fields.id.fields.fakeValue;
  *(_OWORD *)&v227.fields.currentCryptoKey = *(_OWORD *)&v92->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v227.fields.fakeValue = v93;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v225 = v227;
  if ( v91 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v225, 0LL) )
    goto LABEL_91;
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_182;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !favoriteChangeManager )
    goto LABEL_182;
  v94 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)favoriteChangeManager,
          v91,
          (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_182;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v94 )
    goto LABEL_182;
  v95 = (DataMasterBase_WarMaster__WarEntity__int__o *)favoriteChangeManager;
  v97 = *(_QWORD *)&v94->fields.svtId.fields.currentCryptoKey;
  v96 = *(_QWORD *)&v94->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v229.fields.currentCryptoKey = v97;
  *(_QWORD *)&v229.fields.fakeValue = v96;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v229, 0LL);
  if ( !v95 )
    goto LABEL_182;
  v98 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v95,
                             favoriteChangeManager,
                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v99 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v94->fields.svtId, 0LL);
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                            v94->fields.limitCount,
                            0LL);
  if ( !v99 )
    goto LABEL_182;
  favoriteChangeManager = ServantLimitImageMaster__GetServantLimitCountSealAfter(v99, v100, favoriteChangeManager, 0LL);
  v101 = *v54;
  if ( !*v54 )
    goto LABEL_182;
  v102 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v101->fields.userSvtEntity;
  if ( !v102 )
    goto LABEL_182;
  v103 = favoriteChangeManager;
  v104 = v101->fields.svtId;
  v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v102[6], 0LL);
  v106 = ServantLimitImageMaster__GetServantLimitCountSealAfter(v99, v104, v105, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v107 = LocalizationManager__Get((System_String_o *)StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v108 = LocalizationManager__Get((System_String_o *)StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v109 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 6LL);
  v110 = UserServantEntity__getRarity(v94, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v110, 0LL);
  if ( !v109 )
    goto LABEL_182;
  v117 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B0D964(favoriteChangeManager, v109->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( !v109->max_length )
    goto LABEL_183;
  v109->m_Items[0] = (Il2CppObject *)v117;
  sub_B0D840((BattleServantConfConponent_o *)v109->m_Items, v117, v111, v112, v113, v114, v115, v116);
  if ( !v98 )
    goto LABEL_182;
  favoriteChangeManager = (__int64)ServantEntity__getClassName(v98, 0LL);
  v124 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B0D964(favoriteChangeManager, v109->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( v109->max_length <= 1 )
    goto LABEL_183;
  v109->m_Items[1] = (Il2CppObject *)v124;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[1], v124, v118, v119, v120, v121, v122, v123);
  favoriteChangeManager = (__int64)ServantEntity__getName(v98, v103, -1, 0LL);
  v131 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B0D964(favoriteChangeManager, v109->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( v109->max_length <= 2 )
    goto LABEL_183;
  v109->m_Items[2] = (Il2CppObject *)v131;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[2], v131, v125, v126, v127, v128, v129, v130);
  if ( !*v54 )
    goto LABEL_182;
  favoriteChangeManager = (__int64)(*v54)->fields.userSvtEntity;
  if ( !favoriteChangeManager )
    goto LABEL_182;
  v132 = UserServantEntity__getRarity((UserServantEntity_o *)favoriteChangeManager, 0LL);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v132, 0LL);
  v139 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B0D964(favoriteChangeManager, v109->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( v109->max_length <= 3 )
    goto LABEL_183;
  v109->m_Items[3] = (Il2CppObject *)v139;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[3], v139, v133, v134, v135, v136, v137, v138);
  if ( !*v54 )
    goto LABEL_182;
  favoriteChangeManager = (__int64)(*v54)->fields.servantEntity;
  if ( !favoriteChangeManager )
    goto LABEL_182;
  favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)favoriteChangeManager, 0LL);
  v146 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B0D964(favoriteChangeManager, v109->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( v109->max_length <= 4 )
    goto LABEL_183;
  v109->m_Items[4] = (Il2CppObject *)v146;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[4], v146, v140, v141, v142, v143, v144, v145);
  if ( !*v54 )
    goto LABEL_182;
  favoriteChangeManager = (__int64)(*v54)->fields.servantEntity;
  if ( !favoriteChangeManager )
    goto LABEL_182;
  favoriteChangeManager = (__int64)ServantEntity__getName((ServantEntity_o *)favoriteChangeManager, v106, -1, 0LL);
  v153 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B0D964(favoriteChangeManager, v109->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
    {
LABEL_184:
      v223 = sub_B0D99C(favoriteChangeManager);
      sub_B0D948(v223, 0LL);
    }
  }
  if ( v109->max_length <= 5 )
    goto LABEL_183;
  v109->m_Items[5] = (Il2CppObject *)v153;
  sub_B0D840((BattleServantConfConponent_o *)&v109->m_Items[5], v153, v147, v148, v149, v150, v151, v152);
  v154 = System_String__Format_43928628(v108, v109, 0LL);
  v155 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v156 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  v157 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v160 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v158, v159);
  CommonConfirmDialog_ClickDelegate___ctor(
    v160,
    (Il2CppObject *)v39,
    Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__,
    0LL);
  favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v157 )
    goto LABEL_182;
  v161 = (CommonUI_o *)v157;
  v162 = v107;
  v163 = v154;
  static_fields = BalanceConfig_TypeInfo->static_fields;
  v165 = v155;
  v166 = v156;
  v167 = v160;
LABEL_181:
  CommonUI__OpenConfirmDialog_17016196(v161, v162, v163, v165, v166, v167, static_fields->DefaultFontSize, 0, 0, 0LL);
LABEL_48:
  v69 = this->fields.favoriteChangeManager;
  v70 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B0D974(
                                                          FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                          v67,
                                                          v68);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v70,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0LL);
  if ( !v69 )
    goto LABEL_182;
  FavoriteChangeListViewManager__SetMode(v69, 2, v70, 0LL);
}


void __fastcall FavoriteChangeComponent__Open(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_GameObject_o *v11; // x20
  const MethodInfo *v12; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  FavoriteChangeListViewManager_CallbackFunc_o *v16; // x21

  if ( (byte_4215468 & 1) == 0 )
  {
    sub_B0D8A4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FavoriteChangeComponent_OnClickServant__, v3);
    byte_4215468 = 1;
  }
  FavoriteChangeComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.cancelCallback, 0LL, v5, v6, v7, v8, v9, v10);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_17425792((TitleInfoControl_o *)gameObject, 1, 50, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_10;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v11
    || (UnityEngine_GameObject__SetActive(v11, (unsigned __int8)gameObject & 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.favoriteChangeManager) == 0LL)
    || (FavoriteChangeListViewManager__CreateList((FavoriteChangeListViewManager_o *)gameObject, 0LL),
        FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v12),
        favoriteChangeManager = this->fields.favoriteChangeManager,
        v16 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                                v14,
                                                                v15),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !favoriteChangeManager) )
  {
LABEL_10:
    sub_B0D97C(gameObject);
  }
  FavoriteChangeListViewManager__SetMode(favoriteChangeManager, 2, v16, 0LL);
  this->fields.state = 2;
}


void __fastcall FavoriteChangeComponent__PushRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeListViewItem_o *selectItem,
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
  struct UserServantEntity_o *userSvtEntity; // x19
  DataManager_o *v15; // x23
  UserServantCollectionMaster_o *v16; // x21
  int64_t v17; // x22
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v21; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v23; // x8
  int64_t v24; // x0
  __int128 v25; // q0
  __int64 v26; // x1
  __int64 v27; // x2
  NetworkManager_ResultCallbackFunc_o *v28; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v30; // q0
  CardFavoriteRequest_o *v31; // x20
  int32_t v32; // w27
  int32_t v33; // w28
  int32_t v34; // w21
  bool IsLock; // w23
  char v36; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v40; // w0
  __int64 v41; // x8
  int32_t randomSettingSupport; // w19
  int32_t v43; // [xsp+50h] [xbp-110h]
  int32_t v44; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v46; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v48; // [xsp+70h] [xbp-F0h]
  __int64 v49; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_421546F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B0D8A4(&Method_FavoriteChangeComponent_EndePushRequest__, v5);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_421546F = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userSvtEntity = selectItem->fields.userSvtEntity;
  v15 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userSvtEntity )
    goto LABEL_21;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  v17 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v19;
  *(_QWORD *)&v54.fields.fakeValue = v18;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v54, 0LL);
  if ( !v16 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, v17, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  v23 = *(_QWORD *)&v15->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v21;
  v49 = v23;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v52 = v53;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v52, 0LL);
  v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v15->fields.writeMasterDataThread;
  v48 = v24;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v25;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v51, 0LL);
  v28 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27);
  NetworkManager_ResultCallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndePushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v28,
                                        (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v30 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v31 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v30;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v50, 0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userSvtEntity->fields.imageLimitCount, 0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userSvtEntity->fields.dispLimitCount, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userSvtEntity->fields.iconLimitCount, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v55.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v55, 0LL);
  if ( !v31 )
LABEL_21:
    sub_B0D97C(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v31,
    targetUsrSVtId,
    v44,
    v43,
    v32,
    v33,
    v34,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v46,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v49 != v48,
    0LL);
}


void __fastcall FavoriteChangeComponent__StatusRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeComponent_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t tabModeKind; // w8
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  System_Int64_array *v19; // x2
  System_Int64_array *v20; // x1
  bool v21; // w4
  bool v22; // w5
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  NetworkManager_ResultCallbackFunc_o *v31; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_4215477 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FavoriteChangeComponent_EndStatusSync__, callback);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4215477 = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_23;
    if ( FavoriteChangeListViewManager__GetSwapChoiceList(favoriteChangeManager, &choiceList, &unchoiceList, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v31 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v29, v30);
      NetworkManager_ResultCallbackFunc___ctor(
        v31,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v31,
                                                                   (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v19 = unchoiceList;
        v20 = choiceList;
        v22 = 1;
        v21 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B0D97C(favoriteChangeManager);
    }
  }
  else if ( tabModeKind == 1 )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_23;
    if ( FavoriteChangeListViewManager__GetSwapLockList(favoriteChangeManager, &lockList, &unlockList, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17);
      NetworkManager_ResultCallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v18,
                                                                   (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v19 = unlockList;
        v20 = lockList;
        v21 = 1;
        v22 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)favoriteChangeManager,
          v20,
          v19,
          0,
          v21,
          v22,
          0LL);
        return;
      }
      goto LABEL_23;
    }
  }
  if ( callback )
    FavoriteChangeComponent_RequestCallbackFunc__Invoke(callback, 0, 0LL);
}


void __fastcall FavoriteChangeComponent__UpdateScaleChangeIconSprite(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        favoriteChangeManager = (FavoriteChangeListViewManager_o *)FavoriteChangeListViewManager__GetScaleButtonSpriteName(
                                                                     favoriteChangeManager,
                                                                     0LL),
        !scaleChangeTabSprite) )
  {
    sub_B0D97C(favoriteChangeManager);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)favoriteChangeManager, 0LL);
}


void __fastcall FavoriteChangeComponent__cancelFavoriteWindow(
        FavoriteChangeComponent_o *this,
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
  FavoriteChangeComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4215469 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FavoriteChangeComponent_endCancelButton__, callback);
    sub_B0D8A4(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v10);
    byte_4215469 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.cancelCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                           FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                           v11,
                                                           v12);
  FavoriteChangeComponent_RequestCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_endCancelButton__,
    0LL);
  FavoriteChangeComponent__StatusRequest(this, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent__closeSvtDetail(
        FavoriteChangeComponent_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  CommonUI_o *Instance; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x20

  if ( (byte_4215471 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__, v9);
    sub_B0D8A4(&FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo, v10);
    byte_4215471 = 1;
  }
  v11 = sub_B0D974(FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo, isDecide, isNeedSort);
  FavoriteChangeComponent___c__DisplayClass37_0___ctor((FavoriteChangeComponent___c__DisplayClass37_0_o *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = questId,
        *(_QWORD *)(v11 + 24) = this,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v11 + 24),
          (System_Int32_array **)this,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        *(_BYTE *)(v11 + 32) = isNeedSort,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v22 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v20, v21),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v11,
          Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v12);
  }
  CommonUI__CloseServantStatusDialog(Instance, v22, 0LL);
}


void __fastcall FavoriteChangeComponent__dispSvtList(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent__endCancelButton(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  FavoriteChangeListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  FavoriteChangeListViewManager_CallbackFunc_o *v10; // x21
  System_Action_o *cancelCallback; // x0

  if ( (byte_421546A & 1) == 0 )
  {
    sub_B0D8A4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_B0D8A4(&Method_FavoriteChangeComponent_OnClickServant__, v5);
    byte_421546A = 1;
  }
  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, 0LL),
          v7 = this->fields.favoriteChangeManager,
          v10 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                  FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                                  v8,
                                                                  v9),
          FavoriteChangeListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
            0LL),
          !v7) )
    {
LABEL_11:
      sub_B0D97C(favoriteChangeManager);
    }
    FavoriteChangeListViewManager__SetMode(v7, 2, v10, 0LL);
  }
  FavoriteChangeComponent__Init(this, (const MethodInfo *)isRequest);
  favoriteChangeManager = (FavoriteChangeListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
  if ( !favoriteChangeManager )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)favoriteChangeManager, 0, 0LL);
  cancelCallback = this->fields.cancelCallback;
  if ( cancelCallback )
    ActionExtensions__Call(cancelCallback, 0LL);
}


void __fastcall FavoriteChangeComponent__onClickChoiceTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4215474 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FavoriteChangeComponent_EndClickTabChoice__, method);
    sub_B0D8A4(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4215474 = 1;
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
        v8 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                                FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                                v5,
                                                                v6);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabChoice__,
          0LL);
        FavoriteChangeComponent__StatusRequest(this, v8, v9);
        return;
      }
      v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                               FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                               v5,
                                                               v6);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabChoice__,
        0LL);
      FavoriteChangeComponent__StatusRequest(this, v10, v11);
    }
    FavoriteChangeComponent__setModeTabKind(this, 2, v6);
  }
}


void __fastcall FavoriteChangeComponent__onClickLockTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4215473 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FavoriteChangeComponent_EndClickTabLock__, method);
    sub_B0D8A4(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4215473 = 1;
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
        v8 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                                FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                                v5,
                                                                v6);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabLock__,
          0LL);
        FavoriteChangeComponent__StatusRequest(this, v8, v9);
        return;
      }
      v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                               FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                               v5,
                                                               v6);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabLock__,
        0LL);
      FavoriteChangeComponent__StatusRequest(this, v10, v11);
    }
    FavoriteChangeComponent__setModeTabKind(this, 1, v6);
  }
}


void __fastcall FavoriteChangeComponent__onClickNormalTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4215472 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FavoriteChangeComponent_EndClickTabNormal__, method);
    sub_B0D8A4(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4215472 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                            FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                            v5,
                                                            v6);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabNormal__,
      0LL);
    FavoriteChangeComponent__StatusRequest(this, v7, v8);
  }
}


void __fastcall FavoriteChangeComponent__onClickPushTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4215475 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FavoriteChangeComponent_EndClickTabPush__, method);
    sub_B0D8A4(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4215475 = 1;
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
    v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B0D974(
                                                            FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                            v5,
                                                            v6);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabPush__,
      0LL);
    FavoriteChangeComponent__StatusRequest(this, v7, v8);
  }
}


void __fastcall FavoriteChangeComponent__setFavoriteRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeListViewItem_o *selectItem,
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
  struct UserServantEntity_o *userSvtEntity; // x19
  DataManager_o *v15; // x22
  UserServantCollectionMaster_o *v16; // x21
  int64_t v17; // x23
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  __int128 v21; // q1
  __int64 v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  NetworkManager_ResultCallbackFunc_o *v25; // x22
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v27; // q0
  CardFavoriteRequest_o *v28; // x20
  int32_t v29; // w26
  int32_t v30; // w27
  int32_t v31; // w28
  bool IsLock; // w22
  char v33; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w21
  int32_t randomSettingOwn; // w24
  int32_t v37; // w0
  __int64 v38; // x8
  int32_t randomSettingSupport; // w19
  int32_t v40; // [xsp+50h] [xbp-E0h]
  int32_t v41; // [xsp+54h] [xbp-DCh]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-D8h]
  int64_t v43; // [xsp+60h] [xbp-D0h]
  __int64 v44; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_421546D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B0D8A4(&Method_FavoriteChangeComponent_EndCardFavoriteRequest__, v5);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_421546D = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userSvtEntity = selectItem->fields.userSvtEntity;
  v15 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userSvtEntity )
    goto LABEL_21;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  v17 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v48.fields.currentCryptoKey = v19;
  *(_QWORD *)&v48.fields.fakeValue = v18;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v48, 0LL);
  if ( !v16 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, v17, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v22 = *(_QWORD *)&v15->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v47.fields.fakeValue = v21;
  v44 = v22;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v46 = v47;
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v46, 0LL);
  v25 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v23, v24);
  NetworkManager_ResultCallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v25,
                                        (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v27 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v28 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v45.fields.fakeValue = v27;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v45, 0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userSvtEntity->fields.imageLimitCount, 0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userSvtEntity->fields.dispLimitCount, 0LL);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userSvtEntity->fields.iconLimitCount, 0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v33 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v38 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v49.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v37;
  *(_QWORD *)&v49.fields.currentCryptoKey = v38;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v49, 0LL);
  if ( !v28 )
LABEL_21:
    sub_B0D97C(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v28,
    targetUsrSVtId,
    v41,
    v40,
    v29,
    v30,
    v31,
    1,
    IsLock,
    v33 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v44 == v43,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent__setModeTabKind(
        FavoriteChangeComponent_o *this,
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
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v18; // x8
  System_String_o **v19; // x8
  System_String_o **v20; // x8
  __int64 *v21; // x8
  UILabel_o *infoLb; // x21
  struct FavoriteChangeListViewManager_o *v23; // x8
  struct FavoriteChangeListViewManager_o **p_favoriteChangeManager; // x19
  struct FavoriteChangeListViewManager_o *favoriteChangeManager; // t1
  UILabel_o *v26; // x21
  __int64 *v27; // x8
  struct FavoriteChangeListViewManager_o *v28; // x8
  struct FavoriteChangeListViewManager_o *v29; // t1

  if ( (byte_4215476 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_B0D8A4(&StringLiteral_11768/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_B0D8A4(&StringLiteral_17189/*"button_push_reg"*/, v6);
    sub_B0D8A4(&StringLiteral_17190/*"button_push_unreg"*/, v7);
    sub_B0D8A4(&StringLiteral_17175/*"button_allchoice_reg"*/, v8);
    sub_B0D8A4(&StringLiteral_17178/*"button_alllock_unreg"*/, v9);
    sub_B0D8A4(&StringLiteral_11766/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v10);
    sub_B0D8A4(&StringLiteral_11767/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11);
    sub_B0D8A4(&StringLiteral_17191/*"button_select_reg"*/, v12);
    sub_B0D8A4(&StringLiteral_17192/*"button_select_unreg"*/, v13);
    sub_B0D8A4(&StringLiteral_17177/*"button_alllock_reg"*/, v14);
    sub_B0D8A4(&StringLiteral_17176/*"button_allchoice_unreg"*/, v15);
    sub_B0D8A4(&StringLiteral_7050/*"HEADER_MSG_FAVORITE"*/, v16);
    byte_4215476 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 0, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_54;
    v18 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17192/*"button_select_unreg"*/ : &StringLiteral_17191/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v18, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_54;
    v19 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17177/*"button_alllock_reg"*/ : &StringLiteral_17178/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v19, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 2, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_54;
    v20 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17175/*"button_allchoice_reg"*/ : &StringLiteral_17176/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v20, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton
      || (UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0LL),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabBoxCollider) == 0LL)
      || (UnityEngine_Collider__set_enabled(
            (UnityEngine_Collider_o *)normalTabButton,
            this->fields.tabModeKind != 3,
            0LL),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite) == 0LL) )
    {
LABEL_54:
      sub_B0D97C(normalTabButton);
    }
    if ( this->fields.tabModeKind == 3 )
      v21 = &StringLiteral_17189/*"button_push_reg"*/;
    else
      v21 = &StringLiteral_17190/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v21, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7050/*"HEADER_MSG_FAVORITE"*/,
                                                       0LL);
        if ( !infoLb )
          goto LABEL_54;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0LL);
        favoriteChangeManager = this->fields.favoriteChangeManager;
        p_favoriteChangeManager = &this->fields.favoriteChangeManager;
        v23 = favoriteChangeManager;
        if ( !favoriteChangeManager )
          goto LABEL_54;
        v23->fields.isCanNotLongPush = 0;
        goto LABEL_51;
      case 1:
        v26 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v27 = &StringLiteral_11767/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_47;
      case 2:
        v26 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v27 = &StringLiteral_11766/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_47;
      case 3:
        v26 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v27 = &StringLiteral_11768/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_47:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v27, 0LL);
        if ( !v26 )
          goto LABEL_54;
        UILabel__set_text(v26, (System_String_o *)normalTabButton, 0LL);
        v29 = this->fields.favoriteChangeManager;
        p_favoriteChangeManager = &this->fields.favoriteChangeManager;
        v28 = v29;
        if ( !v29 )
          goto LABEL_54;
        v28->fields.isCanNotLongPush = 1;
LABEL_51:
        normalTabButton = (UnityEngine_Behaviour_o *)*p_favoriteChangeManager;
        if ( !*p_favoriteChangeManager )
          goto LABEL_54;
        FavoriteChangeListViewManager__UpdateDisplayState(
          (FavoriteChangeListViewManager_o *)normalTabButton,
          modeKind == 3,
          0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)*p_favoriteChangeManager;
        if ( !*p_favoriteChangeManager )
          goto LABEL_54;
        FavoriteChangeListViewManager__SetMode_21852144((FavoriteChangeListViewManager_o *)normalTabButton, 2, 0LL);
        break;
      default:
        p_favoriteChangeManager = &this->fields.favoriteChangeManager;
        goto LABEL_51;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent_RequestCallbackFunc___ctor(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall FavoriteChangeComponent_RequestCallbackFunc__BeginInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_4210F42 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isRequest);
    byte_4210F42 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall FavoriteChangeComponent_RequestCallbackFunc__EndInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent_RequestCallbackFunc__Invoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  FavoriteChangeComponent_RequestCallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  FavoriteChangeComponent_RequestCallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  FavoriteChangeComponent_RequestCallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (FavoriteChangeComponent_RequestCallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isRequest, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isRequest,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isRequest, v21);
    goto LABEL_37;
  }
}


void __fastcall FavoriteChangeComponent___c__DisplayClass31_0___ctor(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__0(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  CommonUI_o *v10; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4210F3E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__, v6);
    byte_4210F3E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B0D840(&this->fields.__9__1, _9__1);
    }
    if ( v10 )
    {
      CommonUI__CloseConfirmDialog_17017160(v10, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B0D97C(Instance);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__1(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  FavoriteChangeComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  FavoriteChangeComponent__PushRequest(_4__this, this->fields.item, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__2(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  CommonUI_o *v10; // x20
  System_Action_o *_9__3; // x22

  if ( (byte_4210F3F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__, v6);
    byte_4210F3F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = Instance;
  if ( isDecide )
  {
    _9__3 = this->fields.__9__3;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__,
        0LL);
      this->fields.__9__3 = _9__3;
      sub_B0D840(&this->fields.__9__3, _9__3);
    }
    if ( v10 )
    {
      CommonUI__CloseConfirmDialog_17017160(v10, _9__3, 0LL);
      return;
    }
LABEL_10:
    sub_B0D97C(Instance);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__3(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  FavoriteChangeComponent___c__DisplayClass31_0_o *v2; // x19
  struct FavoriteChangeComponent_o *_4__this; // x9
  struct FavoriteChangeListViewItem_o *item; // x8

  v2 = this;
  if ( (byte_4210F40 & 1) == 0 )
  {
    this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)sub_B0D8A4(&StringLiteral_9969/*"OnClickFavoriteDecide"*/, method);
    byte_4210F40 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)_4__this->fields.favoriteChangeManager) == 0LL )
  {
    sub_B0D97C(this);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)this,
    (System_String_o *)StringLiteral_9969/*"OnClickFavoriteDecide"*/,
    (Il2CppObject *)item->fields.viewObject,
    0LL);
}


void __fastcall FavoriteChangeComponent___c__DisplayClass37_0___ctor(
        FavoriteChangeComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FavoriteChangeComponent___c__DisplayClass37_0___closeSvtDetail_b__0(
        FavoriteChangeComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FavoriteChangeComponent_o *_4__this; // x0
  struct FavoriteChangeComponent_o *v6; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  struct FavoriteChangeComponent_o *v9; // x8
  struct FavoriteChangeComponent_o *v10; // x20
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x19
  __int64 v12; // x21
  __int64 v13; // x9

  if ( (byte_4210F41 & 1) == 0 )
  {
    sub_B0D8A4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FavoriteChangeComponent_OnClickServant__, v3);
    sub_B0D8A4(&StringLiteral_3055/*"CLICK_BACK"*/, v4);
    byte_4210F41 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  if ( this->fields.questId >= 1 )
  {
    FavoriteChangeComponent__Init(_4__this, 0LL);
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this = (FavoriteChangeComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)_4__this,
                                                0LL);
      if ( _4__this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
        v6 = this->fields.__4__this;
        if ( v6 )
        {
          _4__this = (FavoriteChangeComponent_o *)v6->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3055/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_B0D97C(_4__this);
  }
  if ( !_4__this->fields.favoriteChangeManager )
    goto LABEL_18;
  FavoriteChangeListViewManager__ModifyItem(_4__this->fields.favoriteChangeManager, _4__this->fields.usrSvtId, 0LL);
  if ( this->fields.isNeedSort )
  {
    v9 = this->fields.__4__this;
    if ( !v9 )
      goto LABEL_18;
    _4__this = (FavoriteChangeComponent_o *)v9->fields.favoriteChangeManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_18;
  favoriteChangeManager = v10->fields.favoriteChangeManager;
  v12 = sub_B0D974(FavoriteChangeListViewManager_CallbackFunc_TypeInfo, v7, v8);
  v13 = *(_QWORD *)Method_FavoriteChangeComponent_OnClickServant__;
  *(_QWORD *)(v12 + 40) = Method_FavoriteChangeComponent_OnClickServant__;
  *(_QWORD *)(v12 + 16) = v13;
  *(_QWORD *)(v12 + 32) = v10;
  sub_B0D840(v12 + 32, v10);
  if ( !favoriteChangeManager )
    goto LABEL_18;
  FavoriteChangeListViewManager__SetMode(
    favoriteChangeManager,
    2,
    (FavoriteChangeListViewManager_CallbackFunc_o *)v12,
    0LL);
}