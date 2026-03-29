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
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4D2B774 & 1) == 0 )
  {
    sub_1C93AD4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4D2B774 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, method),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0)
    || (ListViewManager__SortItem((ListViewManager_o *)favoriteChangeManager, -1, 0, -1, 0),
        v5 = this->fields.favoriteChangeManager,
        v6 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C93D20(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          v7),
        !v5) )
  {
    sub_1C93D2C(favoriteChangeManager, result);
  }
  v5->fields.callbackFunc = v6;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  FavoriteChangeListViewManager__SetMode_33601088(v5, 2, v14);
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
      sub_1C93D2C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_33601088(favoriteChangeManager, 2, v5);
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
      sub_1C93D2C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_33601088(favoriteChangeManager, 2, v5);
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
      sub_1C93D2C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_33601088(favoriteChangeManager, 2, v5);
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
      sub_1C93D2C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_33601088(favoriteChangeManager, 2, v5);
  }
  FavoriteChangeComponent__setModeTabKind(this, 3, method);
}


void FavoriteChangeComponent__EndCloseConfirmSelectFavorite(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  struct FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4D2B772 & 1) == 0 )
  {
    sub_1C93AD4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4D2B772 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  v4 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C93D20(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    v5);
  if ( !favoriteChangeManager )
    sub_1C93D2C(v6, v7);
  favoriteChangeManager->fields.callbackFunc = v4;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&favoriteChangeManager->fields.callbackFunc,
    (int32_t)v4,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  FavoriteChangeListViewManager__SetMode_33601088(favoriteChangeManager, 2, v14);
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
    sub_1C93A78(p_requedstCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
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
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4D2B776 & 1) == 0 )
  {
    sub_1C93AD4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4D2B776 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__UpdateDisplayState(favoriteChangeManager, 1, method),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0)
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, v5),
        v6 = this->fields.favoriteChangeManager,
        v7 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C93D20(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          v8),
        !v6) )
  {
    sub_1C93D2C(favoriteChangeManager, result);
  }
  v6->fields.callbackFunc = v7;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v6->fields.callbackFunc, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  FavoriteChangeListViewManager__SetMode_33601088(v6, 2, v15);
}


void FavoriteChangeComponent__Init(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4D2B76D & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_7238/*"HEADER_MSG_FAVORITE"*/);
    byte_4D2B76D = 1;
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
                                                               (System_String_o *)StringLiteral_7238/*"HEADER_MSG_FAVORITE"*/,
                                                               0);
  if ( !infoLb )
LABEL_8:
    sub_1C93D2C(favoriteChangeManager, method);
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

  if ( (byte_4D2B77E & 1) == 0 )
  {
    sub_1C93AD4(&Method_FavoriteChangeComponent_OnClickScaleChange__);
    byte_4D2B77E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_FavoriteChangeComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      sub_1C93D2C(0, v5);
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
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  const MethodInfo *v47; // x2
  ServantEntity_o *servantEntity; // x22
  int64_t v49; // x23
  Il2CppObject *v50; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // x23
  void *v52; // x24
  Il2CppClass *v53; // x26
  Il2CppObject *v54; // x29
  Il2CppObject *v55; // x24
  __int64 v56; // x23
  ServantOverwriteStatus_o *v57; // x28
  System_String_o *v58; // x26
  UserServantEntity_o *v59; // x0
  UserServantEntity_o *v60; // x0
  System_String_o *v61; // x26
  _QWORD *v62; // x0
  System_Reflection_MethodBase_o *v63; // x0
  const MethodInfo *v64; // x2
  int64_t v65; // x22
  struct UserServantEntity_o *v66; // x8
  __int128 v67; // q0
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v69; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v72; // x28
  Il2CppObject *Master_object; // x23
  __int64 v74; // x29
  ServantOverwriteStatus_o *OverwriteStatus; // x27
  System_String_o *v76; // x22
  System_String_o *v77; // x24
  __int64 v78; // x25
  int32_t v79; // w29
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  __int64 v86; // x29
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  __int64 v93; // x28
  int32_t v94; // w0
  Il2CppClass *v95; // x8
  int32_t v96; // w26
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  __int64 v103; // x26
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7
  __int64 v110; // x26
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  __int64 v117; // x26
  FavoriteChangeListViewItem_o *v118; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v119; // x9
  int32_t svtId; // w21
  int32_t v121; // w0
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  __int64 v128; // x21
  System_String_o *v129; // x21
  System_String_o *v130; // x23
  System_String_o *v131; // x24
  Il2CppObject *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v133; // x26
  System_String_o *v134; // x0
  System_String_o *v135; // x26
  System_Object_array *v136; // x27
  int32_t v137; // w23
  int32_t v138; // w2
  int32_t v139; // w3
  System_String_o *v140; // x4
  int32_t v141; // w5
  int64_t v142; // x6
  System_String_o *v143; // x7
  Il2CppObject *v144; // x23
  int32_t v145; // w2
  int32_t v146; // w3
  System_String_o *v147; // x4
  int32_t v148; // w5
  int64_t v149; // x6
  System_String_o *v150; // x7
  Il2CppObject *v151; // x23
  void *v152; // x23
  Il2CppClass *v153; // x29
  int32_t v154; // w23
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  Il2CppObject *v161; // x23
  int32_t v162; // w2
  int32_t v163; // w3
  System_String_o *v164; // x4
  int32_t v165; // w5
  int64_t v166; // x6
  System_String_o *v167; // x7
  Il2CppObject *v168; // x23
  int32_t v169; // w2
  int32_t v170; // w3
  System_String_o *v171; // x4
  int32_t v172; // w5
  int64_t v173; // x6
  System_String_o *v174; // x7
  Il2CppObject *v175; // x22
  FavoriteChangeListViewItem_o *v176; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v177; // x9
  int32_t v178; // w21
  int32_t v179; // w0
  int32_t v180; // w2
  int32_t v181; // w3
  System_String_o *v182; // x4
  int32_t v183; // w5
  int64_t v184; // x6
  System_String_o *v185; // x7
  Il2CppObject *v186; // x21
  System_String_o *v187; // x21
  System_String_o *v188; // x22
  System_String_o *v189; // x23
  Il2CppObject *v190; // x24
  CommonConfirmDialog_ClickDelegate_o *v191; // x25
  __int64 v192; // x0
  System_String_o *title; // [xsp+48h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v194; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v195; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v196; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v197; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v198; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v199; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v200; // 0:x0.16

  if ( (byte_4D2B771 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&Method_FavoriteChangeComponent_OnClickServant__);
    sub_1C93AD4(&Method_FavoriteChangeComponent_closeSvtDetail__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Rarity_TypeInfo);
    sub_1C93AD4(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__);
    sub_1C93AD4(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__);
    sub_1C93AD4(&FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_12025/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_12023/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_12037/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_12036/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_12022/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_12026/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_12024/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_12038/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4D2B771 = 1;
  }
  v7 = sub_1C93D20(FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_163;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( n < 0 )
  {
    v22 = 0;
  }
  else
  {
    favoriteChangeManager = (__int64)this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_163;
    v22 = FavoriteChangeListViewManager__GetItem((FavoriteChangeListViewManager_o *)favoriteChangeManager, n, v16);
  }
  *(_QWORD *)(v7 + 24) = v22;
  v23 = (FavoriteChangeListViewItem_o **)(v7 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)v22, (int32_t)v16, v17, v18, v19, v20, v21);
  if ( !*(_QWORD *)(v7 + 24) )
    goto LABEL_163;
  v24 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 120LL);
  if ( !v24 )
    goto LABEL_163;
  v25 = *(_OWORD *)(v24 + 32);
  *(_OWORD *)&v196.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
  *(_OWORD *)&v196.fields.fakeValue = v25;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v195 = v196;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v195, 0);
  this->fields.usrSvtId = favoriteChangeManager;
  if ( kind == 1 )
  {
    FavoriteChangeComponent__setFavoriteRequest(this, *v23, v26);
    return;
  }
  if ( kind == 2 )
  {
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v23 )
    {
      userSvtEntity = (*v23)->fields.userSvtEntity;
      v32 = (CommonUI_o *)favoriteChangeManager;
      v33 = (ServantStatusDialog_ResultDelegate_o *)sub_1C93D20(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v33,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_closeSvtDetail__,
        0);
      if ( v32 )
      {
        CommonUI__OpenServantStatusDialog_31591412(v32, 0, userSvtEntity, v33, 0, 0, 0);
        return;
      }
    }
    goto LABEL_163;
  }
  if ( kind != 3 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    if ( !*v23 )
      goto LABEL_163;
    (*v23)->fields.isSwapChoice ^= 1u;
    v34 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v34 = (_QWORD *)sub_1C93AEC(Method_FavoriteChangeComponent_OnClickServant__);
    v29 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v34, v34[4]);
    v30 = 0;
    goto LABEL_42;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v23 )
      goto LABEL_163;
    (*v23)->fields.isSwapLock ^= 1u;
    v28 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1C93AEC(Method_FavoriteChangeComponent_OnClickServant__);
    v29 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v28, v28[4]);
    v30 = 11;
    goto LABEL_42;
  }
  favoriteChangeManager = (__int64)*v23;
  if ( !*v23 )
    goto LABEL_163;
  if ( tabModeKind == 3 )
  {
    if ( *(_QWORD *)(favoriteChangeManager + 120) )
    {
      if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(favoriteChangeManager + 120), 0) )
      {
LABEL_35:
        v35 = Method_FavoriteChangeComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
          v35 = (_QWORD *)sub_1C93AEC(Method_FavoriteChangeComponent_OnClickServant__);
        v29 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v35, v35[4]);
LABEL_41:
        v30 = 2;
LABEL_42:
        OverwriteAssetSoundName__PlaySystemSe(v29, v30, 0, 0);
        goto LABEL_43;
      }
      favoriteChangeManager = (__int64)*v23;
      if ( !*v23 )
        goto LABEL_163;
    }
    if ( FavoriteChangeListViewItem__get_IsHerioneReave((FavoriteChangeListViewItem_o *)favoriteChangeManager, v9) )
      goto LABEL_35;
    v62 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v62 = (_QWORD *)sub_1C93AEC(Method_FavoriteChangeComponent_OnClickServant__);
    v63 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v62, v62[4]);
    OverwriteAssetSoundName__PlaySystemSe(v63, 0, 0, 0);
    favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0);
    if ( !favoriteChangeManager )
      goto LABEL_163;
    v65 = *(_QWORD *)(favoriteChangeManager + 128);
    if ( !v65 )
    {
LABEL_77:
      FavoriteChangeComponent__PushRequest(this, *v23, v64);
      goto LABEL_43;
    }
    if ( !*v23 )
      goto LABEL_163;
    v66 = (*v23)->fields.userSvtEntity;
    if ( !v66 )
      goto LABEL_163;
    v67 = *(_OWORD *)&v66->fields.id.fields.fakeValue;
    *(_OWORD *)&v196.fields.currentCryptoKey = *(_OWORD *)&v66->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v196.fields.fakeValue = v67;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v194 = v196;
    if ( v65 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v194, 0) )
      goto LABEL_77;
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !favoriteChangeManager )
      goto LABEL_163;
    favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)favoriteChangeManager,
                                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !favoriteChangeManager )
      goto LABEL_163;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
               v65,
               (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !favoriteChangeManager )
      goto LABEL_163;
    favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)favoriteChangeManager,
                                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_163;
    v69 = (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v198.fields.currentCryptoKey = klass;
    *(_QWORD *)&v198.fields.fakeValue = monitor;
    favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v198, 0);
    if ( !v69 )
      goto LABEL_163;
    v72 = DataMasterBase_object__object__int___GetEntity(
            v69,
            favoriteChangeManager,
            (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    favoriteChangeManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)Entity, 0, 0);
    if ( !*v23 )
      goto LABEL_163;
    v74 = favoriteChangeManager;
    favoriteChangeManager = (__int64)(*v23)->fields.userSvtEntity;
    if ( !favoriteChangeManager )
      goto LABEL_163;
    OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)favoriteChangeManager, 0, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v76 = LocalizationManager__Get((System_String_o *)StringLiteral_12038/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
    v77 = LocalizationManager__Get((System_String_o *)StringLiteral_12037/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
    favoriteChangeManager = sub_1C93B7C(object___TypeInfo, 6);
    if ( !v74 )
      goto LABEL_163;
    v78 = favoriteChangeManager;
    v79 = *(_DWORD *)(v74 + 24);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    favoriteChangeManager = (__int64)Rarity__getRarityType(v79, 0);
    if ( !v78 )
      goto LABEL_163;
    v86 = favoriteChangeManager;
    if ( !favoriteChangeManager
      || (favoriteChangeManager = sub_1C93C10(favoriteChangeManager, *(_QWORD *)(*(_QWORD *)v78 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v78 + 24) )
        goto LABEL_164;
      *(_QWORD *)(v78 + 32) = v86;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v78 + 32), v86, v80, v81, v82, v83, v84, v85);
      if ( !v72 )
        goto LABEL_163;
      favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v72, 0);
      v93 = favoriteChangeManager;
      if ( !favoriteChangeManager
        || (favoriteChangeManager = sub_1C93C10(favoriteChangeManager, *(_QWORD *)(*(_QWORD *)v78 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v78 + 24) <= 1u )
          goto LABEL_164;
        *(_QWORD *)(v78 + 40) = v93;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v78 + 40), v93, v87, v88, v89, v90, v91, v92);
        v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                0);
        v95 = Entity[6].klass;
        *(_QWORD *)&v199.fields.fakeValue = Entity[6].monitor;
        v96 = v94;
        *(_QWORD *)&v199.fields.currentCryptoKey = v95;
        favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v199, 0);
        if ( !Master_object )
          goto LABEL_163;
        favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                           (ServantLimitImageMaster_o *)Master_object,
                                           v96,
                                           favoriteChangeManager,
                                           1,
                                           0);
        v103 = favoriteChangeManager;
        if ( !favoriteChangeManager
          || (favoriteChangeManager = sub_1C93C10(favoriteChangeManager, *(_QWORD *)(*(_QWORD *)v78 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v78 + 24) <= 2u )
            goto LABEL_164;
          *(_QWORD *)(v78 + 48) = v103;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v78 + 48), v103, v97, v98, v99, v100, v101, v102);
          if ( !OverwriteStatus )
            goto LABEL_163;
          favoriteChangeManager = (__int64)Rarity__getRarityType(OverwriteStatus->fields._Rarity_k__BackingField, 0);
          v110 = favoriteChangeManager;
          if ( !favoriteChangeManager
            || (favoriteChangeManager = sub_1C93C10(favoriteChangeManager, *(_QWORD *)(*(_QWORD *)v78 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v78 + 24) <= 3u )
              goto LABEL_164;
            *(_QWORD *)(v78 + 56) = v110;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v78 + 56), v110, v104, v105, v106, v107, v108, v109);
            if ( !*v23 )
              goto LABEL_163;
            favoriteChangeManager = (__int64)(*v23)->fields.servantEntity;
            if ( !favoriteChangeManager )
              goto LABEL_163;
            favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)favoriteChangeManager, 0);
            v117 = favoriteChangeManager;
            if ( !favoriteChangeManager
              || (favoriteChangeManager = sub_1C93C10(favoriteChangeManager, *(_QWORD *)(*(_QWORD *)v78 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v78 + 24) <= 4u )
                goto LABEL_164;
              *(_QWORD *)(v78 + 64) = v117;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v78 + 64), v117, v111, v112, v113, v114, v115, v116);
              v118 = *v23;
              if ( !*v23 )
                goto LABEL_163;
              v119 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v118->fields.userSvtEntity;
              if ( !v119 )
                goto LABEL_163;
              svtId = v118->fields.svtId;
              v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v119[6], 0);
              favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                 (ServantLimitImageMaster_o *)Master_object,
                                                 svtId,
                                                 v121,
                                                 1,
                                                 0);
              v128 = favoriteChangeManager;
              if ( !favoriteChangeManager
                || (favoriteChangeManager = sub_1C93C10(favoriteChangeManager, *(_QWORD *)(*(_QWORD *)v78 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v78 + 24) > 5u )
                {
                  *(_QWORD *)(v78 + 72) = v128;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v78 + 72), v128, v122, v123, v124, v125, v126, v127);
                  v129 = System_String__Format_64467168(v77, (System_Object_array *)v78, 0);
                  v130 = LocalizationManager__Get((System_String_o *)StringLiteral_12036/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                  v131 = LocalizationManager__Get((System_String_o *)StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v133 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v133,
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
                    CommonUI__OpenConfirmDialog_31581040(
                      (CommonUI_o *)Instance,
                      v76,
                      v129,
                      v130,
                      v131,
                      v133,
                      *(_DWORD *)(*(_QWORD *)(favoriteChangeManager + 184) + 512LL),
                      *(_DWORD *)(*(_QWORD *)(favoriteChangeManager + 184) + 524LL),
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
                  goto LABEL_163;
                }
LABEL_164:
                sub_1C93D34(favoriteChangeManager);
              }
            }
          }
        }
      }
    }
LABEL_165:
    v192 = sub_1C93D50();
    sub_1C93BFC(v192, 0);
  }
  v36 = FavoriteChangeListViewItem__get_IsCanNotSelect((FavoriteChangeListViewItem_o *)favoriteChangeManager, v9);
  v37 = Method_FavoriteChangeComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
    v37 = (_QWORD *)sub_1C93AEC(Method_FavoriteChangeComponent_OnClickServant__);
  v29 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v37, v37[4]);
  if ( v36 )
    goto LABEL_41;
  OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0, 0);
  if ( !*v23 )
    goto LABEL_163;
  servantEntity = (*v23)->fields.servantEntity;
  favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !favoriteChangeManager )
    goto LABEL_163;
  v49 = *(_QWORD *)(favoriteChangeManager + 120);
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_163;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !favoriteChangeManager )
    goto LABEL_163;
  v50 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
          v49,
          (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_163;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v50 )
    goto LABEL_163;
  v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager;
  v53 = v50[5].klass;
  v52 = v50[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v197.fields.currentCryptoKey = v53;
  *(_QWORD *)&v197.fields.fakeValue = v52;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v197, 0);
  if ( !v51 )
    goto LABEL_163;
  v54 = DataMasterBase_object__object__int___GetEntity(
          v51,
          favoriteChangeManager,
          (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v55 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  favoriteChangeManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v50, 0, 0);
  if ( !*v23 )
    goto LABEL_163;
  v56 = favoriteChangeManager;
  favoriteChangeManager = (__int64)(*v23)->fields.userSvtEntity;
  if ( !favoriteChangeManager )
    goto LABEL_163;
  v57 = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)favoriteChangeManager, 0, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  favoriteChangeManager = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12026/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0);
  if ( !*v23 )
    goto LABEL_163;
  v58 = (System_String_o *)favoriteChangeManager;
  v59 = (*v23)->fields.userSvtEntity;
  title = v58;
  if ( !v59 )
    goto LABEL_67;
  favoriteChangeManager = UserServantEntity__IsEventJoin(v59, 0);
  if ( (favoriteChangeManager & 1) == 0 )
    goto LABEL_67;
  if ( !*v23 )
    goto LABEL_163;
  v60 = (*v23)->fields.userSvtEntity;
  if ( !v60 || !UserServantEntity__IsNoPeriod(v60, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12024/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0);
  }
  else
  {
LABEL_67:
    v61 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v134 = LocalizationManager__Get((System_String_o *)StringLiteral_12025/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0);
  v135 = System_String__Concat_64425724(v134, v61, 0);
  favoriteChangeManager = sub_1C93B7C(object___TypeInfo, 6);
  if ( !v56 )
    goto LABEL_163;
  v136 = (System_Object_array *)favoriteChangeManager;
  v137 = *(_DWORD *)(v56 + 24);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v137, 0);
  if ( !v136 )
LABEL_163:
    sub_1C93D2C(favoriteChangeManager, v9);
  v144 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C93C10(favoriteChangeManager, v136->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_165;
  }
  if ( !LODWORD(v136->max_length) )
    goto LABEL_164;
  v136->m_Items[0] = v144;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v136->m_Items, (int32_t)v144, v138, v139, v140, v141, v142, v143);
  if ( !v54 )
    goto LABEL_163;
  favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v54, 0);
  v151 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C93C10(favoriteChangeManager, v136->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_165;
  }
  if ( LODWORD(v136->max_length) <= 1 )
    goto LABEL_164;
  v136->m_Items[1] = v151;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v136->m_Items[1], (int32_t)v151, v145, v146, v147, v148, v149, v150);
  v153 = v50[5].klass;
  v152 = v50[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v200.fields.currentCryptoKey = v153;
  *(_QWORD *)&v200.fields.fakeValue = v152;
  v154 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v200, 0);
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v50[6],
                            0);
  if ( !v55 )
    goto LABEL_163;
  favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                     (ServantLimitImageMaster_o *)v55,
                                     v154,
                                     favoriteChangeManager,
                                     1,
                                     0);
  v161 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C93C10(favoriteChangeManager, v136->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_165;
  }
  if ( LODWORD(v136->max_length) <= 2 )
    goto LABEL_164;
  v136->m_Items[2] = v161;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v136->m_Items[2], (int32_t)v161, v155, v156, v157, v158, v159, v160);
  if ( !v57 )
    goto LABEL_163;
  favoriteChangeManager = (__int64)Rarity__getRarityType(v57->fields._Rarity_k__BackingField, 0);
  v168 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C93C10(favoriteChangeManager, v136->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_165;
  }
  if ( LODWORD(v136->max_length) <= 3 )
    goto LABEL_164;
  v136->m_Items[3] = v168;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v136->m_Items[3], (int32_t)v168, v162, v163, v164, v165, v166, v167);
  if ( !servantEntity )
    goto LABEL_163;
  favoriteChangeManager = (__int64)ServantEntity__getClassName(servantEntity, 0);
  v175 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C93C10(favoriteChangeManager, v136->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_165;
  }
  if ( LODWORD(v136->max_length) <= 4 )
    goto LABEL_164;
  v136->m_Items[4] = v175;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v136->m_Items[4], (int32_t)v175, v169, v170, v171, v172, v173, v174);
  v176 = *v23;
  if ( !*v23 )
    goto LABEL_163;
  v177 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v176->fields.userSvtEntity;
  if ( !v177 )
    goto LABEL_163;
  v178 = v176->fields.svtId;
  v179 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v177[6], 0);
  favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                     (ServantLimitImageMaster_o *)v55,
                                     v178,
                                     v179,
                                     1,
                                     0);
  v186 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C93C10(favoriteChangeManager, v136->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_165;
  }
  if ( LODWORD(v136->max_length) <= 5 )
    goto LABEL_164;
  v136->m_Items[5] = v186;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v136->m_Items[5], (int32_t)v186, v180, v181, v182, v183, v184, v185);
  v187 = System_String__Format_64467168(v135, v136, 0);
  v188 = LocalizationManager__Get((System_String_o *)StringLiteral_12023/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0);
  v189 = LocalizationManager__Get((System_String_o *)StringLiteral_12022/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0);
  v190 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v191 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v191,
    (Il2CppObject *)v7,
    Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__,
    0);
  favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  v9 = (const MethodInfo *)title;
  if ( !v190 )
    goto LABEL_163;
  CommonUI__OpenConfirmDialog_31580600(
    (CommonUI_o *)v190,
    title,
    v187,
    v188,
    v189,
    v191,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0);
LABEL_43:
  v38 = this->fields.favoriteChangeManager;
  v39 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C93D20(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v39,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    v40);
  if ( !v38 )
    goto LABEL_163;
  v38->fields.callbackFunc = v39;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v38->fields.callbackFunc, (int32_t)v39, v41, v42, v43, v44, v45, v46);
  FavoriteChangeListViewManager__SetMode_33601088(v38, 2, v47);
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
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x2

  if ( (byte_4D2B76E & 1) == 0 )
  {
    sub_1C93AD4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4D2B76E = 1;
  }
  FavoriteChangeComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.cancelCallback = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.cancelCallback, 0, v5, v6, v7, v8, v9, v10);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_40624832((TitleInfoControl_o *)gameObject, 1, 54, 0, 0);
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
        v14 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C93D20(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          v15),
        !favoriteChangeManager) )
  {
LABEL_10:
    sub_1C93D2C(gameObject, v4);
  }
  favoriteChangeManager->fields.callbackFunc = v14;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&favoriteChangeManager->fields.callbackFunc,
    (int32_t)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  FavoriteChangeListViewManager__SetMode_33601088(favoriteChangeManager, 2, v22);
  this->fields.state = 2;
}


void FavoriteChangeComponent__PushRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
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

  if ( (byte_4D2B775 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_FavoriteChangeComponent_EndePushRequest__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B775 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !userSvtEntity )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  m_CachedPtr = v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v45, 0);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0);
  v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v7->fields.writeMasterDataThread;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v43, 0);
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v42, 0);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndePushRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v41, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                      userSvtEntity->fields.imageLimitCount,
                      0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(userSvtEntity->fields.dispLimitCount, 0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
          userSvtEntity->fields.commandCardLimitCount,
          0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(userSvtEntity->fields.iconLimitCount, 0);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(userSvtEntity->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                  userSvtEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                       userSvtEntity->fields.randomLimitCount,
                       0);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
          userSvtEntity->fields.randomLimitCountSupport,
          0);
  v33 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v46, 0);
  if ( !v22 )
LABEL_18:
    sub_1C93D2C(limitCountSupport, v6);
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

  if ( (byte_4D2B77D & 1) == 0 )
  {
    sub_1C93AD4(&Method_FavoriteChangeComponent_EndStatusSync__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D2B77D = 1;
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
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v25,
                                                                   (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v16 = v26;
        v15 = choiceList;
        v18 = 1;
        v17 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C93D2C(favoriteChangeManager, callback);
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
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v14,
                                                                   (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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
    sub_1C93D2C(favoriteChangeManager, method);
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

  if ( (byte_4D2B76F & 1) == 0 )
  {
    sub_1C93AD4(&Method_FavoriteChangeComponent_endCancelButton__);
    sub_1C93AD4(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4D2B76F = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.cancelCallback,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C93D20(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2B777 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__);
    sub_1C93AD4(&FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo);
    byte_4D2B777 = 1;
  }
  v8 = sub_1C93D20(FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        *(_QWORD *)(v8 + 24) = this,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v8 + 24), (int32_t)this, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v8 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v8,
          Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__,
          0),
        !Instance) )
  {
    sub_1C93D2C(v9, v10);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v18, 0);
}


void FavoriteChangeComponent__dispSvtList(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v3);
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
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  const MethodInfo *v15; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_4D2B770 & 1) == 0 )
  {
    sub_1C93AD4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4D2B770 = 1;
  }
  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          v6 = this->fields.favoriteChangeManager,
          v7 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C93D20(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
          FavoriteChangeListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
            v8),
          !v6) )
    {
LABEL_11:
      sub_1C93D2C(favoriteChangeManager, isRequest);
    }
    v6->fields.callbackFunc = v7;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v6->fields.callbackFunc, (int32_t)v7, v9, v10, v11, v12, v13, v14);
    FavoriteChangeListViewManager__SetMode_33601088(v6, 2, v15);
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

  if ( (byte_4D2B77A & 1) == 0 )
  {
    sub_1C93AD4(&Method_FavoriteChangeComponent_EndClickTabChoice__);
    sub_1C93AD4(&Method_FavoriteChangeComponent_onClickChoiceTabButton__);
    sub_1C93AD4(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4D2B77A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_FavoriteChangeComponent_onClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C93D20(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabChoice__,
          v8);
        FavoriteChangeComponent__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C93D20(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2B779 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FavoriteChangeComponent_EndClickTabLock__);
    sub_1C93AD4(&Method_FavoriteChangeComponent_onClickLockTabButton__);
    sub_1C93AD4(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4D2B779 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_FavoriteChangeComponent_onClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C93D20(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabLock__,
          v8);
        FavoriteChangeComponent__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C93D20(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2B778 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FavoriteChangeComponent_EndClickTabNormal__);
    sub_1C93AD4(&Method_FavoriteChangeComponent_onClickNormalTabButton__);
    sub_1C93AD4(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4D2B778 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_FavoriteChangeComponent_onClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C93D20(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2B77B & 1) == 0 )
  {
    sub_1C93AD4(&Method_FavoriteChangeComponent_EndClickTabPush__);
    sub_1C93AD4(&Method_FavoriteChangeComponent_onClickPushTabButton__);
    sub_1C93AD4(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4D2B77B = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_FavoriteChangeComponent_onClickPushTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_FavoriteChangeComponent_onClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C93D20(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
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
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x22
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t m_CachedPtr; // x23
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  __int128 v14; // q0
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
  NetworkManager_ResultCallbackFunc_o *v16; // x22
  Il2CppObject *Request_object; // x0
  __int128 v18; // q1
  CardFavoriteRequest_o *v19; // x20
  int32_t v20; // w25
  int32_t v21; // w26
  int32_t v22; // w27
  int32_t v23; // w28
  bool IsLock; // w29
  char v25; // w22
  int32_t commonFlag; // w24
  int32_t battleVoice; // w21
  int32_t randomSettingOwn; // w23
  int32_t v29; // w0
  __int64 v30; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-DCh]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-D8h]
  int64_t v34; // [xsp+60h] [xbp-D0h]
  struct System_Threading_Thread_o *v35; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4D2B773 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_FavoriteChangeComponent_EndCardFavoriteRequest__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B773 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !userSvtEntity )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  m_CachedPtr = v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v12;
  *(_QWORD *)&v39.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v39, 0);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0);
  v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v7->fields.writeMasterDataThread;
  *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v38.fields.fakeValue = v14;
  v35 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v37 = v38;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v37, 0);
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v16,
                     (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v19 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v36.fields.fakeValue = v18;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v36, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                      userSvtEntity->fields.imageLimitCount,
                      0);
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(userSvtEntity->fields.dispLimitCount, 0);
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
          userSvtEntity->fields.commandCardLimitCount,
          0);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(userSvtEntity->fields.iconLimitCount, 0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(userSvtEntity->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v25 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                  userSvtEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                       userSvtEntity->fields.randomLimitCount,
                       0);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
          userSvtEntity->fields.randomLimitCountSupport,
          0);
  v30 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v40.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v29;
  *(_QWORD *)&v40.fields.currentCryptoKey = v30;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v40, 0);
  if ( !v19 )
LABEL_18:
    sub_1C93D2C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v19,
    targetUsrSVtId,
    imageLimitCount,
    v20,
    v21,
    v22,
    v23,
    1,
    IsLock,
    v25 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v35 == (struct System_Threading_Thread_o *)v34,
    0);
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

  if ( (byte_4D2B77C & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11745/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C93AD4(&StringLiteral_17792/*"button_push_reg"*/);
    sub_1C93AD4(&StringLiteral_17793/*"button_push_unreg"*/);
    sub_1C93AD4(&StringLiteral_17778/*"button_allchoice_reg"*/);
    sub_1C93AD4(&StringLiteral_17781/*"button_alllock_unreg"*/);
    sub_1C93AD4(&StringLiteral_11743/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C93AD4(&StringLiteral_11744/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C93AD4(&StringLiteral_17794/*"button_select_reg"*/);
    sub_1C93AD4(&StringLiteral_17795/*"button_select_unreg"*/);
    sub_1C93AD4(&StringLiteral_17780/*"button_alllock_reg"*/);
    sub_1C93AD4(&StringLiteral_17779/*"button_allchoice_unreg"*/);
    sub_1C93AD4(&StringLiteral_7238/*"HEADER_MSG_FAVORITE"*/);
    byte_4D2B77C = 1;
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
    v6 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17795/*"button_select_unreg"*/ : &StringLiteral_17794/*"button_select_reg"*/);
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
    v7 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17780/*"button_alllock_reg"*/ : &StringLiteral_17781/*"button_alllock_unreg"*/);
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
    v8 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17778/*"button_allchoice_reg"*/ : &StringLiteral_17779/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton
      || (UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabBoxCollider) == 0)
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 3, 0),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite) == 0) )
    {
LABEL_51:
      sub_1C93D2C(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v9 = &StringLiteral_17792/*"button_push_reg"*/;
    else
      v9 = &StringLiteral_17793/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v9, 0);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7238/*"HEADER_MSG_FAVORITE"*/, 0);
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
        v14 = &StringLiteral_11744/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_45;
      case 2:
        v13 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = &StringLiteral_11743/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_45;
      case 3:
        v13 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = &StringLiteral_11745/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
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
        FavoriteChangeListViewManager__SetMode_33601088((FavoriteChangeListViewManager_o *)normalTabButton, 2, v15);
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
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC0E40;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC0DF8;
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
  if ( (byte_4D2B77F & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2B77F = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void FavoriteChangeComponent_RequestCallbackFunc__EndInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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

  if ( (byte_4D2B780 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__);
    byte_4D2B780 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31581328(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_1C93D2C(Instance, v6);
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
    sub_1C93D2C(this, method);
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

  if ( (byte_4D2B781 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__);
    byte_4D2B781 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__3 = this->fields.__9__3;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__,
        0);
      this->fields.__9__3 = _9__3;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31581328(v7, _9__3, 0);
      return;
    }
LABEL_10:
    sub_1C93D2C(Instance, v6);
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
  if ( (byte_4D2B782 & 1) == 0 )
  {
    this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)sub_1C93AD4(&StringLiteral_9895/*"OnClickFavoriteDecide"*/);
    byte_4D2B782 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0
    || (this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)_4__this->fields.favoriteChangeManager) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)this,
    (System_String_o *)StringLiteral_9895/*"OnClickFavoriteDecide"*/,
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
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_4D2B783 & 1) == 0 )
  {
    sub_1C93AD4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FavoriteChangeComponent_OnClickServant__);
    sub_1C93AD4(&StringLiteral_3457/*"CLICK_BACK"*/);
    byte_4D2B783 = 1;
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
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3457/*"CLICK_BACK"*/, 0);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1C93D2C(_4__this, method);
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
  v9 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C93D20(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v9,
    v7,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    v10);
  if ( !monitor )
    goto LABEL_18;
  *((_QWORD *)monitor + 48) = v9;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(monitor + 384), (int32_t)v9, v11, v12, v13, v14, v15, v16);
  FavoriteChangeListViewManager__SetMode_33601088((FavoriteChangeListViewManager_o *)monitor, 2, v17);
}