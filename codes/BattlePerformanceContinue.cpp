void BattlePerformanceContinue___ctor(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1

  if ( (byte_4CCA9D4 & 1) == 0 )
  {
    sub_1C713B0(&string_TypeInfo);
    byte_4CCA9D4 = 1;
  }
  this->fields.spellBtnColor = (struct UnityEngine_Color_o)xmmword_CEFE00;
  this->fields.spellnowColor = (struct UnityEngine_Color_o)xmmword_CF0670;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.cancelInterruptionEvent = static_fields->Empty;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.cancelInterruptionEvent,
    (int32_t)Empty,
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

  if ( (byte_4CCA99A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_int__TypeInfo);
    sub_1C713B0(&Method_BattlePerformanceContinue__AttachStoneCountRefreshComponent_b__86_0__);
    byte_4CCA99A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = (System_Action_int__o *)sub_1C715FC(System_Action_int__TypeInfo);
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

  if ( (byte_4CCA98D & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_4957/*"DEADLINE"*/);
    byte_4CCA98D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0),
        BattlePerformanceContinue__closeContinueItem(this, v6),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0) )
  {
    sub_1C71608(Instance, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_4957/*"DEADLINE"*/, 0);
}


void BattlePerformanceContinue__CheckContinueItem(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  __int64 *v5; // x8

  if ( (byte_4CCA998 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9623/*"OK"*/);
    sub_1C713B0(&StringLiteral_9268/*"NG"*/);
    byte_4CCA998 = 1;
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
      v5 = &StringLiteral_9268/*"NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_1C71608(data, v3);
  }
  data = (BattleData_o *)this->fields.myFsm;
  this->fields.IsContinueItem = 1;
  if ( !data )
    goto LABEL_10;
  v5 = &StringLiteral_9623/*"OK"*/;
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

  if ( (byte_4CCA9C4 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue__CheckDefenceTargetBroken_b__130_0__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
    sub_1C713B0(&NGUIFader_OnFinished_TypeInfo);
    sub_1C713B0(&StringLiteral_5600/*"EVENT_FALSE"*/);
    byte_4CCA9C4 = 1;
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
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
        v6 = (NGUIFader_OnFinished_o *)sub_1C715FC(NGUIFader_OnFinished_TypeInfo);
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
    sub_1C71608(data, method);
  }
  data = (BattleData_o *)this->fields.myFsm;
  this->fields._isDefenceTargetBroken_k__BackingField = 0;
  if ( !data )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_5600/*"EVENT_FALSE"*/, 0);
}


void BattlePerformanceContinue__CloseGiveUp(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *giveUpWindow; // x0

  if ( (byte_4CCA993 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9265/*"NEXT"*/);
    byte_4CCA993 = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow
    || (UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0),
        (giveUpWindow = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C71608(giveUpWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)giveUpWindow, (System_String_o *)StringLiteral_9265/*"NEXT"*/, 0);
}


System_Collections_IEnumerator_o *BattlePerformanceContinue__CoEndContinue(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CCA9C6 & 1) == 0 )
  {
    sub_1C713B0(&BattlePerformanceContinue__CoEndContinue_d__133_TypeInfo);
    byte_4CCA9C6 = 1;
  }
  v3 = sub_1C715FC(BattlePerformanceContinue__CoEndContinue_d__133_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattlePerformanceContinue__EndContinue(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0

  if ( this->fields._isDefenceTargetBroken_k__BackingField )
  {
    v3 = BattlePerformanceContinue__CoEndContinue(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v3, 0);
  }
  this->fields._isDefenceTargetBroken_k__BackingField = 0;
}


int32_t BattlePerformanceContinue__GetPayableStoneNum(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v3; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C71608(0, v3);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x1
  UnityEngine_Component_o *window; // x0
  UnityEngine_Transform_o *v26; // x20
  UILabel_o *checkGiveUpLabel; // x20
  UILabel_o *checkUseCommandSpell; // x20
  UILabel_o *checkUseGem; // x20
  UILabel_o *checkUseBuyGem; // x20

  if ( (byte_4CCA98E & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_2723/*"BATTLE_CONTINUE_NO_STONE"*/);
    sub_1C713B0(&StringLiteral_2712/*"BATTLE_CONTINUE_CHECK_SPELL"*/);
    sub_1C713B0(&StringLiteral_2713/*"BATTLE_CONTINUE_CHECK_STONE"*/);
    sub_1C713B0(&StringLiteral_2840/*"BATTLE_RETIRE_CHECKSTR"*/);
    byte_4CCA98E = 1;
  }
  this->fields.perf = inperf;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.perf,
    (int32_t)inperf,
    (int32_t)indata,
    (int32_t)inlogic,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.data, (int32_t)indata, v12, v13, v14, v15, v16, v17);
  this->fields.logic = inlogic;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.logic, (int32_t)inlogic, v18, v19, v20, v21, v22, v23);
  window = (UnityEngine_Component_o *)this->fields.window;
  if ( !window )
    goto LABEL_26;
  window = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(window, 0);
  v26 = (UnityEngine_Transform_o *)window;
  if ( !byte_4CC0D09 )
  {
    window = (UnityEngine_Component_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2840/*"BATTLE_RETIRE_CHECKSTR"*/, 0);
  if ( !checkGiveUpLabel )
    goto LABEL_26;
  UILabel__set_text(checkGiveUpLabel, (System_String_o *)window, 0);
  checkUseCommandSpell = this->fields.checkUseCommandSpell;
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2712/*"BATTLE_CONTINUE_CHECK_SPELL"*/, 0);
  if ( !checkUseCommandSpell )
    goto LABEL_26;
  UILabel__set_text(checkUseCommandSpell, (System_String_o *)window, 0);
  checkUseGem = this->fields.checkUseGem;
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2713/*"BATTLE_CONTINUE_CHECK_STONE"*/, 0);
  if ( !checkUseGem
    || (UILabel__set_text(checkUseGem, (System_String_o *)window, 0),
        checkUseBuyGem = this->fields.checkUseBuyGem,
        window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2723/*"BATTLE_CONTINUE_NO_STONE"*/, 0),
        !checkUseBuyGem)
    || (UILabel__set_text(checkUseBuyGem, (System_String_o *)window, 0),
        (window = (UnityEngine_Component_o *)this->fields.continueWaveRestartWindow) == 0)
    || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD))window->klass[1]._1.this_arg.data)(
          window,
          *(_QWORD *)&window->klass[1]._1.this_arg.bits),
        (window = (UnityEngine_Component_o *)this->fields.continueWaveRestartWindow) == 0) )
  {
LABEL_26:
    sub_1C71608(window, v24);
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
    sub_1C71608(0, v3);
  return UserGameEntity__get_PayableStoneNum(SelfUserGame, 0) > 0;
}


void BattlePerformanceContinue__OpenBrokenMessage(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  Il2CppMethodPointer methodPtr; // x8
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  System_String_o *v7; // x21
  bool v8; // w22
  System_String_o *v9; // x0
  System_String_o *v10; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v12; // x22
  int v13; // [xsp+3Ch] [xbp-44h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_4CCA9C5 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_BattlePerformanceContinue__OpenBrokenMessage_b__131_0__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_25327/*"{0}_{1}"*/);
    sub_1C713B0(&StringLiteral_2734/*"BATTLE_DIALOG_DEFENCE_TARGET_BROKEN"*/);
    this = (BattlePerformanceContinue_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCA9C5 = 1;
  }
  klass = v2[3].klass;
  if ( !klass )
    goto LABEL_14;
  methodPtr = klass->vtable[34].methodPtr;
  if ( !methodPtr )
    goto LABEL_14;
  v5 = (Il2CppObject *)StringLiteral_2734/*"BATTLE_DIALOG_DEFENCE_TARGET_BROKEN"*/;
  v13 = *((_DWORD *)methodPtr + 8);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v7 = System_String__Format_64073032((System_String_o *)StringLiteral_25327/*"{0}_{1}"*/, v5, v6, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__ContainsKey(v7, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = v8 ? v7 : (System_String_o *)v5;
  v10 = LocalizationManager__Get(v9, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v12, v2, Method_BattlePerformanceContinue__OpenBrokenMessage_b__131_0__, 0);
  if ( !Instance )
LABEL_14:
    sub_1C71608(this, method);
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

  if ( (byte_4CCA9CD & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue__OpenContinueInterruption_b__140_0__);
    sub_1C713B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4CCA9CD = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C715FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueInterruption_b__140_0__,
    0);
  if ( !continueInterruptionWindow )
    sub_1C71608(v5, v6);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))continueInterruptionWindow->klass->vtable._10_Open.methodPtr)(
    continueInterruptionWindow,
    v4,
    continueInterruptionWindow->klass->vtable._10_Open.method);
}


void BattlePerformanceContinue__OpenContinueItemWindow(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 ContinueItemWindow; // x0
  UserGameEntity_o *v4; // x20
  UILabel_o *ContinueCommandSpellNum; // x21
  System_String_o *v6; // x1
  UILabel_o *ContinueStoneNum; // x21
  Il2CppObject *v8; // x0
  UILabel_o *ContinueItemNumLabel; // x21
  Il2CppObject *v10; // x0
  UISprite_o *ContinueItemSpr; // x21
  int32_t ContinueItemImageId; // w22
  int v13; // w21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 *v20; // x8
  __int64 v21; // x1
  UILabel_o *ContinueItemBtnLabel; // x21
  UILabel_o *deadLine; // x21
  System_String_o *v24; // x22
  int64_t ContinueDeadLine; // x0
  Il2CppObject *RestTime; // x0
  int v27; // w21
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  __int64 *v34; // x8
  __int64 v35; // x1
  UILabel_o *ContinueCommandSpellBtnLabel; // x21
  int32_t PayableStoneNum; // w0
  UILabel_o *ContinueStoneBtnLabel; // x20
  int v39; // w21
  System_String_o **v40; // x8
  const MethodInfo *v41; // x1
  UILabel_o *ContinueRetireBtnLabel; // x20
  const MethodInfo *v43; // x4
  System_String_o **v44; // x8
  struct BattleData_o *data; // x8
  struct BattleData_o *v46; // x8
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  int32_t v53; // w1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v55; // x21
  int32_t ContinueItemNum; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t stone; // [xsp+8h] [xbp-48h] BYREF
  int32_t OverwriteCommandSpellContinue; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CCA999 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_BattlePerformanceContinue_endOpenContinueItem__);
    sub_1C713B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_9623/*"OK"*/);
    sub_1C713B0(&StringLiteral_2711/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
    sub_1C713B0(&StringLiteral_5449/*"END_PROC"*/);
    sub_1C713B0(&StringLiteral_2718/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/);
    sub_1C713B0(&StringLiteral_2710/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/);
    sub_1C713B0(&StringLiteral_2728/*"BATTLE_CONTINUE_USE_SPELL"*/);
    sub_1C713B0(&StringLiteral_9624/*"OK_CONTINUE_ITEM"*/);
    sub_1C713B0(&StringLiteral_25182/*"{0:#,0}"*/);
    sub_1C713B0(&StringLiteral_2715/*"BATTLE_CONTINUE_ITEM_BTN"*/);
    sub_1C713B0(&StringLiteral_2719/*"BATTLE_CONTINUE_ITEM_SELECT"*/);
    sub_1C713B0(&StringLiteral_2720/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_2724/*"BATTLE_CONTINUE_RETIRE"*/);
    byte_4CCA999 = 1;
  }
  ContinueItemWindow = (__int64)this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ContinueItemWindow, 1, 0);
  ContinueItemWindow = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !this->fields.data )
    goto LABEL_75;
  v4 = (UserGameEntity_o *)ContinueItemWindow;
  ContinueItemWindow = BattleData__CheckCurrentTemporaryCommandSpell(
                         this->fields.data,
                         (UserGameEntity_o *)ContinueItemWindow,
                         0);
  if ( !this->fields.data )
    goto LABEL_75;
  OverwriteCommandSpellContinue = BattleData__GetOverwriteCommandSpellContinue(this->fields.data, ContinueItemWindow, 0);
  ContinueCommandSpellNum = this->fields.ContinueCommandSpellNum;
  ContinueItemWindow = (__int64)System_Int32__ToString((int32_t)&OverwriteCommandSpellContinue, 0);
  if ( !ContinueCommandSpellNum )
    goto LABEL_75;
  v6 = (System_String_o *)(ContinueItemWindow ? ContinueItemWindow : StringLiteral_1/*""*/);
  UILabel__set_text(ContinueCommandSpellNum, v6, 0);
  if ( !v4 )
    goto LABEL_75;
  ContinueStoneNum = this->fields.ContinueStoneNum;
  stone = v4->fields.stone;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
  ContinueItemWindow = (__int64)System_String__Format((System_String_o *)StringLiteral_25182/*"{0:#,0}"*/, v8, 0);
  if ( !ContinueStoneNum )
    goto LABEL_75;
  UILabel__set_text(ContinueStoneNum, (System_String_o *)ContinueItemWindow, 0);
  ContinueItemWindow = (__int64)this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_75;
  BattleData__UpdateContinueItemInfo((BattleData_o *)ContinueItemWindow, 0);
  ContinueItemWindow = (__int64)this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_75;
  ContinueItemNumLabel = this->fields.ContinueItemNumLabel;
  ContinueItemNum = BattleData__GetContinueItemNum((BattleData_o *)ContinueItemWindow, 0);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ContinueItemNum);
  ContinueItemWindow = (__int64)System_String__Format((System_String_o *)StringLiteral_25182/*"{0:#,0}"*/, v10, 0);
  if ( !ContinueItemNumLabel )
    goto LABEL_75;
  UILabel__set_text(ContinueItemNumLabel, (System_String_o *)ContinueItemWindow, 0);
  ContinueItemWindow = (__int64)this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_75;
  ContinueItemSpr = this->fields.ContinueItemSpr;
  ContinueItemImageId = BattleData__GetContinueItemImageId((BattleData_o *)ContinueItemWindow, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(ContinueItemSpr, ContinueItemImageId, 0);
  ContinueItemWindow = (__int64)this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_75;
  ContinueItemWindow = BattleData__GetContinueItemNum((BattleData_o *)ContinueItemWindow, 0);
  if ( !this->fields.ContinueItemBtn )
    goto LABEL_75;
  v13 = ContinueItemWindow;
  ContinueItemWindow = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                  this->fields.ContinueItemBtn,
                                  (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( v13 < 1 )
  {
    if ( !ContinueItemWindow )
      goto LABEL_75;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0);
    ContinueItemWindow = (__int64)this->fields.ContinueItemBtn;
    if ( !ContinueItemWindow )
      goto LABEL_75;
    ContinueItemWindow = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)ContinueItemWindow,
                                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_75;
    v20 = &StringLiteral_5449/*"END_PROC"*/;
  }
  else
  {
    if ( !ContinueItemWindow )
      goto LABEL_75;
    v59.fields.r = 1.0;
    v59.fields.g = 1.0;
    v59.fields.b = 1.0;
    v59.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, v59, 0);
    ContinueItemWindow = (__int64)this->fields.ContinueItemBtn;
    if ( !ContinueItemWindow )
      goto LABEL_75;
    ContinueItemWindow = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)ContinueItemWindow,
                                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_75;
    v20 = &StringLiteral_9624/*"OK_CONTINUE_ITEM"*/;
  }
  v21 = *v20;
  *(_QWORD *)(ContinueItemWindow + 40) = *v20;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(ContinueItemWindow + 40), v21, v14, v15, v16, v17, v18, v19);
  ContinueItemBtnLabel = this->fields.ContinueItemBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  ContinueItemWindow = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2715/*"BATTLE_CONTINUE_ITEM_BTN"*/, 0);
  if ( !ContinueItemBtnLabel )
    goto LABEL_75;
  UILabel__set_text(ContinueItemBtnLabel, (System_String_o *)ContinueItemWindow, 0);
  deadLine = this->fields.deadLine;
  ContinueItemWindow = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2718/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, 0);
  if ( !this->fields.data )
    goto LABEL_75;
  v24 = (System_String_o *)ContinueItemWindow;
  ContinueDeadLine = BattleData__GetContinueDeadLine(this->fields.data, 0);
  RestTime = (Il2CppObject *)LocalizationManager__GetRestTime(ContinueDeadLine, 0);
  ContinueItemWindow = (__int64)System_String__Format(v24, RestTime, 0);
  if ( !deadLine )
    goto LABEL_75;
  UILabel__set_text(deadLine, (System_String_o *)ContinueItemWindow, 0);
  ContinueItemWindow = (__int64)this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_75;
  v27 = OverwriteCommandSpellContinue;
  ContinueItemWindow = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)ContinueItemWindow,
                                  (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( v27 >= 3 )
  {
    if ( !ContinueItemWindow )
      goto LABEL_75;
    v60.fields.r = 1.0;
    v60.fields.g = 1.0;
    v60.fields.b = 1.0;
    v60.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, v60, 0);
    ContinueItemWindow = (__int64)this->fields.ContinueCommandSpellBtn;
    if ( !ContinueItemWindow )
      goto LABEL_75;
    ContinueItemWindow = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)ContinueItemWindow,
                                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_75;
    v34 = &StringLiteral_9623/*"OK"*/;
  }
  else
  {
    if ( !ContinueItemWindow )
      goto LABEL_75;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0);
    ContinueItemWindow = (__int64)this->fields.ContinueCommandSpellBtn;
    if ( !ContinueItemWindow )
      goto LABEL_75;
    ContinueItemWindow = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)ContinueItemWindow,
                                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_75;
    v34 = &StringLiteral_5449/*"END_PROC"*/;
  }
  v35 = *v34;
  *(_QWORD *)(ContinueItemWindow + 40) = *v34;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(ContinueItemWindow + 40), v35, v28, v29, v30, v31, v32, v33);
  ContinueCommandSpellBtnLabel = this->fields.ContinueCommandSpellBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  ContinueItemWindow = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2728/*"BATTLE_CONTINUE_USE_SPELL"*/, 0);
  if ( !ContinueCommandSpellBtnLabel )
    goto LABEL_75;
  UILabel__set_text(ContinueCommandSpellBtnLabel, (System_String_o *)ContinueItemWindow, 0);
  PayableStoneNum = UserGameEntity__get_PayableStoneNum(v4, 0);
  ContinueStoneBtnLabel = this->fields.ContinueStoneBtnLabel;
  v39 = PayableStoneNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v40 = (System_String_o **)(v39 < 1 ? &StringLiteral_2710/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/ : &StringLiteral_2711/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
  ContinueItemWindow = (__int64)LocalizationManager__Get(*v40, 0);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_75;
  UILabel__set_text(ContinueStoneBtnLabel, (System_String_o *)ContinueItemWindow, 0);
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, v41);
  ContinueRetireBtnLabel = this->fields.ContinueRetireBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  ContinueItemWindow = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2724/*"BATTLE_CONTINUE_RETIRE"*/, 0);
  if ( !ContinueRetireBtnLabel
    || ((UILabel__set_text(ContinueRetireBtnLabel, (System_String_o *)ContinueItemWindow, 0),
         OverwriteCommandSpellContinue >= 3)
      ? (v44 = (System_String_o **)&StringLiteral_2719/*"BATTLE_CONTINUE_ITEM_SELECT"*/)
      : (v44 = (System_String_o **)&StringLiteral_2720/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/),
        (BattlePerformanceContinue__SetContinueMessage(this, this->fields.ContinueLabel, *v44, 0x80000000, v43),
         (data = this->fields.data) == 0)
     || (ContinueItemWindow = (__int64)data->fields.quest_ent) == 0) )
  {
LABEL_75:
    sub_1C71608(ContinueItemWindow, method);
  }
  ContinueItemWindow = QuestEntity__HasFlag((QuestEntity_o *)ContinueItemWindow, 0x400000000LL, 0);
  if ( (ContinueItemWindow & 1) != 0 )
    goto LABEL_67;
  v46 = this->fields.data;
  if ( !v46 )
    goto LABEL_75;
  ContinueItemWindow = (__int64)v46->fields.quest_ent;
  if ( !ContinueItemWindow )
    goto LABEL_75;
  if ( QuestEntity__HasFlag((QuestEntity_o *)ContinueItemWindow, 0x100000000LL, 0) )
    goto LABEL_67;
  ContinueItemWindow = (__int64)this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_75;
  if ( BattleData__IsHideCommandSpell((BattleData_o *)ContinueItemWindow, 0) )
  {
LABEL_67:
    ContinueItemWindow = (__int64)this->fields.ContinueCommandSpellBtn;
    if ( ContinueItemWindow )
    {
      ContinueItemWindow = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)ContinueItemWindow,
                                      (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( ContinueItemWindow )
      {
        UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0);
        ContinueItemWindow = (__int64)this->fields.ContinueCommandSpellBtn;
        if ( ContinueItemWindow )
        {
          ContinueItemWindow = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)ContinueItemWindow,
                                          (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
          if ( ContinueItemWindow )
          {
            v53 = StringLiteral_5449/*"END_PROC"*/;
            *(_QWORD *)(ContinueItemWindow + 40) = StringLiteral_5449/*"END_PROC"*/;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(ContinueItemWindow + 40), v53, v47, v48, v49, v50, v51, v52);
            ContinueItemWindow = (__int64)this->fields.ContinueCommandSpellNum;
            if ( ContinueItemWindow )
            {
              UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellnowColor, 0);
              goto LABEL_73;
            }
          }
        }
      }
    }
    goto LABEL_75;
  }
LABEL_73:
  window = this->fields.window;
  v55 = (BattleWindowComponent_EndCall_o *)sub_1C715FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v55,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endOpenContinueItem__,
    0);
  if ( !window )
    goto LABEL_75;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._10_Open.methodPtr)(
    window,
    v55,
    window->klass->vtable._10_Open.method);
}


void BattlePerformanceContinue__OpenContinueWaveRestart(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CCA9C9 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue__OpenContinueWaveRestart_b__136_0__);
    sub_1C713B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4CCA9C9 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C715FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueWaveRestart_b__136_0__,
    0);
  if ( !continueWaveRestartWindow )
    sub_1C71608(v5, v6);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w22
  int32_t Phase; // w23
  int32_t EventId; // w24
  Il2CppObject *Master_object; // x20
  UserEventDeckEntity_o *v19; // x20
  QuestRestrictionInfo_o *v20; // x21
  int32_t v21; // w22
  int32_t v22; // w23
  int32_t DispWaveCount; // w24
  struct BattleData_o *data; // x8
  WaveBattleSelectWaveDialog_o *v25; // x24
  WaveBattleSelectWaveDialog_CloseDelegate_o *v26; // x25
  WaveBattleSelectWaveDialog_o *v27; // x20
  System_Action_int__o *v28; // x21
  WaveBattleSelectWaveDialog_o *v29; // x20
  System_Action_o *v30; // x21

  if ( (byte_4CCA9D1 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_int__TypeInfo);
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_0__);
    sub_1C713B0(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_1__);
    sub_1C713B0(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_2__);
    sub_1C713B0(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserEventDeckMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&QuestRestrictionInfo_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CCA9D1 = 1;
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(waveSelectDialog, 0, 0) )
  {
    waveSelectDialogPrefab = this->fields.waveSelectDialogPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, waveSelectDialogPrefab, transform, 0, 0);
    if ( !Object )
      goto LABEL_40;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object,
                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    this->fields.waveSelectDialog = (struct WaveBattleSelectWaveDialog_o *)Component_object;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.waveSelectDialog,
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
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Object )
    goto LABEL_40;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Object, v15, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  Object = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    sub_1C71610(Object);
  v19 = (UserEventDeckEntity_o *)*((_QWORD *)Object + 4);
  v20 = (QuestRestrictionInfo_o *)sub_1C715FC(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_43691256(v20, EventId, v15, Phase, 0);
  Object = this->fields.data;
  if ( !Object )
    goto LABEL_40;
  Object = (void *)BattleData__GetMaxWaveCount((BattleData_o *)Object, 0);
  if ( !this->fields.data )
    goto LABEL_40;
  v21 = (int)Object;
  Object = (void *)BattleData__getDispWaveCount(this->fields.data, 0);
  if ( !this->fields.data )
    goto LABEL_40;
  v22 = (int)Object;
  DispWaveCount = BattleData__getDispWaveCount(this->fields.data, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC43E4 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC43E4 = 1;
  }
  Object = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Object = TerminalPramsManager_TypeInfo;
  }
  *(_DWORD *)(*((_QWORD *)Object + 23) + 576LL) = DispWaveCount;
  if ( !v20 )
    goto LABEL_40;
  if ( QuestRestrictionInfo__IsWaveSetupSwitchParty(v20, 0) )
  {
    Object = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    data = this->fields.data;
    if ( data && Object )
    {
      PartyOrganizationUtility__SetTempWaveInfoList((PartyOrganizationUtility_o *)Object, data->fields.waveInfoList, 0);
      goto LABEL_36;
    }
LABEL_40:
    sub_1C71608(Object, v4);
  }
LABEL_36:
  v25 = this->fields.waveSelectDialog;
  v26 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_1C715FC(WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
  WaveBattleSelectWaveDialog_CloseDelegate___ctor(
    v26,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_0__,
    0);
  if ( !v25 )
    goto LABEL_40;
  WaveBattleSelectWaveDialog__SetDialog(v25, v19, v20, v21, v22, 1, v26, 0);
  v27 = this->fields.waveSelectDialog;
  v28 = (System_Action_int__o *)sub_1C715FC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_1__,
    0);
  if ( !v27 )
    goto LABEL_40;
  WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(v27, v28, 0);
  v29 = this->fields.waveSelectDialog;
  v30 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_2__,
    0);
  if ( !v29 )
    goto LABEL_40;
  WaveBattleSelectWaveDialog__Open_35003944(v29, v30, 0);
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
  int32_t ContinueItemImageId; // w21
  UILabel_o *checkGiveUpLabel; // x20
  bool HasFlag; // w0
  bool v13; // w21
  __int64 *v14; // x8
  int32_t ContinueItemNum; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCA992 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C713B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_2840/*"BATTLE_RETIRE_CHECKSTR"*/);
    sub_1C713B0(&StringLiteral_25182/*"{0:#,0}"*/);
    sub_1C713B0(&StringLiteral_2841/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/);
    byte_4CCA992 = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0);
  if ( !giveUpWindow )
    goto LABEL_54;
  v16.fields.x = 0.0;
  v16.fields.z = 0.0;
  v16.fields.y = 72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v16, 0);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpBg;
  if ( !giveUpWindow )
    goto LABEL_54;
  UIWidget__set_height((UIWidget_o *)giveUpWindow, 239, 0);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpTitle;
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)giveUpWindow,
                                               0);
  if ( !giveUpWindow )
    goto LABEL_54;
  v17.fields.x = 0.0;
  v17.fields.z = 0.0;
  v17.fields.y = 77.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v17, 0);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)giveUpWindow,
                                               0);
  if ( !giveUpWindow )
    goto LABEL_54;
  v18.fields.x = 0.0;
  v18.fields.y = 6.0;
  v18.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v18, 0);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpContinueItemLabel;
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)giveUpWindow, 0);
  if ( !giveUpWindow )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0);
  giveUpWindow = this->fields.giveUpOkBtn;
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0);
  if ( !giveUpWindow )
    goto LABEL_54;
  v19.fields.z = 0.0;
  v19.fields.x = 193.0;
  v19.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v19, 0);
  giveUpWindow = this->fields.giveUpCancelBtn;
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0);
  if ( !giveUpWindow )
    goto LABEL_54;
  v20.fields.z = 0.0;
  v20.fields.x = -193.0;
  v20.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v20, 0);
  giveUpWindow = this->fields.giveUpContinueItemRoot;
  if ( !giveUpWindow )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0);
  giveUpWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)giveUpWindow,
                                               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestMaster___);
  data = this->fields.data;
  if ( !data )
    goto LABEL_54;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent || !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)giveUpWindow,
                                               battle_ent->fields.questId,
                                               (const MethodInfo_3408E80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v6 = (QuestEntity_o *)giveUpWindow;
  if ( this->fields.IsContinueItem )
  {
    giveUpWindow = (UnityEngine_GameObject_o *)this->fields.data;
    if ( !giveUpWindow )
      goto LABEL_54;
    giveUpWindow = (UnityEngine_GameObject_o *)BattleData__GetContinueItemNum((BattleData_o *)giveUpWindow, 0);
    if ( (int)giveUpWindow >= 1 )
    {
      giveUpWindow = this->fields.giveUpWindow;
      if ( giveUpWindow )
      {
        giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0);
        if ( giveUpWindow )
        {
          v21.fields.x = 0.0;
          v21.fields.z = 0.0;
          v21.fields.y = 66.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v21, 0);
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
                v22.fields.x = 0.0;
                v22.fields.z = 0.0;
                v22.fields.y = 97.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v22, 0);
                giveUpWindow = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
                if ( giveUpWindow )
                {
                  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)giveUpWindow,
                                                               0);
                  if ( giveUpWindow )
                  {
                    v23.fields.x = 0.0;
                    v23.fields.y = 26.0;
                    v23.fields.z = 0.0;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v23, 0);
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
                            v24.fields.z = 0.0;
                            v24.fields.x = 193.0;
                            v24.fields.y = -92.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v24, 0);
                            giveUpWindow = this->fields.giveUpCancelBtn;
                            if ( giveUpWindow )
                            {
                              giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                           giveUpWindow,
                                                                           0);
                              if ( giveUpWindow )
                              {
                                v25.fields.z = 0.0;
                                v25.fields.x = -193.0;
                                v25.fields.y = -92.0;
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)giveUpWindow,
                                  v25,
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
                                    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ContinueItemNum);
                                    giveUpWindow = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                 (System_String_o *)StringLiteral_25182/*"{0:#,0}"*/,
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
                                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                        AtlasManager__SetItem(giveUpContinueItemSpr, ContinueItemImageId, 0);
                                        checkGiveUpLabel = this->fields.checkGiveUpLabel;
                                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                        goto LABEL_50;
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
LABEL_54:
      sub_1C71608(giveUpWindow, method);
    }
  }
  if ( !v6 )
    goto LABEL_54;
  HasFlag = QuestEntity__HasFlag(v6, 0x40000000, 0);
  checkGiveUpLabel = this->fields.checkGiveUpLabel;
  v13 = HasFlag;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v13 )
      goto LABEL_48;
LABEL_50:
    v14 = &StringLiteral_2840/*"BATTLE_RETIRE_CHECKSTR"*/;
    goto LABEL_51;
  }
  if ( !HasFlag )
    goto LABEL_50;
LABEL_48:
  v14 = &StringLiteral_2841/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/;
LABEL_51:
  giveUpWindow = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v14, 0);
  if ( !checkGiveUpLabel )
    goto LABEL_54;
  UILabel__set_text(checkGiveUpLabel, (System_String_o *)giveUpWindow, 0);
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(giveUpWindow, 1, 0);
}


void BattlePerformanceContinue__OpenInterruptionConfirmWindow(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x20
  System_String_o *v6; // x21
  System_String_o *v7; // x22
  System_String_o *v8; // x23
  System_String_o *v9; // x24
  CommonConfirmDialog_ClickDelegate_o *v10; // x25

  if ( (byte_4CCA9CF & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue__OpenInterruptionConfirmWindow_b__142_0__);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_2779/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/);
    sub_1C713B0(&StringLiteral_2777/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/);
    sub_1C713B0(&StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_2776/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/);
    byte_4CCA9CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0, 0);
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2777/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_2776/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2779/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/, 0);
  v10 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenInterruptionConfirmWindow_b__142_0__,
    0);
  if ( !v5 )
LABEL_8:
    sub_1C71608(Instance, v4);
  CommonUI__OpenConfirmDecideDialog((CommonUI_o *)v5, v6, v7, v8, v9, v10, 23, 280, 13.0, 22, 1, 0);
}


void BattlePerformanceContinue__OpenWaveSelectConfirmDialog(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  int32_t selectedInterruptionWave; // w21
  int32_t DispWaveCount; // w20
  struct BattleData_o *v6; // x8
  System_String_o *v7; // x20
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  struct BattleData_o *v10; // x8
  System_String_o *v11; // x20
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  int32_t v15; // w22
  int32_t v16; // w21
  System_String_o *v17; // x0
  struct BattleData_o *v18; // x8
  System_String_o *v19; // x21
  Il2CppObject *v20; // x0
  System_String_o *v21; // x21
  int32_t v22; // w27
  int32_t v23; // w22
  Il2CppObject *Instance; // x23
  System_String_o *v25; // x24
  System_String_o *v26; // x25
  CommonConfirmDialog_ClickDelegate_o *v27; // x26
  int32_t decideTxtSize; // w8
  int32_t v29; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4CCA9D2 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue__OpenWaveSelectConfirmDialog_b__145_0__);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_2786/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_2784/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_2783/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_2785/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/);
    sub_1C713B0(&StringLiteral_2788/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/);
    sub_1C713B0(&StringLiteral_1122/*"00"*/);
    sub_1C713B0(&StringLiteral_2787/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/);
    byte_4CCA9D2 = 1;
  }
  v29 = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  selectedInterruptionWave = data->fields.selectedInterruptionWave;
  DispWaveCount = BattleData__getDispWaveCount(data, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( selectedInterruptionWave == DispWaveCount )
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2787/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/, 0);
    v6 = this->fields.data;
    if ( !v6 )
      goto LABEL_28;
    v7 = (System_String_o *)data;
    v8 = (Il2CppObject *)System_Int32__ToString_65540220((int)v6 + 1136, (System_String_o *)StringLiteral_1122/*"00"*/, 0);
    v9 = System_String__Format(v7, v8, 0);
  }
  else
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2786/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0);
    v10 = this->fields.data;
    if ( !v10 )
      goto LABEL_28;
    v11 = (System_String_o *)data;
    data = (BattleData_o *)System_Int32__ToString_65540220((int)v10 + 1136, (System_String_o *)StringLiteral_1122/*"00"*/, 0);
    if ( !this->fields.data )
      goto LABEL_28;
    v12 = (Il2CppObject *)data;
    v29 = BattleData__getDispWaveCount(this->fields.data, 0);
    v13 = (Il2CppObject *)System_Int32__ToString_65540220((int32_t)&v29, (System_String_o *)StringLiteral_1122/*"00"*/, 0);
    v9 = System_String__Format_64073032(v11, v12, v13, 0);
  }
  v14 = v9;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  v15 = data->fields.selectedInterruptionWave;
  v16 = BattleData__getDispWaveCount(data, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v15 == v16 )
  {
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2785/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/, 0);
  }
  else
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2784/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0);
    v18 = this->fields.data;
    if ( !v18 )
      goto LABEL_28;
    v19 = (System_String_o *)data;
    v20 = (Il2CppObject *)System_Int32__ToString_65540220((int)v18 + 1136, (System_String_o *)StringLiteral_1122/*"00"*/, 0);
    v17 = System_String__Format(v19, v20, 0);
  }
  v21 = v17;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  v22 = data->fields.selectedInterruptionWave;
  v23 = BattleData__getDispWaveCount(data, 0);
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !data )
    goto LABEL_28;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)data, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_2788/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, 0);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2783/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, 0);
  v27 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v27,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenWaveSelectConfirmDialog_b__145_0__,
    0);
  if ( !Instance )
LABEL_28:
    sub_1C71608(data, method);
  if ( v22 == v23 )
    decideTxtSize = 30;
  else
    decideTxtSize = 22;
  CommonUI__OpenConfirmDecideDialog((CommonUI_o *)Instance, v25, v14, v21, v26, v27, 26, 280, 13.0, decideTxtSize, 1, 0);
}


void BattlePerformanceContinue__ProcInterruption(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  struct BattleWindowInterruptionComponent_o *continueInterruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CCA9D0 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue__ProcInterruption_b__143_0__);
    sub_1C713B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4CCA9D0 = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C715FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__ProcInterruption_b__143_0__,
    0);
  if ( !continueInterruptionWindow )
    sub_1C71608(v5, v6);
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

  if ( (byte_4CCA9D3 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue__ProcSelectWaveRestart_b__146_0__);
    sub_1C713B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA9D3 = 1;
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0, 0) )
  {
    v5 = this->fields.waveSelectDialog;
    if ( !v5 )
      goto LABEL_14;
    WaveBattleSelectWaveDialog__Close(v5, 0);
  }
  continueInterruptionWindow = (UnityEngine_Object_o *)this->fields.continueInterruptionWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(continueInterruptionWindow, 0, 0) )
  {
    v7 = this->fields.continueInterruptionWindow;
    v8 = (BattleWindowComponent_EndCall_o *)sub_1C715FC(BattleWindowComponent_EndCall_TypeInfo);
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
    sub_1C71608(v5, v4);
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

  if ( (byte_4CCA9CE & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue__ProcWaveRestartFromInterruption_b__141_0__);
    sub_1C713B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4CCA9CE = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C715FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__ProcWaveRestartFromInterruption_b__141_0__,
    0);
  if ( !continueInterruptionWindow )
    sub_1C71608(v5, v6);
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
    sub_1C71608(ContinueItemWindow, method);
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
  System_String_o *v19; // x21
  System_String_o *v20; // x22
  bool v21; // w23
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  int32_t uiId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CCA9C7 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_2714/*"BATTLE_CONTINUE_DEFENCE_TARGET_HEAL"*/);
    sub_1C713B0(&StringLiteral_25327/*"{0}_{1}"*/);
    sub_1C713B0(&StringLiteral_2722/*"BATTLE_CONTINUE_NOT_ENOUGH_STONE"*/);
    byte_4CCA9C7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__Get(localizationKey, 0);
  if ( !label )
    goto LABEL_26;
  UILabel__set_text(label, SelfUserGame, 0);
  if ( stoneCount == 0x80000000 )
  {
    SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      goto LABEL_26;
    stoneCount = UserGameEntity__get_PayableStoneNum((UserGameEntity_o *)SelfUserGame, 0);
  }
  if ( stoneCount <= 0 )
  {
    mText = label->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2722/*"BATTLE_CONTINUE_NOT_ENOUGH_STONE"*/, 0);
    v13 = System_String__Concat_64031724(mText, v12, 0);
    UILabel__set_text(label, v13, 0);
  }
  SelfUserGame = (System_String_o *)this->fields.data;
  if ( !SelfUserGame )
    goto LABEL_26;
  SelfUserGame = (System_String_o *)BattleData__CheckDefenceTargetData((BattleData_o *)SelfUserGame, 0);
  if ( ((unsigned __int8)SelfUserGame & 1) == 0 )
    return;
  data = this->fields.data;
  if ( !data || (defenceTargetData = data->fields.defenceTargetData) == 0 )
LABEL_26:
    sub_1C71608(SelfUserGame, v10);
  v16 = (Il2CppObject *)StringLiteral_2714/*"BATTLE_CONTINUE_DEFENCE_TARGET_HEAL"*/;
  uiId = defenceTargetData->fields.uiId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &uiId);
  v18 = System_String__Format_64073032((System_String_o *)StringLiteral_25327/*"{0}_{1}"*/, v16, v17, 0);
  v19 = label->fields.mText;
  v20 = v18;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__ContainsKey(v20, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v21 )
    v22 = v20;
  else
    v22 = (System_String_o *)v16;
  v23 = LocalizationManager__Get(v22, 0);
  v24 = System_String__Concat_64031724(v19, v23, 0);
  UILabel__set_text(label, v24, 0);
}


void BattlePerformanceContinue__SkipCommandSpellRequest(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4CCA9C3 & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C713B0(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_3789/*"CONNECT_OK"*/);
    sub_1C713B0(&StringLiteral_6916/*"GAME_OVER_COMMAND_SPELL_ID"*/);
    byte_4CCA9C3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  Instance = (void *)ConstantMaster__getValue((System_String_o *)StringLiteral_6916/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int32_t)Instance,
               (const MethodInfo_3408E80 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_12;
  if ( !this->fields.data )
    goto LABEL_12;
  BattleData__LossTemporaryCommandSpell(this->fields.data, *((_DWORD *)Instance + 5), 0);
  Instance = this->fields.data;
  if ( !Instance )
    goto LABEL_12;
  BattleData__SuccessContinue((BattleData_o *)Instance, 0);
  this->fields.continueRetryFlg = 0;
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setContinueBattleFlg(0, 1, 0);
  Instance = this->fields.myFsm;
  if ( !Instance )
LABEL_12:
    sub_1C71608(Instance, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3789/*"CONNECT_OK"*/, 0);
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
    sub_1C71608(0, v4);
  BattlePerformance__SetTimeScale(perf, 1.0, 0);
}


void BattlePerformanceContinue__StartContinueImpl(
        BattlePerformanceContinue_o *this,
        bool inIsProgress,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  BattleViewItemlistComponent_o *itemWindow; // x21
  UserGameEntity_o *v7; // x20
  BattleDropItem_array *DropItems; // x22
  BattleDropItemComponent_ClickDelegate_o *v9; // x23
  UILabel_o *commandspell_now; // x21
  System_String_o *v11; // x1
  const MethodInfo *v12; // x2
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x1
  int32_t OverwriteCommandSpellContinue; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CCA991 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue_StartContinueImpl__);
    sub_1C713B0(&Method_BattlePerformanceContinue_showConf__);
    sub_1C713B0(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    sub_1C713B0(&StringLiteral_12325/*"START_CONTINUE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCA991 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !this->fields.data )
    goto LABEL_20;
  itemWindow = this->fields.itemWindow;
  v7 = SelfUserGame;
  DropItems = BattleData__getDropItems(this->fields.data, 0);
  v9 = (BattleDropItemComponent_ClickDelegate_o *)sub_1C715FC(BattleDropItemComponent_ClickDelegate_TypeInfo);
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
  SelfUserGame = (UserGameEntity_o *)BattleData__CheckCurrentTemporaryCommandSpell((BattleData_o *)SelfUserGame, v7, 0);
  if ( !this->fields.data )
    goto LABEL_20;
  OverwriteCommandSpellContinue = BattleData__GetOverwriteCommandSpellContinue(
                                    this->fields.data,
                                    (int32_t)SelfUserGame,
                                    0);
  commandspell_now = this->fields.commandspell_now;
  SelfUserGame = (UserGameEntity_o *)System_Int32__ToString((int32_t)&OverwriteCommandSpellContinue, 0);
  if ( !commandspell_now )
    goto LABEL_20;
  v11 = SelfUserGame ? (System_String_o *)SelfUserGame : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(commandspell_now, v11, 0);
  BattlePerformanceContinue__refreshStoneNow(this, v7, v12);
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
  v13 = Method_BattlePerformanceContinue_StartContinueImpl__;
  if ( (*((_BYTE *)Method_BattlePerformanceContinue_StartContinueImpl__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C713C8(Method_BattlePerformanceContinue_StartContinueImpl__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C71394(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 7, 0, 0);
  BattlePerformanceContinue__ResetContinueItemInfo(this, v15);
  SelfUserGame = (UserGameEntity_o *)this->fields.myFsm;
  if ( !SelfUserGame )
LABEL_20:
    sub_1C71608(SelfUserGame, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_12325/*"START_CONTINUE"*/, 0);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  BattleWindowInterruptionComponent_o *v16; // x20
  System_Action_o *v17; // x21
  System_Action_o *v18; // x22
  System_Action_o *v19; // x23

  if ( (byte_4CCA9CC & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_BattlePerformanceContinue__StartContinueInterruption_b__139_0__);
    sub_1C713B0(&Method_BattlePerformanceContinue__StartContinueInterruption_b__139_1__);
    sub_1C713B0(&Method_BattlePerformanceContinue__StartContinueInterruption_b__139_2__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_12326/*"START_CONTINUE_INTERRUPTION"*/);
    byte_4CCA9CC = 1;
  }
  continueInterruptionWindow = (UnityEngine_Object_o *)this->fields.continueInterruptionWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      goto LABEL_13;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
    *p_continueInterruptionWindow = (struct BattleWindowInterruptionComponent_o *)Component_object;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.continueInterruptionWindow,
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
    goto LABEL_13;
  Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0);
  if ( !Object )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(Object, 0, 0);
  v16 = this->fields.continueInterruptionWindow;
  v17 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__139_0__,
    0);
  v18 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__139_1__,
    0);
  v19 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__139_2__,
    0);
  if ( !v16
    || (BattleWindowInterruptionComponent__SetInterruptionWindow(v16, 0, v17, v18, v19, 0, 1, 0),
        (Object = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
LABEL_13:
    sub_1C71608(Object, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Object, (System_String_o *)StringLiteral_12326/*"START_CONTINUE_INTERRUPTION"*/, 0);
}


void BattlePerformanceContinue__StartContinueWaveRestart(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  System_Action_o *v4; // x21
  System_Action_o *v5; // x22
  PlayMakerFSM_o *myFsm; // x0
  __int64 v7; // x1

  if ( (byte_4CCA9C8 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_BattlePerformanceContinue__StartContinueWaveRestart_b__135_0__);
    sub_1C713B0(&Method_BattlePerformanceContinue__StartContinueWaveRestart_b__135_1__);
    sub_1C713B0(&StringLiteral_12327/*"START_CONTINUE_WAVE_RESTART"*/);
    byte_4CCA9C8 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v4 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueWaveRestart_b__135_0__,
    0);
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueWaveRestart_b__135_1__,
    0);
  if ( !continueWaveRestartWindow
    || (BattleWindowContinueWaveRestartComponent__SetWindow(continueWaveRestartWindow, v4, v5, 0),
        (myFsm = this->fields.myFsm) == 0) )
  {
    sub_1C71608(myFsm, v7);
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12327/*"START_CONTINUE_WAVE_RESTART"*/, 0);
}


void BattlePerformanceContinue__Update(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *data; // x20
  __int64 v4; // x1
  BattleData_o *v5; // x0
  int64_t ContinueDeadLine; // x20
  System_String_o *RestTime; // x0
  UILabel_o *giveUpContinueItemLabel; // x21
  Il2CppObject *v9; // x20
  System_String_o *v10; // x0
  UILabel_o *deadLine; // x21
  System_String_o *v12; // x0
  UILabel_o *useCheckContinueItemLabel; // x21
  System_String_o *v14; // x0
  int64_t v15; // x20
  Il2CppObject *Instance; // x20
  System_String_o *v17; // x21
  ErrorDialog_ClickDelegate_o *v18; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-50h]

  if ( (byte_4CCA98C & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue_CallbackConfirmDialog__);
    sub_1C713B0(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_2721/*"BATTLE_CONTINUE_ITEM_USE_CHECK"*/);
    sub_1C713B0(&StringLiteral_2717/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/);
    sub_1C713B0(&StringLiteral_2718/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/);
    sub_1C713B0(&StringLiteral_2716/*"BATTLE_CONTINUE_ITEM_END_TIME"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCA98C = 1;
  }
  data = (UnityEngine_Object_o *)this->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(data, 0, 0) && this->fields.IsContinueItem )
  {
    v5 = this->fields.data;
    if ( !v5 )
      goto LABEL_23;
    ContinueDeadLine = BattleData__GetContinueDeadLine(v5, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime = LocalizationManager__GetRestTime(ContinueDeadLine, 0);
    giveUpContinueItemLabel = this->fields.giveUpContinueItemLabel;
    v9 = (Il2CppObject *)RestTime;
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2717/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, 0);
    v5 = (BattleData_o *)System_String__Format(v10, v9, 0);
    if ( !giveUpContinueItemLabel )
      goto LABEL_23;
    UILabel__set_text(giveUpContinueItemLabel, (System_String_o *)v5, 0);
    deadLine = this->fields.deadLine;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2718/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, 0);
    v5 = (BattleData_o *)System_String__Format(v12, v9, 0);
    if ( !deadLine )
      goto LABEL_23;
    UILabel__set_text(deadLine, (System_String_o *)v5, 0);
    useCheckContinueItemLabel = this->fields.useCheckContinueItemLabel;
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2721/*"BATTLE_CONTINUE_ITEM_USE_CHECK"*/, 0);
    v5 = (BattleData_o *)System_String__Format(v14, v9, 0);
    if ( !useCheckContinueItemLabel )
      goto LABEL_23;
    UILabel__set_text(useCheckContinueItemLabel, (System_String_o *)v5, 0);
    v5 = this->fields.data;
    if ( !v5 )
      goto LABEL_23;
    v15 = BattleData__GetContinueDeadLine(v5, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( v15 < NetworkManager__getTime(0) && !this->fields.isShowDeadLineDialog )
    {
      this->fields.isShowDeadLineDialog = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2716/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0);
      v18 = (ErrorDialog_ClickDelegate_o *)sub_1C715FC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v18,
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
          v17,
          v18,
          0,
          0,
          -1.0,
          1,
          effectDistance,
          0);
        return;
      }
LABEL_23:
      sub_1C71608(v5, v4);
    }
  }
}


void BattlePerformanceContinue__WaveRestartNg(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CCA9CB & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue__WaveRestartNg_b__138_0__);
    sub_1C713B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4CCA9CB = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C715FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__WaveRestartNg_b__138_0__,
    0);
  if ( !continueWaveRestartWindow )
    sub_1C71608(v5, v6);
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

  if ( (byte_4CCA9CA & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue__WaveRestartOk_b__137_0__);
    sub_1C713B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4CCA9CA = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C715FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__WaveRestartOk_b__137_0__,
    0);
  if ( !continueWaveRestartWindow )
    sub_1C71608(v5, v6);
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
  UILabel_o *ContinueStoneNum; // x21
  UILabel_o *gem_now; // x22
  UILabel_o *stone_now; // x23
  System_String_o *v11; // x20
  BattlePerformanceContinue_o *v12; // x0
  const MethodInfo *v13; // x1
  bool IsAvailableStone; // w0
  UILabel_o *ContinueStoneBtnLabel; // x20
  bool v16; // w21
  UILabel_o *stoneBtnLabel; // x20
  System_String_o *ActiveStateName; // x0
  UILabel_o *v19; // x20
  BattlePerformanceContinue_o *v20; // x0
  const MethodInfo *v21; // x1
  System_String_o **v22; // x8
  UILabel_o *ContinueLabel; // x20
  System_String_o *v24; // x21
  int32_t PayableStoneNum; // w0
  const MethodInfo *v26; // x4
  UILabel_o *checkUseCommandSpell; // x20
  BattlePerformanceContinue_o *v28; // x0
  const MethodInfo *v29; // x1
  int32_t v30; // w0
  const MethodInfo *v31; // x4
  UILabel_o *checkUseGem; // x20
  BattlePerformanceContinue_o *v33; // x0
  const MethodInfo *v34; // x1
  int32_t v35; // w0
  const MethodInfo *v36; // x4
  int32_t v37; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CCA9D5 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_2712/*"BATTLE_CONTINUE_CHECK_SPELL"*/);
    sub_1C713B0(&StringLiteral_2711/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
    sub_1C713B0(&StringLiteral_2713/*"BATTLE_CONTINUE_CHECK_STONE"*/);
    sub_1C713B0(&StringLiteral_2710/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/);
    sub_1C713B0(&StringLiteral_25182/*"{0:#,0}"*/);
    sub_1C713B0(&StringLiteral_12689/*"Select_NoStone"*/);
    sub_1C713B0(&StringLiteral_2719/*"BATTLE_CONTINUE_ITEM_SELECT"*/);
    sub_1C713B0(&StringLiteral_2720/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/);
    sub_1C713B0(&StringLiteral_12690/*"Select_Stone"*/);
    byte_4CCA9D5 = 1;
  }
  v37 = stoneCount;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  myFsm = System_String__Format((System_String_o *)StringLiteral_25182/*"{0:#,0}"*/, v5, 0);
  if ( !this->fields.stoneNumInStonelessWindow )
    goto LABEL_26;
  ContinueStoneNum = this->fields.ContinueStoneNum;
  gem_now = this->fields.gem_now;
  stone_now = this->fields.stone_now;
  v11 = myFsm;
  UILabel__set_text(this->fields.stoneNumInStonelessWindow, myFsm, 0);
  if ( !stone_now )
    goto LABEL_26;
  UILabel__set_text(stone_now, v11, 0);
  if ( !gem_now )
    goto LABEL_26;
  UILabel__set_text(gem_now, v11, 0);
  if ( !ContinueStoneNum )
    goto LABEL_26;
  UILabel__set_text(ContinueStoneNum, v11, 0);
  IsAvailableStone = BattlePerformanceContinue__IsAvailableStone(v12, v13);
  ContinueStoneBtnLabel = this->fields.ContinueStoneBtnLabel;
  v16 = IsAvailableStone;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsAvailableStone )
      goto LABEL_9;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v16 )
    {
LABEL_9:
      myFsm = LocalizationManager__Get((System_String_o *)StringLiteral_2711/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, 0);
      if ( ContinueStoneBtnLabel )
      {
        UILabel__set_text(ContinueStoneBtnLabel, myFsm, 0);
        stoneBtnLabel = this->fields.stoneBtnLabel;
        myFsm = LocalizationManager__Get((System_String_o *)StringLiteral_2711/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, 0);
        if ( stoneBtnLabel )
        {
          UILabel__set_text(stoneBtnLabel, myFsm, 0);
          myFsm = (System_String_o *)this->fields.myFsm;
          if ( myFsm )
          {
            ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)myFsm, 0);
            if ( !System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_12689/*"Select_NoStone"*/, 0) )
              goto LABEL_21;
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
                  PlayMakerFSM__SetState((PlayMakerFSM_o *)myFsm, (System_String_o *)StringLiteral_12690/*"Select_Stone"*/, 0);
                  goto LABEL_21;
                }
              }
            }
          }
        }
      }
LABEL_26:
      sub_1C71608(myFsm, v7);
    }
  }
  myFsm = LocalizationManager__Get((System_String_o *)StringLiteral_2710/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, 0);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_26;
  UILabel__set_text(ContinueStoneBtnLabel, myFsm, 0);
  v19 = this->fields.stoneBtnLabel;
  myFsm = LocalizationManager__Get((System_String_o *)StringLiteral_2710/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, 0);
  if ( !v19 )
    goto LABEL_26;
  UILabel__set_text(v19, myFsm, 0);
LABEL_21:
  myFsm = (System_String_o *)UserGameMaster__getSelfUserGame(0);
  if ( !this->fields.data )
    goto LABEL_26;
  v20 = (BattlePerformanceContinue_o *)BattleData__CheckCurrentTemporaryCommandSpell(
                                         this->fields.data,
                                         (UserGameEntity_o *)myFsm,
                                         0);
  if ( (int)v20 <= 2 )
    v22 = (System_String_o **)&StringLiteral_2720/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/;
  else
    v22 = (System_String_o **)&StringLiteral_2719/*"BATTLE_CONTINUE_ITEM_SELECT"*/;
  ContinueLabel = this->fields.ContinueLabel;
  v24 = *v22;
  PayableStoneNum = BattlePerformanceContinue__GetPayableStoneNum(v20, v21);
  BattlePerformanceContinue__SetContinueMessage(this, ContinueLabel, v24, PayableStoneNum, v26);
  checkUseCommandSpell = this->fields.checkUseCommandSpell;
  v30 = BattlePerformanceContinue__GetPayableStoneNum(v28, v29);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    checkUseCommandSpell,
    (System_String_o *)StringLiteral_2712/*"BATTLE_CONTINUE_CHECK_SPELL"*/,
    v30,
    v31);
  checkUseGem = this->fields.checkUseGem;
  v35 = BattlePerformanceContinue__GetPayableStoneNum(v33, v34);
  BattlePerformanceContinue__SetContinueMessage(this, checkUseGem, (System_String_o *)StringLiteral_2713/*"BATTLE_CONTINUE_CHECK_STONE"*/, v35, v36);
}


void BattlePerformanceContinue___CheckDefenceTargetBroken_b__130_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCA9D6 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5734/*"EVENT_TRUE"*/);
    byte_4CCA9D6 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5734/*"EVENT_TRUE"*/, 0);
}


void BattlePerformanceContinue___OpenBrokenMessage_b__131_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCA9D7 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5430/*"END_CLOSE"*/);
    byte_4CCA9D7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5430/*"END_CLOSE"*/, 0);
}


void BattlePerformanceContinue___OpenContinueInterruption_b__140_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCA9E0 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5444/*"END_OPEN"*/);
    byte_4CCA9E0 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5444/*"END_OPEN"*/, 0);
}


void BattlePerformanceContinue___OpenContinueWaveRestart_b__136_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCA9DA & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5444/*"END_OPEN"*/);
    byte_4CCA9DA = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5444/*"END_OPEN"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__144_0(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattlePerformanceContinue_o *v9; // x19
  struct BattleData_o *data; // x8
  int32_t v11; // w1
  WaveBattleSelectWaveDialog_o *waveSelectDialog; // x20
  System_Action_o *v13; // x21

  v9 = this;
  if ( (byte_4CCA9E4 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_3__);
    sub_1C713B0(&StringLiteral_3276/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/);
    this = (BattlePerformanceContinue_o *)sub_1C713B0(&StringLiteral_7474/*"INTERRUPTION"*/);
    byte_4CCA9E4 = 1;
  }
  data = v9->fields.data;
  if ( !data )
    goto LABEL_9;
  data->fields.selectedInterruptionWave = -1;
  if ( isDecide )
  {
    v11 = StringLiteral_3276/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    v9->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3276/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&v9->fields.cancelInterruptionEvent,
      v11,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this = (BattlePerformanceContinue_o *)v9->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_7474/*"INTERRUPTION"*/, 0);
      return;
    }
LABEL_9:
    sub_1C71608(this, isDecide);
  }
  waveSelectDialog = v9->fields.waveSelectDialog;
  v13 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_3__,
    0);
  if ( !waveSelectDialog )
    goto LABEL_9;
  WaveBattleSelectWaveDialog__Close_34999416(waveSelectDialog, v13, 0);
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

  if ( (byte_4CCA9E6 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_1__);
    sub_1C713B0(&StringLiteral_11560/*"SELECT_WAVE"*/);
    byte_4CCA9E6 = 1;
  }
  v5 = Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_1__;
  if ( (*((_BYTE *)Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_1__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C713C8(Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__144_1__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  data = this->fields.data;
  if ( !data || (data->fields.selectedInterruptionWave = wave, (myFsm = this->fields.myFsm) == 0) )
    sub_1C71608(myFsm, v8);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_11560/*"SELECT_WAVE"*/, 0);
}


void BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__144_2(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCA9E7 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5449/*"END_PROC"*/);
    byte_4CCA9E7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5449/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__144_3(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *waveSelectDialog; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CCA9E5 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_9268/*"NG"*/);
    byte_4CCA9E5 = 1;
  }
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.waveSelectDialog;
  if ( !waveSelectDialog )
    goto LABEL_8;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(waveSelectDialog, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(gameObject, 0);
  this->fields.waveSelectDialog = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.waveSelectDialog, 0, v5, v6, v7, v8, v9, v10);
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.myFsm;
  if ( !waveSelectDialog )
LABEL_8:
    sub_1C71608(waveSelectDialog, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)waveSelectDialog, (System_String_o *)StringLiteral_9268/*"NG"*/, 0);
}


void BattlePerformanceContinue___OpenInterruptionConfirmWindow_b__142_0(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_String_o **p_cancelInterruptionEvent; // x8
  struct System_String_o *v21; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v23; // x20

  if ( (byte_4CCA9E2 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_BattlePerformanceContinue___c__DisplayClass142_0__OpenInterruptionConfirmWindow_b__1__);
    sub_1C713B0(&BattlePerformanceContinue___c__DisplayClass142_0_TypeInfo);
    sub_1C713B0(&StringLiteral_4964/*"DECIDE_INTERRUPTION"*/);
    byte_4CCA9E2 = 1;
  }
  v5 = sub_1C715FC(BattlePerformanceContinue___c__DisplayClass142_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  p_cancelInterruptionEvent = &this->fields.cancelInterruptionEvent;
  if ( isDecide )
    p_cancelInterruptionEvent = (struct System_String_o **)&StringLiteral_4964/*"DECIDE_INTERRUPTION"*/;
  v21 = *p_cancelInterruptionEvent;
  *(_QWORD *)(v5 + 16) = *p_cancelInterruptionEvent;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)v21, v14, v15, v16, v17, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_BattlePerformanceContinue___c__DisplayClass142_0__OpenInterruptionConfirmWindow_b__1__,
    0);
  if ( !Instance )
LABEL_8:
    sub_1C71608(v6, v7);
  CommonUI__CloseConfirmDialog_31440904((CommonUI_o *)Instance, v23, 0);
}


void BattlePerformanceContinue___OpenWaveSelectConfirmDialog_b__145_0(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x20
  WaveBattleSelectWaveDialog_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Instance; // x21
  System_Action_o *v15; // x22
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_4CCA9E8 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_BattlePerformanceContinue___c__DisplayClass145_0__OpenWaveSelectConfirmDialog_b__1__);
    sub_1C713B0(&BattlePerformanceContinue___c__DisplayClass145_0_TypeInfo);
    byte_4CCA9E8 = 1;
  }
  v5 = sub_1C715FC(BattlePerformanceContinue___c__DisplayClass145_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 16) = isDecide;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_BattlePerformanceContinue___c__DisplayClass145_0__OpenWaveSelectConfirmDialog_b__1__,
    0);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_31440904((CommonUI_o *)Instance, v15, 0);
  if ( *(_BYTE *)(v5 + 16) )
  {
    waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0, 0) )
    {
      v6 = this->fields.waveSelectDialog;
      if ( v6 )
      {
        WaveBattleSelectWaveDialog__Close(v6, 0);
        return;
      }
LABEL_12:
      sub_1C71608(v6, v7);
    }
  }
}


void BattlePerformanceContinue___ProcInterruption_b__143_0(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_4CCA9E3 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_10476/*"PROC_INTERRUPTION"*/);
    byte_4CCA9E3 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1C71608(0, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10476/*"PROC_INTERRUPTION"*/, 0);
}


void BattlePerformanceContinue___ProcSelectWaveRestart_b__146_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_4CCA9E9 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_10477/*"PROC_PARTY_REORGANIZATION"*/);
    byte_4CCA9E9 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1C71608(0, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10477/*"PROC_PARTY_REORGANIZATION"*/, 0);
}


void BattlePerformanceContinue___ProcWaveRestartFromInterruption_b__141_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_4CCA9E1 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_10479/*"PROC_WAVE_RESTART"*/);
    byte_4CCA9E1 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1C71608(0, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10479/*"PROC_WAVE_RESTART"*/, 0);
}


void BattlePerformanceContinue___StartContinueInterruption_b__139_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCA9DD & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_15549/*"WAVE_RESTART"*/);
    byte_4CCA9DD = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15549/*"WAVE_RESTART"*/, 0);
}


void BattlePerformanceContinue___StartContinueInterruption_b__139_1(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCA9DE & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_11561/*"SELECT_WAVE_RESTART"*/);
    byte_4CCA9DE = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_11561/*"SELECT_WAVE_RESTART"*/, 0);
}


void BattlePerformanceContinue___StartContinueInterruption_b__139_2(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  __int64 v10; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCA9DF & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_7474/*"INTERRUPTION"*/);
    sub_1C713B0(&StringLiteral_3275/*"CANCEL_INTERRUPTION"*/);
    byte_4CCA9DF = 1;
  }
  v9 = StringLiteral_3275/*"CANCEL_INTERRUPTION"*/;
  this->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3275/*"CANCEL_INTERRUPTION"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.cancelInterruptionEvent, v9, v2, v3, v4, v5, v6, v7);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, v10);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_7474/*"INTERRUPTION"*/, 0);
}


void BattlePerformanceContinue___StartContinueWaveRestart_b__135_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCA9D8 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9623/*"OK"*/);
    byte_4CCA9D8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9623/*"OK"*/, 0);
}


void BattlePerformanceContinue___StartContinueWaveRestart_b__135_1(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCA9D9 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9268/*"NG"*/);
    byte_4CCA9D9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9268/*"NG"*/, 0);
}


void BattlePerformanceContinue___WaveRestartNg_b__138_0(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_4CCA9DC & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9268/*"NG"*/);
    byte_4CCA9DC = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1C71608(0, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9268/*"NG"*/, 0);
}


void BattlePerformanceContinue___WaveRestartOk_b__137_0(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_4CCA9DB & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9623/*"OK"*/);
    byte_4CCA9DB = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1C71608(0, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9623/*"OK"*/, 0);
}


void BattlePerformanceContinue__atlasLoadEnd(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleViewItemlistComponent_o *itemWindow; // x20
  BattleDropItem_array *DropItems; // x21
  BattleDropItemComponent_ClickDelegate_o *v6; // x22

  if ( (byte_4CCA990 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue_showConf__);
    sub_1C713B0(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    byte_4CCA990 = 1;
  }
  data = this->fields.data;
  if ( !data
    || (itemWindow = this->fields.itemWindow,
        DropItems = BattleData__getDropItems(data, 0),
        v6 = (BattleDropItemComponent_ClickDelegate_o *)sub_1C715FC(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_showConf__,
          0),
        !itemWindow) )
  {
    sub_1C71608(data, method);
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, DropItems, v6, this->fields.itemColumnCount, 0);
}


void BattlePerformanceContinue__callBackCommandSpell(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  BattlePerformanceContinue_o *v4; // x19
  __int64 *v5; // x8

  v4 = this;
  if ( (byte_4CCA9A2 & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&StringLiteral_3788/*"CONNECT_NG"*/);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    this = (BattlePerformanceContinue_o *)sub_1C713B0(&StringLiteral_3789/*"CONNECT_OK"*/);
    byte_4CCA9A2 = 1;
  }
  if ( !ret )
    goto LABEL_14;
  if ( System_String__Equals_64067044(ret, (System_String_o *)StringLiteral_22486/*"ok"*/, 0) )
  {
    v4->fields.continueRetryFlg = 0;
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__setContinueBattleFlg(0, 1, 0);
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    if ( this )
    {
      v5 = &StringLiteral_3789/*"CONNECT_OK"*/;
LABEL_12:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0);
      return;
    }
    goto LABEL_14;
  }
  if ( System_String__Equals_64067044(ret, (System_String_o *)StringLiteral_22316/*"ng"*/, 0) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      v5 = &StringLiteral_3788/*"CONNECT_NG"*/;
      goto LABEL_12;
    }
LABEL_14:
    sub_1C71608(this, ret);
  }
}


void BattlePerformanceContinue__callBackContinueItem(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  BattlePerformanceContinue_o *v4; // x19
  __int64 *v5; // x8

  v4 = this;
  if ( (byte_4CCA9BC & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&StringLiteral_3788/*"CONNECT_NG"*/);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    this = (BattlePerformanceContinue_o *)sub_1C713B0(&StringLiteral_3789/*"CONNECT_OK"*/);
    byte_4CCA9BC = 1;
  }
  if ( !ret )
    goto LABEL_17;
  if ( System_String__Equals_64067044(ret, (System_String_o *)StringLiteral_22486/*"ok"*/, 0) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.data;
    v4->fields.continueRetryFlg = 0;
    if ( this )
    {
      BattleData__SuccessContinue((BattleData_o *)this, 0);
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      BattleData__setContinueBattleFlg(0, 1, 0);
      BattleData__SaveContinueItemId(0, 0, 0);
      this = (BattlePerformanceContinue_o *)v4->fields.data;
      if ( this )
      {
        BattleData__UpdateContinueItemInfo((BattleData_o *)this, 0);
        this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
        if ( this )
        {
          v5 = &StringLiteral_3789/*"CONNECT_OK"*/;
LABEL_15:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0);
          return;
        }
      }
    }
    goto LABEL_17;
  }
  if ( System_String__Equals_64067044(ret, (System_String_o *)StringLiteral_22316/*"ng"*/, 0) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.data;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      BattleData__UpdateContinueItemInfo((BattleData_o *)this, 0);
      this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
      if ( this )
      {
        v5 = &StringLiteral_3788/*"CONNECT_NG"*/;
        goto LABEL_15;
      }
    }
LABEL_17:
    sub_1C71608(this, ret);
  }
}


void BattlePerformanceContinue__callBackStone(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  BattlePerformanceContinue_o *v4; // x19
  __int64 *v5; // x8

  v4 = this;
  if ( (byte_4CCA9AF & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&StringLiteral_3788/*"CONNECT_NG"*/);
    sub_1C713B0(&StringLiteral_22486/*"ok"*/);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    this = (BattlePerformanceContinue_o *)sub_1C713B0(&StringLiteral_3789/*"CONNECT_OK"*/);
    byte_4CCA9AF = 1;
  }
  if ( !ret )
    goto LABEL_15;
  if ( System_String__Equals_64067044(ret, (System_String_o *)StringLiteral_22486/*"ok"*/, 0) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.data;
    v4->fields.continueRetryFlg = 0;
    if ( this )
    {
      BattleData__SuccessContinue((BattleData_o *)this, 0);
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      BattleData__setContinueBattleFlg(0, 1, 0);
      this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
      if ( this )
      {
        v5 = &StringLiteral_3789/*"CONNECT_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0);
        return;
      }
    }
    goto LABEL_15;
  }
  if ( System_String__Equals_64067044(ret, (System_String_o *)StringLiteral_22316/*"ng"*/, 0) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      v5 = &StringLiteral_3788/*"CONNECT_NG"*/;
      goto LABEL_13;
    }
LABEL_15:
    sub_1C71608(this, ret);
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
    sub_1C71608(0, ret);
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

  if ( (byte_4CCA9B7 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_3788/*"CONNECT_NG"*/);
    sub_1C713B0(&StringLiteral_3789/*"CONNECT_OK"*/);
    byte_4CCA9B7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseStonePurchaseMenu(Instance, 0);
  BattlePerformanceContinue__closeNoStone(this, v7);
  if ( (unsigned int)(result - 1) > 1 )
  {
    Instance = (CommonUI_o *)this->fields.myFsm;
    if ( Instance )
    {
      v9 = &StringLiteral_3788/*"CONNECT_NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_1C71608(Instance, v6);
  }
  BattlePerformanceContinue__refreshStoneNow(this, 0, v8);
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_10;
  v9 = &StringLiteral_3789/*"CONNECT_OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v9, 0);
}


void BattlePerformanceContinue__checkCountStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1

  if ( (byte_4CCA9C1 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9265/*"NEXT"*/);
    byte_4CCA9C1 = 1;
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
    sub_1C71608(SelfUserGame, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_9265/*"NEXT"*/, 0);
}


void BattlePerformanceContinue__checkDeadLineStoneShopEnd(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  int64_t ContinueDeadLine; // x20
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  ErrorDialog_ClickDelegate_o *v7; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-50h]

  if ( (byte_4CCA9C2 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue_CallbackConfirmDialog__);
    sub_1C713B0(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_9265/*"NEXT"*/);
    sub_1C713B0(&StringLiteral_2716/*"BATTLE_CONTINUE_ITEM_END_TIME"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCA9C2 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ContinueDeadLine = BattleData__GetContinueDeadLine(data, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( ContinueDeadLine < NetworkManager__getTime(0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2716/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0);
    v7 = (ErrorDialog_ClickDelegate_o *)sub_1C715FC(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v7,
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
        v6,
        v7,
        0,
        0,
        -1.0,
        1,
        effectDistance,
        0);
      return;
    }
LABEL_13:
    sub_1C71608(data, method);
  }
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_9265/*"NEXT"*/, 0);
}


void BattlePerformanceContinue__checkSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x8
  __int64 *v6; // x9

  if ( (byte_4CCA99C & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9623/*"OK"*/);
    sub_1C713B0(&StringLiteral_9268/*"NG"*/);
    byte_4CCA99C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !this->fields.data
    || (SelfUserGame = (UserGameEntity_o *)BattleData__CheckCurrentTemporaryCommandSpell(
                                             this->fields.data,
                                             SelfUserGame,
                                             0),
        !this->fields.data)
    || (SelfUserGame = (UserGameEntity_o *)BattleData__GetOverwriteCommandSpellContinue(
                                             this->fields.data,
                                             (int32_t)SelfUserGame,
                                             0),
        (myFsm = this->fields.myFsm) == 0) )
  {
    sub_1C71608(SelfUserGame, v4);
  }
  v6 = &StringLiteral_9268/*"NG"*/;
  if ( (int)SelfUserGame >= 3 )
    v6 = &StringLiteral_9623/*"OK"*/;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v6, 0);
}


void BattlePerformanceContinue__checkStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  const MethodInfo *v4; // x2
  __int64 PayableStoneNum; // x0
  __int64 v6; // x1
  PlayMakerFSM_o *myFsm; // x8
  __int64 *v8; // x9

  if ( (byte_4CCA9A9 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9623/*"OK"*/);
    sub_1C713B0(&StringLiteral_9268/*"NG"*/);
    byte_4CCA9A9 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  BattlePerformanceContinue__refreshStoneNow(this, SelfUserGame, v4);
  if ( !SelfUserGame
    || (PayableStoneNum = UserGameEntity__get_PayableStoneNum(SelfUserGame, 0), (myFsm = this->fields.myFsm) == 0) )
  {
    sub_1C71608(PayableStoneNum, v6);
  }
  v8 = &StringLiteral_9268/*"NG"*/;
  if ( (int)PayableStoneNum >= 1 )
    v8 = &StringLiteral_9623/*"OK"*/;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v8, 0);
}


void BattlePerformanceContinue__closeContinueItem(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4CCA9B9 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue_endCloseContinueItem__);
    sub_1C713B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4CCA9B9 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C715FC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseContinueItem__,
          0),
        !window) )
  {
    sub_1C71608(itemWindow, method);
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

  if ( (byte_4CCA9B4 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue_endCloseNoStone__);
    sub_1C713B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4CCA9B4 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C715FC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseNoStone__,
          0),
        !window) )
  {
    sub_1C71608(itemWindow, method);
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

  if ( (byte_4CCA99F & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue_endCloseSpell__);
    sub_1C713B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4CCA99F = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C715FC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseSpell__,
          0),
        !window) )
  {
    sub_1C71608(itemWindow, method);
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

  if ( (byte_4CCA9AC & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue_endCloseStone__);
    sub_1C713B0(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4CCA9AC = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_1C715FC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseStone__,
          0),
        !window) )
  {
    sub_1C71608(itemWindow, method);
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
    sub_1C71608(useCheckWindow, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useCheckWindow, 0, 0);
}


void BattlePerformanceContinue__connectContinueItem(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  int32_t ContinueUseItemId; // w20
  NetworkManager_ResultCallbackFunc_o *v6; // x21
  struct BattleData_o *v7; // x8
  struct BattleEntity_o *battle_ent; // x9

  if ( (byte_4CCA9BB & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&Method_BattlePerformanceContinue_callBackContinueItem__);
    sub_1C713B0(&Method_NetworkManager_getRequest_BattleUseContinueItemRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CCA9BB = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
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
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callBackContinueItem__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  data = (BattleData_o *)NetworkManager__getRequest_object_(
                           v6,
                           (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_BattleUseContinueItemRequest___);
  v7 = this->fields.data;
  if ( !v7 )
    goto LABEL_16;
  if ( this->fields.continueRetryFlg )
  {
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0);
      return;
    }
LABEL_16:
    sub_1C71608(data, v3);
  }
  battle_ent = v7->fields.battle_ent;
  if ( !battle_ent || !data )
    goto LABEL_16;
  BattleUseContinueItemRequest__beginRequest(
    (BattleUseContinueItemRequest_o *)data,
    battle_ent->fields.id,
    v7->fields.continueCount,
    ContinueUseItemId,
    1,
    0);
}


void BattlePerformanceContinue__connectSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  const MethodInfo *v5; // x1
  _BOOL4 continueRetryFlg; // w21
  NetworkManager_ResultCallbackFunc_o *v7; // x0
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  struct BattleData_o *v9; // x8
  int32_t continueCount; // w21
  struct BattleEntity_o *battle_ent; // x22
  BattleCommandSpellRequest_o *v12; // x20
  struct BattleData_o *v13; // x8

  if ( (byte_4CCA9A1 & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&Method_BattlePerformanceContinue_callBackCommandSpell__);
    sub_1C713B0(&Method_BattlePerformanceContinue_callbackContinueCommandSpell__);
    sub_1C713B0(&Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&StringLiteral_6916/*"GAME_OVER_COMMAND_SPELL_ID"*/);
    byte_4CCA9A1 = 1;
  }
  BattlePerformanceContinue__closeSpell(this, method);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
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
    BattlePerformanceContinue__SkipCommandSpellRequest(this, v5);
    return;
  }
  continueRetryFlg = this->fields.continueRetryFlg;
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  v8 = v7;
  if ( continueRetryFlg )
  {
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattlePerformanceContinue_callBackCommandSpell__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    data = (BattleData_o *)NetworkManager__getRequest_object_(
                             v8,
                             (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0);
      return;
    }
LABEL_21:
    sub_1C71608(data, v3);
  }
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callbackContinueCommandSpell__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  data = (BattleData_o *)NetworkManager__getRequest_object_(
                           v8,
                           (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_21;
  continueCount = v9->fields.continueCount;
  battle_ent = v9->fields.battle_ent;
  v12 = (BattleCommandSpellRequest_o *)data;
  data = (BattleData_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6916/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0);
  if ( !battle_ent )
    goto LABEL_21;
  v13 = this->fields.data;
  if ( !v13 || !v12 )
    goto LABEL_21;
  BattleCommandSpellRequest__beginRequest(
    v12,
    battle_ent->fields.id,
    (int32_t)data,
    v13->fields.waveClearNeedTurn,
    continueCount,
    1,
    0);
}


void BattlePerformanceContinue__connectStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  struct BattleData_o *v6; // x8
  struct BattleEntity_o *battle_ent; // x9

  if ( (byte_4CCA9AE & 1) == 0 )
  {
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&Method_BattlePerformanceContinue_callBackStone__);
    sub_1C713B0(&Method_NetworkManager_getRequest_BattleUseContinueRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CCA9AE = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setContinueBattleFlg(1, 0, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  BattleData__procPlayerContinue(data, this->fields.isProgress, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callBackStone__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  data = (BattleData_o *)NetworkManager__getRequest_object_(
                           v5,
                           (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_BattleUseContinueRequest___);
  v6 = this->fields.data;
  if ( !v6 )
    goto LABEL_15;
  if ( this->fields.continueRetryFlg )
  {
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0);
      return;
    }
LABEL_15:
    sub_1C71608(data, v3);
  }
  battle_ent = v6->fields.battle_ent;
  if ( !battle_ent || !data )
    goto LABEL_15;
  BattleUseContinueRequest__beginRequest(
    (BattleUseContinueRequest_o *)data,
    battle_ent->fields.id,
    v6->fields.waveClearNeedTurn,
    v6->fields.continueCount,
    0);
}


void BattlePerformanceContinue__endCloseContinueItem(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *ContinueItemWindow; // x0

  if ( (byte_4CCA9BA & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5430/*"END_CLOSE"*/);
    byte_4CCA9BA = 1;
  }
  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow
    || (UnityEngine_GameObject__SetActive(ContinueItemWindow, 0, 0),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)ContinueItemWindow, 0),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C71608(ContinueItemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ContinueItemWindow, (System_String_o *)StringLiteral_5430/*"END_CLOSE"*/, 0);
}


void BattlePerformanceContinue__endCloseNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nostoneObject; // x0

  if ( (byte_4CCA9B5 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5430/*"END_CLOSE"*/);
    byte_4CCA9B5 = 1;
  }
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject
    || (UnityEngine_GameObject__SetActive(nostoneObject, 0, 0),
        (nostoneObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C71608(nostoneObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)nostoneObject, (System_String_o *)StringLiteral_5430/*"END_CLOSE"*/, 0);
}


void BattlePerformanceContinue__endCloseSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandspellObject; // x0

  if ( (byte_4CCA9A0 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5430/*"END_CLOSE"*/);
    byte_4CCA9A0 = 1;
  }
  commandspellObject = this->fields.commandspellObject;
  if ( !commandspellObject
    || (UnityEngine_GameObject__SetActive(commandspellObject, 0, 0),
        (commandspellObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)commandspellObject, 0),
        (commandspellObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C71608(commandspellObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)commandspellObject, (System_String_o *)StringLiteral_5430/*"END_CLOSE"*/, 0);
}


void BattlePerformanceContinue__endCloseStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *stoneObject; // x0

  if ( (byte_4CCA9AD & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5430/*"END_CLOSE"*/);
    byte_4CCA9AD = 1;
  }
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 0, 0),
        (stoneObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)stoneObject, 0),
        (stoneObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0) )
  {
    sub_1C71608(stoneObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)stoneObject, (System_String_o *)StringLiteral_5430/*"END_CLOSE"*/, 0);
}


void BattlePerformanceContinue__endDialog(BattlePerformanceContinue_o *this, bool flg, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CCA997 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_9268/*"NG"*/);
    byte_4CCA997 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.logic) == 0) )
    sub_1C71608(Instance, v5);
  BattleLogic__sendFsmEvent((BattleLogic_o *)Instance, (System_String_o *)StringLiteral_9268/*"NG"*/, 0);
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
  Il2CppObject *v15; // x21
  SimpleAnimation_o *v16; // x0
  System_String_o *v17; // x1
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Animation_o *v19; // x0
  System_String_o *v20; // x1
  Il2CppObject *v21; // x0
  Il2CppObject *v22; // x0
  int32_t v23; // [xsp+8h] [xbp-48h] BYREF
  int v24; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CCA9A7 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_GameObject____78636968);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_5449/*"END_PROC"*/);
    sub_1C713B0(&StringLiteral_18868/*"ef_commandspell_{0:D2}"*/);
    sub_1C713B0(&StringLiteral_18869/*"ef_commandspell{0:D4}"*/);
    byte_4CCA9A7 = 1;
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
  v24 = v7;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  perf = (BattlePerformance_o *)System_String__Format((System_String_o *)StringLiteral_18869/*"ef_commandspell{0:D4}"*/, v9, 0);
  if ( !aData )
    goto LABEL_29;
  perf = (BattlePerformance_o *)AssetData__GetObject_object__51560868(
                                  aData,
                                  (System_String_o *)perf,
                                  (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968);
  v10 = this->fields.perf;
  if ( !v10 )
    goto LABEL_29;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             (UnityEngine_GameObject_o *)perf,
             v10->fields.popupTr,
             0,
             0);
  v23 = v8;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  perf = (BattlePerformance_o *)System_String__Format((System_String_o *)StringLiteral_18868/*"ef_commandspell_{0:D2}"*/, v12, 0);
  if ( !Object )
    goto LABEL_29;
  v13 = (System_String_o *)perf;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       Object,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v15 = UnityEngine_GameObject__GetComponent_object_(
          Object,
          (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)perf & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    if ( SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, v13, 0) )
    {
      v16 = (SimpleAnimation_o *)Component_object;
      v17 = v13;
    }
    else
    {
      v24 = 3;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
      v17 = System_String__Format((System_String_o *)StringLiteral_18868/*"ef_commandspell_{0:D2}"*/, v21, 0);
      v16 = (SimpleAnimation_o *)Component_object;
    }
    SimpleAnimation__Play_66976788(v16, v17, 0);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0);
    if ( ((unsigned __int8)perf & 1) != 0 )
    {
      if ( !v15 )
        goto LABEL_29;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v15, v13, 0);
      if ( UnityEngine_TrackedReference__op_Inequality(0, Item, 0) )
      {
        v19 = (UnityEngine_Animation_o *)v15;
        v20 = v13;
      }
      else
      {
        v24 = 3;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
        v20 = System_String__Format((System_String_o *)StringLiteral_18868/*"ef_commandspell_{0:D2}"*/, v22, 0);
        v19 = (UnityEngine_Animation_o *)v15;
      }
      UnityEngine_Animation__Play_71468084(v19, v20, 0);
    }
  }
  perf = (BattlePerformance_o *)this->fields.logic;
  if ( !perf
    || (BattleLogic__setTimeAcceleration((BattleLogic_o *)perf, 0, 0), (perf = this->fields.perf) == 0)
    || (BattlePerformance__playMasterCommandSpellCutIn(perf, 0), (perf = (BattlePerformance_o *)this->fields.myFsm) == 0) )
  {
LABEL_29:
    sub_1C71608(perf, aData);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_5449/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue__endOpenContinueItem(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_4CCA99B & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5444/*"END_OPEN"*/);
    byte_4CCA99B = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__ChangeLayoutScrollView(itemWindow, 0), (itemWindow = this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0) )
  {
    sub_1C71608(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5444/*"END_OPEN"*/, 0);
}


void BattlePerformanceContinue__endOpenNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_4CCA9B3 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5444/*"END_OPEN"*/);
    byte_4CCA9B3 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0), (itemWindow = this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0) )
  {
    sub_1C71608(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5444/*"END_OPEN"*/, 0);
}


void BattlePerformanceContinue__endOpenSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_4CCA99E & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5444/*"END_OPEN"*/);
    byte_4CCA99E = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0), (itemWindow = this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0) )
  {
    sub_1C71608(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5444/*"END_OPEN"*/, 0);
}


void BattlePerformanceContinue__endOpenStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_4CCA9AB & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5444/*"END_OPEN"*/);
    byte_4CCA9AB = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0), (itemWindow = this->fields.itemWindow) == 0)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0) )
  {
    sub_1C71608(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5444/*"END_OPEN"*/, 0);
}


void BattlePerformanceContinue__endOpenUsecheck(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCA9C0 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5444/*"END_OPEN"*/);
    byte_4CCA9C0 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5444/*"END_OPEN"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceContinue__endRetryDialog(BattlePerformanceContinue_o *this, bool flg, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_4CCA9A4 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9623/*"OK"*/);
    byte_4CCA9A4 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1C71608(0, flg);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9623/*"OK"*/, 0);
}


void BattlePerformanceContinue__endSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  System_String_o *v6; // x20
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CCA9A8 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_4586/*"CommandSpellEffect/ef_commandspell{0:D4}"*/);
    byte_4CCA9A8 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_8;
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SpellImageIdBattle);
  v6 = System_String__Format((System_String_o *)StringLiteral_4586/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v5, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v6, 0);
  SelfUserGame = (UserGameEntity_o *)this->fields.logic;
  if ( !SelfUserGame )
LABEL_8:
    sub_1C71608(SelfUserGame, v4);
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

  if ( (byte_4CCA9B2 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue_endOpenNoStone__);
    sub_1C713B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C713B0(&StringLiteral_2723/*"BATTLE_CONTINUE_NO_STONE"*/);
    byte_4CCA9B2 = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseBuyGem,
    (System_String_o *)StringLiteral_2723/*"BATTLE_CONTINUE_NO_STONE"*/,
    0x80000000,
    v3);
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject
    || (UnityEngine_GameObject__SetActive(nostoneObject, 1, 0),
        window = this->fields.window,
        v7 = (BattleWindowComponent_EndCall_o *)sub_1C715FC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenNoStone__,
          0),
        !window) )
  {
    sub_1C71608(nostoneObject, v4);
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

  if ( (byte_4CCA9A3 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue_endRetryDialog__);
    sub_1C713B0(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_25641/*"通信に失敗したので再度通信を行います"*/);
    sub_1C713B0(&StringLiteral_25642/*"通信失敗"*/);
    byte_4CCA9A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (NotificationDialog_ClickDelegate_o *)sub_1C715FC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endRetryDialog__,
    0);
  if ( !Instance )
    sub_1C71608(v5, v6);
  CommonUI__OpenNotificationDialog_31442944(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_25642/*"通信失敗"*/,
    (System_String_o *)StringLiteral_25641/*"通信に失敗したので再度通信を行います"*/,
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
  int32_t PayableStoneNum; // w0
  UILabel_o *stoneBtnLabel; // x20
  int v7; // w21
  System_String_o **v8; // x8
  const MethodInfo *v9; // x1
  struct BattleData_o *data; // x8
  struct BattleData_o *v11; // x8
  const MethodInfo *v12; // x4
  Il2CppObject *Component_object; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v22; // x21

  if ( (byte_4CCA99D & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue_endOpenSpell__);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_SendEventToFsm___);
    sub_1C713B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_2712/*"BATTLE_CONTINUE_CHECK_SPELL"*/);
    sub_1C713B0(&StringLiteral_2711/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
    sub_1C713B0(&StringLiteral_5449/*"END_PROC"*/);
    sub_1C713B0(&StringLiteral_2710/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/);
    byte_4CCA99D = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_30;
  PayableStoneNum = UserGameEntity__get_PayableStoneNum(SelfUserGame, 0);
  stoneBtnLabel = this->fields.stoneBtnLabel;
  v7 = PayableStoneNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = (System_String_o **)(v7 < 1 ? &StringLiteral_2710/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/ : &StringLiteral_2711/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
  SelfUserGame = (UserGameEntity_o *)LocalizationManager__Get(*v8, 0);
  if ( !stoneBtnLabel )
    goto LABEL_30;
  UILabel__set_text(stoneBtnLabel, (System_String_o *)SelfUserGame, 0);
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, v9);
  SelfUserGame = (UserGameEntity_o *)this->fields.commandspellObject;
  if ( !SelfUserGame )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0);
  data = this->fields.data;
  if ( !data )
    goto LABEL_30;
  SelfUserGame = (UserGameEntity_o *)data->fields.quest_ent;
  if ( !SelfUserGame )
    goto LABEL_30;
  SelfUserGame = (UserGameEntity_o *)QuestEntity__HasFlag((QuestEntity_o *)SelfUserGame, 0x400000000LL, 0);
  if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
    goto LABEL_19;
  v11 = this->fields.data;
  if ( !v11 )
    goto LABEL_30;
  SelfUserGame = (UserGameEntity_o *)v11->fields.quest_ent;
  if ( !SelfUserGame )
    goto LABEL_30;
  if ( QuestEntity__HasFlag((QuestEntity_o *)SelfUserGame, 0x100000000LL, 0) )
    goto LABEL_19;
  SelfUserGame = (UserGameEntity_o *)this->fields.data;
  if ( !SelfUserGame )
    goto LABEL_30;
  if ( BattleData__IsHideCommandSpell((BattleData_o *)SelfUserGame, 0) )
  {
LABEL_19:
    SelfUserGame = (UserGameEntity_o *)this->fields.commandSpellSprite;
    if ( SelfUserGame )
    {
      UIWidget__set_color((UIWidget_o *)SelfUserGame, this->fields.spellBtnColor, 0);
      SelfUserGame = (UserGameEntity_o *)this->fields.commandSpellSprite;
      if ( SelfUserGame )
      {
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)SelfUserGame,
                             (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_SendEventToFsm___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        SelfUserGame = (UserGameEntity_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
        if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_30;
          v20 = StringLiteral_5449/*"END_PROC"*/;
          Component_object[2].monitor = (void *)StringLiteral_5449/*"END_PROC"*/;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&Component_object[2].monitor, v20, v14, v15, v16, v17, v18, v19);
        }
        SelfUserGame = (UserGameEntity_o *)this->fields.commandspell_now;
        if ( SelfUserGame )
        {
          UIWidget__set_color((UIWidget_o *)SelfUserGame, this->fields.spellnowColor, 0);
          goto LABEL_28;
        }
      }
    }
LABEL_30:
    sub_1C71608(SelfUserGame, v4);
  }
LABEL_28:
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseCommandSpell,
    (System_String_o *)StringLiteral_2712/*"BATTLE_CONTINUE_CHECK_SPELL"*/,
    0x80000000,
    v12);
  window = this->fields.window;
  v22 = (BattleWindowComponent_EndCall_o *)sub_1C715FC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v22, (Il2CppObject *)this, Method_BattlePerformanceContinue_endOpenSpell__, 0);
  if ( !window )
    goto LABEL_30;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))window->klass->vtable._10_Open.methodPtr)(
    window,
    v22,
    window->klass->vtable._10_Open.method);
}


void BattlePerformanceContinue__openStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v4; // x1
  UnityEngine_GameObject_o *stoneObject; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v7; // x21

  if ( (byte_4CCA9AA & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue_endOpenStone__);
    sub_1C713B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C713B0(&StringLiteral_2713/*"BATTLE_CONTINUE_CHECK_STONE"*/);
    byte_4CCA9AA = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseGem,
    (System_String_o *)StringLiteral_2713/*"BATTLE_CONTINUE_CHECK_STONE"*/,
    0x80000000,
    v3);
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 1, 0),
        window = this->fields.window,
        v7 = (BattleWindowComponent_EndCall_o *)sub_1C715FC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenStone__,
          0),
        !window) )
  {
    sub_1C71608(stoneObject, v4);
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

  if ( (byte_4CCA9B6 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue_callbaclStoneShop__);
    sub_1C713B0(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCA9B6 = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (StonePurchaseMenu_CallbackFunc_o *)sub_1C715FC(StonePurchaseMenu_CallbackFunc_TypeInfo);
  StonePurchaseMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callbaclStoneShop__,
    0);
  if ( !Instance )
    sub_1C71608(v5, v6);
  CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v4, 0, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceContinue__openUseCheck(BattlePerformanceContinue_o *this, int32_t type, const MethodInfo *method)
{
  UnityEngine_Component_o *usecheckLabel; // x0
  UnityEngine_Object_o *addMsgInfo; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v8; // x0
  UILabel_o *addMsgLabel; // x20
  __int64 *v10; // x8
  UILabel_o *v11; // x20
  UnityEngine_Object_o *v12; // x20
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4CCA9BF & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_2727/*"BATTLE_CONTINUE_USECHECK_STONE"*/);
    sub_1C713B0(&StringLiteral_2725/*"BATTLE_CONTINUE_STONEPAY_WARNING_MSG"*/);
    sub_1C713B0(&StringLiteral_2726/*"BATTLE_CONTINUE_USECHECK_SPELL"*/);
    byte_4CCA9BF = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  v8 = UnityEngine_Component__get_gameObject(usecheckLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v8, 28.0, 0);
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
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = &StringLiteral_2726/*"BATTLE_CONTINUE_USECHECK_SPELL"*/;
    goto LABEL_39;
  }
  v11 = this->fields.usecheckLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  usecheckLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2727/*"BATTLE_CONTINUE_USECHECK_STONE"*/, 0);
  if ( !v11 )
    goto LABEL_44;
  UILabel__set_text(v11, (System_String_o *)usecheckLabel, 0);
  v12 = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v12, 0, 0) )
    goto LABEL_41;
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !usecheckLabel )
    goto LABEL_44;
  v13 = UnityEngine_Component__get_gameObject(usecheckLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v13, -90.0, 0);
  usecheckLabel = (UnityEngine_Component_o *)this->fields.usecheckLabel;
  if ( !usecheckLabel
    || (v14 = UnityEngine_Component__get_gameObject(usecheckLabel, 0),
        GameObjectExtensions__SetLocalPositionY(v14, 82.0, 0),
        GameObjectExtensions__SetLocalPositionY(this->fields.useCheckOkBtn, -90.0, 0),
        GameObjectExtensions__SetLocalPositionY(this->fields.useCheckCancelBtn, -90.0, 0),
        (usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckBgSprite) == 0)
    || (UIWidget__set_height((UIWidget_o *)usecheckLabel, 275, 0),
        (usecheckLabel = (UnityEngine_Component_o *)this->fields.addMsgInfo) == 0) )
  {
LABEL_44:
    sub_1C71608(usecheckLabel, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 1, 0);
  addMsgLabel = this->fields.addMsgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = &StringLiteral_2725/*"BATTLE_CONTINUE_STONEPAY_WARNING_MSG"*/;
LABEL_39:
  usecheckLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v10, 0);
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
  BattlePerformanceContinue__endOpenUsecheck(this, v15);
}


void BattlePerformanceContinue__procContinueItem(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCA9BE & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5449/*"END_PROC"*/);
    byte_4CCA9BE = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5449/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue__procNG(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x20
  NotificationDialog_ClickDelegate_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CCA996 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattlePerformanceContinue_endDialog__);
    sub_1C713B0(&NotificationDialog_ClickDelegate_TypeInfo);
    byte_4CCA996 = 1;
  }
  logic = this->fields.logic;
  v4 = (NotificationDialog_ClickDelegate_o *)sub_1C715FC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v4, (Il2CppObject *)this, Method_BattlePerformanceContinue_endDialog__, 0);
  if ( !logic )
    sub_1C71608(v5, v6);
  BattleLogic__OpenBattleLoseDlg(logic, 1, 0, v4, 1, 0);
}


void BattlePerformanceContinue__procNGContinueItem(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCA9BD & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5449/*"END_PROC"*/);
    byte_4CCA9BD = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5449/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue__procNGGiveUpContinueItem(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCA994 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5449/*"END_PROC"*/);
    byte_4CCA994 = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  this->fields.IsContinueItem = 0;
  if ( !myFsm )
    sub_1C71608(0, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5449/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue__procNGNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_4CCA9B8 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5449/*"END_PROC"*/);
    byte_4CCA9B8 = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__ClearObj(itemWindow, 0),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0) )
  {
    sub_1C71608(itemWindow, v3);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5449/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue__procNGSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCA9A5 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5449/*"END_PROC"*/);
    byte_4CCA9A5 = 1;
  }
  BattlePerformanceContinue__closeSpell(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5449/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue__procNGStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCA9B0 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5449/*"END_PROC"*/);
    byte_4CCA9B0 = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5449/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue__procOK(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattlePerformanceContinue_o *v2; // x19
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  int32_t QuestId; // w20
  BattleData_o *data; // x8
  AdManager_o *v7; // x19

  v2 = this;
  if ( (byte_4CCA995 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    this = (BattlePerformanceContinue_o *)sub_1C713B0(&StringLiteral_9623/*"OK"*/);
    byte_4CCA995 = 1;
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
  BattleLogic__sendFsmEvent((BattleLogic_o *)this, (System_String_o *)StringLiteral_9623/*"OK"*/, 0);
  this = (BattlePerformanceContinue_o *)v2->fields.data;
  if ( !this )
    goto LABEL_18;
  QuestId = BattleData__getQuestId((BattleData_o *)this, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__IsMainStoryForQuestId(QuestId, 0) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( TerminalPramsManager__CanSendTrackEvent(QuestId, 0) )
    {
      this = (BattlePerformanceContinue_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      data = v2->fields.data;
      if ( data )
      {
        v7 = (AdManager_o *)this;
        this = (BattlePerformanceContinue_o *)BattleData__getPhase(data, 0);
        if ( v7 )
        {
          AdManager__TrackEvent(v7, 10, 12, QuestId, (int32_t)this, 0, 0);
          return;
        }
      }
LABEL_18:
      sub_1C71608(this, method);
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
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CCA9A6 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_BattlePerformanceContinue_endLoadCommandSPell__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&StringLiteral_4586/*"CommandSpellEffect/ef_commandspell{0:D4}"*/);
    byte_4CCA9A6 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C71608(0, v4);
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SpellImageIdBattle);
  v6 = System_String__Format((System_String_o *)StringLiteral_4586/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v5, 0);
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endLoadCommandSPell__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v6, v7, 1, 0);
}


void BattlePerformanceContinue__procStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4CCA9B1 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_5449/*"END_PROC"*/);
    byte_4CCA9B1 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C71608(0, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5449/*"END_PROC"*/, 0);
}


void BattlePerformanceContinue__refreshStoneNow(
        BattlePerformanceContinue_o *this,
        UserGameEntity_o *userGame,
        const MethodInfo *method)
{
  _DWORD *v3; // x22
  BattlePerformanceContinue_o *v4; // x20
  UILabel_o *gem_now; // x19
  UILabel_o *stone_now; // x21
  UILabel_o *stoneNumInStonelessWindow; // x23
  Il2CppObject *v8; // x0
  BattlePerformanceContinue_o *v9; // x20
  int v10; // [xsp+Ch] [xbp-34h] BYREF

  v3 = userGame;
  v4 = this;
  if ( (byte_4CCA98F & 1) != 0 )
  {
    if ( userGame )
      goto LABEL_3;
LABEL_6:
    this = (BattlePerformanceContinue_o *)UserGameMaster__getSelfUserGame(0);
    v3 = this;
    if ( !this )
      goto LABEL_11;
    goto LABEL_7;
  }
  sub_1C713B0(&int_TypeInfo);
  this = (BattlePerformanceContinue_o *)sub_1C713B0(&StringLiteral_25182/*"{0:#,0}"*/);
  byte_4CCA98F = 1;
  if ( !v3 )
    goto LABEL_6;
LABEL_3:
  if ( !v3 )
    goto LABEL_11;
LABEL_7:
  gem_now = v4->fields.gem_now;
  stone_now = v4->fields.stone_now;
  stoneNumInStonelessWindow = v4->fields.stoneNumInStonelessWindow;
  v10 = v3[46];
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  this = (BattlePerformanceContinue_o *)System_String__Format((System_String_o *)StringLiteral_25182/*"{0:#,0}"*/, v8, 0);
  if ( !stoneNumInStonelessWindow
    || (v9 = this, UILabel__set_text(stoneNumInStonelessWindow, (System_String_o *)this, 0), !stone_now)
    || (UILabel__set_text(stone_now, (System_String_o *)v9, 0), !gem_now) )
  {
LABEL_11:
    sub_1C71608(this, userGame);
  }
  UILabel__set_text(gem_now, (System_String_o *)v9, 0);
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
  bool result; // w0
  float deltaTime; // s0
  Il2CppObject **p__2__current; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4CCA9EC & 1) == 0 )
  {
    this = (BattlePerformanceContinue__CoEndContinue_d__133_o *)sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
    byte_4CCA9EC = 1;
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
                                                                        (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___)) == 0 )
    {
      sub_1C71608(this, method);
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)p__2__current, 0, v10, v11, v12, v13, v14, v15);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_BattlePerformanceContinue__CoEndContinue_d__133_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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

  if ( (byte_4CCA9EA & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCA9EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0),
        (_4__this = this->fields.__4__this) == 0)
    || (Instance = (Il2CppObject *)_4__this->fields.myFsm) == 0 )
  {
    sub_1C71608(Instance, v4);
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

  if ( (byte_4CCA9EB & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_9623/*"OK"*/);
    sub_1C713B0(&StringLiteral_9268/*"NG"*/);
    byte_4CCA9EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0),
        (_4__this = this->fields.__4__this) == 0)
    || (Instance = (Il2CppObject *)_4__this->fields.myFsm) == 0 )
  {
    sub_1C71608(Instance, v4);
  }
  if ( this->fields.isDecide )
    v6 = (System_String_o *)StringLiteral_9623/*"OK"*/;
  else
    v6 = (System_String_o *)StringLiteral_9268/*"NG"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, v6, 0);
}