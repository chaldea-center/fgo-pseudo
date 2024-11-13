void __fastcall BattlePerformanceContinue___ctor(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct UnityEngine_Color_o *p_spellBtnColor; // x21
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1

  p_spellBtnColor = &this->fields.spellBtnColor;
  if ( (byte_4B19151 & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    byte_4B19151 = 1;
  }
  *p_spellBtnColor = (struct UnityEngine_Color_o)xmmword_BD3650;
  p_spellBtnColor[1] = (struct UnityEngine_Color_o)xmmword_BD3E30;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.cancelInterruptionEvent = static_fields->Empty;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.cancelInterruptionEvent,
    (int64_t)Empty,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceContinue__AttachStoneCountRefreshComponent(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_int__o *v10; // x21

  if ( (byte_4B19117 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceContinue__AttachStoneCountRefreshComponent_b__85_0__, v4, v5);
    byte_4B19117 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v7, v8, v9);
  System_Action_int____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__AttachStoneCountRefreshComponent_b__85_0__,
    0LL);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v10, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__CallbackConfirmDialog(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4B1910A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    sub_1BCA7E0(&StringLiteral_5073/*"DEADLINE"*/, v4, v5);
    byte_4B1910A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL),
        BattlePerformanceContinue__closeContinueItem(this, v8),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5073/*"DEADLINE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__CheckContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  BattleData_o *data; // x0
  __int64 *v8; // x8

  if ( (byte_4B19115 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9747/*"OK"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_9373/*"NG"*/, v4, v5);
    byte_4B19115 = 1;
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
      v8 = &StringLiteral_9373/*"NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_1BCAA3C(data, v6);
  }
  data = (BattleData_o *)this->fields.myFsm;
  this->fields.IsContinueItem = 1;
  if ( !data )
    goto LABEL_10;
  v8 = &StringLiteral_9747/*"OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)*v8, 0LL);
}


void __fastcall BattlePerformanceContinue__CheckDefenceTargetBroken(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BattleData_o *data; // x0
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *Component_object; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  NGUIFader_OnFinished_o *v16; // x21
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19141 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue__CheckDefenceTargetBroken_b__129_0__, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___, v4, v5);
    sub_1BCA7E0(&NGUIFader_OnFinished_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_5703/*"EVENT_FALSE"*/, v8, v9);
    byte_4B19141 = 1;
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
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
        v16 = (NGUIFader_OnFinished_o *)sub_1BCAA2C(NGUIFader_OnFinished_TypeInfo, v13, v14, v15);
        NGUIFader_OnFinished___ctor(
          v16,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue__CheckDefenceTargetBroken_b__129_0__,
          0LL);
        if ( Component_object )
        {
          v17.fields.r = 1.0;
          v17.fields.g = 1.0;
          v17.fields.b = 1.0;
          v17.fields.a = 1.0;
          NGUIFader__FadeStart((NGUIFader_o *)Component_object, v17, 0.5, 0, v16, 0, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_1BCAA3C(data, method);
  }
  data = (BattleData_o *)this->fields.myFsm;
  this->fields._isDefenceTargetBroken_k__BackingField = 0;
  if ( !data )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_5703/*"EVENT_FALSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__CloseGiveUp(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *giveUpWindow; // x0

  if ( (byte_4B19110 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9370/*"NEXT"*/, method, v2);
    byte_4B19110 = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow
    || (UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0LL),
        (giveUpWindow = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(giveUpWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)giveUpWindow, (System_String_o *)StringLiteral_9370/*"NEXT"*/, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceContinue__CoEndContinue(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B19143 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceContinue__CoEndContinue_d__132_TypeInfo, method, v2);
    byte_4B19143 = 1;
  }
  v5 = sub_1BCAA2C(BattlePerformanceContinue__CoEndContinue_d__132_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattlePerformanceContinue__EndContinue(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0

  if ( this->fields._isDefenceTargetBroken_k__BackingField )
  {
    v3 = BattlePerformanceContinue__CoEndContinue(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  UnityEngine_Component_o *window; // x0
  __int64 v34; // x2
  UnityEngine_Transform_o *v35; // x20
  __int64 v36; // x1
  UILabel_o *checkGiveUpLabel; // x20
  UILabel_o *checkUseCommandSpell; // x20
  UILabel_o *checkUseGem; // x20
  UILabel_o *checkUseBuyGem; // x20

  if ( (byte_4B1910B & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, inperf, indata);
    sub_1BCA7E0(&StringLiteral_2867/*"BATTLE_CONTINUE_NO_STONE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_2856/*"BATTLE_CONTINUE_CHECK_SPELL"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_2857/*"BATTLE_CONTINUE_CHECK_STONE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_2983/*"BATTLE_RETIRE_CHECKSTR"*/, v18, v19);
    byte_4B1910B = 1;
  }
  this->fields.perf = inperf;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.perf,
    (int64_t)inperf,
    (int64_t)indata,
    (int32_t)inlogic,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)indata, v20, v21, v22, v23, v24, v25);
  this->fields.logic = inlogic;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.logic, (int64_t)inlogic, v26, v27, v28, v29, v30, v31);
  window = (UnityEngine_Component_o *)this->fields.window;
  if ( !window )
    goto LABEL_26;
  window = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(window, 0LL);
  v35 = (UnityEngine_Transform_o *)window;
  if ( !byte_4B109C1 )
  {
    window = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v32, v34);
    byte_4B109C1 = 1;
  }
  if ( !v35 )
    goto LABEL_26;
  UnityEngine_Transform__set_localPosition(v35, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2983/*"BATTLE_RETIRE_CHECKSTR"*/, 0LL);
  if ( !checkGiveUpLabel )
    goto LABEL_26;
  UILabel__set_text(checkGiveUpLabel, (System_String_o *)window, 0LL);
  checkUseCommandSpell = this->fields.checkUseCommandSpell;
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2856/*"BATTLE_CONTINUE_CHECK_SPELL"*/, 0LL);
  if ( !checkUseCommandSpell )
    goto LABEL_26;
  UILabel__set_text(checkUseCommandSpell, (System_String_o *)window, 0LL);
  checkUseGem = this->fields.checkUseGem;
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2857/*"BATTLE_CONTINUE_CHECK_STONE"*/, 0LL);
  if ( !checkUseGem
    || (UILabel__set_text(checkUseGem, (System_String_o *)window, 0LL),
        checkUseBuyGem = this->fields.checkUseBuyGem,
        window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2867/*"BATTLE_CONTINUE_NO_STONE"*/, 0LL),
        !checkUseBuyGem)
    || (UILabel__set_text(checkUseBuyGem, (System_String_o *)window, 0LL),
        (window = (UnityEngine_Component_o *)this->fields.continueWaveRestartWindow) == 0LL)
    || ((*(void (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&window->klass[1]._1.this_arg.bits)(
          window,
          window->klass[1]._1.element_class),
        (window = (UnityEngine_Component_o *)this->fields.continueWaveRestartWindow) == 0LL) )
  {
LABEL_26:
    sub_1BCAA3C(window, v32);
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
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppClass *klass; // x8
  const MethodInfo *v19; // x8
  Il2CppObject *v20; // x20
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x21
  __int64 v24; // x1
  bool v25; // w22
  System_String_o *v26; // x0
  System_String_o *v27; // x20
  Il2CppObject *Instance; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Action_o *v32; // x22
  int v33; // [xsp+3Ch] [xbp-44h] BYREF

  v3 = (Il2CppObject *)this;
  if ( (byte_4B19142 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceContinue__OpenBrokenMessage_b__130_0__, v4, v5);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_25353/*"{0}_{1}"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_2878/*"BATTLE_DIALOG_DEFENCE_TARGET_BROKEN"*/, v14, v15);
    this = (BattlePerformanceContinue_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    byte_4B19142 = 1;
  }
  klass = v3[3].klass;
  if ( !klass )
    goto LABEL_14;
  v19 = klass->vtable[31].method;
  if ( !v19 )
    goto LABEL_14;
  v20 = (Il2CppObject *)StringLiteral_2878/*"BATTLE_DIALOG_DEFENCE_TARGET_BROKEN"*/;
  v33 = (int)v19->klass;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  v23 = System_String__Format_62415592((System_String_o *)StringLiteral_25353/*"{0}_{1}"*/, v20, v21, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  v25 = LocalizationManager__ContainsKey(v23, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  v26 = v25 ? v23 : (System_String_o *)v20;
  v27 = LocalizationManager__Get(v26, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31);
  System_Action___ctor(v32, v3, Method_BattlePerformanceContinue__OpenBrokenMessage_b__130_0__, 0LL);
  if ( !Instance )
LABEL_14:
    sub_1BCAA3C(this, method);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v27,
    v32,
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleWindowInterruptionComponent_o *continueInterruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B1914A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue__OpenContinueInterruption_b__139_0__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v5, v6);
    byte_4B1914A = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v2, v3);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueInterruption_b__139_0__,
    0LL);
  if ( !continueInterruptionWindow )
    sub_1BCAA3C(v9, v10);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueInterruptionWindow->klass->vtable._10_Open.method)(
    continueInterruptionWindow,
    v8,
    continueInterruptionWindow->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__OpenContinueItemWindow(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  void *ContinueItemWindow; // x0
  _DWORD *v43; // x20
  UILabel_o *ContinueCommandSpellNum; // x21
  System_String_o *v45; // x1
  UILabel_o *ContinueStoneNum; // x21
  Il2CppObject *v47; // x0
  UILabel_o *ContinueItemNumLabel; // x21
  Il2CppObject *v49; // x0
  UISprite_o *ContinueItemSpr; // x21
  __int64 v51; // x1
  int32_t ContinueItemImageId; // w22
  int v53; // w21
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t *v60; // x8
  int64_t v61; // x1
  __int64 v62; // x1
  UILabel_o *ContinueItemBtnLabel; // x21
  UILabel_o *deadLine; // x21
  System_String_o *v65; // x22
  int64_t ContinueDeadLine; // x0
  Il2CppObject *RestTime; // x0
  int v68; // w21
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t *v75; // x8
  int64_t v76; // x1
  __int64 v77; // x1
  UILabel_o *ContinueCommandSpellBtnLabel; // x21
  __int64 v79; // x1
  int v80; // w21
  UILabel_o *ContinueStoneBtnLabel; // x20
  System_String_o **v82; // x8
  const MethodInfo *v83; // x1
  __int64 v84; // x1
  UILabel_o *ContinueRetireBtnLabel; // x20
  const MethodInfo *v86; // x4
  System_String_o **v87; // x8
  struct BattleData_o *data; // x8
  struct BattleData_o *v89; // x8
  __int64 v90; // x2
  __int64 v91; // x3
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v100; // x21
  int32_t ContinueItemNum; // [xsp+4h] [xbp-4Ch] BYREF
  int v102; // [xsp+8h] [xbp-48h] BYREF
  int32_t OverwriteCommandSpellContinue; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19116 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceContinue_endOpenContinueItem__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10, v11);
    sub_1BCA7E0(&int_TypeInfo, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_9747/*"OK"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_2855/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_2862/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_2854/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_2872/*"BATTLE_CONTINUE_USE_SPELL"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_9748/*"OK_CONTINUE_ITEM"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_2859/*"BATTLE_CONTINUE_ITEM_BTN"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_2863/*"BATTLE_CONTINUE_ITEM_SELECT"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_2864/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_2868/*"BATTLE_CONTINUE_RETIRE"*/, v40, v41);
    byte_4B19116 = 1;
  }
  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ContinueItemWindow, 1, 0LL);
  ContinueItemWindow = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_73;
  v43 = ContinueItemWindow;
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
  v45 = (System_String_o *)(ContinueItemWindow ? ContinueItemWindow : StringLiteral_1/*""*/);
  UILabel__set_text(ContinueCommandSpellNum, v45, 0LL);
  if ( !v43 )
    goto LABEL_73;
  ContinueStoneNum = this->fields.ContinueStoneNum;
  v102 = v43[44];
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
  ContinueItemWindow = System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v47, 0LL);
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
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ContinueItemNum);
  ContinueItemWindow = System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v49, 0LL);
  if ( !ContinueItemNumLabel )
    goto LABEL_73;
  UILabel__set_text(ContinueItemNumLabel, (System_String_o *)ContinueItemWindow, 0LL);
  ContinueItemWindow = this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  ContinueItemSpr = this->fields.ContinueItemSpr;
  ContinueItemImageId = BattleData__GetContinueItemImageId((BattleData_o *)ContinueItemWindow, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v51);
  AtlasManager__SetItem(ContinueItemSpr, ContinueItemImageId, 0LL);
  ContinueItemWindow = this->fields.data;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  ContinueItemWindow = (void *)BattleData__GetContinueItemNum((BattleData_o *)ContinueItemWindow, 0LL);
  if ( !this->fields.ContinueItemBtn )
    goto LABEL_73;
  v53 = (int)ContinueItemWindow;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                         this->fields.ContinueItemBtn,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( v53 < 1 )
  {
    if ( !ContinueItemWindow )
      goto LABEL_73;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0LL);
    ContinueItemWindow = this->fields.ContinueItemBtn;
    if ( !ContinueItemWindow )
      goto LABEL_73;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_73;
    v60 = &StringLiteral_5565/*"END_PROC"*/;
  }
  else
  {
    if ( !ContinueItemWindow )
      goto LABEL_73;
    v104.fields.r = 1.0;
    v104.fields.g = 1.0;
    v104.fields.b = 1.0;
    v104.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, v104, 0LL);
    ContinueItemWindow = this->fields.ContinueItemBtn;
    if ( !ContinueItemWindow )
      goto LABEL_73;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_73;
    v60 = &StringLiteral_9748/*"OK_CONTINUE_ITEM"*/;
  }
  v61 = *v60;
  *((_QWORD *)ContinueItemWindow + 5) = *v60;
  sub_1BCA784((PartyOrganizationUtility_o *)((char *)ContinueItemWindow + 40), v61, v54, v55, v56, v57, v58, v59);
  ContinueItemBtnLabel = this->fields.ContinueItemBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62);
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2859/*"BATTLE_CONTINUE_ITEM_BTN"*/, 0LL);
  if ( !ContinueItemBtnLabel )
    goto LABEL_73;
  UILabel__set_text(ContinueItemBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  deadLine = this->fields.deadLine;
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2862/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, 0LL);
  if ( !this->fields.data )
    goto LABEL_73;
  v65 = (System_String_o *)ContinueItemWindow;
  ContinueDeadLine = BattleData__GetContinueDeadLine(this->fields.data, 0LL);
  RestTime = (Il2CppObject *)LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
  ContinueItemWindow = System_String__Format(v65, RestTime, 0LL);
  if ( !deadLine )
    goto LABEL_73;
  UILabel__set_text(deadLine, (System_String_o *)ContinueItemWindow, 0LL);
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  v68 = OverwriteCommandSpellContinue;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( v68 >= 3 )
  {
    if ( !ContinueItemWindow )
      goto LABEL_73;
    v105.fields.r = 1.0;
    v105.fields.g = 1.0;
    v105.fields.b = 1.0;
    v105.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, v105, 0LL);
    ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
    if ( !ContinueItemWindow )
      goto LABEL_73;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_73;
    v75 = &StringLiteral_9747/*"OK"*/;
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
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_73;
    v75 = &StringLiteral_5565/*"END_PROC"*/;
  }
  v76 = *v75;
  *((_QWORD *)ContinueItemWindow + 5) = *v75;
  sub_1BCA784((PartyOrganizationUtility_o *)((char *)ContinueItemWindow + 40), v76, v69, v70, v71, v72, v73, v74);
  ContinueCommandSpellBtnLabel = this->fields.ContinueCommandSpellBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2872/*"BATTLE_CONTINUE_USE_SPELL"*/, 0LL);
  if ( !ContinueCommandSpellBtnLabel )
    goto LABEL_73;
  UILabel__set_text(ContinueCommandSpellBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  v80 = v43[44];
  ContinueStoneBtnLabel = this->fields.ContinueStoneBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v79);
  v82 = (System_String_o **)(v80 < 1 ? &StringLiteral_2854/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/ : &StringLiteral_2855/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
  ContinueItemWindow = LocalizationManager__Get(*v82, 0LL);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_73;
  UILabel__set_text(ContinueStoneBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, v83);
  ContinueRetireBtnLabel = this->fields.ContinueRetireBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v84);
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2868/*"BATTLE_CONTINUE_RETIRE"*/, 0LL);
  if ( !ContinueRetireBtnLabel )
    goto LABEL_73;
  UILabel__set_text(ContinueRetireBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  v87 = (System_String_o **)(OverwriteCommandSpellContinue >= 3 ? &StringLiteral_2863/*"BATTLE_CONTINUE_ITEM_SELECT"*/ : &StringLiteral_2864/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/);
  BattlePerformanceContinue__SetContinueMessage(this, this->fields.ContinueLabel, *v87, 0x80000000, v86);
  data = this->fields.data;
  if ( !data )
    goto LABEL_73;
  ContinueItemWindow = data->fields.quest_ent;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  ContinueItemWindow = (void *)QuestEntity__HasFlag((QuestEntity_o *)ContinueItemWindow, 0x400000000LL, 0LL);
  if ( ((unsigned __int8)ContinueItemWindow & 1) != 0 )
    goto LABEL_65;
  v89 = this->fields.data;
  if ( !v89 || (ContinueItemWindow = v89->fields.quest_ent) == 0LL )
LABEL_73:
    sub_1BCAA3C(ContinueItemWindow, method);
  if ( !QuestEntity__HasFlag((QuestEntity_o *)ContinueItemWindow, 0x100000000LL, 0LL) )
    goto LABEL_71;
LABEL_65:
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !ContinueItemWindow )
    goto LABEL_73;
  UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0LL);
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
  if ( !ContinueItemWindow )
    goto LABEL_73;
  v98 = StringLiteral_5565/*"END_PROC"*/;
  *((_QWORD *)ContinueItemWindow + 5) = StringLiteral_5565/*"END_PROC"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)((char *)ContinueItemWindow + 40), v98, v92, v93, v94, v95, v96, v97);
  ContinueItemWindow = this->fields.ContinueCommandSpellNum;
  if ( !ContinueItemWindow )
    goto LABEL_73;
  UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellnowColor, 0LL);
LABEL_71:
  window = this->fields.window;
  v100 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v90, v91);
  BattleWindowComponent_EndCall___ctor(
    v100,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endOpenContinueItem__,
    0LL);
  if ( !window )
    goto LABEL_73;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v100,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__OpenContinueWaveRestart(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B19146 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue__OpenContinueWaveRestart_b__135_0__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v5, v6);
    byte_4B19146 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v2, v3);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueWaveRestart_b__135_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_1BCAA3C(v9, v10);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueWaveRestartWindow->klass->vtable._10_Open.method)(
    continueWaveRestartWindow,
    v8,
    continueWaveRestartWindow->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__OpenContinueWaveSelectWindow(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Object_o *waveSelectDialog; // x20
  __int64 v29; // x1
  UnityEngine_GameObject_o *waveSelectDialogPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  int64_t Object; // x0
  Il2CppObject *Component_object; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int32_t v40; // w20
  __int64 v41; // x1
  int32_t Phase; // w21
  int32_t EventId; // w24
  __int64 v44; // x1
  Il2CppObject *Master_object; // x22
  __int64 v46; // x2
  __int64 v47; // x3
  UserEventDeckEntity_o *v48; // x22
  QuestRestrictionInfo_o *v49; // x23
  int32_t v50; // w20
  int32_t DispWaveCount; // w0
  WaveBattleSelectWaveDialog_o *v52; // x24
  int32_t v53; // w21
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  WaveBattleSelectWaveDialog_CloseDelegate_o *v57; // x25
  WaveBattleSelectWaveDialog_o *v58; // x20
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Action_int__o *v62; // x21
  WaveBattleSelectWaveDialog_o *v63; // x20
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  System_Action_o *v67; // x21

  if ( (byte_4B1914E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_0__, v6, v7);
    sub_1BCA7E0(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__, v8, v9);
    sub_1BCA7E0(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_2__, v10, v11);
    sub_1BCA7E0(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestGroupMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventDeckMaster___, v16, v17);
    sub_1BCA7E0(&DataManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___, v20, v21);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v24, v25);
    sub_1BCA7E0(&QuestRestrictionInfo_TypeInfo, v26, v27);
    byte_4B1914E = 1;
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    this->fields.waveSelectDialog = (struct WaveBattleSelectWaveDialog_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.waveSelectDialog,
      (int64_t)Component_object,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_24;
  Object = BattleData__getQuestId((BattleData_o *)Object, 0LL);
  if ( !this->fields.data )
    goto LABEL_24;
  v40 = Object;
  Phase = BattleData__getPhase(this->fields.data, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41);
  Object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Object )
    goto LABEL_24;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Object, v40, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v44);
  Object = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_24;
  Object = (int64_t)UserEventDeckMaster__getDeckList(
                      (UserEventDeckMaster_o *)Master_object,
                      Object,
                      EventId,
                      v40,
                      Phase,
                      0LL);
  if ( !Object )
    goto LABEL_24;
  if ( !*(_DWORD *)(Object + 24) )
    sub_1BCAA44(Object, v29);
  v48 = *(UserEventDeckEntity_o **)(Object + 32);
  v49 = (QuestRestrictionInfo_o *)sub_1BCAA2C(QuestRestrictionInfo_TypeInfo, v29, v46, v47);
  QuestRestrictionInfo___ctor_41151748(v49, EventId, v40, Phase, 0LL);
  Object = (int64_t)this->fields.data;
  if ( !Object )
    goto LABEL_24;
  Object = BattleData__GetMaxWaveCount((BattleData_o *)Object, 0LL);
  if ( !this->fields.data )
    goto LABEL_24;
  v50 = Object;
  DispWaveCount = BattleData__getDispWaveCount(this->fields.data, 0LL);
  v52 = this->fields.waveSelectDialog;
  v53 = DispWaveCount;
  v57 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_1BCAA2C(
                                                        WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo,
                                                        v54,
                                                        v55,
                                                        v56);
  WaveBattleSelectWaveDialog_CloseDelegate___ctor(
    v57,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_0__,
    0LL);
  if ( !v52 )
    goto LABEL_24;
  WaveBattleSelectWaveDialog__SetDialog(v52, v48, v49, v50, v53, 1, v57, 0LL);
  v58 = this->fields.waveSelectDialog;
  v62 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v59, v60, v61);
  System_Action_int____ctor(
    v62,
    (Il2CppObject *)this,
    (intptr_t)Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__,
    0LL);
  if ( !v58
    || (WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(v58, v62, 0LL),
        v63 = this->fields.waveSelectDialog,
        v67 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v64, v65, v66),
        System_Action___ctor(
          v67,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_2__,
          0LL),
        !v63) )
  {
LABEL_24:
    sub_1BCAA3C(Object, v29);
  }
  WaveBattleSelectWaveDialog__Open_33050148(v63, v67, 0LL);
}


void __fastcall BattlePerformanceContinue__OpenGiveUp(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_GameObject_o *giveUpWindow; // x0
  struct BattleData_o *data; // x8
  struct BattleEntity_o *battle_ent; // x8
  QuestEntity_o *v23; // x20
  UILabel_o *giveUpContinueItemNum; // x20
  Il2CppObject *v25; // x0
  UISprite_o *giveUpContinueItemSpr; // x20
  __int64 v27; // x1
  int32_t ContinueItemImageId; // w21
  __int64 v29; // x1
  UILabel_o *checkGiveUpLabel; // x20
  bool HasFlag; // w0
  __int64 v32; // x1
  bool v33; // w21
  __int64 *v34; // x8
  int32_t ContinueItemNum; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1910F & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_2983/*"BATTLE_RETIRE_CHECKSTR"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_2984/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/, v18, v19);
    byte_4B1910F = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0LL);
  if ( !giveUpWindow )
    goto LABEL_54;
  v36.fields.x = 0.0;
  v36.fields.z = 0.0;
  v36.fields.y = 72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v36, 0LL);
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
  v37.fields.x = 0.0;
  v37.fields.z = 0.0;
  v37.fields.y = 77.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v37, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)giveUpWindow,
                                               0LL);
  if ( !giveUpWindow )
    goto LABEL_54;
  v38.fields.x = 0.0;
  v38.fields.y = 6.0;
  v38.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v38, 0LL);
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
  v39.fields.z = 0.0;
  v39.fields.x = 193.0;
  v39.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v39, 0LL);
  giveUpWindow = this->fields.giveUpCancelBtn;
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0LL);
  if ( !giveUpWindow )
    goto LABEL_54;
  v40.fields.z = 0.0;
  v40.fields.x = -193.0;
  v40.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v40, 0LL);
  giveUpWindow = this->fields.giveUpContinueItemRoot;
  if ( !giveUpWindow )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)giveUpWindow,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  data = this->fields.data;
  if ( !data )
    goto LABEL_54;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent || !giveUpWindow )
    goto LABEL_54;
  giveUpWindow = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)giveUpWindow,
                                               battle_ent->fields.questId,
                                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v23 = (QuestEntity_o *)giveUpWindow;
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
          v41.fields.x = 0.0;
          v41.fields.z = 0.0;
          v41.fields.y = 66.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v41, 0LL);
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
                v42.fields.x = 0.0;
                v42.fields.z = 0.0;
                v42.fields.y = 97.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v42, 0LL);
                giveUpWindow = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
                if ( giveUpWindow )
                {
                  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)giveUpWindow,
                                                               0LL);
                  if ( giveUpWindow )
                  {
                    v43.fields.x = 0.0;
                    v43.fields.y = 26.0;
                    v43.fields.z = 0.0;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v43, 0LL);
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
                            v44.fields.z = 0.0;
                            v44.fields.x = 193.0;
                            v44.fields.y = -92.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v44, 0LL);
                            giveUpWindow = this->fields.giveUpCancelBtn;
                            if ( giveUpWindow )
                            {
                              giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                           giveUpWindow,
                                                                           0LL);
                              if ( giveUpWindow )
                              {
                                v45.fields.z = 0.0;
                                v45.fields.x = -193.0;
                                v45.fields.y = -92.0;
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)giveUpWindow,
                                  v45,
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
                                    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ContinueItemNum);
                                    giveUpWindow = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                 (System_String_o *)StringLiteral_25188/*"{0:#,0}"*/,
                                                                                 v25,
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
                                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v27);
                                        AtlasManager__SetItem(giveUpContinueItemSpr, ContinueItemImageId, 0LL);
                                        checkGiveUpLabel = this->fields.checkGiveUpLabel;
                                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
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
      sub_1BCAA3C(giveUpWindow, method);
    }
  }
  if ( !v23 )
    goto LABEL_54;
  HasFlag = QuestEntity__HasFlag(v23, 0x40000000LL, 0LL);
  checkGiveUpLabel = this->fields.checkGiveUpLabel;
  v33 = HasFlag;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
    if ( v33 )
      goto LABEL_48;
LABEL_50:
    v34 = &StringLiteral_2983/*"BATTLE_RETIRE_CHECKSTR"*/;
    goto LABEL_51;
  }
  if ( !HasFlag )
    goto LABEL_50;
LABEL_48:
  v34 = &StringLiteral_2984/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/;
LABEL_51:
  giveUpWindow = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v34, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  Il2CppObject *v21; // x20
  System_String_o *v22; // x21
  System_String_o *v23; // x22
  System_String_o *v24; // x23
  System_String_o *v25; // x24
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  CommonConfirmDialog_ClickDelegate_o *v29; // x25

  if ( (byte_4B1914C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue__OpenInterruptionConfirmWindow_b__141_0__, method, v2);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_2923/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_2921/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_2920/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, v16, v17);
    byte_4B1914C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0, 0LL);
  v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2921/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_TITLE"*/, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2920/*"BATTLE_INTERRUPTION_WINDOW_CONFIRM_MESSAGE"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2923/*"BATTLE_INTERRUPTION_WINDOW_INTERRUPTION_BUTTON"*/, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v29 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v26, v27, v28);
  CommonConfirmDialog_ClickDelegate___ctor(
    v29,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenInterruptionConfirmWindow_b__141_0__,
    0LL);
  if ( !v21 )
LABEL_8:
    sub_1BCAA3C(Instance, v19);
  CommonUI__OpenConfirmDecideDialog((CommonUI_o *)v21, v22, v23, v24, v25, v29, 23, 280, 13.0, 22, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__OpenWaveSelectConfirmDialog(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  BattleData_o *data; // x0
  int32_t selectedInterruptionWave; // w21
  __int64 v26; // x1
  int32_t DispWaveCount; // w20
  struct BattleData_o *v28; // x8
  System_String_o *v29; // x20
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  struct BattleData_o *v32; // x8
  System_String_o *v33; // x20
  Il2CppObject *v34; // x21
  Il2CppObject *v35; // x0
  System_String_o *v36; // x20
  int32_t v37; // w22
  __int64 v38; // x1
  int32_t v39; // w21
  System_String_o *v40; // x0
  struct BattleData_o *v41; // x8
  System_String_o *v42; // x21
  Il2CppObject *v43; // x0
  System_String_o *v44; // x21
  int32_t v45; // w27
  int32_t v46; // w22
  __int64 v47; // x1
  Il2CppObject *Instance; // x23
  System_String_o *v49; // x24
  System_String_o *v50; // x25
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  CommonConfirmDialog_ClickDelegate_o *v54; // x26
  int32_t decideTxtSize; // w8
  int32_t v56; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B1914F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue__OpenWaveSelectConfirmDialog_b__144_0__, method, v2);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_2930/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_2928/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_2927/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_2929/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_2932/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_1217/*"00"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_2931/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/, v22, v23);
    byte_4B1914F = 1;
  }
  v56 = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  selectedInterruptionWave = data->fields.selectedInterruptionWave;
  DispWaveCount = BattleData__getDispWaveCount(data, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  if ( selectedInterruptionWave == DispWaveCount )
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2931/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE_FROM_SAME_WAVE"*/, 0LL);
    v28 = this->fields.data;
    if ( !v28 )
      goto LABEL_28;
    v29 = (System_String_o *)data;
    v30 = (Il2CppObject *)System_Int32__ToString_63206828((int)v28 + 1040, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
    v31 = System_String__Format(v29, v30, 0LL);
  }
  else
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2930/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_MESSAGE"*/, 0LL);
    v32 = this->fields.data;
    if ( !v32 )
      goto LABEL_28;
    v33 = (System_String_o *)data;
    data = (BattleData_o *)System_Int32__ToString_63206828((int)v32 + 1040, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
    if ( !this->fields.data )
      goto LABEL_28;
    v34 = (Il2CppObject *)data;
    v56 = BattleData__getDispWaveCount(this->fields.data, 0LL);
    v35 = (Il2CppObject *)System_Int32__ToString_63206828((int32_t)&v56, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
    v31 = System_String__Format_62415592(v33, v34, v35, 0LL);
  }
  v36 = v31;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  v37 = data->fields.selectedInterruptionWave;
  v39 = BattleData__getDispWaveCount(data, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
  if ( v37 == v39 )
  {
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_2929/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE_FROM_SAME_WAVE"*/, 0LL);
  }
  else
  {
    data = (BattleData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2928/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_DECIDE"*/, 0LL);
    v41 = this->fields.data;
    if ( !v41 )
      goto LABEL_28;
    v42 = (System_String_o *)data;
    v43 = (Il2CppObject *)System_Int32__ToString_63206828((int)v41 + 1040, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
    v40 = System_String__Format(v42, v43, 0LL);
  }
  v44 = v40;
  data = this->fields.data;
  if ( !data )
    goto LABEL_28;
  v45 = data->fields.selectedInterruptionWave;
  v46 = BattleData__getDispWaveCount(data, 0LL);
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !data )
    goto LABEL_28;
  CommonUI__SetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)data, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_2932/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_TITLE"*/, 0LL);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_2927/*"BATTLE_INTERRUPTION_WINDOW_WAVE_CONFIRM_CANCEL"*/, 0LL);
  v54 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v51, v52, v53);
  CommonConfirmDialog_ClickDelegate___ctor(
    v54,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenWaveSelectConfirmDialog_b__144_0__,
    0LL);
  if ( !Instance )
LABEL_28:
    sub_1BCAA3C(data, method);
  if ( v45 == v46 )
    decideTxtSize = 30;
  else
    decideTxtSize = 22;
  CommonUI__OpenConfirmDecideDialog(
    (CommonUI_o *)Instance,
    v49,
    v36,
    v44,
    v50,
    v54,
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleWindowInterruptionComponent_o *continueInterruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B1914D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue__ProcInterruption_b__142_0__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v5, v6);
    byte_4B1914D = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v2, v3);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__ProcInterruption_b__142_0__,
    0LL);
  if ( !continueInterruptionWindow )
    sub_1BCAA3C(v9, v10);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueInterruptionWindow->klass->vtable._12_Close.method)(
    continueInterruptionWindow,
    v8,
    continueInterruptionWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__ProcSelectWaveRestart(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *waveSelectDialog; // x20
  __int64 v9; // x1
  WaveBattleSelectWaveDialog_o *v10; // x0
  UnityEngine_Object_o *continueInterruptionWindow; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  struct BattleWindowInterruptionComponent_o *v15; // x20
  BattleWindowComponent_EndCall_o *v16; // x21

  if ( (byte_4B19150 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue__ProcSelectWaveRestart_b__145_0__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B19150 = 1;
  }
  waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0LL, 0LL) )
  {
    v10 = this->fields.waveSelectDialog;
    if ( !v10 )
      goto LABEL_14;
    WaveBattleSelectWaveDialog__Close(v10, 0LL);
  }
  continueInterruptionWindow = (UnityEngine_Object_o *)this->fields.continueInterruptionWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(continueInterruptionWindow, 0LL, 0LL) )
  {
    v15 = this->fields.continueInterruptionWindow;
    v16 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v12, v13, v14);
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
LABEL_14:
    sub_1BCAA3C(v10, v9);
  }
}


void __fastcall BattlePerformanceContinue__ProcWaveRestartFromInterruption(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleWindowInterruptionComponent_o *continueInterruptionWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B1914B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue__ProcWaveRestartFromInterruption_b__140_0__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v5, v6);
    byte_4B1914B = 1;
  }
  continueInterruptionWindow = this->fields.continueInterruptionWindow;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v2, v3);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__ProcWaveRestartFromInterruption_b__140_0__,
    0LL);
  if ( !continueInterruptionWindow )
    sub_1BCAA3C(v9, v10);
  ((void (__fastcall *)(struct BattleWindowInterruptionComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueInterruptionWindow->klass->vtable._12_Close.method)(
    continueInterruptionWindow,
    v8,
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
    sub_1BCAA3C(ContinueItemWindow, method);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  void *SelfUserGame; // x0
  __int64 v18; // x1
  System_String_o *mText; // x21
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  struct BattleData_o *data; // x8
  struct BattleDefenceTargetData_o *defenceTargetData; // x8
  Il2CppObject *v24; // x20
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x21
  System_String_o *v29; // x22
  __int64 v30; // x1
  bool v31; // w23
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  int32_t uiId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B19144 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, label, localizationKey);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_2858/*"BATTLE_CONTINUE_DEFENCE_TARGET_HEAL"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_25353/*"{0}_{1}"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_2866/*"BATTLE_CONTINUE_NOT_ENOUGH_STONE"*/, v15, v16);
    byte_4B19144 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, label);
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2866/*"BATTLE_CONTINUE_NOT_ENOUGH_STONE"*/, 0LL);
    v21 = System_String__Concat_62401220(mText, v20, 0LL);
    UILabel__set_text(label, v21, 0LL);
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
    sub_1BCAA3C(SelfUserGame, v18);
  v24 = (Il2CppObject *)StringLiteral_2858/*"BATTLE_CONTINUE_DEFENCE_TARGET_HEAL"*/;
  uiId = defenceTargetData->fields.uiId;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &uiId);
  v26 = System_String__Format_62415592((System_String_o *)StringLiteral_25353/*"{0}_{1}"*/, v24, v25, 0LL);
  v28 = label->fields.mText;
  v29 = v26;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
  v31 = LocalizationManager__ContainsKey(v29, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
  if ( v31 )
    v32 = v29;
  else
    v32 = (System_String_o *)v24;
  v33 = LocalizationManager__Get(v32, 0LL);
  v34 = System_String__Concat_62401220(v28, v33, 0LL);
  UILabel__set_text(label, v34, 0LL);
}


void __fastcall BattlePerformanceContinue__SkipCommandSpellRequest(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  void *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v17; // x1

  if ( (byte_4B19140 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandSpellMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_3884/*"CONNECT_OK"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_7004/*"GAME_OVER_COMMAND_SPELL_ID"*/, v12, v13);
    byte_4B19140 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  Instance = (void *)ConstantMaster__getValue((System_String_o *)StringLiteral_7004/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int32_t)Instance,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
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
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v17);
  BattleData__setContinueBattleFlg(0, 1, 0LL);
  Instance = this->fields.myFsm;
  if ( !Instance )
LABEL_12:
    sub_1BCAA3C(Instance, v15);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3884/*"CONNECT_OK"*/, 0LL);
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
    sub_1BCAA3C(0LL, v4);
  BattlePerformance__SetTimeScale(perf, 1.0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__StartContinueImpl(
        BattlePerformanceContinue_o *this,
        bool inIsProgress,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v13; // x1
  BattleViewItemlistComponent_o *itemWindow; // x21
  UserGameEntity_o *v15; // x20
  BattleDropItem_array *DropItems; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  BattleDropItemComponent_ClickDelegate_o *v20; // x23
  UILabel_o *commandspell_now; // x21
  System_String_o *v22; // x1
  const MethodInfo *v23; // x2
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  const MethodInfo *v26; // x1
  int32_t OverwriteCommandSpellContinue; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1910E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue_StartContinueImpl__, inIsProgress, method);
    sub_1BCA7E0(&Method_BattlePerformanceContinue_showConf__, v4, v5);
    sub_1BCA7E0(&BattleDropItemComponent_ClickDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_12390/*"START_CONTINUE"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B1910E = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_20;
  itemWindow = this->fields.itemWindow;
  v15 = SelfUserGame;
  DropItems = BattleData__getDropItems(this->fields.data, 0LL);
  v20 = (BattleDropItemComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                     BattleDropItemComponent_ClickDelegate_TypeInfo,
                                                     v17,
                                                     v18,
                                                     v19);
  BattleDropItemComponent_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_showConf__,
    0LL);
  if ( !itemWindow )
    goto LABEL_20;
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, DropItems, v20, this->fields.itemColumnCount, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.itemWindow;
  if ( !SelfUserGame )
    goto LABEL_20;
  BattleViewItemlistComponent__setHide((BattleViewItemlistComponent_o *)SelfUserGame, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.data;
  if ( !SelfUserGame )
    goto LABEL_20;
  SelfUserGame = (UserGameEntity_o *)BattleData__CheckCurrentTemporaryCommandSpell(
                                       (BattleData_o *)SelfUserGame,
                                       v15,
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
  v22 = SelfUserGame ? (System_String_o *)SelfUserGame : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(commandspell_now, v22, 0LL);
  BattlePerformanceContinue__refreshStoneNow(this, v15, v23);
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
  v24 = Method_BattlePerformanceContinue_StartContinueImpl__;
  if ( (*((_BYTE *)Method_BattlePerformanceContinue_StartContinueImpl__ + 83) & 2) != 0 )
    v24 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceContinue_StartContinueImpl__);
  v25 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v24, v24[4]);
  OverwriteAssetSoundName__PlaySystemSe(v25, 7, 0LL);
  BattlePerformanceContinue__ResetContinueItemInfo(this, v26);
  SelfUserGame = (UserGameEntity_o *)this->fields.myFsm;
  if ( !SelfUserGame )
LABEL_20:
    sub_1BCAA3C(SelfUserGame, v13);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_12390/*"START_CONTINUE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__StartContinueInterruption(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *continueInterruptionWindow; // x21
  struct BattleWindowInterruptionComponent_o **p_continueInterruptionWindow; // x20
  __int64 v18; // x1
  UnityEngine_GameObject_o *continueInterruptionWindowPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  Il2CppObject *Component_object; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  BattleWindowInterruptionComponent_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Action_o *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Action_o *v41; // x23

  if ( (byte_4B19149 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceContinue__StartContinueInterruption_b__138_0__, v4, v5);
    sub_1BCA7E0(&Method_BattlePerformanceContinue__StartContinueInterruption_b__138_1__, v6, v7);
    sub_1BCA7E0(&Method_BattlePerformanceContinue__StartContinueInterruption_b__138_2__, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_12391/*"START_CONTINUE_INTERRUPTION"*/, v14, v15);
    byte_4B19149 = 1;
  }
  continueInterruptionWindow = (UnityEngine_Object_o *)this->fields.continueInterruptionWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleWindowInterruptionComponent___);
    *p_continueInterruptionWindow = (struct BattleWindowInterruptionComponent_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.continueInterruptionWindow,
      (int64_t)Component_object,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  Object = (UnityEngine_GameObject_o *)*p_continueInterruptionWindow;
  if ( !*p_continueInterruptionWindow )
    goto LABEL_13;
  Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0LL);
  if ( !Object )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(Object, 0, 0LL);
  v29 = this->fields.continueInterruptionWindow;
  v33 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v31, v32);
  System_Action___ctor(
    v33,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__138_0__,
    0LL);
  v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v34, v35, v36);
  System_Action___ctor(
    v37,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__138_1__,
    0LL);
  v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v39, v40);
  System_Action___ctor(
    v41,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueInterruption_b__138_2__,
    0LL);
  if ( !v29
    || (BattleWindowInterruptionComponent__SetInterruptionWindow(v29, 0LL, v33, v37, v41, 0, 1, 0LL),
        (Object = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(Object, v18);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Object, (System_String_o *)StringLiteral_12391/*"START_CONTINUE_INTERRUPTION"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__StartContinueWaveRestart(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x22
  PlayMakerFSM_o *myFsm; // x0
  __int64 v18; // x1

  if ( (byte_4B19145 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceContinue__StartContinueWaveRestart_b__134_0__, v5, v6);
    sub_1BCA7E0(&Method_BattlePerformanceContinue__StartContinueWaveRestart_b__134_1__, v7, v8);
    sub_1BCA7E0(&StringLiteral_12392/*"START_CONTINUE_WAVE_RESTART"*/, v9, v10);
    byte_4B19145 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueWaveRestart_b__134_0__,
    0LL);
  v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueWaveRestart_b__134_1__,
    0LL);
  if ( !continueWaveRestartWindow
    || (BattleWindowContinueWaveRestartComponent__SetWindow(continueWaveRestartWindow, v12, v16, 0LL),
        (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(myFsm, v18);
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12392/*"START_CONTINUE_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__Update(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *data; // x20
  __int64 v25; // x1
  BattleData_o *v26; // x0
  __int64 v27; // x1
  int64_t ContinueDeadLine; // x20
  System_String_o *RestTime; // x0
  UILabel_o *giveUpContinueItemLabel; // x21
  Il2CppObject *v31; // x20
  System_String_o *v32; // x0
  UILabel_o *deadLine; // x21
  System_String_o *v34; // x0
  UILabel_o *useCheckContinueItemLabel; // x21
  System_String_o *v36; // x0
  __int64 v37; // x1
  int64_t v38; // x20
  __int64 v39; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  ErrorDialog_ClickDelegate_o *v45; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-50h]

  if ( (byte_4B19109 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue_CallbackConfirmDialog__, method, v2);
    sub_1BCA7E0(&ErrorDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_2865/*"BATTLE_CONTINUE_ITEM_USE_CHECK"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_2861/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_2862/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_2860/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v22, v23);
    byte_4B19109 = 1;
  }
  data = (UnityEngine_Object_o *)this->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(data, 0LL, 0LL) && this->fields.IsContinueItem )
  {
    v26 = this->fields.data;
    if ( !v26 )
      goto LABEL_23;
    ContinueDeadLine = BattleData__GetContinueDeadLine(v26, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
    RestTime = LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
    giveUpContinueItemLabel = this->fields.giveUpContinueItemLabel;
    v31 = (Il2CppObject *)RestTime;
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_2861/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, 0LL);
    v26 = (BattleData_o *)System_String__Format(v32, v31, 0LL);
    if ( !giveUpContinueItemLabel )
      goto LABEL_23;
    UILabel__set_text(giveUpContinueItemLabel, (System_String_o *)v26, 0LL);
    deadLine = this->fields.deadLine;
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_2862/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, 0LL);
    v26 = (BattleData_o *)System_String__Format(v34, v31, 0LL);
    if ( !deadLine )
      goto LABEL_23;
    UILabel__set_text(deadLine, (System_String_o *)v26, 0LL);
    useCheckContinueItemLabel = this->fields.useCheckContinueItemLabel;
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2865/*"BATTLE_CONTINUE_ITEM_USE_CHECK"*/, 0LL);
    v26 = (BattleData_o *)System_String__Format(v36, v31, 0LL);
    if ( !useCheckContinueItemLabel )
      goto LABEL_23;
    UILabel__set_text(useCheckContinueItemLabel, (System_String_o *)v26, 0LL);
    v26 = this->fields.data;
    if ( !v26 )
      goto LABEL_23;
    v38 = BattleData__GetContinueDeadLine(v26, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v37);
    if ( v38 < NetworkManager__getTime(0LL) && !this->fields.isShowDeadLineDialog )
    {
      this->fields.isShowDeadLineDialog = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_2860/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
      v45 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v42, v43, v44);
      ErrorDialog_ClickDelegate___ctor(
        v45,
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
          v41,
          v45,
          0,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        return;
      }
LABEL_23:
      sub_1BCAA3C(v26, v25);
    }
  }
}


void __fastcall BattlePerformanceContinue__WaveRestartNg(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B19148 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue__WaveRestartNg_b__137_0__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v5, v6);
    byte_4B19148 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v2, v3);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__WaveRestartNg_b__137_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_1BCAA3C(v9, v10);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueWaveRestartWindow->klass->vtable._12_Close.method)(
    continueWaveRestartWindow,
    v8,
    continueWaveRestartWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__WaveRestartOk(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B19147 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue__WaveRestartOk_b__136_0__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v5, v6);
    byte_4B19147 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v2, v3);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__WaveRestartOk_b__136_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_1BCAA3C(v9, v10);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueWaveRestartWindow->klass->vtable._12_Close.method)(
    continueWaveRestartWindow,
    v8,
    continueWaveRestartWindow->klass->vtable._13_CompClose.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue___AttachStoneCountRefreshComponent_b__85_0(
        BattlePerformanceContinue_o *this,
        int32_t stoneCount,
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
  Il2CppObject *v25; // x0
  System_String_o *gem_now; // x0
  __int64 v27; // x1
  System_String_o *v28; // x21
  __int64 v29; // x1
  UILabel_o *ContinueStoneBtnLabel; // x21
  UILabel_o *stoneBtnLabel; // x21
  System_String_o *ActiveStateName; // x0
  UILabel_o *v33; // x21
  const MethodInfo *v34; // x4
  System_String_o **v35; // x8
  const MethodInfo *v36; // x4
  const MethodInfo *v37; // x4
  int32_t v38; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B19152 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&stoneCount, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_2856/*"BATTLE_CONTINUE_CHECK_SPELL"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_2855/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_2857/*"BATTLE_CONTINUE_CHECK_STONE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_2854/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_12736/*"Select_NoStone"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_2863/*"BATTLE_CONTINUE_ITEM_SELECT"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_2864/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_12737/*"Select_Stone"*/, v23, v24);
    byte_4B19152 = 1;
  }
  v38 = stoneCount;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  gem_now = System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v25, 0LL);
  if ( !this->fields.ContinueStoneNum )
    goto LABEL_25;
  v28 = gem_now;
  UILabel__set_text(this->fields.ContinueStoneNum, gem_now, 0LL);
  gem_now = (System_String_o *)this->fields.gem_now;
  if ( !gem_now )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)gem_now, v28, 0LL);
  gem_now = (System_String_o *)this->fields.stone_now;
  if ( !gem_now )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)gem_now, v28, 0LL);
  ContinueStoneBtnLabel = this->fields.ContinueStoneBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
  if ( stoneCount >= 1 )
  {
    gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2855/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, 0LL);
    if ( ContinueStoneBtnLabel )
    {
      UILabel__set_text(ContinueStoneBtnLabel, gem_now, 0LL);
      stoneBtnLabel = this->fields.stoneBtnLabel;
      gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2855/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, 0LL);
      if ( stoneBtnLabel )
      {
        UILabel__set_text(stoneBtnLabel, gem_now, 0LL);
        gem_now = (System_String_o *)this->fields.myFsm;
        if ( gem_now )
        {
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)gem_now, 0LL);
          if ( !System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_12736/*"Select_NoStone"*/, 0LL) )
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
                PlayMakerFSM__SetState((PlayMakerFSM_o *)gem_now, (System_String_o *)StringLiteral_12737/*"Select_Stone"*/, 0LL);
                goto LABEL_20;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1BCAA3C(gem_now, v27);
  }
  gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2854/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, 0LL);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_25;
  UILabel__set_text(ContinueStoneBtnLabel, gem_now, 0LL);
  v33 = this->fields.stoneBtnLabel;
  gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2854/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, 0LL);
  if ( !v33 )
    goto LABEL_25;
  UILabel__set_text(v33, gem_now, 0LL);
LABEL_20:
  gem_now = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_25;
  if ( BattleData__CheckCurrentTemporaryCommandSpell(this->fields.data, (UserGameEntity_o *)gem_now, 0LL) <= 2 )
    v35 = (System_String_o **)&StringLiteral_2864/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/;
  else
    v35 = (System_String_o **)&StringLiteral_2863/*"BATTLE_CONTINUE_ITEM_SELECT"*/;
  BattlePerformanceContinue__SetContinueMessage(this, this->fields.ContinueLabel, *v35, stoneCount, v34);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseCommandSpell,
    (System_String_o *)StringLiteral_2856/*"BATTLE_CONTINUE_CHECK_SPELL"*/,
    stoneCount,
    v36);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseGem,
    (System_String_o *)StringLiteral_2857/*"BATTLE_CONTINUE_CHECK_STONE"*/,
    stoneCount,
    v37);
}


void __fastcall BattlePerformanceContinue___CheckDefenceTargetBroken_b__129_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19153 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5820/*"EVENT_TRUE"*/, method, v2);
    byte_4B19153 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5820/*"EVENT_TRUE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenBrokenMessage_b__130_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19154 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5546/*"END_CLOSE"*/, method, v2);
    byte_4B19154 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5546/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueInterruption_b__139_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1915D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5560/*"END_OPEN"*/, method, v2);
    byte_4B1915D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5560/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueWaveRestart_b__135_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19157 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5560/*"END_OPEN"*/, method, v2);
    byte_4B19157 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5560/*"END_OPEN"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__143_0(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattlePerformanceContinue_o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct BattleData_o *data; // x8
  int64_t v17; // x1
  WaveBattleSelectWaveDialog_o *waveSelectDialog; // x20
  System_Action_o *v19; // x21

  v9 = this;
  if ( (byte_4B19161 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_3__, v10, v11);
    sub_1BCA7E0(&StringLiteral_3425/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/, v12, v13);
    this = (BattlePerformanceContinue_o *)sub_1BCA7E0(&StringLiteral_7512/*"INTERRUPTION"*/, v14, v15);
    byte_4B19161 = 1;
  }
  data = v9->fields.data;
  if ( !data )
    goto LABEL_9;
  data->fields.selectedInterruptionWave = -1;
  if ( isDecide )
  {
    v17 = StringLiteral_3425/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    v9->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3425/*"CANCEL_INTERRUPTION_TO_WAVE_SELECT"*/;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v9->fields.cancelInterruptionEvent,
      v17,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this = (BattlePerformanceContinue_o *)v9->fields.myFsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_7512/*"INTERRUPTION"*/, 0LL);
      return;
    }
LABEL_9:
    sub_1BCAA3C(this, isDecide);
  }
  waveSelectDialog = v9->fields.waveSelectDialog;
  v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_3__,
    0LL);
  if ( !waveSelectDialog )
    goto LABEL_9;
  WaveBattleSelectWaveDialog__Close_33048668(waveSelectDialog, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__143_1(
        BattlePerformanceContinue_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  PlayMakerFSM_o *myFsm; // x0
  __int64 v10; // x1
  struct BattleData_o *data; // x8

  if ( (byte_4B19163 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__, *(_QWORD *)&wave, method);
    sub_1BCA7E0(&StringLiteral_11660/*"SELECT_WAVE"*/, v5, v6);
    byte_4B19163 = 1;
  }
  v7 = Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__;
  if ( (*((_BYTE *)Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceContinue__OpenContinueWaveSelectWindow_b__143_1__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  data = this->fields.data;
  if ( !data || (data->fields.selectedInterruptionWave = wave, (myFsm = this->fields.myFsm) == 0LL) )
    sub_1BCAA3C(myFsm, v10);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_11660/*"SELECT_WAVE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__143_2(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19164 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B19164 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueWaveSelectWindow_b__143_3(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *waveSelectDialog; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B19162 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9373/*"NG"*/, v4, v5);
    byte_4B19162 = 1;
  }
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.waveSelectDialog;
  if ( !waveSelectDialog )
    goto LABEL_8;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(waveSelectDialog, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  this->fields.waveSelectDialog = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.waveSelectDialog, 0LL, v9, v10, v11, v12, v13, v14);
  waveSelectDialog = (UnityEngine_Component_o *)this->fields.myFsm;
  if ( !waveSelectDialog )
LABEL_8:
    sub_1BCAA3C(waveSelectDialog, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)waveSelectDialog, (System_String_o *)StringLiteral_9373/*"NG"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue___OpenInterruptionConfirmWindow_b__141_0(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t *p_cancelInterruptionEvent; // x8
  int64_t v30; // x1
  Il2CppObject *Instance; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Action_o *v35; // x20

  if ( (byte_4B1915F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_BattlePerformanceContinue___c__DisplayClass141_0__OpenInterruptionConfirmWindow_b__1__, v8, v9);
    sub_1BCA7E0(&BattlePerformanceContinue___c__DisplayClass141_0_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_5079/*"DECIDE_INTERRUPTION"*/, v12, v13);
    byte_4B1915F = 1;
  }
  v14 = sub_1BCAA2C(BattlePerformanceContinue___c__DisplayClass141_0_TypeInfo, isDecide, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_QWORD *)(v14 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v17, v18, v19, v20, v21, v22);
  p_cancelInterruptionEvent = (int64_t *)&this->fields.cancelInterruptionEvent;
  if ( isDecide )
    p_cancelInterruptionEvent = &StringLiteral_5079/*"DECIDE_INTERRUPTION"*/;
  v30 = *p_cancelInterruptionEvent;
  *(_QWORD *)(v14 + 16) = *p_cancelInterruptionEvent;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), v30, v23, v24, v25, v26, v27, v28);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v14,
    Method_BattlePerformanceContinue___c__DisplayClass141_0__OpenInterruptionConfirmWindow_b__1__,
    0LL);
  if ( !Instance )
LABEL_8:
    sub_1BCAA3C(v15, v16);
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v35, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue___OpenWaveSelectConfirmDialog_b__144_0(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  WaveBattleSelectWaveDialog_o *v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *Instance; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Action_o *v27; // x22
  __int64 v28; // x1
  UnityEngine_Object_o *waveSelectDialog; // x20

  if ( (byte_4B19165 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_BattlePerformanceContinue___c__DisplayClass144_0__OpenWaveSelectConfirmDialog_b__1__, v10, v11);
    sub_1BCA7E0(&BattlePerformanceContinue___c__DisplayClass144_0_TypeInfo, v12, v13);
    byte_4B19165 = 1;
  }
  v14 = sub_1BCAA2C(BattlePerformanceContinue___c__DisplayClass144_0_TypeInfo, isDecide, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_12;
  *(_QWORD *)(v14 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_BYTE *)(v14 + 16) = isDecide;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v14,
    Method_BattlePerformanceContinue___c__DisplayClass144_0__OpenWaveSelectConfirmDialog_b__1__,
    0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v27, 0LL);
  if ( *(_BYTE *)(v14 + 16) )
  {
    waveSelectDialog = (UnityEngine_Object_o *)this->fields.waveSelectDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    if ( UnityEngine_Object__op_Inequality(waveSelectDialog, 0LL, 0LL) )
    {
      v15 = this->fields.waveSelectDialog;
      if ( v15 )
      {
        WaveBattleSelectWaveDialog__Close(v15, 0LL);
        return;
      }
LABEL_12:
      sub_1BCAA3C(v15, v16);
    }
  }
}


void __fastcall BattlePerformanceContinue___ProcInterruption_b__142_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleLogic_o *logic; // x0

  if ( (byte_4B19160 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10607/*"PROC_INTERRUPTION"*/, method, v2);
    byte_4B19160 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1BCAA3C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10607/*"PROC_INTERRUPTION"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___ProcSelectWaveRestart_b__145_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleLogic_o *logic; // x0

  if ( (byte_4B19166 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10608/*"PROC_PARTY_REORGANIZATION"*/, method, v2);
    byte_4B19166 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1BCAA3C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10608/*"PROC_PARTY_REORGANIZATION"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___ProcWaveRestartFromInterruption_b__140_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleLogic_o *logic; // x0

  if ( (byte_4B1915E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10610/*"PROC_WAVE_RESTART"*/, method, v2);
    byte_4B1915E = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1BCAA3C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_10610/*"PROC_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueInterruption_b__138_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1915A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15711/*"WAVE_RESTART"*/, method, v2);
    byte_4B1915A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_15711/*"WAVE_RESTART"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueInterruption_b__138_1(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1915B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11661/*"SELECT_WAVE_RESTART"*/, method, v2);
    byte_4B1915B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_11661/*"SELECT_WAVE_RESTART"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueInterruption_b__138_2(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t v11; // x1
  __int64 v12; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1915C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7512/*"INTERRUPTION"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_3424/*"CANCEL_INTERRUPTION"*/, v9, v10);
    byte_4B1915C = 1;
  }
  v11 = StringLiteral_3424/*"CANCEL_INTERRUPTION"*/;
  this->fields.cancelInterruptionEvent = (struct System_String_o *)StringLiteral_3424/*"CANCEL_INTERRUPTION"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.cancelInterruptionEvent, v11, v2, v3, v4, v5, v6, v7);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v12);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_7512/*"INTERRUPTION"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueWaveRestart_b__134_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19155 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9747/*"OK"*/, method, v2);
    byte_4B19155 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9747/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueWaveRestart_b__134_1(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19156 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9373/*"NG"*/, method, v2);
    byte_4B19156 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9373/*"NG"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___WaveRestartNg_b__137_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleLogic_o *logic; // x0

  if ( (byte_4B19159 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9373/*"NG"*/, method, v2);
    byte_4B19159 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1BCAA3C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9373/*"NG"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___WaveRestartOk_b__136_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleLogic_o *logic; // x0

  if ( (byte_4B19158 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9747/*"OK"*/, method, v2);
    byte_4B19158 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1BCAA3C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9747/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__atlasLoadEnd(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleData_o *data; // x0
  BattleViewItemlistComponent_o *itemWindow; // x20
  BattleDropItem_array *DropItems; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  BattleDropItemComponent_ClickDelegate_o *v12; // x22

  if ( (byte_4B1910D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue_showConf__, method, v2);
    sub_1BCA7E0(&BattleDropItemComponent_ClickDelegate_TypeInfo, v4, v5);
    byte_4B1910D = 1;
  }
  data = this->fields.data;
  if ( !data
    || (itemWindow = this->fields.itemWindow,
        DropItems = BattleData__getDropItems(data, 0LL),
        v12 = (BattleDropItemComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                           BattleDropItemComponent_ClickDelegate_TypeInfo,
                                                           v9,
                                                           v10,
                                                           v11),
        BattleDropItemComponent_ClickDelegate___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_showConf__,
          0LL),
        !itemWindow) )
  {
    sub_1BCAA3C(data, method);
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, DropItems, v12, this->fields.itemColumnCount, 0LL);
}


void __fastcall BattlePerformanceContinue__callBackCommandSpell(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  BattlePerformanceContinue_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 *v14; // x8

  v4 = this;
  if ( (byte_4B1911F & 1) == 0 )
  {
    sub_1BCA7E0(&BattleData_TypeInfo, ret, method);
    sub_1BCA7E0(&StringLiteral_3883/*"CONNECT_NG"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v9, v10);
    this = (BattlePerformanceContinue_o *)sub_1BCA7E0(&StringLiteral_3884/*"CONNECT_OK"*/, v11, v12);
    byte_4B1911F = 1;
  }
  if ( !ret )
    goto LABEL_14;
  if ( System_String__Equals_62409536(ret, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    v4->fields.continueRetryFlg = 0;
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v13);
    BattleData__setContinueBattleFlg(0, 1, 0LL);
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    if ( this )
    {
      v14 = &StringLiteral_3884/*"CONNECT_OK"*/;
LABEL_12:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v14, 0LL);
      return;
    }
    goto LABEL_14;
  }
  if ( System_String__Equals_62409536(ret, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      v14 = &StringLiteral_3883/*"CONNECT_NG"*/;
      goto LABEL_12;
    }
LABEL_14:
    sub_1BCAA3C(this, ret);
  }
}


void __fastcall BattlePerformanceContinue__callBackContinueItem(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  BattlePerformanceContinue_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 *v14; // x8

  v4 = this;
  if ( (byte_4B19139 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleData_TypeInfo, ret, method);
    sub_1BCA7E0(&StringLiteral_3883/*"CONNECT_NG"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v9, v10);
    this = (BattlePerformanceContinue_o *)sub_1BCA7E0(&StringLiteral_3884/*"CONNECT_OK"*/, v11, v12);
    byte_4B19139 = 1;
  }
  if ( !ret )
    goto LABEL_17;
  if ( System_String__Equals_62409536(ret, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.data;
    v4->fields.continueRetryFlg = 0;
    if ( this )
    {
      BattleData__SuccessContinue((BattleData_o *)this, 0LL);
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v13);
      BattleData__setContinueBattleFlg(0, 1, 0LL);
      BattleData__SaveContinueItemId(0, 0, 0LL);
      this = (BattlePerformanceContinue_o *)v4->fields.data;
      if ( this )
      {
        BattleData__UpdateContinueItemInfo((BattleData_o *)this, 0LL);
        this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
        if ( this )
        {
          v14 = &StringLiteral_3884/*"CONNECT_OK"*/;
LABEL_15:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v14, 0LL);
          return;
        }
      }
    }
    goto LABEL_17;
  }
  if ( System_String__Equals_62409536(ret, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.data;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      BattleData__UpdateContinueItemInfo((BattleData_o *)this, 0LL);
      this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
      if ( this )
      {
        v14 = &StringLiteral_3883/*"CONNECT_NG"*/;
        goto LABEL_15;
      }
    }
LABEL_17:
    sub_1BCAA3C(this, ret);
  }
}


void __fastcall BattlePerformanceContinue__callBackStone(
        BattlePerformanceContinue_o *this,
        System_String_o *ret,
        const MethodInfo *method)
{
  BattlePerformanceContinue_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 *v14; // x8

  v4 = this;
  if ( (byte_4B1912C & 1) == 0 )
  {
    sub_1BCA7E0(&BattleData_TypeInfo, ret, method);
    sub_1BCA7E0(&StringLiteral_3883/*"CONNECT_NG"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v9, v10);
    this = (BattlePerformanceContinue_o *)sub_1BCA7E0(&StringLiteral_3884/*"CONNECT_OK"*/, v11, v12);
    byte_4B1912C = 1;
  }
  if ( !ret )
    goto LABEL_15;
  if ( System_String__Equals_62409536(ret, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.data;
    v4->fields.continueRetryFlg = 0;
    if ( this )
    {
      BattleData__SuccessContinue((BattleData_o *)this, 0LL);
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v13);
      BattleData__setContinueBattleFlg(0, 1, 0LL);
      this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
      if ( this )
      {
        v14 = &StringLiteral_3884/*"CONNECT_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v14, 0LL);
        return;
      }
    }
    goto LABEL_15;
  }
  if ( System_String__Equals_62409536(ret, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      v14 = &StringLiteral_3883/*"CONNECT_NG"*/;
      goto LABEL_13;
    }
LABEL_15:
    sub_1BCAA3C(this, ret);
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
    sub_1BCAA3C(0LL, ret);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  __int64 *v13; // x8

  if ( (byte_4B19134 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result, method);
    sub_1BCA7E0(&StringLiteral_3883/*"CONNECT_NG"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_3884/*"CONNECT_OK"*/, v7, v8);
    byte_4B19134 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  BattlePerformanceContinue__closeNoStone(this, v11);
  if ( (unsigned int)(result - 1) > 1 )
  {
    Instance = (CommonUI_o *)this->fields.myFsm;
    if ( Instance )
    {
      v13 = &StringLiteral_3883/*"CONNECT_NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_1BCAA3C(Instance, v10);
  }
  BattlePerformanceContinue__refreshStoneNow(this, 0LL, v12);
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_10;
  v13 = &StringLiteral_3884/*"CONNECT_OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v13, 0LL);
}


void __fastcall BattlePerformanceContinue__checkCountStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int *SelfUserGame; // x0
  __int64 v5; // x1

  if ( (byte_4B1913E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9370/*"NEXT"*/, method, v2);
    byte_4B1913E = 1;
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
    sub_1BCAA3C(SelfUserGame, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_9370/*"NEXT"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__checkDeadLineStoneShopEnd(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  BattleData_o *data; // x0
  __int64 v19; // x1
  int64_t ContinueDeadLine; // x20
  __int64 v21; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  ErrorDialog_ClickDelegate_o *v27; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-50h]

  if ( (byte_4B1913F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue_CallbackConfirmDialog__, method, v2);
    sub_1BCA7E0(&ErrorDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_9370/*"NEXT"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_2860/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    byte_4B1913F = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ContinueDeadLine = BattleData__GetContinueDeadLine(data, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
  if ( ContinueDeadLine < NetworkManager__getTime(0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2860/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
    v27 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v24, v25, v26);
    ErrorDialog_ClickDelegate___ctor(
      v27,
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
        v23,
        v27,
        0,
        0,
        -1.0,
        1,
        effectDistance,
        0LL);
      return;
    }
LABEL_13:
    sub_1BCAA3C(data, method);
  }
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_9370/*"NEXT"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__checkSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v7; // x1
  PlayMakerFSM_o *myFsm; // x8
  __int64 *v9; // x9

  if ( (byte_4B19119 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9747/*"OK"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_9373/*"NG"*/, v4, v5);
    byte_4B19119 = 1;
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
    sub_1BCAA3C(SelfUserGame, v7);
  }
  v9 = &StringLiteral_9373/*"NG"*/;
  if ( (int)SelfUserGame >= 3 )
    v9 = &StringLiteral_9747/*"OK"*/;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v9, 0LL);
}


void __fastcall BattlePerformanceContinue__checkStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UserGameEntity_o *SelfUserGame; // x20
  const MethodInfo *v7; // x2
  PlayMakerFSM_o *myFsm; // x0
  __int64 v9; // x1
  __int64 *v10; // x8

  if ( (byte_4B19126 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9747/*"OK"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_9373/*"NG"*/, v4, v5);
    byte_4B19126 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  BattlePerformanceContinue__refreshStoneNow(this, SelfUserGame, v7);
  if ( !SelfUserGame || (myFsm = this->fields.myFsm) == 0LL )
    sub_1BCAA3C(myFsm, v9);
  if ( SelfUserGame->fields.stone >= 1 )
    v10 = &StringLiteral_9747/*"OK"*/;
  else
    v10 = &StringLiteral_9373/*"NG"*/;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v10, 0LL);
}


void __fastcall BattlePerformanceContinue__closeContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_4B19136 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue_endCloseContinueItem__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    byte_4B19136 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v11 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v8, v9, v10),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseContinueItem__,
          0LL),
        !window) )
  {
    sub_1BCAA3C(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v11,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_4B19131 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue_endCloseNoStone__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    byte_4B19131 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v11 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v8, v9, v10),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseNoStone__,
          0LL),
        !window) )
  {
    sub_1BCAA3C(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v11,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_4B1911C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue_endCloseSpell__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    byte_4B1911C = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v11 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v8, v9, v10),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseSpell__,
          0LL),
        !window) )
  {
    sub_1BCAA3C(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v11,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_4B19129 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue_endCloseStone__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    byte_4B19129 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v11 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v8, v9, v10),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseStone__,
          0LL),
        !window) )
  {
    sub_1BCAA3C(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v11,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeUseCheck(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *useCheckWindow; // x0

  useCheckWindow = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !useCheckWindow
    || (useCheckWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useCheckWindow, 0LL)) == 0LL )
  {
    sub_1BCAA3C(useCheckWindow, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)useCheckWindow, 0, 0LL);
}


void __fastcall BattlePerformanceContinue__connectContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x1
  BattleData_o *data; // x0
  int32_t ContinueUseItemId; // w20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  __int64 v20; // x1
  struct BattleData_o *v21; // x8
  struct BattleEntity_o *battle_ent; // x9

  if ( (byte_4B19138 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceContinue_callBackContinueItem__, v4, v5);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_BattleUseContinueItemRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B19138 = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v12);
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
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17, v18);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callBackContinueItem__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
  data = (BattleData_o *)NetworkManager__getRequest_object_(
                           v19,
                           (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_BattleUseContinueItemRequest___);
  v21 = this->fields.data;
  if ( !v21 )
    goto LABEL_16;
  if ( this->fields.continueRetryFlg )
  {
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0LL);
      return;
    }
LABEL_16:
    sub_1BCAA3C(data, v13);
  }
  battle_ent = v21->fields.battle_ent;
  if ( !battle_ent || !data )
    goto LABEL_16;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x1
  BattleData_o *data; // x0
  const MethodInfo *v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  _BOOL4 continueRetryFlg; // w21
  NetworkManager_ResultCallbackFunc_o *v23; // x0
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x1
  struct BattleData_o *v27; // x8
  int32_t continueCount; // w21
  struct BattleEntity_o *battle_ent; // x22
  BattleCommandSpellRequest_o *v30; // x20
  struct BattleData_o *v31; // x8

  if ( (byte_4B1911E & 1) == 0 )
  {
    sub_1BCA7E0(&BattleData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceContinue_callBackCommandSpell__, v4, v5);
    sub_1BCA7E0(&Method_BattlePerformanceContinue_callbackContinueCommandSpell__, v6, v7);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_BattleCommandSpellRequest___, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_7004/*"GAME_OVER_COMMAND_SPELL_ID"*/, v14, v15);
    byte_4B1911E = 1;
  }
  BattlePerformanceContinue__closeSpell(this, method);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v16);
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
    BattlePerformanceContinue__SkipCommandSpellRequest(this, v19);
    return;
  }
  continueRetryFlg = this->fields.continueRetryFlg;
  v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v19, v20, v21);
  v24 = v23;
  if ( continueRetryFlg )
  {
    NetworkManager_ResultCallbackFunc___ctor(
      v23,
      (Il2CppObject *)this,
      Method_BattlePerformanceContinue_callBackCommandSpell__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
    data = (BattleData_o *)NetworkManager__getRequest_object_(
                             v24,
                             (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0LL);
      return;
    }
LABEL_21:
    sub_1BCAA3C(data, v17);
  }
  NetworkManager_ResultCallbackFunc___ctor(
    v23,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callbackContinueCommandSpell__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26);
  data = (BattleData_o *)NetworkManager__getRequest_object_(
                           v24,
                           (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
  v27 = this->fields.data;
  if ( !v27 )
    goto LABEL_21;
  continueCount = v27->fields.continueCount;
  battle_ent = v27->fields.battle_ent;
  v30 = (BattleCommandSpellRequest_o *)data;
  data = (BattleData_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_7004/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0LL);
  if ( !battle_ent )
    goto LABEL_21;
  v31 = this->fields.data;
  if ( !v31 || !v30 )
    goto LABEL_21;
  BattleCommandSpellRequest__beginRequest(
    v30,
    battle_ent->fields.id,
    (int32_t)data,
    v31->fields.waveClearNeedTurn,
    continueCount,
    1,
    0LL);
}


void __fastcall BattlePerformanceContinue__connectStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x1
  BattleData_o *data; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  __int64 v19; // x1
  struct BattleData_o *v20; // x8
  struct BattleEntity_o *battle_ent; // x9

  if ( (byte_4B1912B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceContinue_callBackStone__, v4, v5);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_BattleUseContinueRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B1912B = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v12);
  BattleData__setContinueBattleFlg(1, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  BattleData__procPlayerContinue(data, this->fields.isProgress, 0LL);
  v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v15, v16, v17);
  NetworkManager_ResultCallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callBackStone__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
  data = (BattleData_o *)NetworkManager__getRequest_object_(
                           v18,
                           (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_BattleUseContinueRequest___);
  v20 = this->fields.data;
  if ( !v20 )
    goto LABEL_15;
  if ( this->fields.continueRetryFlg )
  {
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0LL);
      return;
    }
LABEL_15:
    sub_1BCAA3C(data, v13);
  }
  battle_ent = v20->fields.battle_ent;
  if ( !battle_ent || !data )
    goto LABEL_15;
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
  __int64 v2; // x2
  UnityEngine_GameObject_o *ContinueItemWindow; // x0

  if ( (byte_4B19137 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5546/*"END_CLOSE"*/, method, v2);
    byte_4B19137 = 1;
  }
  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow
    || (UnityEngine_GameObject__SetActive(ContinueItemWindow, 0, 0LL),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)ContinueItemWindow, 0LL),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(ContinueItemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ContinueItemWindow, (System_String_o *)StringLiteral_5546/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *nostoneObject; // x0

  if ( (byte_4B19132 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5546/*"END_CLOSE"*/, method, v2);
    byte_4B19132 = 1;
  }
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject
    || (UnityEngine_GameObject__SetActive(nostoneObject, 0, 0LL),
        (nostoneObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(nostoneObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)nostoneObject, (System_String_o *)StringLiteral_5546/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *commandspellObject; // x0

  if ( (byte_4B1911D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5546/*"END_CLOSE"*/, method, v2);
    byte_4B1911D = 1;
  }
  commandspellObject = this->fields.commandspellObject;
  if ( !commandspellObject
    || (UnityEngine_GameObject__SetActive(commandspellObject, 0, 0LL),
        (commandspellObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)commandspellObject, 0LL),
        (commandspellObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(commandspellObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)commandspellObject, (System_String_o *)StringLiteral_5546/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *stoneObject; // x0

  if ( (byte_4B1912A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5546/*"END_CLOSE"*/, method, v2);
    byte_4B1912A = 1;
  }
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 0, 0LL),
        (stoneObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)stoneObject, 0LL),
        (stoneObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(stoneObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)stoneObject, (System_String_o *)StringLiteral_5546/*"END_CLOSE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__endDialog(
        BattlePerformanceContinue_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B19114 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg, method);
    sub_1BCA7E0(&StringLiteral_9373/*"NG"*/, v4, v5);
    byte_4B19114 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.logic) == 0LL) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  BattleLogic__sendFsmEvent((BattleLogic_o *)Instance, (System_String_o *)StringLiteral_9373/*"NG"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endLoadCommandSPell(
        BattlePerformanceContinue_o *this,
        AssetData_o *aData,
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
  BattlePerformance_o *perf; // x0
  UserGameEntity_o *v20; // x21
  int v21; // w22
  int32_t v22; // w21
  Il2CppObject *v23; // x0
  struct BattlePerformance_o *v24; // x8
  UnityEngine_GameObject_o *Object; // x23
  Il2CppObject *v26; // x0
  System_String_o *v27; // x20
  Il2CppObject *Component_object; // x22
  __int64 v29; // x1
  Il2CppObject *v30; // x21
  SimpleAnimation_o *v31; // x0
  System_String_o *v32; // x1
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Animation_o *v34; // x0
  System_String_o *v35; // x1
  Il2CppObject *v36; // x0
  Il2CppObject *v37; // x0
  int32_t v38; // [xsp+8h] [xbp-48h] BYREF
  int v39; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B19124 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, aData, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_19014/*"ef_commandspell_{0:D2}"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_19015/*"ef_commandspell{0:D4}"*/, v17, v18);
    byte_4B19124 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_29;
  BattlePerformance__PlayAnyCommandSpellContinueVoice(perf, 0LL);
  perf = (BattlePerformance_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !perf )
    goto LABEL_29;
  v20 = (UserGameEntity_o *)perf;
  perf = (BattlePerformance_o *)UserGameEntity__get_SpellImageIdBattle((UserGameEntity_o *)perf, 0LL);
  if ( !this->fields.data )
    goto LABEL_29;
  v21 = (int)perf;
  v22 = BattleData__CheckCurrentTemporaryCommandSpell(this->fields.data, v20, 0LL);
  v39 = v21;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
  perf = (BattlePerformance_o *)System_String__Format((System_String_o *)StringLiteral_19015/*"ef_commandspell{0:D4}"*/, v23, 0LL);
  if ( !aData )
    goto LABEL_29;
  perf = (BattlePerformance_o *)AssetData__GetObject_object__49237568(
                                  aData,
                                  (System_String_o *)perf,
                                  (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  v24 = this->fields.perf;
  if ( !v24 )
    goto LABEL_29;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             (UnityEngine_GameObject_o *)perf,
             v24->fields.popupTr,
             0LL,
             0LL);
  v38 = v22;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  perf = (BattlePerformance_o *)System_String__Format((System_String_o *)StringLiteral_19014/*"ef_commandspell_{0:D2}"*/, v26, 0LL);
  if ( !Object )
    goto LABEL_29;
  v27 = (System_String_o *)perf;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       Object,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v30 = UnityEngine_GameObject__GetComponent_object_(
          Object,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    if ( SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, v27, 0LL) )
    {
      v31 = (SimpleAnimation_o *)Component_object;
      v32 = v27;
    }
    else
    {
      v39 = 3;
      v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
      v32 = System_String__Format((System_String_o *)StringLiteral_19014/*"ef_commandspell_{0:D2}"*/, v36, 0LL);
      v31 = (SimpleAnimation_o *)Component_object;
    }
    SimpleAnimation__Play_64539336(v31, v32, 0LL);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, aData);
    perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0LL, 0LL);
    if ( ((unsigned __int8)perf & 1) != 0 )
    {
      if ( !v30 )
        goto LABEL_29;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v30, v27, 0LL);
      if ( UnityEngine_TrackedReference__op_Inequality(0LL, Item, 0LL) )
      {
        v34 = (UnityEngine_Animation_o *)v30;
        v35 = v27;
      }
      else
      {
        v39 = 3;
        v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
        v35 = System_String__Format((System_String_o *)StringLiteral_19014/*"ef_commandspell_{0:D2}"*/, v37, 0LL);
        v34 = (UnityEngine_Animation_o *)v30;
      }
      UnityEngine_Animation__Play_69899248(v34, v35, 0LL);
    }
  }
  perf = (BattlePerformance_o *)this->fields.logic;
  if ( !perf
    || (BattleLogic__setTimeAcceleration((BattleLogic_o *)perf, 0, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__playMasterCommandSpellCutIn(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.myFsm) == 0LL) )
  {
LABEL_29:
    sub_1BCAA3C(perf, aData);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_4B19118 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5560/*"END_OPEN"*/, method, v2);
    byte_4B19118 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__ChangeLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5560/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_4B19130 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5560/*"END_OPEN"*/, method, v2);
    byte_4B19130 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5560/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_4B1911B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5560/*"END_OPEN"*/, method, v2);
    byte_4B1911B = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5560/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_4B19128 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5560/*"END_OPEN"*/, method, v2);
    byte_4B19128 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5560/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenUsecheck(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1913D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5560/*"END_OPEN"*/, method, v2);
    byte_4B1913D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5560/*"END_OPEN"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__endRetryDialog(
        BattlePerformanceContinue_o *this,
        bool flg,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_4B19121 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9747/*"OK"*/, flg, method);
    byte_4B19121 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_1BCAA3C(0LL, flg);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9747/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x20
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B19125 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_4690/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v6, v7);
    byte_4B19125 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_8;
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0LL);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SpellImageIdBattle);
  v12 = System_String__Format((System_String_o *)StringLiteral_4690/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v10, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v11);
  AssetManager__releaseAssetStorage(v12, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.logic;
  if ( !SelfUserGame )
LABEL_8:
    sub_1BCAA3C(SelfUserGame, v9);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x4
  __int64 v9; // x1
  UnityEngine_GameObject_o *nostoneObject; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  BattleWindowComponent_EndCall_o *v15; // x21

  if ( (byte_4B1912F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue_endOpenNoStone__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_2867/*"BATTLE_CONTINUE_NO_STONE"*/, v6, v7);
    byte_4B1912F = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseBuyGem,
    (System_String_o *)StringLiteral_2867/*"BATTLE_CONTINUE_NO_STONE"*/,
    0x80000000,
    v8);
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject
    || (UnityEngine_GameObject__SetActive(nostoneObject, 1, 0LL),
        window = this->fields.window,
        v15 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v12, v13, v14),
        BattleWindowComponent_EndCall___ctor(
          v15,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenNoStone__,
          0LL),
        !window) )
  {
    sub_1BCAA3C(nostoneObject, v9);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v15,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__openReTry(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  NotificationDialog_ClickDelegate_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_4B19120 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue_endRetryDialog__, method, v2);
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&StringLiteral_25648/*"通信に失敗したので再度通信を行います"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_25649/*"通信失敗"*/, v10, v11);
    byte_4B19120 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(NotificationDialog_ClickDelegate_TypeInfo, v13, v14, v15);
  NotificationDialog_ClickDelegate___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endRetryDialog__,
    0LL);
  if ( !Instance )
    sub_1BCAA3C(v17, v18);
  CommonUI__OpenNotificationDialog_30768824(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_25649/*"通信失敗"*/,
    (System_String_o *)StringLiteral_25648/*"通信に失敗したので再度通信を行います"*/,
    v16,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *SelfUserGame; // x0
  __int64 v21; // x1
  int monitor; // w21
  UILabel_o *stoneBtnLabel; // x20
  System_String_o **v24; // x8
  const MethodInfo *v25; // x1
  struct BattleData_o *data; // x8
  struct BattleData_o *v27; // x8
  const MethodInfo *v28; // x4
  __int64 v29; // x1
  Il2CppObject *Component_object; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  struct BattleWindowComponent_o *window; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  BattleWindowComponent_EndCall_o *v42; // x21

  if ( (byte_4B1911A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue_endOpenSpell__, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SendEventToFsm___, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_2856/*"BATTLE_CONTINUE_CHECK_SPELL"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_2855/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_2854/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, v18, v19);
    byte_4B1911A = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_28;
  monitor = (int)SelfUserGame[7].monitor;
  stoneBtnLabel = this->fields.stoneBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  v24 = (System_String_o **)(monitor < 1 ? &StringLiteral_2854/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/ : &StringLiteral_2855/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
  SelfUserGame = LocalizationManager__Get(*v24, 0LL);
  if ( !stoneBtnLabel )
    goto LABEL_28;
  UILabel__set_text(stoneBtnLabel, SelfUserGame, 0LL);
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, v25);
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
    v27 = this->fields.data;
    if ( !v27 )
      goto LABEL_28;
    SelfUserGame = (System_String_o *)v27->fields.quest_ent;
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
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SendEventToFsm___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  SelfUserGame = (System_String_o *)UnityEngine_Object__op_Inequality(
                                      (UnityEngine_Object_o *)Component_object,
                                      0LL,
                                      0LL);
  if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_28;
    v37 = StringLiteral_5565/*"END_PROC"*/;
    Component_object[2].monitor = (void *)StringLiteral_5565/*"END_PROC"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)&Component_object[2].monitor, v37, v31, v32, v33, v34, v35, v36);
  }
  SelfUserGame = (System_String_o *)this->fields.commandspell_now;
  if ( !SelfUserGame )
LABEL_28:
    sub_1BCAA3C(SelfUserGame, v21);
  UIWidget__set_color((UIWidget_o *)SelfUserGame, this->fields.spellnowColor, 0LL);
LABEL_26:
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseCommandSpell,
    (System_String_o *)StringLiteral_2856/*"BATTLE_CONTINUE_CHECK_SPELL"*/,
    0x80000000,
    v28);
  window = this->fields.window;
  v42 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v39, v40, v41);
  BattleWindowComponent_EndCall___ctor(v42, (Il2CppObject *)this, Method_BattlePerformanceContinue_endOpenSpell__, 0LL);
  if ( !window )
    goto LABEL_28;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v42,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__openStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x4
  __int64 v9; // x1
  UnityEngine_GameObject_o *stoneObject; // x0
  struct BattleWindowComponent_o *window; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  BattleWindowComponent_EndCall_o *v15; // x21

  if ( (byte_4B19127 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue_endOpenStone__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_2857/*"BATTLE_CONTINUE_CHECK_STONE"*/, v6, v7);
    byte_4B19127 = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseGem,
    (System_String_o *)StringLiteral_2857/*"BATTLE_CONTINUE_CHECK_STONE"*/,
    0x80000000,
    v8);
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 1, 0LL),
        window = this->fields.window,
        v15 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v12, v13, v14),
        BattleWindowComponent_EndCall___ctor(
          v15,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenStone__,
          0LL),
        !window) )
  {
    sub_1BCAA3C(stoneObject, v9);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v15,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__openStoneShop(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  StonePurchaseMenu_CallbackFunc_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B19133 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue_callbaclStoneShop__, method, v2);
    sub_1BCA7E0(&StonePurchaseMenu_CallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B19133 = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (StonePurchaseMenu_CallbackFunc_o *)sub_1BCAA2C(StonePurchaseMenu_CallbackFunc_TypeInfo, v9, v10, v11);
  StonePurchaseMenu_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callbaclStoneShop__,
    0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v12, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__openUseCheck(
        BattlePerformanceContinue_o *this,
        int32_t type,
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
  UnityEngine_Component_o *usecheckLabel; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *addMsgInfo; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v17; // x0
  UILabel_o *addMsgLabel; // x20
  __int64 *v19; // x8
  UILabel_o *v20; // x20
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x20
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x1

  if ( (byte_4B1913C & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&type, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_2871/*"BATTLE_CONTINUE_USECHECK_STONE"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_2869/*"BATTLE_CONTINUE_STONEPAY_WARNING_MSG"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_2870/*"BATTLE_CONTINUE_USECHECK_SPELL"*/, v11, v12);
    byte_4B1913C = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
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
  v17 = UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v17, 28.0, 0LL);
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
    v19 = &StringLiteral_2870/*"BATTLE_CONTINUE_USECHECK_SPELL"*/;
    goto LABEL_39;
  }
  v20 = this->fields.usecheckLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
  usecheckLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2871/*"BATTLE_CONTINUE_USECHECK_STONE"*/, 0LL);
  if ( !v20 )
    goto LABEL_44;
  UILabel__set_text(v20, (System_String_o *)usecheckLabel, 0LL);
  v22 = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( !UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
    goto LABEL_41;
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !usecheckLabel )
    goto LABEL_44;
  v23 = UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v23, -90.0, 0LL);
  usecheckLabel = (UnityEngine_Component_o *)this->fields.usecheckLabel;
  if ( !usecheckLabel
    || (v24 = UnityEngine_Component__get_gameObject(usecheckLabel, 0LL),
        GameObjectExtensions__SetLocalPositionY(v24, 82.0, 0LL),
        GameObjectExtensions__SetLocalPositionY(this->fields.useCheckOkBtn, -90.0, 0LL),
        GameObjectExtensions__SetLocalPositionY(this->fields.useCheckCancelBtn, -90.0, 0LL),
        (usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckBgSprite) == 0LL)
    || (UIWidget__set_height((UIWidget_o *)usecheckLabel, 275, 0LL),
        (usecheckLabel = (UnityEngine_Component_o *)this->fields.addMsgInfo) == 0LL) )
  {
LABEL_44:
    sub_1BCAA3C(usecheckLabel, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 1, 0LL);
  addMsgLabel = this->fields.addMsgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
  v19 = &StringLiteral_2869/*"BATTLE_CONTINUE_STONEPAY_WARNING_MSG"*/;
LABEL_39:
  usecheckLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v19, 0LL);
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
  BattlePerformanceContinue__endOpenUsecheck(this, v26);
}


void __fastcall BattlePerformanceContinue__procContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1913B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B1913B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNG(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  BattleLogic_o *logic; // x20
  NotificationDialog_ClickDelegate_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B19113 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceContinue_endDialog__, method, v2);
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, v5, v6);
    byte_4B19113 = 1;
  }
  logic = this->fields.logic;
  v8 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(NotificationDialog_ClickDelegate_TypeInfo, method, v2, v3);
  NotificationDialog_ClickDelegate___ctor(v8, (Il2CppObject *)this, Method_BattlePerformanceContinue_endDialog__, 0LL);
  if ( !logic )
    sub_1BCAA3C(v9, v10);
  BattleLogic__OpenBattleLoseDlg(logic, 1, 0, v8, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1913A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B1913A = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGGiveUpContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19111 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B19111 = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  this->fields.IsContinueItem = 0;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_4B19135 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B19135 = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__ClearObj(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(itemWindow, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19122 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B19122 = 1;
  }
  BattlePerformanceContinue__closeSpell(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1912D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B1912D = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procOK(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceContinue_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  __int64 v10; // x1
  int32_t QuestId; // w20
  __int64 v12; // x1
  BattleData_o *data; // x8
  AdManager_o *v14; // x19

  v3 = this;
  if ( (byte_4B19112 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    this = (BattlePerformanceContinue_o *)sub_1BCA7E0(&StringLiteral_9747/*"OK"*/, v6, v7);
    byte_4B19112 = 1;
  }
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_18;
  statusPerf = perf->fields.statusPerf;
  if ( !statusPerf )
    goto LABEL_18;
  this = (BattlePerformanceContinue_o *)statusPerf->fields.masterPerf;
  if ( !this )
    goto LABEL_18;
  BattlePerformanceMaster__updateCommandSpellIcon((BattlePerformanceMaster_o *)this, method);
  this = (BattlePerformanceContinue_o *)v3->fields.logic;
  if ( !this )
    goto LABEL_18;
  BattleLogic__sendFsmEvent((BattleLogic_o *)this, (System_String_o *)StringLiteral_9747/*"OK"*/, 0LL);
  this = (BattlePerformanceContinue_o *)v3->fields.data;
  if ( !this )
    goto LABEL_18;
  QuestId = BattleData__getQuestId((BattleData_o *)this, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
  if ( TerminalPramsManager__IsMainStoryForQuestId(QuestId, 0LL) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
    if ( TerminalPramsManager__CanSendTrackEvent(QuestId, 0LL) )
    {
      this = (BattlePerformanceContinue_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      data = v3->fields.data;
      if ( data )
      {
        v14 = (AdManager_o *)this;
        this = (BattlePerformanceContinue_o *)BattleData__getPhase(data, 0LL);
        if ( v14 )
        {
          AdManager__TrackEvent(v14, 10, 12, QuestId, (int32_t)this, 0LL, 0LL);
          return;
        }
      }
LABEL_18:
      sub_1BCAA3C(this, method);
    }
  }
}


void __fastcall BattlePerformanceContinue__procSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  AssetLoader_LoadEndDataHandler_o *v19; // x21
  __int64 v20; // x1
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B19123 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceContinue_endLoadCommandSPell__, v4, v5);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_4690/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v10, v11);
    byte_4B19123 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1BCAA3C(0LL, v13);
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0LL);
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SpellImageIdBattle);
  v15 = System_String__Format((System_String_o *)StringLiteral_4690/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v14, 0LL);
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v16, v17, v18);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endLoadCommandSPell__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v20);
  AssetManager__loadAssetStorage(v15, v19, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__procStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B1912E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B1912E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__refreshStoneNow(
        BattlePerformanceContinue_o *this,
        UserGameEntity_o *userGame,
        const MethodInfo *method)
{
  UserGameEntity_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *SelfUserGame; // x0
  __int64 v8; // x1
  UILabel_o *gem_now; // x21
  Il2CppObject *v10; // x0
  UILabel_o *stone_now; // x19
  Il2CppObject *v12; // x0
  int32_t v13; // [xsp+8h] [xbp-38h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-34h] BYREF

  v3 = userGame;
  if ( (byte_4B1910C & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, userGame, method);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v5, v6);
    byte_4B1910C = 1;
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
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
  SelfUserGame = System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v10, 0LL);
  if ( !gem_now
    || (UILabel__set_text(gem_now, SelfUserGame, 0LL),
        stone_now = this->fields.stone_now,
        v13 = v3->fields.stone,
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13),
        SelfUserGame = System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v12, 0LL),
        !stone_now) )
  {
LABEL_8:
    sub_1BCAA3C(SelfUserGame, v8);
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
  __int64 v2; // x2
  BattlePerformanceContinue__CoEndContinue_d__132_o *v3; // x19
  int32_t _1__state; // w8
  float timer_5__2; // s8
  struct BattlePerformanceContinue_o *_4__this; // x8
  struct BattlePerformance_o *perf; // x8
  bool result; // w0
  float deltaTime; // s0
  Il2CppObject **p__2__current; // x19
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4B19169 & 1) == 0 )
  {
    this = (BattlePerformanceContinue__CoEndContinue_d__132_o *)sub_1BCA7E0(
                                                                  &Method_UnityEngine_GameObject_GetComponent_NGUIFader___,
                                                                  method,
                                                                  v2);
    byte_4B19169 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    timer_5__2 = v3->fields._timer_5__2;
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( timer_5__2 <= 1.0 )
      goto LABEL_13;
    if ( !_4__this
      || (perf = _4__this->fields.perf) == 0LL
      || (this = (BattlePerformanceContinue__CoEndContinue_d__132_o *)perf->fields.fadeObject) == 0LL
      || (this = (BattlePerformanceContinue__CoEndContinue_d__132_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___)) == 0LL )
    {
      sub_1BCAA3C(this, method);
    }
    v17.fields.r = 1.0;
    v17.fields.g = 1.0;
    v17.fields.b = 1.0;
    v17.fields.a = 1.0;
    NGUIFader__FadeStart((NGUIFader_o *)this, v17, 0.5, 1, 0LL, 0, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  timer_5__2 = 0.0;
  v3->fields._timer_5__2 = 0.0;
  v3->fields.__1__state = -1;
LABEL_13:
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  v3->fields.__2__current = 0LL;
  p__2__current = &v3->fields.__2__current;
  *((float *)p__2__current + 4) = timer_5__2 + deltaTime;
  sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v11, v12, v13, v14, v15, v16);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattlePerformanceContinue__CoEndContinue_d__132_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct BattlePerformanceContinue_o *_4__this; // x8

  if ( (byte_4B19167 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B19167 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (Il2CppObject *)_4__this->fields.myFsm) == 0LL )
  {
    sub_1BCAA3C(Instance, v5);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct BattlePerformanceContinue_o *_4__this; // x8
  System_String_o *v11; // x1

  if ( (byte_4B19168 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&StringLiteral_9747/*"OK"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_9373/*"NG"*/, v6, v7);
    byte_4B19168 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ResetConfirmDialogDecideButtonLabelMaxLineCount((CommonUI_o *)Instance, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (Instance = (Il2CppObject *)_4__this->fields.myFsm) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  if ( this->fields.isDecide )
    v11 = (System_String_o *)StringLiteral_9747/*"OK"*/;
  else
    v11 = (System_String_o *)StringLiteral_9373/*"NG"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, v11, 0LL);
}