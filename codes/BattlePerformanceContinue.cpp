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
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v14);
  this->fields.spellBtnColor = v14;
  v15.fields.r = 0.38824;
  v13 = (struct UnityEngine_Color_o)0LL;
  v15.fields.g = 0.38824;
  v15.fields.b = 0.38824;
  UnityEngine_Color___ctor_40633184(v15, v10, v11, v12, (const MethodInfo *)&v13);
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
  System_Action_int__o *v6; // x21

  if ( (byte_4189E16 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, method);
    sub_B2C35C(&System_Action_int__TypeInfo, v3);
    sub_B2C35C(&Method_BattlePerformanceContinue__AttachStoneCountRefreshComponent_b__80_0__, v4);
    byte_4189E16 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__AttachStoneCountRefreshComponent_b__80_0__,
    (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v6, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__CallbackConfirmDialog(
        BattlePerformanceContinue_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4189E09 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B2C35C(&StringLiteral_4561/*"DEADLINE"*/, v4);
    byte_4189E09 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL),
        BattlePerformanceContinue__closeContinueItem(this, v7),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B2C434(Instance, v6);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_4561/*"DEADLINE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__CheckContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleData_o *data; // x0
  __int64 *v6; // x8

  if ( (byte_4189E14 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9744/*"OK"*/, method);
    sub_B2C35C(&StringLiteral_9301/*"NG"*/, v3);
    byte_4189E14 = 1;
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
      v6 = &StringLiteral_9301/*"NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B2C434(data, v4);
  }
  data = (BattleData_o *)this->fields.myFsm;
  this->fields.IsContinueItem = 1;
  if ( !data )
    goto LABEL_10;
  v6 = &StringLiteral_9744/*"OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)*v6, 0LL);
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
  NGUIFader_o *Component_srcLineSprite; // x20
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  NGUIFader_OnFinished_o *v13; // x21
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4189E40 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue__CheckDefenceTargetBroken_b__124_0__, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___, v3);
    sub_B2C35C(&NGUIFader_OnFinished_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_5627/*"EVENT_FALSE"*/, v5);
    byte_4189E40 = 1;
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
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
        white = UnityEngine_Color__get_white(0LL);
        r = white.fields.r;
        g = white.fields.g;
        b = white.fields.b;
        a = white.fields.a;
        v13 = (NGUIFader_OnFinished_o *)sub_B2C42C(NGUIFader_OnFinished_TypeInfo);
        NGUIFader_OnFinished___ctor(
          v13,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue__CheckDefenceTargetBroken_b__124_0__,
          0LL);
        if ( Component_srcLineSprite )
        {
          v15.fields.r = r;
          v15.fields.g = g;
          v15.fields.b = b;
          v15.fields.a = a;
          NGUIFader__FadeStart(Component_srcLineSprite, v15, 0.5, 0, v13, 0, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_B2C434(data, method);
  }
  data = (BattleData_o *)this->fields.myFsm;
  this->fields._isDefenceTargetBroken_k__BackingField = 0;
  if ( !data )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_5627/*"EVENT_FALSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__CloseGiveUp(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *giveUpWindow; // x0

  if ( (byte_4189E0F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9298/*"NEXT"*/, method);
    byte_4189E0F = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow
    || (UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0LL),
        (giveUpWindow = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B2C434(giveUpWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)giveUpWindow, (System_String_o *)StringLiteral_9298/*"NEXT"*/, 0LL);
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

  if ( (byte_4189E42 & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceContinue__CoEndContinue_d__127_TypeInfo, method);
    byte_4189E42 = 1;
  }
  v3 = sub_B2C42C(BattlePerformanceContinue__CoEndContinue_d__127_TypeInfo);
  BattlePerformanceContinue__CoEndContinue_d__127___ctor(
    (BattlePerformanceContinue__CoEndContinue_d__127_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattlePerformanceContinue__EndContinue(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0

  if ( this->fields._isDefenceTargetBroken_k__BackingField )
  {
    v3 = BattlePerformanceContinue__CoEndContinue(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  __int64 v28; // x1
  UnityEngine_Component_o *window; // x0
  UnityEngine_Transform_o *transform; // x20
  int v31; // s0
  UILabel_o *checkGiveUpLabel; // x20
  UILabel_o *checkUseCommandSpell; // x20
  UILabel_o *checkUseGem; // x20
  UILabel_o *checkUseBuyGem; // x20

  if ( (byte_4189E0A & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, inperf);
    sub_B2C35C(&StringLiteral_2405/*"BATTLE_CONTINUE_NO_STONE"*/, v12);
    sub_B2C35C(&StringLiteral_2394/*"BATTLE_CONTINUE_CHECK_SPELL"*/, v13);
    sub_B2C35C(&StringLiteral_2395/*"BATTLE_CONTINUE_CHECK_STONE"*/, v14);
    sub_B2C35C(&StringLiteral_2498/*"BATTLE_RETIRE_CHECKSTR"*/, v15);
    byte_4189E0A = 1;
  }
  this->fields.perf = inperf;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    (System_String_array **)indata,
    (System_String_array **)inlogic,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)indata,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.logic = inlogic;
  sub_B2C2F8(
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
    goto LABEL_25;
  transform = UnityEngine_Component__get_transform(window, 0LL);
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
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
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2498/*"BATTLE_RETIRE_CHECKSTR"*/, 0LL);
  if ( !checkGiveUpLabel )
    goto LABEL_25;
  UILabel__set_text(checkGiveUpLabel, (System_String_o *)window, 0LL);
  checkUseCommandSpell = this->fields.checkUseCommandSpell;
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2394/*"BATTLE_CONTINUE_CHECK_SPELL"*/, 0LL);
  if ( !checkUseCommandSpell )
    goto LABEL_25;
  UILabel__set_text(checkUseCommandSpell, (System_String_o *)window, 0LL);
  checkUseGem = this->fields.checkUseGem;
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2395/*"BATTLE_CONTINUE_CHECK_STONE"*/, 0LL);
  if ( !checkUseGem
    || (UILabel__set_text(checkUseGem, (System_String_o *)window, 0LL),
        checkUseBuyGem = this->fields.checkUseBuyGem,
        window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2405/*"BATTLE_CONTINUE_NO_STONE"*/, 0LL),
        !checkUseBuyGem)
    || (UILabel__set_text(checkUseBuyGem, (System_String_o *)window, 0LL),
        (window = (UnityEngine_Component_o *)this->fields.continueWaveRestartWindow) == 0LL)
    || ((*(void (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&window->klass[1]._1.this_arg.bits)(
          window,
          window->klass[1]._1.element_class),
        (window = (UnityEngine_Component_o *)this->fields.continueWaveRestartWindow) == 0LL) )
  {
LABEL_25:
    sub_B2C434(window, v28);
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
  _QWORD *monitor; // x8
  __int64 v11; // x8
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x21
  System_String_o *v15; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v17; // x22
  int v18; // [xsp+3Ch] [xbp-24h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_4189E41 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BattlePerformanceContinue__OpenBrokenMessage_b__125_0__, v3);
    sub_B2C35C(&int_TypeInfo, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_23643/*"{0}_{1}"*/, v7);
    sub_B2C35C(&StringLiteral_2416/*"BATTLE_DIALOG_DEFENCE_TARGET_BROKEN"*/, v8);
    this = (BattlePerformanceContinue_o *)sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_4189E41 = 1;
  }
  monitor = v2[2].monitor;
  if ( !monitor )
    goto LABEL_18;
  v11 = monitor[100];
  if ( !v11 )
    goto LABEL_18;
  v12 = (Il2CppObject *)StringLiteral_2416/*"BATTLE_DIALOG_DEFENCE_TARGET_BROKEN"*/;
  v18 = *(_DWORD *)(v11 + 32);
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v14 = System_String__Format_44301068((System_String_o *)StringLiteral_23643/*"{0}_{1}"*/, v12, v13, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( LocalizationManager__ContainsKey(v14, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = (Il2CppObject *)v14;
  }
  else if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
         && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)v12, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v17, v2, Method_BattlePerformanceContinue__OpenBrokenMessage_b__125_0__, 0LL);
  if ( !Instance )
LABEL_18:
    sub_B2C434(this, method);
  CommonUI__OpenNotificationDialog(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v15,
    v17,
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
  bool v33; // cc
  UIWidget_o *v34; // x21
  int v35; // s0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 *v45; // x8
  System_Int32_array **v46; // x1
  UILabel_o *ContinueItemBtnLabel; // x21
  UILabel_o *deadLine; // x21
  System_String_o *v49; // x22
  int64_t ContinueDeadLine; // x0
  Il2CppObject *RestTime; // x0
  int v52; // w21
  UIWidget_o *v53; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 *v60; // x8
  int v61; // s0
  System_Int32_array **v65; // x1
  UILabel_o *ContinueCommandSpellBtnLabel; // x21
  int v67; // w9
  UILabel_o *ContinueStoneBtnLabel; // x20
  __int64 *v69; // x8
  const MethodInfo *v70; // x1
  UILabel_o *ContinueRetireBtnLabel; // x20
  const MethodInfo *v72; // x4
  System_String_o **v73; // x8
  struct BattleData_o *data; // x8
  struct BattleData_o *v75; // x8
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v84; // x21
  int32_t ContinueItemNum; // [xsp+4h] [xbp-3Ch] BYREF
  int v86; // [xsp+8h] [xbp-38h] BYREF
  unsigned int OverwriteCommandSpellContinue; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4189E15 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_BattlePerformanceContinue_endOpenContinueItem__, v3);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_9744/*"OK"*/, v9);
    sub_B2C35C(&StringLiteral_2393/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, v10);
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, v11);
    sub_B2C35C(&StringLiteral_2400/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, v12);
    sub_B2C35C(&StringLiteral_2392/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, v13);
    sub_B2C35C(&StringLiteral_2410/*"BATTLE_CONTINUE_USE_SPELL"*/, v14);
    sub_B2C35C(&StringLiteral_9745/*"OK_CONTINUE_ITEM"*/, v15);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v16);
    sub_B2C35C(&StringLiteral_2397/*"BATTLE_CONTINUE_ITEM_BTN"*/, v17);
    sub_B2C35C(&StringLiteral_2401/*"BATTLE_CONTINUE_ITEM_SELECT"*/, v18);
    sub_B2C35C(&StringLiteral_2402/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/, v19);
    sub_B2C35C(&StringLiteral_1/*""*/, v20);
    sub_B2C35C(&StringLiteral_2406/*"BATTLE_CONTINUE_RETIRE"*/, v21);
    byte_4189E15 = 1;
  }
  OverwriteCommandSpellContinue = 0;
  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ContinueItemWindow, 1, 0LL);
  ContinueItemWindow = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_82;
  v23 = ContinueItemWindow;
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
  v25 = (System_String_o *)(ContinueItemWindow ? ContinueItemWindow : StringLiteral_1/*""*/);
  UILabel__set_text(ContinueCommandSpellNum, v25, 0LL);
  if ( !v23 )
    goto LABEL_82;
  ContinueStoneNum = this->fields.ContinueStoneNum;
  v86 = v23[42];
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86);
  ContinueItemWindow = System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v27, 0LL);
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
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ContinueItemNum);
  ContinueItemWindow = System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v29, 0LL);
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
  v32 = (int)ContinueItemWindow;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         this->fields.ContinueItemBtn,
                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v33 = v32 < 1;
  v34 = (UIWidget_o *)ContinueItemWindow;
  if ( v33 )
  {
    if ( !ContinueItemWindow )
      goto LABEL_82;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0LL);
    ContinueItemWindow = this->fields.ContinueItemBtn;
    if ( !ContinueItemWindow )
      goto LABEL_82;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_82;
    v45 = &StringLiteral_5496/*"END_PROC"*/;
  }
  else
  {
    *(UnityEngine_Color_o *)&v35 = UnityEngine_Color__get_white(0LL);
    if ( !v34 )
      goto LABEL_82;
    UIWidget__set_color(v34, *(UnityEngine_Color_o *)&v35, 0LL);
    ContinueItemWindow = this->fields.ContinueItemBtn;
    if ( !ContinueItemWindow )
      goto LABEL_82;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_82;
    v45 = &StringLiteral_9745/*"OK_CONTINUE_ITEM"*/;
  }
  v46 = (System_Int32_array **)*v45;
  *((_QWORD *)ContinueItemWindow + 4) = *v45;
  sub_B2C2F8((BattleServantConfConponent_o *)((char *)ContinueItemWindow + 32), v46, v39, v40, v41, v42, v43, v44);
  ContinueItemBtnLabel = this->fields.ContinueItemBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2397/*"BATTLE_CONTINUE_ITEM_BTN"*/, 0LL);
  if ( !ContinueItemBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueItemBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  deadLine = this->fields.deadLine;
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2400/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, 0LL);
  if ( !this->fields.data )
    goto LABEL_82;
  v49 = (System_String_o *)ContinueItemWindow;
  ContinueDeadLine = BattleData__GetContinueDeadLine(this->fields.data, 0LL);
  RestTime = (Il2CppObject *)LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
  ContinueItemWindow = System_String__Format(v49, RestTime, 0LL);
  if ( !deadLine )
    goto LABEL_82;
  UILabel__set_text(deadLine, (System_String_o *)ContinueItemWindow, 0LL);
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  v52 = OverwriteCommandSpellContinue;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v33 = v52 < 3;
  v53 = (UIWidget_o *)ContinueItemWindow;
  if ( v33 )
  {
    if ( !ContinueItemWindow )
      goto LABEL_82;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0LL);
    ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
    if ( !ContinueItemWindow )
      goto LABEL_82;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_82;
    v60 = &StringLiteral_5496/*"END_PROC"*/;
  }
  else
  {
    *(UnityEngine_Color_o *)&v61 = UnityEngine_Color__get_white(0LL);
    if ( !v53 )
      goto LABEL_82;
    UIWidget__set_color(v53, *(UnityEngine_Color_o *)&v61, 0LL);
    ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
    if ( !ContinueItemWindow )
      goto LABEL_82;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_82;
    v60 = &StringLiteral_9744/*"OK"*/;
  }
  v65 = (System_Int32_array **)*v60;
  *((_QWORD *)ContinueItemWindow + 4) = *v60;
  sub_B2C2F8((BattleServantConfConponent_o *)((char *)ContinueItemWindow + 32), v65, v54, v55, v56, v57, v58, v59);
  ContinueCommandSpellBtnLabel = this->fields.ContinueCommandSpellBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2410/*"BATTLE_CONTINUE_USE_SPELL"*/, 0LL);
  if ( !ContinueCommandSpellBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueCommandSpellBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  v67 = v23[42];
  ContinueStoneBtnLabel = this->fields.ContinueStoneBtnLabel;
  if ( v67 < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v69 = &StringLiteral_2392/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v69 = &StringLiteral_2393/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/;
  }
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)*v69, 0LL);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueStoneBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, v70);
  ContinueRetireBtnLabel = this->fields.ContinueRetireBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2406/*"BATTLE_CONTINUE_RETIRE"*/, 0LL);
  if ( !ContinueRetireBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueRetireBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  v73 = (System_String_o **)((int)OverwriteCommandSpellContinue >= 3 ? &StringLiteral_2401/*"BATTLE_CONTINUE_ITEM_SELECT"*/ : &StringLiteral_2402/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/);
  BattlePerformanceContinue__SetContinueMessage(this, this->fields.ContinueLabel, *v73, 0x80000000, v72);
  data = this->fields.data;
  if ( !data )
    goto LABEL_82;
  ContinueItemWindow = data->fields.quest_ent;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  ContinueItemWindow = (void *)QuestEntity__HasFlag((QuestEntity_o *)ContinueItemWindow, 0x400000000LL, 0LL);
  if ( ((unsigned __int8)ContinueItemWindow & 1) != 0 )
    goto LABEL_74;
  v75 = this->fields.data;
  if ( !v75 || (ContinueItemWindow = v75->fields.quest_ent) == 0LL )
LABEL_82:
    sub_B2C434(ContinueItemWindow, method);
  if ( !QuestEntity__HasFlag((QuestEntity_o *)ContinueItemWindow, 0x100000000LL, 0LL) )
    goto LABEL_80;
LABEL_74:
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !ContinueItemWindow )
    goto LABEL_82;
  UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0LL);
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
  if ( !ContinueItemWindow )
    goto LABEL_82;
  v82 = (System_Int32_array **)StringLiteral_5496/*"END_PROC"*/;
  *((_QWORD *)ContinueItemWindow + 4) = StringLiteral_5496/*"END_PROC"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)((char *)ContinueItemWindow + 32), v82, v76, v77, v78, v79, v80, v81);
  ContinueItemWindow = this->fields.ContinueCommandSpellNum;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellnowColor, 0LL);
LABEL_80:
  window = this->fields.window;
  v84 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v84,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endOpenContinueItem__,
    0LL);
  if ( !window )
    goto LABEL_82;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v84,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__OpenContinueWaveRestart(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4189E45 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue__OpenContinueWaveRestart_b__130_0__, method);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4189E45 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v5 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueWaveRestart_b__130_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_B2C434(v6, v7);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueWaveRestartWindow->klass->vtable._10_Open.method)(
    continueWaveRestartWindow,
    v5,
    continueWaveRestartWindow->klass->vtable._11_CompOpen.methodPtr);
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
  LocalizationManager_c *v20; // x0
  bool HasFlag; // w0
  __int64 *v22; // x8
  int32_t ContinueItemNum; // [xsp+Ch] [xbp-34h] BYREF
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

  if ( (byte_4189E0E & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_2498/*"BATTLE_RETIRE_CHECKSTR"*/, v8);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v9);
    sub_B2C35C(&StringLiteral_2499/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/, v10);
    byte_4189E0E = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0LL);
  if ( !giveUpWindow )
    goto LABEL_61;
  v24.fields.y = 72.0;
  v24.fields.x = 0.0;
  v24.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v24, 0LL);
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
  v25.fields.y = 77.0;
  v25.fields.x = 0.0;
  v25.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v25, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)giveUpWindow,
                                               0LL);
  if ( !giveUpWindow )
    goto LABEL_61;
  v26.fields.y = 6.0;
  v26.fields.x = 0.0;
  v26.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v26, 0LL);
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
  v27.fields.z = 0.0;
  v27.fields.x = 193.0;
  v27.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v27, 0LL);
  giveUpWindow = this->fields.giveUpCancelBtn;
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0LL);
  if ( !giveUpWindow )
    goto LABEL_61;
  v28.fields.z = 0.0;
  v28.fields.y = -72.0;
  v28.fields.x = -193.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v28, 0LL);
  giveUpWindow = this->fields.giveUpContinueItemRoot;
  if ( !giveUpWindow )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)giveUpWindow,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  data = this->fields.data;
  if ( !data )
    goto LABEL_61;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent || !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)giveUpWindow,
                                               battle_ent->fields.questId,
                                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v14 = (QuestEntity_o *)giveUpWindow;
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
          v29.fields.y = 66.0;
          v29.fields.x = 0.0;
          v29.fields.z = 0.0;
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
                v30.fields.y = 97.0;
                v30.fields.x = 0.0;
                v30.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v30, 0LL);
                giveUpWindow = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
                if ( giveUpWindow )
                {
                  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)giveUpWindow,
                                                               0LL);
                  if ( giveUpWindow )
                  {
                    v31.fields.y = 26.0;
                    v31.fields.x = 0.0;
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
                                                                                 (System_String_o *)StringLiteral_23489/*"{0:#,0}"*/,
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
                                        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                          && !AtlasManager_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                        }
                                        AtlasManager__SetItem(giveUpContinueItemSpr, ContinueItemImageId, 0LL);
                                        checkGiveUpLabel = this->fields.checkGiveUpLabel;
                                        v20 = LocalizationManager_TypeInfo;
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
      sub_B2C434(giveUpWindow, method);
    }
  }
  if ( !v14 )
    goto LABEL_61;
  HasFlag = QuestEntity__HasFlag(v14, 0x40000000LL, 0LL);
  checkGiveUpLabel = this->fields.checkGiveUpLabel;
  if ( !HasFlag )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
      || LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_57;
    }
    v20 = LocalizationManager_TypeInfo;
LABEL_56:
    j_il2cpp_runtime_class_init_0(v20);
LABEL_57:
    v22 = &StringLiteral_2498/*"BATTLE_RETIRE_CHECKSTR"*/;
    goto LABEL_58;
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = &StringLiteral_2499/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/;
LABEL_58:
  giveUpWindow = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v22, 0LL);
  if ( !checkGiveUpLabel )
    goto LABEL_61;
  UILabel__set_text(checkGiveUpLabel, (System_String_o *)giveUpWindow, 0LL);
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(giveUpWindow, 1, 0LL);
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
    sub_B2C434(ContinueItemWindow, method);
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
  __int64 v14; // x1
  System_String_o *mText; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  struct BattleData_o *data; // x8
  struct BattleDefenceTargetData_o *defenceTargetData; // x8
  Il2CppObject *v20; // x20
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x21
  System_String_o *v24; // x22
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  int32_t uiId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4189E43 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, label);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_2396/*"BATTLE_CONTINUE_DEFENCE_TARGET_HEAL"*/, v10);
    sub_B2C35C(&StringLiteral_23643/*"{0}_{1}"*/, v11);
    sub_B2C35C(&StringLiteral_2404/*"BATTLE_CONTINUE_NOT_ENOUGH_STONE"*/, v12);
    byte_4189E43 = 1;
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
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2404/*"BATTLE_CONTINUE_NOT_ENOUGH_STONE"*/, 0LL);
    v17 = System_String__Concat_44305532(mText, v16, 0LL);
    UILabel__set_text(label, v17, 0LL);
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
    sub_B2C434(SelfUserGame, v14);
  v20 = (Il2CppObject *)StringLiteral_2396/*"BATTLE_CONTINUE_DEFENCE_TARGET_HEAL"*/;
  uiId = defenceTargetData->fields.uiId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &uiId);
  v22 = System_String__Format_44301068((System_String_o *)StringLiteral_23643/*"{0}_{1}"*/, v20, v21, 0LL);
  v23 = label->fields.mText;
  v24 = v22;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( LocalizationManager__ContainsKey(v24, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = (Il2CppObject *)v24;
  }
  else if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
         && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v25 = LocalizationManager__Get((System_String_o *)v20, 0LL);
  v26 = System_String__Concat_44305532(v23, v25, 0LL);
  UILabel__set_text(label, v26, 0LL);
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
  __int64 v9; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_4189E3F & 1) == 0 )
  {
    sub_B2C35C(&BattleData_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandSpellMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_3354/*"CONNECT_OK"*/, v6);
    sub_B2C35C(&StringLiteral_6840/*"GAME_OVER_COMMAND_SPELL_ID"*/, v7);
    byte_4189E3F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  Instance = (void *)ConstantMaster__getValue((System_String_o *)StringLiteral_6840/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)Instance,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
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
    sub_B2C434(Instance, v9);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3354/*"CONNECT_OK"*/, 0LL);
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
    sub_B2C434(0LL, v4);
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
  BattleViewItemlistComponent_o *SelfUserGame; // x0
  __int64 v9; // x1
  BattleViewItemlistComponent_o *itemWindow; // x21
  UserGameEntity_o *v11; // x20
  BattleDropItem_array *DropItems; // x22
  BattleDropItemComponent_ClickDelegate_o *v13; // x23
  UILabel_o *commandspell_now; // x21
  System_String_o *v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  unsigned int OverwriteCommandSpellContinue; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4189E0D & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue_showConf__, inIsProgress);
    sub_B2C35C(&BattleDropItemComponent_ClickDelegate_TypeInfo, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_12342/*"START_CONTINUE"*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4189E0D = 1;
  }
  OverwriteCommandSpellContinue = 0;
  SelfUserGame = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_21;
  itemWindow = this->fields.itemWindow;
  v11 = (UserGameEntity_o *)SelfUserGame;
  DropItems = BattleData__getDropItems(this->fields.data, 0LL);
  v13 = (BattleDropItemComponent_ClickDelegate_o *)sub_B2C42C(BattleDropItemComponent_ClickDelegate_TypeInfo);
  BattleDropItemComponent_ClickDelegate___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_showConf__,
    0LL);
  if ( !itemWindow )
    goto LABEL_21;
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, DropItems, v13, this->fields.itemColumnCount, 0LL);
  SelfUserGame = this->fields.itemWindow;
  if ( !SelfUserGame )
    goto LABEL_21;
  BattleViewItemlistComponent__setHide(SelfUserGame, 0LL);
  SelfUserGame = (BattleViewItemlistComponent_o *)this->fields.data;
  if ( !SelfUserGame )
    goto LABEL_21;
  OverwriteCommandSpellContinue = BattleData__CheckCurrentTemporaryCommandSpell((BattleData_o *)SelfUserGame, v11, 0LL);
  v9 = OverwriteCommandSpellContinue;
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
  v15 = SelfUserGame ? (System_String_o *)SelfUserGame : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(commandspell_now, v15, 0LL);
  BattlePerformanceContinue__refreshStoneNow(this, v11, v16);
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
  BattlePerformanceContinue__ResetContinueItemInfo(this, v17);
  SelfUserGame = (BattleViewItemlistComponent_o *)this->fields.myFsm;
  if ( !SelfUserGame )
LABEL_21:
    sub_B2C434(SelfUserGame, v9);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_12342/*"START_CONTINUE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__StartContinueWaveRestart(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  System_Action_o *v7; // x21
  System_Action_o *v8; // x22
  PlayMakerFSM_o *myFsm; // x0
  __int64 v10; // x1

  if ( (byte_4189E44 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BattlePerformanceContinue__StartContinueWaveRestart_b__129_0__, v3);
    sub_B2C35C(&Method_BattlePerformanceContinue__StartContinueWaveRestart_b__129_1__, v4);
    sub_B2C35C(&StringLiteral_12343/*"START_CONTINUE_WAVE_RESTART"*/, v5);
    byte_4189E44 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueWaveRestart_b__129_0__,
    0LL);
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueWaveRestart_b__129_1__,
    0LL);
  if ( !continueWaveRestartWindow
    || (BattleWindowContinueWaveRestartComponent__SetWindow(continueWaveRestartWindow, v7, v8, 0LL),
        (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B2C434(myFsm, v10);
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12343/*"START_CONTINUE_WAVE_RESTART"*/, 0LL);
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
  __int64 v14; // x1
  BattleData_o *v15; // x0
  int64_t ContinueDeadLine; // x20
  System_String_o *RestTime; // x0
  UILabel_o *giveUpContinueItemLabel; // x21
  Il2CppObject *v19; // x20
  System_String_o *v20; // x0
  UILabel_o *deadLine; // x21
  System_String_o *v22; // x0
  UILabel_o *useCheckContinueItemLabel; // x21
  System_String_o *v24; // x0
  int64_t v25; // x20
  CommonUI_o *Instance; // x20
  System_String_o *v27; // x21
  ErrorDialog_ClickDelegate_o *v28; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-40h]

  if ( (byte_4189E08 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue_CallbackConfirmDialog__, method);
    sub_B2C35C(&ErrorDialog_ClickDelegate_TypeInfo, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_2403/*"BATTLE_CONTINUE_ITEM_USE_CHECK"*/, v8);
    sub_B2C35C(&StringLiteral_2399/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, v9);
    sub_B2C35C(&StringLiteral_2400/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, v10);
    sub_B2C35C(&StringLiteral_2398/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_4189E08 = 1;
  }
  data = (UnityEngine_Object_o *)this->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(data, 0LL, 0LL) && this->fields.IsContinueItem )
  {
    v15 = this->fields.data;
    if ( !v15 )
      goto LABEL_27;
    ContinueDeadLine = BattleData__GetContinueDeadLine(v15, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime = LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
    giveUpContinueItemLabel = this->fields.giveUpContinueItemLabel;
    v19 = (Il2CppObject *)RestTime;
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2399/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, 0LL);
    v15 = (BattleData_o *)System_String__Format(v20, v19, 0LL);
    if ( !giveUpContinueItemLabel )
      goto LABEL_27;
    UILabel__set_text(giveUpContinueItemLabel, (System_String_o *)v15, 0LL);
    deadLine = this->fields.deadLine;
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2400/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, 0LL);
    v15 = (BattleData_o *)System_String__Format(v22, v19, 0LL);
    if ( !deadLine )
      goto LABEL_27;
    UILabel__set_text(deadLine, (System_String_o *)v15, 0LL);
    useCheckContinueItemLabel = this->fields.useCheckContinueItemLabel;
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2403/*"BATTLE_CONTINUE_ITEM_USE_CHECK"*/, 0LL);
    v15 = (BattleData_o *)System_String__Format(v24, v19, 0LL);
    if ( !useCheckContinueItemLabel )
      goto LABEL_27;
    UILabel__set_text(useCheckContinueItemLabel, (System_String_o *)v15, 0LL);
    v15 = this->fields.data;
    if ( !v15 )
      goto LABEL_27;
    v25 = BattleData__GetContinueDeadLine(v15, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( v25 < NetworkManager__getTime(0LL) && !this->fields.isShowDeadLineDialog )
    {
      this->fields.isShowDeadLineDialog = 1;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2398/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
      v28 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v28,
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
          v27,
          v28,
          0,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        return;
      }
LABEL_27:
      sub_B2C434(v15, v14);
    }
  }
}


void __fastcall BattlePerformanceContinue__WaveRestartNg(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4189E47 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue__WaveRestartNg_b__132_0__, method);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4189E47 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v5 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__WaveRestartNg_b__132_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_B2C434(v6, v7);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueWaveRestartWindow->klass->vtable._12_Close.method)(
    continueWaveRestartWindow,
    v5,
    continueWaveRestartWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__WaveRestartOk(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4189E46 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue__WaveRestartOk_b__131_0__, method);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4189E46 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v5 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__WaveRestartOk_b__131_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_B2C434(v6, v7);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueWaveRestartWindow->klass->vtable._12_Close.method)(
    continueWaveRestartWindow,
    v5,
    continueWaveRestartWindow->klass->vtable._13_CompClose.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue___AttachStoneCountRefreshComponent_b__80_0(
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
  __int64 v17; // x1
  System_String_o *v18; // x21
  UILabel_o *ContinueStoneBtnLabel; // x21
  UILabel_o *stoneBtnLabel; // x21
  System_String_o *ActiveStateName; // x0
  UILabel_o *v22; // x21
  int32_t v23; // w0
  const MethodInfo *v24; // x4
  System_String_o **v25; // x8
  const MethodInfo *v26; // x4
  const MethodInfo *v27; // x4
  int32_t v28; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4189E48 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&stoneCount);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_2394/*"BATTLE_CONTINUE_CHECK_SPELL"*/, v6);
    sub_B2C35C(&StringLiteral_2393/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, v7);
    sub_B2C35C(&StringLiteral_2395/*"BATTLE_CONTINUE_CHECK_STONE"*/, v8);
    sub_B2C35C(&StringLiteral_2392/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, v9);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v10);
    sub_B2C35C(&StringLiteral_12660/*"Select_NoStone"*/, v11);
    sub_B2C35C(&StringLiteral_2401/*"BATTLE_CONTINUE_ITEM_SELECT"*/, v12);
    sub_B2C35C(&StringLiteral_2402/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/, v13);
    sub_B2C35C(&StringLiteral_12661/*"Select_Stone"*/, v14);
    byte_4189E48 = 1;
  }
  v28 = stoneCount;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  gem_now = System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v15, 0LL);
  if ( !this->fields.ContinueStoneNum )
    goto LABEL_28;
  v18 = gem_now;
  UILabel__set_text(this->fields.ContinueStoneNum, gem_now, 0LL);
  gem_now = (System_String_o *)this->fields.gem_now;
  if ( !gem_now )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)gem_now, v18, 0LL);
  gem_now = (System_String_o *)this->fields.stone_now;
  if ( !gem_now )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)gem_now, v18, 0LL);
  ContinueStoneBtnLabel = this->fields.ContinueStoneBtnLabel;
  if ( stoneCount >= 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2393/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, 0LL);
    if ( ContinueStoneBtnLabel )
    {
      UILabel__set_text(ContinueStoneBtnLabel, gem_now, 0LL);
      stoneBtnLabel = this->fields.stoneBtnLabel;
      gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2393/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, 0LL);
      if ( stoneBtnLabel )
      {
        UILabel__set_text(stoneBtnLabel, gem_now, 0LL);
        gem_now = (System_String_o *)this->fields.myFsm;
        if ( gem_now )
        {
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)gem_now, 0LL);
          if ( !System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_12660/*"Select_NoStone"*/, 0LL) )
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
                PlayMakerFSM__SetState((PlayMakerFSM_o *)gem_now, (System_String_o *)StringLiteral_12661/*"Select_Stone"*/, 0LL);
                goto LABEL_24;
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_B2C434(gem_now, v17);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2392/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, 0LL);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_28;
  UILabel__set_text(ContinueStoneBtnLabel, gem_now, 0LL);
  v22 = this->fields.stoneBtnLabel;
  gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2392/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, 0LL);
  if ( !v22 )
    goto LABEL_28;
  UILabel__set_text(v22, gem_now, 0LL);
LABEL_24:
  gem_now = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_28;
  v23 = BattleData__CheckCurrentTemporaryCommandSpell(this->fields.data, (UserGameEntity_o *)gem_now, 0LL);
  v25 = (System_String_o **)&StringLiteral_2401/*"BATTLE_CONTINUE_ITEM_SELECT"*/;
  if ( v23 <= 2 )
    v25 = (System_String_o **)&StringLiteral_2402/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/;
  BattlePerformanceContinue__SetContinueMessage(this, this->fields.ContinueLabel, *v25, stoneCount, v24);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseCommandSpell,
    (System_String_o *)StringLiteral_2394/*"BATTLE_CONTINUE_CHECK_SPELL"*/,
    stoneCount,
    v26);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseGem,
    (System_String_o *)StringLiteral_2395/*"BATTLE_CONTINUE_CHECK_STONE"*/,
    stoneCount,
    v27);
}


void __fastcall BattlePerformanceContinue___CheckDefenceTargetBroken_b__124_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4189E49 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5743/*"EVENT_TRUE"*/, method);
    byte_4189E49 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5743/*"EVENT_TRUE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenBrokenMessage_b__125_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4189E4A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5478/*"END_CLOSE"*/, method);
    byte_4189E4A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5478/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueWaveRestart_b__130_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4189E4D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5492/*"END_OPEN"*/, method);
    byte_4189E4D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5492/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueWaveRestart_b__129_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4189E4B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9744/*"OK"*/, method);
    byte_4189E4B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9744/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueWaveRestart_b__129_1(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4189E4C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9301/*"NG"*/, method);
    byte_4189E4C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9301/*"NG"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___WaveRestartNg_b__132_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_4189E4F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9301/*"NG"*/, method);
    byte_4189E4F = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B2C434(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9301/*"NG"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___WaveRestartOk_b__131_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_4189E4E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9744/*"OK"*/, method);
    byte_4189E4E = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B2C434(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9744/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__atlasLoadEnd(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  BattleViewItemlistComponent_o *itemWindow; // x20
  BattleDropItem_array *DropItems; // x21
  BattleDropItemComponent_ClickDelegate_o *v7; // x22

  if ( (byte_4189E0C & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue_showConf__, method);
    sub_B2C35C(&BattleDropItemComponent_ClickDelegate_TypeInfo, v3);
    byte_4189E0C = 1;
  }
  data = this->fields.data;
  if ( !data
    || (itemWindow = this->fields.itemWindow,
        DropItems = BattleData__getDropItems(data, 0LL),
        v7 = (BattleDropItemComponent_ClickDelegate_o *)sub_B2C42C(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_showConf__,
          0LL),
        !itemWindow) )
  {
    sub_B2C434(data, method);
  }
  BattleViewItemlistComponent__setListDataCustomColumn(itemWindow, DropItems, v7, this->fields.itemColumnCount, 0LL);
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
  if ( (byte_4189E1E & 1) == 0 )
  {
    sub_B2C35C(&BattleData_TypeInfo, ret);
    sub_B2C35C(&StringLiteral_3353/*"CONNECT_NG"*/, v5);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v6);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v7);
    this = (BattlePerformanceContinue_o *)sub_B2C35C(&StringLiteral_3354/*"CONNECT_OK"*/, v8);
    byte_4189E1E = 1;
  }
  if ( !ret )
    goto LABEL_15;
  if ( System_String__Equals_44292872(ret, (System_String_o *)StringLiteral_21218/*"ok"*/, 0LL) )
  {
    v4->fields.continueRetryFlg = 0;
    if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__setContinueBattleFlg(0, 1, 0LL);
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    if ( this )
    {
      v9 = &StringLiteral_3354/*"CONNECT_OK"*/;
LABEL_13:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v9, 0LL);
      return;
    }
    goto LABEL_15;
  }
  if ( System_String__Equals_44292872(ret, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      v9 = &StringLiteral_3353/*"CONNECT_NG"*/;
      goto LABEL_13;
    }
LABEL_15:
    sub_B2C434(this, ret);
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
  if ( (byte_4189E38 & 1) == 0 )
  {
    sub_B2C35C(&BattleData_TypeInfo, ret);
    sub_B2C35C(&StringLiteral_3353/*"CONNECT_NG"*/, v5);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v6);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v7);
    this = (BattlePerformanceContinue_o *)sub_B2C35C(&StringLiteral_3354/*"CONNECT_OK"*/, v8);
    byte_4189E38 = 1;
  }
  if ( !ret )
    goto LABEL_18;
  if ( System_String__Equals_44292872(ret, (System_String_o *)StringLiteral_21218/*"ok"*/, 0LL) )
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
          v9 = &StringLiteral_3354/*"CONNECT_OK"*/;
LABEL_16:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v9, 0LL);
          return;
        }
      }
    }
    goto LABEL_18;
  }
  if ( System_String__Equals_44292872(ret, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.data;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      BattleData__UpdateContinueItemInfo((BattleData_o *)this, 0LL);
      this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
      if ( this )
      {
        v9 = &StringLiteral_3353/*"CONNECT_NG"*/;
        goto LABEL_16;
      }
    }
LABEL_18:
    sub_B2C434(this, ret);
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
  if ( (byte_4189E2B & 1) == 0 )
  {
    sub_B2C35C(&BattleData_TypeInfo, ret);
    sub_B2C35C(&StringLiteral_3353/*"CONNECT_NG"*/, v5);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v6);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v7);
    this = (BattlePerformanceContinue_o *)sub_B2C35C(&StringLiteral_3354/*"CONNECT_OK"*/, v8);
    byte_4189E2B = 1;
  }
  if ( !ret )
    goto LABEL_16;
  if ( System_String__Equals_44292872(ret, (System_String_o *)StringLiteral_21218/*"ok"*/, 0LL) )
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
        v9 = &StringLiteral_3354/*"CONNECT_OK"*/;
LABEL_14:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v9, 0LL);
        return;
      }
    }
    goto LABEL_16;
  }
  if ( System_String__Equals_44292872(ret, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      v9 = &StringLiteral_3353/*"CONNECT_NG"*/;
      goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(this, ret);
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
    sub_B2C434(0LL, ret);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  __int64 *v11; // x8

  if ( (byte_4189E33 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_B2C35C(&StringLiteral_3353/*"CONNECT_NG"*/, v5);
    sub_B2C35C(&StringLiteral_3354/*"CONNECT_OK"*/, v6);
    byte_4189E33 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  BattlePerformanceContinue__closeNoStone(this, v9);
  if ( (unsigned int)(result - 1) > 1 )
  {
    Instance = (CommonUI_o *)this->fields.myFsm;
    if ( Instance )
    {
      v11 = &StringLiteral_3353/*"CONNECT_NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B2C434(Instance, v8);
  }
  BattlePerformanceContinue__refreshStoneNow(this, 0LL, v10);
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_10;
  v11 = &StringLiteral_3354/*"CONNECT_OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v11, 0LL);
}


void __fastcall BattlePerformanceContinue__checkCountStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int *SelfUserGame; // x0
  __int64 v4; // x1

  if ( (byte_4189E3D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9298/*"NEXT"*/, method);
    byte_4189E3D = 1;
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
    sub_B2C434(SelfUserGame, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_9298/*"NEXT"*/, 0LL);
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
  ErrorDialog_ClickDelegate_o *v14; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-40h]

  if ( (byte_4189E3E & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue_CallbackConfirmDialog__, method);
    sub_B2C35C(&ErrorDialog_ClickDelegate_TypeInfo, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_9298/*"NEXT"*/, v7);
    sub_B2C35C(&StringLiteral_2398/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_4189E3E = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2398/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
    v14 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v14,
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
        v13,
        v14,
        0,
        0,
        -1.0,
        1,
        effectDistance,
        0LL);
      return;
    }
LABEL_15:
    sub_B2C434(data, method);
  }
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_9298/*"NEXT"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__checkSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  __int64 *v6; // x9

  if ( (byte_4189E18 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9744/*"OK"*/, method);
    sub_B2C35C(&StringLiteral_9301/*"NG"*/, v3);
    byte_4189E18 = 1;
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
    sub_B2C434(SelfUserGame, v5);
  }
  if ( (int)SelfUserGame >= 3 )
    v6 = &StringLiteral_9744/*"OK"*/;
  else
    v6 = &StringLiteral_9301/*"NG"*/;
  PlayMakerFSM__SendEvent(this->fields.myFsm, (System_String_o *)*v6, 0LL);
}


void __fastcall BattlePerformanceContinue__checkStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserGameEntity_o *SelfUserGame; // x20
  const MethodInfo *v5; // x2
  PlayMakerFSM_o *myFsm; // x0
  __int64 v7; // x1
  __int64 *v8; // x8

  if ( (byte_4189E25 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9744/*"OK"*/, method);
    sub_B2C35C(&StringLiteral_9301/*"NG"*/, v3);
    byte_4189E25 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  BattlePerformanceContinue__refreshStoneNow(this, SelfUserGame, v5);
  if ( !SelfUserGame || (myFsm = this->fields.myFsm) == 0LL )
    sub_B2C434(myFsm, v7);
  if ( SelfUserGame->fields.stone < 1 )
    v8 = &StringLiteral_9301/*"NG"*/;
  else
    v8 = &StringLiteral_9744/*"OK"*/;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v8, 0LL);
}


void __fastcall BattlePerformanceContinue__closeContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4189E35 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue_endCloseContinueItem__, method);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4189E35 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v6 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseContinueItem__,
          0LL),
        !window) )
  {
    sub_B2C434(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v6,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4189E30 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue_endCloseNoStone__, method);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4189E30 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v6 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseNoStone__,
          0LL),
        !window) )
  {
    sub_B2C434(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v6,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4189E1B & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue_endCloseSpell__, method);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4189E1B = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v6 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseSpell__,
          0LL),
        !window) )
  {
    sub_B2C434(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v6,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4189E28 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue_endCloseStone__, method);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4189E28 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v6 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseStone__,
          0LL),
        !window) )
  {
    sub_B2C434(itemWindow, method);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    v6,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue__closeUseCheck(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *useCheckWindow; // x0

  useCheckWindow = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !useCheckWindow
    || (useCheckWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useCheckWindow, 0LL)) == 0LL )
  {
    sub_B2C434(useCheckWindow, method);
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
  __int64 v7; // x1
  BattleData_o *data; // x0
  int32_t ContinueUseItemId; // w20
  NetworkManager_ResultCallbackFunc_o *v10; // x21
  struct BattleData_o *v11; // x8
  struct BattleEntity_o *battle_ent; // x9

  if ( (byte_4189E37 & 1) == 0 )
  {
    sub_B2C35C(&BattleData_TypeInfo, method);
    sub_B2C35C(&Method_BattlePerformanceContinue_callBackContinueItem__, v3);
    sub_B2C35C(&Method_NetworkManager_getRequest_BattleUseContinueItemRequest___, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4189E37 = 1;
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
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callBackContinueItem__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  data = (BattleData_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                           v10,
                           (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_BattleUseContinueItemRequest___);
  v11 = this->fields.data;
  if ( !v11 )
    goto LABEL_18;
  if ( this->fields.continueRetryFlg )
  {
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0LL);
      return;
    }
LABEL_18:
    sub_B2C434(data, v7);
  }
  battle_ent = v11->fields.battle_ent;
  if ( !battle_ent || !data )
    goto LABEL_18;
  BattleUseContinueItemRequest__beginRequest(
    (BattleUseContinueItemRequest_o *)data,
    battle_ent->fields.id,
    v11->fields.continueCount,
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
  __int64 v9; // x1
  BattleData_o *data; // x0
  const MethodInfo *v11; // x1
  _BOOL4 continueRetryFlg; // w21
  NetworkManager_ResultCallbackFunc_o *v13; // x0
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  struct BattleData_o *v15; // x8
  int32_t continueCount; // w21
  struct BattleEntity_o *battle_ent; // x22
  BattleCommandSpellRequest_o *v18; // x20
  struct BattleData_o *v19; // x8

  if ( (byte_4189E1D & 1) == 0 )
  {
    sub_B2C35C(&BattleData_TypeInfo, method);
    sub_B2C35C(&Method_BattlePerformanceContinue_callBackCommandSpell__, v3);
    sub_B2C35C(&Method_BattlePerformanceContinue_callbackContinueCommandSpell__, v4);
    sub_B2C35C(&Method_NetworkManager_getRequest_BattleCommandSpellRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_6840/*"GAME_OVER_COMMAND_SPELL_ID"*/, v8);
    byte_4189E1D = 1;
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
    BattlePerformanceContinue__SkipCommandSpellRequest(this, v11);
    return;
  }
  continueRetryFlg = this->fields.continueRetryFlg;
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  v14 = v13;
  if ( continueRetryFlg )
  {
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_BattlePerformanceContinue_callBackCommandSpell__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    data = (BattleData_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                             v14,
                             (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0LL);
      return;
    }
LABEL_24:
    sub_B2C434(data, v9);
  }
  NetworkManager_ResultCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callbackContinueCommandSpell__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  data = (BattleData_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                           v14,
                           (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
  v15 = this->fields.data;
  if ( !v15 )
    goto LABEL_24;
  continueCount = v15->fields.continueCount;
  battle_ent = v15->fields.battle_ent;
  v18 = (BattleCommandSpellRequest_o *)data;
  data = (BattleData_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6840/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0LL);
  if ( !battle_ent )
    goto LABEL_24;
  v19 = this->fields.data;
  if ( !v19 || !v18 )
    goto LABEL_24;
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
  __int64 v7; // x1
  BattleData_o *data; // x0
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  struct BattleData_o *v10; // x8
  struct BattleEntity_o *battle_ent; // x9

  if ( (byte_4189E2A & 1) == 0 )
  {
    sub_B2C35C(&BattleData_TypeInfo, method);
    sub_B2C35C(&Method_BattlePerformanceContinue_callBackStone__, v3);
    sub_B2C35C(&Method_NetworkManager_getRequest_BattleUseContinueRequest___, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4189E2A = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setContinueBattleFlg(1, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  BattleData__procPlayerContinue(data, this->fields.isProgress, 0LL);
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callBackStone__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  data = (BattleData_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                           v9,
                           (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_BattleUseContinueRequest___);
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_17;
  if ( this->fields.continueRetryFlg )
  {
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0LL);
      return;
    }
LABEL_17:
    sub_B2C434(data, v7);
  }
  battle_ent = v10->fields.battle_ent;
  if ( !battle_ent || !data )
    goto LABEL_17;
  BattleUseContinueRequest__beginRequest(
    (BattleUseContinueRequest_o *)data,
    battle_ent->fields.id,
    v10->fields.waveClearNeedTurn,
    v10->fields.continueCount,
    0LL);
}


void __fastcall BattlePerformanceContinue__endCloseContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *ContinueItemWindow; // x0

  if ( (byte_4189E36 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5478/*"END_CLOSE"*/, method);
    byte_4189E36 = 1;
  }
  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow
    || (UnityEngine_GameObject__SetActive(ContinueItemWindow, 0, 0LL),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)ContinueItemWindow, 0LL),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B2C434(ContinueItemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ContinueItemWindow, (System_String_o *)StringLiteral_5478/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nostoneObject; // x0

  if ( (byte_4189E31 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5478/*"END_CLOSE"*/, method);
    byte_4189E31 = 1;
  }
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject
    || (UnityEngine_GameObject__SetActive(nostoneObject, 0, 0LL),
        (nostoneObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B2C434(nostoneObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)nostoneObject, (System_String_o *)StringLiteral_5478/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandspellObject; // x0

  if ( (byte_4189E1C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5478/*"END_CLOSE"*/, method);
    byte_4189E1C = 1;
  }
  commandspellObject = this->fields.commandspellObject;
  if ( !commandspellObject
    || (UnityEngine_GameObject__SetActive(commandspellObject, 0, 0LL),
        (commandspellObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)commandspellObject, 0LL),
        (commandspellObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B2C434(commandspellObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)commandspellObject, (System_String_o *)StringLiteral_5478/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *stoneObject; // x0

  if ( (byte_4189E29 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5478/*"END_CLOSE"*/, method);
    byte_4189E29 = 1;
  }
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 0, 0LL),
        (stoneObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)stoneObject, 0LL),
        (stoneObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B2C434(stoneObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)stoneObject, (System_String_o *)StringLiteral_5478/*"END_CLOSE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__endDialog(
        BattlePerformanceContinue_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4189E13 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    sub_B2C35C(&StringLiteral_9301/*"NG"*/, v4);
    byte_4189E13 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.logic) == 0LL) )
  {
    sub_B2C434(Instance, v6);
  }
  BattleLogic__sendFsmEvent((BattleLogic_o *)Instance, (System_String_o *)StringLiteral_9301/*"NG"*/, 0LL);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  UnityEngine_Object_o *v22; // x21
  SimpleAnimation_o *v23; // x0
  System_String_o *v24; // x1
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Animation_o *v26; // x0
  System_String_o *v27; // x1
  Il2CppObject *v28; // x0
  Il2CppObject *v29; // x0
  int32_t v30; // [xsp+8h] [xbp-38h] BYREF
  int v31; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4189E23 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, aData);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, v9);
    sub_B2C35C(&StringLiteral_18174/*"ef_commandspell_{0:D2}"*/, v10);
    sub_B2C35C(&StringLiteral_18175/*"ef_commandspell{0:D4}"*/, v11);
    byte_4189E23 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_31;
  BattlePerformance__PlayAnyCommandSpellContinueVoice(perf, 0LL);
  perf = (BattlePerformance_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !perf )
    goto LABEL_31;
  v13 = (UserGameEntity_o *)perf;
  perf = (BattlePerformance_o *)UserGameEntity__get_SpellImageIdBattle((UserGameEntity_o *)perf, 0LL);
  if ( !this->fields.data )
    goto LABEL_31;
  v14 = (int)perf;
  v15 = BattleData__CheckCurrentTemporaryCommandSpell(this->fields.data, v13, 0LL);
  v31 = v14;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  perf = (BattlePerformance_o *)System_String__Format((System_String_o *)StringLiteral_18175/*"ef_commandspell{0:D4}"*/, v16, 0LL);
  if ( !aData )
    goto LABEL_31;
  perf = (BattlePerformance_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  aData,
                                  (System_String_o *)perf,
                                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  v17 = this->fields.perf;
  if ( !v17 )
    goto LABEL_31;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             (UnityEngine_GameObject_o *)perf,
             v17->fields.popupTr,
             0LL,
             0LL);
  v30 = v15;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  perf = (BattlePerformance_o *)System_String__Format((System_String_o *)StringLiteral_18174/*"ef_commandspell_{0:D2}"*/, v19, 0LL);
  if ( !Object )
    goto LABEL_31;
  v20 = (System_String_o *)perf;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      Object,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v22 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  Object,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    if ( SimpleAnimation__get_Item((SimpleAnimation_o *)Component_srcLineSprite, v20, 0LL) )
    {
      v23 = (SimpleAnimation_o *)Component_srcLineSprite;
      v24 = v20;
    }
    else
    {
      v31 = 3;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
      v24 = System_String__Format((System_String_o *)StringLiteral_18174/*"ef_commandspell_{0:D2}"*/, v28, 0LL);
      v23 = (SimpleAnimation_o *)Component_srcLineSprite;
    }
    SimpleAnimation__Play_16486620(v23, v24, 0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
    if ( ((unsigned __int8)perf & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_31;
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
        v27 = System_String__Format((System_String_o *)StringLiteral_18174/*"ef_commandspell_{0:D2}"*/, v29, 0LL);
        v26 = (UnityEngine_Animation_o *)v22;
      }
      UnityEngine_Animation__Play_50201580(v26, v27, 0LL);
    }
  }
  perf = (BattlePerformance_o *)this->fields.logic;
  if ( !perf
    || (BattleLogic__setTimeAcceleration((BattleLogic_o *)perf, 0, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__playMasterCommandSpellCutIn(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.myFsm) == 0LL) )
  {
LABEL_31:
    sub_B2C434(perf, aData);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_4189E17 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5492/*"END_OPEN"*/, method);
    byte_4189E17 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__ChangeLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B2C434(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5492/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_4189E2F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5492/*"END_OPEN"*/, method);
    byte_4189E2F = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B2C434(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5492/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_4189E1A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5492/*"END_OPEN"*/, method);
    byte_4189E1A = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B2C434(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5492/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_4189E27 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5492/*"END_OPEN"*/, method);
    byte_4189E27 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B2C434(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5492/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenUsecheck(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4189E3C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5492/*"END_OPEN"*/, method);
    byte_4189E3C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5492/*"END_OPEN"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__endRetryDialog(
        BattlePerformanceContinue_o *this,
        bool flg,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_4189E20 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9744/*"OK"*/, flg);
    byte_4189E20 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B2C434(0LL, flg);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9744/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  System_String_o *v8; // x20
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4189E24 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_4171/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v4);
    byte_4189E24 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_9;
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0LL);
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SpellImageIdBattle);
  v8 = System_String__Format((System_String_o *)StringLiteral_4171/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v7, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v8, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.logic;
  if ( !SelfUserGame )
LABEL_9:
    sub_B2C434(SelfUserGame, v6);
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
  __int64 v6; // x1
  UnityEngine_GameObject_o *nostoneObject; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_4189E2E & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue_endOpenNoStone__, method);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_2405/*"BATTLE_CONTINUE_NO_STONE"*/, v4);
    byte_4189E2E = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseBuyGem,
    (System_String_o *)StringLiteral_2405/*"BATTLE_CONTINUE_NO_STONE"*/,
    0x80000000,
    v5);
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject
    || (UnityEngine_GameObject__SetActive(nostoneObject, 1, 0LL),
        window = this->fields.window,
        v9 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v9,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenNoStone__,
          0LL),
        !window) )
  {
    sub_B2C434(nostoneObject, v6);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v9,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__openReTry(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  NotificationDialog_ClickDelegate_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4189E1F & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue_endRetryDialog__, method);
    sub_B2C35C(&NotificationDialog_ClickDelegate_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&StringLiteral_23893/*"通信に失敗したので再度通信を行います"*/, v5);
    sub_B2C35C(&StringLiteral_23894/*"通信失敗"*/, v6);
    byte_4189E1F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (NotificationDialog_ClickDelegate_o *)sub_B2C42C(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endRetryDialog__,
    0LL);
  if ( !Instance )
    sub_B2C434(v9, v10);
  CommonUI__OpenNotificationDialog_17973524(
    Instance,
    (System_String_o *)StringLiteral_23894/*"通信失敗"*/,
    (System_String_o *)StringLiteral_23893/*"通信に失敗したので再度通信を行います"*/,
    v8,
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
  void *SelfUserGame; // x0
  __int64 v12; // x1
  UILabel_o *stoneBtnLabel; // x20
  __int64 *v14; // x8
  const MethodInfo *v15; // x1
  struct BattleData_o *data; // x8
  struct BattleData_o *v17; // x8
  const MethodInfo *v18; // x4
  WebViewObject_o *Component_WebViewObject; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v28; // x21

  if ( (byte_4189E19 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue_endOpenSpell__, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_SendEventToFsm___, v3);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_2394/*"BATTLE_CONTINUE_CHECK_SPELL"*/, v7);
    sub_B2C35C(&StringLiteral_2393/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, v8);
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, v9);
    sub_B2C35C(&StringLiteral_2392/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, v10);
    byte_4189E19 = 1;
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
    v14 = &StringLiteral_2392/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_2393/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/;
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)*v14, 0LL);
  if ( !stoneBtnLabel )
    goto LABEL_33;
  UILabel__set_text(stoneBtnLabel, (System_String_o *)SelfUserGame, 0LL);
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, v15);
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
    v17 = this->fields.data;
    if ( !v17 )
      goto LABEL_33;
    SelfUserGame = v17->fields.quest_ent;
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
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_SendEventToFsm___);
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
    v26 = (System_Int32_array **)StringLiteral_5496/*"END_PROC"*/;
    Component_WebViewObject->fields.onError = (struct System_Action_string__o *)StringLiteral_5496/*"END_PROC"*/;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&Component_WebViewObject->fields.onError,
      v26,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  SelfUserGame = this->fields.commandspell_now;
  if ( !SelfUserGame )
LABEL_33:
    sub_B2C434(SelfUserGame, v12);
  UIWidget__set_color((UIWidget_o *)SelfUserGame, this->fields.spellnowColor, 0LL);
LABEL_31:
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseCommandSpell,
    (System_String_o *)StringLiteral_2394/*"BATTLE_CONTINUE_CHECK_SPELL"*/,
    0x80000000,
    v18);
  window = this->fields.window;
  v28 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v28, (Il2CppObject *)this, Method_BattlePerformanceContinue_endOpenSpell__, 0LL);
  if ( !window )
    goto LABEL_33;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v28,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__openStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  __int64 v6; // x1
  UnityEngine_GameObject_o *stoneObject; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_4189E26 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue_endOpenStone__, method);
    sub_B2C35C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_2395/*"BATTLE_CONTINUE_CHECK_STONE"*/, v4);
    byte_4189E26 = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseGem,
    (System_String_o *)StringLiteral_2395/*"BATTLE_CONTINUE_CHECK_STONE"*/,
    0x80000000,
    v5);
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 1, 0LL),
        window = this->fields.window,
        v9 = (BattleWindowComponent_EndCall_o *)sub_B2C42C(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v9,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenStone__,
          0LL),
        !window) )
  {
    sub_B2C434(stoneObject, v6);
  }
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v9,
    window->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__openStoneShop(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4189E32 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue_callbaclStoneShop__, method);
    sub_B2C35C(&StonePurchaseMenu_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4189E32 = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (StonePurchaseMenu_CallbackFunc_o *)sub_B2C42C(StonePurchaseMenu_CallbackFunc_TypeInfo);
  StonePurchaseMenu_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callbaclStoneShop__,
    0LL);
  if ( !Instance )
    sub_B2C434(v7, v8);
  CommonUI__OpenStonePurchaseMenu(Instance, v6, 0LL, 0LL);
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

  if ( (byte_4189E3B & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&type);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_2409/*"BATTLE_CONTINUE_USECHECK_STONE"*/, v6);
    sub_B2C35C(&StringLiteral_2407/*"BATTLE_CONTINUE_STONEPAY_WARNING_MSG"*/, v7);
    sub_B2C35C(&StringLiteral_2408/*"BATTLE_CONTINUE_USECHECK_SPELL"*/, v8);
    byte_4189E3B = 1;
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
  v12 = UnityEngine_Component__get_gameObject(usecheckLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v12, 28.0, 0LL);
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
    v14 = &StringLiteral_2408/*"BATTLE_CONTINUE_USECHECK_SPELL"*/;
    goto LABEL_39;
  }
  v15 = this->fields.usecheckLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  usecheckLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2409/*"BATTLE_CONTINUE_USECHECK_STONE"*/, 0LL);
  if ( !v15 )
    goto LABEL_49;
  UILabel__set_text(v15, (System_String_o *)usecheckLabel, 0LL);
  v16 = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
    goto LABEL_46;
  usecheckLabel = (UnityEngine_Component_o *)this->fields.useCheckWindow;
  if ( !usecheckLabel )
    goto LABEL_49;
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
LABEL_49:
    sub_B2C434(usecheckLabel, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 1, 0LL);
  addMsgLabel = this->fields.addMsgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = &StringLiteral_2407/*"BATTLE_CONTINUE_STONEPAY_WARNING_MSG"*/;
LABEL_39:
  usecheckLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v14, 0LL);
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
  BattlePerformanceContinue__endOpenUsecheck(this, v19);
}


void __fastcall BattlePerformanceContinue__procContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4189E3A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_4189E3A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNG(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleLogic_o *logic; // x19
  NotificationDialog_ClickDelegate_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4189E12 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattlePerformanceContinue_endDialog__, method);
    sub_B2C35C(&NotificationDialog_ClickDelegate_TypeInfo, v3);
    byte_4189E12 = 1;
  }
  logic = this->fields.logic;
  v5 = (NotificationDialog_ClickDelegate_o *)sub_B2C42C(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v5, (Il2CppObject *)this, Method_BattlePerformanceContinue_endDialog__, 0LL);
  if ( !logic )
    sub_B2C434(v6, v7);
  BattleLogic__OpenBattleLoseDlg(logic, 1, 0, v5, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4189E39 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_4189E39 = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGGiveUpContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4189E10 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_4189E10 = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  this->fields.IsContinueItem = 0;
  if ( !myFsm )
    sub_B2C434(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_4189E34 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_4189E34 = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__ClearObj(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B2C434(itemWindow, v3);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4189E21 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_4189E21 = 1;
  }
  BattlePerformanceContinue__closeSpell(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4189E2C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_4189E2C = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
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
  if ( (byte_4189E11 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, method);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    this = (BattlePerformanceContinue_o *)sub_B2C35C(&StringLiteral_9744/*"OK"*/, v4);
    byte_4189E11 = 1;
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
  BattleLogic__sendFsmEvent((BattleLogic_o *)this, (System_String_o *)StringLiteral_9744/*"OK"*/, 0LL);
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
      this = (BattlePerformanceContinue_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
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
LABEL_20:
      sub_B2C434(this, method);
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
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  System_String_o *v10; // x20
  AssetLoader_LoadEndDataHandler_o *v11; // x21
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4189E22 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_BattlePerformanceContinue_endLoadCommandSPell__, v3);
    sub_B2C35C(&int_TypeInfo, v4);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_4171/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v6);
    byte_4189E22 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B2C434(0LL, v8);
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0LL);
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SpellImageIdBattle);
  v10 = System_String__Format((System_String_o *)StringLiteral_4171/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v9, 0LL);
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endLoadCommandSPell__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v10, v11, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__procStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4189E2D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5496/*"END_PROC"*/, method);
    byte_4189E2D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5496/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__refreshStoneNow(
        BattlePerformanceContinue_o *this,
        UserGameEntity_o *userGame,
        const MethodInfo *method)
{
  UserGameEntity_o *v3; // x20
  __int64 v5; // x1
  System_String_o *SelfUserGame; // x0
  __int64 v7; // x1
  UILabel_o *gem_now; // x21
  Il2CppObject *v9; // x0
  UILabel_o *stone_now; // x19
  Il2CppObject *v11; // x0
  int32_t v12; // [xsp+8h] [xbp-28h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-24h] BYREF

  v3 = userGame;
  if ( (byte_4189E0B & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, userGame);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v5);
    byte_4189E0B = 1;
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
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
  SelfUserGame = System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v9, 0LL);
  if ( !gem_now
    || (UILabel__set_text(gem_now, SelfUserGame, 0LL),
        stone_now = this->fields.stone_now,
        v12 = v3->fields.stone,
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12),
        SelfUserGame = System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v11, 0LL),
        !stone_now) )
  {
LABEL_8:
    sub_B2C434(SelfUserGame, v7);
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


void __fastcall BattlePerformanceContinue__CoEndContinue_d__127___ctor(
        BattlePerformanceContinue__CoEndContinue_d__127_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattlePerformanceContinue__CoEndContinue_d__127__MoveNext(
        BattlePerformanceContinue__CoEndContinue_d__127_o *this,
        const MethodInfo *method)
{
  BattlePerformanceContinue__CoEndContinue_d__127_o *v2; // x19
  int32_t _1__state; // w8
  float timer_5__2; // s8
  struct BattlePerformanceContinue_o *_4__this; // x8
  struct BattlePerformance_o *perf; // x8
  NGUIFader_o *Component_srcLineSprite; // x19
  int v8; // s0
  bool result; // w0
  float deltaTime; // s0
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_4185081 & 1) == 0 )
  {
    this = (BattlePerformanceContinue__CoEndContinue_d__127_o *)sub_B2C35C(
                                                                  &Method_UnityEngine_GameObject_GetComponent_NGUIFader___,
                                                                  method);
    byte_4185081 = 1;
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
      || (this = (BattlePerformanceContinue__CoEndContinue_d__127_o *)perf->fields.fadeObject) == 0LL
      || (Component_srcLineSprite = (NGUIFader_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___),
          *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL),
          !Component_srcLineSprite) )
    {
      sub_B2C434(this, method);
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
  sub_B2C2F8(p__2__current, 0LL);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall BattlePerformanceContinue__CoEndContinue_d__127__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceContinue__CoEndContinue_d__127_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceContinue__CoEndContinue_d__127__System_Collections_IEnumerator_Reset(
        BattlePerformanceContinue__CoEndContinue_d__127_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattlePerformanceContinue__CoEndContinue_d__127_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceContinue__CoEndContinue_d__127__System_Collections_IEnumerator_get_Current(
        BattlePerformanceContinue__CoEndContinue_d__127_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceContinue__CoEndContinue_d__127__System_IDisposable_Dispose(
        BattlePerformanceContinue__CoEndContinue_d__127_o *this,
        const MethodInfo *method)
{
  ;
}