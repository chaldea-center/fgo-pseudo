void FavoriteChangeComponent___ctor(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FavoriteChangeComponent__EndCardFavoriteRequest(
        FavoriteChangeComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  struct FavoriteChangeListViewManager_o *v5; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4DFF799 & 1) == 0 )
  {
    sub_1CE6700(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4DFF799 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, method),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0)
    || (ListViewManager__SortItem((ListViewManager_o *)favoriteChangeManager, -1, 0, -1, 0),
        v5 = this->fields.favoriteChangeManager,
        v6 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1CE694C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0),
        !v5) )
  {
    sub_1CE6958(favoriteChangeManager, result);
  }
  v5->fields.callbackFunc = v6;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  FavoriteChangeListViewManager__SetMode_34016408(v5, 2, v13);
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeComponent__EndClickTabChoice(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0) )
    {
      sub_1CE6958(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_34016408(favoriteChangeManager, 2, v5);
  }
  FavoriteChangeComponent__setModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeComponent__EndClickTabLock(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0) )
    {
      sub_1CE6958(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_34016408(favoriteChangeManager, 2, v5);
  }
  FavoriteChangeComponent__setModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeComponent__EndClickTabNormal(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0) )
    {
      sub_1CE6958(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_34016408(favoriteChangeManager, 2, v5);
  }
  FavoriteChangeComponent__setModeTabKind(this, 0, method);
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeComponent__EndClickTabPush(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0) )
    {
      sub_1CE6958(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_34016408(favoriteChangeManager, 2, v5);
  }
  FavoriteChangeComponent__setModeTabKind(this, 3, method);
}


void FavoriteChangeComponent__EndCloseConfirmSelectFavorite(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  struct FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4DFF797 & 1) == 0 )
  {
    sub_1CE6700(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4DFF797 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  v4 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1CE694C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0);
  if ( !favoriteChangeManager )
    sub_1CE6958(v5, v6);
  favoriteChangeManager->fields.callbackFunc = v4;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&favoriteChangeManager->fields.callbackFunc,
    (int32_t)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  FavoriteChangeListViewManager__SetMode_34016408(favoriteChangeManager, 2, v13);
}


void FavoriteChangeComponent__EndStatusSync(
        FavoriteChangeComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_requedstCallback; // x0
  struct FavoriteChangeComponent_RequestCallbackFunc_o *v9; // x19
  struct FavoriteChangeComponent_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback;
  v9 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0;
    sub_1CE66A4(p_requedstCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      1,
      v9->fields.method);
  }
}


void FavoriteChangeComponent__EndePushRequest(
        FavoriteChangeComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v5; // x2
  struct FavoriteChangeListViewManager_o *v6; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4DFF79B & 1) == 0 )
  {
    sub_1CE6700(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4DFF79B = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__UpdateDisplayState(favoriteChangeManager, 1, method),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0)
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, v5),
        v6 = this->fields.favoriteChangeManager,
        v7 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1CE694C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0),
        !v6) )
  {
    sub_1CE6958(favoriteChangeManager, result);
  }
  v6->fields.callbackFunc = v7;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v6->fields.callbackFunc, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  FavoriteChangeListViewManager__SetMode_34016408(v6, 2, v14);
}


void FavoriteChangeComponent__Init(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4DFF792 & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_7254/*"HEADER_MSG_FAVORITE"*/);
    byte_4DFF792 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager )
    goto LABEL_8;
  FavoriteChangeListViewManager__DestroyList(favoriteChangeManager, method);
  this->fields.state = 0;
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  favoriteChangeManager = (FavoriteChangeListViewManager_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_7254/*"HEADER_MSG_FAVORITE"*/,
                                                               0);
  if ( !infoLb )
LABEL_8:
    sub_1CE6958(favoriteChangeManager, method);
  UILabel__set_text(infoLb, (System_String_o *)favoriteChangeManager, 0);
  FavoriteChangeComponent__setModeTabKind(this, 0, v5);
}


void FavoriteChangeComponent__OnClickScaleChange(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4DFF7A3 & 1) == 0 )
  {
    sub_1CE6700(&Method_FavoriteChangeComponent_OnClickScaleChange__);
    byte_4DFF7A3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_FavoriteChangeComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      sub_1CE6958(0, v5);
    FavoriteChangeListViewManager__ChangeIconScale(favoriteChangeManager, v5);
    FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v7);
  }
}


void FavoriteChangeComponent__OnClickServant(
        FavoriteChangeComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 favoriteChangeManager; // x0
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
  FavoriteChangeListViewItem_o *v22; // x1
  FavoriteChangeListViewItem_o **v23; // x21
  __int64 v24; // x8
  __int128 v25; // q1
  const MethodInfo *v26; // x2
  int32_t tabModeKind; // w8
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  int32_t v30; // w1
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v32; // x20
  ServantStatusDialog_ResultDelegate_o *v33; // x22
  _QWORD *v34; // x0
  _QWORD *v35; // x0
  bool v36; // w22
  _QWORD *v37; // x8
  struct FavoriteChangeListViewManager_o *v38; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  const MethodInfo *v46; // x2
  ServantEntity_o *v47; // x23
  int64_t v48; // x22
  UserServantEntity_o *v49; // x27
  ServantEntity_o *v50; // x29
  Il2CppObject *v51; // x24
  __int64 v52; // x22
  ServantOverwriteStatus_o *v53; // x28
  System_String_o *v54; // x25
  UserServantEntity_o *v55; // x0
  UserServantEntity_o *v56; // x0
  System_String_o *v57; // x25
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  const MethodInfo *v60; // x2
  int64_t v61; // x22
  struct UserServantEntity_o *v62; // x8
  __int128 v63; // q0
  __int64 v64; // x26
  ServantEntity_o *ServantEntity; // x28
  Il2CppObject *Master_object; // x23
  __int64 v67; // x29
  ServantOverwriteStatus_o *OverwriteStatus; // x27
  System_String_o *v69; // x22
  System_String_o *v70; // x24
  __int64 v71; // x25
  int32_t v72; // w29
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  __int64 v79; // x29
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  __int64 v86; // x29
  __int64 v87; // x28
  __int64 v88; // x29
  int32_t v89; // w0
  __int64 v90; // x8
  int32_t v91; // w26
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  __int64 v98; // x26
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  __int64 v105; // x26
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  __int64 v112; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v113; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v114; // x8
  int32_t v115; // w21
  int32_t v116; // w0
  int32_t v117; // w2
  int32_t v118; // w3
  System_String_o *v119; // x4
  int32_t v120; // w5
  int64_t v121; // x6
  System_String_o *v122; // x7
  __int64 v123; // x21
  System_String_o *v124; // x21
  System_String_o *v125; // x23
  System_String_o *v126; // x24
  Il2CppObject *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v128; // x26
  System_String_o *v129; // x0
  System_Object_array *v130; // x26
  int32_t v131; // w22
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  Il2CppObject *v138; // x22
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  Il2CppObject *v145; // x22
  __int64 v146; // x22
  __int64 v147; // x25
  int32_t v148; // w22
  int32_t v149; // w2
  int32_t v150; // w3
  System_String_o *v151; // x4
  int32_t v152; // w5
  int64_t v153; // x6
  System_String_o *v154; // x7
  Il2CppObject *v155; // x22
  int32_t v156; // w2
  int32_t v157; // w3
  System_String_o *v158; // x4
  int32_t v159; // w5
  int64_t v160; // x6
  System_String_o *v161; // x7
  Il2CppObject *v162; // x22
  int32_t v163; // w2
  int32_t v164; // w3
  System_String_o *v165; // x4
  int32_t v166; // w5
  int64_t v167; // x6
  System_String_o *v168; // x7
  Il2CppObject *v169; // x22
  FavoriteChangeListViewItem_o *v170; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v171; // x9
  int32_t svtId; // w21
  int32_t v173; // w0
  int32_t v174; // w2
  int32_t v175; // w3
  System_String_o *v176; // x4
  int32_t v177; // w5
  int64_t v178; // x6
  System_String_o *v179; // x7
  Il2CppObject *v180; // x21
  System_String_o *v181; // x21
  System_String_o *v182; // x22
  System_String_o *v183; // x23
  Il2CppObject *v184; // x24
  CommonConfirmDialog_ClickDelegate_o *v185; // x25
  __int64 v186; // x0
  System_String_o *title; // [xsp+50h] [xbp-D0h]
  System_String_o *format; // [xsp+58h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v189; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v190; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v191; // [xsp+A0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v192; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v193; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // 0:x0.16

  if ( (byte_4DFF796 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&Method_FavoriteChangeComponent_OnClickServant__);
    sub_1CE6700(&Method_FavoriteChangeComponent_closeSvtDetail__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&object___TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Rarity_TypeInfo);
    sub_1CE6700(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__);
    sub_1CE6700(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__);
    sub_1CE6700(&FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo);
    sub_1CE6700(&StringLiteral_12060/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_12058/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/);
    sub_1CE6700(&StringLiteral_12072/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_12070/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1CE6700(&StringLiteral_12071/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1CE6700(&StringLiteral_12057/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/);
    sub_1CE6700(&StringLiteral_12061/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    sub_1CE6700(&StringLiteral_12059/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_12073/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4DFF796 = 1;
  }
  v7 = sub_1CE694C(FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_159;
  *(_QWORD *)(v7 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( n < 0 )
  {
    v22 = 0;
  }
  else
  {
    favoriteChangeManager = (__int64)this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_159;
    v22 = FavoriteChangeListViewManager__GetItem((FavoriteChangeListViewManager_o *)favoriteChangeManager, n, v16);
  }
  *(_QWORD *)(v7 + 24) = v22;
  v23 = (FavoriteChangeListViewItem_o **)(v7 + 24);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)v22, (int32_t)v16, v17, v18, v19, v20, v21);
  if ( !*(_QWORD *)(v7 + 24) )
    goto LABEL_159;
  v24 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 120LL);
  if ( !v24 )
    goto LABEL_159;
  v25 = *(_OWORD *)(v24 + 32);
  *(_OWORD *)&v191.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
  *(_OWORD *)&v191.fields.fakeValue = v25;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v190 = v191;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v190, 0);
  this->fields.usrSvtId = favoriteChangeManager;
  if ( kind == 1 )
  {
    FavoriteChangeComponent__setFavoriteRequest(this, *v23, v26);
    return;
  }
  if ( kind == 2 )
  {
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v23 )
    {
      userSvtEntity = (*v23)->fields.userSvtEntity;
      v32 = (CommonUI_o *)favoriteChangeManager;
      v33 = (ServantStatusDialog_ResultDelegate_o *)sub_1CE694C(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v33,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_closeSvtDetail__,
        0);
      if ( v32 )
      {
        CommonUI__OpenServantStatusDialog_31930372(v32, 0, userSvtEntity, v33, 0, 0, 0);
        return;
      }
    }
    goto LABEL_159;
  }
  if ( kind != 3 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( !*v23 )
      goto LABEL_159;
    (*v23)->fields.isSwapChoice ^= 1u;
    v34 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v34 = (_QWORD *)sub_1CE6718(Method_FavoriteChangeComponent_OnClickServant__);
    v29 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v34, v34[4]);
    v30 = 0;
    goto LABEL_42;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v23 )
      goto LABEL_159;
    (*v23)->fields.isSwapLock ^= 1u;
    v28 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1CE6718(Method_FavoriteChangeComponent_OnClickServant__);
    v29 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v28, v28[4]);
    v30 = 11;
    goto LABEL_42;
  }
  favoriteChangeManager = (__int64)*v23;
  if ( !*v23 )
    goto LABEL_159;
  if ( tabModeKind == 3 )
  {
    if ( *(_QWORD *)(favoriteChangeManager + 120) )
    {
      if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(favoriteChangeManager + 120), 0) )
      {
LABEL_35:
        v35 = Method_FavoriteChangeComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
          v35 = (_QWORD *)sub_1CE6718(Method_FavoriteChangeComponent_OnClickServant__);
        v29 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v35, v35[4]);
LABEL_41:
        v30 = 2;
LABEL_42:
        OverwriteAssetSoundName__PlaySystemSe(v29, v30, 0, 0);
        goto LABEL_43;
      }
      favoriteChangeManager = (__int64)*v23;
      if ( !*v23 )
        goto LABEL_159;
    }
    if ( FavoriteChangeListViewItem__get_IsHerioneReave((FavoriteChangeListViewItem_o *)favoriteChangeManager, v9) )
      goto LABEL_35;
    v58 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v58 = (_QWORD *)sub_1CE6718(Method_FavoriteChangeComponent_OnClickServant__);
    v59 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v58, v58[4]);
    OverwriteAssetSoundName__PlaySystemSe(v59, 0, 0, 0);
    favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0);
    if ( !favoriteChangeManager )
      goto LABEL_159;
    v61 = *(_QWORD *)(favoriteChangeManager + 128);
    if ( !v61 )
    {
LABEL_73:
      FavoriteChangeComponent__PushRequest(this, *v23, v60);
      goto LABEL_43;
    }
    if ( !*v23 )
      goto LABEL_159;
    v62 = (*v23)->fields.userSvtEntity;
    if ( !v62 )
      goto LABEL_159;
    v63 = *(_OWORD *)&v62->fields.id.fields.fakeValue;
    *(_OWORD *)&v191.fields.currentCryptoKey = *(_OWORD *)&v62->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v191.fields.fakeValue = v63;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v189 = v191;
    if ( v61 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v189, 0) )
      goto LABEL_73;
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !favoriteChangeManager )
      goto LABEL_159;
    favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)favoriteChangeManager,
                                       (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !favoriteChangeManager )
      goto LABEL_159;
    favoriteChangeManager = (__int64)DataMasterBase_object__object__long___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
                                       v61,
                                       (const MethodInfo_34EBA0C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !favoriteChangeManager )
      goto LABEL_159;
    v64 = favoriteChangeManager;
    ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)favoriteChangeManager, -1, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    favoriteChangeManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v64, 0, 0);
    if ( !*v23 )
      goto LABEL_159;
    v67 = favoriteChangeManager;
    favoriteChangeManager = (__int64)(*v23)->fields.userSvtEntity;
    if ( !favoriteChangeManager )
      goto LABEL_159;
    OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)favoriteChangeManager, 0, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v69 = LocalizationManager__Get((System_String_o *)StringLiteral_12073/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
    v70 = LocalizationManager__Get((System_String_o *)StringLiteral_12072/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
    favoriteChangeManager = sub_1CE67A8(object___TypeInfo, 6);
    if ( !v67 )
      goto LABEL_159;
    v71 = favoriteChangeManager;
    v72 = *(_DWORD *)(v67 + 24);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    favoriteChangeManager = (__int64)Rarity__getRarityType(v72, 0);
    if ( !v71 )
      goto LABEL_159;
    v79 = favoriteChangeManager;
    if ( !favoriteChangeManager
      || (favoriteChangeManager = sub_1CE683C(favoriteChangeManager, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v71 + 24) )
        goto LABEL_160;
      *(_QWORD *)(v71 + 32) = v79;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v71 + 32), v79, v73, v74, v75, v76, v77, v78);
      if ( !ServantEntity )
        goto LABEL_159;
      favoriteChangeManager = (__int64)ServantEntity__getClassName(ServantEntity, 0);
      v86 = favoriteChangeManager;
      if ( !favoriteChangeManager
        || (favoriteChangeManager = sub_1CE683C(favoriteChangeManager, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v71 + 24) <= 1u )
          goto LABEL_160;
        *(_QWORD *)(v71 + 40) = v86;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v71 + 40), v86, v80, v81, v82, v83, v84, v85);
        v88 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
        v87 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v192.fields.currentCryptoKey = v88;
        *(_QWORD *)&v192.fields.fakeValue = v87;
        v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v192, 0);
        v90 = *(_QWORD *)(v64 + 96);
        *(_QWORD *)&v193.fields.fakeValue = *(_QWORD *)(v64 + 104);
        v91 = v89;
        *(_QWORD *)&v193.fields.currentCryptoKey = v90;
        favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v193, 0);
        if ( !Master_object )
          goto LABEL_159;
        favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                           (ServantLimitImageMaster_o *)Master_object,
                                           v91,
                                           favoriteChangeManager,
                                           1,
                                           1,
                                           0);
        v98 = favoriteChangeManager;
        if ( !favoriteChangeManager
          || (favoriteChangeManager = sub_1CE683C(favoriteChangeManager, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v71 + 24) <= 2u )
            goto LABEL_160;
          *(_QWORD *)(v71 + 48) = v98;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v71 + 48), v98, v92, v93, v94, v95, v96, v97);
          if ( !OverwriteStatus )
            goto LABEL_159;
          favoriteChangeManager = (__int64)Rarity__getRarityType(OverwriteStatus->fields._Rarity_k__BackingField, 0);
          v105 = favoriteChangeManager;
          if ( !favoriteChangeManager
            || (favoriteChangeManager = sub_1CE683C(favoriteChangeManager, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v71 + 24) <= 3u )
              goto LABEL_160;
            *(_QWORD *)(v71 + 56) = v105;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v71 + 56), v105, v99, v100, v101, v102, v103, v104);
            if ( !*v23 )
              goto LABEL_159;
            favoriteChangeManager = (__int64)(*v23)->fields.servantEntity;
            if ( !favoriteChangeManager )
              goto LABEL_159;
            favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)favoriteChangeManager, 0);
            v112 = favoriteChangeManager;
            if ( !favoriteChangeManager
              || (favoriteChangeManager = sub_1CE683C(favoriteChangeManager, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v71 + 24) <= 4u )
                goto LABEL_160;
              *(_QWORD *)(v71 + 64) = v112;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v71 + 64), v112, v106, v107, v108, v109, v110, v111);
              if ( !*v23 )
                goto LABEL_159;
              v113 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.servantEntity;
              if ( !v113 )
                goto LABEL_159;
              favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v113[1], 0);
              if ( !*v23 )
                goto LABEL_159;
              v114 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.userSvtEntity;
              if ( !v114 )
                goto LABEL_159;
              v115 = favoriteChangeManager;
              v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v114[6], 0);
              favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                 (ServantLimitImageMaster_o *)Master_object,
                                                 v115,
                                                 v116,
                                                 1,
                                                 1,
                                                 0);
              v123 = favoriteChangeManager;
              if ( !favoriteChangeManager
                || (favoriteChangeManager = sub_1CE683C(favoriteChangeManager, *(_QWORD *)(*(_QWORD *)v71 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v71 + 24) > 5u )
                {
                  *(_QWORD *)(v71 + 72) = v123;
                  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v71 + 72), v123, v117, v118, v119, v120, v121, v122);
                  v124 = System_String__Format_65164272(v70, (System_Object_array *)v71, 0);
                  v125 = LocalizationManager__Get((System_String_o *)StringLiteral_12071/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                  v126 = LocalizationManager__Get((System_String_o *)StringLiteral_12070/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v128 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v128,
                    (Il2CppObject *)v7,
                    Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__,
                    0);
                  favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_31919840(
                      (CommonUI_o *)Instance,
                      v69,
                      v124,
                      v125,
                      v126,
                      v128,
                      *(_DWORD *)(*(_QWORD *)(favoriteChangeManager + 184) + 508LL),
                      *(_DWORD *)(*(_QWORD *)(favoriteChangeManager + 184) + 520LL),
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
                    goto LABEL_43;
                  }
                  goto LABEL_159;
                }
LABEL_160:
                sub_1CE6960(favoriteChangeManager);
              }
            }
          }
        }
      }
    }
LABEL_161:
    v186 = sub_1CE697C();
    sub_1CE6828(v186, 0);
  }
  v36 = FavoriteChangeListViewItem__get_IsCanNotSelect((FavoriteChangeListViewItem_o *)favoriteChangeManager, v9);
  v37 = Method_FavoriteChangeComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
    v37 = (_QWORD *)sub_1CE6718(Method_FavoriteChangeComponent_OnClickServant__);
  v29 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v37, v37[4]);
  if ( v36 )
    goto LABEL_41;
  OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0, 0);
  if ( !*v23 )
    goto LABEL_159;
  v47 = (*v23)->fields.servantEntity;
  favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !favoriteChangeManager )
    goto LABEL_159;
  v48 = *(_QWORD *)(favoriteChangeManager + 120);
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_159;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !favoriteChangeManager )
    goto LABEL_159;
  favoriteChangeManager = (__int64)DataMasterBase_object__object__long___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
                                     v48,
                                     (const MethodInfo_34EBA0C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !favoriteChangeManager )
    goto LABEL_159;
  v49 = (UserServantEntity_o *)favoriteChangeManager;
  v50 = UserServantEntity__GetServantEntity((UserServantEntity_o *)favoriteChangeManager, -1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v51 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  favoriteChangeManager = (__int64)UserServantEntity__GetOverwriteStatus(v49, 0, 0);
  if ( !*v23 )
    goto LABEL_159;
  v52 = favoriteChangeManager;
  favoriteChangeManager = (__int64)(*v23)->fields.userSvtEntity;
  if ( !favoriteChangeManager )
    goto LABEL_159;
  v53 = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)favoriteChangeManager, 0, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  favoriteChangeManager = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12061/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0);
  if ( !*v23 )
    goto LABEL_159;
  v54 = (System_String_o *)favoriteChangeManager;
  v55 = (*v23)->fields.userSvtEntity;
  title = v54;
  if ( !v55 )
    goto LABEL_63;
  favoriteChangeManager = UserServantEntity__IsEventJoin(v55, 0);
  if ( (favoriteChangeManager & 1) == 0 )
    goto LABEL_63;
  if ( !*v23 )
    goto LABEL_159;
  v56 = (*v23)->fields.userSvtEntity;
  if ( !v56 || !UserServantEntity__IsNoPeriod(v56, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12059/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0);
  }
  else
  {
LABEL_63:
    v57 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v129 = LocalizationManager__Get((System_String_o *)StringLiteral_12060/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0);
  format = System_String__Concat_65122828(v129, v57, 0);
  favoriteChangeManager = sub_1CE67A8(object___TypeInfo, 6);
  if ( !v52 )
    goto LABEL_159;
  v130 = (System_Object_array *)favoriteChangeManager;
  v131 = *(_DWORD *)(v52 + 24);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v131, 0);
  if ( !v130 )
LABEL_159:
    sub_1CE6958(favoriteChangeManager, v9);
  v138 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1CE683C(favoriteChangeManager, v130->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_161;
  }
  if ( !LODWORD(v130->max_length) )
    goto LABEL_160;
  v130->m_Items[0] = v138;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)v130->m_Items, (int32_t)v138, v132, v133, v134, v135, v136, v137);
  if ( !v50 )
    goto LABEL_159;
  favoriteChangeManager = (__int64)ServantEntity__getClassName(v50, 0);
  v145 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1CE683C(favoriteChangeManager, v130->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_161;
  }
  if ( LODWORD(v130->max_length) <= 1 )
    goto LABEL_160;
  v130->m_Items[1] = v145;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v130->m_Items[1], (int32_t)v145, v139, v140, v141, v142, v143, v144);
  v147 = *(_QWORD *)&v50->fields.id.fields.currentCryptoKey;
  v146 = *(_QWORD *)&v50->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v194.fields.currentCryptoKey = v147;
  *(_QWORD *)&v194.fields.fakeValue = v146;
  v148 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v194, 0);
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v49->fields.limitCount, 0);
  if ( !v51 )
    goto LABEL_159;
  favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                     (ServantLimitImageMaster_o *)v51,
                                     v148,
                                     favoriteChangeManager,
                                     1,
                                     1,
                                     0);
  v155 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1CE683C(favoriteChangeManager, v130->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_161;
  }
  if ( LODWORD(v130->max_length) <= 2 )
    goto LABEL_160;
  v130->m_Items[2] = v155;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v130->m_Items[2], (int32_t)v155, v149, v150, v151, v152, v153, v154);
  if ( !v53 )
    goto LABEL_159;
  favoriteChangeManager = (__int64)Rarity__getRarityType(v53->fields._Rarity_k__BackingField, 0);
  v162 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1CE683C(favoriteChangeManager, v130->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_161;
  }
  if ( LODWORD(v130->max_length) <= 3 )
    goto LABEL_160;
  v130->m_Items[3] = v162;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v130->m_Items[3], (int32_t)v162, v156, v157, v158, v159, v160, v161);
  if ( !v47 )
    goto LABEL_159;
  favoriteChangeManager = (__int64)ServantEntity__getClassName(v47, 0);
  v169 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1CE683C(favoriteChangeManager, v130->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_161;
  }
  if ( LODWORD(v130->max_length) <= 4 )
    goto LABEL_160;
  v130->m_Items[4] = v169;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v130->m_Items[4], (int32_t)v169, v163, v164, v165, v166, v167, v168);
  v170 = *v23;
  if ( !*v23 )
    goto LABEL_159;
  v171 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v170->fields.userSvtEntity;
  if ( !v171 )
    goto LABEL_159;
  svtId = v170->fields.svtId;
  v173 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v171[6], 0);
  favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                     (ServantLimitImageMaster_o *)v51,
                                     svtId,
                                     v173,
                                     1,
                                     1,
                                     0);
  v180 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1CE683C(favoriteChangeManager, v130->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_161;
  }
  if ( LODWORD(v130->max_length) <= 5 )
    goto LABEL_160;
  v130->m_Items[5] = v180;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v130->m_Items[5], (int32_t)v180, v174, v175, v176, v177, v178, v179);
  v181 = System_String__Format_65164272(format, v130, 0);
  v182 = LocalizationManager__Get((System_String_o *)StringLiteral_12058/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0);
  v183 = LocalizationManager__Get((System_String_o *)StringLiteral_12057/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0);
  v184 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v185 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v185,
    (Il2CppObject *)v7,
    Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__,
    0);
  favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v184 )
    goto LABEL_159;
  CommonUI__OpenConfirmDialog_31919400(
    (CommonUI_o *)v184,
    title,
    v181,
    v182,
    v183,
    v185,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0);
LABEL_43:
  v38 = this->fields.favoriteChangeManager;
  v39 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1CE694C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v39,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0);
  if ( !v38 )
    goto LABEL_159;
  v38->fields.callbackFunc = v39;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v38->fields.callbackFunc, (int32_t)v39, v40, v41, v42, v43, v44, v45);
  FavoriteChangeListViewManager__SetMode_34016408(v38, 2, v46);
}


void FavoriteChangeComponent__Open(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  UnityEngine_GameObject_o *v11; // x20
  const MethodInfo *v12; // x1
  struct FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x2

  if ( (byte_4DFF793 & 1) == 0 )
  {
    sub_1CE6700(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4DFF793 = 1;
  }
  FavoriteChangeComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.cancelCallback = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.cancelCallback, 0, v5, v6, v7, v8, v9, v10);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_41045104((TitleInfoControl_o *)gameObject, 1, 54, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_10;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0);
  if ( !v11
    || (UnityEngine_GameObject__SetActive(v11, (unsigned __int8)gameObject & 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.favoriteChangeManager) == 0)
    || (FavoriteChangeListViewManager__CreateList((FavoriteChangeListViewManager_o *)gameObject, v4),
        FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v12),
        favoriteChangeManager = this->fields.favoriteChangeManager,
        v14 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1CE694C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0),
        !favoriteChangeManager) )
  {
LABEL_10:
    sub_1CE6958(gameObject, v4);
  }
  favoriteChangeManager->fields.callbackFunc = v14;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&favoriteChangeManager->fields.callbackFunc,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  FavoriteChangeListViewManager__SetMode_34016408(favoriteChangeManager, 2, v21);
  this->fields.state = 2;
}


void FavoriteChangeComponent__PushRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeListViewItem_o *selectItem,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21

  if ( (byte_4DFF79A & 1) == 0 )
  {
    sub_1CE6700(&Method_FavoriteChangeComponent_EndePushRequest__);
    sub_1CE6700(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4DFF79A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndePushRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_1CE6958(Instance, v6);
  CardFavoriteRequest__beginRequestPush((CardFavoriteRequest_o *)Instance, selectItem->fields.userSvtEntity, 0);
}


void FavoriteChangeComponent__StatusRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeComponent_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tabModeKind; // w8
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
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

  if ( (byte_4DFF7A2 & 1) == 0 )
  {
    sub_1CE6700(&Method_FavoriteChangeComponent_EndStatusSync__);
    sub_1CE6700(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4DFF7A2 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v26 = 0;
  choiceList = 0;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_21;
    if ( FavoriteChangeListViewManager__GetSwapChoiceList(favoriteChangeManager, &choiceList, &v26, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v25,
                                                                   (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v16 = v26;
        v15 = choiceList;
        v18 = 1;
        v17 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1CE6958(favoriteChangeManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_21;
    if ( FavoriteChangeListViewManager__GetSwapLockList(favoriteChangeManager, &lockList, &unlockList, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v14,
                                                                   (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v16 = unlockList;
        v15 = lockList;
        v17 = 1;
        v18 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)favoriteChangeManager, v15, v16, 0, v17, v18, 0);
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


void FavoriteChangeComponent__UpdateScaleChangeIconSprite(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        favoriteChangeManager = (FavoriteChangeListViewManager_o *)FavoriteChangeListViewManager__GetScaleButtonSpriteName(
                                                                     favoriteChangeManager,
                                                                     method),
        !scaleChangeTabSprite) )
  {
    sub_1CE6958(favoriteChangeManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)favoriteChangeManager, 0);
}


void FavoriteChangeComponent__cancelFavoriteWindow(
        FavoriteChangeComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  FavoriteChangeComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4DFF794 & 1) == 0 )
  {
    sub_1CE6700(&Method_FavoriteChangeComponent_endCancelButton__);
    sub_1CE6700(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4DFF794 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.cancelCallback,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1CE694C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
  FavoriteChangeComponent_RequestCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_endCancelButton__,
    v11);
  FavoriteChangeComponent__StatusRequest(this, v10, v12);
}


void FavoriteChangeComponent__closeSvtDetail(
        FavoriteChangeComponent_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v18; // x20

  if ( (byte_4DFF79C & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__);
    sub_1CE6700(&FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo);
    byte_4DFF79C = 1;
  }
  v8 = sub_1CE694C(FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        *(_QWORD *)(v8 + 24) = this,
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v8 + 24), (int32_t)this, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v8 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v8,
          Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__,
          0),
        !Instance) )
  {
    sub_1CE6958(v9, v10);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v18, 0);
}


void FavoriteChangeComponent__dispSvtList(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1CE6958(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeComponent__endCancelButton(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  struct FavoriteChangeListViewManager_o *v6; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_4DFF795 & 1) == 0 )
  {
    sub_1CE6700(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4DFF795 = 1;
  }
  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          v6 = this->fields.favoriteChangeManager,
          v7 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1CE694C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
          FavoriteChangeListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
            0),
          !v6) )
    {
LABEL_11:
      sub_1CE6958(favoriteChangeManager, isRequest);
    }
    v6->fields.callbackFunc = v7;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v6->fields.callbackFunc, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    FavoriteChangeListViewManager__SetMode_34016408(v6, 2, v14);
  }
  FavoriteChangeComponent__Init(this, (const MethodInfo *)isRequest);
  favoriteChangeManager = (FavoriteChangeListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
  if ( !favoriteChangeManager )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)favoriteChangeManager, 0, 0);
  cancelCallback = this->fields.cancelCallback;
  if ( cancelCallback )
    ActionExtensions__Call(cancelCallback, 0);
}


void FavoriteChangeComponent__onClickChoiceTabButton(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4DFF79F & 1) == 0 )
  {
    sub_1CE6700(&Method_FavoriteChangeComponent_EndClickTabChoice__);
    sub_1CE6700(&Method_FavoriteChangeComponent_onClickChoiceTabButton__);
    sub_1CE6700(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4DFF79F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_FavoriteChangeComponent_onClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1CE694C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabChoice__,
          v8);
        FavoriteChangeComponent__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1CE694C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabChoice__,
        v11);
      FavoriteChangeComponent__StatusRequest(this, v10, v12);
    }
    FavoriteChangeComponent__setModeTabKind(this, 2, v5);
  }
}


void FavoriteChangeComponent__onClickLockTabButton(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4DFF79E & 1) == 0 )
  {
    sub_1CE6700(&Method_FavoriteChangeComponent_EndClickTabLock__);
    sub_1CE6700(&Method_FavoriteChangeComponent_onClickLockTabButton__);
    sub_1CE6700(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4DFF79E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_FavoriteChangeComponent_onClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1CE694C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabLock__,
          v8);
        FavoriteChangeComponent__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1CE694C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabLock__,
        v11);
      FavoriteChangeComponent__StatusRequest(this, v10, v12);
    }
    FavoriteChangeComponent__setModeTabKind(this, 1, v5);
  }
}


void FavoriteChangeComponent__onClickNormalTabButton(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  FavoriteChangeComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4DFF79D & 1) == 0 )
  {
    sub_1CE6700(&Method_FavoriteChangeComponent_EndClickTabNormal__);
    sub_1CE6700(&Method_FavoriteChangeComponent_onClickNormalTabButton__);
    sub_1CE6700(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4DFF79D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_FavoriteChangeComponent_onClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1CE694C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabNormal__,
      v6);
    FavoriteChangeComponent__StatusRequest(this, v5, v7);
  }
}


void FavoriteChangeComponent__onClickPushTabButton(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  FavoriteChangeComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4DFF7A0 & 1) == 0 )
  {
    sub_1CE6700(&Method_FavoriteChangeComponent_EndClickTabPush__);
    sub_1CE6700(&Method_FavoriteChangeComponent_onClickPushTabButton__);
    sub_1CE6700(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4DFF7A0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_FavoriteChangeComponent_onClickPushTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_FavoriteChangeComponent_onClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1CE694C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabPush__,
      v6);
    FavoriteChangeComponent__StatusRequest(this, v5, v7);
  }
}


void FavoriteChangeComponent__setFavoriteRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeListViewItem_o *selectItem,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21

  if ( (byte_4DFF798 & 1) == 0 )
  {
    sub_1CE6700(&Method_FavoriteChangeComponent_EndCardFavoriteRequest__);
    sub_1CE6700(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4DFF798 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_1CE6958(Instance, v6);
  CardFavoriteRequest__beginRequestFavorite((CardFavoriteRequest_o *)Instance, selectItem->fields.userSvtEntity, 0);
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeComponent__setModeTabKind(
        FavoriteChangeComponent_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v6; // x8
  System_String_o **v7; // x8
  System_String_o **v8; // x8
  __int64 *v9; // x8
  const MethodInfo *v10; // x2
  UILabel_o *infoLb; // x21
  char v12; // w8
  UILabel_o *v13; // x21
  __int64 *v14; // x8
  const MethodInfo *v15; // x2

  if ( (byte_4DFF7A1 & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&StringLiteral_11780/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1CE6700(&StringLiteral_17848/*"button_push_reg"*/);
    sub_1CE6700(&StringLiteral_17849/*"button_push_unreg"*/);
    sub_1CE6700(&StringLiteral_17834/*"button_allchoice_reg"*/);
    sub_1CE6700(&StringLiteral_17837/*"button_alllock_unreg"*/);
    sub_1CE6700(&StringLiteral_11778/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1CE6700(&StringLiteral_11779/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1CE6700(&StringLiteral_17850/*"button_select_reg"*/);
    sub_1CE6700(&StringLiteral_17851/*"button_select_unreg"*/);
    sub_1CE6700(&StringLiteral_17836/*"button_alllock_reg"*/);
    sub_1CE6700(&StringLiteral_17835/*"button_allchoice_unreg"*/);
    sub_1CE6700(&StringLiteral_7254/*"HEADER_MSG_FAVORITE"*/);
    byte_4DFF7A1 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 0, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_51;
    v6 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17851/*"button_select_unreg"*/ : &StringLiteral_17850/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v6, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_51;
    v7 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17836/*"button_alllock_reg"*/ : &StringLiteral_17837/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v7, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 2, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_51;
    v8 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17834/*"button_allchoice_reg"*/ : &StringLiteral_17835/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton
      || (UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabBoxCollider) == 0)
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 3, 0),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite) == 0) )
    {
LABEL_51:
      sub_1CE6958(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v9 = &StringLiteral_17848/*"button_push_reg"*/;
    else
      v9 = &StringLiteral_17849/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v9, 0);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7254/*"HEADER_MSG_FAVORITE"*/, 0);
        if ( !infoLb )
          goto LABEL_51;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v12 = 0;
        goto LABEL_48;
      case 1:
        v13 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = &StringLiteral_11779/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_45;
      case 2:
        v13 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = &StringLiteral_11778/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_45;
      case 3:
        v13 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = &StringLiteral_11780/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_45:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v14, 0);
        if ( !v13 )
          goto LABEL_51;
        UILabel__set_text(v13, (System_String_o *)normalTabButton, 0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v12 = 1;
LABEL_48:
        BYTE4(normalTabButton[15].fields.m_CachedPtr) = v12;
LABEL_49:
        FavoriteChangeListViewManager__UpdateDisplayState(
          (FavoriteChangeListViewManager_o *)normalTabButton,
          modeKind == 3,
          v10);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_51;
        FavoriteChangeListViewManager__SetMode_34016408((FavoriteChangeListViewManager_o *)normalTabButton, 2, v15);
        break;
      default:
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_51;
        goto LABEL_49;
    }
  }
}


void FavoriteChangeComponent_RequestCallbackFunc___ctor(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
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
  sub_1CE66A4(
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
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1B0FA80;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B0FA38;
}


System_IAsyncResult_o *FavoriteChangeComponent_RequestCallbackFunc__BeginInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4DFF7A4 & 1) == 0 )
  {
    sub_1CE6700(&bool_TypeInfo);
    byte_4DFF7A4 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v9, callback, object);
}


void FavoriteChangeComponent_RequestCallbackFunc__EndInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
}


void FavoriteChangeComponent_RequestCallbackFunc__Invoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}


void FavoriteChangeComponent___c__DisplayClass31_0___ctor(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__0(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
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

  if ( (byte_4DFF7A5 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__);
    byte_4DFF7A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31920128(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_1CE6958(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__1(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1CE6958(this, method);
  FavoriteChangeComponent__PushRequest(this->fields.__4__this, this->fields.item, v2);
}


void FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__2(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__3; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4DFF7A6 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__);
    byte_4DFF7A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__3 = this->fields.__9__3;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__,
        0);
      this->fields.__9__3 = _9__3;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31920128(v7, _9__3, 0);
      return;
    }
LABEL_10:
    sub_1CE6958(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__3(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  FavoriteChangeComponent___c__DisplayClass31_0_o *v2; // x19
  struct FavoriteChangeComponent_o *_4__this; // x9
  struct FavoriteChangeListViewItem_o *item; // x8

  v2 = this;
  if ( (byte_4DFF7A7 & 1) == 0 )
  {
    this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)sub_1CE6700(&StringLiteral_9916/*"OnClickFavoriteDecide"*/);
    byte_4DFF7A7 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0
    || (this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)_4__this->fields.favoriteChangeManager) == 0 )
  {
    sub_1CE6958(this, method);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)this,
    (System_String_o *)StringLiteral_9916/*"OnClickFavoriteDecide"*/,
    (Il2CppObject *)item->fields.viewObject,
    0);
}


void FavoriteChangeComponent___c__DisplayClass37_0___ctor(
        FavoriteChangeComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FavoriteChangeComponent___c__DisplayClass37_0___closeSvtDetail_b__0(
        FavoriteChangeComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FavoriteChangeComponent_o *_4__this; // x0
  struct FavoriteChangeComponent_o *v5; // x8
  struct FavoriteChangeComponent_o *v6; // x8
  Il2CppObject *v7; // x20
  char *monitor; // x19
  FavoriteChangeListViewManager_CallbackFunc_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x2

  if ( (byte_4DFF7A8 & 1) == 0 )
  {
    sub_1CE6700(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_FavoriteChangeComponent_OnClickServant__);
    sub_1CE6700(&StringLiteral_3462/*"CLICK_BACK"*/);
    byte_4DFF7A8 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  if ( this->fields.questId >= 1 )
  {
    FavoriteChangeComponent__Init(_4__this, method);
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this = (FavoriteChangeComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)_4__this,
                                                0);
      if ( _4__this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0);
        v5 = this->fields.__4__this;
        if ( v5 )
        {
          _4__this = (FavoriteChangeComponent_o *)v5->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3462/*"CLICK_BACK"*/, 0);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1CE6958(_4__this, method);
  }
  if ( !_4__this->fields.favoriteChangeManager )
    goto LABEL_18;
  FavoriteChangeListViewManager__ModifyItem(_4__this->fields.favoriteChangeManager, _4__this->fields.usrSvtId, v2);
  if ( this->fields.isNeedSort )
  {
    v6 = this->fields.__4__this;
    if ( !v6 )
      goto LABEL_18;
    _4__this = (FavoriteChangeComponent_o *)v6->fields.favoriteChangeManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0);
  }
  v7 = (Il2CppObject *)this->fields.__4__this;
  if ( !v7 )
    goto LABEL_18;
  monitor = (char *)v7[3].monitor;
  v9 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1CE694C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v9,
    v7,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0);
  if ( !monitor )
    goto LABEL_18;
  *((_QWORD *)monitor + 48) = v9;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(monitor + 384), (int32_t)v9, v10, v11, v12, v13, v14, v15);
  FavoriteChangeListViewManager__SetMode_34016408((FavoriteChangeListViewManager_o *)monitor, 2, v16);
}