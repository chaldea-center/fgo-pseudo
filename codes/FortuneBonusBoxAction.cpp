void __fastcall FortuneBonusBoxAction___ctor(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  this->fields.fadeInTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FortuneBonusBoxAction__Awake(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CStateManager_T__o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  CStateManager_T__o *v18; // x20
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x2

  if ( (byte_4B6381A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CStateManager_FortuneBonusBoxAction___ctor__, method);
    sub_1BE4ACC(&Method_CStateManager_FortuneBonusBoxAction__add__, v3);
    sub_1BE4ACC(&CStateManager_FortuneBonusBoxAction__TypeInfo, v4);
    sub_1BE4ACC(&FortuneBonusBoxAction_StateNone_TypeInfo, v5);
    sub_1BE4ACC(&FortuneBonusBoxAction_StatePlay_TypeInfo, v6);
    byte_4B6381A = 1;
  }
  if ( !this->fields.fsm )
  {
    v7 = (CStateManager_T__o *)sub_1BE4D18(CStateManager_FortuneBonusBoxAction__TypeInfo);
    CStateManager_object____ctor(
      v7,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_318A548 *)Method_CStateManager_FortuneBonusBoxAction___ctor__);
    this->fields.fsm = (struct CStateManager_FortuneBonusBoxAction__o *)v7;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)v7, v8, v9, v10, v11, v12, v13);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v15 = (Il2CppObject *)sub_1BE4D18(FortuneBonusBoxAction_StateNone_TypeInfo);
    System_Object___ctor(v15, 0LL);
    if ( !fsm
      || (CStateManager_object___add(
            fsm,
            0,
            (IState_T__o *)v15,
            (const MethodInfo_318A5F0 *)Method_CStateManager_FortuneBonusBoxAction__add__),
          v18 = (CStateManager_T__o *)this->fields.fsm,
          v19 = (Il2CppObject *)sub_1BE4D18(FortuneBonusBoxAction_StatePlay_TypeInfo),
          System_Object___ctor(v19, 0LL),
          !v18) )
    {
      sub_1BE4D28(v16, v17);
    }
    CStateManager_object___add(
      v18,
      1,
      (IState_T__o *)v19,
      (const MethodInfo_318A5F0 *)Method_CStateManager_FortuneBonusBoxAction__add__);
    FortuneBonusBoxAction__SetState(this, 0, v20);
  }
}


bool __fastcall FortuneBonusBoxAction__IsPlayingAnim(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *v6; // x0

  if ( (byte_4B6381F & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6381F = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(anim, 0LL, 0LL) )
    return 0;
  v6 = this->fields.anim;
  if ( !v6 )
    sub_1BE4D28(0LL, v4);
  return UnityEngine_Animation__IsPlaying(v6, this->fields.animationName, 0LL);
}


void __fastcall FortuneBonusBoxAction__Play(
        FortuneBonusBoxAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B6381C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, endAct);
    byte_4B6381C = 1;
  }
  this->fields.endAction = endAct;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.endAction,
    (int64_t)endAct,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        FortuneBonusBoxAction__SetAnimSpeed(this, 0.0, v12),
        (gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BE4D28(gameObject, v11);
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
    sub_1BE4D28(0LL, v3);
  CommonEffectComponent__Init_41621028(commonEffectComponent, this->fields.animationName, 0, 0, 0LL);
}


void __fastcall FortuneBonusBoxAction__SetAnimSpeed(
        FortuneBonusBoxAction_o *this,
        float speed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v6; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_4B6381E & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6381E = 1;
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
      sub_1BE4D28(Item, v6);
    }
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, speed, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortuneBonusBoxAction__SetState(FortuneBonusBoxAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B63820 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CStateManager_FortuneBonusBoxAction__setState__, *(_QWORD *)&state);
    byte_4B63820 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1BE4D28(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_318A67C *)Method_CStateManager_FortuneBonusBoxAction__setState__);
}


void __fastcall FortuneBonusBoxAction__Setup(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct CommonEffectComponent_o *commonEffectComponent; // x8

  FortuneBonusBoxAction__SetupAnim(this, method);
  commonEffectComponent = this->fields.commonEffectComponent;
  if ( !commonEffectComponent )
    sub_1BE4D28(v3, v4);
  commonEffectComponent->fields.isEndless = 1;
}


void __fastcall FortuneBonusBoxAction__SetupAnim(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_4B6381D & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6381D = 1;
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
      sub_1BE4D28(Item, v4);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
  }
}


void __fastcall FortuneBonusBoxAction__Update(FortuneBonusBoxAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B6381B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CStateManager_FortuneBonusBoxAction__update__, method);
    byte_4B6381B = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_318A658 *)Method_CStateManager_FortuneBonusBoxAction__update__);
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
    sub_1BE4D28(this, 0LL);
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
      sub_1BE4D28(this, 0LL);
    if ( !FortuneBonusBoxAction__IsPlayingAnim(that, (const MethodInfo *)that) )
    {
      ActionExtensions__Call(that->fields.endAction, 0LL);
      FortuneBonusBoxAction__SetState(that, 0, v5);
    }
  }
  this->fields.isStarted = 1;
}