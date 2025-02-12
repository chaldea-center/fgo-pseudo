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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  CStateManager_T__o *v21; // x21
  Il2CppObject *v22; // x22
  CStateManager_T__o *v23; // x21
  Il2CppObject *v24; // x22
  CStateManager_T__o *v25; // x20
  Il2CppObject *v26; // x21
  const MethodInfo *v27; // x3

  if ( (byte_4BC44D7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_BlankEarthGimmickComponent___ctor__, method);
    sub_1C1ABD4(&Method_CStateManager_BlankEarthGimmickComponent__add__, v3);
    sub_1C1ABD4(&CStateManager_BlankEarthGimmickComponent__TypeInfo, v4);
    sub_1C1ABD4(&BlankEarthGimmickComponent_StateDispAnim_TypeInfo, v5);
    sub_1C1ABD4(&BlankEarthGimmickComponent_StateHideAnim_TypeInfo, v6);
    sub_1C1ABD4(&BlankEarthGimmickComponent_StateMapMain_TypeInfo, v7);
    sub_1C1ABD4(&BlankEarthGimmickComponent_StateNone_TypeInfo, v8);
    byte_4BC44D7 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v10 = (CStateManager_T__o *)sub_1C1AE20(CStateManager_BlankEarthGimmickComponent__TypeInfo);
    CStateManager_object____ctor(
      v10,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_31D32D0 *)Method_CStateManager_BlankEarthGimmickComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_BlankEarthGimmickComponent__o *)v10;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v10, v11, v12, v13, v14, v15, v16);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v18 = (Il2CppObject *)sub_1C1AE20(BlankEarthGimmickComponent_StateNone_TypeInfo);
    System_Object___ctor(v18, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v18,
      (const MethodInfo_31D3378 *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    v21 = (CStateManager_T__o *)*p_mFSM;
    v22 = (Il2CppObject *)sub_1C1AE20(BlankEarthGimmickComponent_StateMapMain_TypeInfo);
    System_Object___ctor(v22, 0LL);
    if ( !v21 )
      goto LABEL_9;
    CStateManager_object___add(
      v21,
      1,
      (IState_T__o *)v22,
      (const MethodInfo_31D3378 *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    v23 = (CStateManager_T__o *)*p_mFSM;
    v24 = (Il2CppObject *)sub_1C1AE20(BlankEarthGimmickComponent_StateHideAnim_TypeInfo);
    System_Object___ctor(v24, 0LL);
    if ( !v23
      || (CStateManager_object___add(
            v23,
            2,
            (IState_T__o *)v24,
            (const MethodInfo_31D3378 *)Method_CStateManager_BlankEarthGimmickComponent__add__),
          v25 = (CStateManager_T__o *)*p_mFSM,
          v26 = (Il2CppObject *)sub_1C1AE20(BlankEarthGimmickComponent_StateDispAnim_TypeInfo),
          System_Object___ctor(v26, 0LL),
          !v25) )
    {
LABEL_9:
      sub_1C1AE30(v19, v20);
    }
    CStateManager_object___add(
      v25,
      3,
      (IState_T__o *)v26,
      (const MethodInfo_31D3378 *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    BlankEarthGimmickComponent__SetState(this, 1, 0LL, v27);
  }
}


int32_t __fastcall BlankEarthGimmickComponent__GetState(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  BlankEarthGimmickComponent_o *v2; // x19
  struct CStateManager_BlankEarthGimmickComponent__o *mFSM; // x8

  v2 = this;
  if ( (byte_4BC44DA & 1) == 0 )
  {
    this = (BlankEarthGimmickComponent_o *)sub_1C1ABD4(
                                             &Method_CStateManager_BlankEarthGimmickComponent__getState__,
                                             method);
    byte_4BC44DA = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C1AE30(this, method);
  return mFSM->fields.m_state;
}


void __fastcall BlankEarthGimmickComponent__SetDispAnim(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  BlankEarthGimmickComponent__SetDispAnim_34536500(this, isDisp, this->fields.animTime, method);
}


void __fastcall BlankEarthGimmickComponent__SetDispAnimQuick(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  BlankEarthGimmickComponent__SetDispAnim_34536500(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthGimmickComponent__SetDispAnim_34536500(
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

  if ( (byte_4BC44DC & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isDisp);
    sub_1C1ABD4(&Method_BlankEarthGimmickComponent_StateDispAnimEnd__, v7);
    sub_1C1ABD4(&Method_BlankEarthGimmickComponent_StateHideAnimEnd__, v8);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v9);
    byte_4BC44DC = 1;
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
            v14 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
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
      sub_1C1AE30(gameObject, v12);
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
      v17 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o **p_mStateEndAct; // x21
  __int64 v12; // x1
  CStateManager_T__o *v13; // x0

  if ( (byte_4BC44DB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_BlankEarthGimmickComponent__setState__, *(_QWORD *)&state);
    byte_4BC44DB = 1;
  }
  this->fields.mStateEndAct = endAct;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)p_mStateEndAct,
    (int64_t)endAct,
    (int64_t)endAct,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v13 = (CStateManager_T__o *)*(p_mStateEndAct - 2);
  if ( !v13 )
    sub_1C1AE30(0LL, v12);
  CStateManager_object___setState(
    v13,
    state,
    (const MethodInfo_31D3404 *)Method_CStateManager_BlankEarthGimmickComponent__setState__);
}


void __fastcall BlankEarthGimmickComponent__Setup(
        BlankEarthGimmickComponent_o *this,
        BlankEarthGimmickEntity_o *gimmickEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BlankEarthGimmickEntity_o **p_blankEarthGimmickEntity; // x20
  UnityEngine_Object_o *commonEffectComponent; // x21
  __int64 v12; // x1
  BlankEarthGimmickEntity_o *IsOpen; // x0
  int32_t UseAnimFromScript; // w0
  char v15; // w20

  if ( (byte_4BC44D9 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, gimmickEntity);
    byte_4BC44D9 = 1;
  }
  this->fields.blankEarthGimmickEntity = gimmickEntity;
  p_blankEarthGimmickEntity = &this->fields.blankEarthGimmickEntity;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.blankEarthGimmickEntity,
    (int64_t)gimmickEntity,
    (int64_t)method,
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
    if ( !UnityEngine_Object__op_Equality(commonEffectComponent, 0LL, 0LL) )
    {
      IsOpen = *p_blankEarthGimmickEntity;
      if ( !*p_blankEarthGimmickEntity )
        goto LABEL_21;
      UseAnimFromScript = BlankEarthGimmickEntity__GetUseAnimFromScript(IsOpen, 0LL);
      if ( UseAnimFromScript >= 1 )
      {
        v12 = (unsigned int)UseAnimFromScript;
        IsOpen = (BlankEarthGimmickEntity_o *)this->fields.commonEffectComponent;
        if ( !IsOpen )
          goto LABEL_21;
        CommonEffectComponent__SetUseAnimNum((CommonEffectComponent_o *)IsOpen, v12, 0, 0LL);
      }
      IsOpen = *p_blankEarthGimmickEntity;
      if ( *p_blankEarthGimmickEntity )
      {
        IsOpen = (BlankEarthGimmickEntity_o *)BlankEarthGimmickEntity__IsOpen(IsOpen, 0LL);
        if ( this->fields.commonEffectComponent )
        {
          v15 = (char)IsOpen;
          CommonEffectComponent__Init(this->fields.commonEffectComponent, 0, 1, 0LL);
          IsOpen = (BlankEarthGimmickEntity_o *)this->fields.commonEffectComponent;
          if ( IsOpen )
          {
            IsOpen = (BlankEarthGimmickEntity_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)IsOpen,
                                                    0LL);
            if ( IsOpen )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, v15 & 1, 0LL);
              this->fields.dispType = v15 & 1;
              if ( (v15 & 1) != 0 )
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
      sub_1C1AE30(IsOpen, v12);
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

  if ( (byte_4BC44DD & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC44DD = 1;
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
      sub_1C1AE30(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  BlankEarthGimmickComponent__SetState(this, 0, 0LL, v5);
}


void __fastcall BlankEarthGimmickComponent__Update(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BC44D8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_BlankEarthGimmickComponent__update__, method);
    byte_4BC44D8 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_31D33E0 *)Method_CStateManager_BlankEarthGimmickComponent__update__);
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
    sub_1C1AE30(this, 0LL);
  dispType = that->fields.dispType;
  if ( dispType == 1 )
  {
    ActionExtensions__Call(that->fields.mStateEndAct, 0LL);
    BlankEarthGimmickComponent__SetState(that, 1, 0LL, v5);
  }
  else if ( !dispType )
  {
    BlankEarthGimmickComponent__SetDispAnim_34536500(that, 1, that->fields.animTime, method);
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
    sub_1C1AE30(this, 0LL);
  dispType = that->fields.dispType;
  if ( dispType == 1 )
  {
    BlankEarthGimmickComponent__SetDispAnim_34536500(that, 0, that->fields.animTime, method);
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