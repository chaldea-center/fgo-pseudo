// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue___ctor(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  int v7; // s0
  int v8; // s1
  int v9; // s2
  float v10; // s4
  float v11; // s5
  float v12; // s6
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct UnityEngine_Color_o v21; // [xsp+0h] [xbp-30h] BYREF
  struct UnityEngine_Color_o v22; // [xsp+10h] [xbp-20h] BYREF
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438DB9A & 1) == 0 )
  {
    sub_B775C4(&string_TypeInfo);
    byte_438DB9A = 1;
  }
  v7 = 1051766961;
  v22 = (struct UnityEngine_Color_o)0LL;
  v8 = 1051766961;
  v9 = 1051766961;
  UnityEngine_Color___ctor_41410832(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v22);
  this->fields.spellBtnColor = v22;
  v23.fields.r = 0.38824;
  v21 = (struct UnityEngine_Color_o)0LL;
  v23.fields.g = 0.38824;
  v23.fields.b = 0.38824;
  UnityEngine_Color___ctor_41410832(v23, v10, v11, v12, (const MethodInfo *)&v21);
  this->fields.spellnowColor = v21;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.cancelInterruptionEvent = static_fields->Empty;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.cancelInterruptionEvent,
    (System_Int32_array **)Empty,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceContinue__AttachStoneCountRefreshComponent(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v4; // x21

  if ( (byte_438DB60 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_int___ctor__);
    sub_B775C4(&System_Action_int__TypeInfo);
    sub_B775C4(&Method_BattlePerformanceContinue__AttachStoneCountRefreshComponent_b__85_0__);
    byte_438DB60 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v4 = (System_Action_int__o *)sub_B77694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__AttachStoneCountRefreshComponent_b__85_0__,
    (const MethodInfo_269F2D8 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v4, 0, 0LL);
}


void __fastcall BattlePerformanceContinue__CallbackConfirmDialog(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_438DB53 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_4696/*"DEADLINE"*/);
    byte_438DB53 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL),
        BattlePerformanceContinue__closeContinueItem(this, v6),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(Instance, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_4696/*"DEADLINE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__CheckContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  __int64 *v5; // x8

  if ( (byte_438DB5E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9917/*"OK"*/);
    sub_B775C4(&StringLiteral_9469/*"NG"*/);
    byte_438DB5E = 1;
  }
  BattlePerformanceContinue__ResetContinueItemInfo(this, method);
  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  if ( !BattleData__EnableContinueItem(data, 0LL) )
  {
    data = (BattleData_o *)this->fields.myFsm;
    if ( data )
    {
      v5 = &StringLiteral_9469/*"NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B7769C(data, v3);
  }
  data = (BattleData_o *)this->fields.myFsm;
  this->fields.IsContinueItem = 1;
  if ( !data )
    goto LABEL_10;
  v5 = &StringLiteral_9917/*"OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)*v5, 0LL);
}


void __fastcall BattlePerformanceContinue__CheckDefenceTargetBroken(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattlePerformance_o *perf; // x8
  NGUIFader_o *Component_srcLineSprite; // x20
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  NGUIFader_OnFinished_o *v10; // x21
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438DB8A & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue__CheckDefenceTargetBroken_b__129_0__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
    sub_B775C4(&NGUIFader_OnFinished_TypeInfo);
    sub_B775C4(&StringLiteral_5770/*"EVENT_FALSE"*/);
    byte_438DB8A = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  data = (BattleData_o *)BattleData__CheckDefenceTargetBroken(data, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    perf = this->fields.perf;
    this->fields._isDefenceTargetBroken_k__BackingField = 1;
    if ( perf )
    {
      data = (BattleData_o *)perf->fields.fadeObject;
      if ( data )
      {
        Component_srcLineSprite = (NGUIFader_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   (UnityEngine_GameObject_o *)data,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
        white = UnityEngine_Color__get_white(0LL);
        r = white.fields.r;
        g = white.fields.g;
        b = white.fields.b;
        a = white.fields.a;
        v10 = (NGUIFader_OnFinished_o *)sub_B77694(NGUIFader_OnFinished_TypeInfo);
        NGUIFader_OnFinished___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue__CheckDefenceTargetBroken_b__129_0__,
          0LL);
        if ( Component_srcLineSprite )
        {
          v12.fields.r = r;
          v12.fields.g = g;
          v12.fields.b = b;
          v12.fields.a = a;
          NGUIFader__FadeStart(Component_srcLineSprite, v12, 0.5, 0, v10, 0, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_B7769C(data, method);
  }
  data = (BattleData_o *)this->fields.myFsm;
  this->fields._isDefenceTargetBroken_k__BackingField = 0;
  if ( !data )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_5770/*"EVENT_FALSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__CloseGiveUp(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *giveUpWindow; // x0

  if ( (byte_438DB59 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9466/*"NEXT"*/);
    byte_438DB59 = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow
    || (UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0LL),
        (giveUpWindow = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(giveUpWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)giveUpWindow, (System_String_o *)StringLiteral_9466/*"NEXT"*/, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceContinue__CoEndContinue(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438DB8C & 1) == 0 )
  {
    sub_B775C4(&BattlePerformanceContinue__CoEndContinue_d__132_TypeInfo);
    byte_438DB8C = 1;
  }
  v3 = sub_B77694(BattlePerformanceContinue__CoEndContinue_d__132_TypeInfo);
  BattlePerformanceContinue__CoEndContinue_d__132___ctor(
    (BattlePerformanceContinue__CoEndContinue_d__132_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattlePerformanceContinue__EndContinue(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0

  if ( this->fields._isDefenceTargetBroken_k__BackingField )
  {
    v3 = BattlePerformanceContinue__CoEndContinue(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  UnityEngine_Component_o *window; // x0
  UnityEngine_Transform_o *transform; // x20
  int v27; // s0
  UILabel_o *checkGiveUpLabel; // x20
  UILabel_o *checkUseCommandSpell; // x20
  UILabel_o *checkUseGem; // x20
  UILabel_o *checkUseBuyGem; // x20

  if ( (byte_438DB54 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_2497/*"BATTLE_CONTINUE_NO_STONE"*/);
    sub_B775C4(&StringLiteral_2486/*"BATTLE_CONTINUE_CHECK_SPELL"*/);
    sub_B775C4(&StringLiteral_2487/*"BATTLE_CONTINUE_CHECK_STONE"*/);
    sub_B775C4(&StringLiteral_2604/*"BATTLE_RETIRE_CHECKSTR"*/);
    byte_438DB54 = 1;
  }
  this->fields.perf = inperf;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    (System_String_array **)indata,
    (System_String_array **)inlogic,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)indata,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.logic = inlogic;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.logic,
    (System_Int32_array **)inlogic,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  window = (UnityEngine_Component_o *)this->fields.window;
  if ( !window )
    goto LABEL_25;
  transform = UnityEngine_Component__get_transform(window, 0LL);
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v27, 0LL);
  window = (UnityEngine_Component_o *)this->fields.window;
  if ( !window )
    goto LABEL_25;
  (*(void (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&window->klass[1]._1.this_arg.bits)(
    window,
    window->klass[1]._1.element_class);
  window = (UnityEngine_Component_o *)this->fields.window;
  if ( !window )
    goto LABEL_25;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))window->klass[1]._1.parent)(
    window,
    window->klass[1]._1.generic_class);
  window = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !window )
    goto LABEL_25;
  window = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(window, 0LL);
  if ( !window )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (UnityEngine_Component_o *)this->fields.giveUpWindow;
  if ( !window )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (UnityEngine_Component_o *)this->fields.commandspellObject;
  if ( !window )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (UnityEngine_Component_o *)this->fields.stoneObject;
  if ( !window )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (UnityEngine_Component_o *)this->fields.nostoneObject;
  if ( !window )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (UnityEngine_Component_o *)this->fields.ContinueItemWindow;
  if ( !window )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (UnityEngine_Component_o *)this->fields.bg;
  if ( !window )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  checkGiveUpLabel = this->fields.checkGiveUpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2604/*"BATTLE_RETIRE_CHECKSTR"*/, 0LL);
  if ( !checkGiveUpLabel )
    goto LABEL_25;
  UILabel__set_text(checkGiveUpLabel, (System_String_o *)window, 0LL);
  checkUseCommandSpell = this->fields.checkUseCommandSpell;
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2486/*"BATTLE_CONTINUE_CHECK_SPELL"*/, 0LL);
  if ( !checkUseCommandSpell )
    goto LABEL_25;
  UILabel__set_text(checkUseCommandSpell, (System_String_o *)window, 0LL);
  checkUseGem = this->fields.checkUseGem;
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2487/*"BATTLE_CONTINUE_CHECK_STONE"*/, 0LL);
  if ( !checkUseGem
    || (UILabel__set_text(checkUseGem, (System_String_o *)window, 0LL),
        checkUseBuyGem = this->fields.checkUseBuyGem,
        window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2497/*"BATTLE_CONTINUE_NO_STONE"*/, 0LL),
        !checkUseBuyGem)
    || (UILabel__set_text(checkUseBuyGem, (System_String_o *)window, 0LL),
        (window = (UnityEngine_Component_o *)this->fields.continueWaveRestartWindow) == 0LL)
    || ((*(void (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&window->klass[1]._1.this_arg.bits)(
          window,
          window->klass[1]._1.element_class),
        (window = (UnityEngine_Component_o *)this->fields.continueWaveRestartWindow) == 0LL) )
  {
LABEL_25:
    sub_B7769C(window, v24);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))window->klass[1]._1.events)(
    window,
    0LL,
    window->klass[1]._1.properties);
}


void __fastcall BattlePerformanceContinue__OpenBrokenMessage(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  _QWORD *monitor; // x8
  __int64 v5; // x8
  Il2CppObject *v6; // x20
  Il2CppObject *v7; // x0
  System_String_o *v8; // x21
  System_String_o *v9; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v11; // x22
  int v12; // [xsp+3Ch] [xbp-24h] BYREF

  v3 = (Il2CppObject *)this;
  if ( (byte_438DB8B & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattlePerformanceContinue__OpenBrokenMessage_b__130_0__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_24131/*"{0}_{1}"*/);
    sub_B775C4(&StringLiteral_2508/*"BATTLE_DIALOG_DEFENCE_TARGET_BROKEN"*/);
    this = (BattlePerformanceContinue_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DB8B = 1;
  }
  monitor = v3[2].monitor;
  if ( !monitor )
    goto LABEL_18;
  v5 = monitor[100];
  if ( !v5 )
    goto LABEL_18;
  v6 = (Il2CppObject *)StringLiteral_2508/*"BATTLE_DIALOG_DEFENCE_TARGET_BROKEN"*/;
  v12 = *(_DWORD *)(v5 + 32);
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v2);
  v8 = System_String__Format_44897472((System_String_o *)StringLiteral_24131/*"{0}_{1}"*/, v6, v7, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( LocalizationManager__ContainsKey(v8, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = (Il2CppObject *)v8;
  }
  else if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
         && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)v6, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v11, v3, Method_BattlePerformanceContinue__OpenBrokenMessage_b__130_0__, 0LL);
  if ( !Instance )
LABEL_18:
    sub_B7769C(this, method);
  CommonUI__OpenNotificationDialog(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v9,
    v11,
    -1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0LL,
    0LL);
}


void __fastcall BattlePerformanceContinue__OpenContinueInterruption(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  struct BattleWindowInterruptionComponent_o *continueInterruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438DB93 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue__OpenContinueInterruption_b__139_0__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_438DB93 = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueInterruption_b__139_0__,
    0LL);
  if ( !continueInterruptionWindow )
    sub_B7769C(v5, v6);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueInterruptionWindow->klass->vtable._10_Open.method)(
    continueInterruptionWindow,
    v4,
    continueInterruptionWindow->klass->vtable._11_CompOpen.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__OpenContinueItemWindow(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  void *ContinueItemWindow; // x0
  _DWORD *v4; // x20
  UILabel_o *ContinueCommandSpellNum; // x21
  System_String_o *v6; // x1
  __int64 v7; // x2
  UILabel_o *ContinueStoneNum; // x21
  Il2CppObject *v9; // x0
  UILabel_o *ContinueItemNumLabel; // x21
  __int64 v11; // x2
  Il2CppObject *v12; // x0
  UISprite_o *ContinueItemSpr; // x21
  int32_t ContinueItemImageId; // w22
  int v15; // w21
  bool v16; // cc
  UIWidget_o *v17; // x21
  int v18; // s0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 *v28; // x8
  System_Int32_array **v29; // x1
  UILabel_o *ContinueItemBtnLabel; // x21
  UILabel_o *deadLine; // x21
  System_String_o *v32; // x22
  int64_t ContinueDeadLine; // x0
  Il2CppObject *RestTime; // x0
  int v35; // w21
  UIWidget_o *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 *v43; // x8
  int v44; // s0
  System_Int32_array **v48; // x1
  UILabel_o *ContinueCommandSpellBtnLabel; // x21
  int v50; // w9
  UILabel_o *ContinueStoneBtnLabel; // x20
  __int64 *v52; // x8
  const MethodInfo *v53; // x1
  UILabel_o *ContinueRetireBtnLabel; // x20
  const MethodInfo *v55; // x4
  System_String_o **v56; // x8
  struct BattleData_o *data; // x8
  struct BattleData_o *v58; // x8
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v67; // x21
  int32_t ContinueItemNum; // [xsp+4h] [xbp-3Ch] BYREF
  int v69; // [xsp+8h] [xbp-38h] BYREF
  unsigned int OverwriteCommandSpellContinue; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438DB5F & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_BattlePerformanceContinue_endOpenContinueItem__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_9917/*"OK"*/);
    sub_B775C4(&StringLiteral_2485/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    sub_B775C4(&StringLiteral_2492/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/);
    sub_B775C4(&StringLiteral_2484/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/);
    sub_B775C4(&StringLiteral_2502/*"BATTLE_CONTINUE_USE_SPELL"*/);
    sub_B775C4(&StringLiteral_9918/*"OK_CONTINUE_ITEM"*/);
    sub_B775C4(&StringLiteral_23975/*"{0:#,0}"*/);
    sub_B775C4(&StringLiteral_2489/*"BATTLE_CONTINUE_ITEM_BTN"*/);
    sub_B775C4(&StringLiteral_2493/*"BATTLE_CONTINUE_ITEM_SELECT"*/);
    sub_B775C4(&StringLiteral_2494/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_2498/*"BATTLE_CONTINUE_RETIRE"*/);
    byte_438DB5F = 1;
  }
  OverwriteCommandSpellContinue = 0;
  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ContinueItemWindow, 1, 0LL);
  ContinueItemWindow = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_82;
  v4 = ContinueItemWindow;
  OverwriteCommandSpellContinue = BattleData__CheckCurrentTemporaryCommandSpell(
                                    this->fields.data,
                                    (UserGameEntity_o *)ContinueItemWindow,
                                    0LL);
  method = (const MethodInfo *)OverwriteCommandSpellContinue;
  ContinueItemWindow = this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  OverwriteCommandSpellContinue = BattleData__GetOverwriteCommandSpellContinue(
                                    (BattleData_o *)ContinueItemWindow,
                                    OverwriteCommandSpellContinue,
                                    0LL);
  ContinueCommandSpellNum = this->fields.ContinueCommandSpellNum;
  ContinueItemWindow = System_Int32__ToString((int32_t)&OverwriteCommandSpellContinue, 0LL);
  if ( !ContinueCommandSpellNum )
    goto LABEL_82;
  v6 = (System_String_o *)(ContinueItemWindow ? ContinueItemWindow : StringLiteral_1/*""*/);
  UILabel__set_text(ContinueCommandSpellNum, v6, 0LL);
  if ( !v4 )
    goto LABEL_82;
  ContinueStoneNum = this->fields.ContinueStoneNum;
  v69 = v4[42];
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v7);
  ContinueItemWindow = System_String__Format((System_String_o *)StringLiteral_23975/*"{0:#,0}"*/, v9, 0LL);
  if ( !ContinueStoneNum )
    goto LABEL_82;
  UILabel__set_text(ContinueStoneNum, (System_String_o *)ContinueItemWindow, 0LL);
  ContinueItemWindow = this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  BattleData__UpdateContinueItemInfo((BattleData_o *)ContinueItemWindow, 0LL);
  ContinueItemWindow = this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  ContinueItemNumLabel = this->fields.ContinueItemNumLabel;
  ContinueItemNum = BattleData__GetContinueItemNum((BattleData_o *)ContinueItemWindow, 0LL);
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ContinueItemNum, v11);
  ContinueItemWindow = System_String__Format((System_String_o *)StringLiteral_23975/*"{0:#,0}"*/, v12, 0LL);
  if ( !ContinueItemNumLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueItemNumLabel, (System_String_o *)ContinueItemWindow, 0LL);
  ContinueItemWindow = this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  ContinueItemSpr = this->fields.ContinueItemSpr;
  ContinueItemImageId = BattleData__GetContinueItemImageId((BattleData_o *)ContinueItemWindow, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(ContinueItemSpr, ContinueItemImageId, 0LL);
  ContinueItemWindow = this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  ContinueItemWindow = (void *)BattleData__GetContinueItemNum((BattleData_o *)ContinueItemWindow, 0LL);
  if ( !this->fields.ContinueItemBtn )
    goto LABEL_82;
  v15 = (int)ContinueItemWindow;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         this->fields.ContinueItemBtn,
                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v16 = v15 < 1;
  v17 = (UIWidget_o *)ContinueItemWindow;
  if ( v16 )
  {
    if ( !ContinueItemWindow )
      goto LABEL_82;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0LL);
    ContinueItemWindow = this->fields.ContinueItemBtn;
    if ( !ContinueItemWindow )
      goto LABEL_82;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_82;
    v28 = &StringLiteral_5639/*"END_PROC"*/;
  }
  else
  {
    *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
    if ( !v17 )
      goto LABEL_82;
    UIWidget__set_color(v17, *(UnityEngine_Color_o *)&v18, 0LL);
    ContinueItemWindow = this->fields.ContinueItemBtn;
    if ( !ContinueItemWindow )
      goto LABEL_82;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_82;
    v28 = &StringLiteral_9918/*"OK_CONTINUE_ITEM"*/;
  }
  v29 = (System_Int32_array **)*v28;
  *((_QWORD *)ContinueItemWindow + 4) = *v28;
  sub_B77560((BattleServantConfConponent_o *)((char *)ContinueItemWindow + 32), v29, v22, v23, v24, v25, v26, v27);
  ContinueItemBtnLabel = this->fields.ContinueItemBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2489/*"BATTLE_CONTINUE_ITEM_BTN"*/, 0LL);
  if ( !ContinueItemBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueItemBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  deadLine = this->fields.deadLine;
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2492/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, 0LL);
  if ( !this->fields.data )
    goto LABEL_82;
  v32 = (System_String_o *)ContinueItemWindow;
  ContinueDeadLine = BattleData__GetContinueDeadLine(this->fields.data, 0LL);
  RestTime = (Il2CppObject *)LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
  ContinueItemWindow = System_String__Format(v32, RestTime, 0LL);
  if ( !deadLine )
    goto LABEL_82;
  UILabel__set_text(deadLine, (System_String_o *)ContinueItemWindow, 0LL);
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  v35 = OverwriteCommandSpellContinue;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v16 = v35 < 3;
  v36 = (UIWidget_o *)ContinueItemWindow;
  if ( v16 )
  {
    if ( !ContinueItemWindow )
      goto LABEL_82;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0LL);
    ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
    if ( !ContinueItemWindow )
      goto LABEL_82;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_82;
    v43 = &StringLiteral_5639/*"END_PROC"*/;
  }
  else
  {
    *(UnityEngine_Color_o *)&v44 = UnityEngine_Color__get_white(0LL);
    if ( !v36 )
      goto LABEL_82;
    UIWidget__set_color(v36, *(UnityEngine_Color_o *)&v44, 0LL);
    ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
    if ( !ContinueItemWindow )
      goto LABEL_82;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_82;
    v43 = &StringLiteral_9917/*"OK"*/;
  }
  v48 = (System_Int32_array **)*v43;
  *((_QWORD *)ContinueItemWindow + 4) = *v43;
  sub_B77560((BattleServantConfConponent_o *)((char *)ContinueItemWindow + 32), v48, v37, v38, v39, v40, v41, v42);
  ContinueCommandSpellBtnLabel = this->fields.ContinueCommandSpellBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2502/*"BATTLE_CONTINUE_USE_SPELL"*/, 0LL);
  if ( !ContinueCommandSpellBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueCommandSpellBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  v50 = v4[42];
  ContinueStoneBtnLabel = this->fields.ContinueStoneBtnLabel;
  if ( v50 < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v52 = &StringLiteral_2484/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v52 = &StringLiteral_2485/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/;
  }
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)*v52, 0LL);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueStoneBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, v53);
  ContinueRetireBtnLabel = this->fields.ContinueRetireBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2498/*"BATTLE_CONTINUE_RETIRE"*/, 0LL);
  if ( !ContinueRetireBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueRetireBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  v56 = (System_String_o **)((int)OverwriteCommandSpellContinue >= 3 ? &StringLiteral_2493/*"BATTLE_CONTINUE_ITEM_SELECT"*/ : &StringLiteral_2494/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/);
  BattlePerformanceContinue__SetContinueMessage(this, this->fields.ContinueLabel, *v56, 0x80000000, v55);
  data = this->fields.data;
  if ( !data )
    goto LABEL_82;
  ContinueItemWindow = data->fields.quest_ent;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  ContinueItemWindow = (void *)QuestEntity__HasFlag((QuestEntity_o *)ContinueItemWindow, 0x400000000LL, 0LL);
  if ( ((unsigned __int8)ContinueItemWindow & 1) != 0 )
    goto LABEL_74;
  v58 = this->fields.data;
  if ( !v58 || (ContinueItemWindow = v58->fields.quest_ent) == 0LL )
LABEL_82:
    sub_B7769C(ContinueItemWindow, method);
  if ( !QuestEntity__HasFlag((QuestEntity_o *)ContinueItemWindow, 0x100000000LL, 0LL) )
    goto LABEL_80;
LABEL_74:
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !ContinueItemWindow )
    goto LABEL_82;
  UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0LL);
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
  if ( !ContinueItemWindow )
    goto LABEL_82;
  v65 = (System_Int32_array **)StringLiteral_5639/*"END_PROC"*/;
  *((_QWORD *)ContinueItemWindow + 4) = StringLiteral_5639/*"END_PROC"*/;
  sub_B77560((BattleServantConfConponent_o *)((char *)ContinueItemWindow + 32), v65, v59, v60, v61, v62, v63, v64);
  ContinueItemWindow = this->fields.ContinueCommandSpellNum;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellnowColor, 0LL);
LABEL_80:
  window = this->fields.window;
  v67 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v67,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endOpenContinueItem__,
    0LL);
  if ( !window )
    goto LABEL_82;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v67,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__OpenContinueWaveRestart(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438DB8F & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue__OpenContinueWaveRestart_b__135_0__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_438DB8F = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueWaveRestart_b__135_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_B7769C(v5, v6);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueWaveRestartWindow->klass->vtable._10_Open.method)(
    continueWaveRestartWindow,
    v4,
    continueWaveRestartWindow->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__OpenContinueWaveSelectWindow(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *waveSelectDialog; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *waveSelectDialogPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  int64_t Object; // x0
  struct WaveBattleSelectWaveDialog_o *Component_srcLineSprite; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int32_t v15; // w20
  int32_t Phase; // w21
  int32_t EventId; // w24
  UserEventDeckMaster_o *Master_WarQuestSelectionMaster; // x22
  UserEventDeckEntity_o *v19; // x22
  QuestRestrictionInfo_o *v20; // x23
  int32_t v21; // w20
  int32_t DispWaveCount; // w0
  WaveBattleSelectWaveDialog_o *v23; // x21
  int32_t v24; // w24
  WaveBattleSelectWaveDialog_CloseDelegate_o *v25; // x25
  WaveBattleSelectWaveDialog_o *v26; // x20
  System_Action_int__o *v27; // x21
  struct BattleData_o *data; // x8
  WaveBattleSelectWaveDialog_o *v29; // x20
  System_Action_o *v30; // x21
  __int64 v31; // x0

  if ( (byte_438DB97 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_int___ctor__);
    sub_B775C4(&System_Action_int__TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_0__);
    sub_B775C4(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__);
    sub_B775C4(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_2__);
    sub_B775C4(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserEventDeckMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&QuestRestrictionInfo_TypeInfo);
    byte_438DB97 = 1;
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(waveSelectDialog, 0LL, 0LL) )
  {
    waveSelectDialogPrefab = this->fields.waveSelectDialogPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    Object = (int64_t)BaseMonoBehaviour__createObject(
                        (BaseMonoBehaviour_o *)this,
                        waveSelectDialogPrefab,
                        transform,
                        0LL,
                        0LL);
    if ( !Object )
      goto LABEL_29;
    Component_srcLineSprite = (struct WaveBattleSelectWaveDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)Object,
                                                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    this->fields.waveSelectDialog = Component_srcLineSprite;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.waveSelectDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_29;
  Object = BattleData__getQuestId((BattleData_o *)Object, 0LL);
  if ( !this->fields.data )
    goto LABEL_29;
  v15 = Object;
  Phase = BattleData__getPhase(this->fields.data, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Object = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Object )
    goto LABEL_29;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Object, v15, 0LL);
  Master_WarQuestSelectionMaster = (UserEventDeckMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Object = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  Object = (int64_t)UserEventDeckMaster__getDeckList(Master_WarQuestSelectionMaster, Object, EventId, v15, Phase, 0LL);
  if ( !Object )
    goto LABEL_29;
  if ( !*(_DWORD *)(Object + 24) )
  {
    v31 = sub_B776C8(Object);
    sub_B77668(v31, 0LL);
  }
  v19 = *(UserEventDeckEntity_o **)(Object + 32);
  v20 = (QuestRestrictionInfo_o *)sub_B77694(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_34440512(v20, EventId, v15, Phase, 0LL);
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_29;
  Object = BattleData__GetMaxWaveCount((BattleData_o *)Object, 0LL);
  if ( !this->fields.data )
    goto LABEL_29;
  v21 = Object;
  DispWaveCount = BattleData__getDispWaveCount(this->fields.data, 0LL);
  v23 = this->fields.waveSelectDialog;
  v24 = DispWaveCount;
  v25 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_B77694(WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
  WaveBattleSelectWaveDialog_CloseDelegate___ctor(
    v25,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_0__,
    0LL);
  if ( !v23 )
    goto LABEL_29;
  WaveBattleSelectWaveDialog__SetDialog(v23, v19, v20, v21, v24, 1, v25, 0LL);
  v26 = this->fields.waveSelectDialog;
  v27 = (System_Action_int__o *)sub_B77694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v27,
    (Il2CppObject *)this,
    (intptr_t)Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__,
    (const MethodInfo_269F2D8 *)Method_System_Action_int___ctor__);
  if ( !v26
    || (WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(v26, v27, 0LL), (data = this->fields.data) == 0LL)
    || (Object = (int64_t)this->fields.waveSelectDialog) == 0
    || (WaveBattleSelectWaveDialog__SetWaveInfoMaskActive(
          (WaveBattleSelectWaveDialog_o *)Object,
          data->fields.wavecount,
          0LL),
        v29 = this->fields.waveSelectDialog,
        v30 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(
          v30,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_2__,
          0LL),
        !v29) )
  {
LABEL_29:
    sub_B7769C(Object, v4);
  }
  WaveBattleSelectWaveDialog__Open_21901420(v29, v30, 0LL);
}


void __fastcall BattlePerformanceContinue__OpenGiveUp(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *giveUpWindow; // x0
  struct BattleData_o *data; // x8
  struct BattleEntity_o *battle_ent; // x8
  QuestEntity_o *v6; // x20
  UILabel_o *giveUpContinueItemNum; // x20
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  UISprite_o *giveUpContinueItemSpr; // x20
  int32_t ContinueItemImageId; // w21
  UILabel_o *checkGiveUpLabel; // x20
  LocalizationManager_c *v13; // x0
  bool HasFlag; // w0
  __int64 *v15; // x8
  int32_t ContinueItemNum; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438DB58 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_2604/*"BATTLE_RETIRE_CHECKSTR"*/);
    sub_B775C4(&StringLiteral_23975/*"{0:#,0}"*/);
    sub_B775C4(&StringLiteral_2605/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/);
    byte_438DB58 = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0LL);
  if ( !giveUpWindow )
    goto LABEL_61;
  v17.fields.y = 72.0;
  v17.fields.x = 0.0;
  v17.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v17, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpBg;
  if ( !giveUpWindow )
    goto LABEL_61;
  UIWidget__set_height((UIWidget_o *)giveUpWindow, 239, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpTitle;
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)giveUpWindow,
                                               0LL);
  if ( !giveUpWindow )
    goto LABEL_61;
  v18.fields.y = 77.0;
  v18.fields.x = 0.0;
  v18.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v18, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)giveUpWindow,
                                               0LL);
  if ( !giveUpWindow )
    goto LABEL_61;
  v19.fields.y = 6.0;
  v19.fields.x = 0.0;
  v19.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v19, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpContinueItemLabel;
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)giveUpWindow, 0LL);
  if ( !giveUpWindow )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0LL);
  giveUpWindow = this->fields.giveUpOkBtn;
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0LL);
  if ( !giveUpWindow )
    goto LABEL_61;
  v20.fields.z = 0.0;
  v20.fields.x = 193.0;
  v20.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v20, 0LL);
  giveUpWindow = this->fields.giveUpCancelBtn;
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0LL);
  if ( !giveUpWindow )
    goto LABEL_61;
  v21.fields.z = 0.0;
  v21.fields.y = -72.0;
  v21.fields.x = -193.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v21, 0LL);
  giveUpWindow = this->fields.giveUpContinueItemRoot;
  if ( !giveUpWindow )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)giveUpWindow,
                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  data = this->fields.data;
  if ( !data )
    goto LABEL_61;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent || !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)giveUpWindow,
                                               battle_ent->fields.questId,
                                               (const MethodInfo_21FB894 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v6 = (QuestEntity_o *)giveUpWindow;
  if ( this->fields.IsContinueItem )
  {
    giveUpWindow = (UnityEngine_GameObject_o *)this->fields.data;
    if ( !giveUpWindow )
      goto LABEL_61;
    giveUpWindow = (UnityEngine_GameObject_o *)BattleData__GetContinueItemNum((BattleData_o *)giveUpWindow, 0LL);
    if ( (int)giveUpWindow >= 1 )
    {
      giveUpWindow = this->fields.giveUpWindow;
      if ( giveUpWindow )
      {
        giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0LL);
        if ( giveUpWindow )
        {
          v22.fields.y = 66.0;
          v22.fields.x = 0.0;
          v22.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v22, 0LL);
          giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpBg;
          if ( giveUpWindow )
          {
            UIWidget__set_height((UIWidget_o *)giveUpWindow, 279, 0LL);
            giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpTitle;
            if ( giveUpWindow )
            {
              giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)giveUpWindow,
                                                           0LL);
              if ( giveUpWindow )
              {
                v23.fields.y = 97.0;
                v23.fields.x = 0.0;
                v23.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v23, 0LL);
                giveUpWindow = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
                if ( giveUpWindow )
                {
                  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)giveUpWindow,
                                                               0LL);
                  if ( giveUpWindow )
                  {
                    v24.fields.y = 26.0;
                    v24.fields.x = 0.0;
                    v24.fields.z = 0.0;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v24, 0LL);
                    giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpContinueItemLabel;
                    if ( giveUpWindow )
                    {
                      giveUpWindow = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)giveUpWindow, 0LL);
                      if ( giveUpWindow )
                      {
                        UnityEngine_GameObject__SetActive(giveUpWindow, 1, 0LL);
                        giveUpWindow = this->fields.giveUpOkBtn;
                        if ( giveUpWindow )
                        {
                          giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                       giveUpWindow,
                                                                       0LL);
                          if ( giveUpWindow )
                          {
                            v25.fields.z = 0.0;
                            v25.fields.x = 193.0;
                            v25.fields.y = -92.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v25, 0LL);
                            giveUpWindow = this->fields.giveUpCancelBtn;
                            if ( giveUpWindow )
                            {
                              giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                           giveUpWindow,
                                                                           0LL);
                              if ( giveUpWindow )
                              {
                                v26.fields.z = 0.0;
                                v26.fields.x = -193.0;
                                v26.fields.y = -92.0;
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)giveUpWindow,
                                  v26,
                                  0LL);
                                giveUpWindow = this->fields.giveUpContinueItemRoot;
                                if ( giveUpWindow )
                                {
                                  UnityEngine_GameObject__SetActive(giveUpWindow, 1, 0LL);
                                  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.data;
                                  if ( giveUpWindow )
                                  {
                                    giveUpContinueItemNum = this->fields.giveUpContinueItemNum;
                                    ContinueItemNum = BattleData__GetContinueItemNum((BattleData_o *)giveUpWindow, 0LL);
                                    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ContinueItemNum, v8);
                                    giveUpWindow = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                 (System_String_o *)StringLiteral_23975/*"{0:#,0}"*/,
                                                                                 v9,
                                                                                 0LL);
                                    if ( giveUpContinueItemNum )
                                    {
                                      UILabel__set_text(giveUpContinueItemNum, (System_String_o *)giveUpWindow, 0LL);
                                      giveUpWindow = (UnityEngine_GameObject_o *)this->fields.data;
                                      if ( giveUpWindow )
                                      {
                                        giveUpContinueItemSpr = this->fields.giveUpContinueItemSpr;
                                        ContinueItemImageId = BattleData__GetContinueItemImageId(
                                                                (BattleData_o *)giveUpWindow,
                                                                0LL);
                                        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                          && !AtlasManager_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                        }
                                        AtlasManager__SetItem(giveUpContinueItemSpr, ContinueItemImageId, 0LL);
                                        checkGiveUpLabel = this->fields.checkGiveUpLabel;
                                        v13 = LocalizationManager_TypeInfo;
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
      sub_B7769C(giveUpWindow, method);
    }
  }
  if ( !v6 )
    goto LABEL_61;
  HasFlag = QuestEntity__HasFlag(v6, 0x40000000LL, 0LL);
  checkGiveUpLabel = this->fields.checkGiveUpLabel;
  if ( !HasFlag )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
      || LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_57;
    }
    v13 = LocalizationManager_TypeInfo;
LABEL_56:
    j_il2cpp_runtime_class_init_0(v13);
LABEL_57:
    v15 = &StringLiteral_2604/*"BATTLE_RETIRE_CHECKSTR"*/;
    goto LABEL_58;
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = &StringLiteral_2605/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/;
LABEL_58:
  giveUpWindow = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v15, 0LL);
  if ( !checkGiveUpLabel )
    goto LABEL_61;
  UILabel__set_text(checkGiveUpLabel, (System_String_o *)giveUpWindow, 0LL);
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(giveUpWindow, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__OpenInterruptionConfirmWindow(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  System_String_o *v6; // x21
  System_String_o *v7; // x22
  System_String_o *v8; // x23
  System_String_o *v9; // x24
  CommonConfirmDialog_ClickDelegate_o *v10; // x25

  if ( (byte_438DB95 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue__OpenInterruptionConfirmWindow_b__141_0__);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_2545/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/);
    sub_B775C4(&StringLiteral_2543/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_2542/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/);
    byte_438DB95 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0, 0LL);
  v5 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2543/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, 0LL);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_2542/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, 0LL);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2545/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0LL);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v10 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenInterruptionConfirmWindow_b__141_0__,
    0LL);
  if ( !v5 )
LABEL_9:
    sub_B7769C(Instance, v4);
  CommonUI__OpenConfirmDecideDialog(v5, v6, v7, v8, v9, v10, 23, 280, 13.0, 22, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__OpenWaveSelectConfirmDialog(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct BattleData_o *data; // x8
  System_String_o *v6; // x20
  Il2CppObject *v7; // x0
  System_String_o *v8; // x20
  struct BattleData_o *v9; // x8
  System_String_o *v10; // x21
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x0
  System_String_o *v13; // x21
  CommonUI_o *v14; // x22
  System_String_o *v15; // x23
  System_String_o *v16; // x24
  CommonConfirmDialog_ClickDelegate_o *v17; // x25
  int32_t DispWaveCount; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_438DB98 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue__OpenWaveSelectConfirmDialog_b__144_0__);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_2551/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_2550/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_2549/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_2552/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/);
    sub_B775C4(&StringLiteral_989/*"00"*/);
    byte_438DB98 = 1;
  }
  DispWaveCount = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (CommonUI_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2550/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  v6 = (System_String_o *)Instance;
  v7 = (Il2CppObject *)System_Int32__ToString_39547236((int)data + 1032, (System_String_o *)StringLiteral_989/*"00"*/, 0LL);
  v8 = System_String__Format(v6, v7, 0LL);
  Instance = (CommonUI_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2551/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0LL);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_12;
  v10 = (System_String_o *)Instance;
  Instance = (CommonUI_o *)System_Int32__ToString_39547236((int)v9 + 1032, (System_String_o *)StringLiteral_989/*"00"*/, 0LL);
  if ( !this->fields.data )
    goto LABEL_12;
  v11 = (Il2CppObject *)Instance;
  DispWaveCount = BattleData__getDispWaveCount(this->fields.data, 0LL);
  v12 = (Il2CppObject *)System_Int32__ToString_39547236(
                          (int32_t)&DispWaveCount,
                          (System_String_o *)StringLiteral_989/*"00"*/,
                          0LL);
  v13 = System_String__Format_44897472(v10, v11, v12, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0, 0LL),
        v14 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2552/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, 0LL),
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2549/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, 0LL),
        v17 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo),
        CommonConfirmDialog_ClickDelegate___ctor(
          v17,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue__OpenWaveSelectConfirmDialog_b__144_0__,
          0LL),
        !v14) )
  {
LABEL_12:
    sub_B7769C(Instance, v4);
  }
  CommonUI__OpenConfirmDecideDialog(v14, v15, v13, v8, v16, v17, 26, 280, 13.0, 22, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__ProcInterruption(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  struct BattleWindowInterruptionComponent_o *continueInterruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438DB96 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue__ProcInterruption_b__142_0__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_438DB96 = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__ProcInterruption_b__142_0__,
    0LL);
  if ( !continueInterruptionWindow )
    sub_B7769C(v5, v6);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueInterruptionWindow->klass->vtable._12_Close.method)(
    continueInterruptionWindow,
    v4,
    continueInterruptionWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__ProcSelectWaveRestart(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *waveSelectDialog; // x20
  __int64 v4; // x1
  WaveBattleSelectWaveDialog_o *v5; // x0
  UnityEngine_Object_o *continueInterruptionWindow; // x20
  struct BattleWindowInterruptionComponent_o *v7; // x20
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_438DB99 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue__ProcSelectWaveRestart_b__145_0__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DB99 = 1;
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0LL, 0LL) )
  {
    v5 = this->fields.waveSelectDialog;
    if ( !v5 )
      goto LABEL_16;
    WaveBattleSelectWaveDialog__Close(v5, 0LL);
  }
  continueInterruptionWindow = (UnityEngine_Object_o *)this->fields.continueInterruptionWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(continueInterruptionWindow, 0LL, 0LL) )
  {
    v7 = this->fields.continueInterruptionWindow;
    v8 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattlePerformanceContinue__ProcSelectWaveRestart_b__145_0__,
      0LL);
    if ( v7 )
    {
      ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v7->klass->vtable._12_Close.method)(
        v7,
        v8,
        v7->klass->vtable._13_CompClose.methodPtr);
      return;
    }
LABEL_16:
    sub_B7769C(v5, v4);
  }
}


void __fastcall BattlePerformanceContinue__ProcWaveRestartFromInterruption(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  struct BattleWindowInterruptionComponent_o *continueInterruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438DB94 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue__ProcWaveRestartFromInterruption_b__140_0__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_438DB94 = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__ProcWaveRestartFromInterruption_b__140_0__,
    0LL);
  if ( !continueInterruptionWindow )
    sub_B7769C(v5, v6);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueInterruptionWindow->klass->vtable._12_Close.method)(
    continueInterruptionWindow,
    v4,
    continueInterruptionWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__ResetContinueItemInfo(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *ContinueItemWindow; // x0

  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow
    || (UnityEngine_GameObject__SetActive(ContinueItemWindow, 0, 0LL),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.data) == 0LL) )
  {
    sub_B7769C(ContinueItemWindow, method);
  }
  BattleData__UpdateContinueItemInfo((BattleData_o *)ContinueItemWindow, 0LL);
  *(_WORD *)&this->fields.IsContinueItem = 0;
}


void __fastcall BattlePerformanceContinue__SetContinueMessage(
        BattlePerformanceContinue_o *this,
        UILabel_o *label,
        System_String_o *localizationKey,
        int32_t stoneCount,
        const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v10; // x1
  System_String_o *mText; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x2
  struct BattleData_o *data; // x8
  struct BattleDefenceTargetData_o *defenceTargetData; // x8
  Il2CppObject *v17; // x20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  System_String_o *v20; // x21
  System_String_o *v21; // x22
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  int32_t uiId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438DB8D & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_2488/*"BATTLE_CONTINUE_DEFENCE_TARGET_HEAL"*/);
    sub_B775C4(&StringLiteral_24131/*"{0}_{1}"*/);
    sub_B775C4(&StringLiteral_2496/*"BATTLE_CONTINUE_NOT_ENOUGH_STONE"*/);
    byte_438DB8D = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__Get(localizationKey, 0LL);
  if ( !label )
    goto LABEL_32;
  UILabel__set_text(label, (System_String_o *)SelfUserGame, 0LL);
  if ( stoneCount == 0x80000000 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_32;
    stoneCount = *((_DWORD *)SelfUserGame + 42);
  }
  if ( stoneCount <= 0 )
  {
    mText = label->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2496/*"BATTLE_CONTINUE_NOT_ENOUGH_STONE"*/, 0LL);
    v13 = System_String__Concat_44901936(mText, v12, 0LL);
    UILabel__set_text(label, v13, 0LL);
  }
  SelfUserGame = this->fields.data;
  if ( !SelfUserGame )
    goto LABEL_32;
  SelfUserGame = (void *)BattleData__CheckDefenceTargetData((BattleData_o *)SelfUserGame, 0LL);
  if ( ((unsigned __int8)SelfUserGame & 1) == 0 )
    return;
  data = this->fields.data;
  if ( !data || (defenceTargetData = data->fields.defenceTargetData) == 0LL )
LABEL_32:
    sub_B7769C(SelfUserGame, v10);
  v17 = (Il2CppObject *)StringLiteral_2488/*"BATTLE_CONTINUE_DEFENCE_TARGET_HEAL"*/;
  uiId = defenceTargetData->fields.uiId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &uiId, v14);
  v19 = System_String__Format_44897472((System_String_o *)StringLiteral_24131/*"{0}_{1}"*/, v17, v18, 0LL);
  v20 = label->fields.mText;
  v21 = v19;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( LocalizationManager__ContainsKey(v21, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = (Il2CppObject *)v21;
  }
  else if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
         && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = LocalizationManager__Get((System_String_o *)v17, 0LL);
  v23 = System_String__Concat_44901936(v20, v22, 0LL);
  UILabel__set_text(label, v23, 0LL);
}


void __fastcall BattlePerformanceContinue__SkipCommandSpellRequest(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_438DB89 & 1) == 0 )
  {
    sub_B775C4(&BattleData_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_B775C4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_3480/*"CONNECT_OK"*/);
    sub_B775C4(&StringLiteral_6993/*"GAME_OVER_COMMAND_SPELL_ID"*/);
    byte_438DB89 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  Instance = (void *)ConstantMaster__getValue((System_String_o *)StringLiteral_6993/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)Instance,
               (const MethodInfo_21FB894 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_13;
  if ( !this->fields.data )
    goto LABEL_13;
  BattleData__LossTemporaryCommandSpell(this->fields.data, *((_DWORD *)Instance + 5), 0LL);
  Instance = this->fields.data;
  if ( !Instance )
    goto LABEL_13;
  BattleData__SuccessContinue((BattleData_o *)Instance, 0LL);
  this->fields.continueRetryFlg = 0;
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setContinueBattleFlg(0, 1, 0LL);
  Instance = this->fields.myFsm;
  if ( !Instance )
LABEL_13:
    sub_B7769C(Instance, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3480/*"CONNECT_OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__StartContinue(
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
    sub_B7769C(0LL, v4);
  BattlePerformance__SetTimeScale(perf, 1.0, 0LL);
}


void __fastcall BattlePerformanceContinue__StartContinueImpl(
        BattlePerformanceContinue_o *this,
        bool inIsProgress,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *SelfUserGame; // x0
  __int64 v5; // x1
  BattleViewItemlistComponent_o *itemWindow; // x21
  UserGameEntity_o *v7; // x20
  BattleDropItem_array *DropItems; // x22
  BattleDropItemComponent_ClickDelegate_o *v9; // x23
  UILabel_o *commandspell_now; // x21
  System_String_o *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  unsigned int OverwriteCommandSpellContinue; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438DB57 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue_showConf__);
    sub_B775C4(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_12574/*"START_CONTINUE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DB57 = 1;
  }
  OverwriteCommandSpellContinue = 0;
  SelfUserGame = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_21;
  itemWindow = this->fields.itemWindow;
  v7 = (UserGameEntity_o *)SelfUserGame;
  DropItems = BattleData__getDropItems(this->fields.data, 0LL);
  v9 = (BattleDropItemComponent_ClickDelegate_o *)sub_B77694(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_showConf__,
    0LL);
  if ( !itemWindow )
    goto LABEL_21;
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, DropItems, v9, this->fields.itemColumnCount, 0LL);
  SelfUserGame = this->fields.itemWindow;
  if ( !SelfUserGame )
    goto LABEL_21;
  BattleViewItemlistComponent__setHide(SelfUserGame, 0LL);
  SelfUserGame = (BattleViewItemlistComponent_o *)this->fields.data;
  if ( !SelfUserGame )
    goto LABEL_21;
  OverwriteCommandSpellContinue = BattleData__CheckCurrentTemporaryCommandSpell((BattleData_o *)SelfUserGame, v7, 0LL);
  v5 = OverwriteCommandSpellContinue;
  SelfUserGame = (BattleViewItemlistComponent_o *)this->fields.data;
  if ( !SelfUserGame )
    goto LABEL_21;
  OverwriteCommandSpellContinue = BattleData__GetOverwriteCommandSpellContinue(
                                    (BattleData_o *)SelfUserGame,
                                    OverwriteCommandSpellContinue,
                                    0LL);
  commandspell_now = this->fields.commandspell_now;
  SelfUserGame = (BattleViewItemlistComponent_o *)System_Int32__ToString((int32_t)&OverwriteCommandSpellContinue, 0LL);
  if ( !commandspell_now )
    goto LABEL_21;
  v11 = SelfUserGame ? (System_String_o *)SelfUserGame : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(commandspell_now, v11, 0LL);
  BattlePerformanceContinue__refreshStoneNow(this, v7, v12);
  SelfUserGame = (BattleViewItemlistComponent_o *)this->fields.commandspellObject;
  if ( !SelfUserGame )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (BattleViewItemlistComponent_o *)this->fields.stoneObject;
  if ( !SelfUserGame )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (BattleViewItemlistComponent_o *)this->fields.nostoneObject;
  if ( !SelfUserGame )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (BattleViewItemlistComponent_o *)this->fields.bg;
  if ( !SelfUserGame )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(7, 0LL);
  BattlePerformanceContinue__ResetContinueItemInfo(this, v13);
  SelfUserGame = (BattleViewItemlistComponent_o *)this->fields.myFsm;
  if ( !SelfUserGame )
LABEL_21:
    sub_B7769C(SelfUserGame, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_12574/*"START_CONTINUE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__StartContinueInterruption(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *continueInterruptionWindow; // x21
  struct BattleWindowInterruptionComponent_o **p_continueInterruptionWindow; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *continueInterruptionWindowPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleWindowInterruptionComponent_o *v16; // x20
  System_Action_o *v17; // x21
  System_Action_o *v18; // x22
  System_Action_o *v19; // x23

  if ( (byte_438DB92 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattlePerformanceContinue__StartContinueInterruption_b__138_0__);
    sub_B775C4(&Method_BattlePerformanceContinue__StartContinueInterruption_b__138_1__);
    sub_B775C4(&Method_BattlePerformanceContinue__StartContinueInterruption_b__138_2__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_12575/*"START_CONTINUE_INTERRUPTION"*/);
    byte_438DB92 = 1;
  }
  continueInterruptionWindow = (UnityEngine_Object_o *)this->fields.continueInterruptionWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_continueInterruptionWindow = &this->fields.continueInterruptionWindow;
  if ( UnityEngine_Object__op_Equality(continueInterruptionWindow, 0LL, 0LL) )
  {
    continueInterruptionWindowPrefab = this->fields.continueInterruptionWindowPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    Object = BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               continueInterruptionWindowPrefab,
               transform,
               0LL,
               0LL);
    if ( !Object )
      goto LABEL_14;
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       Object,
                                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
    *p_continueInterruptionWindow = (struct BattleWindowInterruptionComponent_o *)Component_srcLineSprite;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.continueInterruptionWindow,
      Component_srcLineSprite,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  Object = (UnityEngine_GameObject_o *)*p_continueInterruptionWindow;
  if ( !*p_continueInterruptionWindow )
    goto LABEL_14;
  Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0LL);
  if ( !Object )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(Object, 0, 0LL);
  v16 = this->fields.continueInterruptionWindow;
  v17 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__138_0__,
    0LL);
  v18 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__138_1__,
    0LL);
  v19 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__138_2__,
    0LL);
  if ( !v16
    || (BattleWindowInterruptionComponent__SetInterruptionWindow(v16, 0LL, v17, v18, v19, 0, 0LL),
        (Object = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
LABEL_14:
    sub_B7769C(Object, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Object, (System_String_o *)StringLiteral_12575/*"START_CONTINUE_INTERRUPTION"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__StartContinueWaveRestart(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  System_Action_o *v4; // x21
  System_Action_o *v5; // x22
  PlayMakerFSM_o *myFsm; // x0
  __int64 v7; // x1

  if ( (byte_438DB8E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattlePerformanceContinue__StartContinueWaveRestart_b__134_0__);
    sub_B775C4(&Method_BattlePerformanceContinue__StartContinueWaveRestart_b__134_1__);
    sub_B775C4(&StringLiteral_12576/*"START_CONTINUE_WAVE_RESTART"*/);
    byte_438DB8E = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueWaveRestart_b__134_0__,
    0LL);
  v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueWaveRestart_b__134_1__,
    0LL);
  if ( !continueWaveRestartWindow
    || (BattleWindowContinueWaveRestartComponent__SetWindow(continueWaveRestartWindow, v4, v5, 0LL),
        (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(myFsm, v7);
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12576/*"START_CONTINUE_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__Update(BattlePerformanceContinue_o *this, const MethodInfo *method)
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
  CommonUI_o *Instance; // x20
  System_String_o *v17; // x21
  ErrorDialog_ClickDelegate_o *v18; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-40h]

  if ( (byte_438DB52 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue_CallbackConfirmDialog__);
    sub_B775C4(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_2495/*"BATTLE_CONTINUE_ITEM_USE_CHECK"*/);
    sub_B775C4(&StringLiteral_2491/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/);
    sub_B775C4(&StringLiteral_2492/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/);
    sub_B775C4(&StringLiteral_2490/*"BATTLE_CONTINUE_ITEM_END_TIME"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DB52 = 1;
  }
  data = (UnityEngine_Object_o *)this->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(data, 0LL, 0LL) && this->fields.IsContinueItem )
  {
    v5 = this->fields.data;
    if ( !v5 )
      goto LABEL_27;
    ContinueDeadLine = BattleData__GetContinueDeadLine(v5, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime = LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
    giveUpContinueItemLabel = this->fields.giveUpContinueItemLabel;
    v9 = (Il2CppObject *)RestTime;
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2491/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, 0LL);
    v5 = (BattleData_o *)System_String__Format(v10, v9, 0LL);
    if ( !giveUpContinueItemLabel )
      goto LABEL_27;
    UILabel__set_text(giveUpContinueItemLabel, (System_String_o *)v5, 0LL);
    deadLine = this->fields.deadLine;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2492/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, 0LL);
    v5 = (BattleData_o *)System_String__Format(v12, v9, 0LL);
    if ( !deadLine )
      goto LABEL_27;
    UILabel__set_text(deadLine, (System_String_o *)v5, 0LL);
    useCheckContinueItemLabel = this->fields.useCheckContinueItemLabel;
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2495/*"BATTLE_CONTINUE_ITEM_USE_CHECK"*/, 0LL);
    v5 = (BattleData_o *)System_String__Format(v14, v9, 0LL);
    if ( !useCheckContinueItemLabel )
      goto LABEL_27;
    UILabel__set_text(useCheckContinueItemLabel, (System_String_o *)v5, 0LL);
    v5 = this->fields.data;
    if ( !v5 )
      goto LABEL_27;
    v15 = BattleData__GetContinueDeadLine(v5, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( v15 < NetworkManager__getTime(0LL) && !this->fields.isShowDeadLineDialog )
    {
      this->fields.isShowDeadLineDialog = 1;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2490/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
      v18 = (ErrorDialog_ClickDelegate_o *)sub_B77694(ErrorDialog_ClickDelegate_TypeInfo);
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
          (System_String_o *)StringLiteral_1/*""*/,
          v17,
          v18,
          0,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        return;
      }
LABEL_27:
      sub_B7769C(v5, v4);
    }
  }
}


void __fastcall BattlePerformanceContinue__WaveRestartNg(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438DB91 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue__WaveRestartNg_b__137_0__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_438DB91 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__WaveRestartNg_b__137_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_B7769C(v5, v6);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueWaveRestartWindow->klass->vtable._12_Close.method)(
    continueWaveRestartWindow,
    v4,
    continueWaveRestartWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__WaveRestartOk(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438DB90 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue__WaveRestartOk_b__136_0__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_438DB90 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__WaveRestartOk_b__136_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_B7769C(v5, v6);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueWaveRestartWindow->klass->vtable._12_Close.method)(
    continueWaveRestartWindow,
    v4,
    continueWaveRestartWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue___AttachStoneCountRefreshComponent_b__85_0(
        BattlePerformanceContinue_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_String_o *gem_now; // x0
  __int64 v7; // x1
  System_String_o *v8; // x21
  UILabel_o *ContinueStoneBtnLabel; // x21
  UILabel_o *stoneBtnLabel; // x21
  System_String_o *ActiveStateName; // x0
  UILabel_o *v12; // x21
  int32_t v13; // w0
  const MethodInfo *v14; // x4
  System_String_o **v15; // x8
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x4
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438DB9B & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_2486/*"BATTLE_CONTINUE_CHECK_SPELL"*/);
    sub_B775C4(&StringLiteral_2485/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
    sub_B775C4(&StringLiteral_2487/*"BATTLE_CONTINUE_CHECK_STONE"*/);
    sub_B775C4(&StringLiteral_2484/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/);
    sub_B775C4(&StringLiteral_23975/*"{0:#,0}"*/);
    sub_B775C4(&StringLiteral_12895/*"Select_NoStone"*/);
    sub_B775C4(&StringLiteral_2493/*"BATTLE_CONTINUE_ITEM_SELECT"*/);
    sub_B775C4(&StringLiteral_2494/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/);
    sub_B775C4(&StringLiteral_12896/*"Select_Stone"*/);
    byte_438DB9B = 1;
  }
  v18 = stoneCount;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, method);
  gem_now = System_String__Format((System_String_o *)StringLiteral_23975/*"{0:#,0}"*/, v5, 0LL);
  if ( !this->fields.ContinueStoneNum )
    goto LABEL_28;
  v8 = gem_now;
  UILabel__set_text(this->fields.ContinueStoneNum, gem_now, 0LL);
  gem_now = (System_String_o *)this->fields.gem_now;
  if ( !gem_now )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)gem_now, v8, 0LL);
  gem_now = (System_String_o *)this->fields.stone_now;
  if ( !gem_now )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)gem_now, v8, 0LL);
  ContinueStoneBtnLabel = this->fields.ContinueStoneBtnLabel;
  if ( stoneCount >= 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2485/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, 0LL);
    if ( ContinueStoneBtnLabel )
    {
      UILabel__set_text(ContinueStoneBtnLabel, gem_now, 0LL);
      stoneBtnLabel = this->fields.stoneBtnLabel;
      gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2485/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, 0LL);
      if ( stoneBtnLabel )
      {
        UILabel__set_text(stoneBtnLabel, gem_now, 0LL);
        gem_now = (System_String_o *)this->fields.myFsm;
        if ( gem_now )
        {
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)gem_now, 0LL);
          if ( !System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_12895/*"Select_NoStone"*/, 0LL) )
            goto LABEL_24;
          gem_now = (System_String_o *)this->fields.nostoneObject;
          if ( gem_now )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gem_now, 0, 0LL);
            gem_now = (System_String_o *)this->fields.stoneObject;
            if ( gem_now )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gem_now, 1, 0LL);
              gem_now = (System_String_o *)this->fields.myFsm;
              if ( gem_now )
              {
                PlayMakerFSM__SetState((PlayMakerFSM_o *)gem_now, (System_String_o *)StringLiteral_12896/*"Select_Stone"*/, 0LL);
                goto LABEL_24;
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_B7769C(gem_now, v7);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2484/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, 0LL);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_28;
  UILabel__set_text(ContinueStoneBtnLabel, gem_now, 0LL);
  v12 = this->fields.stoneBtnLabel;
  gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2484/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, 0LL);
  if ( !v12 )
    goto LABEL_28;
  UILabel__set_text(v12, gem_now, 0LL);
LABEL_24:
  gem_now = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_28;
  v13 = BattleData__CheckCurrentTemporaryCommandSpell(this->fields.data, (UserGameEntity_o *)gem_now, 0LL);
  v15 = (System_String_o **)&StringLiteral_2493/*"BATTLE_CONTINUE_ITEM_SELECT"*/;
  if ( v13 <= 2 )
    v15 = (System_String_o **)&StringLiteral_2494/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/;
  BattlePerformanceContinue__SetContinueMessage(this, this->fields.ContinueLabel, *v15, stoneCount, v14);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseCommandSpell,
    (System_String_o *)StringLiteral_2486/*"BATTLE_CONTINUE_CHECK_SPELL"*/,
    stoneCount,
    v16);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseGem,
    (System_String_o *)StringLiteral_2487/*"BATTLE_CONTINUE_CHECK_STONE"*/,
    stoneCount,
    v17);
}


void __fastcall BattlePerformanceContinue___CheckDefenceTargetBroken_b__129_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438DB9C & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5887/*"EVENT_TRUE"*/);
    byte_438DB9C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5887/*"EVENT_TRUE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenBrokenMessage_b__130_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438DB9D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5620/*"END_CLOSE"*/);
    byte_438DB9D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5620/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueInterruption_b__139_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438DBA6 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5634/*"END_OPEN"*/);
    byte_438DBA6 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5634/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueWaveRestart_b__135_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438DBA0 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5634/*"END_OPEN"*/);
    byte_438DBA0 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5634/*"END_OPEN"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__143_0(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattlePerformanceContinue_o *v9; // x19
  struct BattleData_o *data; // x8
  System_Int32_array **v11; // x1
  WaveBattleSelectWaveDialog_o *waveSelectDialog; // x20
  System_Action_o *v13; // x21

  v9 = this;
  if ( (byte_438DBAA & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_3__);
    sub_B775C4(&StringLiteral_3033/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/);
    this = (BattlePerformanceContinue_o *)sub_B775C4(&StringLiteral_7460/*"INTERRUPTION"*/);
    byte_438DBAA = 1;
  }
  data = v9->fields.data;
  if ( !data )
    goto LABEL_9;
  data->fields.selectedInterruptionWave = -1;
  if ( isDecide )
  {
    v11 = (System_Int32_array **)StringLiteral_3033/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    v9->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3033/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    sub_B77560(
      (BattleServantConfConponent_o *)&v9->fields.cancelInterruptionEvent,
      v11,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this = (BattlePerformanceContinue_o *)v9->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_7460/*"INTERRUPTION"*/, 0LL);
      return;
    }
LABEL_9:
    sub_B7769C(this, isDecide);
  }
  waveSelectDialog = v9->fields.waveSelectDialog;
  v13 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_3__,
    0LL);
  if ( !waveSelectDialog )
    goto LABEL_9;
  WaveBattleSelectWaveDialog__Close_21901880(waveSelectDialog, v13, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__143_1(
        BattlePerformanceContinue_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PlayMakerFSM_o *myFsm; // x0
  __int64 v8; // x1
  struct BattleData_o *data; // x8

  if ( (byte_438DBAC & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__);
    sub_B775C4(&StringLiteral_11863/*"SELECT_WAVE"*/);
    byte_438DBAC = 1;
  }
  v5 = Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__;
  if ( (*((_BYTE *)Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B775CC(Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__);
  v6 = (System_Reflection_MethodBase_o *)sub_B775A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  data = this->fields.data;
  if ( !data || (data->fields.selectedInterruptionWave = wave, (myFsm = this->fields.myFsm) == 0LL) )
    sub_B7769C(myFsm, v8);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_11863/*"SELECT_WAVE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__143_2(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438DBAD & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_438DBAD = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__143_3(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *waveSelectDialog; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_438DBAB & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_9469/*"NG"*/);
    byte_438DBAB = 1;
  }
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.waveSelectDialog;
  if ( !waveSelectDialog )
    goto LABEL_9;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(waveSelectDialog, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
  this->fields.waveSelectDialog = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.waveSelectDialog, 0LL, v5, v6, v7, v8, v9, v10);
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.myFsm;
  if ( !waveSelectDialog )
LABEL_9:
    sub_B7769C(waveSelectDialog, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)waveSelectDialog, (System_String_o *)StringLiteral_9469/*"NG"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenInterruptionConfirmWindow_b__141_0(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_String_o **p_cancelInterruptionEvent; // x8
  System_Int32_array **v21; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v23; // x20

  if ( (byte_438DBA8 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_BattlePerformanceContinue___c__DisplayClass141_0__OpenInterruptionConfirmWindow_b__1__);
    sub_B775C4(&BattlePerformanceContinue___c__DisplayClass141_0_TypeInfo);
    sub_B775C4(&StringLiteral_4702/*"DECIDE_INTERRUPTION"*/);
    byte_438DBA8 = 1;
  }
  v5 = sub_B77694(BattlePerformanceContinue___c__DisplayClass141_0_TypeInfo);
  BattlePerformanceContinue___c__DisplayClass141_0___ctor((BattlePerformanceContinue___c__DisplayClass141_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  p_cancelInterruptionEvent = &this->fields.cancelInterruptionEvent;
  if ( isDecide )
    p_cancelInterruptionEvent = (struct System_String_o **)&StringLiteral_4702/*"DECIDE_INTERRUPTION"*/;
  v21 = (System_Int32_array **)*p_cancelInterruptionEvent;
  *(_QWORD *)(v5 + 16) = *p_cancelInterruptionEvent;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), v21, v14, v15, v16, v17, v18, v19);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_BattlePerformanceContinue___c__DisplayClass141_0__OpenInterruptionConfirmWindow_b__1__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_B7769C(v6, v7);
  CommonUI__CloseConfirmDialog_18056328(Instance, v23, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenWaveSelectConfirmDialog_b__144_0(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  WaveBattleSelectWaveDialog_o *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  CommonUI_o *Instance; // x20
  System_Action_o *v15; // x22
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_438DBAE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_BattlePerformanceContinue___c__DisplayClass144_0__OpenWaveSelectConfirmDialog_b__1__);
    sub_B775C4(&BattlePerformanceContinue___c__DisplayClass144_0_TypeInfo);
    byte_438DBAE = 1;
  }
  v5 = sub_B77694(BattlePerformanceContinue___c__DisplayClass144_0_TypeInfo);
  BattlePerformanceContinue___c__DisplayClass144_0___ctor((BattlePerformanceContinue___c__DisplayClass144_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 16) = isDecide;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_BattlePerformanceContinue___c__DisplayClass144_0__OpenWaveSelectConfirmDialog_b__1__,
    0LL);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog_18056328(Instance, v15, 0LL);
  if ( *(_BYTE *)(v5 + 16) )
  {
    waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0LL, 0LL) )
    {
      v6 = this->fields.waveSelectDialog;
      if ( v6 )
      {
        WaveBattleSelectWaveDialog__Close(v6, 0LL);
        return;
      }
LABEL_13:
      sub_B7769C(v6, v7);
    }
  }
}


void __fastcall BattlePerformanceContinue___ProcInterruption_b__142_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_438DBA9 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_10727/*"PROC_INTERRUPTION"*/);
    byte_438DBA9 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B7769C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10727/*"PROC_INTERRUPTION"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___ProcSelectWaveRestart_b__145_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_438DBAF & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_10728/*"PROC_PARTY_REORGANIZATION"*/);
    byte_438DBAF = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B7769C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10728/*"PROC_PARTY_REORGANIZATION"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___ProcWaveRestartFromInterruption_b__140_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_438DBA7 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_10730/*"PROC_WAVE_RESTART"*/);
    byte_438DBA7 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B7769C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10730/*"PROC_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueInterruption_b__138_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438DBA3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_15651/*"WAVE_RESTART"*/);
    byte_438DBA3 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15651/*"WAVE_RESTART"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueInterruption_b__138_1(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438DBA4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_11864/*"SELECT_WAVE_RESTART"*/);
    byte_438DBA4 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_11864/*"SELECT_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueInterruption_b__138_2(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  __int64 v10; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438DBA5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_7460/*"INTERRUPTION"*/);
    sub_B775C4(&StringLiteral_3032/*"CANCEL_INTERRUPTION"*/);
    byte_438DBA5 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_3032/*"CANCEL_INTERRUPTION"*/;
  this->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3032/*"CANCEL_INTERRUPTION"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.cancelInterruptionEvent, v9, v2, v3, v4, v5, v6, v7);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, v10);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_7460/*"INTERRUPTION"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueWaveRestart_b__134_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438DB9E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9917/*"OK"*/);
    byte_438DB9E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9917/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueWaveRestart_b__134_1(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438DB9F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9469/*"NG"*/);
    byte_438DB9F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9469/*"NG"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___WaveRestartNg_b__137_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_438DBA2 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9469/*"NG"*/);
    byte_438DBA2 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B7769C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9469/*"NG"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___WaveRestartOk_b__136_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_438DBA1 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9917/*"OK"*/);
    byte_438DBA1 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B7769C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9917/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__atlasLoadEnd(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleViewItemlistComponent_o *itemWindow; // x20
  BattleDropItem_array *DropItems; // x21
  BattleDropItemComponent_ClickDelegate_o *v6; // x22

  if ( (byte_438DB56 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue_showConf__);
    sub_B775C4(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    byte_438DB56 = 1;
  }
  data = this->fields.data;
  if ( !data
    || (itemWindow = this->fields.itemWindow,
        DropItems = BattleData__getDropItems(data, 0LL),
        v6 = (BattleDropItemComponent_ClickDelegate_o *)sub_B77694(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_showConf__,
          0LL),
        !itemWindow) )
  {
    sub_B7769C(data, method);
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, DropItems, v6, this->fields.itemColumnCount, 0LL);
}


void __fastcall BattlePerformanceContinue__callBackCommandSpell(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  BattlePerformanceContinue_o *v4; // x19
  __int64 *v5; // x8

  v4 = this;
  if ( (byte_438DB68 & 1) == 0 )
  {
    sub_B775C4(&BattleData_TypeInfo);
    sub_B775C4(&StringLiteral_3479/*"CONNECT_NG"*/);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    this = (BattlePerformanceContinue_o *)sub_B775C4(&StringLiteral_3480/*"CONNECT_OK"*/);
    byte_438DB68 = 1;
  }
  if ( !ret )
    goto LABEL_15;
  if ( System_String__Equals_44889276(ret, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL) )
  {
    v4->fields.continueRetryFlg = 0;
    if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__setContinueBattleFlg(0, 1, 0LL);
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    if ( this )
    {
      v5 = &StringLiteral_3480/*"CONNECT_OK"*/;
LABEL_13:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
      return;
    }
    goto LABEL_15;
  }
  if ( System_String__Equals_44889276(ret, (System_String_o *)StringLiteral_21504/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      v5 = &StringLiteral_3479/*"CONNECT_NG"*/;
      goto LABEL_13;
    }
LABEL_15:
    sub_B7769C(this, ret);
  }
}


void __fastcall BattlePerformanceContinue__callBackContinueItem(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  BattlePerformanceContinue_o *v4; // x19
  __int64 *v5; // x8

  v4 = this;
  if ( (byte_438DB82 & 1) == 0 )
  {
    sub_B775C4(&BattleData_TypeInfo);
    sub_B775C4(&StringLiteral_3479/*"CONNECT_NG"*/);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    this = (BattlePerformanceContinue_o *)sub_B775C4(&StringLiteral_3480/*"CONNECT_OK"*/);
    byte_438DB82 = 1;
  }
  if ( !ret )
    goto LABEL_18;
  if ( System_String__Equals_44889276(ret, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.data;
    v4->fields.continueRetryFlg = 0;
    if ( this )
    {
      BattleData__SuccessContinue((BattleData_o *)this, 0LL);
      if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      BattleData__setContinueBattleFlg(0, 1, 0LL);
      BattleData__SaveContinueItemId(0, 0, 0LL);
      this = (BattlePerformanceContinue_o *)v4->fields.data;
      if ( this )
      {
        BattleData__UpdateContinueItemInfo((BattleData_o *)this, 0LL);
        this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
        if ( this )
        {
          v5 = &StringLiteral_3480/*"CONNECT_OK"*/;
LABEL_16:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
          return;
        }
      }
    }
    goto LABEL_18;
  }
  if ( System_String__Equals_44889276(ret, (System_String_o *)StringLiteral_21504/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.data;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      BattleData__UpdateContinueItemInfo((BattleData_o *)this, 0LL);
      this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
      if ( this )
      {
        v5 = &StringLiteral_3479/*"CONNECT_NG"*/;
        goto LABEL_16;
      }
    }
LABEL_18:
    sub_B7769C(this, ret);
  }
}


void __fastcall BattlePerformanceContinue__callBackStone(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  BattlePerformanceContinue_o *v4; // x19
  __int64 *v5; // x8

  v4 = this;
  if ( (byte_438DB75 & 1) == 0 )
  {
    sub_B775C4(&BattleData_TypeInfo);
    sub_B775C4(&StringLiteral_3479/*"CONNECT_NG"*/);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    this = (BattlePerformanceContinue_o *)sub_B775C4(&StringLiteral_3480/*"CONNECT_OK"*/);
    byte_438DB75 = 1;
  }
  if ( !ret )
    goto LABEL_16;
  if ( System_String__Equals_44889276(ret, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.data;
    v4->fields.continueRetryFlg = 0;
    if ( this )
    {
      BattleData__SuccessContinue((BattleData_o *)this, 0LL);
      if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      BattleData__setContinueBattleFlg(0, 1, 0LL);
      this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
      if ( this )
      {
        v5 = &StringLiteral_3480/*"CONNECT_OK"*/;
LABEL_14:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
        return;
      }
    }
    goto LABEL_16;
  }
  if ( System_String__Equals_44889276(ret, (System_String_o *)StringLiteral_21504/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      v5 = &StringLiteral_3479/*"CONNECT_NG"*/;
      goto LABEL_14;
    }
LABEL_16:
    sub_B7769C(this, ret);
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
    sub_B7769C(0LL, ret);
  BattleData__SuccessContinue(data, 0LL);
  BattlePerformanceContinue__callBackCommandSpell(this, ret, v6);
}


void __fastcall BattlePerformanceContinue__callbaclStoneShop(
        BattlePerformanceContinue_o *this,
        int32_t result,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  __int64 *v9; // x8

  if ( (byte_438DB7D & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_3479/*"CONNECT_NG"*/);
    sub_B775C4(&StringLiteral_3480/*"CONNECT_OK"*/);
    byte_438DB7D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  BattlePerformanceContinue__closeNoStone(this, v7);
  if ( (unsigned int)(result - 1) > 1 )
  {
    Instance = (CommonUI_o *)this->fields.myFsm;
    if ( Instance )
    {
      v9 = &StringLiteral_3479/*"CONNECT_NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B7769C(Instance, v6);
  }
  BattlePerformanceContinue__refreshStoneNow(this, 0LL, v8);
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_10;
  v9 = &StringLiteral_3480/*"CONNECT_OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v9, 0LL);
}


void __fastcall BattlePerformanceContinue__checkCountStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int *SelfUserGame; // x0
  __int64 v4; // x1

  if ( (byte_438DB87 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9466/*"NEXT"*/);
    byte_438DB87 = 1;
  }
  SelfUserGame = (int *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_7;
  if ( SelfUserGame[42] > 0 )
    return;
  SelfUserGame = (int *)this->fields.myFsm;
  this->fields.IsContinueItem = 0;
  if ( !SelfUserGame )
LABEL_7:
    sub_B7769C(SelfUserGame, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_9466/*"NEXT"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__checkDeadLineStoneShopEnd(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  int64_t ContinueDeadLine; // x20
  CommonUI_o *Instance; // x20
  System_String_o *v6; // x21
  ErrorDialog_ClickDelegate_o *v7; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-40h]

  if ( (byte_438DB88 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue_CallbackConfirmDialog__);
    sub_B775C4(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_9466/*"NEXT"*/);
    sub_B775C4(&StringLiteral_2490/*"BATTLE_CONTINUE_ITEM_END_TIME"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DB88 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2490/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
    v7 = (ErrorDialog_ClickDelegate_o *)sub_B77694(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattlePerformanceContinue_CallbackConfirmDialog__,
      0LL);
    if ( Instance )
    {
      effectDistance.fields.value = 0LL;
      *(_DWORD *)&effectDistance.fields.has_value = 0;
      CommonUI__OpenWarningDialog(
        Instance,
        (System_String_o *)StringLiteral_1/*""*/,
        v6,
        v7,
        0,
        0,
        -1.0,
        1,
        effectDistance,
        0LL);
      return;
    }
LABEL_15:
    sub_B7769C(data, method);
  }
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_9466/*"NEXT"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__checkSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  __int64 *v5; // x9

  if ( (byte_438DB62 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9917/*"OK"*/);
    sub_B775C4(&StringLiteral_9469/*"NG"*/);
    byte_438DB62 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data
    || (SelfUserGame = (UserGameEntity_o *)BattleData__CheckCurrentTemporaryCommandSpell(
                                             this->fields.data,
                                             SelfUserGame,
                                             0LL),
        !this->fields.data)
    || (SelfUserGame = (UserGameEntity_o *)BattleData__GetOverwriteCommandSpellContinue(
                                             this->fields.data,
                                             (int32_t)SelfUserGame,
                                             0LL),
        !this->fields.myFsm) )
  {
    sub_B7769C(SelfUserGame, v4);
  }
  if ( (int)SelfUserGame >= 3 )
    v5 = &StringLiteral_9917/*"OK"*/;
  else
    v5 = &StringLiteral_9469/*"NG"*/;
  PlayMakerFSM__SendEvent(this->fields.myFsm, (System_String_o *)*v5, 0LL);
}


void __fastcall BattlePerformanceContinue__checkStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  const MethodInfo *v4; // x2
  PlayMakerFSM_o *myFsm; // x0
  __int64 v6; // x1
  __int64 *v7; // x8

  if ( (byte_438DB6F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9917/*"OK"*/);
    sub_B775C4(&StringLiteral_9469/*"NG"*/);
    byte_438DB6F = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  BattlePerformanceContinue__refreshStoneNow(this, SelfUserGame, v4);
  if ( !SelfUserGame || (myFsm = this->fields.myFsm) == 0LL )
    sub_B7769C(myFsm, v6);
  if ( SelfUserGame->fields.stone < 1 )
    v7 = &StringLiteral_9469/*"NG"*/;
  else
    v7 = &StringLiteral_9917/*"OK"*/;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v7, 0LL);
}


void __fastcall BattlePerformanceContinue__closeContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_438DB7F & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue_endCloseContinueItem__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_438DB7F = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseContinueItem__,
          0LL),
        !window) )
  {
    sub_B7769C(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v5,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_438DB7A & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue_endCloseNoStone__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_438DB7A = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseNoStone__,
          0LL),
        !window) )
  {
    sub_B7769C(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v5,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_438DB65 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue_endCloseSpell__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_438DB65 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseSpell__,
          0LL),
        !window) )
  {
    sub_B7769C(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v5,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_438DB72 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue_endCloseStone__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    byte_438DB72 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseStone__,
          0LL),
        !window) )
  {
    sub_B7769C(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v5,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeUseCheck(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *useCheckWindow; // x0

  useCheckWindow = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !useCheckWindow
    || (useCheckWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useCheckWindow, 0LL)) == 0LL )
  {
    sub_B7769C(useCheckWindow, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useCheckWindow, 0, 0LL);
}


void __fastcall BattlePerformanceContinue__connectContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  int32_t ContinueUseItemId; // w20
  NetworkManager_ResultCallbackFunc_o *v6; // x21
  struct BattleData_o *v7; // x8
  struct BattleEntity_o *battle_ent; // x9

  if ( (byte_438DB81 & 1) == 0 )
  {
    sub_B775C4(&BattleData_TypeInfo);
    sub_B775C4(&Method_BattlePerformanceContinue_callBackContinueItem__);
    sub_B775C4(&Method_NetworkManager_getRequest_BattleUseContinueItemRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438DB81 = 1;
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
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  BattleData__procPlayerContinue(data, this->fields.isProgress, 0LL);
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callBackContinueItem__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  data = (BattleData_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                           v6,
                           (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_BattleUseContinueItemRequest___);
  v7 = this->fields.data;
  if ( !v7 )
    goto LABEL_18;
  if ( this->fields.continueRetryFlg )
  {
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0LL);
      return;
    }
LABEL_18:
    sub_B7769C(data, v3);
  }
  battle_ent = v7->fields.battle_ent;
  if ( !battle_ent || !data )
    goto LABEL_18;
  BattleUseContinueItemRequest__beginRequest(
    (BattleUseContinueItemRequest_o *)data,
    battle_ent->fields.id,
    v7->fields.continueCount,
    ContinueUseItemId,
    1,
    0LL);
}


void __fastcall BattlePerformanceContinue__connectSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
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

  if ( (byte_438DB67 & 1) == 0 )
  {
    sub_B775C4(&BattleData_TypeInfo);
    sub_B775C4(&Method_BattlePerformanceContinue_callBackCommandSpell__);
    sub_B775C4(&Method_BattlePerformanceContinue_callbackContinueCommandSpell__);
    sub_B775C4(&Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&StringLiteral_6993/*"GAME_OVER_COMMAND_SPELL_ID"*/);
    byte_438DB67 = 1;
  }
  BattlePerformanceContinue__closeSpell(this, method);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setContinueBattleFlg(2, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_24;
  BattleData__procPlayerContinue(data, this->fields.isProgress, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_24;
  if ( BattleData__IsUseTemporaryCommandSpell(data, 0LL) )
  {
    BattlePerformanceContinue__SkipCommandSpellRequest(this, v5);
    return;
  }
  continueRetryFlg = this->fields.continueRetryFlg;
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  v8 = v7;
  if ( continueRetryFlg )
  {
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattlePerformanceContinue_callBackCommandSpell__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    data = (BattleData_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                             v8,
                             (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0LL);
      return;
    }
LABEL_24:
    sub_B7769C(data, v3);
  }
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callbackContinueCommandSpell__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  data = (BattleData_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                           v8,
                           (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_24;
  continueCount = v9->fields.continueCount;
  battle_ent = v9->fields.battle_ent;
  v12 = (BattleCommandSpellRequest_o *)data;
  data = (BattleData_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6993/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0LL);
  if ( !battle_ent )
    goto LABEL_24;
  v13 = this->fields.data;
  if ( !v13 || !v12 )
    goto LABEL_24;
  BattleCommandSpellRequest__beginRequest(
    v12,
    battle_ent->fields.id,
    (int32_t)data,
    v13->fields.waveClearNeedTurn,
    continueCount,
    1,
    0LL);
}


void __fastcall BattlePerformanceContinue__connectStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  struct BattleData_o *v6; // x8
  struct BattleEntity_o *battle_ent; // x9

  if ( (byte_438DB74 & 1) == 0 )
  {
    sub_B775C4(&BattleData_TypeInfo);
    sub_B775C4(&Method_BattlePerformanceContinue_callBackStone__);
    sub_B775C4(&Method_NetworkManager_getRequest_BattleUseContinueRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438DB74 = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setContinueBattleFlg(1, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  BattleData__procPlayerContinue(data, this->fields.isProgress, 0LL);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callBackStone__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  data = (BattleData_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                           v5,
                           (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_BattleUseContinueRequest___);
  v6 = this->fields.data;
  if ( !v6 )
    goto LABEL_17;
  if ( this->fields.continueRetryFlg )
  {
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0LL);
      return;
    }
LABEL_17:
    sub_B7769C(data, v3);
  }
  battle_ent = v6->fields.battle_ent;
  if ( !battle_ent || !data )
    goto LABEL_17;
  BattleUseContinueRequest__beginRequest(
    (BattleUseContinueRequest_o *)data,
    battle_ent->fields.id,
    v6->fields.waveClearNeedTurn,
    v6->fields.continueCount,
    0LL);
}


void __fastcall BattlePerformanceContinue__endCloseContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *ContinueItemWindow; // x0

  if ( (byte_438DB80 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5620/*"END_CLOSE"*/);
    byte_438DB80 = 1;
  }
  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow
    || (UnityEngine_GameObject__SetActive(ContinueItemWindow, 0, 0LL),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)ContinueItemWindow, 0LL),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(ContinueItemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ContinueItemWindow, (System_String_o *)StringLiteral_5620/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nostoneObject; // x0

  if ( (byte_438DB7B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5620/*"END_CLOSE"*/);
    byte_438DB7B = 1;
  }
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject
    || (UnityEngine_GameObject__SetActive(nostoneObject, 0, 0LL),
        (nostoneObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(nostoneObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)nostoneObject, (System_String_o *)StringLiteral_5620/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandspellObject; // x0

  if ( (byte_438DB66 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5620/*"END_CLOSE"*/);
    byte_438DB66 = 1;
  }
  commandspellObject = this->fields.commandspellObject;
  if ( !commandspellObject
    || (UnityEngine_GameObject__SetActive(commandspellObject, 0, 0LL),
        (commandspellObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)commandspellObject, 0LL),
        (commandspellObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(commandspellObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)commandspellObject, (System_String_o *)StringLiteral_5620/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *stoneObject; // x0

  if ( (byte_438DB73 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5620/*"END_CLOSE"*/);
    byte_438DB73 = 1;
  }
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 0, 0LL),
        (stoneObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)stoneObject, 0LL),
        (stoneObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(stoneObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)stoneObject, (System_String_o *)StringLiteral_5620/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endDialog(
        BattlePerformanceContinue_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_438DB5D & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_9469/*"NG"*/);
    byte_438DB5D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.logic) == 0LL) )
  {
    sub_B7769C(Instance, v5);
  }
  BattleLogic__sendFsmEvent((BattleLogic_o *)Instance, (System_String_o *)StringLiteral_9469/*"NG"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endLoadCommandSPell(
        BattlePerformanceContinue_o *this,
        AssetData_o *aData,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  UserGameEntity_o *v6; // x21
  int v7; // w22
  int32_t v8; // w21
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  struct BattlePerformance_o *v11; // x8
  UnityEngine_GameObject_o *Object; // x23
  __int64 v13; // x2
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  UnityEngine_Object_o *v17; // x21
  __int64 v18; // x2
  SimpleAnimation_o *v19; // x0
  System_String_o *v20; // x1
  UnityEngine_TrackedReference_o *Item; // x0
  __int64 v22; // x2
  UnityEngine_Animation_o *v23; // x0
  System_String_o *v24; // x1
  Il2CppObject *v25; // x0
  Il2CppObject *v26; // x0
  int32_t v27; // [xsp+8h] [xbp-38h] BYREF
  int v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438DB6D & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    sub_B775C4(&StringLiteral_18539/*"ef_commandspell_{0:D2}"*/);
    sub_B775C4(&StringLiteral_18540/*"ef_commandspell{0:D4}"*/);
    byte_438DB6D = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_31;
  BattlePerformance__PlayAnyCommandSpellContinueVoice(perf, 0LL);
  perf = (BattlePerformance_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !perf )
    goto LABEL_31;
  v6 = (UserGameEntity_o *)perf;
  perf = (BattlePerformance_o *)UserGameEntity__get_SpellImageIdBattle((UserGameEntity_o *)perf, 0LL);
  if ( !this->fields.data )
    goto LABEL_31;
  v7 = (int)perf;
  v8 = BattleData__CheckCurrentTemporaryCommandSpell(this->fields.data, v6, 0LL);
  v28 = v7;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v9);
  perf = (BattlePerformance_o *)System_String__Format((System_String_o *)StringLiteral_18540/*"ef_commandspell{0:D4}"*/, v10, 0LL);
  if ( !aData )
    goto LABEL_31;
  perf = (BattlePerformance_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  aData,
                                  (System_String_o *)perf,
                                  (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  v11 = this->fields.perf;
  if ( !v11 )
    goto LABEL_31;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             (UnityEngine_GameObject_o *)perf,
             v11->fields.popupTr,
             0LL,
             0LL);
  v27 = v8;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v13);
  perf = (BattlePerformance_o *)System_String__Format((System_String_o *)StringLiteral_18539/*"ef_commandspell_{0:D2}"*/, v14, 0LL);
  if ( !Object )
    goto LABEL_31;
  v15 = (System_String_o *)perf;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      Object,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v17 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  Object,
                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_31;
    if ( SimpleAnimation__get_Item((SimpleAnimation_o *)Component_srcLineSprite, v15, 0LL) )
    {
      v19 = (SimpleAnimation_o *)Component_srcLineSprite;
      v20 = v15;
    }
    else
    {
      v28 = 3;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v18);
      v20 = System_String__Format((System_String_o *)StringLiteral_18539/*"ef_commandspell_{0:D2}"*/, v25, 0LL);
      v19 = (SimpleAnimation_o *)Component_srcLineSprite;
    }
    SimpleAnimation__Play_16815192(v19, v20, 0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
    if ( ((unsigned __int8)perf & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_31;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v17, v15, 0LL);
      if ( UnityEngine_TrackedReference__op_Inequality(0LL, Item, 0LL) )
      {
        v23 = (UnityEngine_Animation_o *)v17;
        v24 = v15;
      }
      else
      {
        v28 = 3;
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v22);
        v24 = System_String__Format((System_String_o *)StringLiteral_18539/*"ef_commandspell_{0:D2}"*/, v26, 0LL);
        v23 = (UnityEngine_Animation_o *)v17;
      }
      UnityEngine_Animation__Play_51745976(v23, v24, 0LL);
    }
  }
  perf = (BattlePerformance_o *)this->fields.logic;
  if ( !perf
    || (BattleLogic__setTimeAcceleration((BattleLogic_o *)perf, 0, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__playMasterCommandSpellCutIn(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.myFsm) == 0LL) )
  {
LABEL_31:
    sub_B7769C(perf, aData);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_438DB61 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5634/*"END_OPEN"*/);
    byte_438DB61 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__ChangeLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5634/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_438DB79 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5634/*"END_OPEN"*/);
    byte_438DB79 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5634/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_438DB64 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5634/*"END_OPEN"*/);
    byte_438DB64 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5634/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_438DB71 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5634/*"END_OPEN"*/);
    byte_438DB71 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5634/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenUsecheck(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438DB86 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5634/*"END_OPEN"*/);
    byte_438DB86 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5634/*"END_OPEN"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__endRetryDialog(
        BattlePerformanceContinue_o *this,
        bool flg,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_438DB6A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9917/*"OK"*/);
    byte_438DB6A = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B7769C(0LL, flg);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9917/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  System_String_o *v7; // x20
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438DB6E & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_4302/*"CommandSpellEffect/ef_commandspell{0:D4}"*/);
    byte_438DB6E = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_9;
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0LL);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SpellImageIdBattle, v5);
  v7 = System_String__Format((System_String_o *)StringLiteral_4302/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v6, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v7, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.logic;
  if ( !SelfUserGame )
LABEL_9:
    sub_B7769C(SelfUserGame, v4);
  BattleLogic__resetTimeAcceleration((BattleLogic_o *)SelfUserGame, 0, 0LL);
}


bool __fastcall BattlePerformanceContinue__get_isDefenceTargetBroken(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  return this->fields._isDefenceTargetBroken_k__BackingField;
}


void __fastcall BattlePerformanceContinue__openNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v4; // x1
  UnityEngine_GameObject_o *nostoneObject; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v7; // x21

  if ( (byte_438DB78 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue_endOpenNoStone__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B775C4(&StringLiteral_2497/*"BATTLE_CONTINUE_NO_STONE"*/);
    byte_438DB78 = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseBuyGem,
    (System_String_o *)StringLiteral_2497/*"BATTLE_CONTINUE_NO_STONE"*/,
    0x80000000,
    v3);
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject
    || (UnityEngine_GameObject__SetActive(nostoneObject, 1, 0LL),
        window = this->fields.window,
        v7 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenNoStone__,
          0LL),
        !window) )
  {
    sub_B7769C(nostoneObject, v4);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v7,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__openReTry(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  NotificationDialog_ClickDelegate_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438DB69 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue_endRetryDialog__);
    sub_B775C4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_24396/*"通信に失敗したので再度通信を行います"*/);
    sub_B775C4(&StringLiteral_24397/*"通信失敗"*/);
    byte_438DB69 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (NotificationDialog_ClickDelegate_o *)sub_B77694(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endRetryDialog__,
    0LL);
  if ( !Instance )
    sub_B7769C(v5, v6);
  CommonUI__OpenNotificationDialog_18058264(
    Instance,
    (System_String_o *)StringLiteral_24397/*"通信失敗"*/,
    (System_String_o *)StringLiteral_24396/*"通信に失敗したので再度通信を行います"*/,
    v4,
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
  void *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *stoneBtnLabel; // x20
  __int64 *v6; // x8
  const MethodInfo *v7; // x1
  struct BattleData_o *data; // x8
  struct BattleData_o *v9; // x8
  const MethodInfo *v10; // x4
  WebViewObject_o *Component_WebViewObject; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v20; // x21

  if ( (byte_438DB63 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue_endOpenSpell__);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_SendEventToFsm___);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_2486/*"BATTLE_CONTINUE_CHECK_SPELL"*/);
    sub_B775C4(&StringLiteral_2485/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    sub_B775C4(&StringLiteral_2484/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/);
    byte_438DB63 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_33;
  stoneBtnLabel = this->fields.stoneBtnLabel;
  if ( *((int *)SelfUserGame + 42) < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_2484/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_2485/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/;
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)*v6, 0LL);
  if ( !stoneBtnLabel )
    goto LABEL_33;
  UILabel__set_text(stoneBtnLabel, (System_String_o *)SelfUserGame, 0LL);
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, v7);
  SelfUserGame = this->fields.commandspellObject;
  if ( !SelfUserGame )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_33;
  SelfUserGame = data->fields.quest_ent;
  if ( !SelfUserGame )
    goto LABEL_33;
  SelfUserGame = (void *)QuestEntity__HasFlag((QuestEntity_o *)SelfUserGame, 0x400000000LL, 0LL);
  if ( ((unsigned __int8)SelfUserGame & 1) == 0 )
  {
    v9 = this->fields.data;
    if ( !v9 )
      goto LABEL_33;
    SelfUserGame = v9->fields.quest_ent;
    if ( !SelfUserGame )
      goto LABEL_33;
    if ( !QuestEntity__HasFlag((QuestEntity_o *)SelfUserGame, 0x100000000LL, 0LL) )
      goto LABEL_31;
  }
  SelfUserGame = this->fields.commandSpellSprite;
  if ( !SelfUserGame )
    goto LABEL_33;
  UIWidget__set_color((UIWidget_o *)SelfUserGame, this->fields.spellBtnColor, 0LL);
  SelfUserGame = this->fields.commandSpellSprite;
  if ( !SelfUserGame )
    goto LABEL_33;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)SelfUserGame,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_SendEventToFsm___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  SelfUserGame = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_33;
    v18 = (System_Int32_array **)StringLiteral_5639/*"END_PROC"*/;
    Component_WebViewObject->fields.onError = (struct System_Action_string__o *)StringLiteral_5639/*"END_PROC"*/;
    sub_B77560(
      (BattleServantConfConponent_o *)&Component_WebViewObject->fields.onError,
      v18,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  SelfUserGame = this->fields.commandspell_now;
  if ( !SelfUserGame )
LABEL_33:
    sub_B7769C(SelfUserGame, v4);
  UIWidget__set_color((UIWidget_o *)SelfUserGame, this->fields.spellnowColor, 0LL);
LABEL_31:
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseCommandSpell,
    (System_String_o *)StringLiteral_2486/*"BATTLE_CONTINUE_CHECK_SPELL"*/,
    0x80000000,
    v10);
  window = this->fields.window;
  v20 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v20, (Il2CppObject *)this, Method_BattlePerformanceContinue_endOpenSpell__, 0LL);
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v20,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__openStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v4; // x1
  UnityEngine_GameObject_o *stoneObject; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v7; // x21

  if ( (byte_438DB70 & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue_endOpenStone__);
    sub_B775C4(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B775C4(&StringLiteral_2487/*"BATTLE_CONTINUE_CHECK_STONE"*/);
    byte_438DB70 = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseGem,
    (System_String_o *)StringLiteral_2487/*"BATTLE_CONTINUE_CHECK_STONE"*/,
    0x80000000,
    v3);
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 1, 0LL),
        window = this->fields.window,
        v7 = (BattleWindowComponent_EndCall_o *)sub_B77694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenStone__,
          0LL),
        !window) )
  {
    sub_B7769C(stoneObject, v4);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v7,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__openStoneShop(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438DB7C & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue_callbaclStoneShop__);
    sub_B775C4(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438DB7C = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (StonePurchaseMenu_CallbackFunc_o *)sub_B77694(StonePurchaseMenu_CallbackFunc_TypeInfo);
  StonePurchaseMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callbaclStoneShop__,
    0LL);
  if ( !Instance )
    sub_B7769C(v5, v6);
  CommonUI__OpenStonePurchaseMenu(Instance, v4, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__openUseCheck(
        BattlePerformanceContinue_o *this,
        int32_t type,
        const MethodInfo *method)
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

  if ( (byte_438DB85 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_2501/*"BATTLE_CONTINUE_USECHECK_STONE"*/);
    sub_B775C4(&StringLiteral_2499/*"BATTLE_CONTINUE_STONEPAY_WARNING_MSG"*/);
    sub_B775C4(&StringLiteral_2500/*"BATTLE_CONTINUE_USECHECK_SPELL"*/);
    byte_438DB85 = 1;
  }
  usecheckLabel = (UnityEngine_Component_o *)this->fields.usecheckLabel;
  if ( !usecheckLabel )
    goto LABEL_49;
  usecheckLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  if ( !usecheckLabel )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 1, 0LL);
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckContinueItemLabel;
  if ( !usecheckLabel )
    goto LABEL_49;
  usecheckLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  if ( !usecheckLabel )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 0, 0LL);
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL) )
  {
    usecheckLabel = (UnityEngine_Component_o *)this->fields.addMsgInfo;
    if ( !usecheckLabel )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 0, 0LL);
  }
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !usecheckLabel )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, -72.0, 0LL);
  usecheckLabel = (UnityEngine_Component_o *)this->fields.usecheckLabel;
  if ( !usecheckLabel )
    goto LABEL_49;
  v8 = UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v8, 28.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.useCheckOkBtn, -72.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.useCheckCancelBtn, -72.0, 0LL);
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckBgSprite;
  if ( !usecheckLabel )
    goto LABEL_49;
  UIWidget__set_height((UIWidget_o *)usecheckLabel, 239, 0LL);
  if ( type == 2 )
  {
    usecheckLabel = (UnityEngine_Component_o *)this->fields.usecheckLabel;
    if ( usecheckLabel )
    {
      usecheckLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
      if ( usecheckLabel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 0, 0LL);
        usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckContinueItemLabel;
        if ( usecheckLabel )
        {
          usecheckLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
          if ( usecheckLabel )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 1, 0LL);
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
    v10 = &StringLiteral_2500/*"BATTLE_CONTINUE_USECHECK_SPELL"*/;
    goto LABEL_39;
  }
  v11 = this->fields.usecheckLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  usecheckLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2501/*"BATTLE_CONTINUE_USECHECK_STONE"*/, 0LL);
  if ( !v11 )
    goto LABEL_49;
  UILabel__set_text(v11, (System_String_o *)usecheckLabel, 0LL);
  v12 = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
    goto LABEL_46;
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !usecheckLabel )
    goto LABEL_49;
  v13 = UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v13, -90.0, 0LL);
  usecheckLabel = (UnityEngine_Component_o *)this->fields.usecheckLabel;
  if ( !usecheckLabel
    || (v14 = UnityEngine_Component__get_gameObject(usecheckLabel, 0LL),
        GameObjectExtensions__SetLocalPositionY(v14, 82.0, 0LL),
        GameObjectExtensions__SetLocalPositionY(this->fields.useCheckOkBtn, -90.0, 0LL),
        GameObjectExtensions__SetLocalPositionY(this->fields.useCheckCancelBtn, -90.0, 0LL),
        (usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckBgSprite) == 0LL)
    || (UIWidget__set_height((UIWidget_o *)usecheckLabel, 275, 0LL),
        (usecheckLabel = (UnityEngine_Component_o *)this->fields.addMsgInfo) == 0LL) )
  {
LABEL_49:
    sub_B7769C(usecheckLabel, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 1, 0LL);
  addMsgLabel = this->fields.addMsgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = &StringLiteral_2499/*"BATTLE_CONTINUE_STONEPAY_WARNING_MSG"*/;
LABEL_39:
  usecheckLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v10, 0LL);
  if ( !addMsgLabel )
    goto LABEL_49;
  UILabel__set_text(addMsgLabel, (System_String_o *)usecheckLabel, 0LL);
LABEL_46:
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !usecheckLabel )
    goto LABEL_49;
  usecheckLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  if ( !usecheckLabel )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 1, 0LL);
  BattlePerformanceContinue__endOpenUsecheck(this, v15);
}


void __fastcall BattlePerformanceContinue__procContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438DB84 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_438DB84 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNG(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x19
  NotificationDialog_ClickDelegate_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438DB5C & 1) == 0 )
  {
    sub_B775C4(&Method_BattlePerformanceContinue_endDialog__);
    sub_B775C4(&NotificationDialog_ClickDelegate_TypeInfo);
    byte_438DB5C = 1;
  }
  logic = this->fields.logic;
  v4 = (NotificationDialog_ClickDelegate_o *)sub_B77694(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v4, (Il2CppObject *)this, Method_BattlePerformanceContinue_endDialog__, 0LL);
  if ( !logic )
    sub_B7769C(v5, v6);
  BattleLogic__OpenBattleLoseDlg(logic, 1, 0, v4, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438DB83 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_438DB83 = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGGiveUpContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438DB5A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_438DB5A = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  this->fields.IsContinueItem = 0;
  if ( !myFsm )
    sub_B7769C(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_438DB7E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_438DB7E = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__ClearObj(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(itemWindow, v3);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438DB6B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_438DB6B = 1;
  }
  BattlePerformanceContinue__closeSpell(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438DB76 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_438DB76 = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procOK(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattlePerformanceContinue_o *v2; // x19
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  int32_t QuestId; // w20
  BattleData_o *data; // x8
  AdManager_o *v7; // x19

  v2 = this;
  if ( (byte_438DB5B & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    this = (BattlePerformanceContinue_o *)sub_B775C4(&StringLiteral_9917/*"OK"*/);
    byte_438DB5B = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_20;
  statusPerf = perf->fields.statusPerf;
  if ( !statusPerf )
    goto LABEL_20;
  this = (BattlePerformanceContinue_o *)statusPerf->fields.masterPerf;
  if ( !this )
    goto LABEL_20;
  BattlePerformanceMaster__updateCommandSpellIcon((BattlePerformanceMaster_o *)this, 0LL);
  this = (BattlePerformanceContinue_o *)v2->fields.logic;
  if ( !this )
    goto LABEL_20;
  BattleLogic__sendFsmEvent((BattleLogic_o *)this, (System_String_o *)StringLiteral_9917/*"OK"*/, 0LL);
  this = (BattlePerformanceContinue_o *)v2->fields.data;
  if ( !this )
    goto LABEL_20;
  QuestId = BattleData__getQuestId((BattleData_o *)this, 0LL);
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
      this = (BattlePerformanceContinue_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      data = v2->fields.data;
      if ( data )
      {
        v7 = (AdManager_o *)this;
        this = (BattlePerformanceContinue_o *)BattleData__getPhase(data, 0LL);
        if ( v7 )
        {
          AdManager__TrackEvent(v7, 10, 12, QuestId, (int32_t)this, 0LL, 0LL);
          return;
        }
      }
LABEL_20:
      sub_B7769C(this, method);
    }
  }
}


void __fastcall BattlePerformanceContinue__procSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  System_String_o *v7; // x20
  AssetLoader_LoadEndDataHandler_o *v8; // x21
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438DB6C & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_BattlePerformanceContinue_endLoadCommandSPell__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&StringLiteral_4302/*"CommandSpellEffect/ef_commandspell{0:D4}"*/);
    byte_438DB6C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B7769C(0LL, v4);
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0LL);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SpellImageIdBattle, v5);
  v7 = System_String__Format((System_String_o *)StringLiteral_4302/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v6, 0LL);
  v8 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endLoadCommandSPell__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v7, v8, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__procStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_438DB77 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5639/*"END_PROC"*/);
    byte_438DB77 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5639/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__refreshStoneNow(
        BattlePerformanceContinue_o *this,
        UserGameEntity_o *userGame,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1
  UILabel_o *gem_now; // x21
  Il2CppObject *v8; // x0
  UILabel_o *stone_now; // x19
  __int64 v10; // x2
  Il2CppObject *v11; // x0
  int32_t v12; // [xsp+8h] [xbp-28h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438DB55 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_23975/*"{0:#,0}"*/);
    byte_438DB55 = 1;
  }
  if ( !userGame )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    userGame = SelfUserGame;
    if ( !SelfUserGame )
      goto LABEL_8;
  }
  gem_now = this->fields.gem_now;
  stone = userGame->fields.stone;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone, method);
  SelfUserGame = (UserGameEntity_o *)System_String__Format((System_String_o *)StringLiteral_23975/*"{0:#,0}"*/, v8, 0LL);
  if ( !gem_now
    || (UILabel__set_text(gem_now, (System_String_o *)SelfUserGame, 0LL),
        stone_now = this->fields.stone_now,
        v12 = userGame->fields.stone,
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v10),
        SelfUserGame = (UserGameEntity_o *)System_String__Format((System_String_o *)StringLiteral_23975/*"{0:#,0}"*/, v11, 0LL),
        !stone_now) )
  {
LABEL_8:
    sub_B7769C(SelfUserGame, v6);
  }
  UILabel__set_text(stone_now, (System_String_o *)SelfUserGame, 0LL);
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


void __fastcall BattlePerformanceContinue__CoEndContinue_d__132___ctor(
        BattlePerformanceContinue__CoEndContinue_d__132_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattlePerformanceContinue__CoEndContinue_d__132__MoveNext(
        BattlePerformanceContinue__CoEndContinue_d__132_o *this,
        const MethodInfo *method)
{
  BattlePerformanceContinue__CoEndContinue_d__132_o *v2; // x19
  int32_t _1__state; // w8
  float timer_5__2; // s8
  struct BattlePerformanceContinue_o *_4__this; // x8
  struct BattlePerformance_o *perf; // x8
  NGUIFader_o *Component_srcLineSprite; // x19
  int v8; // s0
  bool result; // w0
  float deltaTime; // s0
  Il2CppObject **p__2__current; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  v2 = this;
  if ( (byte_4388DEF & 1) == 0 )
  {
    this = (BattlePerformanceContinue__CoEndContinue_d__132_o *)sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
    byte_4388DEF = 1;
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
      || (perf = _4__this->fields.perf) == 0LL
      || (this = (BattlePerformanceContinue__CoEndContinue_d__132_o *)perf->fields.fadeObject) == 0LL
      || (Component_srcLineSprite = (NGUIFader_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___),
          *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL),
          !Component_srcLineSprite) )
    {
      sub_B7769C(this, method);
    }
    NGUIFader__FadeStart(Component_srcLineSprite, *(UnityEngine_Color_o *)&v8, 0.5, 1, 0LL, 0, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  timer_5__2 = 0.0;
  v2->fields._timer_5__2 = 0.0;
  v2->fields.__1__state = -1;
LABEL_13:
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  v2->fields.__2__current = 0LL;
  p__2__current = &v2->fields.__2__current;
  *((float *)p__2__current + 4) = timer_5__2 + deltaTime;
  sub_B77560((BattleServantConfConponent_o *)p__2__current, 0LL, v15, v16, v17, v18, v19, v20);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall BattlePerformanceContinue__CoEndContinue_d__132__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceContinue__CoEndContinue_d__132_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceContinue__CoEndContinue_d__132__System_Collections_IEnumerator_Reset(
        BattlePerformanceContinue__CoEndContinue_d__132_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattlePerformanceContinue__CoEndContinue_d__132_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceContinue__CoEndContinue_d__132__System_Collections_IEnumerator_get_Current(
        BattlePerformanceContinue__CoEndContinue_d__132_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceContinue__CoEndContinue_d__132__System_IDisposable_Dispose(
        BattlePerformanceContinue__CoEndContinue_d__132_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceContinue___c__DisplayClass141_0___ctor(
        BattlePerformanceContinue___c__DisplayClass141_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceContinue___c__DisplayClass141_0___OpenInterruptionConfirmWindow_b__1(
        BattlePerformanceContinue___c__DisplayClass141_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct BattlePerformanceContinue_o *_4__this; // x8

  if ( (byte_4388DED & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4388DED = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (CommonUI_o *)_4__this->fields.myFsm) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, this->fields.eventName, 0LL);
}


void __fastcall BattlePerformanceContinue___c__DisplayClass144_0___ctor(
        BattlePerformanceContinue___c__DisplayClass144_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceContinue___c__DisplayClass144_0___OpenWaveSelectConfirmDialog_b__1(
        BattlePerformanceContinue___c__DisplayClass144_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  struct BattlePerformanceContinue_o *_4__this; // x9
  __int64 *v6; // x8

  if ( (byte_4388DEE & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_9917/*"OK"*/);
    sub_B775C4(&StringLiteral_9469/*"NG"*/);
    byte_4388DEE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || ((CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0LL),
         _4__this = this->fields.__4__this,
         this->fields.isDecide)
      ? (v6 = &StringLiteral_9917/*"OK"*/)
      : (v6 = &StringLiteral_9469/*"NG"*/),
        !_4__this || (Instance = (CommonUI_o *)_4__this->fields.myFsm) == 0LL) )
  {
    sub_B7769C(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v6, 0LL);
}