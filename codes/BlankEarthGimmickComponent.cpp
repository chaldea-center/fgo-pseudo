void __fastcall BlankEarthGimmickComponent___ctor(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  this->fields.animTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarthGimmickComponent__Awake(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct CStateManager_BlankEarthGimmickComponent__o **p_mFSM; // x20
  CStateManager_T__o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  CStateManager_T__o *mFSM; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  Il2CppObject *v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  CStateManager_T__o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  Il2CppObject *v36; // x22
  CStateManager_T__o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  Il2CppObject *v41; // x22
  CStateManager_T__o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  Il2CppObject *v46; // x21
  const MethodInfo *v47; // x3

  if ( (byte_4B12C93 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_BlankEarthGimmickComponent___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_BlankEarthGimmickComponent__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_BlankEarthGimmickComponent__TypeInfo, v7, v8);
    sub_1BCA7E0(&BlankEarthGimmickComponent_StateDispAnim_TypeInfo, v9, v10);
    sub_1BCA7E0(&BlankEarthGimmickComponent_StateHideAnim_TypeInfo, v11, v12);
    sub_1BCA7E0(&BlankEarthGimmickComponent_StateMapMain_TypeInfo, v13, v14);
    sub_1BCA7E0(&BlankEarthGimmickComponent_StateNone_TypeInfo, v15, v16);
    byte_4B12C93 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v18 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_BlankEarthGimmickComponent__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v18,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_313FBC4 *)Method_CStateManager_BlankEarthGimmickComponent___ctor__);
    this->fields.mFSM = (struct CStateManager_BlankEarthGimmickComponent__o *)v18;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v18, v19, v20, v21, v22, v23, v24);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v29 = (Il2CppObject *)sub_1BCAA2C(BlankEarthGimmickComponent_StateNone_TypeInfo, v26, v27, v28);
    System_Object___ctor(v29, 0LL);
    if ( !mFSM )
      goto LABEL_9;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v29,
      (const MethodInfo_313FC6C *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    v32 = (CStateManager_T__o *)*p_mFSM;
    v36 = (Il2CppObject *)sub_1BCAA2C(BlankEarthGimmickComponent_StateMapMain_TypeInfo, v33, v34, v35);
    System_Object___ctor(v36, 0LL);
    if ( !v32 )
      goto LABEL_9;
    CStateManager_object___add(
      v32,
      1,
      (IState_T__o *)v36,
      (const MethodInfo_313FC6C *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    v37 = (CStateManager_T__o *)*p_mFSM;
    v41 = (Il2CppObject *)sub_1BCAA2C(BlankEarthGimmickComponent_StateHideAnim_TypeInfo, v38, v39, v40);
    System_Object___ctor(v41, 0LL);
    if ( !v37
      || (CStateManager_object___add(
            v37,
            2,
            (IState_T__o *)v41,
            (const MethodInfo_313FC6C *)Method_CStateManager_BlankEarthGimmickComponent__add__),
          v42 = (CStateManager_T__o *)*p_mFSM,
          v46 = (Il2CppObject *)sub_1BCAA2C(BlankEarthGimmickComponent_StateDispAnim_TypeInfo, v43, v44, v45),
          System_Object___ctor(v46, 0LL),
          !v42) )
    {
LABEL_9:
      sub_1BCAA3C(v30, v31);
    }
    CStateManager_object___add(
      v42,
      3,
      (IState_T__o *)v46,
      (const MethodInfo_313FC6C *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    BlankEarthGimmickComponent__SetState(this, 1, 0LL, v47);
  }
}


int32_t __fastcall BlankEarthGimmickComponent__GetState(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BlankEarthGimmickComponent_o *v3; // x19
  struct CStateManager_BlankEarthGimmickComponent__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B12C96 & 1) == 0 )
  {
    this = (BlankEarthGimmickComponent_o *)sub_1BCA7E0(
                                             &Method_CStateManager_BlankEarthGimmickComponent__getState__,
                                             method,
                                             v2);
    byte_4B12C96 = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall BlankEarthGimmickComponent__SetDispAnim(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  BlankEarthGimmickComponent__SetDispAnim_34111948(this, isDisp, this->fields.animTime, method);
}


void __fastcall BlankEarthGimmickComponent__SetDispAnimQuick(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  BlankEarthGimmickComponent__SetDispAnim_34111948(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthGimmickComponent__SetDispAnim_34111948(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *commonEffectComponent; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x2
  __int64 v19; // x3
  struct CommonEffectComponent_o *v20; // x20
  System_Action_o *v21; // x21
  int32_t v22; // w22
  struct CommonEffectComponent_o *v23; // x20
  System_Action_o *v24; // x21
  const MethodInfo *v25; // x1

  if ( (byte_4B12C98 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDisp, method);
    sub_1BCA7E0(&Method_BlankEarthGimmickComponent_StateDispAnimEnd__, v7, v8);
    sub_1BCA7E0(&Method_BlankEarthGimmickComponent_StateHideAnimEnd__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B12C98 = 1;
  }
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
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
          v20 = this->fields.commonEffectComponent;
          if ( time <= 0.0 )
          {
            if ( v20 )
            {
              CommonEffectComponent__ForceLoop(this->fields.commonEffectComponent, 0LL);
              v22 = 1;
              goto LABEL_21;
            }
          }
          else
          {
            v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v18, v19);
            System_Action___ctor(v21, (Il2CppObject *)this, Method_BlankEarthGimmickComponent_StateDispAnimEnd__, 0LL);
            if ( v20 )
            {
              v22 = 1;
              ((void (__fastcall *)(struct CommonEffectComponent_o *, __int64, System_Action_o *, Il2CppMethodPointer))v20->klass->vtable._6_ForceStart.method)(
                v20,
                1LL,
                v21,
                v20->klass->vtable._7_ForceLoop.methodPtr);
LABEL_21:
              this->fields.dispType = v22;
              return;
            }
          }
        }
      }
LABEL_23:
      sub_1BCAA3C(gameObject, v15);
    }
    v23 = this->fields.commonEffectComponent;
    if ( time <= 0.0 )
    {
      if ( !v23 )
        goto LABEL_23;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.commonEffectComponent,
                                                0LL);
      if ( !gameObject )
        goto LABEL_23;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      BlankEarthGimmickComponent__StateHideAnimEnd(this, v25);
    }
    else
    {
      v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_BlankEarthGimmickComponent_StateHideAnimEnd__, 0LL);
      if ( !v23 )
        goto LABEL_23;
      ((void (__fastcall *)(struct CommonEffectComponent_o *, _QWORD, System_Action_o *, Il2CppMethodPointer))v23->klass->vtable._8_Stop.method)(
        v23,
        0LL,
        v24,
        v23->klass->vtable._9_ForceStop.methodPtr);
    }
    v22 = 0;
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

  if ( (byte_4B12C97 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_BlankEarthGimmickComponent__setState__, *(_QWORD *)&state, endAct);
    byte_4B12C97 = 1;
  }
  this->fields.mStateEndAct = endAct;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_1BCA784(
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
    sub_1BCAA3C(0LL, v12);
  CStateManager_object___setState(
    v13,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_BlankEarthGimmickComponent__setState__);
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
  __int64 v11; // x1
  UnityEngine_Object_o *commonEffectComponent; // x21
  __int64 v13; // x1
  BlankEarthGimmickEntity_o *IsOpen; // x0
  int32_t UseAnimFromScript; // w0
  char v16; // w20

  if ( (byte_4B12C95 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, gimmickEntity, method);
    byte_4B12C95 = 1;
  }
  this->fields.blankEarthGimmickEntity = gimmickEntity;
  p_blankEarthGimmickEntity = &this->fields.blankEarthGimmickEntity;
  sub_1BCA784(
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( !UnityEngine_Object__op_Equality(commonEffectComponent, 0LL, 0LL) )
    {
      IsOpen = *p_blankEarthGimmickEntity;
      if ( !*p_blankEarthGimmickEntity )
        goto LABEL_21;
      UseAnimFromScript = BlankEarthGimmickEntity__GetUseAnimFromScript(IsOpen, 0LL);
      if ( UseAnimFromScript >= 1 )
      {
        v13 = (unsigned int)UseAnimFromScript;
        IsOpen = (BlankEarthGimmickEntity_o *)this->fields.commonEffectComponent;
        if ( !IsOpen )
          goto LABEL_21;
        CommonEffectComponent__SetUseAnimNum((CommonEffectComponent_o *)IsOpen, v13, 0, 0LL);
      }
      IsOpen = *p_blankEarthGimmickEntity;
      if ( *p_blankEarthGimmickEntity )
      {
        IsOpen = (BlankEarthGimmickEntity_o *)BlankEarthGimmickEntity__IsOpen(IsOpen, 0LL);
        if ( this->fields.commonEffectComponent )
        {
          v16 = (char)IsOpen;
          CommonEffectComponent__Init(this->fields.commonEffectComponent, 0, 1, 0LL);
          IsOpen = (BlankEarthGimmickEntity_o *)this->fields.commonEffectComponent;
          if ( IsOpen )
          {
            IsOpen = (BlankEarthGimmickEntity_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)IsOpen,
                                                    0LL);
            if ( IsOpen )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, v16 & 1, 0LL);
              this->fields.dispType = v16 & 1;
              if ( (v16 & 1) != 0 )
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
      sub_1BCAA3C(IsOpen, v13);
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
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *commonEffectComponent; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4B12C99 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12C99 = 1;
  }
  ActionExtensions__Call(this->fields.mStateEndAct, 0LL);
  commonEffectComponent = (UnityEngine_Object_o *)this->fields.commonEffectComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(commonEffectComponent, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.commonEffectComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  BlankEarthGimmickComponent__SetState(this, 0, 0LL, v7);
}


void __fastcall BlankEarthGimmickComponent__Update(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B12C94 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_BlankEarthGimmickComponent__update__, method, v2);
    byte_4B12C94 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_313FCD4 *)Method_CStateManager_BlankEarthGimmickComponent__update__);
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
    sub_1BCAA3C(this, 0LL);
  dispType = that->fields.dispType;
  if ( dispType == 1 )
  {
    ActionExtensions__Call(that->fields.mStateEndAct, 0LL);
    BlankEarthGimmickComponent__SetState(that, 1, 0LL, v5);
  }
  else if ( !dispType )
  {
    BlankEarthGimmickComponent__SetDispAnim_34111948(that, 1, that->fields.animTime, method);
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
    sub_1BCAA3C(this, 0LL);
  dispType = that->fields.dispType;
  if ( dispType == 1 )
  {
    BlankEarthGimmickComponent__SetDispAnim_34111948(that, 0, that->fields.animTime, method);
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