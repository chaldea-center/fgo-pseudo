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
  __int64 v5; // x2
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  struct FavoriteChangeListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  FavoriteChangeListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4B115A7 & 1) == 0 )
  {
    sub_1BCA7E0(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, result, method);
    sub_1BCA7E0(&Method_FavoriteChangeComponent_OnClickServant__, v4, v5);
    byte_4B115A7 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, method),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL)
    || (ListViewManager__SortItem((ListViewManager_o *)favoriteChangeManager, -1, 0, -1, 0LL),
        v7 = this->fields.favoriteChangeManager,
        v11 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                                v8,
                                                                v9,
                                                                v10),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          v12),
        !v7) )
  {
    sub_1BCAA3C(favoriteChangeManager, result);
  }
  v7->fields.callbackFunc = v11;
  sub_1BCA784(&v7->fields.callbackFunc, v11);
  FavoriteChangeListViewManager__SetMode_31612004(v7, 2, v13);
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
      sub_1BCAA3C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_31612004(favoriteChangeManager, 2, v5);
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
      sub_1BCAA3C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_31612004(favoriteChangeManager, 2, v5);
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
      sub_1BCAA3C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_31612004(favoriteChangeManager, 2, v5);
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
      sub_1BCAA3C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_31612004(favoriteChangeManager, 2, v5);
  }
  FavoriteChangeComponent__setModeTabKind(this, 3, method);
}


void __fastcall FavoriteChangeComponent__EndCloseConfirmSelectFavorite(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B115A5 & 1) == 0 )
  {
    sub_1BCA7E0(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FavoriteChangeComponent_OnClickServant__, v5, v6);
    byte_4B115A5 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  v8 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                         FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    v9);
  if ( !favoriteChangeManager )
    sub_1BCAA3C(v10, v11);
  favoriteChangeManager->fields.callbackFunc = v8;
  sub_1BCA784(&favoriteChangeManager->fields.callbackFunc, v8);
  FavoriteChangeListViewManager__SetMode_31612004(favoriteChangeManager, 2, v12);
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
    sub_1BCA784(p_requedstCallback, 0LL);
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
  __int64 v5; // x2
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v7; // x2
  struct FavoriteChangeListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  FavoriteChangeListViewManager_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4B115A9 & 1) == 0 )
  {
    sub_1BCA7E0(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, result, method);
    sub_1BCA7E0(&Method_FavoriteChangeComponent_OnClickServant__, v4, v5);
    byte_4B115A9 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__UpdateDisplayState(favoriteChangeManager, 1, method),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL)
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, v7),
        v8 = this->fields.favoriteChangeManager,
        v12 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                                v9,
                                                                v10,
                                                                v11),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          v13),
        !v8) )
  {
    sub_1BCAA3C(favoriteChangeManager, result);
  }
  v8->fields.callbackFunc = v12;
  sub_1BCA784(&v8->fields.callbackFunc, v12);
  FavoriteChangeListViewManager__SetMode_31612004(v8, 2, v14);
}


void __fastcall FavoriteChangeComponent__Init(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  __int64 v7; // x1
  UILabel_o *infoLb; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4B115A0 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_7226/*"HEADER_MSG_FAVORITE"*/, v4, v5);
    byte_4B115A0 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager )
    goto LABEL_8;
  FavoriteChangeListViewManager__DestroyList(favoriteChangeManager, method);
  this->fields.state = 0;
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  favoriteChangeManager = (FavoriteChangeListViewManager_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_7226/*"HEADER_MSG_FAVORITE"*/,
                                                               0LL);
  if ( !infoLb )
LABEL_8:
    sub_1BCAA3C(favoriteChangeManager, method);
  UILabel__set_text(infoLb, (System_String_o *)favoriteChangeManager, 0LL);
  FavoriteChangeComponent__setModeTabKind(this, 0, v9);
}


void __fastcall FavoriteChangeComponent__OnClickScaleChange(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B115B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FavoriteChangeComponent_OnClickScaleChange__, method, v2);
    byte_4B115B1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_FavoriteChangeComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_FavoriteChangeComponent_OnClickScaleChange__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      sub_1BCAA3C(0LL, v6);
    FavoriteChangeListViewManager__ChangeIconScale(favoriteChangeManager, v6);
    FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v8);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  Il2CppObject *v69; // x20
  __int64 favoriteChangeManager; // x0
  const MethodInfo *v71; // x1
  const MethodInfo *v72; // x2
  FavoriteChangeListViewItem_o *v73; // x1
  FavoriteChangeListViewItem_o **p_monitor; // x21
  __int64 v75; // x8
  __int128 v76; // q1
  const MethodInfo *v77; // x2
  int32_t tabModeKind; // w8
  _QWORD *v79; // x0
  System_Reflection_MethodBase_o *v80; // x0
  int32_t v81; // w1
  __int64 v82; // x2
  __int64 v83; // x3
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v85; // x20
  ServantStatusDialog_ResultDelegate_o *v86; // x22
  _QWORD *v87; // x0
  _QWORD *v88; // x0
  bool v89; // w22
  _QWORD *v90; // x8
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  struct FavoriteChangeListViewManager_o *v94; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v95; // x21
  const MethodInfo *v96; // x3
  const MethodInfo *v97; // x2
  ServantEntity_o *servantEntity; // x23
  int64_t v99; // x22
  Il2CppObject *v100; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v101; // x22
  void *v102; // x24
  Il2CppClass *v103; // x26
  __int64 v104; // x1
  Il2CppObject *v105; // x28
  __int64 v106; // x1
  Il2CppObject *v107; // x24
  System_String_o *v108; // x22
  UserServantEntity_o *v109; // x0
  UserServantEntity_o *v110; // x0
  System_String_o *v111; // x26
  _QWORD *v112; // x0
  System_Reflection_MethodBase_o *v113; // x0
  const MethodInfo *v114; // x2
  int64_t v115; // x22
  struct UserServantEntity_o *v116; // x8
  __int128 v117; // q0
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v119; // x22
  void *monitor; // x23
  Il2CppClass *klass; // x24
  __int64 v122; // x1
  Il2CppObject *v123; // x27
  __int64 v124; // x1
  Il2CppObject *Master_object; // x25
  System_String_o *v126; // x23
  System_Object_array *v127; // x24
  __int64 v128; // x1
  int32_t Rarity; // w28
  Il2CppObject *v130; // x28
  Il2CppObject *v131; // x27
  int32_t v132; // w0
  Il2CppClass *v133; // x8
  int32_t v134; // w26
  Il2CppObject *v135; // x26
  int32_t v136; // w0
  Il2CppObject *v137; // x26
  Il2CppObject *v138; // x26
  FavoriteChangeListViewItem_o *v139; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v140; // x9
  int32_t svtId; // w21
  int32_t v142; // w0
  Il2CppObject *v143; // x21
  System_String_o *v144; // x21
  System_String_o *v145; // x23
  System_String_o *v146; // x24
  Il2CppObject *Instance; // x25
  __int64 v148; // x1
  __int64 v149; // x2
  __int64 v150; // x3
  CommonConfirmDialog_ClickDelegate_o *v151; // x0
  __int64 *v152; // x8
  System_String_o *v153; // x0
  System_String_o *v154; // x26
  System_Object_array *v155; // x27
  __int64 v156; // x1
  int32_t v157; // w29
  Il2CppObject *v158; // x29
  Il2CppObject *v159; // x28
  __int64 v160; // x1
  void *v161; // x28
  Il2CppClass *v162; // x29
  int32_t v163; // w0
  Il2CppClass *v164; // x8
  int32_t v165; // w25
  Il2CppObject *v166; // x25
  int32_t v167; // w0
  Il2CppObject *v168; // x25
  Il2CppObject *v169; // x23
  FavoriteChangeListViewItem_o *v170; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v171; // x9
  int32_t v172; // w21
  int32_t v173; // w0
  Il2CppObject *v174; // x21
  __int64 v175; // x1
  __int64 v176; // x2
  __int64 v177; // x3
  CommonConfirmDialog_ClickDelegate_o *v178; // x26
  __int64 v179; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v180; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v181; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v182; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v185; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v187; // 0:x0.16

  if ( (byte_4B115A4 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n);
    sub_1BCA7E0(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v21, v22);
    sub_1BCA7E0(&Method_FavoriteChangeComponent_OnClickServant__, v23, v24);
    sub_1BCA7E0(&Method_FavoriteChangeComponent_closeSvtDetail__, v25, v26);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&object___TypeInfo, v29, v30);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31, v32);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v33, v34);
    sub_1BCA7E0(&Rarity_TypeInfo, v35, v36);
    sub_1BCA7E0(&ServantStatusDialog_ResultDelegate_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v39, v40);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42);
    sub_1BCA7E0(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__, v43, v44);
    sub_1BCA7E0(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__, v45, v46);
    sub_1BCA7E0(&FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo, v47, v48);
    sub_1BCA7E0(&StringLiteral_12021/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_12019/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_12018/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_12022/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_12020/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v67, v68);
    byte_4B115A4 = 1;
  }
  v69 = (Il2CppObject *)sub_1BCAA2C(
                          FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo,
                          *(_QWORD *)&kind,
                          *(_QWORD *)&n,
                          method);
  System_Object___ctor(v69, 0LL);
  if ( !v69 )
    goto LABEL_157;
  v69[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v69[1], this);
  if ( (n & 0x80000000) != 0 )
  {
    v73 = 0LL;
  }
  else
  {
    favoriteChangeManager = (__int64)this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_157;
    v73 = FavoriteChangeListViewManager__GetItem((FavoriteChangeListViewManager_o *)favoriteChangeManager, n, v72);
  }
  v69[1].monitor = v73;
  p_monitor = (FavoriteChangeListViewItem_o **)&v69[1].monitor;
  favoriteChangeManager = sub_1BCA784(&v69[1].monitor, v73);
  if ( !v69[1].monitor )
    goto LABEL_157;
  v75 = *((_QWORD *)v69[1].monitor + 14);
  if ( !v75 )
    goto LABEL_157;
  v76 = *(_OWORD *)(v75 + 32);
  *(_OWORD *)&v182.fields.currentCryptoKey = *(_OWORD *)(v75 + 16);
  *(_OWORD *)&v182.fields.fakeValue = v76;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v71);
  v181 = v182;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v181, 0LL);
  this->fields.usrSvtId = favoriteChangeManager;
  if ( kind == 1 )
  {
    FavoriteChangeComponent__setFavoriteRequest(this, *p_monitor, v77);
    return;
  }
  if ( kind == 2 )
  {
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *p_monitor )
    {
      userSvtEntity = (*p_monitor)->fields.userSvtEntity;
      v85 = (CommonUI_o *)favoriteChangeManager;
      v86 = (ServantStatusDialog_ResultDelegate_o *)sub_1BCAA2C(
                                                      ServantStatusDialog_ResultDelegate_TypeInfo,
                                                      v71,
                                                      v82,
                                                      v83);
      ServantStatusDialog_ResultDelegate___ctor(
        v86,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_closeSvtDetail__,
        0LL);
      if ( v85 )
      {
        CommonUI__OpenServantStatusDialog_30777260(v85, 0, userSvtEntity, v86, 0, 0LL);
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
    if ( !*p_monitor )
      goto LABEL_157;
    (*p_monitor)->fields.isSwapChoice ^= 1u;
    v87 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v87 = (_QWORD *)sub_1BCA7F8(Method_FavoriteChangeComponent_OnClickServant__);
    v80 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v87, v87[4]);
    v81 = 0;
    goto LABEL_42;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*p_monitor )
      goto LABEL_157;
    (*p_monitor)->fields.isSwapLock ^= 1u;
    v79 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v79 = (_QWORD *)sub_1BCA7F8(Method_FavoriteChangeComponent_OnClickServant__);
    v80 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v79, v79[4]);
    v81 = 11;
    goto LABEL_42;
  }
  favoriteChangeManager = (__int64)*p_monitor;
  if ( !*p_monitor )
    goto LABEL_157;
  if ( tabModeKind == 3 )
  {
    if ( *(_QWORD *)(favoriteChangeManager + 112) )
    {
      if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(favoriteChangeManager + 112), 0LL) )
      {
LABEL_35:
        v88 = Method_FavoriteChangeComponent_OnClickServant__;
        if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
          v88 = (_QWORD *)sub_1BCA7F8(Method_FavoriteChangeComponent_OnClickServant__);
        v80 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v88, v88[4]);
LABEL_41:
        v81 = 2;
LABEL_42:
        OverwriteAssetSoundName__PlaySystemSe(v80, v81, 0LL);
        goto LABEL_43;
      }
      favoriteChangeManager = (__int64)*p_monitor;
      if ( !*p_monitor )
        goto LABEL_157;
    }
    if ( FavoriteChangeListViewItem__get_IsHerioneReave((FavoriteChangeListViewItem_o *)favoriteChangeManager, v71) )
      goto LABEL_35;
    v112 = Method_FavoriteChangeComponent_OnClickServant__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
      v112 = (_QWORD *)sub_1BCA7F8(Method_FavoriteChangeComponent_OnClickServant__);
    v113 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v112, v112[4]);
    OverwriteAssetSoundName__PlaySystemSe(v113, 0, 0LL);
    favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( favoriteChangeManager )
    {
      v115 = *(_QWORD *)(favoriteChangeManager + 120);
      if ( !v115 )
      {
LABEL_75:
        FavoriteChangeComponent__PushRequest(this, *p_monitor, v114);
        goto LABEL_43;
      }
      if ( *p_monitor )
      {
        v116 = (*p_monitor)->fields.userSvtEntity;
        if ( v116 )
        {
          v117 = *(_OWORD *)&v116->fields.id.fields.fakeValue;
          *(_OWORD *)&v182.fields.currentCryptoKey = *(_OWORD *)&v116->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v182.fields.fakeValue = v117;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v71);
          v180 = v182;
          if ( v115 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v180, 0LL) )
            goto LABEL_75;
          favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( favoriteChangeManager )
          {
            favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                               (DataManager_o *)favoriteChangeManager,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
            if ( favoriteChangeManager )
            {
              Entity = DataMasterBase_object__object__long___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
                         v115,
                         (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( favoriteChangeManager )
              {
                favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)favoriteChangeManager,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
                if ( Entity )
                {
                  v119 = (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager;
                  klass = Entity[5].klass;
                  monitor = Entity[5].monitor;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v71);
                  *(_QWORD *)&v184.fields.currentCryptoKey = klass;
                  *(_QWORD *)&v184.fields.fakeValue = monitor;
                  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v184, 0LL);
                  if ( v119 )
                  {
                    v123 = DataMasterBase_object__object__int___GetEntity(
                             v119,
                             favoriteChangeManager,
                             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v122);
                    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v124);
                    v108 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
                    v126 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
                    v127 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 6LL);
                    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
                    if ( !Rarity_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v128);
                    favoriteChangeManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
                    if ( v127 )
                    {
                      v130 = (Il2CppObject *)favoriteChangeManager;
                      if ( !favoriteChangeManager
                        || (favoriteChangeManager = sub_1BCA91C(
                                                      favoriteChangeManager,
                                                      v127->obj.klass->_1.element_class)) != 0 )
                      {
                        if ( !v127->max_length )
                          goto LABEL_158;
                        v127->m_Items[0] = v130;
                        favoriteChangeManager = sub_1BCA784(v127->m_Items, v130);
                        if ( !v123 )
                          goto LABEL_157;
                        favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v123, 0LL);
                        v131 = (Il2CppObject *)favoriteChangeManager;
                        if ( !favoriteChangeManager
                          || (favoriteChangeManager = sub_1BCA91C(
                                                        favoriteChangeManager,
                                                        v127->obj.klass->_1.element_class)) != 0 )
                        {
                          if ( v127->max_length <= 1 )
                            goto LABEL_158;
                          v127->m_Items[1] = v131;
                          sub_1BCA784(&v127->m_Items[1], v131);
                          v132 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                   (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                                   0LL);
                          v133 = Entity[6].klass;
                          *(_QWORD *)&v185.fields.fakeValue = Entity[6].monitor;
                          v134 = v132;
                          *(_QWORD *)&v185.fields.currentCryptoKey = v133;
                          favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                    v185,
                                                    0LL);
                          if ( !Master_object )
                            goto LABEL_157;
                          favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                             (ServantLimitImageMaster_o *)Master_object,
                                                             v134,
                                                             favoriteChangeManager,
                                                             0LL);
                          v135 = (Il2CppObject *)favoriteChangeManager;
                          if ( !favoriteChangeManager
                            || (favoriteChangeManager = sub_1BCA91C(
                                                          favoriteChangeManager,
                                                          v127->obj.klass->_1.element_class)) != 0 )
                          {
                            if ( v127->max_length <= 2 )
                              goto LABEL_158;
                            v127->m_Items[2] = v135;
                            favoriteChangeManager = sub_1BCA784(&v127->m_Items[2], v135);
                            if ( !*p_monitor )
                              goto LABEL_157;
                            favoriteChangeManager = (__int64)(*p_monitor)->fields.userSvtEntity;
                            if ( !favoriteChangeManager )
                              goto LABEL_157;
                            v136 = UserServantEntity__getRarity((UserServantEntity_o *)favoriteChangeManager, 0LL);
                            favoriteChangeManager = (__int64)Rarity__getRarityType(v136, 0LL);
                            v137 = (Il2CppObject *)favoriteChangeManager;
                            if ( !favoriteChangeManager
                              || (favoriteChangeManager = sub_1BCA91C(
                                                            favoriteChangeManager,
                                                            v127->obj.klass->_1.element_class)) != 0 )
                            {
                              if ( v127->max_length <= 3 )
                                goto LABEL_158;
                              v127->m_Items[3] = v137;
                              favoriteChangeManager = sub_1BCA784(&v127->m_Items[3], v137);
                              if ( !*p_monitor )
                                goto LABEL_157;
                              favoriteChangeManager = (__int64)(*p_monitor)->fields.servantEntity;
                              if ( !favoriteChangeManager )
                                goto LABEL_157;
                              favoriteChangeManager = (__int64)ServantEntity__getClassName(
                                                                 (ServantEntity_o *)favoriteChangeManager,
                                                                 0LL);
                              v138 = (Il2CppObject *)favoriteChangeManager;
                              if ( !favoriteChangeManager
                                || (favoriteChangeManager = sub_1BCA91C(
                                                              favoriteChangeManager,
                                                              v127->obj.klass->_1.element_class)) != 0 )
                              {
                                if ( v127->max_length <= 4 )
                                  goto LABEL_158;
                                v127->m_Items[4] = v138;
                                favoriteChangeManager = sub_1BCA784(&v127->m_Items[4], v138);
                                v139 = *p_monitor;
                                if ( !*p_monitor )
                                  goto LABEL_157;
                                v140 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v139->fields.userSvtEntity;
                                if ( !v140 )
                                  goto LABEL_157;
                                svtId = v139->fields.svtId;
                                v142 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v140[6], 0LL);
                                favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                   (ServantLimitImageMaster_o *)Master_object,
                                                                   svtId,
                                                                   v142,
                                                                   0LL);
                                v143 = (Il2CppObject *)favoriteChangeManager;
                                if ( !favoriteChangeManager
                                  || (favoriteChangeManager = sub_1BCA91C(
                                                                favoriteChangeManager,
                                                                v127->obj.klass->_1.element_class)) != 0 )
                                {
                                  if ( v127->max_length > 5 )
                                  {
                                    v127->m_Items[5] = v143;
                                    sub_1BCA784(&v127->m_Items[5], v143);
                                    v144 = System_String__Format_62415728(v126, v127, 0LL);
                                    v145 = LocalizationManager__Get((System_String_o *)StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                                    v146 = LocalizationManager__Get((System_String_o *)StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                                    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                    v151 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                                    CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                                    v148,
                                                                                    v149,
                                                                                    v150);
                                    v152 = &Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__;
                                    goto LABEL_153;
                                  }
LABEL_158:
                                  sub_1BCAA44(favoriteChangeManager, v71);
                                }
                              }
                            }
                          }
                        }
                      }
LABEL_159:
                      v179 = sub_1BCAA60();
                      sub_1BCA908(v179, 0LL);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_157:
    sub_1BCAA3C(favoriteChangeManager, v71);
  }
  v89 = FavoriteChangeListViewItem__get_IsCanNotSelect((FavoriteChangeListViewItem_o *)favoriteChangeManager, v71);
  v90 = Method_FavoriteChangeComponent_OnClickServant__;
  if ( (*((_BYTE *)Method_FavoriteChangeComponent_OnClickServant__ + 83) & 2) != 0 )
    v90 = (_QWORD *)sub_1BCA7F8(Method_FavoriteChangeComponent_OnClickServant__);
  v80 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v90, v90[4]);
  if ( v89 )
    goto LABEL_41;
  OverwriteAssetSoundName__PlaySystemSe(v80, 0, 0LL);
  if ( !*p_monitor )
    goto LABEL_157;
  servantEntity = (*p_monitor)->fields.servantEntity;
  favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !favoriteChangeManager )
    goto LABEL_157;
  v99 = *(_QWORD *)(favoriteChangeManager + 112);
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_157;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !favoriteChangeManager )
    goto LABEL_157;
  v100 = DataMasterBase_object__object__long___GetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager,
           v99,
           (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_157;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v100 )
    goto LABEL_157;
  v101 = (DataMasterBase_TMaster__TEntity__PKType__o *)favoriteChangeManager;
  v103 = v100[5].klass;
  v102 = v100[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v71);
  *(_QWORD *)&v183.fields.currentCryptoKey = v103;
  *(_QWORD *)&v183.fields.fakeValue = v102;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v183, 0LL);
  if ( !v101 )
    goto LABEL_157;
  v105 = DataMasterBase_object__object__int___GetEntity(
           v101,
           favoriteChangeManager,
           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v104);
  v107 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v106);
  favoriteChangeManager = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12022/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, 0LL);
  if ( !*p_monitor )
    goto LABEL_157;
  v108 = (System_String_o *)favoriteChangeManager;
  v109 = (*p_monitor)->fields.userSvtEntity;
  if ( !v109 )
    goto LABEL_65;
  favoriteChangeManager = UserServantEntity__IsEventJoin(v109, 0LL);
  if ( (favoriteChangeManager & 1) == 0 )
    goto LABEL_65;
  if ( !*p_monitor )
    goto LABEL_157;
  v110 = (*p_monitor)->fields.userSvtEntity;
  if ( !v110 || !UserServantEntity__IsNoPeriod(v110, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v71);
    v111 = LocalizationManager__Get((System_String_o *)StringLiteral_12020/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
  }
  else
  {
LABEL_65:
    v111 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v71);
  v153 = LocalizationManager__Get((System_String_o *)StringLiteral_12021/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
  v154 = System_String__Concat_62401220(v153, v111, 0LL);
  v155 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 6LL);
  v157 = UserServantEntity__getRarity((UserServantEntity_o *)v100, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v156);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v157, 0LL);
  if ( !v155 )
    goto LABEL_157;
  v158 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1BCA91C(favoriteChangeManager, v155->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_159;
  }
  if ( !v155->max_length )
    goto LABEL_158;
  v155->m_Items[0] = v158;
  favoriteChangeManager = sub_1BCA784(v155->m_Items, v158);
  if ( !v105 )
    goto LABEL_157;
  favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v105, 0LL);
  v159 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1BCA91C(favoriteChangeManager, v155->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_159;
  }
  if ( v155->max_length <= 1 )
    goto LABEL_158;
  v155->m_Items[1] = v159;
  sub_1BCA784(&v155->m_Items[1], v159);
  v162 = v100[5].klass;
  v161 = v100[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v160);
  *(_QWORD *)&v186.fields.currentCryptoKey = v162;
  *(_QWORD *)&v186.fields.fakeValue = v161;
  v163 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v186, 0LL);
  v164 = v100[6].klass;
  *(_QWORD *)&v187.fields.fakeValue = v100[6].monitor;
  v165 = v163;
  *(_QWORD *)&v187.fields.currentCryptoKey = v164;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v187, 0LL);
  if ( !v107 )
    goto LABEL_157;
  favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                     (ServantLimitImageMaster_o *)v107,
                                     v165,
                                     favoriteChangeManager,
                                     0LL);
  v166 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1BCA91C(favoriteChangeManager, v155->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_159;
  }
  if ( v155->max_length <= 2 )
    goto LABEL_158;
  v155->m_Items[2] = v166;
  favoriteChangeManager = sub_1BCA784(&v155->m_Items[2], v166);
  if ( !*p_monitor )
    goto LABEL_157;
  favoriteChangeManager = (__int64)(*p_monitor)->fields.userSvtEntity;
  if ( !favoriteChangeManager )
    goto LABEL_157;
  v167 = UserServantEntity__getRarity((UserServantEntity_o *)favoriteChangeManager, 0LL);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v167, 0LL);
  v168 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1BCA91C(favoriteChangeManager, v155->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_159;
  }
  if ( v155->max_length <= 3 )
    goto LABEL_158;
  v155->m_Items[3] = v168;
  favoriteChangeManager = sub_1BCA784(&v155->m_Items[3], v168);
  if ( !servantEntity )
    goto LABEL_157;
  favoriteChangeManager = (__int64)ServantEntity__getClassName(servantEntity, 0LL);
  v169 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1BCA91C(favoriteChangeManager, v155->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_159;
  }
  if ( v155->max_length <= 4 )
    goto LABEL_158;
  v155->m_Items[4] = v169;
  favoriteChangeManager = sub_1BCA784(&v155->m_Items[4], v169);
  v170 = *p_monitor;
  if ( !*p_monitor )
    goto LABEL_157;
  v171 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v170->fields.userSvtEntity;
  if ( !v171 )
    goto LABEL_157;
  v172 = v170->fields.svtId;
  v173 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v171[6], 0LL);
  favoriteChangeManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                     (ServantLimitImageMaster_o *)v107,
                                     v172,
                                     v173,
                                     0LL);
  v174 = (Il2CppObject *)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_1BCA91C(favoriteChangeManager, v155->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_159;
  }
  if ( v155->max_length <= 5 )
    goto LABEL_158;
  v155->m_Items[5] = v174;
  sub_1BCA784(&v155->m_Items[5], v174);
  v144 = System_String__Format_62415728(v154, v155, 0LL);
  v145 = LocalizationManager__Get((System_String_o *)StringLiteral_12019/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
  v146 = LocalizationManager__Get((System_String_o *)StringLiteral_12018/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v151 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                  v175,
                                                  v176,
                                                  v177);
  v152 = &Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__;
LABEL_153:
  v178 = v151;
  CommonConfirmDialog_ClickDelegate___ctor(v151, v69, *v152, 0LL);
  favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v71);
  if ( !Instance )
    goto LABEL_157;
  CommonUI__OpenConfirmDialog_30766228(
    (CommonUI_o *)Instance,
    v108,
    v144,
    v145,
    v146,
    v178,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
LABEL_43:
  v94 = this->fields.favoriteChangeManager;
  v95 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                          FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                          v91,
                                                          v92,
                                                          v93);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v95,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    v96);
  if ( !v94 )
    goto LABEL_157;
  v94->fields.callbackFunc = v95;
  sub_1BCA784(&v94->fields.callbackFunc, v95);
  FavoriteChangeListViewManager__SetMode_31612004(v94, 2, v97);
}


void __fastcall FavoriteChangeComponent__Open(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  const MethodInfo *v9; // x1
  struct FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  FavoriteChangeListViewManager_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4B115A1 & 1) == 0 )
  {
    sub_1BCA7E0(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FavoriteChangeComponent_OnClickServant__, v4, v5);
    byte_4B115A1 = 1;
  }
  FavoriteChangeComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_1BCA784(&this->fields.cancelCallback, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_37891656((TitleInfoControl_o *)gameObject, 1, 51, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_10;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v8
    || (UnityEngine_GameObject__SetActive(v8, (unsigned __int8)gameObject & 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.favoriteChangeManager) == 0LL)
    || (FavoriteChangeListViewManager__CreateList((FavoriteChangeListViewManager_o *)gameObject, v7),
        FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v9),
        favoriteChangeManager = this->fields.favoriteChangeManager,
        v14 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                                v11,
                                                                v12,
                                                                v13),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          v15),
        !favoriteChangeManager) )
  {
LABEL_10:
    sub_1BCAA3C(gameObject, v7);
  }
  favoriteChangeManager->fields.callbackFunc = v14;
  sub_1BCA784(&favoriteChangeManager->fields.callbackFunc, v14);
  FavoriteChangeListViewManager__SetMode_31612004(favoriteChangeManager, 2, v16);
  this->fields.state = 2;
}


void __fastcall FavoriteChangeComponent__PushRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  DataManager_o *limitCountSupport; // x0
  __int64 v22; // x1
  DataManager_o *v23; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v25; // x21
  int64_t v26; // x22
  __int64 v27; // x24
  __int64 v28; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int64 v30; // x1
  __int128 v31; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v34; // x0
  __int128 v35; // q1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  NetworkManager_ResultCallbackFunc_o *v39; // x21
  __int64 v40; // x1
  Il2CppObject *Request_object; // x0
  __int128 v42; // q1
  CardFavoriteRequest_o *v43; // x20
  int32_t v44; // w26
  int32_t v45; // w27
  int32_t v46; // w28
  int32_t v47; // w29
  bool IsLock; // w21
  char v49; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v53; // w0
  __int64 v54; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v58; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v60; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v61; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B115A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem, method);
    sub_1BCA7E0(&Method_FavoriteChangeComponent_EndePushRequest__, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B115A8 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v23 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v23 || !userSvtEntity )
    goto LABEL_18;
  v25 = (UserServantCollectionMaster_o *)limitCountSupport;
  v26 = *(_QWORD *)&v23->fields.m_CachedPtr;
  v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
  *(_QWORD *)&v66.fields.currentCryptoKey = v28;
  *(_QWORD *)&v66.fields.fakeValue = v27;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
  if ( !v25 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v25, v26, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v31 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  context = v23->fields.context;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v65.fields.fakeValue = v31;
  v61 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30);
  v64 = v65;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v64, 0LL);
  v35 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v23->fields.masterLoadThreads;
  v60 = v34;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v35;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v63, 0LL);
  v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v36, v37, v38);
  NetworkManager_ResultCallbackFunc___ctor(
    v39,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndePushRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
  Request_object = NetworkManager__getRequest_object_(
                     v39,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v42 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v43 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v42;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v62, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtEntity->fields.dispLimitCount, 0LL);
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtEntity->fields.iconLimitCount, 0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v49 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v54 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v67.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v53;
  *(_QWORD *)&v67.fields.currentCryptoKey = v54;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v67, 0LL);
  if ( !v43 )
LABEL_18:
    sub_1BCAA3C(limitCountSupport, v22);
  CardFavoriteRequest__beginRequest(
    v43,
    targetUsrSVtId,
    imageLimitCount,
    v44,
    v45,
    v46,
    v47,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v58,
    IsLock,
    v49 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v61 != (struct System_Threading_SynchronizationContext_o *)v60,
    0LL);
}


void __fastcall FavoriteChangeComponent__StatusRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeComponent_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t tabModeKind; // w8
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  __int64 v18; // x1
  System_Int64_array *v19; // x1
  System_Int64_array *v20; // x2
  bool v21; // w4
  bool v22; // w5
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  __int64 v27; // x1
  System_Int64_array *v28; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B115B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FavoriteChangeComponent_EndStatusSync__, callback, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B115B0 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v28 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_21;
    if ( FavoriteChangeListViewManager__GetSwapChoiceList(favoriteChangeManager, &choiceList, &v28, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1BCA784(&this->fields.requedstCallback, callback);
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v23,
                                                     v24,
                                                     v25);
      NetworkManager_ResultCallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v26,
                                                                   (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v20 = v28;
        v19 = choiceList;
        v22 = 1;
        v21 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1BCAA3C(favoriteChangeManager, callback);
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
      sub_1BCA784(&this->fields.requedstCallback, callback);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v14,
                                                     v15,
                                                     v16);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_object_(
                                                                   v17,
                                                                   (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v20 = unlockList;
        v19 = lockList;
        v21 = 1;
        v22 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)favoriteChangeManager,
          v19,
          v20,
          0,
          v21,
          v22,
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
    sub_1BCAA3C(favoriteChangeManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)favoriteChangeManager, 0LL);
}


void __fastcall FavoriteChangeComponent__cancelFavoriteWindow(
        FavoriteChangeComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  FavoriteChangeComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4B115A2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FavoriteChangeComponent_endCancelButton__, callback, method);
    sub_1BCA7E0(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v5, v6);
    byte_4B115A2 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_1BCA784(&this->fields.cancelCallback, callback);
  v10 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                           FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                           v7,
                                                           v8,
                                                           v9);
  FavoriteChangeComponent_RequestCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_endCancelButton__,
    v11);
  FavoriteChangeComponent__StatusRequest(this, v10, v12);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Instance; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x20

  if ( (byte_4B115AA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, isNeedSort);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__, v10, v11);
    sub_1BCA7E0(&FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo, v12, v13);
    byte_4B115AA = 1;
  }
  v14 = sub_1BCAA2C(FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo, isDecide, isNeedSort, *(_QWORD *)&questId);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = questId,
        *(_QWORD *)(v14 + 24) = this,
        sub_1BCA784(v14 + 24, this),
        *(_BYTE *)(v14 + 32) = isNeedSort,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v14,
          Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v15, v16);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v21, 0LL);
}


void __fastcall FavoriteChangeComponent__dispSvtList(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent__endCancelButton(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  struct FavoriteChangeListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  FavoriteChangeListViewManager_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  System_Action_o *cancelCallback; // x0

  if ( (byte_4B115A3 & 1) == 0 )
  {
    sub_1BCA7E0(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, isRequest, method);
    sub_1BCA7E0(&Method_FavoriteChangeComponent_OnClickServant__, v5, v6);
    byte_4B115A3 = 1;
  }
  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, method),
          v8 = this->fields.favoriteChangeManager,
          v12 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                  FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                                  v9,
                                                                  v10,
                                                                  v11),
          FavoriteChangeListViewManager_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
            v13),
          !v8) )
    {
LABEL_11:
      sub_1BCAA3C(favoriteChangeManager, isRequest);
    }
    v8->fields.callbackFunc = v12;
    sub_1BCA784(&v8->fields.callbackFunc, v12);
    FavoriteChangeListViewManager__SetMode_31612004(v8, 2, v14);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B115AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FavoriteChangeComponent_EndClickTabChoice__, method, v2);
    sub_1BCA7E0(&Method_FavoriteChangeComponent_onClickChoiceTabButton__, v4, v5);
    sub_1BCA7E0(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B115AD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_FavoriteChangeComponent_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_FavoriteChangeComponent_onClickChoiceTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v14 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                 FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                                 v10,
                                                                 v11,
                                                                 v12);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabChoice__,
          v15);
        FavoriteChangeComponent__StatusRequest(this, v14, v16);
        return;
      }
      v17 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                               FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                               v10,
                                                               v11,
                                                               v12);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabChoice__,
        v18);
      FavoriteChangeComponent__StatusRequest(this, v17, v19);
    }
    FavoriteChangeComponent__setModeTabKind(this, 2, v11);
  }
}


void __fastcall FavoriteChangeComponent__onClickLockTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B115AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FavoriteChangeComponent_EndClickTabLock__, method, v2);
    sub_1BCA7E0(&Method_FavoriteChangeComponent_onClickLockTabButton__, v4, v5);
    sub_1BCA7E0(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B115AC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_FavoriteChangeComponent_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickLockTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_FavoriteChangeComponent_onClickLockTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v14 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                                 FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                                 v10,
                                                                 v11,
                                                                 v12);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabLock__,
          v15);
        FavoriteChangeComponent__StatusRequest(this, v14, v16);
        return;
      }
      v17 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                               FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                               v10,
                                                               v11,
                                                               v12);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabLock__,
        v18);
      FavoriteChangeComponent__StatusRequest(this, v17, v19);
    }
    FavoriteChangeComponent__setModeTabKind(this, 1, v11);
  }
}


void __fastcall FavoriteChangeComponent__onClickNormalTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  FavoriteChangeComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B115AB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FavoriteChangeComponent_EndClickTabNormal__, method, v2);
    sub_1BCA7E0(&Method_FavoriteChangeComponent_onClickNormalTabButton__, v4, v5);
    sub_1BCA7E0(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B115AB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_FavoriteChangeComponent_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickNormalTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_FavoriteChangeComponent_onClickNormalTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                             FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                             v10,
                                                             v11,
                                                             v12);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabNormal__,
      v14);
    FavoriteChangeComponent__StatusRequest(this, v13, v15);
  }
}


void __fastcall FavoriteChangeComponent__onClickPushTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  FavoriteChangeComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B115AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FavoriteChangeComponent_EndClickTabPush__, method, v2);
    sub_1BCA7E0(&Method_FavoriteChangeComponent_onClickPushTabButton__, v4, v5);
    sub_1BCA7E0(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B115AE = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v8 = Method_FavoriteChangeComponent_onClickPushTabButton__;
    if ( (*((_BYTE *)Method_FavoriteChangeComponent_onClickPushTabButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_FavoriteChangeComponent_onClickPushTabButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                             FavoriteChangeComponent_RequestCallbackFunc_TypeInfo,
                                                             v10,
                                                             v11,
                                                             v12);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabPush__,
      v14);
    FavoriteChangeComponent__StatusRequest(this, v13, v15);
  }
}


void __fastcall FavoriteChangeComponent__setFavoriteRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  DataManager_o *limitCountSupport; // x0
  __int64 v22; // x1
  DataManager_o *v23; // x22
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v25; // x21
  int64_t v26; // x23
  __int64 v27; // x24
  __int64 v28; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  __int64 v30; // x1
  __int128 v31; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  NetworkManager_ResultCallbackFunc_o *v36; // x22
  __int64 v37; // x1
  Il2CppObject *Request_object; // x0
  __int128 v39; // q1
  CardFavoriteRequest_o *v40; // x20
  int32_t v41; // w25
  int32_t v42; // w26
  int32_t v43; // w27
  int32_t v44; // w28
  bool IsLock; // w29
  char v46; // w22
  int32_t commonFlag; // w24
  int32_t battleVoice; // w21
  int32_t randomSettingOwn; // w23
  int32_t v50; // w0
  __int64 v51; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-DCh]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-D8h]
  int64_t v55; // [xsp+60h] [xbp-D0h]
  struct System_Threading_SynchronizationContext_o *v56; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4B115A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem, method);
    sub_1BCA7E0(&Method_FavoriteChangeComponent_EndCardFavoriteRequest__, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B115A6 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v23 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v23 || !userSvtEntity )
    goto LABEL_18;
  v25 = (UserServantCollectionMaster_o *)limitCountSupport;
  v26 = *(_QWORD *)&v23->fields.m_CachedPtr;
  v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
  *(_QWORD *)&v60.fields.currentCryptoKey = v28;
  *(_QWORD *)&v60.fields.fakeValue = v27;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v60, 0LL);
  if ( !v25 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v25, v26, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v31 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  context = v23->fields.context;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v31;
  v56 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30);
  v58 = v59;
  v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v58, 0LL);
  v36 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v33, v34, v35);
  NetworkManager_ResultCallbackFunc___ctor(
    v36,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v37);
  Request_object = NetworkManager__getRequest_object_(
                     v36,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v39 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v40 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v57.fields.fakeValue = v39;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v57, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtEntity->fields.dispLimitCount, 0LL);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtEntity->fields.iconLimitCount, 0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v46 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v51 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v61.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v50;
  *(_QWORD *)&v61.fields.currentCryptoKey = v51;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v61, 0LL);
  if ( !v40 )
LABEL_18:
    sub_1BCAA3C(limitCountSupport, v22);
  CardFavoriteRequest__beginRequest(
    v40,
    targetUsrSVtId,
    imageLimitCount,
    v41,
    v42,
    v43,
    v44,
    1,
    IsLock,
    v46 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v56 == (struct System_Threading_SynchronizationContext_o *)v55,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent__setModeTabKind(
        FavoriteChangeComponent_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v30; // x8
  System_String_o **v31; // x8
  System_String_o **v32; // x8
  __int64 *v33; // x8
  const MethodInfo *v34; // x2
  UILabel_o *infoLb; // x21
  char v36; // w8
  UILabel_o *v37; // x21
  __int64 *v38; // x8
  const MethodInfo *v39; // x2

  if ( (byte_4B115AF & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, method);
    sub_1BCA7E0(&StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_17839/*"button_push_reg"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17840/*"button_push_unreg"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17825/*"button_allchoice_reg"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17828/*"button_alllock_unreg"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_17841/*"button_select_reg"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_17842/*"button_select_unreg"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17827/*"button_alllock_reg"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_17826/*"button_allchoice_unreg"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_7226/*"HEADER_MSG_FAVORITE"*/, v27, v28);
    byte_4B115AF = 1;
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
    v30 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17842/*"button_select_unreg"*/ : &StringLiteral_17841/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v30, 0LL);
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
    v31 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17827/*"button_alllock_reg"*/ : &StringLiteral_17828/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v31, 0LL);
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
    v32 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17825/*"button_allchoice_reg"*/ : &StringLiteral_17826/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v32, 0LL);
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
      sub_1BCAA3C(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v33 = &StringLiteral_17839/*"button_push_reg"*/;
    else
      v33 = &StringLiteral_17840/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v33, 0LL);
    switch ( modeKind )
    {
      case 0:
        infoLb = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7226/*"HEADER_MSG_FAVORITE"*/,
                                                       0LL);
        if ( !infoLb )
          goto LABEL_51;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v36 = 0;
        goto LABEL_48;
      case 1:
        v37 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        v38 = &StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_45;
      case 2:
        v37 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        v38 = &StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_45;
      case 3:
        v37 = this->fields.infoLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
        v38 = &StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_45:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v38, 0LL);
        if ( !v37 )
          goto LABEL_51;
        UILabel__set_text(v37, (System_String_o *)normalTabButton, 0LL);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_51;
        v36 = 1;
LABEL_48:
        *((_BYTE *)&normalTabButton[15].fields + 4) = v36;
LABEL_49:
        FavoriteChangeListViewManager__UpdateDisplayState(
          (FavoriteChangeListViewManager_o *)normalTabButton,
          modeKind == 3,
          v34);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.favoriteChangeManager;
        if ( !normalTabButton )
          goto LABEL_51;
        FavoriteChangeListViewManager__SetMode_31612004((FavoriteChangeListViewManager_o *)normalTabButton, 2, v39);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A05B78;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05B30;
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
  if ( (byte_4B115B2 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isRequest, callback);
    byte_4B115B2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall FavoriteChangeComponent_RequestCallbackFunc__EndInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  CommonUI_o *v13; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4B115B3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__, v7, v8);
    byte_4B115B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      Instance = (Il2CppObject *)sub_1BCA784(&this->fields.__9__1, _9__1);
    }
    if ( v13 )
    {
      CommonUI__CloseConfirmDialog_30766896(v13, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(Instance, v10);
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
    sub_1BCAA3C(this, method);
  FavoriteChangeComponent__PushRequest(this->fields.__4__this, this->fields.item, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__2(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  CommonUI_o *v13; // x20
  System_Action_o *_9__3; // x22

  if ( (byte_4B115B4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__, v7, v8);
    byte_4B115B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__3 = this->fields.__9__3;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__,
        0LL);
      this->fields.__9__3 = _9__3;
      Instance = (Il2CppObject *)sub_1BCA784(&this->fields.__9__3, _9__3);
    }
    if ( v13 )
    {
      CommonUI__CloseConfirmDialog_30766896(v13, _9__3, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__3(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  FavoriteChangeComponent___c__DisplayClass31_0_o *v3; // x19
  struct FavoriteChangeComponent_o *_4__this; // x9
  struct FavoriteChangeListViewItem_o *item; // x8

  v3 = this;
  if ( (byte_4B115B5 & 1) == 0 )
  {
    this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)sub_1BCA7E0(&StringLiteral_9971/*"OnClickFavoriteDecide"*/, method, v2);
    byte_4B115B5 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this
    || (item = v3->fields.item) == 0LL
    || (this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)_4__this->fields.favoriteChangeManager) == 0LL )
  {
    sub_1BCAA3C(this, method);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)this,
    (System_String_o *)StringLiteral_9971/*"OnClickFavoriteDecide"*/,
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  FavoriteChangeComponent_o *_4__this; // x0
  struct FavoriteChangeComponent_o *v9; // x8
  __int64 v10; // x2
  __int64 v11; // x3
  struct FavoriteChangeComponent_o *v12; // x8
  Il2CppObject *v13; // x20
  FavoriteChangeListViewManager_o *monitor; // x19
  FavoriteChangeListViewManager_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2

  if ( (byte_4B115B6 & 1) == 0 )
  {
    sub_1BCA7E0(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FavoriteChangeComponent_OnClickServant__, v4, v5);
    sub_1BCA7E0(&StringLiteral_3554/*"CLICK_BACK"*/, v6, v7);
    byte_4B115B6 = 1;
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
        v9 = this->fields.__4__this;
        if ( v9 )
        {
          _4__this = (FavoriteChangeComponent_o *)v9->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3554/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(_4__this, method);
  }
  if ( !_4__this->fields.favoriteChangeManager )
    goto LABEL_18;
  FavoriteChangeListViewManager__ModifyItem(_4__this->fields.favoriteChangeManager, _4__this->fields.usrSvtId, v2);
  if ( this->fields.isNeedSort )
  {
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_18;
    _4__this = (FavoriteChangeComponent_o *)v12->fields.favoriteChangeManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v13 = (Il2CppObject *)this->fields.__4__this;
  if ( !v13 )
    goto LABEL_18;
  monitor = (FavoriteChangeListViewManager_o *)v13[3].monitor;
  v15 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                          FavoriteChangeListViewManager_CallbackFunc_TypeInfo,
                                                          method,
                                                          v10,
                                                          v11);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v15,
    v13,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    v16);
  if ( !monitor )
    goto LABEL_18;
  monitor->fields.callbackFunc = v15;
  sub_1BCA784(&monitor->fields.callbackFunc, v15);
  FavoriteChangeListViewManager__SetMode_31612004(monitor, 2, v17);
}