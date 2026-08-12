void BattlePerformanceContinue___ctor(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x8
  struct System_String_o **v10; // x8
  struct System_String_o *v11; // x1

  v9 = qword_5984390;
  this->fields.spellBtnColor = (struct UnityEngine_Color_o)xmmword_E9BFD0;
  this->fields.spellnowColor = (struct UnityEngine_Color_o)xmmword_E9D550;
  v10 = *(struct System_String_o ***)(v9 + 184);
  v11 = *v10;
  this->fields.cancelInterruptionEvent = *v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cancelInterruptionEvent,
    (int32_t)v11,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattlePerformanceContinue__AttachStoneCountRefreshComponent(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v4; // x21

  if ( (byte_5973FCA & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_BattlePerformanceContinue__AttachStoneCountRefreshComponent_b__86_0__);
    byte_5973FCA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__AttachStoneCountRefreshComponent_b__86_0__,
    0);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v4, 0, 0);
}


void BattlePerformanceContinue__CallbackConfirmDialog(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_5973FBD & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_5153/*"DEADLINE"*/);
    byte_5973FBD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0),
        BattlePerformanceContinue__closeContinueItem(this, v6),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0) )
  {
    sub_2213CDC(Instance, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5153/*"DEADLINE"*/, 0);
}


void BattlePerformanceContinue__CheckContinueItem(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  __int64 *v5; // x8

  if ( (byte_5973FC8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10019/*"OK"*/);
    sub_2213A60(&StringLiteral_9652/*"NG"*/);
    byte_5973FC8 = 1;
  }
  BattlePerformanceContinue__ResetContinueItemInfo(this, method);
  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  if ( !BattleData__EnableContinueItem(data, 0) )
  {
    data = (BattleData_o *)this->fields.myFsm;
    if ( data )
    {
      v5 = &StringLiteral_9652/*"NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(data, v3);
  }
  data = (BattleData_o *)this->fields.myFsm;
  this->fields.IsContinueItem = 1;
  if ( !data )
    goto LABEL_10;
  v5 = &StringLiteral_10019/*"OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)*v5, 0);
}


void BattlePerformanceContinue__CheckDefenceTargetBroken(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *Component_object; // x20
  NGUIFader_OnFinished_o *v6; // x21
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5973FF4 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue__CheckDefenceTargetBroken_b__130_0__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
    sub_2213A60(&NGUIFader_OnFinished_TypeInfo);
    sub_2213A60(&StringLiteral_5807/*"EVENT_FALSE"*/);
    byte_5973FF4 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  data = (BattleData_o *)BattleData__CheckDefenceTargetBroken(data, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    perf = this->fields.perf;
    this->fields._isDefenceTargetBroken_k__BackingField = 1;
    if ( perf )
    {
      data = (BattleData_o *)perf->fields.fadeObject;
      if ( data )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)data,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
        v6 = (NGUIFader_OnFinished_o *)sub_2213CCC(NGUIFader_OnFinished_TypeInfo);
        NGUIFader_OnFinished___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue__CheckDefenceTargetBroken_b__130_0__,
          0);
        if ( Component_object )
        {
          v7.fields.r = 1.0;
          v7.fields.g = 1.0;
          v7.fields.b = 1.0;
          v7.fields.a = 1.0;
          NGUIFader__FadeStart((NGUIFader_o *)Component_object, v7, 0.5, 0, v6, 0, 0);
          return;
        }
      }
    }
LABEL_11:
    sub_2213CDC(data, method);
  }
  data = (BattleData_o *)this->fields.myFsm;
  this->fields._isDefenceTargetBroken_k__BackingField = 0;
  if ( !data )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_5807/*"EVENT_FALSE"*/, 0);
}


void BattlePerformanceContinue__CloseGiveUp(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *giveUpWindow; // x0

  if ( (byte_5973FC3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9649/*"NEXT"*/);
    byte_5973FC3 = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow
    || (UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0),
        (giveUpWindow = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_2213CDC(giveUpWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)giveUpWindow, (System_String_o *)StringLiteral_9649/*"NEXT"*/, 0);
}


System_Collections_IEnumerator_o *BattlePerformanceContinue__CoEndContinue(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5973FF6 & 1) == 0 )
  {
    sub_2213A60(&BattlePerformanceContinue__CoEndContinue_d__133_TypeInfo);
    byte_5973FF6 = 1;
  }
  v3 = sub_2213CCC(BattlePerformanceContinue__CoEndContinue_d__133_TypeInfo);
  BattlePerformanceContinue__CoEndContinue_d__133___ctor((BattlePerformanceContinue__CoEndContinue_d__133_o *)v3, 0, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattlePerformanceContinue__EndContinue(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0

  if ( this->fields._isDefenceTargetBroken_k__BackingField )
  {
    v3 = BattlePerformanceContinue__CoEndContinue(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v3, 0);
  }
  this->fields._isDefenceTargetBroken_k__BackingField = 0;
}


int32_t BattlePerformanceContinue__GetPayableStoneNum(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v3; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_2213CDC(0, v3);
  return UserGameEntity__get_PayableStoneNum(SelfUserGame, 0);
}


void BattlePerformanceContinue__Initialize(
        BattlePerformanceContinue_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  UnityEngine_Component_o *window; // x0
  UnityEngine_Transform_o *v26; // x20
  __int64 v27; // x1
  UILabel_o *checkGiveUpLabel; // x20
  UILabel_o *checkUseCommandSpell; // x20
  UILabel_o *checkUseGem; // x20
  UILabel_o *checkUseBuyGem; // x20

  if ( (byte_5973FBE & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2842/*"BATTLE_CONTINUE_NO_STONE"*/);
    sub_2213A60(&StringLiteral_2831/*"BATTLE_CONTINUE_CHECK_SPELL"*/);
    sub_2213A60(&StringLiteral_2832/*"BATTLE_CONTINUE_CHECK_STONE"*/);
    sub_2213A60(&StringLiteral_2961/*"BATTLE_RETIRE_CHECKSTR"*/);
    byte_5973FBE = 1;
  }
  this->fields.perf = inperf;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.perf,
    (int32_t)inperf,
    (System_String_o *)indata,
    (System_String_o *)inlogic,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.data, (int32_t)indata, v12, v13, v14, v15, v16, v17);
  this->fields.logic = inlogic;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.logic, (int32_t)inlogic, v18, v19, v20, v21, v22, v23);
  window = (UnityEngine_Component_o *)this->fields.window;
  if ( !window )
    goto LABEL_26;
  window = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(window, 0);
  v26 = (UnityEngine_Transform_o *)window;
  if ( !byte_5969AE0 )
  {
    window = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v26 )
    goto LABEL_26;
  UnityEngine_Transform__set_localPosition(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  window = (UnityEngine_Component_o *)this->fields.window;
  if ( !window )
    goto LABEL_26;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD))window->klass[1]._1.this_arg.data)(
    window,
    *(_QWORD *)&window->klass[1]._1.this_arg.bits);
  window = (UnityEngine_Component_o *)this->fields.window;
  if ( !window )
    goto LABEL_26;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))window->klass[1]._1.declaringType)(
    window,
    window->klass[1]._1.parent);
  window = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !window )
    goto LABEL_26;
  window = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(window, 0);
  if ( !window )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  window = (UnityEngine_Component_o *)this->fields.giveUpWindow;
  if ( !window )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  window = (UnityEngine_Component_o *)this->fields.commandspellObject;
  if ( !window )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  window = (UnityEngine_Component_o *)this->fields.stoneObject;
  if ( !window )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  window = (UnityEngine_Component_o *)this->fields.nostoneObject;
  if ( !window )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  window = (UnityEngine_Component_o *)this->fields.ContinueItemWindow;
  if ( !window )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  window = (UnityEngine_Component_o *)this->fields.bg;
  if ( !window )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0);
  checkGiveUpLabel = this->fields.checkGiveUpLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2961/*"BATTLE_RETIRE_CHECKSTR"*/, 0);
  if ( !checkGiveUpLabel )
    goto LABEL_26;
  UILabel__set_text(checkGiveUpLabel, (System_String_o *)window, 0);
  checkUseCommandSpell = this->fields.checkUseCommandSpell;
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2831/*"BATTLE_CONTINUE_CHECK_SPELL"*/, 0);
  if ( !checkUseCommandSpell )
    goto LABEL_26;
  UILabel__set_text(checkUseCommandSpell, (System_String_o *)window, 0);
  checkUseGem = this->fields.checkUseGem;
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2832/*"BATTLE_CONTINUE_CHECK_STONE"*/, 0);
  if ( !checkUseGem
    || (UILabel__set_text(checkUseGem, (System_String_o *)window, 0),
        checkUseBuyGem = this->fields.checkUseBuyGem,
        window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2842/*"BATTLE_CONTINUE_NO_STONE"*/, 0),
        !checkUseBuyGem)
    || (UILabel__set_text(checkUseBuyGem, (System_String_o *)window, 0),
        (window = (UnityEngine_Component_o *)this->fields.continueWaveRestartWindow) == 0)
    || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD))window->klass[1]._1.this_arg.data)(
          window,
          *(_QWORD *)&window->klass[1]._1.this_arg.bits),
        (window = (UnityEngine_Component_o *)this->fields.continueWaveRestartWindow) == 0) )
  {
LABEL_26:
    sub_2213CDC(window, v24);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))window->klass[1]._1.fields)(
    window,
    0,
    window->klass[1]._1.events);
}


bool BattlePerformanceContinue__IsAvailableStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v3; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_2213CDC(0, v3);
  return UserGameEntity__get_PayableStoneNum(SelfUserGame, 0) > 0;
}


void BattlePerformanceContinue__OpenBrokenMessage(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  Il2CppMethodPointer methodPtr; // x8
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x21
  __int64 v9; // x1
  System_String_o *v10; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v12; // x22
  int v13; // [xsp+3Ch] [xbp-44h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_5973FF5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceContinue__OpenBrokenMessage_b__131_0__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_26596/*"{0}_{1}"*/);
    sub_2213A60(&StringLiteral_2853/*"BATTLE_DIALOG_DEFENCE_TARGET_BROKEN"*/);
    this = (BattlePerformanceContinue_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973FF5 = 1;
  }
  klass = v2[3].klass;
  if ( !klass )
    goto LABEL_13;
  methodPtr = klass->vtable[36].methodPtr;
  if ( !methodPtr )
    goto LABEL_13;
  v5 = (Il2CppObject *)StringLiteral_2853/*"BATTLE_DIALOG_DEFENCE_TARGET_BROKEN"*/;
  v13 = *((_DWORD *)methodPtr + 8);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v13);
  v8 = System_String__Format_75697880((System_String_o *)StringLiteral_26596/*"{0}_{1}"*/, v5, v6, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  if ( LocalizationManager__ContainsKey(v8, 0) )
    v5 = (Il2CppObject *)v8;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
  v10 = LocalizationManager__Get((System_String_o *)v5, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v12, v2, Method_BattlePerformanceContinue__OpenBrokenMessage_b__131_0__, 0);
  if ( !Instance )
LABEL_13:
    sub_2213CDC(this, method);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v10,
    v12,
    -1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0.0,
    0,
    0);
}


void BattlePerformanceContinue__OpenContinueInterruption(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  struct BattleWindowInterruptionComponent_o *continueInterruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5973FFD & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue__OpenContinueInterruption_b__140_0__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5973FFD = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueInterruption_b__140_0__,
    0);
  if ( !continueInterruptionWindow )
    sub_2213CDC(v5, v6);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))continueInterruptionWindow->klass->vtable._10_Open.methodPtr)(
    continueInterruptionWindow,
    v4,
    continueInterruptionWindow->klass->vtable._10_Open.method);
}


void BattlePerformanceContinue__OpenContinueItemWindow(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  void *ContinueItemWindow; // x0
  UserGameEntity_o *v4; // x20
  BattleData_o *data; // x8
  int32_t OverwriteCommandSpellContinue; // w0
  UILabel_o *ContinueCommandSpellNum; // x21
  System_String_o *v8; // x1
  UILabel_o *ContinueStoneNum; // x21
  Il2CppObject *v10; // x0
  UILabel_o *ContinueItemNumLabel; // x21
  Il2CppObject *v12; // x0
  UISprite_o *ContinueItemSpr; // x21
  __int64 v14; // x1
  int32_t ContinueItemImageId; // w22
  int64_t v16; // x8
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  __int64 v24; // x1
  UILabel_o *ContinueItemBtnLabel; // x21
  UILabel_o *deadLine; // x21
  System_String_o *v27; // x22
  int64_t ContinueDeadLine; // x0
  Il2CppObject *RestTime; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  __int64 v36; // x1
  __int64 v37; // x1
  UILabel_o *ContinueCommandSpellBtnLabel; // x21
  __int64 v39; // x1
  int32_t PayableStoneNum; // w8
  UILabel_o *ContinueStoneBtnLabel; // x20
  int v42; // w9
  System_String_o *v43; // x0
  const MethodInfo *v44; // x1
  __int64 v45; // x1
  UILabel_o *ContinueRetireBtnLabel; // x20
  const MethodInfo *v47; // x4
  System_String_o **v48; // x8
  struct BattleData_o *v49; // x8
  struct BattleData_o *v50; // x8
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  int32_t v57; // w1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v59; // x21
  int64_t ContinueItemNum; // [xsp+8h] [xbp-58h] BYREF
  int32_t stone; // [xsp+18h] [xbp-48h] BYREF
  int v62; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5973FC9 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceContinue_endOpenContinueItem__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10019/*"OK"*/);
    sub_2213A60(&StringLiteral_2830/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    sub_2213A60(&StringLiteral_2837/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/);
    sub_2213A60(&StringLiteral_2829/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/);
    sub_2213A60(&StringLiteral_2847/*"BATTLE_CONTINUE_USE_SPELL"*/);
    sub_2213A60(&StringLiteral_10020/*"OK_CONTINUE_ITEM"*/);
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    sub_2213A60(&StringLiteral_2834/*"BATTLE_CONTINUE_ITEM_BTN"*/);
    sub_2213A60(&StringLiteral_2838/*"BATTLE_CONTINUE_ITEM_SELECT"*/);
    sub_2213A60(&StringLiteral_2839/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_2843/*"BATTLE_CONTINUE_RETIRE"*/);
    byte_5973FC9 = 1;
  }
  ContinueItemWindow = this->fields.ContinueItemWindow;
  v62 = 0;
  if ( !ContinueItemWindow )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ContinueItemWindow, 1, 0);
  ContinueItemWindow = UserGameMaster__getSelfUserGame(0);
  if ( !this->fields.data )
    goto LABEL_79;
  v4 = (UserGameEntity_o *)ContinueItemWindow;
  ContinueItemWindow = (void *)BattleData__CheckCurrentTemporaryCommandSpell(
                                 this->fields.data,
                                 (UserGameEntity_o *)ContinueItemWindow,
                                 0);
  data = this->fields.data;
  v62 = (int)ContinueItemWindow;
  if ( !data )
    goto LABEL_79;
  OverwriteCommandSpellContinue = BattleData__GetOverwriteCommandSpellContinue(data, (int32_t)ContinueItemWindow, 0);
  ContinueCommandSpellNum = this->fields.ContinueCommandSpellNum;
  v62 = OverwriteCommandSpellContinue;
  ContinueItemWindow = System_Int32__ToString((int32_t)&v62, 0);
  if ( !ContinueCommandSpellNum )
    goto LABEL_79;
  v8 = (System_String_o *)(ContinueItemWindow ? ContinueItemWindow : StringLiteral_1/*""*/);
  UILabel__set_text(ContinueCommandSpellNum, v8, 0);
  if ( !v4 )
    goto LABEL_79;
  ContinueStoneNum = this->fields.ContinueStoneNum;
  stone = v4->fields.stone;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &stone);
  ContinueItemWindow = System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v10, 0);
  if ( !ContinueStoneNum )
    goto LABEL_79;
  UILabel__set_text(ContinueStoneNum, (System_String_o *)ContinueItemWindow, 0);
  ContinueItemWindow = this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_79;
  BattleData__UpdateContinueItemInfo((BattleData_o *)ContinueItemWindow, 0);
  ContinueItemWindow = this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_79;
  ContinueItemNumLabel = this->fields.ContinueItemNumLabel;
  ContinueItemNum = BattleData__GetContinueItemNum((BattleData_o *)ContinueItemWindow, 0);
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &ContinueItemNum);
  ContinueItemWindow = System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v12, 0);
  if ( !ContinueItemNumLabel )
    goto LABEL_79;
  UILabel__set_text(ContinueItemNumLabel, (System_String_o *)ContinueItemWindow, 0);
  ContinueItemWindow = this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_79;
  ContinueItemSpr = this->fields.ContinueItemSpr;
  ContinueItemImageId = BattleData__GetContinueItemImageId((BattleData_o *)ContinueItemWindow, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14);
  AtlasManager__SetItem(ContinueItemSpr, ContinueItemImageId, 0);
  ContinueItemWindow = this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_79;
  v16 = BattleData__GetContinueItemNum((BattleData_o *)ContinueItemWindow, 0);
  ContinueItemWindow = this->fields.ContinueItemBtn;
  if ( v16 < 1 )
  {
    if ( !ContinueItemWindow )
      goto LABEL_79;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !ContinueItemWindow )
      goto LABEL_79;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0);
    ContinueItemWindow = this->fields.ContinueItemBtn;
    if ( !ContinueItemWindow )
      goto LABEL_79;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_79;
    v23 = StringLiteral_5657/*"END_PROC"*/;
  }
  else
  {
    if ( !ContinueItemWindow )
      goto LABEL_79;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !ContinueItemWindow )
      goto LABEL_79;
    v63.fields.r = 1.0;
    v63.fields.g = 1.0;
    v63.fields.b = 1.0;
    v63.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, v63, 0);
    ContinueItemWindow = this->fields.ContinueItemBtn;
    if ( !ContinueItemWindow )
      goto LABEL_79;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_79;
    v23 = StringLiteral_10020/*"OK_CONTINUE_ITEM"*/;
  }
  *((_QWORD *)ContinueItemWindow + 5) = v23;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)ContinueItemWindow + 40), v23, v17, v18, v19, v20, v21, v22);
  ContinueItemBtnLabel = this->fields.ContinueItemBtnLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2834/*"BATTLE_CONTINUE_ITEM_BTN"*/, 0);
  if ( !ContinueItemBtnLabel )
    goto LABEL_79;
  UILabel__set_text(ContinueItemBtnLabel, (System_String_o *)ContinueItemWindow, 0);
  deadLine = this->fields.deadLine;
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2837/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, 0);
  if ( !this->fields.data )
    goto LABEL_79;
  v27 = (System_String_o *)ContinueItemWindow;
  ContinueDeadLine = BattleData__GetContinueDeadLine(this->fields.data, 0);
  RestTime = (Il2CppObject *)LocalizationManager__GetRestTime(ContinueDeadLine, 0);
  ContinueItemWindow = System_String__Format(v27, RestTime, 0);
  if ( !deadLine )
    goto LABEL_79;
  UILabel__set_text(deadLine, (System_String_o *)ContinueItemWindow, 0);
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( v62 >= 3 )
  {
    if ( !ContinueItemWindow )
      goto LABEL_79;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !ContinueItemWindow )
      goto LABEL_79;
    v64.fields.r = 1.0;
    v64.fields.g = 1.0;
    v64.fields.b = 1.0;
    v64.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, v64, 0);
    ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
    if ( !ContinueItemWindow )
      goto LABEL_79;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_79;
    v36 = StringLiteral_10019/*"OK"*/;
  }
  else
  {
    if ( !ContinueItemWindow )
      goto LABEL_79;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !ContinueItemWindow )
      goto LABEL_79;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0);
    ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
    if ( !ContinueItemWindow )
      goto LABEL_79;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_79;
    v36 = StringLiteral_5657/*"END_PROC"*/;
  }
  *((_QWORD *)ContinueItemWindow + 5) = v36;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)ContinueItemWindow + 40), v36, v30, v31, v32, v33, v34, v35);
  ContinueCommandSpellBtnLabel = this->fields.ContinueCommandSpellBtnLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2847/*"BATTLE_CONTINUE_USE_SPELL"*/, 0);
  if ( !ContinueCommandSpellBtnLabel )
    goto LABEL_79;
  UILabel__set_text(ContinueCommandSpellBtnLabel, (System_String_o *)ContinueItemWindow, 0);
  PayableStoneNum = UserGameEntity__get_PayableStoneNum(v4, 0);
  ContinueStoneBtnLabel = this->fields.ContinueStoneBtnLabel;
  v42 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( PayableStoneNum < 1 )
  {
    if ( !v42 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
    v43 = (System_String_o *)StringLiteral_2829/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/;
  }
  else
  {
    if ( !v42 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
    v43 = (System_String_o *)StringLiteral_2830/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/;
  }
  ContinueItemWindow = LocalizationManager__Get(v43, 0);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_79;
  UILabel__set_text(ContinueStoneBtnLabel, (System_String_o *)ContinueItemWindow, 0);
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, v44);
  ContinueRetireBtnLabel = this->fields.ContinueRetireBtnLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2843/*"BATTLE_CONTINUE_RETIRE"*/, 0);
  if ( !ContinueRetireBtnLabel
    || ((UILabel__set_text(ContinueRetireBtnLabel, (System_String_o *)ContinueItemWindow, 0), v62 >= 3)
      ? (v48 = (System_String_o **)&StringLiteral_2838/*"BATTLE_CONTINUE_ITEM_SELECT"*/)
      : (v48 = (System_String_o **)&StringLiteral_2839/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/),
        (BattlePerformanceContinue__SetContinueMessage(this, this->fields.ContinueLabel, *v48, 0x80000000, v47),
         (v49 = this->fields.data) == 0)
     || (ContinueItemWindow = v49->fields.quest_ent) == 0) )
  {
LABEL_79:
    sub_2213CDC(ContinueItemWindow, method);
  }
  ContinueItemWindow = (void *)QuestEntity__HasFlag((QuestEntity_o *)ContinueItemWindow, 0x400000000LL, 0);
  if ( ((unsigned __int8)ContinueItemWindow & 1) != 0 )
    goto LABEL_71;
  v50 = this->fields.data;
  if ( !v50 )
    goto LABEL_79;
  ContinueItemWindow = v50->fields.quest_ent;
  if ( !ContinueItemWindow )
    goto LABEL_79;
  if ( QuestEntity__HasFlag((QuestEntity_o *)ContinueItemWindow, 0x100000000LL, 0) )
    goto LABEL_71;
  ContinueItemWindow = this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_79;
  if ( BattleData__IsHideCommandSpell((BattleData_o *)ContinueItemWindow, 0) )
  {
LABEL_71:
    ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
    if ( ContinueItemWindow )
    {
      ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)ContinueItemWindow,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( ContinueItemWindow )
      {
        UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0);
        ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
        if ( ContinueItemWindow )
        {
          ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)ContinueItemWindow,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
          if ( ContinueItemWindow )
          {
            v57 = StringLiteral_5657/*"END_PROC"*/;
            *((_QWORD *)ContinueItemWindow + 5) = StringLiteral_5657/*"END_PROC"*/;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)((char *)ContinueItemWindow + 40),
              v57,
              v51,
              v52,
              v53,
              v54,
              v55,
              v56);
            ContinueItemWindow = this->fields.ContinueCommandSpellNum;
            if ( ContinueItemWindow )
            {
              UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellnowColor, 0);
              goto LABEL_77;
            }
          }
        }
      }
    }
    goto LABEL_79;
  }
LABEL_77:
  window = this->fields.window;
  v59 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v59,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endOpenContinueItem__,
    0);
  if ( !window )
    goto LABEL_79;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._10_Open.methodPtr)(
    window,
    v59,
    window->klass->vtable._10_Open.method);
}


void BattlePerformanceContinue__OpenContinueWaveRestart(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5973FF9 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue__OpenContinueWaveRestart_b__136_0__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5973FF9 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueWaveRestart_b__136_0__,
    0);
  if ( !continueWaveRestartWindow )
    sub_2213CDC(v5, v6);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))continueWaveRestartWindow->klass->vtable._10_Open.methodPtr)(
    continueWaveRestartWindow,
    v4,
    continueWaveRestartWindow->klass->vtable._10_Open.method);
}


void BattlePerformanceContinue__OpenContinueWaveSelectWindow(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *waveSelectDialog; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *waveSelectDialogPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  void *Object; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t v15; // w22
  __int64 v16; // x1
  int32_t Phase; // w23
  int32_t EventId; // w24
  Il2CppObject *Master_object; // x20
  UserEventDeckEntity_o *v20; // x20
  QuestRestrictionInfo_o *v21; // x21
  int32_t v22; // w22
  int32_t v23; // w23
  int32_t DispWaveCount; // w24
  struct BattleData_o *data; // x8
  WaveBattleSelectWaveDialog_o *v26; // x24
  WaveBattleSelectWaveDialog_CloseDelegate_o *v27; // x25
  WaveBattleSelectWaveDialog_o *v28; // x20
  System_Action_int__o *v29; // x21
  WaveBattleSelectWaveDialog_o *v30; // x20
  System_Action_o *v31; // x21

  if ( (byte_5974001 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_0__);
    sub_2213A60(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_1__);
    sub_2213A60(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_2__);
    sub_2213A60(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventDeckMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestRestrictionInfo_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_5974001 = 1;
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(waveSelectDialog, 0, 0) )
  {
    waveSelectDialogPrefab = this->fields.waveSelectDialogPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, waveSelectDialogPrefab, transform, 0, 0);
    if ( !Object )
      goto LABEL_40;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    this->fields.waveSelectDialog = (struct WaveBattleSelectWaveDialog_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.waveSelectDialog,
      (int32_t)Component_object,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  Object = this->fields.data;
  if ( !Object )
    goto LABEL_40;
  Object = (void *)BattleData__getQuestId((BattleData_o *)Object, 0);
  if ( !this->fields.data )
    goto LABEL_40;
  v15 = (int)Object;
  Phase = BattleData__getPhase(this->fields.data, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
  Object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Object )
    goto LABEL_40;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Object, v15, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Object = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Object = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_40;
  Object = UserEventDeckMaster__getDeckList(
             (UserEventDeckMaster_o *)Master_object,
             *(_QWORD *)(*((_QWORD *)Object + 23) + 64LL),
             EventId,
             v15,
             Phase,
             0,
             0);
  if ( !Object )
    goto LABEL_40;
  if ( !*((_DWORD *)Object + 6) )
    sub_2213CE4(Object);
  v20 = (UserEventDeckEntity_o *)*((_QWORD *)Object + 4);
  v21 = (QuestRestrictionInfo_o *)sub_2213CCC(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_50415132(v21, EventId, v15, Phase, 0);
  Object = this->fields.data;
  if ( !Object )
    goto LABEL_40;
  Object = (void *)BattleData__GetMaxWaveCount((BattleData_o *)Object, 0);
  if ( !this->fields.data )
    goto LABEL_40;
  v22 = (int)Object;
  Object = (void *)BattleData__getDispWaveCount(this->fields.data, 0);
  if ( !this->fields.data )
    goto LABEL_40;
  v23 = (int)Object;
  DispWaveCount = BattleData__getDispWaveCount(this->fields.data, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
  if ( !byte_596D622 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D622 = 1;
  }
  Object = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
    Object = TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(*((_QWORD *)Object + 23) + 616LL) = DispWaveCount;
  if ( !v21 )
    goto LABEL_40;
  if ( QuestRestrictionInfo__IsWaveSetupSwitchParty(v21, 0) )
  {
    Object = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    data = this->fields.data;
    if ( data && Object )
    {
      PartyOrganizationUtility__SetTempWaveInfoList((PartyOrganizationUtility_o *)Object, data->fields.waveInfoList, 0);
      goto LABEL_36;
    }
LABEL_40:
    sub_2213CDC(Object, v4);
  }
LABEL_36:
  v26 = this->fields.waveSelectDialog;
  v27 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_2213CCC(WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
  WaveBattleSelectWaveDialog_CloseDelegate___ctor(
    v27,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_0__,
    0);
  if ( !v26 )
    goto LABEL_40;
  WaveBattleSelectWaveDialog__SetDialog(v26, v20, v21, v22, v23, 1, v27, 0);
  v28 = this->fields.waveSelectDialog;
  v29 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v29,
    (Il2CppObject *)this,
    (intptr_t)Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_1__,
    0);
  if ( !v28 )
    goto LABEL_40;
  WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(v28, v29, 0);
  v30 = this->fields.waveSelectDialog;
  v31 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_2__,
    0);
  if ( !v30 )
    goto LABEL_40;
  WaveBattleSelectWaveDialog__Open_41497060(v30, v31, 0);
}


void BattlePerformanceContinue__OpenGiveUp(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *giveUpWindow; // x0
  struct BattleData_o *data; // x8
  struct BattleEntity_o *battle_ent; // x8
  QuestEntity_o *v6; // x20
  UILabel_o *giveUpContinueItemNum; // x20
  Il2CppObject *v8; // x0
  UISprite_o *giveUpContinueItemSpr; // x20
  __int64 v10; // x1
  int32_t ContinueItemImageId; // w21
  __int64 v12; // x1
  LocalizationManager_c *v13; // x0
  UILabel_o *checkGiveUpLabel; // x20
  __int64 *v15; // x8
  bool HasFlag; // w8
  int v17; // w9
  int64_t ContinueItemNum; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5973FC2 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_2961/*"BATTLE_RETIRE_CHECKSTR"*/);
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    sub_2213A60(&StringLiteral_2962/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/);
    byte_5973FC2 = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow )
    goto LABEL_56;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0);
  if ( !giveUpWindow )
    goto LABEL_56;
  v19.fields.x = 0.0;
  v19.fields.z = 0.0;
  v19.fields.y = 72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v19, 0);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpBg;
  if ( !giveUpWindow )
    goto LABEL_56;
  UIWidget__set_height((UIWidget_o *)giveUpWindow, 239, 0);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpTitle;
  if ( !giveUpWindow )
    goto LABEL_56;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)giveUpWindow,
                                               0);
  if ( !giveUpWindow )
    goto LABEL_56;
  v20.fields.x = 0.0;
  v20.fields.z = 0.0;
  v20.fields.y = 77.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v20, 0);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
  if ( !giveUpWindow )
    goto LABEL_56;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)giveUpWindow,
                                               0);
  if ( !giveUpWindow )
    goto LABEL_56;
  v21.fields.x = 0.0;
  v21.fields.z = 0.0;
  v21.fields.y = 6.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v21, 0);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpContinueItemLabel;
  if ( !giveUpWindow )
    goto LABEL_56;
  giveUpWindow = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)giveUpWindow, 0);
  if ( !giveUpWindow )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0);
  giveUpWindow = this->fields.giveUpOkBtn;
  if ( !giveUpWindow )
    goto LABEL_56;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0);
  if ( !giveUpWindow )
    goto LABEL_56;
  v22.fields.z = 0.0;
  v22.fields.x = 193.0;
  v22.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v22, 0);
  giveUpWindow = this->fields.giveUpCancelBtn;
  if ( !giveUpWindow )
    goto LABEL_56;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0);
  if ( !giveUpWindow )
    goto LABEL_56;
  v23.fields.z = 0.0;
  v23.fields.x = -193.0;
  v23.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v23, 0);
  giveUpWindow = this->fields.giveUpContinueItemRoot;
  if ( !giveUpWindow )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0);
  giveUpWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !giveUpWindow )
    goto LABEL_56;
  giveUpWindow = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)giveUpWindow,
                                               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  data = this->fields.data;
  if ( !data )
    goto LABEL_56;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent || !giveUpWindow )
    goto LABEL_56;
  giveUpWindow = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)giveUpWindow,
                                               battle_ent->fields.questId,
                                               (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v6 = (QuestEntity_o *)giveUpWindow;
  if ( this->fields.IsContinueItem )
  {
    giveUpWindow = (UnityEngine_GameObject_o *)this->fields.data;
    if ( !giveUpWindow )
      goto LABEL_56;
    giveUpWindow = (UnityEngine_GameObject_o *)BattleData__GetContinueItemNum((BattleData_o *)giveUpWindow, 0);
    if ( (__int64)giveUpWindow >= 1 )
    {
      giveUpWindow = this->fields.giveUpWindow;
      if ( giveUpWindow )
      {
        giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0);
        if ( giveUpWindow )
        {
          v24.fields.x = 0.0;
          v24.fields.z = 0.0;
          v24.fields.y = 66.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v24, 0);
          giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpBg;
          if ( giveUpWindow )
          {
            UIWidget__set_height((UIWidget_o *)giveUpWindow, 279, 0);
            giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpTitle;
            if ( giveUpWindow )
            {
              giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)giveUpWindow,
                                                           0);
              if ( giveUpWindow )
              {
                v25.fields.x = 0.0;
                v25.fields.z = 0.0;
                v25.fields.y = 97.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v25, 0);
                giveUpWindow = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
                if ( giveUpWindow )
                {
                  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)giveUpWindow,
                                                               0);
                  if ( giveUpWindow )
                  {
                    v26.fields.x = 0.0;
                    v26.fields.z = 0.0;
                    v26.fields.y = 26.0;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v26, 0);
                    giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpContinueItemLabel;
                    if ( giveUpWindow )
                    {
                      giveUpWindow = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)giveUpWindow, 0);
                      if ( giveUpWindow )
                      {
                        UnityEngine_GameObject__SetActive(giveUpWindow, 1, 0);
                        giveUpWindow = this->fields.giveUpOkBtn;
                        if ( giveUpWindow )
                        {
                          giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                       giveUpWindow,
                                                                       0);
                          if ( giveUpWindow )
                          {
                            v27.fields.z = 0.0;
                            v27.fields.x = 193.0;
                            v27.fields.y = -92.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v27, 0);
                            giveUpWindow = this->fields.giveUpCancelBtn;
                            if ( giveUpWindow )
                            {
                              giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                           giveUpWindow,
                                                                           0);
                              if ( giveUpWindow )
                              {
                                v28.fields.z = 0.0;
                                v28.fields.x = -193.0;
                                v28.fields.y = -92.0;
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)giveUpWindow,
                                  v28,
                                  0);
                                giveUpWindow = this->fields.giveUpContinueItemRoot;
                                if ( giveUpWindow )
                                {
                                  UnityEngine_GameObject__SetActive(giveUpWindow, 1, 0);
                                  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.data;
                                  if ( giveUpWindow )
                                  {
                                    giveUpContinueItemNum = this->fields.giveUpContinueItemNum;
                                    ContinueItemNum = BattleData__GetContinueItemNum((BattleData_o *)giveUpWindow, 0);
                                    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &ContinueItemNum);
                                    giveUpWindow = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                 (System_String_o *)StringLiteral_26432/*"{0:#,0}"*/,
                                                                                 v8,
                                                                                 0);
                                    if ( giveUpContinueItemNum )
                                    {
                                      UILabel__set_text(giveUpContinueItemNum, (System_String_o *)giveUpWindow, 0);
                                      giveUpWindow = (UnityEngine_GameObject_o *)this->fields.data;
                                      if ( giveUpWindow )
                                      {
                                        giveUpContinueItemSpr = this->fields.giveUpContinueItemSpr;
                                        ContinueItemImageId = BattleData__GetContinueItemImageId(
                                                                (BattleData_o *)giveUpWindow,
                                                                0);
                                        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
                                        AtlasManager__SetItem(giveUpContinueItemSpr, ContinueItemImageId, 0);
                                        v13 = LocalizationManager_TypeInfo;
                                        checkGiveUpLabel = this->fields.checkGiveUpLabel;
                                        if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                          goto LABEL_45;
LABEL_44:
                                        j_il2cpp_runtime_class_init_0(v13, v12);
LABEL_45:
                                        v15 = &StringLiteral_2961/*"BATTLE_RETIRE_CHECKSTR"*/;
                                        goto LABEL_51;
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
LABEL_56:
      sub_2213CDC(giveUpWindow, method);
    }
  }
  if ( !v6 )
    goto LABEL_56;
  HasFlag = QuestEntity__HasFlag(v6, 0x40000000, 0);
  v13 = LocalizationManager_TypeInfo;
  checkGiveUpLabel = this->fields.checkGiveUpLabel;
  v17 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( !HasFlag )
  {
    if ( v17 )
      goto LABEL_45;
    goto LABEL_44;
  }
  if ( !v17 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  v15 = &StringLiteral_2962/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/;
LABEL_51:
  giveUpWindow = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v15, 0);
  if ( !checkGiveUpLabel )
    goto LABEL_56;
  UILabel__set_text(checkGiveUpLabel, (System_String_o *)giveUpWindow, 0);
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(giveUpWindow, 1, 0);
}


void BattlePerformanceContinue__OpenInterruptionConfirmWindow(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *v6; // x20
  System_String_o *v7; // x21
  System_String_o *v8; // x22
  System_String_o *v9; // x23
  System_String_o *v10; // x24
  CommonConfirmDialog_ClickDelegate_o *v11; // x25

  if ( (byte_5973FFF & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue__OpenInterruptionConfirmWindow_b__142_0__);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_2898/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/);
    sub_2213A60(&StringLiteral_2896/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_2895/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/);
    byte_5973FFF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0, 0);
  v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_2896/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2895/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2898/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
  v11 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenInterruptionConfirmWindow_b__142_0__,
    0);
  if ( !v6 )
LABEL_8:
    sub_2213CDC(Instance, v4);
  CommonUI__OpenConfirmDecideDialog((CommonUI_o *)v6, v7, v8, v9, v10, v11, 23, 280, 13.0, 22, 1, 0);
}


void BattlePerformanceContinue__OpenWaveSelectConfirmDialog(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  int32_t selectedInterruptionWave; // w20
  bool v5; // zf
  __int64 v6; // x1
  int v7; // w8
  struct BattleData_o *v8; // x8
  System_String_o *v9; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  struct BattleData_o *v12; // x8
  System_String_o *v13; // x20
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  int32_t v17; // w21
  __int64 v18; // x1
  int v19; // w8
  System_String_o *v20; // x0
  struct BattleData_o *v21; // x8
  System_String_o *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x21
  int32_t v25; // w27
  int32_t v26; // w22
  __int64 v27; // x1
  Il2CppObject *Instance; // x23
  System_String_o *v29; // x24
  System_String_o *v30; // x25
  CommonConfirmDialog_ClickDelegate_o *v31; // x26
  int32_t decideTxtSize; // w8
  int32_t DispWaveCount; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_5974002 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue__OpenWaveSelectConfirmDialog_b__145_0__);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_2905/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_2903/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_2902/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_2904/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/);
    sub_2213A60(&StringLiteral_2907/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/);
    sub_2213A60(&StringLiteral_1205/*"00"*/);
    sub_2213A60(&StringLiteral_2906/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/);
    byte_5974002 = 1;
  }
  data = this->fields.data;
  DispWaveCount = 0;
  if ( !data )
    goto LABEL_34;
  selectedInterruptionWave = data->fields.selectedInterruptionWave;
  v5 = selectedInterruptionWave == BattleData__getDispWaveCount(data, 0);
  v7 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v5 )
  {
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2906/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/, 0);
    v8 = this->fields.data;
    if ( !v8 )
      goto LABEL_34;
    v9 = (System_String_o *)data;
    v10 = (Il2CppObject *)System_Int32__ToString_77138656((int)v8 + 1176, (System_String_o *)StringLiteral_1205/*"00"*/, 0);
    v11 = System_String__Format(v9, v10, 0);
  }
  else
  {
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2905/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0);
    v12 = this->fields.data;
    if ( !v12 )
      goto LABEL_34;
    v13 = (System_String_o *)data;
    data = (BattleData_o *)System_Int32__ToString_77138656((int)v12 + 1176, (System_String_o *)StringLiteral_1205/*"00"*/, 0);
    if ( !this->fields.data )
      goto LABEL_34;
    v14 = (Il2CppObject *)data;
    DispWaveCount = BattleData__getDispWaveCount(this->fields.data, 0);
    v15 = (Il2CppObject *)System_Int32__ToString_77138656(
                            (int32_t)&DispWaveCount,
                            (System_String_o *)StringLiteral_1205/*"00"*/,
                            0);
    v11 = System_String__Format_75697880(v13, v14, v15, 0);
  }
  v16 = v11;
  data = this->fields.data;
  if ( !data )
    goto LABEL_34;
  v17 = data->fields.selectedInterruptionWave;
  v5 = v17 == BattleData__getDispWaveCount(data, 0);
  v19 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( !v5 )
  {
    if ( !v19 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2903/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0);
    v21 = this->fields.data;
    if ( v21 )
    {
      v22 = (System_String_o *)data;
      v23 = (Il2CppObject *)System_Int32__ToString_77138656((int)v21 + 1176, (System_String_o *)StringLiteral_1205/*"00"*/, 0);
      v20 = System_String__Format(v22, v23, 0);
      goto LABEL_25;
    }
LABEL_34:
    sub_2213CDC(data, method);
  }
  if ( !v19 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2904/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/, 0);
LABEL_25:
  v24 = v20;
  data = this->fields.data;
  if ( !data )
    goto LABEL_34;
  v25 = data->fields.selectedInterruptionWave;
  v26 = BattleData__getDispWaveCount(data, 0);
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !data )
    goto LABEL_34;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)data, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_2907/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, 0);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_2902/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, 0);
  v31 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v31,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenWaveSelectConfirmDialog_b__145_0__,
    0);
  if ( !Instance )
    goto LABEL_34;
  if ( v25 == v26 )
    decideTxtSize = 30;
  else
    decideTxtSize = 22;
  CommonUI__OpenConfirmDecideDialog((CommonUI_o *)Instance, v29, v16, v24, v30, v31, 26, 280, 13.0, decideTxtSize, 1, 0);
}


void BattlePerformanceContinue__ProcInterruption(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  struct BattleWindowInterruptionComponent_o *continueInterruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5974000 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue__ProcInterruption_b__143_0__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5974000 = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__ProcInterruption_b__143_0__,
    0);
  if ( !continueInterruptionWindow )
    sub_2213CDC(v5, v6);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))continueInterruptionWindow->klass->vtable._12_Close.methodPtr)(
    continueInterruptionWindow,
    v4,
    continueInterruptionWindow->klass->vtable._12_Close.method);
}


void BattlePerformanceContinue__ProcSelectWaveRestart(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *waveSelectDialog; // x20
  __int64 v4; // x1
  WaveBattleSelectWaveDialog_o *v5; // x0
  UnityEngine_Object_o *continueInterruptionWindow; // x20
  struct BattleWindowInterruptionComponent_o *v7; // x20
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_5974003 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue__ProcSelectWaveRestart_b__146_0__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974003 = 1;
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0, 0) )
  {
    v5 = this->fields.waveSelectDialog;
    if ( !v5 )
      goto LABEL_14;
    WaveBattleSelectWaveDialog__Close(v5, 0);
  }
  continueInterruptionWindow = (UnityEngine_Object_o *)this->fields.continueInterruptionWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(continueInterruptionWindow, 0, 0) )
  {
    v7 = this->fields.continueInterruptionWindow;
    v8 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattlePerformanceContinue__ProcSelectWaveRestart_b__146_0__,
      0);
    if ( v7 )
    {
      ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v7->klass->vtable._12_Close.methodPtr)(
        v7,
        v8,
        v7->klass->vtable._12_Close.method);
      return;
    }
LABEL_14:
    sub_2213CDC(v5, v4);
  }
}


void BattlePerformanceContinue__ProcWaveRestartFromInterruption(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  struct BattleWindowInterruptionComponent_o *continueInterruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5973FFE & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue__ProcWaveRestartFromInterruption_b__141_0__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5973FFE = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__ProcWaveRestartFromInterruption_b__141_0__,
    0);
  if ( !continueInterruptionWindow )
    sub_2213CDC(v5, v6);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))continueInterruptionWindow->klass->vtable._12_Close.methodPtr)(
    continueInterruptionWindow,
    v4,
    continueInterruptionWindow->klass->vtable._12_Close.method);
}


void BattlePerformanceContinue__ResetContinueItemInfo(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *ContinueItemWindow; // x0

  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow
    || (UnityEngine_GameObject__SetActive(ContinueItemWindow, 0, 0),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.data) == 0) )
  {
    sub_2213CDC(ContinueItemWindow, method);
  }
  BattleData__UpdateContinueItemInfo((BattleData_o *)ContinueItemWindow, 0);
  *(_WORD *)&this->fields.IsContinueItem = 0;
}


void BattlePerformanceContinue__SetContinueMessage(
        BattlePerformanceContinue_o *this,
        UILabel_o *label,
        System_String_o *localizationKey,
        int32_t stoneCount,
        const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v10; // x1
  System_String_o *mText; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  struct BattleData_o *data; // x8
  struct BattleDefenceTargetData_o *defenceTargetData; // x8
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x21
  System_String_o *v21; // x22
  __int64 v22; // x1
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  int32_t uiId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5973FF7 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2833/*"BATTLE_CONTINUE_DEFENCE_TARGET_HEAL"*/);
    sub_2213A60(&StringLiteral_26596/*"{0}_{1}"*/);
    sub_2213A60(&StringLiteral_2841/*"BATTLE_CONTINUE_NOT_ENOUGH_STONE"*/);
    byte_5973FF7 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, label);
  SelfUserGame = LocalizationManager__Get(localizationKey, 0);
  if ( !label )
    goto LABEL_25;
  UILabel__set_text(label, SelfUserGame, 0);
  if ( stoneCount == 0x80000000 )
  {
    SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      goto LABEL_25;
    stoneCount = UserGameEntity__get_PayableStoneNum((UserGameEntity_o *)SelfUserGame, 0);
  }
  if ( stoneCount <= 0 )
  {
    mText = label->fields.mText;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2841/*"BATTLE_CONTINUE_NOT_ENOUGH_STONE"*/, 0);
    v13 = System_String__Concat_75651716(mText, v12, 0);
    UILabel__set_text(label, v13, 0);
  }
  SelfUserGame = (System_String_o *)this->fields.data;
  if ( !SelfUserGame )
    goto LABEL_25;
  SelfUserGame = (System_String_o *)BattleData__CheckDefenceTargetData((BattleData_o *)SelfUserGame, 0);
  if ( ((unsigned __int8)SelfUserGame & 1) == 0 )
    return;
  data = this->fields.data;
  if ( !data || (defenceTargetData = data->fields.defenceTargetData) == 0 )
LABEL_25:
    sub_2213CDC(SelfUserGame, v10);
  v16 = (Il2CppObject *)StringLiteral_2833/*"BATTLE_CONTINUE_DEFENCE_TARGET_HEAL"*/;
  uiId = defenceTargetData->fields.uiId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &uiId);
  v18 = System_String__Format_75697880((System_String_o *)StringLiteral_26596/*"{0}_{1}"*/, v16, v17, 0);
  v20 = label->fields.mText;
  v21 = v18;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  if ( LocalizationManager__ContainsKey(v21, 0) )
    v16 = (Il2CppObject *)v21;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  v23 = LocalizationManager__Get((System_String_o *)v16, 0);
  v24 = System_String__Concat_75651716(v20, v23, 0);
  UILabel__set_text(label, v24, 0);
}


void BattlePerformanceContinue__SkipCommandSpellRequest(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x1
  BattleData_c *v7; // x0

  if ( (byte_5973FF3 & 1) == 0 )
  {
    sub_2213A60(&BattleData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_2213A60(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3938/*"CONNECT_OK"*/);
    sub_2213A60(&StringLiteral_7214/*"GAME_OVER_COMMAND_SPELL_ID"*/);
    byte_5973FF3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  Instance = (void *)ConstantMaster__getValue((System_String_o *)StringLiteral_7214/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int32_t)Instance,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_12;
  if ( !this->fields.data )
    goto LABEL_12;
  BattleData__LossTemporaryCommandSpell(this->fields.data, *((_DWORD *)Instance + 5), 0);
  Instance = this->fields.data;
  if ( !Instance )
    goto LABEL_12;
  BattleData__SuccessContinue((BattleData_o *)Instance, 0);
  v7 = BattleData_TypeInfo;
  this->fields.continueRetryFlg = 0;
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, v6);
  BattleData__setContinueBattleFlg(0, 1, 0);
  Instance = this->fields.myFsm;
  if ( !Instance )
LABEL_12:
    sub_2213CDC(Instance, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3938/*"CONNECT_OK"*/, 0);
}


void BattlePerformanceContinue__StartContinue(
        BattlePerformanceContinue_o *this,
        bool inIsProgress,
        const MethodInfo *method)
{
  __int64 v4; // x1
  BattlePerformance_o *perf; // x0

  this->fields.isProgress = inIsProgress;
  BattlePerformanceContinue__StartContinueImpl(this, 0, method);
  perf = this->fields.perf;
  if ( !perf )
    sub_2213CDC(0, v4);
  BattlePerformance__SetTimeScale(perf, 1.0, 0);
}


void BattlePerformanceContinue__StartContinueImpl(
        BattlePerformanceContinue_o *this,
        bool inIsProgress,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  UserGameEntity_o *v6; // x20
  BattleViewItemlistComponent_o *itemWindow; // x21
  BattleDropItem_array *DropItems; // x22
  BattleDropItemComponent_ClickDelegate_o *v9; // x23
  BattleData_o *data; // x8
  int32_t OverwriteCommandSpellContinue; // w0
  UILabel_o *commandspell_now; // x21
  System_String_o *v13; // x1
  const MethodInfo *v14; // x2
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x1
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5973FC1 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue_StartContinueImpl__);
    sub_2213A60(&Method_BattlePerformanceContinue_showConf__);
    sub_2213A60(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&StringLiteral_12838/*"START_CONTINUE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973FC1 = 1;
  }
  v18 = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !this->fields.data )
    goto LABEL_20;
  v6 = SelfUserGame;
  itemWindow = this->fields.itemWindow;
  DropItems = BattleData__getDropItems(this->fields.data, 0);
  v9 = (BattleDropItemComponent_ClickDelegate_o *)sub_2213CCC(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(v9, (Il2CppObject *)this, Method_BattlePerformanceContinue_showConf__, 0);
  if ( !itemWindow )
    goto LABEL_20;
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, DropItems, v9, this->fields.itemColumnCount, 0);
  SelfUserGame = (UserGameEntity_o *)this->fields.itemWindow;
  if ( !SelfUserGame )
    goto LABEL_20;
  BattleViewItemlistComponent__setHide((BattleViewItemlistComponent_o *)SelfUserGame, 0);
  SelfUserGame = (UserGameEntity_o *)this->fields.data;
  if ( !SelfUserGame )
    goto LABEL_20;
  SelfUserGame = (UserGameEntity_o *)BattleData__CheckCurrentTemporaryCommandSpell((BattleData_o *)SelfUserGame, v6, 0);
  data = this->fields.data;
  v18 = (int)SelfUserGame;
  if ( !data )
    goto LABEL_20;
  OverwriteCommandSpellContinue = BattleData__GetOverwriteCommandSpellContinue(data, (int32_t)SelfUserGame, 0);
  commandspell_now = this->fields.commandspell_now;
  v18 = OverwriteCommandSpellContinue;
  SelfUserGame = (UserGameEntity_o *)System_Int32__ToString((int32_t)&v18, 0);
  if ( !commandspell_now )
    goto LABEL_20;
  v13 = SelfUserGame ? (System_String_o *)SelfUserGame : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(commandspell_now, v13, 0);
  BattlePerformanceContinue__refreshStoneNow(this, v6, v14);
  SelfUserGame = (UserGameEntity_o *)this->fields.commandspellObject;
  if ( !SelfUserGame )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0);
  SelfUserGame = (UserGameEntity_o *)this->fields.stoneObject;
  if ( !SelfUserGame )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0);
  SelfUserGame = (UserGameEntity_o *)this->fields.nostoneObject;
  if ( !SelfUserGame )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0);
  SelfUserGame = (UserGameEntity_o *)this->fields.bg;
  if ( !SelfUserGame )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0);
  v15 = Method_BattlePerformanceContinue_StartContinueImpl__;
  if ( (*((_BYTE *)Method_BattlePerformanceContinue_StartContinueImpl__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_2213A78(Method_BattlePerformanceContinue_StartContinueImpl__);
  v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 7, 0, 0);
  BattlePerformanceContinue__ResetContinueItemInfo(this, v17);
  SelfUserGame = (UserGameEntity_o *)this->fields.myFsm;
  if ( !SelfUserGame )
LABEL_20:
    sub_2213CDC(SelfUserGame, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_12838/*"START_CONTINUE"*/, 0);
}


void BattlePerformanceContinue__StartContinueInterruption(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *continueInterruptionWindow; // x21
  struct BattleWindowInterruptionComponent_o **p_continueInterruptionWindow; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *continueInterruptionWindowPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  BattleWindowInterruptionComponent_o *v16; // x20
  System_Action_o *v17; // x21
  System_Action_o *v18; // x22
  System_Action_o *v19; // x23

  if ( (byte_5973FFC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceContinue__StartContinueInterruption_b__139_0__);
    sub_2213A60(&Method_BattlePerformanceContinue__StartContinueInterruption_b__139_1__);
    sub_2213A60(&Method_BattlePerformanceContinue__StartContinueInterruption_b__139_2__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_12839/*"START_CONTINUE_INTERRUPTION"*/);
    byte_5973FFC = 1;
  }
  continueInterruptionWindow = (UnityEngine_Object_o *)this->fields.continueInterruptionWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  p_continueInterruptionWindow = &this->fields.continueInterruptionWindow;
  if ( UnityEngine_Object__op_Equality(continueInterruptionWindow, 0, 0) )
  {
    continueInterruptionWindowPrefab = this->fields.continueInterruptionWindowPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    Object = BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               continueInterruptionWindowPrefab,
               transform,
               0,
               0);
    if ( !Object )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
    *p_continueInterruptionWindow = (struct BattleWindowInterruptionComponent_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.continueInterruptionWindow,
      (int32_t)Component_object,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  Object = (UnityEngine_GameObject_o *)*p_continueInterruptionWindow;
  if ( !*p_continueInterruptionWindow )
    goto LABEL_15;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)Object, 2, 0.15, 0, 0);
  Object = (UnityEngine_GameObject_o *)*p_continueInterruptionWindow;
  if ( !*p_continueInterruptionWindow )
    goto LABEL_15;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))Object->klass[1]._1.declaringType)(
    Object,
    Object->klass[1]._1.parent);
  Object = (UnityEngine_GameObject_o *)*p_continueInterruptionWindow;
  if ( !*p_continueInterruptionWindow )
    goto LABEL_15;
  Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0);
  if ( !Object )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(Object, 0, 0);
  v16 = this->fields.continueInterruptionWindow;
  v17 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__139_0__,
    0);
  v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__139_1__,
    0);
  v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__139_2__,
    0);
  if ( !v16
    || (BattleWindowInterruptionComponent__SetInterruptionWindow(v16, 0, v17, v18, v19, 0, 1, 0),
        (Object = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
LABEL_15:
    sub_2213CDC(Object, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Object, (System_String_o *)StringLiteral_12839/*"START_CONTINUE_INTERRUPTION"*/, 0);
}


void BattlePerformanceContinue__StartContinueWaveRestart(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  System_Action_o *v4; // x21
  System_Action_o *v5; // x22
  PlayMakerFSM_o *myFsm; // x0
  __int64 v7; // x1

  if ( (byte_5973FF8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceContinue__StartContinueWaveRestart_b__135_0__);
    sub_2213A60(&Method_BattlePerformanceContinue__StartContinueWaveRestart_b__135_1__);
    sub_2213A60(&StringLiteral_12840/*"START_CONTINUE_WAVE_RESTART"*/);
    byte_5973FF8 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueWaveRestart_b__135_0__,
    0);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueWaveRestart_b__135_1__,
    0);
  if ( !continueWaveRestartWindow
    || (BattleWindowContinueWaveRestartComponent__SetWindow(continueWaveRestartWindow, v4, v5, 0),
        (myFsm = this->fields.myFsm) == 0) )
  {
    sub_2213CDC(myFsm, v7);
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12840/*"START_CONTINUE_WAVE_RESTART"*/, 0);
}


void BattlePerformanceContinue__Update(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *data; // x20
  __int64 v4; // x1
  BattleData_o *v5; // x0
  __int64 v6; // x1
  int64_t ContinueDeadLine; // x20
  Il2CppObject *RestTime; // x20
  UILabel_o *giveUpContinueItemLabel; // x21
  System_String_o *v10; // x0
  UILabel_o *deadLine; // x21
  System_String_o *v12; // x0
  UILabel_o *useCheckContinueItemLabel; // x21
  System_String_o *v14; // x0
  __int64 v15; // x1
  int64_t v16; // x20
  __int64 v17; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v19; // x21
  ErrorDialog_ClickDelegate_o *v20; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-50h]

  if ( (byte_5973FBC & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue_CallbackConfirmDialog__);
    sub_2213A60(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_2840/*"BATTLE_CONTINUE_ITEM_USE_CHECK"*/);
    sub_2213A60(&StringLiteral_2836/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/);
    sub_2213A60(&StringLiteral_2837/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/);
    sub_2213A60(&StringLiteral_2835/*"BATTLE_CONTINUE_ITEM_END_TIME"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973FBC = 1;
  }
  data = (UnityEngine_Object_o *)this->fields.data;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(data, 0, 0) && this->fields.IsContinueItem )
  {
    v5 = this->fields.data;
    if ( !v5 )
      goto LABEL_23;
    ContinueDeadLine = BattleData__GetContinueDeadLine(v5, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    RestTime = (Il2CppObject *)LocalizationManager__GetRestTime(ContinueDeadLine, 0);
    giveUpContinueItemLabel = this->fields.giveUpContinueItemLabel;
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2836/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, 0);
    v5 = (BattleData_o *)System_String__Format(v10, RestTime, 0);
    if ( !giveUpContinueItemLabel )
      goto LABEL_23;
    UILabel__set_text(giveUpContinueItemLabel, (System_String_o *)v5, 0);
    deadLine = this->fields.deadLine;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2837/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, 0);
    v5 = (BattleData_o *)System_String__Format(v12, RestTime, 0);
    if ( !deadLine )
      goto LABEL_23;
    UILabel__set_text(deadLine, (System_String_o *)v5, 0);
    useCheckContinueItemLabel = this->fields.useCheckContinueItemLabel;
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2840/*"BATTLE_CONTINUE_ITEM_USE_CHECK"*/, 0);
    v5 = (BattleData_o *)System_String__Format(v14, RestTime, 0);
    if ( !useCheckContinueItemLabel )
      goto LABEL_23;
    UILabel__set_text(useCheckContinueItemLabel, (System_String_o *)v5, 0);
    v5 = this->fields.data;
    if ( !v5 )
      goto LABEL_23;
    v16 = BattleData__GetContinueDeadLine(v5, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
    if ( v16 < NetworkManager__getTime(0) && !this->fields.isShowDeadLineDialog )
    {
      this->fields.isShowDeadLineDialog = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2835/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0);
      v20 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v20,
        (Il2CppObject *)this,
        Method_BattlePerformanceContinue_CallbackConfirmDialog__,
        0);
      if ( Instance )
      {
        *(_QWORD *)&effectDistance.fields.hasValue = 0;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_1/*""*/,
          v19,
          v20,
          0,
          0,
          -1.0,
          1,
          effectDistance,
          0);
        return;
      }
LABEL_23:
      sub_2213CDC(v5, v4);
    }
  }
}


void BattlePerformanceContinue__WaveRestartNg(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5973FFB & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue__WaveRestartNg_b__138_0__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5973FFB = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__WaveRestartNg_b__138_0__,
    0);
  if ( !continueWaveRestartWindow )
    sub_2213CDC(v5, v6);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))continueWaveRestartWindow->klass->vtable._12_Close.methodPtr)(
    continueWaveRestartWindow,
    v4,
    continueWaveRestartWindow->klass->vtable._12_Close.method);
}


void BattlePerformanceContinue__WaveRestartOk(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5973FFA & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue__WaveRestartOk_b__137_0__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5973FFA = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__WaveRestartOk_b__137_0__,
    0);
  if ( !continueWaveRestartWindow )
    sub_2213CDC(v5, v6);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))continueWaveRestartWindow->klass->vtable._12_Close.methodPtr)(
    continueWaveRestartWindow,
    v4,
    continueWaveRestartWindow->klass->vtable._12_Close.method);
}


void BattlePerformanceContinue___AttachStoneCountRefreshComponent_b__86_0(
        BattlePerformanceContinue_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_String_o *myFsm; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  UILabel_o *ContinueStoneNum; // x21
  UILabel_o *gem_now; // x22
  UILabel_o *stone_now; // x23
  BattlePerformanceContinue_o *v12; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  bool IsAvailableStone; // w8
  UILabel_o *ContinueStoneBtnLabel; // x20
  int v17; // w9
  UILabel_o *stoneBtnLabel; // x20
  System_String_o *ActiveStateName; // x0
  UILabel_o *v20; // x20
  BattlePerformanceContinue_o *v21; // x0
  const MethodInfo *v22; // x1
  UILabel_o *ContinueLabel; // x20
  System_String_o **v24; // x8
  System_String_o *v25; // x21
  int32_t PayableStoneNum; // w0
  const MethodInfo *v27; // x4
  UILabel_o *checkUseCommandSpell; // x20
  BattlePerformanceContinue_o *v29; // x0
  const MethodInfo *v30; // x1
  int32_t v31; // w0
  const MethodInfo *v32; // x4
  UILabel_o *checkUseGem; // x20
  BattlePerformanceContinue_o *v34; // x0
  const MethodInfo *v35; // x1
  int32_t v36; // w0
  const MethodInfo *v37; // x4
  int32_t v38; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5974004 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2831/*"BATTLE_CONTINUE_CHECK_SPELL"*/);
    sub_2213A60(&StringLiteral_2830/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
    sub_2213A60(&StringLiteral_2832/*"BATTLE_CONTINUE_CHECK_STONE"*/);
    sub_2213A60(&StringLiteral_2829/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/);
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    sub_2213A60(&StringLiteral_13217/*"Select_NoStone"*/);
    sub_2213A60(&StringLiteral_2838/*"BATTLE_CONTINUE_ITEM_SELECT"*/);
    sub_2213A60(&StringLiteral_2839/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/);
    sub_2213A60(&StringLiteral_13218/*"Select_Stone"*/);
    byte_5974004 = 1;
  }
  v38 = stoneCount;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v38);
  myFsm = System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v5, 0);
  if ( !this->fields.stoneNumInStonelessWindow )
    goto LABEL_28;
  v8 = myFsm;
  ContinueStoneNum = this->fields.ContinueStoneNum;
  gem_now = this->fields.gem_now;
  stone_now = this->fields.stone_now;
  UILabel__set_text(this->fields.stoneNumInStonelessWindow, myFsm, 0);
  if ( !stone_now )
    goto LABEL_28;
  UILabel__set_text(stone_now, v8, 0);
  if ( !gem_now )
    goto LABEL_28;
  UILabel__set_text(gem_now, v8, 0);
  if ( !ContinueStoneNum )
    goto LABEL_28;
  UILabel__set_text(ContinueStoneNum, v8, 0);
  IsAvailableStone = BattlePerformanceContinue__IsAvailableStone(v12, v13);
  ContinueStoneBtnLabel = this->fields.ContinueStoneBtnLabel;
  v17 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( IsAvailableStone )
  {
    if ( !v17 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
    myFsm = LocalizationManager__Get((System_String_o *)StringLiteral_2830/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, 0);
    if ( ContinueStoneBtnLabel )
    {
      UILabel__set_text(ContinueStoneBtnLabel, myFsm, 0);
      stoneBtnLabel = this->fields.stoneBtnLabel;
      myFsm = LocalizationManager__Get((System_String_o *)StringLiteral_2830/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, 0);
      if ( stoneBtnLabel )
      {
        UILabel__set_text(stoneBtnLabel, myFsm, 0);
        myFsm = (System_String_o *)this->fields.myFsm;
        if ( myFsm )
        {
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)myFsm, 0);
          if ( !System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_13217/*"Select_NoStone"*/, 0) )
            goto LABEL_23;
          myFsm = (System_String_o *)this->fields.nostoneObject;
          if ( myFsm )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 0, 0);
            myFsm = (System_String_o *)this->fields.stoneObject;
            if ( myFsm )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myFsm, 1, 0);
              myFsm = (System_String_o *)this->fields.myFsm;
              if ( myFsm )
              {
                PlayMakerFSM__SetState((PlayMakerFSM_o *)myFsm, (System_String_o *)StringLiteral_13218/*"Select_Stone"*/, 0);
                goto LABEL_23;
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_2213CDC(myFsm, v7);
  }
  if ( !v17 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
  myFsm = LocalizationManager__Get((System_String_o *)StringLiteral_2829/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, 0);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_28;
  UILabel__set_text(ContinueStoneBtnLabel, myFsm, 0);
  v20 = this->fields.stoneBtnLabel;
  myFsm = LocalizationManager__Get((System_String_o *)StringLiteral_2829/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, 0);
  if ( !v20 )
    goto LABEL_28;
  UILabel__set_text(v20, myFsm, 0);
LABEL_23:
  myFsm = (System_String_o *)UserGameMaster__getSelfUserGame(0);
  if ( !this->fields.data )
    goto LABEL_28;
  v21 = (BattlePerformanceContinue_o *)BattleData__CheckCurrentTemporaryCommandSpell(
                                         this->fields.data,
                                         (UserGameEntity_o *)myFsm,
                                         0);
  ContinueLabel = this->fields.ContinueLabel;
  if ( (int)v21 <= 2 )
    v24 = (System_String_o **)&StringLiteral_2839/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/;
  else
    v24 = (System_String_o **)&StringLiteral_2838/*"BATTLE_CONTINUE_ITEM_SELECT"*/;
  v25 = *v24;
  PayableStoneNum = BattlePerformanceContinue__GetPayableStoneNum(v21, v22);
  BattlePerformanceContinue__SetContinueMessage(this, ContinueLabel, v25, PayableStoneNum, v27);
  checkUseCommandSpell = this->fields.checkUseCommandSpell;
  v31 = BattlePerformanceContinue__GetPayableStoneNum(v29, v30);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    checkUseCommandSpell,
    (System_String_o *)StringLiteral_2831/*"BATTLE_CONTINUE_CHECK_SPELL"*/,
    v31,
    v32);
  checkUseGem = this->fields.checkUseGem;
  v36 = BattlePerformanceContinue__GetPayableStoneNum(v34, v35);
  BattlePerformanceContinue__SetContinueMessage(this, checkUseGem, (System_String_o *)StringLiteral_2832/*"BATTLE_CONTINUE_CHECK_STONE"*/, v36, v37);
}


void BattlePerformanceContinue___CheckDefenceTargetBroken_b__130_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5974005 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5972/*"EVENT_TRUE"*/);
    byte_5974005 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5972/*"EVENT_TRUE"*/, 0);
}


void BattlePerformanceContinue___OpenBrokenMessage_b__131_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5974006 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5638/*"END_CLOSE"*/);
    byte_5974006 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5638/*"END_CLOSE"*/, 0);
}


void BattlePerformanceContinue___OpenContinueInterruption_b__140_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_597400F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5652/*"END_OPEN"*/);
    byte_597400F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5652/*"END_OPEN"*/, 0);
}


void BattlePerformanceContinue___OpenContinueWaveRestart_b__136_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5974009 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5652/*"END_OPEN"*/);
    byte_5974009 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5652/*"END_OPEN"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__144_0(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattlePerformanceContinue_o *v9; // x19
  struct BattleData_o *data; // x8
  int32_t v11; // w1
  WaveBattleSelectWaveDialog_o *waveSelectDialog; // x20
  System_Action_o *v13; // x21

  v9 = this;
  if ( (byte_5974013 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_3__);
    sub_2213A60(&StringLiteral_3412/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/);
    this = (BattlePerformanceContinue_o *)sub_2213A60(&StringLiteral_7797/*"INTERRUPTION"*/);
    byte_5974013 = 1;
  }
  data = v9->fields.data;
  if ( isDecide )
  {
    if ( data )
    {
      data->fields.selectedInterruptionWave = -1;
      v11 = StringLiteral_3412/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
      v9->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3412/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v9->fields.cancelInterruptionEvent,
        v11,
        (System_String_o *)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      this = (BattlePerformanceContinue_o *)v9->fields.myFsm;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_7797/*"INTERRUPTION"*/, 0);
        return;
      }
    }
LABEL_10:
    sub_2213CDC(this, isDecide);
  }
  if ( !data )
    goto LABEL_10;
  waveSelectDialog = v9->fields.waveSelectDialog;
  data->fields.selectedInterruptionWave = -1;
  v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_3__,
    0);
  if ( !waveSelectDialog )
    goto LABEL_10;
  WaveBattleSelectWaveDialog__Close_41494860(waveSelectDialog, v13, 0);
}


void BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__144_1(
        BattlePerformanceContinue_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PlayMakerFSM_o *myFsm; // x0
  __int64 v8; // x1
  struct BattleData_o *data; // x8

  if ( (byte_5974015 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_1__);
    sub_2213A60(&StringLiteral_12063/*"SELECT_WAVE"*/);
    byte_5974015 = 1;
  }
  v5 = Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_1__;
  if ( (*((_BYTE *)Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_1__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_1__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  data = this->fields.data;
  if ( !data || (myFsm = this->fields.myFsm, data->fields.selectedInterruptionWave = wave, !myFsm) )
    sub_2213CDC(myFsm, v8);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12063/*"SELECT_WAVE"*/, 0);
}


void BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__144_2(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5974016 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5974016 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__144_3(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *waveSelectDialog; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5974014 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_9652/*"NG"*/);
    byte_5974014 = 1;
  }
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.waveSelectDialog;
  if ( !waveSelectDialog )
    goto LABEL_8;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(waveSelectDialog, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
  this->fields.waveSelectDialog = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.waveSelectDialog, 0, v6, v7, v8, v9, v10, v11);
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.myFsm;
  if ( !waveSelectDialog )
LABEL_8:
    sub_2213CDC(waveSelectDialog, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)waveSelectDialog, (System_String_o *)StringLiteral_9652/*"NG"*/, 0);
}


void BattlePerformanceContinue___OpenInterruptionConfirmWindow_b__142_0(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_String_o **p_cancelInterruptionEvent; // x8
  struct System_String_o *v21; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v23; // x20

  if ( (byte_5974011 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_BattlePerformanceContinue___c__DisplayClass142_0__OpenInterruptionConfirmWindow_b__1__);
    sub_2213A60(&BattlePerformanceContinue___c__DisplayClass142_0_TypeInfo);
    sub_2213A60(&StringLiteral_5160/*"DECIDE_INTERRUPTION"*/);
    byte_5974011 = 1;
  }
  v5 = sub_2213CCC(BattlePerformanceContinue___c__DisplayClass142_0_TypeInfo);
  BattlePerformanceContinue___c__DisplayClass142_0___ctor((BattlePerformanceContinue___c__DisplayClass142_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  p_cancelInterruptionEvent = &this->fields.cancelInterruptionEvent;
  if ( isDecide )
    p_cancelInterruptionEvent = (struct System_String_o **)&StringLiteral_5160/*"DECIDE_INTERRUPTION"*/;
  v21 = *p_cancelInterruptionEvent;
  *(_QWORD *)(v5 + 16) = *p_cancelInterruptionEvent;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v21, v14, v15, v16, v17, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_BattlePerformanceContinue___c__DisplayClass142_0__OpenInterruptionConfirmWindow_b__1__,
    0);
  if ( !Instance )
LABEL_8:
    sub_2213CDC(v6, v7);
  CommonUI__CloseConfirmDialog_37373868((CommonUI_o *)Instance, v23, 0);
}


void BattlePerformanceContinue___OpenWaveSelectConfirmDialog_b__145_0(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x20
  WaveBattleSelectWaveDialog_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo_47A29F8 *v14; // x0
  Il2CppObject *Instance; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x1
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_5974017 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_BattlePerformanceContinue___c__DisplayClass145_0__OpenWaveSelectConfirmDialog_b__1__);
    sub_2213A60(&BattlePerformanceContinue___c__DisplayClass145_0_TypeInfo);
    byte_5974017 = 1;
  }
  v5 = sub_2213CCC(BattlePerformanceContinue___c__DisplayClass145_0_TypeInfo);
  BattlePerformanceContinue___c__DisplayClass145_0___ctor((BattlePerformanceContinue___c__DisplayClass145_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  *(_BYTE *)(v5 + 16) = isDecide;
  Instance = SingletonMonoBehaviour_object___get_Instance(v14);
  v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BattlePerformanceContinue___c__DisplayClass145_0__OpenWaveSelectConfirmDialog_b__1__,
    0);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_37373868((CommonUI_o *)Instance, v16, 0);
  if ( *(_BYTE *)(v5 + 16) )
  {
    waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0, 0) )
    {
      v6 = this->fields.waveSelectDialog;
      if ( v6 )
      {
        WaveBattleSelectWaveDialog__Close(v6, 0);
        return;
      }
LABEL_12:
      sub_2213CDC(v6, v7);
    }
  }
}


void BattlePerformanceContinue___ProcInterruption_b__143_0(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_5974012 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10905/*"PROC_INTERRUPTION"*/);
    byte_5974012 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_2213CDC(0, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10905/*"PROC_INTERRUPTION"*/, 0);
}


void BattlePerformanceContinue___ProcSelectWaveRestart_b__146_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_5974018 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10906/*"PROC_PARTY_REORGANIZATION"*/);
    byte_5974018 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_2213CDC(0, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10906/*"PROC_PARTY_REORGANIZATION"*/, 0);
}


void BattlePerformanceContinue___ProcWaveRestartFromInterruption_b__141_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_5974010 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10908/*"PROC_WAVE_RESTART"*/);
    byte_5974010 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_2213CDC(0, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10908/*"PROC_WAVE_RESTART"*/, 0);
}


void BattlePerformanceContinue___StartContinueInterruption_b__139_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_597400C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16157/*"WAVE_RESTART"*/);
    byte_597400C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_16157/*"WAVE_RESTART"*/, 0);
}


void BattlePerformanceContinue___StartContinueInterruption_b__139_1(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_597400D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12064/*"SELECT_WAVE_RESTART"*/);
    byte_597400D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12064/*"SELECT_WAVE_RESTART"*/, 0);
}


void BattlePerformanceContinue___StartContinueInterruption_b__139_2(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  __int64 v10; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_597400E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7797/*"INTERRUPTION"*/);
    sub_2213A60(&StringLiteral_3411/*"CANCEL_INTERRUPTION"*/);
    byte_597400E = 1;
  }
  v9 = StringLiteral_3411/*"CANCEL_INTERRUPTION"*/;
  this->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3411/*"CANCEL_INTERRUPTION"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.cancelInterruptionEvent, v9, v2, v3, v4, v5, v6, v7);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, v10);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_7797/*"INTERRUPTION"*/, 0);
}


void BattlePerformanceContinue___StartContinueWaveRestart_b__135_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5974007 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10019/*"OK"*/);
    byte_5974007 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_10019/*"OK"*/, 0);
}


void BattlePerformanceContinue___StartContinueWaveRestart_b__135_1(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5974008 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9652/*"NG"*/);
    byte_5974008 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9652/*"NG"*/, 0);
}


void BattlePerformanceContinue___WaveRestartNg_b__138_0(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_597400B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9652/*"NG"*/);
    byte_597400B = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_2213CDC(0, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9652/*"NG"*/, 0);
}


void BattlePerformanceContinue___WaveRestartOk_b__137_0(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_597400A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10019/*"OK"*/);
    byte_597400A = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_2213CDC(0, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10019/*"OK"*/, 0);
}


void BattlePerformanceContinue__atlasLoadEnd(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleViewItemlistComponent_o *itemWindow; // x20
  BattleDropItem_array *DropItems; // x21
  BattleDropItemComponent_ClickDelegate_o *v6; // x22

  if ( (byte_5973FC0 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue_showConf__);
    sub_2213A60(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    byte_5973FC0 = 1;
  }
  data = this->fields.data;
  if ( !data
    || (itemWindow = this->fields.itemWindow,
        DropItems = BattleData__getDropItems(data, 0),
        v6 = (BattleDropItemComponent_ClickDelegate_o *)sub_2213CCC(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_showConf__,
          0),
        !itemWindow) )
  {
    sub_2213CDC(data, method);
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, DropItems, v6, this->fields.itemColumnCount, 0);
}


void BattlePerformanceContinue__callBackCommandSpell(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  BattlePerformanceContinue_o *v4; // x19
  __int64 v5; // x1
  __int64 *v6; // x8

  v4 = this;
  if ( (byte_5973FD2 & 1) == 0 )
  {
    sub_2213A60(&BattleData_TypeInfo);
    sub_2213A60(&StringLiteral_3937/*"CONNECT_NG"*/);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    this = (BattlePerformanceContinue_o *)sub_2213A60(&StringLiteral_3938/*"CONNECT_OK"*/);
    byte_5973FD2 = 1;
  }
  if ( !ret )
    goto LABEL_14;
  if ( System_String__Equals_75686512(ret, (System_String_o *)StringLiteral_23515/*"ok"*/, 0) )
  {
    v4->fields.continueRetryFlg = 0;
    if ( !*(&BattleData_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v5);
    BattleData__setContinueBattleFlg(0, 1, 0);
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    if ( this )
    {
      v6 = &StringLiteral_3938/*"CONNECT_OK"*/;
LABEL_12:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v6, 0);
      return;
    }
    goto LABEL_14;
  }
  if ( System_String__Equals_75686512(ret, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      v6 = &StringLiteral_3937/*"CONNECT_NG"*/;
      goto LABEL_12;
    }
LABEL_14:
    sub_2213CDC(this, ret);
  }
}


void BattlePerformanceContinue__callBackContinueItem(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  BattlePerformanceContinue_o *v4; // x19
  __int64 v5; // x1
  __int64 *v6; // x8

  v4 = this;
  if ( (byte_5973FEC & 1) == 0 )
  {
    sub_2213A60(&BattleData_TypeInfo);
    sub_2213A60(&StringLiteral_3937/*"CONNECT_NG"*/);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    this = (BattlePerformanceContinue_o *)sub_2213A60(&StringLiteral_3938/*"CONNECT_OK"*/);
    byte_5973FEC = 1;
  }
  if ( !ret )
    goto LABEL_17;
  if ( System_String__Equals_75686512(ret, (System_String_o *)StringLiteral_23515/*"ok"*/, 0) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.data;
    v4->fields.continueRetryFlg = 0;
    if ( this )
    {
      BattleData__SuccessContinue((BattleData_o *)this, 0);
      if ( !*(&BattleData_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v5);
      BattleData__setContinueBattleFlg(0, 1, 0);
      BattleData__SaveContinueItemId(0, 0, 0);
      this = (BattlePerformanceContinue_o *)v4->fields.data;
      if ( this )
      {
        BattleData__UpdateContinueItemInfo((BattleData_o *)this, 0);
        this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
        if ( this )
        {
          v6 = &StringLiteral_3938/*"CONNECT_OK"*/;
LABEL_15:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v6, 0);
          return;
        }
      }
    }
    goto LABEL_17;
  }
  if ( System_String__Equals_75686512(ret, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.data;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      BattleData__UpdateContinueItemInfo((BattleData_o *)this, 0);
      this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
      if ( this )
      {
        v6 = &StringLiteral_3937/*"CONNECT_NG"*/;
        goto LABEL_15;
      }
    }
LABEL_17:
    sub_2213CDC(this, ret);
  }
}


void BattlePerformanceContinue__callBackStone(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  BattlePerformanceContinue_o *v4; // x19
  __int64 v5; // x1
  __int64 *v6; // x8

  v4 = this;
  if ( (byte_5973FDF & 1) == 0 )
  {
    sub_2213A60(&BattleData_TypeInfo);
    sub_2213A60(&StringLiteral_3937/*"CONNECT_NG"*/);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    this = (BattlePerformanceContinue_o *)sub_2213A60(&StringLiteral_3938/*"CONNECT_OK"*/);
    byte_5973FDF = 1;
  }
  if ( !ret )
    goto LABEL_15;
  if ( System_String__Equals_75686512(ret, (System_String_o *)StringLiteral_23515/*"ok"*/, 0) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.data;
    v4->fields.continueRetryFlg = 0;
    if ( this )
    {
      BattleData__SuccessContinue((BattleData_o *)this, 0);
      if ( !*(&BattleData_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v5);
      BattleData__setContinueBattleFlg(0, 1, 0);
      this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
      if ( this )
      {
        v6 = &StringLiteral_3938/*"CONNECT_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v6, 0);
        return;
      }
    }
    goto LABEL_15;
  }
  if ( System_String__Equals_75686512(ret, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      v6 = &StringLiteral_3937/*"CONNECT_NG"*/;
      goto LABEL_13;
    }
LABEL_15:
    sub_2213CDC(this, ret);
  }
}


void BattlePerformanceContinue__callbackContinueCommandSpell(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v6; // x2

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(0, ret);
  BattleData__SuccessContinue(data, 0);
  BattlePerformanceContinue__callBackCommandSpell(this, ret, v6);
}


void BattlePerformanceContinue__callbaclStoneShop(
        BattlePerformanceContinue_o *this,
        int32_t result,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  __int64 *v9; // x8

  if ( (byte_5973FE7 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_3937/*"CONNECT_NG"*/);
    sub_2213A60(&StringLiteral_3938/*"CONNECT_OK"*/);
    byte_5973FE7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseStonePurchaseMenu(Instance, 0);
  BattlePerformanceContinue__closeNoStone(this, v7);
  if ( (unsigned int)(result - 1) > 1 )
  {
    Instance = (CommonUI_o *)this->fields.myFsm;
    if ( Instance )
    {
      v9 = &StringLiteral_3937/*"CONNECT_NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(Instance, v6);
  }
  BattlePerformanceContinue__refreshStoneNow(this, 0, v8);
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_10;
  v9 = &StringLiteral_3938/*"CONNECT_OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v9, 0);
}


void BattlePerformanceContinue__checkCountStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1

  if ( (byte_5973FF1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9649/*"NEXT"*/);
    byte_5973FF1 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_7;
  if ( UserGameEntity__get_PayableStoneNum(SelfUserGame, 0) > 0 )
    return;
  SelfUserGame = (UserGameEntity_o *)this->fields.myFsm;
  this->fields.IsContinueItem = 0;
  if ( !SelfUserGame )
LABEL_7:
    sub_2213CDC(SelfUserGame, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_9649/*"NEXT"*/, 0);
}


void BattlePerformanceContinue__checkDeadLineStoneShopEnd(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  __int64 v4; // x1
  int64_t ContinueDeadLine; // x20
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v8; // x21
  ErrorDialog_ClickDelegate_o *v9; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-50h]

  if ( (byte_5973FF2 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue_CallbackConfirmDialog__);
    sub_2213A60(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_9649/*"NEXT"*/);
    sub_2213A60(&StringLiteral_2835/*"BATTLE_CONTINUE_ITEM_END_TIME"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973FF2 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ContinueDeadLine = BattleData__GetContinueDeadLine(data, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( ContinueDeadLine < NetworkManager__getTime(0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2835/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0);
    v9 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v9,
      (Il2CppObject *)this,
      Method_BattlePerformanceContinue_CallbackConfirmDialog__,
      0);
    if ( Instance )
    {
      *(_QWORD *)&effectDistance.fields.hasValue = 0;
      effectDistance.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        (CommonUI_o *)Instance,
        (System_String_o *)StringLiteral_1/*""*/,
        v8,
        v9,
        0,
        0,
        -1.0,
        1,
        effectDistance,
        0);
      return;
    }
LABEL_13:
    sub_2213CDC(data, method);
  }
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_9649/*"NEXT"*/, 0);
}


void BattlePerformanceContinue__checkSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  int32_t OverwriteCommandSpellContinue; // w8
  __int64 *v6; // x8

  if ( (byte_5973FCC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10019/*"OK"*/);
    sub_2213A60(&StringLiteral_9652/*"NG"*/);
    byte_5973FCC = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !this->fields.data )
    goto LABEL_11;
  SelfUserGame = (UserGameEntity_o *)BattleData__CheckCurrentTemporaryCommandSpell(this->fields.data, SelfUserGame, 0);
  if ( !this->fields.data )
    goto LABEL_11;
  OverwriteCommandSpellContinue = BattleData__GetOverwriteCommandSpellContinue(
                                    this->fields.data,
                                    (int32_t)SelfUserGame,
                                    0);
  SelfUserGame = (UserGameEntity_o *)this->fields.myFsm;
  if ( OverwriteCommandSpellContinue >= 3 )
  {
    if ( SelfUserGame )
    {
      v6 = &StringLiteral_10019/*"OK"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_2213CDC(SelfUserGame, v4);
  }
  if ( !SelfUserGame )
    goto LABEL_11;
  v6 = &StringLiteral_9652/*"NG"*/;
LABEL_10:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)*v6, 0);
}


void BattlePerformanceContinue__checkStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  const MethodInfo *v4; // x2
  PlayMakerFSM_o *myFsm; // x0
  __int64 v6; // x1
  int32_t PayableStoneNum; // w8
  __int64 *v8; // x8

  if ( (byte_5973FD9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10019/*"OK"*/);
    sub_2213A60(&StringLiteral_9652/*"NG"*/);
    byte_5973FD9 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  BattlePerformanceContinue__refreshStoneNow(this, SelfUserGame, v4);
  if ( !SelfUserGame )
    goto LABEL_10;
  PayableStoneNum = UserGameEntity__get_PayableStoneNum(SelfUserGame, 0);
  myFsm = this->fields.myFsm;
  if ( PayableStoneNum < 1 )
  {
    if ( myFsm )
    {
      v8 = &StringLiteral_9652/*"NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(myFsm, v6);
  }
  if ( !myFsm )
    goto LABEL_10;
  v8 = &StringLiteral_10019/*"OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v8, 0);
}


void BattlePerformanceContinue__closeContinueItem(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_5973FE9 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue_endCloseContinueItem__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5973FE9 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseContinueItem__,
          0),
        !window) )
  {
    sub_2213CDC(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._12_Close.methodPtr)(
    window,
    v5,
    window->klass->vtable._12_Close.method);
}


void BattlePerformanceContinue__closeNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_5973FE4 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue_endCloseNoStone__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5973FE4 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseNoStone__,
          0),
        !window) )
  {
    sub_2213CDC(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._12_Close.methodPtr)(
    window,
    v5,
    window->klass->vtable._12_Close.method);
}


void BattlePerformanceContinue__closeSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_5973FCF & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue_endCloseSpell__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5973FCF = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseSpell__,
          0),
        !window) )
  {
    sub_2213CDC(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._12_Close.methodPtr)(
    window,
    v5,
    window->klass->vtable._12_Close.method);
}


void BattlePerformanceContinue__closeStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_5973FDC & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue_endCloseStone__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    byte_5973FDC = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseStone__,
          0),
        !window) )
  {
    sub_2213CDC(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._12_Close.methodPtr)(
    window,
    v5,
    window->klass->vtable._12_Close.method);
}


void BattlePerformanceContinue__closeUseCheck(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *useCheckWindow; // x0

  useCheckWindow = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !useCheckWindow
    || (useCheckWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useCheckWindow, 0)) == 0 )
  {
    sub_2213CDC(useCheckWindow, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useCheckWindow, 0, 0);
}


void BattlePerformanceContinue__connectContinueItem(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleData_o *data; // x0
  int32_t ContinueUseItemId; // w20
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  __int64 v8; // x1
  struct BattleData_o *v9; // x8
  struct BattleEntity_o *battle_ent; // x9

  if ( (byte_5973FEB & 1) == 0 )
  {
    sub_2213A60(&BattleData_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceContinue_callBackContinueItem__);
    sub_2213A60(&Method_NetworkManager_getRequest_BattleUseContinueItemRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5973FEB = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  if ( !*(&BattleData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v3);
  BattleData__setContinueBattleFlg(4, 0, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  ContinueUseItemId = BattleData__GetContinueUseItemId(data, 0);
  BattleData__SaveContinueItemId(ContinueUseItemId, 0, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  BattleData__procPlayerContinue(data, this->fields.isProgress, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callBackContinueItem__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  data = (BattleData_o *)NetworkManager__getRequest_object_(
                           v7,
                           (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_BattleUseContinueItemRequest___);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_16;
  if ( this->fields.continueRetryFlg )
  {
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0);
      return;
    }
LABEL_16:
    sub_2213CDC(data, v4);
  }
  battle_ent = v9->fields.battle_ent;
  if ( !battle_ent || !data )
    goto LABEL_16;
  BattleUseContinueItemRequest__beginRequest(
    (BattleUseContinueItemRequest_o *)data,
    battle_ent->fields.id,
    v9->fields.continueCount,
    ContinueUseItemId,
    1,
    0);
}


void BattlePerformanceContinue__connectSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleData_o *data; // x0
  const MethodInfo *v6; // x1
  _BOOL4 continueRetryFlg; // w21
  NetworkManager_ResultCallbackFunc_o *v8; // x0
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x1
  struct BattleData_o *v12; // x8
  BattleCommandSpellRequest_o *v13; // x20
  int32_t continueCount; // w21
  struct BattleEntity_o *battle_ent; // x22
  struct BattleData_o *v16; // x8

  if ( (byte_5973FD1 & 1) == 0 )
  {
    sub_2213A60(&BattleData_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceContinue_callBackCommandSpell__);
    sub_2213A60(&Method_BattlePerformanceContinue_callbackContinueCommandSpell__);
    sub_2213A60(&Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&StringLiteral_7214/*"GAME_OVER_COMMAND_SPELL_ID"*/);
    byte_5973FD1 = 1;
  }
  BattlePerformanceContinue__closeSpell(this, method);
  if ( !*(&BattleData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v3);
  BattleData__setContinueBattleFlg(2, 0, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  BattleData__procPlayerContinue(data, this->fields.isProgress, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  if ( BattleData__IsUseTemporaryCommandSpell(data, 0) )
  {
    BattlePerformanceContinue__SkipCommandSpellRequest(this, v6);
    return;
  }
  continueRetryFlg = this->fields.continueRetryFlg;
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  v9 = v8;
  if ( continueRetryFlg )
  {
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattlePerformanceContinue_callBackCommandSpell__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
    data = (BattleData_o *)NetworkManager__getRequest_object_(
                             v9,
                             (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0);
      return;
    }
LABEL_21:
    sub_2213CDC(data, v4);
  }
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callbackContinueCommandSpell__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  data = (BattleData_o *)NetworkManager__getRequest_object_(
                           v9,
                           (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_21;
  v13 = (BattleCommandSpellRequest_o *)data;
  continueCount = v12->fields.continueCount;
  battle_ent = v12->fields.battle_ent;
  data = (BattleData_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_7214/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0);
  if ( !battle_ent )
    goto LABEL_21;
  v16 = this->fields.data;
  if ( !v16 || !v13 )
    goto LABEL_21;
  BattleCommandSpellRequest__beginRequest(
    v13,
    battle_ent->fields.id,
    (int32_t)data,
    v16->fields.waveClearNeedTurn,
    continueCount,
    1,
    0);
}


void BattlePerformanceContinue__connectStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleData_o *data; // x0
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  __int64 v7; // x1
  struct BattleData_o *v8; // x8
  struct BattleEntity_o *battle_ent; // x9

  if ( (byte_5973FDE & 1) == 0 )
  {
    sub_2213A60(&BattleData_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceContinue_callBackStone__);
    sub_2213A60(&Method_NetworkManager_getRequest_BattleUseContinueRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5973FDE = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  if ( !*(&BattleData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v3);
  BattleData__setContinueBattleFlg(1, 0, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  BattleData__procPlayerContinue(data, this->fields.isProgress, 0);
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callBackStone__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
  data = (BattleData_o *)NetworkManager__getRequest_object_(
                           v6,
                           (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_BattleUseContinueRequest___);
  v8 = this->fields.data;
  if ( !v8 )
    goto LABEL_15;
  if ( this->fields.continueRetryFlg )
  {
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0);
      return;
    }
LABEL_15:
    sub_2213CDC(data, v4);
  }
  battle_ent = v8->fields.battle_ent;
  if ( !battle_ent || !data )
    goto LABEL_15;
  BattleUseContinueRequest__beginRequest(
    (BattleUseContinueRequest_o *)data,
    battle_ent->fields.id,
    v8->fields.waveClearNeedTurn,
    v8->fields.continueCount,
    0);
}


void BattlePerformanceContinue__endCloseContinueItem(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *ContinueItemWindow; // x0

  if ( (byte_5973FEA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5638/*"END_CLOSE"*/);
    byte_5973FEA = 1;
  }
  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow
    || (UnityEngine_GameObject__SetActive(ContinueItemWindow, 0, 0),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)ContinueItemWindow, 0),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_2213CDC(ContinueItemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ContinueItemWindow, (System_String_o *)StringLiteral_5638/*"END_CLOSE"*/, 0);
}


void BattlePerformanceContinue__endCloseNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nostoneObject; // x0

  if ( (byte_5973FE5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5638/*"END_CLOSE"*/);
    byte_5973FE5 = 1;
  }
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject
    || (UnityEngine_GameObject__SetActive(nostoneObject, 0, 0),
        (nostoneObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_2213CDC(nostoneObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)nostoneObject, (System_String_o *)StringLiteral_5638/*"END_CLOSE"*/, 0);
}


void BattlePerformanceContinue__endCloseSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandspellObject; // x0

  if ( (byte_5973FD0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5638/*"END_CLOSE"*/);
    byte_5973FD0 = 1;
  }
  commandspellObject = this->fields.commandspellObject;
  if ( !commandspellObject
    || (UnityEngine_GameObject__SetActive(commandspellObject, 0, 0),
        (commandspellObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)commandspellObject, 0),
        (commandspellObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_2213CDC(commandspellObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)commandspellObject, (System_String_o *)StringLiteral_5638/*"END_CLOSE"*/, 0);
}


void BattlePerformanceContinue__endCloseStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *stoneObject; // x0

  if ( (byte_5973FDD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5638/*"END_CLOSE"*/);
    byte_5973FDD = 1;
  }
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 0, 0),
        (stoneObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)stoneObject, 0),
        (stoneObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_2213CDC(stoneObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)stoneObject, (System_String_o *)StringLiteral_5638/*"END_CLOSE"*/, 0);
}


void BattlePerformanceContinue__endDialog(BattlePerformanceContinue_o *this, bool flg, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_5973FC7 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_9652/*"NG"*/);
    byte_5973FC7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.logic) == 0) )
    sub_2213CDC(Instance, v5);
  BattleLogic__sendFsmEvent((BattleLogic_o *)Instance, (System_String_o *)StringLiteral_9652/*"NG"*/, 0);
}


void BattlePerformanceContinue__endLoadCommandSPell(
        BattlePerformanceContinue_o *this,
        AssetData_o *aData,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  UserGameEntity_o *v6; // x21
  int v7; // w22
  int32_t v8; // w21
  Il2CppObject *v9; // x0
  struct BattlePerformance_o *v10; // x8
  UnityEngine_GameObject_o *Object; // x23
  Il2CppObject *v12; // x0
  System_String_o *v13; // x20
  Il2CppObject *Component_object; // x22
  __int64 v15; // x1
  Il2CppObject *v16; // x21
  SimpleAnimation_o *v17; // x0
  System_String_o *v18; // x1
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Animation_o *v20; // x0
  System_String_o *v21; // x1
  Il2CppObject *v22; // x0
  Il2CppObject *v23; // x0
  int32_t v24; // [xsp+8h] [xbp-48h] BYREF
  int v25; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5973FD7 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    sub_2213A60(&StringLiteral_19686/*"ef_commandspell_{0:D2}"*/);
    sub_2213A60(&StringLiteral_19687/*"ef_commandspell{0:D4}"*/);
    byte_5973FD7 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_29;
  BattlePerformance__PlayAnyCommandSpellContinueVoice(perf, 0);
  perf = (BattlePerformance_o *)UserGameMaster__getSelfUserGame(0);
  if ( !perf )
    goto LABEL_29;
  v6 = (UserGameEntity_o *)perf;
  perf = (BattlePerformance_o *)UserGameEntity__get_SpellImageIdBattle((UserGameEntity_o *)perf, 0);
  if ( !this->fields.data )
    goto LABEL_29;
  v7 = (int)perf;
  v8 = BattleData__CheckCurrentTemporaryCommandSpell(this->fields.data, v6, 0);
  v25 = v7;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v25);
  perf = (BattlePerformance_o *)System_String__Format((System_String_o *)StringLiteral_19687/*"ef_commandspell{0:D4}"*/, v9, 0);
  if ( !aData )
    goto LABEL_29;
  perf = (BattlePerformance_o *)AssetData__GetObject_object__58532980(
                                  aData,
                                  (System_String_o *)perf,
                                  (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  v10 = this->fields.perf;
  if ( !v10 )
    goto LABEL_29;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             (UnityEngine_GameObject_o *)perf,
             v10->fields.popupTr,
             0,
             0);
  v24 = v8;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v24);
  perf = (BattlePerformance_o *)System_String__Format((System_String_o *)StringLiteral_19686/*"ef_commandspell_{0:D2}"*/, v12, 0);
  if ( !Object )
    goto LABEL_29;
  v13 = (System_String_o *)perf;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       Object,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v16 = UnityEngine_GameObject__GetComponent_object_(
          Object,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)perf & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    if ( SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, v13, 0) )
    {
      v17 = (SimpleAnimation_o *)Component_object;
      v18 = v13;
    }
    else
    {
      v25 = 3;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v25);
      v18 = System_String__Format((System_String_o *)StringLiteral_19686/*"ef_commandspell_{0:D2}"*/, v22, 0);
      v17 = (SimpleAnimation_o *)Component_object;
    }
    SimpleAnimation__Play_78552168(v17, v18, 0);
  }
  else
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, aData);
    perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0);
    if ( ((unsigned __int8)perf & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_29;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v16, v13, 0);
      if ( UnityEngine_TrackedReference__op_Inequality(0, Item, 0) )
      {
        v20 = (UnityEngine_Animation_o *)v16;
        v21 = v13;
      }
      else
      {
        v25 = 3;
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v25);
        v21 = System_String__Format((System_String_o *)StringLiteral_19686/*"ef_commandspell_{0:D2}"*/, v23, 0);
        v20 = (UnityEngine_Animation_o *)v16;
      }
      UnityEngine_Animation__Play_83078544(v20, v21, 0);
    }
  }
  perf = (BattlePerformance_o *)this->fields.logic;
  if ( !perf
    || (BattleLogic__setTimeAcceleration((BattleLogic_o *)perf, 0, 0), (perf = this->fields.perf) == 0)
    || (BattlePerformance__playMasterCommandSpellCutIn(perf, 0), (perf = (BattlePerformance_o *)this->fields.myFsm) == 0) )
  {
LABEL_29:
    sub_2213CDC(perf, aData);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue__endOpenContinueItem(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_5973FCB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5652/*"END_OPEN"*/);
    byte_5973FCB = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__ChangeLayoutScrollView(itemWindow, 0), (itemWindow = this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0) )
  {
    sub_2213CDC(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5652/*"END_OPEN"*/, 0);
}


void BattlePerformanceContinue__endOpenNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_5973FE3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5652/*"END_OPEN"*/);
    byte_5973FE3 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0), (itemWindow = this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0) )
  {
    sub_2213CDC(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5652/*"END_OPEN"*/, 0);
}


void BattlePerformanceContinue__endOpenSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_5973FCE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5652/*"END_OPEN"*/);
    byte_5973FCE = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0), (itemWindow = this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0) )
  {
    sub_2213CDC(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5652/*"END_OPEN"*/, 0);
}


void BattlePerformanceContinue__endOpenStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_5973FDB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5652/*"END_OPEN"*/);
    byte_5973FDB = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0), (itemWindow = this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0) )
  {
    sub_2213CDC(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5652/*"END_OPEN"*/, 0);
}


void BattlePerformanceContinue__endOpenUsecheck(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973FF0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5652/*"END_OPEN"*/);
    byte_5973FF0 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5652/*"END_OPEN"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceContinue__endRetryDialog(BattlePerformanceContinue_o *this, bool flg, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_5973FD4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10019/*"OK"*/);
    byte_5973FD4 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_2213CDC(0, flg);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10019/*"OK"*/, 0);
}


void BattlePerformanceContinue__endSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x20
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5973FD8 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&StringLiteral_4770/*"CommandSpellEffect/ef_commandspell{0:D4}"*/);
    byte_5973FD8 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_8;
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &SpellImageIdBattle);
  v7 = System_String__Format((System_String_o *)StringLiteral_4770/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v5, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6);
  AssetManager__releaseAssetStorage(v7, 0);
  SelfUserGame = (UserGameEntity_o *)this->fields.logic;
  if ( !SelfUserGame )
LABEL_8:
    sub_2213CDC(SelfUserGame, v4);
  BattleLogic__resetTimeAcceleration((BattleLogic_o *)SelfUserGame, 0, 0);
}


bool BattlePerformanceContinue__get_isDefenceTargetBroken(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  return this->fields._isDefenceTargetBroken_k__BackingField;
}


void BattlePerformanceContinue__openNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v4; // x1
  UnityEngine_GameObject_o *nostoneObject; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v7; // x21

  if ( (byte_5973FE2 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue_endOpenNoStone__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    sub_2213A60(&StringLiteral_2842/*"BATTLE_CONTINUE_NO_STONE"*/);
    byte_5973FE2 = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseBuyGem,
    (System_String_o *)StringLiteral_2842/*"BATTLE_CONTINUE_NO_STONE"*/,
    0x80000000,
    v3);
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject
    || (UnityEngine_GameObject__SetActive(nostoneObject, 1, 0),
        window = this->fields.window,
        v7 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenNoStone__,
          0),
        !window) )
  {
    sub_2213CDC(nostoneObject, v4);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._10_Open.methodPtr)(
    window,
    v7,
    window->klass->vtable._10_Open.method);
}


void BattlePerformanceContinue__openReTry(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  NotificationDialog_ClickDelegate_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5973FD3 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue_endRetryDialog__);
    sub_2213A60(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_26911/*"通信に失敗したので再度通信を行います"*/);
    sub_2213A60(&StringLiteral_26912/*"通信失敗"*/);
    byte_5973FD3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (NotificationDialog_ClickDelegate_o *)sub_2213CCC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endRetryDialog__,
    0);
  if ( !Instance )
    sub_2213CDC(v5, v6);
  CommonUI__OpenNotificationDialog_37376108(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_26912/*"通信失敗"*/,
    (System_String_o *)StringLiteral_26911/*"通信に失敗したので再度通信を行います"*/,
    v4,
    -1,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0);
}


void BattlePerformanceContinue__openSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t PayableStoneNum; // w8
  UILabel_o *stoneBtnLabel; // x20
  int v8; // w9
  System_String_o *v9; // x0
  const MethodInfo *v10; // x1
  struct BattleData_o *data; // x8
  struct BattleData_o *v12; // x8
  const MethodInfo *v13; // x4
  __int64 v14; // x1
  Il2CppObject *Component_object; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v24; // x21

  if ( (byte_5973FCD & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue_endOpenSpell__);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SendEventToFsm___);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_2831/*"BATTLE_CONTINUE_CHECK_SPELL"*/);
    sub_2213A60(&StringLiteral_2830/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    sub_2213A60(&StringLiteral_2829/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/);
    byte_5973FCD = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_32;
  PayableStoneNum = UserGameEntity__get_PayableStoneNum(SelfUserGame, 0);
  stoneBtnLabel = this->fields.stoneBtnLabel;
  v8 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( PayableStoneNum < 1 )
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
    v9 = (System_String_o *)StringLiteral_2829/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/;
  }
  else
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
    v9 = (System_String_o *)StringLiteral_2830/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/;
  }
  SelfUserGame = (UserGameEntity_o *)LocalizationManager__Get(v9, 0);
  if ( !stoneBtnLabel )
    goto LABEL_32;
  UILabel__set_text(stoneBtnLabel, (System_String_o *)SelfUserGame, 0);
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, v10);
  SelfUserGame = (UserGameEntity_o *)this->fields.commandspellObject;
  if ( !SelfUserGame )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_32;
  SelfUserGame = (UserGameEntity_o *)data->fields.quest_ent;
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = (UserGameEntity_o *)QuestEntity__HasFlag((QuestEntity_o *)SelfUserGame, 0x400000000LL, 0);
  if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
    goto LABEL_21;
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_32;
  SelfUserGame = (UserGameEntity_o *)v12->fields.quest_ent;
  if ( !SelfUserGame )
    goto LABEL_32;
  if ( QuestEntity__HasFlag((QuestEntity_o *)SelfUserGame, 0x100000000LL, 0) )
    goto LABEL_21;
  SelfUserGame = (UserGameEntity_o *)this->fields.data;
  if ( !SelfUserGame )
    goto LABEL_32;
  if ( BattleData__IsHideCommandSpell((BattleData_o *)SelfUserGame, 0) )
  {
LABEL_21:
    SelfUserGame = (UserGameEntity_o *)this->fields.commandSpellSprite;
    if ( SelfUserGame )
    {
      UIWidget__set_color((UIWidget_o *)SelfUserGame, this->fields.spellBtnColor, 0);
      SelfUserGame = (UserGameEntity_o *)this->fields.commandSpellSprite;
      if ( SelfUserGame )
      {
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)SelfUserGame,
                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SendEventToFsm___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
        SelfUserGame = (UserGameEntity_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
        if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_32;
          v22 = StringLiteral_5657/*"END_PROC"*/;
          Component_object[2].monitor = (void *)StringLiteral_5657/*"END_PROC"*/;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&Component_object[2].monitor,
            v22,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
        }
        SelfUserGame = (UserGameEntity_o *)this->fields.commandspell_now;
        if ( SelfUserGame )
        {
          UIWidget__set_color((UIWidget_o *)SelfUserGame, this->fields.spellnowColor, 0);
          goto LABEL_30;
        }
      }
    }
LABEL_32:
    sub_2213CDC(SelfUserGame, v4);
  }
LABEL_30:
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseCommandSpell,
    (System_String_o *)StringLiteral_2831/*"BATTLE_CONTINUE_CHECK_SPELL"*/,
    0x80000000,
    v13);
  window = this->fields.window;
  v24 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v24, (Il2CppObject *)this, Method_BattlePerformanceContinue_endOpenSpell__, 0);
  if ( !window )
    goto LABEL_32;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._10_Open.methodPtr)(
    window,
    v24,
    window->klass->vtable._10_Open.method);
}


void BattlePerformanceContinue__openStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v4; // x1
  UnityEngine_GameObject_o *stoneObject; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v7; // x21

  if ( (byte_5973FDA & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue_endOpenStone__);
    sub_2213A60(&BattleWindowComponent_EndCall_TypeInfo);
    sub_2213A60(&StringLiteral_2832/*"BATTLE_CONTINUE_CHECK_STONE"*/);
    byte_5973FDA = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseGem,
    (System_String_o *)StringLiteral_2832/*"BATTLE_CONTINUE_CHECK_STONE"*/,
    0x80000000,
    v3);
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 1, 0),
        window = this->fields.window,
        v7 = (BattleWindowComponent_EndCall_o *)sub_2213CCC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenStone__,
          0),
        !window) )
  {
    sub_2213CDC(stoneObject, v4);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._10_Open.methodPtr)(
    window,
    v7,
    window->klass->vtable._10_Open.method);
}


void BattlePerformanceContinue__openStoneShop(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5973FE6 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue_callbaclStoneShop__);
    sub_2213A60(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5973FE6 = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (StonePurchaseMenu_CallbackFunc_o *)sub_2213CCC(StonePurchaseMenu_CallbackFunc_TypeInfo);
  StonePurchaseMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callbaclStoneShop__,
    0);
  if ( !Instance )
    sub_2213CDC(v5, v6);
  CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v4, 0, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceContinue__openUseCheck(BattlePerformanceContinue_o *this, int32_t type, const MethodInfo *method)
{
  UnityEngine_Component_o *usecheckLabel; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *addMsgInfo; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x0
  UILabel_o *addMsgLabel; // x20
  __int64 *v11; // x8
  UILabel_o *v12; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x1

  if ( (byte_5973FEF & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_2846/*"BATTLE_CONTINUE_USECHECK_STONE"*/);
    sub_2213A60(&StringLiteral_2844/*"BATTLE_CONTINUE_STONEPAY_WARNING_MSG"*/);
    sub_2213A60(&StringLiteral_2845/*"BATTLE_CONTINUE_USECHECK_SPELL"*/);
    byte_5973FEF = 1;
  }
  usecheckLabel = (UnityEngine_Component_o *)this->fields.usecheckLabel;
  if ( !usecheckLabel )
    goto LABEL_44;
  usecheckLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(usecheckLabel, 0);
  if ( !usecheckLabel )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 1, 0);
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckContinueItemLabel;
  if ( !usecheckLabel )
    goto LABEL_44;
  usecheckLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(usecheckLabel, 0);
  if ( !usecheckLabel )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 0, 0);
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(addMsgInfo, 0, 0) )
  {
    usecheckLabel = (UnityEngine_Component_o *)this->fields.addMsgInfo;
    if ( !usecheckLabel )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 0, 0);
  }
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !usecheckLabel )
    goto LABEL_44;
  gameObject = UnityEngine_Component__get_gameObject(usecheckLabel, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, -72.0, 0);
  usecheckLabel = (UnityEngine_Component_o *)this->fields.usecheckLabel;
  if ( !usecheckLabel )
    goto LABEL_44;
  v9 = UnityEngine_Component__get_gameObject(usecheckLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v9, 28.0, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.useCheckOkBtn, -72.0, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.useCheckCancelBtn, -72.0, 0);
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckBgSprite;
  if ( !usecheckLabel )
    goto LABEL_44;
  UIWidget__set_height((UIWidget_o *)usecheckLabel, 239, 0);
  if ( type == 2 )
  {
    usecheckLabel = (UnityEngine_Component_o *)this->fields.usecheckLabel;
    if ( usecheckLabel )
    {
      usecheckLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(usecheckLabel, 0);
      if ( usecheckLabel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 0, 0);
        usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckContinueItemLabel;
        if ( usecheckLabel )
        {
          usecheckLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(usecheckLabel, 0);
          if ( usecheckLabel )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 1, 0);
            goto LABEL_41;
          }
        }
      }
    }
    goto LABEL_44;
  }
  if ( type != 1 )
  {
    if ( type )
      goto LABEL_41;
    addMsgLabel = this->fields.usecheckLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
    v11 = &StringLiteral_2845/*"BATTLE_CONTINUE_USECHECK_SPELL"*/;
    goto LABEL_34;
  }
  v12 = this->fields.usecheckLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
  usecheckLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2846/*"BATTLE_CONTINUE_USECHECK_STONE"*/, 0);
  if ( !v12 )
    goto LABEL_44;
  UILabel__set_text(v12, (System_String_o *)usecheckLabel, 0);
  v14 = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( !UnityEngine_Object__op_Inequality(v14, 0, 0) )
    goto LABEL_41;
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !usecheckLabel )
    goto LABEL_44;
  v15 = UnityEngine_Component__get_gameObject(usecheckLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v15, -90.0, 0);
  usecheckLabel = (UnityEngine_Component_o *)this->fields.usecheckLabel;
  if ( !usecheckLabel
    || (v16 = UnityEngine_Component__get_gameObject(usecheckLabel, 0),
        GameObjectExtensions__SetLocalPositionY(v16, 82.0, 0),
        GameObjectExtensions__SetLocalPositionY(this->fields.useCheckOkBtn, -90.0, 0),
        GameObjectExtensions__SetLocalPositionY(this->fields.useCheckCancelBtn, -90.0, 0),
        (usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckBgSprite) == 0)
    || (UIWidget__set_height((UIWidget_o *)usecheckLabel, 275, 0),
        (usecheckLabel = (UnityEngine_Component_o *)this->fields.addMsgInfo) == 0) )
  {
LABEL_44:
    sub_2213CDC(usecheckLabel, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 1, 0);
  addMsgLabel = this->fields.addMsgLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  v11 = &StringLiteral_2844/*"BATTLE_CONTINUE_STONEPAY_WARNING_MSG"*/;
LABEL_34:
  usecheckLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v11, 0);
  if ( !addMsgLabel )
    goto LABEL_44;
  UILabel__set_text(addMsgLabel, (System_String_o *)usecheckLabel, 0);
LABEL_41:
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !usecheckLabel )
    goto LABEL_44;
  usecheckLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(usecheckLabel, 0);
  if ( !usecheckLabel )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 1, 0);
  BattlePerformanceContinue__endOpenUsecheck(this, v18);
}


void BattlePerformanceContinue__procContinueItem(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973FEE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973FEE = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue__procNG(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x20
  NotificationDialog_ClickDelegate_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5973FC6 & 1) == 0 )
  {
    sub_2213A60(&Method_BattlePerformanceContinue_endDialog__);
    sub_2213A60(&NotificationDialog_ClickDelegate_TypeInfo);
    byte_5973FC6 = 1;
  }
  logic = this->fields.logic;
  v4 = (NotificationDialog_ClickDelegate_o *)sub_2213CCC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v4, (Il2CppObject *)this, Method_BattlePerformanceContinue_endDialog__, 0);
  if ( !logic )
    sub_2213CDC(v5, v6);
  BattleLogic__OpenBattleLoseDlg(logic, 1, 0, v4, 1, 0);
}


void BattlePerformanceContinue__procNGContinueItem(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973FED & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973FED = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue__procNGGiveUpContinueItem(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973FC4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973FC4 = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  this->fields.IsContinueItem = 0;
  if ( !myFsm )
    sub_2213CDC(0, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue__procNGNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_5973FE8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973FE8 = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__ClearObj(itemWindow, 0),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0) )
  {
    sub_2213CDC(itemWindow, v3);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue__procNGSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973FD5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973FD5 = 1;
  }
  BattlePerformanceContinue__closeSpell(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue__procNGStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973FE0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973FE0 = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue__procOK(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattlePerformanceContinue_o *v2; // x19
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  __int64 v5; // x1
  int32_t QuestId; // w20
  __int64 v7; // x1
  BattleData_o *data; // x8
  AdManager_o *v9; // x19

  v2 = this;
  if ( (byte_5973FC5 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    this = (BattlePerformanceContinue_o *)sub_2213A60(&StringLiteral_10019/*"OK"*/);
    byte_5973FC5 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_18;
  statusPerf = perf->fields.statusPerf;
  if ( !statusPerf )
    goto LABEL_18;
  this = (BattlePerformanceContinue_o *)statusPerf->fields.masterPerf;
  if ( !this )
    goto LABEL_18;
  BattlePerformanceMaster__updateCommandSpellIcon((BattlePerformanceMaster_o *)this, 0);
  this = (BattlePerformanceContinue_o *)v2->fields.logic;
  if ( !this )
    goto LABEL_18;
  BattleLogic__sendFsmEvent((BattleLogic_o *)this, (System_String_o *)StringLiteral_10019/*"OK"*/, 0);
  this = (BattlePerformanceContinue_o *)v2->fields.data;
  if ( !this )
    goto LABEL_18;
  QuestId = BattleData__getQuestId((BattleData_o *)this, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
  if ( TerminalPramsManager__IsMainStoryForQuestId(QuestId, 0) )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    if ( TerminalPramsManager__CanSendTrackEvent(QuestId, 0) )
    {
      this = (BattlePerformanceContinue_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      data = v2->fields.data;
      if ( data )
      {
        v9 = (AdManager_o *)this;
        this = (BattlePerformanceContinue_o *)BattleData__getPhase(data, 0);
        if ( v9 )
        {
          AdManager__TrackEvent(v9, 10, 12, QuestId, (int32_t)this, 0, 0);
          return;
        }
      }
LABEL_18:
      sub_2213CDC(this, method);
    }
  }
}


void BattlePerformanceContinue__procSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  System_String_o *v6; // x20
  AssetLoader_LoadEndDataHandler_o *v7; // x21
  __int64 v8; // x1
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5973FD6 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_BattlePerformanceContinue_endLoadCommandSPell__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&StringLiteral_4770/*"CommandSpellEffect/ef_commandspell{0:D4}"*/);
    byte_5973FD6 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_2213CDC(0, v4);
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &SpellImageIdBattle);
  v6 = System_String__Format((System_String_o *)StringLiteral_4770/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v5, 0);
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endLoadCommandSPell__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8);
  AssetManager__loadAssetStorage(v6, v7, 1, 0, 0);
}


void BattlePerformanceContinue__procStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_5973FE1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5657/*"END_PROC"*/);
    byte_5973FE1 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5657/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue__refreshStoneNow(
        BattlePerformanceContinue_o *this,
        UserGameEntity_o *userGame,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1
  int32_t stone; // w9
  UILabel_o *gem_now; // x19
  UILabel_o *stone_now; // x20
  UILabel_o *stoneNumInStonelessWindow; // x22
  Il2CppObject *v11; // x0
  System_String_o *v12; // x21
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5973FBF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    byte_5973FBF = 1;
  }
  if ( !userGame )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    userGame = SelfUserGame;
    if ( !SelfUserGame )
      goto LABEL_9;
  }
  stone = userGame->fields.stone;
  gem_now = this->fields.gem_now;
  stone_now = this->fields.stone_now;
  stoneNumInStonelessWindow = this->fields.stoneNumInStonelessWindow;
  v13 = stone;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v13);
  SelfUserGame = (UserGameEntity_o *)System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v11, 0);
  if ( !stoneNumInStonelessWindow
    || (v12 = (System_String_o *)SelfUserGame,
        UILabel__set_text(stoneNumInStonelessWindow, (System_String_o *)SelfUserGame, 0),
        !stone_now)
    || (UILabel__set_text(stone_now, v12, 0), !gem_now) )
  {
LABEL_9:
    sub_2213CDC(SelfUserGame, v6);
  }
  UILabel__set_text(gem_now, v12, 0);
}


void BattlePerformanceContinue__set_isDefenceTargetBroken(
        BattlePerformanceContinue_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isDefenceTargetBroken_k__BackingField = value;
}


void BattlePerformanceContinue__showConf(
        BattlePerformanceContinue_o *this,
        BattleDropItem_o *drop,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceContinue__CoEndContinue_d__133___ctor(
        BattlePerformanceContinue__CoEndContinue_d__133_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceContinue__CoEndContinue_d__133__MoveNext(
        BattlePerformanceContinue__CoEndContinue_d__133_o *this,
        const MethodInfo *method)
{
  BattlePerformanceContinue__CoEndContinue_d__133_o *v2; // x19
  int32_t _1__state; // w8
  float timer_5__2; // s8
  struct BattlePerformanceContinue_o *_4__this; // x8
  struct BattlePerformance_o *perf; // x8
  float deltaTime; // s0
  Il2CppObject **p__2__current; // x19
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_597401B & 1) == 0 )
  {
    this = (BattlePerformanceContinue__CoEndContinue_d__133_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
    byte_597401B = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    timer_5__2 = v2->fields._timer_5__2;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( timer_5__2 <= 1.0 )
      goto LABEL_13;
    if ( !_4__this
      || (perf = _4__this->fields.perf) == 0
      || (this = (BattlePerformanceContinue__CoEndContinue_d__133_o *)perf->fields.fadeObject) == 0
      || (this = (BattlePerformanceContinue__CoEndContinue_d__133_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___)) == 0 )
    {
      sub_2213CDC(this, method);
    }
    v16.fields.r = 1.0;
    v16.fields.g = 1.0;
    v16.fields.b = 1.0;
    v16.fields.a = 1.0;
    NGUIFader__FadeStart((NGUIFader_o *)this, v16, 0.5, 1, 0, 0, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  timer_5__2 = 0.0;
  v2->fields._timer_5__2 = 0.0;
  v2->fields.__1__state = -1;
LABEL_13:
  deltaTime = UnityEngine_Time__get_deltaTime(0);
  v2->fields.__2__current = 0;
  p__2__current = &v2->fields.__2__current;
  *((float *)p__2__current + 4) = timer_5__2 + deltaTime;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v10, v11, v12, v13, v14, v15);
  *((_DWORD *)p__2__current - 2) = 1;
  return 1;
}


Il2CppObject *BattlePerformanceContinue__CoEndContinue_d__133__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceContinue__CoEndContinue_d__133_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceContinue__CoEndContinue_d__133__System_Collections_IEnumerator_Reset(
        BattlePerformanceContinue__CoEndContinue_d__133_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattlePerformanceContinue__CoEndContinue_d__133_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattlePerformanceContinue__CoEndContinue_d__133__System_Collections_IEnumerator_get_Current(
        BattlePerformanceContinue__CoEndContinue_d__133_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceContinue__CoEndContinue_d__133__System_IDisposable_Dispose(
        BattlePerformanceContinue__CoEndContinue_d__133_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceContinue___c__DisplayClass142_0___ctor(
        BattlePerformanceContinue___c__DisplayClass142_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceContinue___c__DisplayClass142_0___OpenInterruptionConfirmWindow_b__1(
        BattlePerformanceContinue___c__DisplayClass142_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct BattlePerformanceContinue_o *_4__this; // x8

  if ( (byte_5974019 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974019 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0),
        (_4__this = this->fields.__4__this) == 0)
    || (Instance = (Il2CppObject *)_4__this->fields.myFsm) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, this->fields.eventName, 0);
}


void BattlePerformanceContinue___c__DisplayClass145_0___ctor(
        BattlePerformanceContinue___c__DisplayClass145_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceContinue___c__DisplayClass145_0___OpenWaveSelectConfirmDialog_b__1(
        BattlePerformanceContinue___c__DisplayClass145_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct BattlePerformanceContinue_o *_4__this; // x8
  System_String_o *v6; // x1

  if ( (byte_597401A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_10019/*"OK"*/);
    sub_2213A60(&StringLiteral_9652/*"NG"*/);
    byte_597401A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0),
        (_4__this = this->fields.__4__this) == 0)
    || (Instance = (Il2CppObject *)_4__this->fields.myFsm) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  if ( this->fields.isDecide )
    v6 = (System_String_o *)StringLiteral_10019/*"OK"*/;
  else
    v6 = (System_String_o *)StringLiteral_9652/*"NG"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, v6, 0);
}