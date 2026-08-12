void BlankEarthGimmickComponent___ctor(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  this->fields.animTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BlankEarthGimmickComponent__Awake(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_BlankEarthGimmickComponent__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x21
  Il2CppObject *v18; // x22
  CStateManager_T__o *v19; // x20
  Il2CppObject *v20; // x21
  const MethodInfo *v21; // x3

  if ( (byte_596CDFE & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_BlankEarthGimmickComponent___ctor__);
    sub_2213A60(&Method_CStateManager_BlankEarthGimmickComponent__add__);
    sub_2213A60(&CStateManager_BlankEarthGimmickComponent__TypeInfo);
    sub_2213A60(&BlankEarthGimmickComponent_StateDispAnim_TypeInfo);
    sub_2213A60(&BlankEarthGimmickComponent_StateHideAnim_TypeInfo);
    sub_2213A60(&BlankEarthGimmickComponent_StateMapMain_TypeInfo);
    sub_2213A60(&BlankEarthGimmickComponent_StateNone_TypeInfo);
    byte_596CDFE = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_2213CCC(CStateManager_BlankEarthGimmickComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3E83D54 *)Method_CStateManager_BlankEarthGimmickComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_BlankEarthGimmickComponent__o *)v4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (Il2CppObject *)sub_2213CCC(BlankEarthGimmickComponent_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_3E83E04 *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (Il2CppObject *)sub_2213CCC(BlankEarthGimmickComponent_StateMapMain_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15 )
      goto LABEL_9;
    CStateManager_object___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_3E83E04 *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    v17 = (CStateManager_T__o *)*p_mFSM;
    v18 = (Il2CppObject *)sub_2213CCC(BlankEarthGimmickComponent_StateHideAnim_TypeInfo);
    System_Object___ctor(v18, 0);
    if ( !v17
      || (CStateManager_object___add(
            v17,
            2,
            (IState_T__o *)v18,
            (const MethodInfo_3E83E04 *)Method_CStateManager_BlankEarthGimmickComponent__add__),
          v19 = (CStateManager_T__o *)*p_mFSM,
          v20 = (Il2CppObject *)sub_2213CCC(BlankEarthGimmickComponent_StateDispAnim_TypeInfo),
          System_Object___ctor(v20, 0),
          !v19) )
    {
LABEL_9:
      sub_2213CDC(v13, v14);
    }
    CStateManager_object___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_3E83E04 *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    BlankEarthGimmickComponent__SetState(this, 1, 0, v21);
  }
}


int32_t BlankEarthGimmickComponent__GetState(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  BlankEarthGimmickComponent_o *v2; // x19
  struct CStateManager_BlankEarthGimmickComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_596CE01 & 1) == 0 )
  {
    this = (BlankEarthGimmickComponent_o *)sub_2213A60(&Method_CStateManager_BlankEarthGimmickComponent__getState__);
    byte_596CE01 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(this, method);
  return mFSM->fields.m_state;
}


void BlankEarthGimmickComponent__SetDispAnim(BlankEarthGimmickComponent_o *this, bool isDisp, const MethodInfo *method)
{
  BlankEarthGimmickComponent__SetDispAnim_42661504(this, isDisp, this->fields.animTime, method);
}


void BlankEarthGimmickComponent__SetDispAnimQuick(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  BlankEarthGimmickComponent__SetDispAnim_42661504(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarthGimmickComponent__SetDispAnim_42661504(
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
  CommonEffectComponent_c *klass; // x8
  struct CommonEffectComponent_o *v13; // x0
  int32_t v14; // w20
  struct CommonEffectComponent_o *v15; // x20
  System_Action_o *v16; // x21
  const MethodInfo *v17; // x1

  if ( (byte_596CE03 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BlankEarthGimmickComponent_StateDispAnimEnd__);
    sub_2213A60(&Method_BlankEarthGimmickComponent_StateHideAnimEnd__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE03 = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, method);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(commonEffectComponent, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( isDisp )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v10 = this->fields.commonEffectComponent;
          if ( time <= 0.0 )
          {
            if ( v10 )
            {
              CommonEffectComponent__ForceLoop(this->fields.commonEffectComponent, 0);
              v14 = 1;
              goto LABEL_21;
            }
          }
          else
          {
            v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(v11, (Il2CppObject *)this, Method_BlankEarthGimmickComponent_StateDispAnimEnd__, 0);
            if ( v10 )
            {
              klass = v10->klass;
              v13 = v10;
              v14 = 1;
              ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, System_Action_o *, const MethodInfo *))klass->vtable._6_ForceStart.methodPtr)(
                v13,
                1,
                v11,
                klass->vtable._6_ForceStart.method);
LABEL_21:
              this->fields.dispType = v14;
              return;
            }
          }
        }
      }
LABEL_23:
      sub_2213CDC(gameObject, v9);
    }
    v15 = this->fields.commonEffectComponent;
    if ( time <= 0.0 )
    {
      if ( !v15 )
        goto LABEL_23;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.commonEffectComponent,
                                                0);
      if ( !gameObject )
        goto LABEL_23;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      BlankEarthGimmickComponent__StateHideAnimEnd(this, v17);
    }
    else
    {
      v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_BlankEarthGimmickComponent_StateHideAnimEnd__, 0);
      if ( !v15 )
        goto LABEL_23;
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, const MethodInfo *))v15->klass->vtable._8_Stop.methodPtr)(
        v15,
        0,
        v16,
        v15->klass->vtable._8_Stop.method);
    }
    v14 = 0;
    goto LABEL_21;
  }
}


void BlankEarthGimmickComponent__SetState(
        BlankEarthGimmickComponent_o *this,
        int32_t state,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o **p_mStateEndAct; // x21
  __int64 v12; // x1
  CStateManager_T__o *v13; // x0

  if ( (byte_596CE02 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_BlankEarthGimmickComponent__setState__);
    byte_596CE02 = 1;
  }
  this->fields.mStateEndAct = endAct;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_mStateEndAct,
    (int32_t)endAct,
    (System_String_o *)endAct,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v13 = (CStateManager_T__o *)*(p_mStateEndAct - 2);
  if ( !v13 )
    sub_2213CDC(0, v12);
  CStateManager_object___setState(
    v13,
    state,
    (const MethodInfo_3E83E8C *)Method_CStateManager_BlankEarthGimmickComponent__setState__);
}


void BlankEarthGimmickComponent__Setup(
        BlankEarthGimmickComponent_o *this,
        BlankEarthGimmickEntity_o *gimmickEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BlankEarthGimmickEntity_o **p_blankEarthGimmickEntity; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *commonEffectComponent; // x21
  __int64 v14; // x1
  BlankEarthGimmickEntity_o *IsOpen; // x0
  int32_t UseAnimFromScript; // w0
  char v17; // w20

  if ( (byte_596CE00 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE00 = 1;
  }
  this->fields.blankEarthGimmickEntity = gimmickEntity;
  p_blankEarthGimmickEntity = &this->fields.blankEarthGimmickEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.blankEarthGimmickEntity,
    (int32_t)gimmickEntity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.blankEarthGimmickEntity )
  {
    commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    if ( !UnityEngine_Object__op_Equality(commonEffectComponent, 0, 0) )
    {
      IsOpen = *p_blankEarthGimmickEntity;
      if ( !*p_blankEarthGimmickEntity )
        goto LABEL_21;
      UseAnimFromScript = BlankEarthGimmickEntity__GetUseAnimFromScript(IsOpen, 0);
      if ( UseAnimFromScript >= 1 )
      {
        v14 = (unsigned int)UseAnimFromScript;
        IsOpen = (BlankEarthGimmickEntity_o *)this->fields.commonEffectComponent;
        if ( !IsOpen )
          goto LABEL_21;
        CommonEffectComponent__SetUseAnimNum((CommonEffectComponent_o *)IsOpen, v14, 0, 0);
      }
      IsOpen = *p_blankEarthGimmickEntity;
      if ( *p_blankEarthGimmickEntity )
      {
        IsOpen = (BlankEarthGimmickEntity_o *)BlankEarthGimmickEntity__IsOpen(IsOpen, 0);
        if ( this->fields.commonEffectComponent )
        {
          v17 = (char)IsOpen;
          CommonEffectComponent__Init(this->fields.commonEffectComponent, 0, 1, 0);
          IsOpen = (BlankEarthGimmickEntity_o *)this->fields.commonEffectComponent;
          if ( IsOpen )
          {
            IsOpen = (BlankEarthGimmickEntity_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)IsOpen,
                                                    0);
            if ( IsOpen )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, v17 & 1, 0);
              this->fields.dispType = v17 & 1;
              if ( (v17 & 1) != 0 )
              {
                IsOpen = (BlankEarthGimmickEntity_o *)this->fields.commonEffectComponent;
                if ( !IsOpen )
                  goto LABEL_21;
                CommonEffectComponent__ForceLoop((CommonEffectComponent_o *)IsOpen, 0);
              }
              IsOpen = (BlankEarthGimmickEntity_o *)this->fields.commonEffectComponent;
              if ( IsOpen )
              {
                CommonEffectComponent__ResetPrewarmParticleList((CommonEffectComponent_o *)IsOpen, 0);
                return;
              }
            }
          }
        }
      }
LABEL_21:
      sub_2213CDC(IsOpen, v14);
    }
  }
}


void BlankEarthGimmickComponent__StateDispAnimEnd(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ActionExtensions__Call(this->fields.mStateEndAct, 0);
  BlankEarthGimmickComponent__SetState(this, 1, 0, v3);
}


void BlankEarthGimmickComponent__StateHideAnimEnd(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *commonEffectComponent; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_596CE04 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE04 = 1;
  }
  ActionExtensions__Call(this->fields.mStateEndAct, 0);
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality(commonEffectComponent, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  BlankEarthGimmickComponent__SetState(this, 0, 0, v7);
}


void BlankEarthGimmickComponent__Update(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_596CDFF & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_BlankEarthGimmickComponent__update__);
    byte_596CDFF = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3E83E6C *)Method_CStateManager_BlankEarthGimmickComponent__update__);
}


void BlankEarthGimmickComponent_StateDispAnim___ctor(
        BlankEarthGimmickComponent_StateDispAnim_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthGimmickComponent_StateDispAnim__begin(
        BlankEarthGimmickComponent_StateDispAnim_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  int32_t dispType; // w8
  const MethodInfo *v5; // x3

  if ( !that )
    sub_2213CDC(this, 0);
  dispType = that->fields.dispType;
  if ( dispType == 1 )
  {
    ActionExtensions__Call(that->fields.mStateEndAct, 0);
    BlankEarthGimmickComponent__SetState(that, 1, 0, v5);
  }
  else if ( !dispType )
  {
    BlankEarthGimmickComponent__SetDispAnim_42661504(that, 1, that->fields.animTime, method);
  }
}


void BlankEarthGimmickComponent_StateDispAnim__end(
        BlankEarthGimmickComponent_StateDispAnim_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void BlankEarthGimmickComponent_StateDispAnim__update(
        BlankEarthGimmickComponent_StateDispAnim_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void BlankEarthGimmickComponent_StateHideAnim___ctor(
        BlankEarthGimmickComponent_StateHideAnim_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthGimmickComponent_StateHideAnim__begin(
        BlankEarthGimmickComponent_StateHideAnim_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  int32_t dispType; // w8

  if ( !that )
    sub_2213CDC(this, 0);
  dispType = that->fields.dispType;
  if ( dispType == 1 )
  {
    BlankEarthGimmickComponent__SetDispAnim_42661504(that, 0, that->fields.animTime, method);
  }
  else if ( !dispType )
  {
    BlankEarthGimmickComponent__StateHideAnimEnd(that, (const MethodInfo *)that);
  }
}


void BlankEarthGimmickComponent_StateHideAnim__end(
        BlankEarthGimmickComponent_StateHideAnim_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void BlankEarthGimmickComponent_StateHideAnim__update(
        BlankEarthGimmickComponent_StateHideAnim_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void BlankEarthGimmickComponent_StateMapMain___ctor(
        BlankEarthGimmickComponent_StateMapMain_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthGimmickComponent_StateMapMain__begin(
        BlankEarthGimmickComponent_StateMapMain_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void BlankEarthGimmickComponent_StateMapMain__end(
        BlankEarthGimmickComponent_StateMapMain_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void BlankEarthGimmickComponent_StateMapMain__update(
        BlankEarthGimmickComponent_StateMapMain_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void BlankEarthGimmickComponent_StateNone___ctor(
        BlankEarthGimmickComponent_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthGimmickComponent_StateNone__begin(
        BlankEarthGimmickComponent_StateNone_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void BlankEarthGimmickComponent_StateNone__end(
        BlankEarthGimmickComponent_StateNone_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void BlankEarthGimmickComponent_StateNone__update(
        BlankEarthGimmickComponent_StateNone_o *this,
        BlankEarthGimmickComponent_o *that,
        const MethodInfo *method)
{
  ;
}