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
  struct FavoriteChangeListViewManager_o *v6; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4B17512 & 1) == 0 )
  {
    sub_1BCAFF8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, result);
    sub_1BCAFF8(&Method_FavoriteChangeComponent_OnClickServant__, v4);
    byte_4B17512 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, method),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL)
    || (ListViewManager__SortItem((ListViewManager_o *)favoriteChangeManager, -1, 0, -1, 0LL),
        v6 = this->fields.favoriteChangeManager,
        v7 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1BCB244(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !v6) )
  {
    sub_1BCB254(favoriteChangeManager, result);
  }
  v6->fields.callbackFunc = v7;
  sub_1BCAF9C(&v6->fields.callbackFunc);
  FavoriteChangeListViewManager__SetMode_32368264(v6, 2, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent__EndClickTabChoice(
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
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL) )
    {
      sub_1BCB254(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_32368264(favoriteChangeManager, 2, v5);
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
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL) )
    {
      sub_1BCB254(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_32368264(favoriteChangeManager, 2, v5);
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
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL) )
    {
      sub_1BCB254(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_32368264(favoriteChangeManager, 2, v5);
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
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL) )
    {
      sub_1BCB254(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_32368264(favoriteChangeManager, 2, v5);
  }
  FavoriteChangeComponent__setModeTabKind(this, 3, method);
}


void __fastcall FavoriteChangeComponent__EndCloseConfirmSelectFavorite(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4B17510 & 1) == 0 )
  {
    sub_1BCAFF8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(&Method_FavoriteChangeComponent_OnClickServant__, v3);
    byte_4B17510 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  v5 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1BCB244(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0LL);
  if ( !favoriteChangeManager )
    sub_1BCB254(v6, v7);
  favoriteChangeManager->fields.callbackFunc = v5;
  sub_1BCAF9C(&favoriteChangeManager->fields.callbackFunc);
  FavoriteChangeListViewManager__SetMode_32368264(favoriteChangeManager, 2, v8);
}


void __fastcall FavoriteChangeComponent__EndStatusSync(
        FavoriteChangeComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct FavoriteChangeComponent_RequestCallbackFunc_o **p_requedstCallback; // x0
  struct FavoriteChangeComponent_RequestCallbackFunc_o *v4; // x19
  struct FavoriteChangeComponent_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = &this->fields.requedstCallback;
  v4 = requedstCallback;
  if ( requedstCallback )
  {
    *p_requedstCallback = 0LL;
    sub_1BCAF9C(p_requedstCallback);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      1LL,
      *(_QWORD *)&v4->fields.extra_arg);
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
  struct FavoriteChangeListViewManager_o *v7; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x2

  if ( (byte_4B17514 & 1) == 0 )
  {
    sub_1BCAFF8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, result);
    sub_1BCAFF8(&Method_FavoriteChangeComponent_OnClickServant__, v4);
    byte_4B17514 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__UpdateDisplayState(favoriteChangeManager, 1, method),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL)
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, v6),
        v7 = this->fields.favoriteChangeManager,
        v8 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1BCB244(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !v7) )
  {
    sub_1BCB254(favoriteChangeManager, result);
  }
  v7->fields.callbackFunc = v8;
  sub_1BCAF9C(&v7->fields.callbackFunc);
  FavoriteChangeListViewManager__SetMode_32368264(v7, 2, v9);
}


void __fastcall FavoriteChangeComponent__Init(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4B1750B & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_7134/*"HEADER_MSG_FAVORITE"*/, v3);
    byte_4B1750B = 1;
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
                                                               (System_String_o *)StringLiteral_7134/*"HEADER_MSG_FAVORITE"*/,
                                                               0LL);
  if ( !infoLb )
LABEL_8:
    sub_1BCB254(favoriteChangeManager, method);
  UILabel__set_text(infoLb, (System_String_o *)favoriteChangeManager, 0LL);
  FavoriteChangeComponent__setModeTabKind(this, 0, v6);
}


void __fastcall FavoriteChangeComponent__OnClickScaleChange(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4B1751C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_FavoriteChangeComponent_OnClickScaleChange__, method);
    byte_4B1751C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_FavoriteChangeComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      sub_1BCB254(0LL, v5);
    FavoriteChangeListViewManager__ChangeIconScale(favoriteChangeManager, v5);
    FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v7);
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
  Il2CppObject *v38; // x20
  __int64 favoriteChangeManager; // x0
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x2
  FavoriteChangeListViewItem_o *v42; // x1
  FavoriteChangeListViewItem_o **p_monitor; // x21
  __int64 v44; // x8
  __int128 v45; // q1
  const MethodInfo *v46; // x2
  int32_t tabModeKind; // w8
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  int32_t v50; // w1
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v52; // x20
  ServantStatusDialog_ResultDelegate_o *v53; // x22
  _QWORD *v54; // x0
  _QWORD *v55; // x0
  bool v56; // w22
  _QWORD *v57; // x8
  struct FavoriteChangeListViewManager_o *v58; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v59; // x21
  const MethodInfo *v60; // x2
  ServantEntity_o *servantEntity; // x22
  int64_t v62; // x23
  Il2CppObject *v63; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x23
  void *v65; // x24
  Il2CppClass *v66; // x26
  Il2CppObject *v67; // x29
  Il2CppObject *v68; // x24
  __int64 v69; // x23
  ServantOverwriteStatus_o *v70; // x28
  System_String_o *v71; // x26
  UserServantEntity_o *v72; // x0
  UserServantEntity_o *v73; // x0
  System_String_o *v74; // x26
  _QWORD *v75; // x0
  System_Reflection_MethodBase_o *v76; // x0
  const MethodInfo *v77; // x2
  int64_t v78; // x22
  struct UserServantEntity_o *v79; // x8
  __int128 v80; // q0
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v82; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v85; // x28
  Il2CppObject *Master_object; // x23
  __int64 v87; // x29
  ServantOverwriteStatus_o *OverwriteStatus; // x27
  System_String_o *v89; // x22
  System_String_o *v90; // x24
  System_Object_array *v91; // x25
  int32_t v92; // w29
  __int64 v93; // x2
  Il2CppObject *v94; // x29
  Il2CppObject *v95; // x28
  int32_t v96; // w0
  Il2CppClass *v97; // x8
  int32_t v98; // w26
  Il2CppObject *v99; // x26
  Il2CppObject *v100; // x26
  Il2CppObject *v101; // x26
  FavoriteChangeListViewItem_o *v102; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v103; // x9
  int32_t svtId; // w21
  int32_t v105; // w0
  Il2CppObject *v106; // x21
  System_String_o *v107; // x21
  System_String_o *v108; // x23
  System_String_o *v109; // x24
  Il2CppObject *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v111; // x26
  System_String_o *v112; // x0
  System_String_o *v113; // x26
  System_Object_array *v114; // x27
  int32_t v115; // w23
  Il2CppObject *v116; // x23
  Il2CppObject *v117; // x23
  void *v118; // x23
  Il2CppClass *v119; // x29
  int32_t v120; // w23
  Il2CppObject *v121; // x23
  Il2CppObject *v122; // x23
  Il2CppObject *v123; // x22
  FavoriteChangeListViewItem_o *v124; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v125; // x9
  int32_t v126; // w21
  int32_t v127; // w0
  Il2CppObject *v128; // x21
  System_String_o *v129; // x21
  System_String_o *v130; // x22
  System_String_o *v131; // x23
  Il2CppObject *v132; // x24
  CommonConfirmDialog_ClickDelegate_o *v133; // x25
  __int64 v134; // x0
  System_String_o *title; // [xsp+48h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v138; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16

  if ( (byte_4B1750F & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_1BCAFF8(&DataManager_TypeInfo, v12);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1BCAFF8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_1BCAFF8(&Method_FavoriteChangeComponent_OnClickServant__, v15);
    sub_1BCAFF8(&Method_FavoriteChangeComponent_closeSvtDetail__, v16);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v17);
    sub_1BCAFF8(&object___TypeInfo, v18);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_1BCAFF8(&Rarity_TypeInfo, v21);
    sub_1BCAFF8(&ServantStatusDialog_ResultDelegate_TypeInfo, v22);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1BCAFF8(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__, v25);
    sub_1BCAFF8(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__, v26);
    sub_1BCAFF8(&FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo, v27);
    sub_1BCAFF8(&StringLiteral_11833/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, v28);
    sub_1BCAFF8(&StringLiteral_11831/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, v29);
    sub_1BCAFF8(&StringLiteral_11845/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v30);
    sub_1BCAFF8(&StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v31);
    sub_1BCAFF8(&StringLiteral_11844/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v32);
    sub_1BCAFF8(&StringLiteral_11830/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, v33);
    sub_1BCAFF8(&StringLiteral_11834/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, v34);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v35);
    sub_1BCAFF8(&StringLiteral_11832/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, v36);
    sub_1BCAFF8(&StringLiteral_11846/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v37);
    byte_4B1750F = 1;
  }
  v38 = (Il2CppObject *)sub_1BCB244(FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor(v38, 0LL);
  if ( !v38 )
    goto LABEL_163;
  v38[1].klass = (Il2CppClass *)this;
  sub_1BCAF9C(&v38[1]);
  if ( (n & 0x80000000) != 0 )
  {
    v42 = 0LL;
  }
  else
  {
    favoriteChangeManager = (__int64)this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_163;
    v42 = FavoriteChangeListViewManager__GetItem((FavoriteChangeListViewManager_o *)favoriteChangeManager, n, v41);
  }
  v38[1].monitor = v42;
  p_monitor = (FavoriteChangeListViewItem_o **)&v38[1].monitor;
  favoriteChangeManager = sub_1BCAF9C(&v38[1].monitor);
  if ( !v38[1].monitor )
    goto LABEL_163;
  v44 = *((_QWORD *)v38[1].monitor + 14);
  if ( !v44 )
    goto LABEL_163;
  v45 = *(_OWORD *)(v44 + 32);
  *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)(v44 + 16);
  *(_OWORD *)&v138.fields.fakeValue = v45;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v137 = v138;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v137, 0LL);
  this->fields.usrSvtId = favoriteChangeManager;
  if ( kind == 1 )
  {
    FavoriteChangeComponent__setFavoriteRequest(this, *p_monitor, v46);
    return;
  }
  if ( kind == 2 )
  {
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *p_monitor )
    {
      userSvtEntity = (*p_monitor)->fields.userSvtEntity;
      v52 = (CommonUI_o *)favoriteChangeManager;
      v53 = (ServantStatusDialog_ResultDelegate_o *)sub_1BCB244(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v53,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_closeSvtDetail__,
        0LL);
      if ( v52 )
      {
        CommonUI__OpenServantStatusDialog_30774624(v52, 0, userSvtEntity, v53, 0, 0LL, 0LL);
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
    if ( !*p_monitor )
      goto LABEL_163;
    (*p_monitor)->fields.isSwapChoice ^= 1u;
    v54 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v54 = (_QWORD *)sub_1BCB010(Method_FavoriteChangeComponent_OnClickServant__);
    v49 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v54, v54[4]);
    v50 = 0;
    goto LABEL_42;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*p_monitor )
      goto LABEL_163;
    (*p_monitor)->fields.isSwapLock ^= 1u;
    v48 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v48 = (_QWORD *)sub_1BCB010(Method_FavoriteChangeComponent_OnClickServant__);
    v49 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v48, v48[4]);
    v50 = 11;
    goto LABEL_42;
  }
  favoriteChangeManager = (__int64)*p_monitor;
  if ( !*p_monitor )
    goto LABEL_163;
  if ( tabModeKind == 3 )
  {
    if ( *(_QWORD *)(favoriteChangeManager + 112) )
    {
      if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(favoriteChangeManager + 112), 0LL) )
      {
LABEL_35:
        v55 = Method_FavoriteChangeComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
          v55 = (_QWORD *)sub_1BCB010(Method_FavoriteChangeComponent_OnClickServant__);
        v49 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v55, v55[4]);
LABEL_41:
        v50 = 2;
LABEL_42:
        OverwriteAssetSoundName__PlaySystemSe(v49, v50, 0, 0LL);
        goto LABEL_43;
      }
      favoriteChangeManager = (__int64)*p_monitor;
      if ( !*p_monitor )
        goto LABEL_163;
    }
    if ( FavoriteChangeListViewItem__get_IsHerioneReave((FavoriteChangeListViewItem_o *)favoriteChangeManager, v40) )
      goto LABEL_35;
    v75 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v75 = (_QWORD *)sub_1BCB010(Method_FavoriteChangeComponent_OnClickServant__);
    v76 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v75, v75[4]);
    OverwriteAssetSoundName__PlaySystemSe(v76, 0, 0, 0LL);
    favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( !favoriteChangeManager )
      goto LABEL_163;
    v78 = *(_QWORD *)(favoriteChangeManager + 128);
    if ( !v78 )
    {
LABEL_77:
      FavoriteChangeComponent__PushRequest(this, *p_monitor, v77);
      goto LABEL_43;
    }
    if ( !*p_monitor )
      goto LABEL_163;
    v79 = (*p_monitor)->fields.userSvtEntity;
    if ( !v79 )
      goto LABEL_163;
    v80 = *(_OWORD *)&v79->fields.id.fields.fakeValue;
    *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&v79->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v138.fields.fakeValue = v80;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v136 = v138;
    if ( v78 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v136, 0LL) )
      goto LABEL_77;
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !favoriteChangeManager )
      goto LABEL_163;
    favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)favoriteChangeManager,
                                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !favoriteChangeManager )
      goto LABEL_163;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
               v78,
               (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !favoriteChangeManager )
      goto LABEL_163;
    favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)favoriteChangeManager,
                                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_163;
    v82 = (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v140.fields.currentCryptoKey = klass;
    *(_QWORD *)&v140.fields.fakeValue = monitor;
    favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v140, 0LL);
    if ( !v82 )
      goto LABEL_163;
    v85 = DataMasterBase_object__object__int___GetEntity(
            v82,
            favoriteChangeManager,
            (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    favoriteChangeManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)Entity, 0LL, 0LL);
    if ( !*p_monitor )
      goto LABEL_163;
    v87 = favoriteChangeManager;
    favoriteChangeManager = (__int64)(*p_monitor)->fields.userSvtEntity;
    if ( !favoriteChangeManager )
      goto LABEL_163;
    OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)favoriteChangeManager, 0LL, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v89 = LocalizationManager__Get((System_String_o *)StringLiteral_11846/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v90 = LocalizationManager__Get((System_String_o *)StringLiteral_11845/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    favoriteChangeManager = sub_1BCB0A0(object___TypeInfo, 6LL);
    if ( !v87 )
      goto LABEL_163;
    v91 = (System_Object_array *)favoriteChangeManager;
    v92 = *(_DWORD *)(v87 + 24);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    favoriteChangeManager = (__int64)Rarity__getRarityType(v92, 0LL);
    if ( !v91 )
      goto LABEL_163;
    v94 = (Il2CppObject *)favoriteChangeManager;
    if ( !favoriteChangeManager
      || (favoriteChangeManager = sub_1BCB134(favoriteChangeManager, v91->obj.klass->_1.element_class)) != 0 )
    {
      if ( !v91->max_length )
        goto LABEL_164;
      v91->m_Items[0] = v94;
      favoriteChangeManager = sub_1BCAF9C(v91->m_Items);
      if ( !v85 )
        goto LABEL_163;
      favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v85, 0LL);
      v95 = (Il2CppObject *)favoriteChangeManager;
      if ( !favoriteChangeManager
        || (favoriteChangeManager = sub_1BCB134(favoriteChangeManager, v91->obj.klass->_1.element_class)) != 0 )
      {
        if ( v91->max_length <= 1 )
          goto LABEL_164;
        v91->m_Items[1] = v95;
        sub_1BCAF9C(&v91->m_Items[1]);
        v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                0LL);
        v97 = Entity[6].klass;
        *(_QWORD *)&v141.fields.fakeValue = Entity[6].monitor;
        v98 = v96;
        *(_QWORD *)&v141.fields.currentCryptoKey = v97;
        favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v141, 0LL);
        if ( !Master_object )
          goto LABEL_163;
        favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                           (ServantLimitImageMaster_o *)Master_object,
                                           v98,
                                           favoriteChangeManager,
                                           1,
                                           0LL);
        v99 = (Il2CppObject *)favoriteChangeManager;
        if ( !favoriteChangeManager
          || (favoriteChangeManager = sub_1BCB134(favoriteChangeManager, v91->obj.klass->_1.element_class)) != 0 )
        {
          if ( v91->max_length <= 2 )
            goto LABEL_164;
          v91->m_Items[2] = v99;
          favoriteChangeManager = sub_1BCAF9C(&v91->m_Items[2]);
          if ( !OverwriteStatus )
            goto LABEL_163;
          favoriteChangeManager = (__int64)Rarity__getRarityType(OverwriteStatus->fields._Rarity_k__BackingField, 0LL);
          v100 = (Il2CppObject *)favoriteChangeManager;
          if ( !favoriteChangeManager
            || (favoriteChangeManager = sub_1BCB134(favoriteChangeManager, v91->obj.klass->_1.element_class)) != 0 )
          {
            if ( v91->max_length <= 3 )
              goto LABEL_164;
            v91->m_Items[3] = v100;
            favoriteChangeManager = sub_1BCAF9C(&v91->m_Items[3]);
            if ( !*p_monitor )
              goto LABEL_163;
            favoriteChangeManager = (__int64)(*p_monitor)->fields.servantEntity;
            if ( !favoriteChangeManager )
              goto LABEL_163;
            favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)favoriteChangeManager, 0LL);
            v101 = (Il2CppObject *)favoriteChangeManager;
            if ( !favoriteChangeManager
              || (favoriteChangeManager = sub_1BCB134(favoriteChangeManager, v91->obj.klass->_1.element_class)) != 0 )
            {
              if ( v91->max_length <= 4 )
                goto LABEL_164;
              v91->m_Items[4] = v101;
              favoriteChangeManager = sub_1BCAF9C(&v91->m_Items[4]);
              v102 = *p_monitor;
              if ( !*p_monitor )
                goto LABEL_163;
              v103 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v102->fields.userSvtEntity;
              if ( !v103 )
                goto LABEL_163;
              svtId = v102->fields.svtId;
              v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v103[6], 0LL);
              favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                 (ServantLimitImageMaster_o *)Master_object,
                                                 svtId,
                                                 v105,
                                                 1,
                                                 0LL);
              v106 = (Il2CppObject *)favoriteChangeManager;
              if ( !favoriteChangeManager
                || (favoriteChangeManager = sub_1BCB134(favoriteChangeManager, v91->obj.klass->_1.element_class)) != 0 )
              {
                if ( v91->max_length > 5 )
                {
                  v91->m_Items[5] = v106;
                  sub_1BCAF9C(&v91->m_Items[5]);
                  v107 = System_String__Format_62491852(v90, v91, 0LL);
                  v108 = LocalizationManager__Get((System_String_o *)StringLiteral_11844/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v109 = LocalizationManager__Get((System_String_o *)StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v111 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v111,
                    v38,
                    Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__,
                    0LL);
                  favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( Instance )
                  {
                    CommonUI__OpenConfirmDialog_30763852(
                      (CommonUI_o *)Instance,
                      v89,
                      v107,
                      v108,
                      v109,
                      v111,
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
                      0LL);
                    goto LABEL_43;
                  }
                  goto LABEL_163;
                }
LABEL_164:
                sub_1BCB25C(favoriteChangeManager, v40, v93);
              }
            }
          }
        }
      }
    }
LABEL_165:
    v134 = sub_1BCB278();
    sub_1BCB120(v134, 0LL);
  }
  v56 = FavoriteChangeListViewItem__get_IsCanNotSelect((FavoriteChangeListViewItem_o *)favoriteChangeManager, v40);
  v57 = Method_FavoriteChangeComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
    v57 = (_QWORD *)sub_1BCB010(Method_FavoriteChangeComponent_OnClickServant__);
  v49 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v57, v57[4]);
  if ( v56 )
    goto LABEL_41;
  OverwriteAssetSoundName__PlaySystemSe(v49, 0, 0, 0LL);
  if ( !*p_monitor )
    goto LABEL_163;
  servantEntity = (*p_monitor)->fields.servantEntity;
  favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !favoriteChangeManager )
    goto LABEL_163;
  v62 = *(_QWORD *)(favoriteChangeManager + 120);
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_163;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !favoriteChangeManager )
    goto LABEL_163;
  v63 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
          v62,
          (const MethodInfo_32CA35C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_163;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v63 )
    goto LABEL_163;
  v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager;
  v66 = v63[5].klass;
  v65 = v63[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v139.fields.currentCryptoKey = v66;
  *(_QWORD *)&v139.fields.fakeValue = v65;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v139, 0LL);
  if ( !v64 )
    goto LABEL_163;
  v67 = DataMasterBase_object__object__int___GetEntity(
          v64,
          favoriteChangeManager,
          (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v68 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  favoriteChangeManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v63, 0LL, 0LL);
  if ( !*p_monitor )
    goto LABEL_163;
  v69 = favoriteChangeManager;
  favoriteChangeManager = (__int64)(*p_monitor)->fields.userSvtEntity;
  if ( !favoriteChangeManager )
    goto LABEL_163;
  v70 = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)favoriteChangeManager, 0LL, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  favoriteChangeManager = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11834/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0LL);
  if ( !*p_monitor )
    goto LABEL_163;
  v71 = (System_String_o *)favoriteChangeManager;
  v72 = (*p_monitor)->fields.userSvtEntity;
  title = v71;
  if ( !v72 )
    goto LABEL_67;
  favoriteChangeManager = UserServantEntity__IsEventJoin(v72, 0LL);
  if ( (favoriteChangeManager & 1) == 0 )
    goto LABEL_67;
  if ( !*p_monitor )
    goto LABEL_163;
  v73 = (*p_monitor)->fields.userSvtEntity;
  if ( !v73 || !UserServantEntity__IsNoPeriod(v73, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11832/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
  }
  else
  {
LABEL_67:
    v74 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v112 = LocalizationManager__Get((System_String_o *)StringLiteral_11833/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
  v113 = System_String__Concat_62450424(v112, v74, 0LL);
  favoriteChangeManager = sub_1BCB0A0(object___TypeInfo, 6LL);
  if ( !v69 )
    goto LABEL_163;
  v114 = (System_Object_array *)favoriteChangeManager;
  v115 = *(_DWORD *)(v69 + 24);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v115, 0LL);
  if ( !v114 )
LABEL_163:
    sub_1BCB254(favoriteChangeManager, v40);
  v116 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1BCB134(favoriteChangeManager, v114->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_165;
  }
  if ( !v114->max_length )
    goto LABEL_164;
  v114->m_Items[0] = v116;
  favoriteChangeManager = sub_1BCAF9C(v114->m_Items);
  if ( !v67 )
    goto LABEL_163;
  favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v67, 0LL);
  v117 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1BCB134(favoriteChangeManager, v114->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_165;
  }
  if ( v114->max_length <= 1 )
    goto LABEL_164;
  v114->m_Items[1] = v117;
  sub_1BCAF9C(&v114->m_Items[1]);
  v119 = v63[5].klass;
  v118 = v63[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v142.fields.currentCryptoKey = v119;
  *(_QWORD *)&v142.fields.fakeValue = v118;
  v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v142, 0LL);
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v63[6],
                            0LL);
  if ( !v68 )
    goto LABEL_163;
  favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                     (ServantLimitImageMaster_o *)v68,
                                     v120,
                                     favoriteChangeManager,
                                     1,
                                     0LL);
  v121 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1BCB134(favoriteChangeManager, v114->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_165;
  }
  if ( v114->max_length <= 2 )
    goto LABEL_164;
  v114->m_Items[2] = v121;
  favoriteChangeManager = sub_1BCAF9C(&v114->m_Items[2]);
  if ( !v70 )
    goto LABEL_163;
  favoriteChangeManager = (__int64)Rarity__getRarityType(v70->fields._Rarity_k__BackingField, 0LL);
  v122 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1BCB134(favoriteChangeManager, v114->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_165;
  }
  if ( v114->max_length <= 3 )
    goto LABEL_164;
  v114->m_Items[3] = v122;
  favoriteChangeManager = sub_1BCAF9C(&v114->m_Items[3]);
  if ( !servantEntity )
    goto LABEL_163;
  favoriteChangeManager = (__int64)ServantEntity__getClassName(servantEntity, 0LL);
  v123 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1BCB134(favoriteChangeManager, v114->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_165;
  }
  if ( v114->max_length <= 4 )
    goto LABEL_164;
  v114->m_Items[4] = v123;
  favoriteChangeManager = sub_1BCAF9C(&v114->m_Items[4]);
  v124 = *p_monitor;
  if ( !*p_monitor )
    goto LABEL_163;
  v125 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v124->fields.userSvtEntity;
  if ( !v125 )
    goto LABEL_163;
  v126 = v124->fields.svtId;
  v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v125[6], 0LL);
  favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                     (ServantLimitImageMaster_o *)v68,
                                     v126,
                                     v127,
                                     1,
                                     0LL);
  v128 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1BCB134(favoriteChangeManager, v114->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_165;
  }
  if ( v114->max_length <= 5 )
    goto LABEL_164;
  v114->m_Items[5] = v128;
  sub_1BCAF9C(&v114->m_Items[5]);
  v129 = System_String__Format_62491852(v113, v114, 0LL);
  v130 = LocalizationManager__Get((System_String_o *)StringLiteral_11831/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
  v131 = LocalizationManager__Get((System_String_o *)StringLiteral_11830/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
  v132 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v133 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v133,
    v38,
    Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__,
    0LL);
  favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  v40 = (const MethodInfo *)title;
  if ( !v132 )
    goto LABEL_163;
  CommonUI__OpenConfirmDialog_30763412(
    (CommonUI_o *)v132,
    title,
    v129,
    v130,
    v131,
    v133,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
LABEL_43:
  v58 = this->fields.favoriteChangeManager;
  v59 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1BCB244(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v59,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0LL);
  if ( !v58 )
    goto LABEL_163;
  v58->fields.callbackFunc = v59;
  sub_1BCAF9C(&v58->fields.callbackFunc);
  FavoriteChangeListViewManager__SetMode_32368264(v58, 2, v60);
}


void __fastcall FavoriteChangeComponent__Open(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *v6; // x20
  const MethodInfo *v7; // x1
  struct FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x2

  if ( (byte_4B1750C & 1) == 0 )
  {
    sub_1BCAFF8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(&Method_FavoriteChangeComponent_OnClickServant__, v3);
    byte_4B1750C = 1;
  }
  FavoriteChangeComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_1BCAF9C(&this->fields.cancelCallback);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_39038344((TitleInfoControl_o *)gameObject, 1, 53, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_10;
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v6
    || (UnityEngine_GameObject__SetActive(v6, (unsigned __int8)gameObject & 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.favoriteChangeManager) == 0LL)
    || (FavoriteChangeListViewManager__CreateList((FavoriteChangeListViewManager_o *)gameObject, v5),
        FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v7),
        favoriteChangeManager = this->fields.favoriteChangeManager,
        v9 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1BCB244(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !favoriteChangeManager) )
  {
LABEL_10:
    sub_1BCB254(gameObject, v5);
  }
  favoriteChangeManager->fields.callbackFunc = v9;
  sub_1BCAF9C(&favoriteChangeManager->fields.callbackFunc);
  FavoriteChangeListViewManager__SetMode_32368264(favoriteChangeManager, 2, v10);
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
  DataManager_o *v15; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q0
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
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
  struct System_Threading_SynchronizationContext_o *context; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  struct System_Threading_Thread_o *v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4B17513 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1BCAFF8(&Method_FavoriteChangeComponent_EndePushRequest__, v5);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B17513 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userSvtEntity )
    goto LABEL_18;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v15->fields.writeMasterDataThread;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v51, 0LL);
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  context = v15->fields.context;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndePushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(userSvtEntity->fields.dispLimitCount, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(userSvtEntity->fields.iconLimitCount, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1BCB254(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    imageLimitCount,
    v31,
    v32,
    v33,
    v34,
    context == (struct System_Threading_SynchronizationContext_o *)v45,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != (struct System_Threading_Thread_o *)v47,
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
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  System_Int64_array *v12; // x1
  System_Int64_array *v13; // x2
  bool v14; // w4
  bool v15; // w5
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  System_Int64_array *v17; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B1751B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_FavoriteChangeComponent_EndStatusSync__, callback);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4B1751B = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v17 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_21;
    if ( FavoriteChangeListViewManager__GetSwapChoiceList(favoriteChangeManager, &choiceList, &v17, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1BCAF9C(&this->fields.requedstCallback);
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v16,
                                                                   (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v13 = v17;
        v12 = choiceList;
        v15 = 1;
        v14 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1BCB254(favoriteChangeManager, callback);
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
      sub_1BCAF9C(&this->fields.requedstCallback);
      v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v11,
                                                                   (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v13 = unlockList;
        v12 = lockList;
        v14 = 1;
        v15 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)favoriteChangeManager,
          v12,
          v13,
          0,
          v14,
          v15,
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
                                                                     method),
        !scaleChangeTabSprite) )
  {
    sub_1BCB254(favoriteChangeManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)favoriteChangeManager, 0LL);
}


void __fastcall FavoriteChangeComponent__cancelFavoriteWindow(
        FavoriteChangeComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FavoriteChangeComponent_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4B1750D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_FavoriteChangeComponent_endCancelButton__, callback);
    sub_1BCAFF8(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v5);
    byte_4B1750D = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1BCAF9C(&this->fields.cancelCallback);
  v6 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1BCB244(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
  FavoriteChangeComponent_RequestCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_endCancelButton__,
    v7);
  FavoriteChangeComponent__StatusRequest(this, v6, v8);
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
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4B17515 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BCAFF8(&Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__, v9);
    sub_1BCAFF8(&FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo, v10);
    byte_4B17515 = 1;
  }
  v11 = sub_1BCB244(FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = questId,
        *(_QWORD *)(v11 + 24) = this,
        sub_1BCAF9C(v11 + 24),
        *(_BYTE *)(v11 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v11,
          Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_1BCB254(v12, v13);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v15, 0LL);
}


void __fastcall FavoriteChangeComponent__dispSvtList(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v3);
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
  FavoriteChangeListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_4B1750E & 1) == 0 )
  {
    sub_1BCAFF8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_1BCAFF8(&Method_FavoriteChangeComponent_OnClickServant__, v5);
    byte_4B1750E = 1;
  }
  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          v7 = this->fields.favoriteChangeManager,
          v8 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1BCB244(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
          FavoriteChangeListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
            0LL),
          !v7) )
    {
LABEL_11:
      sub_1BCB254(favoriteChangeManager, isRequest);
    }
    v7->fields.callbackFunc = v8;
    sub_1BCAF9C(&v7->fields.callbackFunc);
    FavoriteChangeListViewManager__SetMode_32368264(v7, 2, v9);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4B17518 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_FavoriteChangeComponent_EndClickTabChoice__, method);
    sub_1BCAFF8(&Method_FavoriteChangeComponent_onClickChoiceTabButton__, v3);
    sub_1BCAFF8(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_4B17518 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_FavoriteChangeComponent_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_FavoriteChangeComponent_onClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v9 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1BCB244(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabChoice__,
          v10);
        FavoriteChangeComponent__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1BCB244(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabChoice__,
        v13);
      FavoriteChangeComponent__StatusRequest(this, v12, v14);
    }
    FavoriteChangeComponent__setModeTabKind(this, 2, v7);
  }
}


void __fastcall FavoriteChangeComponent__onClickLockTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4B17517 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_FavoriteChangeComponent_EndClickTabLock__, method);
    sub_1BCAFF8(&Method_FavoriteChangeComponent_onClickLockTabButton__, v3);
    sub_1BCAFF8(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_4B17517 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_FavoriteChangeComponent_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_FavoriteChangeComponent_onClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v9 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1BCB244(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabLock__,
          v10);
        FavoriteChangeComponent__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1BCB244(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabLock__,
        v13);
      FavoriteChangeComponent__StatusRequest(this, v12, v14);
    }
    FavoriteChangeComponent__setModeTabKind(this, 1, v7);
  }
}


void __fastcall FavoriteChangeComponent__onClickNormalTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  FavoriteChangeComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4B17516 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_FavoriteChangeComponent_EndClickTabNormal__, method);
    sub_1BCAFF8(&Method_FavoriteChangeComponent_onClickNormalTabButton__, v3);
    sub_1BCAFF8(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_4B17516 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_FavoriteChangeComponent_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_FavoriteChangeComponent_onClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1BCB244(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabNormal__,
      v8);
    FavoriteChangeComponent__StatusRequest(this, v7, v9);
  }
}


void __fastcall FavoriteChangeComponent__onClickPushTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  FavoriteChangeComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4B17519 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_FavoriteChangeComponent_EndClickTabPush__, method);
    sub_1BCAFF8(&Method_FavoriteChangeComponent_onClickPushTabButton__, v3);
    sub_1BCAFF8(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_4B17519 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_FavoriteChangeComponent_onClickPushTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_FavoriteChangeComponent_onClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1BCB244(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabPush__,
      v8);
    FavoriteChangeComponent__StatusRequest(this, v7, v9);
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
  DataManager_o *v15; // x22
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x23
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  __int128 v22; // q0
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
  NetworkManager_ResultCallbackFunc_o *v24; // x22
  Il2CppObject *Request_object; // x0
  __int128 v26; // q1
  CardFavoriteRequest_o *v27; // x20
  int32_t v28; // w25
  int32_t v29; // w26
  int32_t v30; // w27
  int32_t v31; // w28
  bool IsLock; // w29
  char v33; // w22
  int32_t commonFlag; // w24
  int32_t battleVoice; // w21
  int32_t randomSettingOwn; // w23
  int32_t v37; // w0
  __int64 v38; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-DCh]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-D8h]
  int64_t v42; // [xsp+60h] [xbp-D0h]
  struct System_Threading_Thread_o *v43; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4B17511 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1BCAFF8(&Method_FavoriteChangeComponent_EndCardFavoriteRequest__, v5);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B17511 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userSvtEntity )
    goto LABEL_18;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v20;
  *(_QWORD *)&v47.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v47, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v15->fields.writeMasterDataThread;
  *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v46.fields.fakeValue = v22;
  v43 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v45 = v46;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v45, 0LL);
  v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v24,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v24,
                     (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v27 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v26;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v44, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(userSvtEntity->fields.dispLimitCount, 0LL);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(userSvtEntity->fields.iconLimitCount, 0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v33 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v38 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v48.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v37;
  *(_QWORD *)&v48.fields.currentCryptoKey = v38;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v48, 0LL);
  if ( !v27 )
LABEL_18:
    sub_1BCB254(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v27,
    targetUsrSVtId,
    imageLimitCount,
    v28,
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
    v43 == (struct System_Threading_Thread_o *)v42,
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
  const MethodInfo *v22; // x2
  UILabel_o *infoLb; // x21
  char v24; // w8
  UILabel_o *v25; // x21
  __int64 *v26; // x8
  const MethodInfo *v27; // x2

  if ( (byte_4B1751A & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_1BCAFF8(&StringLiteral_11553/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_1BCAFF8(&StringLiteral_17507/*"button_push_reg"*/, v6);
    sub_1BCAFF8(&StringLiteral_17508/*"button_push_unreg"*/, v7);
    sub_1BCAFF8(&StringLiteral_17493/*"button_allchoice_reg"*/, v8);
    sub_1BCAFF8(&StringLiteral_17496/*"button_alllock_unreg"*/, v9);
    sub_1BCAFF8(&StringLiteral_11551/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v10);
    sub_1BCAFF8(&StringLiteral_11552/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11);
    sub_1BCAFF8(&StringLiteral_17509/*"button_select_reg"*/, v12);
    sub_1BCAFF8(&StringLiteral_17510/*"button_select_unreg"*/, v13);
    sub_1BCAFF8(&StringLiteral_17495/*"button_alllock_reg"*/, v14);
    sub_1BCAFF8(&StringLiteral_17494/*"button_allchoice_unreg"*/, v15);
    sub_1BCAFF8(&StringLiteral_7134/*"HEADER_MSG_FAVORITE"*/, v16);
    byte_4B1751A = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 0, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_51;
    v18 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17510/*"button_select_unreg"*/ : &StringLiteral_17509/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v18, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_51;
    v19 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17495/*"button_alllock_reg"*/ : &StringLiteral_17496/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v19, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_51;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 2, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_51;
    v20 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17493/*"button_allchoice_reg"*/ : &StringLiteral_17494/*"button_allchoice_unreg"*/);
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
LABEL_51:
      sub_1BCB254(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v21 = &StringLiteral_17507/*"button_push_reg"*/;
    else
      v21 = &StringLiteral_17508/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v21, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7134/*"HEADER_MSG_FAVORITE"*/,
                                                       0LL);
        if ( !infoLb )
          goto LABEL_51;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v24 = 0;
        goto LABEL_48;
      case 1:
        v25 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = &StringLiteral_11552/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_45;
      case 2:
        v25 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = &StringLiteral_11551/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_45;
      case 3:
        v25 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = &StringLiteral_11553/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_45:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v26, 0LL);
        if ( !v25 )
          goto LABEL_51;
        UILabel__set_text(v25, (System_String_o *)normalTabButton, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v24 = 1;
LABEL_48:
        *((_BYTE *)&normalTabButton[15].fields + 4) = v24;
LABEL_49:
        FavoriteChangeListViewManager__UpdateDisplayState(
          (FavoriteChangeListViewManager_o *)normalTabButton,
          modeKind == 3,
          v22);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_51;
        FavoriteChangeListViewManager__SetMode_32368264((FavoriteChangeListViewManager_o *)normalTabButton, 2, v27);
        break;
      default:
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_51;
        goto LABEL_49;
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0DD68;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0DD20;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall FavoriteChangeComponent_RequestCallbackFunc__BeginInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4B1751D & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, isRequest);
    byte_4B1751D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v9, callback, object);
}


void __fastcall FavoriteChangeComponent_RequestCallbackFunc__EndInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall FavoriteChangeComponent_RequestCallbackFunc__Invoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4B1751E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BCAFF8(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__, v6);
    byte_4B1751E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1BCAF9C(&this->fields.__9__1);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30764080(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1BCB254(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__1(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCB254(this, method);
  FavoriteChangeComponent__PushRequest(this->fields.__4__this, this->fields.item, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__2(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20
  System_Action_o *_9__3; // x22

  if ( (byte_4B1751F & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BCAFF8(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__, v6);
    byte_4B1751F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__3 = this->fields.__9__3;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__,
        0LL);
      this->fields.__9__3 = _9__3;
      Instance = (Il2CppObject *)sub_1BCAF9C(&this->fields.__9__3);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30764080(v9, _9__3, 0LL);
      return;
    }
LABEL_10:
    sub_1BCB254(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__3(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  FavoriteChangeComponent___c__DisplayClass31_0_o *v2; // x19
  struct FavoriteChangeComponent_o *_4__this; // x9
  struct FavoriteChangeListViewItem_o *item; // x8

  v2 = this;
  if ( (byte_4B17520 & 1) == 0 )
  {
    this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)sub_1BCAFF8(&StringLiteral_9763/*"OnClickFavoriteDecide"*/, method);
    byte_4B17520 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)_4__this->fields.favoriteChangeManager) == 0LL )
  {
    sub_1BCB254(this, method);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)this,
    (System_String_o *)StringLiteral_9763/*"OnClickFavoriteDecide"*/,
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
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  FavoriteChangeComponent_o *_4__this; // x0
  struct FavoriteChangeComponent_o *v7; // x8
  struct FavoriteChangeComponent_o *v8; // x8
  Il2CppObject *v9; // x20
  FavoriteChangeListViewManager_o *monitor; // x19
  FavoriteChangeListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_4B17521 & 1) == 0 )
  {
    sub_1BCAFF8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(&Method_FavoriteChangeComponent_OnClickServant__, v4);
    sub_1BCAFF8(&StringLiteral_3404/*"CLICK_BACK"*/, v5);
    byte_4B17521 = 1;
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
                                                0LL);
      if ( _4__this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
        v7 = this->fields.__4__this;
        if ( v7 )
        {
          _4__this = (FavoriteChangeComponent_o *)v7->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3404/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1BCB254(_4__this, method);
  }
  if ( !_4__this->fields.favoriteChangeManager )
    goto LABEL_18;
  FavoriteChangeListViewManager__ModifyItem(_4__this->fields.favoriteChangeManager, _4__this->fields.usrSvtId, v2);
  if ( this->fields.isNeedSort )
  {
    v8 = this->fields.__4__this;
    if ( !v8 )
      goto LABEL_18;
    _4__this = (FavoriteChangeComponent_o *)v8->fields.favoriteChangeManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v9 = (Il2CppObject *)this->fields.__4__this;
  if ( !v9 )
    goto LABEL_18;
  monitor = (FavoriteChangeListViewManager_o *)v9[3].monitor;
  v11 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1BCB244(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v11,
    v9,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0LL);
  if ( !monitor )
    goto LABEL_18;
  monitor->fields.callbackFunc = v11;
  sub_1BCAF9C(&monitor->fields.callbackFunc);
  FavoriteChangeListViewManager__SetMode_32368264(monitor, 2, v12);
}