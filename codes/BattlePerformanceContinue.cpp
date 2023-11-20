// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue___ctor(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  int v6; // s0
  int v8; // s1
  int v9; // s2
  float v10; // s4
  float v11; // s5
  float v12; // s6
  struct UnityEngine_Color_o v13; // [xsp+0h] [xbp-30h] BYREF
  struct UnityEngine_Color_o v14; // [xsp+10h] [xbp-20h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = 1051766961;
  v8 = 1051766961;
  v9 = 1051766961;
  *(_QWORD *)&v14.fields.r = 0LL;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v14);
  this->fields.spellBtnColor = v14;
  v15.fields.r = 0.38824;
  v13 = (struct UnityEngine_Color_o)0LL;
  v15.fields.g = 0.38824;
  v15.fields.b = 0.38824;
  UnityEngine_Color___ctor_40666012(v15, v10, v11, v12, (const MethodInfo *)&v13);
  this->fields.spellnowColor = v13;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceContinue__AttachStoneCountRefreshComponent(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_int__o *v10; // x21

  if ( (byte_40FC2DD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v3);
    sub_B16FFC(&Method_BattlePerformanceContinue__AttachStoneCountRefreshComponent_b__79_0__, v4);
    byte_40FC2DD = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v6, v7, v8, v9);
  System_Action_int____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__AttachStoneCountRefreshComponent_b__79_0__,
    (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v10, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__CallbackConfirmDialog(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC2D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B16FFC(&StringLiteral_4547, v4);
    byte_40FC2D0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL),
        BattlePerformanceContinue__closeContinueItem(this, v6),
        (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_4547, 0LL);
}


void __fastcall BattlePerformanceContinue__CheckContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  PlayMakerFSM_o *myFsm; // x0
  __int64 *v6; // x8

  if ( (byte_40FC2DB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9714, method);
    sub_B16FFC(&StringLiteral_9271, v3);
    byte_40FC2DB = 1;
  }
  BattlePerformanceContinue__ResetContinueItemInfo(this, method);
  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  if ( !BattleData__EnableContinueItem(data, 0LL) )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      v6 = &StringLiteral_9271;
      goto LABEL_9;
    }
LABEL_10:
    sub_B170D4();
  }
  myFsm = this->fields.myFsm;
  this->fields.IsContinueItem = 1;
  if ( !myFsm )
    goto LABEL_10;
  v6 = &StringLiteral_9714;
LABEL_9:
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v6, 0LL);
}


void __fastcall BattlePerformanceContinue__CheckDefenceTargetBroken(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleData_o *data; // x0
  struct BattlePerformance_o *perf; // x8
  UnityEngine_GameObject_o *fadeObject; // x0
  NGUIFader_o *Component_srcLineSprite; // x20
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  NGUIFader_OnFinished_o *v18; // x21
  PlayMakerFSM_o *myFsm; // x0
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC307 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceContinue__CheckDefenceTargetBroken_b__123_0__, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___, v3);
    sub_B16FFC(&NGUIFader_OnFinished_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_5612, v5);
    byte_40FC307 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  if ( BattleData__CheckDefenceTargetBroken(data, 0LL) )
  {
    perf = this->fields.perf;
    this->fields._isDefenceTargetBroken_k__BackingField = 1;
    if ( perf )
    {
      fadeObject = perf->fields.fadeObject;
      if ( fadeObject )
      {
        Component_srcLineSprite = (NGUIFader_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   fadeObject,
                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
        white = UnityEngine_Color__get_white(0LL);
        r = white.fields.r;
        g = white.fields.g;
        b = white.fields.b;
        a = white.fields.a;
        v18 = (NGUIFader_OnFinished_o *)sub_B170CC(NGUIFader_OnFinished_TypeInfo, v14, v15, v16, v17);
        NGUIFader_OnFinished___ctor(
          v18,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue__CheckDefenceTargetBroken_b__123_0__,
          0LL);
        if ( Component_srcLineSprite )
        {
          v21.fields.r = r;
          v21.fields.g = g;
          v21.fields.b = b;
          v21.fields.a = a;
          NGUIFader__FadeStart(Component_srcLineSprite, v21, 0.5, 0, v18, 0, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_B170D4();
  }
  myFsm = this->fields.myFsm;
  this->fields._isDefenceTargetBroken_k__BackingField = 0;
  if ( !myFsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5612, 0LL);
}


void __fastcall BattlePerformanceContinue__CloseGiveUp(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *giveUpWindow; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC2D6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9268, method);
    byte_40FC2D6 = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow || (UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9268, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceContinue__CoEndContinue(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FC309 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceContinue__CoEndContinue_d__126_TypeInfo, method);
    byte_40FC309 = 1;
  }
  v6 = sub_B170CC(BattlePerformanceContinue__CoEndContinue_d__126_TypeInfo, method, v2, v3, v4);
  BattlePerformanceContinue__CoEndContinue_d__126___ctor(
    (BattlePerformanceContinue__CoEndContinue_d__126_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattlePerformanceContinue__EndContinue(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0

  if ( this->fields._isDefenceTargetBroken_k__BackingField )
  {
    v3 = BattlePerformanceContinue__CoEndContinue(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  }
  this->fields._isDefenceTargetBroken_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__Initialize(
        BattlePerformanceContinue_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Component_o *window; // x0
  UnityEngine_Transform_o *transform; // x20
  int v30; // s0
  struct BattleWindowComponent_o *v33; // x0
  struct BattleWindowComponent_o *v34; // x0
  UnityEngine_Component_o *useCheckWindow; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *giveUpWindow; // x0
  UnityEngine_GameObject_o *commandspellObject; // x0
  UnityEngine_GameObject_o *stoneObject; // x0
  UnityEngine_GameObject_o *nostoneObject; // x0
  UnityEngine_GameObject_o *ContinueItemWindow; // x0
  UnityEngine_GameObject_o *bg; // x0
  UILabel_o *checkGiveUpLabel; // x20
  System_String_o *v44; // x0
  UILabel_o *checkUseCommandSpell; // x20
  System_String_o *v46; // x0
  UILabel_o *checkUseGem; // x20
  System_String_o *v48; // x0
  UILabel_o *checkUseBuyGem; // x19
  System_String_o *v50; // x0

  if ( (byte_40FC2D1 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, inperf);
    sub_B16FFC(&StringLiteral_2395, v12);
    sub_B16FFC(&StringLiteral_2384, v13);
    sub_B16FFC(&StringLiteral_2385, v14);
    sub_B16FFC(&StringLiteral_2488, v15);
    byte_40FC2D1 = 1;
  }
  this->fields.perf = inperf;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    (System_String_array **)indata,
    (System_String_array **)inlogic,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)indata,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.logic = inlogic;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.logic,
    (System_Int32_array **)inlogic,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  window = (UnityEngine_Component_o *)this->fields.window;
  if ( !window )
    goto LABEL_23;
  transform = UnityEngine_Component__get_transform(window, 0LL);
  *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v30, 0LL);
  v33 = this->fields.window;
  if ( !v33 )
    goto LABEL_23;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, Il2CppMethodPointer))v33->klass->vtable._7_setInitialPos.method)(
    v33,
    v33->klass->vtable._8_setInitialPosIfDefaultIsZero.methodPtr);
  v34 = this->fields.window;
  if ( !v34 )
    goto LABEL_23;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, Il2CppMethodPointer))v34->klass->vtable._9_setClose.method)(
    v34,
    v34->klass->vtable._10_Open.methodPtr);
  useCheckWindow = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !useCheckWindow )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject(useCheckWindow, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0LL);
  commandspellObject = this->fields.commandspellObject;
  if ( !commandspellObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(commandspellObject, 0, 0LL);
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(stoneObject, 0, 0LL);
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(nostoneObject, 0, 0LL);
  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(ContinueItemWindow, 0, 0LL);
  bg = this->fields.bg;
  if ( !bg )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(bg, 0, 0LL);
  checkGiveUpLabel = this->fields.checkGiveUpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_2488, 0LL);
  if ( !checkGiveUpLabel )
    goto LABEL_23;
  UILabel__set_text(checkGiveUpLabel, v44, 0LL);
  checkUseCommandSpell = this->fields.checkUseCommandSpell;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_2384, 0LL);
  if ( !checkUseCommandSpell
    || (UILabel__set_text(checkUseCommandSpell, v46, 0LL),
        checkUseGem = this->fields.checkUseGem,
        v48 = LocalizationManager__Get((System_String_o *)StringLiteral_2385, 0LL),
        !checkUseGem)
    || (UILabel__set_text(checkUseGem, v48, 0LL),
        checkUseBuyGem = this->fields.checkUseBuyGem,
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_2395, 0LL),
        !checkUseBuyGem) )
  {
LABEL_23:
    sub_B170D4();
  }
  UILabel__set_text(checkUseBuyGem, v50, 0LL);
}


void __fastcall BattlePerformanceContinue__OpenBrokenMessage(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x20
  System_String_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x22

  if ( (byte_40FC308 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattlePerformanceContinue__OpenBrokenMessage_b__124_0__, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_2406, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40FC308 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2406, 0LL);
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_BattlePerformanceContinue__OpenBrokenMessage_b__124_0__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenNotificationDialog(
    Instance,
    (System_String_o *)StringLiteral_1,
    v9,
    v14,
    -1,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0LL,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__OpenContinueItemWindow(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  UnityEngine_GameObject_o *ContinueItemWindow; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v24; // x20
  BattleData_o *data; // x0
  UILabel_o *ContinueCommandSpellNum; // x21
  System_String_o *v27; // x0
  System_String_o *v28; // x1
  UILabel_o *ContinueStoneNum; // x21
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  BattleData_o *v32; // x0
  BattleData_o *v33; // x0
  UILabel_o *ContinueItemNumLabel; // x21
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  BattleData_o *v37; // x0
  UISprite_o *ContinueItemSpr; // x21
  int32_t ContinueItemImageId; // w22
  BattleData_o *v40; // x0
  int32_t v41; // w0
  int v42; // w21
  UIWidget_o *Component_srcLineSprite; // x0
  bool v44; // cc
  UIWidget_o *v45; // x21
  int v46; // s0
  UnityEngine_GameObject_o *v50; // x0
  srcLineSprite_o *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 *v58; // x8
  UnityEngine_GameObject_o *ContinueItemBtn; // x0
  System_Int32_array **v60; // x1
  UILabel_o *ContinueItemBtnLabel; // x21
  System_String_o *v62; // x0
  UILabel_o *deadLine; // x21
  System_String_o *v64; // x0
  System_String_o *v65; // x22
  int64_t ContinueDeadLine; // x0
  Il2CppObject *RestTime; // x0
  System_String_o *v68; // x0
  UnityEngine_GameObject_o *ContinueCommandSpellBtn; // x0
  int32_t v70; // w21
  UIWidget_o *v71; // x0
  UIWidget_o *v72; // x21
  UnityEngine_GameObject_o *v73; // x0
  srcLineSprite_o *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  __int64 *v81; // x8
  int v82; // s0
  UnityEngine_GameObject_o *v86; // x0
  System_Int32_array **v87; // x1
  UILabel_o *ContinueCommandSpellBtnLabel; // x21
  System_String_o *v89; // x0
  int v90; // w9
  UILabel_o *ContinueStoneBtnLabel; // x20
  __int64 *v92; // x8
  System_String_o *v93; // x0
  const MethodInfo *v94; // x1
  UILabel_o *ContinueRetireBtnLabel; // x20
  System_String_o *v96; // x0
  const MethodInfo *v97; // x4
  System_String_o **v98; // x8
  struct BattleData_o *v99; // x8
  QuestEntity_o *quest_ent; // x0
  struct BattleData_o *v101; // x8
  QuestEntity_o *v102; // x0
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  UnityEngine_GameObject_o *v107; // x0
  UIWidget_o *v108; // x0
  UnityEngine_GameObject_o *v109; // x0
  srcLineSprite_o *v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x1
  UIWidget_o *v118; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v120; // x21
  int32_t ContinueItemNum; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t stone; // [xsp+8h] [xbp-38h] BYREF
  int32_t OverwriteCommandSpellContinue; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FC2DC & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_BattlePerformanceContinue_endOpenContinueItem__, v3);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_9714, v9);
    sub_B16FFC(&StringLiteral_2383, v10);
    sub_B16FFC(&StringLiteral_5481, v11);
    sub_B16FFC(&StringLiteral_2390, v12);
    sub_B16FFC(&StringLiteral_2382, v13);
    sub_B16FFC(&StringLiteral_2400, v14);
    sub_B16FFC(&StringLiteral_9715, v15);
    sub_B16FFC(&StringLiteral_23395, v16);
    sub_B16FFC(&StringLiteral_2387, v17);
    sub_B16FFC(&StringLiteral_2391, v18);
    sub_B16FFC(&StringLiteral_2392, v19);
    sub_B16FFC(&StringLiteral_1, v20);
    sub_B16FFC(&StringLiteral_2396, v21);
    byte_40FC2DC = 1;
  }
  OverwriteCommandSpellContinue = 0;
  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive(ContinueItemWindow, 1, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_82;
  v24 = SelfUserGame;
  OverwriteCommandSpellContinue = BattleData__CheckCurrentTemporaryCommandSpell(this->fields.data, SelfUserGame, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_82;
  OverwriteCommandSpellContinue = BattleData__GetOverwriteCommandSpellContinue(data, OverwriteCommandSpellContinue, 0LL);
  ContinueCommandSpellNum = this->fields.ContinueCommandSpellNum;
  v27 = System_Int32__ToString((int32_t)&OverwriteCommandSpellContinue, 0LL);
  if ( !ContinueCommandSpellNum )
    goto LABEL_82;
  v28 = v27 ? v27 : (System_String_o *)StringLiteral_1;
  UILabel__set_text(ContinueCommandSpellNum, v28, 0LL);
  if ( !v24 )
    goto LABEL_82;
  ContinueStoneNum = this->fields.ContinueStoneNum;
  stone = v24->fields.stone;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
  v31 = System_String__Format((System_String_o *)StringLiteral_23395, v30, 0LL);
  if ( !ContinueStoneNum )
    goto LABEL_82;
  UILabel__set_text(ContinueStoneNum, v31, 0LL);
  v32 = this->fields.data;
  if ( !v32 )
    goto LABEL_82;
  BattleData__UpdateContinueItemInfo(v32, 0LL);
  v33 = this->fields.data;
  if ( !v33 )
    goto LABEL_82;
  ContinueItemNumLabel = this->fields.ContinueItemNumLabel;
  ContinueItemNum = BattleData__GetContinueItemNum(v33, 0LL);
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ContinueItemNum);
  v36 = System_String__Format((System_String_o *)StringLiteral_23395, v35, 0LL);
  if ( !ContinueItemNumLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueItemNumLabel, v36, 0LL);
  v37 = this->fields.data;
  if ( !v37 )
    goto LABEL_82;
  ContinueItemSpr = this->fields.ContinueItemSpr;
  ContinueItemImageId = BattleData__GetContinueItemImageId(v37, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(ContinueItemSpr, ContinueItemImageId, 0LL);
  v40 = this->fields.data;
  if ( !v40 )
    goto LABEL_82;
  v41 = BattleData__GetContinueItemNum(v40, 0LL);
  if ( !this->fields.ContinueItemBtn )
    goto LABEL_82;
  v42 = v41;
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            this->fields.ContinueItemBtn,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v44 = v42 < 1;
  v45 = Component_srcLineSprite;
  if ( v44 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_82;
    UIWidget__set_color(Component_srcLineSprite, this->fields.spellBtnColor, 0LL);
    ContinueItemBtn = this->fields.ContinueItemBtn;
    if ( !ContinueItemBtn )
      goto LABEL_82;
    v51 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
            ContinueItemBtn,
            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !v51 )
      goto LABEL_82;
    v58 = &StringLiteral_5481;
  }
  else
  {
    *(UnityEngine_Color_o *)&v46 = UnityEngine_Color__get_white(0LL);
    if ( !v45 )
      goto LABEL_82;
    UIWidget__set_color(v45, *(UnityEngine_Color_o *)&v46, 0LL);
    v50 = this->fields.ContinueItemBtn;
    if ( !v50 )
      goto LABEL_82;
    v51 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
            v50,
            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !v51 )
      goto LABEL_82;
    v58 = &StringLiteral_9715;
  }
  v60 = (System_Int32_array **)*v58;
  *(_QWORD *)&v51->fields.mtIsUpdate = *v58;
  sub_B16F98((BattleServantConfConponent_o *)&v51->fields.mtIsUpdate, v60, v52, v53, v54, v55, v56, v57);
  ContinueItemBtnLabel = this->fields.ContinueItemBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_2387, 0LL);
  if ( !ContinueItemBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueItemBtnLabel, v62, 0LL);
  deadLine = this->fields.deadLine;
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_2390, 0LL);
  if ( !this->fields.data )
    goto LABEL_82;
  v65 = v64;
  ContinueDeadLine = BattleData__GetContinueDeadLine(this->fields.data, 0LL);
  RestTime = (Il2CppObject *)LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
  v68 = System_String__Format(v65, RestTime, 0LL);
  if ( !deadLine )
    goto LABEL_82;
  UILabel__set_text(deadLine, v68, 0LL);
  ContinueCommandSpellBtn = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueCommandSpellBtn )
    goto LABEL_82;
  v70 = OverwriteCommandSpellContinue;
  v71 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        ContinueCommandSpellBtn,
                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v44 = v70 < 3;
  v72 = v71;
  if ( v44 )
  {
    if ( !v71 )
      goto LABEL_82;
    UIWidget__set_color(v71, this->fields.spellBtnColor, 0LL);
    v73 = this->fields.ContinueCommandSpellBtn;
    if ( !v73 )
      goto LABEL_82;
    v74 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
            v73,
            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !v74 )
      goto LABEL_82;
    v81 = &StringLiteral_5481;
  }
  else
  {
    *(UnityEngine_Color_o *)&v82 = UnityEngine_Color__get_white(0LL);
    if ( !v72 )
      goto LABEL_82;
    UIWidget__set_color(v72, *(UnityEngine_Color_o *)&v82, 0LL);
    v86 = this->fields.ContinueCommandSpellBtn;
    if ( !v86 )
      goto LABEL_82;
    v74 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
            v86,
            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !v74 )
      goto LABEL_82;
    v81 = &StringLiteral_9714;
  }
  v87 = (System_Int32_array **)*v81;
  *(_QWORD *)&v74->fields.mtIsUpdate = *v81;
  sub_B16F98((BattleServantConfConponent_o *)&v74->fields.mtIsUpdate, v87, v75, v76, v77, v78, v79, v80);
  ContinueCommandSpellBtnLabel = this->fields.ContinueCommandSpellBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v89 = LocalizationManager__Get((System_String_o *)StringLiteral_2400, 0LL);
  if ( !ContinueCommandSpellBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueCommandSpellBtnLabel, v89, 0LL);
  v90 = v24->fields.stone;
  ContinueStoneBtnLabel = this->fields.ContinueStoneBtnLabel;
  if ( v90 < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v92 = &StringLiteral_2382;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v92 = &StringLiteral_2383;
  }
  v93 = LocalizationManager__Get((System_String_o *)*v92, 0LL);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueStoneBtnLabel, v93, 0LL);
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, v94);
  ContinueRetireBtnLabel = this->fields.ContinueRetireBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_2396, 0LL);
  if ( !ContinueRetireBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueRetireBtnLabel, v96, 0LL);
  v98 = (System_String_o **)(OverwriteCommandSpellContinue >= 3 ? &StringLiteral_2391 : &StringLiteral_2392);
  BattlePerformanceContinue__SetContinueMessage(this, this->fields.ContinueLabel, *v98, 0x80000000, v97);
  v99 = this->fields.data;
  if ( !v99 )
    goto LABEL_82;
  quest_ent = v99->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_82;
  if ( QuestEntity__HasFlag(quest_ent, 0x400000000LL, 0LL) )
    goto LABEL_74;
  v101 = this->fields.data;
  if ( !v101 || (v102 = v101->fields.quest_ent) == 0LL )
LABEL_82:
    sub_B170D4();
  if ( !QuestEntity__HasFlag(v102, 0x100000000LL, 0LL) )
    goto LABEL_80;
LABEL_74:
  v107 = this->fields.ContinueCommandSpellBtn;
  if ( !v107 )
    goto LABEL_82;
  v108 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         v107,
                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !v108 )
    goto LABEL_82;
  UIWidget__set_color(v108, this->fields.spellBtnColor, 0LL);
  v109 = this->fields.ContinueCommandSpellBtn;
  if ( !v109 )
    goto LABEL_82;
  v110 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
           v109,
           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
  if ( !v110 )
    goto LABEL_82;
  v117 = (System_Int32_array **)StringLiteral_5481;
  *(_QWORD *)&v110->fields.mtIsUpdate = StringLiteral_5481;
  sub_B16F98((BattleServantConfConponent_o *)&v110->fields.mtIsUpdate, v117, v111, v112, v113, v114, v115, v116);
  v118 = (UIWidget_o *)this->fields.ContinueCommandSpellNum;
  if ( !v118 )
    goto LABEL_82;
  UIWidget__set_color(v118, this->fields.spellnowColor, 0LL);
LABEL_80:
  window = this->fields.window;
  v120 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v103, v104, v105, v106);
  BattleWindowComponent_EndCall___ctor(
    v120,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endOpenContinueItem__,
    0LL);
  if ( !window )
    goto LABEL_82;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v120,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__OpenGiveUp(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *giveUpWindow; // x0
  UnityEngine_Transform_o *transform; // x0
  UIWidget_o *giveUpBg; // x0
  UnityEngine_Component_o *giveUpTitle; // x0
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Component_o *checkGiveUpLabel; // x0
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_Component_o *giveUpContinueItemLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *giveUpOkBtn; // x0
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_GameObject_o *giveUpCancelBtn; // x0
  UnityEngine_Transform_o *v23; // x0
  UnityEngine_GameObject_o *giveUpContinueItemRoot; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct BattleData_o *data; // x8
  struct BattleEntity_o *battle_ent; // x8
  QuestEntity_o *Entity; // x20
  BattleData_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_Transform_o *v32; // x0
  UIWidget_o *v33; // x0
  UnityEngine_Component_o *v34; // x0
  UnityEngine_Transform_o *v35; // x0
  UnityEngine_Component_o *v36; // x0
  UnityEngine_Transform_o *v37; // x0
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_Transform_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Transform_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  BattleData_o *v45; // x0
  UILabel_o *giveUpContinueItemNum; // x20
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  BattleData_o *v49; // x0
  UISprite_o *giveUpContinueItemSpr; // x20
  int32_t ContinueItemImageId; // w21
  UILabel_o *v52; // x20
  LocalizationManager_c *v53; // x0
  bool HasFlag; // w0
  __int64 *v55; // x8
  System_String_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  int32_t ContinueItemNum; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC2D5 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_2488, v8);
    sub_B16FFC(&StringLiteral_23395, v9);
    sub_B16FFC(&StringLiteral_2489, v10);
    byte_40FC2D5 = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow )
    goto LABEL_61;
  transform = UnityEngine_GameObject__get_transform(giveUpWindow, 0LL);
  if ( !transform )
    goto LABEL_61;
  v59.fields.y = 72.0;
  v59.fields.x = 0.0;
  v59.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v59, 0LL);
  giveUpBg = (UIWidget_o *)this->fields.giveUpBg;
  if ( !giveUpBg )
    goto LABEL_61;
  UIWidget__set_height(giveUpBg, 239, 0LL);
  giveUpTitle = (UnityEngine_Component_o *)this->fields.giveUpTitle;
  if ( !giveUpTitle )
    goto LABEL_61;
  v15 = UnityEngine_Component__get_transform(giveUpTitle, 0LL);
  if ( !v15 )
    goto LABEL_61;
  v60.fields.y = 77.0;
  v60.fields.x = 0.0;
  v60.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v15, v60, 0LL);
  checkGiveUpLabel = (UnityEngine_Component_o *)this->fields.checkGiveUpLabel;
  if ( !checkGiveUpLabel )
    goto LABEL_61;
  v17 = UnityEngine_Component__get_transform(checkGiveUpLabel, 0LL);
  if ( !v17 )
    goto LABEL_61;
  v61.fields.y = 6.0;
  v61.fields.x = 0.0;
  v61.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v17, v61, 0LL);
  giveUpContinueItemLabel = (UnityEngine_Component_o *)this->fields.giveUpContinueItemLabel;
  if ( !giveUpContinueItemLabel )
    goto LABEL_61;
  gameObject = UnityEngine_Component__get_gameObject(giveUpContinueItemLabel, 0LL);
  if ( !gameObject )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  giveUpOkBtn = this->fields.giveUpOkBtn;
  if ( !giveUpOkBtn )
    goto LABEL_61;
  v21 = UnityEngine_GameObject__get_transform(giveUpOkBtn, 0LL);
  if ( !v21 )
    goto LABEL_61;
  v62.fields.z = 0.0;
  v62.fields.x = 193.0;
  v62.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition(v21, v62, 0LL);
  giveUpCancelBtn = this->fields.giveUpCancelBtn;
  if ( !giveUpCancelBtn )
    goto LABEL_61;
  v23 = UnityEngine_GameObject__get_transform(giveUpCancelBtn, 0LL);
  if ( !v23 )
    goto LABEL_61;
  v63.fields.z = 0.0;
  v63.fields.y = -72.0;
  v63.fields.x = -193.0;
  UnityEngine_Transform__set_localPosition(v23, v63, 0LL);
  giveUpContinueItemRoot = this->fields.giveUpContinueItemRoot;
  if ( !giveUpContinueItemRoot )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(giveUpContinueItemRoot, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  data = this->fields.data;
  if ( !data )
    goto LABEL_61;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent || !MasterData_WarQuestSelectionMaster )
    goto LABEL_61;
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              battle_ent->fields.questId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( this->fields.IsContinueItem )
  {
    v30 = this->fields.data;
    if ( !v30 )
      goto LABEL_61;
    if ( BattleData__GetContinueItemNum(v30, 0LL) >= 1 )
    {
      v31 = this->fields.giveUpWindow;
      if ( v31 )
      {
        v32 = UnityEngine_GameObject__get_transform(v31, 0LL);
        if ( v32 )
        {
          v64.fields.y = 66.0;
          v64.fields.x = 0.0;
          v64.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(v32, v64, 0LL);
          v33 = (UIWidget_o *)this->fields.giveUpBg;
          if ( v33 )
          {
            UIWidget__set_height(v33, 279, 0LL);
            v34 = (UnityEngine_Component_o *)this->fields.giveUpTitle;
            if ( v34 )
            {
              v35 = UnityEngine_Component__get_transform(v34, 0LL);
              if ( v35 )
              {
                v65.fields.y = 97.0;
                v65.fields.x = 0.0;
                v65.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition(v35, v65, 0LL);
                v36 = (UnityEngine_Component_o *)this->fields.checkGiveUpLabel;
                if ( v36 )
                {
                  v37 = UnityEngine_Component__get_transform(v36, 0LL);
                  if ( v37 )
                  {
                    v66.fields.y = 26.0;
                    v66.fields.x = 0.0;
                    v66.fields.z = 0.0;
                    UnityEngine_Transform__set_localPosition(v37, v66, 0LL);
                    v38 = (UnityEngine_Component_o *)this->fields.giveUpContinueItemLabel;
                    if ( v38 )
                    {
                      v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
                      if ( v39 )
                      {
                        UnityEngine_GameObject__SetActive(v39, 1, 0LL);
                        v40 = this->fields.giveUpOkBtn;
                        if ( v40 )
                        {
                          v41 = UnityEngine_GameObject__get_transform(v40, 0LL);
                          if ( v41 )
                          {
                            v67.fields.z = 0.0;
                            v67.fields.x = 193.0;
                            v67.fields.y = -92.0;
                            UnityEngine_Transform__set_localPosition(v41, v67, 0LL);
                            v42 = this->fields.giveUpCancelBtn;
                            if ( v42 )
                            {
                              v43 = UnityEngine_GameObject__get_transform(v42, 0LL);
                              if ( v43 )
                              {
                                v68.fields.z = 0.0;
                                v68.fields.x = -193.0;
                                v68.fields.y = -92.0;
                                UnityEngine_Transform__set_localPosition(v43, v68, 0LL);
                                v44 = this->fields.giveUpContinueItemRoot;
                                if ( v44 )
                                {
                                  UnityEngine_GameObject__SetActive(v44, 1, 0LL);
                                  v45 = this->fields.data;
                                  if ( v45 )
                                  {
                                    giveUpContinueItemNum = this->fields.giveUpContinueItemNum;
                                    ContinueItemNum = BattleData__GetContinueItemNum(v45, 0LL);
                                    v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ContinueItemNum);
                                    v48 = System_String__Format((System_String_o *)StringLiteral_23395, v47, 0LL);
                                    if ( giveUpContinueItemNum )
                                    {
                                      UILabel__set_text(giveUpContinueItemNum, v48, 0LL);
                                      v49 = this->fields.data;
                                      if ( v49 )
                                      {
                                        giveUpContinueItemSpr = this->fields.giveUpContinueItemSpr;
                                        ContinueItemImageId = BattleData__GetContinueItemImageId(v49, 0LL);
                                        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                          && !AtlasManager_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                        }
                                        AtlasManager__SetItem(giveUpContinueItemSpr, ContinueItemImageId, 0LL);
                                        v52 = this->fields.checkGiveUpLabel;
                                        v53 = LocalizationManager_TypeInfo;
                                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
                                          || LocalizationManager_TypeInfo->_2.cctor_finished )
                                        {
                                          goto LABEL_57;
                                        }
                                        goto LABEL_56;
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
LABEL_61:
      sub_B170D4();
    }
  }
  if ( !Entity )
    goto LABEL_61;
  HasFlag = QuestEntity__HasFlag(Entity, 0x40000000LL, 0LL);
  v52 = this->fields.checkGiveUpLabel;
  if ( !HasFlag )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
      || LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_57;
    }
    v53 = LocalizationManager_TypeInfo;
LABEL_56:
    j_il2cpp_runtime_class_init_0(v53);
LABEL_57:
    v55 = &StringLiteral_2488;
    goto LABEL_58;
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v55 = &StringLiteral_2489;
LABEL_58:
  v56 = LocalizationManager__Get((System_String_o *)*v55, 0LL);
  if ( !v52 )
    goto LABEL_61;
  UILabel__set_text(v52, v56, 0LL);
  v57 = this->fields.giveUpWindow;
  if ( !v57 )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(v57, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__ResetContinueItemInfo(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *ContinueItemWindow; // x0
  BattleData_o *data; // x0

  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow
    || (UnityEngine_GameObject__SetActive(ContinueItemWindow, 0, 0LL), (data = this->fields.data) == 0LL) )
  {
    sub_B170D4();
  }
  BattleData__UpdateContinueItemInfo(data, 0LL);
  *(_WORD *)&this->fields.IsContinueItem = 0;
}


void __fastcall BattlePerformanceContinue__SetContinueMessage(
        BattlePerformanceContinue_o *this,
        UILabel_o *label,
        System_String_o *localizationKey,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x0
  UserGameEntity_o *SelfUserGame; // x0
  System_String_o *mText; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  BattleData_o *data; // x0
  System_String_o *v17; // x20
  System_String_o *v18; // x0
  System_String_o *v19; // x1

  if ( (byte_40FC30A & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, label);
    sub_B16FFC(&StringLiteral_2386, v9);
    sub_B16FFC(&StringLiteral_2394, v10);
    byte_40FC30A = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get(localizationKey, 0LL);
  if ( !label )
    goto LABEL_22;
  UILabel__set_text(label, v11, 0LL);
  if ( stoneCount == 0x80000000 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_22;
    stoneCount = SelfUserGame->fields.stone;
  }
  if ( stoneCount <= 0 )
  {
    mText = label->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2394, 0LL);
    v15 = System_String__Concat_43743732(mText, v14, 0LL);
    UILabel__set_text(label, v15, 0LL);
  }
  data = this->fields.data;
  if ( !data )
LABEL_22:
    sub_B170D4();
  if ( BattleData__CheckDefenceTargetData(data, 0LL) )
  {
    v17 = label->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2386, 0LL);
    v19 = System_String__Concat_43743732(v17, v18, 0LL);
    UILabel__set_text(label, v19, 0LL);
  }
}


void __fastcall BattlePerformanceContinue__SkipCommandSpellRequest(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  int32_t Value; // w0
  WarEntity_o *Entity; // x0
  BattleData_o *data; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC306 & 1) == 0 )
  {
    sub_B16FFC(&BattleData_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandSpellMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_3345, v6);
    sub_B16FFC(&StringLiteral_6812, v7);
    byte_40FC306 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6812, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             Value,
             (const MethodInfo_266F388 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_13;
  if ( !this->fields.data )
    goto LABEL_13;
  BattleData__LossTemporaryCommandSpell(this->fields.data, *(&Entity->fields.id + 1), 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  BattleData__SuccessContinue(data, 0LL);
  this->fields.continueRetryFlg = 0;
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setContinueBattleFlg(0, 1, 0LL);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
LABEL_13:
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3345, 0LL);
}


void __fastcall BattlePerformanceContinue__StartContinue(
        BattlePerformanceContinue_o *this,
        bool inIsProgress,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  this->fields.isProgress = inIsProgress;
  BattlePerformanceContinue__StartContinueImpl(this, 0, method);
  perf = this->fields.perf;
  if ( !perf )
    sub_B170D4();
  BattlePerformance__SetTimeScale(perf, 1.0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__StartContinueImpl(
        BattlePerformanceContinue_o *this,
        bool inIsProgress,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserGameEntity_o *SelfUserGame; // x0
  BattleViewItemlistComponent_o *itemWindow; // x21
  UserGameEntity_o *v10; // x20
  BattleDropItem_array *DropItems; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  BattleDropItemComponent_ClickDelegate_o *v16; // x23
  BattleViewItemlistComponent_o *v17; // x0
  BattleData_o *data; // x0
  BattleData_o *v19; // x0
  UILabel_o *commandspell_now; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x1
  const MethodInfo *v23; // x2
  UnityEngine_GameObject_o *commandspellObject; // x0
  UnityEngine_GameObject_o *stoneObject; // x0
  UnityEngine_GameObject_o *nostoneObject; // x0
  UnityEngine_GameObject_o *bg; // x0
  const MethodInfo *v28; // x1
  PlayMakerFSM_o *myFsm; // x0
  int32_t OverwriteCommandSpellContinue; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FC2D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceContinue_showConf__, inIsProgress);
    sub_B16FFC(&BattleDropItemComponent_ClickDelegate_TypeInfo, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_12289, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40FC2D4 = 1;
  }
  OverwriteCommandSpellContinue = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_21;
  itemWindow = this->fields.itemWindow;
  v10 = SelfUserGame;
  DropItems = BattleData__getDropItems(this->fields.data, 0LL);
  v16 = (BattleDropItemComponent_ClickDelegate_o *)sub_B170CC(
                                                     BattleDropItemComponent_ClickDelegate_TypeInfo,
                                                     v12,
                                                     v13,
                                                     v14,
                                                     v15);
  BattleDropItemComponent_ClickDelegate___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_showConf__,
    0LL);
  if ( !itemWindow )
    goto LABEL_21;
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, DropItems, v16, this->fields.itemColumnCount, 0LL);
  v17 = this->fields.itemWindow;
  if ( !v17 )
    goto LABEL_21;
  BattleViewItemlistComponent__setHide(v17, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  OverwriteCommandSpellContinue = BattleData__CheckCurrentTemporaryCommandSpell(data, v10, 0LL);
  v19 = this->fields.data;
  if ( !v19 )
    goto LABEL_21;
  OverwriteCommandSpellContinue = BattleData__GetOverwriteCommandSpellContinue(v19, OverwriteCommandSpellContinue, 0LL);
  commandspell_now = this->fields.commandspell_now;
  v21 = System_Int32__ToString((int32_t)&OverwriteCommandSpellContinue, 0LL);
  if ( !commandspell_now )
    goto LABEL_21;
  v22 = v21 ? v21 : (System_String_o *)StringLiteral_1;
  UILabel__set_text(commandspell_now, v22, 0LL);
  BattlePerformanceContinue__refreshStoneNow(this, v10, v23);
  commandspellObject = this->fields.commandspellObject;
  if ( !commandspellObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(commandspellObject, 0, 0LL);
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(stoneObject, 0, 0LL);
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(nostoneObject, 0, 0LL);
  bg = this->fields.bg;
  if ( !bg )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(bg, 1, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(7, 0LL);
  BattlePerformanceContinue__ResetContinueItemInfo(this, v28);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
LABEL_21:
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12289, 0LL);
}


void __fastcall BattlePerformanceContinue__Update(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *data; // x20
  BattleData_o *v14; // x0
  int64_t ContinueDeadLine; // x20
  System_String_o *RestTime; // x0
  UILabel_o *giveUpContinueItemLabel; // x21
  Il2CppObject *v18; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  UILabel_o *deadLine; // x21
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  UILabel_o *useCheckContinueItemLabel; // x21
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  BattleData_o *v27; // x0
  int64_t v28; // x20
  CommonUI_o *Instance; // x20
  System_String_o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  ErrorDialog_ClickDelegate_o *v35; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-40h]

  if ( (byte_40FC2CF & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceContinue_CallbackConfirmDialog__, method);
    sub_B16FFC(&ErrorDialog_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_2393, v8);
    sub_B16FFC(&StringLiteral_2389, v9);
    sub_B16FFC(&StringLiteral_2390, v10);
    sub_B16FFC(&StringLiteral_2388, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40FC2CF = 1;
  }
  data = (UnityEngine_Object_o *)this->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(data, 0LL, 0LL) && this->fields.IsContinueItem )
  {
    v14 = this->fields.data;
    if ( !v14 )
      goto LABEL_27;
    ContinueDeadLine = BattleData__GetContinueDeadLine(v14, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime = LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
    giveUpContinueItemLabel = this->fields.giveUpContinueItemLabel;
    v18 = (Il2CppObject *)RestTime;
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2389, 0LL);
    v20 = System_String__Format(v19, v18, 0LL);
    if ( !giveUpContinueItemLabel )
      goto LABEL_27;
    UILabel__set_text(giveUpContinueItemLabel, v20, 0LL);
    deadLine = this->fields.deadLine;
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2390, 0LL);
    v23 = System_String__Format(v22, v18, 0LL);
    if ( !deadLine )
      goto LABEL_27;
    UILabel__set_text(deadLine, v23, 0LL);
    useCheckContinueItemLabel = this->fields.useCheckContinueItemLabel;
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_2393, 0LL);
    v26 = System_String__Format(v25, v18, 0LL);
    if ( !useCheckContinueItemLabel )
      goto LABEL_27;
    UILabel__set_text(useCheckContinueItemLabel, v26, 0LL);
    v27 = this->fields.data;
    if ( !v27 )
      goto LABEL_27;
    v28 = BattleData__GetContinueDeadLine(v27, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( v28 < NetworkManager__getTime(0LL) && !this->fields.isShowDeadLineDialog )
    {
      this->fields.isShowDeadLineDialog = 1;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_2388, 0LL);
      v35 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v31, v32, v33, v34);
      ErrorDialog_ClickDelegate___ctor(
        v35,
        (Il2CppObject *)this,
        Method_BattlePerformanceContinue_CallbackConfirmDialog__,
        0LL);
      if ( Instance )
      {
        effectDistance.fields.value = 0LL;
        *(_DWORD *)&effectDistance.fields.has_value = 0;
        CommonUI__OpenWarningDialog(
          Instance,
          (System_String_o *)StringLiteral_1,
          v30,
          v35,
          0,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        return;
      }
LABEL_27:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue___AttachStoneCountRefreshComponent_b__79_0(
        BattlePerformanceContinue_o *this,
        int32_t stoneCount,
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
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x21
  UILabel_o *gem_now; // x0
  UILabel_o *stone_now; // x0
  UILabel_o *ContinueStoneBtnLabel; // x21
  System_String_o *v21; // x0
  UILabel_o *stoneBtnLabel; // x21
  System_String_o *v23; // x0
  PlayMakerFSM_o *myFsm; // x0
  System_String_o *ActiveStateName; // x0
  UnityEngine_GameObject_o *nostoneObject; // x0
  UnityEngine_GameObject_o *stoneObject; // x0
  PlayMakerFSM_o *v28; // x0
  System_String_o *v29; // x0
  UILabel_o *v30; // x21
  System_String_o *v31; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int32_t v33; // w0
  const MethodInfo *v34; // x4
  System_String_o **v35; // x8
  const MethodInfo *v36; // x4
  const MethodInfo *v37; // x4
  int32_t v38; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FC30B & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&stoneCount);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_2384, v6);
    sub_B16FFC(&StringLiteral_2383, v7);
    sub_B16FFC(&StringLiteral_2385, v8);
    sub_B16FFC(&StringLiteral_2382, v9);
    sub_B16FFC(&StringLiteral_23395, v10);
    sub_B16FFC(&StringLiteral_12604, v11);
    sub_B16FFC(&StringLiteral_2391, v12);
    sub_B16FFC(&StringLiteral_2392, v13);
    sub_B16FFC(&StringLiteral_12605, v14);
    byte_40FC30B = 1;
  }
  v38 = stoneCount;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  v16 = System_String__Format((System_String_o *)StringLiteral_23395, v15, 0LL);
  if ( !this->fields.ContinueStoneNum )
    goto LABEL_28;
  v17 = v16;
  UILabel__set_text(this->fields.ContinueStoneNum, v16, 0LL);
  gem_now = this->fields.gem_now;
  if ( !gem_now )
    goto LABEL_28;
  UILabel__set_text(gem_now, v17, 0LL);
  stone_now = this->fields.stone_now;
  if ( !stone_now )
    goto LABEL_28;
  UILabel__set_text(stone_now, v17, 0LL);
  ContinueStoneBtnLabel = this->fields.ContinueStoneBtnLabel;
  if ( stoneCount >= 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2383, 0LL);
    if ( ContinueStoneBtnLabel )
    {
      UILabel__set_text(ContinueStoneBtnLabel, v21, 0LL);
      stoneBtnLabel = this->fields.stoneBtnLabel;
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2383, 0LL);
      if ( stoneBtnLabel )
      {
        UILabel__set_text(stoneBtnLabel, v23, 0LL);
        myFsm = this->fields.myFsm;
        if ( myFsm )
        {
          ActiveStateName = PlayMakerFSM__get_ActiveStateName(myFsm, 0LL);
          if ( !System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_12604, 0LL) )
            goto LABEL_24;
          nostoneObject = this->fields.nostoneObject;
          if ( nostoneObject )
          {
            UnityEngine_GameObject__SetActive(nostoneObject, 0, 0LL);
            stoneObject = this->fields.stoneObject;
            if ( stoneObject )
            {
              UnityEngine_GameObject__SetActive(stoneObject, 1, 0LL);
              v28 = this->fields.myFsm;
              if ( v28 )
              {
                PlayMakerFSM__SetState(v28, (System_String_o *)StringLiteral_12605, 0LL);
                goto LABEL_24;
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_B170D4();
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_2382, 0LL);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_28;
  UILabel__set_text(ContinueStoneBtnLabel, v29, 0LL);
  v30 = this->fields.stoneBtnLabel;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_2382, 0LL);
  if ( !v30 )
    goto LABEL_28;
  UILabel__set_text(v30, v31, 0LL);
LABEL_24:
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_28;
  v33 = BattleData__CheckCurrentTemporaryCommandSpell(this->fields.data, SelfUserGame, 0LL);
  v35 = (System_String_o **)&StringLiteral_2391;
  if ( v33 <= 2 )
    v35 = (System_String_o **)&StringLiteral_2392;
  BattlePerformanceContinue__SetContinueMessage(this, this->fields.ContinueLabel, *v35, stoneCount, v34);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseCommandSpell,
    (System_String_o *)StringLiteral_2384,
    stoneCount,
    v36);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseGem,
    (System_String_o *)StringLiteral_2385,
    stoneCount,
    v37);
}


void __fastcall BattlePerformanceContinue___CheckDefenceTargetBroken_b__123_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC30C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5725, method);
    byte_40FC30C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5725, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenBrokenMessage_b__124_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC30D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5463, method);
    byte_40FC30D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463, 0LL);
}


void __fastcall BattlePerformanceContinue__atlasLoadEnd(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  BattleViewItemlistComponent_o *itemWindow; // x20
  BattleDropItem_array *DropItems; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  BattleDropItemComponent_ClickDelegate_o *v11; // x22

  if ( (byte_40FC2D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceContinue_showConf__, method);
    sub_B16FFC(&BattleDropItemComponent_ClickDelegate_TypeInfo, v3);
    byte_40FC2D3 = 1;
  }
  data = this->fields.data;
  if ( !data
    || (itemWindow = this->fields.itemWindow,
        DropItems = BattleData__getDropItems(data, 0LL),
        v11 = (BattleDropItemComponent_ClickDelegate_o *)sub_B170CC(
                                                           BattleDropItemComponent_ClickDelegate_TypeInfo,
                                                           v7,
                                                           v8,
                                                           v9,
                                                           v10),
        BattleDropItemComponent_ClickDelegate___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_showConf__,
          0LL),
        !itemWindow) )
  {
    sub_B170D4();
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, DropItems, v11, this->fields.itemColumnCount, 0LL);
}


void __fastcall BattlePerformanceContinue__callBackCommandSpell(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  PlayMakerFSM_o *myFsm; // x0
  __int64 *v10; // x8

  if ( (byte_40FC2E5 & 1) == 0 )
  {
    sub_B16FFC(&BattleData_TypeInfo, ret);
    sub_B16FFC(&StringLiteral_3344, v5);
    sub_B16FFC(&StringLiteral_21129, v6);
    sub_B16FFC(&StringLiteral_20980, v7);
    sub_B16FFC(&StringLiteral_3345, v8);
    byte_40FC2E5 = 1;
  }
  if ( !ret )
    goto LABEL_15;
  if ( System_String__Equals_43731072(ret, (System_String_o *)StringLiteral_21129, 0LL) )
  {
    this->fields.continueRetryFlg = 0;
    if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__setContinueBattleFlg(0, 1, 0LL);
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      v10 = &StringLiteral_3345;
LABEL_13:
      PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v10, 0LL);
      return;
    }
    goto LABEL_15;
  }
  if ( System_String__Equals_43731072(ret, (System_String_o *)StringLiteral_20980, 0LL) )
  {
    myFsm = this->fields.myFsm;
    this->fields.continueRetryFlg = 1;
    if ( myFsm )
    {
      v10 = &StringLiteral_3344;
      goto LABEL_13;
    }
LABEL_15:
    sub_B170D4();
  }
}


void __fastcall BattlePerformanceContinue__callBackContinueItem(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleData_o *data; // x0
  BattleData_o *v10; // x0
  PlayMakerFSM_o *myFsm; // x0
  __int64 *v12; // x8
  BattleData_o *v13; // x0

  if ( (byte_40FC2FF & 1) == 0 )
  {
    sub_B16FFC(&BattleData_TypeInfo, ret);
    sub_B16FFC(&StringLiteral_3344, v5);
    sub_B16FFC(&StringLiteral_21129, v6);
    sub_B16FFC(&StringLiteral_20980, v7);
    sub_B16FFC(&StringLiteral_3345, v8);
    byte_40FC2FF = 1;
  }
  if ( !ret )
    goto LABEL_18;
  if ( System_String__Equals_43731072(ret, (System_String_o *)StringLiteral_21129, 0LL) )
  {
    data = this->fields.data;
    this->fields.continueRetryFlg = 0;
    if ( data )
    {
      BattleData__SuccessContinue(data, 0LL);
      if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      BattleData__setContinueBattleFlg(0, 1, 0LL);
      BattleData__SaveContinueItemId(0, 0, 0LL);
      v10 = this->fields.data;
      if ( v10 )
      {
        BattleData__UpdateContinueItemInfo(v10, 0LL);
        myFsm = this->fields.myFsm;
        if ( myFsm )
        {
          v12 = &StringLiteral_3345;
LABEL_16:
          PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v12, 0LL);
          return;
        }
      }
    }
    goto LABEL_18;
  }
  if ( System_String__Equals_43731072(ret, (System_String_o *)StringLiteral_20980, 0LL) )
  {
    v13 = this->fields.data;
    this->fields.continueRetryFlg = 1;
    if ( v13 )
    {
      BattleData__UpdateContinueItemInfo(v13, 0LL);
      myFsm = this->fields.myFsm;
      if ( myFsm )
      {
        v12 = &StringLiteral_3344;
        goto LABEL_16;
      }
    }
LABEL_18:
    sub_B170D4();
  }
}


void __fastcall BattlePerformanceContinue__callBackStone(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleData_o *data; // x0
  PlayMakerFSM_o *myFsm; // x0
  __int64 *v11; // x8

  if ( (byte_40FC2F2 & 1) == 0 )
  {
    sub_B16FFC(&BattleData_TypeInfo, ret);
    sub_B16FFC(&StringLiteral_3344, v5);
    sub_B16FFC(&StringLiteral_21129, v6);
    sub_B16FFC(&StringLiteral_20980, v7);
    sub_B16FFC(&StringLiteral_3345, v8);
    byte_40FC2F2 = 1;
  }
  if ( !ret )
    goto LABEL_16;
  if ( System_String__Equals_43731072(ret, (System_String_o *)StringLiteral_21129, 0LL) )
  {
    data = this->fields.data;
    this->fields.continueRetryFlg = 0;
    if ( data )
    {
      BattleData__SuccessContinue(data, 0LL);
      if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      BattleData__setContinueBattleFlg(0, 1, 0LL);
      myFsm = this->fields.myFsm;
      if ( myFsm )
      {
        v11 = &StringLiteral_3345;
LABEL_14:
        PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v11, 0LL);
        return;
      }
    }
    goto LABEL_16;
  }
  if ( System_String__Equals_43731072(ret, (System_String_o *)StringLiteral_20980, 0LL) )
  {
    myFsm = this->fields.myFsm;
    this->fields.continueRetryFlg = 1;
    if ( myFsm )
    {
      v11 = &StringLiteral_3344;
      goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall BattlePerformanceContinue__callbackContinueCommandSpell(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v6; // x2

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
  BattleData__SuccessContinue(data, 0LL);
  BattlePerformanceContinue__callBackCommandSpell(this, ret, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__callbaclStoneShop(
        BattlePerformanceContinue_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  PlayMakerFSM_o *myFsm; // x0
  __int64 *v11; // x8

  if ( (byte_40FC2FA & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_B16FFC(&StringLiteral_3344, v5);
    sub_B16FFC(&StringLiteral_3345, v6);
    byte_40FC2FA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  BattlePerformanceContinue__closeNoStone(this, v8);
  if ( (unsigned int)(result - 1) > 1 )
  {
    myFsm = this->fields.myFsm;
    if ( myFsm )
    {
      v11 = &StringLiteral_3344;
      goto LABEL_9;
    }
LABEL_10:
    sub_B170D4();
  }
  BattlePerformanceContinue__refreshStoneNow(this, 0LL, v9);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_10;
  v11 = &StringLiteral_3345;
LABEL_9:
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v11, 0LL);
}


void __fastcall BattlePerformanceContinue__checkCountStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC304 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9268, method);
    byte_40FC304 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_7;
  if ( SelfUserGame->fields.stone > 0 )
    return;
  myFsm = this->fields.myFsm;
  this->fields.IsContinueItem = 0;
  if ( !myFsm )
LABEL_7:
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9268, 0LL);
}


void __fastcall BattlePerformanceContinue__checkDeadLineStoneShopEnd(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleData_o *data; // x0
  int64_t ContinueDeadLine; // x20
  CommonUI_o *Instance; // x20
  System_String_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  ErrorDialog_ClickDelegate_o *v18; // x22
  PlayMakerFSM_o *myFsm; // x0
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-40h]

  if ( (byte_40FC305 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceContinue_CallbackConfirmDialog__, method);
    sub_B16FFC(&ErrorDialog_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_9268, v7);
    sub_B16FFC(&StringLiteral_2388, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    byte_40FC305 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  ContinueDeadLine = BattleData__GetContinueDeadLine(data, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( ContinueDeadLine < NetworkManager__getTime(0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2388, 0LL);
    v18 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v14, v15, v16, v17);
    ErrorDialog_ClickDelegate___ctor(
      v18,
      (Il2CppObject *)this,
      Method_BattlePerformanceContinue_CallbackConfirmDialog__,
      0LL);
    if ( Instance )
    {
      effectDistance.fields.value = 0LL;
      *(_DWORD *)&effectDistance.fields.has_value = 0;
      CommonUI__OpenWarningDialog(
        Instance,
        (System_String_o *)StringLiteral_1,
        v13,
        v18,
        0,
        0,
        -1.0,
        1,
        effectDistance,
        0LL);
      return;
    }
LABEL_15:
    sub_B170D4();
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    goto LABEL_15;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9268, 0LL);
}


void __fastcall BattlePerformanceContinue__checkSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserGameEntity_o *SelfUserGame; // x0
  int32_t v5; // w0
  int32_t OverwriteCommandSpellContinue; // w0
  __int64 *v7; // x9

  if ( (byte_40FC2DF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9714, method);
    sub_B16FFC(&StringLiteral_9271, v3);
    byte_40FC2DF = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data
    || (v5 = BattleData__CheckCurrentTemporaryCommandSpell(this->fields.data, SelfUserGame, 0LL), !this->fields.data)
    || (OverwriteCommandSpellContinue = BattleData__GetOverwriteCommandSpellContinue(this->fields.data, v5, 0LL),
        !this->fields.myFsm) )
  {
    sub_B170D4();
  }
  if ( OverwriteCommandSpellContinue >= 3 )
    v7 = &StringLiteral_9714;
  else
    v7 = &StringLiteral_9271;
  PlayMakerFSM__SendEvent(this->fields.myFsm, (System_String_o *)*v7, 0LL);
}


void __fastcall BattlePerformanceContinue__checkStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserGameEntity_o *SelfUserGame; // x20
  const MethodInfo *v5; // x2
  PlayMakerFSM_o *myFsm; // x0
  __int64 *v7; // x8

  if ( (byte_40FC2EC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9714, method);
    sub_B16FFC(&StringLiteral_9271, v3);
    byte_40FC2EC = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  BattlePerformanceContinue__refreshStoneNow(this, SelfUserGame, v5);
  if ( !SelfUserGame || (myFsm = this->fields.myFsm) == 0LL )
    sub_B170D4();
  if ( SelfUserGame->fields.stone < 1 )
    v7 = &StringLiteral_9271;
  else
    v7 = &StringLiteral_9714;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v7, 0LL);
}


void __fastcall BattlePerformanceContinue__closeContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_40FC2FC & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceContinue_endCloseContinueItem__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_40FC2FC = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v10 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v6, v7, v8, v9),
        BattleWindowComponent_EndCall___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseContinueItem__,
          0LL),
        !window) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v10,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_40FC2F7 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceContinue_endCloseNoStone__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_40FC2F7 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v10 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v6, v7, v8, v9),
        BattleWindowComponent_EndCall___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseNoStone__,
          0LL),
        !window) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v10,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_40FC2E2 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceContinue_endCloseSpell__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_40FC2E2 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v10 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v6, v7, v8, v9),
        BattleWindowComponent_EndCall___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseSpell__,
          0LL),
        !window) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v10,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_40FC2EF & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceContinue_endCloseStone__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_40FC2EF = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v10 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v6, v7, v8, v9),
        BattleWindowComponent_EndCall___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseStone__,
          0LL),
        !window) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v10,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeUseCheck(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *useCheckWindow; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  useCheckWindow = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !useCheckWindow || (gameObject = UnityEngine_Component__get_gameObject(useCheckWindow, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall BattlePerformanceContinue__connectContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleData_o *data; // x0
  int32_t ContinueUseItemId; // w20
  BattleData_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  NetworkManager_ResultCallbackFunc_o *v14; // x21
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  struct BattleData_o *v16; // x8
  struct BattleEntity_o *battle_ent; // x9

  if ( (byte_40FC2FE & 1) == 0 )
  {
    sub_B16FFC(&BattleData_TypeInfo, method);
    sub_B16FFC(&Method_BattlePerformanceContinue_callBackContinueItem__, v3);
    sub_B16FFC(&Method_NetworkManager_getRequest_BattleUseContinueItemRequest___, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_40FC2FE = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setContinueBattleFlg(4, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  ContinueUseItemId = BattleData__GetContinueUseItemId(data, 0LL);
  BattleData__SaveContinueItemId(ContinueUseItemId, 0, 0LL);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_18;
  BattleData__procPlayerContinue(v9, this->fields.isProgress, 0LL);
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v10,
                                                 v11,
                                                 v12,
                                                 v13);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callBackContinueItem__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v14,
                                                         (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_BattleUseContinueItemRequest___);
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_18;
  if ( this->fields.continueRetryFlg )
  {
    if ( Request_WarBoardWallAttackRequest )
    {
      RequestBase__beginRetryRequest(Request_WarBoardWallAttackRequest, 0, 0LL);
      return;
    }
LABEL_18:
    sub_B170D4();
  }
  battle_ent = v16->fields.battle_ent;
  if ( !battle_ent || !Request_WarBoardWallAttackRequest )
    goto LABEL_18;
  BattleUseContinueItemRequest__beginRequest(
    (BattleUseContinueItemRequest_o *)Request_WarBoardWallAttackRequest,
    battle_ent->fields.id,
    v16->fields.continueCount,
    ContinueUseItemId,
    1,
    0LL);
}


void __fastcall BattlePerformanceContinue__connectSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleData_o *data; // x0
  BattleData_o *v10; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  _BOOL4 continueRetryFlg; // w21
  NetworkManager_ResultCallbackFunc_o *v16; // x0
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  WarBoardWallAttackRequest_o *v19; // x0
  struct BattleData_o *v20; // x8
  int32_t continueCount; // w21
  struct BattleEntity_o *battle_ent; // x22
  BattleCommandSpellRequest_o *v23; // x20
  int32_t Value; // w0
  struct BattleData_o *v25; // x8

  if ( (byte_40FC2E4 & 1) == 0 )
  {
    sub_B16FFC(&BattleData_TypeInfo, method);
    sub_B16FFC(&Method_BattlePerformanceContinue_callBackCommandSpell__, v3);
    sub_B16FFC(&Method_BattlePerformanceContinue_callbackContinueCommandSpell__, v4);
    sub_B16FFC(&Method_NetworkManager_getRequest_BattleCommandSpellRequest___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_6812, v8);
    byte_40FC2E4 = 1;
  }
  BattlePerformanceContinue__closeSpell(this, method);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setContinueBattleFlg(2, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_24;
  BattleData__procPlayerContinue(data, this->fields.isProgress, 0LL);
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_24;
  if ( BattleData__IsUseTemporaryCommandSpell(v10, 0LL) )
  {
    BattlePerformanceContinue__SkipCommandSpellRequest(this, v11);
    return;
  }
  continueRetryFlg = this->fields.continueRetryFlg;
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v11,
                                                 v12,
                                                 v13,
                                                 v14);
  v17 = v16;
  if ( continueRetryFlg )
  {
    NetworkManager_ResultCallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_BattlePerformanceContinue_callBackCommandSpell__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                           v17,
                                                           (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      RequestBase__beginRetryRequest(Request_WarBoardWallAttackRequest, 0, 0LL);
      return;
    }
LABEL_24:
    sub_B170D4();
  }
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callbackContinueCommandSpell__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v19 = NetworkManager__getRequest_WarBoardWallAttackRequest_(
          v17,
          (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
  v20 = this->fields.data;
  if ( !v20 )
    goto LABEL_24;
  continueCount = v20->fields.continueCount;
  battle_ent = v20->fields.battle_ent;
  v23 = (BattleCommandSpellRequest_o *)v19;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6812, 0LL);
  if ( !battle_ent )
    goto LABEL_24;
  v25 = this->fields.data;
  if ( !v25 || !v23 )
    goto LABEL_24;
  BattleCommandSpellRequest__beginRequest(
    v23,
    battle_ent->fields.id,
    Value,
    v25->fields.waveClearNeedTurn,
    continueCount,
    1,
    0LL);
}


void __fastcall BattlePerformanceContinue__connectStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleData_o *data; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  struct BattleData_o *v14; // x8
  struct BattleEntity_o *battle_ent; // x9

  if ( (byte_40FC2F1 & 1) == 0 )
  {
    sub_B16FFC(&BattleData_TypeInfo, method);
    sub_B16FFC(&Method_BattlePerformanceContinue_callBackStone__, v3);
    sub_B16FFC(&Method_NetworkManager_getRequest_BattleUseContinueRequest___, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_40FC2F1 = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setContinueBattleFlg(1, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  BattleData__procPlayerContinue(data, this->fields.isProgress, 0LL);
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10, v11);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callBackStone__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v12,
                                                         (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_BattleUseContinueRequest___);
  v14 = this->fields.data;
  if ( !v14 )
    goto LABEL_17;
  if ( this->fields.continueRetryFlg )
  {
    if ( Request_WarBoardWallAttackRequest )
    {
      RequestBase__beginRetryRequest(Request_WarBoardWallAttackRequest, 0, 0LL);
      return;
    }
LABEL_17:
    sub_B170D4();
  }
  battle_ent = v14->fields.battle_ent;
  if ( !battle_ent || !Request_WarBoardWallAttackRequest )
    goto LABEL_17;
  BattleUseContinueRequest__beginRequest(
    (BattleUseContinueRequest_o *)Request_WarBoardWallAttackRequest,
    battle_ent->fields.id,
    v14->fields.waveClearNeedTurn,
    v14->fields.continueCount,
    0LL);
}


void __fastcall BattlePerformanceContinue__endCloseContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *ContinueItemWindow; // x0
  BattleViewItemlistComponent_o *itemWindow; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC2FD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5463, method);
    byte_40FC2FD = 1;
  }
  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow
    || (UnityEngine_GameObject__SetActive(ContinueItemWindow, 0, 0LL), (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj(itemWindow, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nostoneObject; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC2F8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5463, method);
    byte_40FC2F8 = 1;
  }
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject || (UnityEngine_GameObject__SetActive(nostoneObject, 0, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandspellObject; // x0
  BattleViewItemlistComponent_o *itemWindow; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC2E3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5463, method);
    byte_40FC2E3 = 1;
  }
  commandspellObject = this->fields.commandspellObject;
  if ( !commandspellObject
    || (UnityEngine_GameObject__SetActive(commandspellObject, 0, 0LL), (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj(itemWindow, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *stoneObject; // x0
  BattleViewItemlistComponent_o *itemWindow; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC2F0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5463, method);
    byte_40FC2F0 = 1;
  }
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 0, 0LL), (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj(itemWindow, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__endDialog(
        BattlePerformanceContinue_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  BattleLogic_o *logic; // x0

  if ( (byte_40FC2DA & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    sub_B16FFC(&StringLiteral_9271, v4);
    byte_40FC2DA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0LL), (logic = this->fields.logic) == 0LL) )
    sub_B170D4();
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9271, 0LL);
}


void __fastcall BattlePerformanceContinue__endLoadCommandSPell(
        BattlePerformanceContinue_o *this,
        AssetData_o *aData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattlePerformance_o *perf; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v14; // x21
  int32_t SpellImageIdBattle; // w0
  int v16; // w22
  int32_t v17; // w21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  struct BattlePerformance_o *v21; // x8
  UnityEngine_GameObject_o *Object; // x23
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  SimpleAnimation_o *Component_srcLineSprite; // x22
  UnityEngine_Animation_o *v27; // x21
  SimpleAnimation_o *v28; // x0
  System_String_o *v29; // x1
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Animation_o *v31; // x0
  System_String_o *v32; // x1
  Il2CppObject *v33; // x0
  Il2CppObject *v34; // x0
  BattleLogic_o *logic; // x0
  BattlePerformance_o *v36; // x0
  PlayMakerFSM_o *myFsm; // x0
  int32_t v38; // [xsp+8h] [xbp-38h] BYREF
  int v39; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FC2EA & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, aData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_5481, v9);
    sub_B16FFC(&StringLiteral_18106, v10);
    sub_B16FFC(&StringLiteral_18107, v11);
    byte_40FC2EA = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_31;
  BattlePerformance__PlayAnyCommandSpellContinueVoice(perf, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_31;
  v14 = SelfUserGame;
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0LL);
  if ( !this->fields.data )
    goto LABEL_31;
  v16 = SpellImageIdBattle;
  v17 = BattleData__CheckCurrentTemporaryCommandSpell(this->fields.data, v14, 0LL);
  v39 = v16;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
  v19 = System_String__Format((System_String_o *)StringLiteral_18107, v18, 0LL);
  if ( !aData )
    goto LABEL_31;
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 aData,
                                                                 v19,
                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  v21 = this->fields.perf;
  if ( !v21 )
    goto LABEL_31;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             Object_WarBoardWaitTimeSetting,
             v21->fields.popupTr,
             0LL,
             0LL);
  v38 = v17;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  v24 = System_String__Format((System_String_o *)StringLiteral_18106, v23, 0LL);
  if ( !Object )
    goto LABEL_31;
  v25 = v24;
  Component_srcLineSprite = (SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   Object,
                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v27 = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     Object,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_31;
    if ( SimpleAnimation__get_Item(Component_srcLineSprite, v25, 0LL) )
    {
      v28 = Component_srcLineSprite;
      v29 = v25;
    }
    else
    {
      v39 = 3;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
      v29 = System_String__Format((System_String_o *)StringLiteral_18106, v33, 0LL);
      v28 = Component_srcLineSprite;
    }
    SimpleAnimation__Play_16380456(v28, v29, 0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL) )
    {
      if ( !v27 )
        goto LABEL_31;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v27, v25, 0LL);
      if ( UnityEngine_TrackedReference__op_Inequality(0LL, Item, 0LL) )
      {
        v31 = v27;
        v32 = v25;
      }
      else
      {
        v39 = 3;
        v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
        v32 = System_String__Format((System_String_o *)StringLiteral_18106, v34, 0LL);
        v31 = v27;
      }
      UnityEngine_Animation__Play_49744236(v31, v32, 0LL);
    }
  }
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__setTimeAcceleration(logic, 0, 0LL), (v36 = this->fields.perf) == 0LL)
    || (BattlePerformance__playMasterCommandSpellCutIn(v36, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
  {
LABEL_31:
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  BattleViewItemlistComponent_o *v4; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC2DE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5477, method);
    byte_40FC2DE = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__ChangeLayoutScrollView(itemWindow, 0LL), (v4 = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(v4, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5477, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  BattleViewItemlistComponent_o *v4; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC2F6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5477, method);
    byte_40FC2F6 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL), (v4 = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(v4, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5477, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  BattleViewItemlistComponent_o *v4; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC2E1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5477, method);
    byte_40FC2E1 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL), (v4 = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(v4, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5477, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  BattleViewItemlistComponent_o *v4; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC2EE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5477, method);
    byte_40FC2EE = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL), (v4 = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(v4, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5477, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenUsecheck(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC303 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5477, method);
    byte_40FC303 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5477, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__endRetryDialog(
        BattlePerformanceContinue_o *this,
        bool flg,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_40FC2E7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9714, flg);
    byte_40FC2E7 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B170D4();
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9714, 0LL);
}


void __fastcall BattlePerformanceContinue__endSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserGameEntity_o *SelfUserGame; // x0
  Il2CppObject *v6; // x0
  System_String_o *v7; // x20
  BattleLogic_o *logic; // x0
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FC2EB & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_4153, v4);
    byte_40FC2EB = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_9;
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0LL);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SpellImageIdBattle);
  v7 = System_String__Format((System_String_o *)StringLiteral_4153, v6, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v7, 0LL);
  logic = this->fields.logic;
  if ( !logic )
LABEL_9:
    sub_B170D4();
  BattleLogic__resetTimeAcceleration(logic, 0, 0LL);
}


bool __fastcall BattlePerformanceContinue__get_isDefenceTargetBroken(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  return this->fields._isDefenceTargetBroken_k__BackingField;
}


void __fastcall BattlePerformanceContinue__openNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  UnityEngine_GameObject_o *nostoneObject; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  BattleWindowComponent_EndCall_o *v12; // x21

  if ( (byte_40FC2F5 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceContinue_endOpenNoStone__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_2395, v4);
    byte_40FC2F5 = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseBuyGem,
    (System_String_o *)StringLiteral_2395,
    0x80000000,
    v5);
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject
    || (UnityEngine_GameObject__SetActive(nostoneObject, 1, 0LL),
        window = this->fields.window,
        v12 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v8, v9, v10, v11),
        BattleWindowComponent_EndCall___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenNoStone__,
          0LL),
        !window) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v12,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__openReTry(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  NotificationDialog_ClickDelegate_o *v12; // x21

  if ( (byte_40FC2E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceContinue_endRetryDialog__, method);
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&StringLiteral_23793, v5);
    sub_B16FFC(&StringLiteral_23794, v6);
    byte_40FC2E6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(NotificationDialog_ClickDelegate_TypeInfo, v8, v9, v10, v11);
  NotificationDialog_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endRetryDialog__,
    0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenNotificationDialog_18239760(
    Instance,
    (System_String_o *)StringLiteral_23794,
    (System_String_o *)StringLiteral_23793,
    v12,
    -1,
    0,
    0,
    0,
    0,
    1,
    0LL,
    0LL,
    0,
    0,
    0LL,
    1,
    0LL,
    0LL,
    0LL,
    0LL);
}


void __fastcall BattlePerformanceContinue__openSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *stoneBtnLabel; // x20
  __int64 *v13; // x8
  System_String_o *v14; // x0
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_o *commandspellObject; // x0
  struct BattleData_o *data; // x8
  QuestEntity_o *quest_ent; // x0
  struct BattleData_o *v19; // x8
  QuestEntity_o *v20; // x0
  const MethodInfo *v21; // x4
  UIWidget_o *commandSpellSprite; // x0
  UnityEngine_Component_o *v23; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  UIWidget_o *commandspell_now; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  BattleWindowComponent_EndCall_o *v38; // x21

  if ( (byte_40FC2E0 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceContinue_endOpenSpell__, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SendEventToFsm___, v3);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_2384, v7);
    sub_B16FFC(&StringLiteral_2383, v8);
    sub_B16FFC(&StringLiteral_5481, v9);
    sub_B16FFC(&StringLiteral_2382, v10);
    byte_40FC2E0 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_33;
  stoneBtnLabel = this->fields.stoneBtnLabel;
  if ( SelfUserGame->fields.stone < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = &StringLiteral_2382;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = &StringLiteral_2383;
  }
  v14 = LocalizationManager__Get((System_String_o *)*v13, 0LL);
  if ( !stoneBtnLabel )
    goto LABEL_33;
  UILabel__set_text(stoneBtnLabel, v14, 0LL);
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, v15);
  commandspellObject = this->fields.commandspellObject;
  if ( !commandspellObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(commandspellObject, 1, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_33;
  quest_ent = data->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_33;
  if ( !QuestEntity__HasFlag(quest_ent, 0x400000000LL, 0LL) )
  {
    v19 = this->fields.data;
    if ( !v19 )
      goto LABEL_33;
    v20 = v19->fields.quest_ent;
    if ( !v20 )
      goto LABEL_33;
    if ( !QuestEntity__HasFlag(v20, 0x100000000LL, 0LL) )
      goto LABEL_31;
  }
  commandSpellSprite = (UIWidget_o *)this->fields.commandSpellSprite;
  if ( !commandSpellSprite )
    goto LABEL_33;
  UIWidget__set_color(commandSpellSprite, this->fields.spellBtnColor, 0LL);
  v23 = (UnityEngine_Component_o *)this->fields.commandSpellSprite;
  if ( !v23 )
    goto LABEL_33;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              v23,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SendEventToFsm___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( !Component_WebViewObject )
      goto LABEL_33;
    v31 = (System_Int32_array **)StringLiteral_5481;
    Component_WebViewObject->fields.onError = (struct System_Action_string__o *)StringLiteral_5481;
    sub_B16F98(
      (BattleServantConfConponent_o *)&Component_WebViewObject->fields.onError,
      v31,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  commandspell_now = (UIWidget_o *)this->fields.commandspell_now;
  if ( !commandspell_now )
LABEL_33:
    sub_B170D4();
  UIWidget__set_color(commandspell_now, this->fields.spellnowColor, 0LL);
LABEL_31:
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseCommandSpell,
    (System_String_o *)StringLiteral_2384,
    0x80000000,
    v21);
  window = this->fields.window;
  v38 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v34, v35, v36, v37);
  BattleWindowComponent_EndCall___ctor(v38, (Il2CppObject *)this, Method_BattlePerformanceContinue_endOpenSpell__, 0LL);
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v38,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__openStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  UnityEngine_GameObject_o *stoneObject; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  BattleWindowComponent_EndCall_o *v12; // x21

  if ( (byte_40FC2ED & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceContinue_endOpenStone__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_2385, v4);
    byte_40FC2ED = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseGem,
    (System_String_o *)StringLiteral_2385,
    0x80000000,
    v5);
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 1, 0LL),
        window = this->fields.window,
        v12 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v8, v9, v10, v11),
        BattleWindowComponent_EndCall___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenStone__,
          0LL),
        !window) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v12,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__openStoneShop(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  StonePurchaseMenu_CallbackFunc_o *v10; // x21

  if ( (byte_40FC2F9 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceContinue_callbaclStoneShop__, method);
    sub_B16FFC(&StonePurchaseMenu_CallbackFunc_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40FC2F9 = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (StonePurchaseMenu_CallbackFunc_o *)sub_B170CC(StonePurchaseMenu_CallbackFunc_TypeInfo, v6, v7, v8, v9);
  StonePurchaseMenu_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callbaclStoneShop__,
    0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenStonePurchaseMenu(Instance, v10, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__openUseCheck(
        BattlePerformanceContinue_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *usecheckLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *useCheckContinueItemLabel; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Object_o *addMsgInfo; // x21
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Component_o *useCheckWindow; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UIWidget_o *useCheckBgSprite; // x0
  UILabel_o *addMsgLabel; // x20
  __int64 *v21; // x8
  UILabel_o *v22; // x20
  System_String_o *v23; // x0
  UnityEngine_Object_o *v24; // x20
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UIWidget_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  System_String_o *v31; // x0
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_Component_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_Component_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  const MethodInfo *v38; // x1

  if ( (byte_40FC302 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_2399, v6);
    sub_B16FFC(&StringLiteral_2397, v7);
    sub_B16FFC(&StringLiteral_2398, v8);
    byte_40FC302 = 1;
  }
  usecheckLabel = (UnityEngine_Component_o *)this->fields.usecheckLabel;
  if ( !usecheckLabel )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  if ( !gameObject )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  useCheckContinueItemLabel = (UnityEngine_Component_o *)this->fields.useCheckContinueItemLabel;
  if ( !useCheckContinueItemLabel )
    goto LABEL_49;
  v12 = UnityEngine_Component__get_gameObject(useCheckContinueItemLabel, 0LL);
  if ( !v12 )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(v12, 0, 0LL);
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL) )
  {
    v14 = this->fields.addMsgInfo;
    if ( !v14 )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive(v14, 0, 0LL);
  }
  useCheckWindow = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !useCheckWindow )
    goto LABEL_49;
  v16 = UnityEngine_Component__get_gameObject(useCheckWindow, 0LL);
  GameObjectExtensions__SetLocalPositionY(v16, -72.0, 0LL);
  v17 = (UnityEngine_Component_o *)this->fields.usecheckLabel;
  if ( !v17 )
    goto LABEL_49;
  v18 = UnityEngine_Component__get_gameObject(v17, 0LL);
  GameObjectExtensions__SetLocalPositionY(v18, 28.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.useCheckOkBtn, -72.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.useCheckCancelBtn, -72.0, 0LL);
  useCheckBgSprite = (UIWidget_o *)this->fields.useCheckBgSprite;
  if ( !useCheckBgSprite )
    goto LABEL_49;
  UIWidget__set_height(useCheckBgSprite, 239, 0LL);
  if ( type == 2 )
  {
    v32 = (UnityEngine_Component_o *)this->fields.usecheckLabel;
    if ( v32 )
    {
      v33 = UnityEngine_Component__get_gameObject(v32, 0LL);
      if ( v33 )
      {
        UnityEngine_GameObject__SetActive(v33, 0, 0LL);
        v34 = (UnityEngine_Component_o *)this->fields.useCheckContinueItemLabel;
        if ( v34 )
        {
          v35 = UnityEngine_Component__get_gameObject(v34, 0LL);
          if ( v35 )
          {
            UnityEngine_GameObject__SetActive(v35, 1, 0LL);
            goto LABEL_46;
          }
        }
      }
    }
    goto LABEL_49;
  }
  if ( type != 1 )
  {
    if ( type )
      goto LABEL_46;
    addMsgLabel = this->fields.usecheckLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = &StringLiteral_2398;
    goto LABEL_39;
  }
  v22 = this->fields.usecheckLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2399, 0LL);
  if ( !v22 )
    goto LABEL_49;
  UILabel__set_text(v22, v23, 0LL);
  v24 = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
    goto LABEL_46;
  v25 = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !v25 )
    goto LABEL_49;
  v26 = UnityEngine_Component__get_gameObject(v25, 0LL);
  GameObjectExtensions__SetLocalPositionY(v26, -90.0, 0LL);
  v27 = (UnityEngine_Component_o *)this->fields.usecheckLabel;
  if ( !v27
    || (v28 = UnityEngine_Component__get_gameObject(v27, 0LL),
        GameObjectExtensions__SetLocalPositionY(v28, 82.0, 0LL),
        GameObjectExtensions__SetLocalPositionY(this->fields.useCheckOkBtn, -90.0, 0LL),
        GameObjectExtensions__SetLocalPositionY(this->fields.useCheckCancelBtn, -90.0, 0LL),
        (v29 = (UIWidget_o *)this->fields.useCheckBgSprite) == 0LL)
    || (UIWidget__set_height(v29, 275, 0LL), (v30 = this->fields.addMsgInfo) == 0LL) )
  {
LABEL_49:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v30, 1, 0LL);
  addMsgLabel = this->fields.addMsgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = &StringLiteral_2397;
LABEL_39:
  v31 = LocalizationManager__Get((System_String_o *)*v21, 0LL);
  if ( !addMsgLabel )
    goto LABEL_49;
  UILabel__set_text(addMsgLabel, v31, 0LL);
LABEL_46:
  v36 = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !v36 )
    goto LABEL_49;
  v37 = UnityEngine_Component__get_gameObject(v36, 0LL);
  if ( !v37 )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(v37, 1, 0LL);
  BattlePerformanceContinue__endOpenUsecheck(this, v38);
}


void __fastcall BattlePerformanceContinue__procContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC301 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FC301 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceContinue__procNG(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  BattleLogic_o *logic; // x19
  NotificationDialog_ClickDelegate_o *v8; // x21

  if ( (byte_40FC2D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattlePerformanceContinue_endDialog__, method);
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, v6);
    byte_40FC2D9 = 1;
  }
  logic = this->fields.logic;
  v8 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(NotificationDialog_ClickDelegate_TypeInfo, method, v2, v3, v4);
  NotificationDialog_ClickDelegate___ctor(v8, (Il2CppObject *)this, Method_BattlePerformanceContinue_endDialog__, 0LL);
  if ( !logic )
    sub_B170D4();
  BattleLogic__OpenBattleLoseDlg(logic, 1, 0, v8, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC300 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FC300 = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGGiveUpContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC2D7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FC2D7 = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  this->fields.IsContinueItem = 0;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC2FB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FC2FB = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow || (BattleViewItemlistComponent__ClearObj(itemWindow, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC2E8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FC2E8 = 1;
  }
  BattlePerformanceContinue__closeSpell(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC2F3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FC2F3 = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceContinue__procOK(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  BattlePerformanceMaster_o *masterPerf; // x0
  BattleLogic_o *logic; // x0
  BattleData_o *data; // x0
  int32_t QuestId; // w20
  WebViewManager_o *Instance; // x0
  BattleData_o *v12; // x8
  AdManager_o *v13; // x19
  int32_t Phase; // w0

  if ( (byte_40FC2D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, method);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_9714, v4);
    byte_40FC2D8 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_20;
  statusPerf = perf->fields.statusPerf;
  if ( !statusPerf )
    goto LABEL_20;
  masterPerf = statusPerf->fields.masterPerf;
  if ( !masterPerf )
    goto LABEL_20;
  BattlePerformanceMaster__updateCommandSpellIcon(masterPerf, 0LL);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_20;
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9714, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_20;
  QuestId = BattleData__getQuestId(data, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( TerminalPramsManager__IsMainStoryForQuestId(QuestId, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( TerminalPramsManager__CanSendTrackEvent(QuestId, 0LL) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      v12 = this->fields.data;
      if ( v12 )
      {
        v13 = (AdManager_o *)Instance;
        Phase = BattleData__getPhase(v12, 0LL);
        if ( v13 )
        {
          AdManager__TrackEvent(v13, 10, 12, QuestId, Phase, 0LL, 0LL);
          return;
        }
      }
LABEL_20:
      sub_B170D4();
    }
  }
}


void __fastcall BattlePerformanceContinue__procSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserGameEntity_o *SelfUserGame; // x0
  Il2CppObject *v8; // x0
  System_String_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  AssetLoader_LoadEndDataHandler_o *v14; // x21
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FC2E9 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_BattlePerformanceContinue_endLoadCommandSPell__, v3);
    sub_B16FFC(&int_TypeInfo, v4);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_4153, v6);
    byte_40FC2E9 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B170D4();
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0LL);
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SpellImageIdBattle);
  v9 = System_String__Format((System_String_o *)StringLiteral_4153, v8, 0LL);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v10, v11, v12, v13);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endLoadCommandSPell__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v9, v14, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__procStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_40FC2F4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481, method);
    byte_40FC2F4 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5481, 0LL);
}


void __fastcall BattlePerformanceContinue__refreshStoneNow(
        BattlePerformanceContinue_o *this,
        UserGameEntity_o *userGame,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  __int64 v5; // x1
  UILabel_o *gem_now; // x21
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  UILabel_o *stone_now; // x19
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int32_t v12; // [xsp+8h] [xbp-28h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-24h] BYREF

  SelfUserGame = userGame;
  if ( (byte_40FC2D2 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, userGame);
    sub_B16FFC(&StringLiteral_23395, v5);
    byte_40FC2D2 = 1;
  }
  if ( !SelfUserGame )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_8;
  }
  gem_now = this->fields.gem_now;
  stone = SelfUserGame->fields.stone;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
  v8 = System_String__Format((System_String_o *)StringLiteral_23395, v7, 0LL);
  if ( !gem_now
    || (UILabel__set_text(gem_now, v8, 0LL),
        stone_now = this->fields.stone_now,
        v12 = SelfUserGame->fields.stone,
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12),
        v11 = System_String__Format((System_String_o *)StringLiteral_23395, v10, 0LL),
        !stone_now) )
  {
LABEL_8:
    sub_B170D4();
  }
  UILabel__set_text(stone_now, v11, 0LL);
}


void __fastcall BattlePerformanceContinue__set_isDefenceTargetBroken(
        BattlePerformanceContinue_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isDefenceTargetBroken_k__BackingField = value;
}


void __fastcall BattlePerformanceContinue__showConf(
        BattlePerformanceContinue_o *this,
        BattleDropItem_o *drop,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceContinue__CoEndContinue_d__126___ctor(
        BattlePerformanceContinue__CoEndContinue_d__126_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattlePerformanceContinue__CoEndContinue_d__126__MoveNext(
        BattlePerformanceContinue__CoEndContinue_d__126_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  float timer_5__2; // s8
  struct BattlePerformanceContinue_o *_4__this; // x8
  struct BattlePerformance_o *perf; // x8
  UnityEngine_GameObject_o *fadeObject; // x0
  NGUIFader_o *Component_srcLineSprite; // x19
  int v9; // s0
  bool result; // w0
  float deltaTime; // s0
  Il2CppObject **p__2__current; // x19

  if ( (byte_40F7178 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___, method);
    byte_40F7178 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    timer_5__2 = this->fields._timer_5__2;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( timer_5__2 <= 1.0 )
      goto LABEL_13;
    if ( !_4__this
      || (perf = _4__this->fields.perf) == 0LL
      || (fadeObject = perf->fields.fadeObject) == 0LL
      || (Component_srcLineSprite = (NGUIFader_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     fadeObject,
                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___),
          *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL),
          !Component_srcLineSprite) )
    {
      sub_B170D4();
    }
    NGUIFader__FadeStart(Component_srcLineSprite, *(UnityEngine_Color_o *)&v9, 0.5, 1, 0LL, 0, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  timer_5__2 = 0.0;
  this->fields._timer_5__2 = 0.0;
  this->fields.__1__state = -1;
LABEL_13:
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  *((float *)p__2__current + 4) = timer_5__2 + deltaTime;
  sub_B16F98(p__2__current, 0LL);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall BattlePerformanceContinue__CoEndContinue_d__126__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceContinue__CoEndContinue_d__126_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceContinue__CoEndContinue_d__126__System_Collections_IEnumerator_Reset(
        BattlePerformanceContinue__CoEndContinue_d__126_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattlePerformanceContinue__CoEndContinue_d__126_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattlePerformanceContinue__CoEndContinue_d__126__System_Collections_IEnumerator_get_Current(
        BattlePerformanceContinue__CoEndContinue_d__126_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceContinue__CoEndContinue_d__126__System_IDisposable_Dispose(
        BattlePerformanceContinue__CoEndContinue_d__126_o *this,
        const MethodInfo *method)
{
  ;
}