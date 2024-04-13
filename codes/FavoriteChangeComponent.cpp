void __fastcall FavoriteChangeComponent___ctor(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FavoriteChangeComponent__EndCardFavoriteRequest(
        FavoriteChangeComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  FavoriteChangeListViewManager_o *v9; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_42E8CC5 & 1) == 0 )
  {
    sub_B5D5C4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FavoriteChangeComponent_OnClickServant__, v5, v6, v7);
    byte_42E8CC5 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, 0LL),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL)
    || (ListViewManager__SortItem((ListViewManager_o *)favoriteChangeManager, -1, 0, -1, 0LL),
        v9 = this->fields.favoriteChangeManager,
        v10 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B5D694(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !v9) )
  {
    sub_B5D69C(favoriteChangeManager, result);
  }
  FavoriteChangeListViewManager__SetMode(v9, 2, v10, 0LL);
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
      sub_B5D69C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_21632016(favoriteChangeManager, 2, 0LL);
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
      sub_B5D69C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_21632016(favoriteChangeManager, 2, 0LL);
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
      sub_B5D69C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_21632016(favoriteChangeManager, 2, 0LL);
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
      sub_B5D69C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode_21632016(favoriteChangeManager, 2, 0LL);
  }
  FavoriteChangeComponent__setModeTabKind(this, 3, method);
}


void __fastcall FavoriteChangeComponent__EndCloseConfirmSelectFavorite(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E8CC3 & 1) == 0 )
  {
    sub_B5D5C4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FavoriteChangeComponent_OnClickServant__, v5, v6, v7);
    byte_42E8CC3 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  v9 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B5D694(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0LL);
  if ( !favoriteChangeManager )
    sub_B5D69C(v10, v11);
  FavoriteChangeListViewManager__SetMode(favoriteChangeManager, 2, v9, 0LL);
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
    sub_B5D560(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    FavoriteChangeComponent_RequestCallbackFunc__Invoke(v9, 1, 0LL);
  }
}


void __fastcall FavoriteChangeComponent__EndePushRequest(
        FavoriteChangeComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  FavoriteChangeListViewManager_o *v9; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_42E8CC7 & 1) == 0 )
  {
    sub_B5D5C4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FavoriteChangeComponent_OnClickServant__, v5, v6, v7);
    byte_42E8CC7 = 1;
  }
  favoriteChangeManager = this->fields.favoriteChangeManager;
  if ( !favoriteChangeManager
    || (FavoriteChangeListViewManager__UpdateDisplayState(favoriteChangeManager, 1, 0LL),
        (favoriteChangeManager = this->fields.favoriteChangeManager) == 0LL)
    || (FavoriteChangeListViewManager__ModifyItem(favoriteChangeManager, this->fields.usrSvtId, 0LL),
        v9 = this->fields.favoriteChangeManager,
        v10 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B5D694(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !v9) )
  {
    sub_B5D69C(favoriteChangeManager, result);
  }
  FavoriteChangeListViewManager__SetMode(v9, 2, v10, 0LL);
}


void __fastcall FavoriteChangeComponent__Init(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v10; // x2

  if ( (byte_42E8CBE & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_7113/*"HEADER_MSG_FAVORITE"*/, v5, v6, v7);
    byte_42E8CBE = 1;
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
                                                               (System_String_o *)StringLiteral_7113/*"HEADER_MSG_FAVORITE"*/,
                                                               0LL);
  if ( !infoLb )
LABEL_9:
    sub_B5D69C(favoriteChangeManager, method);
  UILabel__set_text(infoLb, (System_String_o *)favoriteChangeManager, 0LL);
  FavoriteChangeComponent__setModeTabKind(this, 0, v10);
}


void __fastcall FavoriteChangeComponent__OnClickScaleChange(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E8CCF & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8CCF = 1;
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
      sub_B5D69C(0LL, v5);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  __int64 v103; // x20
  __int64 favoriteChangeManager; // x0
  const MethodInfo *v105; // x1
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x1
  FavoriteChangeListViewItem_o **v119; // x21
  __int64 v120; // x8
  __int128 v121; // q1
  const MethodInfo *v122; // x2
  int32_t tabModeKind; // w8
  int32_t v124; // w0
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v126; // x20
  ServantStatusDialog_ResultDelegate_o *v127; // x22
  SoundManager_c *v128; // x0
  FavoriteChangeListViewManager_o *v129; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v130; // x21
  ServantEntity_o *servantEntity; // x22
  int64_t v132; // x23
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v134; // x23
  __int64 v135; // x24
  __int64 v136; // x25
  ServantEntity_o *v137; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x23
  int32_t v139; // w24
  FavoriteChangeListViewItem_o *v140; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v141; // x9
  int32_t v142; // w27
  int32_t svtId; // w24
  int32_t v144; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v146; // x23
  UserServantEntity_o *v147; // x0
  UserServantEntity_o *v148; // x0
  System_String_o *v149; // x23
  const MethodInfo *v150; // x2
  int64_t v151; // x22
  struct UserServantEntity_o *v152; // x8
  __int128 v153; // q0
  UserServantEntity_o *v154; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v155; // x22
  __int64 v156; // x23
  __int64 v157; // x24
  ServantEntity_o *v158; // x26
  ServantLimitImageMaster_o *v159; // x22
  int32_t v160; // w23
  FavoriteChangeListViewItem_o *v161; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v162; // x9
  int32_t v163; // w28
  int32_t v164; // w23
  int32_t v165; // w0
  int32_t v166; // w24
  System_String_o *v167; // x22
  System_String_o *v168; // x23
  System_Object_array *v169; // x25
  int32_t v170; // w27
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  System_Int32_array **v177; // x27
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  System_Int32_array **v184; // x27
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  System_Int32_array **v191; // x26
  int32_t v192; // w0
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  System_Int32_array **v199; // x26
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  System_Int32_array **v206; // x26
  System_String_array **v207; // x2
  System_String_array **v208; // x3
  System_Boolean_array **v209; // x4
  System_Int32_array **v210; // x5
  System_Int32_array *v211; // x6
  System_Int32_array *v212; // x7
  System_Int32_array **v213; // x21
  System_String_o *v214; // x21
  System_String_o *v215; // x23
  System_String_o *v216; // x24
  WebViewManager_o *v217; // x25
  CommonConfirmDialog_ClickDelegate_o *v218; // x26
  CommonUI_o *v219; // x0
  System_String_o *v220; // x1
  System_String_o *v221; // x2
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v223; // x3
  System_String_o *v224; // x4
  CommonConfirmDialog_ClickDelegate_o *v225; // x5
  System_String_o *v226; // x0
  System_String_o *v227; // x28
  System_Object_array *v228; // x23
  int32_t Rarity; // w26
  System_String_array **v230; // x2
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  System_Int32_array **v236; // x26
  System_String_array **v237; // x2
  System_String_array **v238; // x3
  System_Boolean_array **v239; // x4
  System_Int32_array **v240; // x5
  System_Int32_array *v241; // x6
  System_Int32_array *v242; // x7
  System_Int32_array **v243; // x26
  System_String_array **v244; // x2
  System_String_array **v245; // x3
  System_Boolean_array **v246; // x4
  System_Int32_array **v247; // x5
  System_Int32_array *v248; // x6
  System_Int32_array *v249; // x7
  System_Int32_array **v250; // x25
  int32_t v251; // w0
  System_String_array **v252; // x2
  System_String_array **v253; // x3
  System_Boolean_array **v254; // x4
  System_Int32_array **v255; // x5
  System_Int32_array *v256; // x6
  System_Int32_array *v257; // x7
  System_Int32_array **v258; // x21
  System_String_array **v259; // x2
  System_String_array **v260; // x3
  System_Boolean_array **v261; // x4
  System_Int32_array **v262; // x5
  System_Int32_array *v263; // x6
  System_Int32_array *v264; // x7
  System_Int32_array **v265; // x21
  System_String_array **v266; // x2
  System_String_array **v267; // x3
  System_Boolean_array **v268; // x4
  System_Int32_array **v269; // x5
  System_Int32_array *v270; // x6
  System_Int32_array *v271; // x7
  System_Int32_array **v272; // x21
  System_String_o *v273; // x21
  System_String_o *v274; // x22
  System_String_o *v275; // x23
  WebViewManager_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v277; // x25
  __int64 v278; // x0
  __int64 v279; // x0
  System_String_o *title; // [xsp+18h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v281; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v282; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v283; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v284; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v285; // 0:x0.16

  if ( (byte_42E8CC2 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, kind, n, method);
    sub_B5D5C4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v19, v20, v21);
    sub_B5D5C4(&DataManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v28, v29, v30);
    sub_B5D5C4(&Method_FavoriteChangeComponent_OnClickServant__, v31, v32, v33);
    sub_B5D5C4(&Method_FavoriteChangeComponent_closeSvtDetail__, v34, v35, v36);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&object___TypeInfo, v40, v41, v42);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Rarity_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&ServantStatusDialog_ResultDelegate_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v55, v56, v57);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v58, v59, v60);
    sub_B5D5C4(&SoundManager_TypeInfo, v61, v62, v63);
    sub_B5D5C4(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__, v64, v65, v66);
    sub_B5D5C4(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__2__, v67, v68, v69);
    sub_B5D5C4(&FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_12135/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_12133/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v85, v86, v87);
    sub_B5D5C4(&StringLiteral_12132/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, v88, v89, v90);
    sub_B5D5C4(&StringLiteral_12136/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/, v91, v92, v93);
    sub_B5D5C4(&StringLiteral_1/*""*/, v94, v95, v96);
    sub_B5D5C4(&StringLiteral_12134/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, v97, v98, v99);
    sub_B5D5C4(&StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v100, v101, v102);
    byte_42E8CC2 = 1;
  }
  v103 = sub_B5D694(FavoriteChangeComponent___c__DisplayClass31_0_TypeInfo);
  FavoriteChangeComponent___c__DisplayClass31_0___ctor((FavoriteChangeComponent___c__DisplayClass31_0_o *)v103, 0LL);
  if ( !v103 )
    goto LABEL_182;
  *(_QWORD *)(v103 + 16) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v103 + 16),
    (System_Int32_array **)this,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  if ( (n & 0x80000000) != 0 )
  {
    v118 = 0LL;
  }
  else
  {
    favoriteChangeManager = (__int64)this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager )
      goto LABEL_182;
    v118 = (System_Int32_array **)FavoriteChangeListViewManager__GetItem(
                                    (FavoriteChangeListViewManager_o *)favoriteChangeManager,
                                    n,
                                    0LL);
  }
  *(_QWORD *)(v103 + 24) = v118;
  v119 = (FavoriteChangeListViewItem_o **)(v103 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v103 + 24), v118, v112, v113, v114, v115, v116, v117);
  if ( !*(_QWORD *)(v103 + 24) )
    goto LABEL_182;
  v120 = *(_QWORD *)(*(_QWORD *)(v103 + 24) + 112LL);
  if ( !v120 )
    goto LABEL_182;
  v121 = *(_OWORD *)(v120 + 32);
  *(_OWORD *)&v283.fields.currentCryptoKey = *(_OWORD *)(v120 + 16);
  *(_OWORD *)&v283.fields.fakeValue = v121;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v282 = v283;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v282, 0LL);
  this->fields.usrSvtId = favoriteChangeManager;
  if ( kind == 1 )
  {
    FavoriteChangeComponent__setFavoriteRequest(this, *v119, v122);
    return;
  }
  if ( kind == 2 )
  {
    favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v119 )
    {
      userSvtEntity = (*v119)->fields.userSvtEntity;
      v126 = (CommonUI_o *)favoriteChangeManager;
      v127 = (ServantStatusDialog_ResultDelegate_o *)sub_B5D694(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v127,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_closeSvtDetail__,
        0LL);
      if ( v126 )
      {
        CommonUI__OpenServantStatusDialog_18213380(v126, 0, userSvtEntity, v127, 0, 0LL);
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
    if ( !*v119 )
      goto LABEL_182;
    (*v119)->fields.isSwapChoice ^= 1u;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v124 = 0;
    goto LABEL_47;
  }
  if ( tabModeKind == 1 )
  {
    if ( !*v119 )
      goto LABEL_182;
    (*v119)->fields.isSwapLock ^= 1u;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v124 = 11;
    goto LABEL_47;
  }
  favoriteChangeManager = (__int64)*v119;
  if ( !*v119 )
    goto LABEL_182;
  if ( tabModeKind != 3 )
  {
    if ( FavoriteChangeListViewItem__get_IsCanNotSelect((FavoriteChangeListViewItem_o *)favoriteChangeManager, v105) )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
        || SoundManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_46;
      }
      v128 = SoundManager_TypeInfo;
LABEL_45:
      j_il2cpp_runtime_class_init_0(v128);
LABEL_46:
      v124 = 2;
LABEL_47:
      SoundManager__playSystemSe(v124, 0LL);
      goto LABEL_48;
    }
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( *v119 )
    {
      servantEntity = (*v119)->fields.servantEntity;
      favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
      if ( favoriteChangeManager )
      {
        v132 = *(_QWORD *)(favoriteChangeManager + 112);
        favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( favoriteChangeManager )
        {
          favoriteChangeManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)favoriteChangeManager,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( favoriteChangeManager )
          {
            Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)favoriteChangeManager,
                       v132,
                       (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( favoriteChangeManager )
            {
              favoriteChangeManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)favoriteChangeManager,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( Entity )
              {
                v134 = (DataMasterBase_WarMaster__WarEntity__int__o *)favoriteChangeManager;
                v136 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
                v135 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v284.fields.currentCryptoKey = v136;
                *(_QWORD *)&v284.fields.fakeValue = v135;
                favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v284, 0LL);
                if ( v134 )
                {
                  v137 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v134,
                                              favoriteChangeManager,
                                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                  v139 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(Entity->fields.svtId, 0LL);
                  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                            Entity->fields.limitCount,
                                            0LL);
                  if ( Master_WarQuestSelectionMaster )
                  {
                    favoriteChangeManager = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                              Master_WarQuestSelectionMaster,
                                              v139,
                                              favoriteChangeManager,
                                              0LL);
                    v140 = *v119;
                    if ( *v119 )
                    {
                      v141 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v140->fields.userSvtEntity;
                      if ( v141 )
                      {
                        v142 = favoriteChangeManager;
                        svtId = v140->fields.svtId;
                        v144 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v141[6], 0LL);
                        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                       Master_WarQuestSelectionMaster,
                                                       svtId,
                                                       v144,
                                                       0LL);
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        favoriteChangeManager = (__int64)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12136/*"SERVANT_STATUS_FAVORITE_CONFIRM_TITLE"*/,
                                                           0LL);
                        if ( *v119 )
                        {
                          v146 = (System_String_o *)favoriteChangeManager;
                          v147 = (*v119)->fields.userSvtEntity;
                          title = v146;
                          if ( !v147 )
                            goto LABEL_79;
                          favoriteChangeManager = UserServantEntity__IsEventJoin(v147, 0LL);
                          if ( (favoriteChangeManager & 1) == 0 )
                            goto LABEL_79;
                          if ( !*v119 )
                            goto LABEL_182;
                          v148 = (*v119)->fields.userSvtEntity;
                          if ( !v148 || !UserServantEntity__IsNoPeriod(v148, 0LL) )
                          {
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v149 = LocalizationManager__Get((System_String_o *)StringLiteral_12134/*"SERVANT_STATUS_FAVORITE_CONFIRM_EVENT_JOIN_MESSAGE"*/, 0LL);
                          }
                          else
                          {
LABEL_79:
                            v149 = (System_String_o *)StringLiteral_1/*""*/;
                          }
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v226 = LocalizationManager__Get((System_String_o *)StringLiteral_12135/*"SERVANT_STATUS_FAVORITE_CONFIRM_MESSAGE"*/, 0LL);
                          v227 = System_String__Concat_44577788(v226, v149, 0LL);
                          v228 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 6LL);
                          Rarity = UserServantEntity__getRarity(Entity, 0LL);
                          if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !Rarity_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
                          }
                          favoriteChangeManager = (__int64)Rarity__getRarityType(Rarity, 0LL);
                          if ( v228 )
                          {
                            v236 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B5D684(
                                                        favoriteChangeManager,
                                                        v228->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( !v228->max_length )
                              goto LABEL_183;
                            v228->m_Items[0] = (Il2CppObject *)v236;
                            sub_B5D560(
                              (BattleServantConfConponent_o *)v228->m_Items,
                              v236,
                              v230,
                              v231,
                              v232,
                              v233,
                              v234,
                              v235);
                            if ( !v137 )
                              goto LABEL_182;
                            favoriteChangeManager = (__int64)ServantEntity__getClassName(v137, 0LL);
                            v243 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B5D684(
                                                        favoriteChangeManager,
                                                        v228->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v228->max_length <= 1 )
                              goto LABEL_183;
                            v228->m_Items[1] = (Il2CppObject *)v243;
                            sub_B5D560(
                              (BattleServantConfConponent_o *)&v228->m_Items[1],
                              v243,
                              v237,
                              v238,
                              v239,
                              v240,
                              v241,
                              v242);
                            favoriteChangeManager = (__int64)ServantEntity__getName(v137, v142, -1, 0LL);
                            v250 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B5D684(
                                                        favoriteChangeManager,
                                                        v228->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v228->max_length <= 2 )
                              goto LABEL_183;
                            v228->m_Items[2] = (Il2CppObject *)v250;
                            sub_B5D560(
                              (BattleServantConfConponent_o *)&v228->m_Items[2],
                              v250,
                              v244,
                              v245,
                              v246,
                              v247,
                              v248,
                              v249);
                            if ( !*v119 )
                              goto LABEL_182;
                            favoriteChangeManager = (__int64)(*v119)->fields.userSvtEntity;
                            if ( !favoriteChangeManager )
                              goto LABEL_182;
                            v251 = UserServantEntity__getRarity((UserServantEntity_o *)favoriteChangeManager, 0LL);
                            favoriteChangeManager = (__int64)Rarity__getRarityType(v251, 0LL);
                            v258 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B5D684(
                                                        favoriteChangeManager,
                                                        v228->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v228->max_length <= 3 )
                              goto LABEL_183;
                            v228->m_Items[3] = (Il2CppObject *)v258;
                            sub_B5D560(
                              (BattleServantConfConponent_o *)&v228->m_Items[3],
                              v258,
                              v252,
                              v253,
                              v254,
                              v255,
                              v256,
                              v257);
                            if ( !servantEntity )
                              goto LABEL_182;
                            favoriteChangeManager = (__int64)ServantEntity__getClassName(servantEntity, 0LL);
                            v265 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B5D684(
                                                        favoriteChangeManager,
                                                        v228->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v228->max_length <= 4 )
                              goto LABEL_183;
                            v228->m_Items[4] = (Il2CppObject *)v265;
                            sub_B5D560(
                              (BattleServantConfConponent_o *)&v228->m_Items[4],
                              v265,
                              v259,
                              v260,
                              v261,
                              v262,
                              v263,
                              v264);
                            favoriteChangeManager = (__int64)ServantEntity__getName(
                                                               servantEntity,
                                                               ServantLimitCountSealAfter,
                                                               -1,
                                                               0LL);
                            v272 = (System_Int32_array **)favoriteChangeManager;
                            if ( favoriteChangeManager )
                            {
                              favoriteChangeManager = sub_B5D684(
                                                        favoriteChangeManager,
                                                        v228->obj.klass->_1.element_class);
                              if ( !favoriteChangeManager )
                                goto LABEL_184;
                            }
                            if ( v228->max_length <= 5 )
                            {
LABEL_183:
                              v278 = sub_B5D6C8(favoriteChangeManager);
                              sub_B5D668(v278, 0LL);
                            }
                            v228->m_Items[5] = (Il2CppObject *)v272;
                            sub_B5D560(
                              (BattleServantConfConponent_o *)&v228->m_Items[5],
                              v272,
                              v266,
                              v267,
                              v268,
                              v269,
                              v270,
                              v271);
                            v273 = System_String__Format_44656512(v227, v228, 0LL);
                            v274 = LocalizationManager__Get((System_String_o *)StringLiteral_12133/*"SERVANT_STATUS_FAVORITE_CONFIRM_DECIDE"*/, 0LL);
                            v275 = LocalizationManager__Get((System_String_o *)StringLiteral_12132/*"SERVANT_STATUS_FAVORITE_CONFIRM_CANCEL"*/, 0LL);
                            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v277 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v277,
                              (Il2CppObject *)v103,
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
                              v220 = title;
                              v219 = (CommonUI_o *)Instance;
                              v221 = v273;
                              static_fields = BalanceConfig_TypeInfo->static_fields;
                              v223 = v274;
                              v224 = v275;
                              v225 = v277;
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
    sub_B5D69C(favoriteChangeManager, v105);
  }
  if ( *(_QWORD *)(favoriteChangeManager + 112) )
  {
    if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(favoriteChangeManager + 112), 0LL) )
    {
LABEL_38:
      v128 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
        || SoundManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_46;
      }
      goto LABEL_45;
    }
    favoriteChangeManager = (__int64)*v119;
    if ( !*v119 )
      goto LABEL_182;
  }
  if ( FavoriteChangeListViewItem__get_IsHerioneReave((FavoriteChangeListViewItem_o *)favoriteChangeManager, v105) )
    goto LABEL_38;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  favoriteChangeManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !favoriteChangeManager )
    goto LABEL_182;
  v151 = *(_QWORD *)(favoriteChangeManager + 120);
  if ( !v151 )
  {
LABEL_91:
    FavoriteChangeComponent__PushRequest(this, *v119, v150);
    goto LABEL_48;
  }
  if ( !*v119 )
    goto LABEL_182;
  v152 = (*v119)->fields.userSvtEntity;
  if ( !v152 )
    goto LABEL_182;
  v153 = *(_OWORD *)&v152->fields.id.fields.fakeValue;
  *(_OWORD *)&v283.fields.currentCryptoKey = *(_OWORD *)&v152->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v283.fields.fakeValue = v153;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v281 = v283;
  if ( v151 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v281, 0LL) )
    goto LABEL_91;
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_182;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !favoriteChangeManager )
    goto LABEL_182;
  v154 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
           (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)favoriteChangeManager,
           v151,
           (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  favoriteChangeManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !favoriteChangeManager )
    goto LABEL_182;
  favoriteChangeManager = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)favoriteChangeManager,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v154 )
    goto LABEL_182;
  v155 = (DataMasterBase_WarMaster__WarEntity__int__o *)favoriteChangeManager;
  v157 = *(_QWORD *)&v154->fields.svtId.fields.currentCryptoKey;
  v156 = *(_QWORD *)&v154->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v285.fields.currentCryptoKey = v157;
  *(_QWORD *)&v285.fields.fakeValue = v156;
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v285, 0LL);
  if ( !v155 )
    goto LABEL_182;
  v158 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v155,
                              favoriteChangeManager,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v159 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v160 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v154->fields.svtId, 0LL);
  favoriteChangeManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                            v154->fields.limitCount,
                            0LL);
  if ( !v159 )
    goto LABEL_182;
  favoriteChangeManager = ServantLimitImageMaster__GetServantLimitCountSealAfter(v159, v160, favoriteChangeManager, 0LL);
  v161 = *v119;
  if ( !*v119 )
    goto LABEL_182;
  v162 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v161->fields.userSvtEntity;
  if ( !v162 )
    goto LABEL_182;
  v163 = favoriteChangeManager;
  v164 = v161->fields.svtId;
  v165 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v162[6], 0LL);
  v166 = ServantLimitImageMaster__GetServantLimitCountSealAfter(v159, v164, v165, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v167 = LocalizationManager__Get((System_String_o *)StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v168 = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v169 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 6LL);
  v170 = UserServantEntity__getRarity(v154, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v170, 0LL);
  if ( !v169 )
    goto LABEL_182;
  v177 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B5D684(favoriteChangeManager, v169->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( !v169->max_length )
    goto LABEL_183;
  v169->m_Items[0] = (Il2CppObject *)v177;
  sub_B5D560((BattleServantConfConponent_o *)v169->m_Items, v177, v171, v172, v173, v174, v175, v176);
  if ( !v158 )
    goto LABEL_182;
  favoriteChangeManager = (__int64)ServantEntity__getClassName(v158, 0LL);
  v184 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B5D684(favoriteChangeManager, v169->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( v169->max_length <= 1 )
    goto LABEL_183;
  v169->m_Items[1] = (Il2CppObject *)v184;
  sub_B5D560((BattleServantConfConponent_o *)&v169->m_Items[1], v184, v178, v179, v180, v181, v182, v183);
  favoriteChangeManager = (__int64)ServantEntity__getName(v158, v163, -1, 0LL);
  v191 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B5D684(favoriteChangeManager, v169->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( v169->max_length <= 2 )
    goto LABEL_183;
  v169->m_Items[2] = (Il2CppObject *)v191;
  sub_B5D560((BattleServantConfConponent_o *)&v169->m_Items[2], v191, v185, v186, v187, v188, v189, v190);
  if ( !*v119 )
    goto LABEL_182;
  favoriteChangeManager = (__int64)(*v119)->fields.userSvtEntity;
  if ( !favoriteChangeManager )
    goto LABEL_182;
  v192 = UserServantEntity__getRarity((UserServantEntity_o *)favoriteChangeManager, 0LL);
  favoriteChangeManager = (__int64)Rarity__getRarityType(v192, 0LL);
  v199 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B5D684(favoriteChangeManager, v169->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( v169->max_length <= 3 )
    goto LABEL_183;
  v169->m_Items[3] = (Il2CppObject *)v199;
  sub_B5D560((BattleServantConfConponent_o *)&v169->m_Items[3], v199, v193, v194, v195, v196, v197, v198);
  if ( !*v119 )
    goto LABEL_182;
  favoriteChangeManager = (__int64)(*v119)->fields.servantEntity;
  if ( !favoriteChangeManager )
    goto LABEL_182;
  favoriteChangeManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)favoriteChangeManager, 0LL);
  v206 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B5D684(favoriteChangeManager, v169->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
      goto LABEL_184;
  }
  if ( v169->max_length <= 4 )
    goto LABEL_183;
  v169->m_Items[4] = (Il2CppObject *)v206;
  sub_B5D560((BattleServantConfConponent_o *)&v169->m_Items[4], v206, v200, v201, v202, v203, v204, v205);
  if ( !*v119 )
    goto LABEL_182;
  favoriteChangeManager = (__int64)(*v119)->fields.servantEntity;
  if ( !favoriteChangeManager )
    goto LABEL_182;
  favoriteChangeManager = (__int64)ServantEntity__getName((ServantEntity_o *)favoriteChangeManager, v166, -1, 0LL);
  v213 = (System_Int32_array **)favoriteChangeManager;
  if ( favoriteChangeManager )
  {
    favoriteChangeManager = sub_B5D684(favoriteChangeManager, v169->obj.klass->_1.element_class);
    if ( !favoriteChangeManager )
    {
LABEL_184:
      v279 = sub_B5D6BC(favoriteChangeManager);
      sub_B5D668(v279, 0LL);
    }
  }
  if ( v169->max_length <= 5 )
    goto LABEL_183;
  v169->m_Items[5] = (Il2CppObject *)v213;
  sub_B5D560((BattleServantConfConponent_o *)&v169->m_Items[5], v213, v207, v208, v209, v210, v211, v212);
  v214 = System_String__Format_44656512(v168, v169, 0LL);
  v215 = LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v216 = LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  v217 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v218 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v218,
    (Il2CppObject *)v103,
    Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__0__,
    0LL);
  favoriteChangeManager = (__int64)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v217 )
    goto LABEL_182;
  v219 = (CommonUI_o *)v217;
  v220 = v167;
  v221 = v214;
  static_fields = BalanceConfig_TypeInfo->static_fields;
  v223 = v215;
  v224 = v216;
  v225 = v218;
LABEL_181:
  CommonUI__OpenConfirmDialog_18201384(v219, v220, v221, v223, v224, v225, static_fields->DefaultFontSize, 0, 0, 0LL);
LABEL_48:
  v129 = this->fields.favoriteChangeManager;
  v130 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B5D694(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  FavoriteChangeListViewManager_CallbackFunc___ctor(
    v130,
    (Il2CppObject *)this,
    (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
    0LL);
  if ( !v129 )
    goto LABEL_182;
  FavoriteChangeListViewManager__SetMode(v129, 2, v130, 0LL);
}


void __fastcall FavoriteChangeComponent__Open(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_GameObject_o *v16; // x20
  const MethodInfo *v17; // x1
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v19; // x21

  if ( (byte_42E8CBF & 1) == 0 )
  {
    sub_B5D5C4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FavoriteChangeComponent_OnClickServant__, v5, v6, v7);
    byte_42E8CBF = 1;
  }
  FavoriteChangeComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.cancelCallback = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.cancelCallback, 0LL, v10, v11, v12, v13, v14, v15);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_10;
  TitleInfoControl__changeTitleInfo_18299236((TitleInfoControl_o *)gameObject, 1, 50, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_10;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !v16
    || (UnityEngine_GameObject__SetActive(v16, (unsigned __int8)gameObject & 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.favoriteChangeManager) == 0LL)
    || (FavoriteChangeListViewManager__CreateList((FavoriteChangeListViewManager_o *)gameObject, 0LL),
        FavoriteChangeComponent__UpdateScaleChangeIconSprite(this, v17),
        favoriteChangeManager = this->fields.favoriteChangeManager,
        v19 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B5D694(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
        FavoriteChangeListViewManager_CallbackFunc___ctor(
          v19,
          (Il2CppObject *)this,
          (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
          0LL),
        !favoriteChangeManager) )
  {
LABEL_10:
    sub_B5D69C(gameObject, v9);
  }
  FavoriteChangeListViewManager__SetMode(favoriteChangeManager, 2, v19, 0LL);
  this->fields.state = 2;
}


void __fastcall FavoriteChangeComponent__PushRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  DataManager_o *limitCountSupport; // x0
  __int64 v31; // x1
  struct UserServantEntity_o *userSvtEntity; // x19
  DataManager_o *v33; // x23
  UserServantCollectionMaster_o *v34; // x21
  int64_t v35; // x22
  __int64 v36; // x24
  __int64 v37; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v39; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v41; // x8
  int64_t v42; // x0
  __int128 v43; // q0
  NetworkManager_ResultCallbackFunc_o *v44; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v46; // q0
  CardFavoriteRequest_o *v47; // x20
  int32_t v48; // w27
  int32_t v49; // w28
  int32_t v50; // w21
  bool IsLock; // w23
  char v52; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v56; // w0
  __int64 v57; // x8
  int32_t randomSettingSupport; // w19
  int32_t v59; // [xsp+50h] [xbp-110h]
  int32_t v60; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v62; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v64; // [xsp+70h] [xbp-F0h]
  __int64 v65; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_42E8CC6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FavoriteChangeComponent_EndePushRequest__, v6, v7, v8);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28, v29);
    byte_42E8CC6 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userSvtEntity = selectItem->fields.userSvtEntity;
  v33 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v33 || !userSvtEntity )
    goto LABEL_21;
  v34 = (UserServantCollectionMaster_o *)limitCountSupport;
  v35 = *(_QWORD *)&v33->fields.m_CachedPtr;
  v37 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v37;
  *(_QWORD *)&v70.fields.fakeValue = v36;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v70, 0LL);
  if ( !v34 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v34, v35, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v39 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  v41 = *(_QWORD *)&v33->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v39;
  v65 = v41;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v68 = v69;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v68, 0LL);
  v43 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v33->fields.writeMasterDataThread;
  v64 = v42;
  *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v67.fields.fakeValue = v43;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v67, 0LL);
  v44 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v44,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndePushRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v44,
                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v46 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v47 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v66.fields.fakeValue = v46;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v66, 0LL);
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.imageLimitCount, 0LL);
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.dispLimitCount, 0LL);
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.iconLimitCount, 0LL);
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v52 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v57 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v71.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v56;
  *(_QWORD *)&v71.fields.currentCryptoKey = v57;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v71, 0LL);
  if ( !v47 )
LABEL_21:
    sub_B5D69C(limitCountSupport, v31);
  CardFavoriteRequest__beginRequest(
    v47,
    targetUsrSVtId,
    v60,
    v59,
    v48,
    v49,
    v50,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v62,
    IsLock,
    v52 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v65 != v64,
    0LL);
}


void __fastcall FavoriteChangeComponent__StatusRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeComponent_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t tabModeKind; // w8
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  System_Int64_array *v24; // x2
  System_Int64_array *v25; // x1
  bool v26; // w4
  bool v27; // w5
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  NetworkManager_ResultCallbackFunc_o *v34; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42E8CCE & 1) == 0 )
  {
    sub_B5D5C4(&Method_FavoriteChangeComponent_EndStatusSync__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    byte_42E8CCE = 1;
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v34 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v34,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v34,
                                                                   (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v24 = unchoiceList;
        v25 = choiceList;
        v27 = 1;
        v26 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B5D69C(favoriteChangeManager, callback);
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      favoriteChangeManager = (FavoriteChangeListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v23,
                                                                   (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( favoriteChangeManager )
      {
        v24 = unlockList;
        v25 = lockList;
        v26 = 1;
        v27 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)favoriteChangeManager,
          v25,
          v24,
          0,
          v26,
          v27,
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
    sub_B5D69C(favoriteChangeManager, method);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  FavoriteChangeComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_42E8CC0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_FavoriteChangeComponent_endCancelButton__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v10, v11, v12);
    byte_42E8CC0 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cancelCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B5D694(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
  FavoriteChangeComponent_RequestCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_endCancelButton__,
    0LL);
  FavoriteChangeComponent__StatusRequest(this, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent__closeSvtDetail(
        FavoriteChangeComponent_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  char v8; // w1
  char v9; // w2
  __int64 v10; // x3
  char v11; // w1
  char v12; // w2
  __int64 v13; // x3
  char v14; // w1
  char v15; // w2
  __int64 v16; // x3
  __int64 v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CommonUI_o *Instance; // x19
  System_Action_o *v27; // x20

  if ( (byte_42E8CC8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, isNeedSort, *(_QWORD *)&questId);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__, v11, v12, v13);
    sub_B5D5C4(&FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo, v14, v15, v16);
    byte_42E8CC8 = 1;
  }
  v17 = sub_B5D694(FavoriteChangeComponent___c__DisplayClass37_0_TypeInfo);
  FavoriteChangeComponent___c__DisplayClass37_0___ctor((FavoriteChangeComponent___c__DisplayClass37_0_o *)v17, 0LL);
  if ( !v17
    || (*(_DWORD *)(v17 + 16) = questId,
        *(_QWORD *)(v17 + 24) = this,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v17 + 24),
          (System_Int32_array **)this,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        *(_BYTE *)(v17 + 32) = isNeedSort,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v27,
          (Il2CppObject *)v17,
          Method_FavoriteChangeComponent___c__DisplayClass37_0__closeSvtDetail_b__0__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v18, v19);
  }
  CommonUI__CloseServantStatusDialog(Instance, v27, 0LL);
}


void __fastcall FavoriteChangeComponent__dispSvtList(FavoriteChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent__endCancelButton(
        FavoriteChangeComponent_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x0
  FavoriteChangeListViewManager_o *v10; // x20
  FavoriteChangeListViewManager_CallbackFunc_o *v11; // x21
  System_Action_o *cancelCallback; // x0

  if ( (byte_42E8CC1 & 1) == 0 )
  {
    sub_B5D5C4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, isRequest, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FavoriteChangeComponent_OnClickServant__, v6, v7, v8);
    byte_42E8CC1 = 1;
  }
  if ( isRequest )
  {
    favoriteChangeManager = this->fields.favoriteChangeManager;
    if ( !favoriteChangeManager
      || (FavoriteChangeListViewManager__ModifyList(favoriteChangeManager, 0, 0LL),
          v10 = this->fields.favoriteChangeManager,
          v11 = (FavoriteChangeListViewManager_CallbackFunc_o *)sub_B5D694(FavoriteChangeListViewManager_CallbackFunc_TypeInfo),
          FavoriteChangeListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_FavoriteChangeComponent_OnClickServant__,
            0LL),
          !v10) )
    {
LABEL_11:
      sub_B5D69C(favoriteChangeManager, isRequest);
    }
    FavoriteChangeListViewManager__SetMode(v10, 2, v11, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x2
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_42E8CCB & 1) == 0 )
  {
    sub_B5D5C4(&Method_FavoriteChangeComponent_EndClickTabChoice__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E8CCB = 1;
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
        v13 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B5D694(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabChoice__,
          0LL);
        FavoriteChangeComponent__StatusRequest(this, v13, v14);
        return;
      }
      v15 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B5D694(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabChoice__,
        0LL);
      FavoriteChangeComponent__StatusRequest(this, v15, v16);
    }
    FavoriteChangeComponent__setModeTabKind(this, 2, v11);
  }
}


void __fastcall FavoriteChangeComponent__onClickLockTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x2
  int32_t tabModeKind; // w8
  FavoriteChangeComponent_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  FavoriteChangeComponent_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_42E8CCA & 1) == 0 )
  {
    sub_B5D5C4(&Method_FavoriteChangeComponent_EndClickTabLock__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E8CCA = 1;
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
        v13 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B5D694(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
        FavoriteChangeComponent_RequestCallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_FavoriteChangeComponent_EndClickTabLock__,
          0LL);
        FavoriteChangeComponent__StatusRequest(this, v13, v14);
        return;
      }
      v15 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B5D694(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
      FavoriteChangeComponent_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent_EndClickTabLock__,
        0LL);
      FavoriteChangeComponent__StatusRequest(this, v15, v16);
    }
    FavoriteChangeComponent__setModeTabKind(this, 1, v11);
  }
}


void __fastcall FavoriteChangeComponent__onClickNormalTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FavoriteChangeComponent_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42E8CC9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_FavoriteChangeComponent_EndClickTabNormal__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E8CC9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v11 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B5D694(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabNormal__,
      0LL);
    FavoriteChangeComponent__StatusRequest(this, v11, v12);
  }
}


void __fastcall FavoriteChangeComponent__onClickPushTabButton(
        FavoriteChangeComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FavoriteChangeComponent_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42E8CCC & 1) == 0 )
  {
    sub_B5D5C4(&Method_FavoriteChangeComponent_EndClickTabPush__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FavoriteChangeComponent_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E8CCC = 1;
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
    v11 = (FavoriteChangeComponent_RequestCallbackFunc_o *)sub_B5D694(FavoriteChangeComponent_RequestCallbackFunc_TypeInfo);
    FavoriteChangeComponent_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_FavoriteChangeComponent_EndClickTabPush__,
      0LL);
    FavoriteChangeComponent__StatusRequest(this, v11, v12);
  }
}


void __fastcall FavoriteChangeComponent__setFavoriteRequest(
        FavoriteChangeComponent_o *this,
        FavoriteChangeListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  DataManager_o *limitCountSupport; // x0
  __int64 v31; // x1
  struct UserServantEntity_o *userSvtEntity; // x19
  DataManager_o *v33; // x22
  UserServantCollectionMaster_o *v34; // x21
  int64_t v35; // x23
  __int64 v36; // x24
  __int64 v37; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  __int128 v39; // q1
  __int64 v40; // x8
  NetworkManager_ResultCallbackFunc_o *v41; // x22
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v43; // q0
  CardFavoriteRequest_o *v44; // x20
  int32_t v45; // w26
  int32_t v46; // w27
  int32_t v47; // w28
  bool IsLock; // w22
  char v49; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w21
  int32_t randomSettingOwn; // w24
  int32_t v53; // w0
  __int64 v54; // x8
  int32_t randomSettingSupport; // w19
  int32_t v56; // [xsp+50h] [xbp-E0h]
  int32_t v57; // [xsp+54h] [xbp-DCh]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-D8h]
  int64_t v59; // [xsp+60h] [xbp-D0h]
  __int64 v60; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_42E8CC4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FavoriteChangeComponent_EndCardFavoriteRequest__, v6, v7, v8);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28, v29);
    byte_42E8CC4 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userSvtEntity = selectItem->fields.userSvtEntity;
  v33 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v33 || !userSvtEntity )
    goto LABEL_21;
  v34 = (UserServantCollectionMaster_o *)limitCountSupport;
  v35 = *(_QWORD *)&v33->fields.m_CachedPtr;
  v37 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v64.fields.currentCryptoKey = v37;
  *(_QWORD *)&v64.fields.fakeValue = v36;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v64, 0LL);
  if ( !v34 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v34, v35, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v39 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v40 = *(_QWORD *)&v33->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v39;
  v60 = v40;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v62 = v63;
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v62, 0LL);
  v41 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v41,
    (Il2CppObject *)this,
    Method_FavoriteChangeComponent_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v41,
                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v43 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v44 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v61.fields.fakeValue = v43;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v61, 0LL);
  v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.imageLimitCount, 0LL);
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.dispLimitCount, 0LL);
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.iconLimitCount, 0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v49 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v54 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v65.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v53;
  *(_QWORD *)&v65.fields.currentCryptoKey = v54;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v65, 0LL);
  if ( !v44 )
LABEL_21:
    sub_B5D69C(limitCountSupport, v31);
  CardFavoriteRequest__beginRequest(
    v44,
    targetUsrSVtId,
    v57,
    v56,
    v45,
    v46,
    v47,
    1,
    IsLock,
    v49 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v60 == v59,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeComponent__setModeTabKind(
        FavoriteChangeComponent_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v43; // x8
  System_String_o **v44; // x8
  System_String_o **v45; // x8
  __int64 *v46; // x8
  UILabel_o *infoLb; // x21
  struct FavoriteChangeListViewManager_o *v48; // x8
  struct FavoriteChangeListViewManager_o **p_favoriteChangeManager; // x19
  struct FavoriteChangeListViewManager_o *favoriteChangeManager; // t1
  UILabel_o *v51; // x21
  __int64 *v52; // x8
  struct FavoriteChangeListViewManager_o *v53; // x8
  struct FavoriteChangeListViewManager_o *v54; // t1

  if ( (byte_42E8CCD & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, modeKind, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17347/*"button_push_reg"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_17348/*"button_push_unreg"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_17333/*"button_allchoice_reg"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17336/*"button_alllock_unreg"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_17349/*"button_select_reg"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_17350/*"button_select_unreg"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_17335/*"button_alllock_reg"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_17334/*"button_allchoice_unreg"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_7113/*"HEADER_MSG_FAVORITE"*/, v39, v40, v41);
    byte_42E8CCD = 1;
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
    v43 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17350/*"button_select_unreg"*/ : &StringLiteral_17349/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v43, 0LL);
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
    v44 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17335/*"button_alllock_reg"*/ : &StringLiteral_17336/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v44, 0LL);
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
    v45 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_17333/*"button_allchoice_reg"*/ : &StringLiteral_17334/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v45, 0LL);
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
      sub_B5D69C(normalTabButton, *(_QWORD *)&modeKind);
    }
    if ( this->fields.tabModeKind == 3 )
      v46 = &StringLiteral_17347/*"button_push_reg"*/;
    else
      v46 = &StringLiteral_17348/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v46, 0LL);
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
                                                       (System_String_o *)StringLiteral_7113/*"HEADER_MSG_FAVORITE"*/,
                                                       0LL);
        if ( !infoLb )
          goto LABEL_54;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0LL);
        favoriteChangeManager = this->fields.favoriteChangeManager;
        p_favoriteChangeManager = &this->fields.favoriteChangeManager;
        v48 = favoriteChangeManager;
        if ( !favoriteChangeManager )
          goto LABEL_54;
        v48->fields.isCanNotLongPush = 0;
        goto LABEL_51;
      case 1:
        v51 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v52 = &StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_47;
      case 2:
        v51 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v52 = &StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_47;
      case 3:
        v51 = this->fields.infoLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v52 = &StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_47:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v52, 0LL);
        if ( !v51 )
          goto LABEL_54;
        UILabel__set_text(v51, (System_String_o *)normalTabButton, 0LL);
        v54 = this->fields.favoriteChangeManager;
        p_favoriteChangeManager = &this->fields.favoriteChangeManager;
        v53 = v54;
        if ( !v54 )
          goto LABEL_54;
        v53->fields.isCanNotLongPush = 1;
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
        FavoriteChangeListViewManager__SetMode_21632016((FavoriteChangeListViewManager_o *)normalTabButton, 2, 0LL);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E56C5 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isRequest, (_DWORD)callback, object);
    byte_42E56C5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall FavoriteChangeComponent_RequestCallbackFunc__EndInvoke(
        FavoriteChangeComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  FavoriteChangeComponent_RequestCallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  FavoriteChangeComponent_RequestCallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isRequest, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isRequest, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isRequest,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isRequest, v21);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  CommonUI_o *v14; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_42E56C1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__, v9, v10, v11);
    byte_42E56C1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B5D560(&this->fields.__9__1);
    }
    if ( v14 )
    {
      CommonUI__CloseConfirmDialog_18202348(v14, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(Instance, v13);
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
    sub_B5D69C(0LL, method);
  FavoriteChangeComponent__PushRequest(_4__this, this->fields.item, 0LL);
}


void __fastcall FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__2(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  CommonUI_o *v14; // x20
  System_Action_o *_9__3; // x22

  if ( (byte_42E56C2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__, v9, v10, v11);
    byte_42E56C2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = Instance;
  if ( isDecide )
  {
    _9__3 = this->fields.__9__3;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)this,
        Method_FavoriteChangeComponent___c__DisplayClass31_0__OnClickServant_b__3__,
        0LL);
      this->fields.__9__3 = _9__3;
      sub_B5D560(&this->fields.__9__3);
    }
    if ( v14 )
    {
      CommonUI__CloseConfirmDialog_18202348(v14, _9__3, 0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(Instance, v13);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall FavoriteChangeComponent___c__DisplayClass31_0___OnClickServant_b__3(
        FavoriteChangeComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FavoriteChangeComponent___c__DisplayClass31_0_o *v4; // x19
  struct FavoriteChangeComponent_o *_4__this; // x9
  struct FavoriteChangeListViewItem_o *item; // x8

  v4 = this;
  if ( (byte_42E56C3 & 1) == 0 )
  {
    this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)sub_B5D5C4(&StringLiteral_10051/*"OnClickFavoriteDecide"*/, (_DWORD)method, v2, v3);
    byte_42E56C3 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (item = v4->fields.item) == 0LL
    || (this = (FavoriteChangeComponent___c__DisplayClass31_0_o *)_4__this->fields.favoriteChangeManager) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  UnityEngine_Component__SendMessage(
    (UnityEngine_Component_o *)this,
    (System_String_o *)StringLiteral_10051/*"OnClickFavoriteDecide"*/,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FavoriteChangeComponent_o *_4__this; // x0
  struct FavoriteChangeComponent_o *v12; // x8
  struct FavoriteChangeComponent_o *v13; // x8
  struct FavoriteChangeComponent_o *v14; // x20
  FavoriteChangeListViewManager_o *favoriteChangeManager; // x19
  __int64 v16; // x21
  __int64 v17; // x9

  if ( (byte_42E56C4 & 1) == 0 )
  {
    sub_B5D5C4(&FavoriteChangeListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FavoriteChangeComponent_OnClickServant__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_3102/*"CLICK_BACK"*/, v8, v9, v10);
    byte_42E56C4 = 1;
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
        v12 = this->fields.__4__this;
        if ( v12 )
        {
          _4__this = (FavoriteChangeComponent_o *)v12->fields.myRoomFsm;
          if ( _4__this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3102/*"CLICK_BACK"*/, 0LL);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_B5D69C(_4__this, method);
  }
  if ( !_4__this->fields.favoriteChangeManager )
    goto LABEL_18;
  FavoriteChangeListViewManager__ModifyItem(_4__this->fields.favoriteChangeManager, _4__this->fields.usrSvtId, 0LL);
  if ( this->fields.isNeedSort )
  {
    v13 = this->fields.__4__this;
    if ( !v13 )
      goto LABEL_18;
    _4__this = (FavoriteChangeComponent_o *)v13->fields.favoriteChangeManager;
    if ( !_4__this )
      goto LABEL_18;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL);
  }
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_18;
  favoriteChangeManager = v14->fields.favoriteChangeManager;
  v16 = sub_B5D694(FavoriteChangeListViewManager_CallbackFunc_TypeInfo);
  v17 = *(_QWORD *)Method_FavoriteChangeComponent_OnClickServant__;
  *(_QWORD *)(v16 + 40) = Method_FavoriteChangeComponent_OnClickServant__;
  *(_QWORD *)(v16 + 16) = v17;
  *(_QWORD *)(v16 + 32) = v14;
  sub_B5D560(v16 + 32);
  if ( !favoriteChangeManager )
    goto LABEL_18;
  FavoriteChangeListViewManager__SetMode(
    favoriteChangeManager,
    2,
    (FavoriteChangeListViewManager_CallbackFunc_o *)v16,
    0LL);
}