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

  if ( (byte_4C32910 & 1) == 0 )
  {
    sub_1C32C20(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4C32910 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, 0),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0)
    || (ListViewManager__SortItem((ListViewManager_o *)favoriteChangeManager, -1, 0, -1, 0),
        v5 = this->fields.favoriteChangeManager,
        v6 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C32E6C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0),
        !v5) )
  {
    sub_1C32E7C(favoriteChangeManager);
  }
  FavoriteChangeListViewManager__SetMode(v5, 2, v6, 0);
}


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
      sub_1C32E7C(favoriteChangeManager);
    }
    FavoriteChangeListViewManager__SetMode_33014780(favoriteChangeManager, 2, 0);
  }
  FavoriteChangeComponent__setModeTabKind(this, 2, method);
}


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
      sub_1C32E7C(favoriteChangeManager);
    }
    FavoriteChangeListViewManager__SetMode_33014780(favoriteChangeManager, 2, 0);
  }
  FavoriteChangeComponent__setModeTabKind(this, 1, method);
}


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
      sub_1C32E7C(favoriteChangeManager);
    }
    FavoriteChangeListViewManager__SetMode_33014780(favoriteChangeManager, 2, 0);
  }
  FavoriteChangeComponent__setModeTabKind(this, 0, method);
}


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
      sub_1C32E7C(favoriteChangeManager);
    }
    FavoriteChangeListViewManager__SetMode_33014780(favoriteChangeManager, 2, 0);
  }
  FavoriteChangeComponent__setModeTabKind(this, 3, method);
}


void FavoriteChangeComponent__EndCloseConfirmSelectFavorite(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C3290E & 1) == 0 )
  {
    sub_1C32C20(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4C3290E = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  v4 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C32E6C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0);
  if ( !favoriteChangeManager )
    sub_1C32E7C(v5);
  FavoriteChangeListViewManager__SetMode(favoriteChangeManager, 2, v4, 0);
}


void FavoriteChangeComponent__EndStatusSync(
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
    *p_requedstCallback = 0;
    sub_1C32BC4(p_requedstCallback, 0);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      1,
      v4->fields.method);
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

  if ( (byte_4C32912 & 1) == 0 )
  {
    sub_1C32C20(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4C32912 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__UpdateDisplayState(favoriteChangeManager, 1, 0),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0)
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, 0),
        v5 = this->fields.favoriteChangeManager,
        v6 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C32E6C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0),
        !v5) )
  {
    sub_1C32E7C(favoriteChangeManager);
  }
  FavoriteChangeListViewManager__SetMode(v5, 2, v6, 0);
}


void FavoriteChangeComponent__Init(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4C32909 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_7200/*"HEADER_MSG_FAVORITE"*/);
    byte_4C32909 = 1;
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
                                                               (System_String_o *)StringLiteral_7200/*"HEADER_MSG_FAVORITE"*/,
                                                               0);
  if ( !infoLb )
LABEL_8:
    sub_1C32E7C(favoriteChangeManager);
  UILabel__set_text(infoLb, (System_String_o *)favoriteChangeManager, 0);
  FavoriteChangeComponent__setModeTabKind(this, 0, v5);
}


void FavoriteChangeComponent__OnClickScaleChange(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C3291A & 1) == 0 )
  {
    sub_1C32C20(&Method_FavoriteChangeComponent_OnClickScaleChange__);
    byte_4C3291A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_FavoriteChangeComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      sub_1C32E7C(0);
    FavoriteChangeListViewManager__ChangeIconScale(favoriteChangeManager, 0);
    FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v6);
  }
}


void FavoriteChangeComponent__OnClickServant(
        FavoriteChangeComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  FavoriteChangeComponent___c__DisplayClass31_0_o *v7; // x20
  __int64 favoriteChangeManager; // x0
  FavoriteChangeListViewItem_o *v9; // x1
  FavoriteChangeListViewItem_o **p_item; // x21
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v12; // q1
  const MethodInfo *v13; // x2
  int32_t tabModeKind; // w8
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  int32_t v17; // w1
  UserServantEntity_o *v18; // x21
  CommonUI_o *v19; // x20
  ServantStatusDialog_ResultDelegate_o *v20; // x22
  _QWORD *v21; // x0
  _QWORD *v22; // x0
  bool v23; // w22
  _QWORD *v24; // x8
  FavoriteChangeListViewManager_o *v25; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v26; // x21
  ServantEntity_o *servantEntity; // x22
  int64_t v28; // x23
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x26
  Il2CppObject *v33; // x29
  Il2CppObject *Master_object; // x24
  __int64 v35; // x23
  ServantOverwriteStatus_o *OverwriteStatus; // x28
  System_String_o *v37; // x26
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  const MethodInfo *v40; // x2
  int64_t v41; // x22
  struct UserServantEntity_o *v42; // x8
  __int128 v43; // q0
  System_String_o *v44; // x0
  System_String_o *v45; // x26
  System_Object_array *v46; // x27
  int32_t v47; // w23
  Il2CppObject *v48; // x23
  Il2CppObject *v49; // x23
  void *v50; // x23
  Il2CppClass *v51; // x29
  int32_t v52; // w23
  Il2CppObject *v53; // x23
  Il2CppObject *v54; // x23
  Il2CppObject *v55; // x22
  FavoriteChangeListViewItem_o *v56; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v57; // x9
  int32_t svtId; // w21
  int32_t v59; // w0
  Il2CppObject *v60; // x21
  System_String_o *v61; // x21
  System_String_o *v62; // x22
  System_String_o *v63; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v65; // x25
  Il2CppObject *v66; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v67; // x22
  void *v68; // x23
  Il2CppClass *v69; // x24
  Il2CppObject *v70; // x28
  Il2CppObject *v71; // x23
  __int64 v72; // x29
  ServantOverwriteStatus_o *v73; // x27
  System_String_o *v74; // x22
  System_String_o *v75; // x24
  System_Object_array *v76; // x25
  int32_t v77; // w29
  Il2CppObject *v78; // x29
  Il2CppObject *v79; // x28
  int32_t v80; // w0
  Il2CppClass *v81; // x8
  int32_t v82; // w26
  Il2CppObject *v83; // x26
  Il2CppObject *v84; // x26
  Il2CppObject *v85; // x26
  FavoriteChangeListViewItem_o *v86; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v87; // x9
  int32_t v88; // w21
  int32_t v89; // w0
  Il2CppObject *v90; // x21
  System_String_o *v91; // x21
  System_String_o *v92; // x23
  System_String_o *v93; // x24
  Il2CppObject *v94; // x25
  CommonConfirmDialog_ClickDelegate_o *v95; // x26
  __int64 v96; // x0
  System_String_o *title; // [xsp+48h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  if ( (byte_4C3290D & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&Method_FavoriteChangeComponent_OnClickServant__);
    sub_1C32C20(&Method_FavoriteChangeComponent_closeSvtDetail__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Rarity_TypeInfo);
    sub_1C32C20(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__);
    sub_1C32C20(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__);
    sub_1C32C20(&FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo);
    sub_1C32C20(&StringLiteral_11937/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_11935/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_11949/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_11947/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_11948/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_11934/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_11938/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_11936/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_11950/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4C3290D = 1;
  }
  v7 = (FavoriteChangeComponent___c__DisplayClass31_0_o *)sub_1C32E6C(FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo);
  FavoriteChangeComponent___c__DisplayClass31_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_160;
  v7->fields.__4__this = this;
  sub_1C32BC4(&v7->fields, this);
  if ( n < 0 )
  {
    v9 = 0;
  }
  else
  {
    favoriteChangeManager = (__int64)this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_160;
    v9 = FavoriteChangeListViewManager__GetItem((FavoriteChangeListViewManager_o *)favoriteChangeManager, n, 0);
  }
  v7->fields.item = v9;
  p_item = &v7->fields.item;
  favoriteChangeManager = sub_1C32BC4(&v7->fields.item, v9);
  if ( !v7->fields.item )
    goto LABEL_160;
  userSvtEntity = v7->fields.item->fields.userSvtEntity;
  if ( !userSvtEntity )
    goto LABEL_160;
  v12 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v100.fields.fakeValue = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v99 = v100;
  this->fields.usrSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v99, 0);
  if ( kind == 1 )
  {
    FavoriteChangeComponent__setFavoriteRequest(this, *p_item, v13);
    return;
  }
  if ( kind == 2 )
  {
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *p_item )
    {
      v18 = (*p_item)->fields.userSvtEntity;
      v19 = (CommonUI_o *)favoriteChangeManager;
      v20 = (ServantStatusDialog_ResultDelegate_o *)sub_1C32E6C(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v20,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_closeSvtDetail__,
        0);
      if ( v19 )
      {
        CommonUI__OpenServantStatusDialog_31201624(v19, 0, v18, v20, 0, 0, 0);
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
    favoriteChangeManager = (__int64)*p_item;
    if ( !*p_item )
      goto LABEL_160;
    FavoriteChangeListViewItem__SwapChoice((FavoriteChangeListViewItem_o *)favoriteChangeManager, 0);
    v21 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1C32C38(Method_FavoriteChangeComponent_OnClickServant__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C32C04(v21, v21[4]);
    v17 = 0;
    goto LABEL_41;
  }
  if ( tabModeKind == 1 )
  {
    favoriteChangeManager = (__int64)*p_item;
    if ( !*p_item )
      goto LABEL_160;
    FavoriteChangeListViewItem__SwapLock((FavoriteChangeListViewItem_o *)favoriteChangeManager, 0);
    v15 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1C32C38(Method_FavoriteChangeComponent_OnClickServant__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C32C04(v15, v15[4]);
    v17 = 11;
    goto LABEL_41;
  }
  favoriteChangeManager = (__int64)*p_item;
  if ( !*p_item )
    goto LABEL_160;
  if ( tabModeKind != 3 )
  {
    v23 = FavoriteChangeListViewItem__get_IsCanNotSelect((FavoriteChangeListViewItem_o *)favoriteChangeManager, 0);
    v24 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_1C32C38(Method_FavoriteChangeComponent_OnClickServant__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C32C04(v24, v24[4]);
    if ( v23 )
      goto LABEL_40;
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
    if ( *p_item )
    {
      servantEntity = (*p_item)->fields.servantEntity;
      favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0);
      if ( favoriteChangeManager )
      {
        v28 = *(_QWORD *)(favoriteChangeManager + 120);
        favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( favoriteChangeManager )
        {
          favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                             (DataManager_o *)favoriteChangeManager,
                                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( favoriteChangeManager )
          {
            Entity = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
                       v28,
                       (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( favoriteChangeManager )
            {
              favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)favoriteChangeManager,
                                                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( Entity )
              {
                v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager;
                klass = Entity[5].klass;
                monitor = Entity[5].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v101.fields.currentCryptoKey = klass;
                *(_QWORD *)&v101.fields.fakeValue = monitor;
                favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v101, 0);
                if ( v30 )
                {
                  v33 = DataMasterBase_object__object__int___GetEntity(
                          v30,
                          favoriteChangeManager,
                          (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                  favoriteChangeManager = (__int64)UserServantEntity__GetOverwriteStatus(
                                                     (UserServantEntity_o *)Entity,
                                                     0,
                                                     0);
                  if ( *p_item )
                  {
                    v35 = favoriteChangeManager;
                    favoriteChangeManager = (__int64)(*p_item)->fields.userSvtEntity;
                    if ( favoriteChangeManager )
                    {
                      OverwriteStatus = UserServantEntity__GetOverwriteStatus(
                                          (UserServantEntity_o *)favoriteChangeManager,
                                          0,
                                          0);
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      favoriteChangeManager = (__int64)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11938/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/,
                                                         0);
                      if ( *p_item )
                      {
                        title = (System_String_o *)favoriteChangeManager;
                        if ( !FavoriteChangeListViewItem__get_IsEventJoin(*p_item, 0) )
                          goto LABEL_64;
                        favoriteChangeManager = (__int64)*p_item;
                        if ( !*p_item )
                          goto LABEL_160;
                        if ( !FavoriteChangeListViewItem__get_IsNoPeriod(
                                (FavoriteChangeListViewItem_o *)favoriteChangeManager,
                                0) )
                        {
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11936/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0);
                        }
                        else
                        {
LABEL_64:
                          v37 = (System_String_o *)StringLiteral_1/*""*/;
                        }
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11937/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0);
                        v45 = System_String__Concat_63518544(v44, v37, 0);
                        favoriteChangeManager = sub_1C32CC8(object___TypeInfo, 6);
                        if ( v35 )
                        {
                          v46 = (System_Object_array *)favoriteChangeManager;
                          v47 = *(_DWORD *)(v35 + 24);
                          if ( !Rarity_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                          favoriteChangeManager = (__int64)Rarity__getRarityType(v47, 0);
                          if ( v46 )
                          {
                            v48 = (Il2CppObject *)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_1C32D5C(
                                                        favoriteChangeManager,
                                                        v46->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_162;
                            }
                            if ( !LODWORD(v46->max_length) )
                              goto LABEL_161;
                            v46->m_Items[0] = v48;
                            favoriteChangeManager = sub_1C32BC4(v46->m_Items, v48);
                            if ( !v33 )
                              goto LABEL_160;
                            favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v33, 0);
                            v49 = (Il2CppObject *)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_1C32D5C(
                                                        favoriteChangeManager,
                                                        v46->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_162;
                            }
                            if ( LODWORD(v46->max_length) <= 1 )
                              goto LABEL_161;
                            v46->m_Items[1] = v49;
                            sub_1C32BC4(&v46->m_Items[1], v49);
                            v51 = Entity[5].klass;
                            v50 = Entity[5].monitor;
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            *(_QWORD *)&v102.fields.currentCryptoKey = v51;
                            *(_QWORD *)&v102.fields.fakeValue = v50;
                            v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v102, 0);
                            favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                                      0);
                            if ( Master_object )
                            {
                              favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                 (ServantLimitImageMaster_o *)Master_object,
                                                                 v52,
                                                                 favoriteChangeManager,
                                                                 1,
                                                                 0);
                              v53 = (Il2CppObject *)favoriteChangeManager;
                              if ( favoriteChangeManager )
                              {
                                favoriteChangeManager = sub_1C32D5C(
                                                          favoriteChangeManager,
                                                          v46->obj.klass->_1.element_class);
                                if ( !favoriteChangeManager )
                                  goto LABEL_162;
                              }
                              if ( LODWORD(v46->max_length) <= 2 )
                                goto LABEL_161;
                              v46->m_Items[2] = v53;
                              favoriteChangeManager = sub_1C32BC4(&v46->m_Items[2], v53);
                              if ( !OverwriteStatus )
                                goto LABEL_160;
                              favoriteChangeManager = (__int64)Rarity__getRarityType(
                                                                 OverwriteStatus->fields._Rarity_k__BackingField,
                                                                 0);
                              v54 = (Il2CppObject *)favoriteChangeManager;
                              if ( favoriteChangeManager )
                              {
                                favoriteChangeManager = sub_1C32D5C(
                                                          favoriteChangeManager,
                                                          v46->obj.klass->_1.element_class);
                                if ( !favoriteChangeManager )
                                  goto LABEL_162;
                              }
                              if ( LODWORD(v46->max_length) <= 3 )
                                goto LABEL_161;
                              v46->m_Items[3] = v54;
                              favoriteChangeManager = sub_1C32BC4(&v46->m_Items[3], v54);
                              if ( !servantEntity )
                                goto LABEL_160;
                              favoriteChangeManager = (__int64)ServantEntity__getClassName(servantEntity, 0);
                              v55 = (Il2CppObject *)favoriteChangeManager;
                              if ( favoriteChangeManager )
                              {
                                favoriteChangeManager = sub_1C32D5C(
                                                          favoriteChangeManager,
                                                          v46->obj.klass->_1.element_class);
                                if ( !favoriteChangeManager )
                                  goto LABEL_162;
                              }
                              if ( LODWORD(v46->max_length) <= 4 )
                                goto LABEL_161;
                              v46->m_Items[4] = v55;
                              favoriteChangeManager = sub_1C32BC4(&v46->m_Items[4], v55);
                              v56 = *p_item;
                              if ( !*p_item )
                                goto LABEL_160;
                              v57 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v56->fields.userSvtEntity;
                              if ( !v57 )
                                goto LABEL_160;
                              svtId = v56->fields.svtId;
                              v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v57[6], 0);
                              favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                 (ServantLimitImageMaster_o *)Master_object,
                                                                 svtId,
                                                                 v59,
                                                                 1,
                                                                 0);
                              v60 = (Il2CppObject *)favoriteChangeManager;
                              if ( favoriteChangeManager )
                              {
                                favoriteChangeManager = sub_1C32D5C(
                                                          favoriteChangeManager,
                                                          v46->obj.klass->_1.element_class);
                                if ( !favoriteChangeManager )
                                  goto LABEL_162;
                              }
                              if ( LODWORD(v46->max_length) <= 5 )
                                goto LABEL_161;
                              v46->m_Items[5] = v60;
                              sub_1C32BC4(&v46->m_Items[5], v60);
                              v61 = System_String__Format_63559972(v45, v46, 0);
                              v62 = LocalizationManager__Get((System_String_o *)StringLiteral_11935/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0);
                              v63 = LocalizationManager__Get((System_String_o *)StringLiteral_11934/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0);
                              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                              v65 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                              CommonConfirmDialog_ClickDelegate___ctor(
                                v65,
                                (Il2CppObject *)v7,
                                Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__,
                                0);
                              favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
                              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                              if ( Instance )
                              {
                                CommonUI__OpenConfirmDialog_31190412(
                                  (CommonUI_o *)Instance,
                                  title,
                                  v61,
                                  v62,
                                  v63,
                                  v65,
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
    sub_1C32E7C(favoriteChangeManager);
  }
  if ( FavoriteChangeListViewItem__get_IsEventJoin((FavoriteChangeListViewItem_o *)favoriteChangeManager, 0) )
    goto LABEL_34;
  favoriteChangeManager = (__int64)*p_item;
  if ( !*p_item )
    goto LABEL_160;
  if ( FavoriteChangeListViewItem__get_IsHerioneReave((FavoriteChangeListViewItem_o *)favoriteChangeManager, 0) )
  {
LABEL_34:
    v22 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_1C32C38(Method_FavoriteChangeComponent_OnClickServant__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C32C04(v22, v22[4]);
LABEL_40:
    v17 = 2;
LABEL_41:
    OverwriteAssetSoundName__PlaySystemSe(v16, v17, 0, 0);
    goto LABEL_42;
  }
  v38 = Method_FavoriteChangeComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
    v38 = (_QWORD *)sub_1C32C38(Method_FavoriteChangeComponent_OnClickServant__);
  v39 = (System_Reflection_MethodBase_o *)sub_1C32C04(v38, v38[4]);
  OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0, 0);
  favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !favoriteChangeManager )
    goto LABEL_160;
  v41 = *(_QWORD *)(favoriteChangeManager + 128);
  if ( !v41 )
  {
LABEL_74:
    FavoriteChangeComponent__PushRequest(this, *p_item, v40);
    goto LABEL_42;
  }
  if ( !*p_item )
    goto LABEL_160;
  v42 = (*p_item)->fields.userSvtEntity;
  if ( !v42 )
    goto LABEL_160;
  v43 = *(_OWORD *)&v42->fields.id.fields.fakeValue;
  *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&v42->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v100.fields.fakeValue = v43;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v98 = v100;
  if ( v41 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v98, 0) )
    goto LABEL_74;
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_160;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !favoriteChangeManager )
    goto LABEL_160;
  v66 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
          v41,
          (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_160;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v66 )
    goto LABEL_160;
  v67 = (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager;
  v69 = v66[5].klass;
  v68 = v66[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v103.fields.currentCryptoKey = v69;
  *(_QWORD *)&v103.fields.fakeValue = v68;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v103, 0);
  if ( !v67 )
    goto LABEL_160;
  v70 = DataMasterBase_object__object__int___GetEntity(
          v67,
          favoriteChangeManager,
          (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v71 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  favoriteChangeManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v66, 0, 0);
  if ( !*p_item )
    goto LABEL_160;
  v72 = favoriteChangeManager;
  favoriteChangeManager = (__int64)(*p_item)->fields.userSvtEntity;
  if ( !favoriteChangeManager )
    goto LABEL_160;
  v73 = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)favoriteChangeManager, 0, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11950/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_11949/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
  favoriteChangeManager = sub_1C32CC8(object___TypeInfo, 6);
  if ( !v72 )
    goto LABEL_160;
  v76 = (System_Object_array *)favoriteChangeManager;
  v77 = *(_DWORD *)(v72 + 24);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v77, 0);
  if ( !v76 )
    goto LABEL_160;
  v78 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C32D5C(favoriteChangeManager, v76->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_162;
  }
  if ( !LODWORD(v76->max_length) )
    goto LABEL_161;
  v76->m_Items[0] = v78;
  favoriteChangeManager = sub_1C32BC4(v76->m_Items, v78);
  if ( !v70 )
    goto LABEL_160;
  favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v70, 0);
  v79 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C32D5C(favoriteChangeManager, v76->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_162;
  }
  if ( LODWORD(v76->max_length) <= 1 )
    goto LABEL_161;
  v76->m_Items[1] = v79;
  sub_1C32BC4(&v76->m_Items[1], v79);
  v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v66[5],
          0);
  v81 = v66[6].klass;
  *(_QWORD *)&v104.fields.fakeValue = v66[6].monitor;
  v82 = v80;
  *(_QWORD *)&v104.fields.currentCryptoKey = v81;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v104, 0);
  if ( !v71 )
    goto LABEL_160;
  favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                     (ServantLimitImageMaster_o *)v71,
                                     v82,
                                     favoriteChangeManager,
                                     1,
                                     0);
  v83 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C32D5C(favoriteChangeManager, v76->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_162;
  }
  if ( LODWORD(v76->max_length) <= 2 )
    goto LABEL_161;
  v76->m_Items[2] = v83;
  favoriteChangeManager = sub_1C32BC4(&v76->m_Items[2], v83);
  if ( !v73 )
    goto LABEL_160;
  favoriteChangeManager = (__int64)Rarity__getRarityType(v73->fields._Rarity_k__BackingField, 0);
  v84 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C32D5C(favoriteChangeManager, v76->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_162;
  }
  if ( LODWORD(v76->max_length) <= 3 )
    goto LABEL_161;
  v76->m_Items[3] = v84;
  favoriteChangeManager = sub_1C32BC4(&v76->m_Items[3], v84);
  if ( !*p_item )
    goto LABEL_160;
  favoriteChangeManager = (__int64)(*p_item)->fields.servantEntity;
  if ( !favoriteChangeManager )
    goto LABEL_160;
  favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)favoriteChangeManager, 0);
  v85 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C32D5C(favoriteChangeManager, v76->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_162;
  }
  if ( LODWORD(v76->max_length) <= 4 )
    goto LABEL_161;
  v76->m_Items[4] = v85;
  favoriteChangeManager = sub_1C32BC4(&v76->m_Items[4], v85);
  v86 = *p_item;
  if ( !*p_item )
    goto LABEL_160;
  v87 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v86->fields.userSvtEntity;
  if ( !v87 )
    goto LABEL_160;
  v88 = v86->fields.svtId;
  v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v87[6], 0);
  favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                     (ServantLimitImageMaster_o *)v71,
                                     v88,
                                     v89,
                                     1,
                                     0);
  v90 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1C32D5C(favoriteChangeManager, v76->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
    {
LABEL_162:
      v96 = sub_1C32EA0();
      sub_1C32D48(v96, 0);
    }
  }
  if ( LODWORD(v76->max_length) <= 5 )
LABEL_161:
    sub_1C32E84(favoriteChangeManager);
  v76->m_Items[5] = v90;
  sub_1C32BC4(&v76->m_Items[5], v90);
  v91 = System_String__Format_63559972(v75, v76, 0);
  v92 = LocalizationManager__Get((System_String_o *)StringLiteral_11948/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_11947/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
  v94 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v95 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v95,
    (Il2CppObject *)v7,
    Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__,
    0);
  favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
  }
  if ( !v94 )
    goto LABEL_160;
  CommonUI__OpenConfirmDialog_31190852(
    (CommonUI_o *)v94,
    v74,
    v91,
    v92,
    v93,
    v95,
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
  v25 = this->fields.favoriteChangeManager;
  v26 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C32E6C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v26,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0);
  if ( !v25 )
    goto LABEL_160;
  FavoriteChangeListViewManager__SetMode(v25, 2, v26, 0);
}


void FavoriteChangeComponent__Open(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v4; // x20
  const MethodInfo *v5; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4C3290A & 1) == 0 )
  {
    sub_1C32C20(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4C3290A = 1;
  }
  FavoriteChangeComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.cancelCallback = 0;
  sub_1C32BC4(&this->fields.cancelCallback, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_39747676((TitleInfoControl_o *)gameObject, 1, 53, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_10;
  v4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0);
  if ( !v4
    || (UnityEngine_GameObject__SetActive(v4, (unsigned __int8)gameObject & 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.favoriteChangeManager) == 0)
    || (FavoriteChangeListViewManager__CreateList((FavoriteChangeListViewManager_o *)gameObject, 0),
        FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v5),
        favoriteChangeManager = this->fields.favoriteChangeManager,
        v7 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C32E6C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0),
        !favoriteChangeManager) )
  {
LABEL_10:
    sub_1C32E7C(gameObject);
  }
  FavoriteChangeListViewManager__SetMode(favoriteChangeManager, 2, v7, 0);
  this->fields.state = 2;
}


void FavoriteChangeComponent__PushRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  DataManager_o *v6; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v8; // x21
  int64_t m_CachedPtr; // x22
  __int64 v10; // x24
  __int64 v11; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v13; // q0
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v16; // x0
  __int128 v17; // q1
  NetworkManager_ResultCallbackFunc_o *v18; // x21
  Il2CppObject *Request_object; // x0
  __int128 v20; // q1
  CardFavoriteRequest_o *v21; // x20
  int32_t v22; // w26
  int32_t v23; // w27
  int32_t v24; // w28
  int32_t v25; // w29
  bool IsLock; // w21
  char v27; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v31; // w0
  __int64 v32; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v36; // [xsp+60h] [xbp-100h]
  struct System_Threading_SynchronizationContext_o *context; // [xsp+68h] [xbp-F8h]
  int64_t v38; // [xsp+70h] [xbp-F0h]
  struct System_Threading_Thread_o *v39; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4C32911 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_FavoriteChangeComponent_EndePushRequest__);
    sub_1C32C20(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C32911 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v6 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v6 || !userSvtEntity )
    goto LABEL_18;
  v8 = (UserServantCollectionMaster_o *)limitCountSupport;
  m_CachedPtr = v6->fields.m_CachedPtr;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v11;
  *(_QWORD *)&v44.fields.fakeValue = v10;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v44, 0);
  if ( !v8 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v8, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0);
  v13 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v6->fields.writeMasterDataThread;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v43.fields.fakeValue = v13;
  v39 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v42 = v43;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v42, 0);
  v17 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  context = v6->fields.context;
  v38 = v16;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v17;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v41, 0);
  v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndePushRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v18,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v20 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v21 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v40.fields.fakeValue = v20;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v40, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                      userSvtEntity->fields.imageLimitCount,
                      0);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(userSvtEntity->fields.dispLimitCount, 0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
          userSvtEntity->fields.commandCardLimitCount,
          0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(userSvtEntity->fields.iconLimitCount, 0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(userSvtEntity->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v27 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                  userSvtEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                       userSvtEntity->fields.randomLimitCount,
                       0);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
          userSvtEntity->fields.randomLimitCountSupport,
          0);
  v32 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v45.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v31;
  *(_QWORD *)&v45.fields.currentCryptoKey = v32;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v45, 0);
  if ( !v21 )
LABEL_18:
    sub_1C32E7C(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v21,
    targetUsrSVtId,
    imageLimitCount,
    v22,
    v23,
    v24,
    v25,
    context == (struct System_Threading_SynchronizationContext_o *)v36,
    IsLock,
    v27 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v39 != (struct System_Threading_Thread_o *)v38,
    0);
}


void FavoriteChangeComponent__StatusRequest(
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

  if ( (byte_4C32919 & 1) == 0 )
  {
    sub_1C32C20(&Method_FavoriteChangeComponent_EndStatusSync__);
    sub_1C32C20(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C32919 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v13 = 0;
  choiceList = 0;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_21;
    if ( FavoriteChangeListViewManager__GetSwapChoiceList(favoriteChangeManager, &choiceList, &v13, 0) )
    {
      this->fields.requedstCallback = callback;
      sub_1C32BC4(&this->fields.requedstCallback, callback);
      v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v12,
                                                                   (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v9 = v13;
        v8 = choiceList;
        v11 = 1;
        v10 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C32E7C(favoriteChangeManager);
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
      sub_1C32BC4(&this->fields.requedstCallback, callback);
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v7,
                                                                   (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v9 = unlockList;
        v8 = lockList;
        v10 = 1;
        v11 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)favoriteChangeManager, v8, v9, 0, v10, v11, 0);
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
    sub_1C32E7C(favoriteChangeManager);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)favoriteChangeManager, 0);
}


void FavoriteChangeComponent__cancelFavoriteWindow(
        FavoriteChangeComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  FavoriteChangeComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4C3290B & 1) == 0 )
  {
    sub_1C32C20(&Method_FavoriteChangeComponent_endCancelButton__);
    sub_1C32C20(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4C3290B = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1C32BC4(&this->fields.cancelCallback, callback);
  v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C32E6C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
  FavoriteChangeComponent_RequestCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_endCancelButton__,
    0);
  FavoriteChangeComponent__StatusRequest(this, v5, v6);
}


void FavoriteChangeComponent__closeSvtDetail(
        FavoriteChangeComponent_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  FavoriteChangeComponent___c__DisplayClass37_0_o *v8; // x22
  __int64 v9; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x20

  if ( (byte_4C32913 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__);
    sub_1C32C20(&FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo);
    byte_4C32913 = 1;
  }
  v8 = (FavoriteChangeComponent___c__DisplayClass37_0_o *)sub_1C32E6C(FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo);
  FavoriteChangeComponent___c__DisplayClass37_0___ctor(v8, 0);
  if ( !v8
    || (v8->fields.questId = questId,
        v8->fields.__4__this = this,
        sub_1C32BC4(&v8->fields.__4__this, this),
        v8->fields.isNeedSort = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v8,
          Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__,
          0),
        !Instance) )
  {
    sub_1C32E7C(v9);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v11, 0);
}


void FavoriteChangeComponent__dispSvtList(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
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

  if ( (byte_4C3290C & 1) == 0 )
  {
    sub_1C32C20(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FavoriteChangeComponent_OnClickServant__);
    byte_4C3290C = 1;
  }
  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, 0),
          v6 = this->fields.favoriteChangeManager,
          v7 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C32E6C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
          FavoriteChangeListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
            0),
          !v6) )
    {
LABEL_11:
      sub_1C32E7C(favoriteChangeManager);
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

  if ( (byte_4C32916 & 1) == 0 )
  {
    sub_1C32C20(&Method_FavoriteChangeComponent_EndClickTabChoice__);
    sub_1C32C20(&Method_FavoriteChangeComponent_onClickChoiceTabButton__);
    sub_1C32C20(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4C32916 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_FavoriteChangeComponent_onClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C32E6C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabChoice__,
          0);
        FavoriteChangeComponent__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C32E6C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C32915 & 1) == 0 )
  {
    sub_1C32C20(&Method_FavoriteChangeComponent_EndClickTabLock__);
    sub_1C32C20(&Method_FavoriteChangeComponent_onClickLockTabButton__);
    sub_1C32C20(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4C32915 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_FavoriteChangeComponent_onClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C32E6C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabLock__,
          0);
        FavoriteChangeComponent__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C32E6C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C32914 & 1) == 0 )
  {
    sub_1C32C20(&Method_FavoriteChangeComponent_EndClickTabNormal__);
    sub_1C32C20(&Method_FavoriteChangeComponent_onClickNormalTabButton__);
    sub_1C32C20(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4C32914 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_FavoriteChangeComponent_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_FavoriteChangeComponent_onClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C32E6C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C32917 & 1) == 0 )
  {
    sub_1C32C20(&Method_FavoriteChangeComponent_EndClickTabPush__);
    sub_1C32C20(&Method_FavoriteChangeComponent_onClickPushTabButton__);
    sub_1C32C20(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    byte_4C32917 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_FavoriteChangeComponent_onClickPushTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_FavoriteChangeComponent_onClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1C32E6C(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
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
  DataManager_o *v6; // x22
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v8; // x21
  int64_t m_CachedPtr; // x23
  __int64 v10; // x24
  __int64 v11; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  __int128 v13; // q0
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
  NetworkManager_ResultCallbackFunc_o *v15; // x22
  Il2CppObject *Request_object; // x0
  __int128 v17; // q1
  CardFavoriteRequest_o *v18; // x20
  int32_t v19; // w25
  int32_t v20; // w26
  int32_t v21; // w27
  int32_t v22; // w28
  bool IsLock; // w29
  char v24; // w22
  int32_t commonFlag; // w24
  int32_t battleVoice; // w21
  int32_t randomSettingOwn; // w23
  int32_t v28; // w0
  __int64 v29; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-DCh]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-D8h]
  int64_t v33; // [xsp+60h] [xbp-D0h]
  struct System_Threading_Thread_o *v34; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4C3290F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_FavoriteChangeComponent_EndCardFavoriteRequest__);
    sub_1C32C20(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3290F = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v6 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v6 || !userSvtEntity )
    goto LABEL_18;
  v8 = (UserServantCollectionMaster_o *)limitCountSupport;
  m_CachedPtr = v6->fields.m_CachedPtr;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v11;
  *(_QWORD *)&v38.fields.fakeValue = v10;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v38, 0);
  if ( !v8 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v8, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0);
  v13 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v6->fields.writeMasterDataThread;
  *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v37.fields.fakeValue = v13;
  v34 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v36 = v37;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v36, 0);
  v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v15,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v17 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v18 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v35.fields.fakeValue = v17;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v35, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                      userSvtEntity->fields.imageLimitCount,
                      0);
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(userSvtEntity->fields.dispLimitCount, 0);
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
          userSvtEntity->fields.commandCardLimitCount,
          0);
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(userSvtEntity->fields.iconLimitCount, 0);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(userSvtEntity->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v24 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                  userSvtEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                       userSvtEntity->fields.randomLimitCount,
                       0);
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
          userSvtEntity->fields.randomLimitCountSupport,
          0);
  v29 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v39.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v28;
  *(_QWORD *)&v39.fields.currentCryptoKey = v29;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v39, 0);
  if ( !v18 )
LABEL_18:
    sub_1C32E7C(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v18,
    targetUsrSVtId,
    imageLimitCount,
    v19,
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
    v34 == (struct System_Threading_Thread_o *)v33,
    0);
}


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

  if ( (byte_4C32918 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11657/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C32C20(&StringLiteral_17652/*"button_push_reg"*/);
    sub_1C32C20(&StringLiteral_17653/*"button_push_unreg"*/);
    sub_1C32C20(&StringLiteral_17638/*"button_allchoice_reg"*/);
    sub_1C32C20(&StringLiteral_17641/*"button_alllock_unreg"*/);
    sub_1C32C20(&StringLiteral_11655/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C32C20(&StringLiteral_11656/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C32C20(&StringLiteral_17654/*"button_select_reg"*/);
    sub_1C32C20(&StringLiteral_17655/*"button_select_unreg"*/);
    sub_1C32C20(&StringLiteral_17640/*"button_alllock_reg"*/);
    sub_1C32C20(&StringLiteral_17639/*"button_allchoice_unreg"*/);
    sub_1C32C20(&StringLiteral_7200/*"HEADER_MSG_FAVORITE"*/);
    byte_4C32918 = 1;
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
    v6 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17655/*"button_select_unreg"*/ : &StringLiteral_17654/*"button_select_reg"*/);
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
    v7 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17640/*"button_alllock_reg"*/ : &StringLiteral_17641/*"button_alllock_unreg"*/);
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
    v8 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17638/*"button_allchoice_reg"*/ : &StringLiteral_17639/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton
      || (UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabBoxCollider) == 0)
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 3, 0),
          (normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite) == 0) )
    {
LABEL_51:
      sub_1C32E7C(normalTabButton);
    }
    if ( this->fields.tabModeKind == 3 )
      v9 = &StringLiteral_17652/*"button_push_reg"*/;
    else
      v9 = &StringLiteral_17653/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v9, 0);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7200/*"HEADER_MSG_FAVORITE"*/, 0);
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
        v13 = &StringLiteral_11656/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_45;
      case 2:
        v12 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_11655/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_45;
      case 3:
        v12 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = &StringLiteral_11657/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
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
        FavoriteChangeListViewManager__SetMode_33014780((FavoriteChangeListViewManager_o *)normalTabButton, 2, 0);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6FDA8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6FD60;
}


System_IAsyncResult_o *FavoriteChangeComponent_RequestCallbackFunc__BeginInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isRequest;
  if ( (byte_4C3291B & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    byte_4C3291B = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void FavoriteChangeComponent_RequestCallbackFunc__EndInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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
  CommonUI_o *v6; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4C3291C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__);
    byte_4C3291C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1C32BC4(&this->fields.__9__1, _9__1);
    }
    if ( v6 )
    {
      CommonUI__CloseConfirmDialog_31191080(v6, _9__1, 0);
      return;
    }
LABEL_10:
    sub_1C32E7C(Instance);
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
    sub_1C32E7C(0);
  FavoriteChangeComponent__PushRequest(_4__this, this->fields.item, 0);
}


void FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__2(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CommonUI_o *v6; // x20
  System_Action_o *_9__3; // x22

  if ( (byte_4C3291D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__);
    byte_4C3291D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__3 = this->fields.__9__3;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__,
        0);
      this->fields.__9__3 = _9__3;
      Instance = (Il2CppObject *)sub_1C32BC4(&this->fields.__9__3, _9__3);
    }
    if ( v6 )
    {
      CommonUI__CloseConfirmDialog_31191080(v6, _9__3, 0);
      return;
    }
LABEL_10:
    sub_1C32E7C(Instance);
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
  if ( (byte_4C3291E & 1) == 0 )
  {
    this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)sub_1C32C20(&StringLiteral_9839/*"OnClickFavoriteDecide"*/);
    byte_4C3291E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0
    || (this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)_4__this->fields.favoriteChangeManager) == 0 )
  {
    sub_1C32E7C(this);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)this,
    (System_String_o *)StringLiteral_9839/*"OnClickFavoriteDecide"*/,
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
  FavoriteChangeListViewManager_o *monitor; // x19
  FavoriteChangeListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4C3291F & 1) == 0 )
  {
    sub_1C32C20(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FavoriteChangeComponent_OnClickServant__);
    sub_1C32C20(&StringLiteral_3437/*"CLICK_BACK"*/);
    byte_4C3291F = 1;
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
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3437/*"CLICK_BACK"*/, 0);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1C32E7C(_4__this);
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
  monitor = (FavoriteChangeListViewManager_o *)v7[3].monitor;
  v9 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1C32E6C(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v9,
    v7,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    v10);
  if ( !monitor )
    goto LABEL_18;
  monitor->fields.callbackFunc = v9;
  sub_1C32BC4(&monitor->fields.callbackFunc, v9);
  FavoriteChangeListViewManager__SetMode_33014780(monitor, 2, v11);
}