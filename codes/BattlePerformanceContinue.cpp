void __fastcall BattlePerformanceContinue___ctor(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct UnityEngine_Color_o *p_spellBtnColor; // x21
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1

  p_spellBtnColor = &this->fields.spellBtnColor;
  if ( (byte_49FF269 & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    byte_49FF269 = 1;
  }
  *p_spellBtnColor = (struct UnityEngine_Color_o)xmmword_BA3C90;
  p_spellBtnColor[1] = (struct UnityEngine_Color_o)xmmword_BA4400;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.cancelInterruptionEvent = static_fields->Empty;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cancelInterruptionEvent, (int32_t)Empty, v2, v3);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceContinue__AttachStoneCountRefreshComponent(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_int__o *v7; // x21

  if ( (byte_49FF22F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, method);
    sub_1B640C8(&Method_BattlePerformanceContinue__AttachStoneCountRefreshComponent_b__85_0__, v3);
    byte_49FF22F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v5, v6);
  System_Action_int____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__AttachStoneCountRefreshComponent_b__85_0__,
    0LL);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v7, 0, 0LL);
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

  if ( (byte_49FF222 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1B640C8(&StringLiteral_4977/*"DEADLINE"*/, v4);
    byte_49FF222 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL),
        BattlePerformanceContinue__closeContinueItem(this, v6),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_4977/*"DEADLINE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__CheckContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  __int64 *v5; // x8

  if ( (byte_49FF22D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9573/*"OK"*/, method);
    sub_1B640C8(&StringLiteral_9200/*"NG"*/, v3);
    byte_49FF22D = 1;
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
      v5 = &StringLiteral_9200/*"NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_1B64324(data);
  }
  data = (BattleData_o *)this->fields.myFsm;
  this->fields.IsContinueItem = 1;
  if ( !data )
    goto LABEL_10;
  v5 = &StringLiteral_9573/*"OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)*v5, 0LL);
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
  Il2CppObject *Component_object; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  NGUIFader_OnFinished_o *v11; // x21
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FF259 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue__CheckDefenceTargetBroken_b__129_0__, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___, v3);
    sub_1B640C8(&NGUIFader_OnFinished_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_5593/*"EVENT_FALSE"*/, v5);
    byte_49FF259 = 1;
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
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)data,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
        v11 = (NGUIFader_OnFinished_o *)sub_1B64314(NGUIFader_OnFinished_TypeInfo, v9, v10);
        NGUIFader_OnFinished___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue__CheckDefenceTargetBroken_b__129_0__,
          0LL);
        if ( Component_object )
        {
          v12.fields.r = 1.0;
          v12.fields.g = 1.0;
          v12.fields.b = 1.0;
          v12.fields.a = 1.0;
          NGUIFader__FadeStart((NGUIFader_o *)Component_object, v12, 0.5, 0, v11, 0, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_1B64324(data);
  }
  data = (BattleData_o *)this->fields.myFsm;
  this->fields._isDefenceTargetBroken_k__BackingField = 0;
  if ( !data )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_5593/*"EVENT_FALSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__CloseGiveUp(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *giveUpWindow; // x0

  if ( (byte_49FF228 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9197/*"NEXT"*/, method);
    byte_49FF228 = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow
    || (UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0LL),
        (giveUpWindow = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64324(giveUpWindow);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)giveUpWindow, (System_String_o *)StringLiteral_9197/*"NEXT"*/, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceContinue__CoEndContinue(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FF25B & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformanceContinue__CoEndContinue_d__132_TypeInfo, method);
    byte_49FF25B = 1;
  }
  v4 = sub_1B64314(BattlePerformanceContinue__CoEndContinue_d__132_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattlePerformanceContinue__EndContinue(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0

  if ( this->fields._isDefenceTargetBroken_k__BackingField )
  {
    v3 = BattlePerformanceContinue__CoEndContinue(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  }
  this->fields._isDefenceTargetBroken_k__BackingField = 0;
}


void __fastcall BattlePerformanceContinue__Initialize(
        BattlePerformanceContinue_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Component_o *window; // x0
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x20
  UILabel_o *checkGiveUpLabel; // x20
  UILabel_o *checkUseCommandSpell; // x20
  UILabel_o *checkUseGem; // x20
  UILabel_o *checkUseBuyGem; // x20

  if ( (byte_49FF223 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, inperf);
    sub_1B640C8(&StringLiteral_2829/*"BATTLE_CONTINUE_NO_STONE"*/, v9);
    sub_1B640C8(&StringLiteral_2818/*"BATTLE_CONTINUE_CHECK_SPELL"*/, v10);
    sub_1B640C8(&StringLiteral_2819/*"BATTLE_CONTINUE_CHECK_STONE"*/, v11);
    sub_1B640C8(&StringLiteral_2942/*"BATTLE_RETIRE_CHECKSTR"*/, v12);
    byte_49FF223 = 1;
  }
  this->fields.perf = inperf;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.perf,
    (int32_t)inperf,
    (int32_t)indata,
    (int32_t)inlogic);
  this->fields.data = indata;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)indata, v13, v14);
  this->fields.logic = inlogic;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.logic, (int32_t)inlogic, v15, v16);
  window = (UnityEngine_Component_o *)this->fields.window;
  if ( !window )
    goto LABEL_26;
  window = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(window, 0LL);
  v19 = (UnityEngine_Transform_o *)window;
  if ( !byte_49F7111 )
  {
    window = (UnityEngine_Component_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v18);
    byte_49F7111 = 1;
  }
  if ( !v19 )
    goto LABEL_26;
  UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  window = (UnityEngine_Component_o *)this->fields.window;
  if ( !window )
    goto LABEL_26;
  (*(void (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&window->klass[1]._1.this_arg.bits)(
    window,
    window->klass[1]._1.element_class);
  window = (UnityEngine_Component_o *)this->fields.window;
  if ( !window )
    goto LABEL_26;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))window->klass[1]._1.parent)(
    window,
    window->klass[1]._1.generic_class);
  window = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !window )
    goto LABEL_26;
  window = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(window, 0LL);
  if ( !window )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (UnityEngine_Component_o *)this->fields.giveUpWindow;
  if ( !window )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (UnityEngine_Component_o *)this->fields.commandspellObject;
  if ( !window )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (UnityEngine_Component_o *)this->fields.stoneObject;
  if ( !window )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (UnityEngine_Component_o *)this->fields.nostoneObject;
  if ( !window )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (UnityEngine_Component_o *)this->fields.ContinueItemWindow;
  if ( !window )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  window = (UnityEngine_Component_o *)this->fields.bg;
  if ( !window )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)window, 0, 0LL);
  checkGiveUpLabel = this->fields.checkGiveUpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2942/*"BATTLE_RETIRE_CHECKSTR"*/, 0LL);
  if ( !checkGiveUpLabel )
    goto LABEL_26;
  UILabel__set_text(checkGiveUpLabel, (System_String_o *)window, 0LL);
  checkUseCommandSpell = this->fields.checkUseCommandSpell;
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2818/*"BATTLE_CONTINUE_CHECK_SPELL"*/, 0LL);
  if ( !checkUseCommandSpell )
    goto LABEL_26;
  UILabel__set_text(checkUseCommandSpell, (System_String_o *)window, 0LL);
  checkUseGem = this->fields.checkUseGem;
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2819/*"BATTLE_CONTINUE_CHECK_STONE"*/, 0LL);
  if ( !checkUseGem
    || (UILabel__set_text(checkUseGem, (System_String_o *)window, 0LL),
        checkUseBuyGem = this->fields.checkUseBuyGem,
        window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2829/*"BATTLE_CONTINUE_NO_STONE"*/, 0LL),
        !checkUseBuyGem)
    || (UILabel__set_text(checkUseBuyGem, (System_String_o *)window, 0LL),
        (window = (UnityEngine_Component_o *)this->fields.continueWaveRestartWindow) == 0LL)
    || ((*(void (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&window->klass[1]._1.this_arg.bits)(
          window,
          window->klass[1]._1.element_class),
        (window = (UnityEngine_Component_o *)this->fields.continueWaveRestartWindow) == 0LL) )
  {
LABEL_26:
    sub_1B64324(window);
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
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppClass *klass; // x8
  const MethodInfo *v11; // x8
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x21
  bool v15; // w22
  System_String_o *v16; // x0
  System_String_o *v17; // x20
  Il2CppObject *Instance; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_o *v21; // x22
  int v22; // [xsp+3Ch] [xbp-44h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_49FF25A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_BattlePerformanceContinue__OpenBrokenMessage_b__130_0__, v3);
    sub_1B640C8(&int_TypeInfo, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_24997/*"{0}_{1}"*/, v7);
    sub_1B640C8(&StringLiteral_2840/*"BATTLE_DIALOG_DEFENCE_TARGET_BROKEN"*/, v8);
    this = (BattlePerformanceContinue_o *)sub_1B640C8(&StringLiteral_1/*""*/, v9);
    byte_49FF25A = 1;
  }
  klass = v2[3].klass;
  if ( !klass )
    goto LABEL_14;
  v11 = klass->vtable[31].method;
  if ( !v11 )
    goto LABEL_14;
  v12 = (Il2CppObject *)StringLiteral_2840/*"BATTLE_DIALOG_DEFENCE_TARGET_BROKEN"*/;
  v22 = (int)v11->klass;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v14 = System_String__Format_61389768((System_String_o *)StringLiteral_24997/*"{0}_{1}"*/, v12, v13, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__ContainsKey(v14, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = v15 ? v14 : (System_String_o *)v12;
  v17 = LocalizationManager__Get(v16, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v19, v20);
  System_Action___ctor(v21, v2, Method_BattlePerformanceContinue__OpenBrokenMessage_b__130_0__, 0LL);
  if ( !Instance )
LABEL_14:
    sub_1B64324(this);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v17,
    v21,
    -1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0LL,
    0.0,
    0LL);
}


void __fastcall BattlePerformanceContinue__OpenContinueInterruption(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct BattleWindowInterruptionComponent_o *continueInterruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_49FF262 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue__OpenContinueInterruption_b__139_0__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_49FF262 = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, method, v2);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueInterruption_b__139_0__,
    0LL);
  if ( !continueInterruptionWindow )
    sub_1B64324(v7);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueInterruptionWindow->klass->vtable._10_Open.method)(
    continueInterruptionWindow,
    v6,
    continueInterruptionWindow->klass->vtable._11_CompOpen.methodPtr);
}


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
  void *ContinueItemWindow; // x0
  _DWORD *v23; // x20
  UILabel_o *ContinueCommandSpellNum; // x21
  System_String_o *v25; // x1
  UILabel_o *ContinueStoneNum; // x21
  Il2CppObject *v27; // x0
  UILabel_o *ContinueItemNumLabel; // x21
  Il2CppObject *v29; // x0
  UISprite_o *ContinueItemSpr; // x21
  int32_t ContinueItemImageId; // w22
  int v32; // w21
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 *v35; // x8
  __int64 v36; // x1
  UILabel_o *ContinueItemBtnLabel; // x21
  UILabel_o *deadLine; // x21
  System_String_o *v39; // x22
  int64_t ContinueDeadLine; // x0
  Il2CppObject *RestTime; // x0
  int v42; // w21
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 *v45; // x8
  __int64 v46; // x1
  UILabel_o *ContinueCommandSpellBtnLabel; // x21
  int v48; // w21
  UILabel_o *ContinueStoneBtnLabel; // x20
  System_String_o **v50; // x8
  const MethodInfo *v51; // x1
  UILabel_o *ContinueRetireBtnLabel; // x20
  const MethodInfo *v53; // x4
  System_String_o **v54; // x8
  struct BattleData_o *data; // x8
  struct BattleData_o *v56; // x8
  __int64 v57; // x1
  __int64 v58; // x2
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v63; // x21
  int32_t ContinueItemNum; // [xsp+4h] [xbp-4Ch] BYREF
  int v65; // [xsp+8h] [xbp-48h] BYREF
  int32_t OverwriteCommandSpellContinue; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FF22E & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_BattlePerformanceContinue_endOpenContinueItem__, v3);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_9573/*"OK"*/, v9);
    sub_1B640C8(&StringLiteral_2817/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, v10);
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, v11);
    sub_1B640C8(&StringLiteral_2824/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, v12);
    sub_1B640C8(&StringLiteral_2816/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, v13);
    sub_1B640C8(&StringLiteral_2834/*"BATTLE_CONTINUE_USE_SPELL"*/, v14);
    sub_1B640C8(&StringLiteral_9574/*"OK_CONTINUE_ITEM"*/, v15);
    sub_1B640C8(&StringLiteral_24834/*"{0:#,0}"*/, v16);
    sub_1B640C8(&StringLiteral_2821/*"BATTLE_CONTINUE_ITEM_BTN"*/, v17);
    sub_1B640C8(&StringLiteral_2825/*"BATTLE_CONTINUE_ITEM_SELECT"*/, v18);
    sub_1B640C8(&StringLiteral_2826/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/, v19);
    sub_1B640C8(&StringLiteral_1/*""*/, v20);
    sub_1B640C8(&StringLiteral_2830/*"BATTLE_CONTINUE_RETIRE"*/, v21);
    byte_49FF22E = 1;
  }
  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ContinueItemWindow, 1, 0LL);
  ContinueItemWindow = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_73;
  v23 = ContinueItemWindow;
  ContinueItemWindow = (void *)BattleData__CheckCurrentTemporaryCommandSpell(
                                 this->fields.data,
                                 (UserGameEntity_o *)ContinueItemWindow,
                                 0LL);
  if ( !this->fields.data )
    goto LABEL_73;
  OverwriteCommandSpellContinue = BattleData__GetOverwriteCommandSpellContinue(
                                    this->fields.data,
                                    (int32_t)ContinueItemWindow,
                                    0LL);
  ContinueCommandSpellNum = this->fields.ContinueCommandSpellNum;
  ContinueItemWindow = System_Int32__ToString((int32_t)&OverwriteCommandSpellContinue, 0LL);
  if ( !ContinueCommandSpellNum )
    goto LABEL_73;
  v25 = (System_String_o *)(ContinueItemWindow ? ContinueItemWindow : StringLiteral_1/*""*/);
  UILabel__set_text(ContinueCommandSpellNum, v25, 0LL);
  if ( !v23 )
    goto LABEL_73;
  ContinueStoneNum = this->fields.ContinueStoneNum;
  v65 = v23[44];
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65);
  ContinueItemWindow = System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v27, 0LL);
  if ( !ContinueStoneNum )
    goto LABEL_73;
  UILabel__set_text(ContinueStoneNum, (System_String_o *)ContinueItemWindow, 0LL);
  ContinueItemWindow = this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  BattleData__UpdateContinueItemInfo((BattleData_o *)ContinueItemWindow, 0LL);
  ContinueItemWindow = this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  ContinueItemNumLabel = this->fields.ContinueItemNumLabel;
  ContinueItemNum = BattleData__GetContinueItemNum((BattleData_o *)ContinueItemWindow, 0LL);
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ContinueItemNum);
  ContinueItemWindow = System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v29, 0LL);
  if ( !ContinueItemNumLabel )
    goto LABEL_73;
  UILabel__set_text(ContinueItemNumLabel, (System_String_o *)ContinueItemWindow, 0LL);
  ContinueItemWindow = this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  ContinueItemSpr = this->fields.ContinueItemSpr;
  ContinueItemImageId = BattleData__GetContinueItemImageId((BattleData_o *)ContinueItemWindow, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(ContinueItemSpr, ContinueItemImageId, 0LL);
  ContinueItemWindow = this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  ContinueItemWindow = (void *)BattleData__GetContinueItemNum((BattleData_o *)ContinueItemWindow, 0LL);
  if ( !this->fields.ContinueItemBtn )
    goto LABEL_73;
  v32 = (int)ContinueItemWindow;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                         this->fields.ContinueItemBtn,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( v32 < 1 )
  {
    if ( !ContinueItemWindow )
      goto LABEL_73;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0LL);
    ContinueItemWindow = this->fields.ContinueItemBtn;
    if ( !ContinueItemWindow )
      goto LABEL_73;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_73;
    v35 = &StringLiteral_5463/*"END_PROC"*/;
  }
  else
  {
    if ( !ContinueItemWindow )
      goto LABEL_73;
    v67.fields.r = 1.0;
    v67.fields.g = 1.0;
    v67.fields.b = 1.0;
    v67.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, v67, 0LL);
    ContinueItemWindow = this->fields.ContinueItemBtn;
    if ( !ContinueItemWindow )
      goto LABEL_73;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_73;
    v35 = &StringLiteral_9574/*"OK_CONTINUE_ITEM"*/;
  }
  v36 = *v35;
  *((_QWORD *)ContinueItemWindow + 5) = *v35;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)ContinueItemWindow + 40), v36, v33, v34);
  ContinueItemBtnLabel = this->fields.ContinueItemBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2821/*"BATTLE_CONTINUE_ITEM_BTN"*/, 0LL);
  if ( !ContinueItemBtnLabel )
    goto LABEL_73;
  UILabel__set_text(ContinueItemBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  deadLine = this->fields.deadLine;
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2824/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, 0LL);
  if ( !this->fields.data )
    goto LABEL_73;
  v39 = (System_String_o *)ContinueItemWindow;
  ContinueDeadLine = BattleData__GetContinueDeadLine(this->fields.data, 0LL);
  RestTime = (Il2CppObject *)LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
  ContinueItemWindow = System_String__Format(v39, RestTime, 0LL);
  if ( !deadLine )
    goto LABEL_73;
  UILabel__set_text(deadLine, (System_String_o *)ContinueItemWindow, 0LL);
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  v42 = OverwriteCommandSpellContinue;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( v42 >= 3 )
  {
    if ( !ContinueItemWindow )
      goto LABEL_73;
    v68.fields.r = 1.0;
    v68.fields.g = 1.0;
    v68.fields.b = 1.0;
    v68.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, v68, 0LL);
    ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
    if ( !ContinueItemWindow )
      goto LABEL_73;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_73;
    v45 = &StringLiteral_9573/*"OK"*/;
  }
  else
  {
    if ( !ContinueItemWindow )
      goto LABEL_73;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0LL);
    ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
    if ( !ContinueItemWindow )
      goto LABEL_73;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_73;
    v45 = &StringLiteral_5463/*"END_PROC"*/;
  }
  v46 = *v45;
  *((_QWORD *)ContinueItemWindow + 5) = *v45;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)ContinueItemWindow + 40), v46, v43, v44);
  ContinueCommandSpellBtnLabel = this->fields.ContinueCommandSpellBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2834/*"BATTLE_CONTINUE_USE_SPELL"*/, 0LL);
  if ( !ContinueCommandSpellBtnLabel )
    goto LABEL_73;
  UILabel__set_text(ContinueCommandSpellBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  v48 = v23[44];
  ContinueStoneBtnLabel = this->fields.ContinueStoneBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v50 = (System_String_o **)(v48 < 1 ? &StringLiteral_2816/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/ : &StringLiteral_2817/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
  ContinueItemWindow = LocalizationManager__Get(*v50, 0LL);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_73;
  UILabel__set_text(ContinueStoneBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, v51);
  ContinueRetireBtnLabel = this->fields.ContinueRetireBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2830/*"BATTLE_CONTINUE_RETIRE"*/, 0LL);
  if ( !ContinueRetireBtnLabel )
    goto LABEL_73;
  UILabel__set_text(ContinueRetireBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  v54 = (System_String_o **)(OverwriteCommandSpellContinue >= 3 ? &StringLiteral_2825/*"BATTLE_CONTINUE_ITEM_SELECT"*/ : &StringLiteral_2826/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/);
  BattlePerformanceContinue__SetContinueMessage(this, this->fields.ContinueLabel, *v54, 0x80000000, v53);
  data = this->fields.data;
  if ( !data )
    goto LABEL_73;
  ContinueItemWindow = data->fields.quest_ent;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  ContinueItemWindow = (void *)QuestEntity__HasFlag((QuestEntity_o *)ContinueItemWindow, 0x400000000LL, 0LL);
  if ( ((unsigned __int8)ContinueItemWindow & 1) != 0 )
    goto LABEL_65;
  v56 = this->fields.data;
  if ( !v56 || (ContinueItemWindow = v56->fields.quest_ent) == 0LL )
LABEL_73:
    sub_1B64324(ContinueItemWindow);
  if ( !QuestEntity__HasFlag((QuestEntity_o *)ContinueItemWindow, 0x100000000LL, 0LL) )
    goto LABEL_71;
LABEL_65:
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !ContinueItemWindow )
    goto LABEL_73;
  UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0LL);
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
  if ( !ContinueItemWindow )
    goto LABEL_73;
  v61 = StringLiteral_5463/*"END_PROC"*/;
  *((_QWORD *)ContinueItemWindow + 5) = StringLiteral_5463/*"END_PROC"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)ContinueItemWindow + 40), v61, v59, v60);
  ContinueItemWindow = this->fields.ContinueCommandSpellNum;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellnowColor, 0LL);
LABEL_71:
  window = this->fields.window;
  v63 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v57, v58);
  BattleWindowComponent_EndCall___ctor(
    v63,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endOpenContinueItem__,
    0LL);
  if ( !window )
    goto LABEL_73;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v63,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__OpenContinueWaveRestart(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_49FF25E & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue__OpenContinueWaveRestart_b__135_0__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_49FF25E = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, method, v2);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueWaveRestart_b__135_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_1B64324(v7);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueWaveRestartWindow->klass->vtable._10_Open.method)(
    continueWaveRestartWindow,
    v6,
    continueWaveRestartWindow->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__OpenContinueWaveSelectWindow(
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
  UnityEngine_Object_o *waveSelectDialog; // x20
  UnityEngine_GameObject_o *waveSelectDialogPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  int64_t Object; // x0
  Il2CppObject *Component_object; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w20
  int32_t Phase; // w21
  int32_t EventId; // w24
  Il2CppObject *Master_object; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  UserEventDeckEntity_o *v28; // x22
  QuestRestrictionInfo_o *v29; // x23
  int32_t v30; // w20
  int32_t DispWaveCount; // w0
  WaveBattleSelectWaveDialog_o *v32; // x24
  int32_t v33; // w21
  __int64 v34; // x1
  __int64 v35; // x2
  WaveBattleSelectWaveDialog_CloseDelegate_o *v36; // x25
  WaveBattleSelectWaveDialog_o *v37; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  System_Action_int__o *v40; // x21
  WaveBattleSelectWaveDialog_o *v41; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  System_Action_o *v44; // x21

  if ( (byte_49FF266 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, method);
    sub_1B640C8(&System_Action_TypeInfo, v3);
    sub_1B640C8(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_0__, v4);
    sub_1B640C8(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__, v5);
    sub_1B640C8(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_2__, v6);
    sub_1B640C8(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestGroupMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventDeckMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&QuestRestrictionInfo_TypeInfo, v14);
    byte_49FF266 = 1;
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      goto LABEL_24;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    this->fields.waveSelectDialog = (struct WaveBattleSelectWaveDialog_o *)Component_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.waveSelectDialog,
      (int32_t)Component_object,
      v20,
      v21);
  }
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_24;
  Object = BattleData__getQuestId((BattleData_o *)Object, 0LL);
  if ( !this->fields.data )
    goto LABEL_24;
  v22 = Object;
  Phase = BattleData__getPhase(this->fields.data, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Object )
    goto LABEL_24;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Object, v22, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Object = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_24;
  Object = (int64_t)UserEventDeckMaster__getDeckList(
                      (UserEventDeckMaster_o *)Master_object,
                      Object,
                      EventId,
                      v22,
                      Phase,
                      0LL);
  if ( !Object )
    goto LABEL_24;
  if ( !*(_DWORD *)(Object + 24) )
    sub_1B6432C(Object, v26);
  v28 = *(UserEventDeckEntity_o **)(Object + 32);
  v29 = (QuestRestrictionInfo_o *)sub_1B64314(QuestRestrictionInfo_TypeInfo, v26, v27);
  QuestRestrictionInfo___ctor_40081728(v29, EventId, v22, Phase, 0LL);
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_24;
  Object = BattleData__GetMaxWaveCount((BattleData_o *)Object, 0LL);
  if ( !this->fields.data )
    goto LABEL_24;
  v30 = Object;
  DispWaveCount = BattleData__getDispWaveCount(this->fields.data, 0LL);
  v32 = this->fields.waveSelectDialog;
  v33 = DispWaveCount;
  v36 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_1B64314(
                                                        WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo,
                                                        v34,
                                                        v35);
  WaveBattleSelectWaveDialog_CloseDelegate___ctor(
    v36,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_0__,
    0LL);
  if ( !v32 )
    goto LABEL_24;
  WaveBattleSelectWaveDialog__SetDialog(v32, v28, v29, v30, v33, 1, v36, 0LL);
  v37 = this->fields.waveSelectDialog;
  v40 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v38, v39);
  System_Action_int____ctor(
    v40,
    (Il2CppObject *)this,
    (intptr_t)Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__,
    0LL);
  if ( !v37
    || (WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(v37, v40, 0LL),
        v41 = this->fields.waveSelectDialog,
        v44 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v42, v43),
        System_Action___ctor(
          v44,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_2__,
          0LL),
        !v41) )
  {
LABEL_24:
    sub_1B64324(Object);
  }
  WaveBattleSelectWaveDialog__Open_32128076(v41, v44, 0LL);
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
  struct BattleData_o *data; // x8
  struct BattleEntity_o *battle_ent; // x8
  QuestEntity_o *v14; // x20
  UILabel_o *giveUpContinueItemNum; // x20
  Il2CppObject *v16; // x0
  UISprite_o *giveUpContinueItemSpr; // x20
  int32_t ContinueItemImageId; // w21
  UILabel_o *checkGiveUpLabel; // x20
  bool HasFlag; // w0
  bool v21; // w21
  __int64 *v22; // x8
  int32_t ContinueItemNum; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FF227 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_2942/*"BATTLE_RETIRE_CHECKSTR"*/, v8);
    sub_1B640C8(&StringLiteral_24834/*"{0:#,0}"*/, v9);
    sub_1B640C8(&StringLiteral_2943/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/, v10);
    byte_49FF227 = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0LL);
  if ( !giveUpWindow )
    goto LABEL_54;
  v24.fields.x = 0.0;
  v24.fields.z = 0.0;
  v24.fields.y = 72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v24, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpBg;
  if ( !giveUpWindow )
    goto LABEL_54;
  UIWidget__set_height((UIWidget_o *)giveUpWindow, 239, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpTitle;
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)giveUpWindow,
                                               0LL);
  if ( !giveUpWindow )
    goto LABEL_54;
  v25.fields.x = 0.0;
  v25.fields.z = 0.0;
  v25.fields.y = 77.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v25, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)giveUpWindow,
                                               0LL);
  if ( !giveUpWindow )
    goto LABEL_54;
  v26.fields.x = 0.0;
  v26.fields.y = 6.0;
  v26.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v26, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.giveUpContinueItemLabel;
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)giveUpWindow, 0LL);
  if ( !giveUpWindow )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0LL);
  giveUpWindow = this->fields.giveUpOkBtn;
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0LL);
  if ( !giveUpWindow )
    goto LABEL_54;
  v27.fields.z = 0.0;
  v27.fields.x = 193.0;
  v27.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v27, 0LL);
  giveUpWindow = this->fields.giveUpCancelBtn;
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0LL);
  if ( !giveUpWindow )
    goto LABEL_54;
  v28.fields.z = 0.0;
  v28.fields.x = -193.0;
  v28.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v28, 0LL);
  giveUpWindow = this->fields.giveUpContinueItemRoot;
  if ( !giveUpWindow )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)giveUpWindow,
                                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  data = this->fields.data;
  if ( !data )
    goto LABEL_54;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent || !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)giveUpWindow,
                                               battle_ent->fields.questId,
                                               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v14 = (QuestEntity_o *)giveUpWindow;
  if ( this->fields.IsContinueItem )
  {
    giveUpWindow = (UnityEngine_GameObject_o *)this->fields.data;
    if ( !giveUpWindow )
      goto LABEL_54;
    giveUpWindow = (UnityEngine_GameObject_o *)BattleData__GetContinueItemNum((BattleData_o *)giveUpWindow, 0LL);
    if ( (int)giveUpWindow >= 1 )
    {
      giveUpWindow = this->fields.giveUpWindow;
      if ( giveUpWindow )
      {
        giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0LL);
        if ( giveUpWindow )
        {
          v29.fields.x = 0.0;
          v29.fields.z = 0.0;
          v29.fields.y = 66.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v29, 0LL);
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
                v30.fields.x = 0.0;
                v30.fields.z = 0.0;
                v30.fields.y = 97.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v30, 0LL);
                giveUpWindow = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
                if ( giveUpWindow )
                {
                  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)giveUpWindow,
                                                               0LL);
                  if ( giveUpWindow )
                  {
                    v31.fields.x = 0.0;
                    v31.fields.y = 26.0;
                    v31.fields.z = 0.0;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v31, 0LL);
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
                            v32.fields.z = 0.0;
                            v32.fields.x = 193.0;
                            v32.fields.y = -92.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v32, 0LL);
                            giveUpWindow = this->fields.giveUpCancelBtn;
                            if ( giveUpWindow )
                            {
                              giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                           giveUpWindow,
                                                                           0LL);
                              if ( giveUpWindow )
                              {
                                v33.fields.z = 0.0;
                                v33.fields.x = -193.0;
                                v33.fields.y = -92.0;
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)giveUpWindow,
                                  v33,
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
                                    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ContinueItemNum);
                                    giveUpWindow = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                 (System_String_o *)StringLiteral_24834/*"{0:#,0}"*/,
                                                                                 v16,
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
                                        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                        AtlasManager__SetItem(giveUpContinueItemSpr, ContinueItemImageId, 0LL);
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
      sub_1B64324(giveUpWindow);
    }
  }
  if ( !v14 )
    goto LABEL_54;
  HasFlag = QuestEntity__HasFlag(v14, 0x40000000LL, 0LL);
  checkGiveUpLabel = this->fields.checkGiveUpLabel;
  v21 = HasFlag;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v21 )
      goto LABEL_48;
LABEL_50:
    v22 = &StringLiteral_2942/*"BATTLE_RETIRE_CHECKSTR"*/;
    goto LABEL_51;
  }
  if ( !HasFlag )
    goto LABEL_50;
LABEL_48:
  v22 = &StringLiteral_2943/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/;
LABEL_51:
  giveUpWindow = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v22, 0LL);
  if ( !checkGiveUpLabel )
    goto LABEL_54;
  UILabel__set_text(checkGiveUpLabel, (System_String_o *)giveUpWindow, 0LL);
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(giveUpWindow, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__OpenInterruptionConfirmWindow(
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
  Il2CppObject *Instance; // x0
  Il2CppObject *v11; // x20
  System_String_o *v12; // x21
  System_String_o *v13; // x22
  System_String_o *v14; // x23
  System_String_o *v15; // x24
  __int64 v16; // x1
  __int64 v17; // x2
  CommonConfirmDialog_ClickDelegate_o *v18; // x25

  if ( (byte_49FF264 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue__OpenInterruptionConfirmWindow_b__141_0__, method);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_2882/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, v6);
    sub_1B640C8(&StringLiteral_2880/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, v7);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v8);
    sub_1B640C8(&StringLiteral_2879/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, v9);
    byte_49FF264 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0, 0LL);
  v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2880/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2879/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2882/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v18 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v16, v17);
  CommonConfirmDialog_ClickDelegate___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenInterruptionConfirmWindow_b__141_0__,
    0LL);
  if ( !v11 )
LABEL_8:
    sub_1B64324(Instance);
  CommonUI__OpenConfirmDecideDialog((CommonUI_o *)v11, v12, v13, v14, v15, v18, 23, 280, 13.0, 22, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__OpenWaveSelectConfirmDialog(
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
  BattleData_o *data; // x0
  int32_t selectedInterruptionWave; // w21
  int32_t DispWaveCount; // w20
  struct BattleData_o *v16; // x8
  System_String_o *v17; // x20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  struct BattleData_o *v20; // x8
  System_String_o *v21; // x20
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x20
  int32_t v25; // w22
  int32_t v26; // w21
  System_String_o *v27; // x0
  struct BattleData_o *v28; // x8
  System_String_o *v29; // x21
  Il2CppObject *v30; // x0
  System_String_o *v31; // x21
  int32_t v32; // w27
  int32_t v33; // w22
  Il2CppObject *Instance; // x23
  System_String_o *v35; // x24
  System_String_o *v36; // x25
  __int64 v37; // x1
  __int64 v38; // x2
  CommonConfirmDialog_ClickDelegate_o *v39; // x26
  int32_t decideTxtSize; // w8
  int32_t v41; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_49FF267 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue__OpenWaveSelectConfirmDialog_b__144_0__, method);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_2889/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, v6);
    sub_1B640C8(&StringLiteral_2887/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, v7);
    sub_1B640C8(&StringLiteral_2886/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, v8);
    sub_1B640C8(&StringLiteral_2888/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/, v9);
    sub_1B640C8(&StringLiteral_2891/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, v10);
    sub_1B640C8(&StringLiteral_1222/*"00"*/, v11);
    sub_1B640C8(&StringLiteral_2890/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/, v12);
    byte_49FF267 = 1;
  }
  v41 = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  selectedInterruptionWave = data->fields.selectedInterruptionWave;
  DispWaveCount = BattleData__getDispWaveCount(data, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( selectedInterruptionWave == DispWaveCount )
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2890/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/, 0LL);
    v16 = this->fields.data;
    if ( !v16 )
      goto LABEL_28;
    v17 = (System_String_o *)data;
    v18 = (Il2CppObject *)System_Int32__ToString_62180668((int)v16 + 1040, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
    v19 = System_String__Format(v17, v18, 0LL);
  }
  else
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2889/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0LL);
    v20 = this->fields.data;
    if ( !v20 )
      goto LABEL_28;
    v21 = (System_String_o *)data;
    data = (BattleData_o *)System_Int32__ToString_62180668((int)v20 + 1040, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
    if ( !this->fields.data )
      goto LABEL_28;
    v22 = (Il2CppObject *)data;
    v41 = BattleData__getDispWaveCount(this->fields.data, 0LL);
    v23 = (Il2CppObject *)System_Int32__ToString_62180668((int32_t)&v41, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
    v19 = System_String__Format_61389768(v21, v22, v23, 0LL);
  }
  v24 = v19;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  v25 = data->fields.selectedInterruptionWave;
  v26 = BattleData__getDispWaveCount(data, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v25 == v26 )
  {
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2888/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/, 0LL);
  }
  else
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2887/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0LL);
    v28 = this->fields.data;
    if ( !v28 )
      goto LABEL_28;
    v29 = (System_String_o *)data;
    v30 = (Il2CppObject *)System_Int32__ToString_62180668((int)v28 + 1040, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
    v27 = System_String__Format(v29, v30, 0LL);
  }
  v31 = v27;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  v32 = data->fields.selectedInterruptionWave;
  v33 = BattleData__getDispWaveCount(data, 0LL);
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !data )
    goto LABEL_28;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)data, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_2891/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, 0LL);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2886/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, 0LL);
  v39 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v37, v38);
  CommonConfirmDialog_ClickDelegate___ctor(
    v39,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenWaveSelectConfirmDialog_b__144_0__,
    0LL);
  if ( !Instance )
LABEL_28:
    sub_1B64324(data);
  if ( v32 == v33 )
    decideTxtSize = 30;
  else
    decideTxtSize = 22;
  CommonUI__OpenConfirmDecideDialog(
    (CommonUI_o *)Instance,
    v35,
    v24,
    v31,
    v36,
    v39,
    26,
    280,
    13.0,
    decideTxtSize,
    1,
    0LL);
}


void __fastcall BattlePerformanceContinue__ProcInterruption(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct BattleWindowInterruptionComponent_o *continueInterruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_49FF265 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue__ProcInterruption_b__142_0__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_49FF265 = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, method, v2);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__ProcInterruption_b__142_0__,
    0LL);
  if ( !continueInterruptionWindow )
    sub_1B64324(v7);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueInterruptionWindow->klass->vtable._12_Close.method)(
    continueInterruptionWindow,
    v6,
    continueInterruptionWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__ProcSelectWaveRestart(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *waveSelectDialog; // x20
  WaveBattleSelectWaveDialog_o *v6; // x0
  UnityEngine_Object_o *continueInterruptionWindow; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  struct BattleWindowInterruptionComponent_o *v10; // x20
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_49FF268 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue__ProcSelectWaveRestart_b__145_0__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FF268 = 1;
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0LL, 0LL) )
  {
    v6 = this->fields.waveSelectDialog;
    if ( !v6 )
      goto LABEL_14;
    WaveBattleSelectWaveDialog__Close(v6, 0LL);
  }
  continueInterruptionWindow = (UnityEngine_Object_o *)this->fields.continueInterruptionWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(continueInterruptionWindow, 0LL, 0LL) )
  {
    v10 = this->fields.continueInterruptionWindow;
    v11 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v8, v9);
    BattleWindowComponent_EndCall___ctor(
      v11,
      (Il2CppObject *)this,
      Method_BattlePerformanceContinue__ProcSelectWaveRestart_b__145_0__,
      0LL);
    if ( v10 )
    {
      ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v10->klass->vtable._12_Close.method)(
        v10,
        v11,
        v10->klass->vtable._13_CompClose.methodPtr);
      return;
    }
LABEL_14:
    sub_1B64324(v6);
  }
}


void __fastcall BattlePerformanceContinue__ProcWaveRestartFromInterruption(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct BattleWindowInterruptionComponent_o *continueInterruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_49FF263 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue__ProcWaveRestartFromInterruption_b__140_0__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_49FF263 = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, method, v2);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__ProcWaveRestartFromInterruption_b__140_0__,
    0LL);
  if ( !continueInterruptionWindow )
    sub_1B64324(v7);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueInterruptionWindow->klass->vtable._12_Close.method)(
    continueInterruptionWindow,
    v6,
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
    sub_1B64324(ContinueItemWindow);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *SelfUserGame; // x0
  System_String_o *mText; // x21
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  struct BattleData_o *data; // x8
  struct BattleDefenceTargetData_o *defenceTargetData; // x8
  Il2CppObject *v19; // x20
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x21
  System_String_o *v23; // x22
  bool v24; // w23
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  int32_t uiId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF25C & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, label);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_2820/*"BATTLE_CONTINUE_DEFENCE_TARGET_HEAL"*/, v10);
    sub_1B640C8(&StringLiteral_24997/*"{0}_{1}"*/, v11);
    sub_1B640C8(&StringLiteral_2828/*"BATTLE_CONTINUE_NOT_ENOUGH_STONE"*/, v12);
    byte_49FF25C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__Get(localizationKey, 0LL);
  if ( !label )
    goto LABEL_26;
  UILabel__set_text(label, (System_String_o *)SelfUserGame, 0LL);
  if ( stoneCount == 0x80000000 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_26;
    stoneCount = *((_DWORD *)SelfUserGame + 44);
  }
  if ( stoneCount <= 0 )
  {
    mText = label->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2828/*"BATTLE_CONTINUE_NOT_ENOUGH_STONE"*/, 0LL);
    v16 = System_String__Concat_61375396(mText, v15, 0LL);
    UILabel__set_text(label, v16, 0LL);
  }
  SelfUserGame = this->fields.data;
  if ( !SelfUserGame )
    goto LABEL_26;
  SelfUserGame = (void *)BattleData__CheckDefenceTargetData((BattleData_o *)SelfUserGame, 0LL);
  if ( ((unsigned __int8)SelfUserGame & 1) == 0 )
    return;
  data = this->fields.data;
  if ( !data || (defenceTargetData = data->fields.defenceTargetData) == 0LL )
LABEL_26:
    sub_1B64324(SelfUserGame);
  v19 = (Il2CppObject *)StringLiteral_2820/*"BATTLE_CONTINUE_DEFENCE_TARGET_HEAL"*/;
  uiId = defenceTargetData->fields.uiId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &uiId);
  v21 = System_String__Format_61389768((System_String_o *)StringLiteral_24997/*"{0}_{1}"*/, v19, v20, 0LL);
  v22 = label->fields.mText;
  v23 = v21;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = LocalizationManager__ContainsKey(v23, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v24 )
    v25 = v23;
  else
    v25 = (System_String_o *)v19;
  v26 = LocalizationManager__Get(v25, 0LL);
  v27 = System_String__Concat_61375396(v22, v26, 0LL);
  UILabel__set_text(label, v27, 0LL);
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
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x20

  if ( (byte_49FF258 & 1) == 0 )
  {
    sub_1B640C8(&BattleData_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandSpellMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_3828/*"CONNECT_OK"*/, v6);
    sub_1B640C8(&StringLiteral_6853/*"GAME_OVER_COMMAND_SPELL_ID"*/, v7);
    byte_49FF258 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  Instance = (void *)ConstantMaster__getValue((System_String_o *)StringLiteral_6853/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int32_t)Instance,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_12;
  if ( !this->fields.data )
    goto LABEL_12;
  BattleData__LossTemporaryCommandSpell(this->fields.data, *((_DWORD *)Instance + 5), 0LL);
  Instance = this->fields.data;
  if ( !Instance )
    goto LABEL_12;
  BattleData__SuccessContinue((BattleData_o *)Instance, 0LL);
  this->fields.continueRetryFlg = 0;
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setContinueBattleFlg(0, 1, 0LL);
  Instance = this->fields.myFsm;
  if ( !Instance )
LABEL_12:
    sub_1B64324(Instance);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3828/*"CONNECT_OK"*/, 0LL);
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
    sub_1B64324(0LL);
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
  BattleDropItemComponent_ClickDelegate_o *v14; // x23
  UILabel_o *commandspell_now; // x21
  System_String_o *v16; // x1
  const MethodInfo *v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  const MethodInfo *v20; // x1
  int32_t OverwriteCommandSpellContinue; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF226 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue_StartContinueImpl__, inIsProgress);
    sub_1B640C8(&Method_BattlePerformanceContinue_showConf__, v4);
    sub_1B640C8(&BattleDropItemComponent_ClickDelegate_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_12179/*"START_CONTINUE"*/, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49FF226 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_20;
  itemWindow = this->fields.itemWindow;
  v10 = SelfUserGame;
  DropItems = BattleData__getDropItems(this->fields.data, 0LL);
  v14 = (BattleDropItemComponent_ClickDelegate_o *)sub_1B64314(BattleDropItemComponent_ClickDelegate_TypeInfo, v12, v13);
  BattleDropItemComponent_ClickDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_showConf__,
    0LL);
  if ( !itemWindow )
    goto LABEL_20;
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, DropItems, v14, this->fields.itemColumnCount, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.itemWindow;
  if ( !SelfUserGame )
    goto LABEL_20;
  BattleViewItemlistComponent__setHide((BattleViewItemlistComponent_o *)SelfUserGame, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.data;
  if ( !SelfUserGame )
    goto LABEL_20;
  SelfUserGame = (UserGameEntity_o *)BattleData__CheckCurrentTemporaryCommandSpell(
                                       (BattleData_o *)SelfUserGame,
                                       v10,
                                       0LL);
  if ( !this->fields.data )
    goto LABEL_20;
  OverwriteCommandSpellContinue = BattleData__GetOverwriteCommandSpellContinue(
                                    this->fields.data,
                                    (int32_t)SelfUserGame,
                                    0LL);
  commandspell_now = this->fields.commandspell_now;
  SelfUserGame = (UserGameEntity_o *)System_Int32__ToString((int32_t)&OverwriteCommandSpellContinue, 0LL);
  if ( !commandspell_now )
    goto LABEL_20;
  v16 = SelfUserGame ? (System_String_o *)SelfUserGame : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(commandspell_now, v16, 0LL);
  BattlePerformanceContinue__refreshStoneNow(this, v10, v17);
  SelfUserGame = (UserGameEntity_o *)this->fields.commandspellObject;
  if ( !SelfUserGame )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.stoneObject;
  if ( !SelfUserGame )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.nostoneObject;
  if ( !SelfUserGame )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 0, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.bg;
  if ( !SelfUserGame )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
  v18 = Method_BattlePerformanceContinue_StartContinueImpl__;
  if ( (*((_BYTE *)Method_BattlePerformanceContinue_StartContinueImpl__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1B640E0(Method_BattlePerformanceContinue_StartContinueImpl__);
  v19 = (System_Reflection_MethodBase_o *)sub_1B640AC(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 7, 0LL);
  BattlePerformanceContinue__ResetContinueItemInfo(this, v20);
  SelfUserGame = (UserGameEntity_o *)this->fields.myFsm;
  if ( !SelfUserGame )
LABEL_20:
    sub_1B64324(SelfUserGame);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_12179/*"START_CONTINUE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__StartContinueInterruption(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *continueInterruptionWindow; // x21
  struct BattleWindowInterruptionComponent_o **p_continueInterruptionWindow; // x20
  UnityEngine_GameObject_o *continueInterruptionWindowPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  Il2CppObject *Component_object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  BattleWindowInterruptionComponent_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_o *v26; // x23

  if ( (byte_49FF261 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_BattlePerformanceContinue__StartContinueInterruption_b__138_0__, v3);
    sub_1B640C8(&Method_BattlePerformanceContinue__StartContinueInterruption_b__138_1__, v4);
    sub_1B640C8(&Method_BattlePerformanceContinue__StartContinueInterruption_b__138_2__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_12180/*"START_CONTINUE_INTERRUPTION"*/, v8);
    byte_49FF261 = 1;
  }
  continueInterruptionWindow = (UnityEngine_Object_o *)this->fields.continueInterruptionWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      goto LABEL_13;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
    *p_continueInterruptionWindow = (struct BattleWindowInterruptionComponent_o *)Component_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.continueInterruptionWindow,
      (int32_t)Component_object,
      v15,
      v16);
  }
  Object = (UnityEngine_GameObject_o *)*p_continueInterruptionWindow;
  if ( !*p_continueInterruptionWindow )
    goto LABEL_13;
  Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0LL);
  if ( !Object )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(Object, 0, 0LL);
  v17 = this->fields.continueInterruptionWindow;
  v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
  System_Action___ctor(
    v20,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__138_0__,
    0LL);
  v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22);
  System_Action___ctor(
    v23,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__138_1__,
    0LL);
  v26 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v24, v25);
  System_Action___ctor(
    v26,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__138_2__,
    0LL);
  if ( !v17
    || (BattleWindowInterruptionComponent__SetInterruptionWindow(v17, 0LL, v20, v23, v26, 0, 1, 0LL),
        (Object = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
LABEL_13:
    sub_1B64324(Object);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Object, (System_String_o *)StringLiteral_12180/*"START_CONTINUE_INTERRUPTION"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__StartContinueWaveRestart(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x22
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF25D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_BattlePerformanceContinue__StartContinueWaveRestart_b__134_0__, v4);
    sub_1B640C8(&Method_BattlePerformanceContinue__StartContinueWaveRestart_b__134_1__, v5);
    sub_1B640C8(&StringLiteral_12181/*"START_CONTINUE_WAVE_RESTART"*/, v6);
    byte_49FF25D = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueWaveRestart_b__134_0__,
    0LL);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueWaveRestart_b__134_1__,
    0LL);
  if ( !continueWaveRestartWindow
    || (BattleWindowContinueWaveRestartComponent__SetWindow(continueWaveRestartWindow, v8, v11, 0LL),
        (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_1B64324(myFsm);
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12181/*"START_CONTINUE_WAVE_RESTART"*/, 0LL);
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
  UILabel_o *deadLine; // x21
  System_String_o *v21; // x0
  UILabel_o *useCheckContinueItemLabel; // x21
  System_String_o *v23; // x0
  int64_t v24; // x20
  Il2CppObject *Instance; // x20
  System_String_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  ErrorDialog_ClickDelegate_o *v29; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-50h]

  if ( (byte_49FF221 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue_CallbackConfirmDialog__, method);
    sub_1B640C8(&ErrorDialog_ClickDelegate_TypeInfo, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_2827/*"BATTLE_CONTINUE_ITEM_USE_CHECK"*/, v8);
    sub_1B640C8(&StringLiteral_2823/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, v9);
    sub_1B640C8(&StringLiteral_2824/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, v10);
    sub_1B640C8(&StringLiteral_2822/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, v11);
    sub_1B640C8(&StringLiteral_1/*""*/, v12);
    byte_49FF221 = 1;
  }
  data = (UnityEngine_Object_o *)this->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(data, 0LL, 0LL) && this->fields.IsContinueItem )
  {
    v14 = this->fields.data;
    if ( !v14 )
      goto LABEL_23;
    ContinueDeadLine = BattleData__GetContinueDeadLine(v14, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime = LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
    giveUpContinueItemLabel = this->fields.giveUpContinueItemLabel;
    v18 = (Il2CppObject *)RestTime;
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2823/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, 0LL);
    v14 = (BattleData_o *)System_String__Format(v19, v18, 0LL);
    if ( !giveUpContinueItemLabel )
      goto LABEL_23;
    UILabel__set_text(giveUpContinueItemLabel, (System_String_o *)v14, 0LL);
    deadLine = this->fields.deadLine;
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2824/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, 0LL);
    v14 = (BattleData_o *)System_String__Format(v21, v18, 0LL);
    if ( !deadLine )
      goto LABEL_23;
    UILabel__set_text(deadLine, (System_String_o *)v14, 0LL);
    useCheckContinueItemLabel = this->fields.useCheckContinueItemLabel;
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2827/*"BATTLE_CONTINUE_ITEM_USE_CHECK"*/, 0LL);
    v14 = (BattleData_o *)System_String__Format(v23, v18, 0LL);
    if ( !useCheckContinueItemLabel )
      goto LABEL_23;
    UILabel__set_text(useCheckContinueItemLabel, (System_String_o *)v14, 0LL);
    v14 = this->fields.data;
    if ( !v14 )
      goto LABEL_23;
    v24 = BattleData__GetContinueDeadLine(v14, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( v24 < NetworkManager__getTime(0LL) && !this->fields.isShowDeadLineDialog )
    {
      this->fields.isShowDeadLineDialog = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2822/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
      v29 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v27, v28);
      ErrorDialog_ClickDelegate___ctor(
        v29,
        (Il2CppObject *)this,
        Method_BattlePerformanceContinue_CallbackConfirmDialog__,
        0LL);
      if ( Instance )
      {
        *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
        effectDistance.fields.value.fields.y = 0.0;
        CommonUI__OpenWarningDialog(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_1/*""*/,
          v26,
          v29,
          0,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        return;
      }
LABEL_23:
      sub_1B64324(v14);
    }
  }
}


void __fastcall BattlePerformanceContinue__WaveRestartNg(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_49FF260 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue__WaveRestartNg_b__137_0__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_49FF260 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, method, v2);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__WaveRestartNg_b__137_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_1B64324(v7);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueWaveRestartWindow->klass->vtable._12_Close.method)(
    continueWaveRestartWindow,
    v6,
    continueWaveRestartWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__WaveRestartOk(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_49FF25F & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue__WaveRestartOk_b__136_0__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_49FF25F = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, method, v2);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__WaveRestartOk_b__136_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_1B64324(v7);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueWaveRestartWindow->klass->vtable._12_Close.method)(
    continueWaveRestartWindow,
    v6,
    continueWaveRestartWindow->klass->vtable._13_CompClose.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue___AttachStoneCountRefreshComponent_b__85_0(
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
  System_String_o *gem_now; // x0
  System_String_o *v17; // x21
  UILabel_o *ContinueStoneBtnLabel; // x21
  UILabel_o *stoneBtnLabel; // x21
  System_String_o *ActiveStateName; // x0
  UILabel_o *v21; // x21
  const MethodInfo *v22; // x4
  System_String_o **v23; // x8
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x4
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF26A & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&stoneCount);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_2818/*"BATTLE_CONTINUE_CHECK_SPELL"*/, v6);
    sub_1B640C8(&StringLiteral_2817/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, v7);
    sub_1B640C8(&StringLiteral_2819/*"BATTLE_CONTINUE_CHECK_STONE"*/, v8);
    sub_1B640C8(&StringLiteral_2816/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, v9);
    sub_1B640C8(&StringLiteral_24834/*"{0:#,0}"*/, v10);
    sub_1B640C8(&StringLiteral_12517/*"Select_NoStone"*/, v11);
    sub_1B640C8(&StringLiteral_2825/*"BATTLE_CONTINUE_ITEM_SELECT"*/, v12);
    sub_1B640C8(&StringLiteral_2826/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/, v13);
    sub_1B640C8(&StringLiteral_12518/*"Select_Stone"*/, v14);
    byte_49FF26A = 1;
  }
  v26 = stoneCount;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  gem_now = System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v15, 0LL);
  if ( !this->fields.ContinueStoneNum )
    goto LABEL_25;
  v17 = gem_now;
  UILabel__set_text(this->fields.ContinueStoneNum, gem_now, 0LL);
  gem_now = (System_String_o *)this->fields.gem_now;
  if ( !gem_now )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)gem_now, v17, 0LL);
  gem_now = (System_String_o *)this->fields.stone_now;
  if ( !gem_now )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)gem_now, v17, 0LL);
  ContinueStoneBtnLabel = this->fields.ContinueStoneBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( stoneCount >= 1 )
  {
    gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2817/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, 0LL);
    if ( ContinueStoneBtnLabel )
    {
      UILabel__set_text(ContinueStoneBtnLabel, gem_now, 0LL);
      stoneBtnLabel = this->fields.stoneBtnLabel;
      gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2817/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, 0LL);
      if ( stoneBtnLabel )
      {
        UILabel__set_text(stoneBtnLabel, gem_now, 0LL);
        gem_now = (System_String_o *)this->fields.myFsm;
        if ( gem_now )
        {
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)gem_now, 0LL);
          if ( !System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_12517/*"Select_NoStone"*/, 0LL) )
            goto LABEL_20;
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
                PlayMakerFSM__SetState((PlayMakerFSM_o *)gem_now, (System_String_o *)StringLiteral_12518/*"Select_Stone"*/, 0LL);
                goto LABEL_20;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1B64324(gem_now);
  }
  gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2816/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, 0LL);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_25;
  UILabel__set_text(ContinueStoneBtnLabel, gem_now, 0LL);
  v21 = this->fields.stoneBtnLabel;
  gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2816/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, 0LL);
  if ( !v21 )
    goto LABEL_25;
  UILabel__set_text(v21, gem_now, 0LL);
LABEL_20:
  gem_now = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_25;
  if ( BattleData__CheckCurrentTemporaryCommandSpell(this->fields.data, (UserGameEntity_o *)gem_now, 0LL) <= 2 )
    v23 = (System_String_o **)&StringLiteral_2826/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/;
  else
    v23 = (System_String_o **)&StringLiteral_2825/*"BATTLE_CONTINUE_ITEM_SELECT"*/;
  BattlePerformanceContinue__SetContinueMessage(this, this->fields.ContinueLabel, *v23, stoneCount, v22);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseCommandSpell,
    (System_String_o *)StringLiteral_2818/*"BATTLE_CONTINUE_CHECK_SPELL"*/,
    stoneCount,
    v24);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseGem,
    (System_String_o *)StringLiteral_2819/*"BATTLE_CONTINUE_CHECK_STONE"*/,
    stoneCount,
    v25);
}


void __fastcall BattlePerformanceContinue___CheckDefenceTargetBroken_b__129_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF26B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5710/*"EVENT_TRUE"*/, method);
    byte_49FF26B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5710/*"EVENT_TRUE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenBrokenMessage_b__130_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF26C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5444/*"END_CLOSE"*/, method);
    byte_49FF26C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5444/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueInterruption_b__139_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF275 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5458/*"END_OPEN"*/, method);
    byte_49FF275 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5458/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueWaveRestart_b__135_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF26F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5458/*"END_OPEN"*/, method);
    byte_49FF26F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5458/*"END_OPEN"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__143_0(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  int32_t v3; // w3
  BattlePerformanceContinue_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleData_o *data; // x8
  int32_t v10; // w1
  WaveBattleSelectWaveDialog_o *waveSelectDialog; // x20
  System_Action_o *v12; // x21

  v5 = this;
  if ( (byte_49FF279 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_3__, v6);
    sub_1B640C8(&StringLiteral_3377/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/, v7);
    this = (BattlePerformanceContinue_o *)sub_1B640C8(&StringLiteral_7357/*"INTERRUPTION"*/, v8);
    byte_49FF279 = 1;
  }
  data = v5->fields.data;
  if ( !data )
    goto LABEL_9;
  data->fields.selectedInterruptionWave = -1;
  if ( isDecide )
  {
    v10 = StringLiteral_3377/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    v5->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3377/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.cancelInterruptionEvent, v10, (int32_t)method, v3);
    this = (BattlePerformanceContinue_o *)v5->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_7357/*"INTERRUPTION"*/, 0LL);
      return;
    }
LABEL_9:
    sub_1B64324(this);
  }
  waveSelectDialog = v5->fields.waveSelectDialog;
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isDecide, method);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_3__,
    0LL);
  if ( !waveSelectDialog )
    goto LABEL_9;
  WaveBattleSelectWaveDialog__Close_32126596(waveSelectDialog, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__143_1(
        BattlePerformanceContinue_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  PlayMakerFSM_o *myFsm; // x0
  struct BattleData_o *data; // x8

  if ( (byte_49FF27B & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__, *(_QWORD *)&wave);
    sub_1B640C8(&StringLiteral_11467/*"SELECT_WAVE"*/, v5);
    byte_49FF27B = 1;
  }
  v6 = Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__;
  if ( (*((_BYTE *)Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  data = this->fields.data;
  if ( !data || (data->fields.selectedInterruptionWave = wave, (myFsm = this->fields.myFsm) == 0LL) )
    sub_1B64324(myFsm);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_11467/*"SELECT_WAVE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__143_2(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF27C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FF27C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__143_3(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *waveSelectDialog; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF27A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_9200/*"NG"*/, v3);
    byte_49FF27A = 1;
  }
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.waveSelectDialog;
  if ( !waveSelectDialog )
    goto LABEL_8;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(waveSelectDialog, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  this->fields.waveSelectDialog = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.waveSelectDialog, 0, v6, v7);
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.myFsm;
  if ( !waveSelectDialog )
LABEL_8:
    sub_1B64324(waveSelectDialog);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)waveSelectDialog, (System_String_o *)StringLiteral_9200/*"NG"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue___OpenInterruptionConfirmWindow_b__141_0(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_String_o **p_cancelInterruptionEvent; // x8
  struct System_String_o *v16; // x1
  Il2CppObject *Instance; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x20

  if ( (byte_49FF277 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_BattlePerformanceContinue___c__DisplayClass141_0__OpenInterruptionConfirmWindow_b__1__, v6);
    sub_1B640C8(&BattlePerformanceContinue___c__DisplayClass141_0_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_4983/*"DECIDE_INTERRUPTION"*/, v8);
    byte_49FF277 = 1;
  }
  v9 = sub_1B64314(BattlePerformanceContinue___c__DisplayClass141_0_TypeInfo, isDecide, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v11, v12);
  p_cancelInterruptionEvent = &this->fields.cancelInterruptionEvent;
  if ( isDecide )
    p_cancelInterruptionEvent = (struct System_String_o **)&StringLiteral_4983/*"DECIDE_INTERRUPTION"*/;
  v16 = *p_cancelInterruptionEvent;
  *(_QWORD *)(v9 + 16) = *p_cancelInterruptionEvent;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)v16, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_BattlePerformanceContinue___c__DisplayClass141_0__OpenInterruptionConfirmWindow_b__1__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_1B64324(v10);
  CommonUI__CloseConfirmDialog_30345628((CommonUI_o *)Instance, v20, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue___OpenWaveSelectConfirmDialog_b__144_0(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  WaveBattleSelectWaveDialog_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Instance; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x22
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_49FF27D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_BattlePerformanceContinue___c__DisplayClass144_0__OpenWaveSelectConfirmDialog_b__1__, v7);
    sub_1B640C8(&BattlePerformanceContinue___c__DisplayClass144_0_TypeInfo, v8);
    byte_49FF27D = 1;
  }
  v9 = sub_1B64314(BattlePerformanceContinue___c__DisplayClass144_0_TypeInfo, isDecide, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_12;
  *(_QWORD *)(v9 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v11, v12);
  *(_BYTE *)(v9 + 16) = isDecide;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v9,
    Method_BattlePerformanceContinue___c__DisplayClass144_0__OpenWaveSelectConfirmDialog_b__1__,
    0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_30345628((CommonUI_o *)Instance, v16, 0LL);
  if ( *(_BYTE *)(v9 + 16) )
  {
    waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0LL, 0LL) )
    {
      v10 = this->fields.waveSelectDialog;
      if ( v10 )
      {
        WaveBattleSelectWaveDialog__Close(v10, 0LL);
        return;
      }
LABEL_12:
      sub_1B64324(v10);
    }
  }
}


void __fastcall BattlePerformanceContinue___ProcInterruption_b__142_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_49FF278 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_10424/*"PROC_INTERRUPTION"*/, method);
    byte_49FF278 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1B64324(0LL);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10424/*"PROC_INTERRUPTION"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___ProcSelectWaveRestart_b__145_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_49FF27E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_10425/*"PROC_PARTY_REORGANIZATION"*/, method);
    byte_49FF27E = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1B64324(0LL);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10425/*"PROC_PARTY_REORGANIZATION"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___ProcWaveRestartFromInterruption_b__140_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_49FF276 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_10427/*"PROC_WAVE_RESTART"*/, method);
    byte_49FF276 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1B64324(0LL);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10427/*"PROC_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueInterruption_b__138_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF272 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15476/*"WAVE_RESTART"*/, method);
    byte_49FF272 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15476/*"WAVE_RESTART"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueInterruption_b__138_1(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF273 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_11468/*"SELECT_WAVE_RESTART"*/, method);
    byte_49FF273 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_11468/*"SELECT_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueInterruption_b__138_2(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  int32_t v6; // w1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF274 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_7357/*"INTERRUPTION"*/, method);
    sub_1B640C8(&StringLiteral_3376/*"CANCEL_INTERRUPTION"*/, v5);
    byte_49FF274 = 1;
  }
  v6 = StringLiteral_3376/*"CANCEL_INTERRUPTION"*/;
  this->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3376/*"CANCEL_INTERRUPTION"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cancelInterruptionEvent, v6, v2, v3);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_7357/*"INTERRUPTION"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueWaveRestart_b__134_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF26D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9573/*"OK"*/, method);
    byte_49FF26D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9573/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueWaveRestart_b__134_1(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF26E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9200/*"NG"*/, method);
    byte_49FF26E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9200/*"NG"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___WaveRestartNg_b__137_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_49FF271 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9200/*"NG"*/, method);
    byte_49FF271 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1B64324(0LL);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9200/*"NG"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___WaveRestartOk_b__136_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_49FF270 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9573/*"OK"*/, method);
    byte_49FF270 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1B64324(0LL);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9573/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__atlasLoadEnd(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  BattleViewItemlistComponent_o *itemWindow; // x20
  BattleDropItem_array *DropItems; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  BattleDropItemComponent_ClickDelegate_o *v9; // x22

  if ( (byte_49FF225 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue_showConf__, method);
    sub_1B640C8(&BattleDropItemComponent_ClickDelegate_TypeInfo, v3);
    byte_49FF225 = 1;
  }
  data = this->fields.data;
  if ( !data
    || (itemWindow = this->fields.itemWindow,
        DropItems = BattleData__getDropItems(data, 0LL),
        v9 = (BattleDropItemComponent_ClickDelegate_o *)sub_1B64314(
                                                          BattleDropItemComponent_ClickDelegate_TypeInfo,
                                                          v7,
                                                          v8),
        BattleDropItemComponent_ClickDelegate___ctor(
          v9,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_showConf__,
          0LL),
        !itemWindow) )
  {
    sub_1B64324(data);
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, DropItems, v9, this->fields.itemColumnCount, 0LL);
}


void __fastcall BattlePerformanceContinue__callBackCommandSpell(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  BattlePerformanceContinue_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 *v9; // x8

  v4 = this;
  if ( (byte_49FF237 & 1) == 0 )
  {
    sub_1B640C8(&BattleData_TypeInfo, ret);
    sub_1B640C8(&StringLiteral_3827/*"CONNECT_NG"*/, v5);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v6);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v7);
    this = (BattlePerformanceContinue_o *)sub_1B640C8(&StringLiteral_3828/*"CONNECT_OK"*/, v8);
    byte_49FF237 = 1;
  }
  if ( !ret )
    goto LABEL_14;
  if ( System_String__Equals_61383712(ret, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
  {
    v4->fields.continueRetryFlg = 0;
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__setContinueBattleFlg(0, 1, 0LL);
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    if ( this )
    {
      v9 = &StringLiteral_3828/*"CONNECT_OK"*/;
LABEL_12:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v9, 0LL);
      return;
    }
    goto LABEL_14;
  }
  if ( System_String__Equals_61383712(ret, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      v9 = &StringLiteral_3827/*"CONNECT_NG"*/;
      goto LABEL_12;
    }
LABEL_14:
    sub_1B64324(this);
  }
}


void __fastcall BattlePerformanceContinue__callBackContinueItem(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  BattlePerformanceContinue_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 *v9; // x8

  v4 = this;
  if ( (byte_49FF251 & 1) == 0 )
  {
    sub_1B640C8(&BattleData_TypeInfo, ret);
    sub_1B640C8(&StringLiteral_3827/*"CONNECT_NG"*/, v5);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v6);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v7);
    this = (BattlePerformanceContinue_o *)sub_1B640C8(&StringLiteral_3828/*"CONNECT_OK"*/, v8);
    byte_49FF251 = 1;
  }
  if ( !ret )
    goto LABEL_17;
  if ( System_String__Equals_61383712(ret, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.data;
    v4->fields.continueRetryFlg = 0;
    if ( this )
    {
      BattleData__SuccessContinue((BattleData_o *)this, 0LL);
      if ( !BattleData_TypeInfo->_2.cctor_finished )
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
          v9 = &StringLiteral_3828/*"CONNECT_OK"*/;
LABEL_15:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v9, 0LL);
          return;
        }
      }
    }
    goto LABEL_17;
  }
  if ( System_String__Equals_61383712(ret, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.data;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      BattleData__UpdateContinueItemInfo((BattleData_o *)this, 0LL);
      this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
      if ( this )
      {
        v9 = &StringLiteral_3827/*"CONNECT_NG"*/;
        goto LABEL_15;
      }
    }
LABEL_17:
    sub_1B64324(this);
  }
}


void __fastcall BattlePerformanceContinue__callBackStone(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  BattlePerformanceContinue_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 *v9; // x8

  v4 = this;
  if ( (byte_49FF244 & 1) == 0 )
  {
    sub_1B640C8(&BattleData_TypeInfo, ret);
    sub_1B640C8(&StringLiteral_3827/*"CONNECT_NG"*/, v5);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v6);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v7);
    this = (BattlePerformanceContinue_o *)sub_1B640C8(&StringLiteral_3828/*"CONNECT_OK"*/, v8);
    byte_49FF244 = 1;
  }
  if ( !ret )
    goto LABEL_15;
  if ( System_String__Equals_61383712(ret, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.data;
    v4->fields.continueRetryFlg = 0;
    if ( this )
    {
      BattleData__SuccessContinue((BattleData_o *)this, 0LL);
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      BattleData__setContinueBattleFlg(0, 1, 0LL);
      this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
      if ( this )
      {
        v9 = &StringLiteral_3828/*"CONNECT_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v9, 0LL);
        return;
      }
    }
    goto LABEL_15;
  }
  if ( System_String__Equals_61383712(ret, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      v9 = &StringLiteral_3827/*"CONNECT_NG"*/;
      goto LABEL_13;
    }
LABEL_15:
    sub_1B64324(this);
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
    sub_1B64324(0LL);
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
  __int64 *v10; // x8

  if ( (byte_49FF24C & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_1B640C8(&StringLiteral_3827/*"CONNECT_NG"*/, v5);
    sub_1B640C8(&StringLiteral_3828/*"CONNECT_OK"*/, v6);
    byte_49FF24C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  BattlePerformanceContinue__closeNoStone(this, v8);
  if ( (unsigned int)(result - 1) > 1 )
  {
    Instance = (CommonUI_o *)this->fields.myFsm;
    if ( Instance )
    {
      v10 = &StringLiteral_3827/*"CONNECT_NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_1B64324(Instance);
  }
  BattlePerformanceContinue__refreshStoneNow(this, 0LL, v9);
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_10;
  v10 = &StringLiteral_3828/*"CONNECT_OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v10, 0LL);
}


void __fastcall BattlePerformanceContinue__checkCountStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int *SelfUserGame; // x0

  if ( (byte_49FF256 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9197/*"NEXT"*/, method);
    byte_49FF256 = 1;
  }
  SelfUserGame = (int *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_7;
  if ( SelfUserGame[44] > 0 )
    return;
  SelfUserGame = (int *)this->fields.myFsm;
  this->fields.IsContinueItem = 0;
  if ( !SelfUserGame )
LABEL_7:
    sub_1B64324(SelfUserGame);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_9197/*"NEXT"*/, 0LL);
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
  Il2CppObject *Instance; // x20
  System_String_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  ErrorDialog_ClickDelegate_o *v16; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-50h]

  if ( (byte_49FF257 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue_CallbackConfirmDialog__, method);
    sub_1B640C8(&ErrorDialog_ClickDelegate_TypeInfo, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_9197/*"NEXT"*/, v7);
    sub_1B640C8(&StringLiteral_2822/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    byte_49FF257 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ContinueDeadLine = BattleData__GetContinueDeadLine(data, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( ContinueDeadLine < NetworkManager__getTime(0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2822/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
    v16 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v14, v15);
    ErrorDialog_ClickDelegate___ctor(
      v16,
      (Il2CppObject *)this,
      Method_BattlePerformanceContinue_CallbackConfirmDialog__,
      0LL);
    if ( Instance )
    {
      *(_QWORD *)&effectDistance.fields.hasValue = 0LL;
      effectDistance.fields.value.fields.y = 0.0;
      CommonUI__OpenWarningDialog(
        (CommonUI_o *)Instance,
        (System_String_o *)StringLiteral_1/*""*/,
        v13,
        v16,
        0,
        0,
        -1.0,
        1,
        effectDistance,
        0LL);
      return;
    }
LABEL_13:
    sub_1B64324(data);
  }
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_9197/*"NEXT"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__checkSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserGameEntity_o *SelfUserGame; // x0
  PlayMakerFSM_o *myFsm; // x8
  __int64 *v6; // x9

  if ( (byte_49FF231 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9573/*"OK"*/, method);
    sub_1B640C8(&StringLiteral_9200/*"NG"*/, v3);
    byte_49FF231 = 1;
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
        (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_1B64324(SelfUserGame);
  }
  v6 = &StringLiteral_9200/*"NG"*/;
  if ( (int)SelfUserGame >= 3 )
    v6 = &StringLiteral_9573/*"OK"*/;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v6, 0LL);
}


void __fastcall BattlePerformanceContinue__checkStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserGameEntity_o *SelfUserGame; // x20
  const MethodInfo *v5; // x2
  PlayMakerFSM_o *myFsm; // x0
  __int64 *v7; // x8

  if ( (byte_49FF23E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9573/*"OK"*/, method);
    sub_1B640C8(&StringLiteral_9200/*"NG"*/, v3);
    byte_49FF23E = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  BattlePerformanceContinue__refreshStoneNow(this, SelfUserGame, v5);
  if ( !SelfUserGame || (myFsm = this->fields.myFsm) == 0LL )
    sub_1B64324(myFsm);
  if ( SelfUserGame->fields.stone >= 1 )
    v7 = &StringLiteral_9573/*"OK"*/;
  else
    v7 = &StringLiteral_9200/*"NG"*/;
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
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_49FF24E & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue_endCloseContinueItem__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_49FF24E = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v8 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v6, v7),
        BattleWindowComponent_EndCall___ctor(
          v8,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseContinueItem__,
          0LL),
        !window) )
  {
    sub_1B64324(itemWindow);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v8,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_49FF249 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue_endCloseNoStone__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_49FF249 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v8 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v6, v7),
        BattleWindowComponent_EndCall___ctor(
          v8,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseNoStone__,
          0LL),
        !window) )
  {
    sub_1B64324(itemWindow);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v8,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_49FF234 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue_endCloseSpell__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_49FF234 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v8 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v6, v7),
        BattleWindowComponent_EndCall___ctor(
          v8,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseSpell__,
          0LL),
        !window) )
  {
    sub_1B64324(itemWindow);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v8,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_49FF241 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue_endCloseStone__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_49FF241 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v8 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v6, v7),
        BattleWindowComponent_EndCall___ctor(
          v8,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseStone__,
          0LL),
        !window) )
  {
    sub_1B64324(itemWindow);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v8,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeUseCheck(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *useCheckWindow; // x0

  useCheckWindow = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !useCheckWindow
    || (useCheckWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useCheckWindow, 0LL)) == 0LL )
  {
    sub_1B64324(useCheckWindow);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useCheckWindow, 0, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x21
  struct BattleData_o *v12; // x8
  struct BattleEntity_o *battle_ent; // x9

  if ( (byte_49FF250 & 1) == 0 )
  {
    sub_1B640C8(&BattleData_TypeInfo, method);
    sub_1B640C8(&Method_BattlePerformanceContinue_callBackContinueItem__, v3);
    sub_1B640C8(&Method_NetworkManager_getRequest_BattleUseContinueItemRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_49FF250 = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setContinueBattleFlg(4, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  ContinueUseItemId = BattleData__GetContinueUseItemId(data, 0LL);
  BattleData__SaveContinueItemId(ContinueUseItemId, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  BattleData__procPlayerContinue(data, this->fields.isProgress, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callBackContinueItem__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  data = (BattleData_o *)NetworkManager__getRequest_object_(
                           v11,
                           (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_BattleUseContinueItemRequest___);
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_16;
  if ( this->fields.continueRetryFlg )
  {
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0LL);
      return;
    }
LABEL_16:
    sub_1B64324(data);
  }
  battle_ent = v12->fields.battle_ent;
  if ( !battle_ent || !data )
    goto LABEL_16;
  BattleUseContinueItemRequest__beginRequest(
    (BattleUseContinueItemRequest_o *)data,
    battle_ent->fields.id,
    v12->fields.continueCount,
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
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  _BOOL4 continueRetryFlg; // w21
  NetworkManager_ResultCallbackFunc_o *v13; // x0
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  struct BattleData_o *v15; // x8
  int32_t continueCount; // w21
  struct BattleEntity_o *battle_ent; // x22
  BattleCommandSpellRequest_o *v18; // x20
  struct BattleData_o *v19; // x8

  if ( (byte_49FF236 & 1) == 0 )
  {
    sub_1B640C8(&BattleData_TypeInfo, method);
    sub_1B640C8(&Method_BattlePerformanceContinue_callBackCommandSpell__, v3);
    sub_1B640C8(&Method_BattlePerformanceContinue_callbackContinueCommandSpell__, v4);
    sub_1B640C8(&Method_NetworkManager_getRequest_BattleCommandSpellRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_6853/*"GAME_OVER_COMMAND_SPELL_ID"*/, v8);
    byte_49FF236 = 1;
  }
  BattlePerformanceContinue__closeSpell(this, method);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setContinueBattleFlg(2, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  BattleData__procPlayerContinue(data, this->fields.isProgress, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  if ( BattleData__IsUseTemporaryCommandSpell(data, 0LL) )
  {
    BattlePerformanceContinue__SkipCommandSpellRequest(this, v10);
    return;
  }
  continueRetryFlg = this->fields.continueRetryFlg;
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
  v14 = v13;
  if ( continueRetryFlg )
  {
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_BattlePerformanceContinue_callBackCommandSpell__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    data = (BattleData_o *)NetworkManager__getRequest_object_(
                             v14,
                             (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0LL);
      return;
    }
LABEL_21:
    sub_1B64324(data);
  }
  NetworkManager_ResultCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callbackContinueCommandSpell__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  data = (BattleData_o *)NetworkManager__getRequest_object_(
                           v14,
                           (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
  v15 = this->fields.data;
  if ( !v15 )
    goto LABEL_21;
  continueCount = v15->fields.continueCount;
  battle_ent = v15->fields.battle_ent;
  v18 = (BattleCommandSpellRequest_o *)data;
  data = (BattleData_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6853/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0LL);
  if ( !battle_ent )
    goto LABEL_21;
  v19 = this->fields.data;
  if ( !v19 || !v18 )
    goto LABEL_21;
  BattleCommandSpellRequest__beginRequest(
    v18,
    battle_ent->fields.id,
    (int32_t)data,
    v19->fields.waveClearNeedTurn,
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
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  struct BattleData_o *v11; // x8
  struct BattleEntity_o *battle_ent; // x9

  if ( (byte_49FF243 & 1) == 0 )
  {
    sub_1B640C8(&BattleData_TypeInfo, method);
    sub_1B640C8(&Method_BattlePerformanceContinue_callBackStone__, v3);
    sub_1B640C8(&Method_NetworkManager_getRequest_BattleUseContinueRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_49FF243 = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setContinueBattleFlg(1, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  BattleData__procPlayerContinue(data, this->fields.isProgress, 0LL);
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callBackStone__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  data = (BattleData_o *)NetworkManager__getRequest_object_(
                           v10,
                           (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_BattleUseContinueRequest___);
  v11 = this->fields.data;
  if ( !v11 )
    goto LABEL_15;
  if ( this->fields.continueRetryFlg )
  {
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0LL);
      return;
    }
LABEL_15:
    sub_1B64324(data);
  }
  battle_ent = v11->fields.battle_ent;
  if ( !battle_ent || !data )
    goto LABEL_15;
  BattleUseContinueRequest__beginRequest(
    (BattleUseContinueRequest_o *)data,
    battle_ent->fields.id,
    v11->fields.waveClearNeedTurn,
    v11->fields.continueCount,
    0LL);
}


void __fastcall BattlePerformanceContinue__endCloseContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *ContinueItemWindow; // x0

  if ( (byte_49FF24F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5444/*"END_CLOSE"*/, method);
    byte_49FF24F = 1;
  }
  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow
    || (UnityEngine_GameObject__SetActive(ContinueItemWindow, 0, 0LL),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)ContinueItemWindow, 0LL),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64324(ContinueItemWindow);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ContinueItemWindow, (System_String_o *)StringLiteral_5444/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nostoneObject; // x0

  if ( (byte_49FF24A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5444/*"END_CLOSE"*/, method);
    byte_49FF24A = 1;
  }
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject
    || (UnityEngine_GameObject__SetActive(nostoneObject, 0, 0LL),
        (nostoneObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64324(nostoneObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)nostoneObject, (System_String_o *)StringLiteral_5444/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandspellObject; // x0

  if ( (byte_49FF235 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5444/*"END_CLOSE"*/, method);
    byte_49FF235 = 1;
  }
  commandspellObject = this->fields.commandspellObject;
  if ( !commandspellObject
    || (UnityEngine_GameObject__SetActive(commandspellObject, 0, 0LL),
        (commandspellObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)commandspellObject, 0LL),
        (commandspellObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64324(commandspellObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)commandspellObject, (System_String_o *)StringLiteral_5444/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *stoneObject; // x0

  if ( (byte_49FF242 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5444/*"END_CLOSE"*/, method);
    byte_49FF242 = 1;
  }
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 0, 0LL),
        (stoneObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)stoneObject, 0LL),
        (stoneObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64324(stoneObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)stoneObject, (System_String_o *)StringLiteral_5444/*"END_CLOSE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__endDialog(
        BattlePerformanceContinue_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_49FF22C & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    sub_1B640C8(&StringLiteral_9200/*"NG"*/, v4);
    byte_49FF22C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.logic) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  BattleLogic__sendFsmEvent((BattleLogic_o *)Instance, (System_String_o *)StringLiteral_9200/*"NG"*/, 0LL);
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
  UserGameEntity_o *v13; // x21
  int v14; // w22
  int32_t v15; // w21
  Il2CppObject *v16; // x0
  struct BattlePerformance_o *v17; // x8
  UnityEngine_GameObject_o *Object; // x23
  Il2CppObject *v19; // x0
  System_String_o *v20; // x20
  Il2CppObject *Component_object; // x22
  Il2CppObject *v22; // x21
  SimpleAnimation_o *v23; // x0
  System_String_o *v24; // x1
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Animation_o *v26; // x0
  System_String_o *v27; // x1
  Il2CppObject *v28; // x0
  Il2CppObject *v29; // x0
  int32_t v30; // [xsp+8h] [xbp-48h] BYREF
  int v31; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FF23C & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, aData);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, v9);
    sub_1B640C8(&StringLiteral_18747/*"ef_commandspell_{0:D2}"*/, v10);
    sub_1B640C8(&StringLiteral_18748/*"ef_commandspell{0:D4}"*/, v11);
    byte_49FF23C = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_29;
  BattlePerformance__PlayAnyCommandSpellContinueVoice(perf, 0LL);
  perf = (BattlePerformance_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !perf )
    goto LABEL_29;
  v13 = (UserGameEntity_o *)perf;
  perf = (BattlePerformance_o *)UserGameEntity__get_SpellImageIdBattle((UserGameEntity_o *)perf, 0LL);
  if ( !this->fields.data )
    goto LABEL_29;
  v14 = (int)perf;
  v15 = BattleData__CheckCurrentTemporaryCommandSpell(this->fields.data, v13, 0LL);
  v31 = v14;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  perf = (BattlePerformance_o *)System_String__Format((System_String_o *)StringLiteral_18748/*"ef_commandspell{0:D4}"*/, v16, 0LL);
  if ( !aData )
    goto LABEL_29;
  perf = (BattlePerformance_o *)AssetData__GetObject_object__48347676(
                                  aData,
                                  (System_String_o *)perf,
                                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  v17 = this->fields.perf;
  if ( !v17 )
    goto LABEL_29;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             (UnityEngine_GameObject_o *)perf,
             v17->fields.popupTr,
             0LL,
             0LL);
  v30 = v15;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  perf = (BattlePerformance_o *)System_String__Format((System_String_o *)StringLiteral_18747/*"ef_commandspell_{0:D2}"*/, v19, 0LL);
  if ( !Object )
    goto LABEL_29;
  v20 = (System_String_o *)perf;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       Object,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v22 = UnityEngine_GameObject__GetComponent_object_(
          Object,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    if ( SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, v20, 0LL) )
    {
      v23 = (SimpleAnimation_o *)Component_object;
      v24 = v20;
    }
    else
    {
      v31 = 3;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
      v24 = System_String__Format((System_String_o *)StringLiteral_18747/*"ef_commandspell_{0:D2}"*/, v28, 0LL);
      v23 = (SimpleAnimation_o *)Component_object;
    }
    SimpleAnimation__Play_63513060(v23, v24, 0LL);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL);
    if ( ((unsigned __int8)perf & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_29;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v22, v20, 0LL);
      if ( UnityEngine_TrackedReference__op_Inequality(0LL, Item, 0LL) )
      {
        v26 = (UnityEngine_Animation_o *)v22;
        v27 = v20;
      }
      else
      {
        v31 = 3;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
        v27 = System_String__Format((System_String_o *)StringLiteral_18747/*"ef_commandspell_{0:D2}"*/, v29, 0LL);
        v26 = (UnityEngine_Animation_o *)v22;
      }
      UnityEngine_Animation__Play_68872828(v26, v27, 0LL);
    }
  }
  perf = (BattlePerformance_o *)this->fields.logic;
  if ( !perf
    || (BattleLogic__setTimeAcceleration((BattleLogic_o *)perf, 0, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__playMasterCommandSpellCutIn(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.myFsm) == 0LL) )
  {
LABEL_29:
    sub_1B64324(perf);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_49FF230 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5458/*"END_OPEN"*/, method);
    byte_49FF230 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__ChangeLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64324(itemWindow);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5458/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_49FF248 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5458/*"END_OPEN"*/, method);
    byte_49FF248 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64324(itemWindow);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5458/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_49FF233 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5458/*"END_OPEN"*/, method);
    byte_49FF233 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64324(itemWindow);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5458/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_49FF240 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5458/*"END_OPEN"*/, method);
    byte_49FF240 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64324(itemWindow);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5458/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenUsecheck(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF255 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5458/*"END_OPEN"*/, method);
    byte_49FF255 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5458/*"END_OPEN"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__endRetryDialog(
        BattlePerformanceContinue_o *this,
        bool flg,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_49FF239 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9573/*"OK"*/, flg);
    byte_49FF239 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1B64324(0LL);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9573/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserGameEntity_o *SelfUserGame; // x0
  Il2CppObject *v6; // x0
  System_String_o *v7; // x20
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FF23D & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&int_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_4600/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v4);
    byte_49FF23D = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_8;
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0LL);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SpellImageIdBattle);
  v7 = System_String__Format((System_String_o *)StringLiteral_4600/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v6, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v7, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.logic;
  if ( !SelfUserGame )
LABEL_8:
    sub_1B64324(SelfUserGame);
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
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  UnityEngine_GameObject_o *nostoneObject; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_49FF247 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue_endOpenNoStone__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_2829/*"BATTLE_CONTINUE_NO_STONE"*/, v4);
    byte_49FF247 = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseBuyGem,
    (System_String_o *)StringLiteral_2829/*"BATTLE_CONTINUE_NO_STONE"*/,
    0x80000000,
    v5);
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject
    || (UnityEngine_GameObject__SetActive(nostoneObject, 1, 0LL),
        window = this->fields.window,
        v10 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v8, v9),
        BattleWindowComponent_EndCall___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenNoStone__,
          0LL),
        !window) )
  {
    sub_1B64324(nostoneObject);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v10,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__openReTry(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  NotificationDialog_ClickDelegate_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_49FF238 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue_endRetryDialog__, method);
    sub_1B640C8(&NotificationDialog_ClickDelegate_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&StringLiteral_25291/*"通信に失敗したので再度通信を行います"*/, v5);
    sub_1B640C8(&StringLiteral_25292/*"通信失敗"*/, v6);
    byte_49FF238 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (NotificationDialog_ClickDelegate_o *)sub_1B64314(NotificationDialog_ClickDelegate_TypeInfo, v8, v9);
  NotificationDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endRetryDialog__,
    0LL);
  if ( !Instance )
    sub_1B64324(v11);
  CommonUI__OpenNotificationDialog_30347532(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_25292/*"通信失敗"*/,
    (System_String_o *)StringLiteral_25291/*"通信に失敗したので再度通信を行います"*/,
    v10,
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
  System_String_o *SelfUserGame; // x0
  int monitor; // w21
  UILabel_o *stoneBtnLabel; // x20
  System_String_o **v14; // x8
  const MethodInfo *v15; // x1
  struct BattleData_o *data; // x8
  struct BattleData_o *v17; // x8
  const MethodInfo *v18; // x4
  Il2CppObject *Component_object; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  struct BattleWindowComponent_o *window; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  BattleWindowComponent_EndCall_o *v26; // x21

  if ( (byte_49FF232 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue_endOpenSpell__, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SendEventToFsm___, v3);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_2818/*"BATTLE_CONTINUE_CHECK_SPELL"*/, v7);
    sub_1B640C8(&StringLiteral_2817/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, v8);
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, v9);
    sub_1B640C8(&StringLiteral_2816/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, v10);
    byte_49FF232 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_28;
  monitor = (int)SelfUserGame[7].monitor;
  stoneBtnLabel = this->fields.stoneBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = (System_String_o **)(monitor < 1 ? &StringLiteral_2816/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/ : &StringLiteral_2817/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
  SelfUserGame = LocalizationManager__Get(*v14, 0LL);
  if ( !stoneBtnLabel )
    goto LABEL_28;
  UILabel__set_text(stoneBtnLabel, SelfUserGame, 0LL);
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, v15);
  SelfUserGame = (System_String_o *)this->fields.commandspellObject;
  if ( !SelfUserGame )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  SelfUserGame = (System_String_o *)data->fields.quest_ent;
  if ( !SelfUserGame )
    goto LABEL_28;
  SelfUserGame = (System_String_o *)QuestEntity__HasFlag((QuestEntity_o *)SelfUserGame, 0x400000000LL, 0LL);
  if ( ((unsigned __int8)SelfUserGame & 1) == 0 )
  {
    v17 = this->fields.data;
    if ( !v17 )
      goto LABEL_28;
    SelfUserGame = (System_String_o *)v17->fields.quest_ent;
    if ( !SelfUserGame )
      goto LABEL_28;
    if ( !QuestEntity__HasFlag((QuestEntity_o *)SelfUserGame, 0x100000000LL, 0LL) )
      goto LABEL_26;
  }
  SelfUserGame = (System_String_o *)this->fields.commandSpellSprite;
  if ( !SelfUserGame )
    goto LABEL_28;
  UIWidget__set_color((UIWidget_o *)SelfUserGame, this->fields.spellBtnColor, 0LL);
  SelfUserGame = (System_String_o *)this->fields.commandSpellSprite;
  if ( !SelfUserGame )
    goto LABEL_28;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)SelfUserGame,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SendEventToFsm___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SelfUserGame = (System_String_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)Component_object,
                                      0LL,
                                      0LL);
  if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_28;
    v22 = StringLiteral_5463/*"END_PROC"*/;
    Component_object[2].monitor = (void *)StringLiteral_5463/*"END_PROC"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&Component_object[2].monitor, v22, v20, v21);
  }
  SelfUserGame = (System_String_o *)this->fields.commandspell_now;
  if ( !SelfUserGame )
LABEL_28:
    sub_1B64324(SelfUserGame);
  UIWidget__set_color((UIWidget_o *)SelfUserGame, this->fields.spellnowColor, 0LL);
LABEL_26:
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseCommandSpell,
    (System_String_o *)StringLiteral_2818/*"BATTLE_CONTINUE_CHECK_SPELL"*/,
    0x80000000,
    v18);
  window = this->fields.window;
  v26 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v24, v25);
  BattleWindowComponent_EndCall___ctor(v26, (Il2CppObject *)this, Method_BattlePerformanceContinue_endOpenSpell__, 0LL);
  if ( !window )
    goto LABEL_28;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v26,
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
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_49FF23F & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue_endOpenStone__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_2819/*"BATTLE_CONTINUE_CHECK_STONE"*/, v4);
    byte_49FF23F = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseGem,
    (System_String_o *)StringLiteral_2819/*"BATTLE_CONTINUE_CHECK_STONE"*/,
    0x80000000,
    v5);
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 1, 0LL),
        window = this->fields.window,
        v10 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v8, v9),
        BattleWindowComponent_EndCall___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenStone__,
          0LL),
        !window) )
  {
    sub_1B64324(stoneObject);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v10,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__openStoneShop(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  StonePurchaseMenu_CallbackFunc_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_49FF24B & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue_callbaclStoneShop__, method);
    sub_1B640C8(&StonePurchaseMenu_CallbackFunc_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49FF24B = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (StonePurchaseMenu_CallbackFunc_o *)sub_1B64314(StonePurchaseMenu_CallbackFunc_TypeInfo, v6, v7);
  StonePurchaseMenu_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callbaclStoneShop__,
    0LL);
  if ( !Instance )
    sub_1B64324(v9);
  CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v8, 0LL, 0LL);
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
  UnityEngine_Object_o *addMsgInfo; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v12; // x0
  UILabel_o *addMsgLabel; // x20
  __int64 *v14; // x8
  UILabel_o *v15; // x20
  UnityEngine_Object_o *v16; // x20
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_49FF254 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_2833/*"BATTLE_CONTINUE_USECHECK_STONE"*/, v6);
    sub_1B640C8(&StringLiteral_2831/*"BATTLE_CONTINUE_STONEPAY_WARNING_MSG"*/, v7);
    sub_1B640C8(&StringLiteral_2832/*"BATTLE_CONTINUE_USECHECK_SPELL"*/, v8);
    byte_49FF254 = 1;
  }
  usecheckLabel = (UnityEngine_Component_o *)this->fields.usecheckLabel;
  if ( !usecheckLabel )
    goto LABEL_44;
  usecheckLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  if ( !usecheckLabel )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 1, 0LL);
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckContinueItemLabel;
  if ( !usecheckLabel )
    goto LABEL_44;
  usecheckLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  if ( !usecheckLabel )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 0, 0LL);
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL) )
  {
    usecheckLabel = (UnityEngine_Component_o *)this->fields.addMsgInfo;
    if ( !usecheckLabel )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 0, 0LL);
  }
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !usecheckLabel )
    goto LABEL_44;
  gameObject = UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, -72.0, 0LL);
  usecheckLabel = (UnityEngine_Component_o *)this->fields.usecheckLabel;
  if ( !usecheckLabel )
    goto LABEL_44;
  v12 = UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v12, 28.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.useCheckOkBtn, -72.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.useCheckCancelBtn, -72.0, 0LL);
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckBgSprite;
  if ( !usecheckLabel )
    goto LABEL_44;
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
    v14 = &StringLiteral_2832/*"BATTLE_CONTINUE_USECHECK_SPELL"*/;
    goto LABEL_39;
  }
  v15 = this->fields.usecheckLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  usecheckLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2833/*"BATTLE_CONTINUE_USECHECK_STONE"*/, 0LL);
  if ( !v15 )
    goto LABEL_44;
  UILabel__set_text(v15, (System_String_o *)usecheckLabel, 0LL);
  v16 = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
    goto LABEL_41;
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !usecheckLabel )
    goto LABEL_44;
  v17 = UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v17, -90.0, 0LL);
  usecheckLabel = (UnityEngine_Component_o *)this->fields.usecheckLabel;
  if ( !usecheckLabel
    || (v18 = UnityEngine_Component__get_gameObject(usecheckLabel, 0LL),
        GameObjectExtensions__SetLocalPositionY(v18, 82.0, 0LL),
        GameObjectExtensions__SetLocalPositionY(this->fields.useCheckOkBtn, -90.0, 0LL),
        GameObjectExtensions__SetLocalPositionY(this->fields.useCheckCancelBtn, -90.0, 0LL),
        (usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckBgSprite) == 0LL)
    || (UIWidget__set_height((UIWidget_o *)usecheckLabel, 275, 0LL),
        (usecheckLabel = (UnityEngine_Component_o *)this->fields.addMsgInfo) == 0LL) )
  {
LABEL_44:
    sub_1B64324(usecheckLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 1, 0LL);
  addMsgLabel = this->fields.addMsgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = &StringLiteral_2831/*"BATTLE_CONTINUE_STONEPAY_WARNING_MSG"*/;
LABEL_39:
  usecheckLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v14, 0LL);
  if ( !addMsgLabel )
    goto LABEL_44;
  UILabel__set_text(addMsgLabel, (System_String_o *)usecheckLabel, 0LL);
LABEL_41:
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !usecheckLabel )
    goto LABEL_44;
  usecheckLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  if ( !usecheckLabel )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 1, 0LL);
  BattlePerformanceContinue__endOpenUsecheck(this, v19);
}


void __fastcall BattlePerformanceContinue__procContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF253 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FF253 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNG(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BattleLogic_o *logic; // x20
  NotificationDialog_ClickDelegate_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_49FF22B & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePerformanceContinue_endDialog__, method);
    sub_1B640C8(&NotificationDialog_ClickDelegate_TypeInfo, v4);
    byte_49FF22B = 1;
  }
  logic = this->fields.logic;
  v6 = (NotificationDialog_ClickDelegate_o *)sub_1B64314(NotificationDialog_ClickDelegate_TypeInfo, method, v2);
  NotificationDialog_ClickDelegate___ctor(v6, (Il2CppObject *)this, Method_BattlePerformanceContinue_endDialog__, 0LL);
  if ( !logic )
    sub_1B64324(v7);
  BattleLogic__OpenBattleLoseDlg(logic, 1, 0, v6, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF252 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FF252 = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGGiveUpContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF229 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FF229 = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  this->fields.IsContinueItem = 0;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_49FF24D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FF24D = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__ClearObj(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1B64324(itemWindow);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF23A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FF23A = 1;
  }
  BattlePerformanceContinue__closeSpell(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF245 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FF245 = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procOK(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattlePerformanceContinue_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  int32_t QuestId; // w20
  BattleData_o *data; // x8
  AdManager_o *v9; // x19

  v2 = this;
  if ( (byte_49FF22A & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, method);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v3);
    this = (BattlePerformanceContinue_o *)sub_1B640C8(&StringLiteral_9573/*"OK"*/, v4);
    byte_49FF22A = 1;
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
  BattlePerformanceMaster__updateCommandSpellIcon((BattlePerformanceMaster_o *)this, method);
  this = (BattlePerformanceContinue_o *)v2->fields.logic;
  if ( !this )
    goto LABEL_18;
  BattleLogic__sendFsmEvent((BattleLogic_o *)this, (System_String_o *)StringLiteral_9573/*"OK"*/, 0LL);
  this = (BattlePerformanceContinue_o *)v2->fields.data;
  if ( !this )
    goto LABEL_18;
  QuestId = BattleData__getQuestId((BattleData_o *)this, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__IsMainStoryForQuestId(QuestId, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( TerminalPramsManager__CanSendTrackEvent(QuestId, 0LL) )
    {
      this = (BattlePerformanceContinue_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      data = v2->fields.data;
      if ( data )
      {
        v9 = (AdManager_o *)this;
        this = (BattlePerformanceContinue_o *)BattleData__getPhase(data, 0LL);
        if ( v9 )
        {
          AdManager__TrackEvent(v9, 10, 12, QuestId, (int32_t)this, 0LL, 0LL);
          return;
        }
      }
LABEL_18:
      sub_1B64324(this);
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
  AssetLoader_LoadEndDataHandler_o *v12; // x21
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF23B & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_BattlePerformanceContinue_endLoadCommandSPell__, v3);
    sub_1B640C8(&int_TypeInfo, v4);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_4600/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v6);
    byte_49FF23B = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1B64324(0LL);
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0LL);
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SpellImageIdBattle);
  v9 = System_String__Format((System_String_o *)StringLiteral_4600/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v8, 0LL);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v10, v11);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endLoadCommandSPell__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v9, v12, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__procStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_49FF246 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FF246 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__refreshStoneNow(
        BattlePerformanceContinue_o *this,
        UserGameEntity_o *userGame,
        const MethodInfo *method)
{
  UserGameEntity_o *v3; // x20
  __int64 v5; // x1
  System_String_o *SelfUserGame; // x0
  UILabel_o *gem_now; // x21
  Il2CppObject *v8; // x0
  UILabel_o *stone_now; // x19
  Il2CppObject *v10; // x0
  int32_t v11; // [xsp+8h] [xbp-38h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-34h] BYREF

  v3 = userGame;
  if ( (byte_49FF224 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, userGame);
    sub_1B640C8(&StringLiteral_24834/*"{0:#,0}"*/, v5);
    byte_49FF224 = 1;
  }
  if ( !v3 )
  {
    SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
    v3 = (UserGameEntity_o *)SelfUserGame;
    if ( !SelfUserGame )
      goto LABEL_8;
  }
  gem_now = this->fields.gem_now;
  stone = v3->fields.stone;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
  SelfUserGame = System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v8, 0LL);
  if ( !gem_now
    || (UILabel__set_text(gem_now, SelfUserGame, 0LL),
        stone_now = this->fields.stone_now,
        v11 = v3->fields.stone,
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11),
        SelfUserGame = System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v10, 0LL),
        !stone_now) )
  {
LABEL_8:
    sub_1B64324(SelfUserGame);
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


bool __fastcall BattlePerformanceContinue__CoEndContinue_d__132__MoveNext(
        BattlePerformanceContinue__CoEndContinue_d__132_o *this,
        const MethodInfo *method)
{
  BattlePerformanceContinue__CoEndContinue_d__132_o *v2; // x19
  int32_t _1__state; // w8
  float timer_5__2; // s8
  struct BattlePerformanceContinue_o *_4__this; // x8
  struct BattlePerformance_o *perf; // x8
  bool result; // w0
  float deltaTime; // s0
  Il2CppObject **p__2__current; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_49FF281 & 1) == 0 )
  {
    this = (BattlePerformanceContinue__CoEndContinue_d__132_o *)sub_1B640C8(
                                                                  &Method_UnityEngine_GameObject_GetComponent_NGUIFader___,
                                                                  method);
    byte_49FF281 = 1;
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
      || (this = (BattlePerformanceContinue__CoEndContinue_d__132_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___)) == 0LL )
    {
      sub_1B64324(this);
    }
    v12.fields.r = 1.0;
    v12.fields.g = 1.0;
    v12.fields.b = 1.0;
    v12.fields.a = 1.0;
    NGUIFader__FadeStart((NGUIFader_o *)this, v12, 0.5, 1, 0LL, 0, 0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, 0, v10, v11);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattlePerformanceContinue__CoEndContinue_d__132_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  Il2CppObject *Instance; // x0
  struct BattlePerformanceContinue_o *_4__this; // x8

  if ( (byte_49FF27F & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FF27F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (Il2CppObject *)_4__this->fields.myFsm) == 0LL )
  {
    sub_1B64324(Instance);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  struct BattlePerformanceContinue_o *_4__this; // x8
  System_String_o *v7; // x1

  if ( (byte_49FF280 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&StringLiteral_9573/*"OK"*/, v3);
    sub_1B640C8(&StringLiteral_9200/*"NG"*/, v4);
    byte_49FF280 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (Il2CppObject *)_4__this->fields.myFsm) == 0LL )
  {
    sub_1B64324(Instance);
  }
  if ( this->fields.isDecide )
    v7 = (System_String_o *)StringLiteral_9573/*"OK"*/;
  else
    v7 = (System_String_o *)StringLiteral_9200/*"NG"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, v7, 0LL);
}