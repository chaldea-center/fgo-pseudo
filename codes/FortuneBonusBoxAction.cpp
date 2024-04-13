void __fastcall FortuneBonusBoxAction___ctor(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  this->fields.fadeInTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FortuneBonusBoxAction__Awake(FortuneBonusBoxAction_o *this, const MethodInfo *method)
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
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct CStateManager_FortuneBonusBoxAction__o *fsm; // x21
  FortuneBonusBoxAction_StateNone_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  struct CStateManager_FortuneBonusBoxAction__o *v28; // x20
  FortuneBonusBoxAction_StatePlay_o *v29; // x21
  const MethodInfo *v30; // x2

  if ( (byte_42EBDBD & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_FortuneBonusBoxAction___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_FortuneBonusBoxAction__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_FortuneBonusBoxAction__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&FortuneBonusBoxAction_StateNone_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&FortuneBonusBoxAction_StatePlay_TypeInfo, v14, v15, v16);
    byte_42EBDBD = 1;
  }
  if ( !this->fields.fsm )
  {
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_FortuneBonusBoxAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v17,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2BB2630 *)Method_CStateManager_FortuneBonusBoxAction___ctor__);
    this->fields.fsm = (struct CStateManager_FortuneBonusBoxAction__o *)v17;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    fsm = this->fields.fsm;
    v25 = (FortuneBonusBoxAction_StateNone_o *)sub_B5D694(FortuneBonusBoxAction_StateNone_TypeInfo);
    FortuneBonusBoxAction_StateNone___ctor(v25, 0LL);
    if ( !fsm
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
            0,
            (IState_T__o *)v25,
            (const MethodInfo_2BB26FC *)Method_CStateManager_FortuneBonusBoxAction__add__),
          v28 = this->fields.fsm,
          v29 = (FortuneBonusBoxAction_StatePlay_o *)sub_B5D694(FortuneBonusBoxAction_StatePlay_TypeInfo),
          FortuneBonusBoxAction_StatePlay___ctor(v29, 0LL),
          !v28) )
    {
      sub_B5D69C(v26, v27);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v28,
      1,
      (IState_T__o *)v29,
      (const MethodInfo_2BB26FC *)Method_CStateManager_FortuneBonusBoxAction__add__);
    FortuneBonusBoxAction__SetState(this, 0, v30);
  }
}


bool __fastcall FortuneBonusBoxAction__IsPlayingAnim(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *anim; // x20
  __int64 v6; // x1
  UnityEngine_Animation_o *v8; // x0

  if ( (byte_42EBDC2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDC2 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
    return 0;
  v8 = this->fields.anim;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Animation__IsPlaying(v8, this->fields.animationName, 0LL);
}


void __fastcall FortuneBonusBoxAction__Play(
        FortuneBonusBoxAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EBDBF & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)endAct, (_DWORD)method, v3);
    byte_42EBDBF = 1;
  }
  this->fields.endAction = endAct;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endAction,
    (System_Int32_array **)endAct,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        FortuneBonusBoxAction__SetAnimSpeed(this, 0.0, v12),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(gameObject, v11);
  }
  CommonUI__maskFadein((CommonUI_o *)gameObject, this->fields.fadeInTime, 0LL, 0LL);
  FortuneBonusBoxAction__SetState(this, 1, v13);
}


void __fastcall FortuneBonusBoxAction__PlayAnim(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonEffectComponent_o *commonEffectComponent; // x0

  FortuneBonusBoxAction__SetAnimSpeed(this, 1.0, method);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    sub_B5D69C(0LL, v3);
  CommonEffectComponent__Init_18130176(commonEffectComponent, this->fields.animationName, 0, 0, 0LL);
}


void __fastcall FortuneBonusBoxAction__SetAnimSpeed(
        FortuneBonusBoxAction_o *this,
        float speed,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  UnityEngine_Object_o *anim; // x20
  __int64 v8; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_42EBDC1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42EBDC1 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0LL)) == 0LL )
    {
      sub_B5D69C(Item, v8);
    }
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, speed, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortuneBonusBoxAction__SetState(FortuneBonusBoxAction_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_FortuneBonusBoxAction__o *fsm; // x0

  if ( (byte_42EBDC3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_FortuneBonusBoxAction__setState__, state, (_DWORD)method, v3);
    byte_42EBDC3 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_FortuneBonusBoxAction__setState__);
}


void __fastcall FortuneBonusBoxAction__Setup(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct CommonEffectComponent_o *commonEffectComponent; // x8

  FortuneBonusBoxAction__SetupAnim(this, method);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    sub_B5D69C(v3, v4);
  commonEffectComponent->fields.isEndless = 1;
}


void __fastcall FortuneBonusBoxAction__SetupAnim(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *anim; // x20
  __int64 v6; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_42EBDC0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDC0 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0LL)) == 0LL
      || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 0.0, 0LL),
          (Item = this->fields.anim) == 0LL)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0LL)) == 0LL )
    {
      sub_B5D69C(Item, v6);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
  }
}


void __fastcall FortuneBonusBoxAction__Update(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_FortuneBonusBoxAction__o *fsm; // x0

  if ( (byte_42EBDBE & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_FortuneBonusBoxAction__update__, (_DWORD)method, v2, v3);
    byte_42EBDBE = 1;
  }
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2BB2778 *)Method_CStateManager_FortuneBonusBoxAction__update__);
}


void __fastcall FortuneBonusBoxAction_StateNone___ctor(
        FortuneBonusBoxAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortuneBonusBoxAction_StateNone__begin(
        FortuneBonusBoxAction_StateNone_o *this,
        FortuneBonusBoxAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortuneBonusBoxAction_StateNone__end(
        FortuneBonusBoxAction_StateNone_o *this,
        FortuneBonusBoxAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortuneBonusBoxAction_StateNone__update(
        FortuneBonusBoxAction_StateNone_o *this,
        FortuneBonusBoxAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortuneBonusBoxAction_StatePlay___ctor(
        FortuneBonusBoxAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortuneBonusBoxAction_StatePlay__begin(
        FortuneBonusBoxAction_StatePlay_o *this,
        FortuneBonusBoxAction_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_B5D69C(this, 0LL);
  FortuneBonusBoxAction__PlayAnim(that, 0LL);
}


void __fastcall FortuneBonusBoxAction_StatePlay__end(
        FortuneBonusBoxAction_StatePlay_o *this,
        FortuneBonusBoxAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortuneBonusBoxAction_StatePlay__update(
        FortuneBonusBoxAction_StatePlay_o *this,
        FortuneBonusBoxAction_o *that,
        const MethodInfo *method)
{
  if ( this->fields.isStarted )
  {
    if ( !that )
      sub_B5D69C(this, 0LL);
    if ( !FortuneBonusBoxAction__IsPlayingAnim(that, 0LL) )
    {
      ActionExtensions__Call(that->fields.endAction, 0LL);
      FortuneBonusBoxAction__SetState(that, 0, 0LL);
    }
  }
  this->fields.isStarted = 1;
}