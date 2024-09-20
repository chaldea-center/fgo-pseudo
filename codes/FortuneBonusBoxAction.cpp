void __fastcall FortuneBonusBoxAction___ctor(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  this->fields.fadeInTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FortuneBonusBoxAction__Awake(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *v3; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  CStateManager_T__o *v10; // x20
  Il2CppObject *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_4A57EF5 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_FortuneBonusBoxAction___ctor__);
    sub_1B885B0(&Method_CStateManager_FortuneBonusBoxAction__add__);
    sub_1B885B0(&CStateManager_FortuneBonusBoxAction__TypeInfo);
    sub_1B885B0(&FortuneBonusBoxAction_StateNone_TypeInfo);
    sub_1B885B0(&FortuneBonusBoxAction_StatePlay_TypeInfo);
    byte_4A57EF5 = 1;
  }
  if ( !this->fields.fsm )
  {
    v3 = (CStateManager_T__o *)sub_1B887FC(CStateManager_FortuneBonusBoxAction__TypeInfo);
    CStateManager_object____ctor(
      v3,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_30AAD34 *)Method_CStateManager_FortuneBonusBoxAction___ctor__);
    this->fields.fsm = (struct CStateManager_FortuneBonusBoxAction__o *)v3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fsm, (int32_t)v3, v4, v5);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v7 = (Il2CppObject *)sub_1B887FC(FortuneBonusBoxAction_StateNone_TypeInfo);
    System_Object___ctor(v7, 0LL);
    if ( !fsm
      || (CStateManager_object___add(
            fsm,
            0,
            (IState_T__o *)v7,
            (const MethodInfo_30AADDC *)Method_CStateManager_FortuneBonusBoxAction__add__),
          v10 = (CStateManager_T__o *)this->fields.fsm,
          v11 = (Il2CppObject *)sub_1B887FC(FortuneBonusBoxAction_StatePlay_TypeInfo),
          System_Object___ctor(v11, 0LL),
          !v10) )
    {
      sub_1B8880C(v8, v9);
    }
    CStateManager_object___add(
      v10,
      1,
      (IState_T__o *)v11,
      (const MethodInfo_30AADDC *)Method_CStateManager_FortuneBonusBoxAction__add__);
    FortuneBonusBoxAction__SetState(this, 0, v12);
  }
}


bool __fastcall FortuneBonusBoxAction__IsPlayingAnim(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *v6; // x0

  if ( (byte_4A57EFA & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57EFA = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
    return 0;
  v6 = this->fields.anim;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Animation__IsPlaying(v6, this->fields.animationName, 0LL);
}


void __fastcall FortuneBonusBoxAction__Play(
        FortuneBonusBoxAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4A57EF7 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57EF7 = 1;
  }
  this->fields.endAction = endAct;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endAction, (int32_t)endAct, (int32_t)method, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        FortuneBonusBoxAction__SetAnimSpeed(this, 0.0, v8),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(gameObject, v7);
  }
  CommonUI__maskFadein((CommonUI_o *)gameObject, this->fields.fadeInTime, 0LL, 0LL);
  FortuneBonusBoxAction__SetState(this, 1, v9);
}


void __fastcall FortuneBonusBoxAction__PlayAnim(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonEffectComponent_o *commonEffectComponent; // x0

  FortuneBonusBoxAction__SetAnimSpeed(this, 1.0, method);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    sub_1B8880C(0LL, v3);
  CommonEffectComponent__Init_40640996(commonEffectComponent, this->fields.animationName, 0, 0, 0LL);
}


void __fastcall FortuneBonusBoxAction__SetAnimSpeed(
        FortuneBonusBoxAction_o *this,
        float speed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v6; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_4A57EF9 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57EF9 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0LL)) == 0LL )
    {
      sub_1B8880C(Item, v6);
    }
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, speed, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortuneBonusBoxAction__SetState(FortuneBonusBoxAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4A57EFB & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_FortuneBonusBoxAction__setState__);
    byte_4A57EFB = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1B8880C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_30AAE68 *)Method_CStateManager_FortuneBonusBoxAction__setState__);
}


void __fastcall FortuneBonusBoxAction__Setup(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct CommonEffectComponent_o *commonEffectComponent; // x8

  FortuneBonusBoxAction__SetupAnim(this, method);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    sub_1B8880C(v3, v4);
  commonEffectComponent->fields.isEndless = 1;
}


void __fastcall FortuneBonusBoxAction__SetupAnim(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_4A57EF8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57EF8 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0LL)) == 0LL
      || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 0.0, 0LL),
          (Item = this->fields.anim) == 0LL)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0LL)) == 0LL )
    {
      sub_1B8880C(Item, v4);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
  }
}


void __fastcall FortuneBonusBoxAction__Update(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4A57EF6 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_FortuneBonusBoxAction__update__);
    byte_4A57EF6 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_30AAE44 *)Method_CStateManager_FortuneBonusBoxAction__update__);
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
    sub_1B8880C(this, 0LL);
  FortuneBonusBoxAction__PlayAnim(that, (const MethodInfo *)that);
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
  const MethodInfo *v5; // x2

  if ( this->fields.isStarted )
  {
    if ( !that )
      sub_1B8880C(this, 0LL);
    if ( !FortuneBonusBoxAction__IsPlayingAnim(that, (const MethodInfo *)that) )
    {
      ActionExtensions__Call(that->fields.endAction, 0LL);
      FortuneBonusBoxAction__SetState(that, 0, v5);
    }
  }
  this->fields.isStarted = 1;
}