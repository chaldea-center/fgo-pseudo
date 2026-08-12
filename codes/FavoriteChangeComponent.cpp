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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_596B492 & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_596B492 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, method),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0)
    || (ListViewManager__SortItem((ListViewManager_o *)favoriteChangeManager, -1, 0, -1, 0),
        v5 = this->fields.favoriteChangeManager,
        v6 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_2213CCC(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          v7),
        !v5) )
  {
    sub_2213CDC(favoriteChangeManager, result);
  }
  v5->fields.callbackFunc = v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  FavoriteChangeListViewManager__SetMode_39794032(v5, 2, v14);
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
      sub_2213CDC(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_39794032(favoriteChangeManager, 2, v5);
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
      sub_2213CDC(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_39794032(favoriteChangeManager, 2, v5);
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
      sub_2213CDC(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_39794032(favoriteChangeManager, 2, v5);
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
      sub_2213CDC(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_39794032(favoriteChangeManager, 2, v5);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_596B490 & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_596B490 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  v4 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_2213CCC(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    v5);
  if ( !favoriteChangeManager )
    sub_2213CDC(v6, v7);
  favoriteChangeManager->fields.callbackFunc = v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&favoriteChangeManager->fields.callbackFunc,
    (int32_t)v4,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  FavoriteChangeListViewManager__SetMode_39794032(favoriteChangeManager, 2, v14);
}


void FavoriteChangeComponent__EndStatusSync(
        FavoriteChangeComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_requedstCallback; // x0
  struct FavoriteChangeComponent_RequestCallbackFunc_o *v9; // x19
  struct FavoriteChangeComponent_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback;
  v9 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0;
    sub_2213A04(p_requedstCallback, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2

  if ( (byte_596B494 & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_596B494 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__UpdateDisplayState(favoriteChangeManager, 1, method),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0)
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, v5),
        v6 = this->fields.favoriteChangeManager,
        v7 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_2213CCC(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          v8),
        !v6) )
  {
    sub_2213CDC(favoriteChangeManager, result);
  }
  v6->fields.callbackFunc = v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields.callbackFunc, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  FavoriteChangeListViewManager__SetMode_39794032(v6, 2, v15);
}


void FavoriteChangeComponent__Init(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  LocalizationManager_c *v6; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v8; // x2

  if ( (byte_596B48B & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7499/*"HEADER_MSG_FAVORITE"*/);
    byte_596B48B = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager )
    goto LABEL_8;
  FavoriteChangeListViewManager__DestroyList(favoriteChangeManager, method);
  v6 = LocalizationManager_TypeInfo;
  infoLb = this->fields.infoLb;
  this->fields.state = 0;
  if ( !*(&v6->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v6, v4, v5);
  favoriteChangeManager = (FavoriteChangeListViewManager_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_7499/*"HEADER_MSG_FAVORITE"*/,
                                                               0);
  if ( !infoLb )
LABEL_8:
    sub_2213CDC(favoriteChangeManager, method);
  UILabel__set_text(infoLb, (System_String_o *)favoriteChangeManager, 0);
  FavoriteChangeComponent__setModeTabKind(this, 0, v8);
}


void FavoriteChangeComponent__OnClickScaleChange(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_596B49C & 1) == 0 )
  {
    sub_2213A60(&Method_FavoriteChangeComponent_OnClickScaleChange__);
    byte_596B49C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FavoriteChangeComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      sub_2213CDC(0, v5);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  MethodInfo *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  FavoriteChangeListViewItem_o *v22; // x1
  FavoriteChangeListViewItem_o **v23; // x21
  __int64 v24; // x2
  __int64 v25; // x8
  __int128 v26; // q1
  const MethodInfo *v27; // x2
  CommonUI_o *v28; // x20
  UserServantEntity_o *v29; // x21
  ServantStatusDialog_ResultDelegate_o *v30; // x22
  int32_t tabModeKind; // w8
  _BYTE *v32; // x8
  System_Reflection_MethodBase_o *v33; // x0
  int32_t v34; // w1
  _BYTE *v35; // x8
  _QWORD *v36; // x0
  bool v37; // w22
  struct FavoriteChangeListViewManager_o *v38; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v39; // x21
  const MethodInfo *v40; // x3
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  const MethodInfo *v47; // x2
  ServantEntity_o *servantEntity; // x23
  int64_t v49; // x22
  UserServantEntity_o *v50; // x25
  __int64 v51; // x1
  __int64 v52; // x2
  ServantEntity_o *v53; // x27
  Il2CppObject *Master_object; // x24
  __int64 v55; // x22
  __int64 v56; // x1
  __int64 v57; // x2
  ServantOverwriteStatus_o *OverwriteStatus; // x26
  __int64 v59; // x2
  System_String_o *v60; // x28
  UserServantEntity_o *userSvtEntity; // x0
  UserServantEntity_o *v62; // x0
  System_String_o *v63; // x28
  System_Reflection_MethodBase_o *v64; // x0
  const MethodInfo *v65; // x2
  int64_t v66; // x22
  struct UserServantEntity_o *v67; // x8
  __int128 v68; // q0
  __int128 v69; // q1
  int v70; // w8
  __int64 v71; // x26
  __int64 v72; // x1
  __int64 v73; // x2
  ServantEntity_o *v74; // x28
  Il2CppObject *v75; // x23
  __int64 v76; // x29
  __int64 v77; // x1
  __int64 v78; // x2
  ServantOverwriteStatus_o *v79; // x27
  System_String_o *v80; // x22
  System_String_o *v81; // x24
  __int64 v82; // x2
  System_Object_array *v83; // x25
  int32_t v84; // w29
  __int64 v85; // x29
  System_String_o *v86; // x29
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x28
  __int64 v90; // x29
  int32_t v91; // w0
  __int64 v92; // x8
  int32_t v93; // w26
  System_String_o *v94; // x26
  System_String_o *v95; // x26
  System_String_o *v96; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v97; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v98; // x8
  int32_t v99; // w21
  int32_t v100; // w0
  System_String_o *v101; // x21
  System_String_o *v102; // x21
  System_String_o *v103; // x23
  System_String_o *v104; // x24
  Il2CppObject *v105; // x25
  CommonConfirmDialog_ClickDelegate_o *v106; // x26
  __int64 v107; // x2
  System_String_o *v108; // x0
  System_String_o *v109; // x28
  __int64 v110; // x2
  System_Object_array *v111; // x29
  int32_t v112; // w22
  __int64 v113; // x22
  System_String_o *ClassName; // x22
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x22
  __int64 v118; // x27
  int32_t v119; // w22
  System_String_o *LimitCountSealedServantName; // x22
  System_String_o *RarityType; // x22
  System_String_o *v122; // x22
  FavoriteChangeListViewItem_o *v123; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v124; // x9
  int32_t svtId; // w21
  int32_t v126; // w0
  System_String_o *v127; // x21
  System_String_o *v128; // x21
  System_String_o *v129; // x22
  System_String_o *v130; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v132; // x25
  __int64 v133; // x1
  __int64 v134; // x2
  System_String_o *title; // [xsp+48h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v138; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16

  if ( (byte_596B48F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_FavoriteChangeComponent_OnClickServant__);
    sub_2213A60(&Method_FavoriteChangeComponent_closeSvtDetail__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__);
    sub_2213A60(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__);
    sub_2213A60(&FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo);
    sub_2213A60(&StringLiteral_12450/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12448/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_12447/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12451/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_12449/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_596B48F = 1;
  }
  v7 = sub_2213CCC(FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_120;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( n < 0 )
  {
    v22 = 0;
  }
  else
  {
    favoriteChangeManager = (__int64)this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_120;
    v22 = FavoriteChangeListViewManager__GetItem((FavoriteChangeListViewManager_o *)favoriteChangeManager, n, v16);
  }
  *(_QWORD *)(v7 + 24) = v22;
  v23 = (FavoriteChangeListViewItem_o **)(v7 + 24);
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v7 + 24),
    (int32_t)v22,
    (System_String_o *)v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( !*(_QWORD *)(v7 + 24) )
    goto LABEL_120;
  v25 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 120LL);
  if ( !v25 )
    goto LABEL_120;
  v26 = *(_OWORD *)(v25 + 32);
  *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
  *(_OWORD *)&v138.fields.fakeValue = v26;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v24);
  v137 = v138;
  this->fields.usrSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v137, 0);
  switch ( kind )
  {
    case 3:
      tabModeKind = this->fields.tabModeKind;
      favoriteChangeManager = (__int64)*v23;
      if ( tabModeKind != 3 )
      {
        if ( tabModeKind == 2 )
        {
          if ( !favoriteChangeManager )
            goto LABEL_120;
          v35 = Method_FavoriteChangeComponent_OnClickServant__;
          *(_BYTE *)(favoriteChangeManager + 170) ^= 1u;
          if ( (v35[83] & 2) != 0 )
            v35 = (_BYTE *)sub_2213A78(v35);
          v33 = (System_Reflection_MethodBase_o *)sub_2213A44(v35, *((_QWORD *)v35 + 4));
          v34 = 0;
          goto LABEL_41;
        }
        if ( tabModeKind == 1 )
        {
          if ( !favoriteChangeManager )
            goto LABEL_120;
          v32 = Method_FavoriteChangeComponent_OnClickServant__;
          *(_BYTE *)(favoriteChangeManager + 169) ^= 1u;
          if ( (v32[83] & 2) != 0 )
            v32 = (_BYTE *)sub_2213A78(v32);
          v33 = (System_Reflection_MethodBase_o *)sub_2213A44(v32, *((_QWORD *)v32 + 4));
          v34 = 11;
          goto LABEL_41;
        }
        if ( !favoriteChangeManager )
          goto LABEL_120;
        v37 = FavoriteChangeListViewItem__get_IsCanNotSelect((FavoriteChangeListViewItem_o *)favoriteChangeManager, v9);
        v33 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_FavoriteChangeComponent_OnClickServant__);
        if ( v37 )
        {
LABEL_40:
          v34 = 2;
LABEL_41:
          OverwriteAssetSoundName__PlaySystemSe(v33, v34, 0, 0);
          goto LABEL_42;
        }
        OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0);
        if ( *v23 )
        {
          servantEntity = (*v23)->fields.servantEntity;
          favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0);
          if ( favoriteChangeManager )
          {
            v49 = *(_QWORD *)(favoriteChangeManager + 120);
            favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( favoriteChangeManager )
            {
              favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)favoriteChangeManager,
                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
              if ( favoriteChangeManager )
              {
                favoriteChangeManager = (__int64)DataMasterBase_object__object__long___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
                                                   v49,
                                                   (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
                if ( favoriteChangeManager )
                {
                  v50 = (UserServantEntity_o *)favoriteChangeManager;
                  v53 = UserServantEntity__GetServantEntity((UserServantEntity_o *)favoriteChangeManager, -1, 0);
                  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v51, v52);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                  favoriteChangeManager = (__int64)UserServantEntity__GetOverwriteStatus(v50, 0, 0);
                  if ( *v23 )
                  {
                    v55 = favoriteChangeManager;
                    favoriteChangeManager = (__int64)(*v23)->fields.userSvtEntity;
                    if ( favoriteChangeManager )
                    {
                      OverwriteStatus = UserServantEntity__GetOverwriteStatus(
                                          (UserServantEntity_o *)favoriteChangeManager,
                                          0,
                                          0);
                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56, v57);
                      favoriteChangeManager = (__int64)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_12451/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/,
                                                         0);
                      if ( *v23 )
                      {
                        v60 = (System_String_o *)favoriteChangeManager;
                        userSvtEntity = (*v23)->fields.userSvtEntity;
                        title = v60;
                        if ( !userSvtEntity )
                          goto LABEL_62;
                        favoriteChangeManager = UserServantEntity__IsEventJoin(userSvtEntity, 0);
                        if ( (favoriteChangeManager & 1) == 0 )
                          goto LABEL_62;
                        if ( !*v23 )
                          goto LABEL_120;
                        v62 = (*v23)->fields.userSvtEntity;
                        if ( !v62 || !UserServantEntity__IsNoPeriod(v62, 0) )
                        {
                          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v59);
                          v63 = LocalizationManager__Get((System_String_o *)StringLiteral_12449/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0);
                        }
                        else
                        {
LABEL_62:
                          v63 = (System_String_o *)StringLiteral_1/*""*/;
                        }
                        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v59);
                        v108 = LocalizationManager__Get((System_String_o *)StringLiteral_12450/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0);
                        v109 = System_String__Concat_75651716(v108, v63, 0);
                        favoriteChangeManager = sub_2213B20(object___TypeInfo, 6);
                        if ( v55 )
                        {
                          v111 = (System_Object_array *)favoriteChangeManager;
                          v112 = *(_DWORD *)(v55 + 24);
                          if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v9, v110);
                          favoriteChangeManager = (__int64)Rarity__getRarityType(v112, 0);
                          if ( v111 )
                          {
                            v113 = favoriteChangeManager;
                            sub_1FFE8F8(v111, favoriteChangeManager);
                            favoriteChangeManager = sub_1FFE2C4(v111, 0, v113);
                            if ( v53 )
                            {
                              ClassName = ServantEntity__getClassName(v53, 0);
                              sub_1FFE8F8(v111, ClassName);
                              sub_1FFE2C4(v111, 1, ClassName);
                              v117 = *(_QWORD *)&v53->fields.id.fields.currentCryptoKey;
                              v118 = *(_QWORD *)&v53->fields.id.fields.fakeValue;
                              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                                j_il2cpp_runtime_class_init_0(
                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                  v115,
                                  v116);
                              *(_QWORD *)&v141.fields.currentCryptoKey = v117;
                              *(_QWORD *)&v141.fields.fakeValue = v118;
                              v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v141, 0);
                              favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                        v50->fields.limitCount,
                                                        0);
                              if ( Master_object )
                              {
                                LimitCountSealedServantName = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                (ServantLimitImageMaster_o *)Master_object,
                                                                v119,
                                                                favoriteChangeManager,
                                                                1,
                                                                1,
                                                                0);
                                sub_1FFE8F8(v111, LimitCountSealedServantName);
                                favoriteChangeManager = sub_1FFE2C4(v111, 2, LimitCountSealedServantName);
                                if ( OverwriteStatus )
                                {
                                  RarityType = Rarity__getRarityType(OverwriteStatus->fields._Rarity_k__BackingField, 0);
                                  sub_1FFE8F8(v111, RarityType);
                                  favoriteChangeManager = sub_1FFE2C4(v111, 3, RarityType);
                                  if ( servantEntity )
                                  {
                                    v122 = ServantEntity__getClassName(servantEntity, 0);
                                    sub_1FFE8F8(v111, v122);
                                    favoriteChangeManager = sub_1FFE2C4(v111, 4, v122);
                                    v123 = *v23;
                                    if ( *v23 )
                                    {
                                      v124 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v123->fields.userSvtEntity;
                                      if ( v124 )
                                      {
                                        svtId = v123->fields.svtId;
                                        v126 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                 v124[6],
                                                 0);
                                        v127 = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                 (ServantLimitImageMaster_o *)Master_object,
                                                 svtId,
                                                 v126,
                                                 1,
                                                 1,
                                                 0);
                                        sub_1FFE8F8(v111, v127);
                                        sub_1FFE2C4(v111, 5, v127);
                                        v128 = System_String__Format_75698016(v109, v111, 0);
                                        v129 = LocalizationManager__Get((System_String_o *)StringLiteral_12448/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0);
                                        v130 = LocalizationManager__Get((System_String_o *)StringLiteral_12447/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0);
                                        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                        v132 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                        CommonConfirmDialog_ClickDelegate___ctor(
                                          v132,
                                          (Il2CppObject *)v7,
                                          Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__,
                                          0);
                                        favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
                                        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v133, v134);
                                        v9 = (const MethodInfo *)title;
                                        if ( Instance )
                                        {
                                          CommonUI__OpenConfirmDialog_37373144(
                                            (CommonUI_o *)Instance,
                                            title,
                                            v128,
                                            v129,
                                            v130,
                                            v132,
                                            BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                                            0,
                                            0,
                                            0);
LABEL_42:
                                          v38 = this->fields.favoriteChangeManager;
                                          v39 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_2213CCC(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
                                          FavoriteChangeListViewManager_CallbackFunc___ctor(
                                            v39,
                                            (Il2CppObject *)this,
                                            (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
                                            v40);
                                          if ( v38 )
                                          {
                                            v38->fields.callbackFunc = v39;
                                            sub_2213A04(
                                              (MissionNaviTransitionBoardItem_o *)&v38->fields.callbackFunc,
                                              (int32_t)v39,
                                              v41,
                                              v42,
                                              v43,
                                              v44,
                                              v45,
                                              v46);
                                            FavoriteChangeListViewManager__SetMode_39794032(v38, 2, v47);
                                            return;
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
              }
            }
          }
        }
LABEL_120:
        sub_2213CDC(favoriteChangeManager, v9);
      }
      if ( !favoriteChangeManager )
        goto LABEL_120;
      if ( *(_QWORD *)(favoriteChangeManager + 120) )
      {
        if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(favoriteChangeManager + 120), 0) )
        {
LABEL_35:
          v36 = Method_FavoriteChangeComponent_OnClickServant__;
          if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
            v36 = (_QWORD *)sub_2213A78(Method_FavoriteChangeComponent_OnClickServant__);
          v33 = (System_Reflection_MethodBase_o *)sub_2213A44(v36, v36[4]);
          goto LABEL_40;
        }
        favoriteChangeManager = (__int64)*v23;
        if ( !*v23 )
          goto LABEL_120;
      }
      if ( !FavoriteChangeListViewItem__get_IsHerioneReave((FavoriteChangeListViewItem_o *)favoriteChangeManager, v9) )
      {
        v64 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_FavoriteChangeComponent_OnClickServant__);
        OverwriteAssetSoundName__PlaySystemSe(v64, 0, 0, 0);
        favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0);
        if ( !favoriteChangeManager )
          goto LABEL_120;
        v66 = *(_QWORD *)(favoriteChangeManager + 128);
        if ( !v66 )
          goto LABEL_70;
        if ( !*v23 )
          goto LABEL_120;
        v67 = (*v23)->fields.userSvtEntity;
        if ( !v67 )
          goto LABEL_120;
        v68 = *(_OWORD *)&v67->fields.id.fields.currentCryptoKey;
        v69 = *(_OWORD *)&v67->fields.id.fields.fakeValue;
        v70 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v138.fields.currentCryptoKey = v68;
        *(_OWORD *)&v138.fields.fakeValue = v69;
        if ( !v70 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v65);
        v136 = v138;
        if ( v66 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v136, 0) )
        {
          favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !favoriteChangeManager )
            goto LABEL_120;
          favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                             (DataManager_o *)favoriteChangeManager,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !favoriteChangeManager )
            goto LABEL_120;
          favoriteChangeManager = (__int64)DataMasterBase_object__object__long___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
                                             v66,
                                             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !favoriteChangeManager )
            goto LABEL_120;
          v71 = favoriteChangeManager;
          v74 = UserServantEntity__GetServantEntity((UserServantEntity_o *)favoriteChangeManager, -1, 0);
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v72, v73);
          v75 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          favoriteChangeManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v71, 0, 0);
          if ( !*v23 )
            goto LABEL_120;
          v76 = favoriteChangeManager;
          favoriteChangeManager = (__int64)(*v23)->fields.userSvtEntity;
          if ( !favoriteChangeManager )
            goto LABEL_120;
          v79 = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)favoriteChangeManager, 0, 0);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77, v78);
          v80 = LocalizationManager__Get((System_String_o *)StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
          v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
          favoriteChangeManager = sub_2213B20(object___TypeInfo, 6);
          if ( !v76 )
            goto LABEL_120;
          v83 = (System_Object_array *)favoriteChangeManager;
          v84 = *(_DWORD *)(v76 + 24);
          if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v9, v82);
          favoriteChangeManager = (__int64)Rarity__getRarityType(v84, 0);
          if ( !v83 )
            goto LABEL_120;
          v85 = favoriteChangeManager;
          sub_1FFE8F8(v83, favoriteChangeManager);
          favoriteChangeManager = sub_1FFE2C4(v83, 0, v85);
          if ( !v74 )
            goto LABEL_120;
          v86 = ServantEntity__getClassName(v74, 0);
          sub_1FFE8F8(v83, v86);
          sub_1FFE2C4(v83, 1, v86);
          v90 = *(_QWORD *)&v74->fields.id.fields.currentCryptoKey;
          v89 = *(_QWORD *)&v74->fields.id.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v87, v88);
          *(_QWORD *)&v139.fields.currentCryptoKey = v90;
          *(_QWORD *)&v139.fields.fakeValue = v89;
          v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v139, 0);
          v92 = *(_QWORD *)(v71 + 96);
          *(_QWORD *)&v140.fields.fakeValue = *(_QWORD *)(v71 + 104);
          v93 = v91;
          *(_QWORD *)&v140.fields.currentCryptoKey = v92;
          favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v140, 0);
          if ( !v75 )
            goto LABEL_120;
          v94 = ServantLimitImageMaster__GetLimitCountSealedServantName(
                  (ServantLimitImageMaster_o *)v75,
                  v93,
                  favoriteChangeManager,
                  1,
                  1,
                  0);
          sub_1FFE8F8(v83, v94);
          favoriteChangeManager = sub_1FFE2C4(v83, 2, v94);
          if ( !v79 )
            goto LABEL_120;
          v95 = Rarity__getRarityType(v79->fields._Rarity_k__BackingField, 0);
          sub_1FFE8F8(v83, v95);
          favoriteChangeManager = sub_1FFE2C4(v83, 3, v95);
          if ( !*v23 )
            goto LABEL_120;
          favoriteChangeManager = (__int64)(*v23)->fields.servantEntity;
          if ( !favoriteChangeManager )
            goto LABEL_120;
          v96 = ServantEntity__getClassName((ServantEntity_o *)favoriteChangeManager, 0);
          sub_1FFE8F8(v83, v96);
          favoriteChangeManager = sub_1FFE2C4(v83, 4, v96);
          if ( !*v23 )
            goto LABEL_120;
          v97 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.servantEntity;
          if ( !v97 )
            goto LABEL_120;
          favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v97[1], 0);
          if ( !*v23 )
            goto LABEL_120;
          v98 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.userSvtEntity;
          if ( !v98 )
            goto LABEL_120;
          v99 = favoriteChangeManager;
          v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v98[6], 0);
          v101 = ServantLimitImageMaster__GetLimitCountSealedServantName(
                   (ServantLimitImageMaster_o *)v75,
                   v99,
                   v100,
                   1,
                   1,
                   0);
          sub_1FFE8F8(v83, v101);
          sub_1FFE2C4(v83, 5, v101);
          v102 = System_String__Format_75698016(v81, v83, 0);
          v103 = LocalizationManager__Get((System_String_o *)StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
          v104 = LocalizationManager__Get((System_String_o *)StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
          v105 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v106 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v106,
            (Il2CppObject *)v7,
            Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__,
            0);
          favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v107);
          if ( !v105 )
            goto LABEL_120;
          CommonUI__OpenConfirmDialog_37373584(
            (CommonUI_o *)v105,
            v80,
            v102,
            v103,
            v104,
            v106,
            BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
            BalanceConfig_TypeInfo->static_fields->PushSvtDialogFontSize,
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
        }
        else
        {
LABEL_70:
          FavoriteChangeComponent__PushRequest(this, *v23, v65);
        }
        goto LABEL_42;
      }
      goto LABEL_35;
    case 2:
      favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( *v23 )
      {
        v28 = (CommonUI_o *)favoriteChangeManager;
        v29 = (*v23)->fields.userSvtEntity;
        v30 = (ServantStatusDialog_ResultDelegate_o *)sub_2213CCC(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v30,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_closeSvtDetail__,
          0);
        if ( v28 )
        {
          CommonUI__OpenServantStatusDialog_37384068(v28, 0, v29, v30, 0, 0, 0);
          return;
        }
      }
      goto LABEL_120;
    case 1:
      FavoriteChangeComponent__setFavoriteRequest(this, *v23, v27);
      break;
  }
}


void FavoriteChangeComponent__Open(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  UnityEngine_GameObject_o *v11; // x20
  const MethodInfo *v12; // x1
  struct FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x2

  if ( (byte_596B48C & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_596B48C = 1;
  }
  FavoriteChangeComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.cancelCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.cancelCallback, 0, v5, v6, v7, v8, v9, v10);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_46863248((TitleInfoControl_o *)gameObject, 1, 54, 0, 0);
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
        v14 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_2213CCC(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          v15),
        !favoriteChangeManager) )
  {
LABEL_10:
    sub_2213CDC(gameObject, v4);
  }
  favoriteChangeManager->fields.callbackFunc = v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&favoriteChangeManager->fields.callbackFunc,
    (int32_t)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  FavoriteChangeListViewManager__SetMode_39794032(favoriteChangeManager, 2, v22);
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
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_596B493 & 1) == 0 )
  {
    sub_2213A60(&Method_FavoriteChangeComponent_EndePushRequest__);
    sub_2213A60(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B493 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndePushRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_2213CDC(Instance, v6);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_Int64_array *v17; // x1
  System_Int64_array *v18; // x2
  bool v19; // w4
  bool v20; // w5
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  System_Int64_array *v30; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596B49B & 1) == 0 )
  {
    sub_2213A60(&Method_FavoriteChangeComponent_EndStatusSync__);
    sub_2213A60(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596B49B = 1;
  }
  tabModeKind = this->fields.tabModeKind;
  unlockList = 0;
  lockList = 0;
  v30 = 0;
  choiceList = 0;
  if ( tabModeKind == 2 )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_21;
    if ( FavoriteChangeListViewManager__GetSwapChoiceList(favoriteChangeManager, &choiceList, &v30, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28, v29);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v27,
                                                                   (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v18 = v30;
        v17 = choiceList;
        v19 = 0;
        v20 = 1;
        goto LABEL_17;
      }
LABEL_21:
      sub_2213CDC(favoriteChangeManager, callback);
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
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v14,
                                                                   (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v18 = unlockList;
        v17 = lockList;
        v19 = 1;
        v20 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)favoriteChangeManager, v17, v18, 0, v19, v20, 0);
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
    sub_2213CDC(favoriteChangeManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)favoriteChangeManager, 0);
}


void FavoriteChangeComponent__cancelFavoriteWindow(
        FavoriteChangeComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  FavoriteChangeComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_596B48D & 1) == 0 )
  {
    sub_2213A60(&Method_FavoriteChangeComponent_endCancelButton__);
    sub_2213A60(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_596B48D = 1;
  }
  this->fields.cancelCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cancelCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_2213CCC(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo_47A29F8 *v17; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v19; // x20

  if ( (byte_596B495 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__);
    sub_2213A60(&FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo);
    byte_596B495 = 1;
  }
  v8 = sub_2213CCC(FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_6;
  *(_DWORD *)(v8 + 16) = questId;
  *(_QWORD *)(v8 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 24), (int32_t)this, v11, v12, v13, v14, v15, v16);
  v17 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  *(_BYTE *)(v8 + 32) = isNeedSort;
  Instance = SingletonMonoBehaviour_object___get_Instance(v17);
  v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v8,
    Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__,
    0);
  if ( !Instance )
LABEL_6:
    sub_2213CDC(v9, v10);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v19, 0);
}


void FavoriteChangeComponent__dispSvtList(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_596B48E & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_596B48E = 1;
  }
  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          v6 = this->fields.favoriteChangeManager,
          v7 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_2213CCC(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
          FavoriteChangeListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
            v8),
          !v6) )
    {
LABEL_11:
      sub_2213CDC(favoriteChangeManager, isRequest);
    }
    v6->fields.callbackFunc = v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields.callbackFunc, (int32_t)v7, v9, v10, v11, v12, v13, v14);
    FavoriteChangeListViewManager__SetMode_39794032(v6, 2, v15);
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

  if ( (byte_596B498 & 1) == 0 )
  {
    sub_2213A60(&Method_FavoriteChangeComponent_EndClickTabChoice__);
    sub_2213A60(&Method_FavoriteChangeComponent_onClickChoiceTabButton__);
    sub_2213A60(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_596B498 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FavoriteChangeComponent_onClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_2213CCC(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabChoice__,
          v8);
        FavoriteChangeComponent__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_2213CCC(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_596B497 & 1) == 0 )
  {
    sub_2213A60(&Method_FavoriteChangeComponent_EndClickTabLock__);
    sub_2213A60(&Method_FavoriteChangeComponent_onClickLockTabButton__);
    sub_2213A60(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_596B497 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FavoriteChangeComponent_onClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_2213CCC(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabLock__,
          v8);
        FavoriteChangeComponent__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_2213CCC(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_596B496 & 1) == 0 )
  {
    sub_2213A60(&Method_FavoriteChangeComponent_EndClickTabNormal__);
    sub_2213A60(&Method_FavoriteChangeComponent_onClickNormalTabButton__);
    sub_2213A60(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_596B496 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FavoriteChangeComponent_onClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_2213CCC(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_596B499 & 1) == 0 )
  {
    sub_2213A60(&Method_FavoriteChangeComponent_EndClickTabPush__);
    sub_2213A60(&Method_FavoriteChangeComponent_onClickPushTabButton__);
    sub_2213A60(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_596B499 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_FavoriteChangeComponent_onClickPushTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FavoriteChangeComponent_onClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_2213CCC(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
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
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_596B491 & 1) == 0 )
  {
    sub_2213A60(&Method_FavoriteChangeComponent_EndCardFavoriteRequest__);
    sub_2213A60(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B491 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndCardFavoriteRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_2213CDC(Instance, v6);
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
  __int64 *v12; // x8
  UILabel_o *v13; // x21
  char v14; // w8
  const MethodInfo *v15; // x2

  if ( (byte_596B49A & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_2213A60(&StringLiteral_18431/*"button_push_reg"*/);
    sub_2213A60(&StringLiteral_18432/*"button_push_unreg"*/);
    sub_2213A60(&StringLiteral_18417/*"button_allchoice_reg"*/);
    sub_2213A60(&StringLiteral_18420/*"button_alllock_unreg"*/);
    sub_2213A60(&StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_2213A60(&StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_2213A60(&StringLiteral_18433/*"button_select_reg"*/);
    sub_2213A60(&StringLiteral_18434/*"button_select_unreg"*/);
    sub_2213A60(&StringLiteral_18419/*"button_alllock_reg"*/);
    sub_2213A60(&StringLiteral_18418/*"button_allchoice_unreg"*/);
    sub_2213A60(&StringLiteral_7499/*"HEADER_MSG_FAVORITE"*/);
    byte_596B49A = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_55;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_55;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 0, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_55;
    v6 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_18434/*"button_select_unreg"*/ : &StringLiteral_18433/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v6, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_55;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_55;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_55;
    v7 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_18419/*"button_alllock_reg"*/ : &StringLiteral_18420/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v7, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_55;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_55;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 2, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_55;
    v8 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_18417/*"button_allchoice_reg"*/ : &StringLiteral_18418/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton )
      goto LABEL_55;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_55;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 3, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
    if ( !normalTabButton )
      goto LABEL_55;
    if ( this->fields.tabModeKind == 3 )
      v9 = &StringLiteral_18431/*"button_push_reg"*/;
    else
      v9 = &StringLiteral_18432/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v9, 0);
    if ( modeKind > 1 )
    {
      if ( modeKind == 2 )
      {
        infoLb = this->fields.infoLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v10);
        v12 = &StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_49;
      }
      if ( modeKind == 3 )
      {
        infoLb = this->fields.infoLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v10);
        v12 = &StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
        goto LABEL_49;
      }
    }
    else
    {
      if ( !modeKind )
      {
        v13 = this->fields.infoLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v10);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7499/*"HEADER_MSG_FAVORITE"*/, 0);
        if ( !v13 )
          goto LABEL_55;
        UILabel__set_text(v13, (System_String_o *)normalTabButton, 0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_55;
        v14 = 0;
        goto LABEL_52;
      }
      if ( modeKind == 1 )
      {
        infoLb = this->fields.infoLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v10);
        v12 = &StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
LABEL_49:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v12, 0);
        if ( !infoLb )
          goto LABEL_55;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_55;
        v14 = 1;
LABEL_52:
        BYTE4(normalTabButton[15].fields.m_CachedPtr) = v14;
LABEL_53:
        FavoriteChangeListViewManager__UpdateDisplayState(
          (FavoriteChangeListViewManager_o *)normalTabButton,
          modeKind == 3,
          v10);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( normalTabButton )
        {
          FavoriteChangeListViewManager__SetMode_39794032((FavoriteChangeListViewManager_o *)normalTabButton, 2, v15);
          return;
        }
LABEL_55:
        sub_2213CDC(normalTabButton, *(_QWORD *)&modeKind);
      }
    }
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
    if ( !normalTabButton )
      goto LABEL_55;
    goto LABEL_53;
  }
}


void FavoriteChangeComponent_RequestCallbackFunc___ctor(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2001D28;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2001CE0;
}


System_IAsyncResult_o *FavoriteChangeComponent_RequestCallbackFunc__BeginInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void FavoriteChangeComponent_RequestCallbackFunc__EndInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596B49D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__);
    byte_596B49D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_37373868(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(Instance, v6);
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
    sub_2213CDC(this, method);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596B49E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__);
    byte_596B49E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__3 = this->fields.__9__3;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__,
        0);
      this->fields.__9__3 = _9__3;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_37373868(v7, _9__3, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(Instance, v6);
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
  if ( (byte_596B49F & 1) == 0 )
  {
    this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)sub_2213A60(&StringLiteral_10239/*"OnClickFavoriteDecide"*/);
    byte_596B49F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0
    || (this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)_4__this->fields.favoriteChangeManager) == 0 )
  {
    sub_2213CDC(this, method);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)this,
    (System_String_o *)StringLiteral_10239/*"OnClickFavoriteDecide"*/,
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x2

  if ( (byte_596B4A0 & 1) == 0 )
  {
    sub_2213A60(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_FavoriteChangeComponent_OnClickServant__);
    sub_2213A60(&StringLiteral_3576/*"CLICK_BACK"*/);
    byte_596B4A0 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( this->fields.questId >= 1 )
  {
    if ( _4__this )
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3576/*"CLICK_BACK"*/, 0);
              return;
            }
          }
        }
      }
    }
LABEL_19:
    sub_2213CDC(_4__this, method);
  }
  if ( !_4__this || !_4__this->fields.favoriteChangeManager )
    goto LABEL_19;
  FavoriteChangeListViewManager__ModifyItem(_4__this->fields.favoriteChangeManager, _4__this->fields.usrSvtId, v2);
  if ( this->fields.isNeedSort )
  {
    v6 = this->fields.__4__this;
    if ( !v6 )
      goto LABEL_19;
    _4__this = (FavoriteChangeComponent_o *)v6->fields.favoriteChangeManager;
    if ( !_4__this )
      goto LABEL_19;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0);
  }
  v7 = (Il2CppObject *)this->fields.__4__this;
  if ( !v7 )
    goto LABEL_19;
  monitor = (char *)v7[3].monitor;
  v9 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_2213CCC(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v9,
    v7,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    v10);
  if ( !monitor )
    goto LABEL_19;
  *((_QWORD *)monitor + 48) = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(monitor + 384), (int32_t)v9, v11, v12, v13, v14, v15, v16);
  FavoriteChangeListViewManager__SetMode_39794032((FavoriteChangeListViewManager_o *)monitor, 2, v17);
}