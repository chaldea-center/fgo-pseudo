void __fastcall ServantFrameShortDlgComponent___ctor(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FC776 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FC776 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantFrameShortDlgComponent__Callback(
        ServantFrameShortDlgComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantFrameShortDlgComponent_CallbackFunc_o *v9; // x20
  struct ServantFrameShortDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ServantFrameShortDlgComponent_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall ServantFrameShortDlgComponent__Close(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFrameShortDlgComponent__Close_29603136(this, 0LL, v2);
}


void __fastcall ServantFrameShortDlgComponent__Close_29603136(
        ServantFrameShortDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FC770 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ServantFrameShortDlgComponent_EndClose__, v10);
    byte_40FC770 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall ServantFrameShortDlgComponent__EndClose(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantFrameShortDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
  }
}


void __fastcall ServantFrameShortDlgComponent__EndOpen(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 0;
}


void __fastcall ServantFrameShortDlgComponent__Init(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *confirmTitleLabel; // x0
  UILabel_o *confirmDetailLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FC76E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FC76E = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmDetailLabel = this->fields.confirmDetailLabel) == 0LL)
    || (UILabel__set_text(confirmDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantFrameShortDlgComponent__OnClickCancel(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AvalonSceneManager_o *Instance; // x0
  const MethodInfo *v6; // x2

  if ( (byte_40FC774 & 1) == 0 )
  {
    sub_B16FFC(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FC774 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_18B4A40 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 3, v6);
}


void __fastcall ServantFrameShortDlgComponent__OnClickPwUp(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AvalonSceneManager_o *Instance; // x0
  const MethodInfo *v6; // x2

  if ( (byte_40FC771 & 1) == 0 )
  {
    sub_B16FFC(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FC771 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    1,
    (const MethodInfo_18B4A40 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 0, v6);
}


void __fastcall ServantFrameShortDlgComponent__OnClickSell(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AvalonSceneManager_o *Instance; // x0
  const MethodInfo *v6; // x2

  if ( (byte_40FC772 & 1) == 0 )
  {
    sub_B16FFC(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FC772 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    1,
    (const MethodInfo_18B4A40 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 2, v6);
}


void __fastcall ServantFrameShortDlgComponent__OnClickWarehouse(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AvalonSceneManager_o *Instance; // x0
  const MethodInfo *v6; // x2

  if ( (byte_40FC773 & 1) == 0 )
  {
    sub_B16FFC(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FC773 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    1,
    (const MethodInfo_18B4A40 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 1, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFrameShortDlgComponent__OpenShortSvt(
        ServantFrameShortDlgComponent_o *this,
        int32_t haveNum,
        int32_t maxNum,
        int32_t type,
        bool isQuest,
        ServantFrameShortDlgComponent_CallbackFunc_o *callback,
        int32_t eventType,
        const MethodInfo *method)
{
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
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_o *v52; // x22
  System_String_o *v53; // x23
  System_Int32_array **v54; // x28
  System_String_o *v55; // x0
  __int64 *v56; // x8
  __int64 *v57; // x8
  System_String_o *v58; // x0
  System_Int32_array **v59; // x23
  __int64 *v60; // x8
  __int64 *v61; // x8
  WebViewManager_o *Instance; // x0
  ConstantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t v64; // w0
  int32_t v65; // w24
  System_String_o *v66; // x21
  __int64 v67; // x2
  __int64 v68; // x0
  __int64 v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Object_array *v76; // x27
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x24
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x23
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x23
  BattleServantConfConponent_o *v100; // x0
  __int64 v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x23
  __int64 v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Int32_array **v134; // x23
  System_String_o *v135; // x25
  UnityEngine_Object_o *confirmTitleLabel; // x21
  UILabel_o *v137; // x0
  System_String_o *v138; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x21
  UnityEngine_Component_o *v140; // x0
  UnityEngine_GameObject_o *v141; // x0
  UILabel_o *v142; // x0
  System_String_o *v143; // x1
  UnityEngine_Object_o *pwUpBtnLb; // x21
  UnityEngine_Component_o *v145; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v148; // x0
  UILabel_o *v149; // x0
  UnityEngine_Object_o *sellBtnLb; // x21
  UnityEngine_Component_o *v151; // x0
  UnityEngine_Transform_o *v152; // x0
  UnityEngine_Component_o *v153; // x0
  UnityEngine_GameObject_o *v154; // x0
  UILabel_o *v155; // x0
  UnityEngine_Object_o *warehouseBtnLb; // x21
  UnityEngine_Component_o *v157; // x0
  UnityEngine_Transform_o *v158; // x0
  UnityEngine_Component_o *v159; // x0
  UnityEngine_GameObject_o *v160; // x0
  UILabel_o *v161; // x0
  UnityEngine_Object_o *cancelBtnLb; // x21
  UnityEngine_Component_o *v163; // x0
  UnityEngine_Transform_o *v164; // x0
  UnityEngine_Component_o *v165; // x0
  UnityEngine_GameObject_o *v166; // x0
  UILabel_o *v167; // x21
  System_String_o *v168; // x0
  UnityEngine_Object_o *sellBtnCommandCodeLb; // x21
  UnityEngine_Component_o *v170; // x0
  UnityEngine_Transform_o *v171; // x0
  UnityEngine_Component_o *v172; // x0
  UnityEngine_GameObject_o *v173; // x0
  UILabel_o *v174; // x0
  UnityEngine_Object_o *cancelBtnCommandCodeLb; // x21
  UnityEngine_Component_o *v176; // x0
  UnityEngine_Transform_o *v177; // x0
  UnityEngine_Component_o *v178; // x0
  UnityEngine_GameObject_o *v179; // x0
  UILabel_o *v180; // x21
  System_String_o *v181; // x0
  UnityEngine_Object_o *confirmDetailCommandCodeLabel; // x21
  __int64 v183; // x1
  __int64 v184; // x2
  __int64 v185; // x3
  __int64 v186; // x4
  UnityEngine_Component_o *v187; // x0
  UnityEngine_GameObject_o *v188; // x0
  UILabel_o *v189; // x0
  System_String_o *v190; // x1
  System_Action_o *v191; // x20
  System_String_o *v192; // [xsp+8h] [xbp-78h]
  System_String_o *value; // [xsp+10h] [xbp-70h]
  System_String_o *v194; // [xsp+18h] [xbp-68h]
  int32_t v195; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t v196; // [xsp+28h] [xbp-58h] BYREF
  int32_t v197; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_40FC76F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&haveNum);
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantMaster___, v15);
    sub_B16FFC(&int_TypeInfo, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&object___TypeInfo, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&Method_ServantFrameShortDlgComponent_EndOpen__, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&StringLiteral_12165/*"SHORT_SERVANT_CANCEL"*/, v22);
    sub_B16FFC(&StringLiteral_12178/*"SHORT_SERVANT_FRAME_QUEST"*/, v23);
    sub_B16FFC(&StringLiteral_12172/*"SHORT_SERVANT_EQ_WAREHOUSE"*/, v24);
    sub_B16FFC(&StringLiteral_12176/*"SHORT_SERVANT_FRAME"*/, v25);
    sub_B16FFC(&StringLiteral_12177/*"SHORT_SERVANT_FRAME_LIMIT"*/, v26);
    sub_B16FFC(&StringLiteral_12164/*"SHORT_SERVANT_AREA_IMPROVE"*/, v27);
    sub_B16FFC(&StringLiteral_12180/*"SHORT_SERVANT_SELL"*/, v28);
    sub_B16FFC(&StringLiteral_12170/*"SHORT_SERVANT_EQ_COMBINE"*/, v29);
    sub_B16FFC(&StringLiteral_12179/*"SHORT_SERVANT_QUEST"*/, v30);
    sub_B16FFC(&StringLiteral_12167/*"SHORT_SERVANT_COMMAND_CODE"*/, v31);
    sub_B16FFC(&StringLiteral_12173/*"SHORT_SERVANT_EVENT_RECIPE"*/, v32);
    sub_B16FFC(&StringLiteral_6441/*"FRIEND_GACHA_ADD_LIMIT"*/, v33);
    sub_B16FFC(&StringLiteral_12171/*"SHORT_SERVANT_EQ_SELL"*/, v34);
    sub_B16FFC(&StringLiteral_12183/*"SHORT_SERVANT_WAREHOUSE"*/, v35);
    sub_B16FFC(&StringLiteral_12166/*"SHORT_SERVANT_COMBINE"*/, v36);
    sub_B16FFC(&StringLiteral_12174/*"SHORT_SERVANT_EXPEDITION"*/, v37);
    sub_B16FFC(&StringLiteral_12157/*"SHORT_DLG_TITLE"*/, v38);
    sub_B16FFC(&StringLiteral_12169/*"SHORT_SERVANT_EQUIP"*/, v39);
    sub_B16FFC(&StringLiteral_12155/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/, v40);
    sub_B16FFC(&StringLiteral_12168/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/, v41);
    sub_B16FFC(&StringLiteral_1/*""*/, v42);
    sub_B16FFC(&StringLiteral_12181/*"SHORT_SERVANT_SERVANT"*/, v43);
    sub_B16FFC(&StringLiteral_12182/*"SHORT_SERVANT_SUMMON"*/, v44);
    byte_40FC76F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_210;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.state = 1;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v192 = LocalizationManager__Get((System_String_o *)StringLiteral_12157/*"SHORT_DLG_TITLE"*/, 0LL);
  v52 = (System_String_o *)StringLiteral_1/*""*/;
  if ( type == 2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v54 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12167/*"SHORT_SERVANT_COMMAND_CODE"*/, 0LL);
    v53 = v52;
    v194 = LocalizationManager__Get((System_String_o *)StringLiteral_12168/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/, 0LL);
  }
  else
  {
    if ( type == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12169/*"SHORT_SERVANT_EQUIP"*/, 0LL);
      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12170/*"SHORT_SERVANT_EQ_COMBINE"*/, 0LL);
      v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12171/*"SHORT_SERVANT_EQ_SELL"*/, 0LL);
      v56 = &StringLiteral_12172/*"SHORT_SERVANT_EQ_WAREHOUSE"*/;
    }
    else
    {
      v53 = (System_String_o *)StringLiteral_1/*""*/;
      v54 = (System_Int32_array **)StringLiteral_1/*""*/;
      v194 = (System_String_o *)StringLiteral_1/*""*/;
      if ( type )
        goto LABEL_23;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12181/*"SHORT_SERVANT_SERVANT"*/, 0LL);
      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12166/*"SHORT_SERVANT_COMBINE"*/, 0LL);
      v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12180/*"SHORT_SERVANT_SELL"*/, 0LL);
      v56 = &StringLiteral_12183/*"SHORT_SERVANT_WAREHOUSE"*/;
    }
    v194 = v55;
    v52 = LocalizationManager__Get((System_String_o *)*v56, 0LL);
  }
LABEL_23:
  value = v53;
  if ( isQuest )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v57 = &StringLiteral_12179/*"SHORT_SERVANT_QUEST"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v57 = &StringLiteral_12182/*"SHORT_SERVANT_SUMMON"*/;
  }
  v58 = LocalizationManager__Get((System_String_o *)*v57, 0LL);
  if ( eventType == 3 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v60 = &StringLiteral_12173/*"SHORT_SERVANT_EVENT_RECIPE"*/;
  }
  else if ( eventType == 2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v60 = &StringLiteral_12164/*"SHORT_SERVANT_AREA_IMPROVE"*/;
  }
  else
  {
    v59 = (System_Int32_array **)v58;
    if ( eventType != 1 )
      goto LABEL_48;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v60 = &StringLiteral_12174/*"SHORT_SERVANT_EXPEDITION"*/;
  }
  v59 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)*v60, 0LL);
LABEL_48:
  if ( isQuest )
  {
    if ( type == 2 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v61 = &StringLiteral_12155/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v61 = &StringLiteral_12178/*"SHORT_SERVANT_FRAME_QUEST"*/;
    }
    v66 = LocalizationManager__Get((System_String_o *)*v61, 0LL);
    v68 = sub_B17014(object___TypeInfo, 4LL, v101);
    if ( !v68 )
      goto LABEL_210;
    v76 = (System_Object_array *)v68;
    if ( !v54 || (v68 = sub_B170BC(v54, *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
    {
      if ( !v76->max_length )
        goto LABEL_211;
      v76->m_Items[0] = (Il2CppObject *)v54;
      sub_B16F98((BattleServantConfConponent_o *)v76->m_Items, v54, v70, v102, v103, v104, v105, v106);
      if ( !v59 || (v68 = sub_B170BC(v59, v76->obj.klass->_1.element_class)) != 0 )
      {
        if ( v76->max_length <= 1 )
          goto LABEL_211;
        v76->m_Items[1] = (Il2CppObject *)v59;
        sub_B16F98((BattleServantConfConponent_o *)&v76->m_Items[1], v59, v70, v107, v108, v109, v110, v111);
        v197 = haveNum;
        v68 = j_il2cpp_value_box_0(int_TypeInfo, &v197);
        v117 = (System_Int32_array **)v68;
        if ( !v68 || (v68 = sub_B170BC(v68, v76->obj.klass->_1.element_class)) != 0 )
        {
          if ( v76->max_length <= 2 )
            goto LABEL_211;
          v76->m_Items[2] = (Il2CppObject *)v117;
          sub_B16F98((BattleServantConfConponent_o *)&v76->m_Items[2], v117, v70, v112, v113, v114, v115, v116);
          v196 = maxNum;
          v68 = j_il2cpp_value_box_0(int_TypeInfo, &v196);
          v99 = (System_Int32_array **)v68;
          if ( !v68 || (v68 = sub_B170BC(v68, v76->obj.klass->_1.element_class)) != 0 )
          {
            if ( v76->max_length > 3 )
              goto LABEL_111;
            goto LABEL_211;
          }
        }
      }
    }
    goto LABEL_212;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_210;
  MasterData_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_210;
  v64 = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_6441/*"FRIEND_GACHA_ADD_LIMIT"*/, 0LL);
  if ( v64 < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12176/*"SHORT_SERVANT_FRAME"*/, 0LL);
    v68 = sub_B17014(object___TypeInfo, 4LL, v118);
    if ( !v68 )
      goto LABEL_210;
    v76 = (System_Object_array *)v68;
    if ( !v54 || (v68 = sub_B170BC(v54, *(_QWORD *)(*(_QWORD *)v68 + 64LL))) != 0 )
    {
      if ( !v76->max_length )
        goto LABEL_211;
      v76->m_Items[0] = (Il2CppObject *)v54;
      sub_B16F98((BattleServantConfConponent_o *)v76->m_Items, v54, v70, v119, v120, v121, v122, v123);
      if ( !v59 || (v68 = sub_B170BC(v59, v76->obj.klass->_1.element_class)) != 0 )
      {
        if ( v76->max_length <= 1 )
          goto LABEL_211;
        v76->m_Items[1] = (Il2CppObject *)v59;
        sub_B16F98((BattleServantConfConponent_o *)&v76->m_Items[1], v59, v70, v124, v125, v126, v127, v128);
        v197 = haveNum;
        v68 = j_il2cpp_value_box_0(int_TypeInfo, &v197);
        v134 = (System_Int32_array **)v68;
        if ( !v68 || (v68 = sub_B170BC(v68, v76->obj.klass->_1.element_class)) != 0 )
        {
          if ( v76->max_length <= 2 )
            goto LABEL_211;
          v76->m_Items[2] = (Il2CppObject *)v134;
          sub_B16F98((BattleServantConfConponent_o *)&v76->m_Items[2], v134, v70, v129, v130, v131, v132, v133);
          v196 = maxNum;
          v68 = j_il2cpp_value_box_0(int_TypeInfo, &v196);
          v99 = (System_Int32_array **)v68;
          if ( !v68 || (v68 = sub_B170BC(v68, v76->obj.klass->_1.element_class)) != 0 )
          {
            if ( v76->max_length > 3 )
            {
LABEL_111:
              v76->m_Items[3] = (Il2CppObject *)v99;
              v100 = (BattleServantConfConponent_o *)&v76->m_Items[3];
              goto LABEL_112;
            }
LABEL_211:
            sub_B17100(v68, v69, v70);
            sub_B170A0();
          }
        }
      }
    }
LABEL_212:
    sub_B170F4(v68);
    sub_B170A0();
  }
  v65 = v64;
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12177/*"SHORT_SERVANT_FRAME_LIMIT"*/, 0LL);
  v68 = sub_B17014(object___TypeInfo, 5LL, v67);
  if ( !v68 )
    goto LABEL_210;
  v76 = (System_Object_array *)v68;
  if ( v54 )
  {
    v68 = sub_B170BC(v54, *(_QWORD *)(*(_QWORD *)v68 + 64LL));
    if ( !v68 )
      goto LABEL_212;
  }
  if ( !v76->max_length )
    goto LABEL_211;
  v76->m_Items[0] = (Il2CppObject *)v54;
  sub_B16F98((BattleServantConfConponent_o *)v76->m_Items, v54, v70, v71, v72, v73, v74, v75);
  v197 = v65;
  v68 = j_il2cpp_value_box_0(int_TypeInfo, &v197);
  v82 = (System_Int32_array **)v68;
  if ( v68 )
  {
    v68 = sub_B170BC(v68, v76->obj.klass->_1.element_class);
    if ( !v68 )
      goto LABEL_212;
  }
  if ( v76->max_length <= 1 )
    goto LABEL_211;
  v76->m_Items[1] = (Il2CppObject *)v82;
  sub_B16F98((BattleServantConfConponent_o *)&v76->m_Items[1], v82, v70, v77, v78, v79, v80, v81);
  if ( v59 )
  {
    v68 = sub_B170BC(v59, v76->obj.klass->_1.element_class);
    if ( !v68 )
      goto LABEL_212;
  }
  if ( v76->max_length <= 2 )
    goto LABEL_211;
  v76->m_Items[2] = (Il2CppObject *)v59;
  sub_B16F98((BattleServantConfConponent_o *)&v76->m_Items[2], v59, v70, v83, v84, v85, v86, v87);
  v196 = haveNum;
  v68 = j_il2cpp_value_box_0(int_TypeInfo, &v196);
  v93 = (System_Int32_array **)v68;
  if ( v68 )
  {
    v68 = sub_B170BC(v68, v76->obj.klass->_1.element_class);
    if ( !v68 )
      goto LABEL_212;
  }
  if ( v76->max_length <= 3 )
    goto LABEL_211;
  v76->m_Items[3] = (Il2CppObject *)v93;
  sub_B16F98((BattleServantConfConponent_o *)&v76->m_Items[3], v93, v70, v88, v89, v90, v91, v92);
  v195 = maxNum;
  v68 = j_il2cpp_value_box_0(int_TypeInfo, &v195);
  v99 = (System_Int32_array **)v68;
  if ( v68 )
  {
    v68 = sub_B170BC(v68, v76->obj.klass->_1.element_class);
    if ( !v68 )
      goto LABEL_212;
  }
  if ( v76->max_length <= 4 )
    goto LABEL_211;
  v76->m_Items[4] = (Il2CppObject *)v99;
  v100 = (BattleServantConfConponent_o *)&v76->m_Items[4];
LABEL_112:
  sub_B16F98(v100, v99, v70, v94, v95, v96, v97, v98);
  v135 = System_String__Format_43822456(v66, v76, 0LL);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    v137 = this->fields.confirmTitleLabel;
    if ( !v137 )
      goto LABEL_210;
    if ( v192 )
      v138 = v192;
    else
      v138 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v137, v138, 0LL);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0LL, 0LL) )
  {
    v140 = (UnityEngine_Component_o *)this->fields.confirmDetailLabel;
    if ( !v140 )
      goto LABEL_210;
    v141 = UnityEngine_Component__get_gameObject(v140, 0LL);
    if ( !v141 )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(v141, type != 2, 0LL);
    v142 = this->fields.confirmDetailLabel;
    if ( !v142 )
      goto LABEL_210;
    if ( v135 )
      v143 = v135;
    else
      v143 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v142, v143, 0LL);
  }
  pwUpBtnLb = (UnityEngine_Object_o *)this->fields.pwUpBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pwUpBtnLb, 0LL, 0LL) )
  {
    v145 = (UnityEngine_Component_o *)this->fields.pwUpBtnLb;
    if ( !v145 )
      goto LABEL_210;
    transform = UnityEngine_Component__get_transform(v145, 0LL);
    if ( !transform )
      goto LABEL_210;
    parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
    if ( !parent )
      goto LABEL_210;
    v148 = UnityEngine_Component__get_gameObject(parent, 0LL);
    if ( !v148 )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(v148, type != 2, 0LL);
    v149 = this->fields.pwUpBtnLb;
    if ( !v149 )
      goto LABEL_210;
    UILabel__set_text(v149, value, 0LL);
  }
  sellBtnLb = (UnityEngine_Object_o *)this->fields.sellBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sellBtnLb, 0LL, 0LL) )
  {
    v151 = (UnityEngine_Component_o *)this->fields.sellBtnLb;
    if ( !v151 )
      goto LABEL_210;
    v152 = UnityEngine_Component__get_transform(v151, 0LL);
    if ( !v152 )
      goto LABEL_210;
    v153 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v152, 0LL);
    if ( !v153 )
      goto LABEL_210;
    v154 = UnityEngine_Component__get_gameObject(v153, 0LL);
    if ( !v154 )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(v154, type != 2, 0LL);
    v155 = this->fields.sellBtnLb;
    if ( !v155 )
      goto LABEL_210;
    UILabel__set_text(v155, v194, 0LL);
  }
  warehouseBtnLb = (UnityEngine_Object_o *)this->fields.warehouseBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(warehouseBtnLb, 0LL, 0LL) )
  {
    v157 = (UnityEngine_Component_o *)this->fields.warehouseBtnLb;
    if ( !v157 )
      goto LABEL_210;
    v158 = UnityEngine_Component__get_transform(v157, 0LL);
    if ( !v158 )
      goto LABEL_210;
    v159 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v158, 0LL);
    if ( !v159 )
      goto LABEL_210;
    v160 = UnityEngine_Component__get_gameObject(v159, 0LL);
    if ( !v160 )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(v160, type != 2, 0LL);
    v161 = this->fields.warehouseBtnLb;
    if ( !v161 )
      goto LABEL_210;
    UILabel__set_text(v161, v52, 0LL);
  }
  cancelBtnLb = (UnityEngine_Object_o *)this->fields.cancelBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cancelBtnLb, 0LL, 0LL) )
  {
    v163 = (UnityEngine_Component_o *)this->fields.cancelBtnLb;
    if ( !v163 )
      goto LABEL_210;
    v164 = UnityEngine_Component__get_transform(v163, 0LL);
    if ( !v164 )
      goto LABEL_210;
    v165 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v164, 0LL);
    if ( !v165 )
      goto LABEL_210;
    v166 = UnityEngine_Component__get_gameObject(v165, 0LL);
    if ( !v166 )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(v166, type != 2, 0LL);
    v167 = this->fields.cancelBtnLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v168 = LocalizationManager__Get((System_String_o *)StringLiteral_12165/*"SHORT_SERVANT_CANCEL"*/, 0LL);
    if ( !v167 )
      goto LABEL_210;
    UILabel__set_text(v167, v168, 0LL);
  }
  sellBtnCommandCodeLb = (UnityEngine_Object_o *)this->fields.sellBtnCommandCodeLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sellBtnCommandCodeLb, 0LL, 0LL) )
  {
    v170 = (UnityEngine_Component_o *)this->fields.sellBtnCommandCodeLb;
    if ( !v170 )
      goto LABEL_210;
    v171 = UnityEngine_Component__get_transform(v170, 0LL);
    if ( !v171 )
      goto LABEL_210;
    v172 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v171, 0LL);
    if ( !v172 )
      goto LABEL_210;
    v173 = UnityEngine_Component__get_gameObject(v172, 0LL);
    if ( !v173 )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(v173, type == 2, 0LL);
    v174 = this->fields.sellBtnCommandCodeLb;
    if ( !v174 )
      goto LABEL_210;
    UILabel__set_text(v174, v194, 0LL);
  }
  cancelBtnCommandCodeLb = (UnityEngine_Object_o *)this->fields.cancelBtnCommandCodeLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cancelBtnCommandCodeLb, 0LL, 0LL) )
  {
    v176 = (UnityEngine_Component_o *)this->fields.cancelBtnCommandCodeLb;
    if ( !v176 )
      goto LABEL_210;
    v177 = UnityEngine_Component__get_transform(v176, 0LL);
    if ( !v177 )
      goto LABEL_210;
    v178 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v177, 0LL);
    if ( !v178 )
      goto LABEL_210;
    v179 = UnityEngine_Component__get_gameObject(v178, 0LL);
    if ( !v179 )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(v179, type == 2, 0LL);
    v180 = this->fields.cancelBtnCommandCodeLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v181 = LocalizationManager__Get((System_String_o *)StringLiteral_12165/*"SHORT_SERVANT_CANCEL"*/, 0LL);
    if ( !v180 )
      goto LABEL_210;
    UILabel__set_text(v180, v181, 0LL);
  }
  confirmDetailCommandCodeLabel = (UnityEngine_Object_o *)this->fields.confirmDetailCommandCodeLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(confirmDetailCommandCodeLabel, 0LL, 0LL) )
  {
    v187 = (UnityEngine_Component_o *)this->fields.confirmDetailCommandCodeLabel;
    if ( v187 )
    {
      v188 = UnityEngine_Component__get_gameObject(v187, 0LL);
      if ( v188 )
      {
        UnityEngine_GameObject__SetActive(v188, type == 2, 0LL);
        v189 = this->fields.confirmDetailCommandCodeLabel;
        if ( v189 )
        {
          if ( v135 )
            v190 = v135;
          else
            v190 = (System_String_o *)StringLiteral_1/*""*/;
          UILabel__set_text(v189, v190, 0LL);
          goto LABEL_209;
        }
      }
    }
LABEL_210:
    sub_B170D4();
  }
LABEL_209:
  v191 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v183, v184, v185, v186);
  System_Action___ctor(v191, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v191, 0, 0LL);
}


void __fastcall ServantFrameShortDlgComponent__add_callbackFunc(
        ServantFrameShortDlgComponent_o *this,
        ServantFrameShortDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantFrameShortDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantFrameShortDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantFrameShortDlgComponent_o *v11; // x0
  ServantFrameShortDlgComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FC76C & 1) == 0 )
  {
    sub_B16FFC(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40FC76C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantFrameShortDlgComponent_CallbackFunc_c *)v8->klass != ServantFrameShortDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  ServantFrameShortDlgComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ServantFrameShortDlgComponent__get_closeBtnPath(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FC775 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4204/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/, method);
    byte_40FC775 = 1;
  }
  return (System_String_o *)StringLiteral_4204/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/;
}


void __fastcall ServantFrameShortDlgComponent__remove_callbackFunc(
        ServantFrameShortDlgComponent_o *this,
        ServantFrameShortDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantFrameShortDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantFrameShortDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantFrameShortDlgComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FC76D & 1) == 0 )
  {
    sub_B16FFC(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40FC76D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantFrameShortDlgComponent_CallbackFunc_c *)v8->klass != ServantFrameShortDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  ServantFrameShortDlgComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFrameShortDlgComponent_CallbackFunc___ctor(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantFrameShortDlgComponent_CallbackFunc__BeginInvoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_40F7632 & 1) == 0 )
  {
    sub_B16FFC(&ServantFrameShortDlgComponent_resultClicked_TypeInfo, *(_QWORD *)&result);
    byte_40F7632 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantFrameShortDlgComponent_resultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall ServantFrameShortDlgComponent_CallbackFunc__EndInvoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFrameShortDlgComponent_CallbackFunc__Invoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  ServantFrameShortDlgComponent_CallbackFunc_o **v6; // x25
  __int64 v7; // x26
  unsigned int v8; // w23
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned int v11; // w22
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  ServantFrameShortDlgComponent_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(unsigned int *, __int64); // x23
  char v22; // w23
  char v23; // w0
  unsigned int v24; // w23
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  unsigned int v30; // [xsp+4h] [xbp-4Ch] BYREF
  ServantFrameShortDlgComponent_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v30 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v31;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (ServantFrameShortDlgComponent_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(unsigned int *, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int *)v30, v20);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v19 )
    {
      v21(&v30 - 4, v20);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        v24 = v30;
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v26, v27);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, v24, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v10 = *v19;
          v11 = v30;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v10 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, v11, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            v30,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, v30, v20);
    goto LABEL_38;
  }
}