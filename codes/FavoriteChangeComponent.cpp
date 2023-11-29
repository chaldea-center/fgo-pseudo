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
  ListViewManager_o *v6; // x0
  struct FavoriteChangeListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  FavoriteChangeListViewManager_CallbackFunc_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2

  if ( (byte_40F9FA2 & 1) == 0 )
  {
    sub_B16FFC(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, result);
    sub_B16FFC(&Method_FavoriteChangeComponent_OnClickServant__, v4);
    byte_40F9FA2 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, method),
        (v6 = (ListViewManager_o *)this->fields.favoriteChangeManager) == 0LL)
    || (ListViewManager__SortItem(v6, -1, 0, -1, 0LL),
        v7 = this->fields.favoriteChangeManager,
        v12 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                                v8,
                                                                v9,
                                                                v10,
                                                                v11),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !v7) )
  {
    sub_B170D4();
  }
  v7->fields.callbackFunc = v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v7->fields.callbackFunc,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  FavoriteChangeListViewManager__SetMode_25176152(v7, 2, v19);
}


void __fastcall FavoriteChangeComponent__EndClickTabChoice(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v5; // x2
  FavoriteChangeListViewManager_o *v6; // x0

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          (v6 = this->fields.favoriteChangeManager) == 0LL) )
    {
      sub_B170D4();
    }
    FavoriteChangeListViewManager__SetMode_25176152(v6, 2, v5);
  }
  FavoriteChangeComponent__setModeTabKind(this, 2, method);
}


void __fastcall FavoriteChangeComponent__EndClickTabLock(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v5; // x2
  FavoriteChangeListViewManager_o *v6; // x0

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          (v6 = this->fields.favoriteChangeManager) == 0LL) )
    {
      sub_B170D4();
    }
    FavoriteChangeListViewManager__SetMode_25176152(v6, 2, v5);
  }
  FavoriteChangeComponent__setModeTabKind(this, 1, method);
}


void __fastcall FavoriteChangeComponent__EndClickTabNormal(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v5; // x2
  FavoriteChangeListViewManager_o *v6; // x0

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          (v6 = this->fields.favoriteChangeManager) == 0LL) )
    {
      sub_B170D4();
    }
    FavoriteChangeListViewManager__SetMode_25176152(v6, 2, v5);
  }
  FavoriteChangeComponent__setModeTabKind(this, 0, method);
}


void __fastcall FavoriteChangeComponent__EndClickTabPush(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v5; // x2
  FavoriteChangeListViewManager_o *v6; // x0

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          (v6 = this->fields.favoriteChangeManager) == 0LL) )
    {
      sub_B170D4();
    }
    FavoriteChangeListViewManager__SetMode_25176152(v6, 2, v5);
  }
  FavoriteChangeComponent__setModeTabKind(this, 3, method);
}


void __fastcall FavoriteChangeComponent__EndCloseConfirmSelectFavorite(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct FavoriteChangeListViewManager_o *favoriteChangeManager; // x19
  FavoriteChangeListViewManager_CallbackFunc_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_40F9FA0 & 1) == 0 )
  {
    sub_B16FFC(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FavoriteChangeComponent_OnClickServant__, v6);
    byte_40F9FA0 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  v8 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B170CC(
                                                         FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3,
                                                         v4);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0LL);
  if ( !favoriteChangeManager )
    sub_B170D4();
  favoriteChangeManager->fields.callbackFunc = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&favoriteChangeManager->fields.callbackFunc,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  FavoriteChangeListViewManager__SetMode_25176152(favoriteChangeManager, 2, v15);
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
    sub_B16F98(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  const MethodInfo *v6; // x2
  FavoriteChangeListViewManager_o *v7; // x0
  struct FavoriteChangeListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  FavoriteChangeListViewManager_CallbackFunc_o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2

  if ( (byte_40F9FA4 & 1) == 0 )
  {
    sub_B16FFC(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, result);
    sub_B16FFC(&Method_FavoriteChangeComponent_OnClickServant__, v4);
    byte_40F9FA4 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__UpdateDisplayState(favoriteChangeManager, 1, method),
        (v7 = this->fields.favoriteChangeManager) == 0LL)
    || (FavoriteChangeListViewManager__ModifyItem(v7, this->fields.usrSvtId, v6),
        v8 = this->fields.favoriteChangeManager,
        v13 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                                v9,
                                                                v10,
                                                                v11,
                                                                v12),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !v8) )
  {
    sub_B170D4();
  }
  v8->fields.callbackFunc = v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v8->fields.callbackFunc,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  FavoriteChangeListViewManager__SetMode_25176152(v8, 2, v20);
}


void __fastcall FavoriteChangeComponent__Init(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  UILabel_o *infoLb; // x20
  System_String_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_40F9F9B & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_7002, v3);
    byte_40F9F9B = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager )
    goto LABEL_9;
  FavoriteChangeListViewManager__DestroyList(favoriteChangeManager, method);
  this->fields.state = 0;
  infoLb = this->fields.infoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_7002, 0LL);
  if ( !infoLb )
LABEL_9:
    sub_B170D4();
  UILabel__set_text(infoLb, v6, 0LL);
  FavoriteChangeComponent__setModeTabKind(this, 0, v7);
}


void __fastcall FavoriteChangeComponent__OnClickScaleChange(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40F9FAC & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9FAC = 1;
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
      sub_B170D4();
    FavoriteChangeListViewManager__ChangeIconScale(favoriteChangeManager, v3);
    FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent__OnClickServant(
        FavoriteChangeComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v39; // x1
  __int64 v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  MethodInfo *v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  System_Int32_array **v54; // x1
  FavoriteChangeListViewItem_o **v55; // x21
  __int64 v56; // x8
  __int128 v57; // q1
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x2
  int32_t tabModeKind; // w8
  int32_t v61; // w0
  WebViewManager_o *Instance; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v68; // x20
  ServantStatusDialog_ResultDelegate_o *v69; // x22
  FavoriteChangeListViewItem_o *v70; // x0
  SoundManager_c *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  struct FavoriteChangeListViewManager_o *v76; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v77; // x21
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  const MethodInfo *v84; // x2
  ServantEntity_o *servantEntity; // x22
  UserGameEntity_o *SelfUserGame; // x0
  int64_t favoriteUserSvtId; // x23
  WebViewManager_o *v88; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x26
  WebViewManager_o *v91; // x0
  WarQuestSelectionMaster_o *v92; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v93; // x23
  __int64 v94; // x24
  __int64 v95; // x25
  int32_t v96; // w0
  ServantEntity_o *v97; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x23
  int32_t v99; // w24
  int32_t v100; // w0
  int32_t ServantLimitCountSealAfter; // w0
  FavoriteChangeListViewItem_o *v102; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v103; // x9
  int32_t v104; // w27
  int32_t svtId; // w24
  int32_t v106; // w0
  int32_t v107; // w24
  System_String_o *v108; // x0
  System_String_o *v109; // x23
  UserServantEntity_o *v110; // x0
  UserServantEntity_o *v111; // x0
  System_String_o *v112; // x23
  UserGameEntity_o *v113; // x0
  const MethodInfo *v114; // x2
  int64_t pushUserSvtId; // x22
  struct UserServantEntity_o *v116; // x8
  __int128 v117; // q0
  WebViewManager_o *v118; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v119; // x0
  UserServantEntity_o *v120; // x27
  WebViewManager_o *v121; // x0
  WarQuestSelectionMaster_o *v122; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v123; // x22
  __int64 v124; // x23
  __int64 v125; // x24
  int32_t v126; // w0
  ServantEntity_o *v127; // x26
  ServantLimitImageMaster_o *v128; // x22
  int32_t v129; // w23
  int32_t v130; // w0
  int32_t v131; // w0
  FavoriteChangeListViewItem_o *v132; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v133; // x9
  int32_t v134; // w28
  int32_t v135; // w23
  int32_t v136; // w0
  int32_t v137; // w24
  System_String_o *v138; // x22
  System_String_o *v139; // x23
  __int64 v140; // x2
  System_Object_array *v141; // x25
  int32_t v142; // w27
  System_String_o *RarityType; // x0
  __int64 v144; // x1
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  System_Int32_array **v151; // x27
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  System_Int32_array **v157; // x27
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  System_Int32_array **v163; // x26
  UserServantEntity_o *v164; // x0
  int32_t v165; // w0
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  System_Int32_array **v171; // x26
  ServantEntity_o *v172; // x0
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  System_Int32_array **v178; // x26
  ServantEntity_o *v179; // x0
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  System_Int32_array **v185; // x21
  System_String_o *v186; // x21
  System_String_o *v187; // x23
  System_String_o *v188; // x24
  WebViewManager_o *v189; // x25
  __int64 v190; // x1
  __int64 v191; // x2
  __int64 v192; // x3
  __int64 v193; // x4
  CommonConfirmDialog_ClickDelegate_o *v194; // x26
  CommonUI_o *v195; // x0
  System_String_o *v196; // x1
  System_String_o *v197; // x2
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v199; // x3
  System_String_o *v200; // x4
  CommonConfirmDialog_ClickDelegate_o *v201; // x5
  System_String_o *v202; // x0
  System_String_o *v203; // x28
  __int64 v204; // x2
  System_Object_array *v205; // x23
  int32_t Rarity; // w26
  System_String_array **v207; // x3
  System_Boolean_array **v208; // x4
  System_Int32_array **v209; // x5
  System_Int32_array *v210; // x6
  System_Int32_array *v211; // x7
  System_Int32_array **v212; // x26
  System_String_array **v213; // x3
  System_Boolean_array **v214; // x4
  System_Int32_array **v215; // x5
  System_Int32_array *v216; // x6
  System_Int32_array *v217; // x7
  System_Int32_array **v218; // x26
  System_String_array **v219; // x3
  System_Boolean_array **v220; // x4
  System_Int32_array **v221; // x5
  System_Int32_array *v222; // x6
  System_Int32_array *v223; // x7
  System_Int32_array **v224; // x25
  UserServantEntity_o *v225; // x0
  int32_t v226; // w0
  System_String_array **v227; // x3
  System_Boolean_array **v228; // x4
  System_Int32_array **v229; // x5
  System_Int32_array *v230; // x6
  System_Int32_array *v231; // x7
  System_Int32_array **v232; // x21
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  System_Int32_array **v238; // x21
  System_String_array **v239; // x3
  System_Boolean_array **v240; // x4
  System_Int32_array **v241; // x5
  System_Int32_array *v242; // x6
  System_Int32_array *v243; // x7
  System_Int32_array **v244; // x21
  System_String_o *v245; // x21
  System_String_o *v246; // x22
  System_String_o *v247; // x23
  WebViewManager_o *v248; // x24
  __int64 v249; // x1
  __int64 v250; // x2
  __int64 v251; // x3
  __int64 v252; // x4
  CommonConfirmDialog_ClickDelegate_o *v253; // x25
  System_String_o *title; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v255; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v256; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v257; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v258; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v259; // 0:x0.16

  if ( (byte_40F9F9F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, v8);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_B16FFC(&Method_FavoriteChangeComponent_OnClickServant__, v16);
    sub_B16FFC(&Method_FavoriteChangeComponent_closeSvtDetail__, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&object___TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B16FFC(&Rarity_TypeInfo, v22);
    sub_B16FFC(&ServantStatusDialog_ResultDelegate_TypeInfo, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_B16FFC(&SoundManager_TypeInfo, v26);
    sub_B16FFC(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__, v27);
    sub_B16FFC(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__, v28);
    sub_B16FFC(&FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo, v29);
    sub_B16FFC(&StringLiteral_11936, v30);
    sub_B16FFC(&StringLiteral_11934, v31);
    sub_B16FFC(&StringLiteral_11946, v32);
    sub_B16FFC(&StringLiteral_11944, v33);
    sub_B16FFC(&StringLiteral_11945, v34);
    sub_B16FFC(&StringLiteral_11933, v35);
    sub_B16FFC(&StringLiteral_11937, v36);
    sub_B16FFC(&StringLiteral_1, v37);
    sub_B16FFC(&StringLiteral_11935, v38);
    sub_B16FFC(&StringLiteral_11947, v39);
    byte_40F9F9F = 1;
  }
  v40 = sub_B170CC(FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n, method, v4);
  FavoriteChangeComponent___c__DisplayClass31_0___ctor((FavoriteChangeComponent___c__DisplayClass31_0_o *)v40, 0LL);
  if ( !v40 )
    goto LABEL_182;
  *(_QWORD *)(v40 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v40 + 16), (System_Int32_array **)this, v41, v42, v43, v44, v45, v46);
  if ( (n & 0x80000000) != 0 )
  {
    v54 = 0LL;
  }
  else
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_182;
    v54 = (System_Int32_array **)FavoriteChangeListViewManager__GetItem(favoriteChangeManager, n, v47);
  }
  *(_QWORD *)(v40 + 24) = v54;
  v55 = (FavoriteChangeListViewItem_o **)(v40 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v40 + 24), v54, (System_String_array **)v47, v48, v49, v50, v51, v52);
  if ( !*(_QWORD *)(v40 + 24) )
    goto LABEL_182;
  v56 = *(_QWORD *)(*(_QWORD *)(v40 + 24) + 112LL);
  if ( !v56 )
    goto LABEL_182;
  v57 = *(_OWORD *)(v56 + 32);
  *(_OWORD *)&v257.fields.currentCryptoKey = *(_OWORD *)(v56 + 16);
  *(_OWORD *)&v257.fields.fakeValue = v57;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v256 = v257;
  this->fields.usrSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v256, 0LL);
  if ( kind == 1 )
  {
    FavoriteChangeComponent__setFavoriteRequest(this, *v55, v59);
    return;
  }
  if ( kind == 2 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v55 )
    {
      userSvtEntity = (*v55)->fields.userSvtEntity;
      v68 = (CommonUI_o *)Instance;
      v69 = (ServantStatusDialog_ResultDelegate_o *)sub_B170CC(
                                                      ServantStatusDialog_ResultDelegate_TypeInfo,
                                                      v63,
                                                      v64,
                                                      v65,
                                                      v66);
      ServantStatusDialog_ResultDelegate___ctor(
        v69,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_closeSvtDetail__,
        0LL);
      if ( v68 )
      {
        CommonUI__OpenServantStatusDialog_18248808(v68, 0, userSvtEntity, v69, 0LL);
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
    if ( !*v55 )
      goto LABEL_182;
    (*v55)->fields.isSwapChoice ^= 1u;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v61 = 0;
    goto LABEL_47;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v55 )
      goto LABEL_182;
    (*v55)->fields.isSwapLock ^= 1u;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v61 = 11;
    goto LABEL_47;
  }
  v70 = *v55;
  if ( !*v55 )
    goto LABEL_182;
  if ( tabModeKind != 3 )
  {
    if ( FavoriteChangeListViewItem__get_IsCanNotSelect(v70, v58) )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
        || SoundManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_46;
      }
      v71 = SoundManager_TypeInfo;
LABEL_45:
      j_il2cpp_runtime_class_init_0(v71);
LABEL_46:
      v61 = 2;
LABEL_47:
      SoundManager__playSystemSe(v61, 0LL);
      goto LABEL_48;
    }
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( *v55 )
    {
      servantEntity = (*v55)->fields.servantEntity;
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( SelfUserGame )
      {
        favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
        v88 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( v88 )
        {
          MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)v88, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( MasterData_WarQuestSelectionMaster )
          {
            Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       favoriteUserSvtId,
                       (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            v91 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( v91 )
            {
              v92 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)v91,
                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( Entity )
              {
                v93 = (DataMasterBase_WarMaster__WarEntity__int__o *)v92;
                v95 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
                v94 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v258.fields.currentCryptoKey = v95;
                *(_QWORD *)&v258.fields.fakeValue = v94;
                v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v258, 0LL);
                if ( v93 )
                {
                  v97 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v93,
                                             v96,
                                             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                  v99 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.svtId, 0LL);
                  v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                           Entity->fields.limitCount,
                           0LL);
                  if ( Master_WarQuestSelectionMaster )
                  {
                    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                   Master_WarQuestSelectionMaster,
                                                   v99,
                                                   v100,
                                                   0LL);
                    v102 = *v55;
                    if ( *v55 )
                    {
                      v103 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v102->fields.userSvtEntity;
                      if ( v103 )
                      {
                        v104 = ServantLimitCountSealAfter;
                        svtId = v102->fields.svtId;
                        v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v103[6], 0LL);
                        v107 = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 svtId,
                                 v106,
                                 0LL);
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v108 = LocalizationManager__Get((System_String_o *)StringLiteral_11937, 0LL);
                        if ( *v55 )
                        {
                          v109 = v108;
                          v110 = (*v55)->fields.userSvtEntity;
                          title = v109;
                          if ( !v110 || !UserServantEntity__IsEventJoin(v110, 0LL) )
                            goto LABEL_79;
                          if ( !*v55 )
                            goto LABEL_182;
                          v111 = (*v55)->fields.userSvtEntity;
                          if ( !v111 || !UserServantEntity__IsNoPeriod(v111, 0LL) )
                          {
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v112 = LocalizationManager__Get((System_String_o *)StringLiteral_11935, 0LL);
                          }
                          else
                          {
LABEL_79:
                            v112 = (System_String_o *)StringLiteral_1;
                          }
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v202 = LocalizationManager__Get((System_String_o *)StringLiteral_11936, 0LL);
                          v203 = System_String__Concat_43743732(v202, v112, 0LL);
                          v205 = (System_Object_array *)sub_B17014(object___TypeInfo, 6LL, v204);
                          Rarity = UserServantEntity__getRarity(Entity, 0LL);
                          if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !Rarity_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                          }
                          RarityType = Rarity__getRarityType(Rarity, 0LL);
                          if ( v205 )
                          {
                            v212 = (System_Int32_array **)RarityType;
                            if ( RarityType )
                            {
                              RarityType = (System_String_o *)sub_B170BC(RarityType, v205->obj.klass->_1.element_class);
                              if ( !RarityType )
                                goto LABEL_184;
                            }
                            if ( !v205->max_length )
                              goto LABEL_183;
                            v205->m_Items[0] = (Il2CppObject *)v212;
                            sub_B16F98(
                              (BattleServantConfConponent_o *)v205->m_Items,
                              v212,
                              v145,
                              v207,
                              v208,
                              v209,
                              v210,
                              v211);
                            if ( !v97 )
                              goto LABEL_182;
                            RarityType = ServantEntity__getClassName(v97, 0LL);
                            v218 = (System_Int32_array **)RarityType;
                            if ( RarityType )
                            {
                              RarityType = (System_String_o *)sub_B170BC(RarityType, v205->obj.klass->_1.element_class);
                              if ( !RarityType )
                                goto LABEL_184;
                            }
                            if ( v205->max_length <= 1 )
                              goto LABEL_183;
                            v205->m_Items[1] = (Il2CppObject *)v218;
                            sub_B16F98(
                              (BattleServantConfConponent_o *)&v205->m_Items[1],
                              v218,
                              v145,
                              v213,
                              v214,
                              v215,
                              v216,
                              v217);
                            RarityType = ServantEntity__getName(v97, v104, -1, 0LL);
                            v224 = (System_Int32_array **)RarityType;
                            if ( RarityType )
                            {
                              RarityType = (System_String_o *)sub_B170BC(RarityType, v205->obj.klass->_1.element_class);
                              if ( !RarityType )
                                goto LABEL_184;
                            }
                            if ( v205->max_length <= 2 )
                              goto LABEL_183;
                            v205->m_Items[2] = (Il2CppObject *)v224;
                            sub_B16F98(
                              (BattleServantConfConponent_o *)&v205->m_Items[2],
                              v224,
                              v145,
                              v219,
                              v220,
                              v221,
                              v222,
                              v223);
                            if ( !*v55 )
                              goto LABEL_182;
                            v225 = (*v55)->fields.userSvtEntity;
                            if ( !v225 )
                              goto LABEL_182;
                            v226 = UserServantEntity__getRarity(v225, 0LL);
                            RarityType = Rarity__getRarityType(v226, 0LL);
                            v232 = (System_Int32_array **)RarityType;
                            if ( RarityType )
                            {
                              RarityType = (System_String_o *)sub_B170BC(RarityType, v205->obj.klass->_1.element_class);
                              if ( !RarityType )
                                goto LABEL_184;
                            }
                            if ( v205->max_length <= 3 )
                              goto LABEL_183;
                            v205->m_Items[3] = (Il2CppObject *)v232;
                            sub_B16F98(
                              (BattleServantConfConponent_o *)&v205->m_Items[3],
                              v232,
                              v145,
                              v227,
                              v228,
                              v229,
                              v230,
                              v231);
                            if ( !servantEntity )
                              goto LABEL_182;
                            RarityType = ServantEntity__getClassName(servantEntity, 0LL);
                            v238 = (System_Int32_array **)RarityType;
                            if ( RarityType )
                            {
                              RarityType = (System_String_o *)sub_B170BC(RarityType, v205->obj.klass->_1.element_class);
                              if ( !RarityType )
                                goto LABEL_184;
                            }
                            if ( v205->max_length <= 4 )
                              goto LABEL_183;
                            v205->m_Items[4] = (Il2CppObject *)v238;
                            sub_B16F98(
                              (BattleServantConfConponent_o *)&v205->m_Items[4],
                              v238,
                              v145,
                              v233,
                              v234,
                              v235,
                              v236,
                              v237);
                            RarityType = ServantEntity__getName(servantEntity, v107, -1, 0LL);
                            v244 = (System_Int32_array **)RarityType;
                            if ( RarityType )
                            {
                              RarityType = (System_String_o *)sub_B170BC(RarityType, v205->obj.klass->_1.element_class);
                              if ( !RarityType )
                                goto LABEL_184;
                            }
                            if ( v205->max_length <= 5 )
                            {
LABEL_183:
                              sub_B17100(RarityType, v144, v145);
                              sub_B170A0();
                            }
                            v205->m_Items[5] = (Il2CppObject *)v244;
                            sub_B16F98(
                              (BattleServantConfConponent_o *)&v205->m_Items[5],
                              v244,
                              v145,
                              v239,
                              v240,
                              v241,
                              v242,
                              v243);
                            v245 = System_String__Format_43822456(v203, v205, 0LL);
                            v246 = LocalizationManager__Get((System_String_o *)StringLiteral_11934, 0LL);
                            v247 = LocalizationManager__Get((System_String_o *)StringLiteral_11933, 0LL);
                            v248 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v253 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                            CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                            v249,
                                                                            v250,
                                                                            v251,
                                                                            v252);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v253,
                              (Il2CppObject *)v40,
                              Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__,
                              0LL);
                            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !BalanceConfig_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            }
                            if ( v248 )
                            {
                              v196 = title;
                              v195 = (CommonUI_o *)v248;
                              v197 = v245;
                              static_fields = BalanceConfig_TypeInfo->static_fields;
                              v199 = v246;
                              v200 = v247;
                              v201 = v253;
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
    sub_B170D4();
  }
  if ( v70->fields.userSvtEntity )
  {
    if ( UserServantEntity__IsEventJoin(v70->fields.userSvtEntity, 0LL) )
    {
LABEL_38:
      v71 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
        || SoundManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_46;
      }
      goto LABEL_45;
    }
    v70 = *v55;
    if ( !*v55 )
      goto LABEL_182;
  }
  if ( FavoriteChangeListViewItem__get_IsHerioneReave(v70, v58) )
    goto LABEL_38;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v113 = UserGameMaster__getSelfUserGame(0LL);
  if ( !v113 )
    goto LABEL_182;
  pushUserSvtId = v113->fields.pushUserSvtId;
  if ( !pushUserSvtId )
  {
LABEL_91:
    FavoriteChangeComponent__PushRequest(this, *v55, v114);
    goto LABEL_48;
  }
  if ( !*v55 )
    goto LABEL_182;
  v116 = (*v55)->fields.userSvtEntity;
  if ( !v116 )
    goto LABEL_182;
  v117 = *(_OWORD *)&v116->fields.id.fields.fakeValue;
  *(_OWORD *)&v257.fields.currentCryptoKey = *(_OWORD *)&v116->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v257.fields.fakeValue = v117;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v255 = v257;
  if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v255, 0LL) )
    goto LABEL_91;
  v118 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v118 )
    goto LABEL_182;
  v119 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)v118,
                                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !v119 )
    goto LABEL_182;
  v120 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
           v119,
           pushUserSvtId,
           (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  v121 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v121 )
    goto LABEL_182;
  v122 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v121,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v120 )
    goto LABEL_182;
  v123 = (DataMasterBase_WarMaster__WarEntity__int__o *)v122;
  v125 = *(_QWORD *)&v120->fields.svtId.fields.currentCryptoKey;
  v124 = *(_QWORD *)&v120->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v259.fields.currentCryptoKey = v125;
  *(_QWORD *)&v259.fields.fakeValue = v124;
  v126 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v259, 0LL);
  if ( !v123 )
    goto LABEL_182;
  v127 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v123,
                              v126,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v128 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v129 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v120->fields.svtId, 0LL);
  v130 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v120->fields.limitCount, 0LL);
  if ( !v128 )
    goto LABEL_182;
  v131 = ServantLimitImageMaster__GetServantLimitCountSealAfter(v128, v129, v130, 0LL);
  v132 = *v55;
  if ( !*v55 )
    goto LABEL_182;
  v133 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v132->fields.userSvtEntity;
  if ( !v133 )
    goto LABEL_182;
  v134 = v131;
  v135 = v132->fields.svtId;
  v136 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v133[6], 0LL);
  v137 = ServantLimitImageMaster__GetServantLimitCountSealAfter(v128, v135, v136, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v138 = LocalizationManager__Get((System_String_o *)StringLiteral_11947, 0LL);
  v139 = LocalizationManager__Get((System_String_o *)StringLiteral_11946, 0LL);
  v141 = (System_Object_array *)sub_B17014(object___TypeInfo, 6LL, v140);
  v142 = UserServantEntity__getRarity(v120, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  RarityType = Rarity__getRarityType(v142, 0LL);
  if ( !v141 )
    goto LABEL_182;
  v151 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v141->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_184;
  }
  if ( !v141->max_length )
    goto LABEL_183;
  v141->m_Items[0] = (Il2CppObject *)v151;
  sub_B16F98((BattleServantConfConponent_o *)v141->m_Items, v151, v145, v146, v147, v148, v149, v150);
  if ( !v127 )
    goto LABEL_182;
  RarityType = ServantEntity__getClassName(v127, 0LL);
  v157 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v141->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_184;
  }
  if ( v141->max_length <= 1 )
    goto LABEL_183;
  v141->m_Items[1] = (Il2CppObject *)v157;
  sub_B16F98((BattleServantConfConponent_o *)&v141->m_Items[1], v157, v145, v152, v153, v154, v155, v156);
  RarityType = ServantEntity__getName(v127, v134, -1, 0LL);
  v163 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v141->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_184;
  }
  if ( v141->max_length <= 2 )
    goto LABEL_183;
  v141->m_Items[2] = (Il2CppObject *)v163;
  sub_B16F98((BattleServantConfConponent_o *)&v141->m_Items[2], v163, v145, v158, v159, v160, v161, v162);
  if ( !*v55 )
    goto LABEL_182;
  v164 = (*v55)->fields.userSvtEntity;
  if ( !v164 )
    goto LABEL_182;
  v165 = UserServantEntity__getRarity(v164, 0LL);
  RarityType = Rarity__getRarityType(v165, 0LL);
  v171 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v141->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_184;
  }
  if ( v141->max_length <= 3 )
    goto LABEL_183;
  v141->m_Items[3] = (Il2CppObject *)v171;
  sub_B16F98((BattleServantConfConponent_o *)&v141->m_Items[3], v171, v145, v166, v167, v168, v169, v170);
  if ( !*v55 )
    goto LABEL_182;
  v172 = (*v55)->fields.servantEntity;
  if ( !v172 )
    goto LABEL_182;
  RarityType = ServantEntity__getClassName(v172, 0LL);
  v178 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v141->obj.klass->_1.element_class);
    if ( !RarityType )
      goto LABEL_184;
  }
  if ( v141->max_length <= 4 )
    goto LABEL_183;
  v141->m_Items[4] = (Il2CppObject *)v178;
  sub_B16F98((BattleServantConfConponent_o *)&v141->m_Items[4], v178, v145, v173, v174, v175, v176, v177);
  if ( !*v55 )
    goto LABEL_182;
  v179 = (*v55)->fields.servantEntity;
  if ( !v179 )
    goto LABEL_182;
  RarityType = ServantEntity__getName(v179, v137, -1, 0LL);
  v185 = (System_Int32_array **)RarityType;
  if ( RarityType )
  {
    RarityType = (System_String_o *)sub_B170BC(RarityType, v141->obj.klass->_1.element_class);
    if ( !RarityType )
    {
LABEL_184:
      sub_B170F4(RarityType);
      sub_B170A0();
    }
  }
  if ( v141->max_length <= 5 )
    goto LABEL_183;
  v141->m_Items[5] = (Il2CppObject *)v185;
  sub_B16F98((BattleServantConfConponent_o *)&v141->m_Items[5], v185, v145, v180, v181, v182, v183, v184);
  v186 = System_String__Format_43822456(v139, v141, 0LL);
  v187 = LocalizationManager__Get((System_String_o *)StringLiteral_11945, 0LL);
  v188 = LocalizationManager__Get((System_String_o *)StringLiteral_11944, 0LL);
  v189 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v194 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                  v190,
                                                  v191,
                                                  v192,
                                                  v193);
  CommonConfirmDialog_ClickDelegate___ctor(
    v194,
    (Il2CppObject *)v40,
    Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__,
    0LL);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v189 )
    goto LABEL_182;
  v195 = (CommonUI_o *)v189;
  v196 = v138;
  v197 = v186;
  static_fields = BalanceConfig_TypeInfo->static_fields;
  v199 = v187;
  v200 = v188;
  v201 = v194;
LABEL_181:
  CommonUI__OpenConfirmDialog_18236860(v195, v196, v197, v199, v200, v201, static_fields->DefaultFontSize, 0, 0, 0LL);
LABEL_48:
  v76 = this->fields.favoriteChangeManager;
  v77 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B170CC(
                                                          FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                          v72,
                                                          v73,
                                                          v74,
                                                          v75);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v77,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0LL);
  if ( !v76 )
    goto LABEL_182;
  v76->fields.callbackFunc = v77;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v76->fields.callbackFunc,
    (System_Int32_array **)v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  FavoriteChangeListViewManager__SetMode_25176152(v76, 2, v84);
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
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *v13; // x20
  bool IsActiveBgTxt; // w0
  const MethodInfo *v15; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v17; // x1
  struct FavoriteChangeListViewManager_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  FavoriteChangeListViewManager_CallbackFunc_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x2

  if ( (byte_40F9F9C & 1) == 0 )
  {
    sub_B16FFC(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FavoriteChangeComponent_OnClickServant__, v3);
    byte_40F9F9C = 1;
  }
  FavoriteChangeComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.cancelCallback, 0LL, v5, v6, v7, v8, v9, v10);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_19612684(titleInfo, 1, 50, 0, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_10;
  v13 = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v13
    || (UnityEngine_GameObject__SetActive(v13, IsActiveBgTxt, 0LL),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL)
    || (FavoriteChangeListViewManager__CreateList(favoriteChangeManager, v15),
        FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v17),
        v18 = this->fields.favoriteChangeManager,
        v23 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                                v19,
                                                                v20,
                                                                v21,
                                                                v22),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v23,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !v18) )
  {
LABEL_10:
    sub_B170D4();
  }
  v18->fields.callbackFunc = v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v18->fields.callbackFunc,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  FavoriteChangeListViewManager__SetMode_25176152(v18, 2, v30);
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
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *userSvtEntity; // x19
  UserGameEntity_o *v15; // x23
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantCollectionMaster_o *v18; // x21
  int64_t userId; // x22
  __int64 v20; // x24
  __int64 v21; // x25
  int32_t v22; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  CommonUI_o *v24; // x0
  __int128 v25; // q1
  UserServantEntity_Fields *p_fields; // x24
  int64_t pushUserSvtId; // x8
  int64_t v28; // x0
  __int128 v29; // q0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  NetworkManager_ResultCallbackFunc_o *v34; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v36; // q0
  CardFavoriteRequest_o *v37; // x20
  int32_t v38; // w27
  int32_t v39; // w28
  int32_t v40; // w21
  bool IsLock; // w23
  bool IsChoice; // w0
  bool v43; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v47; // w0
  __int64 v48; // x8
  int32_t randomSettingSupport; // w19
  int32_t limitCountSupport; // w0
  int32_t v51; // [xsp+50h] [xbp-110h]
  int32_t v52; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v54; // [xsp+60h] [xbp-100h]
  int64_t favoriteUserSvtId; // [xsp+68h] [xbp-F8h]
  int64_t v56; // [xsp+70h] [xbp-F0h]
  int64_t v57; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_40F9FA3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B16FFC(&Method_FavoriteChangeComponent_EndePushRequest__, v5);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_40F9FA3 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userSvtEntity = selectItem->fields.userSvtEntity;
  v15 = SelfUserGame;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userSvtEntity )
    goto LABEL_21;
  v18 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  userId = v15->fields.userId;
  v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v62.fields.currentCryptoKey = v21;
  *(_QWORD *)&v62.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v62, 0LL);
  if ( !v18 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v18, userId, v22, 0LL);
  v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v24 )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag(v24, 0, 0LL);
  v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  pushUserSvtId = v15->fields.pushUserSvtId;
  *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v61.fields.fakeValue = v25;
  v57 = pushUserSvtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v60 = v61;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v60, 0LL);
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  favoriteUserSvtId = v15->fields.favoriteUserSvtId;
  v56 = v28;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v29;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v59, 0LL);
  v34 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v30,
                                                 v31,
                                                 v32,
                                                 v33);
  NetworkManager_ResultCallbackFunc___ctor(
    v34,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndePushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v34,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v36 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v37 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v58.fields.fakeValue = v36;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v58, 0LL);
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtEntity->fields.imageLimitCount, 0LL);
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtEntity->fields.dispLimitCount, 0LL);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtEntity->fields.iconLimitCount, 0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v43 = IsChoice;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v48 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v63.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v47;
  *(_QWORD *)&v63.fields.currentCryptoKey = v48;
  limitCountSupport = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v63, 0LL);
  if ( !v37 )
LABEL_21:
    sub_B170D4();
  CardFavoriteRequest__beginRequest(
    v37,
    targetUsrSVtId,
    v52,
    v51,
    v38,
    v39,
    v40,
    favoriteUserSvtId == v54,
    IsLock,
    v43,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    limitCountSupport,
    v57 != v56,
    0LL);
}


void __fastcall FavoriteChangeComponent__StatusRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeComponent_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t tabModeKind; // w8
  FavoriteChangeListViewManager_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  NetworkManager_ResultCallbackFunc_o *v21; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Int64_array *v23; // x2
  System_Int64_array *v24; // x1
  bool v25; // w4
  bool v26; // w5
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  NetworkManager_ResultCallbackFunc_o *v38; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_40F9FAB & 1) == 0 )
  {
    sub_B16FFC(&Method_FavoriteChangeComponent_EndStatusSync__, callback);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_40F9FAB = 1;
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
    if ( FavoriteChangeListViewManager__GetSwapChoiceList(favoriteChangeManager, &choiceList, &unchoiceList, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v38 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v34,
                                                     v35,
                                                     v36,
                                                     v37);
      NetworkManager_ResultCallbackFunc___ctor(
        v38,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v38,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v23 = unchoiceList;
        v24 = choiceList;
        v26 = 1;
        v25 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B170D4();
    }
  }
  else if ( tabModeKind == 1 )
  {
    v10 = this->fields.favoriteChangeManager;
    if ( !v10 )
      goto LABEL_23;
    if ( FavoriteChangeListViewManager__GetSwapLockList(v10, &lockList, &unlockList, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v17,
                                                     v18,
                                                     v19,
                                                     v20);
      NetworkManager_ResultCallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v21,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v23 = unlockList;
        v24 = lockList;
        v25 = 1;
        v26 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v24, v23, 0, v25, v26, 0LL);
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
  System_String_o *v5; // x0

  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        v5 = FavoriteChangeListViewManager__GetScaleButtonSpriteName(favoriteChangeManager, method),
        !scaleChangeTabSprite) )
  {
    sub_B170D4();
  }
  UISprite__set_spriteName(scaleChangeTabSprite, v5, 0LL);
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
  __int64 v13; // x3
  __int64 v14; // x4
  FavoriteChangeComponent_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_40F9F9D & 1) == 0 )
  {
    sub_B16FFC(&Method_FavoriteChangeComponent_endCancelButton__, callback);
    sub_B16FFC(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v10);
    byte_40F9F9D = 1;
  }
  this->fields.cancelCallback = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cancelCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                           FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                           v11,
                                                           v12,
                                                           v13,
                                                           v14);
  FavoriteChangeComponent_RequestCallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_endCancelButton__,
    0LL);
  FavoriteChangeComponent__StatusRequest(this, v15, v16);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  CommonUI_o *Instance; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Action_o *v23; // x20

  if ( (byte_40F9FA5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__, v9);
    sub_B16FFC(&FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo, v10);
    byte_40F9FA5 = 1;
  }
  v11 = sub_B170CC(
          FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo,
          isDecide,
          isNeedSort,
          *(_QWORD *)&questId,
          method);
  FavoriteChangeComponent___c__DisplayClass37_0___ctor((FavoriteChangeComponent___c__DisplayClass37_0_o *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = questId,
        *(_QWORD *)(v11 + 24) = this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v11 + 24),
          (System_Int32_array **)this,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        *(_BYTE *)(v11 + 32) = isNeedSort,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v23 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v11,
          Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseServantStatusDialog(Instance, v23, 0LL);
}


void __fastcall FavoriteChangeComponent__dispSvtList(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  struct FavoriteChangeListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  FavoriteChangeListViewManager_CallbackFunc_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *cancelCallback; // x0

  if ( (byte_40F9F9E & 1) == 0 )
  {
    sub_B16FFC(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_B16FFC(&Method_FavoriteChangeComponent_OnClickServant__, v5);
    byte_40F9F9E = 1;
  }
  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          v7 = this->fields.favoriteChangeManager,
          v12 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                  FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                                  v8,
                                                                  v9,
                                                                  v10,
                                                                  v11),
          FavoriteChangeListViewManager_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
            0LL),
          !v7) )
    {
LABEL_11:
      sub_B170D4();
    }
    v7->fields.callbackFunc = v12;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v7->fields.callbackFunc,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    FavoriteChangeListViewManager__SetMode_25176152(v7, 2, v19);
  }
  FavoriteChangeComponent__Init(this, (const MethodInfo *)isRequest);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
  __int64 v7; // x3
  __int64 v8; // x4
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_40F9FA8 & 1) == 0 )
  {
    sub_B16FFC(&Method_FavoriteChangeComponent_EndClickTabChoice__, method);
    sub_B16FFC(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F9FA8 = 1;
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
        v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                                 FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                                 v5,
                                                                 v6,
                                                                 v7,
                                                                 v8);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabChoice__,
          0LL);
        FavoriteChangeComponent__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                               FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                               v5,
                                                               v6,
                                                               v7,
                                                               v8);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabChoice__,
        0LL);
      FavoriteChangeComponent__StatusRequest(this, v12, v13);
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
  __int64 v7; // x3
  __int64 v8; // x4
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_40F9FA7 & 1) == 0 )
  {
    sub_B16FFC(&Method_FavoriteChangeComponent_EndClickTabLock__, method);
    sub_B16FFC(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F9FA7 = 1;
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
        v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                                 FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                                 v5,
                                                                 v6,
                                                                 v7,
                                                                 v8);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabLock__,
          0LL);
        FavoriteChangeComponent__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                               FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                               v5,
                                                               v6,
                                                               v7,
                                                               v8);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabLock__,
        0LL);
      FavoriteChangeComponent__StatusRequest(this, v12, v13);
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
  __int64 v7; // x3
  __int64 v8; // x4
  FavoriteChangeComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40F9FA6 & 1) == 0 )
  {
    sub_B16FFC(&Method_FavoriteChangeComponent_EndClickTabNormal__, method);
    sub_B16FFC(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F9FA6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v9 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                            FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                            v5,
                                                            v6,
                                                            v7,
                                                            v8);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabNormal__,
      0LL);
    FavoriteChangeComponent__StatusRequest(this, v9, v10);
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
  __int64 v7; // x3
  __int64 v8; // x4
  FavoriteChangeComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40F9FA9 & 1) == 0 )
  {
    sub_B16FFC(&Method_FavoriteChangeComponent_EndClickTabPush__, method);
    sub_B16FFC(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F9FA9 = 1;
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
    v9 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B170CC(
                                                            FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                            v5,
                                                            v6,
                                                            v7,
                                                            v8);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabPush__,
      0LL);
    FavoriteChangeComponent__StatusRequest(this, v9, v10);
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
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *userSvtEntity; // x19
  UserGameEntity_o *v15; // x22
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantCollectionMaster_o *v18; // x21
  int64_t userId; // x23
  __int64 v20; // x24
  __int64 v21; // x25
  int32_t v22; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  CommonUI_o *v24; // x0
  __int128 v25; // q1
  int64_t pushUserSvtId; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  NetworkManager_ResultCallbackFunc_o *v31; // x22
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v33; // q0
  CardFavoriteRequest_o *v34; // x20
  int32_t v35; // w26
  int32_t v36; // w27
  int32_t v37; // w28
  bool IsLock; // w22
  bool IsChoice; // w0
  bool v40; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w21
  int32_t randomSettingOwn; // w24
  int32_t v44; // w0
  __int64 v45; // x8
  int32_t randomSettingSupport; // w19
  int32_t limitCountSupport; // w0
  int32_t v48; // [xsp+50h] [xbp-E0h]
  int32_t v49; // [xsp+54h] [xbp-DCh]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-D8h]
  int64_t v51; // [xsp+60h] [xbp-D0h]
  int64_t v52; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_40F9FA1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B16FFC(&Method_FavoriteChangeComponent_EndCardFavoriteRequest__, v5);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_40F9FA1 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userSvtEntity = selectItem->fields.userSvtEntity;
  v15 = SelfUserGame;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userSvtEntity )
    goto LABEL_21;
  v18 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  userId = v15->fields.userId;
  v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v56.fields.currentCryptoKey = v21;
  *(_QWORD *)&v56.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v56, 0LL);
  if ( !v18 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v18, userId, v22, 0LL);
  v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v24 )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag(v24, 0, 0LL);
  v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  pushUserSvtId = v15->fields.pushUserSvtId;
  *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v55.fields.fakeValue = v25;
  v52 = pushUserSvtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v54 = v55;
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v54, 0LL);
  v31 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v27,
                                                 v28,
                                                 v29,
                                                 v30);
  NetworkManager_ResultCallbackFunc___ctor(
    v31,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v31,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v33 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v34 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v33;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v53, 0LL);
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtEntity->fields.imageLimitCount, 0LL);
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtEntity->fields.dispLimitCount, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtEntity->fields.iconLimitCount, 0LL);
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v40 = IsChoice;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v45 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v57.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v44;
  *(_QWORD *)&v57.fields.currentCryptoKey = v45;
  limitCountSupport = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v57, 0LL);
  if ( !v34 )
LABEL_21:
    sub_B170D4();
  CardFavoriteRequest__beginRequest(
    v34,
    targetUsrSVtId,
    v49,
    v48,
    v35,
    v36,
    v37,
    1,
    IsLock,
    v40,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    limitCountSupport,
    v52 == v51,
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
  UnityEngine_Collider_o *normalTabBoxCollider; // x0
  UISprite_o *normalTabSprite; // x0
  System_String_o **v20; // x8
  UnityEngine_Behaviour_o *lockTabButton; // x0
  UnityEngine_Collider_o *lockTabBoxCollider; // x0
  UISprite_o *lockTabSprite; // x0
  System_String_o **v24; // x8
  UnityEngine_Behaviour_o *choiceTabButton; // x0
  UnityEngine_Collider_o *choiceTabBoxCollider; // x0
  UISprite_o *choiceTabSprite; // x0
  System_String_o **v28; // x8
  UnityEngine_Behaviour_o *pushTabButton; // x0
  UnityEngine_Collider_o *pushTabBoxCollider; // x0
  UISprite_o *pushTabSprite; // x0
  System_String_o **v32; // x8
  const MethodInfo *v33; // x2
  UILabel_o *infoLb; // x21
  System_String_o *v35; // x0
  struct FavoriteChangeListViewManager_o *v36; // x8
  FavoriteChangeListViewManager_o **p_favoriteChangeManager; // x19
  struct FavoriteChangeListViewManager_o *favoriteChangeManager; // t1
  UILabel_o *v39; // x21
  __int64 *v40; // x8
  System_String_o *v41; // x0
  struct FavoriteChangeListViewManager_o *v42; // x8
  struct FavoriteChangeListViewManager_o *v43; // t1
  const MethodInfo *v44; // x2

  if ( (byte_40F9FAA & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_B16FFC(&StringLiteral_11701, v5);
    sub_B16FFC(&StringLiteral_17071, v6);
    sub_B16FFC(&StringLiteral_17072, v7);
    sub_B16FFC(&StringLiteral_17057, v8);
    sub_B16FFC(&StringLiteral_17060, v9);
    sub_B16FFC(&StringLiteral_11699, v10);
    sub_B16FFC(&StringLiteral_11700, v11);
    sub_B16FFC(&StringLiteral_17073, v12);
    sub_B16FFC(&StringLiteral_17074, v13);
    sub_B16FFC(&StringLiteral_17059, v14);
    sub_B16FFC(&StringLiteral_17058, v15);
    sub_B16FFC(&StringLiteral_7002, v16);
    byte_40F9FAA = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_54;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    normalTabBoxCollider = (UnityEngine_Collider_o *)this->fields.normalTabBoxCollider;
    if ( !normalTabBoxCollider )
      goto LABEL_54;
    UnityEngine_Collider__set_enabled(normalTabBoxCollider, this->fields.tabModeKind != 0, 0LL);
    normalTabSprite = this->fields.normalTabSprite;
    if ( !normalTabSprite )
      goto LABEL_54;
    v20 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17074 : &StringLiteral_17073);
    UISprite__set_spriteName(normalTabSprite, *v20, 0LL);
    lockTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_54;
    UnityEngine_Behaviour__set_enabled(lockTabButton, this->fields.tabModeKind != 1, 0LL);
    lockTabBoxCollider = (UnityEngine_Collider_o *)this->fields.lockTabBoxCollider;
    if ( !lockTabBoxCollider )
      goto LABEL_54;
    UnityEngine_Collider__set_enabled(lockTabBoxCollider, this->fields.tabModeKind != 1, 0LL);
    lockTabSprite = this->fields.lockTabSprite;
    if ( !lockTabSprite )
      goto LABEL_54;
    v24 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17059 : &StringLiteral_17060);
    UISprite__set_spriteName(lockTabSprite, *v24, 0LL);
    choiceTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_54;
    UnityEngine_Behaviour__set_enabled(choiceTabButton, this->fields.tabModeKind != 2, 0LL);
    choiceTabBoxCollider = (UnityEngine_Collider_o *)this->fields.choiceTabBoxCollider;
    if ( !choiceTabBoxCollider )
      goto LABEL_54;
    UnityEngine_Collider__set_enabled(choiceTabBoxCollider, this->fields.tabModeKind != 2, 0LL);
    choiceTabSprite = this->fields.choiceTabSprite;
    if ( !choiceTabSprite )
      goto LABEL_54;
    v28 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17057 : &StringLiteral_17058);
    UISprite__set_spriteName(choiceTabSprite, *v28, 0LL);
    pushTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !pushTabButton
      || (UnityEngine_Behaviour__set_enabled(pushTabButton, this->fields.tabModeKind != 3, 0LL),
          (pushTabBoxCollider = (UnityEngine_Collider_o *)this->fields.pushTabBoxCollider) == 0LL)
      || (UnityEngine_Collider__set_enabled(pushTabBoxCollider, this->fields.tabModeKind != 3, 0LL),
          (pushTabSprite = this->fields.pushTabSprite) == 0LL) )
    {
LABEL_54:
      sub_B170D4();
    }
    if ( this->fields.tabModeKind == 3 )
      v32 = (System_String_o **)&StringLiteral_17071;
    else
      v32 = (System_String_o **)&StringLiteral_17072;
    UISprite__set_spriteName(pushTabSprite, *v32, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v35 = LocalizationManager__Get((System_String_o *)StringLiteral_7002, 0LL);
        if ( !infoLb )
          goto LABEL_54;
        UILabel__set_text(infoLb, v35, 0LL);
        favoriteChangeManager = this->fields.favoriteChangeManager;
        p_favoriteChangeManager = &this->fields.favoriteChangeManager;
        v36 = favoriteChangeManager;
        if ( !favoriteChangeManager )
          goto LABEL_54;
        v36->fields.isCanNotLongPush = 0;
        goto LABEL_51;
      case 1:
        v39 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v40 = &StringLiteral_11700;
        goto LABEL_47;
      case 2:
        v39 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v40 = &StringLiteral_11699;
        goto LABEL_47;
      case 3:
        v39 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v40 = &StringLiteral_11701;
LABEL_47:
        v41 = LocalizationManager__Get((System_String_o *)*v40, 0LL);
        if ( !v39 )
          goto LABEL_54;
        UILabel__set_text(v39, v41, 0LL);
        v43 = this->fields.favoriteChangeManager;
        p_favoriteChangeManager = &this->fields.favoriteChangeManager;
        v42 = v43;
        if ( !v43 )
          goto LABEL_54;
        v42->fields.isCanNotLongPush = 1;
LABEL_51:
        if ( !*p_favoriteChangeManager )
          goto LABEL_54;
        FavoriteChangeListViewManager__UpdateDisplayState(*p_favoriteChangeManager, modeKind == 3, v33);
        if ( !*p_favoriteChangeManager )
          goto LABEL_54;
        FavoriteChangeListViewManager__SetMode_25176152(*p_favoriteChangeManager, 2, v44);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F68B3 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isRequest);
    byte_40F68B3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall FavoriteChangeComponent_RequestCallbackFunc__EndInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent_RequestCallbackFunc__Invoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  FavoriteChangeComponent_RequestCallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  FavoriteChangeComponent_RequestCallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  FavoriteChangeComponent_RequestCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (FavoriteChangeComponent_RequestCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isRequest, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isRequest, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, isRequest, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isRequest, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isRequest,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isRequest, v20);
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
  __int64 v10; // x3
  __int64 v11; // x4
  CommonUI_o *v12; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F68AF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__, v6);
    byte_40F68AF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__9__1,
        (System_Int32_array **)_9__1,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    if ( v12 )
    {
      CommonUI__CloseConfirmDialog_18237824(v12, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v10; // x3
  __int64 v11; // x4
  CommonUI_o *v12; // x20
  System_Action_o *_9__3; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F68B0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__, v6);
    byte_40F68B0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = Instance;
  if ( isDecide )
  {
    _9__3 = this->fields.__9__3;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__,
        0LL);
      this->fields.__9__3 = _9__3;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__9__3,
        (System_Int32_array **)_9__3,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    if ( v12 )
    {
      CommonUI__CloseConfirmDialog_18237824(v12, _9__3, 0LL);
      return;
    }
LABEL_10:
    sub_B170D4();
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__3(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  struct FavoriteChangeComponent_o *_4__this; // x9
  struct FavoriteChangeListViewItem_o *item; // x8
  UnityEngine_Component_o *favoriteChangeManager; // x0

  if ( (byte_40F68B1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9913, method);
    byte_40F68B1 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (item = this->fields.item) == 0LL
    || (favoriteChangeManager = (UnityEngine_Component_o *)_4__this->fields.favoriteChangeManager) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Component__SendMessage(
    favoriteChangeManager,
    (System_String_o *)StringLiteral_9913,
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
  struct FavoriteChangeComponent_o *_4__this; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct FavoriteChangeComponent_o *v8; // x8
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  struct FavoriteChangeComponent_o *v14; // x8
  ListViewManager_o *favoriteChangeManager; // x0
  struct FavoriteChangeComponent_o *v16; // x20
  FavoriteChangeListViewManager_o *v17; // x19
  __int64 v18; // x21
  __int64 v19; // x9
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40F68B2 & 1) == 0 )
  {
    sub_B16FFC(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FavoriteChangeComponent_OnClickServant__, v3);
    sub_B16FFC(&StringLiteral_3034, v4);
    byte_40F68B2 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  if ( this->fields.questId >= 1 )
  {
    FavoriteChangeComponent__Init(_4__this, 0LL);
    v6 = (UnityEngine_Component_o *)this->fields.__4__this;
    if ( v6 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        v8 = this->fields.__4__this;
        if ( v8 )
        {
          myRoomFsm = v8->fields.myRoomFsm;
          if ( myRoomFsm )
          {
            PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3034, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_B170D4();
  }
  if ( !_4__this->fields.favoriteChangeManager )
    goto LABEL_18;
  FavoriteChangeListViewManager__ModifyItem(_4__this->fields.favoriteChangeManager, _4__this->fields.usrSvtId, 0LL);
  if ( this->fields.isNeedSort )
  {
    v14 = this->fields.__4__this;
    if ( !v14 )
      goto LABEL_18;
    favoriteChangeManager = (ListViewManager_o *)v14->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_18;
    ListViewManager__SortItem(favoriteChangeManager, -1, 0, -1, 0LL);
  }
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_18;
  v17 = v16->fields.favoriteChangeManager;
  v18 = sub_B170CC(FavoriteChangeListViewManager_CallbackFunc_TypeInfo, v10, v11, v12, v13);
  v19 = *(_QWORD *)Method_FavoriteChangeComponent_OnClickServant__;
  *(_QWORD *)(v18 + 40) = Method_FavoriteChangeComponent_OnClickServant__;
  *(_QWORD *)(v18 + 16) = v19;
  *(_QWORD *)(v18 + 32) = v16;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)v16, v20, v21, v22, v23, v24, v25);
  if ( !v17 )
    goto LABEL_18;
  FavoriteChangeListViewManager__SetMode(v17, 2, (FavoriteChangeListViewManager_CallbackFunc_o *)v18, 0LL);
}