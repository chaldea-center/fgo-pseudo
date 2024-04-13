void __fastcall QuestBoardListEffectComponent___ctor(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestBoardListEffectComponent__Awake(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
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
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x21
  QuestBoardListEffectComponent_StateNone_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  struct CStateManager_QuestBoardListEffectComponent__o *v28; // x20
  QuestBoardListEffectComponent_StatePlay_o *v29; // x21
  const MethodInfo *v30; // x2

  if ( (byte_42EA016 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestBoardListEffectComponent___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_QuestBoardListEffectComponent__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_QuestBoardListEffectComponent__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&QuestBoardListEffectComponent_StateNone_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&QuestBoardListEffectComponent_StatePlay_TypeInfo, v14, v15, v16);
    byte_42EA016 = 1;
  }
  if ( !this->fields.FSM )
  {
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_QuestBoardListEffectComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v17,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2BB2630 *)Method_CStateManager_QuestBoardListEffectComponent___ctor__);
    this->fields.FSM = (struct CStateManager_QuestBoardListEffectComponent__o *)v17;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.FSM,
      (System_Int32_array **)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    FSM = this->fields.FSM;
    v25 = (QuestBoardListEffectComponent_StateNone_o *)sub_B5D694(QuestBoardListEffectComponent_StateNone_TypeInfo);
    QuestBoardListEffectComponent_StateNone___ctor(v25, 0LL);
    if ( !FSM
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)FSM,
            0,
            (IState_T__o *)v25,
            (const MethodInfo_2BB26FC *)Method_CStateManager_QuestBoardListEffectComponent__add__),
          v28 = this->fields.FSM,
          v29 = (QuestBoardListEffectComponent_StatePlay_o *)sub_B5D694(QuestBoardListEffectComponent_StatePlay_TypeInfo),
          QuestBoardListEffectComponent_StatePlay___ctor(v29, 0LL),
          !v28) )
    {
      sub_B5D69C(v26, v27);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v28,
      1,
      (IState_T__o *)v29,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestBoardListEffectComponent__add__);
    QuestBoardListEffectComponent__SetState(this, 0, v30);
  }
}


int32_t __fastcall QuestBoardListEffectComponent__GetState(
        QuestBoardListEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestBoardListEffectComponent_o *v4; // x19
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x8

  v4 = this;
  if ( (byte_42EA01A & 1) == 0 )
  {
    this = (QuestBoardListEffectComponent_o *)sub_B5D5C4(
                                                &Method_CStateManager_QuestBoardListEffectComponent__getState__,
                                                (_DWORD)method,
                                                v2,
                                                v3);
    byte_42EA01A = 1;
  }
  FSM = v4->fields.FSM;
  if ( !FSM )
    sub_B5D69C(this, method);
  return FSM->fields.m_state;
}


void __fastcall QuestBoardListEffectComponent__Init(
        QuestBoardListEffectComponent_o *this,
        bool isInitDisp,
        float startTime,
        float endTime,
        const MethodInfo *method)
{
  __int64 v5; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  char v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct UnityEngine_Animation_o *Component_WebViewObject; // x0
  UnityEngine_Animation_o **p_normalAnimation; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Component_o *transform; // x0
  __int64 v28; // x1
  struct SimpleAnimation_o *ComponentInChildren_UIWidget; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v38; // x21
  System_String_o *v39; // x0
  __int64 v40; // x3
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v42; // x21
  unsigned __int64 v43; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v45; // x0
  UnityEngine_Animation_o *v46; // x22
  UnityEngine_Animation_o *v47; // x22
  System_String_o *name; // x0
  UnityEngine_Animation_o *v49; // x21
  System_String_o *v50; // x0
  SimpleAnimation_o *v51; // x21
  System_String_o *v52; // x0
  __int64 v53; // x3
  UnityEngine_Component_c *v54; // x8
  UnityEngine_Component_o *v55; // x21
  unsigned __int64 v56; // x10
  SimpleAnimation_State_c **v57; // x11
  __int64 v58; // x0

  if ( (byte_42EA018 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, isInitDisp, (_DWORD)method, v5);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Animation___, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v16, v17, v18);
    byte_42EA018 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_normalAnimation = &this->fields.normalAnimation;
  this->fields.normalAnimation = Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.normalAnimation,
    (System_Int32_array **)Component_WebViewObject,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_40;
  ComponentInChildren_UIWidget = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                               transform,
                                                               (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = ComponentInChildren_UIWidget;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    v46 = *p_normalAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_38;
    v47 = *p_normalAnimation;
    if ( *p_normalAnimation )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(*p_normalAnimation, 0LL);
      if ( transform )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v47, name, 0LL);
        if ( transform )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
          v49 = *p_normalAnimation;
          if ( v49 )
          {
            transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(v49, 0LL);
            if ( transform )
            {
              v50 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
              transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v49, v50, 0LL);
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
    sub_B5D69C(transform, v28);
  }
  v38 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_40;
  transform = (UnityEngine_Component_o *)v38[1].monitor;
  if ( !transform )
    goto LABEL_40;
  v39 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v38, v39, 0LL);
  if ( !transform )
    goto LABEL_40;
  klass = transform->klass;
  v42 = transform;
  if ( *(_WORD *)&transform->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v43;
      p_offset += 2;
      if ( v43 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v45 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v45 = sub_AF54C0(transform, SimpleAnimation_State_TypeInfo, 8LL, v40);
  }
  transform = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v45)(
                                           v42,
                                           *(_QWORD *)(v45 + 8),
                                           0.0);
  v51 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_40;
  transform = (UnityEngine_Component_o *)v51[1].monitor;
  if ( !transform )
    goto LABEL_40;
  v52 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v51, v52, 0LL);
  if ( !transform )
    goto LABEL_40;
  v54 = transform->klass;
  v55 = transform;
  if ( *(_WORD *)&transform->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    v57 = (SimpleAnimation_State_c **)&v54->_1.interfaceOffsets->offset;
    while ( *(v57 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v56;
      v57 += 2;
      if ( v56 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v58 = (__int64)(&v54[1]._1.byval_arg.bits + 4 * *(_DWORD *)v57);
  }
  else
  {
LABEL_35:
    v58 = sub_AF54C0(transform, SimpleAnimation_State_TypeInfo, 6LL, v53);
  }
  (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v58)(v55, *(_QWORD *)(v58 + 8), 0.0);
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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( OnPlayingAct )
  {
    this->fields.OnPlayingAct = OnPlayingAct;
    sub_B5D560(
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
    sub_B5D69C(0LL, v11);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.EndAct = end_act;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.EndAct,
    (System_Int32_array **)end_act,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  QuestBoardListEffectComponent__SetState(this, 1, v18);
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
  __int64 v3; // x3
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x0

  if ( (byte_42EA01B & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestBoardListEffectComponent__setState__, state, (_DWORD)method, v3);
    byte_42EA01B = 1;
  }
  FSM = this->fields.FSM;
  if ( !FSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)FSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_QuestBoardListEffectComponent__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListEffectComponent__Skip(
        QuestBoardListEffectComponent_o *this,
        float time,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  long double v5; // q8
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *monitor; // x0
  __int64 v12; // x1
  struct SimpleAnimation_o *v13; // x20
  System_String_o *name; // x0
  __int64 v15; // x3
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v17; // x20
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v20; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v22; // x20
  System_String_o *v23; // x0

  v5 = *(long double *)&time;
  if ( (byte_42EA019 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v7, v8, v9);
    byte_42EA019 = 1;
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
    v13 = this->fields.simpleAnimation;
    if ( v13 )
    {
      monitor = (UnityEngine_Object_o *)v13[1].monitor;
      if ( monitor )
      {
        name = UnityEngine_Object__get_name(monitor, 0LL);
        monitor = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v13, name, 0LL);
        if ( monitor )
        {
          klass = monitor->klass;
          v17 = monitor;
          if ( *(_WORD *)&monitor->klass->_2.bitflags1 )
          {
            v18 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v18;
              p_offset += 2;
              if ( v18 >= *(unsigned __int16 *)&monitor->klass->_2.bitflags1 )
                goto LABEL_14;
            }
            v20 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_14:
            v20 = sub_AF54C0(monitor, SimpleAnimation_State_TypeInfo, 4LL, v15);
          }
          (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v20)(v17, *(_QWORD *)(v20 + 8), v5);
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
    sub_B5D69C(monitor, v12);
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
    v22 = this->fields.normalAnimation;
    if ( v22 )
    {
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.normalAnimation, 0LL);
      if ( monitor )
      {
        v23 = UnityEngine_Object__get_name(monitor, 0LL);
        monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v22, v23, 0LL);
        if ( monitor )
        {
          UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)monitor, *(float *)&v5, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x0

  if ( (byte_42EA017 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestBoardListEffectComponent__update__, (_DWORD)method, v2, v3);
    byte_42EA017 = 1;
  }
  FSM = this->fields.FSM;
  if ( FSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)FSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_QuestBoardListEffectComponent__update__);
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
  __int64 v3; // x3
  long double v4; // q8
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v10; // x20
  System_String_o *v11; // x0
  struct SimpleAnimation_o *v12; // x20
  System_String_o *v13; // x0
  struct SimpleAnimation_o *v14; // x20
  System_String_o *v15; // x0
  __int64 v16; // x3
  QuestBoardListEffectComponent_StatePlay_c *klass; // x8
  QuestBoardListEffectComponent_StatePlay_o *v18; // x20
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 v21; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v23; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v25; // x20
  System_String_o *v26; // x0
  UnityEngine_Animation_o *v27; // x20
  System_String_o *v28; // x0
  UnityEngine_Animation_o *v29; // x19
  System_String_o *v30; // x0
  struct SimpleAnimation_o *v31; // x19
  System_String_o *v32; // x0
  __int64 v33; // x3
  QuestBoardListEffectComponent_StatePlay_c *v34; // x8
  QuestBoardListEffectComponent_StatePlay_o *v35; // x19
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0

  if ( (byte_42E7ED8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v6, v7, v8);
    byte_42E7ED8 = 1;
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
    v23 = that->fields.normalAnimation;
    if ( v23 )
    {
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v23, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v25 = that->fields.normalAnimation;
          if ( !v25 )
            goto LABEL_51;
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                that->fields.normalAnimation,
                                                                0LL);
          if ( !this )
            goto LABEL_51;
          v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__Play_51249124(v25, v26, 0LL);
        }
        v27 = that->fields.normalAnimation;
        if ( v27 )
        {
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                that->fields.normalAnimation,
                                                                0LL);
          if ( this )
          {
            v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v27, v28, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_time(
                (UnityEngine_AnimationState_o *)this,
                that->fields.animationStartTime,
                0LL);
              v29 = that->fields.normalAnimation;
              if ( v29 )
              {
                this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(v29, 0LL);
                if ( this )
                {
                  v30 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v29, v30, 0LL);
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
    sub_B5D69C(this, that);
  }
  v10 = that->fields.simpleAnimation;
  if ( !v10 )
    goto LABEL_51;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v10[1].monitor;
  if ( !this )
    goto LABEL_51;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v10, v11, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v12 = that->fields.simpleAnimation;
    if ( !v12 )
      goto LABEL_51;
    this = (QuestBoardListEffectComponent_StatePlay_o *)v12[1].monitor;
    if ( !this )
      goto LABEL_51;
    v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__Play_16676044(v12, v13, 0LL);
  }
  v14 = that->fields.simpleAnimation;
  if ( !v14 )
    goto LABEL_51;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v14[1].monitor;
  if ( !this )
    goto LABEL_51;
  v15 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v14, v15, 0LL);
  if ( !this )
    goto LABEL_51;
  klass = this->klass;
  *(float *)&v4 = that->fields.animationStartTime;
  v18 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v21 = (__int64)(&klass->vtable._4_begin.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v21 = sub_AF54C0(this, SimpleAnimation_State_TypeInfo, 4LL, v16);
  }
  this = (QuestBoardListEffectComponent_StatePlay_o *)(*(__int64 (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD, long double))v21)(
                                                        v18,
                                                        *(_QWORD *)(v21 + 8),
                                                        v4);
  v31 = that->fields.simpleAnimation;
  if ( !v31 )
    goto LABEL_51;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v31[1].monitor;
  if ( !this )
    goto LABEL_51;
  v32 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v31, v32, 0LL);
  if ( !this )
    goto LABEL_51;
  v34 = this->klass;
  v35 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    v37 = &v34->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v37 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_48;
    }
    v38 = (__int64)(&v34[1]._1.namespaze + 2 * *v37);
  }
  else
  {
LABEL_48:
    v38 = sub_AF54C0(this, SimpleAnimation_State_TypeInfo, 8LL, v33);
  }
  (*(void (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD, float))v38)(
    v35,
    *(_QWORD *)(v38 + 8),
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v9; // x20
  System_String_o *v10; // x0
  __int64 v11; // x3
  QuestBoardListEffectComponent_StatePlay_c *klass; // x8
  QuestBoardListEffectComponent_StatePlay_o *v13; // x20
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 v16; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v18; // x20
  System_String_o *name; // x0
  System_Action_o *OnPlayingAct; // x0
  UnityEngine_Animation_o *v21; // x20
  System_String_o *v22; // x0
  UnityEngine_Animation_o *v23; // x20
  System_String_o *v24; // x0
  System_Action_o *v25; // x0
  struct SimpleAnimation_o *v26; // x20
  System_String_o *v27; // x0
  struct SimpleAnimation_o *v28; // x20
  System_String_o *v29; // x0
  __int64 v30; // x3
  QuestBoardListEffectComponent_StatePlay_c *v31; // x8
  QuestBoardListEffectComponent_StatePlay_o *v32; // x20
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0

  if ( (byte_42E7ED9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v5, v6, v7);
    byte_42E7ED9 = 1;
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
      v18 = that->fields.normalAnimation;
      if ( !v18 )
        goto LABEL_60;
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0LL);
      if ( !this )
        goto LABEL_60;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v18, name, 0LL);
      if ( !this )
        goto LABEL_60;
      if ( UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)this, 0LL) >= that->fields.playingActStartTime )
      {
        OnPlayingAct = that->fields.OnPlayingAct;
        that->fields.isPlayingAct = 1;
        ActionExtensions__Call(OnPlayingAct, 0LL);
      }
    }
    v21 = that->fields.normalAnimation;
    if ( !v21 )
      goto LABEL_60;
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                          that->fields.normalAnimation,
                                                          0LL);
    if ( !this )
      goto LABEL_60;
    v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v21, v22, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( that->fields.animationEndTime == 0.0 )
        return;
      v23 = that->fields.normalAnimation;
      if ( !v23 )
        goto LABEL_60;
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0LL);
      if ( !this )
        goto LABEL_60;
      v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v23, v24, 0LL);
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
    v9 = that->fields.simpleAnimation;
    if ( !v9 )
      goto LABEL_60;
    this = (QuestBoardListEffectComponent_StatePlay_o *)v9[1].monitor;
    if ( !this )
      goto LABEL_60;
    v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v9, v10, 0LL);
    if ( !this )
      goto LABEL_60;
    klass = this->klass;
    v13 = this;
    if ( *(_WORD *)&this->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v16 = (__int64)(&klass->vtable._3_ToString.method + 2 * *p_offset);
    }
    else
    {
LABEL_17:
      v16 = sub_AF54C0(this, SimpleAnimation_State_TypeInfo, 3LL, v11);
    }
    if ( (*(float (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD))v16)(v13, *(_QWORD *)(v16 + 8)) >= that->fields.playingActStartTime )
    {
      v25 = that->fields.OnPlayingAct;
      that->fields.isPlayingAct = 1;
      ActionExtensions__Call(v25, 0LL);
    }
  }
  v26 = that->fields.simpleAnimation;
  if ( !v26 )
    goto LABEL_60;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v26[1].monitor;
  if ( !this )
    goto LABEL_60;
  v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v26, v27, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_59;
  if ( that->fields.animationEndTime == 0.0 )
    return;
  v28 = that->fields.simpleAnimation;
  if ( !v28 )
    goto LABEL_60;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v28[1].monitor;
  if ( !this )
    goto LABEL_60;
  v29 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v28, v29, 0LL);
  if ( !this )
    goto LABEL_60;
  v31 = this->klass;
  v32 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v31->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v34 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_53;
    }
    v35 = (__int64)(&v31->vtable._3_ToString.method + 2 * *v34);
  }
  else
  {
LABEL_53:
    v35 = sub_AF54C0(this, SimpleAnimation_State_TypeInfo, 3LL, v30);
  }
  if ( (*(float (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8)) >= that->fields.animationEndTime )
  {
    this = (QuestBoardListEffectComponent_StatePlay_o *)that->fields.simpleAnimation;
    if ( this )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)this, 0LL);
      goto LABEL_59;
    }
LABEL_60:
    sub_B5D69C(this, that);
  }
}