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

  if ( (byte_4A56685 & 1) == 0 )
  {
    sub_1B885B0(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4A56685 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, 0LL),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL)
    || (ListViewManager__SortItem((ListViewManager_o *)favoriteChangeManager, -1, 0, -1, 0LL),
        v5 = this->fields.favoriteChangeManager,
        v6 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1B887FC(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !v5) )
  {
    sub_1B8880C(favoriteChangeManager, result);
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
      sub_1B8880C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_31048496(favoriteChangeManager, 2, 0LL);
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
      sub_1B8880C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_31048496(favoriteChangeManager, 2, 0LL);
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
      sub_1B8880C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_31048496(favoriteChangeManager, 2, 0LL);
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
      sub_1B8880C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_31048496(favoriteChangeManager, 2, 0LL);
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

  if ( (byte_4A56683 & 1) == 0 )
  {
    sub_1B885B0(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4A56683 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  v4 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1B887FC(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0LL);
  if ( !favoriteChangeManager )
    sub_1B8880C(v5, v6);
  FavoriteChangeListViewManager__SetMode(favoriteChangeManager, 2, v4, 0LL);
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
    sub_1B88554(p_requedstCallback, 0LL);
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
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  FavoriteChangeListViewManager_o *v5; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v6; // x21

  if ( (byte_4A56687 & 1) == 0 )
  {
    sub_1B885B0(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4A56687 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__UpdateDisplayState(favoriteChangeManager, 1, 0LL),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL)
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, 0LL),
        v5 = this->fields.favoriteChangeManager,
        v6 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1B887FC(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !v5) )
  {
    sub_1B8880C(favoriteChangeManager, result);
  }
  FavoriteChangeListViewManager__SetMode(v5, 2, v6, 0LL);
}


void __fastcall FavoriteChangeComponent__Init(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4A5667E & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_7101/*"HEADER_MSG_FAVORITE"*/);
    byte_4A5667E = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager )
    goto LABEL_8;
  FavoriteChangeListViewManager__DestroyList(favoriteChangeManager, 0LL);
  this->fields.state = 0;
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  favoriteChangeManager = (FavoriteChangeListViewManager_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_7101/*"HEADER_MSG_FAVORITE"*/,
                                                               0LL);
  if ( !infoLb )
LABEL_8:
    sub_1B8880C(favoriteChangeManager, method);
  UILabel__set_text(infoLb, (System_String_o *)favoriteChangeManager, 0LL);
  FavoriteChangeComponent__setModeTabKind(this, 0, v5);
}


void __fastcall FavoriteChangeComponent__OnClickScaleChange(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4A5668F & 1) == 0 )
  {
    sub_1B885B0(&Method_FavoriteChangeComponent_OnClickScaleChange__);
    byte_4A5668F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_FavoriteChangeComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      sub_1B8880C(0LL, v5);
    FavoriteChangeListViewManager__ChangeIconScale(favoriteChangeManager, 0LL);
    FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v7);
  }
}


void __fastcall FavoriteChangeComponent__OnClickServant(
        FavoriteChangeComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x20
  __int64 favoriteChangeManager; // x0
  __int64 v9; // x1
  FavoriteChangeListViewItem_o *v10; // x1
  FavoriteChangeListViewItem_o **p_monitor; // x21
  __int64 v12; // x8
  __int128 v13; // q1
  const MethodInfo *v14; // x2
  int32_t tabModeKind; // w8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  int32_t v18; // w1
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v20; // x20
  ServantStatusDialog_ResultDelegate_o *v21; // x22
  _QWORD *v22; // x0
  _QWORD *v23; // x0
  bool v24; // w22
  _QWORD *v25; // x8
  FavoriteChangeListViewManager_o *v26; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v27; // x21
  ServantEntity_o *servantEntity; // x22
  int64_t v29; // x23
  Il2CppObject *v30; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x23
  void *v32; // x24
  Il2CppClass *v33; // x25
  Il2CppObject *v34; // x25
  Il2CppObject *v35; // x23
  int32_t v36; // w24
  FavoriteChangeListViewItem_o *v37; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x9
  int32_t v39; // w29
  int32_t v40; // w24
  int32_t v41; // w0
  int32_t v42; // w24
  System_String_o *v43; // x23
  System_String_o *v44; // x26
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  const MethodInfo *v47; // x2
  int64_t v48; // x22
  struct UserServantEntity_o *v49; // x8
  __int128 v50; // q0
  System_String_o *v51; // x0
  System_String_o *v52; // x26
  System_Object_array *v53; // x27
  int32_t v54; // w28
  Il2CppObject *v55; // x28
  Il2CppObject *v56; // x28
  Il2CppObject *v57; // x25
  int32_t v58; // w0
  Il2CppObject *v59; // x21
  Il2CppObject *v60; // x21
  Il2CppObject *v61; // x21
  System_String_o *v62; // x21
  System_String_o *v63; // x22
  System_String_o *v64; // x24
  Il2CppObject *v65; // x25
  CommonConfirmDialog_ClickDelegate_o *v66; // x26
  CommonUI_o *v67; // x0
  System_String_o *v68; // x1
  System_String_o *v69; // x2
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v71; // x3
  Il2CppObject *Entity; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v73; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v76; // x26
  Il2CppObject *Master_object; // x22
  int32_t v78; // w23
  FavoriteChangeListViewItem_o *v79; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v80; // x9
  int32_t v81; // w28
  int32_t svtId; // w23
  int32_t v83; // w0
  int32_t ServantLimitCountSealAfter; // w25
  System_String_o *v85; // x22
  System_String_o *v86; // x23
  System_Object_array *v87; // x24
  int32_t Rarity; // w27
  Il2CppObject *v89; // x27
  Il2CppObject *v90; // x27
  Il2CppObject *v91; // x26
  int32_t v92; // w0
  Il2CppObject *v93; // x26
  Il2CppObject *v94; // x26
  Il2CppObject *v95; // x21
  System_String_o *v96; // x21
  System_String_o *v97; // x23
  Il2CppObject *Instance; // x25
  __int64 v99; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  if ( (byte_4A56682 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_FavoriteChangeComponent_OnClickServant__);
    sub_1B885B0(&Method_FavoriteChangeComponent_closeSvtDetail__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__);
    sub_1B885B0(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__);
    sub_1B885B0(&FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11883/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11881/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11880/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11884/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_11882/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4A56682 = 1;
  }
  v7 = (Il2CppObject *)sub_1B887FC(FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_157;
  v7[1].klass = (Il2CppClass *)this;
  sub_1B88554(&v7[1], this);
  if ( (n & 0x80000000) != 0 )
  {
    v10 = 0LL;
  }
  else
  {
    favoriteChangeManager = (__int64)this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_157;
    v10 = FavoriteChangeListViewManager__GetItem((FavoriteChangeListViewManager_o *)favoriteChangeManager, n, 0LL);
  }
  v7[1].monitor = v10;
  p_monitor = (FavoriteChangeListViewItem_o **)&v7[1].monitor;
  favoriteChangeManager = sub_1B88554(&v7[1].monitor, v10);
  if ( !v7[1].monitor )
    goto LABEL_157;
  v12 = *((_QWORD *)v7[1].monitor + 14);
  if ( !v12 )
    goto LABEL_157;
  v13 = *(_OWORD *)(v12 + 32);
  *(_OWORD *)&v102.fields.currentCryptoKey = *(_OWORD *)(v12 + 16);
  *(_OWORD *)&v102.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v101 = v102;
  this->fields.usrSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v101, 0LL);
  if ( kind == 1 )
  {
    FavoriteChangeComponent__setFavoriteRequest(this, *p_monitor, v14);
    return;
  }
  if ( kind == 2 )
  {
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *p_monitor )
    {
      userSvtEntity = (*p_monitor)->fields.userSvtEntity;
      v20 = (CommonUI_o *)favoriteChangeManager;
      v21 = (ServantStatusDialog_ResultDelegate_o *)sub_1B887FC(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v21,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_closeSvtDetail__,
        0LL);
      if ( v20 )
      {
        CommonUI__OpenServantStatusDialog_30504960(v20, 0, userSvtEntity, v21, 0, 0LL);
        return;
      }
    }
    goto LABEL_157;
  }
  if ( kind != 3 )
    return;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    favoriteChangeManager = (__int64)*p_monitor;
    if ( !*p_monitor )
      goto LABEL_157;
    FavoriteChangeListViewItem__SwapChoice((FavoriteChangeListViewItem_o *)favoriteChangeManager, 0LL);
    v22 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_1B885C8(Method_FavoriteChangeComponent_OnClickServant__);
    v17 = (System_Reflection_MethodBase_o *)sub_1B88594(v22, v22[4]);
    v18 = 0;
    goto LABEL_41;
  }
  if ( tabModeKind == 1 )
  {
    favoriteChangeManager = (__int64)*p_monitor;
    if ( !*p_monitor )
      goto LABEL_157;
    FavoriteChangeListViewItem__SwapLock((FavoriteChangeListViewItem_o *)favoriteChangeManager, 0LL);
    v16 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1B885C8(Method_FavoriteChangeComponent_OnClickServant__);
    v17 = (System_Reflection_MethodBase_o *)sub_1B88594(v16, v16[4]);
    v18 = 11;
    goto LABEL_41;
  }
  favoriteChangeManager = (__int64)*p_monitor;
  if ( !*p_monitor )
    goto LABEL_157;
  if ( tabModeKind == 3 )
  {
    if ( FavoriteChangeListViewItem__get_IsEventJoin((FavoriteChangeListViewItem_o *)favoriteChangeManager, 0LL) )
      goto LABEL_34;
    favoriteChangeManager = (__int64)*p_monitor;
    if ( !*p_monitor )
      goto LABEL_157;
    if ( FavoriteChangeListViewItem__get_IsHerioneReave((FavoriteChangeListViewItem_o *)favoriteChangeManager, 0LL) )
    {
LABEL_34:
      v23 = Method_FavoriteChangeComponent_OnClickServant__;
      if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
        v23 = (_QWORD *)sub_1B885C8(Method_FavoriteChangeComponent_OnClickServant__);
      v17 = (System_Reflection_MethodBase_o *)sub_1B88594(v23, v23[4]);
LABEL_40:
      v18 = 2;
LABEL_41:
      OverwriteAssetSoundName__PlaySystemSe(v17, v18, 0LL);
      goto LABEL_42;
    }
    v45 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v45 = (_QWORD *)sub_1B885C8(Method_FavoriteChangeComponent_OnClickServant__);
    v46 = (System_Reflection_MethodBase_o *)sub_1B88594(v45, v45[4]);
    OverwriteAssetSoundName__PlaySystemSe(v46, 0, 0LL);
    favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( !favoriteChangeManager )
      goto LABEL_157;
    v48 = *(_QWORD *)(favoriteChangeManager + 120);
    if ( !v48 )
    {
LABEL_75:
      FavoriteChangeComponent__PushRequest(this, *p_monitor, v47);
      goto LABEL_42;
    }
    if ( !*p_monitor )
      goto LABEL_157;
    v49 = (*p_monitor)->fields.userSvtEntity;
    if ( !v49 )
      goto LABEL_157;
    v50 = *(_OWORD *)&v49->fields.id.fields.fakeValue;
    *(_OWORD *)&v102.fields.currentCryptoKey = *(_OWORD *)&v49->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v102.fields.fakeValue = v50;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v100 = v102;
    if ( v48 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v100, 0LL) )
      goto LABEL_75;
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !favoriteChangeManager )
      goto LABEL_157;
    favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)favoriteChangeManager,
                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !favoriteChangeManager )
      goto LABEL_157;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
               v48,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !favoriteChangeManager )
      goto LABEL_157;
    favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                       (DataManager_o *)favoriteChangeManager,
                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_157;
    v73 = (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v104.fields.currentCryptoKey = klass;
    *(_QWORD *)&v104.fields.fakeValue = monitor;
    favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v104, 0LL);
    if ( !v73 )
      goto LABEL_157;
    v76 = DataMasterBase_object__object__int___GetEntity(
            v73,
            favoriteChangeManager,
            (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
            0LL);
    favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                              (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                              0LL);
    if ( !Master_object )
      goto LABEL_157;
    favoriteChangeManager = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                              (ServantLimitImageMaster_o *)Master_object,
                              v78,
                              favoriteChangeManager,
                              0LL);
    v79 = *p_monitor;
    if ( !*p_monitor )
      goto LABEL_157;
    v80 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v79->fields.userSvtEntity;
    if ( !v80 )
      goto LABEL_157;
    v81 = favoriteChangeManager;
    svtId = v79->fields.svtId;
    v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v80[6], 0LL);
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Master_object,
                                   svtId,
                                   v83,
                                   0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v85 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v86 = LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v87 = (System_Object_array *)sub_1B88658(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    favoriteChangeManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
    if ( !v87 )
      goto LABEL_157;
    v89 = (Il2CppObject *)favoriteChangeManager;
    if ( !favoriteChangeManager
      || (favoriteChangeManager = sub_1B886EC(favoriteChangeManager, v87->obj.klass->_1.element_class)) != 0 )
    {
      if ( !v87->max_length )
        goto LABEL_158;
      v87->m_Items[0] = v89;
      favoriteChangeManager = sub_1B88554(v87->m_Items, v89);
      if ( !v76 )
        goto LABEL_157;
      favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v76, 0LL);
      v90 = (Il2CppObject *)favoriteChangeManager;
      if ( !favoriteChangeManager
        || (favoriteChangeManager = sub_1B886EC(favoriteChangeManager, v87->obj.klass->_1.element_class)) != 0 )
      {
        if ( v87->max_length <= 1 )
          goto LABEL_158;
        v87->m_Items[1] = v90;
        sub_1B88554(&v87->m_Items[1], v90);
        favoriteChangeManager = (__int64)ServantEntity__getName((ServantEntity_o *)v76, v81, -1, 0LL);
        v91 = (Il2CppObject *)favoriteChangeManager;
        if ( !favoriteChangeManager
          || (favoriteChangeManager = sub_1B886EC(favoriteChangeManager, v87->obj.klass->_1.element_class)) != 0 )
        {
          if ( v87->max_length <= 2 )
            goto LABEL_158;
          v87->m_Items[2] = v91;
          favoriteChangeManager = sub_1B88554(&v87->m_Items[2], v91);
          if ( !*p_monitor )
            goto LABEL_157;
          favoriteChangeManager = (__int64)(*p_monitor)->fields.userSvtEntity;
          if ( !favoriteChangeManager )
            goto LABEL_157;
          v92 = UserServantEntity__getRarity((UserServantEntity_o *)favoriteChangeManager, 0LL);
          favoriteChangeManager = (__int64)Rarity__getRarityType(v92, 0LL);
          v93 = (Il2CppObject *)favoriteChangeManager;
          if ( !favoriteChangeManager
            || (favoriteChangeManager = sub_1B886EC(favoriteChangeManager, v87->obj.klass->_1.element_class)) != 0 )
          {
            if ( v87->max_length <= 3 )
              goto LABEL_158;
            v87->m_Items[3] = v93;
            favoriteChangeManager = sub_1B88554(&v87->m_Items[3], v93);
            if ( !*p_monitor )
              goto LABEL_157;
            favoriteChangeManager = (__int64)(*p_monitor)->fields.servantEntity;
            if ( !favoriteChangeManager )
              goto LABEL_157;
            favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)favoriteChangeManager, 0LL);
            v94 = (Il2CppObject *)favoriteChangeManager;
            if ( !favoriteChangeManager
              || (favoriteChangeManager = sub_1B886EC(favoriteChangeManager, v87->obj.klass->_1.element_class)) != 0 )
            {
              if ( v87->max_length <= 4 )
                goto LABEL_158;
              v87->m_Items[4] = v94;
              favoriteChangeManager = sub_1B88554(&v87->m_Items[4], v94);
              if ( !*p_monitor )
                goto LABEL_157;
              favoriteChangeManager = (__int64)(*p_monitor)->fields.servantEntity;
              if ( !favoriteChangeManager )
                goto LABEL_157;
              favoriteChangeManager = (__int64)ServantEntity__getName(
                                                 (ServantEntity_o *)favoriteChangeManager,
                                                 ServantLimitCountSealAfter,
                                                 -1,
                                                 0LL);
              v95 = (Il2CppObject *)favoriteChangeManager;
              if ( !favoriteChangeManager
                || (favoriteChangeManager = sub_1B886EC(favoriteChangeManager, v87->obj.klass->_1.element_class)) != 0 )
              {
                if ( v87->max_length > 5 )
                {
                  v87->m_Items[5] = v95;
                  sub_1B88554(&v87->m_Items[5], v95);
                  v96 = System_String__Format_61721540(v86, v87, 0LL);
                  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v66 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                  CommonConfirmDialog_ClickDelegate___ctor(
                    v66,
                    v7,
                    Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__,
                    0LL);
                  favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  if ( Instance )
                  {
                    v67 = (CommonUI_o *)Instance;
                    v68 = v85;
                    v69 = v96;
                    static_fields = BalanceConfig_TypeInfo->static_fields;
                    v71 = v97;
                    goto LABEL_110;
                  }
                  goto LABEL_157;
                }
LABEL_158:
                sub_1B88814(favoriteChangeManager, v9);
              }
            }
          }
        }
      }
    }
LABEL_159:
    v99 = sub_1B88830();
    sub_1B886D8(v99, 0LL);
  }
  v24 = FavoriteChangeListViewItem__get_IsCanNotSelect((FavoriteChangeListViewItem_o *)favoriteChangeManager, 0LL);
  v25 = Method_FavoriteChangeComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
    v25 = (_QWORD *)sub_1B885C8(Method_FavoriteChangeComponent_OnClickServant__);
  v17 = (System_Reflection_MethodBase_o *)sub_1B88594(v25, v25[4]);
  if ( v24 )
    goto LABEL_40;
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
  if ( !*p_monitor )
    goto LABEL_157;
  servantEntity = (*p_monitor)->fields.servantEntity;
  favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !favoriteChangeManager )
    goto LABEL_157;
  v29 = *(_QWORD *)(favoriteChangeManager + 112);
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_157;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !favoriteChangeManager )
    goto LABEL_157;
  v30 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
          v29,
          (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_157;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v30 )
    goto LABEL_157;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager;
  v33 = v30[5].klass;
  v32 = v30[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v103.fields.currentCryptoKey = v33;
  *(_QWORD *)&v103.fields.fakeValue = v32;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v103, 0LL);
  if ( !v31 )
    goto LABEL_157;
  v34 = DataMasterBase_object__object__int___GetEntity(
          v31,
          favoriteChangeManager,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v35 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v30[5],
          0LL);
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v30[6],
                            0LL);
  if ( !v35 )
    goto LABEL_157;
  favoriteChangeManager = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                            (ServantLimitImageMaster_o *)v35,
                            v36,
                            favoriteChangeManager,
                            0LL);
  v37 = *p_monitor;
  if ( !*p_monitor )
    goto LABEL_157;
  v38 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v37->fields.userSvtEntity;
  if ( !v38 )
    goto LABEL_157;
  v39 = favoriteChangeManager;
  v40 = v37->fields.svtId;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v38[6], 0LL);
  v42 = ServantLimitImageMaster__GetServantLimitCountSealAfter((ServantLimitImageMaster_o *)v35, v40, v41, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  favoriteChangeManager = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11884/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0LL);
  if ( !*p_monitor )
    goto LABEL_157;
  v43 = (System_String_o *)favoriteChangeManager;
  if ( !FavoriteChangeListViewItem__get_IsEventJoin(*p_monitor, 0LL) )
    goto LABEL_65;
  favoriteChangeManager = (__int64)*p_monitor;
  if ( !*p_monitor )
    goto LABEL_157;
  if ( !FavoriteChangeListViewItem__get_IsNoPeriod((FavoriteChangeListViewItem_o *)favoriteChangeManager, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11882/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
  }
  else
  {
LABEL_65:
    v44 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11883/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
  v52 = System_String__Concat_61707032(v51, v44, 0LL);
  v53 = (System_Object_array *)sub_1B88658(object___TypeInfo, 6LL);
  v54 = UserServantEntity__getRarity((UserServantEntity_o *)v30, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v54, 0LL);
  if ( !v53 )
LABEL_157:
    sub_1B8880C(favoriteChangeManager, v9);
  v55 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1B886EC(favoriteChangeManager, v53->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_159;
  }
  if ( !v53->max_length )
    goto LABEL_158;
  v53->m_Items[0] = v55;
  favoriteChangeManager = sub_1B88554(v53->m_Items, v55);
  if ( !v34 )
    goto LABEL_157;
  favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v34, 0LL);
  v56 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1B886EC(favoriteChangeManager, v53->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_159;
  }
  if ( v53->max_length <= 1 )
    goto LABEL_158;
  v53->m_Items[1] = v56;
  sub_1B88554(&v53->m_Items[1], v56);
  favoriteChangeManager = (__int64)ServantEntity__getName((ServantEntity_o *)v34, v39, -1, 0LL);
  v57 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1B886EC(favoriteChangeManager, v53->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_159;
  }
  if ( v53->max_length <= 2 )
    goto LABEL_158;
  v53->m_Items[2] = v57;
  favoriteChangeManager = sub_1B88554(&v53->m_Items[2], v57);
  if ( !*p_monitor )
    goto LABEL_157;
  favoriteChangeManager = (__int64)(*p_monitor)->fields.userSvtEntity;
  if ( !favoriteChangeManager )
    goto LABEL_157;
  v58 = UserServantEntity__getRarity((UserServantEntity_o *)favoriteChangeManager, 0LL);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v58, 0LL);
  v59 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1B886EC(favoriteChangeManager, v53->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_159;
  }
  if ( v53->max_length <= 3 )
    goto LABEL_158;
  v53->m_Items[3] = v59;
  favoriteChangeManager = sub_1B88554(&v53->m_Items[3], v59);
  if ( !servantEntity )
    goto LABEL_157;
  favoriteChangeManager = (__int64)ServantEntity__getClassName(servantEntity, 0LL);
  v60 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1B886EC(favoriteChangeManager, v53->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_159;
  }
  if ( v53->max_length <= 4 )
    goto LABEL_158;
  v53->m_Items[4] = v60;
  sub_1B88554(&v53->m_Items[4], v60);
  favoriteChangeManager = (__int64)ServantEntity__getName(servantEntity, v42, -1, 0LL);
  v61 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1B886EC(favoriteChangeManager, v53->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_159;
  }
  if ( v53->max_length <= 5 )
    goto LABEL_158;
  v53->m_Items[5] = v61;
  sub_1B88554(&v53->m_Items[5], v61);
  v62 = System_String__Format_61721540(v52, v53, 0LL);
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_11881/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_11880/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
  v65 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v66 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v66,
    v7,
    Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__,
    0LL);
  favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v65 )
    goto LABEL_157;
  v67 = (CommonUI_o *)v65;
  v68 = v43;
  v69 = v62;
  static_fields = BalanceConfig_TypeInfo->static_fields;
  v71 = v63;
LABEL_110:
  CommonUI__OpenConfirmDialog_30493912(v67, v68, v69, v71, v64, v66, static_fields->DefaultFontSize, 0, 0, 0LL);
LABEL_42:
  v26 = this->fields.favoriteChangeManager;
  v27 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1B887FC(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0LL);
  if ( !v26 )
    goto LABEL_157;
  FavoriteChangeListViewManager__SetMode(v26, 2, v27, 0LL);
}


void __fastcall FavoriteChangeComponent__Open(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x20
  const MethodInfo *v6; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_4A5667F & 1) == 0 )
  {
    sub_1B885B0(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4A5667F = 1;
  }
  FavoriteChangeComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_1B88554(&this->fields.cancelCallback, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_37188552((TitleInfoControl_o *)gameObject, 1, 50, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_10;
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v5
    || (UnityEngine_GameObject__SetActive(v5, (unsigned __int8)gameObject & 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.favoriteChangeManager) == 0LL)
    || (FavoriteChangeListViewManager__CreateList((FavoriteChangeListViewManager_o *)gameObject, 0LL),
        FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v6),
        favoriteChangeManager = this->fields.favoriteChangeManager,
        v8 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1B887FC(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !favoriteChangeManager) )
  {
LABEL_10:
    sub_1B8880C(gameObject, v4);
  }
  FavoriteChangeListViewManager__SetMode(favoriteChangeManager, 2, v8, 0LL);
  this->fields.state = 2;
}


void __fastcall FavoriteChangeComponent__PushRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
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
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4A56686 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_FavoriteChangeComponent_EndePushRequest__);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56686 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !userSvtEntity )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v45, 0LL);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v43, 0LL);
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v7->fields.masterLoadThreads;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndePushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v41, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtEntity->fields.dispLimitCount, 0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtEntity->fields.iconLimitCount, 0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v33 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v46, 0LL);
  if ( !v22 )
LABEL_18:
    sub_1B8880C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    imageLimitCount,
    v23,
    v24,
    v25,
    v26,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v37,
    IsLock,
    v28 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != (struct System_Threading_SynchronizationContext_o *)v39,
    0LL);
}


void __fastcall FavoriteChangeComponent__StatusRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeComponent_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t tabModeKind; // w8
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  System_Int64_array *v8; // x1
  System_Int64_array *v9; // x2
  bool v10; // w4
  bool v11; // w5
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  System_Int64_array *v13; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5668E & 1) == 0 )
  {
    sub_1B885B0(&Method_FavoriteChangeComponent_EndStatusSync__);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5668E = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v13 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_21;
    if ( FavoriteChangeListViewManager__GetSwapChoiceList(favoriteChangeManager, &choiceList, &v13, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_1B88554(&this->fields.requedstCallback, callback);
      v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v12,
                                                                   (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v9 = v13;
        v8 = choiceList;
        v11 = 1;
        v10 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B8880C(favoriteChangeManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_21;
    if ( FavoriteChangeListViewManager__GetSwapLockList(favoriteChangeManager, &lockList, &unlockList, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_1B88554(&this->fields.requedstCallback, callback);
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v7,
                                                                   (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v9 = unlockList;
        v8 = lockList;
        v10 = 1;
        v11 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)favoriteChangeManager, v8, v9, 0, v10, v11, 0LL);
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
                                                                     0LL),
        !scaleChangeTabSprite) )
  {
    sub_1B8880C(favoriteChangeManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)favoriteChangeManager, 0LL);
}


void __fastcall FavoriteChangeComponent__cancelFavoriteWindow(
        FavoriteChangeComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  FavoriteChangeComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A56680 & 1) == 0 )
  {
    sub_1B885B0(&Method_FavoriteChangeComponent_endCancelButton__);
    sub_1B885B0(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4A56680 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1B88554(&this->fields.cancelCallback, callback);
  v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1B887FC(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
  FavoriteChangeComponent_RequestCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_endCancelButton__,
    v6);
  FavoriteChangeComponent__StatusRequest(this, v5, v7);
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
  Il2CppObject *Instance; // x19
  System_Action_o *v12; // x20

  if ( (byte_4A56688 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__);
    sub_1B885B0(&FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo);
    byte_4A56688 = 1;
  }
  v8 = sub_1B887FC(FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        *(_QWORD *)(v8 + 24) = this,
        sub_1B88554(v8 + 24, this),
        *(_BYTE *)(v8 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v8,
          Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v9, v10);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v12, 0LL);
}


void __fastcall FavoriteChangeComponent__dispSvtList(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
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

  if ( (byte_4A56681 & 1) == 0 )
  {
    sub_1B885B0(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4A56681 = 1;
  }
  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, 0LL),
          v6 = this->fields.favoriteChangeManager,
          v7 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1B887FC(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
          FavoriteChangeListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
            0LL),
          !v6) )
    {
LABEL_11:
      sub_1B8880C(favoriteChangeManager, isRequest);
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

  if ( (byte_4A5668B & 1) == 0 )
  {
    sub_1B885B0(&Method_FavoriteChangeComponent_EndClickTabChoice__);
    sub_1B885B0(&Method_FavoriteChangeComponent_onClickChoiceTabButton__);
    sub_1B885B0(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4A5668B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_FavoriteChangeComponent_onClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1B887FC(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabChoice__,
          v8);
        FavoriteChangeComponent__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1B887FC(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
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


void __fastcall FavoriteChangeComponent__onClickLockTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A5668A & 1) == 0 )
  {
    sub_1B885B0(&Method_FavoriteChangeComponent_EndClickTabLock__);
    sub_1B885B0(&Method_FavoriteChangeComponent_onClickLockTabButton__);
    sub_1B885B0(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4A5668A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_FavoriteChangeComponent_onClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1B887FC(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabLock__,
          v8);
        FavoriteChangeComponent__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1B887FC(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
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


void __fastcall FavoriteChangeComponent__onClickNormalTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  FavoriteChangeComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A56689 & 1) == 0 )
  {
    sub_1B885B0(&Method_FavoriteChangeComponent_EndClickTabNormal__);
    sub_1B885B0(&Method_FavoriteChangeComponent_onClickNormalTabButton__);
    sub_1B885B0(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4A56689 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_FavoriteChangeComponent_onClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1B887FC(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabNormal__,
      v6);
    FavoriteChangeComponent__StatusRequest(this, v5, v7);
  }
}


void __fastcall FavoriteChangeComponent__onClickPushTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  FavoriteChangeComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A5668C & 1) == 0 )
  {
    sub_1B885B0(&Method_FavoriteChangeComponent_EndClickTabPush__);
    sub_1B885B0(&Method_FavoriteChangeComponent_onClickPushTabButton__);
    sub_1B885B0(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4A5668C = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v3 = Method_FavoriteChangeComponent_onClickPushTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_FavoriteChangeComponent_onClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1B887FC(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabPush__,
      v6);
    FavoriteChangeComponent__StatusRequest(this, v5, v7);
  }
}


void __fastcall FavoriteChangeComponent__setFavoriteRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x22
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x23
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  __int128 v14; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
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
  struct System_Threading_SynchronizationContext_o *v35; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4A56684 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_FavoriteChangeComponent_EndCardFavoriteRequest__);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56684 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !userSvtEntity )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v12;
  *(_QWORD *)&v39.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v39, 0LL);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v38.fields.fakeValue = v14;
  v35 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v37 = v38;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v37, 0LL);
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v16,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v19 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v36.fields.fakeValue = v18;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v36, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtEntity->fields.dispLimitCount, 0LL);
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtEntity->fields.iconLimitCount, 0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v25 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v30 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v40.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v29;
  *(_QWORD *)&v40.fields.currentCryptoKey = v30;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v40, 0LL);
  if ( !v19 )
LABEL_18:
    sub_1B8880C(limitCountSupport, v6);
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
    v35 == (struct System_Threading_SynchronizationContext_o *)v34,
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
  char v11; // w8
  UILabel_o *v12; // x21
  __int64 *v13; // x8

  if ( (byte_4A5668D & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11625/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1B885B0(&StringLiteral_17661/*"button_push_reg"*/);
    sub_1B885B0(&StringLiteral_17662/*"button_push_unreg"*/);
    sub_1B885B0(&StringLiteral_17647/*"button_allchoice_reg"*/);
    sub_1B885B0(&StringLiteral_17650/*"button_alllock_unreg"*/);
    sub_1B885B0(&StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1B885B0(&StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1B885B0(&StringLiteral_17663/*"button_select_reg"*/);
    sub_1B885B0(&StringLiteral_17664/*"button_select_unreg"*/);
    sub_1B885B0(&StringLiteral_17649/*"button_alllock_reg"*/);
    sub_1B885B0(&StringLiteral_17648/*"button_allchoice_unreg"*/);
    sub_1B885B0(&StringLiteral_7101/*"HEADER_MSG_FAVORITE"*/);
    byte_4A5668D = 1;
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
    v6 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17664/*"button_select_unreg"*/ : &StringLiteral_17663/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v6, 0LL);
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
    v7 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17649/*"button_alllock_reg"*/ : &StringLiteral_17650/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v7, 0LL);
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
    v8 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17647/*"button_allchoice_reg"*/ : &StringLiteral_17648/*"button_allchoice_unreg"*/);
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
LABEL_51:
      sub_1B8880C(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v9 = &StringLiteral_17661/*"button_push_reg"*/;
    else
      v9 = &StringLiteral_17662/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v9, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7101/*"HEADER_MSG_FAVORITE"*/,
                                                       0LL);
        if ( !infoLb )
          goto LABEL_51;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v11 = 0;
        goto LABEL_48;
      case 1:
        v12 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_45;
      case 2:
        v12 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_45;
      case 3:
        v12 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_11625/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_45:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v13, 0LL);
        if ( !v12 )
          goto LABEL_51;
        UILabel__set_text(v12, (System_String_o *)normalTabButton, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v11 = 1;
LABEL_48:
        *((_BYTE *)&normalTabButton[15].fields + 4) = v11;
LABEL_49:
        FavoriteChangeListViewManager__UpdateDisplayState(
          (FavoriteChangeListViewManager_o *)normalTabButton,
          modeKind == 3,
          0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_51;
        FavoriteChangeListViewManager__SetMode_31048496((FavoriteChangeListViewManager_o *)normalTabButton, 2, 0LL);
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
  sub_1B88554(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C773C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C76F4;
}


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
  if ( (byte_4A56690 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A56690 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall FavoriteChangeComponent_RequestCallbackFunc__EndInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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


void __fastcall FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__0(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4A56691 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__);
    byte_4A56691 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1B88554(&this->fields.__9__1, _9__1);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_30494572(v7, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(Instance, v6);
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
    sub_1B8880C(this, method);
  FavoriteChangeComponent__PushRequest(this->fields.__4__this, this->fields.item, v2);
}


void __fastcall FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__2(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__3; // x22

  if ( (byte_4A56692 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__);
    byte_4A56692 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__3 = this->fields.__9__3;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__,
        0LL);
      this->fields.__9__3 = _9__3;
      Instance = (Il2CppObject *)sub_1B88554(&this->fields.__9__3, _9__3);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_30494572(v7, _9__3, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(Instance, v6);
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
  if ( (byte_4A56693 & 1) == 0 )
  {
    this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)sub_1B885B0(&StringLiteral_9838/*"OnClickFavoriteDecide"*/);
    byte_4A56693 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)_4__this->fields.favoriteChangeManager) == 0LL )
  {
    sub_1B8880C(this, method);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)this,
    (System_String_o *)StringLiteral_9838/*"OnClickFavoriteDecide"*/,
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
  Il2CppObject *v6; // x20
  FavoriteChangeListViewManager_o *monitor; // x19
  FavoriteChangeListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_4A56694 & 1) == 0 )
  {
    sub_1B885B0(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FavoriteChangeComponent_OnClickServant__);
    sub_1B885B0(&StringLiteral_3528/*"CLICK_BACK"*/);
    byte_4A56694 = 1;
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
        v4 = this->fields.__4__this;
        if ( v4 )
        {
          _4__this = (FavoriteChangeComponent_o *)v4->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3528/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1B8880C(_4__this, method);
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
  v6 = (Il2CppObject *)this->fields.__4__this;
  if ( !v6 )
    goto LABEL_18;
  monitor = (FavoriteChangeListViewManager_o *)v6[3].monitor;
  v8 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1B887FC(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v8,
    v6,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0LL);
  if ( !monitor )
    goto LABEL_18;
  FavoriteChangeListViewManager__SetMode(monitor, 2, v8, 0LL);
}