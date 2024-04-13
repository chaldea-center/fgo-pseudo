// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue___ctor(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // s3
  float v5; // s4
  float v6; // s5
  float v7; // s6
  int v9; // s0
  int v10; // s1
  int v11; // s2
  float v12; // s4
  float v13; // s5
  float v14; // s6
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UnityEngine_Color_o v23; // [xsp+0h] [xbp-30h] BYREF
  struct UnityEngine_Color_o v24; // [xsp+10h] [xbp-20h] BYREF
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E9EE1 & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9EE1 = 1;
  }
  v9 = 1051766961;
  v24 = (struct UnityEngine_Color_o)0LL;
  v10 = 1051766961;
  v11 = 1051766961;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v24);
  this->fields.spellBtnColor = v24;
  v25.fields.r = 0.38824;
  v23 = (struct UnityEngine_Color_o)0LL;
  v25.fields.g = 0.38824;
  v25.fields.b = 0.38824;
  UnityEngine_Color___ctor_41567816(v25, v12, v13, v14, (const MethodInfo *)&v23);
  this->fields.spellnowColor = v23;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.cancelInterruptionEvent = static_fields->Empty;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cancelInterruptionEvent,
    (System_Int32_array **)Empty,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceContinue__AttachStoneCountRefreshComponent(
        BattlePerformanceContinue_o *this,
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
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v12; // x21

  if ( (byte_42E9EA7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BattlePerformanceContinue__AttachStoneCountRefreshComponent_b__85_0__, v8, v9, v10);
    byte_42E9EA7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__AttachStoneCountRefreshComponent_b__85_0__,
    (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v12, 0, 0LL);
}


void __fastcall BattlePerformanceContinue__CallbackConfirmDialog(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_42E9E9A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_4634/*"DEADLINE"*/, v5, v6, v7);
    byte_42E9E9A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL),
        BattlePerformanceContinue__closeContinueItem(this, v10),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(Instance, v9);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_4634/*"DEADLINE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__CheckContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  BattleData_o *data; // x0
  __int64 *v10; // x8

  if ( (byte_42E9EA5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9842/*"OK"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9396/*"NG"*/, v5, v6, v7);
    byte_42E9EA5 = 1;
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
      v10 = &StringLiteral_9396/*"NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B5D69C(data, v8);
  }
  data = (BattleData_o *)this->fields.myFsm;
  this->fields.IsContinueItem = 1;
  if ( !data )
    goto LABEL_10;
  v10 = &StringLiteral_9842/*"OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)*v10, 0LL);
}


void __fastcall BattlePerformanceContinue__CheckDefenceTargetBroken(
        BattlePerformanceContinue_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleData_o *data; // x0
  struct BattlePerformance_o *perf; // x8
  NGUIFader_o *Component_srcLineSprite; // x20
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  NGUIFader_OnFinished_o *v21; // x21
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E9ED1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue__CheckDefenceTargetBroken_b__129_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___, v5, v6, v7);
    sub_B5D5C4(&NGUIFader_OnFinished_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_5704/*"EVENT_FALSE"*/, v11, v12, v13);
    byte_42E9ED1 = 1;
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
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
        white = UnityEngine_Color__get_white(0LL);
        r = white.fields.r;
        g = white.fields.g;
        b = white.fields.b;
        a = white.fields.a;
        v21 = (NGUIFader_OnFinished_o *)sub_B5D694(NGUIFader_OnFinished_TypeInfo);
        NGUIFader_OnFinished___ctor(
          v21,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue__CheckDefenceTargetBroken_b__129_0__,
          0LL);
        if ( Component_srcLineSprite )
        {
          v23.fields.r = r;
          v23.fields.g = g;
          v23.fields.b = b;
          v23.fields.a = a;
          NGUIFader__FadeStart(Component_srcLineSprite, v23, 0.5, 0, v21, 0, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_B5D69C(data, method);
  }
  data = (BattleData_o *)this->fields.myFsm;
  this->fields._isDefenceTargetBroken_k__BackingField = 0;
  if ( !data )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_5704/*"EVENT_FALSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__CloseGiveUp(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *giveUpWindow; // x0

  if ( (byte_42E9EA0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9393/*"NEXT"*/, (_DWORD)method, v2, v3);
    byte_42E9EA0 = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow
    || (UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0LL),
        (giveUpWindow = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(giveUpWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)giveUpWindow, (System_String_o *)StringLiteral_9393/*"NEXT"*/, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceContinue__CoEndContinue(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9ED3 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceContinue__CoEndContinue_d__132_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9ED3 = 1;
  }
  v5 = sub_B5D694(BattlePerformanceContinue__CoEndContinue_d__132_TypeInfo);
  BattlePerformanceContinue__CoEndContinue_d__132___ctor(
    (BattlePerformanceContinue__CoEndContinue_d__132_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattlePerformanceContinue__EndContinue(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0

  if ( this->fields._isDefenceTargetBroken_k__BackingField )
  {
    v3 = BattlePerformanceContinue__CoEndContinue(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  UnityEngine_Component_o *window; // x0
  UnityEngine_Transform_o *transform; // x20
  int v39; // s0
  UILabel_o *checkGiveUpLabel; // x20
  UILabel_o *checkUseCommandSpell; // x20
  UILabel_o *checkUseGem; // x20
  UILabel_o *checkUseBuyGem; // x20

  if ( (byte_42E9E9B & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)inperf, (_DWORD)indata, inlogic);
    sub_B5D5C4(&StringLiteral_2444/*"BATTLE_CONTINUE_NO_STONE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_2433/*"BATTLE_CONTINUE_CHECK_SPELL"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_2434/*"BATTLE_CONTINUE_CHECK_STONE"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_2551/*"BATTLE_RETIRE_CHECKSTR"*/, v21, v22, v23);
    byte_42E9E9B = 1;
  }
  this->fields.perf = inperf;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    (System_String_array **)indata,
    (System_String_array **)inlogic,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)indata,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.logic = inlogic;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.logic,
    (System_Int32_array **)inlogic,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  window = (UnityEngine_Component_o *)this->fields.window;
  if ( !window )
    goto LABEL_25;
  transform = UnityEngine_Component__get_transform(window, 0LL);
  *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v39, 0LL);
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
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2551/*"BATTLE_RETIRE_CHECKSTR"*/, 0LL);
  if ( !checkGiveUpLabel )
    goto LABEL_25;
  UILabel__set_text(checkGiveUpLabel, (System_String_o *)window, 0LL);
  checkUseCommandSpell = this->fields.checkUseCommandSpell;
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2433/*"BATTLE_CONTINUE_CHECK_SPELL"*/, 0LL);
  if ( !checkUseCommandSpell )
    goto LABEL_25;
  UILabel__set_text(checkUseCommandSpell, (System_String_o *)window, 0LL);
  checkUseGem = this->fields.checkUseGem;
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2434/*"BATTLE_CONTINUE_CHECK_STONE"*/, 0LL);
  if ( !checkUseGem
    || (UILabel__set_text(checkUseGem, (System_String_o *)window, 0LL),
        checkUseBuyGem = this->fields.checkUseBuyGem,
        window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2444/*"BATTLE_CONTINUE_NO_STONE"*/, 0LL),
        !checkUseBuyGem)
    || (UILabel__set_text(checkUseBuyGem, (System_String_o *)window, 0LL),
        (window = (UnityEngine_Component_o *)this->fields.continueWaveRestartWindow) == 0LL)
    || ((*(void (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&window->klass[1]._1.this_arg.bits)(
          window,
          window->klass[1]._1.element_class),
        (window = (UnityEngine_Component_o *)this->fields.continueWaveRestartWindow) == 0LL) )
  {
LABEL_25:
    sub_B5D69C(window, v36);
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
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  _QWORD *monitor; // x8
  __int64 v27; // x8
  Il2CppObject *v28; // x20
  Il2CppObject *v29; // x0
  System_String_o *v30; // x21
  System_String_o *v31; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v33; // x22
  int v34; // [xsp+3Ch] [xbp-24h] BYREF

  v4 = (Il2CppObject *)this;
  if ( (byte_42E9ED2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattlePerformanceContinue__OpenBrokenMessage_b__130_0__, v5, v6, v7);
    sub_B5D5C4(&int_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_23955/*"{0}_{1}"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_2455/*"BATTLE_DIALOG_DEFENCE_TARGET_BROKEN"*/, v20, v21, v22);
    this = (BattlePerformanceContinue_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    byte_42E9ED2 = 1;
  }
  monitor = v4[2].monitor;
  if ( !monitor )
    goto LABEL_18;
  v27 = monitor[100];
  if ( !v27 )
    goto LABEL_18;
  v28 = (Il2CppObject *)StringLiteral_2455/*"BATTLE_DIALOG_DEFENCE_TARGET_BROKEN"*/;
  v34 = *(_DWORD *)(v27 + 32);
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
  v30 = System_String__Format_44573324((System_String_o *)StringLiteral_23955/*"{0}_{1}"*/, v28, v29, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( LocalizationManager__ContainsKey(v30, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = (Il2CppObject *)v30;
  }
  else if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
         && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v31 = LocalizationManager__Get((System_String_o *)v28, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v33, v4, Method_BattlePerformanceContinue__OpenBrokenMessage_b__130_0__, 0LL);
  if ( !Instance )
LABEL_18:
    sub_B5D69C(this, method);
  CommonUI__OpenNotificationDialog(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v31,
    v33,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleWindowInterruptionComponent_o *continueInterruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E9EDA & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue__OpenContinueInterruption_b__139_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E9EDA = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v9 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueInterruption_b__139_0__,
    0LL);
  if ( !continueInterruptionWindow )
    sub_B5D69C(v10, v11);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueInterruptionWindow->klass->vtable._10_Open.method)(
    continueInterruptionWindow,
    v9,
    continueInterruptionWindow->klass->vtable._11_CompOpen.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__OpenContinueItemWindow(
        BattlePerformanceContinue_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  void *ContinueItemWindow; // x0
  _DWORD *v63; // x20
  UILabel_o *ContinueCommandSpellNum; // x21
  System_String_o *v65; // x1
  UILabel_o *ContinueStoneNum; // x21
  Il2CppObject *v67; // x0
  UILabel_o *ContinueItemNumLabel; // x21
  Il2CppObject *v69; // x0
  UISprite_o *ContinueItemSpr; // x21
  int32_t ContinueItemImageId; // w22
  int v72; // w21
  bool v73; // cc
  UIWidget_o *v74; // x21
  int v75; // s0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  __int64 *v85; // x8
  System_Int32_array **v86; // x1
  UILabel_o *ContinueItemBtnLabel; // x21
  UILabel_o *deadLine; // x21
  System_String_o *v89; // x22
  int64_t ContinueDeadLine; // x0
  Il2CppObject *RestTime; // x0
  int v92; // w21
  UIWidget_o *v93; // x21
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  __int64 *v100; // x8
  int v101; // s0
  System_Int32_array **v105; // x1
  UILabel_o *ContinueCommandSpellBtnLabel; // x21
  int v107; // w9
  UILabel_o *ContinueStoneBtnLabel; // x20
  __int64 *v109; // x8
  const MethodInfo *v110; // x1
  UILabel_o *ContinueRetireBtnLabel; // x20
  const MethodInfo *v112; // x4
  System_String_o **v113; // x8
  struct BattleData_o *data; // x8
  struct BattleData_o *v115; // x8
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **v122; // x1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v124; // x21
  int32_t ContinueItemNum; // [xsp+4h] [xbp-3Ch] BYREF
  int v126; // [xsp+8h] [xbp-38h] BYREF
  unsigned int OverwriteCommandSpellContinue; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E9EA6 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattlePerformanceContinue_endOpenContinueItem__, v5, v6, v7);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v14, v15, v16);
    sub_B5D5C4(&int_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_9842/*"OK"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_2432/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_2439/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_2431/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_2449/*"BATTLE_CONTINUE_USE_SPELL"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_9843/*"OK_CONTINUE_ITEM"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_2436/*"BATTLE_CONTINUE_ITEM_BTN"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_2440/*"BATTLE_CONTINUE_ITEM_SELECT"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_2441/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_1/*""*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_2445/*"BATTLE_CONTINUE_RETIRE"*/, v59, v60, v61);
    byte_42E9EA6 = 1;
  }
  OverwriteCommandSpellContinue = 0;
  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ContinueItemWindow, 1, 0LL);
  ContinueItemWindow = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_82;
  v63 = ContinueItemWindow;
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
  v65 = (System_String_o *)(ContinueItemWindow ? ContinueItemWindow : StringLiteral_1/*""*/);
  UILabel__set_text(ContinueCommandSpellNum, v65, 0LL);
  if ( !v63 )
    goto LABEL_82;
  ContinueStoneNum = this->fields.ContinueStoneNum;
  v126 = v63[42];
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v126);
  ContinueItemWindow = System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v67, 0LL);
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
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ContinueItemNum);
  ContinueItemWindow = System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v69, 0LL);
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
  v72 = (int)ContinueItemWindow;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         this->fields.ContinueItemBtn,
                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v73 = v72 < 1;
  v74 = (UIWidget_o *)ContinueItemWindow;
  if ( v73 )
  {
    if ( !ContinueItemWindow )
      goto LABEL_82;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0LL);
    ContinueItemWindow = this->fields.ContinueItemBtn;
    if ( !ContinueItemWindow )
      goto LABEL_82;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_82;
    v85 = &StringLiteral_5573/*"END_PROC"*/;
  }
  else
  {
    *(UnityEngine_Color_o *)&v75 = UnityEngine_Color__get_white(0LL);
    if ( !v74 )
      goto LABEL_82;
    UIWidget__set_color(v74, *(UnityEngine_Color_o *)&v75, 0LL);
    ContinueItemWindow = this->fields.ContinueItemBtn;
    if ( !ContinueItemWindow )
      goto LABEL_82;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_82;
    v85 = &StringLiteral_9843/*"OK_CONTINUE_ITEM"*/;
  }
  v86 = (System_Int32_array **)*v85;
  *((_QWORD *)ContinueItemWindow + 4) = *v85;
  sub_B5D560((BattleServantConfConponent_o *)((char *)ContinueItemWindow + 32), v86, v79, v80, v81, v82, v83, v84);
  ContinueItemBtnLabel = this->fields.ContinueItemBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2436/*"BATTLE_CONTINUE_ITEM_BTN"*/, 0LL);
  if ( !ContinueItemBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueItemBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  deadLine = this->fields.deadLine;
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2439/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, 0LL);
  if ( !this->fields.data )
    goto LABEL_82;
  v89 = (System_String_o *)ContinueItemWindow;
  ContinueDeadLine = BattleData__GetContinueDeadLine(this->fields.data, 0LL);
  RestTime = (Il2CppObject *)LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
  ContinueItemWindow = System_String__Format(v89, RestTime, 0LL);
  if ( !deadLine )
    goto LABEL_82;
  UILabel__set_text(deadLine, (System_String_o *)ContinueItemWindow, 0LL);
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  v92 = OverwriteCommandSpellContinue;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v73 = v92 < 3;
  v93 = (UIWidget_o *)ContinueItemWindow;
  if ( v73 )
  {
    if ( !ContinueItemWindow )
      goto LABEL_82;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0LL);
    ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
    if ( !ContinueItemWindow )
      goto LABEL_82;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_82;
    v100 = &StringLiteral_5573/*"END_PROC"*/;
  }
  else
  {
    *(UnityEngine_Color_o *)&v101 = UnityEngine_Color__get_white(0LL);
    if ( !v93 )
      goto LABEL_82;
    UIWidget__set_color(v93, *(UnityEngine_Color_o *)&v101, 0LL);
    ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
    if ( !ContinueItemWindow )
      goto LABEL_82;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_82;
    v100 = &StringLiteral_9842/*"OK"*/;
  }
  v105 = (System_Int32_array **)*v100;
  *((_QWORD *)ContinueItemWindow + 4) = *v100;
  sub_B5D560((BattleServantConfConponent_o *)((char *)ContinueItemWindow + 32), v105, v94, v95, v96, v97, v98, v99);
  ContinueCommandSpellBtnLabel = this->fields.ContinueCommandSpellBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2449/*"BATTLE_CONTINUE_USE_SPELL"*/, 0LL);
  if ( !ContinueCommandSpellBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueCommandSpellBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  v107 = v63[42];
  ContinueStoneBtnLabel = this->fields.ContinueStoneBtnLabel;
  if ( v107 < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v109 = &StringLiteral_2431/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v109 = &StringLiteral_2432/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/;
  }
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)*v109, 0LL);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueStoneBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, v110);
  ContinueRetireBtnLabel = this->fields.ContinueRetireBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2445/*"BATTLE_CONTINUE_RETIRE"*/, 0LL);
  if ( !ContinueRetireBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueRetireBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  v113 = (System_String_o **)((int)OverwriteCommandSpellContinue >= 3 ? &StringLiteral_2440/*"BATTLE_CONTINUE_ITEM_SELECT"*/ : &StringLiteral_2441/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/);
  BattlePerformanceContinue__SetContinueMessage(this, this->fields.ContinueLabel, *v113, 0x80000000, v112);
  data = this->fields.data;
  if ( !data )
    goto LABEL_82;
  ContinueItemWindow = data->fields.quest_ent;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  ContinueItemWindow = (void *)QuestEntity__HasFlag((QuestEntity_o *)ContinueItemWindow, 0x400000000LL, 0LL);
  if ( ((unsigned __int8)ContinueItemWindow & 1) != 0 )
    goto LABEL_74;
  v115 = this->fields.data;
  if ( !v115 || (ContinueItemWindow = v115->fields.quest_ent) == 0LL )
LABEL_82:
    sub_B5D69C(ContinueItemWindow, method);
  if ( !QuestEntity__HasFlag((QuestEntity_o *)ContinueItemWindow, 0x100000000LL, 0LL) )
    goto LABEL_80;
LABEL_74:
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !ContinueItemWindow )
    goto LABEL_82;
  UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0LL);
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
  if ( !ContinueItemWindow )
    goto LABEL_82;
  v122 = (System_Int32_array **)StringLiteral_5573/*"END_PROC"*/;
  *((_QWORD *)ContinueItemWindow + 4) = StringLiteral_5573/*"END_PROC"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)((char *)ContinueItemWindow + 32),
    v122,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  ContinueItemWindow = this->fields.ContinueCommandSpellNum;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellnowColor, 0LL);
LABEL_80:
  window = this->fields.window;
  v124 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v124,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endOpenContinueItem__,
    0LL);
  if ( !window )
    goto LABEL_82;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v124,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__OpenContinueWaveRestart(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E9ED6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue__OpenContinueWaveRestart_b__135_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E9ED6 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v9 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueWaveRestart_b__135_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_B5D69C(v10, v11);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueWaveRestartWindow->klass->vtable._10_Open.method)(
    continueWaveRestartWindow,
    v9,
    continueWaveRestartWindow->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__OpenContinueWaveSelectWindow(
        BattlePerformanceContinue_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  UnityEngine_Object_o *waveSelectDialog; // x20
  __int64 v45; // x1
  UnityEngine_GameObject_o *waveSelectDialogPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  int64_t Object; // x0
  struct WaveBattleSelectWaveDialog_o *Component_srcLineSprite; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  int32_t v56; // w20
  int32_t Phase; // w21
  int32_t EventId; // w24
  UserEventDeckMaster_o *Master_WarQuestSelectionMaster; // x22
  UserEventDeckEntity_o *v60; // x22
  QuestRestrictionInfo_o *v61; // x23
  int32_t v62; // w20
  int32_t DispWaveCount; // w0
  WaveBattleSelectWaveDialog_o *v64; // x21
  int32_t v65; // w24
  WaveBattleSelectWaveDialog_CloseDelegate_o *v66; // x25
  WaveBattleSelectWaveDialog_o *v67; // x20
  System_Action_int__o *v68; // x21
  struct BattleData_o *data; // x8
  WaveBattleSelectWaveDialog_o *v70; // x20
  System_Action_o *v71; // x21
  __int64 v72; // x0

  if ( (byte_42E9EDE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Action_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_0__, v11, v12, v13);
    sub_B5D5C4(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__, v14, v15, v16);
    sub_B5D5C4(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_2__, v17, v18, v19);
    sub_B5D5C4(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestGroupMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventDeckMaster___, v26, v27, v28);
    sub_B5D5C4(&DataManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___, v32, v33, v34);
    sub_B5D5C4(&NetworkManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&QuestRestrictionInfo_TypeInfo, v41, v42, v43);
    byte_42E9EDE = 1;
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
                                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    this->fields.waveSelectDialog = Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.waveSelectDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_29;
  Object = BattleData__getQuestId((BattleData_o *)Object, 0LL);
  if ( !this->fields.data )
    goto LABEL_29;
  v56 = Object;
  Phase = BattleData__getPhase(this->fields.data, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Object = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Object )
    goto LABEL_29;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Object, v56, 0LL);
  Master_WarQuestSelectionMaster = (UserEventDeckMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Object = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  Object = (int64_t)UserEventDeckMaster__getDeckList(Master_WarQuestSelectionMaster, Object, EventId, v56, Phase, 0LL);
  if ( !Object )
    goto LABEL_29;
  if ( !*(_DWORD *)(Object + 24) )
  {
    v72 = sub_B5D6C8(Object);
    sub_B5D668(v72, 0LL);
  }
  v60 = *(UserEventDeckEntity_o **)(Object + 32);
  v61 = (QuestRestrictionInfo_o *)sub_B5D694(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_34244212(v61, EventId, v56, Phase, 0LL);
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_29;
  Object = BattleData__GetMaxWaveCount((BattleData_o *)Object, 0LL);
  if ( !this->fields.data )
    goto LABEL_29;
  v62 = Object;
  DispWaveCount = BattleData__getDispWaveCount(this->fields.data, 0LL);
  v64 = this->fields.waveSelectDialog;
  v65 = DispWaveCount;
  v66 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_B5D694(WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
  WaveBattleSelectWaveDialog_CloseDelegate___ctor(
    v66,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_0__,
    0LL);
  if ( !v64 )
    goto LABEL_29;
  WaveBattleSelectWaveDialog__SetDialog(v64, v60, v61, v62, v65, 1, v66, 0LL);
  v67 = this->fields.waveSelectDialog;
  v68 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v68,
    (Il2CppObject *)this,
    (intptr_t)Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__,
    (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
  if ( !v67
    || (WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(v67, v68, 0LL), (data = this->fields.data) == 0LL)
    || (Object = (int64_t)this->fields.waveSelectDialog) == 0
    || (WaveBattleSelectWaveDialog__SetWaveInfoMaskActive(
          (WaveBattleSelectWaveDialog_o *)Object,
          data->fields.wavecount,
          0LL),
        v70 = this->fields.waveSelectDialog,
        v71 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v71,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_2__,
          0LL),
        !v70) )
  {
LABEL_29:
    sub_B5D69C(Object, v45);
  }
  WaveBattleSelectWaveDialog__Open_22707384(v70, v71, 0LL);
}


void __fastcall BattlePerformanceContinue__OpenGiveUp(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UnityEngine_GameObject_o *giveUpWindow; // x0
  struct BattleData_o *data; // x8
  struct BattleEntity_o *battle_ent; // x8
  QuestEntity_o *v32; // x20
  UILabel_o *giveUpContinueItemNum; // x20
  Il2CppObject *v34; // x0
  UISprite_o *giveUpContinueItemSpr; // x20
  int32_t ContinueItemImageId; // w21
  UILabel_o *checkGiveUpLabel; // x20
  LocalizationManager_c *v38; // x0
  bool HasFlag; // w0
  __int64 *v40; // x8
  int32_t ContinueItemNum; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9E9F & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_2551/*"BATTLE_RETIRE_CHECKSTR"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_2552/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/, v26, v27, v28);
    byte_42E9E9F = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0LL);
  if ( !giveUpWindow )
    goto LABEL_61;
  v42.fields.y = 72.0;
  v42.fields.x = 0.0;
  v42.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v42, 0LL);
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
  v43.fields.y = 77.0;
  v43.fields.x = 0.0;
  v43.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v43, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)giveUpWindow,
                                               0LL);
  if ( !giveUpWindow )
    goto LABEL_61;
  v44.fields.y = 6.0;
  v44.fields.x = 0.0;
  v44.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v44, 0LL);
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
  v45.fields.z = 0.0;
  v45.fields.x = 193.0;
  v45.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v45, 0LL);
  giveUpWindow = this->fields.giveUpCancelBtn;
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0LL);
  if ( !giveUpWindow )
    goto LABEL_61;
  v46.fields.z = 0.0;
  v46.fields.y = -72.0;
  v46.fields.x = -193.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v46, 0LL);
  giveUpWindow = this->fields.giveUpContinueItemRoot;
  if ( !giveUpWindow )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)giveUpWindow,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  data = this->fields.data;
  if ( !data )
    goto LABEL_61;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent || !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)giveUpWindow,
                                               battle_ent->fields.questId,
                                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v32 = (QuestEntity_o *)giveUpWindow;
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
          v47.fields.y = 66.0;
          v47.fields.x = 0.0;
          v47.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v47, 0LL);
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
                v48.fields.y = 97.0;
                v48.fields.x = 0.0;
                v48.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v48, 0LL);
                giveUpWindow = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
                if ( giveUpWindow )
                {
                  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)giveUpWindow,
                                                               0LL);
                  if ( giveUpWindow )
                  {
                    v49.fields.y = 26.0;
                    v49.fields.x = 0.0;
                    v49.fields.z = 0.0;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v49, 0LL);
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
                            v50.fields.z = 0.0;
                            v50.fields.x = 193.0;
                            v50.fields.y = -92.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v50, 0LL);
                            giveUpWindow = this->fields.giveUpCancelBtn;
                            if ( giveUpWindow )
                            {
                              giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                           giveUpWindow,
                                                                           0LL);
                              if ( giveUpWindow )
                              {
                                v51.fields.z = 0.0;
                                v51.fields.x = -193.0;
                                v51.fields.y = -92.0;
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)giveUpWindow,
                                  v51,
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
                                    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ContinueItemNum);
                                    giveUpWindow = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                 (System_String_o *)StringLiteral_23800/*"{0:#,0}"*/,
                                                                                 v34,
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
                                        v38 = LocalizationManager_TypeInfo;
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
      sub_B5D69C(giveUpWindow, method);
    }
  }
  if ( !v32 )
    goto LABEL_61;
  HasFlag = QuestEntity__HasFlag(v32, 0x40000000LL, 0LL);
  checkGiveUpLabel = this->fields.checkGiveUpLabel;
  if ( !HasFlag )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
      || LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_57;
    }
    v38 = LocalizationManager_TypeInfo;
LABEL_56:
    j_il2cpp_runtime_class_init_0(v38);
LABEL_57:
    v40 = &StringLiteral_2551/*"BATTLE_RETIRE_CHECKSTR"*/;
    goto LABEL_58;
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v40 = &StringLiteral_2552/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/;
LABEL_58:
  giveUpWindow = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v40, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  CommonUI_o *Instance; // x0
  __int64 v27; // x1
  CommonUI_o *v28; // x20
  System_String_o *v29; // x21
  System_String_o *v30; // x22
  System_String_o *v31; // x23
  System_String_o *v32; // x24
  CommonConfirmDialog_ClickDelegate_o *v33; // x25

  if ( (byte_42E9EDC & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue__OpenInterruptionConfirmWindow_b__141_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2492/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_2490/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_2489/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, v23, v24, v25);
    byte_42E9EDC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0, 0LL);
  v28 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_2490/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, 0LL);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_2489/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, 0LL);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_2492/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0LL);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v33 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v33,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenInterruptionConfirmWindow_b__141_0__,
    0LL);
  if ( !v28 )
LABEL_9:
    sub_B5D69C(Instance, v27);
  CommonUI__OpenConfirmDecideDialog(v28, v29, v30, v31, v32, v33, 23, 280, 13.0, 22, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__OpenWaveSelectConfirmDialog(
        BattlePerformanceContinue_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  CommonUI_o *Instance; // x0
  __int64 v30; // x1
  struct BattleData_o *data; // x8
  System_String_o *v32; // x20
  Il2CppObject *v33; // x0
  System_String_o *v34; // x20
  struct BattleData_o *v35; // x8
  System_String_o *v36; // x21
  Il2CppObject *v37; // x22
  Il2CppObject *v38; // x0
  System_String_o *v39; // x21
  CommonUI_o *v40; // x22
  System_String_o *v41; // x23
  System_String_o *v42; // x24
  CommonConfirmDialog_ClickDelegate_o *v43; // x25
  int32_t DispWaveCount; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_42E9EDF & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue__OpenWaveSelectConfirmDialog_b__144_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2498/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_2497/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_2496/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_2499/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_982/*"00"*/, v26, v27, v28);
    byte_42E9EDF = 1;
  }
  DispWaveCount = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (CommonUI_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2497/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  v32 = (System_String_o *)Instance;
  v33 = (Il2CppObject *)System_Int32__ToString_39741776((int)data + 1008, (System_String_o *)StringLiteral_982/*"00"*/, 0LL);
  v34 = System_String__Format(v32, v33, 0LL);
  Instance = (CommonUI_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2498/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0LL);
  v35 = this->fields.data;
  if ( !v35 )
    goto LABEL_12;
  v36 = (System_String_o *)Instance;
  Instance = (CommonUI_o *)System_Int32__ToString_39741776((int)v35 + 1008, (System_String_o *)StringLiteral_982/*"00"*/, 0LL);
  if ( !this->fields.data )
    goto LABEL_12;
  v37 = (Il2CppObject *)Instance;
  DispWaveCount = BattleData__getDispWaveCount(this->fields.data, 0LL);
  v38 = (Il2CppObject *)System_Int32__ToString_39741776(
                          (int32_t)&DispWaveCount,
                          (System_String_o *)StringLiteral_982/*"00"*/,
                          0LL);
  v39 = System_String__Format_44573324(v36, v37, v38, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0, 0LL),
        v40 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_2499/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, 0LL),
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_2496/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, 0LL),
        v43 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo),
        CommonConfirmDialog_ClickDelegate___ctor(
          v43,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue__OpenWaveSelectConfirmDialog_b__144_0__,
          0LL),
        !v40) )
  {
LABEL_12:
    sub_B5D69C(Instance, v30);
  }
  CommonUI__OpenConfirmDecideDialog(v40, v41, v39, v34, v42, v43, 26, 280, 13.0, 22, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__ProcInterruption(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleWindowInterruptionComponent_o *continueInterruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E9EDD & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue__ProcInterruption_b__142_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E9EDD = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v9 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__ProcInterruption_b__142_0__,
    0LL);
  if ( !continueInterruptionWindow )
    sub_B5D69C(v10, v11);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueInterruptionWindow->klass->vtable._12_Close.method)(
    continueInterruptionWindow,
    v9,
    continueInterruptionWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__ProcSelectWaveRestart(
        BattlePerformanceContinue_o *this,
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
  UnityEngine_Object_o *waveSelectDialog; // x20
  __int64 v12; // x1
  WaveBattleSelectWaveDialog_o *v13; // x0
  UnityEngine_Object_o *continueInterruptionWindow; // x20
  struct BattleWindowInterruptionComponent_o *v15; // x20
  BattleWindowComponent_EndCall_o *v16; // x21

  if ( (byte_42E9EE0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue__ProcSelectWaveRestart_b__145_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E9EE0 = 1;
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0LL, 0LL) )
  {
    v13 = this->fields.waveSelectDialog;
    if ( !v13 )
      goto LABEL_16;
    WaveBattleSelectWaveDialog__Close(v13, 0LL);
  }
  continueInterruptionWindow = (UnityEngine_Object_o *)this->fields.continueInterruptionWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(continueInterruptionWindow, 0LL, 0LL) )
  {
    v15 = this->fields.continueInterruptionWindow;
    v16 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v16,
      (Il2CppObject *)this,
      Method_BattlePerformanceContinue__ProcSelectWaveRestart_b__145_0__,
      0LL);
    if ( v15 )
    {
      ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v15->klass->vtable._12_Close.method)(
        v15,
        v16,
        v15->klass->vtable._13_CompClose.methodPtr);
      return;
    }
LABEL_16:
    sub_B5D69C(v13, v12);
  }
}


void __fastcall BattlePerformanceContinue__ProcWaveRestartFromInterruption(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleWindowInterruptionComponent_o *continueInterruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E9EDB & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue__ProcWaveRestartFromInterruption_b__140_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E9EDB = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v9 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__ProcWaveRestartFromInterruption_b__140_0__,
    0LL);
  if ( !continueInterruptionWindow )
    sub_B5D69C(v10, v11);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueInterruptionWindow->klass->vtable._12_Close.method)(
    continueInterruptionWindow,
    v9,
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
    sub_B5D69C(ContinueItemWindow, method);
  }
  BattleData__UpdateContinueItemInfo((BattleData_o *)ContinueItemWindow, 0LL);
  *(_WORD *)&this->fields.IsContinueItem = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__SetContinueMessage(
        BattlePerformanceContinue_o *this,
        UILabel_o *label,
        System_String_o *localizationKey,
        int32_t stoneCount,
        const MethodInfo *method)
{
  int32_t v5; // w21
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
  void *SelfUserGame; // x0
  __int64 v22; // x1
  System_String_o *mText; // x21
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  struct BattleData_o *data; // x8
  struct BattleDefenceTargetData_o *defenceTargetData; // x8
  Il2CppObject *v28; // x20
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x21
  System_String_o *v32; // x22
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  int32_t uiId; // [xsp+Ch] [xbp-24h] BYREF

  v5 = stoneCount;
  if ( (byte_42E9ED4 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)label, (_DWORD)localizationKey, *(_QWORD *)&stoneCount);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_2435/*"BATTLE_CONTINUE_DEFENCE_TARGET_HEAL"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_23955/*"{0}_{1}"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_2443/*"BATTLE_CONTINUE_NOT_ENOUGH_STONE"*/, v18, v19, v20);
    byte_42E9ED4 = 1;
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
  if ( v5 == 0x80000000 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_32;
    v5 = *((_DWORD *)SelfUserGame + 42);
  }
  if ( v5 <= 0 )
  {
    mText = label->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2443/*"BATTLE_CONTINUE_NOT_ENOUGH_STONE"*/, 0LL);
    v25 = System_String__Concat_44577788(mText, v24, 0LL);
    UILabel__set_text(label, v25, 0LL);
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
    sub_B5D69C(SelfUserGame, v22);
  v28 = (Il2CppObject *)StringLiteral_2435/*"BATTLE_CONTINUE_DEFENCE_TARGET_HEAL"*/;
  uiId = defenceTargetData->fields.uiId;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &uiId);
  v30 = System_String__Format_44573324((System_String_o *)StringLiteral_23955/*"{0}_{1}"*/, v28, v29, 0LL);
  v31 = label->fields.mText;
  v32 = v30;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( LocalizationManager__ContainsKey(v32, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = (Il2CppObject *)v32;
  }
  else if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
         && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v33 = LocalizationManager__Get((System_String_o *)v28, 0LL);
  v34 = System_String__Concat_44577788(v31, v33, 0LL);
  UILabel__set_text(label, v34, 0LL);
}


void __fastcall BattlePerformanceContinue__SkipCommandSpellRequest(
        BattlePerformanceContinue_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  void *Instance; // x0
  __int64 v21; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_42E9ED0 & 1) == 0 )
  {
    sub_B5D5C4(&BattleData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandSpellMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_3420/*"CONNECT_OK"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_6923/*"GAME_OVER_COMMAND_SPELL_ID"*/, v17, v18, v19);
    byte_42E9ED0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  Instance = (void *)ConstantMaster__getValue((System_String_o *)StringLiteral_6923/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)Instance,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
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
    sub_B5D69C(Instance, v21);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3420/*"CONNECT_OK"*/, 0LL);
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
    sub_B5D69C(0LL, v4);
  BattlePerformance__SetTimeScale(perf, 1.0, 0LL);
}


void __fastcall BattlePerformanceContinue__StartContinueImpl(
        BattlePerformanceContinue_o *this,
        bool inIsProgress,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleViewItemlistComponent_o *SelfUserGame; // x0
  __int64 v18; // x1
  BattleViewItemlistComponent_o *itemWindow; // x21
  UserGameEntity_o *v20; // x20
  BattleDropItem_array *DropItems; // x22
  BattleDropItemComponent_ClickDelegate_o *v22; // x23
  UILabel_o *commandspell_now; // x21
  System_String_o *v24; // x1
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1
  unsigned int OverwriteCommandSpellContinue; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E9E9E & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue_showConf__, inIsProgress, (_DWORD)method, v3);
    sub_B5D5C4(&BattleDropItemComponent_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12489/*"START_CONTINUE"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42E9E9E = 1;
  }
  OverwriteCommandSpellContinue = 0;
  SelfUserGame = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_21;
  itemWindow = this->fields.itemWindow;
  v20 = (UserGameEntity_o *)SelfUserGame;
  DropItems = BattleData__getDropItems(this->fields.data, 0LL);
  v22 = (BattleDropItemComponent_ClickDelegate_o *)sub_B5D694(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(
    v22,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_showConf__,
    0LL);
  if ( !itemWindow )
    goto LABEL_21;
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, DropItems, v22, this->fields.itemColumnCount, 0LL);
  SelfUserGame = this->fields.itemWindow;
  if ( !SelfUserGame )
    goto LABEL_21;
  BattleViewItemlistComponent__setHide(SelfUserGame, 0LL);
  SelfUserGame = (BattleViewItemlistComponent_o *)this->fields.data;
  if ( !SelfUserGame )
    goto LABEL_21;
  OverwriteCommandSpellContinue = BattleData__CheckCurrentTemporaryCommandSpell((BattleData_o *)SelfUserGame, v20, 0LL);
  v18 = OverwriteCommandSpellContinue;
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
  v24 = SelfUserGame ? (System_String_o *)SelfUserGame : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(commandspell_now, v24, 0LL);
  BattlePerformanceContinue__refreshStoneNow(this, v20, v25);
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
  BattlePerformanceContinue__ResetContinueItemInfo(this, v26);
  SelfUserGame = (BattleViewItemlistComponent_o *)this->fields.myFsm;
  if ( !SelfUserGame )
LABEL_21:
    sub_B5D69C(SelfUserGame, v18);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_12489/*"START_CONTINUE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__StartContinueInterruption(
        BattlePerformanceContinue_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *continueInterruptionWindow; // x21
  struct BattleWindowInterruptionComponent_o **p_continueInterruptionWindow; // x20
  __int64 v25; // x1
  UnityEngine_GameObject_o *continueInterruptionWindowPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  BattleWindowInterruptionComponent_o *v36; // x20
  System_Action_o *v37; // x21
  System_Action_o *v38; // x22
  System_Action_o *v39; // x23

  if ( (byte_42E9ED9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattlePerformanceContinue__StartContinueInterruption_b__138_0__, v5, v6, v7);
    sub_B5D5C4(&Method_BattlePerformanceContinue__StartContinueInterruption_b__138_1__, v8, v9, v10);
    sub_B5D5C4(&Method_BattlePerformanceContinue__StartContinueInterruption_b__138_2__, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_12490/*"START_CONTINUE_INTERRUPTION"*/, v20, v21, v22);
    byte_42E9ED9 = 1;
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
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
    *p_continueInterruptionWindow = (struct BattleWindowInterruptionComponent_o *)Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.continueInterruptionWindow,
      Component_srcLineSprite,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  Object = (UnityEngine_GameObject_o *)*p_continueInterruptionWindow;
  if ( !*p_continueInterruptionWindow )
    goto LABEL_14;
  Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0LL);
  if ( !Object )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(Object, 0, 0LL);
  v36 = this->fields.continueInterruptionWindow;
  v37 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__138_0__,
    0LL);
  v38 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__138_1__,
    0LL);
  v39 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__138_2__,
    0LL);
  if ( !v36
    || (BattleWindowInterruptionComponent__SetInterruptionWindow(v36, 0LL, v37, v38, v39, 0, 0LL),
        (Object = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(Object, v25);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Object, (System_String_o *)StringLiteral_12490/*"START_CONTINUE_INTERRUPTION"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__StartContinueWaveRestart(
        BattlePerformanceContinue_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  System_Action_o *v15; // x21
  System_Action_o *v16; // x22
  PlayMakerFSM_o *myFsm; // x0
  __int64 v18; // x1

  if ( (byte_42E9ED5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattlePerformanceContinue__StartContinueWaveRestart_b__134_0__, v5, v6, v7);
    sub_B5D5C4(&Method_BattlePerformanceContinue__StartContinueWaveRestart_b__134_1__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12491/*"START_CONTINUE_WAVE_RESTART"*/, v11, v12, v13);
    byte_42E9ED5 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueWaveRestart_b__134_0__,
    0LL);
  v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueWaveRestart_b__134_1__,
    0LL);
  if ( !continueWaveRestartWindow
    || (BattleWindowContinueWaveRestartComponent__SetWindow(continueWaveRestartWindow, v15, v16, 0LL),
        (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(myFsm, v18);
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12491/*"START_CONTINUE_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__Update(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  UnityEngine_Object_o *data; // x20
  __int64 v36; // x1
  BattleData_o *v37; // x0
  int64_t ContinueDeadLine; // x20
  System_String_o *RestTime; // x0
  UILabel_o *giveUpContinueItemLabel; // x21
  Il2CppObject *v41; // x20
  System_String_o *v42; // x0
  UILabel_o *deadLine; // x21
  System_String_o *v44; // x0
  UILabel_o *useCheckContinueItemLabel; // x21
  System_String_o *v46; // x0
  int64_t v47; // x20
  CommonUI_o *Instance; // x20
  System_String_o *v49; // x21
  ErrorDialog_ClickDelegate_o *v50; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-40h]

  if ( (byte_42E9E99 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue_CallbackConfirmDialog__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ErrorDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_2442/*"BATTLE_CONTINUE_ITEM_USE_CHECK"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_2438/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_2439/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_2437/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_1/*""*/, v32, v33, v34);
    byte_42E9E99 = 1;
  }
  data = (UnityEngine_Object_o *)this->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(data, 0LL, 0LL) && this->fields.IsContinueItem )
  {
    v37 = this->fields.data;
    if ( !v37 )
      goto LABEL_27;
    ContinueDeadLine = BattleData__GetContinueDeadLine(v37, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime = LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
    giveUpContinueItemLabel = this->fields.giveUpContinueItemLabel;
    v41 = (Il2CppObject *)RestTime;
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_2438/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, 0LL);
    v37 = (BattleData_o *)System_String__Format(v42, v41, 0LL);
    if ( !giveUpContinueItemLabel )
      goto LABEL_27;
    UILabel__set_text(giveUpContinueItemLabel, (System_String_o *)v37, 0LL);
    deadLine = this->fields.deadLine;
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_2439/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, 0LL);
    v37 = (BattleData_o *)System_String__Format(v44, v41, 0LL);
    if ( !deadLine )
      goto LABEL_27;
    UILabel__set_text(deadLine, (System_String_o *)v37, 0LL);
    useCheckContinueItemLabel = this->fields.useCheckContinueItemLabel;
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_2442/*"BATTLE_CONTINUE_ITEM_USE_CHECK"*/, 0LL);
    v37 = (BattleData_o *)System_String__Format(v46, v41, 0LL);
    if ( !useCheckContinueItemLabel )
      goto LABEL_27;
    UILabel__set_text(useCheckContinueItemLabel, (System_String_o *)v37, 0LL);
    v37 = this->fields.data;
    if ( !v37 )
      goto LABEL_27;
    v47 = BattleData__GetContinueDeadLine(v37, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( v47 < NetworkManager__getTime(0LL) && !this->fields.isShowDeadLineDialog )
    {
      this->fields.isShowDeadLineDialog = 1;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_2437/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
      v50 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v50,
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
          v49,
          v50,
          0,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        return;
      }
LABEL_27:
      sub_B5D69C(v37, v36);
    }
  }
}


void __fastcall BattlePerformanceContinue__WaveRestartNg(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E9ED8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue__WaveRestartNg_b__137_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E9ED8 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v9 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__WaveRestartNg_b__137_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_B5D69C(v10, v11);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueWaveRestartWindow->klass->vtable._12_Close.method)(
    continueWaveRestartWindow,
    v9,
    continueWaveRestartWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__WaveRestartOk(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E9ED7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue__WaveRestartOk_b__136_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E9ED7 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v9 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__WaveRestartOk_b__136_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_B5D69C(v10, v11);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueWaveRestartWindow->klass->vtable._12_Close.method)(
    continueWaveRestartWindow,
    v9,
    continueWaveRestartWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue___AttachStoneCountRefreshComponent_b__85_0(
        BattlePerformanceContinue_o *this,
        int32_t stoneCount,
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
  Il2CppObject *v36; // x0
  System_String_o *gem_now; // x0
  __int64 v38; // x1
  System_String_o *v39; // x21
  UILabel_o *ContinueStoneBtnLabel; // x21
  UILabel_o *stoneBtnLabel; // x21
  System_String_o *ActiveStateName; // x0
  UILabel_o *v43; // x21
  int32_t v44; // w0
  const MethodInfo *v45; // x4
  System_String_o **v46; // x8
  const MethodInfo *v47; // x4
  const MethodInfo *v48; // x4
  int32_t v49; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E9EE2 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, stoneCount, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_2433/*"BATTLE_CONTINUE_CHECK_SPELL"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_2432/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_2434/*"BATTLE_CONTINUE_CHECK_STONE"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_2431/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_12810/*"Select_NoStone"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_2440/*"BATTLE_CONTINUE_ITEM_SELECT"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_2441/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12811/*"Select_Stone"*/, v33, v34, v35);
    byte_42E9EE2 = 1;
  }
  v49 = stoneCount;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  gem_now = System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v36, 0LL);
  if ( !this->fields.ContinueStoneNum )
    goto LABEL_28;
  v39 = gem_now;
  UILabel__set_text(this->fields.ContinueStoneNum, gem_now, 0LL);
  gem_now = (System_String_o *)this->fields.gem_now;
  if ( !gem_now )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)gem_now, v39, 0LL);
  gem_now = (System_String_o *)this->fields.stone_now;
  if ( !gem_now )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)gem_now, v39, 0LL);
  ContinueStoneBtnLabel = this->fields.ContinueStoneBtnLabel;
  if ( stoneCount >= 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2432/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, 0LL);
    if ( ContinueStoneBtnLabel )
    {
      UILabel__set_text(ContinueStoneBtnLabel, gem_now, 0LL);
      stoneBtnLabel = this->fields.stoneBtnLabel;
      gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2432/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, 0LL);
      if ( stoneBtnLabel )
      {
        UILabel__set_text(stoneBtnLabel, gem_now, 0LL);
        gem_now = (System_String_o *)this->fields.myFsm;
        if ( gem_now )
        {
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)gem_now, 0LL);
          if ( !System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_12810/*"Select_NoStone"*/, 0LL) )
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
                PlayMakerFSM__SetState((PlayMakerFSM_o *)gem_now, (System_String_o *)StringLiteral_12811/*"Select_Stone"*/, 0LL);
                goto LABEL_24;
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_B5D69C(gem_now, v38);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2431/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, 0LL);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_28;
  UILabel__set_text(ContinueStoneBtnLabel, gem_now, 0LL);
  v43 = this->fields.stoneBtnLabel;
  gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2431/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, 0LL);
  if ( !v43 )
    goto LABEL_28;
  UILabel__set_text(v43, gem_now, 0LL);
LABEL_24:
  gem_now = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_28;
  v44 = BattleData__CheckCurrentTemporaryCommandSpell(this->fields.data, (UserGameEntity_o *)gem_now, 0LL);
  v46 = (System_String_o **)&StringLiteral_2440/*"BATTLE_CONTINUE_ITEM_SELECT"*/;
  if ( v44 <= 2 )
    v46 = (System_String_o **)&StringLiteral_2441/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/;
  BattlePerformanceContinue__SetContinueMessage(this, this->fields.ContinueLabel, *v46, stoneCount, v45);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseCommandSpell,
    (System_String_o *)StringLiteral_2433/*"BATTLE_CONTINUE_CHECK_SPELL"*/,
    stoneCount,
    v47);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseGem,
    (System_String_o *)StringLiteral_2434/*"BATTLE_CONTINUE_CHECK_STONE"*/,
    stoneCount,
    v48);
}


void __fastcall BattlePerformanceContinue___CheckDefenceTargetBroken_b__129_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9EE3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5820/*"EVENT_TRUE"*/, (_DWORD)method, v2, v3);
    byte_42E9EE3 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5820/*"EVENT_TRUE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenBrokenMessage_b__130_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9EE4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5555/*"END_CLOSE"*/, (_DWORD)method, v2, v3);
    byte_42E9EE4 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5555/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueInterruption_b__139_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9EED & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5569/*"END_OPEN"*/, (_DWORD)method, v2, v3);
    byte_42E9EED = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5569/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueWaveRestart_b__135_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9EE7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5569/*"END_OPEN"*/, (_DWORD)method, v2, v3);
    byte_42E9EE7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5569/*"END_OPEN"*/, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct BattleData_o *data; // x8
  System_Int32_array **v20; // x1
  WaveBattleSelectWaveDialog_o *waveSelectDialog; // x20
  System_Action_o *v22; // x21

  v9 = this;
  if ( (byte_42E9EF1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_3__, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_2978/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/, v13, v14, v15);
    this = (BattlePerformanceContinue_o *)sub_B5D5C4(&StringLiteral_7389/*"INTERRUPTION"*/, v16, v17, v18);
    byte_42E9EF1 = 1;
  }
  data = v9->fields.data;
  if ( !data )
    goto LABEL_9;
  data->fields.selectedInterruptionWave = -1;
  if ( isDecide )
  {
    v20 = (System_Int32_array **)StringLiteral_2978/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    v9->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_2978/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v9->fields.cancelInterruptionEvent,
      v20,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this = (BattlePerformanceContinue_o *)v9->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_7389/*"INTERRUPTION"*/, 0LL);
      return;
    }
LABEL_9:
    sub_B5D69C(this, isDecide);
  }
  waveSelectDialog = v9->fields.waveSelectDialog;
  v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_3__,
    0LL);
  if ( !waveSelectDialog )
    goto LABEL_9;
  WaveBattleSelectWaveDialog__Close_22707844(waveSelectDialog, v22, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__143_1(
        BattlePerformanceContinue_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  PlayMakerFSM_o *myFsm; // x0
  __int64 v12; // x1
  struct BattleData_o *data; // x8

  if ( (byte_42E9EF3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__, wave, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11778/*"SELECT_WAVE"*/, v6, v7, v8);
    byte_42E9EF3 = 1;
  }
  v9 = Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__;
  if ( (*((_BYTE *)Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__ + 75) & 2) != 0 )
    v9 = (_QWORD *)sub_B5D5CC(Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__);
  v10 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v9, v9[3]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
  data = this->fields.data;
  if ( !data || (data->fields.selectedInterruptionWave = wave, (myFsm = this->fields.myFsm) == 0LL) )
    sub_B5D69C(myFsm, v12);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_11778/*"SELECT_WAVE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__143_2(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9EF4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E9EF4 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__143_3(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *waveSelectDialog; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42E9EF2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9396/*"NG"*/, v5, v6, v7);
    byte_42E9EF2 = 1;
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
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  this->fields.waveSelectDialog = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.waveSelectDialog, 0LL, v10, v11, v12, v13, v14, v15);
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.myFsm;
  if ( !waveSelectDialog )
LABEL_9:
    sub_B5D69C(waveSelectDialog, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)waveSelectDialog, (System_String_o *)StringLiteral_9396/*"NG"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenInterruptionConfirmWindow_b__141_0(
        BattlePerformanceContinue_o *this,
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
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_String_o **p_cancelInterruptionEvent; // x8
  System_Int32_array **v34; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v36; // x20

  if ( (byte_42E9EEF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(
      &Method_BattlePerformanceContinue___c__DisplayClass141_0__OpenInterruptionConfirmWindow_b__1__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&BattlePerformanceContinue___c__DisplayClass141_0_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_4640/*"DECIDE_INTERRUPTION"*/, v15, v16, v17);
    byte_42E9EEF = 1;
  }
  v18 = sub_B5D694(BattlePerformanceContinue___c__DisplayClass141_0_TypeInfo);
  BattlePerformanceContinue___c__DisplayClass141_0___ctor(
    (BattlePerformanceContinue___c__DisplayClass141_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_8;
  *(_QWORD *)(v18 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  p_cancelInterruptionEvent = &this->fields.cancelInterruptionEvent;
  if ( isDecide )
    p_cancelInterruptionEvent = (struct System_String_o **)&StringLiteral_4640/*"DECIDE_INTERRUPTION"*/;
  v34 = (System_Int32_array **)*p_cancelInterruptionEvent;
  *(_QWORD *)(v18 + 16) = *p_cancelInterruptionEvent;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), v34, v27, v28, v29, v30, v31, v32);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v18,
    Method_BattlePerformanceContinue___c__DisplayClass141_0__OpenInterruptionConfirmWindow_b__1__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_B5D69C(v19, v20);
  CommonUI__CloseConfirmDialog_18202348(Instance, v36, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenWaveSelectConfirmDialog_b__144_0(
        BattlePerformanceContinue_o *this,
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
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  WaveBattleSelectWaveDialog_o *v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  CommonUI_o *Instance; // x20
  System_Action_o *v28; // x22
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_42E9EF5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(
      &Method_BattlePerformanceContinue___c__DisplayClass144_0__OpenWaveSelectConfirmDialog_b__1__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&BattlePerformanceContinue___c__DisplayClass144_0_TypeInfo, v15, v16, v17);
    byte_42E9EF5 = 1;
  }
  v18 = sub_B5D694(BattlePerformanceContinue___c__DisplayClass144_0_TypeInfo);
  BattlePerformanceContinue___c__DisplayClass144_0___ctor(
    (BattlePerformanceContinue___c__DisplayClass144_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_13;
  *(_QWORD *)(v18 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_BYTE *)(v18 + 16) = isDecide;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v18,
    Method_BattlePerformanceContinue___c__DisplayClass144_0__OpenWaveSelectConfirmDialog_b__1__,
    0LL);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog_18202348(Instance, v28, 0LL);
  if ( *(_BYTE *)(v18 + 16) )
  {
    waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0LL, 0LL) )
    {
      v19 = this->fields.waveSelectDialog;
      if ( v19 )
      {
        WaveBattleSelectWaveDialog__Close(v19, 0LL);
        return;
      }
LABEL_13:
      sub_B5D69C(v19, v20);
    }
  }
}


void __fastcall BattlePerformanceContinue___ProcInterruption_b__142_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleLogic_o *logic; // x0

  if ( (byte_42E9EF0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10647/*"PROC_INTERRUPTION"*/, (_DWORD)method, v2, v3);
    byte_42E9EF0 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B5D69C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10647/*"PROC_INTERRUPTION"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___ProcSelectWaveRestart_b__145_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleLogic_o *logic; // x0

  if ( (byte_42E9EF6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10648/*"PROC_PARTY_REORGANIZATION"*/, (_DWORD)method, v2, v3);
    byte_42E9EF6 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B5D69C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10648/*"PROC_PARTY_REORGANIZATION"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___ProcWaveRestartFromInterruption_b__140_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleLogic_o *logic; // x0

  if ( (byte_42E9EEE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10650/*"PROC_WAVE_RESTART"*/, (_DWORD)method, v2, v3);
    byte_42E9EEE = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B5D69C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10650/*"PROC_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueInterruption_b__138_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9EEA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15550/*"WAVE_RESTART"*/, (_DWORD)method, v2, v3);
    byte_42E9EEA = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15550/*"WAVE_RESTART"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueInterruption_b__138_1(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9EEB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11779/*"SELECT_WAVE_RESTART"*/, (_DWORD)method, v2, v3);
    byte_42E9EEB = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_11779/*"SELECT_WAVE_RESTART"*/, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Int32_array **v12; // x1
  __int64 v13; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9EEC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7389/*"INTERRUPTION"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_2977/*"CANCEL_INTERRUPTION"*/, v9, v10, v11);
    byte_42E9EEC = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_2977/*"CANCEL_INTERRUPTION"*/;
  this->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_2977/*"CANCEL_INTERRUPTION"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.cancelInterruptionEvent, v12, v2, v3, v4, v5, v6, v7);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v13);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_7389/*"INTERRUPTION"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueWaveRestart_b__134_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9EE5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9842/*"OK"*/, (_DWORD)method, v2, v3);
    byte_42E9EE5 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9842/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueWaveRestart_b__134_1(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9EE6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9396/*"NG"*/, (_DWORD)method, v2, v3);
    byte_42E9EE6 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9396/*"NG"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___WaveRestartNg_b__137_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleLogic_o *logic; // x0

  if ( (byte_42E9EE9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9396/*"NG"*/, (_DWORD)method, v2, v3);
    byte_42E9EE9 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B5D69C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9396/*"NG"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___WaveRestartOk_b__136_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleLogic_o *logic; // x0

  if ( (byte_42E9EE8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9842/*"OK"*/, (_DWORD)method, v2, v3);
    byte_42E9EE8 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B5D69C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9842/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__atlasLoadEnd(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleData_o *data; // x0
  BattleViewItemlistComponent_o *itemWindow; // x20
  BattleDropItem_array *DropItems; // x21
  BattleDropItemComponent_ClickDelegate_o *v11; // x22

  if ( (byte_42E9E9D & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue_showConf__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleDropItemComponent_ClickDelegate_TypeInfo, v5, v6, v7);
    byte_42E9E9D = 1;
  }
  data = this->fields.data;
  if ( !data
    || (itemWindow = this->fields.itemWindow,
        DropItems = BattleData__getDropItems(data, 0LL),
        v11 = (BattleDropItemComponent_ClickDelegate_o *)sub_B5D694(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_showConf__,
          0LL),
        !itemWindow) )
  {
    sub_B5D69C(data, method);
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, DropItems, v11, this->fields.itemColumnCount, 0LL);
}


void __fastcall BattlePerformanceContinue__callBackCommandSpell(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattlePerformanceContinue_o *v5; // x19
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
  __int64 *v18; // x8

  v5 = this;
  if ( (byte_42E9EAF & 1) == 0 )
  {
    sub_B5D5C4(&BattleData_TypeInfo, (_DWORD)ret, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3419/*"CONNECT_NG"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v12, v13, v14);
    this = (BattlePerformanceContinue_o *)sub_B5D5C4(&StringLiteral_3420/*"CONNECT_OK"*/, v15, v16, v17);
    byte_42E9EAF = 1;
  }
  if ( !ret )
    goto LABEL_15;
  if ( System_String__Equals_44565128(ret, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
  {
    v5->fields.continueRetryFlg = 0;
    if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__setContinueBattleFlg(0, 1, 0LL);
    this = (BattlePerformanceContinue_o *)v5->fields.myFsm;
    if ( this )
    {
      v18 = &StringLiteral_3420/*"CONNECT_OK"*/;
LABEL_13:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v18, 0LL);
      return;
    }
    goto LABEL_15;
  }
  if ( System_String__Equals_44565128(ret, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v5->fields.myFsm;
    v5->fields.continueRetryFlg = 1;
    if ( this )
    {
      v18 = &StringLiteral_3419/*"CONNECT_NG"*/;
      goto LABEL_13;
    }
LABEL_15:
    sub_B5D69C(this, ret);
  }
}


void __fastcall BattlePerformanceContinue__callBackContinueItem(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattlePerformanceContinue_o *v5; // x19
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
  __int64 *v18; // x8

  v5 = this;
  if ( (byte_42E9EC9 & 1) == 0 )
  {
    sub_B5D5C4(&BattleData_TypeInfo, (_DWORD)ret, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3419/*"CONNECT_NG"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v12, v13, v14);
    this = (BattlePerformanceContinue_o *)sub_B5D5C4(&StringLiteral_3420/*"CONNECT_OK"*/, v15, v16, v17);
    byte_42E9EC9 = 1;
  }
  if ( !ret )
    goto LABEL_18;
  if ( System_String__Equals_44565128(ret, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v5->fields.data;
    v5->fields.continueRetryFlg = 0;
    if ( this )
    {
      BattleData__SuccessContinue((BattleData_o *)this, 0LL);
      if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      BattleData__setContinueBattleFlg(0, 1, 0LL);
      BattleData__SaveContinueItemId(0, 0, 0LL);
      this = (BattlePerformanceContinue_o *)v5->fields.data;
      if ( this )
      {
        BattleData__UpdateContinueItemInfo((BattleData_o *)this, 0LL);
        this = (BattlePerformanceContinue_o *)v5->fields.myFsm;
        if ( this )
        {
          v18 = &StringLiteral_3420/*"CONNECT_OK"*/;
LABEL_16:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v18, 0LL);
          return;
        }
      }
    }
    goto LABEL_18;
  }
  if ( System_String__Equals_44565128(ret, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v5->fields.data;
    v5->fields.continueRetryFlg = 1;
    if ( this )
    {
      BattleData__UpdateContinueItemInfo((BattleData_o *)this, 0LL);
      this = (BattlePerformanceContinue_o *)v5->fields.myFsm;
      if ( this )
      {
        v18 = &StringLiteral_3419/*"CONNECT_NG"*/;
        goto LABEL_16;
      }
    }
LABEL_18:
    sub_B5D69C(this, ret);
  }
}


void __fastcall BattlePerformanceContinue__callBackStone(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattlePerformanceContinue_o *v5; // x19
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
  __int64 *v18; // x8

  v5 = this;
  if ( (byte_42E9EBC & 1) == 0 )
  {
    sub_B5D5C4(&BattleData_TypeInfo, (_DWORD)ret, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3419/*"CONNECT_NG"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v12, v13, v14);
    this = (BattlePerformanceContinue_o *)sub_B5D5C4(&StringLiteral_3420/*"CONNECT_OK"*/, v15, v16, v17);
    byte_42E9EBC = 1;
  }
  if ( !ret )
    goto LABEL_16;
  if ( System_String__Equals_44565128(ret, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v5->fields.data;
    v5->fields.continueRetryFlg = 0;
    if ( this )
    {
      BattleData__SuccessContinue((BattleData_o *)this, 0LL);
      if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      BattleData__setContinueBattleFlg(0, 1, 0LL);
      this = (BattlePerformanceContinue_o *)v5->fields.myFsm;
      if ( this )
      {
        v18 = &StringLiteral_3420/*"CONNECT_OK"*/;
LABEL_14:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v18, 0LL);
        return;
      }
    }
    goto LABEL_16;
  }
  if ( System_String__Equals_44565128(ret, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v5->fields.myFsm;
    v5->fields.continueRetryFlg = 1;
    if ( this )
    {
      v18 = &StringLiteral_3419/*"CONNECT_NG"*/;
      goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(this, ret);
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
    sub_B5D69C(0LL, ret);
  BattleData__SuccessContinue(data, 0LL);
  BattlePerformanceContinue__callBackCommandSpell(this, ret, v6);
}


void __fastcall BattlePerformanceContinue__callbaclStoneShop(
        BattlePerformanceContinue_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  __int64 *v16; // x8

  if ( (byte_42E9EC4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, result, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3419/*"CONNECT_NG"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3420/*"CONNECT_OK"*/, v9, v10, v11);
    byte_42E9EC4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  BattlePerformanceContinue__closeNoStone(this, v14);
  if ( (unsigned int)(result - 1) > 1 )
  {
    Instance = (CommonUI_o *)this->fields.myFsm;
    if ( Instance )
    {
      v16 = &StringLiteral_3419/*"CONNECT_NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B5D69C(Instance, v13);
  }
  BattlePerformanceContinue__refreshStoneNow(this, 0LL, v15);
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_10;
  v16 = &StringLiteral_3420/*"CONNECT_OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v16, 0LL);
}


void __fastcall BattlePerformanceContinue__checkCountStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int *SelfUserGame; // x0
  __int64 v6; // x1

  if ( (byte_42E9ECE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9393/*"NEXT"*/, (_DWORD)method, v2, v3);
    byte_42E9ECE = 1;
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
    sub_B5D69C(SelfUserGame, v6);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_9393/*"NEXT"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__checkDeadLineStoneShopEnd(
        BattlePerformanceContinue_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  BattleData_o *data; // x0
  int64_t ContinueDeadLine; // x20
  CommonUI_o *Instance; // x20
  System_String_o *v29; // x21
  ErrorDialog_ClickDelegate_o *v30; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-40h]

  if ( (byte_42E9ECF & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue_CallbackConfirmDialog__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ErrorDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_9393/*"NEXT"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_2437/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    byte_42E9ECF = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_2437/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
    v30 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v30,
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
        v29,
        v30,
        0,
        0,
        -1.0,
        1,
        effectDistance,
        0LL);
      return;
    }
LABEL_15:
    sub_B5D69C(data, method);
  }
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_9393/*"NEXT"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__checkSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v9; // x1
  __int64 *v10; // x9

  if ( (byte_42E9EA9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9842/*"OK"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9396/*"NG"*/, v5, v6, v7);
    byte_42E9EA9 = 1;
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
    sub_B5D69C(SelfUserGame, v9);
  }
  if ( (int)SelfUserGame >= 3 )
    v10 = &StringLiteral_9842/*"OK"*/;
  else
    v10 = &StringLiteral_9396/*"NG"*/;
  PlayMakerFSM__SendEvent(this->fields.myFsm, (System_String_o *)*v10, 0LL);
}


void __fastcall BattlePerformanceContinue__checkStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserGameEntity_o *SelfUserGame; // x20
  const MethodInfo *v9; // x2
  PlayMakerFSM_o *myFsm; // x0
  __int64 v11; // x1
  __int64 *v12; // x8

  if ( (byte_42E9EB6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9842/*"OK"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9396/*"NG"*/, v5, v6, v7);
    byte_42E9EB6 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  BattlePerformanceContinue__refreshStoneNow(this, SelfUserGame, v9);
  if ( !SelfUserGame || (myFsm = this->fields.myFsm) == 0LL )
    sub_B5D69C(myFsm, v11);
  if ( SelfUserGame->fields.stone < 1 )
    v12 = &StringLiteral_9396/*"NG"*/;
  else
    v12 = &StringLiteral_9842/*"OK"*/;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v12, 0LL);
}


void __fastcall BattlePerformanceContinue__closeContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_42E9EC6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue_endCloseContinueItem__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E9EC6 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v10 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseContinueItem__,
          0LL),
        !window) )
  {
    sub_B5D69C(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v10,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_42E9EC1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue_endCloseNoStone__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E9EC1 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v10 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseNoStone__,
          0LL),
        !window) )
  {
    sub_B5D69C(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v10,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_42E9EAC & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue_endCloseSpell__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E9EAC = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v10 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseSpell__,
          0LL),
        !window) )
  {
    sub_B5D69C(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v10,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_42E9EB9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue_endCloseStone__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E9EB9 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v10 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseStone__,
          0LL),
        !window) )
  {
    sub_B5D69C(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v10,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeUseCheck(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *useCheckWindow; // x0

  useCheckWindow = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !useCheckWindow
    || (useCheckWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useCheckWindow, 0LL)) == 0LL )
  {
    sub_B5D69C(useCheckWindow, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useCheckWindow, 0, 0LL);
}


void __fastcall BattlePerformanceContinue__connectContinueItem(
        BattlePerformanceContinue_o *this,
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x1
  BattleData_o *data; // x0
  int32_t ContinueUseItemId; // w20
  NetworkManager_ResultCallbackFunc_o *v20; // x21
  struct BattleData_o *v21; // x8
  struct BattleEntity_o *battle_ent; // x9

  if ( (byte_42E9EC8 & 1) == 0 )
  {
    sub_B5D5C4(&BattleData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattlePerformanceContinue_callBackContinueItem__, v5, v6, v7);
    sub_B5D5C4(&Method_NetworkManager_getRequest_BattleUseContinueItemRequest___, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
    byte_42E9EC8 = 1;
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
  v20 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v20,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callBackContinueItem__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  data = (BattleData_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                           v20,
                           (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_BattleUseContinueItemRequest___);
  v21 = this->fields.data;
  if ( !v21 )
    goto LABEL_18;
  if ( this->fields.continueRetryFlg )
  {
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0LL);
      return;
    }
LABEL_18:
    sub_B5D69C(data, v17);
  }
  battle_ent = v21->fields.battle_ent;
  if ( !battle_ent || !data )
    goto LABEL_18;
  BattleUseContinueItemRequest__beginRequest(
    (BattleUseContinueItemRequest_o *)data,
    battle_ent->fields.id,
    v21->fields.continueCount,
    ContinueUseItemId,
    1,
    0LL);
}


void __fastcall BattlePerformanceContinue__connectSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  __int64 v23; // x1
  BattleData_o *data; // x0
  const MethodInfo *v25; // x1
  _BOOL4 continueRetryFlg; // w21
  NetworkManager_ResultCallbackFunc_o *v27; // x0
  NetworkManager_ResultCallbackFunc_o *v28; // x20
  struct BattleData_o *v29; // x8
  int32_t continueCount; // w21
  struct BattleEntity_o *battle_ent; // x22
  BattleCommandSpellRequest_o *v32; // x20
  struct BattleData_o *v33; // x8

  if ( (byte_42E9EAE & 1) == 0 )
  {
    sub_B5D5C4(&BattleData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattlePerformanceContinue_callBackCommandSpell__, v5, v6, v7);
    sub_B5D5C4(&Method_BattlePerformanceContinue_callbackContinueCommandSpell__, v8, v9, v10);
    sub_B5D5C4(&Method_NetworkManager_getRequest_BattleCommandSpellRequest___, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6923/*"GAME_OVER_COMMAND_SPELL_ID"*/, v20, v21, v22);
    byte_42E9EAE = 1;
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
    BattlePerformanceContinue__SkipCommandSpellRequest(this, v25);
    return;
  }
  continueRetryFlg = this->fields.continueRetryFlg;
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  v28 = v27;
  if ( continueRetryFlg )
  {
    NetworkManager_ResultCallbackFunc___ctor(
      v27,
      (Il2CppObject *)this,
      Method_BattlePerformanceContinue_callBackCommandSpell__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    data = (BattleData_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                             v28,
                             (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0LL);
      return;
    }
LABEL_24:
    sub_B5D69C(data, v23);
  }
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callbackContinueCommandSpell__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  data = (BattleData_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                           v28,
                           (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
  v29 = this->fields.data;
  if ( !v29 )
    goto LABEL_24;
  continueCount = v29->fields.continueCount;
  battle_ent = v29->fields.battle_ent;
  v32 = (BattleCommandSpellRequest_o *)data;
  data = (BattleData_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6923/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0LL);
  if ( !battle_ent )
    goto LABEL_24;
  v33 = this->fields.data;
  if ( !v33 || !v32 )
    goto LABEL_24;
  BattleCommandSpellRequest__beginRequest(
    v32,
    battle_ent->fields.id,
    (int32_t)data,
    v33->fields.waveClearNeedTurn,
    continueCount,
    1,
    0LL);
}


void __fastcall BattlePerformanceContinue__connectStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x1
  BattleData_o *data; // x0
  NetworkManager_ResultCallbackFunc_o *v19; // x20
  struct BattleData_o *v20; // x8
  struct BattleEntity_o *battle_ent; // x9

  if ( (byte_42E9EBB & 1) == 0 )
  {
    sub_B5D5C4(&BattleData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattlePerformanceContinue_callBackStone__, v5, v6, v7);
    sub_B5D5C4(&Method_NetworkManager_getRequest_BattleUseContinueRequest___, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
    byte_42E9EBB = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setContinueBattleFlg(1, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  BattleData__procPlayerContinue(data, this->fields.isProgress, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callBackStone__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  data = (BattleData_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                           v19,
                           (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_BattleUseContinueRequest___);
  v20 = this->fields.data;
  if ( !v20 )
    goto LABEL_17;
  if ( this->fields.continueRetryFlg )
  {
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0LL);
      return;
    }
LABEL_17:
    sub_B5D69C(data, v17);
  }
  battle_ent = v20->fields.battle_ent;
  if ( !battle_ent || !data )
    goto LABEL_17;
  BattleUseContinueRequest__beginRequest(
    (BattleUseContinueRequest_o *)data,
    battle_ent->fields.id,
    v20->fields.waveClearNeedTurn,
    v20->fields.continueCount,
    0LL);
}


void __fastcall BattlePerformanceContinue__endCloseContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *ContinueItemWindow; // x0

  if ( (byte_42E9EC7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5555/*"END_CLOSE"*/, (_DWORD)method, v2, v3);
    byte_42E9EC7 = 1;
  }
  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow
    || (UnityEngine_GameObject__SetActive(ContinueItemWindow, 0, 0LL),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)ContinueItemWindow, 0LL),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(ContinueItemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ContinueItemWindow, (System_String_o *)StringLiteral_5555/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *nostoneObject; // x0

  if ( (byte_42E9EC2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5555/*"END_CLOSE"*/, (_DWORD)method, v2, v3);
    byte_42E9EC2 = 1;
  }
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject
    || (UnityEngine_GameObject__SetActive(nostoneObject, 0, 0LL),
        (nostoneObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(nostoneObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)nostoneObject, (System_String_o *)StringLiteral_5555/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *commandspellObject; // x0

  if ( (byte_42E9EAD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5555/*"END_CLOSE"*/, (_DWORD)method, v2, v3);
    byte_42E9EAD = 1;
  }
  commandspellObject = this->fields.commandspellObject;
  if ( !commandspellObject
    || (UnityEngine_GameObject__SetActive(commandspellObject, 0, 0LL),
        (commandspellObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)commandspellObject, 0LL),
        (commandspellObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(commandspellObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)commandspellObject, (System_String_o *)StringLiteral_5555/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *stoneObject; // x0

  if ( (byte_42E9EBA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5555/*"END_CLOSE"*/, (_DWORD)method, v2, v3);
    byte_42E9EBA = 1;
  }
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 0, 0LL),
        (stoneObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)stoneObject, 0LL),
        (stoneObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(stoneObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)stoneObject, (System_String_o *)StringLiteral_5555/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endDialog(
        BattlePerformanceContinue_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E9EA4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_9396/*"NG"*/, v5, v6, v7);
    byte_42E9EA4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.logic) == 0LL) )
  {
    sub_B5D69C(Instance, v9);
  }
  BattleLogic__sendFsmEvent((BattleLogic_o *)Instance, (System_String_o *)StringLiteral_9396/*"NG"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endLoadCommandSPell(
        BattlePerformanceContinue_o *this,
        AssetData_o *aData,
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
  BattlePerformance_o *perf; // x0
  UserGameEntity_o *v28; // x21
  int v29; // w22
  int32_t v30; // w21
  Il2CppObject *v31; // x0
  struct BattlePerformance_o *v32; // x8
  UnityEngine_GameObject_o *Object; // x23
  Il2CppObject *v34; // x0
  System_String_o *v35; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  UnityEngine_Object_o *v37; // x21
  SimpleAnimation_o *v38; // x0
  System_String_o *v39; // x1
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Animation_o *v41; // x0
  System_String_o *v42; // x1
  Il2CppObject *v43; // x0
  Il2CppObject *v44; // x0
  int32_t v45; // [xsp+8h] [xbp-38h] BYREF
  int v46; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E9EB4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)aData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_18402/*"ef_commandspell_{0:D2}"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_18403/*"ef_commandspell{0:D4}"*/, v24, v25, v26);
    byte_42E9EB4 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_31;
  BattlePerformance__PlayAnyCommandSpellContinueVoice(perf, 0LL);
  perf = (BattlePerformance_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !perf )
    goto LABEL_31;
  v28 = (UserGameEntity_o *)perf;
  perf = (BattlePerformance_o *)UserGameEntity__get_SpellImageIdBattle((UserGameEntity_o *)perf, 0LL);
  if ( !this->fields.data )
    goto LABEL_31;
  v29 = (int)perf;
  v30 = BattleData__CheckCurrentTemporaryCommandSpell(this->fields.data, v28, 0LL);
  v46 = v29;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
  perf = (BattlePerformance_o *)System_String__Format((System_String_o *)StringLiteral_18403/*"ef_commandspell{0:D4}"*/, v31, 0LL);
  if ( !aData )
    goto LABEL_31;
  perf = (BattlePerformance_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  aData,
                                  (System_String_o *)perf,
                                  (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  v32 = this->fields.perf;
  if ( !v32 )
    goto LABEL_31;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             (UnityEngine_GameObject_o *)perf,
             v32->fields.popupTr,
             0LL,
             0LL);
  v45 = v30;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  perf = (BattlePerformance_o *)System_String__Format((System_String_o *)StringLiteral_18402/*"ef_commandspell_{0:D2}"*/, v34, 0LL);
  if ( !Object )
    goto LABEL_31;
  v35 = (System_String_o *)perf;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      Object,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v37 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  Object,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    if ( SimpleAnimation__get_Item((SimpleAnimation_o *)Component_srcLineSprite, v35, 0LL) )
    {
      v38 = (SimpleAnimation_o *)Component_srcLineSprite;
      v39 = v35;
    }
    else
    {
      v46 = 3;
      v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
      v39 = System_String__Format((System_String_o *)StringLiteral_18402/*"ef_commandspell_{0:D2}"*/, v43, 0LL);
      v38 = (SimpleAnimation_o *)Component_srcLineSprite;
    }
    SimpleAnimation__Play_16676044(v38, v39, 0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
    if ( ((unsigned __int8)perf & 1) != 0 )
    {
      if ( !v37 )
        goto LABEL_31;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v37, v35, 0LL);
      if ( UnityEngine_TrackedReference__op_Inequality(0LL, Item, 0LL) )
      {
        v41 = (UnityEngine_Animation_o *)v37;
        v42 = v35;
      }
      else
      {
        v46 = 3;
        v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
        v42 = System_String__Format((System_String_o *)StringLiteral_18402/*"ef_commandspell_{0:D2}"*/, v44, 0LL);
        v41 = (UnityEngine_Animation_o *)v37;
      }
      UnityEngine_Animation__Play_51249124(v41, v42, 0LL);
    }
  }
  perf = (BattlePerformance_o *)this->fields.logic;
  if ( !perf
    || (BattleLogic__setTimeAcceleration((BattleLogic_o *)perf, 0, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__playMasterCommandSpellCutIn(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.myFsm) == 0LL) )
  {
LABEL_31:
    sub_B5D69C(perf, aData);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_42E9EA8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5569/*"END_OPEN"*/, (_DWORD)method, v2, v3);
    byte_42E9EA8 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__ChangeLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5569/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_42E9EC0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5569/*"END_OPEN"*/, (_DWORD)method, v2, v3);
    byte_42E9EC0 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5569/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_42E9EAB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5569/*"END_OPEN"*/, (_DWORD)method, v2, v3);
    byte_42E9EAB = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5569/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_42E9EB8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5569/*"END_OPEN"*/, (_DWORD)method, v2, v3);
    byte_42E9EB8 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5569/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenUsecheck(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9ECD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5569/*"END_OPEN"*/, (_DWORD)method, v2, v3);
    byte_42E9ECD = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5569/*"END_OPEN"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__endRetryDialog(
        BattlePerformanceContinue_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleLogic_o *logic; // x0

  if ( (byte_42E9EB1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9842/*"OK"*/, flg, (_DWORD)method, v3);
    byte_42E9EB1 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B5D69C(0LL, flg);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9842/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9EB5 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_4242/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v8, v9, v10);
    byte_42E9EB5 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_9;
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0LL);
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SpellImageIdBattle);
  v14 = System_String__Format((System_String_o *)StringLiteral_4242/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v13, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v14, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.logic;
  if ( !SelfUserGame )
LABEL_9:
    sub_B5D69C(SelfUserGame, v12);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x4
  __int64 v12; // x1
  UnityEngine_GameObject_o *nostoneObject; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v15; // x21

  if ( (byte_42E9EBF & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue_endOpenNoStone__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_2444/*"BATTLE_CONTINUE_NO_STONE"*/, v8, v9, v10);
    byte_42E9EBF = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseBuyGem,
    (System_String_o *)StringLiteral_2444/*"BATTLE_CONTINUE_NO_STONE"*/,
    0x80000000,
    v11);
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject
    || (UnityEngine_GameObject__SetActive(nostoneObject, 1, 0LL),
        window = this->fields.window,
        v15 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v15,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenNoStone__,
          0LL),
        !window) )
  {
    sub_B5D69C(nostoneObject, v12);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v15,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__openReTry(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  CommonUI_o *Instance; // x20
  NotificationDialog_ClickDelegate_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_42E9EB0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue_endRetryDialog__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NotificationDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_24215/*"通信に失敗したので再度通信を行います"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_24216/*"通信失敗"*/, v14, v15, v16);
    byte_42E9EB0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (NotificationDialog_ClickDelegate_o *)sub_B5D694(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endRetryDialog__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v19, v20);
  CommonUI__OpenNotificationDialog_18204284(
    Instance,
    (System_String_o *)StringLiteral_24216/*"通信失敗"*/,
    (System_String_o *)StringLiteral_24215/*"通信に失敗したので再度通信を行います"*/,
    v18,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  void *SelfUserGame; // x0
  __int64 v30; // x1
  UILabel_o *stoneBtnLabel; // x20
  __int64 *v32; // x8
  const MethodInfo *v33; // x1
  struct BattleData_o *data; // x8
  struct BattleData_o *v35; // x8
  const MethodInfo *v36; // x4
  WebViewObject_o *Component_WebViewObject; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v46; // x21

  if ( (byte_42E9EAA & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue_endOpenSpell__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SendEventToFsm___, v5, v6, v7);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_2433/*"BATTLE_CONTINUE_CHECK_SPELL"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_2432/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_2431/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, v26, v27, v28);
    byte_42E9EAA = 1;
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
    v32 = &StringLiteral_2431/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = &StringLiteral_2432/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/;
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)*v32, 0LL);
  if ( !stoneBtnLabel )
    goto LABEL_33;
  UILabel__set_text(stoneBtnLabel, (System_String_o *)SelfUserGame, 0LL);
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, v33);
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
    v35 = this->fields.data;
    if ( !v35 )
      goto LABEL_33;
    SelfUserGame = v35->fields.quest_ent;
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
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SendEventToFsm___);
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
    v44 = (System_Int32_array **)StringLiteral_5573/*"END_PROC"*/;
    Component_WebViewObject->fields.onError = (struct System_Action_string__o *)StringLiteral_5573/*"END_PROC"*/;
    sub_B5D560(
      (BattleServantConfConponent_o *)&Component_WebViewObject->fields.onError,
      v44,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  SelfUserGame = this->fields.commandspell_now;
  if ( !SelfUserGame )
LABEL_33:
    sub_B5D69C(SelfUserGame, v30);
  UIWidget__set_color((UIWidget_o *)SelfUserGame, this->fields.spellnowColor, 0LL);
LABEL_31:
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseCommandSpell,
    (System_String_o *)StringLiteral_2433/*"BATTLE_CONTINUE_CHECK_SPELL"*/,
    0x80000000,
    v36);
  window = this->fields.window;
  v46 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v46, (Il2CppObject *)this, Method_BattlePerformanceContinue_endOpenSpell__, 0LL);
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v46,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__openStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x4
  __int64 v12; // x1
  UnityEngine_GameObject_o *stoneObject; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v15; // x21

  if ( (byte_42E9EB7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue_endOpenStone__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_2434/*"BATTLE_CONTINUE_CHECK_STONE"*/, v8, v9, v10);
    byte_42E9EB7 = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseGem,
    (System_String_o *)StringLiteral_2434/*"BATTLE_CONTINUE_CHECK_STONE"*/,
    0x80000000,
    v11);
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 1, 0LL),
        window = this->fields.window,
        v15 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v15,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenStone__,
          0LL),
        !window) )
  {
    sub_B5D69C(stoneObject, v12);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v15,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__openStoneShop(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E9EC3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue_callbaclStoneShop__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StonePurchaseMenu_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E9EC3 = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (StonePurchaseMenu_CallbackFunc_o *)sub_B5D694(StonePurchaseMenu_CallbackFunc_TypeInfo);
  StonePurchaseMenu_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callbaclStoneShop__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__OpenStonePurchaseMenu(Instance, v12, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__openUseCheck(
        BattlePerformanceContinue_o *this,
        int32_t type,
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
  UnityEngine_Component_o *usecheckLabel; // x0
  UnityEngine_Object_o *addMsgInfo; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x0
  UILabel_o *addMsgLabel; // x20
  __int64 *v23; // x8
  UILabel_o *v24; // x20
  UnityEngine_Object_o *v25; // x20
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  const MethodInfo *v28; // x1

  if ( (byte_42E9ECC & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, type, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_2448/*"BATTLE_CONTINUE_USECHECK_STONE"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_2446/*"BATTLE_CONTINUE_STONEPAY_WARNING_MSG"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_2447/*"BATTLE_CONTINUE_USECHECK_SPELL"*/, v15, v16, v17);
    byte_42E9ECC = 1;
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
  v21 = UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v21, 28.0, 0LL);
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
    v23 = &StringLiteral_2447/*"BATTLE_CONTINUE_USECHECK_SPELL"*/;
    goto LABEL_39;
  }
  v24 = this->fields.usecheckLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  usecheckLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2448/*"BATTLE_CONTINUE_USECHECK_STONE"*/, 0LL);
  if ( !v24 )
    goto LABEL_49;
  UILabel__set_text(v24, (System_String_o *)usecheckLabel, 0LL);
  v25 = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
    goto LABEL_46;
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !usecheckLabel )
    goto LABEL_49;
  v26 = UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v26, -90.0, 0LL);
  usecheckLabel = (UnityEngine_Component_o *)this->fields.usecheckLabel;
  if ( !usecheckLabel
    || (v27 = UnityEngine_Component__get_gameObject(usecheckLabel, 0LL),
        GameObjectExtensions__SetLocalPositionY(v27, 82.0, 0LL),
        GameObjectExtensions__SetLocalPositionY(this->fields.useCheckOkBtn, -90.0, 0LL),
        GameObjectExtensions__SetLocalPositionY(this->fields.useCheckCancelBtn, -90.0, 0LL),
        (usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckBgSprite) == 0LL)
    || (UIWidget__set_height((UIWidget_o *)usecheckLabel, 275, 0LL),
        (usecheckLabel = (UnityEngine_Component_o *)this->fields.addMsgInfo) == 0LL) )
  {
LABEL_49:
    sub_B5D69C(usecheckLabel, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 1, 0LL);
  addMsgLabel = this->fields.addMsgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = &StringLiteral_2446/*"BATTLE_CONTINUE_STONEPAY_WARNING_MSG"*/;
LABEL_39:
  usecheckLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v23, 0LL);
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
  BattlePerformanceContinue__endOpenUsecheck(this, v28);
}


void __fastcall BattlePerformanceContinue__procContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9ECB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E9ECB = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNG(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleLogic_o *logic; // x19
  NotificationDialog_ClickDelegate_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E9EA3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceContinue_endDialog__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NotificationDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    byte_42E9EA3 = 1;
  }
  logic = this->fields.logic;
  v9 = (NotificationDialog_ClickDelegate_o *)sub_B5D694(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v9, (Il2CppObject *)this, Method_BattlePerformanceContinue_endDialog__, 0LL);
  if ( !logic )
    sub_B5D69C(v10, v11);
  BattleLogic__OpenBattleLoseDlg(logic, 1, 0, v9, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9ECA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E9ECA = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGGiveUpContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9EA1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E9EA1 = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  this->fields.IsContinueItem = 0;
  if ( !myFsm )
    sub_B5D69C(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_42E9EC5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E9EC5 = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__ClearObj(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(itemWindow, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9EB2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E9EB2 = 1;
  }
  BattlePerformanceContinue__closeSpell(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9EBD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E9EBD = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procOK(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceContinue_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  int32_t QuestId; // w20
  BattleData_o *data; // x8
  AdManager_o *v15; // x19

  v4 = this;
  if ( (byte_42E9EA2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v5, v6, v7);
    this = (BattlePerformanceContinue_o *)sub_B5D5C4(&StringLiteral_9842/*"OK"*/, v8, v9, v10);
    byte_42E9EA2 = 1;
  }
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_20;
  statusPerf = perf->fields.statusPerf;
  if ( !statusPerf )
    goto LABEL_20;
  this = (BattlePerformanceContinue_o *)statusPerf->fields.masterPerf;
  if ( !this )
    goto LABEL_20;
  BattlePerformanceMaster__updateCommandSpellIcon((BattlePerformanceMaster_o *)this, 0LL);
  this = (BattlePerformanceContinue_o *)v4->fields.logic;
  if ( !this )
    goto LABEL_20;
  BattleLogic__sendFsmEvent((BattleLogic_o *)this, (System_String_o *)StringLiteral_9842/*"OK"*/, 0LL);
  this = (BattlePerformanceContinue_o *)v4->fields.data;
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
      this = (BattlePerformanceContinue_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      data = v4->fields.data;
      if ( data )
      {
        v15 = (AdManager_o *)this;
        this = (BattlePerformanceContinue_o *)BattleData__getPhase(data, 0LL);
        if ( v15 )
        {
          AdManager__TrackEvent(v15, 10, 12, QuestId, (int32_t)this, 0LL, 0LL);
          return;
        }
      }
LABEL_20:
      sub_B5D69C(this, method);
    }
  }
}


void __fastcall BattlePerformanceContinue__procSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x0
  System_String_o *v20; // x20
  AssetLoader_LoadEndDataHandler_o *v21; // x21
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9EB3 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattlePerformanceContinue_endLoadCommandSPell__, v5, v6, v7);
    sub_B5D5C4(&int_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_4242/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v14, v15, v16);
    byte_42E9EB3 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B5D69C(0LL, v18);
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0LL);
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SpellImageIdBattle);
  v20 = System_String__Format((System_String_o *)StringLiteral_4242/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v19, 0LL);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endLoadCommandSPell__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v20, v21, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__procStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9EBE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E9EBE = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__refreshStoneNow(
        BattlePerformanceContinue_o *this,
        UserGameEntity_o *userGame,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserGameEntity_o *v4; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *SelfUserGame; // x0
  __int64 v10; // x1
  UILabel_o *gem_now; // x21
  Il2CppObject *v12; // x0
  UILabel_o *stone_now; // x19
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-24h] BYREF

  v4 = userGame;
  if ( (byte_42E9E9C & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)userGame, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v6, v7, v8);
    byte_42E9E9C = 1;
  }
  if ( !v4 )
  {
    SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
    v4 = (UserGameEntity_o *)SelfUserGame;
    if ( !SelfUserGame )
      goto LABEL_8;
  }
  gem_now = this->fields.gem_now;
  stone = v4->fields.stone;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
  SelfUserGame = System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v12, 0LL);
  if ( !gem_now
    || (UILabel__set_text(gem_now, SelfUserGame, 0LL),
        stone_now = this->fields.stone_now,
        v15 = v4->fields.stone,
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15),
        SelfUserGame = System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v14, 0LL),
        !stone_now) )
  {
LABEL_8:
    sub_B5D69C(SelfUserGame, v10);
  }
  UILabel__set_text(stone_now, SelfUserGame, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceContinue__CoEndContinue_d__132_o *v4; // x19
  int32_t _1__state; // w8
  float timer_5__2; // s8
  struct BattlePerformanceContinue_o *_4__this; // x8
  struct BattlePerformance_o *perf; // x8
  NGUIFader_o *Component_srcLineSprite; // x19
  int v10; // s0
  bool result; // w0
  float deltaTime; // s0
  Il2CppObject **p__2__current; // x19

  v4 = this;
  if ( (byte_42E6093 & 1) == 0 )
  {
    this = (BattlePerformanceContinue__CoEndContinue_d__132_o *)sub_B5D5C4(
                                                                  &Method_UnityEngine_GameObject_GetComponent_NGUIFader___,
                                                                  (_DWORD)method,
                                                                  v2,
                                                                  v3);
    byte_42E6093 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    timer_5__2 = v4->fields._timer_5__2;
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( timer_5__2 <= 1.0 )
      goto LABEL_13;
    if ( !_4__this
      || (perf = _4__this->fields.perf) == 0LL
      || (this = (BattlePerformanceContinue__CoEndContinue_d__132_o *)perf->fields.fadeObject) == 0LL
      || (Component_srcLineSprite = (NGUIFader_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___),
          *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL),
          !Component_srcLineSprite) )
    {
      sub_B5D69C(this, method);
    }
    NGUIFader__FadeStart(Component_srcLineSprite, *(UnityEngine_Color_o *)&v10, 0.5, 1, 0LL, 0, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  timer_5__2 = 0.0;
  v4->fields._timer_5__2 = 0.0;
  v4->fields.__1__state = -1;
LABEL_13:
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  v4->fields.__2__current = 0LL;
  p__2__current = &v4->fields.__2__current;
  *((float *)p__2__current + 4) = timer_5__2 + deltaTime;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattlePerformanceContinue__CoEndContinue_d__132_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  struct BattlePerformanceContinue_o *_4__this; // x8

  if ( (byte_42E6091 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E6091 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (CommonUI_o *)_4__this->fields.myFsm) == 0LL )
  {
    sub_B5D69C(Instance, v6);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  struct BattlePerformanceContinue_o *_4__this; // x9
  __int64 *v14; // x8

  if ( (byte_42E6092 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9842/*"OK"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_9396/*"NG"*/, v8, v9, v10);
    byte_42E6092 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || ((CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount(Instance, 0LL),
         _4__this = this->fields.__4__this,
         this->fields.isDecide)
      ? (v14 = &StringLiteral_9842/*"OK"*/)
      : (v14 = &StringLiteral_9396/*"NG"*/),
        !_4__this || (Instance = (CommonUI_o *)_4__this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(Instance, v12);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v14, 0LL);
}