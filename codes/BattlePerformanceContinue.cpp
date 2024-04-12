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
  UnityEngine_Color___ctor_41463668(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v14);
  this->fields.spellBtnColor = v14;
  v15.fields.r = 0.38824;
  v13 = (struct UnityEngine_Color_o)0LL;
  v15.fields.g = 0.38824;
  v15.fields.b = 0.38824;
  UnityEngine_Color___ctor_41463668(v15, v10, v11, v12, (const MethodInfo *)&v13);
  this->fields.spellnowColor = v13;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceContinue__AttachStoneCountRefreshComponent(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v4; // x21

  if ( (byte_42B2594 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int___ctor__);
    sub_B52984(&System_Action_int__TypeInfo);
    sub_B52984(&Method_BattlePerformanceContinue__AttachStoneCountRefreshComponent_b__80_0__);
    byte_42B2594 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v4 = (System_Action_int__o *)sub_B52A54(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__AttachStoneCountRefreshComponent_b__80_0__,
    (const MethodInfo_26261F0 *)Method_System_Action_int___ctor__);
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

  if ( (byte_42B2587 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_4601/*"DEADLINE"*/);
    byte_42B2587 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL),
        BattlePerformanceContinue__closeContinueItem(this, v6),
        (Instance = (CommonUI_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B52A5C(Instance, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_4601/*"DEADLINE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__CheckContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  __int64 *v5; // x8

  if ( (byte_42B2592 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9802/*"OK"*/);
    sub_B52984(&StringLiteral_9358/*"NG"*/);
    byte_42B2592 = 1;
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
      v5 = &StringLiteral_9358/*"NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B52A5C(data, v3);
  }
  data = (BattleData_o *)this->fields.myFsm;
  this->fields.IsContinueItem = 1;
  if ( !data )
    goto LABEL_10;
  v5 = &StringLiteral_9802/*"OK"*/;
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

  if ( (byte_42B25BE & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue__CheckDefenceTargetBroken_b__124_0__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
    sub_B52984(&NGUIFader_OnFinished_TypeInfo);
    sub_B52984(&StringLiteral_5669/*"EVENT_FALSE"*/);
    byte_42B25BE = 1;
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
                                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
        white = UnityEngine_Color__get_white(0LL);
        r = white.fields.r;
        g = white.fields.g;
        b = white.fields.b;
        a = white.fields.a;
        v10 = (NGUIFader_OnFinished_o *)sub_B52A54(NGUIFader_OnFinished_TypeInfo);
        NGUIFader_OnFinished___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue__CheckDefenceTargetBroken_b__124_0__,
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
    sub_B52A5C(data, method);
  }
  data = (BattleData_o *)this->fields.myFsm;
  this->fields._isDefenceTargetBroken_k__BackingField = 0;
  if ( !data )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_5669/*"EVENT_FALSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__CloseGiveUp(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *giveUpWindow; // x0

  if ( (byte_42B258D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9355/*"NEXT"*/);
    byte_42B258D = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow
    || (UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0LL),
        (giveUpWindow = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B52A5C(giveUpWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)giveUpWindow, (System_String_o *)StringLiteral_9355/*"NEXT"*/, 0LL);
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

  if ( (byte_42B25C0 & 1) == 0 )
  {
    sub_B52984(&BattlePerformanceContinue__CoEndContinue_d__127_TypeInfo);
    byte_42B25C0 = 1;
  }
  v3 = sub_B52A54(BattlePerformanceContinue__CoEndContinue_d__127_TypeInfo);
  BattlePerformanceContinue__CoEndContinue_d__127___ctor(
    (BattlePerformanceContinue__CoEndContinue_d__127_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattlePerformanceContinue__EndContinue(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0

  if ( this->fields._isDefenceTargetBroken_k__BackingField )
  {
    v3 = BattlePerformanceContinue__CoEndContinue(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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

  if ( (byte_42B2588 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_2436/*"BATTLE_CONTINUE_NO_STONE"*/);
    sub_B52984(&StringLiteral_2425/*"BATTLE_CONTINUE_CHECK_SPELL"*/);
    sub_B52984(&StringLiteral_2426/*"BATTLE_CONTINUE_CHECK_STONE"*/);
    sub_B52984(&StringLiteral_2530/*"BATTLE_RETIRE_CHECKSTR"*/);
    byte_42B2588 = 1;
  }
  this->fields.perf = inperf;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    (System_String_array **)indata,
    (System_String_array **)inlogic,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)indata,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.logic = inlogic;
  sub_B52920(
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
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2530/*"BATTLE_RETIRE_CHECKSTR"*/, 0LL);
  if ( !checkGiveUpLabel )
    goto LABEL_25;
  UILabel__set_text(checkGiveUpLabel, (System_String_o *)window, 0LL);
  checkUseCommandSpell = this->fields.checkUseCommandSpell;
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2425/*"BATTLE_CONTINUE_CHECK_SPELL"*/, 0LL);
  if ( !checkUseCommandSpell )
    goto LABEL_25;
  UILabel__set_text(checkUseCommandSpell, (System_String_o *)window, 0LL);
  checkUseGem = this->fields.checkUseGem;
  window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2426/*"BATTLE_CONTINUE_CHECK_STONE"*/, 0LL);
  if ( !checkUseGem
    || (UILabel__set_text(checkUseGem, (System_String_o *)window, 0LL),
        checkUseBuyGem = this->fields.checkUseBuyGem,
        window = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2436/*"BATTLE_CONTINUE_NO_STONE"*/, 0LL),
        !checkUseBuyGem)
    || (UILabel__set_text(checkUseBuyGem, (System_String_o *)window, 0LL),
        (window = (UnityEngine_Component_o *)this->fields.continueWaveRestartWindow) == 0LL)
    || ((*(void (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&window->klass[1]._1.this_arg.bits)(
          window,
          window->klass[1]._1.element_class),
        (window = (UnityEngine_Component_o *)this->fields.continueWaveRestartWindow) == 0LL) )
  {
LABEL_25:
    sub_B52A5C(window, v24);
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
  _QWORD *monitor; // x8
  __int64 v4; // x8
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  System_String_o *v7; // x21
  System_String_o *v8; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v10; // x22
  int v11; // [xsp+3Ch] [xbp-24h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_42B25BF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BattlePerformanceContinue__OpenBrokenMessage_b__125_0__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_23837/*"{0}_{1}"*/);
    sub_B52984(&StringLiteral_2447/*"BATTLE_DIALOG_DEFENCE_TARGET_BROKEN"*/);
    this = (BattlePerformanceContinue_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B25BF = 1;
  }
  monitor = v2[2].monitor;
  if ( !monitor )
    goto LABEL_18;
  v4 = monitor[100];
  if ( !v4 )
    goto LABEL_18;
  v5 = (Il2CppObject *)StringLiteral_2447/*"BATTLE_DIALOG_DEFENCE_TARGET_BROKEN"*/;
  v11 = *(_DWORD *)(v4 + 32);
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v7 = System_String__Format_44563852((System_String_o *)StringLiteral_23837/*"{0}_{1}"*/, v5, v6, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( LocalizationManager__ContainsKey(v7, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = (Il2CppObject *)v7;
  }
  else if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
         && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)v5, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, v2, Method_BattlePerformanceContinue__OpenBrokenMessage_b__125_0__, 0LL);
  if ( !Instance )
LABEL_18:
    sub_B52A5C(this, method);
  CommonUI__OpenNotificationDialog(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v8,
    v10,
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
  void *ContinueItemWindow; // x0
  _DWORD *v4; // x20
  UILabel_o *ContinueCommandSpellNum; // x21
  System_String_o *v6; // x1
  UILabel_o *ContinueStoneNum; // x21
  Il2CppObject *v8; // x0
  UILabel_o *ContinueItemNumLabel; // x21
  Il2CppObject *v10; // x0
  UISprite_o *ContinueItemSpr; // x21
  int32_t ContinueItemImageId; // w22
  int v13; // w21
  bool v14; // cc
  UIWidget_o *v15; // x21
  int v16; // s0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 *v26; // x8
  System_Int32_array **v27; // x1
  UILabel_o *ContinueItemBtnLabel; // x21
  UILabel_o *deadLine; // x21
  System_String_o *v30; // x22
  int64_t ContinueDeadLine; // x0
  Il2CppObject *RestTime; // x0
  int v33; // w21
  UIWidget_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 *v41; // x8
  int v42; // s0
  System_Int32_array **v46; // x1
  UILabel_o *ContinueCommandSpellBtnLabel; // x21
  int v48; // w9
  UILabel_o *ContinueStoneBtnLabel; // x20
  __int64 *v50; // x8
  const MethodInfo *v51; // x1
  UILabel_o *ContinueRetireBtnLabel; // x20
  const MethodInfo *v53; // x4
  System_String_o **v54; // x8
  struct BattleData_o *data; // x8
  struct BattleData_o *v56; // x8
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x1
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v65; // x21
  int32_t ContinueItemNum; // [xsp+4h] [xbp-3Ch] BYREF
  int v67; // [xsp+8h] [xbp-38h] BYREF
  unsigned int OverwriteCommandSpellContinue; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B2593 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_BattlePerformanceContinue_endOpenContinueItem__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_9802/*"OK"*/);
    sub_B52984(&StringLiteral_2424/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    sub_B52984(&StringLiteral_2431/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/);
    sub_B52984(&StringLiteral_2423/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/);
    sub_B52984(&StringLiteral_2441/*"BATTLE_CONTINUE_USE_SPELL"*/);
    sub_B52984(&StringLiteral_9803/*"OK_CONTINUE_ITEM"*/);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    sub_B52984(&StringLiteral_2428/*"BATTLE_CONTINUE_ITEM_BTN"*/);
    sub_B52984(&StringLiteral_2432/*"BATTLE_CONTINUE_ITEM_SELECT"*/);
    sub_B52984(&StringLiteral_2433/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_2437/*"BATTLE_CONTINUE_RETIRE"*/);
    byte_42B2593 = 1;
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
  v67 = v4[42];
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
  ContinueItemWindow = System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v8, 0LL);
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
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ContinueItemNum);
  ContinueItemWindow = System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v10, 0LL);
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
  v13 = (int)ContinueItemWindow;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         this->fields.ContinueItemBtn,
                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v14 = v13 < 1;
  v15 = (UIWidget_o *)ContinueItemWindow;
  if ( v14 )
  {
    if ( !ContinueItemWindow )
      goto LABEL_82;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0LL);
    ContinueItemWindow = this->fields.ContinueItemBtn;
    if ( !ContinueItemWindow )
      goto LABEL_82;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_82;
    v26 = &StringLiteral_5538/*"END_PROC"*/;
  }
  else
  {
    *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_white(0LL);
    if ( !v15 )
      goto LABEL_82;
    UIWidget__set_color(v15, *(UnityEngine_Color_o *)&v16, 0LL);
    ContinueItemWindow = this->fields.ContinueItemBtn;
    if ( !ContinueItemWindow )
      goto LABEL_82;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_82;
    v26 = &StringLiteral_9803/*"OK_CONTINUE_ITEM"*/;
  }
  v27 = (System_Int32_array **)*v26;
  *((_QWORD *)ContinueItemWindow + 4) = *v26;
  sub_B52920((BattleServantConfConponent_o *)((char *)ContinueItemWindow + 32), v27, v20, v21, v22, v23, v24, v25);
  ContinueItemBtnLabel = this->fields.ContinueItemBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2428/*"BATTLE_CONTINUE_ITEM_BTN"*/, 0LL);
  if ( !ContinueItemBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueItemBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  deadLine = this->fields.deadLine;
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2431/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, 0LL);
  if ( !this->fields.data )
    goto LABEL_82;
  v30 = (System_String_o *)ContinueItemWindow;
  ContinueDeadLine = BattleData__GetContinueDeadLine(this->fields.data, 0LL);
  RestTime = (Il2CppObject *)LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
  ContinueItemWindow = System_String__Format(v30, RestTime, 0LL);
  if ( !deadLine )
    goto LABEL_82;
  UILabel__set_text(deadLine, (System_String_o *)ContinueItemWindow, 0LL);
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  v33 = OverwriteCommandSpellContinue;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v14 = v33 < 3;
  v34 = (UIWidget_o *)ContinueItemWindow;
  if ( v14 )
  {
    if ( !ContinueItemWindow )
      goto LABEL_82;
    UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0LL);
    ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
    if ( !ContinueItemWindow )
      goto LABEL_82;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_82;
    v41 = &StringLiteral_5538/*"END_PROC"*/;
  }
  else
  {
    *(UnityEngine_Color_o *)&v42 = UnityEngine_Color__get_white(0LL);
    if ( !v34 )
      goto LABEL_82;
    UIWidget__set_color(v34, *(UnityEngine_Color_o *)&v42, 0LL);
    ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
    if ( !ContinueItemWindow )
      goto LABEL_82;
    ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           (UnityEngine_GameObject_o *)ContinueItemWindow,
                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
    if ( !ContinueItemWindow )
      goto LABEL_82;
    v41 = &StringLiteral_9802/*"OK"*/;
  }
  v46 = (System_Int32_array **)*v41;
  *((_QWORD *)ContinueItemWindow + 4) = *v41;
  sub_B52920((BattleServantConfConponent_o *)((char *)ContinueItemWindow + 32), v46, v35, v36, v37, v38, v39, v40);
  ContinueCommandSpellBtnLabel = this->fields.ContinueCommandSpellBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2441/*"BATTLE_CONTINUE_USE_SPELL"*/, 0LL);
  if ( !ContinueCommandSpellBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueCommandSpellBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  v48 = v4[42];
  ContinueStoneBtnLabel = this->fields.ContinueStoneBtnLabel;
  if ( v48 < 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v50 = &StringLiteral_2423/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v50 = &StringLiteral_2424/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/;
  }
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)*v50, 0LL);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueStoneBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, v51);
  ContinueRetireBtnLabel = this->fields.ContinueRetireBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  ContinueItemWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2437/*"BATTLE_CONTINUE_RETIRE"*/, 0LL);
  if ( !ContinueRetireBtnLabel )
    goto LABEL_82;
  UILabel__set_text(ContinueRetireBtnLabel, (System_String_o *)ContinueItemWindow, 0LL);
  v54 = (System_String_o **)((int)OverwriteCommandSpellContinue >= 3 ? &StringLiteral_2432/*"BATTLE_CONTINUE_ITEM_SELECT"*/ : &StringLiteral_2433/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/);
  BattlePerformanceContinue__SetContinueMessage(this, this->fields.ContinueLabel, *v54, 0x80000000, v53);
  data = this->fields.data;
  if ( !data )
    goto LABEL_82;
  ContinueItemWindow = data->fields.quest_ent;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  ContinueItemWindow = (void *)QuestEntity__HasFlag((QuestEntity_o *)ContinueItemWindow, 0x400000000LL, 0LL);
  if ( ((unsigned __int8)ContinueItemWindow & 1) != 0 )
    goto LABEL_74;
  v56 = this->fields.data;
  if ( !v56 || (ContinueItemWindow = v56->fields.quest_ent) == 0LL )
LABEL_82:
    sub_B52A5C(ContinueItemWindow, method);
  if ( !QuestEntity__HasFlag((QuestEntity_o *)ContinueItemWindow, 0x100000000LL, 0LL) )
    goto LABEL_80;
LABEL_74:
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !ContinueItemWindow )
    goto LABEL_82;
  UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellBtnColor, 0LL);
  ContinueItemWindow = this->fields.ContinueCommandSpellBtn;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  ContinueItemWindow = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)ContinueItemWindow,
                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SendEventToFsm___);
  if ( !ContinueItemWindow )
    goto LABEL_82;
  v63 = (System_Int32_array **)StringLiteral_5538/*"END_PROC"*/;
  *((_QWORD *)ContinueItemWindow + 4) = StringLiteral_5538/*"END_PROC"*/;
  sub_B52920((BattleServantConfConponent_o *)((char *)ContinueItemWindow + 32), v63, v57, v58, v59, v60, v61, v62);
  ContinueItemWindow = this->fields.ContinueCommandSpellNum;
  if ( !ContinueItemWindow )
    goto LABEL_82;
  UIWidget__set_color((UIWidget_o *)ContinueItemWindow, this->fields.spellnowColor, 0LL);
LABEL_80:
  window = this->fields.window;
  v65 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v65,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endOpenContinueItem__,
    0LL);
  if ( !window )
    goto LABEL_82;
  ((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
    window,
    v65,
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

  if ( (byte_42B25C3 & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue__OpenContinueWaveRestart_b__130_0__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    byte_42B25C3 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__OpenContinueWaveRestart_b__130_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_B52A5C(v5, v6);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueWaveRestartWindow->klass->vtable._10_Open.method)(
    continueWaveRestartWindow,
    v4,
    continueWaveRestartWindow->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceContinue__OpenGiveUp(BattlePerformanceContinue_o *this, const MethodInfo *method)
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
  LocalizationManager_c *v12; // x0
  bool HasFlag; // w0
  __int64 *v14; // x8
  int32_t ContinueItemNum; // [xsp+Ch] [xbp-34h] BYREF
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

  if ( (byte_42B258C & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_2530/*"BATTLE_RETIRE_CHECKSTR"*/);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    sub_B52984(&StringLiteral_2531/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/);
    byte_42B258C = 1;
  }
  giveUpWindow = this->fields.giveUpWindow;
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0LL);
  if ( !giveUpWindow )
    goto LABEL_61;
  v16.fields.y = 72.0;
  v16.fields.x = 0.0;
  v16.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v16, 0LL);
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
  v17.fields.y = 77.0;
  v17.fields.x = 0.0;
  v17.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v17, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)giveUpWindow,
                                               0LL);
  if ( !giveUpWindow )
    goto LABEL_61;
  v18.fields.y = 6.0;
  v18.fields.x = 0.0;
  v18.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v18, 0LL);
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
  v19.fields.z = 0.0;
  v19.fields.x = 193.0;
  v19.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v19, 0LL);
  giveUpWindow = this->fields.giveUpCancelBtn;
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(giveUpWindow, 0LL);
  if ( !giveUpWindow )
    goto LABEL_61;
  v20.fields.z = 0.0;
  v20.fields.y = -72.0;
  v20.fields.x = -193.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v20, 0LL);
  giveUpWindow = this->fields.giveUpContinueItemRoot;
  if ( !giveUpWindow )
    goto LABEL_61;
  UnityEngine_GameObject__SetActive(giveUpWindow, 0, 0LL);
  giveUpWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)giveUpWindow,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  data = this->fields.data;
  if ( !data )
    goto LABEL_61;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent || !giveUpWindow )
    goto LABEL_61;
  giveUpWindow = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)giveUpWindow,
                                               battle_ent->fields.questId,
                                               (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
          v21.fields.y = 66.0;
          v21.fields.x = 0.0;
          v21.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v21, 0LL);
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
                v22.fields.y = 97.0;
                v22.fields.x = 0.0;
                v22.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v22, 0LL);
                giveUpWindow = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
                if ( giveUpWindow )
                {
                  giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)giveUpWindow,
                                                               0LL);
                  if ( giveUpWindow )
                  {
                    v23.fields.y = 26.0;
                    v23.fields.x = 0.0;
                    v23.fields.z = 0.0;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v23, 0LL);
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
                            v24.fields.z = 0.0;
                            v24.fields.x = 193.0;
                            v24.fields.y = -92.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)giveUpWindow, v24, 0LL);
                            giveUpWindow = this->fields.giveUpCancelBtn;
                            if ( giveUpWindow )
                            {
                              giveUpWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                           giveUpWindow,
                                                                           0LL);
                              if ( giveUpWindow )
                              {
                                v25.fields.z = 0.0;
                                v25.fields.x = -193.0;
                                v25.fields.y = -92.0;
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)giveUpWindow,
                                  v25,
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
                                    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ContinueItemNum);
                                    giveUpWindow = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                 (System_String_o *)StringLiteral_23682/*"{0:#,0}"*/,
                                                                                 v8,
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
                                        v12 = LocalizationManager_TypeInfo;
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
      sub_B52A5C(giveUpWindow, method);
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
    v12 = LocalizationManager_TypeInfo;
LABEL_56:
    j_il2cpp_runtime_class_init_0(v12);
LABEL_57:
    v14 = &StringLiteral_2530/*"BATTLE_RETIRE_CHECKSTR"*/;
    goto LABEL_58;
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = &StringLiteral_2531/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/;
LABEL_58:
  giveUpWindow = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v14, 0LL);
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
    sub_B52A5C(ContinueItemWindow, method);
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
  struct BattleData_o *data; // x8
  struct BattleDefenceTargetData_o *defenceTargetData; // x8
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  System_String_o *v19; // x21
  System_String_o *v20; // x22
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  int32_t uiId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B25C1 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_2427/*"BATTLE_CONTINUE_DEFENCE_TARGET_HEAL"*/);
    sub_B52984(&StringLiteral_23837/*"{0}_{1}"*/);
    sub_B52984(&StringLiteral_2435/*"BATTLE_CONTINUE_NOT_ENOUGH_STONE"*/);
    byte_42B25C1 = 1;
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
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2435/*"BATTLE_CONTINUE_NOT_ENOUGH_STONE"*/, 0LL);
    v13 = System_String__Concat_44568316(mText, v12, 0LL);
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
    sub_B52A5C(SelfUserGame, v10);
  v16 = (Il2CppObject *)StringLiteral_2427/*"BATTLE_CONTINUE_DEFENCE_TARGET_HEAL"*/;
  uiId = defenceTargetData->fields.uiId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &uiId);
  v18 = System_String__Format_44563852((System_String_o *)StringLiteral_23837/*"{0}_{1}"*/, v16, v17, 0LL);
  v19 = label->fields.mText;
  v20 = v18;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( LocalizationManager__ContainsKey(v20, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = (Il2CppObject *)v20;
  }
  else if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
         && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)v16, 0LL);
  v22 = System_String__Concat_44568316(v19, v21, 0LL);
  UILabel__set_text(label, v22, 0LL);
}


void __fastcall BattlePerformanceContinue__SkipCommandSpellRequest(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_42B25BD & 1) == 0 )
  {
    sub_B52984(&BattleData_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_B52984(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_3387/*"CONNECT_OK"*/);
    sub_B52984(&StringLiteral_6887/*"GAME_OVER_COMMAND_SPELL_ID"*/);
    byte_42B25BD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  Instance = (void *)ConstantMaster__getValue((System_String_o *)StringLiteral_6887/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)Instance,
               (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
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
    sub_B52A5C(Instance, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3387/*"CONNECT_OK"*/, 0LL);
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
    sub_B52A5C(0LL, v4);
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

  if ( (byte_42B258B & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue_showConf__);
    sub_B52984(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_12431/*"START_CONTINUE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B258B = 1;
  }
  OverwriteCommandSpellContinue = 0;
  SelfUserGame = (BattleViewItemlistComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_21;
  itemWindow = this->fields.itemWindow;
  v7 = (UserGameEntity_o *)SelfUserGame;
  DropItems = BattleData__getDropItems(this->fields.data, 0LL);
  v9 = (BattleDropItemComponent_ClickDelegate_o *)sub_B52A54(BattleDropItemComponent_ClickDelegate_TypeInfo);
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
    sub_B52A5C(SelfUserGame, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_12431/*"START_CONTINUE"*/, 0LL);
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

  if ( (byte_42B25C2 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BattlePerformanceContinue__StartContinueWaveRestart_b__129_0__);
    sub_B52984(&Method_BattlePerformanceContinue__StartContinueWaveRestart_b__129_1__);
    sub_B52984(&StringLiteral_12432/*"START_CONTINUE_WAVE_RESTART"*/);
    byte_42B25C2 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueWaveRestart_b__129_0__,
    0LL);
  v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__StartContinueWaveRestart_b__129_1__,
    0LL);
  if ( !continueWaveRestartWindow
    || (BattleWindowContinueWaveRestartComponent__SetWindow(continueWaveRestartWindow, v4, v5, 0LL),
        (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_B52A5C(myFsm, v7);
  }
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12432/*"START_CONTINUE_WAVE_RESTART"*/, 0LL);
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

  if ( (byte_42B2586 & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue_CallbackConfirmDialog__);
    sub_B52984(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_2434/*"BATTLE_CONTINUE_ITEM_USE_CHECK"*/);
    sub_B52984(&StringLiteral_2430/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/);
    sub_B52984(&StringLiteral_2431/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/);
    sub_B52984(&StringLiteral_2429/*"BATTLE_CONTINUE_ITEM_END_TIME"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2586 = 1;
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
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2430/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, 0LL);
    v5 = (BattleData_o *)System_String__Format(v10, v9, 0LL);
    if ( !giveUpContinueItemLabel )
      goto LABEL_27;
    UILabel__set_text(giveUpContinueItemLabel, (System_String_o *)v5, 0LL);
    deadLine = this->fields.deadLine;
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2431/*"BATTLE_CONTINUE_ITEM_GIVEUP_DEADLINE"*/, 0LL);
    v5 = (BattleData_o *)System_String__Format(v12, v9, 0LL);
    if ( !deadLine )
      goto LABEL_27;
    UILabel__set_text(deadLine, (System_String_o *)v5, 0LL);
    useCheckContinueItemLabel = this->fields.useCheckContinueItemLabel;
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2434/*"BATTLE_CONTINUE_ITEM_USE_CHECK"*/, 0LL);
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2429/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
      v18 = (ErrorDialog_ClickDelegate_o *)sub_B52A54(ErrorDialog_ClickDelegate_TypeInfo);
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
      sub_B52A5C(v5, v4);
    }
  }
}


void __fastcall BattlePerformanceContinue__WaveRestartNg(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  struct BattleWindowContinueWaveRestartComponent_o *continueWaveRestartWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42B25C5 & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue__WaveRestartNg_b__132_0__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    byte_42B25C5 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__WaveRestartNg_b__132_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_B52A5C(v5, v6);
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

  if ( (byte_42B25C4 & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue__WaveRestartOk_b__131_0__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    byte_42B25C4 = 1;
  }
  continueWaveRestartWindow = this->fields.continueWaveRestartWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue__WaveRestartOk_b__131_0__,
    0LL);
  if ( !continueWaveRestartWindow )
    sub_B52A5C(v5, v6);
  ((void (__fastcall *)(struct BattleWindowContinueWaveRestartComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))continueWaveRestartWindow->klass->vtable._12_Close.method)(
    continueWaveRestartWindow,
    v4,
    continueWaveRestartWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceContinue___AttachStoneCountRefreshComponent_b__80_0(
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

  if ( (byte_42B25C6 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_2425/*"BATTLE_CONTINUE_CHECK_SPELL"*/);
    sub_B52984(&StringLiteral_2424/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
    sub_B52984(&StringLiteral_2426/*"BATTLE_CONTINUE_CHECK_STONE"*/);
    sub_B52984(&StringLiteral_2423/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    sub_B52984(&StringLiteral_12751/*"Select_NoStone"*/);
    sub_B52984(&StringLiteral_2432/*"BATTLE_CONTINUE_ITEM_SELECT"*/);
    sub_B52984(&StringLiteral_2433/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/);
    sub_B52984(&StringLiteral_12752/*"Select_Stone"*/);
    byte_42B25C6 = 1;
  }
  v18 = stoneCount;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  gem_now = System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v5, 0LL);
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
    gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2424/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, 0LL);
    if ( ContinueStoneBtnLabel )
    {
      UILabel__set_text(ContinueStoneBtnLabel, gem_now, 0LL);
      stoneBtnLabel = this->fields.stoneBtnLabel;
      gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2424/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/, 0LL);
      if ( stoneBtnLabel )
      {
        UILabel__set_text(stoneBtnLabel, gem_now, 0LL);
        gem_now = (System_String_o *)this->fields.myFsm;
        if ( gem_now )
        {
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)gem_now, 0LL);
          if ( !System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_12751/*"Select_NoStone"*/, 0LL) )
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
                PlayMakerFSM__SetState((PlayMakerFSM_o *)gem_now, (System_String_o *)StringLiteral_12752/*"Select_Stone"*/, 0LL);
                goto LABEL_24;
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_B52A5C(gem_now, v7);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2423/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, 0LL);
  if ( !ContinueStoneBtnLabel )
    goto LABEL_28;
  UILabel__set_text(ContinueStoneBtnLabel, gem_now, 0LL);
  v12 = this->fields.stoneBtnLabel;
  gem_now = LocalizationManager__Get((System_String_o *)StringLiteral_2423/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/, 0LL);
  if ( !v12 )
    goto LABEL_28;
  UILabel__set_text(v12, gem_now, 0LL);
LABEL_24:
  gem_now = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.data )
    goto LABEL_28;
  v13 = BattleData__CheckCurrentTemporaryCommandSpell(this->fields.data, (UserGameEntity_o *)gem_now, 0LL);
  v15 = (System_String_o **)&StringLiteral_2432/*"BATTLE_CONTINUE_ITEM_SELECT"*/;
  if ( v13 <= 2 )
    v15 = (System_String_o **)&StringLiteral_2433/*"BATTLE_CONTINUE_ITEM_SELECT_NOT_COMMAND"*/;
  BattlePerformanceContinue__SetContinueMessage(this, this->fields.ContinueLabel, *v15, stoneCount, v14);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseCommandSpell,
    (System_String_o *)StringLiteral_2425/*"BATTLE_CONTINUE_CHECK_SPELL"*/,
    stoneCount,
    v16);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseGem,
    (System_String_o *)StringLiteral_2426/*"BATTLE_CONTINUE_CHECK_STONE"*/,
    stoneCount,
    v17);
}


void __fastcall BattlePerformanceContinue___CheckDefenceTargetBroken_b__124_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B25C7 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5785/*"EVENT_TRUE"*/);
    byte_42B25C7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5785/*"EVENT_TRUE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenBrokenMessage_b__125_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B25C8 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5520/*"END_CLOSE"*/);
    byte_42B25C8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5520/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___OpenContinueWaveRestart_b__130_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B25CB & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5534/*"END_OPEN"*/);
    byte_42B25CB = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5534/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueWaveRestart_b__129_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B25C9 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9802/*"OK"*/);
    byte_42B25C9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9802/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___StartContinueWaveRestart_b__129_1(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B25CA & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9358/*"NG"*/);
    byte_42B25CA = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9358/*"NG"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___WaveRestartNg_b__132_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_42B25CD & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9358/*"NG"*/);
    byte_42B25CD = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B52A5C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9358/*"NG"*/, 0LL);
}


void __fastcall BattlePerformanceContinue___WaveRestartOk_b__131_0(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_42B25CC & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9802/*"OK"*/);
    byte_42B25CC = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B52A5C(0LL, method);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9802/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__atlasLoadEnd(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleViewItemlistComponent_o *itemWindow; // x20
  BattleDropItem_array *DropItems; // x21
  BattleDropItemComponent_ClickDelegate_o *v6; // x22

  if ( (byte_42B258A & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue_showConf__);
    sub_B52984(&BattleDropItemComponent_ClickDelegate_TypeInfo);
    byte_42B258A = 1;
  }
  data = this->fields.data;
  if ( !data
    || (itemWindow = this->fields.itemWindow,
        DropItems = BattleData__getDropItems(data, 0LL),
        v6 = (BattleDropItemComponent_ClickDelegate_o *)sub_B52A54(BattleDropItemComponent_ClickDelegate_TypeInfo),
        BattleDropItemComponent_ClickDelegate___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_showConf__,
          0LL),
        !itemWindow) )
  {
    sub_B52A5C(data, method);
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
  if ( (byte_42B259C & 1) == 0 )
  {
    sub_B52984(&BattleData_TypeInfo);
    sub_B52984(&StringLiteral_3386/*"CONNECT_NG"*/);
    sub_B52984(&StringLiteral_21388/*"ok"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    this = (BattlePerformanceContinue_o *)sub_B52984(&StringLiteral_3387/*"CONNECT_OK"*/);
    byte_42B259C = 1;
  }
  if ( !ret )
    goto LABEL_15;
  if ( System_String__Equals_44555656(ret, (System_String_o *)StringLiteral_21388/*"ok"*/, 0LL) )
  {
    v4->fields.continueRetryFlg = 0;
    if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__setContinueBattleFlg(0, 1, 0LL);
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    if ( this )
    {
      v5 = &StringLiteral_3387/*"CONNECT_OK"*/;
LABEL_13:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
      return;
    }
    goto LABEL_15;
  }
  if ( System_String__Equals_44555656(ret, (System_String_o *)StringLiteral_21239/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      v5 = &StringLiteral_3386/*"CONNECT_NG"*/;
      goto LABEL_13;
    }
LABEL_15:
    sub_B52A5C(this, ret);
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
  if ( (byte_42B25B6 & 1) == 0 )
  {
    sub_B52984(&BattleData_TypeInfo);
    sub_B52984(&StringLiteral_3386/*"CONNECT_NG"*/);
    sub_B52984(&StringLiteral_21388/*"ok"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    this = (BattlePerformanceContinue_o *)sub_B52984(&StringLiteral_3387/*"CONNECT_OK"*/);
    byte_42B25B6 = 1;
  }
  if ( !ret )
    goto LABEL_18;
  if ( System_String__Equals_44555656(ret, (System_String_o *)StringLiteral_21388/*"ok"*/, 0LL) )
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
          v5 = &StringLiteral_3387/*"CONNECT_OK"*/;
LABEL_16:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
          return;
        }
      }
    }
    goto LABEL_18;
  }
  if ( System_String__Equals_44555656(ret, (System_String_o *)StringLiteral_21239/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.data;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      BattleData__UpdateContinueItemInfo((BattleData_o *)this, 0LL);
      this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
      if ( this )
      {
        v5 = &StringLiteral_3386/*"CONNECT_NG"*/;
        goto LABEL_16;
      }
    }
LABEL_18:
    sub_B52A5C(this, ret);
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
  if ( (byte_42B25A9 & 1) == 0 )
  {
    sub_B52984(&BattleData_TypeInfo);
    sub_B52984(&StringLiteral_3386/*"CONNECT_NG"*/);
    sub_B52984(&StringLiteral_21388/*"ok"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    this = (BattlePerformanceContinue_o *)sub_B52984(&StringLiteral_3387/*"CONNECT_OK"*/);
    byte_42B25A9 = 1;
  }
  if ( !ret )
    goto LABEL_16;
  if ( System_String__Equals_44555656(ret, (System_String_o *)StringLiteral_21388/*"ok"*/, 0LL) )
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
        v5 = &StringLiteral_3387/*"CONNECT_OK"*/;
LABEL_14:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
        return;
      }
    }
    goto LABEL_16;
  }
  if ( System_String__Equals_44555656(ret, (System_String_o *)StringLiteral_21239/*"ng"*/, 0LL) )
  {
    this = (BattlePerformanceContinue_o *)v4->fields.myFsm;
    v4->fields.continueRetryFlg = 1;
    if ( this )
    {
      v5 = &StringLiteral_3386/*"CONNECT_NG"*/;
      goto LABEL_14;
    }
LABEL_16:
    sub_B52A5C(this, ret);
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
    sub_B52A5C(0LL, ret);
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

  if ( (byte_42B25B1 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_3386/*"CONNECT_NG"*/);
    sub_B52984(&StringLiteral_3387/*"CONNECT_OK"*/);
    byte_42B25B1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  BattlePerformanceContinue__closeNoStone(this, v7);
  if ( (unsigned int)(result - 1) > 1 )
  {
    Instance = (CommonUI_o *)this->fields.myFsm;
    if ( Instance )
    {
      v9 = &StringLiteral_3386/*"CONNECT_NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_B52A5C(Instance, v6);
  }
  BattlePerformanceContinue__refreshStoneNow(this, 0LL, v8);
  Instance = (CommonUI_o *)this->fields.myFsm;
  if ( !Instance )
    goto LABEL_10;
  v9 = &StringLiteral_3387/*"CONNECT_OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v9, 0LL);
}


void __fastcall BattlePerformanceContinue__checkCountStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  int *SelfUserGame; // x0
  __int64 v4; // x1

  if ( (byte_42B25BB & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9355/*"NEXT"*/);
    byte_42B25BB = 1;
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
    sub_B52A5C(SelfUserGame, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)SelfUserGame, (System_String_o *)StringLiteral_9355/*"NEXT"*/, 0LL);
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

  if ( (byte_42B25BC & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue_CallbackConfirmDialog__);
    sub_B52984(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_9355/*"NEXT"*/);
    sub_B52984(&StringLiteral_2429/*"BATTLE_CONTINUE_ITEM_END_TIME"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B25BC = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2429/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
    v7 = (ErrorDialog_ClickDelegate_o *)sub_B52A54(ErrorDialog_ClickDelegate_TypeInfo);
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
    sub_B52A5C(data, method);
  }
  data = (BattleData_o *)this->fields.myFsm;
  if ( !data )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_9355/*"NEXT"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__checkSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  __int64 *v5; // x9

  if ( (byte_42B2596 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9802/*"OK"*/);
    sub_B52984(&StringLiteral_9358/*"NG"*/);
    byte_42B2596 = 1;
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
    sub_B52A5C(SelfUserGame, v4);
  }
  if ( (int)SelfUserGame >= 3 )
    v5 = &StringLiteral_9802/*"OK"*/;
  else
    v5 = &StringLiteral_9358/*"NG"*/;
  PlayMakerFSM__SendEvent(this->fields.myFsm, (System_String_o *)*v5, 0LL);
}


void __fastcall BattlePerformanceContinue__checkStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  const MethodInfo *v4; // x2
  PlayMakerFSM_o *myFsm; // x0
  __int64 v6; // x1
  __int64 *v7; // x8

  if ( (byte_42B25A3 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9802/*"OK"*/);
    sub_B52984(&StringLiteral_9358/*"NG"*/);
    byte_42B25A3 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  BattlePerformanceContinue__refreshStoneNow(this, SelfUserGame, v4);
  if ( !SelfUserGame || (myFsm = this->fields.myFsm) == 0LL )
    sub_B52A5C(myFsm, v6);
  if ( SelfUserGame->fields.stone < 1 )
    v7 = &StringLiteral_9358/*"NG"*/;
  else
    v7 = &StringLiteral_9802/*"OK"*/;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v7, 0LL);
}


void __fastcall BattlePerformanceContinue__closeContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0
  struct BattleWindowComponent_o *window; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_42B25B3 & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue_endCloseContinueItem__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    byte_42B25B3 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseContinueItem__,
          0LL),
        !window) )
  {
    sub_B52A5C(itemWindow, method);
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

  if ( (byte_42B25AE & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue_endCloseNoStone__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    byte_42B25AE = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseNoStone__,
          0LL),
        !window) )
  {
    sub_B52A5C(itemWindow, method);
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

  if ( (byte_42B2599 & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue_endCloseSpell__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    byte_42B2599 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseSpell__,
          0LL),
        !window) )
  {
    sub_B52A5C(itemWindow, method);
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

  if ( (byte_42B25A6 & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue_endCloseStone__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    byte_42B25A6 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__setHide(itemWindow, 0LL),
        window = this->fields.window,
        v5 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v5,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endCloseStone__,
          0LL),
        !window) )
  {
    sub_B52A5C(itemWindow, method);
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
    sub_B52A5C(useCheckWindow, method);
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

  if ( (byte_42B25B5 & 1) == 0 )
  {
    sub_B52984(&BattleData_TypeInfo);
    sub_B52984(&Method_BattlePerformanceContinue_callBackContinueItem__);
    sub_B52984(&Method_NetworkManager_getRequest_BattleUseContinueItemRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_42B25B5 = 1;
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
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
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
                           (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_BattleUseContinueItemRequest___);
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
    sub_B52A5C(data, v3);
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

  if ( (byte_42B259B & 1) == 0 )
  {
    sub_B52984(&BattleData_TypeInfo);
    sub_B52984(&Method_BattlePerformanceContinue_callBackCommandSpell__);
    sub_B52984(&Method_BattlePerformanceContinue_callbackContinueCommandSpell__);
    sub_B52984(&Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&StringLiteral_6887/*"GAME_OVER_COMMAND_SPELL_ID"*/);
    byte_42B259B = 1;
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
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
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
                             (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
    if ( data )
    {
      RequestBase__beginRetryRequest((RequestBase_o *)data, 0, 0LL);
      return;
    }
LABEL_24:
    sub_B52A5C(data, v3);
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
                           (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_BattleCommandSpellRequest___);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_24;
  continueCount = v9->fields.continueCount;
  battle_ent = v9->fields.battle_ent;
  v12 = (BattleCommandSpellRequest_o *)data;
  data = (BattleData_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_6887/*"GAME_OVER_COMMAND_SPELL_ID"*/, 0LL);
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

  if ( (byte_42B25A8 & 1) == 0 )
  {
    sub_B52984(&BattleData_TypeInfo);
    sub_B52984(&Method_BattlePerformanceContinue_callBackStone__);
    sub_B52984(&Method_NetworkManager_getRequest_BattleUseContinueRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_42B25A8 = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setContinueBattleFlg(1, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  BattleData__procPlayerContinue(data, this->fields.isProgress, 0LL);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
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
                           (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_BattleUseContinueRequest___);
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
    sub_B52A5C(data, v3);
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

  if ( (byte_42B25B4 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5520/*"END_CLOSE"*/);
    byte_42B25B4 = 1;
  }
  ContinueItemWindow = this->fields.ContinueItemWindow;
  if ( !ContinueItemWindow
    || (UnityEngine_GameObject__SetActive(ContinueItemWindow, 0, 0LL),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)ContinueItemWindow, 0LL),
        (ContinueItemWindow = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B52A5C(ContinueItemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)ContinueItemWindow, (System_String_o *)StringLiteral_5520/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *nostoneObject; // x0

  if ( (byte_42B25AF & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5520/*"END_CLOSE"*/);
    byte_42B25AF = 1;
  }
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject
    || (UnityEngine_GameObject__SetActive(nostoneObject, 0, 0LL),
        (nostoneObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B52A5C(nostoneObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)nostoneObject, (System_String_o *)StringLiteral_5520/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandspellObject; // x0

  if ( (byte_42B259A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5520/*"END_CLOSE"*/);
    byte_42B259A = 1;
  }
  commandspellObject = this->fields.commandspellObject;
  if ( !commandspellObject
    || (UnityEngine_GameObject__SetActive(commandspellObject, 0, 0LL),
        (commandspellObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)commandspellObject, 0LL),
        (commandspellObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B52A5C(commandspellObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)commandspellObject, (System_String_o *)StringLiteral_5520/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endCloseStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *stoneObject; // x0

  if ( (byte_42B25A7 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5520/*"END_CLOSE"*/);
    byte_42B25A7 = 1;
  }
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 0, 0LL),
        (stoneObject = (UnityEngine_GameObject_o *)this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__ClearObj((BattleViewItemlistComponent_o *)stoneObject, 0LL),
        (stoneObject = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B52A5C(stoneObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)stoneObject, (System_String_o *)StringLiteral_5520/*"END_CLOSE"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endDialog(
        BattlePerformanceContinue_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42B2591 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_9358/*"NG"*/);
    byte_42B2591 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.logic) == 0LL) )
  {
    sub_B52A5C(Instance, v5);
  }
  BattleLogic__sendFsmEvent((BattleLogic_o *)Instance, (System_String_o *)StringLiteral_9358/*"NG"*/, 0LL);
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
  Il2CppObject *v9; // x0
  struct BattlePerformance_o *v10; // x8
  UnityEngine_GameObject_o *Object; // x23
  Il2CppObject *v12; // x0
  System_String_o *v13; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  UnityEngine_Object_o *v15; // x21
  SimpleAnimation_o *v16; // x0
  System_String_o *v17; // x1
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Animation_o *v19; // x0
  System_String_o *v20; // x1
  Il2CppObject *v21; // x0
  Il2CppObject *v22; // x0
  int32_t v23; // [xsp+8h] [xbp-38h] BYREF
  int v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B25A1 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    sub_B52984(&StringLiteral_18308/*"ef_commandspell_{0:D2}"*/);
    sub_B52984(&StringLiteral_18309/*"ef_commandspell{0:D4}"*/);
    byte_42B25A1 = 1;
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
  v24 = v7;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  perf = (BattlePerformance_o *)System_String__Format((System_String_o *)StringLiteral_18309/*"ef_commandspell{0:D4}"*/, v9, 0LL);
  if ( !aData )
    goto LABEL_31;
  perf = (BattlePerformance_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  aData,
                                  (System_String_o *)perf,
                                  (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  v10 = this->fields.perf;
  if ( !v10 )
    goto LABEL_31;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             (UnityEngine_GameObject_o *)perf,
             v10->fields.popupTr,
             0LL,
             0LL);
  v23 = v8;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  perf = (BattlePerformance_o *)System_String__Format((System_String_o *)StringLiteral_18308/*"ef_commandspell_{0:D2}"*/, v12, 0LL);
  if ( !Object )
    goto LABEL_31;
  v13 = (System_String_o *)perf;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      Object,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v15 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  Object,
                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    if ( SimpleAnimation__get_Item((SimpleAnimation_o *)Component_srcLineSprite, v13, 0LL) )
    {
      v16 = (SimpleAnimation_o *)Component_srcLineSprite;
      v17 = v13;
    }
    else
    {
      v24 = 3;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
      v17 = System_String__Format((System_String_o *)StringLiteral_18308/*"ef_commandspell_{0:D2}"*/, v21, 0LL);
      v16 = (SimpleAnimation_o *)Component_srcLineSprite;
    }
    SimpleAnimation__Play_16625408(v16, v17, 0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
    if ( ((unsigned __int8)perf & 1) != 0 )
    {
      if ( !v15 )
        goto LABEL_31;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v15, v13, 0LL);
      if ( UnityEngine_TrackedReference__op_Inequality(0LL, Item, 0LL) )
      {
        v19 = (UnityEngine_Animation_o *)v15;
        v20 = v13;
      }
      else
      {
        v24 = 3;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
        v20 = System_String__Format((System_String_o *)StringLiteral_18308/*"ef_commandspell_{0:D2}"*/, v22, 0LL);
        v19 = (UnityEngine_Animation_o *)v15;
      }
      UnityEngine_Animation__Play_51067744(v19, v20, 0LL);
    }
  }
  perf = (BattlePerformance_o *)this->fields.logic;
  if ( !perf
    || (BattleLogic__setTimeAcceleration((BattleLogic_o *)perf, 0, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__playMasterCommandSpellCutIn(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.myFsm) == 0LL) )
  {
LABEL_31:
    sub_B52A5C(perf, aData);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_42B2595 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5534/*"END_OPEN"*/);
    byte_42B2595 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__ChangeLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B52A5C(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5534/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_42B25AD & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5534/*"END_OPEN"*/);
    byte_42B25AD = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B52A5C(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5534/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_42B2598 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5534/*"END_OPEN"*/);
    byte_42B2598 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B52A5C(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5534/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_42B25A5 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5534/*"END_OPEN"*/);
    byte_42B25A5 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__DefaultLayoutScrollView(itemWindow, 0LL),
        (itemWindow = this->fields.itemWindow) == 0LL)
    || (BattleViewItemlistComponent__setShow(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B52A5C(itemWindow, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5534/*"END_OPEN"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endOpenUsecheck(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B25BA & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5534/*"END_OPEN"*/);
    byte_42B25BA = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5534/*"END_OPEN"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceContinue__endRetryDialog(
        BattlePerformanceContinue_o *this,
        bool flg,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  if ( (byte_42B259E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_9802/*"OK"*/);
    byte_42B259E = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    sub_B52A5C(0LL, flg);
  BattleLogic__sendFsmEvent(logic, (System_String_o *)StringLiteral_9802/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__endSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  System_String_o *v6; // x20
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B25A2 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_4209/*"CommandSpellEffect/ef_commandspell{0:D4}"*/);
    byte_42B25A2 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_9;
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0LL);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SpellImageIdBattle);
  v6 = System_String__Format((System_String_o *)StringLiteral_4209/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v5, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v6, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.logic;
  if ( !SelfUserGame )
LABEL_9:
    sub_B52A5C(SelfUserGame, v4);
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

  if ( (byte_42B25AC & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue_endOpenNoStone__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B52984(&StringLiteral_2436/*"BATTLE_CONTINUE_NO_STONE"*/);
    byte_42B25AC = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseBuyGem,
    (System_String_o *)StringLiteral_2436/*"BATTLE_CONTINUE_NO_STONE"*/,
    0x80000000,
    v3);
  nostoneObject = this->fields.nostoneObject;
  if ( !nostoneObject
    || (UnityEngine_GameObject__SetActive(nostoneObject, 1, 0LL),
        window = this->fields.window,
        v7 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenNoStone__,
          0LL),
        !window) )
  {
    sub_B52A5C(nostoneObject, v4);
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

  if ( (byte_42B259D & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue_endRetryDialog__);
    sub_B52984(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_24095/*"通信に失敗したので再度通信を行います"*/);
    sub_B52984(&StringLiteral_24096/*"通信失敗"*/);
    byte_42B259D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (NotificationDialog_ClickDelegate_o *)sub_B52A54(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endRetryDialog__,
    0LL);
  if ( !Instance )
    sub_B52A5C(v5, v6);
  CommonUI__OpenNotificationDialog_18160348(
    Instance,
    (System_String_o *)StringLiteral_24096/*"通信失敗"*/,
    (System_String_o *)StringLiteral_24095/*"通信に失敗したので再度通信を行います"*/,
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

  if ( (byte_42B2597 & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue_endOpenSpell__);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_SendEventToFsm___);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_2425/*"BATTLE_CONTINUE_CHECK_SPELL"*/);
    sub_B52984(&StringLiteral_2424/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/);
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    sub_B52984(&StringLiteral_2423/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/);
    byte_42B2597 = 1;
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
    v6 = &StringLiteral_2423/*"BATTLE_CONTINUE_BUTTON_BUYSTONE"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_2424/*"BATTLE_CONTINUE_BUTTON_USESTONE"*/;
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
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_SendEventToFsm___);
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
    v18 = (System_Int32_array **)StringLiteral_5538/*"END_PROC"*/;
    Component_WebViewObject->fields.onError = (struct System_Action_string__o *)StringLiteral_5538/*"END_PROC"*/;
    sub_B52920(
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
    sub_B52A5C(SelfUserGame, v4);
  UIWidget__set_color((UIWidget_o *)SelfUserGame, this->fields.spellnowColor, 0LL);
LABEL_31:
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseCommandSpell,
    (System_String_o *)StringLiteral_2425/*"BATTLE_CONTINUE_CHECK_SPELL"*/,
    0x80000000,
    v10);
  window = this->fields.window;
  v20 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo);
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

  if ( (byte_42B25A4 & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue_endOpenStone__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B52984(&StringLiteral_2426/*"BATTLE_CONTINUE_CHECK_STONE"*/);
    byte_42B25A4 = 1;
  }
  BattlePerformanceContinue__AttachStoneCountRefreshComponent(this, method);
  BattlePerformanceContinue__SetContinueMessage(
    this,
    this->fields.checkUseGem,
    (System_String_o *)StringLiteral_2426/*"BATTLE_CONTINUE_CHECK_STONE"*/,
    0x80000000,
    v3);
  stoneObject = this->fields.stoneObject;
  if ( !stoneObject
    || (UnityEngine_GameObject__SetActive(stoneObject, 1, 0LL),
        window = this->fields.window,
        v7 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattlePerformanceContinue_endOpenStone__,
          0LL),
        !window) )
  {
    sub_B52A5C(stoneObject, v4);
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

  if ( (byte_42B25B0 & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue_callbaclStoneShop__);
    sub_B52984(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B25B0 = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (StonePurchaseMenu_CallbackFunc_o *)sub_B52A54(StonePurchaseMenu_CallbackFunc_TypeInfo);
  StonePurchaseMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_callbaclStoneShop__,
    0LL);
  if ( !Instance )
    sub_B52A5C(v5, v6);
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

  if ( (byte_42B25B9 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_2440/*"BATTLE_CONTINUE_USECHECK_STONE"*/);
    sub_B52984(&StringLiteral_2438/*"BATTLE_CONTINUE_STONEPAY_WARNING_MSG"*/);
    sub_B52984(&StringLiteral_2439/*"BATTLE_CONTINUE_USECHECK_SPELL"*/);
    byte_42B25B9 = 1;
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
    v10 = &StringLiteral_2439/*"BATTLE_CONTINUE_USECHECK_SPELL"*/;
    goto LABEL_39;
  }
  v11 = this->fields.usecheckLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  usecheckLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2440/*"BATTLE_CONTINUE_USECHECK_STONE"*/, 0LL);
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
    sub_B52A5C(usecheckLabel, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usecheckLabel, 1, 0LL);
  addMsgLabel = this->fields.addMsgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = &StringLiteral_2438/*"BATTLE_CONTINUE_STONEPAY_WARNING_MSG"*/;
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

  if ( (byte_42B25B8 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42B25B8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNG(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x19
  NotificationDialog_ClickDelegate_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42B2590 & 1) == 0 )
  {
    sub_B52984(&Method_BattlePerformanceContinue_endDialog__);
    sub_B52984(&NotificationDialog_ClickDelegate_TypeInfo);
    byte_42B2590 = 1;
  }
  logic = this->fields.logic;
  v4 = (NotificationDialog_ClickDelegate_o *)sub_B52A54(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v4, (Il2CppObject *)this, Method_BattlePerformanceContinue_endDialog__, 0LL);
  if ( !logic )
    sub_B52A5C(v5, v6);
  BattleLogic__OpenBattleLoseDlg(logic, 1, 0, v4, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B25B7 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42B25B7 = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGGiveUpContinueItem(
        BattlePerformanceContinue_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B258E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42B258E = 1;
  }
  BattlePerformanceContinue__closeContinueItem(this, method);
  myFsm = this->fields.myFsm;
  this->fields.IsContinueItem = 0;
  if ( !myFsm )
    sub_B52A5C(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGNoStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleViewItemlistComponent_o *itemWindow; // x0

  if ( (byte_42B25B2 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42B25B2 = 1;
  }
  BattlePerformanceContinue__closeNoStone(this, method);
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow
    || (BattleViewItemlistComponent__ClearObj(itemWindow, 0LL),
        (itemWindow = (BattleViewItemlistComponent_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B52A5C(itemWindow, v3);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemWindow, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B259F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42B259F = 1;
  }
  BattlePerformanceContinue__closeSpell(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceContinue__procNGStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B25AA & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42B25AA = 1;
  }
  BattlePerformanceContinue__closeStone(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
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
  if ( (byte_42B258F & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    this = (BattlePerformanceContinue_o *)sub_B52984(&StringLiteral_9802/*"OK"*/);
    byte_42B258F = 1;
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
  BattleLogic__sendFsmEvent((BattleLogic_o *)this, (System_String_o *)StringLiteral_9802/*"OK"*/, 0LL);
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
      this = (BattlePerformanceContinue_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
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
      sub_B52A5C(this, method);
    }
  }
}


void __fastcall BattlePerformanceContinue__procSpell(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  System_String_o *v6; // x20
  AssetLoader_LoadEndDataHandler_o *v7; // x21
  int32_t SpellImageIdBattle; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B25A0 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_BattlePerformanceContinue_endLoadCommandSPell__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&StringLiteral_4209/*"CommandSpellEffect/ef_commandspell{0:D4}"*/);
    byte_42B25A0 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B52A5C(0LL, v4);
  SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(SelfUserGame, 0LL);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SpellImageIdBattle);
  v6 = System_String__Format((System_String_o *)StringLiteral_4209/*"CommandSpellEffect/ef_commandspell{0:D4}"*/, v5, 0LL);
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattlePerformanceContinue_endLoadCommandSPell__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v6, v7, 1, 0LL);
}


void __fastcall BattlePerformanceContinue__procStone(BattlePerformanceContinue_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42B25AB & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42B25AB = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
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
  Il2CppObject *v10; // x0
  int32_t v11; // [xsp+8h] [xbp-28h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B2589 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    byte_42B2589 = 1;
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
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
  SelfUserGame = (UserGameEntity_o *)System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v8, 0LL);
  if ( !gem_now
    || (UILabel__set_text(gem_now, (System_String_o *)SelfUserGame, 0LL),
        stone_now = this->fields.stone_now,
        v11 = userGame->fields.stone,
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11),
        SelfUserGame = (UserGameEntity_o *)System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v10, 0LL),
        !stone_now) )
  {
LABEL_8:
    sub_B52A5C(SelfUserGame, v6);
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
  if ( (byte_42AD813 & 1) == 0 )
  {
    this = (BattlePerformanceContinue__CoEndContinue_d__127_o *)sub_B52984(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
    byte_42AD813 = 1;
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
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___),
          *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL),
          !Component_srcLineSprite) )
    {
      sub_B52A5C(this, method);
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
  sub_B52920(p__2__current);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_BattlePerformanceContinue__CoEndContinue_d__127_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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