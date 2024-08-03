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
  __int64 v7; // x1
  __int64 v8; // x2
  FavoriteChangeListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49F79C8 & 1) == 0 )
  {
    sub_1B640C8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B640C8(&Method_FavoriteChangeComponent_OnClickServant__, v4);
    byte_49F79C8 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, method),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL)
    || (ListViewManager__SortItem((ListViewManager_o *)favoriteChangeManager, -1, 0, -1, 0LL),
        v6 = this->fields.favoriteChangeManager,
        v9 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                               v7,
                                                               v8),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          v10),
        !v6) )
  {
    sub_1B64324(favoriteChangeManager);
  }
  v6->fields.callbackFunc = v9;
  sub_1B6406C(&v6->fields.callbackFunc);
  FavoriteChangeListViewManager__SetMode_30781608(v6, 2, v11);
}


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
      sub_1B64324(favoriteChangeManager);
    }
    FavoriteChangeListViewManager__SetMode_30781608(favoriteChangeManager, 2, v5);
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

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL) )
    {
      sub_1B64324(favoriteChangeManager);
    }
    FavoriteChangeListViewManager__SetMode_30781608(favoriteChangeManager, 2, v5);
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

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL) )
    {
      sub_1B64324(favoriteChangeManager);
    }
    FavoriteChangeListViewManager__SetMode_30781608(favoriteChangeManager, 2, v5);
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

  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL) )
    {
      sub_1B64324(favoriteChangeManager);
    }
    FavoriteChangeListViewManager__SetMode_30781608(favoriteChangeManager, 2, v5);
  }
  FavoriteChangeComponent__setModeTabKind(this, 3, method);
}


void __fastcall FavoriteChangeComponent__EndCloseConfirmSelectFavorite(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_49F79C6 & 1) == 0 )
  {
    sub_1B640C8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FavoriteChangeComponent_OnClickServant__, v4);
    byte_49F79C6 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  v6 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1B64314(
                                                         FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                         method,
                                                         v2);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    v7);
  if ( !favoriteChangeManager )
    sub_1B64324(v8);
  favoriteChangeManager->fields.callbackFunc = v6;
  sub_1B6406C(&favoriteChangeManager->fields.callbackFunc);
  FavoriteChangeListViewManager__SetMode_30781608(favoriteChangeManager, 2, v9);
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
    sub_1B6406C(p_requedstCallback);
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
  __int64 v8; // x1
  __int64 v9; // x2
  FavoriteChangeListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_49F79CA & 1) == 0 )
  {
    sub_1B640C8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B640C8(&Method_FavoriteChangeComponent_OnClickServant__, v4);
    byte_49F79CA = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__UpdateDisplayState(favoriteChangeManager, 1, method),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL)
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, v6),
        v7 = this->fields.favoriteChangeManager,
        v10 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                                v8,
                                                                v9),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          v11),
        !v7) )
  {
    sub_1B64324(favoriteChangeManager);
  }
  v7->fields.callbackFunc = v10;
  sub_1B6406C(&v7->fields.callbackFunc);
  FavoriteChangeListViewManager__SetMode_30781608(v7, 2, v12);
}


void __fastcall FavoriteChangeComponent__Init(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v6; // x2

  if ( (byte_49F79C1 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_7073/*"HEADER_MSG_FAVORITE"*/, v3);
    byte_49F79C1 = 1;
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
                                                               (System_String_o *)StringLiteral_7073/*"HEADER_MSG_FAVORITE"*/,
                                                               0LL);
  if ( !infoLb )
LABEL_8:
    sub_1B64324(favoriteChangeManager);
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

  if ( (byte_49F79D2 & 1) == 0 )
  {
    sub_1B640C8(&Method_FavoriteChangeComponent_OnClickScaleChange__, method);
    byte_49F79D2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_FavoriteChangeComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      sub_1B64324(0LL);
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
  const MethodInfo *v40; // x2
  FavoriteChangeListViewItem_o *v41; // x1
  FavoriteChangeListViewItem_o **p_monitor; // x21
  __int64 v43; // x8
  __int128 v44; // q1
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x2
  int32_t tabModeKind; // w8
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  int32_t v50; // w1
  __int64 v51; // x1
  __int64 v52; // x2
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v54; // x20
  ServantStatusDialog_ResultDelegate_o *v55; // x22
  _QWORD *v56; // x0
  _QWORD *v57; // x0
  bool v58; // w22
  _QWORD *v59; // x8
  __int64 v60; // x1
  __int64 v61; // x2
  struct FavoriteChangeListViewManager_o *v62; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v63; // x21
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x2
  ServantEntity_o *servantEntity; // x22
  int64_t v67; // x23
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v69; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  Il2CppObject *v72; // x25
  Il2CppObject *Master_object; // x23
  int32_t v74; // w24
  FavoriteChangeListViewItem_o *v75; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v76; // x9
  int32_t v77; // w29
  int32_t svtId; // w24
  int32_t v79; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v81; // x23
  UserServantEntity_o *v82; // x0
  UserServantEntity_o *v83; // x0
  System_String_o *v84; // x27
  _QWORD *v85; // x0
  System_Reflection_MethodBase_o *v86; // x0
  const MethodInfo *v87; // x2
  int64_t v88; // x22
  struct UserServantEntity_o *v89; // x8
  __int128 v90; // q0
  Il2CppObject *v91; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v92; // x22
  void *v93; // x23
  Il2CppClass *v94; // x24
  Il2CppObject *v95; // x26
  Il2CppObject *v96; // x22
  int32_t v97; // w23
  FavoriteChangeListViewItem_o *v98; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v99; // x9
  int32_t v100; // w28
  int32_t v101; // w23
  int32_t v102; // w0
  int32_t v103; // w25
  System_String_o *v104; // x22
  System_String_o *v105; // x23
  System_Object_array *v106; // x24
  int32_t v107; // w27
  __int64 v108; // x1
  Il2CppObject *v109; // x27
  Il2CppObject *v110; // x27
  Il2CppObject *v111; // x26
  int32_t v112; // w0
  Il2CppObject *v113; // x26
  Il2CppObject *v114; // x26
  Il2CppObject *v115; // x21
  System_String_o *v116; // x21
  System_String_o *v117; // x23
  System_String_o *v118; // x24
  Il2CppObject *v119; // x25
  __int64 v120; // x1
  __int64 v121; // x2
  CommonConfirmDialog_ClickDelegate_o *v122; // x26
  CommonUI_o *v123; // x0
  System_String_o *v124; // x1
  System_String_o *v125; // x2
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v127; // x3
  System_String_o *v128; // x0
  System_String_o *v129; // x27
  System_Object_array *v130; // x28
  int32_t Rarity; // w26
  Il2CppObject *v132; // x26
  Il2CppObject *v133; // x26
  Il2CppObject *v134; // x25
  int32_t v135; // w0
  Il2CppObject *v136; // x21
  Il2CppObject *v137; // x21
  Il2CppObject *v138; // x21
  System_String_o *v139; // x21
  System_String_o *v140; // x22
  Il2CppObject *Instance; // x25
  __int64 v142; // x1
  __int64 v143; // x2
  __int64 v144; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v145; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16

  if ( (byte_49F79C5 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_1B640C8(&Method_FavoriteChangeComponent_OnClickServant__, v15);
    sub_1B640C8(&Method_FavoriteChangeComponent_closeSvtDetail__, v16);
    sub_1B640C8(&LocalizationManager_TypeInfo, v17);
    sub_1B640C8(&object___TypeInfo, v18);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_1B640C8(&Rarity_TypeInfo, v21);
    sub_1B640C8(&ServantStatusDialog_ResultDelegate_TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B640C8(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__, v25);
    sub_1B640C8(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__, v26);
    sub_1B640C8(&FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo, v27);
    sub_1B640C8(&StringLiteral_11828/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, v28);
    sub_1B640C8(&StringLiteral_11826/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, v29);
    sub_1B640C8(&StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v30);
    sub_1B640C8(&StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v31);
    sub_1B640C8(&StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v32);
    sub_1B640C8(&StringLiteral_11825/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, v33);
    sub_1B640C8(&StringLiteral_11829/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, v34);
    sub_1B640C8(&StringLiteral_1/*""*/, v35);
    sub_1B640C8(&StringLiteral_11827/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, v36);
    sub_1B640C8(&StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v37);
    byte_49F79C5 = 1;
  }
  v38 = (Il2CppObject *)sub_1B64314(
                          FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo,
                          *(_QWORD *)&kind,
                          *(_QWORD *)&n);
  System_Object___ctor(v38, 0LL);
  if ( !v38 )
    goto LABEL_160;
  v38[1].klass = (Il2CppClass *)this;
  sub_1B6406C(&v38[1]);
  if ( (n & 0x80000000) != 0 )
  {
    v41 = 0LL;
  }
  else
  {
    favoriteChangeManager = (__int64)this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_160;
    v41 = FavoriteChangeListViewManager__GetItem((FavoriteChangeListViewManager_o *)favoriteChangeManager, n, v40);
  }
  v38[1].monitor = v41;
  p_monitor = (FavoriteChangeListViewItem_o **)&v38[1].monitor;
  favoriteChangeManager = sub_1B6406C(&v38[1].monitor);
  if ( !v38[1].monitor )
    goto LABEL_160;
  v43 = *((_QWORD *)v38[1].monitor + 14);
  if ( !v43 )
    goto LABEL_160;
  v44 = *(_OWORD *)(v43 + 32);
  *(_OWORD *)&v147.fields.currentCryptoKey = *(_OWORD *)(v43 + 16);
  *(_OWORD *)&v147.fields.fakeValue = v44;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v146 = v147;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v146, 0LL);
  this->fields.usrSvtId = favoriteChangeManager;
  if ( kind == 1 )
  {
    FavoriteChangeComponent__setFavoriteRequest(this, *p_monitor, v46);
    return;
  }
  if ( kind == 2 )
  {
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *p_monitor )
    {
      userSvtEntity = (*p_monitor)->fields.userSvtEntity;
      v54 = (CommonUI_o *)favoriteChangeManager;
      v55 = (ServantStatusDialog_ResultDelegate_o *)sub_1B64314(ServantStatusDialog_ResultDelegate_TypeInfo, v51, v52);
      ServantStatusDialog_ResultDelegate___ctor(
        v55,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_closeSvtDetail__,
        0LL);
      if ( v54 )
      {
        CommonUI__OpenServantStatusDialog_30355996(v54, 0, userSvtEntity, v55, 0, 0LL);
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
    if ( !*p_monitor )
      goto LABEL_160;
    (*p_monitor)->fields.isSwapChoice ^= 1u;
    v56 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v56 = (_QWORD *)sub_1B640E0(Method_FavoriteChangeComponent_OnClickServant__);
    v49 = (System_Reflection_MethodBase_o *)sub_1B640AC(v56, v56[4]);
    v50 = 0;
    goto LABEL_42;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*p_monitor )
      goto LABEL_160;
    (*p_monitor)->fields.isSwapLock ^= 1u;
    v48 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v48 = (_QWORD *)sub_1B640E0(Method_FavoriteChangeComponent_OnClickServant__);
    v49 = (System_Reflection_MethodBase_o *)sub_1B640AC(v48, v48[4]);
    v50 = 11;
    goto LABEL_42;
  }
  favoriteChangeManager = (__int64)*p_monitor;
  if ( !*p_monitor )
    goto LABEL_160;
  if ( tabModeKind != 3 )
  {
    v58 = FavoriteChangeListViewItem__get_IsCanNotSelect((FavoriteChangeListViewItem_o *)favoriteChangeManager, v45);
    v59 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v59 = (_QWORD *)sub_1B640E0(Method_FavoriteChangeComponent_OnClickServant__);
    v49 = (System_Reflection_MethodBase_o *)sub_1B640AC(v59, v59[4]);
    if ( v58 )
      goto LABEL_41;
    OverwriteAssetSoundName__PlaySystemSe(v49, 0, 0LL);
    if ( *p_monitor )
    {
      servantEntity = (*p_monitor)->fields.servantEntity;
      favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
      if ( favoriteChangeManager )
      {
        v67 = *(_QWORD *)(favoriteChangeManager + 112);
        favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( favoriteChangeManager )
        {
          favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                             (DataManager_o *)favoriteChangeManager,
                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( favoriteChangeManager )
          {
            Entity = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
                       v67,
                       (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( favoriteChangeManager )
            {
              favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)favoriteChangeManager,
                                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( Entity )
              {
                v69 = (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager;
                klass = Entity[5].klass;
                monitor = Entity[5].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v148.fields.currentCryptoKey = klass;
                *(_QWORD *)&v148.fields.fakeValue = monitor;
                favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v148, 0LL);
                if ( v69 )
                {
                  v72 = DataMasterBase_object__object__int___GetEntity(
                          v69,
                          favoriteChangeManager,
                          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                  v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                          0LL);
                  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                            0LL);
                  if ( Master_object )
                  {
                    favoriteChangeManager = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                              (ServantLimitImageMaster_o *)Master_object,
                                              v74,
                                              favoriteChangeManager,
                                              0LL);
                    v75 = *p_monitor;
                    if ( *p_monitor )
                    {
                      v76 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v75->fields.userSvtEntity;
                      if ( v76 )
                      {
                        v77 = favoriteChangeManager;
                        svtId = v75->fields.svtId;
                        v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v76[6], 0LL);
                        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                       (ServantLimitImageMaster_o *)Master_object,
                                                       svtId,
                                                       v79,
                                                       0LL);
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        favoriteChangeManager = (__int64)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11829/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/,
                                                           0LL);
                        if ( *p_monitor )
                        {
                          v81 = (System_String_o *)favoriteChangeManager;
                          v82 = (*p_monitor)->fields.userSvtEntity;
                          if ( !v82 )
                            goto LABEL_68;
                          favoriteChangeManager = UserServantEntity__IsEventJoin(v82, 0LL);
                          if ( (favoriteChangeManager & 1) == 0 )
                            goto LABEL_68;
                          if ( !*p_monitor )
                            goto LABEL_160;
                          v83 = (*p_monitor)->fields.userSvtEntity;
                          if ( !v83 || !UserServantEntity__IsNoPeriod(v83, 0LL) )
                          {
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v84 = LocalizationManager__Get((System_String_o *)StringLiteral_11827/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
                          }
                          else
                          {
LABEL_68:
                            v84 = (System_String_o *)StringLiteral_1/*""*/;
                          }
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v128 = LocalizationManager__Get((System_String_o *)StringLiteral_11828/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
                          v129 = System_String__Concat_61375396(v128, v84, 0LL);
                          v130 = (System_Object_array *)sub_1B64170(object___TypeInfo, 6LL);
                          Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
                          if ( !Rarity_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                          favoriteChangeManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
                          if ( v130 )
                          {
                            v132 = (Il2CppObject *)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_1B64204(
                                                        favoriteChangeManager,
                                                        v130->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_162;
                            }
                            if ( !v130->max_length )
                              goto LABEL_161;
                            v130->m_Items[0] = v132;
                            favoriteChangeManager = sub_1B6406C(v130->m_Items);
                            if ( !v72 )
                              goto LABEL_160;
                            favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v72, 0LL);
                            v133 = (Il2CppObject *)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_1B64204(
                                                        favoriteChangeManager,
                                                        v130->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_162;
                            }
                            if ( v130->max_length <= 1 )
                              goto LABEL_161;
                            v130->m_Items[1] = v133;
                            sub_1B6406C(&v130->m_Items[1]);
                            favoriteChangeManager = (__int64)ServantEntity__getName(
                                                               (ServantEntity_o *)v72,
                                                               v77,
                                                               -1,
                                                               0LL);
                            v134 = (Il2CppObject *)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_1B64204(
                                                        favoriteChangeManager,
                                                        v130->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_162;
                            }
                            if ( v130->max_length <= 2 )
                              goto LABEL_161;
                            v130->m_Items[2] = v134;
                            favoriteChangeManager = sub_1B6406C(&v130->m_Items[2]);
                            if ( !*p_monitor )
                              goto LABEL_160;
                            favoriteChangeManager = (__int64)(*p_monitor)->fields.userSvtEntity;
                            if ( !favoriteChangeManager )
                              goto LABEL_160;
                            v135 = UserServantEntity__getRarity((UserServantEntity_o *)favoriteChangeManager, 0LL);
                            favoriteChangeManager = (__int64)Rarity__getRarityType(v135, 0LL);
                            v136 = (Il2CppObject *)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_1B64204(
                                                        favoriteChangeManager,
                                                        v130->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_162;
                            }
                            if ( v130->max_length <= 3 )
                              goto LABEL_161;
                            v130->m_Items[3] = v136;
                            favoriteChangeManager = sub_1B6406C(&v130->m_Items[3]);
                            if ( !servantEntity )
                              goto LABEL_160;
                            favoriteChangeManager = (__int64)ServantEntity__getClassName(servantEntity, 0LL);
                            v137 = (Il2CppObject *)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_1B64204(
                                                        favoriteChangeManager,
                                                        v130->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_162;
                            }
                            if ( v130->max_length <= 4 )
                              goto LABEL_161;
                            v130->m_Items[4] = v137;
                            sub_1B6406C(&v130->m_Items[4]);
                            favoriteChangeManager = (__int64)ServantEntity__getName(
                                                               servantEntity,
                                                               ServantLimitCountSealAfter,
                                                               -1,
                                                               0LL);
                            v138 = (Il2CppObject *)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_1B64204(
                                                        favoriteChangeManager,
                                                        v130->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_162;
                            }
                            if ( v130->max_length <= 5 )
LABEL_161:
                              sub_1B6432C(favoriteChangeManager, v108);
                            v130->m_Items[5] = v138;
                            sub_1B6406C(&v130->m_Items[5]);
                            v139 = System_String__Format_61389904(v129, v130, 0LL);
                            v140 = LocalizationManager__Get((System_String_o *)StringLiteral_11826/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                            v118 = LocalizationManager__Get((System_String_o *)StringLiteral_11825/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v122 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                            CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                            v142,
                                                                            v143);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v122,
                              v38,
                              Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__,
                              0LL);
                            favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
                            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            if ( Instance )
                            {
                              v123 = (CommonUI_o *)Instance;
                              v124 = v81;
                              v125 = v139;
                              static_fields = BalanceConfig_TypeInfo->static_fields;
                              v127 = v140;
                              goto LABEL_159;
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
    sub_1B64324(favoriteChangeManager);
  }
  if ( *(_QWORD *)(favoriteChangeManager + 112) )
  {
    if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(favoriteChangeManager + 112), 0LL) )
    {
LABEL_35:
      v57 = Method_FavoriteChangeComponent_OnClickServant__;
      if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
        v57 = (_QWORD *)sub_1B640E0(Method_FavoriteChangeComponent_OnClickServant__);
      v49 = (System_Reflection_MethodBase_o *)sub_1B640AC(v57, v57[4]);
LABEL_41:
      v50 = 2;
LABEL_42:
      OverwriteAssetSoundName__PlaySystemSe(v49, v50, 0LL);
      goto LABEL_43;
    }
    favoriteChangeManager = (__int64)*p_monitor;
    if ( !*p_monitor )
      goto LABEL_160;
  }
  if ( FavoriteChangeListViewItem__get_IsHerioneReave((FavoriteChangeListViewItem_o *)favoriteChangeManager, v45) )
    goto LABEL_35;
  v85 = Method_FavoriteChangeComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
    v85 = (_QWORD *)sub_1B640E0(Method_FavoriteChangeComponent_OnClickServant__);
  v86 = (System_Reflection_MethodBase_o *)sub_1B640AC(v85, v85[4]);
  OverwriteAssetSoundName__PlaySystemSe(v86, 0, 0LL);
  favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !favoriteChangeManager )
    goto LABEL_160;
  v88 = *(_QWORD *)(favoriteChangeManager + 120);
  if ( !v88 )
  {
LABEL_78:
    FavoriteChangeComponent__PushRequest(this, *p_monitor, v87);
    goto LABEL_43;
  }
  if ( !*p_monitor )
    goto LABEL_160;
  v89 = (*p_monitor)->fields.userSvtEntity;
  if ( !v89 )
    goto LABEL_160;
  v90 = *(_OWORD *)&v89->fields.id.fields.fakeValue;
  *(_OWORD *)&v147.fields.currentCryptoKey = *(_OWORD *)&v89->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v147.fields.fakeValue = v90;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v145 = v147;
  if ( v88 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v145, 0LL) )
    goto LABEL_78;
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_160;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !favoriteChangeManager )
    goto LABEL_160;
  v91 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
          v88,
          (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_160;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v91 )
    goto LABEL_160;
  v92 = (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager;
  v94 = v91[5].klass;
  v93 = v91[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v149.fields.currentCryptoKey = v94;
  *(_QWORD *)&v149.fields.fakeValue = v93;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v149, 0LL);
  if ( !v92 )
    goto LABEL_160;
  v95 = DataMasterBase_object__object__int___GetEntity(
          v92,
          favoriteChangeManager,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v96 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v91[5],
          0LL);
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v91[6],
                            0LL);
  if ( !v96 )
    goto LABEL_160;
  favoriteChangeManager = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                            (ServantLimitImageMaster_o *)v96,
                            v97,
                            favoriteChangeManager,
                            0LL);
  v98 = *p_monitor;
  if ( !*p_monitor )
    goto LABEL_160;
  v99 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v98->fields.userSvtEntity;
  if ( !v99 )
    goto LABEL_160;
  v100 = favoriteChangeManager;
  v101 = v98->fields.svtId;
  v102 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v99[6], 0LL);
  v103 = ServantLimitImageMaster__GetServantLimitCountSealAfter((ServantLimitImageMaster_o *)v96, v101, v102, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v104 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v105 = LocalizationManager__Get((System_String_o *)StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v106 = (System_Object_array *)sub_1B64170(object___TypeInfo, 6LL);
  v107 = UserServantEntity__getRarity((UserServantEntity_o *)v91, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v107, 0LL);
  if ( !v106 )
    goto LABEL_160;
  v109 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1B64204(favoriteChangeManager, v106->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_162;
  }
  if ( !v106->max_length )
    goto LABEL_161;
  v106->m_Items[0] = v109;
  favoriteChangeManager = sub_1B6406C(v106->m_Items);
  if ( !v95 )
    goto LABEL_160;
  favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v95, 0LL);
  v110 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1B64204(favoriteChangeManager, v106->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_162;
  }
  if ( v106->max_length <= 1 )
    goto LABEL_161;
  v106->m_Items[1] = v110;
  sub_1B6406C(&v106->m_Items[1]);
  favoriteChangeManager = (__int64)ServantEntity__getName((ServantEntity_o *)v95, v100, -1, 0LL);
  v111 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1B64204(favoriteChangeManager, v106->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_162;
  }
  if ( v106->max_length <= 2 )
    goto LABEL_161;
  v106->m_Items[2] = v111;
  favoriteChangeManager = sub_1B6406C(&v106->m_Items[2]);
  if ( !*p_monitor )
    goto LABEL_160;
  favoriteChangeManager = (__int64)(*p_monitor)->fields.userSvtEntity;
  if ( !favoriteChangeManager )
    goto LABEL_160;
  v112 = UserServantEntity__getRarity((UserServantEntity_o *)favoriteChangeManager, 0LL);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v112, 0LL);
  v113 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1B64204(favoriteChangeManager, v106->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_162;
  }
  if ( v106->max_length <= 3 )
    goto LABEL_161;
  v106->m_Items[3] = v113;
  favoriteChangeManager = sub_1B6406C(&v106->m_Items[3]);
  if ( !*p_monitor )
    goto LABEL_160;
  favoriteChangeManager = (__int64)(*p_monitor)->fields.servantEntity;
  if ( !favoriteChangeManager )
    goto LABEL_160;
  favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)favoriteChangeManager, 0LL);
  v114 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1B64204(favoriteChangeManager, v106->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_162;
  }
  if ( v106->max_length <= 4 )
    goto LABEL_161;
  v106->m_Items[4] = v114;
  favoriteChangeManager = sub_1B6406C(&v106->m_Items[4]);
  if ( !*p_monitor )
    goto LABEL_160;
  favoriteChangeManager = (__int64)(*p_monitor)->fields.servantEntity;
  if ( !favoriteChangeManager )
    goto LABEL_160;
  favoriteChangeManager = (__int64)ServantEntity__getName((ServantEntity_o *)favoriteChangeManager, v103, -1, 0LL);
  v115 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1B64204(favoriteChangeManager, v106->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
    {
LABEL_162:
      v144 = sub_1B64348();
      sub_1B641F0(v144, 0LL);
    }
  }
  if ( v106->max_length <= 5 )
    goto LABEL_161;
  v106->m_Items[5] = v115;
  sub_1B6406C(&v106->m_Items[5]);
  v116 = System_String__Format_61389904(v105, v106, 0LL);
  v117 = LocalizationManager__Get((System_String_o *)StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v118 = LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  v119 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v122 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v120, v121);
  CommonConfirmDialog_ClickDelegate___ctor(
    v122,
    v38,
    Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__,
    0LL);
  favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v119 )
    goto LABEL_160;
  v123 = (CommonUI_o *)v119;
  v124 = v104;
  v125 = v116;
  static_fields = BalanceConfig_TypeInfo->static_fields;
  v127 = v117;
LABEL_159:
  CommonUI__OpenConfirmDialog_30344968(v123, v124, v125, v127, v118, v122, static_fields->DefaultFontSize, 0, 0, 0LL);
LABEL_43:
  v62 = this->fields.favoriteChangeManager;
  v63 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1B64314(
                                                          FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                          v60,
                                                          v61);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v63,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    v64);
  if ( !v62 )
    goto LABEL_160;
  v62->fields.callbackFunc = v63;
  sub_1B6406C(&v62->fields.callbackFunc);
  FavoriteChangeListViewManager__SetMode_30781608(v62, 2, v65);
}


void __fastcall FavoriteChangeComponent__Open(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v5; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  struct FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  FavoriteChangeListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_49F79C2 & 1) == 0 )
  {
    sub_1B640C8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FavoriteChangeComponent_OnClickServant__, v3);
    byte_49F79C2 = 1;
  }
  FavoriteChangeComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_1B6406C(&this->fields.cancelCallback);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_36879176((TitleInfoControl_o *)gameObject, 1, 50, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_10;
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v5
    || (UnityEngine_GameObject__SetActive(v5, (unsigned __int8)gameObject & 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.favoriteChangeManager) == 0LL)
    || (FavoriteChangeListViewManager__CreateList((FavoriteChangeListViewManager_o *)gameObject, v6),
        FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v7),
        favoriteChangeManager = this->fields.favoriteChangeManager,
        v11 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                                v9,
                                                                v10),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          v12),
        !favoriteChangeManager) )
  {
LABEL_10:
    sub_1B64324(gameObject);
  }
  favoriteChangeManager->fields.callbackFunc = v11;
  sub_1B6406C(&favoriteChangeManager->fields.callbackFunc);
  FavoriteChangeListViewManager__SetMode_30781608(favoriteChangeManager, 2, v13);
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
  DataManager_o *v14; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v16; // x21
  int64_t v17; // x22
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v21; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v24; // x0
  __int128 v25; // q1
  __int64 v26; // x1
  __int64 v27; // x2
  NetworkManager_ResultCallbackFunc_o *v28; // x21
  Il2CppObject *Request_object; // x0
  __int128 v30; // q1
  CardFavoriteRequest_o *v31; // x20
  int32_t v32; // w26
  int32_t v33; // w27
  int32_t v34; // w28
  int32_t v35; // w29
  bool IsLock; // w21
  char v37; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v41; // w0
  __int64 v42; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v46; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v48; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v49; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_49F79C9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1B640C8(&Method_FavoriteChangeComponent_EndePushRequest__, v5);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49F79C9 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v14 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v14 || !userSvtEntity )
    goto LABEL_18;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  v17 = *(_QWORD *)&v14->fields.m_CachedPtr;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v19;
  *(_QWORD *)&v54.fields.fakeValue = v18;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v54, 0LL);
  if ( !v16 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, v17, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  context = v14->fields.context;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v21;
  v49 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v53;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v52, 0LL);
  v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v14->fields.masterLoadThreads;
  v48 = v24;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v25;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v51, 0LL);
  v28 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27);
  NetworkManager_ResultCallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndePushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v28,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v30 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v31 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v30;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v50, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(userSvtEntity->fields.dispLimitCount, 0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(userSvtEntity->fields.iconLimitCount, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v37 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v42 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v41;
  *(_QWORD *)&v55.fields.currentCryptoKey = v42;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v55, 0LL);
  if ( !v31 )
LABEL_18:
    sub_1B64324(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v31,
    targetUsrSVtId,
    imageLimitCount,
    v32,
    v33,
    v34,
    v35,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v46,
    IsLock,
    v37 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v49 != (struct System_Threading_SynchronizationContext_o *)v48,
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
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int64_array *v14; // x1
  System_Int64_array *v15; // x2
  bool v16; // w4
  bool v17; // w5
  __int64 v18; // x1
  __int64 v19; // x2
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  System_Int64_array *v21; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49F79D1 & 1) == 0 )
  {
    sub_1B640C8(&Method_FavoriteChangeComponent_EndStatusSync__, callback);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_49F79D1 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v21 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_21;
    if ( FavoriteChangeListViewManager__GetSwapChoiceList(favoriteChangeManager, &choiceList, &v21, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1B6406C(&this->fields.requedstCallback);
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v18, v19);
      NetworkManager_ResultCallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v20,
                                                                   (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v15 = v21;
        v14 = choiceList;
        v17 = 1;
        v16 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B64324(favoriteChangeManager);
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
      sub_1B6406C(&this->fields.requedstCallback);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v13,
                                                                   (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v15 = unlockList;
        v14 = lockList;
        v16 = 1;
        v17 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)favoriteChangeManager,
          v14,
          v15,
          0,
          v16,
          v17,
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
    sub_1B64324(favoriteChangeManager);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)favoriteChangeManager, 0LL);
}


void __fastcall FavoriteChangeComponent__cancelFavoriteWindow(
        FavoriteChangeComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_49F79C3 & 1) == 0 )
  {
    sub_1B640C8(&Method_FavoriteChangeComponent_endCancelButton__, callback);
    sub_1B640C8(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v5);
    byte_49F79C3 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1B6406C(&this->fields.cancelCallback);
  v8 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                          FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                          v6,
                                                          v7);
  FavoriteChangeComponent_RequestCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_endCancelButton__,
    v9);
  FavoriteChangeComponent__StatusRequest(this, v8, v10);
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
  Il2CppObject *Instance; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x20

  if ( (byte_49F79CB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__, v9);
    sub_1B640C8(&FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo, v10);
    byte_49F79CB = 1;
  }
  v11 = sub_1B64314(FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo, isDecide, isNeedSort);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = questId,
        *(_QWORD *)(v11 + 24) = this,
        sub_1B6406C(v11 + 24),
        *(_BYTE *)(v11 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v11,
          Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v12);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v16, 0LL);
}


void __fastcall FavoriteChangeComponent__dispSvtList(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
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
  FavoriteChangeListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_49F79C4 & 1) == 0 )
  {
    sub_1B640C8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, isRequest);
    sub_1B640C8(&Method_FavoriteChangeComponent_OnClickServant__, v5);
    byte_49F79C4 = 1;
  }
  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          v7 = this->fields.favoriteChangeManager,
          v10 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                  FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                                  v8,
                                                                  v9),
          FavoriteChangeListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
            v11),
          !v7) )
    {
LABEL_11:
      sub_1B64324(favoriteChangeManager);
    }
    v7->fields.callbackFunc = v10;
    sub_1B6406C(&v7->fields.callbackFunc);
    FavoriteChangeListViewManager__SetMode_30781608(v7, 2, v12);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_49F79CE & 1) == 0 )
  {
    sub_1B640C8(&Method_FavoriteChangeComponent_EndClickTabChoice__, method);
    sub_1B640C8(&Method_FavoriteChangeComponent_onClickChoiceTabButton__, v3);
    sub_1B640C8(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49F79CE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_FavoriteChangeComponent_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_FavoriteChangeComponent_onClickChoiceTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                                 FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                                 v7,
                                                                 v8);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabChoice__,
          v11);
        FavoriteChangeComponent__StatusRequest(this, v10, v12);
        return;
      }
      v13 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                               FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                               v7,
                                                               v8);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabChoice__,
        v14);
      FavoriteChangeComponent__StatusRequest(this, v13, v15);
    }
    FavoriteChangeComponent__setModeTabKind(this, 2, v8);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_49F79CD & 1) == 0 )
  {
    sub_1B640C8(&Method_FavoriteChangeComponent_EndClickTabLock__, method);
    sub_1B640C8(&Method_FavoriteChangeComponent_onClickLockTabButton__, v3);
    sub_1B640C8(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49F79CD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_FavoriteChangeComponent_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickLockTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_FavoriteChangeComponent_onClickLockTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                                 FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                                 v7,
                                                                 v8);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabLock__,
          v11);
        FavoriteChangeComponent__StatusRequest(this, v10, v12);
        return;
      }
      v13 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                               FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                               v7,
                                                               v8);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabLock__,
        v14);
      FavoriteChangeComponent__StatusRequest(this, v13, v15);
    }
    FavoriteChangeComponent__setModeTabKind(this, 1, v8);
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
  __int64 v7; // x1
  __int64 v8; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49F79CC & 1) == 0 )
  {
    sub_1B640C8(&Method_FavoriteChangeComponent_EndClickTabNormal__, method);
    sub_1B640C8(&Method_FavoriteChangeComponent_onClickNormalTabButton__, v3);
    sub_1B640C8(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49F79CC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_FavoriteChangeComponent_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickNormalTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_FavoriteChangeComponent_onClickNormalTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                            FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                            v7,
                                                            v8);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabNormal__,
      v10);
    FavoriteChangeComponent__StatusRequest(this, v9, v11);
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
  __int64 v7; // x1
  __int64 v8; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49F79CF & 1) == 0 )
  {
    sub_1B640C8(&Method_FavoriteChangeComponent_EndClickTabPush__, method);
    sub_1B640C8(&Method_FavoriteChangeComponent_onClickPushTabButton__, v3);
    sub_1B640C8(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v4);
    byte_49F79CF = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_FavoriteChangeComponent_onClickPushTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickPushTabButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_FavoriteChangeComponent_onClickPushTabButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1B64314(
                                                            FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                            v7,
                                                            v8);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabPush__,
      v10);
    FavoriteChangeComponent__StatusRequest(this, v9, v11);
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
  DataManager_o *v14; // x22
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v16; // x21
  int64_t v17; // x23
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  __int128 v21; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  NetworkManager_ResultCallbackFunc_o *v25; // x22
  Il2CppObject *Request_object; // x0
  __int128 v27; // q1
  CardFavoriteRequest_o *v28; // x20
  int32_t v29; // w25
  int32_t v30; // w26
  int32_t v31; // w27
  int32_t v32; // w28
  bool IsLock; // w29
  char v34; // w22
  int32_t commonFlag; // w24
  int32_t battleVoice; // w21
  int32_t randomSettingOwn; // w23
  int32_t v38; // w0
  __int64 v39; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-DCh]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-D8h]
  int64_t v43; // [xsp+60h] [xbp-D0h]
  struct System_Threading_SynchronizationContext_o *v44; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_49F79C7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1B640C8(&Method_FavoriteChangeComponent_EndCardFavoriteRequest__, v5);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49F79C7 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v14 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v14 || !userSvtEntity )
    goto LABEL_18;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  v17 = *(_QWORD *)&v14->fields.m_CachedPtr;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v19;
  *(_QWORD *)&v48.fields.fakeValue = v18;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v48, 0LL);
  if ( !v16 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, v17, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  context = v14->fields.context;
  *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v47.fields.fakeValue = v21;
  v44 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v46 = v47;
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v46, 0LL);
  v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v23, v24);
  NetworkManager_ResultCallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v25,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v27 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v28 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v45.fields.fakeValue = v27;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v45, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(userSvtEntity->fields.dispLimitCount, 0LL);
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(userSvtEntity->fields.iconLimitCount, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v34 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v39 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v49.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v38;
  *(_QWORD *)&v49.fields.currentCryptoKey = v39;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v49, 0LL);
  if ( !v28 )
LABEL_18:
    sub_1B64324(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v28,
    targetUsrSVtId,
    imageLimitCount,
    v29,
    v30,
    v31,
    v32,
    1,
    IsLock,
    v34 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v44 == (struct System_Threading_SynchronizationContext_o *)v43,
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

  if ( (byte_49F79D0 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
    sub_1B640C8(&StringLiteral_11570/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_1B640C8(&StringLiteral_17591/*"button_push_reg"*/, v6);
    sub_1B640C8(&StringLiteral_17592/*"button_push_unreg"*/, v7);
    sub_1B640C8(&StringLiteral_17577/*"button_allchoice_reg"*/, v8);
    sub_1B640C8(&StringLiteral_17580/*"button_alllock_unreg"*/, v9);
    sub_1B640C8(&StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v10);
    sub_1B640C8(&StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11);
    sub_1B640C8(&StringLiteral_17593/*"button_select_reg"*/, v12);
    sub_1B640C8(&StringLiteral_17594/*"button_select_unreg"*/, v13);
    sub_1B640C8(&StringLiteral_17579/*"button_alllock_reg"*/, v14);
    sub_1B640C8(&StringLiteral_17578/*"button_allchoice_unreg"*/, v15);
    sub_1B640C8(&StringLiteral_7073/*"HEADER_MSG_FAVORITE"*/, v16);
    byte_49F79D0 = 1;
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
    v18 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17594/*"button_select_unreg"*/ : &StringLiteral_17593/*"button_select_reg"*/);
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
    v19 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17579/*"button_alllock_reg"*/ : &StringLiteral_17580/*"button_alllock_unreg"*/);
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
    v20 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17577/*"button_allchoice_reg"*/ : &StringLiteral_17578/*"button_allchoice_unreg"*/);
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
      sub_1B64324(normalTabButton);
    }
    if ( this->fields.tabModeKind == 3 )
      v21 = &StringLiteral_17591/*"button_push_reg"*/;
    else
      v21 = &StringLiteral_17592/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v21, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7073/*"HEADER_MSG_FAVORITE"*/,
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
        v26 = &StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_45;
      case 2:
        v25 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = &StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_45;
      case 3:
        v25 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = &StringLiteral_11570/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
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
        FavoriteChangeListViewManager__SetMode_30781608((FavoriteChangeListViewManager_o *)normalTabButton, 2, v27);
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
  sub_1B6406C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A4F48;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A4F00;
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
  if ( (byte_49F79D3 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isRequest);
    byte_49F79D3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall FavoriteChangeComponent_RequestCallbackFunc__EndInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v9; // x2
  CommonUI_o *v10; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_49F79D4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__, v6);
    byte_49F79D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1B6406C(&this->fields.__9__1);
    }
    if ( v10 )
    {
      CommonUI__CloseConfirmDialog_30345628(v10, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1B64324(Instance);
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
    sub_1B64324(this);
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
  __int64 v9; // x2
  CommonUI_o *v10; // x20
  System_Action_o *_9__3; // x22

  if ( (byte_49F79D5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__, v6);
    byte_49F79D5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__3 = this->fields.__9__3;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__,
        0LL);
      this->fields.__9__3 = _9__3;
      Instance = (Il2CppObject *)sub_1B6406C(&this->fields.__9__3);
    }
    if ( v10 )
    {
      CommonUI__CloseConfirmDialog_30345628(v10, _9__3, 0LL);
      return;
    }
LABEL_10:
    sub_1B64324(Instance);
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
  if ( (byte_49F79D6 & 1) == 0 )
  {
    this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)sub_1B640C8(&StringLiteral_9793/*"OnClickFavoriteDecide"*/, method);
    byte_49F79D6 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)_4__this->fields.favoriteChangeManager) == 0LL )
  {
    sub_1B64324(this);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)this,
    (System_String_o *)StringLiteral_9793/*"OnClickFavoriteDecide"*/,
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
  __int64 v8; // x1
  __int64 v9; // x2
  struct FavoriteChangeComponent_o *v10; // x8
  Il2CppObject *v11; // x20
  FavoriteChangeListViewManager_o *monitor; // x19
  FavoriteChangeListViewManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_49F79D7 & 1) == 0 )
  {
    sub_1B640C8(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FavoriteChangeComponent_OnClickServant__, v4);
    sub_1B640C8(&StringLiteral_3506/*"CLICK_BACK"*/, v5);
    byte_49F79D7 = 1;
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
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3506/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1B64324(_4__this);
  }
  if ( !_4__this->fields.favoriteChangeManager )
    goto LABEL_18;
  FavoriteChangeListViewManager__ModifyItem(_4__this->fields.favoriteChangeManager, _4__this->fields.usrSvtId, v2);
  if ( this->fields.isNeedSort )
  {
    v10 = this->fields.__4__this;
    if ( !v10 )
      goto LABEL_18;
    _4__this = (FavoriteChangeComponent_o *)v10->fields.favoriteChangeManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v11 = (Il2CppObject *)this->fields.__4__this;
  if ( !v11 )
    goto LABEL_18;
  monitor = (FavoriteChangeListViewManager_o *)v11[3].monitor;
  v13 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1B64314(
                                                          FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                          v8,
                                                          v9);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v13,
    v11,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    v14);
  if ( !monitor )
    goto LABEL_18;
  monitor->fields.callbackFunc = v13;
  sub_1B6406C(&monitor->fields.callbackFunc);
  FavoriteChangeListViewManager__SetMode_30781608(monitor, 2, v15);
}