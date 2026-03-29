void FortuneBonusBoxAction___ctor(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  this->fields.fadeInTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FortuneBonusBoxAction__Awake(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *v3; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  CStateManager_T__o *v14; // x20
  Il2CppObject *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4D2D35A & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_FortuneBonusBoxAction___ctor__);
    sub_1C93AD4(&Method_CStateManager_FortuneBonusBoxAction__add__);
    sub_1C93AD4(&CStateManager_FortuneBonusBoxAction__TypeInfo);
    sub_1C93AD4(&FortuneBonusBoxAction_StateNone_TypeInfo);
    sub_1C93AD4(&FortuneBonusBoxAction_StatePlay_TypeInfo);
    byte_4D2D35A = 1;
  }
  if ( !this->fields.fsm )
  {
    v3 = (CStateManager_T__o *)sub_1C93D20(CStateManager_FortuneBonusBoxAction__TypeInfo);
    CStateManager_object____ctor(
      v3,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_33EE80C *)Method_CStateManager_FortuneBonusBoxAction___ctor__);
    this->fields.fsm = (struct CStateManager_FortuneBonusBoxAction__o *)v3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.fsm, (int32_t)v3, v4, v5, v6, v7, v8, v9);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v11 = (Il2CppObject *)sub_1C93D20(FortuneBonusBoxAction_StateNone_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !fsm
      || (CStateManager_object___add(
            fsm,
            0,
            (IState_T__o *)v11,
            (const MethodInfo_33EE8B4 *)Method_CStateManager_FortuneBonusBoxAction__add__),
          v14 = (CStateManager_T__o *)this->fields.fsm,
          v15 = (Il2CppObject *)sub_1C93D20(FortuneBonusBoxAction_StatePlay_TypeInfo),
          System_Object___ctor(v15, 0),
          !v14) )
    {
      sub_1C93D2C(v12, v13);
    }
    CStateManager_object___add(
      v14,
      1,
      (IState_T__o *)v15,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_FortuneBonusBoxAction__add__);
    FortuneBonusBoxAction__SetState(this, 0, v16);
  }
}


bool FortuneBonusBoxAction__IsPlayingAnim(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *v6; // x0

  if ( (byte_4D2D35F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D35F = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(anim, 0, 0) )
    return 0;
  v6 = this->fields.anim;
  if ( !v6 )
    sub_1C93D2C(0, v4);
  return UnityEngine_Animation__IsPlaying(v6, this->fields.animationName, 0);
}


void FortuneBonusBoxAction__Play(FortuneBonusBoxAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2D35C & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2D35C = 1;
  }
  this->fields.endAction = endAct;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.endAction,
    (int32_t)endAct,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        FortuneBonusBoxAction__SetAnimSpeed(this, 0.0, v12),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C93D2C(gameObject, v11);
  }
  CommonUI__maskFadein((CommonUI_o *)gameObject, this->fields.fadeInTime, 0, 0);
  FortuneBonusBoxAction__SetState(this, 1, v13);
}


void FortuneBonusBoxAction__PlayAnim(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonEffectComponent_o *commonEffectComponent; // x0

  FortuneBonusBoxAction__SetAnimSpeed(this, 1.0, method);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    sub_1C93D2C(0, v3);
  CommonEffectComponent__Init_44413820(commonEffectComponent, this->fields.animationName, 0, 0, 0);
}


void FortuneBonusBoxAction__SetAnimSpeed(FortuneBonusBoxAction_o *this, float speed, const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v6; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_4D2D35E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D35E = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(anim, 0, 0) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0)) == 0 )
    {
      sub_1C93D2C(Item, v6);
    }
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, speed, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void FortuneBonusBoxAction__SetState(FortuneBonusBoxAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4D2D360 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_FortuneBonusBoxAction__setState__);
    byte_4D2D360 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C93D2C(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_33EE940 *)Method_CStateManager_FortuneBonusBoxAction__setState__);
}


void FortuneBonusBoxAction__Setup(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct CommonEffectComponent_o *commonEffectComponent; // x8

  FortuneBonusBoxAction__SetupAnim(this, method);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    sub_1C93D2C(v3, v4);
  commonEffectComponent->fields.isEndless = 1;
}


void FortuneBonusBoxAction__SetupAnim(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_4D2D35D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D35D = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(anim, 0, 0) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0)) == 0
      || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 0.0, 0),
          (Item = this->fields.anim) == 0)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, this->fields.animationName, 0)) == 0 )
    {
      sub_1C93D2C(Item, v4);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 0.0, 0);
  }
}


void FortuneBonusBoxAction__Update(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4D2D35B & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_FortuneBonusBoxAction__update__);
    byte_4D2D35B = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_33EE91C *)Method_CStateManager_FortuneBonusBoxAction__update__);
}


void FortuneBonusBoxAction_StateNone___ctor(FortuneBonusBoxAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FortuneBonusBoxAction_StateNone__begin(
        FortuneBonusBoxAction_StateNone_o *this,
        FortuneBonusBoxAction_o *that,
        const MethodInfo *method)
{
  ;
}


void FortuneBonusBoxAction_StateNone__end(
        FortuneBonusBoxAction_StateNone_o *this,
        FortuneBonusBoxAction_o *that,
        const MethodInfo *method)
{
  ;
}


void FortuneBonusBoxAction_StateNone__update(
        FortuneBonusBoxAction_StateNone_o *this,
        FortuneBonusBoxAction_o *that,
        const MethodInfo *method)
{
  ;
}


void FortuneBonusBoxAction_StatePlay___ctor(FortuneBonusBoxAction_StatePlay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FortuneBonusBoxAction_StatePlay__begin(
        FortuneBonusBoxAction_StatePlay_o *this,
        FortuneBonusBoxAction_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_1C93D2C(this, 0);
  FortuneBonusBoxAction__PlayAnim(that, (const MethodInfo *)that);
}


void FortuneBonusBoxAction_StatePlay__end(
        FortuneBonusBoxAction_StatePlay_o *this,
        FortuneBonusBoxAction_o *that,
        const MethodInfo *method)
{
  ;
}


void FortuneBonusBoxAction_StatePlay__update(
        FortuneBonusBoxAction_StatePlay_o *this,
        FortuneBonusBoxAction_o *that,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( this->fields.isStarted )
  {
    if ( !that )
      sub_1C93D2C(this, 0);
    if ( !FortuneBonusBoxAction__IsPlayingAnim(that, (const MethodInfo *)that) )
    {
      ActionExtensions__Call(that->fields.endAction, 0);
      FortuneBonusBoxAction__SetState(that, 0, v5);
    }
  }
  this->fields.isStarted = 1;
}