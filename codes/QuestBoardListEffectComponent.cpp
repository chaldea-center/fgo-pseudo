void __fastcall QuestBoardListEffectComponent___ctor(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestBoardListEffectComponent__Awake(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  QuestBoardListEffectComponent_StateNone_o *v18; // x22
  __int64 v19; // x0
  struct CStateManager_QuestBoardListEffectComponent__o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  QuestBoardListEffectComponent_StatePlay_o *v23; // x21
  const MethodInfo *v24; // x2

  if ( (byte_4216CC3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestBoardListEffectComponent___ctor__, method);
    sub_B0D8A4(&Method_CStateManager_QuestBoardListEffectComponent__add__, v4);
    sub_B0D8A4(&CStateManager_QuestBoardListEffectComponent__TypeInfo, v5);
    sub_B0D8A4(&QuestBoardListEffectComponent_StateNone_TypeInfo, v6);
    sub_B0D8A4(&QuestBoardListEffectComponent_StatePlay_TypeInfo, v7);
    byte_4216CC3 = 1;
  }
  if ( !this->fields.FSM )
  {
    v8 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B0D974(
                                                               CStateManager_QuestBoardListEffectComponent__TypeInfo,
                                                               method,
                                                               v2);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v8,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2AAF784 *)Method_CStateManager_QuestBoardListEffectComponent___ctor__);
    this->fields.FSM = (struct CStateManager_QuestBoardListEffectComponent__o *)v8;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.FSM,
      (System_Int32_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    FSM = this->fields.FSM;
    v18 = (QuestBoardListEffectComponent_StateNone_o *)sub_B0D974(
                                                         QuestBoardListEffectComponent_StateNone_TypeInfo,
                                                         v16,
                                                         v17);
    QuestBoardListEffectComponent_StateNone___ctor(v18, 0LL);
    if ( !FSM
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)FSM,
            0,
            (IState_T__o *)v18,
            (const MethodInfo_2AAF850 *)Method_CStateManager_QuestBoardListEffectComponent__add__),
          v20 = this->fields.FSM,
          v23 = (QuestBoardListEffectComponent_StatePlay_o *)sub_B0D974(
                                                               QuestBoardListEffectComponent_StatePlay_TypeInfo,
                                                               v21,
                                                               v22),
          QuestBoardListEffectComponent_StatePlay___ctor(v23, 0LL),
          !v20) )
    {
      sub_B0D97C(v19);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v20,
      1,
      (IState_T__o *)v23,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestBoardListEffectComponent__add__);
    QuestBoardListEffectComponent__SetState(this, 0, v24);
  }
}


int32_t __fastcall QuestBoardListEffectComponent__GetState(
        QuestBoardListEffectComponent_o *this,
        const MethodInfo *method)
{
  QuestBoardListEffectComponent_o *v2; // x19
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x8

  v2 = this;
  if ( (byte_4216CC7 & 1) == 0 )
  {
    this = (QuestBoardListEffectComponent_o *)sub_B0D8A4(
                                                &Method_CStateManager_QuestBoardListEffectComponent__getState__,
                                                method);
    byte_4216CC7 = 1;
  }
  FSM = v2->fields.FSM;
  if ( !FSM )
    sub_B0D97C(this);
  return FSM->fields.m_state;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListEffectComponent__Init(
        QuestBoardListEffectComponent_o *this,
        bool isInitDisp,
        float startTime,
        float endTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UnityEngine_Animation_o *Component_WebViewObject; // x0
  UnityEngine_Animation_o **p_normalAnimation; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Component_o *transform; // x0
  struct SimpleAnimation_o *ComponentInChildren_UIWidget; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v30; // x21
  System_String_o *v31; // x0
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v33; // x21
  unsigned __int64 v34; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v36; // x0
  UnityEngine_Animation_o *v37; // x22
  UnityEngine_Animation_o *v38; // x22
  System_String_o *name; // x0
  UnityEngine_Animation_o *v40; // x21
  System_String_o *v41; // x0
  SimpleAnimation_o *v42; // x21
  System_String_o *v43; // x0
  UnityEngine_Component_c *v44; // x8
  UnityEngine_Component_o *v45; // x21
  unsigned __int64 v46; // x10
  SimpleAnimation_State_c **v47; // x11
  __int64 v48; // x0

  if ( (byte_4216CC5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, isInitDisp);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Animation___, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v11);
    byte_4216CC5 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_normalAnimation = &this->fields.normalAnimation;
  this->fields.normalAnimation = Component_WebViewObject;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.normalAnimation,
    (System_Int32_array **)Component_WebViewObject,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_40;
  ComponentInChildren_UIWidget = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                               transform,
                                                               (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = ComponentInChildren_UIWidget;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    v37 = *p_normalAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_38;
    v38 = *p_normalAnimation;
    if ( *p_normalAnimation )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(*p_normalAnimation, 0LL);
      if ( transform )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v38, name, 0LL);
        if ( transform )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
          v40 = *p_normalAnimation;
          if ( v40 )
          {
            transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(v40, 0LL);
            if ( transform )
            {
              v41 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
              transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v40, v41, 0LL);
              if ( transform )
              {
                UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
                goto LABEL_38;
              }
            }
          }
        }
      }
    }
LABEL_40:
    sub_B0D97C(transform);
  }
  v30 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_40;
  transform = (UnityEngine_Component_o *)v30[1].monitor;
  if ( !transform )
    goto LABEL_40;
  v31 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v30, v31, 0LL);
  if ( !transform )
    goto LABEL_40;
  klass = transform->klass;
  v33 = transform;
  if ( *(_WORD *)&transform->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v34;
      p_offset += 2;
      if ( v34 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v36 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v36 = sub_AA67A0(transform, SimpleAnimation_State_TypeInfo, 8LL);
  }
  transform = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v36)(
                                           v33,
                                           *(_QWORD *)(v36 + 8),
                                           0.0);
  v42 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_40;
  transform = (UnityEngine_Component_o *)v42[1].monitor;
  if ( !transform )
    goto LABEL_40;
  v43 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v42, v43, 0LL);
  if ( !transform )
    goto LABEL_40;
  v44 = transform->klass;
  v45 = transform;
  if ( *(_WORD *)&transform->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    v47 = (SimpleAnimation_State_c **)&v44->_1.interfaceOffsets->offset;
    while ( *(v47 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v46;
      v47 += 2;
      if ( v46 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v48 = (__int64)(&v44[1]._1.byval_arg.bits + 4 * *(_DWORD *)v47);
  }
  else
  {
LABEL_35:
    v48 = sub_AA67A0(transform, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v48)(v45, *(_QWORD *)(v48 + 8), 0.0);
LABEL_38:
  this->fields.animationStartTime = startTime;
  this->fields.animationEndTime = endTime;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, isInitDisp, 0LL);
}


void __fastcall QuestBoardListEffectComponent__Play(
        QuestBoardListEffectComponent_o *this,
        System_Action_o *OnPlayingAct,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  if ( OnPlayingAct )
  {
    this->fields.OnPlayingAct = OnPlayingAct;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.OnPlayingAct,
      (System_Int32_array **)OnPlayingAct,
      (System_String_array **)end_act,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.EndAct = end_act;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.EndAct,
    (System_Int32_array **)end_act,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  QuestBoardListEffectComponent__SetState(this, 1, v17);
}


void __fastcall QuestBoardListEffectComponent__SetPlayingActStartTime(
        QuestBoardListEffectComponent_o *this,
        float time,
        const MethodInfo *method)
{
  this->fields.playingActStartTime = time;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListEffectComponent__SetState(
        QuestBoardListEffectComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x0

  if ( (byte_4216CC8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestBoardListEffectComponent__setState__, *(_QWORD *)&state);
    byte_4216CC8 = 1;
  }
  FSM = this->fields.FSM;
  if ( !FSM )
    sub_B0D97C(0LL);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)FSM,
    state,
    (const MethodInfo_2AAF8F4 *)Method_CStateManager_QuestBoardListEffectComponent__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListEffectComponent__Skip(
        QuestBoardListEffectComponent_o *this,
        float time,
        const MethodInfo *method)
{
  long double v3; // q8
  __int64 v5; // x1
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *monitor; // x0
  struct SimpleAnimation_o *v8; // x20
  System_String_o *name; // x0
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v11; // x20
  unsigned __int64 v12; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v14; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v16; // x20
  System_String_o *v17; // x0

  v3 = *(long double *)&time;
  if ( (byte_4216CC6 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v5);
    byte_4216CC6 = 1;
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
  {
    v8 = this->fields.simpleAnimation;
    if ( v8 )
    {
      monitor = (UnityEngine_Object_o *)v8[1].monitor;
      if ( monitor )
      {
        name = UnityEngine_Object__get_name(monitor, 0LL);
        monitor = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v8, name, 0LL);
        if ( monitor )
        {
          klass = monitor->klass;
          v11 = monitor;
          if ( *(_WORD *)&monitor->klass->_2.bitflags1 )
          {
            v12 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v12;
              p_offset += 2;
              if ( v12 >= *(unsigned __int16 *)&monitor->klass->_2.bitflags1 )
                goto LABEL_14;
            }
            v14 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_14:
            v14 = sub_AA67A0(monitor, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v14)(v11, *(_QWORD *)(v14 + 8), v3);
          monitor = (UnityEngine_Object_o *)this->fields.simpleAnimation;
          if ( monitor )
          {
            SimpleAnimation__Sample((SimpleAnimation_o *)monitor, 0LL);
            return;
          }
        }
      }
    }
LABEL_28:
    sub_B0D97C(monitor);
  }
  normalAnimation = (UnityEngine_Object_o *)this->fields.normalAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(normalAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
  {
    v16 = this->fields.normalAnimation;
    if ( v16 )
    {
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.normalAnimation, 0LL);
      if ( monitor )
      {
        v17 = UnityEngine_Object__get_name(monitor, 0LL);
        monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v16, v17, 0LL);
        if ( monitor )
        {
          UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)monitor, *(float *)&v3, 0LL);
          monitor = (UnityEngine_Object_o *)this->fields.normalAnimation;
          if ( monitor )
          {
            UnityEngine_Animation__Sample((UnityEngine_Animation_o *)monitor, 0LL);
            return;
          }
        }
      }
    }
    goto LABEL_28;
  }
}


void __fastcall QuestBoardListEffectComponent__Update(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x0

  if ( (byte_4216CC4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestBoardListEffectComponent__update__, method);
    byte_4216CC4 = 1;
  }
  FSM = this->fields.FSM;
  if ( FSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)FSM,
      (const MethodInfo_2AAF8CC *)Method_CStateManager_QuestBoardListEffectComponent__update__);
}


void __fastcall QuestBoardListEffectComponent_StateNone___ctor(
        QuestBoardListEffectComponent_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListEffectComponent_StateNone__begin(
        QuestBoardListEffectComponent_StateNone_o *this,
        QuestBoardListEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestBoardListEffectComponent_StateNone__end(
        QuestBoardListEffectComponent_StateNone_o *this,
        QuestBoardListEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestBoardListEffectComponent_StateNone__update(
        QuestBoardListEffectComponent_StateNone_o *this,
        QuestBoardListEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestBoardListEffectComponent_StatePlay___ctor(
        QuestBoardListEffectComponent_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListEffectComponent_StatePlay__begin(
        QuestBoardListEffectComponent_StatePlay_o *this,
        QuestBoardListEffectComponent_o *that,
        const MethodInfo *method)
{
  long double v3; // q8
  __int64 v5; // x1
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v7; // x20
  System_String_o *v8; // x0
  struct SimpleAnimation_o *v9; // x20
  System_String_o *v10; // x0
  struct SimpleAnimation_o *v11; // x20
  System_String_o *v12; // x0
  QuestBoardListEffectComponent_StatePlay_c *klass; // x8
  QuestBoardListEffectComponent_StatePlay_o *v14; // x20
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 v17; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v19; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v21; // x20
  System_String_o *v22; // x0
  UnityEngine_Animation_o *v23; // x20
  System_String_o *v24; // x0
  UnityEngine_Animation_o *v25; // x19
  System_String_o *v26; // x0
  struct SimpleAnimation_o *v27; // x19
  System_String_o *v28; // x0
  QuestBoardListEffectComponent_StatePlay_c *v29; // x8
  QuestBoardListEffectComponent_StatePlay_o *v30; // x19
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0

  if ( (byte_42121D5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, that);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v5);
    byte_42121D5 = 1;
  }
  if ( !that )
    goto LABEL_51;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    normalAnimation = (UnityEngine_Object_o *)that->fields.normalAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(normalAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v19 = that->fields.normalAnimation;
    if ( v19 )
    {
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v19, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v21 = that->fields.normalAnimation;
          if ( !v21 )
            goto LABEL_51;
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                that->fields.normalAnimation,
                                                                0LL);
          if ( !this )
            goto LABEL_51;
          v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__Play_50564840(v21, v22, 0LL);
        }
        v23 = that->fields.normalAnimation;
        if ( v23 )
        {
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                that->fields.normalAnimation,
                                                                0LL);
          if ( this )
          {
            v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v23, v24, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_time(
                (UnityEngine_AnimationState_o *)this,
                that->fields.animationStartTime,
                0LL);
              v25 = that->fields.normalAnimation;
              if ( v25 )
              {
                this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(v25, 0LL);
                if ( this )
                {
                  v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v25, v26, 0LL);
                  if ( this )
                  {
                    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_51:
    sub_B0D97C(this);
  }
  v7 = that->fields.simpleAnimation;
  if ( !v7 )
    goto LABEL_51;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v7[1].monitor;
  if ( !this )
    goto LABEL_51;
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v7, v8, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v9 = that->fields.simpleAnimation;
    if ( !v9 )
      goto LABEL_51;
    this = (QuestBoardListEffectComponent_StatePlay_o *)v9[1].monitor;
    if ( !this )
      goto LABEL_51;
    v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__Play_50482404(v9, v10, 0LL);
  }
  v11 = that->fields.simpleAnimation;
  if ( !v11 )
    goto LABEL_51;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v11[1].monitor;
  if ( !this )
    goto LABEL_51;
  v12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v11, v12, 0LL);
  if ( !this )
    goto LABEL_51;
  klass = this->klass;
  *(float *)&v3 = that->fields.animationStartTime;
  v14 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v15;
      p_offset += 4;
      if ( v15 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v17 = (__int64)(&klass->vtable._4_begin.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v17 = sub_AA67A0(this, SimpleAnimation_State_TypeInfo, 4LL);
  }
  this = (QuestBoardListEffectComponent_StatePlay_o *)(*(__int64 (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD, long double))v17)(
                                                        v14,
                                                        *(_QWORD *)(v17 + 8),
                                                        v3);
  v27 = that->fields.simpleAnimation;
  if ( !v27 )
    goto LABEL_51;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v27[1].monitor;
  if ( !this )
    goto LABEL_51;
  v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v27, v28, 0LL);
  if ( !this )
    goto LABEL_51;
  v29 = this->klass;
  v30 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v29->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v32 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_48;
    }
    v33 = (__int64)(&v29[1]._1.namespaze + 2 * *v32);
  }
  else
  {
LABEL_48:
    v33 = sub_AA67A0(this, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD, float))v33)(
    v30,
    *(_QWORD *)(v33 + 8),
    1.0);
}


void __fastcall QuestBoardListEffectComponent_StatePlay__end(
        QuestBoardListEffectComponent_StatePlay_o *this,
        QuestBoardListEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestBoardListEffectComponent_StatePlay__update(
        QuestBoardListEffectComponent_StatePlay_o *this,
        QuestBoardListEffectComponent_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  System_String_o *v7; // x0
  QuestBoardListEffectComponent_StatePlay_c *klass; // x8
  QuestBoardListEffectComponent_StatePlay_o *v9; // x20
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 v12; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v14; // x20
  System_String_o *name; // x0
  System_Action_o *OnPlayingAct; // x0
  UnityEngine_Animation_o *v17; // x20
  System_String_o *v18; // x0
  UnityEngine_Animation_o *v19; // x20
  System_String_o *v20; // x0
  System_Action_o *v21; // x0
  struct SimpleAnimation_o *v22; // x20
  System_String_o *v23; // x0
  struct SimpleAnimation_o *v24; // x20
  System_String_o *v25; // x0
  QuestBoardListEffectComponent_StatePlay_c *v26; // x8
  QuestBoardListEffectComponent_StatePlay_o *v27; // x20
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0

  if ( (byte_42121D6 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, that);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v4);
    byte_42121D6 = 1;
  }
  if ( !that )
    goto LABEL_60;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    normalAnimation = (UnityEngine_Object_o *)that->fields.normalAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(normalAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    if ( that->fields.OnPlayingAct && !that->fields.isPlayingAct )
    {
      v14 = that->fields.normalAnimation;
      if ( !v14 )
        goto LABEL_60;
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0LL);
      if ( !this )
        goto LABEL_60;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v14, name, 0LL);
      if ( !this )
        goto LABEL_60;
      if ( UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)this, 0LL) >= that->fields.playingActStartTime )
      {
        OnPlayingAct = that->fields.OnPlayingAct;
        that->fields.isPlayingAct = 1;
        ActionExtensions__Call(OnPlayingAct, 0LL);
      }
    }
    v17 = that->fields.normalAnimation;
    if ( !v17 )
      goto LABEL_60;
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                          that->fields.normalAnimation,
                                                          0LL);
    if ( !this )
      goto LABEL_60;
    v18 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v17, v18, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( that->fields.animationEndTime == 0.0 )
        return;
      v19 = that->fields.normalAnimation;
      if ( !v19 )
        goto LABEL_60;
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0LL);
      if ( !this )
        goto LABEL_60;
      v20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v19, v20, 0LL);
      if ( !this )
        goto LABEL_60;
      if ( UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)this, 0LL) < that->fields.animationEndTime )
        return;
      this = (QuestBoardListEffectComponent_StatePlay_o *)that->fields.normalAnimation;
      if ( !this )
        goto LABEL_60;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)this, 0LL);
    }
LABEL_59:
    ActionExtensions__Call(that->fields.EndAct, 0LL);
    QuestBoardListEffectComponent__SetState(that, 0, 0LL);
    return;
  }
  if ( that->fields.OnPlayingAct && !that->fields.isPlayingAct )
  {
    v6 = that->fields.simpleAnimation;
    if ( !v6 )
      goto LABEL_60;
    this = (QuestBoardListEffectComponent_StatePlay_o *)v6[1].monitor;
    if ( !this )
      goto LABEL_60;
    v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v6, v7, 0LL);
    if ( !this )
      goto LABEL_60;
    klass = this->klass;
    v9 = this;
    if ( *(_WORD *)&this->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v12 = (__int64)(&klass->vtable._3_ToString.method + 2 * *p_offset);
    }
    else
    {
LABEL_17:
      v12 = sub_AA67A0(this, SimpleAnimation_State_TypeInfo, 3LL);
    }
    if ( (*(float (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8)) >= that->fields.playingActStartTime )
    {
      v21 = that->fields.OnPlayingAct;
      that->fields.isPlayingAct = 1;
      ActionExtensions__Call(v21, 0LL);
    }
  }
  v22 = that->fields.simpleAnimation;
  if ( !v22 )
    goto LABEL_60;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v22[1].monitor;
  if ( !this )
    goto LABEL_60;
  v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v22, v23, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_59;
  if ( that->fields.animationEndTime == 0.0 )
    return;
  v24 = that->fields.simpleAnimation;
  if ( !v24 )
    goto LABEL_60;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v24[1].monitor;
  if ( !this )
    goto LABEL_60;
  v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v24, v25, 0LL);
  if ( !this )
    goto LABEL_60;
  v26 = this->klass;
  v27 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v26->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v29 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_53;
    }
    v30 = (__int64)(&v26->vtable._3_ToString.method + 2 * *v29);
  }
  else
  {
LABEL_53:
    v30 = sub_AA67A0(this, SimpleAnimation_State_TypeInfo, 3LL);
  }
  if ( (*(float (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8)) >= that->fields.animationEndTime )
  {
    this = (QuestBoardListEffectComponent_StatePlay_o *)that->fields.simpleAnimation;
    if ( this )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)this, 0LL);
      goto LABEL_59;
    }
LABEL_60:
    sub_B0D97C(this);
  }
}