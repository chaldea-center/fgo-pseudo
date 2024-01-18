void __fastcall QuestBoardListEffectComponent___ctor(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestBoardListEffectComponent__Awake(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x21
  QuestBoardListEffectComponent_StateNone_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  struct CStateManager_QuestBoardListEffectComponent__o *v18; // x20
  QuestBoardListEffectComponent_StatePlay_o *v19; // x21
  const MethodInfo *v20; // x2

  if ( (byte_418A270 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestBoardListEffectComponent___ctor__, method);
    sub_B2C35C(&Method_CStateManager_QuestBoardListEffectComponent__add__, v3);
    sub_B2C35C(&CStateManager_QuestBoardListEffectComponent__TypeInfo, v4);
    sub_B2C35C(&QuestBoardListEffectComponent_StateNone_TypeInfo, v5);
    sub_B2C35C(&QuestBoardListEffectComponent_StatePlay_TypeInfo, v6);
    byte_418A270 = 1;
  }
  if ( !this->fields.FSM )
  {
    v7 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_QuestBoardListEffectComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v7,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2A08354 *)Method_CStateManager_QuestBoardListEffectComponent___ctor__);
    this->fields.FSM = (struct CStateManager_QuestBoardListEffectComponent__o *)v7;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.FSM, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
    FSM = this->fields.FSM;
    v15 = (QuestBoardListEffectComponent_StateNone_o *)sub_B2C42C(QuestBoardListEffectComponent_StateNone_TypeInfo);
    QuestBoardListEffectComponent_StateNone___ctor(v15, 0LL);
    if ( !FSM
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)FSM,
            0,
            (IState_T__o *)v15,
            (const MethodInfo_2A08420 *)Method_CStateManager_QuestBoardListEffectComponent__add__),
          v18 = this->fields.FSM,
          v19 = (QuestBoardListEffectComponent_StatePlay_o *)sub_B2C42C(QuestBoardListEffectComponent_StatePlay_TypeInfo),
          QuestBoardListEffectComponent_StatePlay___ctor(v19, 0LL),
          !v18) )
    {
      sub_B2C434(v16, v17);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v18,
      1,
      (IState_T__o *)v19,
      (const MethodInfo_2A08420 *)Method_CStateManager_QuestBoardListEffectComponent__add__);
    QuestBoardListEffectComponent__SetState(this, 0, v20);
  }
}


int32_t __fastcall QuestBoardListEffectComponent__GetState(
        QuestBoardListEffectComponent_o *this,
        const MethodInfo *method)
{
  QuestBoardListEffectComponent_o *v2; // x19
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x8

  v2 = this;
  if ( (byte_418A274 & 1) == 0 )
  {
    this = (QuestBoardListEffectComponent_o *)sub_B2C35C(
                                                &Method_CStateManager_QuestBoardListEffectComponent__getState__,
                                                method);
    byte_418A274 = 1;
  }
  FSM = v2->fields.FSM;
  if ( !FSM )
    sub_B2C434(this, method);
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
  __int64 v21; // x1
  struct SimpleAnimation_o *ComponentInChildren_UIWidget; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v31; // x21
  System_String_o *v32; // x0
  __int64 v33; // x3
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v35; // x21
  unsigned __int64 v36; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v38; // x0
  UnityEngine_Animation_o *v39; // x22
  UnityEngine_Animation_o *v40; // x22
  System_String_o *name; // x0
  UnityEngine_Animation_o *v42; // x21
  System_String_o *v43; // x0
  SimpleAnimation_o *v44; // x21
  System_String_o *v45; // x0
  __int64 v46; // x3
  UnityEngine_Component_c *v47; // x8
  UnityEngine_Component_o *v48; // x21
  unsigned __int64 v49; // x10
  SimpleAnimation_State_c **v50; // x11
  __int64 v51; // x0

  if ( (byte_418A272 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, isInitDisp);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Animation___, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v11);
    byte_418A272 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_normalAnimation = &this->fields.normalAnimation;
  this->fields.normalAnimation = Component_WebViewObject;
  sub_B2C2F8(
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
                                                               (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = ComponentInChildren_UIWidget;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    v39 = *p_normalAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_38;
    v40 = *p_normalAnimation;
    if ( *p_normalAnimation )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(*p_normalAnimation, 0LL);
      if ( transform )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v40, name, 0LL);
        if ( transform )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
          v42 = *p_normalAnimation;
          if ( v42 )
          {
            transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(v42, 0LL);
            if ( transform )
            {
              v43 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
              transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v42, v43, 0LL);
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
    sub_B2C434(transform, v21);
  }
  v31 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_40;
  transform = (UnityEngine_Component_o *)v31[1].monitor;
  if ( !transform )
    goto LABEL_40;
  v32 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v31, v32, 0LL);
  if ( !transform )
    goto LABEL_40;
  klass = transform->klass;
  v35 = transform;
  if ( *(_WORD *)&transform->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v36;
      p_offset += 2;
      if ( v36 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v38 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v38 = sub_AC5258(transform, SimpleAnimation_State_TypeInfo, 8LL, v33);
  }
  transform = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v38)(
                                           v35,
                                           *(_QWORD *)(v38 + 8),
                                           0.0);
  v44 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_40;
  transform = (UnityEngine_Component_o *)v44[1].monitor;
  if ( !transform )
    goto LABEL_40;
  v45 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v44, v45, 0LL);
  if ( !transform )
    goto LABEL_40;
  v47 = transform->klass;
  v48 = transform;
  if ( *(_WORD *)&transform->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    v50 = (SimpleAnimation_State_c **)&v47->_1.interfaceOffsets->offset;
    while ( *(v50 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v49;
      v50 += 2;
      if ( v49 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v51 = (__int64)(&v47[1]._1.byval_arg.bits + 4 * *(_DWORD *)v50);
  }
  else
  {
LABEL_35:
    v51 = sub_AC5258(transform, SimpleAnimation_State_TypeInfo, 6LL, v46);
  }
  (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v51)(v48, *(_QWORD *)(v51 + 8), 0.0);
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
    sub_B2C2F8(
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
    sub_B2C434(0LL, v11);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.EndAct = end_act;
  sub_B2C2F8(
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
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x0

  if ( (byte_418A275 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestBoardListEffectComponent__setState__, *(_QWORD *)&state);
    byte_418A275 = 1;
  }
  FSM = this->fields.FSM;
  if ( !FSM )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)FSM,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_QuestBoardListEffectComponent__setState__);
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
  __int64 v8; // x1
  struct SimpleAnimation_o *v9; // x20
  System_String_o *name; // x0
  __int64 v11; // x3
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v13; // x20
  unsigned __int64 v14; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v16; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v18; // x20
  System_String_o *v19; // x0

  v3 = *(long double *)&time;
  if ( (byte_418A273 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v5);
    byte_418A273 = 1;
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
    v9 = this->fields.simpleAnimation;
    if ( v9 )
    {
      monitor = (UnityEngine_Object_o *)v9[1].monitor;
      if ( monitor )
      {
        name = UnityEngine_Object__get_name(monitor, 0LL);
        monitor = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v9, name, 0LL);
        if ( monitor )
        {
          klass = monitor->klass;
          v13 = monitor;
          if ( *(_WORD *)&monitor->klass->_2.bitflags1 )
          {
            v14 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v14;
              p_offset += 2;
              if ( v14 >= *(unsigned __int16 *)&monitor->klass->_2.bitflags1 )
                goto LABEL_14;
            }
            v16 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_14:
            v16 = sub_AC5258(monitor, SimpleAnimation_State_TypeInfo, 4LL, v11);
          }
          (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v16)(v13, *(_QWORD *)(v16 + 8), v3);
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
    sub_B2C434(monitor, v8);
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
    v18 = this->fields.normalAnimation;
    if ( v18 )
    {
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.normalAnimation, 0LL);
      if ( monitor )
      {
        v19 = UnityEngine_Object__get_name(monitor, 0LL);
        monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v18, v19, 0LL);
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

  if ( (byte_418A271 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestBoardListEffectComponent__update__, method);
    byte_418A271 = 1;
  }
  FSM = this->fields.FSM;
  if ( FSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)FSM,
      (const MethodInfo_2A0849C *)Method_CStateManager_QuestBoardListEffectComponent__update__);
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
  __int64 v13; // x3
  QuestBoardListEffectComponent_StatePlay_c *klass; // x8
  QuestBoardListEffectComponent_StatePlay_o *v15; // x20
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 v18; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v20; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v22; // x20
  System_String_o *v23; // x0
  UnityEngine_Animation_o *v24; // x20
  System_String_o *v25; // x0
  UnityEngine_Animation_o *v26; // x19
  System_String_o *v27; // x0
  struct SimpleAnimation_o *v28; // x19
  System_String_o *v29; // x0
  __int64 v30; // x3
  QuestBoardListEffectComponent_StatePlay_c *v31; // x8
  QuestBoardListEffectComponent_StatePlay_o *v32; // x19
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0

  if ( (byte_41852E2 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_B2C35C(&SimpleAnimation_State_TypeInfo, v5);
    byte_41852E2 = 1;
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
    v20 = that->fields.normalAnimation;
    if ( v20 )
    {
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v20, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v22 = that->fields.normalAnimation;
          if ( !v22 )
            goto LABEL_51;
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                that->fields.normalAnimation,
                                                                0LL);
          if ( !this )
            goto LABEL_51;
          v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__Play_50201580(v22, v23, 0LL);
        }
        v24 = that->fields.normalAnimation;
        if ( v24 )
        {
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                that->fields.normalAnimation,
                                                                0LL);
          if ( this )
          {
            v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v24, v25, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_time(
                (UnityEngine_AnimationState_o *)this,
                that->fields.animationStartTime,
                0LL);
              v26 = that->fields.normalAnimation;
              if ( v26 )
              {
                this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(v26, 0LL);
                if ( this )
                {
                  v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v26, v27, 0LL);
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
    sub_B2C434(this, that);
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
    this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__Play_16486620(v9, v10, 0LL);
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
  v15 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v18 = (__int64)(&klass->vtable._4_begin.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v18 = sub_AC5258(this, SimpleAnimation_State_TypeInfo, 4LL, v13);
  }
  this = (QuestBoardListEffectComponent_StatePlay_o *)(*(__int64 (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD, long double))v18)(
                                                        v15,
                                                        *(_QWORD *)(v18 + 8),
                                                        v3);
  v28 = that->fields.simpleAnimation;
  if ( !v28 )
    goto LABEL_51;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v28[1].monitor;
  if ( !this )
    goto LABEL_51;
  v29 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v28, v29, 0LL);
  if ( !this )
    goto LABEL_51;
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
        goto LABEL_48;
    }
    v35 = (__int64)(&v31[1]._1.namespaze + 2 * *v34);
  }
  else
  {
LABEL_48:
    v35 = sub_AC5258(this, SimpleAnimation_State_TypeInfo, 8LL, v30);
  }
  (*(void (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD, float))v35)(
    v32,
    *(_QWORD *)(v35 + 8),
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
  __int64 v8; // x3
  QuestBoardListEffectComponent_StatePlay_c *klass; // x8
  QuestBoardListEffectComponent_StatePlay_o *v10; // x20
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 v13; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v15; // x20
  System_String_o *name; // x0
  System_Action_o *OnPlayingAct; // x0
  UnityEngine_Animation_o *v18; // x20
  System_String_o *v19; // x0
  UnityEngine_Animation_o *v20; // x20
  System_String_o *v21; // x0
  System_Action_o *v22; // x0
  struct SimpleAnimation_o *v23; // x20
  System_String_o *v24; // x0
  struct SimpleAnimation_o *v25; // x20
  System_String_o *v26; // x0
  __int64 v27; // x3
  QuestBoardListEffectComponent_StatePlay_c *v28; // x8
  QuestBoardListEffectComponent_StatePlay_o *v29; // x20
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0

  if ( (byte_41852E3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_B2C35C(&SimpleAnimation_State_TypeInfo, v4);
    byte_41852E3 = 1;
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
      v15 = that->fields.normalAnimation;
      if ( !v15 )
        goto LABEL_60;
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0LL);
      if ( !this )
        goto LABEL_60;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v15, name, 0LL);
      if ( !this )
        goto LABEL_60;
      if ( UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)this, 0LL) >= that->fields.playingActStartTime )
      {
        OnPlayingAct = that->fields.OnPlayingAct;
        that->fields.isPlayingAct = 1;
        ActionExtensions__Call(OnPlayingAct, 0LL);
      }
    }
    v18 = that->fields.normalAnimation;
    if ( !v18 )
      goto LABEL_60;
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                          that->fields.normalAnimation,
                                                          0LL);
    if ( !this )
      goto LABEL_60;
    v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v18, v19, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( that->fields.animationEndTime == 0.0 )
        return;
      v20 = that->fields.normalAnimation;
      if ( !v20 )
        goto LABEL_60;
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0LL);
      if ( !this )
        goto LABEL_60;
      v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v20, v21, 0LL);
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
    v10 = this;
    if ( *(_WORD *)&this->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v13 = (__int64)(&klass->vtable._3_ToString.method + 2 * *p_offset);
    }
    else
    {
LABEL_17:
      v13 = sub_AC5258(this, SimpleAnimation_State_TypeInfo, 3LL, v8);
    }
    if ( (*(float (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8)) >= that->fields.playingActStartTime )
    {
      v22 = that->fields.OnPlayingAct;
      that->fields.isPlayingAct = 1;
      ActionExtensions__Call(v22, 0LL);
    }
  }
  v23 = that->fields.simpleAnimation;
  if ( !v23 )
    goto LABEL_60;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v23[1].monitor;
  if ( !this )
    goto LABEL_60;
  v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v23, v24, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_59;
  if ( that->fields.animationEndTime == 0.0 )
    return;
  v25 = that->fields.simpleAnimation;
  if ( !v25 )
    goto LABEL_60;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v25[1].monitor;
  if ( !this )
    goto LABEL_60;
  v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v25, v26, 0LL);
  if ( !this )
    goto LABEL_60;
  v28 = this->klass;
  v29 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v28->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v31 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_53;
    }
    v32 = (__int64)(&v28->vtable._3_ToString.method + 2 * *v31);
  }
  else
  {
LABEL_53:
    v32 = sub_AC5258(this, SimpleAnimation_State_TypeInfo, 3LL, v27);
  }
  if ( (*(float (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8)) >= that->fields.animationEndTime )
  {
    this = (QuestBoardListEffectComponent_StatePlay_o *)that->fields.simpleAnimation;
    if ( this )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)this, 0LL);
      goto LABEL_59;
    }
LABEL_60:
    sub_B2C434(this, that);
  }
}