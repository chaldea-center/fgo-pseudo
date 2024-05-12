void __fastcall BlankEarthGimmickComponent___ctor(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.commonEffectComponent) = 1065353216;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarthGimmickComponent__Awake(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  struct BlankEarthGimmickEntity_o **p_blankEarthGimmickEntity; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x21
  BlankEarthGimmickComponent_StateNone_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v15; // x21
  BlankEarthGimmickComponent_StateMapMain_o *v16; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x21
  BlankEarthGimmickComponent_StateHideAnim_o *v18; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v19; // x20
  BlankEarthGimmickComponent_StateDispAnim_o *v20; // x21
  const MethodInfo *v21; // x3

  if ( (byte_438AD8C & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_BlankEarthGimmickComponent___ctor__);
    sub_B775C4(&Method_CStateManager_BlankEarthGimmickComponent__add__);
    sub_B775C4(&CStateManager_BlankEarthGimmickComponent__TypeInfo);
    sub_B775C4(&BlankEarthGimmickComponent_StateDispAnim_TypeInfo);
    sub_B775C4(&BlankEarthGimmickComponent_StateHideAnim_TypeInfo);
    sub_B775C4(&BlankEarthGimmickComponent_StateMapMain_TypeInfo);
    sub_B775C4(&BlankEarthGimmickComponent_StateNone_TypeInfo);
    byte_438AD8C = 1;
  }
  p_blankEarthGimmickEntity = &this->fields.blankEarthGimmickEntity;
  if ( !this->fields.blankEarthGimmickEntity )
  {
    v4 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B77694(CStateManager_BlankEarthGimmickComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v4,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2CBF0B0 *)Method_CStateManager_BlankEarthGimmickComponent___ctor__);
    this->fields.blankEarthGimmickEntity = (struct BlankEarthGimmickEntity_o *)v4;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.blankEarthGimmickEntity,
      (System_Int32_array **)v4,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    blankEarthGimmickEntity = this->fields.blankEarthGimmickEntity;
    v12 = (BlankEarthGimmickComponent_StateNone_o *)sub_B77694(BlankEarthGimmickComponent_StateNone_TypeInfo);
    BlankEarthGimmickComponent_StateNone___ctor(v12, 0LL);
    if ( !blankEarthGimmickEntity )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)blankEarthGimmickEntity,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_2CBF17C *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    v15 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_blankEarthGimmickEntity;
    v16 = (BlankEarthGimmickComponent_StateMapMain_o *)sub_B77694(BlankEarthGimmickComponent_StateMapMain_TypeInfo);
    BlankEarthGimmickComponent_StateMapMain___ctor(v16, 0LL);
    if ( !v15 )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_2CBF17C *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_blankEarthGimmickEntity;
    v18 = (BlankEarthGimmickComponent_StateHideAnim_o *)sub_B77694(BlankEarthGimmickComponent_StateHideAnim_TypeInfo);
    BlankEarthGimmickComponent_StateHideAnim___ctor(v18, 0LL);
    if ( !v17
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v17,
            2,
            (IState_T__o *)v18,
            (const MethodInfo_2CBF17C *)Method_CStateManager_BlankEarthGimmickComponent__add__),
          v19 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_blankEarthGimmickEntity,
          v20 = (BlankEarthGimmickComponent_StateDispAnim_o *)sub_B77694(BlankEarthGimmickComponent_StateDispAnim_TypeInfo),
          BlankEarthGimmickComponent_StateDispAnim___ctor(v20, 0LL),
          !v19) )
    {
LABEL_9:
      sub_B7769C(v13, v14);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_2CBF17C *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    BlankEarthGimmickComponent__SetState(this, 1, 0LL, v21);
  }
}


int32_t __fastcall BlankEarthGimmickComponent__GetState(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  BlankEarthGimmickComponent_o *v2; // x19
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8

  v2 = this;
  if ( (byte_438AD8F & 1) == 0 )
  {
    this = (BlankEarthGimmickComponent_o *)sub_B775C4(&Method_CStateManager_BlankEarthGimmickComponent__getState__);
    byte_438AD8F = 1;
  }
  blankEarthGimmickEntity = v2->fields.blankEarthGimmickEntity;
  if ( !blankEarthGimmickEntity )
    sub_B7769C(this, method);
  return blankEarthGimmickEntity->fields.mapId;
}


void __fastcall BlankEarthGimmickComponent__SetDispAnim(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  BlankEarthGimmickComponent__SetDispAnim_24769796(this, isDisp, *(float *)&this->fields.commonEffectComponent, method);
}


void __fastcall BlankEarthGimmickComponent__SetDispAnimQuick(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  BlankEarthGimmickComponent__SetDispAnim_24769796(this, isDisp, 0.0, method);
}


void __fastcall BlankEarthGimmickComponent__SetDispAnim_24769796(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v7; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  __int64 v10; // x20
  System_Action_o *v11; // x21
  int v12; // w22
  __int64 v13; // x20
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x1

  if ( (byte_438AD91 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BlankEarthGimmickComponent_StateDispAnimEnd__);
    sub_B775C4(&Method_BlankEarthGimmickComponent_StateHideAnimEnd__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438AD91 = 1;
  }
  v7 = *(UnityEngine_Object_o **)&this->fields.dispType;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( isDisp )
    {
      gameObject = *(UnityEngine_GameObject_o **)&this->fields.dispType;
      if ( gameObject )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          v10 = *(_QWORD *)&this->fields.dispType;
          if ( time <= 0.0 )
          {
            if ( v10 )
            {
              CommonEffectComponent__ForceLoop(*(CommonEffectComponent_o **)&this->fields.dispType, 0LL);
              v12 = 1;
              goto LABEL_22;
            }
          }
          else
          {
            v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
            System_Action___ctor(v11, (Il2CppObject *)this, Method_BlankEarthGimmickComponent_StateDispAnimEnd__, 0LL);
            if ( v10 )
            {
              v12 = 1;
              (*(void (__fastcall **)(__int64, __int64, System_Action_o *, _QWORD))(*(_QWORD *)v10 + 408LL))(
                v10,
                1LL,
                v11,
                *(_QWORD *)(*(_QWORD *)v10 + 416LL));
LABEL_22:
              LODWORD(this->fields.mFSM) = v12;
              return;
            }
          }
        }
      }
LABEL_24:
      sub_B7769C(gameObject, v9);
    }
    v13 = *(_QWORD *)&this->fields.dispType;
    if ( time <= 0.0 )
    {
      if ( !v13 )
        goto LABEL_24;
      gameObject = UnityEngine_Component__get_gameObject(*(UnityEngine_Component_o **)&this->fields.dispType, 0LL);
      if ( !gameObject )
        goto LABEL_24;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      BlankEarthGimmickComponent__StateHideAnimEnd(this, v15);
    }
    else
    {
      v14 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_BlankEarthGimmickComponent_StateHideAnimEnd__, 0LL);
      if ( !v13 )
        goto LABEL_24;
      (*(void (__fastcall **)(__int64, _QWORD, System_Action_o *, _QWORD))(*(_QWORD *)v13 + 440LL))(
        v13,
        0LL,
        v14,
        *(_QWORD *)(*(_QWORD *)v13 + 448LL));
    }
    v12 = 0;
    goto LABEL_22;
  }
}


void __fastcall BlankEarthGimmickComponent__SetState(
        BlankEarthGimmickComponent_o *this,
        int32_t state,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *v11; // x21
  __int64 v12; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *classBoardSkillObj; // x0

  if ( (byte_438AD90 & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_BlankEarthGimmickComponent__setState__);
    byte_438AD90 = 1;
  }
  this[1].klass = (BlankEarthGimmickComponent_c *)endAct;
  v11 = (BattleServantConfConponent_o *)&this[1];
  sub_B77560(
    v11,
    (System_Int32_array **)endAct,
    (System_String_array **)endAct,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  classBoardSkillObj = (CStateManager_QAASpotStateController_IMapSpot__o *)v11[-1].fields.classBoardSkillObj;
  if ( !classBoardSkillObj )
    sub_B7769C(0LL, v12);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    classBoardSkillObj,
    state,
    (const MethodInfo_2CBF220 *)Method_CStateManager_BlankEarthGimmickComponent__setState__);
}


void __fastcall BlankEarthGimmickComponent__Setup(
        BlankEarthGimmickComponent_o *this,
        BlankEarthGimmickEntity_o *gimmickEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Action_o **p_mStateEndAct; // x20
  UnityEngine_Object_o *v11; // x21
  const MethodInfo *v12; // x1
  BlankEarthGimmickEntity_o *UseAnimFromScript; // x0
  __int64 v14; // x8
  char v15; // w20

  if ( (byte_438AD8E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438AD8E = 1;
  }
  this->fields.mStateEndAct = (struct System_Action_o *)gimmickEntity;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mStateEndAct,
    (System_Int32_array **)gimmickEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.mStateEndAct )
  {
    v11 = *(UnityEngine_Object_o **)&this->fields.dispType;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
    {
      UseAnimFromScript = (BlankEarthGimmickEntity_o *)*p_mStateEndAct;
      if ( !*p_mStateEndAct )
        goto LABEL_22;
      UseAnimFromScript = (BlankEarthGimmickEntity_o *)BlankEarthGimmickEntity__GetUseAnimFromScript(
                                                         UseAnimFromScript,
                                                         v12);
      if ( (int)UseAnimFromScript >= 1 )
      {
        v14 = *(_QWORD *)&this->fields.dispType;
        if ( !v14 )
          goto LABEL_22;
        *(_DWORD *)(v14 + 128) = (_DWORD)UseAnimFromScript;
      }
      UseAnimFromScript = (BlankEarthGimmickEntity_o *)*p_mStateEndAct;
      if ( *p_mStateEndAct )
      {
        UseAnimFromScript = (BlankEarthGimmickEntity_o *)BlankEarthGimmickEntity__IsOpen(UseAnimFromScript, v12);
        if ( *(_QWORD *)&this->fields.dispType )
        {
          v15 = (char)UseAnimFromScript;
          CommonEffectComponent__Init(*(CommonEffectComponent_o **)&this->fields.dispType, 0, 1, 0LL);
          UseAnimFromScript = *(BlankEarthGimmickEntity_o **)&this->fields.dispType;
          if ( UseAnimFromScript )
          {
            UseAnimFromScript = (BlankEarthGimmickEntity_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)UseAnimFromScript,
                                                               0LL);
            if ( UseAnimFromScript )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)UseAnimFromScript, v15 & 1, 0LL);
              LODWORD(this->fields.mFSM) = v15 & 1;
              if ( (v15 & 1) != 0 )
              {
                UseAnimFromScript = *(BlankEarthGimmickEntity_o **)&this->fields.dispType;
                if ( !UseAnimFromScript )
                  goto LABEL_22;
                CommonEffectComponent__ForceLoop((CommonEffectComponent_o *)UseAnimFromScript, 0LL);
              }
              UseAnimFromScript = *(BlankEarthGimmickEntity_o **)&this->fields.dispType;
              if ( UseAnimFromScript )
              {
                CommonEffectComponent__ResetPrewarmParticleList((CommonEffectComponent_o *)UseAnimFromScript, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_22:
      sub_B7769C(UseAnimFromScript, v12);
    }
  }
}


void __fastcall BlankEarthGimmickComponent__StateDispAnimEnd(
        BlankEarthGimmickComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ActionExtensions__Call((System_Action_o *)this[1].klass, 0LL);
  BlankEarthGimmickComponent__SetState(this, 1, 0LL, v3);
}


void __fastcall BlankEarthGimmickComponent__StateHideAnimEnd(
        BlankEarthGimmickComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_438AD92 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438AD92 = 1;
  }
  ActionExtensions__Call((System_Action_o *)this[1].klass, 0LL);
  v3 = *(UnityEngine_Object_o **)&this->fields.dispType;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v3, 0LL, 0LL) )
  {
    gameObject = *(UnityEngine_Component_o **)&this->fields.dispType;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B7769C(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  BlankEarthGimmickComponent__SetState(this, 0, 0LL, v5);
}


void __fastcall BlankEarthGimmickComponent__Update(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x0

  if ( (byte_438AD8D & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_BlankEarthGimmickComponent__update__);
    byte_438AD8D = 1;
  }
  blankEarthGimmickEntity = this->fields.blankEarthGimmickEntity;
  if ( blankEarthGimmickEntity )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)blankEarthGimmickEntity,
      (const MethodInfo_2CBF1F8 *)Method_CStateManager_BlankEarthGimmickComponent__update__);
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
  int mFSM; // w8

  if ( !that )
    sub_B7769C(this, 0LL);
  mFSM = (int)that->fields.mFSM;
  if ( mFSM == 1 )
  {
    BlankEarthGimmickComponent__StateDispAnimEnd(that, 0LL);
  }
  else if ( !mFSM )
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
  int mFSM; // w8

  if ( !that )
    sub_B7769C(this, 0LL);
  mFSM = (int)that->fields.mFSM;
  if ( mFSM == 1 )
  {
    BlankEarthGimmickComponent__SetDispAnim(that, 0, 0LL);
  }
  else if ( !mFSM )
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