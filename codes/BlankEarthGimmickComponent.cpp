void __fastcall BlankEarthGimmickComponent___ctor(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.commonEffectComponent) = 1065353216;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarthGimmickComponent__Awake(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct BlankEarthGimmickEntity_o **p_blankEarthGimmickEntity; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x21
  BlankEarthGimmickComponent_StateNone_o *v32; // x22
  __int64 v33; // x0
  __int64 v34; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v35; // x21
  BlankEarthGimmickComponent_StateMapMain_o *v36; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v37; // x21
  BlankEarthGimmickComponent_StateHideAnim_o *v38; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v39; // x20
  BlankEarthGimmickComponent_StateDispAnim_o *v40; // x21
  const MethodInfo *v41; // x3

  if ( (byte_42E7EB5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_BlankEarthGimmickComponent___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_BlankEarthGimmickComponent__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_BlankEarthGimmickComponent__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&BlankEarthGimmickComponent_StateDispAnim_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&BlankEarthGimmickComponent_StateHideAnim_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&BlankEarthGimmickComponent_StateMapMain_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&BlankEarthGimmickComponent_StateNone_TypeInfo, v20, v21, v22);
    byte_42E7EB5 = 1;
  }
  p_blankEarthGimmickEntity = &this->fields.blankEarthGimmickEntity;
  if ( !this->fields.blankEarthGimmickEntity )
  {
    v24 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_BlankEarthGimmickComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v24,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2BB2630 *)Method_CStateManager_BlankEarthGimmickComponent___ctor__);
    this->fields.blankEarthGimmickEntity = (struct BlankEarthGimmickEntity_o *)v24;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.blankEarthGimmickEntity,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    blankEarthGimmickEntity = this->fields.blankEarthGimmickEntity;
    v32 = (BlankEarthGimmickComponent_StateNone_o *)sub_B5D694(BlankEarthGimmickComponent_StateNone_TypeInfo);
    BlankEarthGimmickComponent_StateNone___ctor(v32, 0LL);
    if ( !blankEarthGimmickEntity )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)blankEarthGimmickEntity,
      0,
      (IState_T__o *)v32,
      (const MethodInfo_2BB26FC *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    v35 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_blankEarthGimmickEntity;
    v36 = (BlankEarthGimmickComponent_StateMapMain_o *)sub_B5D694(BlankEarthGimmickComponent_StateMapMain_TypeInfo);
    BlankEarthGimmickComponent_StateMapMain___ctor(v36, 0LL);
    if ( !v35 )
      goto LABEL_9;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v35,
      1,
      (IState_T__o *)v36,
      (const MethodInfo_2BB26FC *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    v37 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_blankEarthGimmickEntity;
    v38 = (BlankEarthGimmickComponent_StateHideAnim_o *)sub_B5D694(BlankEarthGimmickComponent_StateHideAnim_TypeInfo);
    BlankEarthGimmickComponent_StateHideAnim___ctor(v38, 0LL);
    if ( !v37
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v37,
            2,
            (IState_T__o *)v38,
            (const MethodInfo_2BB26FC *)Method_CStateManager_BlankEarthGimmickComponent__add__),
          v39 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_blankEarthGimmickEntity,
          v40 = (BlankEarthGimmickComponent_StateDispAnim_o *)sub_B5D694(BlankEarthGimmickComponent_StateDispAnim_TypeInfo),
          BlankEarthGimmickComponent_StateDispAnim___ctor(v40, 0LL),
          !v39) )
    {
LABEL_9:
      sub_B5D69C(v33, v34);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v39,
      3,
      (IState_T__o *)v40,
      (const MethodInfo_2BB26FC *)Method_CStateManager_BlankEarthGimmickComponent__add__);
    BlankEarthGimmickComponent__SetState(this, 1, 0LL, v41);
  }
}


int32_t __fastcall BlankEarthGimmickComponent__GetState(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BlankEarthGimmickComponent_o *v4; // x19
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8

  v4 = this;
  if ( (byte_42E7EB8 & 1) == 0 )
  {
    this = (BlankEarthGimmickComponent_o *)sub_B5D5C4(
                                             &Method_CStateManager_BlankEarthGimmickComponent__getState__,
                                             (_DWORD)method,
                                             v2,
                                             v3);
    byte_42E7EB8 = 1;
  }
  blankEarthGimmickEntity = v4->fields.blankEarthGimmickEntity;
  if ( !blankEarthGimmickEntity )
    sub_B5D69C(this, method);
  return blankEarthGimmickEntity->fields.mapId;
}


void __fastcall BlankEarthGimmickComponent__SetDispAnim(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  BlankEarthGimmickComponent__SetDispAnim_24021488(this, isDisp, *(float *)&this->fields.commonEffectComponent, method);
}


void __fastcall BlankEarthGimmickComponent__SetDispAnimQuick(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  BlankEarthGimmickComponent__SetDispAnim_24021488(this, isDisp, 0.0, method);
}


void __fastcall BlankEarthGimmickComponent__SetDispAnim_24021488(
        BlankEarthGimmickComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  __int64 v4; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Object_o *v17; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  __int64 v20; // x20
  System_Action_o *v21; // x21
  int v22; // w22
  __int64 v23; // x20
  System_Action_o *v24; // x21
  const MethodInfo *v25; // x1

  if ( (byte_42E7EBA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDisp, (_DWORD)method, v4);
    sub_B5D5C4(&Method_BlankEarthGimmickComponent_StateDispAnimEnd__, v8, v9, v10);
    sub_B5D5C4(&Method_BlankEarthGimmickComponent_StateHideAnimEnd__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42E7EBA = 1;
  }
  v17 = *(UnityEngine_Object_o **)&this->fields.dispType;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
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
          v20 = *(_QWORD *)&this->fields.dispType;
          if ( time <= 0.0 )
          {
            if ( v20 )
            {
              CommonEffectComponent__ForceLoop(*(CommonEffectComponent_o **)&this->fields.dispType, 0LL);
              v22 = 1;
              goto LABEL_22;
            }
          }
          else
          {
            v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(v21, (Il2CppObject *)this, Method_BlankEarthGimmickComponent_StateDispAnimEnd__, 0LL);
            if ( v20 )
            {
              v22 = 1;
              (*(void (__fastcall **)(__int64, __int64, System_Action_o *, _QWORD))(*(_QWORD *)v20 + 408LL))(
                v20,
                1LL,
                v21,
                *(_QWORD *)(*(_QWORD *)v20 + 416LL));
LABEL_22:
              LODWORD(this->fields.mFSM) = v22;
              return;
            }
          }
        }
      }
LABEL_24:
      sub_B5D69C(gameObject, v19);
    }
    v23 = *(_QWORD *)&this->fields.dispType;
    if ( time <= 0.0 )
    {
      if ( !v23 )
        goto LABEL_24;
      gameObject = UnityEngine_Component__get_gameObject(*(UnityEngine_Component_o **)&this->fields.dispType, 0LL);
      if ( !gameObject )
        goto LABEL_24;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      BlankEarthGimmickComponent__StateHideAnimEnd(this, v25);
    }
    else
    {
      v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_BlankEarthGimmickComponent_StateHideAnimEnd__, 0LL);
      if ( !v23 )
        goto LABEL_24;
      (*(void (__fastcall **)(__int64, _QWORD, System_Action_o *, _QWORD))(*(_QWORD *)v23 + 440LL))(
        v23,
        0LL,
        v24,
        *(_QWORD *)(*(_QWORD *)v23 + 448LL));
    }
    v22 = 0;
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

  if ( (byte_42E7EB9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_BlankEarthGimmickComponent__setState__, state, (_DWORD)endAct, method);
    byte_42E7EB9 = 1;
  }
  this[1].klass = (BlankEarthGimmickComponent_c *)endAct;
  v11 = (BattleServantConfConponent_o *)&this[1];
  sub_B5D560(
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
    sub_B5D69C(0LL, v12);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    classBoardSkillObj,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_BlankEarthGimmickComponent__setState__);
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

  if ( (byte_42E7EB7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)gimmickEntity, (_DWORD)method, v3);
    byte_42E7EB7 = 1;
  }
  this->fields.mStateEndAct = (struct System_Action_o *)gimmickEntity;
  p_mStateEndAct = &this->fields.mStateEndAct;
  sub_B5D560(
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
      sub_B5D69C(UseAnimFromScript, v12);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *v5; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42E7EBB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7EBB = 1;
  }
  ActionExtensions__Call((System_Action_o *)this[1].klass, 0LL);
  v5 = *(UnityEngine_Object_o **)&this->fields.dispType;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    gameObject = *(UnityEngine_Component_o **)&this->fields.dispType;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B5D69C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  BlankEarthGimmickComponent__SetState(this, 0, 0LL, v7);
}


void __fastcall BlankEarthGimmickComponent__Update(BlankEarthGimmickComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x0

  if ( (byte_42E7EB6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_BlankEarthGimmickComponent__update__, (_DWORD)method, v2, v3);
    byte_42E7EB6 = 1;
  }
  blankEarthGimmickEntity = this->fields.blankEarthGimmickEntity;
  if ( blankEarthGimmickEntity )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)blankEarthGimmickEntity,
      (const MethodInfo_2BB2778 *)Method_CStateManager_BlankEarthGimmickComponent__update__);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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