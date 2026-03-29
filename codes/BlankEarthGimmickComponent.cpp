void BlankEarthGimmickComponent___ctor(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  this->fields.animTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BlankEarthGimmickComponent__Awake(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_BlankEarthGimmickComponent__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
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

  if ( (byte_4D2D07A & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_BlankEarthGimmickComponent___ctor__);
    sub_1C93AD4(&Method_CStateManager_BlankEarthGimmickComponent__add__);
    sub_1C93AD4(&CStateManager_BlankEarthGimmickComponent__TypeInfo);
    sub_1C93AD4(&BlankEarthGimmickComponent_StateDispAnim_TypeInfo);
    sub_1C93AD4(&BlankEarthGimmickComponent_StateHideAnim_TypeInfo);
    sub_1C93AD4(&BlankEarthGimmickComponent_StateMapMain_TypeInfo);
    sub_1C93AD4(&BlankEarthGimmickComponent_StateNone_TypeInfo);
    byte_4D2D07A = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C93D20(CStateManager_BlankEarthGimmickComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_33EE80C *)Method_CStateManager_BlankEarthGimmickComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_BlankEarthGimmickComponent__o *)v4;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (Il2CppObject *)sub_1C93D20(BlankEarthGimmickComponent_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (Il2CppObject *)sub_1C93D20(BlankEarthGimmickComponent_StateMapMain_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15 )
      goto LABEL_9;
    CStateManager_object___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    v17 = (CStateManager_T__o *)*p_mFSM;
    v18 = (Il2CppObject *)sub_1C93D20(BlankEarthGimmickComponent_StateHideAnim_TypeInfo);
    System_Object___ctor(v18, 0);
    if ( !v17
      || (CStateManager_object___add(
            v17,
            2,
            (IState_T__o *)v18,
            (const MethodInfo_33EE8B4 *)Method_CStateManager_BlankEarthGimmickComponent__add__),
          v19 = (CStateManager_T__o *)*p_mFSM,
          v20 = (Il2CppObject *)sub_1C93D20(BlankEarthGimmickComponent_StateDispAnim_TypeInfo),
          System_Object___ctor(v20, 0),
          !v19) )
    {
LABEL_9:
      sub_1C93D2C(v13, v14);
    }
    CStateManager_object___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    BlankEarthGimmickComponent__SetState(this, 1, 0, v21);
  }
}


int32_t BlankEarthGimmickComponent__GetState(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  BlankEarthGimmickComponent_o *v2; // x19
  struct CStateManager_BlankEarthGimmickComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4D2D07D & 1) == 0 )
  {
    this = (BlankEarthGimmickComponent_o *)sub_1C93AD4(&Method_CStateManager_BlankEarthGimmickComponent__getState__);
    byte_4D2D07D = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C93D2C(this, method);
  return mFSM->fields.m_state;
}


void BlankEarthGimmickComponent__SetDispAnim(BlankEarthGimmickComponent_o *this, bool isDisp, const MethodInfo *method)
{
  BlankEarthGimmickComponent__SetDispAnim_36412348(this, isDisp, this->fields.animTime, method);
}


void BlankEarthGimmickComponent__SetDispAnimQuick(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  BlankEarthGimmickComponent__SetDispAnim_36412348(this, isDisp, 0.0, method);
}


void BlankEarthGimmickComponent__SetDispAnim_36412348(
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

  if ( (byte_4D2D07F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_BlankEarthGimmickComponent_StateDispAnimEnd__);
    sub_1C93AD4(&Method_BlankEarthGimmickComponent_StateHideAnimEnd__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D07F = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
              v12 = 1;
              goto LABEL_21;
            }
          }
          else
          {
            v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(v11, (Il2CppObject *)this, Method_BlankEarthGimmickComponent_StateDispAnimEnd__, 0);
            if ( v10 )
            {
              v12 = 1;
              ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, System_Action_o *, const MethodInfo *))v10->klass->vtable._6_ForceStart.methodPtr)(
                v10,
                1,
                v11,
                v10->klass->vtable._6_ForceStart.method);
LABEL_21:
              this->fields.dispType = v12;
              return;
            }
          }
        }
      }
LABEL_23:
      sub_1C93D2C(gameObject, v9);
    }
    v13 = this->fields.commonEffectComponent;
    if ( time <= 0.0 )
    {
      if ( !v13 )
        goto LABEL_23;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.commonEffectComponent,
                                                0);
      if ( !gameObject )
        goto LABEL_23;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      BlankEarthGimmickComponent__StateHideAnimEnd(this, v15);
    }
    else
    {
      v14 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_BlankEarthGimmickComponent_StateHideAnimEnd__, 0);
      if ( !v13 )
        goto LABEL_23;
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, const MethodInfo *))v13->klass->vtable._8_Stop.methodPtr)(
        v13,
        0,
        v14,
        v13->klass->vtable._8_Stop.method);
    }
    v12 = 0;
    goto LABEL_21;
  }
}


void BlankEarthGimmickComponent__SetState(
        BlankEarthGimmickComponent_o *this,
        int32_t state,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o **p_mStateEndAct; // x21
  __int64 v12; // x1
  CStateManager_T__o *v13; // x0

  if ( (byte_4D2D07E & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_BlankEarthGimmickComponent__setState__);
    byte_4D2D07E = 1;
  }
  this->fields.mStateEndAct = endAct;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)p_mStateEndAct,
    (int32_t)endAct,
    (int32_t)endAct,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v13 = (CStateManager_T__o *)*(p_mStateEndAct - 2);
  if ( !v13 )
    sub_1C93D2C(0, v12);
  CStateManager_object___setState(
    v13,
    state,
    (const MethodInfo_33EE940 *)Method_CStateManager_BlankEarthGimmickComponent__setState__);
}


void BlankEarthGimmickComponent__Setup(
        BlankEarthGimmickComponent_o *this,
        BlankEarthGimmickEntity_o *gimmickEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BlankEarthGimmickEntity_o **p_blankEarthGimmickEntity; // x20
  UnityEngine_Object_o *commonEffectComponent; // x21
  __int64 v12; // x1
  BlankEarthGimmickEntity_o *IsOpen; // x0
  int32_t UseAnimFromScript; // w0
  char v15; // w20

  if ( (byte_4D2D07C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D07C = 1;
  }
  this->fields.blankEarthGimmickEntity = gimmickEntity;
  p_blankEarthGimmickEntity = &this->fields.blankEarthGimmickEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.blankEarthGimmickEntity,
    (int32_t)gimmickEntity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.blankEarthGimmickEntity )
  {
    commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(commonEffectComponent, 0, 0) )
    {
      IsOpen = *p_blankEarthGimmickEntity;
      if ( !*p_blankEarthGimmickEntity )
        goto LABEL_21;
      UseAnimFromScript = BlankEarthGimmickEntity__GetUseAnimFromScript(IsOpen, 0);
      if ( UseAnimFromScript >= 1 )
      {
        v12 = (unsigned int)UseAnimFromScript;
        IsOpen = (BlankEarthGimmickEntity_o *)this->fields.commonEffectComponent;
        if ( !IsOpen )
          goto LABEL_21;
        CommonEffectComponent__SetUseAnimNum((CommonEffectComponent_o *)IsOpen, v12, 0, 0);
      }
      IsOpen = *p_blankEarthGimmickEntity;
      if ( *p_blankEarthGimmickEntity )
      {
        IsOpen = (BlankEarthGimmickEntity_o *)BlankEarthGimmickEntity__IsOpen(IsOpen, 0);
        if ( this->fields.commonEffectComponent )
        {
          v15 = (char)IsOpen;
          CommonEffectComponent__Init(this->fields.commonEffectComponent, 0, 1, 0);
          IsOpen = (BlankEarthGimmickEntity_o *)this->fields.commonEffectComponent;
          if ( IsOpen )
          {
            IsOpen = (BlankEarthGimmickEntity_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)IsOpen,
                                                    0);
            if ( IsOpen )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, v15 & 1, 0);
              this->fields.dispType = v15 & 1;
              if ( (v15 & 1) != 0 )
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
      sub_1C93D2C(IsOpen, v12);
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
  UnityEngine_Object_o *commonEffectComponent; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4D2D080 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D080 = 1;
  }
  ActionExtensions__Call(this->fields.mStateEndAct, 0);
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commonEffectComponent, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C93D2C(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  BlankEarthGimmickComponent__SetState(this, 0, 0, v5);
}


void BlankEarthGimmickComponent__Update(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4D2D07B & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_BlankEarthGimmickComponent__update__);
    byte_4D2D07B = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_33EE91C *)Method_CStateManager_BlankEarthGimmickComponent__update__);
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
    sub_1C93D2C(this, 0);
  dispType = that->fields.dispType;
  if ( dispType == 1 )
  {
    ActionExtensions__Call(that->fields.mStateEndAct, 0);
    BlankEarthGimmickComponent__SetState(that, 1, 0, v5);
  }
  else if ( !dispType )
  {
    BlankEarthGimmickComponent__SetDispAnim_36412348(that, 1, that->fields.animTime, method);
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
    sub_1C93D2C(this, 0);
  dispType = that->fields.dispType;
  if ( dispType == 1 )
  {
    BlankEarthGimmickComponent__SetDispAnim_36412348(that, 0, that->fields.animTime, method);
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