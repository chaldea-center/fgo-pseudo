void __fastcall ServantFrameShortDlgComponent___ctor(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EADB2 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EADB2 = 1;
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ServantFrameShortDlgComponent_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall ServantFrameShortDlgComponent__Close(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFrameShortDlgComponent__Close_29341372(this, 0LL, v2);
}


void __fastcall ServantFrameShortDlgComponent__Close_29341372(
        ServantFrameShortDlgComponent_o *this,
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
  System_Action_o *v13; // x20

  if ( (byte_42EADAC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantFrameShortDlgComponent_EndClose__, v10, v11, v12);
    byte_42EADAC = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall ServantFrameShortDlgComponent__EndClose(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantFrameShortDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall ServantFrameShortDlgComponent__EndOpen(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 0;
}


void __fastcall ServantFrameShortDlgComponent__Init(ServantFrameShortDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *confirmTitleLabel; // x0

  if ( (byte_42EADAA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EADAA = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = this->fields.confirmDetailLabel) == 0LL)
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(confirmTitleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantFrameShortDlgComponent__OnClickCancel(
        ServantFrameShortDlgComponent_o *this,
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
  AvalonSceneManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EADB0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EADB0 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v12);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1AD57AC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 3, v13);
}


void __fastcall ServantFrameShortDlgComponent__OnClickPwUp(
        ServantFrameShortDlgComponent_o *this,
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
  AvalonSceneManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EADAD & 1) == 0 )
  {
    sub_B5D5C4(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EADAD = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v12);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    1,
    (const MethodInfo_1AD57AC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 0, v13);
}


void __fastcall ServantFrameShortDlgComponent__OnClickSell(
        ServantFrameShortDlgComponent_o *this,
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
  AvalonSceneManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EADAE & 1) == 0 )
  {
    sub_B5D5C4(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EADAE = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v12);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    1,
    (const MethodInfo_1AD57AC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 2, v13);
}


void __fastcall ServantFrameShortDlgComponent__OnClickWarehouse(
        ServantFrameShortDlgComponent_o *this,
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
  AvalonSceneManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EADAF & 1) == 0 )
  {
    sub_B5D5C4(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EADAF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v12);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    1,
    (const MethodInfo_1AD57AC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
  ServantFrameShortDlgComponent__Callback(this, 1, v13);
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
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v106; // x1
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_String_o *v113; // x22
  System_String_o *v114; // x23
  System_Int32_array **v115; // x28
  System_String_o *v116; // x0
  __int64 *v117; // x8
  __int64 *v118; // x8
  System_String_o *v119; // x0
  System_Int32_array **v120; // x23
  __int64 *v121; // x8
  __int64 *v122; // x8
  int32_t v123; // w0
  int32_t v124; // w24
  System_String_o *v125; // x21
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Object_array *v132; // x27
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **v139; // x24
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  System_Int32_array **v152; // x23
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  System_Int32_array **v159; // x23
  BattleServantConfConponent_o *v160; // x0
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  System_Int32_array **v179; // x23
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  System_String_array **v192; // x2
  System_String_array **v193; // x3
  System_Boolean_array **v194; // x4
  System_Int32_array **v195; // x5
  System_Int32_array *v196; // x6
  System_Int32_array *v197; // x7
  System_Int32_array **v198; // x23
  System_String_o *v199; // x25
  UnityEngine_Object_o *confirmTitleLabel; // x21
  System_String_o *v201; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x21
  System_String_o *v203; // x1
  UnityEngine_Object_o *pwUpBtnLb; // x21
  UnityEngine_Object_o *sellBtnLb; // x21
  UnityEngine_Object_o *warehouseBtnLb; // x21
  UnityEngine_Object_o *cancelBtnLb; // x21
  UILabel_o *v208; // x21
  UnityEngine_Object_o *sellBtnCommandCodeLb; // x21
  UnityEngine_Object_o *cancelBtnCommandCodeLb; // x21
  UILabel_o *v211; // x21
  UnityEngine_Object_o *confirmDetailCommandCodeLabel; // x21
  System_String_o *v213; // x1
  System_Action_o *v214; // x20
  __int64 v215; // x0
  __int64 v216; // x0
  System_String_o *v217; // [xsp+8h] [xbp-78h]
  System_String_o *value; // [xsp+10h] [xbp-70h]
  System_String_o *v219; // [xsp+18h] [xbp-68h]
  int32_t v220; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t v221; // [xsp+28h] [xbp-58h] BYREF
  int32_t v222; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42EADAB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, haveNum, maxNum, *(_QWORD *)&type);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantMaster___, v15, v16, v17);
    sub_B5D5C4(&int_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&object___TypeInfo, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_ServantFrameShortDlgComponent_EndOpen__, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_12365/*"SHORT_SERVANT_CANCEL"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_12378/*"SHORT_SERVANT_FRAME_QUEST"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_12372/*"SHORT_SERVANT_EQ_WAREHOUSE"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_12376/*"SHORT_SERVANT_FRAME"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_12377/*"SHORT_SERVANT_FRAME_LIMIT"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_12364/*"SHORT_SERVANT_AREA_IMPROVE"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_12380/*"SHORT_SERVANT_SELL"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_12370/*"SHORT_SERVANT_EQ_COMBINE"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_12379/*"SHORT_SERVANT_QUEST"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_12367/*"SHORT_SERVANT_COMMAND_CODE"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_12373/*"SHORT_SERVANT_EVENT_RECIPE"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_6544/*"FRIEND_GACHA_ADD_LIMIT"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_12371/*"SHORT_SERVANT_EQ_SELL"*/, v72, v73, v74);
    sub_B5D5C4(&StringLiteral_12383/*"SHORT_SERVANT_WAREHOUSE"*/, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_12366/*"SHORT_SERVANT_COMBINE"*/, v78, v79, v80);
    sub_B5D5C4(&StringLiteral_12374/*"SHORT_SERVANT_EXPEDITION"*/, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_12357/*"SHORT_DLG_TITLE"*/, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_12369/*"SHORT_SERVANT_EQUIP"*/, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_12355/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/, v90, v91, v92);
    sub_B5D5C4(&StringLiteral_12368/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/, v93, v94, v95);
    sub_B5D5C4(&StringLiteral_1/*""*/, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_12381/*"SHORT_SERVANT_SERVANT"*/, v99, v100, v101);
    sub_B5D5C4(&StringLiteral_12382/*"SHORT_SERVANT_SUMMON"*/, v102, v103, v104);
    byte_42EADAB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_210;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  this->fields.state = 1;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v217 = LocalizationManager__Get((System_String_o *)StringLiteral_12357/*"SHORT_DLG_TITLE"*/, 0LL);
  v113 = (System_String_o *)StringLiteral_1/*""*/;
  if ( type == 2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v115 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12367/*"SHORT_SERVANT_COMMAND_CODE"*/, 0LL);
    v114 = v113;
    v219 = LocalizationManager__Get((System_String_o *)StringLiteral_12368/*"SHORT_SERVANT_COMMAND_CODE_SELL"*/, 0LL);
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
      v115 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12369/*"SHORT_SERVANT_EQUIP"*/, 0LL);
      v114 = LocalizationManager__Get((System_String_o *)StringLiteral_12370/*"SHORT_SERVANT_EQ_COMBINE"*/, 0LL);
      v116 = LocalizationManager__Get((System_String_o *)StringLiteral_12371/*"SHORT_SERVANT_EQ_SELL"*/, 0LL);
      v117 = &StringLiteral_12372/*"SHORT_SERVANT_EQ_WAREHOUSE"*/;
    }
    else
    {
      v114 = (System_String_o *)StringLiteral_1/*""*/;
      v115 = (System_Int32_array **)StringLiteral_1/*""*/;
      v219 = (System_String_o *)StringLiteral_1/*""*/;
      if ( type )
        goto LABEL_23;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v115 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12381/*"SHORT_SERVANT_SERVANT"*/, 0LL);
      v114 = LocalizationManager__Get((System_String_o *)StringLiteral_12366/*"SHORT_SERVANT_COMBINE"*/, 0LL);
      v116 = LocalizationManager__Get((System_String_o *)StringLiteral_12380/*"SHORT_SERVANT_SELL"*/, 0LL);
      v117 = &StringLiteral_12383/*"SHORT_SERVANT_WAREHOUSE"*/;
    }
    v219 = v116;
    v113 = LocalizationManager__Get((System_String_o *)*v117, 0LL);
  }
LABEL_23:
  value = v114;
  if ( isQuest )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v118 = &StringLiteral_12379/*"SHORT_SERVANT_QUEST"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v118 = &StringLiteral_12382/*"SHORT_SERVANT_SUMMON"*/;
  }
  v119 = LocalizationManager__Get((System_String_o *)*v118, 0LL);
  if ( eventType == 3 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v121 = &StringLiteral_12373/*"SHORT_SERVANT_EVENT_RECIPE"*/;
  }
  else if ( eventType == 2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v121 = &StringLiteral_12364/*"SHORT_SERVANT_AREA_IMPROVE"*/;
  }
  else
  {
    v120 = (System_Int32_array **)v119;
    if ( eventType != 1 )
      goto LABEL_48;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v121 = &StringLiteral_12374/*"SHORT_SERVANT_EXPEDITION"*/;
  }
  v120 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)*v121, 0LL);
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
      v122 = &StringLiteral_12355/*"SHORT_COMMAND_CODE_FRAME_QUEST"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v122 = &StringLiteral_12378/*"SHORT_SERVANT_FRAME_QUEST"*/;
    }
    v125 = LocalizationManager__Get((System_String_o *)*v122, 0LL);
    gameObject = (UnityEngine_GameObject_o *)sub_B5D5DC(object___TypeInfo, 4LL);
    if ( !gameObject )
      goto LABEL_210;
    v132 = (System_Object_array *)gameObject;
    if ( !v115
      || (gameObject = (UnityEngine_GameObject_o *)sub_B5D684(v115, gameObject->klass->_1.element_class)) != 0LL )
    {
      if ( !v132->max_length )
        goto LABEL_211;
      v132->m_Items[0] = (Il2CppObject *)v115;
      sub_B5D560((BattleServantConfConponent_o *)v132->m_Items, v115, v161, v162, v163, v164, v165, v166);
      if ( !v120
        || (gameObject = (UnityEngine_GameObject_o *)sub_B5D684(v120, v132->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v132->max_length <= 1 )
          goto LABEL_211;
        v132->m_Items[1] = (Il2CppObject *)v120;
        sub_B5D560((BattleServantConfConponent_o *)&v132->m_Items[1], v120, v167, v168, v169, v170, v171, v172);
        v222 = haveNum;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v222);
        v179 = (System_Int32_array **)gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_GameObject_o *)sub_B5D684(gameObject, v132->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v132->max_length <= 2 )
            goto LABEL_211;
          v132->m_Items[2] = (Il2CppObject *)v179;
          sub_B5D560((BattleServantConfConponent_o *)&v132->m_Items[2], v179, v173, v174, v175, v176, v177, v178);
          v221 = maxNum;
          gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v221);
          v159 = (System_Int32_array **)gameObject;
          if ( !gameObject
            || (gameObject = (UnityEngine_GameObject_o *)sub_B5D684(gameObject, v132->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v132->max_length > 3 )
              goto LABEL_111;
            goto LABEL_211;
          }
        }
      }
    }
    goto LABEL_212;
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_210;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !gameObject )
    goto LABEL_210;
  v123 = ConstantMaster__GetValue((ConstantMaster_o *)gameObject, (System_String_o *)StringLiteral_6544/*"FRIEND_GACHA_ADD_LIMIT"*/, 0LL);
  if ( v123 < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v125 = LocalizationManager__Get((System_String_o *)StringLiteral_12376/*"SHORT_SERVANT_FRAME"*/, 0LL);
    gameObject = (UnityEngine_GameObject_o *)sub_B5D5DC(object___TypeInfo, 4LL);
    if ( !gameObject )
      goto LABEL_210;
    v132 = (System_Object_array *)gameObject;
    if ( !v115
      || (gameObject = (UnityEngine_GameObject_o *)sub_B5D684(v115, gameObject->klass->_1.element_class)) != 0LL )
    {
      if ( !v132->max_length )
        goto LABEL_211;
      v132->m_Items[0] = (Il2CppObject *)v115;
      sub_B5D560((BattleServantConfConponent_o *)v132->m_Items, v115, v180, v181, v182, v183, v184, v185);
      if ( !v120
        || (gameObject = (UnityEngine_GameObject_o *)sub_B5D684(v120, v132->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v132->max_length <= 1 )
          goto LABEL_211;
        v132->m_Items[1] = (Il2CppObject *)v120;
        sub_B5D560((BattleServantConfConponent_o *)&v132->m_Items[1], v120, v186, v187, v188, v189, v190, v191);
        v222 = haveNum;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v222);
        v198 = (System_Int32_array **)gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_GameObject_o *)sub_B5D684(gameObject, v132->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v132->max_length <= 2 )
            goto LABEL_211;
          v132->m_Items[2] = (Il2CppObject *)v198;
          sub_B5D560((BattleServantConfConponent_o *)&v132->m_Items[2], v198, v192, v193, v194, v195, v196, v197);
          v221 = maxNum;
          gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v221);
          v159 = (System_Int32_array **)gameObject;
          if ( !gameObject
            || (gameObject = (UnityEngine_GameObject_o *)sub_B5D684(gameObject, v132->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v132->max_length > 3 )
            {
LABEL_111:
              v132->m_Items[3] = (Il2CppObject *)v159;
              v160 = (BattleServantConfConponent_o *)&v132->m_Items[3];
              goto LABEL_112;
            }
LABEL_211:
            v215 = sub_B5D6C8(gameObject);
            sub_B5D668(v215, 0LL);
          }
        }
      }
    }
LABEL_212:
    v216 = sub_B5D6BC(gameObject);
    sub_B5D668(v216, 0LL);
  }
  v124 = v123;
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v125 = LocalizationManager__Get((System_String_o *)StringLiteral_12377/*"SHORT_SERVANT_FRAME_LIMIT"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)sub_B5D5DC(object___TypeInfo, 5LL);
  if ( !gameObject )
    goto LABEL_210;
  v132 = (System_Object_array *)gameObject;
  if ( v115 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B5D684(v115, gameObject->klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_212;
  }
  if ( !v132->max_length )
    goto LABEL_211;
  v132->m_Items[0] = (Il2CppObject *)v115;
  sub_B5D560((BattleServantConfConponent_o *)v132->m_Items, v115, v126, v127, v128, v129, v130, v131);
  v222 = v124;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v222);
  v139 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B5D684(gameObject, v132->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_212;
  }
  if ( v132->max_length <= 1 )
    goto LABEL_211;
  v132->m_Items[1] = (Il2CppObject *)v139;
  sub_B5D560((BattleServantConfConponent_o *)&v132->m_Items[1], v139, v133, v134, v135, v136, v137, v138);
  if ( v120 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B5D684(v120, v132->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_212;
  }
  if ( v132->max_length <= 2 )
    goto LABEL_211;
  v132->m_Items[2] = (Il2CppObject *)v120;
  sub_B5D560((BattleServantConfConponent_o *)&v132->m_Items[2], v120, v140, v141, v142, v143, v144, v145);
  v221 = haveNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v221);
  v152 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B5D684(gameObject, v132->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_212;
  }
  if ( v132->max_length <= 3 )
    goto LABEL_211;
  v132->m_Items[3] = (Il2CppObject *)v152;
  sub_B5D560((BattleServantConfConponent_o *)&v132->m_Items[3], v152, v146, v147, v148, v149, v150, v151);
  v220 = maxNum;
  gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v220);
  v159 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_B5D684(gameObject, v132->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_212;
  }
  if ( v132->max_length <= 4 )
    goto LABEL_211;
  v132->m_Items[4] = (Il2CppObject *)v159;
  v160 = (BattleServantConfConponent_o *)&v132->m_Items[4];
LABEL_112:
  sub_B5D560(v160, v159, v153, v154, v155, v156, v157, v158);
  v199 = System_String__Format_44656512(v125, v132, 0LL);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_210;
    if ( v217 )
      v201 = v217;
    else
      v201 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v201, 0LL);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_210;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_210;
    if ( v199 )
      v203 = v199;
    else
      v203 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v203, 0LL);
  }
  pwUpBtnLb = (UnityEngine_Object_o *)this->fields.pwUpBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pwUpBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.pwUpBtnLb;
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.pwUpBtnLb;
    if ( !gameObject )
      goto LABEL_210;
    UILabel__set_text((UILabel_o *)gameObject, value, 0LL);
  }
  sellBtnLb = (UnityEngine_Object_o *)this->fields.sellBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sellBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnLb;
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnLb;
    if ( !gameObject )
      goto LABEL_210;
    UILabel__set_text((UILabel_o *)gameObject, v219, 0LL);
  }
  warehouseBtnLb = (UnityEngine_Object_o *)this->fields.warehouseBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(warehouseBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.warehouseBtnLb;
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.warehouseBtnLb;
    if ( !gameObject )
      goto LABEL_210;
    UILabel__set_text((UILabel_o *)gameObject, v113, 0LL);
  }
  cancelBtnLb = (UnityEngine_Object_o *)this->fields.cancelBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cancelBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelBtnLb;
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(gameObject, type != 2, 0LL);
    v208 = this->fields.cancelBtnLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12365/*"SHORT_SERVANT_CANCEL"*/, 0LL);
    if ( !v208 )
      goto LABEL_210;
    UILabel__set_text(v208, (System_String_o *)gameObject, 0LL);
  }
  sellBtnCommandCodeLb = (UnityEngine_Object_o *)this->fields.sellBtnCommandCodeLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sellBtnCommandCodeLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnCommandCodeLb;
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(gameObject, type == 2, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.sellBtnCommandCodeLb;
    if ( !gameObject )
      goto LABEL_210;
    UILabel__set_text((UILabel_o *)gameObject, v219, 0LL);
  }
  cancelBtnCommandCodeLb = (UnityEngine_Object_o *)this->fields.cancelBtnCommandCodeLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cancelBtnCommandCodeLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelBtnCommandCodeLb;
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
    if ( !gameObject )
      goto LABEL_210;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_210;
    UnityEngine_GameObject__SetActive(gameObject, type == 2, 0LL);
    v211 = this->fields.cancelBtnCommandCodeLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12365/*"SHORT_SERVANT_CANCEL"*/, 0LL);
    if ( !v211 )
      goto LABEL_210;
    UILabel__set_text(v211, (System_String_o *)gameObject, 0LL);
  }
  confirmDetailCommandCodeLabel = (UnityEngine_Object_o *)this->fields.confirmDetailCommandCodeLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(confirmDetailCommandCodeLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailCommandCodeLabel;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, type == 2, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailCommandCodeLabel;
        if ( gameObject )
        {
          if ( v199 )
            v213 = v199;
          else
            v213 = (System_String_o *)StringLiteral_1/*""*/;
          UILabel__set_text((UILabel_o *)gameObject, v213, 0LL);
          goto LABEL_209;
        }
      }
    }
LABEL_210:
    sub_B5D69C(gameObject, v106);
  }
LABEL_209:
  v214 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v214, (Il2CppObject *)this, Method_ServantFrameShortDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v214, 0, 0LL);
}


void __fastcall ServantFrameShortDlgComponent__add_callbackFunc(
        ServantFrameShortDlgComponent_o *this,
        ServantFrameShortDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct ServantFrameShortDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct ServantFrameShortDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ServantFrameShortDlgComponent_o *v12; // x0
  ServantFrameShortDlgComponent_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EADA8 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EADA8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (ServantFrameShortDlgComponent_CallbackFunc_c *)v9->klass != ServantFrameShortDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ServantFrameShortDlgComponent__remove_callbackFunc(v12, v13, v14);
}


System_String_o *__fastcall ServantFrameShortDlgComponent__get_closeBtnPath(
        ServantFrameShortDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EADB1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4293/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/, (_DWORD)method, v2, v3);
    byte_42EADB1 = 1;
  }
  return (System_String_o *)StringLiteral_4293/*"ConfirmWindow/ConfirmBntInfo/CancelButton"*/;
}


void __fastcall ServantFrameShortDlgComponent__remove_callbackFunc(
        ServantFrameShortDlgComponent_o *this,
        ServantFrameShortDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct ServantFrameShortDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct ServantFrameShortDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ServantFrameShortDlgComponent_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EADA9 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EADA9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (ServantFrameShortDlgComponent_CallbackFunc_c *)v9->klass != ServantFrameShortDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ServantFrameShortDlgComponent__Init(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFrameShortDlgComponent_CallbackFunc___ctor(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
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
  if ( (byte_42E5D60 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFrameShortDlgComponent_resultClicked_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5D60 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantFrameShortDlgComponent_resultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall ServantFrameShortDlgComponent_CallbackFunc__EndInvoke(
        ServantFrameShortDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned int v12; // w22
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  ServantFrameShortDlgComponent_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(unsigned int *, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  unsigned int v26; // w23
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+4h] [xbp-4Ch] BYREF
  ServantFrameShortDlgComponent_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v33;
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
      v19 = v6[v7];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(unsigned int *, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int *)v32, v21);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v20 )
    {
      v22(&v32 - 4, v21);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        v26 = v32;
        if ( (v24 & 1) != 0 )
        {
          v27 = *v20;
          v28 = *(_QWORD *)(v21 + 24);
          v29 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v28, v29, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, v26, v18);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v11 = *v20;
          v12 = v32;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v11 + 16LL * (int)(*v14 + v8) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, v12, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            v32,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, v32, v21);
    goto LABEL_38;
  }
}