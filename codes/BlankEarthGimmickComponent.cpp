void __fastcall BlankEarthGimmickComponent___ctor(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  this->fields.animTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarthGimmickComponent__Awake(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CStateManager_BlankEarthGimmickComponent__o **p_mFSM; // x20
  CStateManager_T__o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  CStateManager_T__o *mFSM; // x21
  BlankEarthGimmickComponent_StateNone_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  CStateManager_T__o *v17; // x21
  BlankEarthGimmickComponent_StateMapMain_o *v18; // x22
  CStateManager_T__o *v19; // x21
  BlankEarthGimmickComponent_StateHideAnim_o *v20; // x22
  CStateManager_T__o *v21; // x20
  BlankEarthGimmickComponent_StateDispAnim_o *v22; // x21
  const MethodInfo *v23; // x3

  if ( (byte_4A4ADBA & 1) == 0 )
  {
    sub_1B863B8(&Method_CStateManager_BlankEarthGimmickComponent___ctor__, method);
    sub_1B863B8(&Method_CStateManager_BlankEarthGimmickComponent__add__, v3);
    sub_1B863B8(&CStateManager_BlankEarthGimmickComponent__TypeInfo, v4);
    sub_1B863B8(&BlankEarthGimmickComponent_StateDispAnim_TypeInfo, v5);
    sub_1B863B8(&BlankEarthGimmickComponent_StateHideAnim_TypeInfo, v6);
    sub_1B863B8(&BlankEarthGimmickComponent_StateMapMain_TypeInfo, v7);
    sub_1B863B8(&BlankEarthGimmickComponent_StateNone_TypeInfo, v8);
    byte_4A4ADBA = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v10 = (CStateManager_T__o *)sub_1B86604(CStateManager_BlankEarthGimmickComponent__TypeInfo);
    CStateManager_object____ctor(
      v10,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_31A3368 *)Method_CStateManager_BlankEarthGimmickComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_BlankEarthGimmickComponent__o *)v10;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v10, v11, v12);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v14 = (BlankEarthGimmickComponent_StateNone_o *)sub_1B86604(BlankEarthGimmickComponent_StateNone_TypeInfo);
    BlankEarthGimmickComponent_StateNone___ctor(v14, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v14,
      (const MethodInfo_31A3410 *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    v17 = (CStateManager_T__o *)*p_mFSM;
    v18 = (BlankEarthGimmickComponent_StateMapMain_o *)sub_1B86604(BlankEarthGimmickComponent_StateMapMain_TypeInfo);
    BlankEarthGimmickComponent_StateMapMain___ctor(v18, 0LL);
    if ( !v17 )
      goto LABEL_9;
    CStateManager_object___add(
      v17,
      1,
      (IState_T__o *)v18,
      (const MethodInfo_31A3410 *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    v19 = (CStateManager_T__o *)*p_mFSM;
    v20 = (BlankEarthGimmickComponent_StateHideAnim_o *)sub_1B86604(BlankEarthGimmickComponent_StateHideAnim_TypeInfo);
    BlankEarthGimmickComponent_StateHideAnim___ctor(v20, 0LL);
    if ( !v19
      || (CStateManager_object___add(
            v19,
            2,
            (IState_T__o *)v20,
            (const MethodInfo_31A3410 *)Method_CStateManager_BlankEarthGimmickComponent__add__),
          v21 = (CStateManager_T__o *)*p_mFSM,
          v22 = (BlankEarthGimmickComponent_StateDispAnim_o *)sub_1B86604(BlankEarthGimmickComponent_StateDispAnim_TypeInfo),
          BlankEarthGimmickComponent_StateDispAnim___ctor(v22, 0LL),
          !v21) )
    {
LABEL_9:
      sub_1B86614(v15, v16);
    }
    CStateManager_object___add(
      v21,
      3,
      (IState_T__o *)v22,
      (const MethodInfo_31A3410 *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    BlankEarthGimmickComponent__SetState(this, 1, 0LL, v23);
  }
}


int32_t __fastcall BlankEarthGimmickComponent__GetState(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  BlankEarthGimmickComponent_o *v2; // x19
  struct CStateManager_BlankEarthGimmickComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4A4ADBD & 1) == 0 )
  {
    this = (BlankEarthGimmickComponent_o *)sub_1B863B8(
                                             &Method_CStateManager_BlankEarthGimmickComponent__getState__,
                                             method);
    byte_4A4ADBD = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B86614(this, method);
  return mFSM->fields.m_state;
}


void __fastcall BlankEarthGimmickComponent__SetDispAnim(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  BlankEarthGimmickComponent__SetDispAnim_34157972(this, isDisp, this->fields.animTime, method);
}


void __fastcall BlankEarthGimmickComponent__SetDispAnimQuick(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  BlankEarthGimmickComponent__SetDispAnim_34157972(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthGimmickComponent__SetDispAnim_34157972(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *commonEffectComponent; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v12; // x1
  struct CommonEffectComponent_o *v13; // x20
  System_Action_o *v14; // x21
  int32_t v15; // w22
  struct CommonEffectComponent_o *v16; // x20
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x1

  if ( (byte_4A4ADBF & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isDisp);
    sub_1B863B8(&Method_BlankEarthGimmickComponent_StateDispAnimEnd__, v7);
    sub_1B863B8(&Method_BlankEarthGimmickComponent_StateHideAnimEnd__, v8);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    byte_4A4ADBF = 1;
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
          v13 = this->fields.commonEffectComponent;
          if ( time <= 0.0 )
          {
            if ( v13 )
            {
              CommonEffectComponent__ForceLoop(this->fields.commonEffectComponent, 0LL);
              v15 = 1;
              goto LABEL_21;
            }
          }
          else
          {
            v14 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(v14, (Il2CppObject *)this, Method_BlankEarthGimmickComponent_StateDispAnimEnd__, 0LL);
            if ( v13 )
            {
              v15 = 1;
              ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, System_Action_o *, Il2CppMethodPointer))v13->klass->vtable._6_ForceStart.method)(
                v13,
                1LL,
                v14,
                v13->klass->vtable._7_ForceLoop.methodPtr);
LABEL_21:
              this->fields.dispType = v15;
              return;
            }
          }
        }
      }
LABEL_23:
      sub_1B86614(gameObject, v12);
    }
    v16 = this->fields.commonEffectComponent;
    if ( time <= 0.0 )
    {
      if ( !v16 )
        goto LABEL_23;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.commonEffectComponent,
                                                0LL);
      if ( !gameObject )
        goto LABEL_23;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      BlankEarthGimmickComponent__StateHideAnimEnd(this, v18);
    }
    else
    {
      v17 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_BlankEarthGimmickComponent_StateHideAnimEnd__, 0LL);
      if ( !v16 )
        goto LABEL_23;
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v16->klass->vtable._8_Stop.method)(
        v16,
        0LL,
        v17,
        v16->klass->vtable._9_ForceStop.methodPtr);
    }
    v15 = 0;
    goto LABEL_21;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthGimmickComponent__SetState(
        BlankEarthGimmickComponent_o *this,
        int32_t state,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  struct System_Action_o **p_mStateEndAct; // x21
  __int64 v8; // x1
  CStateManager_T__o *v9; // x0

  if ( (byte_4A4ADBE & 1) == 0 )
  {
    sub_1B863B8(&Method_CStateManager_BlankEarthGimmickComponent__setState__, *(_QWORD *)&state);
    byte_4A4ADBE = 1;
  }
  this->fields.mStateEndAct = endAct;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_1B8635C((CGThumbnailListItem_o *)p_mStateEndAct, (int32_t)endAct, (int32_t)endAct, method);
  v9 = (CStateManager_T__o *)*(p_mStateEndAct - 2);
  if ( !v9 )
    sub_1B86614(0LL, v8);
  CStateManager_object___setState(
    v9,
    state,
    (const MethodInfo_31A349C *)Method_CStateManager_BlankEarthGimmickComponent__setState__);
}


void __fastcall BlankEarthGimmickComponent__Setup(
        BlankEarthGimmickComponent_o *this,
        BlankEarthGimmickEntity_o *gimmickEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct BlankEarthGimmickEntity_o **p_blankEarthGimmickEntity; // x20
  UnityEngine_Object_o *commonEffectComponent; // x21
  __int64 v8; // x1
  BlankEarthGimmickEntity_o *IsOpen; // x0
  int32_t UseAnimFromScript; // w0
  char v11; // w20

  if ( (byte_4A4ADBC & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, gimmickEntity);
    byte_4A4ADBC = 1;
  }
  this->fields.blankEarthGimmickEntity = gimmickEntity;
  p_blankEarthGimmickEntity = &this->fields.blankEarthGimmickEntity;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.blankEarthGimmickEntity,
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
      IsOpen = *p_blankEarthGimmickEntity;
      if ( !*p_blankEarthGimmickEntity )
        goto LABEL_21;
      UseAnimFromScript = BlankEarthGimmickEntity__GetUseAnimFromScript(IsOpen, 0LL);
      if ( UseAnimFromScript >= 1 )
      {
        v8 = (unsigned int)UseAnimFromScript;
        IsOpen = (BlankEarthGimmickEntity_o *)this->fields.commonEffectComponent;
        if ( !IsOpen )
          goto LABEL_21;
        CommonEffectComponent__SetUseAnimNum((CommonEffectComponent_o *)IsOpen, v8, 0, 0LL);
      }
      IsOpen = *p_blankEarthGimmickEntity;
      if ( *p_blankEarthGimmickEntity )
      {
        IsOpen = (BlankEarthGimmickEntity_o *)BlankEarthGimmickEntity__IsOpen(IsOpen, 0LL);
        if ( this->fields.commonEffectComponent )
        {
          v11 = (char)IsOpen;
          CommonEffectComponent__Init(this->fields.commonEffectComponent, 0, 1, 0LL);
          IsOpen = (BlankEarthGimmickEntity_o *)this->fields.commonEffectComponent;
          if ( IsOpen )
          {
            IsOpen = (BlankEarthGimmickEntity_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)IsOpen,
                                                    0LL);
            if ( IsOpen )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, v11 & 1, 0LL);
              this->fields.dispType = v11 & 1;
              if ( (v11 & 1) != 0 )
              {
                IsOpen = (BlankEarthGimmickEntity_o *)this->fields.commonEffectComponent;
                if ( !IsOpen )
                  goto LABEL_21;
                CommonEffectComponent__ForceLoop((CommonEffectComponent_o *)IsOpen, 0LL);
              }
              IsOpen = (BlankEarthGimmickEntity_o *)this->fields.commonEffectComponent;
              if ( IsOpen )
              {
                CommonEffectComponent__ResetPrewarmParticleList((CommonEffectComponent_o *)IsOpen, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_21:
      sub_1B86614(IsOpen, v8);
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

  if ( (byte_4A4ADC0 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4ADC0 = 1;
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
      sub_1B86614(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  BlankEarthGimmickComponent__SetState(this, 0, 0LL, v5);
}


void __fastcall BlankEarthGimmickComponent__Update(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A4ADBB & 1) == 0 )
  {
    sub_1B863B8(&Method_CStateManager_BlankEarthGimmickComponent__update__, method);
    byte_4A4ADBB = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_31A3478 *)Method_CStateManager_BlankEarthGimmickComponent__update__);
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

  if ( !that )
    sub_1B86614(this, 0LL);
  dispType = that->fields.dispType;
  if ( dispType == 1 )
  {
    BlankEarthGimmickComponent__StateDispAnimEnd(that, 0LL);
  }
  else if ( !dispType )
  {
    BlankEarthGimmickComponent__SetDispAnim(that, 1, 0LL);
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
    sub_1B86614(this, 0LL);
  dispType = that->fields.dispType;
  if ( dispType == 1 )
  {
    BlankEarthGimmickComponent__SetDispAnim(that, 0, 0LL);
  }
  else if ( !dispType )
  {
    BlankEarthGimmickComponent__StateHideAnimEnd(that, 0LL);
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