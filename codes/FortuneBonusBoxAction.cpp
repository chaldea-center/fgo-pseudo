void __fastcall FortuneBonusBoxAction___ctor(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  this->fields.fadeInTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FortuneBonusBoxAction__Awake(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CStateManager_T__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  CStateManager_T__o *fsm; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *v14; // x22
  __int64 v15; // x0
  CStateManager_T__o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x2

  if ( (byte_49F91B8 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_FortuneBonusBoxAction___ctor__, method);
    sub_1B640C8(&Method_CStateManager_FortuneBonusBoxAction__add__, v4);
    sub_1B640C8(&CStateManager_FortuneBonusBoxAction__TypeInfo, v5);
    sub_1B640C8(&FortuneBonusBoxAction_StateNone_TypeInfo, v6);
    sub_1B640C8(&FortuneBonusBoxAction_StatePlay_TypeInfo, v7);
    byte_49F91B8 = 1;
  }
  if ( !this->fields.fsm )
  {
    v8 = (CStateManager_T__o *)sub_1B64314(CStateManager_FortuneBonusBoxAction__TypeInfo, method, v2);
    CStateManager_object____ctor(
      v8,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_30612BC *)Method_CStateManager_FortuneBonusBoxAction___ctor__);
    this->fields.fsm = (struct CStateManager_FortuneBonusBoxAction__o *)v8;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fsm, (int32_t)v8, v9, v10);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v14 = (Il2CppObject *)sub_1B64314(FortuneBonusBoxAction_StateNone_TypeInfo, v12, v13);
    System_Object___ctor(v14, 0LL);
    if ( !fsm
      || (CStateManager_object___add(
            fsm,
            0,
            (IState_T__o *)v14,
            (const MethodInfo_3061364 *)Method_CStateManager_FortuneBonusBoxAction__add__),
          v16 = (CStateManager_T__o *)this->fields.fsm,
          v19 = (Il2CppObject *)sub_1B64314(FortuneBonusBoxAction_StatePlay_TypeInfo, v17, v18),
          System_Object___ctor(v19, 0LL),
          !v16) )
    {
      sub_1B64324(v15);
    }
    CStateManager_object___add(
      v16,
      1,
      (IState_T__o *)v19,
      (const MethodInfo_3061364 *)Method_CStateManager_FortuneBonusBoxAction__add__);
    FortuneBonusBoxAction__SetState(this, 0, v20);
  }
}


bool __fastcall FortuneBonusBoxAction__IsPlayingAnim(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  UnityEngine_Animation_o *v5; // x0

  if ( (byte_49F91BD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F91BD = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
    return 0;
  v5 = this->fields.anim;
  if ( !v5 )
    sub_1B64324(0LL);
  return UnityEngine_Animation__IsPlaying(v5, this->fields.animationName, 0LL);
}


void __fastcall FortuneBonusBoxAction__Play(
        FortuneBonusBoxAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_49F91BA & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, endAct);
    byte_49F91BA = 1;
  }
  this->fields.endAction = endAct;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.endAction, (int32_t)endAct, (int32_t)method, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        FortuneBonusBoxAction__SetAnimSpeed(this, 0.0, v7),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B64324(gameObject);
  }
  CommonUI__maskFadein((CommonUI_o *)gameObject, this->fields.fadeInTime, 0LL, 0LL);
  FortuneBonusBoxAction__SetState(this, 1, v8);
}


void __fastcall FortuneBonusBoxAction__PlayAnim(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  CommonEffectComponent_o *commonEffectComponent; // x0

  FortuneBonusBoxAction__SetAnimSpeed(this, 1.0, method);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    sub_1B64324(0LL);
  CommonEffectComponent__Init_40305532(commonEffectComponent, this->fields.animationName, 0, 0, 0LL);
}


void __fastcall FortuneBonusBoxAction__SetAnimSpeed(
        FortuneBonusBoxAction_o *this,
        float speed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_49F91BC & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F91BC = 1;
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
      sub_1B64324(Item);
    }
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, speed, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortuneBonusBoxAction__SetState(FortuneBonusBoxAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_49F91BE & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_FortuneBonusBoxAction__setState__, *(_QWORD *)&state);
    byte_49F91BE = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1B64324(0LL);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_30613F0 *)Method_CStateManager_FortuneBonusBoxAction__setState__);
}


void __fastcall FortuneBonusBoxAction__Setup(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  struct CommonEffectComponent_o *commonEffectComponent; // x8

  FortuneBonusBoxAction__SetupAnim(this, method);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    sub_1B64324(v3);
  commonEffectComponent->fields.isEndless = 1;
}


void __fastcall FortuneBonusBoxAction__SetupAnim(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_49F91BB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F91BB = 1;
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
      sub_1B64324(Item);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
  }
}


void __fastcall FortuneBonusBoxAction__Update(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_49F91B9 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_FortuneBonusBoxAction__update__, method);
    byte_49F91B9 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_30613CC *)Method_CStateManager_FortuneBonusBoxAction__update__);
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
    sub_1B64324(this);
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
      sub_1B64324(this);
    if ( !FortuneBonusBoxAction__IsPlayingAnim(that, (const MethodInfo *)that) )
    {
      ActionExtensions__Call(that->fields.endAction, 0LL);
      FortuneBonusBoxAction__SetState(that, 0, v5);
    }
  }
  this->fields.isStarted = 1;
}