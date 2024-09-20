void __fastcall BlankEarthGimmickComponent___ctor(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  this->fields.animTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarthGimmickComponent__Awake(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_BlankEarthGimmickComponent__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  CStateManager_T__o *v11; // x21
  Il2CppObject *v12; // x22
  CStateManager_T__o *v13; // x21
  Il2CppObject *v14; // x22
  CStateManager_T__o *v15; // x20
  Il2CppObject *v16; // x21
  const MethodInfo *v17; // x3

  if ( (byte_4A57C90 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_BlankEarthGimmickComponent___ctor__);
    sub_1B885B0(&Method_CStateManager_BlankEarthGimmickComponent__add__);
    sub_1B885B0(&CStateManager_BlankEarthGimmickComponent__TypeInfo);
    sub_1B885B0(&BlankEarthGimmickComponent_StateDispAnim_TypeInfo);
    sub_1B885B0(&BlankEarthGimmickComponent_StateHideAnim_TypeInfo);
    sub_1B885B0(&BlankEarthGimmickComponent_StateMapMain_TypeInfo);
    sub_1B885B0(&BlankEarthGimmickComponent_StateNone_TypeInfo);
    byte_4A57C90 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1B887FC(CStateManager_BlankEarthGimmickComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_30AAD34 *)Method_CStateManager_BlankEarthGimmickComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_BlankEarthGimmickComponent__o *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1B887FC(BlankEarthGimmickComponent_StateNone_TypeInfo);
    System_Object___ctor(v8, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_30AADDC *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    v11 = (CStateManager_T__o *)*p_mFSM;
    v12 = (Il2CppObject *)sub_1B887FC(BlankEarthGimmickComponent_StateMapMain_TypeInfo);
    System_Object___ctor(v12, 0LL);
    if ( !v11 )
      goto LABEL_9;
    CStateManager_object___add(
      v11,
      1,
      (IState_T__o *)v12,
      (const MethodInfo_30AADDC *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    v13 = (CStateManager_T__o *)*p_mFSM;
    v14 = (Il2CppObject *)sub_1B887FC(BlankEarthGimmickComponent_StateHideAnim_TypeInfo);
    System_Object___ctor(v14, 0LL);
    if ( !v13
      || (CStateManager_object___add(
            v13,
            2,
            (IState_T__o *)v14,
            (const MethodInfo_30AADDC *)Method_CStateManager_BlankEarthGimmickComponent__add__),
          v15 = (CStateManager_T__o *)*p_mFSM,
          v16 = (Il2CppObject *)sub_1B887FC(BlankEarthGimmickComponent_StateDispAnim_TypeInfo),
          System_Object___ctor(v16, 0LL),
          !v15) )
    {
LABEL_9:
      sub_1B8880C(v9, v10);
    }
    CStateManager_object___add(
      v15,
      3,
      (IState_T__o *)v16,
      (const MethodInfo_30AADDC *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    BlankEarthGimmickComponent__SetState(this, 1, 0LL, v17);
  }
}


int32_t __fastcall BlankEarthGimmickComponent__GetState(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  BlankEarthGimmickComponent_o *v2; // x19
  struct CStateManager_BlankEarthGimmickComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4A57C93 & 1) == 0 )
  {
    this = (BlankEarthGimmickComponent_o *)sub_1B885B0(&Method_CStateManager_BlankEarthGimmickComponent__getState__);
    byte_4A57C93 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall BlankEarthGimmickComponent__SetDispAnim(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  BlankEarthGimmickComponent__SetDispAnim_33436436(this, isDisp, this->fields.animTime, method);
}


void __fastcall BlankEarthGimmickComponent__SetDispAnimQuick(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  BlankEarthGimmickComponent__SetDispAnim_33436436(this, isDisp, 0.0, method);
}


void __fastcall BlankEarthGimmickComponent__SetDispAnim_33436436(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  UnityEngine_Object_o *commonEffectComponent; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v9; // x1
  struct CommonEffectComponent_o *v10; // x20
  System_Action_o *v11; // x21
  int32_t v12; // w22
  struct CommonEffectComponent_o *v13; // x20
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x1

  if ( (byte_4A57C95 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BlankEarthGimmickComponent_StateDispAnimEnd__);
    sub_1B885B0(&Method_BlankEarthGimmickComponent_StateHideAnimEnd__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57C95 = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( isDisp )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v10 = this->fields.commonEffectComponent;
          if ( time <= 0.0 )
          {
            if ( v10 )
            {
              CommonEffectComponent__ForceLoop(this->fields.commonEffectComponent, 0LL);
              v12 = 1;
              goto LABEL_21;
            }
          }
          else
          {
            v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(v11, (Il2CppObject *)this, Method_BlankEarthGimmickComponent_StateDispAnimEnd__, 0LL);
            if ( v10 )
            {
              v12 = 1;
              ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, System_Action_o *, Il2CppMethodPointer))v10->klass->vtable._6_ForceStart.method)(
                v10,
                1LL,
                v11,
                v10->klass->vtable._7_ForceLoop.methodPtr);
LABEL_21:
              this->fields.dispType = v12;
              return;
            }
          }
        }
      }
LABEL_23:
      sub_1B8880C(gameObject, v9);
    }
    v13 = this->fields.commonEffectComponent;
    if ( time <= 0.0 )
    {
      if ( !v13 )
        goto LABEL_23;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.commonEffectComponent,
                                                0LL);
      if ( !gameObject )
        goto LABEL_23;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      BlankEarthGimmickComponent__StateHideAnimEnd(this, v15);
    }
    else
    {
      v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_BlankEarthGimmickComponent_StateHideAnimEnd__, 0LL);
      if ( !v13 )
        goto LABEL_23;
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v13->klass->vtable._8_Stop.method)(
        v13,
        0LL,
        v14,
        v13->klass->vtable._9_ForceStop.methodPtr);
    }
    v12 = 0;
    goto LABEL_21;
  }
}


void __fastcall BlankEarthGimmickComponent__SetState(
        BlankEarthGimmickComponent_o *this,
        int32_t state,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  struct System_Action_o **p_mStateEndAct; // x21
  __int64 v8; // x1
  CStateManager_T__o *v9; // x0

  if ( (byte_4A57C94 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_BlankEarthGimmickComponent__setState__);
    byte_4A57C94 = 1;
  }
  this->fields.mStateEndAct = endAct;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_mStateEndAct, (int32_t)endAct, (int32_t)endAct, (int32_t)method);
  v9 = (CStateManager_T__o *)*(p_mStateEndAct - 2);
  if ( !v9 )
    sub_1B8880C(0LL, v8);
  CStateManager_object___setState(
    v9,
    state,
    (const MethodInfo_30AAE68 *)Method_CStateManager_BlankEarthGimmickComponent__setState__);
}


void __fastcall BlankEarthGimmickComponent__Setup(
        BlankEarthGimmickComponent_o *this,
        BlankEarthGimmickEntity_o *gimmickEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct BlankEarthGimmickEntity_o **p_blankEarthGimmickEntity; // x20
  UnityEngine_Object_o *commonEffectComponent; // x21
  __int64 v8; // x1
  BlankEarthGimmickEntity_o *UseAnimFromScript; // x0
  struct CommonEffectComponent_o *v10; // x8
  char v11; // w20

  if ( (byte_4A57C92 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57C92 = 1;
  }
  this->fields.blankEarthGimmickEntity = gimmickEntity;
  p_blankEarthGimmickEntity = &this->fields.blankEarthGimmickEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.blankEarthGimmickEntity,
    (int32_t)gimmickEntity,
    (int32_t)method,
    v3);
  if ( this->fields.blankEarthGimmickEntity )
  {
    commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(commonEffectComponent, 0LL, 0LL) )
    {
      UseAnimFromScript = *p_blankEarthGimmickEntity;
      if ( !*p_blankEarthGimmickEntity )
        goto LABEL_21;
      UseAnimFromScript = (BlankEarthGimmickEntity_o *)BlankEarthGimmickEntity__GetUseAnimFromScript(
                                                         UseAnimFromScript,
                                                         0LL);
      if ( (int)UseAnimFromScript >= 1 )
      {
        v10 = this->fields.commonEffectComponent;
        if ( !v10 )
          goto LABEL_21;
        v10->fields.useAnimNum = (int)UseAnimFromScript;
      }
      UseAnimFromScript = *p_blankEarthGimmickEntity;
      if ( *p_blankEarthGimmickEntity )
      {
        UseAnimFromScript = (BlankEarthGimmickEntity_o *)BlankEarthGimmickEntity__IsOpen(UseAnimFromScript, 0LL);
        if ( this->fields.commonEffectComponent )
        {
          v11 = (char)UseAnimFromScript;
          CommonEffectComponent__Init(this->fields.commonEffectComponent, 0, 1, 0LL);
          UseAnimFromScript = (BlankEarthGimmickEntity_o *)this->fields.commonEffectComponent;
          if ( UseAnimFromScript )
          {
            UseAnimFromScript = (BlankEarthGimmickEntity_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)UseAnimFromScript,
                                                               0LL);
            if ( UseAnimFromScript )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)UseAnimFromScript, v11 & 1, 0LL);
              this->fields.dispType = v11 & 1;
              if ( (v11 & 1) != 0 )
              {
                UseAnimFromScript = (BlankEarthGimmickEntity_o *)this->fields.commonEffectComponent;
                if ( !UseAnimFromScript )
                  goto LABEL_21;
                CommonEffectComponent__ForceLoop((CommonEffectComponent_o *)UseAnimFromScript, 0LL);
              }
              UseAnimFromScript = (BlankEarthGimmickEntity_o *)this->fields.commonEffectComponent;
              if ( UseAnimFromScript )
              {
                CommonEffectComponent__ResetPrewarmParticleList((CommonEffectComponent_o *)UseAnimFromScript, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_21:
      sub_1B8880C(UseAnimFromScript, v8);
    }
  }
}


void __fastcall BlankEarthGimmickComponent__StateDispAnimEnd(
        BlankEarthGimmickComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ActionExtensions__Call(this->fields.mStateEndAct, 0LL);
  BlankEarthGimmickComponent__SetState(this, 1, 0LL, v3);
}


void __fastcall BlankEarthGimmickComponent__StateHideAnimEnd(
        BlankEarthGimmickComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *commonEffectComponent; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4A57C96 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57C96 = 1;
  }
  ActionExtensions__Call(this->fields.mStateEndAct, 0LL);
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1B8880C(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  BlankEarthGimmickComponent__SetState(this, 0, 0LL, v5);
}


void __fastcall BlankEarthGimmickComponent__Update(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A57C91 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_BlankEarthGimmickComponent__update__);
    byte_4A57C91 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_30AAE44 *)Method_CStateManager_BlankEarthGimmickComponent__update__);
}


void __fastcall BlankEarthGimmickComponent_StateDispAnim___ctor(
        BlankEarthGimmickComponent_StateDispAnim_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthGimmickComponent_StateDispAnim__begin(
        BlankEarthGimmickComponent_StateDispAnim_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  int32_t dispType; // w8
  const MethodInfo *v5; // x3

  if ( !that )
    sub_1B8880C(this, 0LL);
  dispType = that->fields.dispType;
  if ( dispType == 1 )
  {
    ActionExtensions__Call(that->fields.mStateEndAct, 0LL);
    BlankEarthGimmickComponent__SetState(that, 1, 0LL, v5);
  }
  else if ( !dispType )
  {
    BlankEarthGimmickComponent__SetDispAnim_33436436(that, 1, that->fields.animTime, method);
  }
}


void __fastcall BlankEarthGimmickComponent_StateDispAnim__end(
        BlankEarthGimmickComponent_StateDispAnim_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthGimmickComponent_StateDispAnim__update(
        BlankEarthGimmickComponent_StateDispAnim_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthGimmickComponent_StateHideAnim___ctor(
        BlankEarthGimmickComponent_StateHideAnim_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthGimmickComponent_StateHideAnim__begin(
        BlankEarthGimmickComponent_StateHideAnim_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  int32_t dispType; // w8

  if ( !that )
    sub_1B8880C(this, 0LL);
  dispType = that->fields.dispType;
  if ( dispType == 1 )
  {
    BlankEarthGimmickComponent__SetDispAnim_33436436(that, 0, that->fields.animTime, method);
  }
  else if ( !dispType )
  {
    BlankEarthGimmickComponent__StateHideAnimEnd(that, (const MethodInfo *)that);
  }
}


void __fastcall BlankEarthGimmickComponent_StateHideAnim__end(
        BlankEarthGimmickComponent_StateHideAnim_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthGimmickComponent_StateHideAnim__update(
        BlankEarthGimmickComponent_StateHideAnim_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthGimmickComponent_StateMapMain___ctor(
        BlankEarthGimmickComponent_StateMapMain_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthGimmickComponent_StateMapMain__begin(
        BlankEarthGimmickComponent_StateMapMain_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthGimmickComponent_StateMapMain__end(
        BlankEarthGimmickComponent_StateMapMain_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthGimmickComponent_StateMapMain__update(
        BlankEarthGimmickComponent_StateMapMain_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthGimmickComponent_StateNone___ctor(
        BlankEarthGimmickComponent_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthGimmickComponent_StateNone__begin(
        BlankEarthGimmickComponent_StateNone_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthGimmickComponent_StateNone__end(
        BlankEarthGimmickComponent_StateNone_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthGimmickComponent_StateNone__update(
        BlankEarthGimmickComponent_StateNone_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}