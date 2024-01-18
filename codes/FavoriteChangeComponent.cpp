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
  FavoriteChangeListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_41885F5 & 1) == 0 )
  {
    sub_B2C35C(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, result);
    sub_B2C35C(&Method_FavoriteChangeComponent_OnClickServant__, v4);
    byte_41885F5 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, 0LL),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL)
    || (ListViewManager__SortItem((ListViewManager_o *)favoriteChangeManager, -1, 0, -1, 0LL),
        v6 = this->fields.favoriteChangeManager,
        v7 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B2C42C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !v6) )
  {
    sub_B2C434(favoriteChangeManager, result);
  }
  FavoriteChangeListViewManager__SetMode(v6, 2, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_B2C434(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_23100424(favoriteChangeManager, 2, 0LL);
  }
  FavoriteChangeComponent__setModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_B2C434(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_23100424(favoriteChangeManager, 2, 0LL);
  }
  FavoriteChangeComponent__setModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_B2C434(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_23100424(favoriteChangeManager, 2, 0LL);
  }
  FavoriteChangeComponent__setModeTabKind(this, 0, method);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_B2C434(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_23100424(favoriteChangeManager, 2, 0LL);
  }
  FavoriteChangeComponent__setModeTabKind(this, 3, method);
}


void __fastcall FavoriteChangeComponent__EndCloseConfirmSelectFavorite(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_41885F3 & 1) == 0 )
  {
    sub_B2C35C(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_FavoriteChangeComponent_OnClickServant__, v3);
    byte_41885F3 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  v5 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B2C42C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0LL);
  if ( !favoriteChangeManager )
    sub_B2C434(v6, v7);
  FavoriteChangeListViewManager__SetMode(favoriteChangeManager, 2, v5, 0LL);
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
    sub_B2C2F8(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  FavoriteChangeListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_41885F7 & 1) == 0 )
  {
    sub_B2C35C(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, result);
    sub_B2C35C(&Method_FavoriteChangeComponent_OnClickServant__, v4);
    byte_41885F7 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__UpdateDisplayState(favoriteChangeManager, 1, 0LL),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL)
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, 0LL),
        v6 = this->fields.favoriteChangeManager,
        v7 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B2C42C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !v6) )
  {
    sub_B2C434(favoriteChangeManager, result);
  }
  FavoriteChangeListViewManager__SetMode(v6, 2, v7, 0LL);
}


void __fastcall FavoriteChangeComponent__Init(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v6; // x2

  if ( (byte_41885EE & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_7030/*"HEADER_MSG_FAVORITE"*/, v3);
    byte_41885EE = 1;
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
                                                               (System_String_o *)StringLiteral_7030/*"HEADER_MSG_FAVORITE"*/,
                                                               0LL);
  if ( !infoLb )
LABEL_9:
    sub_B2C434(favoriteChangeManager, method);
  UILabel__set_text(infoLb, (System_String_o *)favoriteChangeManager, 0LL);
  FavoriteChangeComponent__setModeTabKind(this, 0, v6);
}


void __fastcall FavoriteChangeComponent__OnClickScaleChange(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v5; // x1

  if ( (byte_41885FF & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41885FF = 1;
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
      sub_B2C434(0LL, v3);
    FavoriteChangeListViewManager__ChangeIconScale(favoriteChangeManager, 0LL);
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
  const MethodInfo *v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  FavoriteChangeListViewItem_o **v55; // x21
  __int64 v56; // x8
  __int128 v57; // q1
  const MethodInfo *v58; // x2
  int32_t tabModeKind; // w8
  int32_t v60; // w0
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v62; // x20
  ServantStatusDialog_ResultDelegate_o *v63; // x22
  SoundManager_c *v64; // x0
  FavoriteChangeListViewManager_o *v65; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v66; // x21
  ServantEntity_o *servantEntity; // x22
  int64_t v68; // x23
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v70; // x23
  __int64 v71; // x24
  __int64 v72; // x25
  ServantEntity_o *v73; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x23
  int32_t v75; // w24
  FavoriteChangeListViewItem_o *v76; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v77; // x9
  int32_t v78; // w27
  int32_t svtId; // w24
  int32_t v80; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v82; // x23
  UserServantEntity_o *v83; // x0
  UserServantEntity_o *v84; // x0
  System_String_o *v85; // x23
  const MethodInfo *v86; // x2
  int64_t v87; // x22
  struct UserServantEntity_o *v88; // x8
  __int128 v89; // q0
  UserServantEntity_o *v90; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v91; // x22
  __int64 v92; // x23
  __int64 v93; // x24
  ServantEntity_o *v94; // x26
  ServantLimitImageMaster_o *v95; // x22
  int32_t v96; // w23
  FavoriteChangeListViewItem_o *v97; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v98; // x9
  int32_t v99; // w28
  int32_t v100; // w23
  int32_t v101; // w0
  int32_t v102; // w24
  System_String_o *v103; // x22
  System_String_o *v104; // x23
  System_Object_array *v105; // x25
  int32_t v106; // w27
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x27
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x27
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x26
  int32_t v128; // w0
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  System_Int32_array **v135; // x26
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_Int32_array **v142; // x26
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  System_Int32_array **v149; // x21
  System_String_o *v150; // x21
  System_String_o *v151; // x23
  System_String_o *v152; // x24
  WebViewManager_o *v153; // x25
  CommonConfirmDialog_ClickDelegate_o *v154; // x26
  CommonUI_o *v155; // x0
  System_String_o *v156; // x1
  System_String_o *v157; // x2
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v159; // x3
  System_String_o *v160; // x4
  CommonConfirmDialog_ClickDelegate_o *v161; // x5
  System_String_o *v162; // x0
  System_String_o *v163; // x28
  System_Object_array *v164; // x23
  int32_t Rarity; // w26
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  System_Int32_array **v172; // x26
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  System_Int32_array **v179; // x26
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  System_Int32_array **v186; // x25
  int32_t v187; // w0
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  System_Int32_array **v194; // x21
  System_String_array **v195; // x2
  System_String_array **v196; // x3
  System_Boolean_array **v197; // x4
  System_Int32_array **v198; // x5
  System_Int32_array *v199; // x6
  System_Int32_array *v200; // x7
  System_Int32_array **v201; // x21
  System_String_array **v202; // x2
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7
  System_Int32_array **v208; // x21
  System_String_o *v209; // x21
  System_String_o *v210; // x22
  System_String_o *v211; // x23
  WebViewManager_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v213; // x25
  __int64 v214; // x0
  __int64 v215; // x0
  System_String_o *title; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v217; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v218; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v219; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v220; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v221; // 0:x0.16

  if ( (byte_41885F2 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, v7);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_B2C35C(&Method_FavoriteChangeComponent_OnClickServant__, v15);
    sub_B2C35C(&Method_FavoriteChangeComponent_closeSvtDetail__, v16);
    sub_B2C35C(&LocalizationManager_TypeInfo, v17);
    sub_B2C35C(&object___TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_B2C35C(&Rarity_TypeInfo, v21);
    sub_B2C35C(&ServantStatusDialog_ResultDelegate_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24);
    sub_B2C35C(&SoundManager_TypeInfo, v25);
    sub_B2C35C(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__, v26);
    sub_B2C35C(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__, v27);
    sub_B2C35C(&FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo, v28);
    sub_B2C35C(&StringLiteral_11986/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, v29);
    sub_B2C35C(&StringLiteral_11984/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, v30);
    sub_B2C35C(&StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v31);
    sub_B2C35C(&StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v32);
    sub_B2C35C(&StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v33);
    sub_B2C35C(&StringLiteral_11983/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, v34);
    sub_B2C35C(&StringLiteral_11987/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, v35);
    sub_B2C35C(&StringLiteral_1/*""*/, v36);
    sub_B2C35C(&StringLiteral_11985/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, v37);
    sub_B2C35C(&StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v38);
    byte_41885F2 = 1;
  }
  v39 = sub_B2C42C(FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo);
  FavoriteChangeComponent___c__DisplayClass31_0___ctor((FavoriteChangeComponent___c__DisplayClass31_0_o *)v39, 0LL);
  if ( !v39 )
    goto LABEL_182;
  *(_QWORD *)(v39 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v39 + 16), (System_Int32_array **)this, v42, v43, v44, v45, v46, v47);
  if ( (n & 0x80000000) != 0 )
  {
    v54 = 0LL;
  }
  else
  {
    favoriteChangeManager = (__int64)this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_182;
    v54 = (System_Int32_array **)FavoriteChangeListViewManager__GetItem(
                                   (FavoriteChangeListViewManager_o *)favoriteChangeManager,
                                   n,
                                   0LL);
  }
  *(_QWORD *)(v39 + 24) = v54;
  v55 = (FavoriteChangeListViewItem_o **)(v39 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v39 + 24), v54, v48, v49, v50, v51, v52, v53);
  if ( !*(_QWORD *)(v39 + 24) )
    goto LABEL_182;
  v56 = *(_QWORD *)(*(_QWORD *)(v39 + 24) + 112LL);
  if ( !v56 )
    goto LABEL_182;
  v57 = *(_OWORD *)(v56 + 32);
  *(_OWORD *)&v219.fields.currentCryptoKey = *(_OWORD *)(v56 + 16);
  *(_OWORD *)&v219.fields.fakeValue = v57;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v218 = v219;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v218, 0LL);
  this->fields.usrSvtId = favoriteChangeManager;
  if ( kind == 1 )
  {
    FavoriteChangeComponent__setFavoriteRequest(this, *v55, v58);
    return;
  }
  if ( kind == 2 )
  {
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v55 )
    {
      userSvtEntity = (*v55)->fields.userSvtEntity;
      v62 = (CommonUI_o *)favoriteChangeManager;
      v63 = (ServantStatusDialog_ResultDelegate_o *)sub_B2C42C(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v63,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_closeSvtDetail__,
        0LL);
      if ( v62 )
      {
        CommonUI__OpenServantStatusDialog_17982572(v62, 0, userSvtEntity, v63, 0LL);
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
    v60 = 0;
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
    v60 = 11;
    goto LABEL_47;
  }
  favoriteChangeManager = (__int64)*v55;
  if ( !*v55 )
    goto LABEL_182;
  if ( tabModeKind != 3 )
  {
    if ( FavoriteChangeListViewItem__get_IsCanNotSelect((FavoriteChangeListViewItem_o *)favoriteChangeManager, v41) )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
        || SoundManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_46;
      }
      v64 = SoundManager_TypeInfo;
LABEL_45:
      j_il2cpp_runtime_class_init_0(v64);
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
    if ( *v55 )
    {
      servantEntity = (*v55)->fields.servantEntity;
      favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
      if ( favoriteChangeManager )
      {
        v68 = *(_QWORD *)(favoriteChangeManager + 112);
        favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( favoriteChangeManager )
        {
          favoriteChangeManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)favoriteChangeManager,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( favoriteChangeManager )
          {
            Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)favoriteChangeManager,
                       v68,
                       (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( favoriteChangeManager )
            {
              favoriteChangeManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)favoriteChangeManager,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( Entity )
              {
                v70 = (DataMasterBase_WarMaster__WarEntity__int__o *)favoriteChangeManager;
                v72 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
                v71 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v220.fields.currentCryptoKey = v72;
                *(_QWORD *)&v220.fields.fakeValue = v71;
                favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v220, 0LL);
                if ( v70 )
                {
                  v73 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v70,
                                             favoriteChangeManager,
                                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                  v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(Entity->fields.svtId, 0LL);
                  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                            Entity->fields.limitCount,
                                            0LL);
                  if ( Master_WarQuestSelectionMaster )
                  {
                    favoriteChangeManager = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                              Master_WarQuestSelectionMaster,
                                              v75,
                                              favoriteChangeManager,
                                              0LL);
                    v76 = *v55;
                    if ( *v55 )
                    {
                      v77 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v76->fields.userSvtEntity;
                      if ( v77 )
                      {
                        v78 = favoriteChangeManager;
                        svtId = v76->fields.svtId;
                        v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v77[6], 0LL);
                        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                       Master_WarQuestSelectionMaster,
                                                       svtId,
                                                       v80,
                                                       0LL);
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        favoriteChangeManager = (__int64)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11987/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/,
                                                           0LL);
                        if ( *v55 )
                        {
                          v82 = (System_String_o *)favoriteChangeManager;
                          v83 = (*v55)->fields.userSvtEntity;
                          title = v82;
                          if ( !v83 )
                            goto LABEL_79;
                          favoriteChangeManager = UserServantEntity__IsEventJoin(v83, 0LL);
                          if ( (favoriteChangeManager & 1) == 0 )
                            goto LABEL_79;
                          if ( !*v55 )
                            goto LABEL_182;
                          v84 = (*v55)->fields.userSvtEntity;
                          if ( !v84 || !UserServantEntity__IsNoPeriod(v84, 0LL) )
                          {
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v85 = LocalizationManager__Get((System_String_o *)StringLiteral_11985/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
                          }
                          else
                          {
LABEL_79:
                            v85 = (System_String_o *)StringLiteral_1/*""*/;
                          }
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v162 = LocalizationManager__Get((System_String_o *)StringLiteral_11986/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
                          v163 = System_String__Concat_44305532(v162, v85, 0LL);
                          v164 = (System_Object_array *)sub_B2C374(object___TypeInfo, 6LL);
                          Rarity = UserServantEntity__getRarity(Entity, 0LL);
                          if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !Rarity_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                          }
                          favoriteChangeManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
                          if ( v164 )
                          {
                            v172 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B2C41C(
                                                        favoriteChangeManager,
                                                        v164->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( !v164->max_length )
                              goto LABEL_183;
                            v164->m_Items[0] = (Il2CppObject *)v172;
                            sub_B2C2F8(
                              (BattleServantConfConponent_o *)v164->m_Items,
                              v172,
                              v166,
                              v167,
                              v168,
                              v169,
                              v170,
                              v171);
                            if ( !v73 )
                              goto LABEL_182;
                            favoriteChangeManager = (__int64)ServantEntity__getClassName(v73, 0LL);
                            v179 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B2C41C(
                                                        favoriteChangeManager,
                                                        v164->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v164->max_length <= 1 )
                              goto LABEL_183;
                            v164->m_Items[1] = (Il2CppObject *)v179;
                            sub_B2C2F8(
                              (BattleServantConfConponent_o *)&v164->m_Items[1],
                              v179,
                              v173,
                              v174,
                              v175,
                              v176,
                              v177,
                              v178);
                            favoriteChangeManager = (__int64)ServantEntity__getName(v73, v78, -1, 0LL);
                            v186 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B2C41C(
                                                        favoriteChangeManager,
                                                        v164->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v164->max_length <= 2 )
                              goto LABEL_183;
                            v164->m_Items[2] = (Il2CppObject *)v186;
                            sub_B2C2F8(
                              (BattleServantConfConponent_o *)&v164->m_Items[2],
                              v186,
                              v180,
                              v181,
                              v182,
                              v183,
                              v184,
                              v185);
                            if ( !*v55 )
                              goto LABEL_182;
                            favoriteChangeManager = (__int64)(*v55)->fields.userSvtEntity;
                            if ( !favoriteChangeManager )
                              goto LABEL_182;
                            v187 = UserServantEntity__getRarity((UserServantEntity_o *)favoriteChangeManager, 0LL);
                            favoriteChangeManager = (__int64)Rarity__getRarityType(v187, 0LL);
                            v194 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B2C41C(
                                                        favoriteChangeManager,
                                                        v164->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v164->max_length <= 3 )
                              goto LABEL_183;
                            v164->m_Items[3] = (Il2CppObject *)v194;
                            sub_B2C2F8(
                              (BattleServantConfConponent_o *)&v164->m_Items[3],
                              v194,
                              v188,
                              v189,
                              v190,
                              v191,
                              v192,
                              v193);
                            if ( !servantEntity )
                              goto LABEL_182;
                            favoriteChangeManager = (__int64)ServantEntity__getClassName(servantEntity, 0LL);
                            v201 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B2C41C(
                                                        favoriteChangeManager,
                                                        v164->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v164->max_length <= 4 )
                              goto LABEL_183;
                            v164->m_Items[4] = (Il2CppObject *)v201;
                            sub_B2C2F8(
                              (BattleServantConfConponent_o *)&v164->m_Items[4],
                              v201,
                              v195,
                              v196,
                              v197,
                              v198,
                              v199,
                              v200);
                            favoriteChangeManager = (__int64)ServantEntity__getName(
                                                               servantEntity,
                                                               ServantLimitCountSealAfter,
                                                               -1,
                                                               0LL);
                            v208 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B2C41C(
                                                        favoriteChangeManager,
                                                        v164->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v164->max_length <= 5 )
                            {
LABEL_183:
                              v214 = sub_B2C460(favoriteChangeManager);
                              sub_B2C400(v214, 0LL);
                            }
                            v164->m_Items[5] = (Il2CppObject *)v208;
                            sub_B2C2F8(
                              (BattleServantConfConponent_o *)&v164->m_Items[5],
                              v208,
                              v202,
                              v203,
                              v204,
                              v205,
                              v206,
                              v207);
                            v209 = System_String__Format_44384256(v163, v164, 0LL);
                            v210 = LocalizationManager__Get((System_String_o *)StringLiteral_11984/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                            v211 = LocalizationManager__Get((System_String_o *)StringLiteral_11983/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v213 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v213,
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
                              v156 = title;
                              v155 = (CommonUI_o *)Instance;
                              v157 = v209;
                              static_fields = BalanceConfig_TypeInfo->static_fields;
                              v159 = v210;
                              v160 = v211;
                              v161 = v213;
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
    sub_B2C434(favoriteChangeManager, v41);
  }
  if ( *(_QWORD *)(favoriteChangeManager + 112) )
  {
    if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(favoriteChangeManager + 112), 0LL) )
    {
LABEL_38:
      v64 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
        || SoundManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_46;
      }
      goto LABEL_45;
    }
    favoriteChangeManager = (__int64)*v55;
    if ( !*v55 )
      goto LABEL_182;
  }
  if ( FavoriteChangeListViewItem__get_IsHerioneReave((FavoriteChangeListViewItem_o *)favoriteChangeManager, v41) )
    goto LABEL_38;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !favoriteChangeManager )
    goto LABEL_182;
  v87 = *(_QWORD *)(favoriteChangeManager + 120);
  if ( !v87 )
  {
LABEL_91:
    FavoriteChangeComponent__PushRequest(this, *v55, v86);
    goto LABEL_48;
  }
  if ( !*v55 )
    goto LABEL_182;
  v88 = (*v55)->fields.userSvtEntity;
  if ( !v88 )
    goto LABEL_182;
  v89 = *(_OWORD *)&v88->fields.id.fields.fakeValue;
  *(_OWORD *)&v219.fields.currentCryptoKey = *(_OWORD *)&v88->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v219.fields.fakeValue = v89;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v217 = v219;
  if ( v87 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v217, 0LL) )
    goto LABEL_91;
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_182;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !favoriteChangeManager )
    goto LABEL_182;
  v90 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)favoriteChangeManager,
          v87,
          (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_182;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v90 )
    goto LABEL_182;
  v91 = (DataMasterBase_WarMaster__WarEntity__int__o *)favoriteChangeManager;
  v93 = *(_QWORD *)&v90->fields.svtId.fields.currentCryptoKey;
  v92 = *(_QWORD *)&v90->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v221.fields.currentCryptoKey = v93;
  *(_QWORD *)&v221.fields.fakeValue = v92;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v221, 0LL);
  if ( !v91 )
    goto LABEL_182;
  v94 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v91,
                             favoriteChangeManager,
                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v95 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v90->fields.svtId, 0LL);
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                            v90->fields.limitCount,
                            0LL);
  if ( !v95 )
    goto LABEL_182;
  favoriteChangeManager = ServantLimitImageMaster__GetServantLimitCountSealAfter(v95, v96, favoriteChangeManager, 0LL);
  v97 = *v55;
  if ( !*v55 )
    goto LABEL_182;
  v98 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v97->fields.userSvtEntity;
  if ( !v98 )
    goto LABEL_182;
  v99 = favoriteChangeManager;
  v100 = v97->fields.svtId;
  v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v98[6], 0LL);
  v102 = ServantLimitImageMaster__GetServantLimitCountSealAfter(v95, v100, v101, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v103 = LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v104 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v105 = (System_Object_array *)sub_B2C374(object___TypeInfo, 6LL);
  v106 = UserServantEntity__getRarity(v90, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v106, 0LL);
  if ( !v105 )
    goto LABEL_182;
  v113 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B2C41C(favoriteChangeManager, v105->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( !v105->max_length )
    goto LABEL_183;
  v105->m_Items[0] = (Il2CppObject *)v113;
  sub_B2C2F8((BattleServantConfConponent_o *)v105->m_Items, v113, v107, v108, v109, v110, v111, v112);
  if ( !v94 )
    goto LABEL_182;
  favoriteChangeManager = (__int64)ServantEntity__getClassName(v94, 0LL);
  v120 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B2C41C(favoriteChangeManager, v105->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( v105->max_length <= 1 )
    goto LABEL_183;
  v105->m_Items[1] = (Il2CppObject *)v120;
  sub_B2C2F8((BattleServantConfConponent_o *)&v105->m_Items[1], v120, v114, v115, v116, v117, v118, v119);
  favoriteChangeManager = (__int64)ServantEntity__getName(v94, v99, -1, 0LL);
  v127 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B2C41C(favoriteChangeManager, v105->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( v105->max_length <= 2 )
    goto LABEL_183;
  v105->m_Items[2] = (Il2CppObject *)v127;
  sub_B2C2F8((BattleServantConfConponent_o *)&v105->m_Items[2], v127, v121, v122, v123, v124, v125, v126);
  if ( !*v55 )
    goto LABEL_182;
  favoriteChangeManager = (__int64)(*v55)->fields.userSvtEntity;
  if ( !favoriteChangeManager )
    goto LABEL_182;
  v128 = UserServantEntity__getRarity((UserServantEntity_o *)favoriteChangeManager, 0LL);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v128, 0LL);
  v135 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B2C41C(favoriteChangeManager, v105->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( v105->max_length <= 3 )
    goto LABEL_183;
  v105->m_Items[3] = (Il2CppObject *)v135;
  sub_B2C2F8((BattleServantConfConponent_o *)&v105->m_Items[3], v135, v129, v130, v131, v132, v133, v134);
  if ( !*v55 )
    goto LABEL_182;
  favoriteChangeManager = (__int64)(*v55)->fields.servantEntity;
  if ( !favoriteChangeManager )
    goto LABEL_182;
  favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)favoriteChangeManager, 0LL);
  v142 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B2C41C(favoriteChangeManager, v105->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( v105->max_length <= 4 )
    goto LABEL_183;
  v105->m_Items[4] = (Il2CppObject *)v142;
  sub_B2C2F8((BattleServantConfConponent_o *)&v105->m_Items[4], v142, v136, v137, v138, v139, v140, v141);
  if ( !*v55 )
    goto LABEL_182;
  favoriteChangeManager = (__int64)(*v55)->fields.servantEntity;
  if ( !favoriteChangeManager )
    goto LABEL_182;
  favoriteChangeManager = (__int64)ServantEntity__getName((ServantEntity_o *)favoriteChangeManager, v102, -1, 0LL);
  v149 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B2C41C(favoriteChangeManager, v105->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
    {
LABEL_184:
      v215 = sub_B2C454(favoriteChangeManager);
      sub_B2C400(v215, 0LL);
    }
  }
  if ( v105->max_length <= 5 )
    goto LABEL_183;
  v105->m_Items[5] = (Il2CppObject *)v149;
  sub_B2C2F8((BattleServantConfConponent_o *)&v105->m_Items[5], v149, v143, v144, v145, v146, v147, v148);
  v150 = System_String__Format_44384256(v104, v105, 0LL);
  v151 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v152 = LocalizationManager__Get((System_String_o *)StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  v153 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v154 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v154,
    (Il2CppObject *)v39,
    Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__,
    0LL);
  favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v153 )
    goto LABEL_182;
  v155 = (CommonUI_o *)v153;
  v156 = v103;
  v157 = v150;
  static_fields = BalanceConfig_TypeInfo->static_fields;
  v159 = v151;
  v160 = v152;
  v161 = v154;
LABEL_181:
  CommonUI__OpenConfirmDialog_17970624(v155, v156, v157, v159, v160, v161, static_fields->DefaultFontSize, 0, 0, 0LL);
LABEL_48:
  v65 = this->fields.favoriteChangeManager;
  v66 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B2C42C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v66,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0LL);
  if ( !v65 )
    goto LABEL_182;
  FavoriteChangeListViewManager__SetMode(v65, 2, v66, 0LL);
}


void __fastcall FavoriteChangeComponent__Open(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_GameObject_o *v12; // x20
  const MethodInfo *v13; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v15; // x21

  if ( (byte_41885EF & 1) == 0 )
  {
    sub_B2C35C(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_FavoriteChangeComponent_OnClickServant__, v3);
    byte_41885EF = 1;
  }
  FavoriteChangeComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.cancelCallback, 0LL, v6, v7, v8, v9, v10, v11);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_19533564((TitleInfoControl_o *)gameObject, 1, 50, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_10;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v12
    || (UnityEngine_GameObject__SetActive(v12, (unsigned __int8)gameObject & 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.favoriteChangeManager) == 0LL)
    || (FavoriteChangeListViewManager__CreateList((FavoriteChangeListViewManager_o *)gameObject, 0LL),
        FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v13),
        favoriteChangeManager = this->fields.favoriteChangeManager,
        v15 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B2C42C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !favoriteChangeManager) )
  {
LABEL_10:
    sub_B2C434(gameObject, v5);
  }
  FavoriteChangeListViewManager__SetMode(favoriteChangeManager, 2, v15, 0LL);
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
  __int64 v14; // x1
  struct UserServantEntity_o *userSvtEntity; // x19
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

  if ( (byte_41885F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B2C35C(&Method_FavoriteChangeComponent_EndePushRequest__, v5);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_41885F6 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userSvtEntity = selectItem->fields.userSvtEntity;
  v16 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v16 || !userSvtEntity )
    goto LABEL_21;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v16->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
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
  v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  v24 = *(_QWORD *)&v16->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = v24;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v51, 0LL);
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v16->fields.writeMasterDataThread;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndePushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v27,
                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v49, 0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.imageLimitCount, 0LL);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.dispLimitCount, 0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.iconLimitCount, 0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v35 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v40 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
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
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  System_Int64_array *v17; // x2
  System_Int64_array *v18; // x1
  bool v19; // w4
  bool v20; // w5
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_41885FE & 1) == 0 )
  {
    sub_B2C35C(&Method_FavoriteChangeComponent_EndStatusSync__, callback);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_41885FE = 1;
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v27,
                                                                   (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v17 = unchoiceList;
        v18 = choiceList;
        v20 = 1;
        v19 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B2C434(favoriteChangeManager, callback);
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v16,
                                                                   (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v17 = unlockList;
        v18 = lockList;
        v19 = 1;
        v20 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)favoriteChangeManager,
          v18,
          v17,
          0,
          v19,
          v20,
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
    sub_B2C434(favoriteChangeManager, method);
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
  FavoriteChangeComponent_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_41885F0 & 1) == 0 )
  {
    sub_B2C35C(&Method_FavoriteChangeComponent_endCancelButton__, callback);
    sub_B2C35C(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v10);
    byte_41885F0 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.cancelCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B2C42C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
  FavoriteChangeComponent_RequestCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_endCancelButton__,
    0LL);
  FavoriteChangeComponent__StatusRequest(this, v11, v12);
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
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CommonUI_o *Instance; // x19
  System_Action_o *v21; // x20

  if ( (byte_41885F8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__, v9);
    sub_B2C35C(&FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo, v10);
    byte_41885F8 = 1;
  }
  v11 = sub_B2C42C(FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo);
  FavoriteChangeComponent___c__DisplayClass37_0___ctor((FavoriteChangeComponent___c__DisplayClass37_0_o *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = questId,
        *(_QWORD *)(v11 + 24) = this,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v11 + 24),
          (System_Int32_array **)this,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        *(_BYTE *)(v11 + 32) = isNeedSort,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v11,
          Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_B2C434(v12, v13);
  }
  CommonUI__CloseServantStatusDialog(Instance, v21, 0LL);
}


void __fastcall FavoriteChangeComponent__dispSvtList(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v3);
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
  FavoriteChangeListViewManager_CallbackFunc_o *v8; // x21
  System_Action_o *cancelCallback; // x0

  if ( (byte_41885F1 & 1) == 0 )
  {
    sub_B2C35C(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_B2C35C(&Method_FavoriteChangeComponent_OnClickServant__, v5);
    byte_41885F1 = 1;
  }
  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, 0LL),
          v7 = this->fields.favoriteChangeManager,
          v8 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B2C42C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
          FavoriteChangeListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
            0LL),
          !v7) )
    {
LABEL_11:
      sub_B2C434(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode(v7, 2, v8, 0LL);
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
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_41885FB & 1) == 0 )
  {
    sub_B2C35C(&Method_FavoriteChangeComponent_EndClickTabChoice__, method);
    sub_B2C35C(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_41885FB = 1;
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
        v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B2C42C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabChoice__,
          0LL);
        FavoriteChangeComponent__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B2C42C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabChoice__,
        0LL);
      FavoriteChangeComponent__StatusRequest(this, v9, v10);
    }
    FavoriteChangeComponent__setModeTabKind(this, 2, v5);
  }
}


void __fastcall FavoriteChangeComponent__onClickLockTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_41885FA & 1) == 0 )
  {
    sub_B2C35C(&Method_FavoriteChangeComponent_EndClickTabLock__, method);
    sub_B2C35C(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_41885FA = 1;
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
        v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B2C42C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabLock__,
          0LL);
        FavoriteChangeComponent__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B2C42C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabLock__,
        0LL);
      FavoriteChangeComponent__StatusRequest(this, v9, v10);
    }
    FavoriteChangeComponent__setModeTabKind(this, 1, v5);
  }
}


void __fastcall FavoriteChangeComponent__onClickNormalTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FavoriteChangeComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_41885F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_FavoriteChangeComponent_EndClickTabNormal__, method);
    sub_B2C35C(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_41885F9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B2C42C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabNormal__,
      0LL);
    FavoriteChangeComponent__StatusRequest(this, v5, v6);
  }
}


void __fastcall FavoriteChangeComponent__onClickPushTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FavoriteChangeComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_41885FC & 1) == 0 )
  {
    sub_B2C35C(&Method_FavoriteChangeComponent_EndClickTabPush__, method);
    sub_B2C35C(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_41885FC = 1;
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
    v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B2C42C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabPush__,
      0LL);
    FavoriteChangeComponent__StatusRequest(this, v5, v6);
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
  __int64 v14; // x1
  struct UserServantEntity_o *userSvtEntity; // x19
  DataManager_o *v16; // x22
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x23
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  __int128 v22; // q1
  __int64 v23; // x8
  NetworkManager_ResultCallbackFunc_o *v24; // x22
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v26; // q0
  CardFavoriteRequest_o *v27; // x20
  int32_t v28; // w26
  int32_t v29; // w27
  int32_t v30; // w28
  bool IsLock; // w22
  char v32; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w21
  int32_t randomSettingOwn; // w24
  int32_t v36; // w0
  __int64 v37; // x8
  int32_t randomSettingSupport; // w19
  int32_t v39; // [xsp+50h] [xbp-E0h]
  int32_t v40; // [xsp+54h] [xbp-DCh]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-D8h]
  int64_t v42; // [xsp+60h] [xbp-D0h]
  __int64 v43; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_41885F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B2C35C(&Method_FavoriteChangeComponent_EndCardFavoriteRequest__, v5);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_41885F4 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userSvtEntity = selectItem->fields.userSvtEntity;
  v16 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v16 || !userSvtEntity )
    goto LABEL_21;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v16->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v47.fields.currentCryptoKey = v20;
  *(_QWORD *)&v47.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v47, 0LL);
  if ( !v17 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v23 = *(_QWORD *)&v16->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v46.fields.fakeValue = v22;
  v43 = v23;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v45 = v46;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v45, 0LL);
  v24 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v24,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v24,
                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v27 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v26;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v44, 0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.imageLimitCount, 0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.dispLimitCount, 0LL);
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.iconLimitCount, 0LL);
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v32 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v37 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v48.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v36;
  *(_QWORD *)&v48.fields.currentCryptoKey = v37;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v48, 0LL);
  if ( !v27 )
LABEL_21:
    sub_B2C434(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v27,
    targetUsrSVtId,
    v40,
    v39,
    v28,
    v29,
    v30,
    1,
    IsLock,
    v32 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v43 == v42,
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
  System_String_o **v21; // x8
  UILabel_o *infoLb; // x21
  struct FavoriteChangeListViewManager_o *v23; // x8
  struct FavoriteChangeListViewManager_o **p_favoriteChangeManager; // x19
  struct FavoriteChangeListViewManager_o *favoriteChangeManager; // t1
  UILabel_o *v26; // x21
  __int64 *v27; // x8
  struct FavoriteChangeListViewManager_o *v28; // x8
  struct FavoriteChangeListViewManager_o *v29; // t1

  if ( (byte_41885FD & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_B2C35C(&StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_B2C35C(&StringLiteral_17137/*"button_push_reg"*/, v6);
    sub_B2C35C(&StringLiteral_17138/*"button_push_unreg"*/, v7);
    sub_B2C35C(&StringLiteral_17123/*"button_allchoice_reg"*/, v8);
    sub_B2C35C(&StringLiteral_17126/*"button_alllock_unreg"*/, v9);
    sub_B2C35C(&StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v10);
    sub_B2C35C(&StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11);
    sub_B2C35C(&StringLiteral_17139/*"button_select_reg"*/, v12);
    sub_B2C35C(&StringLiteral_17140/*"button_select_unreg"*/, v13);
    sub_B2C35C(&StringLiteral_17125/*"button_alllock_reg"*/, v14);
    sub_B2C35C(&StringLiteral_17124/*"button_allchoice_unreg"*/, v15);
    sub_B2C35C(&StringLiteral_7030/*"HEADER_MSG_FAVORITE"*/, v16);
    byte_41885FD = 1;
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
    v18 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17140/*"button_select_unreg"*/ : &StringLiteral_17139/*"button_select_reg"*/);
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
    v19 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17125/*"button_alllock_reg"*/ : &StringLiteral_17126/*"button_alllock_unreg"*/);
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
    v20 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17123/*"button_allchoice_reg"*/ : &StringLiteral_17124/*"button_allchoice_unreg"*/);
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
      sub_B2C434(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v21 = (System_String_o **)&StringLiteral_17137/*"button_push_reg"*/;
    else
      v21 = (System_String_o **)&StringLiteral_17138/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v21, 0LL);
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
                                                       (System_String_o *)StringLiteral_7030/*"HEADER_MSG_FAVORITE"*/,
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
        v27 = &StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_47;
      case 2:
        v26 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v27 = &StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_47;
      case 3:
        v26 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v27 = &StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
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
        FavoriteChangeListViewManager__SetMode_23100424((FavoriteChangeListViewManager_o *)normalTabButton, 2, 0LL);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41841C6 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isRequest);
    byte_41841C6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall FavoriteChangeComponent_RequestCallbackFunc__EndInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  FavoriteChangeComponent_RequestCallbackFunc_o *v20; // x8
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
  FavoriteChangeComponent_RequestCallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (FavoriteChangeComponent_RequestCallbackFunc_o **)(v4 + 32);
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
  CommonUI_o *v9; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_41841C2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__, v6);
    byte_41841C2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B2C2F8(&this->fields.__9__1, _9__1);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_17971588(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B2C434(Instance, v8);
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
    sub_B2C434(0LL, method);
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
  CommonUI_o *v9; // x20
  System_Action_o *_9__3; // x22

  if ( (byte_41841C3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__, v6);
    byte_41841C3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = Instance;
  if ( isDecide )
  {
    _9__3 = this->fields.__9__3;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__,
        0LL);
      this->fields.__9__3 = _9__3;
      sub_B2C2F8(&this->fields.__9__3, _9__3);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_17971588(v9, _9__3, 0LL);
      return;
    }
LABEL_10:
    sub_B2C434(Instance, v8);
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
  if ( (byte_41841C4 & 1) == 0 )
  {
    this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)sub_B2C35C(&StringLiteral_9945/*"OnClickFavoriteDecide"*/, method);
    byte_41841C4 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)_4__this->fields.favoriteChangeManager) == 0LL )
  {
    sub_B2C434(this, method);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)this,
    (System_String_o *)StringLiteral_9945/*"OnClickFavoriteDecide"*/,
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
  struct FavoriteChangeComponent_o *v7; // x8
  struct FavoriteChangeComponent_o *v8; // x20
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x19
  __int64 v10; // x21
  __int64 v11; // x9

  if ( (byte_41841C5 & 1) == 0 )
  {
    sub_B2C35C(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_FavoriteChangeComponent_OnClickServant__, v3);
    sub_B2C35C(&StringLiteral_3043/*"CLICK_BACK"*/, v4);
    byte_41841C5 = 1;
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
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3043/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_B2C434(_4__this, method);
  }
  if ( !_4__this->fields.favoriteChangeManager )
    goto LABEL_18;
  FavoriteChangeListViewManager__ModifyItem(_4__this->fields.favoriteChangeManager, _4__this->fields.usrSvtId, 0LL);
  if ( this->fields.isNeedSort )
  {
    v7 = this->fields.__4__this;
    if ( !v7 )
      goto LABEL_18;
    _4__this = (FavoriteChangeComponent_o *)v7->fields.favoriteChangeManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_18;
  favoriteChangeManager = v8->fields.favoriteChangeManager;
  v10 = sub_B2C42C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  v11 = *(_QWORD *)Method_FavoriteChangeComponent_OnClickServant__;
  *(_QWORD *)(v10 + 40) = Method_FavoriteChangeComponent_OnClickServant__;
  *(_QWORD *)(v10 + 16) = v11;
  *(_QWORD *)(v10 + 32) = v8;
  sub_B2C2F8(v10 + 32, v8);
  if ( !favoriteChangeManager )
    goto LABEL_18;
  FavoriteChangeListViewManager__SetMode(
    favoriteChangeManager,
    2,
    (FavoriteChangeListViewManager_CallbackFunc_o *)v10,
    0LL);
}