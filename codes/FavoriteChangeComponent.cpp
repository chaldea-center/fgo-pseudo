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
  FavoriteChangeListViewManager_o *v5; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v6; // x21

  if ( (byte_4CE94A3 & 1) == 0 )
  {
    sub_1C7BAE8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4CE94A3 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, 0),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0)
    || (ListViewManager__SortItem((ListViewManager_o *)favoriteChangeManager, -1, 0, -1, 0),
        v5 = this->fields.favoriteChangeManager,
        v6 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C7BD34(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0),
        !v5) )
  {
    sub_1C7BD40(favoriteChangeManager, result);
  }
  FavoriteChangeListViewManager__SetMode(v5, 2, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeComponent__EndClickTabChoice(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, 0),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0) )
    {
      sub_1C7BD40(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_33512120(favoriteChangeManager, 2, 0);
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

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, 0),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0) )
    {
      sub_1C7BD40(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_33512120(favoriteChangeManager, 2, 0);
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

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, 0),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0) )
    {
      sub_1C7BD40(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_33512120(favoriteChangeManager, 2, 0);
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

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, 0),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0) )
    {
      sub_1C7BD40(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_33512120(favoriteChangeManager, 2, 0);
  }
  FavoriteChangeComponent__setModeTabKind(this, 3, method);
}


void FavoriteChangeComponent__EndCloseConfirmSelectFavorite(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CE94A1 & 1) == 0 )
  {
    sub_1C7BAE8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4CE94A1 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  v4 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C7BD34(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0);
  if ( !favoriteChangeManager )
    sub_1C7BD40(v5, v6);
  FavoriteChangeListViewManager__SetMode(favoriteChangeManager, 2, v4, 0);
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
    sub_1C7BA8C(p_requedstCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
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
  FavoriteChangeListViewManager_o *v5; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v6; // x21

  if ( (byte_4CE94A5 & 1) == 0 )
  {
    sub_1C7BAE8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4CE94A5 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__UpdateDisplayState(favoriteChangeManager, 1, 0),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0)
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, 0),
        v5 = this->fields.favoriteChangeManager,
        v6 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C7BD34(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0),
        !v5) )
  {
    sub_1C7BD40(favoriteChangeManager, result);
  }
  FavoriteChangeListViewManager__SetMode(v5, 2, v6, 0);
}


void FavoriteChangeComponent__Init(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4CE949C & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_7216/*"HEADER_MSG_FAVORITE"*/);
    byte_4CE949C = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager )
    goto LABEL_8;
  FavoriteChangeListViewManager__DestroyList(favoriteChangeManager, 0);
  this->fields.state = 0;
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  favoriteChangeManager = (FavoriteChangeListViewManager_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_7216/*"HEADER_MSG_FAVORITE"*/,
                                                               0);
  if ( !infoLb )
LABEL_8:
    sub_1C7BD40(favoriteChangeManager, method);
  UILabel__set_text(infoLb, (System_String_o *)favoriteChangeManager, 0);
  FavoriteChangeComponent__setModeTabKind(this, 0, v5);
}


void FavoriteChangeComponent__OnClickScaleChange(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4CE94AD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_FavoriteChangeComponent_OnClickScaleChange__);
    byte_4CE94AD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_FavoriteChangeComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      sub_1C7BD40(0, v5);
    FavoriteChangeListViewManager__ChangeIconScale(favoriteChangeManager, 0);
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
  System_String_o *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
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
  FavoriteChangeListViewManager_o *v38; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v39; // x21
  ServantEntity_o *servantEntity; // x22
  int64_t v41; // x23
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x26
  Il2CppObject *v46; // x29
  Il2CppObject *Master_object; // x24
  __int64 v48; // x23
  ServantOverwriteStatus_o *OverwriteStatus; // x28
  System_String_o *v50; // x26
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x0
  const MethodInfo *v53; // x2
  int64_t v54; // x22
  struct UserServantEntity_o *v55; // x8
  __int128 v56; // q0
  System_String_o *v57; // x0
  System_String_o *v58; // x26
  System_Object_array *v59; // x27
  int32_t v60; // w23
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  Il2CppObject *v67; // x23
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  Il2CppObject *v74; // x23
  void *v75; // x23
  Il2CppClass *v76; // x29
  int32_t v77; // w23
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  Il2CppObject *v84; // x23
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  Il2CppObject *v91; // x23
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  Il2CppObject *v98; // x22
  FavoriteChangeListViewItem_o *v99; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v100; // x9
  int32_t svtId; // w21
  int32_t v102; // w0
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  Il2CppObject *v109; // x21
  System_String_o *v110; // x21
  System_String_o *v111; // x22
  System_String_o *v112; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v114; // x25
  Il2CppObject *v115; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v116; // x22
  void *v117; // x23
  Il2CppClass *v118; // x24
  Il2CppObject *v119; // x28
  Il2CppObject *v120; // x23
  __int64 v121; // x29
  ServantOverwriteStatus_o *v122; // x27
  System_String_o *v123; // x22
  System_String_o *v124; // x24
  System_Object_array *v125; // x25
  int32_t v126; // w29
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  Il2CppObject *v133; // x29
  int32_t v134; // w2
  int32_t v135; // w3
  System_String_o *v136; // x4
  int32_t v137; // w5
  int64_t v138; // x6
  System_String_o *v139; // x7
  Il2CppObject *v140; // x28
  int32_t v141; // w0
  Il2CppClass *v142; // x8
  int32_t v143; // w26
  int32_t v144; // w2
  int32_t v145; // w3
  System_String_o *v146; // x4
  int32_t v147; // w5
  int64_t v148; // x6
  System_String_o *v149; // x7
  Il2CppObject *v150; // x26
  int32_t v151; // w2
  int32_t v152; // w3
  System_String_o *v153; // x4
  int32_t v154; // w5
  int64_t v155; // x6
  System_String_o *v156; // x7
  Il2CppObject *v157; // x26
  int32_t v158; // w2
  int32_t v159; // w3
  System_String_o *v160; // x4
  int32_t v161; // w5
  int64_t v162; // x6
  System_String_o *v163; // x7
  Il2CppObject *v164; // x26
  FavoriteChangeListViewItem_o *v165; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v166; // x9
  int32_t v167; // w21
  int32_t v168; // w0
  int32_t v169; // w2
  int32_t v170; // w3
  System_String_o *v171; // x4
  int32_t v172; // w5
  int64_t v173; // x6
  System_String_o *v174; // x7
  Il2CppObject *v175; // x21
  System_String_o *v176; // x21
  System_String_o *v177; // x23
  System_String_o *v178; // x24
  Il2CppObject *v179; // x25
  CommonConfirmDialog_ClickDelegate_o *v180; // x26
  __int64 v181; // x0
  System_String_o *title; // [xsp+48h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v183; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v184; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v185; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v187; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // 0:x0.16

  if ( (byte_4CE94A0 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C7BAE8(&Method_FavoriteChangeComponent_OnClickServant__);
    sub_1C7BAE8(&Method_FavoriteChangeComponent_closeSvtDetail__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&object___TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Rarity_TypeInfo);
    sub_1C7BAE8(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__);
    sub_1C7BAE8(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__);
    sub_1C7BAE8(&FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11988/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_11986/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_12000/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_11998/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_11999/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_11985/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_11989/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_11987/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_12001/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4CE94A0 = 1;
  }
  v7 = sub_1C7BD34(FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo);
  FavoriteChangeComponent___c__DisplayClass31_0___ctor((FavoriteChangeComponent___c__DisplayClass31_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_160;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( n < 0 )
  {
    v22 = 0;
  }
  else
  {
    favoriteChangeManager = (__int64)this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_160;
    v22 = FavoriteChangeListViewManager__GetItem((FavoriteChangeListViewManager_o *)favoriteChangeManager, n, 0);
  }
  *(_QWORD *)(v7 + 24) = v22;
  v23 = (FavoriteChangeListViewItem_o **)(v7 + 24);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)v22, v16, v17, v18, v19, v20, v21);
  if ( !*(_QWORD *)(v7 + 24) )
    goto LABEL_160;
  v24 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 120LL);
  if ( !v24 )
    goto LABEL_160;
  v25 = *(_OWORD *)(v24 + 32);
  *(_OWORD *)&v185.fields.currentCryptoKey = *(_OWORD *)(v24 + 16);
  *(_OWORD *)&v185.fields.fakeValue = v25;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v184 = v185;
  this->fields.usrSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v184, 0);
  if ( kind == 1 )
  {
    FavoriteChangeComponent__setFavoriteRequest(this, *v23, v26);
    return;
  }
  if ( kind == 2 )
  {
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v23 )
    {
      userSvtEntity = (*v23)->fields.userSvtEntity;
      v32 = (CommonUI_o *)favoriteChangeManager;
      v33 = (ServantStatusDialog_ResultDelegate_o *)sub_1C7BD34(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v33,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_closeSvtDetail__,
        0);
      if ( v32 )
      {
        CommonUI__OpenServantStatusDialog_31493272(v32, 0, userSvtEntity, v33, 0, 0, 0);
        return;
      }
    }
    goto LABEL_160;
  }
  if ( kind != 3 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    favoriteChangeManager = (__int64)*v23;
    if ( !*v23 )
      goto LABEL_160;
    FavoriteChangeListViewItem__SwapChoice((FavoriteChangeListViewItem_o *)favoriteChangeManager, 0);
    v34 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v34 = (_QWORD *)sub_1C7BB00(Method_FavoriteChangeComponent_OnClickServant__);
    v29 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v34, v34[4]);
    v30 = 0;
    goto LABEL_41;
  }
  if ( tabModeKind == 1 )
  {
    favoriteChangeManager = (__int64)*v23;
    if ( !*v23 )
      goto LABEL_160;
    FavoriteChangeListViewItem__SwapLock((FavoriteChangeListViewItem_o *)favoriteChangeManager, 0);
    v28 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1C7BB00(Method_FavoriteChangeComponent_OnClickServant__);
    v29 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v28, v28[4]);
    v30 = 11;
    goto LABEL_41;
  }
  favoriteChangeManager = (__int64)*v23;
  if ( !*v23 )
    goto LABEL_160;
  if ( tabModeKind != 3 )
  {
    v36 = FavoriteChangeListViewItem__get_IsCanNotSelect((FavoriteChangeListViewItem_o *)favoriteChangeManager, 0);
    v37 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v37 = (_QWORD *)sub_1C7BB00(Method_FavoriteChangeComponent_OnClickServant__);
    v29 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v37, v37[4]);
    if ( v36 )
      goto LABEL_40;
    OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0, 0);
    if ( *v23 )
    {
      servantEntity = (*v23)->fields.servantEntity;
      favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0);
      if ( favoriteChangeManager )
      {
        v41 = *(_QWORD *)(favoriteChangeManager + 120);
        favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( favoriteChangeManager )
        {
          favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                             (DataManager_o *)favoriteChangeManager,
                                             (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( favoriteChangeManager )
          {
            Entity = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
                       v41,
                       (const MethodInfo_3430858 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( favoriteChangeManager )
            {
              favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)favoriteChangeManager,
                                                 (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( Entity )
              {
                v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager;
                klass = Entity[5].klass;
                monitor = Entity[5].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v186.fields.currentCryptoKey = klass;
                *(_QWORD *)&v186.fields.fakeValue = monitor;
                favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v186, 0);
                if ( v43 )
                {
                  v46 = DataMasterBase_object__object__int___GetEntity(
                          v43,
                          favoriteChangeManager,
                          (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                  favoriteChangeManager = (__int64)UserServantEntity__GetOverwriteStatus(
                                                     (UserServantEntity_o *)Entity,
                                                     0,
                                                     0);
                  if ( *v23 )
                  {
                    v48 = favoriteChangeManager;
                    favoriteChangeManager = (__int64)(*v23)->fields.userSvtEntity;
                    if ( favoriteChangeManager )
                    {
                      OverwriteStatus = UserServantEntity__GetOverwriteStatus(
                                          (UserServantEntity_o *)favoriteChangeManager,
                                          0,
                                          0);
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      favoriteChangeManager = (__int64)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11989/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/,
                                                         0);
                      if ( *v23 )
                      {
                        title = (System_String_o *)favoriteChangeManager;
                        if ( !FavoriteChangeListViewItem__get_IsEventJoin(*v23, 0) )
                          goto LABEL_64;
                        favoriteChangeManager = (__int64)*v23;
                        if ( !*v23 )
                          goto LABEL_160;
                        if ( !FavoriteChangeListViewItem__get_IsNoPeriod(
                                (FavoriteChangeListViewItem_o *)favoriteChangeManager,
                                0) )
                        {
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11987/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0);
                        }
                        else
                        {
LABEL_64:
                          v50 = (System_String_o *)StringLiteral_1/*""*/;
                        }
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v57 = LocalizationManager__Get((System_String_o *)StringLiteral_11988/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0);
                        v58 = System_String__Concat_64176912(v57, v50, 0);
                        favoriteChangeManager = sub_1C7BB90(object___TypeInfo, 6);
                        if ( v48 )
                        {
                          v59 = (System_Object_array *)favoriteChangeManager;
                          v60 = *(_DWORD *)(v48 + 24);
                          if ( !Rarity_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                          favoriteChangeManager = (__int64)Rarity__getRarityType(v60, 0);
                          if ( v59 )
                          {
                            v67 = (Il2CppObject *)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_1C7BC24(
                                                        favoriteChangeManager,
                                                        v59->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_162;
                            }
                            if ( !LODWORD(v59->max_length) )
                              goto LABEL_161;
                            v59->m_Items[0] = v67;
                            sub_1C7BA8C(
                              (GrandQuestFolderBoardItem_o *)v59->m_Items,
                              (int32_t)v67,
                              v61,
                              v62,
                              v63,
                              v64,
                              v65,
                              v66);
                            if ( !v46 )
                              goto LABEL_160;
                            favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v46, 0);
                            v74 = (Il2CppObject *)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_1C7BC24(
                                                        favoriteChangeManager,
                                                        v59->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_162;
                            }
                            if ( LODWORD(v59->max_length) <= 1 )
                              goto LABEL_161;
                            v59->m_Items[1] = v74;
                            sub_1C7BA8C(
                              (GrandQuestFolderBoardItem_o *)&v59->m_Items[1],
                              (int32_t)v74,
                              v68,
                              v69,
                              v70,
                              v71,
                              v72,
                              v73);
                            v76 = Entity[5].klass;
                            v75 = Entity[5].monitor;
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            *(_QWORD *)&v187.fields.currentCryptoKey = v76;
                            *(_QWORD *)&v187.fields.fakeValue = v75;
                            v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v187, 0);
                            favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                                      0);
                            if ( Master_object )
                            {
                              favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                 (ServantLimitImageMaster_o *)Master_object,
                                                                 v77,
                                                                 favoriteChangeManager,
                                                                 1,
                                                                 0);
                              v84 = (Il2CppObject *)favoriteChangeManager;
                              if ( favoriteChangeManager )
                              {
                                favoriteChangeManager = sub_1C7BC24(
                                                          favoriteChangeManager,
                                                          v59->obj.klass->_1.element_class);
                                if ( !favoriteChangeManager )
                                  goto LABEL_162;
                              }
                              if ( LODWORD(v59->max_length) <= 2 )
                                goto LABEL_161;
                              v59->m_Items[2] = v84;
                              sub_1C7BA8C(
                                (GrandQuestFolderBoardItem_o *)&v59->m_Items[2],
                                (int32_t)v84,
                                v78,
                                v79,
                                v80,
                                v81,
                                v82,
                                v83);
                              if ( !OverwriteStatus )
                                goto LABEL_160;
                              favoriteChangeManager = (__int64)Rarity__getRarityType(
                                                                 OverwriteStatus->fields._Rarity_k__BackingField,
                                                                 0);
                              v91 = (Il2CppObject *)favoriteChangeManager;
                              if ( favoriteChangeManager )
                              {
                                favoriteChangeManager = sub_1C7BC24(
                                                          favoriteChangeManager,
                                                          v59->obj.klass->_1.element_class);
                                if ( !favoriteChangeManager )
                                  goto LABEL_162;
                              }
                              if ( LODWORD(v59->max_length) <= 3 )
                                goto LABEL_161;
                              v59->m_Items[3] = v91;
                              sub_1C7BA8C(
                                (GrandQuestFolderBoardItem_o *)&v59->m_Items[3],
                                (int32_t)v91,
                                v85,
                                v86,
                                v87,
                                v88,
                                v89,
                                v90);
                              if ( !servantEntity )
                                goto LABEL_160;
                              favoriteChangeManager = (__int64)ServantEntity__getClassName(servantEntity, 0);
                              v98 = (Il2CppObject *)favoriteChangeManager;
                              if ( favoriteChangeManager )
                              {
                                favoriteChangeManager = sub_1C7BC24(
                                                          favoriteChangeManager,
                                                          v59->obj.klass->_1.element_class);
                                if ( !favoriteChangeManager )
                                  goto LABEL_162;
                              }
                              if ( LODWORD(v59->max_length) <= 4 )
                                goto LABEL_161;
                              v59->m_Items[4] = v98;
                              sub_1C7BA8C(
                                (GrandQuestFolderBoardItem_o *)&v59->m_Items[4],
                                (int32_t)v98,
                                v92,
                                v93,
                                v94,
                                v95,
                                v96,
                                v97);
                              v99 = *v23;
                              if ( !*v23 )
                                goto LABEL_160;
                              v100 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v99->fields.userSvtEntity;
                              if ( !v100 )
                                goto LABEL_160;
                              svtId = v99->fields.svtId;
                              v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v100[6], 0);
                              favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                 (ServantLimitImageMaster_o *)Master_object,
                                                                 svtId,
                                                                 v102,
                                                                 1,
                                                                 0);
                              v109 = (Il2CppObject *)favoriteChangeManager;
                              if ( favoriteChangeManager )
                              {
                                favoriteChangeManager = sub_1C7BC24(
                                                          favoriteChangeManager,
                                                          v59->obj.klass->_1.element_class);
                                if ( !favoriteChangeManager )
                                  goto LABEL_162;
                              }
                              if ( LODWORD(v59->max_length) <= 5 )
                                goto LABEL_161;
                              v59->m_Items[5] = v109;
                              sub_1C7BA8C(
                                (GrandQuestFolderBoardItem_o *)&v59->m_Items[5],
                                (int32_t)v109,
                                v103,
                                v104,
                                v105,
                                v106,
                                v107,
                                v108);
                              v110 = System_String__Format_64218356(v58, v59, 0);
                              v111 = LocalizationManager__Get((System_String_o *)StringLiteral_11986/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0);
                              v112 = LocalizationManager__Get((System_String_o *)StringLiteral_11985/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0);
                              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              v114 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C7BD34(CommonConfirmDialog_ClickDelegate_TypeInfo);
                              CommonConfirmDialog_ClickDelegate___ctor(
                                v114,
                                (Il2CppObject *)v7,
                                Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__,
                                0);
                              favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
                              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                              v9 = title;
                              if ( Instance )
                              {
                                CommonUI__OpenConfirmDialog_31482460(
                                  (CommonUI_o *)Instance,
                                  title,
                                  v110,
                                  v111,
                                  v112,
                                  v114,
                                  BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                                  0,
                                  0,
                                  0);
                                goto LABEL_42;
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
    }
LABEL_160:
    sub_1C7BD40(favoriteChangeManager, v9);
  }
  if ( FavoriteChangeListViewItem__get_IsEventJoin((FavoriteChangeListViewItem_o *)favoriteChangeManager, 0) )
    goto LABEL_34;
  favoriteChangeManager = (__int64)*v23;
  if ( !*v23 )
    goto LABEL_160;
  if ( FavoriteChangeListViewItem__get_IsHerioneReave((FavoriteChangeListViewItem_o *)favoriteChangeManager, 0) )
  {
LABEL_34:
    v35 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v35 = (_QWORD *)sub_1C7BB00(Method_FavoriteChangeComponent_OnClickServant__);
    v29 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v35, v35[4]);
LABEL_40:
    v30 = 2;
LABEL_41:
    OverwriteAssetSoundName__PlaySystemSe(v29, v30, 0, 0);
    goto LABEL_42;
  }
  v51 = Method_FavoriteChangeComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
    v51 = (_QWORD *)sub_1C7BB00(Method_FavoriteChangeComponent_OnClickServant__);
  v52 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v51, v51[4]);
  OverwriteAssetSoundName__PlaySystemSe(v52, 0, 0, 0);
  favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !favoriteChangeManager )
    goto LABEL_160;
  v54 = *(_QWORD *)(favoriteChangeManager + 128);
  if ( !v54 )
  {
LABEL_74:
    FavoriteChangeComponent__PushRequest(this, *v23, v53);
    goto LABEL_42;
  }
  if ( !*v23 )
    goto LABEL_160;
  v55 = (*v23)->fields.userSvtEntity;
  if ( !v55 )
    goto LABEL_160;
  v56 = *(_OWORD *)&v55->fields.id.fields.fakeValue;
  *(_OWORD *)&v185.fields.currentCryptoKey = *(_OWORD *)&v55->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v185.fields.fakeValue = v56;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v183 = v185;
  if ( v54 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v183, 0) )
    goto LABEL_74;
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_160;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !favoriteChangeManager )
    goto LABEL_160;
  v115 = DataMasterBase_object__object__long___GetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
           v54,
           (const MethodInfo_3430858 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_160;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v115 )
    goto LABEL_160;
  v116 = (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager;
  v118 = v115[5].klass;
  v117 = v115[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v188.fields.currentCryptoKey = v118;
  *(_QWORD *)&v188.fields.fakeValue = v117;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v188, 0);
  if ( !v116 )
    goto LABEL_160;
  v119 = DataMasterBase_object__object__int___GetEntity(
           v116,
           favoriteChangeManager,
           (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v120 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  favoriteChangeManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v115, 0, 0);
  if ( !*v23 )
    goto LABEL_160;
  v121 = favoriteChangeManager;
  favoriteChangeManager = (__int64)(*v23)->fields.userSvtEntity;
  if ( !favoriteChangeManager )
    goto LABEL_160;
  v122 = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)favoriteChangeManager, 0, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v123 = LocalizationManager__Get((System_String_o *)StringLiteral_12001/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
  v124 = LocalizationManager__Get((System_String_o *)StringLiteral_12000/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
  favoriteChangeManager = sub_1C7BB90(object___TypeInfo, 6);
  if ( !v121 )
    goto LABEL_160;
  v125 = (System_Object_array *)favoriteChangeManager;
  v126 = *(_DWORD *)(v121 + 24);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v126, 0);
  if ( !v125 )
    goto LABEL_160;
  v133 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C7BC24(favoriteChangeManager, v125->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_162;
  }
  if ( !LODWORD(v125->max_length) )
    goto LABEL_161;
  v125->m_Items[0] = v133;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v125->m_Items, (int32_t)v133, v127, v128, v129, v130, v131, v132);
  if ( !v119 )
    goto LABEL_160;
  favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v119, 0);
  v140 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C7BC24(favoriteChangeManager, v125->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_162;
  }
  if ( LODWORD(v125->max_length) <= 1 )
    goto LABEL_161;
  v125->m_Items[1] = v140;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v125->m_Items[1], (int32_t)v140, v134, v135, v136, v137, v138, v139);
  v141 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
           (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v115[5],
           0);
  v142 = v115[6].klass;
  *(_QWORD *)&v189.fields.fakeValue = v115[6].monitor;
  v143 = v141;
  *(_QWORD *)&v189.fields.currentCryptoKey = v142;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v189, 0);
  if ( !v120 )
    goto LABEL_160;
  favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                     (ServantLimitImageMaster_o *)v120,
                                     v143,
                                     favoriteChangeManager,
                                     1,
                                     0);
  v150 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C7BC24(favoriteChangeManager, v125->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_162;
  }
  if ( LODWORD(v125->max_length) <= 2 )
    goto LABEL_161;
  v125->m_Items[2] = v150;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v125->m_Items[2], (int32_t)v150, v144, v145, v146, v147, v148, v149);
  if ( !v122 )
    goto LABEL_160;
  favoriteChangeManager = (__int64)Rarity__getRarityType(v122->fields._Rarity_k__BackingField, 0);
  v157 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C7BC24(favoriteChangeManager, v125->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_162;
  }
  if ( LODWORD(v125->max_length) <= 3 )
    goto LABEL_161;
  v125->m_Items[3] = v157;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v125->m_Items[3], (int32_t)v157, v151, v152, v153, v154, v155, v156);
  if ( !*v23 )
    goto LABEL_160;
  favoriteChangeManager = (__int64)(*v23)->fields.servantEntity;
  if ( !favoriteChangeManager )
    goto LABEL_160;
  favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)favoriteChangeManager, 0);
  v164 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C7BC24(favoriteChangeManager, v125->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_162;
  }
  if ( LODWORD(v125->max_length) <= 4 )
    goto LABEL_161;
  v125->m_Items[4] = v164;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v125->m_Items[4], (int32_t)v164, v158, v159, v160, v161, v162, v163);
  v165 = *v23;
  if ( !*v23 )
    goto LABEL_160;
  v166 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v165->fields.userSvtEntity;
  if ( !v166 )
    goto LABEL_160;
  v167 = v165->fields.svtId;
  v168 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v166[6], 0);
  favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                     (ServantLimitImageMaster_o *)v120,
                                     v167,
                                     v168,
                                     1,
                                     0);
  v175 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C7BC24(favoriteChangeManager, v125->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
    {
LABEL_162:
      v181 = sub_1C7BD64();
      sub_1C7BC10(v181, 0);
    }
  }
  if ( LODWORD(v125->max_length) <= 5 )
LABEL_161:
    sub_1C7BD48(favoriteChangeManager);
  v125->m_Items[5] = v175;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v125->m_Items[5], (int32_t)v175, v169, v170, v171, v172, v173, v174);
  v176 = System_String__Format_64218356(v124, v125, 0);
  v177 = LocalizationManager__Get((System_String_o *)StringLiteral_11999/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
  v178 = LocalizationManager__Get((System_String_o *)StringLiteral_11998/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
  v179 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v180 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C7BD34(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v180,
    (Il2CppObject *)v7,
    Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__,
    0);
  favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
  }
  if ( !v179 )
    goto LABEL_160;
  CommonUI__OpenConfirmDialog_31482900(
    (CommonUI_o *)v179,
    v123,
    v176,
    v177,
    v178,
    v180,
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
LABEL_42:
  v38 = this->fields.favoriteChangeManager;
  v39 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C7BD34(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v39,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0);
  if ( !v38 )
    goto LABEL_160;
  FavoriteChangeListViewManager__SetMode(v38, 2, v39, 0);
}


void FavoriteChangeComponent__Open(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  UnityEngine_GameObject_o *v11; // x20
  const MethodInfo *v12; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v14; // x21

  if ( (byte_4CE949D & 1) == 0 )
  {
    sub_1C7BAE8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4CE949D = 1;
  }
  FavoriteChangeComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.cancelCallback = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.cancelCallback, 0, v5, v6, v7, v8, v9, v10);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_40477940((TitleInfoControl_o *)gameObject, 1, 54, 0, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_10;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0);
  if ( !v11
    || (UnityEngine_GameObject__SetActive(v11, (unsigned __int8)gameObject & 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.favoriteChangeManager) == 0)
    || (FavoriteChangeListViewManager__CreateList((FavoriteChangeListViewManager_o *)gameObject, 0),
        FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v12),
        favoriteChangeManager = this->fields.favoriteChangeManager,
        v14 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C7BD34(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0),
        !favoriteChangeManager) )
  {
LABEL_10:
    sub_1C7BD40(gameObject, v4);
  }
  FavoriteChangeListViewManager__SetMode(favoriteChangeManager, 2, v14, 0);
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

  if ( (byte_4CE94A4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&Method_FavoriteChangeComponent_EndePushRequest__);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE94A4 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v45, 0);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v43, 0);
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v42, 0);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndePushRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v41, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                      userSvtEntity->fields.imageLimitCount,
                      0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(userSvtEntity->fields.dispLimitCount, 0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
          userSvtEntity->fields.commandCardLimitCount,
          0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(userSvtEntity->fields.iconLimitCount, 0);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(userSvtEntity->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                  userSvtEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                       userSvtEntity->fields.randomLimitCount,
                       0);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
          userSvtEntity->fields.randomLimitCountSupport,
          0);
  v33 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v46, 0);
  if ( !v22 )
LABEL_18:
    sub_1C7BD40(limitCountSupport, v6);
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
  int32_t tabModeKind; // w8
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int64_array *v14; // x1
  System_Int64_array *v15; // x2
  bool v16; // w4
  bool v17; // w5
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  System_Int64_array *v25; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CE94AC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_FavoriteChangeComponent_EndStatusSync__);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CE94AC = 1;
  }
  unlockList = 0;
  lockList = 0;
  v25 = 0;
  choiceList = 0;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_21;
    if ( FavoriteChangeListViewManager__GetSwapChoiceList(favoriteChangeManager, &choiceList, &v25, 0) )
    {
      this->fields.requedstCallback = callback;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v24,
                                                                   (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v15 = v25;
        v14 = choiceList;
        v17 = 1;
        v16 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C7BD40(favoriteChangeManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_21;
    if ( FavoriteChangeListViewManager__GetSwapLockList(favoriteChangeManager, &lockList, &unlockList, 0) )
    {
      this->fields.requedstCallback = callback;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v13,
                                                                   (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v15 = unlockList;
        v14 = lockList;
        v16 = 1;
        v17 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)favoriteChangeManager, v14, v15, 0, v16, v17, 0);
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
                                                                     0),
        !scaleChangeTabSprite) )
  {
    sub_1C7BD40(favoriteChangeManager, method);
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
  const MethodInfo *v11; // x2

  if ( (byte_4CE949E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_FavoriteChangeComponent_endCancelButton__);
    sub_1C7BAE8(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4CE949E = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.cancelCallback,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C7BD34(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
  FavoriteChangeComponent_RequestCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_endCancelButton__,
    0);
  FavoriteChangeComponent__StatusRequest(this, v10, v11);
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

  if ( (byte_4CE94A6 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__);
    sub_1C7BAE8(&FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo);
    byte_4CE94A6 = 1;
  }
  v8 = sub_1C7BD34(FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo);
  FavoriteChangeComponent___c__DisplayClass37_0___ctor((FavoriteChangeComponent___c__DisplayClass37_0_o *)v8, 0);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        *(_QWORD *)(v8 + 24) = this,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v8 + 24), (int32_t)this, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v8 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v8,
          Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__,
          0),
        !Instance) )
  {
    sub_1C7BD40(v9, v10);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v18, 0);
}


void FavoriteChangeComponent__dispSvtList(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeComponent__endCancelButton(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  FavoriteChangeListViewManager_o *v6; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v7; // x21
  System_Action_o *cancelCallback; // x0

  if ( (byte_4CE949F & 1) == 0 )
  {
    sub_1C7BAE8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4CE949F = 1;
  }
  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, 0),
          v6 = this->fields.favoriteChangeManager,
          v7 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C7BD34(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
          FavoriteChangeListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
            0),
          !v6) )
    {
LABEL_11:
      sub_1C7BD40(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode(v6, 2, v7, 0);
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
  const MethodInfo *v8; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4CE94A9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_FavoriteChangeComponent_EndClickTabChoice__);
    sub_1C7BAE8(&Method_FavoriteChangeComponent_onClickChoiceTabButton__);
    sub_1C7BAE8(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4CE94A9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_FavoriteChangeComponent_onClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C7BD34(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabChoice__,
          0);
        FavoriteChangeComponent__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C7BD34(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabChoice__,
        0);
      FavoriteChangeComponent__StatusRequest(this, v9, v10);
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
  const MethodInfo *v8; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4CE94A8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_FavoriteChangeComponent_EndClickTabLock__);
    sub_1C7BAE8(&Method_FavoriteChangeComponent_onClickLockTabButton__);
    sub_1C7BAE8(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4CE94A8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_FavoriteChangeComponent_onClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C7BD34(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabLock__,
          0);
        FavoriteChangeComponent__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C7BD34(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabLock__,
        0);
      FavoriteChangeComponent__StatusRequest(this, v9, v10);
    }
    FavoriteChangeComponent__setModeTabKind(this, 1, v5);
  }
}


void FavoriteChangeComponent__onClickNormalTabButton(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  FavoriteChangeComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4CE94A7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_FavoriteChangeComponent_EndClickTabNormal__);
    sub_1C7BAE8(&Method_FavoriteChangeComponent_onClickNormalTabButton__);
    sub_1C7BAE8(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4CE94A7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_FavoriteChangeComponent_onClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C7BD34(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabNormal__,
      0);
    FavoriteChangeComponent__StatusRequest(this, v5, v6);
  }
}


void FavoriteChangeComponent__onClickPushTabButton(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  FavoriteChangeComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4CE94AA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_FavoriteChangeComponent_EndClickTabPush__);
    sub_1C7BAE8(&Method_FavoriteChangeComponent_onClickPushTabButton__);
    sub_1C7BAE8(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4CE94AA = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_FavoriteChangeComponent_onClickPushTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_FavoriteChangeComponent_onClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C7BD34(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabPush__,
      0);
    FavoriteChangeComponent__StatusRequest(this, v5, v6);
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

  if ( (byte_4CE94A2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&Method_FavoriteChangeComponent_EndCardFavoriteRequest__);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE94A2 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v39, 0);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v37, 0);
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v16,
                     (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v19 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v36.fields.fakeValue = v18;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v36, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                      userSvtEntity->fields.imageLimitCount,
                      0);
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(userSvtEntity->fields.dispLimitCount, 0);
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
          userSvtEntity->fields.commandCardLimitCount,
          0);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(userSvtEntity->fields.iconLimitCount, 0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(userSvtEntity->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v25 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                  userSvtEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                       userSvtEntity->fields.randomLimitCount,
                       0);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
          userSvtEntity->fields.randomLimitCountSupport,
          0);
  v30 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v40.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v29;
  *(_QWORD *)&v40.fields.currentCryptoKey = v30;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v40, 0);
  if ( !v19 )
LABEL_18:
    sub_1C7BD40(limitCountSupport, v6);
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
  UILabel_o *infoLb; // x21
  char v11; // w8
  UILabel_o *v12; // x21
  __int64 *v13; // x8

  if ( (byte_4CE94AB & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11708/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C7BAE8(&StringLiteral_17744/*"button_push_reg"*/);
    sub_1C7BAE8(&StringLiteral_17745/*"button_push_unreg"*/);
    sub_1C7BAE8(&StringLiteral_17730/*"button_allchoice_reg"*/);
    sub_1C7BAE8(&StringLiteral_17733/*"button_alllock_unreg"*/);
    sub_1C7BAE8(&StringLiteral_11706/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C7BAE8(&StringLiteral_11707/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C7BAE8(&StringLiteral_17746/*"button_select_reg"*/);
    sub_1C7BAE8(&StringLiteral_17747/*"button_select_unreg"*/);
    sub_1C7BAE8(&StringLiteral_17732/*"button_alllock_reg"*/);
    sub_1C7BAE8(&StringLiteral_17731/*"button_allchoice_unreg"*/);
    sub_1C7BAE8(&StringLiteral_7216/*"HEADER_MSG_FAVORITE"*/);
    byte_4CE94AB = 1;
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
    v6 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17747/*"button_select_unreg"*/ : &StringLiteral_17746/*"button_select_reg"*/);
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
    v7 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17732/*"button_alllock_reg"*/ : &StringLiteral_17733/*"button_alllock_unreg"*/);
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
    v8 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17730/*"button_allchoice_reg"*/ : &StringLiteral_17731/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton
      || (UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabBoxCollider) == 0)
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 3, 0),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite) == 0) )
    {
LABEL_51:
      sub_1C7BD40(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v9 = &StringLiteral_17744/*"button_push_reg"*/;
    else
      v9 = &StringLiteral_17745/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v9, 0);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7216/*"HEADER_MSG_FAVORITE"*/, 0);
        if ( !infoLb )
          goto LABEL_51;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v11 = 0;
        goto LABEL_48;
      case 1:
        v12 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_11707/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_45;
      case 2:
        v12 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_11706/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_45;
      case 3:
        v12 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_11708/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_45:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v13, 0);
        if ( !v12 )
          goto LABEL_51;
        UILabel__set_text(v12, (System_String_o *)normalTabButton, 0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v11 = 1;
LABEL_48:
        BYTE4(normalTabButton[15].fields.m_CachedPtr) = v11;
LABEL_49:
        FavoriteChangeListViewManager__UpdateDisplayState(
          (FavoriteChangeListViewManager_o *)normalTabButton,
          modeKind == 3,
          0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_51;
        FavoriteChangeListViewManager__SetMode_33512120((FavoriteChangeListViewManager_o *)normalTabButton, 2, 0);
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
  sub_1C7BA8C(
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
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA9ADC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA9A94;
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
  if ( (byte_4CE94AE & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CE94AE = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void FavoriteChangeComponent_RequestCallbackFunc__EndInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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

  if ( (byte_4CE94AF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__);
    byte_4CE94AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31483188(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_1C7BD40(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__1(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  FavoriteChangeComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(0, method);
  FavoriteChangeComponent__PushRequest(_4__this, this->fields.item, 0);
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

  if ( (byte_4CE94B0 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__);
    byte_4CE94B0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__3 = this->fields.__9__3;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__,
        0);
      this->fields.__9__3 = _9__3;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31483188(v7, _9__3, 0);
      return;
    }
LABEL_10:
    sub_1C7BD40(Instance, v6);
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
  if ( (byte_4CE94B1 & 1) == 0 )
  {
    this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)sub_1C7BAE8(&StringLiteral_9865/*"OnClickFavoriteDecide"*/);
    byte_4CE94B1 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0
    || (this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)_4__this->fields.favoriteChangeManager) == 0 )
  {
    sub_1C7BD40(this, method);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)this,
    (System_String_o *)StringLiteral_9865/*"OnClickFavoriteDecide"*/,
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

  if ( (byte_4CE94B2 & 1) == 0 )
  {
    sub_1C7BAE8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_FavoriteChangeComponent_OnClickServant__);
    sub_1C7BAE8(&StringLiteral_3441/*"CLICK_BACK"*/);
    byte_4CE94B2 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  if ( this->fields.questId >= 1 )
  {
    FavoriteChangeComponent__Init(_4__this, 0);
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
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3441/*"CLICK_BACK"*/, 0);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1C7BD40(_4__this, method);
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
  v9 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C7BD34(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v9,
    v7,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    v10);
  if ( !monitor )
    goto LABEL_18;
  *((_QWORD *)monitor + 48) = v9;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(monitor + 384), (int32_t)v9, v11, v12, v13, v14, v15, v16);
  FavoriteChangeListViewManager__SetMode_33512120((FavoriteChangeListViewManager_o *)monitor, 2, v17);
}