void __fastcall FavoriteChangeComponent___ctor(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FavoriteChangeComponent__EndCardFavoriteRequest(
        FavoriteChangeComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  FavoriteChangeListViewManager_o *v5; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v6; // x21

  if ( (byte_435223C & 1) == 0 )
  {
    sub_B70694(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_435223C = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, 0LL),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL)
    || (ListViewManager__SortItem((ListViewManager_o *)favoriteChangeManager, -1, 0, -1, 0LL),
        v5 = this->fields.favoriteChangeManager,
        v6 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B70764(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !v5) )
  {
    sub_B7076C(favoriteChangeManager, result);
  }
  FavoriteChangeListViewManager__SetMode(v5, 2, v6, 0LL);
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
      sub_B7076C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_22000680(favoriteChangeManager, 2, 0LL);
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
      sub_B7076C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_22000680(favoriteChangeManager, 2, 0LL);
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
      sub_B7076C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_22000680(favoriteChangeManager, 2, 0LL);
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
      sub_B7076C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_22000680(favoriteChangeManager, 2, 0LL);
  }
  FavoriteChangeComponent__setModeTabKind(this, 3, method);
}


void __fastcall FavoriteChangeComponent__EndCloseConfirmSelectFavorite(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_435223A & 1) == 0 )
  {
    sub_B70694(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_435223A = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  v4 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B70764(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0LL);
  if ( !favoriteChangeManager )
    sub_B7076C(v5, v6);
  FavoriteChangeListViewManager__SetMode(favoriteChangeManager, 2, v4, 0LL);
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
    sub_B70630(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    FavoriteChangeComponent_RequestCallbackFunc__Invoke(v9, 1, 0LL);
  }
}


void __fastcall FavoriteChangeComponent__EndePushRequest(
        FavoriteChangeComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  FavoriteChangeListViewManager_o *v5; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v6; // x21

  if ( (byte_435223E & 1) == 0 )
  {
    sub_B70694(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_435223E = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__UpdateDisplayState(favoriteChangeManager, 1, 0LL),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL)
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, 0LL),
        v5 = this->fields.favoriteChangeManager,
        v6 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B70764(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !v5) )
  {
    sub_B7076C(favoriteChangeManager, result);
  }
  FavoriteChangeListViewManager__SetMode(v5, 2, v6, 0LL);
}


void __fastcall FavoriteChangeComponent__Init(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4352235 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_7128/*"HEADER_MSG_FAVORITE"*/);
    byte_4352235 = 1;
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
                                                               (System_String_o *)StringLiteral_7128/*"HEADER_MSG_FAVORITE"*/,
                                                               0LL);
  if ( !infoLb )
LABEL_9:
    sub_B7076C(favoriteChangeManager, method);
  UILabel__set_text(infoLb, (System_String_o *)favoriteChangeManager, 0LL);
  FavoriteChangeComponent__setModeTabKind(this, 0, v5);
}


void __fastcall FavoriteChangeComponent__OnClickScaleChange(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4352246 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352246 = 1;
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
      sub_B7076C(0LL, v3);
    FavoriteChangeListViewManager__ChangeIconScale(favoriteChangeManager, 0LL);
    FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v5);
  }
}


void __fastcall FavoriteChangeComponent__OnClickServant(
        FavoriteChangeComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 favoriteChangeManager; // x0
  const MethodInfo *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  FavoriteChangeListViewItem_o **v23; // x21
  __int64 v24; // x8
  __int128 v25; // q1
  const MethodInfo *v26; // x2
  int32_t tabModeKind; // w8
  int32_t v28; // w0
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v30; // x20
  ServantStatusDialog_ResultDelegate_o *v31; // x22
  SoundManager_c *v32; // x0
  FavoriteChangeListViewManager_o *v33; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v34; // x21
  ServantEntity_o *servantEntity; // x22
  int64_t v36; // x23
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v38; // x23
  __int64 v39; // x24
  __int64 v40; // x25
  ServantEntity_o *v41; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x23
  int32_t v43; // w24
  FavoriteChangeListViewItem_o *v44; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v45; // x9
  int32_t v46; // w27
  int32_t svtId; // w24
  int32_t v48; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v50; // x23
  UserServantEntity_o *v51; // x0
  UserServantEntity_o *v52; // x0
  System_String_o *v53; // x23
  const MethodInfo *v54; // x2
  int64_t v55; // x22
  struct UserServantEntity_o *v56; // x8
  __int128 v57; // q0
  UserServantEntity_o *v58; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v59; // x22
  __int64 v60; // x23
  __int64 v61; // x24
  ServantEntity_o *v62; // x26
  ServantLimitImageMaster_o *v63; // x22
  int32_t v64; // w23
  FavoriteChangeListViewItem_o *v65; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v66; // x9
  int32_t v67; // w28
  int32_t v68; // w23
  int32_t v69; // w0
  int32_t v70; // w24
  System_String_o *v71; // x22
  System_String_o *v72; // x23
  System_Object_array *v73; // x25
  int32_t v74; // w27
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x27
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x27
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **v95; // x26
  int32_t v96; // w0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x26
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x26
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x21
  System_String_o *v118; // x21
  System_String_o *v119; // x23
  System_String_o *v120; // x24
  WebViewManager_o *v121; // x25
  CommonConfirmDialog_ClickDelegate_o *v122; // x26
  CommonUI_o *v123; // x0
  System_String_o *v124; // x1
  System_String_o *v125; // x2
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v127; // x3
  System_String_o *v128; // x4
  CommonConfirmDialog_ClickDelegate_o *v129; // x5
  System_String_o *v130; // x0
  System_String_o *v131; // x28
  System_Object_array *v132; // x23
  int32_t Rarity; // w26
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_Int32_array **v140; // x26
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Int32_array **v147; // x26
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  System_Int32_array **v154; // x25
  int32_t v155; // w0
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  System_Int32_array **v162; // x21
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  System_Int32_array **v169; // x21
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  System_Int32_array **v176; // x21
  System_String_o *v177; // x21
  System_String_o *v178; // x22
  System_String_o *v179; // x23
  WebViewManager_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v181; // x25
  __int64 v182; // x0
  __int64 v183; // x0
  System_String_o *title; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v185; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v186; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v187; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // 0:x0.16

  if ( (byte_4352239 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&Method_FavoriteChangeComponent_OnClickServant__);
    sub_B70694(&Method_FavoriteChangeComponent_closeSvtDetail__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Rarity_TypeInfo);
    sub_B70694(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__);
    sub_B70694(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__);
    sub_B70694(&FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo);
    sub_B70694(&StringLiteral_12156/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/);
    sub_B70694(&StringLiteral_12154/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/);
    sub_B70694(&StringLiteral_12167/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_B70694(&StringLiteral_12165/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_B70694(&StringLiteral_12166/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_B70694(&StringLiteral_12153/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/);
    sub_B70694(&StringLiteral_12157/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_12155/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/);
    sub_B70694(&StringLiteral_12168/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4352239 = 1;
  }
  v7 = sub_B70764(FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo);
  FavoriteChangeComponent___c__DisplayClass31_0___ctor((FavoriteChangeComponent___c__DisplayClass31_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_182;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  if ( (n & 0x80000000) != 0 )
  {
    v22 = 0LL;
  }
  else
  {
    favoriteChangeManager = (__int64)this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_182;
    v22 = (System_Int32_array **)FavoriteChangeListViewManager__GetItem(
                                   (FavoriteChangeListViewManager_o *)favoriteChangeManager,
                                   n,
                                   0LL);
  }
  *(_QWORD *)(v7 + 24) = v22;
  v23 = (FavoriteChangeListViewItem_o **)(v7 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), v22, v16, v17, v18, v19, v20, v21);
  if ( !*(_QWORD *)(v7 + 24) )
    goto LABEL_182;
  v24 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 112LL);
  if ( !v24 )
    goto LABEL_182;
  v25 = *(_OWORD *)(v24 + 32);
  *(_OWORD *)&v187.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
  *(_OWORD *)&v187.fields.fakeValue = v25;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v186 = v187;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v186, 0LL);
  this->fields.usrSvtId = favoriteChangeManager;
  if ( kind == 1 )
  {
    FavoriteChangeComponent__setFavoriteRequest(this, *v23, v26);
    return;
  }
  if ( kind == 2 )
  {
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v23 )
    {
      userSvtEntity = (*v23)->fields.userSvtEntity;
      v30 = (CommonUI_o *)favoriteChangeManager;
      v31 = (ServantStatusDialog_ResultDelegate_o *)sub_B70764(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v31,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_closeSvtDetail__,
        0LL);
      if ( v30 )
      {
        CommonUI__OpenServantStatusDialog_17915556(v30, 0, userSvtEntity, v31, 0, 0LL);
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
    if ( !*v23 )
      goto LABEL_182;
    (*v23)->fields.isSwapChoice ^= 1u;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v28 = 0;
    goto LABEL_47;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v23 )
      goto LABEL_182;
    (*v23)->fields.isSwapLock ^= 1u;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v28 = 11;
    goto LABEL_47;
  }
  favoriteChangeManager = (__int64)*v23;
  if ( !*v23 )
    goto LABEL_182;
  if ( tabModeKind != 3 )
  {
    if ( FavoriteChangeListViewItem__get_IsCanNotSelect((FavoriteChangeListViewItem_o *)favoriteChangeManager, v9) )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
        || SoundManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_46;
      }
      v32 = SoundManager_TypeInfo;
LABEL_45:
      j_il2cpp_runtime_class_init_0(v32);
LABEL_46:
      v28 = 2;
LABEL_47:
      SoundManager__playSystemSe(v28, 0LL);
      goto LABEL_48;
    }
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( *v23 )
    {
      servantEntity = (*v23)->fields.servantEntity;
      favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
      if ( favoriteChangeManager )
      {
        v36 = *(_QWORD *)(favoriteChangeManager + 112);
        favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( favoriteChangeManager )
        {
          favoriteChangeManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)favoriteChangeManager,
                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( favoriteChangeManager )
          {
            Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)favoriteChangeManager,
                       v36,
                       (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( favoriteChangeManager )
            {
              favoriteChangeManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)favoriteChangeManager,
                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( Entity )
              {
                v38 = (DataMasterBase_WarMaster__WarEntity__int__o *)favoriteChangeManager;
                v40 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
                v39 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v188.fields.currentCryptoKey = v40;
                *(_QWORD *)&v188.fields.fakeValue = v39;
                favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v188, 0LL);
                if ( v38 )
                {
                  v41 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v38,
                                             favoriteChangeManager,
                                             (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(Entity->fields.svtId, 0LL);
                  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                            Entity->fields.limitCount,
                                            0LL);
                  if ( Master_WarQuestSelectionMaster )
                  {
                    favoriteChangeManager = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                              Master_WarQuestSelectionMaster,
                                              v43,
                                              favoriteChangeManager,
                                              0LL);
                    v44 = *v23;
                    if ( *v23 )
                    {
                      v45 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v44->fields.userSvtEntity;
                      if ( v45 )
                      {
                        v46 = favoriteChangeManager;
                        svtId = v44->fields.svtId;
                        v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v45[6], 0LL);
                        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                       Master_WarQuestSelectionMaster,
                                                       svtId,
                                                       v48,
                                                       0LL);
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        favoriteChangeManager = (__int64)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12157/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/,
                                                           0LL);
                        if ( *v23 )
                        {
                          v50 = (System_String_o *)favoriteChangeManager;
                          v51 = (*v23)->fields.userSvtEntity;
                          title = v50;
                          if ( !v51 )
                            goto LABEL_79;
                          favoriteChangeManager = UserServantEntity__IsEventJoin(v51, 0LL);
                          if ( (favoriteChangeManager & 1) == 0 )
                            goto LABEL_79;
                          if ( !*v23 )
                            goto LABEL_182;
                          v52 = (*v23)->fields.userSvtEntity;
                          if ( !v52 || !UserServantEntity__IsNoPeriod(v52, 0LL) )
                          {
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12155/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
                          }
                          else
                          {
LABEL_79:
                            v53 = (System_String_o *)StringLiteral_1/*""*/;
                          }
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v130 = LocalizationManager__Get((System_String_o *)StringLiteral_12156/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
                          v131 = System_String__Concat_44758168(v130, v53, 0LL);
                          v132 = (System_Object_array *)sub_B706AC(object___TypeInfo, 6LL);
                          Rarity = UserServantEntity__getRarity(Entity, 0LL);
                          if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !Rarity_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                          }
                          favoriteChangeManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
                          if ( v132 )
                          {
                            v140 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B70754(
                                                        favoriteChangeManager,
                                                        v132->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( !v132->max_length )
                              goto LABEL_183;
                            v132->m_Items[0] = (Il2CppObject *)v140;
                            sub_B70630(
                              (BattleServantConfConponent_o *)v132->m_Items,
                              v140,
                              v134,
                              v135,
                              v136,
                              v137,
                              v138,
                              v139);
                            if ( !v41 )
                              goto LABEL_182;
                            favoriteChangeManager = (__int64)ServantEntity__getClassName(v41, 0LL);
                            v147 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B70754(
                                                        favoriteChangeManager,
                                                        v132->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v132->max_length <= 1 )
                              goto LABEL_183;
                            v132->m_Items[1] = (Il2CppObject *)v147;
                            sub_B70630(
                              (BattleServantConfConponent_o *)&v132->m_Items[1],
                              v147,
                              v141,
                              v142,
                              v143,
                              v144,
                              v145,
                              v146);
                            favoriteChangeManager = (__int64)ServantEntity__getName(v41, v46, -1, 0LL);
                            v154 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B70754(
                                                        favoriteChangeManager,
                                                        v132->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v132->max_length <= 2 )
                              goto LABEL_183;
                            v132->m_Items[2] = (Il2CppObject *)v154;
                            sub_B70630(
                              (BattleServantConfConponent_o *)&v132->m_Items[2],
                              v154,
                              v148,
                              v149,
                              v150,
                              v151,
                              v152,
                              v153);
                            if ( !*v23 )
                              goto LABEL_182;
                            favoriteChangeManager = (__int64)(*v23)->fields.userSvtEntity;
                            if ( !favoriteChangeManager )
                              goto LABEL_182;
                            v155 = UserServantEntity__getRarity((UserServantEntity_o *)favoriteChangeManager, 0LL);
                            favoriteChangeManager = (__int64)Rarity__getRarityType(v155, 0LL);
                            v162 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B70754(
                                                        favoriteChangeManager,
                                                        v132->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v132->max_length <= 3 )
                              goto LABEL_183;
                            v132->m_Items[3] = (Il2CppObject *)v162;
                            sub_B70630(
                              (BattleServantConfConponent_o *)&v132->m_Items[3],
                              v162,
                              v156,
                              v157,
                              v158,
                              v159,
                              v160,
                              v161);
                            if ( !servantEntity )
                              goto LABEL_182;
                            favoriteChangeManager = (__int64)ServantEntity__getClassName(servantEntity, 0LL);
                            v169 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B70754(
                                                        favoriteChangeManager,
                                                        v132->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v132->max_length <= 4 )
                              goto LABEL_183;
                            v132->m_Items[4] = (Il2CppObject *)v169;
                            sub_B70630(
                              (BattleServantConfConponent_o *)&v132->m_Items[4],
                              v169,
                              v163,
                              v164,
                              v165,
                              v166,
                              v167,
                              v168);
                            favoriteChangeManager = (__int64)ServantEntity__getName(
                                                               servantEntity,
                                                               ServantLimitCountSealAfter,
                                                               -1,
                                                               0LL);
                            v176 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B70754(
                                                        favoriteChangeManager,
                                                        v132->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v132->max_length <= 5 )
                            {
LABEL_183:
                              v182 = sub_B70798(favoriteChangeManager);
                              sub_B70738(v182, 0LL);
                            }
                            v132->m_Items[5] = (Il2CppObject *)v176;
                            sub_B70630(
                              (BattleServantConfConponent_o *)&v132->m_Items[5],
                              v176,
                              v170,
                              v171,
                              v172,
                              v173,
                              v174,
                              v175);
                            v177 = System_String__Format_44836892(v131, v132, 0LL);
                            v178 = LocalizationManager__Get((System_String_o *)StringLiteral_12154/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                            v179 = LocalizationManager__Get((System_String_o *)StringLiteral_12153/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v181 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v181,
                              (Il2CppObject *)v7,
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
                              v124 = title;
                              v123 = (CommonUI_o *)Instance;
                              v125 = v177;
                              static_fields = BalanceConfig_TypeInfo->static_fields;
                              v127 = v178;
                              v128 = v179;
                              v129 = v181;
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
    sub_B7076C(favoriteChangeManager, v9);
  }
  if ( *(_QWORD *)(favoriteChangeManager + 112) )
  {
    if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(favoriteChangeManager + 112), 0LL) )
    {
LABEL_38:
      v32 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
        || SoundManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_46;
      }
      goto LABEL_45;
    }
    favoriteChangeManager = (__int64)*v23;
    if ( !*v23 )
      goto LABEL_182;
  }
  if ( FavoriteChangeListViewItem__get_IsHerioneReave((FavoriteChangeListViewItem_o *)favoriteChangeManager, v9) )
    goto LABEL_38;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !favoriteChangeManager )
    goto LABEL_182;
  v55 = *(_QWORD *)(favoriteChangeManager + 120);
  if ( !v55 )
  {
LABEL_91:
    FavoriteChangeComponent__PushRequest(this, *v23, v54);
    goto LABEL_48;
  }
  if ( !*v23 )
    goto LABEL_182;
  v56 = (*v23)->fields.userSvtEntity;
  if ( !v56 )
    goto LABEL_182;
  v57 = *(_OWORD *)&v56->fields.id.fields.fakeValue;
  *(_OWORD *)&v187.fields.currentCryptoKey = *(_OWORD *)&v56->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v187.fields.fakeValue = v57;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v185 = v187;
  if ( v55 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v185, 0LL) )
    goto LABEL_91;
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_182;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !favoriteChangeManager )
    goto LABEL_182;
  v58 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)favoriteChangeManager,
          v55,
          (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_182;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v58 )
    goto LABEL_182;
  v59 = (DataMasterBase_WarMaster__WarEntity__int__o *)favoriteChangeManager;
  v61 = *(_QWORD *)&v58->fields.svtId.fields.currentCryptoKey;
  v60 = *(_QWORD *)&v58->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v189.fields.currentCryptoKey = v61;
  *(_QWORD *)&v189.fields.fakeValue = v60;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v189, 0LL);
  if ( !v59 )
    goto LABEL_182;
  v62 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v59,
                             favoriteChangeManager,
                             (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v63 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v58->fields.svtId, 0LL);
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                            v58->fields.limitCount,
                            0LL);
  if ( !v63 )
    goto LABEL_182;
  favoriteChangeManager = ServantLimitImageMaster__GetServantLimitCountSealAfter(v63, v64, favoriteChangeManager, 0LL);
  v65 = *v23;
  if ( !*v23 )
    goto LABEL_182;
  v66 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v65->fields.userSvtEntity;
  if ( !v66 )
    goto LABEL_182;
  v67 = favoriteChangeManager;
  v68 = v65->fields.svtId;
  v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v66[6], 0LL);
  v70 = ServantLimitImageMaster__GetServantLimitCountSealAfter(v63, v68, v69, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_12168/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_12167/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v73 = (System_Object_array *)sub_B706AC(object___TypeInfo, 6LL);
  v74 = UserServantEntity__getRarity(v58, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v74, 0LL);
  if ( !v73 )
    goto LABEL_182;
  v81 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B70754(favoriteChangeManager, v73->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( !v73->max_length )
    goto LABEL_183;
  v73->m_Items[0] = (Il2CppObject *)v81;
  sub_B70630((BattleServantConfConponent_o *)v73->m_Items, v81, v75, v76, v77, v78, v79, v80);
  if ( !v62 )
    goto LABEL_182;
  favoriteChangeManager = (__int64)ServantEntity__getClassName(v62, 0LL);
  v88 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B70754(favoriteChangeManager, v73->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( v73->max_length <= 1 )
    goto LABEL_183;
  v73->m_Items[1] = (Il2CppObject *)v88;
  sub_B70630((BattleServantConfConponent_o *)&v73->m_Items[1], v88, v82, v83, v84, v85, v86, v87);
  favoriteChangeManager = (__int64)ServantEntity__getName(v62, v67, -1, 0LL);
  v95 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B70754(favoriteChangeManager, v73->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( v73->max_length <= 2 )
    goto LABEL_183;
  v73->m_Items[2] = (Il2CppObject *)v95;
  sub_B70630((BattleServantConfConponent_o *)&v73->m_Items[2], v95, v89, v90, v91, v92, v93, v94);
  if ( !*v23 )
    goto LABEL_182;
  favoriteChangeManager = (__int64)(*v23)->fields.userSvtEntity;
  if ( !favoriteChangeManager )
    goto LABEL_182;
  v96 = UserServantEntity__getRarity((UserServantEntity_o *)favoriteChangeManager, 0LL);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v96, 0LL);
  v103 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B70754(favoriteChangeManager, v73->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( v73->max_length <= 3 )
    goto LABEL_183;
  v73->m_Items[3] = (Il2CppObject *)v103;
  sub_B70630((BattleServantConfConponent_o *)&v73->m_Items[3], v103, v97, v98, v99, v100, v101, v102);
  if ( !*v23 )
    goto LABEL_182;
  favoriteChangeManager = (__int64)(*v23)->fields.servantEntity;
  if ( !favoriteChangeManager )
    goto LABEL_182;
  favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)favoriteChangeManager, 0LL);
  v110 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B70754(favoriteChangeManager, v73->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( v73->max_length <= 4 )
    goto LABEL_183;
  v73->m_Items[4] = (Il2CppObject *)v110;
  sub_B70630((BattleServantConfConponent_o *)&v73->m_Items[4], v110, v104, v105, v106, v107, v108, v109);
  if ( !*v23 )
    goto LABEL_182;
  favoriteChangeManager = (__int64)(*v23)->fields.servantEntity;
  if ( !favoriteChangeManager )
    goto LABEL_182;
  favoriteChangeManager = (__int64)ServantEntity__getName((ServantEntity_o *)favoriteChangeManager, v70, -1, 0LL);
  v117 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B70754(favoriteChangeManager, v73->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
    {
LABEL_184:
      v183 = sub_B7078C(favoriteChangeManager);
      sub_B70738(v183, 0LL);
    }
  }
  if ( v73->max_length <= 5 )
    goto LABEL_183;
  v73->m_Items[5] = (Il2CppObject *)v117;
  sub_B70630((BattleServantConfConponent_o *)&v73->m_Items[5], v117, v111, v112, v113, v114, v115, v116);
  v118 = System_String__Format_44836892(v72, v73, 0LL);
  v119 = LocalizationManager__Get((System_String_o *)StringLiteral_12166/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v120 = LocalizationManager__Get((System_String_o *)StringLiteral_12165/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  v121 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v122 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v122,
    (Il2CppObject *)v7,
    Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__,
    0LL);
  favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v121 )
    goto LABEL_182;
  v123 = (CommonUI_o *)v121;
  v124 = v71;
  v125 = v118;
  static_fields = BalanceConfig_TypeInfo->static_fields;
  v127 = v119;
  v128 = v120;
  v129 = v122;
LABEL_181:
  CommonUI__OpenConfirmDialog_17903560(v123, v124, v125, v127, v128, v129, static_fields->DefaultFontSize, 0, 0, 0LL);
LABEL_48:
  v33 = this->fields.favoriteChangeManager;
  v34 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B70764(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v34,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0LL);
  if ( !v33 )
    goto LABEL_182;
  FavoriteChangeListViewManager__SetMode(v33, 2, v34, 0LL);
}


void __fastcall FavoriteChangeComponent__Open(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_GameObject_o *v11; // x20
  const MethodInfo *v12; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v14; // x21

  if ( (byte_4352236 & 1) == 0 )
  {
    sub_B70694(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4352236 = 1;
  }
  FavoriteChangeComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.cancelCallback, 0LL, v5, v6, v7, v8, v9, v10);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_18518488((TitleInfoControl_o *)gameObject, 1, 50, 0, 0LL);
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
        v14 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B70764(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !favoriteChangeManager) )
  {
LABEL_10:
    sub_B7076C(gameObject, v4);
  }
  FavoriteChangeListViewManager__SetMode(favoriteChangeManager, 2, v14, 0LL);
  this->fields.state = 2;
}


void __fastcall FavoriteChangeComponent__PushRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userSvtEntity; // x19
  DataManager_o *v8; // x23
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v16; // x8
  int64_t v17; // x0
  __int128 v18; // q0
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v21; // q0
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w27
  int32_t v24; // w28
  int32_t v25; // w21
  bool IsLock; // w23
  char v27; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v31; // w0
  __int64 v32; // x8
  int32_t randomSettingSupport; // w19
  int32_t v34; // [xsp+50h] [xbp-110h]
  int32_t v35; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  __int64 v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_435223D & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_FavoriteChangeComponent_EndePushRequest__);
    sub_B70694(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_435223D = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userSvtEntity = selectItem->fields.userSvtEntity;
  v8 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v8 || !userSvtEntity )
    goto LABEL_21;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v8->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v45, 0LL);
  if ( !v9 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  v16 = *(_QWORD *)&v8->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = v16;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v43, 0LL);
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v8->fields.writeMasterDataThread;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndePushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v19,
                                        (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v41, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(userSvtEntity->fields.imageLimitCount, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(userSvtEntity->fields.dispLimitCount, 0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(userSvtEntity->fields.iconLimitCount, 0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v27 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v32 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v31;
  *(_QWORD *)&v46.fields.currentCryptoKey = v32;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v46, 0LL);
  if ( !v22 )
LABEL_21:
    sub_B7076C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    v35,
    v34,
    v23,
    v24,
    v25,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v37,
    IsLock,
    v27 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != v39,
    0LL);
}


void __fastcall FavoriteChangeComponent__StatusRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeComponent_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t tabModeKind; // w8
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int64_array *v14; // x2
  System_Int64_array *v15; // x1
  bool v16; // w4
  bool v17; // w5
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_4352245 & 1) == 0 )
  {
    sub_B70694(&Method_FavoriteChangeComponent_EndStatusSync__);
    sub_B70694(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4352245 = 1;
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
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      v24 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v24,
                                                                   (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v14 = unchoiceList;
        v15 = choiceList;
        v17 = 1;
        v16 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B7076C(favoriteChangeManager, callback);
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
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v13,
                                                                   (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v14 = unlockList;
        v15 = lockList;
        v16 = 1;
        v17 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)favoriteChangeManager,
          v15,
          v14,
          0,
          v16,
          v17,
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
    sub_B7076C(favoriteChangeManager, method);
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
  FavoriteChangeComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4352237 & 1) == 0 )
  {
    sub_B70694(&Method_FavoriteChangeComponent_endCancelButton__);
    sub_B70694(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4352237 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.cancelCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B70764(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
  FavoriteChangeComponent_RequestCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_endCancelButton__,
    0LL);
  FavoriteChangeComponent__StatusRequest(this, v10, v11);
}


void __fastcall FavoriteChangeComponent__closeSvtDetail(
        FavoriteChangeComponent_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  CommonUI_o *Instance; // x19
  System_Action_o *v18; // x20

  if ( (byte_435223F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__);
    sub_B70694(&FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo);
    byte_435223F = 1;
  }
  v8 = sub_B70764(FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo);
  FavoriteChangeComponent___c__DisplayClass37_0___ctor((FavoriteChangeComponent___c__DisplayClass37_0_o *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        *(_QWORD *)(v8 + 24) = this,
        sub_B70630((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v8 + 32) = isNeedSort,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v8,
          Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_B7076C(v9, v10);
  }
  CommonUI__CloseServantStatusDialog(Instance, v18, 0LL);
}


void __fastcall FavoriteChangeComponent__dispSvtList(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent__endCancelButton(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  FavoriteChangeListViewManager_o *v6; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v7; // x21
  System_Action_o *cancelCallback; // x0

  if ( (byte_4352238 & 1) == 0 )
  {
    sub_B70694(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4352238 = 1;
  }
  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, 0LL),
          v6 = this->fields.favoriteChangeManager,
          v7 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B70764(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
          FavoriteChangeListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
            0LL),
          !v6) )
    {
LABEL_11:
      sub_B7076C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode(v6, 2, v7, 0LL);
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
  const MethodInfo *v3; // x2
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4352242 & 1) == 0 )
  {
    sub_B70694(&Method_FavoriteChangeComponent_EndClickTabChoice__);
    sub_B70694(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352242 = 1;
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
        v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B70764(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabChoice__,
          0LL);
        FavoriteChangeComponent__StatusRequest(this, v5, v6);
        return;
      }
      v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B70764(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabChoice__,
        0LL);
      FavoriteChangeComponent__StatusRequest(this, v7, v8);
    }
    FavoriteChangeComponent__setModeTabKind(this, 2, v3);
  }
}


void __fastcall FavoriteChangeComponent__onClickLockTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4352241 & 1) == 0 )
  {
    sub_B70694(&Method_FavoriteChangeComponent_EndClickTabLock__);
    sub_B70694(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352241 = 1;
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
        v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B70764(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabLock__,
          0LL);
        FavoriteChangeComponent__StatusRequest(this, v5, v6);
        return;
      }
      v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B70764(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabLock__,
        0LL);
      FavoriteChangeComponent__StatusRequest(this, v7, v8);
    }
    FavoriteChangeComponent__setModeTabKind(this, 1, v3);
  }
}


void __fastcall FavoriteChangeComponent__onClickNormalTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  FavoriteChangeComponent_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4352240 & 1) == 0 )
  {
    sub_B70694(&Method_FavoriteChangeComponent_EndClickTabNormal__);
    sub_B70694(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352240 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B70764(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabNormal__,
      0LL);
    FavoriteChangeComponent__StatusRequest(this, v3, v4);
  }
}


void __fastcall FavoriteChangeComponent__onClickPushTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  FavoriteChangeComponent_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4352243 & 1) == 0 )
  {
    sub_B70694(&Method_FavoriteChangeComponent_EndClickTabPush__);
    sub_B70694(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352243 = 1;
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
    v3 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B70764(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabPush__,
      0LL);
    FavoriteChangeComponent__StatusRequest(this, v3, v4);
  }
}


void __fastcall FavoriteChangeComponent__setFavoriteRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userSvtEntity; // x19
  DataManager_o *v8; // x22
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x23
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  __int128 v14; // q1
  __int64 v15; // x8
  NetworkManager_ResultCallbackFunc_o *v16; // x22
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v18; // q0
  CardFavoriteRequest_o *v19; // x20
  int32_t v20; // w26
  int32_t v21; // w27
  int32_t v22; // w28
  bool IsLock; // w22
  char v24; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w21
  int32_t randomSettingOwn; // w24
  int32_t v28; // w0
  __int64 v29; // x8
  int32_t randomSettingSupport; // w19
  int32_t v31; // [xsp+50h] [xbp-E0h]
  int32_t v32; // [xsp+54h] [xbp-DCh]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-D8h]
  int64_t v34; // [xsp+60h] [xbp-D0h]
  __int64 v35; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_435223B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_FavoriteChangeComponent_EndCardFavoriteRequest__);
    sub_B70694(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_435223B = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userSvtEntity = selectItem->fields.userSvtEntity;
  v8 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v8 || !userSvtEntity )
    goto LABEL_21;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v8->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v39.fields.currentCryptoKey = v12;
  *(_QWORD *)&v39.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v39, 0LL);
  if ( !v9 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v15 = *(_QWORD *)&v8->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v38.fields.fakeValue = v14;
  v35 = v15;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v37 = v38;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v37, 0LL);
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v16,
                                        (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v19 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v36.fields.fakeValue = v18;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v36, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(userSvtEntity->fields.imageLimitCount, 0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(userSvtEntity->fields.dispLimitCount, 0LL);
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(userSvtEntity->fields.iconLimitCount, 0LL);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v24 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v29 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v40.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v28;
  *(_QWORD *)&v40.fields.currentCryptoKey = v29;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v40, 0LL);
  if ( !v19 )
LABEL_21:
    sub_B7076C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v19,
    targetUsrSVtId,
    v32,
    v31,
    v20,
    v21,
    v22,
    1,
    IsLock,
    v24 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v35 == v34,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent__setModeTabKind(
        FavoriteChangeComponent_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v6; // x8
  System_String_o **v7; // x8
  System_String_o **v8; // x8
  __int64 *v9; // x8
  UILabel_o *infoLb; // x21
  struct FavoriteChangeListViewManager_o *v11; // x8
  struct FavoriteChangeListViewManager_o **p_favoriteChangeManager; // x19
  struct FavoriteChangeListViewManager_o *favoriteChangeManager; // t1
  UILabel_o *v14; // x21
  __int64 *v15; // x8
  struct FavoriteChangeListViewManager_o *v16; // x8
  struct FavoriteChangeListViewManager_o *v17; // t1

  if ( (byte_4352244 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_11900/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_B70694(&StringLiteral_17394/*"button_push_reg"*/);
    sub_B70694(&StringLiteral_17395/*"button_push_unreg"*/);
    sub_B70694(&StringLiteral_17380/*"button_allchoice_reg"*/);
    sub_B70694(&StringLiteral_17383/*"button_alllock_unreg"*/);
    sub_B70694(&StringLiteral_11898/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_B70694(&StringLiteral_11899/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_B70694(&StringLiteral_17396/*"button_select_reg"*/);
    sub_B70694(&StringLiteral_17397/*"button_select_unreg"*/);
    sub_B70694(&StringLiteral_17382/*"button_alllock_reg"*/);
    sub_B70694(&StringLiteral_17381/*"button_allchoice_unreg"*/);
    sub_B70694(&StringLiteral_7128/*"HEADER_MSG_FAVORITE"*/);
    byte_4352244 = 1;
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
    v6 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17397/*"button_select_unreg"*/ : &StringLiteral_17396/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v6, 0LL);
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
    v7 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17382/*"button_alllock_reg"*/ : &StringLiteral_17383/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v7, 0LL);
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
    v8 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17380/*"button_allchoice_reg"*/ : &StringLiteral_17381/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0LL);
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
      sub_B7076C(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v9 = &StringLiteral_17394/*"button_push_reg"*/;
    else
      v9 = &StringLiteral_17395/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v9, 0LL);
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
                                                       (System_String_o *)StringLiteral_7128/*"HEADER_MSG_FAVORITE"*/,
                                                       0LL);
        if ( !infoLb )
          goto LABEL_54;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0LL);
        favoriteChangeManager = this->fields.favoriteChangeManager;
        p_favoriteChangeManager = &this->fields.favoriteChangeManager;
        v11 = favoriteChangeManager;
        if ( !favoriteChangeManager )
          goto LABEL_54;
        v11->fields.isCanNotLongPush = 0;
        goto LABEL_51;
      case 1:
        v14 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v15 = &StringLiteral_11899/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_47;
      case 2:
        v14 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v15 = &StringLiteral_11898/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_47;
      case 3:
        v14 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v15 = &StringLiteral_11900/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_47:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v15, 0LL);
        if ( !v14 )
          goto LABEL_54;
        UILabel__set_text(v14, (System_String_o *)normalTabButton, 0LL);
        v17 = this->fields.favoriteChangeManager;
        p_favoriteChangeManager = &this->fields.favoriteChangeManager;
        v16 = v17;
        if ( !v17 )
          goto LABEL_54;
        v16->fields.isCanNotLongPush = 1;
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
        FavoriteChangeListViewManager__SetMode_22000680((FavoriteChangeListViewManager_o *)normalTabButton, 2, 0LL);
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
  sub_B70630(p_method);
}


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
  if ( (byte_434EAAD & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    byte_434EAAD = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall FavoriteChangeComponent_RequestCallbackFunc__EndInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, isRequest);
      if ( (sub_B706C4(v20) & 1) == 0 )
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
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
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
            v16 = sub_B08590(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B70744(v15, v20);
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
            v14 = sub_B08590(v19, class_0, v9);
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


void __fastcall FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__0(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_434EAA9 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__);
    byte_434EAA9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B70630(&this->fields.__9__1);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_17904524(v7, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B7076C(Instance, v6);
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
    sub_B7076C(0LL, method);
  FavoriteChangeComponent__PushRequest(_4__this, this->fields.item, 0LL);
}


void __fastcall FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__2(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__3; // x22

  if ( (byte_434EAAA & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__);
    byte_434EAAA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = Instance;
  if ( isDecide )
  {
    _9__3 = this->fields.__9__3;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__,
        0LL);
      this->fields.__9__3 = _9__3;
      sub_B70630(&this->fields.__9__3);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_17904524(v7, _9__3, 0LL);
      return;
    }
LABEL_10:
    sub_B7076C(Instance, v6);
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
  if ( (byte_434EAAB & 1) == 0 )
  {
    this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)sub_B70694(&StringLiteral_10068/*"OnClickFavoriteDecide"*/);
    byte_434EAAB = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)_4__this->fields.favoriteChangeManager) == 0LL )
  {
    sub_B7076C(this, method);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)this,
    (System_String_o *)StringLiteral_10068/*"OnClickFavoriteDecide"*/,
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
  FavoriteChangeComponent_o *_4__this; // x0
  struct FavoriteChangeComponent_o *v4; // x8
  struct FavoriteChangeComponent_o *v5; // x8
  struct FavoriteChangeComponent_o *v6; // x20
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x19
  __int64 v8; // x21
  __int64 v9; // x9

  if ( (byte_434EAAC & 1) == 0 )
  {
    sub_B70694(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FavoriteChangeComponent_OnClickServant__);
    sub_B70694(&StringLiteral_3111/*"CLICK_BACK"*/);
    byte_434EAAC = 1;
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
        v4 = this->fields.__4__this;
        if ( v4 )
        {
          _4__this = (FavoriteChangeComponent_o *)v4->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3111/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_B7076C(_4__this, method);
  }
  if ( !_4__this->fields.favoriteChangeManager )
    goto LABEL_18;
  FavoriteChangeListViewManager__ModifyItem(_4__this->fields.favoriteChangeManager, _4__this->fields.usrSvtId, 0LL);
  if ( this->fields.isNeedSort )
  {
    v5 = this->fields.__4__this;
    if ( !v5 )
      goto LABEL_18;
    _4__this = (FavoriteChangeComponent_o *)v5->fields.favoriteChangeManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_18;
  favoriteChangeManager = v6->fields.favoriteChangeManager;
  v8 = sub_B70764(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  v9 = *(_QWORD *)Method_FavoriteChangeComponent_OnClickServant__;
  *(_QWORD *)(v8 + 40) = Method_FavoriteChangeComponent_OnClickServant__;
  *(_QWORD *)(v8 + 16) = v9;
  *(_QWORD *)(v8 + 32) = v6;
  sub_B70630(v8 + 32);
  if ( !favoriteChangeManager )
    goto LABEL_18;
  FavoriteChangeListViewManager__SetMode(
    favoriteChangeManager,
    2,
    (FavoriteChangeListViewManager_CallbackFunc_o *)v8,
    0LL);
}