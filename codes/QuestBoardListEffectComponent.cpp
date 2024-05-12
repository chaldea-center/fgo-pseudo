void __fastcall QuestBoardListEffectComponent___ctor(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestBoardListEffectComponent__Awake(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  CStateManager_QAASpotStateController_IMapSpot__o *v3; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x21
  QuestBoardListEffectComponent_StateNone_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  struct CStateManager_QuestBoardListEffectComponent__o *v14; // x20
  QuestBoardListEffectComponent_StatePlay_o *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_438C7DA & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_QuestBoardListEffectComponent___ctor__);
    sub_B775C4(&Method_CStateManager_QuestBoardListEffectComponent__add__);
    sub_B775C4(&CStateManager_QuestBoardListEffectComponent__TypeInfo);
    sub_B775C4(&QuestBoardListEffectComponent_StateNone_TypeInfo);
    sub_B775C4(&QuestBoardListEffectComponent_StatePlay_TypeInfo);
    byte_438C7DA = 1;
  }
  if ( !this->fields.FSM )
  {
    v3 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B77694(CStateManager_QuestBoardListEffectComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v3,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2CBF0B0 *)Method_CStateManager_QuestBoardListEffectComponent___ctor__);
    this->fields.FSM = (struct CStateManager_QuestBoardListEffectComponent__o *)v3;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.FSM, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
    FSM = this->fields.FSM;
    v11 = (QuestBoardListEffectComponent_StateNone_o *)sub_B77694(QuestBoardListEffectComponent_StateNone_TypeInfo);
    QuestBoardListEffectComponent_StateNone___ctor(v11, 0LL);
    if ( !FSM
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)FSM,
            0,
            (IState_T__o *)v11,
            (const MethodInfo_2CBF17C *)Method_CStateManager_QuestBoardListEffectComponent__add__),
          v14 = this->fields.FSM,
          v15 = (QuestBoardListEffectComponent_StatePlay_o *)sub_B77694(QuestBoardListEffectComponent_StatePlay_TypeInfo),
          QuestBoardListEffectComponent_StatePlay___ctor(v15, 0LL),
          !v14) )
    {
      sub_B7769C(v12, v13);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v14,
      1,
      (IState_T__o *)v15,
      (const MethodInfo_2CBF17C *)Method_CStateManager_QuestBoardListEffectComponent__add__);
    QuestBoardListEffectComponent__SetState(this, 0, v16);
  }
}


int32_t __fastcall QuestBoardListEffectComponent__GetState(
        QuestBoardListEffectComponent_o *this,
        const MethodInfo *method)
{
  QuestBoardListEffectComponent_o *v2; // x19
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x8

  v2 = this;
  if ( (byte_438C7DE & 1) == 0 )
  {
    this = (QuestBoardListEffectComponent_o *)sub_B775C4(&Method_CStateManager_QuestBoardListEffectComponent__getState__);
    byte_438C7DE = 1;
  }
  FSM = v2->fields.FSM;
  if ( !FSM )
    sub_B7769C(this, method);
  return FSM->fields.m_state;
}


void __fastcall QuestBoardListEffectComponent__Init(
        QuestBoardListEffectComponent_o *this,
        bool isInitDisp,
        float startTime,
        float endTime,
        const MethodInfo *method)
{
  struct UnityEngine_Animation_o *Component_WebViewObject; // x0
  UnityEngine_Animation_o **p_normalAnimation; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Component_o *transform; // x0
  __int64 v18; // x1
  struct SimpleAnimation_o *ComponentInChildren_UIWidget; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v28; // x21
  System_String_o *v29; // x0
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v31; // x21
  unsigned __int64 v32; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v34; // x0
  UnityEngine_Animation_o *v35; // x22
  UnityEngine_Animation_o *v36; // x22
  System_String_o *name; // x0
  UnityEngine_Animation_o *v38; // x21
  System_String_o *v39; // x0
  SimpleAnimation_o *v40; // x21
  System_String_o *v41; // x0
  UnityEngine_Component_c *v42; // x8
  UnityEngine_Component_o *v43; // x21
  unsigned __int64 v44; // x10
  SimpleAnimation_State_c **v45; // x11
  __int64 v46; // x0

  if ( (byte_438C7DC & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_438C7DC = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_normalAnimation = &this->fields.normalAnimation;
  this->fields.normalAnimation = Component_WebViewObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.normalAnimation,
    (System_Int32_array **)Component_WebViewObject,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_40;
  ComponentInChildren_UIWidget = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                               transform,
                                                               (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = ComponentInChildren_UIWidget;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    v35 = *p_normalAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_38;
    v36 = *p_normalAnimation;
    if ( *p_normalAnimation )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(*p_normalAnimation, 0LL);
      if ( transform )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v36, name, 0LL);
        if ( transform )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
          v38 = *p_normalAnimation;
          if ( v38 )
          {
            transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(v38, 0LL);
            if ( transform )
            {
              v39 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
              transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v38, v39, 0LL);
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
    sub_B7769C(transform, v18);
  }
  v28 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_40;
  transform = (UnityEngine_Component_o *)v28[1].monitor;
  if ( !transform )
    goto LABEL_40;
  v29 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v28, v29, 0LL);
  if ( !transform )
    goto LABEL_40;
  klass = transform->klass;
  v31 = transform;
  if ( *(_WORD *)&transform->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v32;
      p_offset += 2;
      if ( v32 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v34 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v34 = sub_B0F4C0(transform, SimpleAnimation_State_TypeInfo, 8LL);
  }
  transform = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v34)(
                                           v31,
                                           *(_QWORD *)(v34 + 8),
                                           0.0);
  v40 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_40;
  transform = (UnityEngine_Component_o *)v40[1].monitor;
  if ( !transform )
    goto LABEL_40;
  v41 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v40, v41, 0LL);
  if ( !transform )
    goto LABEL_40;
  v42 = transform->klass;
  v43 = transform;
  if ( *(_WORD *)&transform->klass->_2.bitflags1 )
  {
    v44 = 0LL;
    v45 = (SimpleAnimation_State_c **)&v42->_1.interfaceOffsets->offset;
    while ( *(v45 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v44;
      v45 += 2;
      if ( v44 >= *(unsigned __int16 *)&transform->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v46 = (__int64)(&v42[1]._1.byval_arg.bits + 4 * *(_DWORD *)v45);
  }
  else
  {
LABEL_35:
    v46 = sub_B0F4C0(transform, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v46)(v43, *(_QWORD *)(v46 + 8), 0.0);
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
    sub_B77560(
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
    sub_B7769C(0LL, v11);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.EndAct = end_act;
  sub_B77560(
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

  if ( (byte_438C7DF & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_QuestBoardListEffectComponent__setState__);
    byte_438C7DF = 1;
  }
  FSM = this->fields.FSM;
  if ( !FSM )
    sub_B7769C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)FSM,
    state,
    (const MethodInfo_2CBF220 *)Method_CStateManager_QuestBoardListEffectComponent__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListEffectComponent__Skip(
        QuestBoardListEffectComponent_o *this,
        float time,
        const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *monitor; // x0
  __int64 v7; // x1
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
  if ( (byte_438C7DD & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_438C7DD = 1;
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
            v14 = sub_B0F4C0(monitor, SimpleAnimation_State_TypeInfo, 4LL);
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
    sub_B7769C(monitor, v7);
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

  if ( (byte_438C7DB & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_QuestBoardListEffectComponent__update__);
    byte_438C7DB = 1;
  }
  FSM = this->fields.FSM;
  if ( FSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)FSM,
      (const MethodInfo_2CBF1F8 *)Method_CStateManager_QuestBoardListEffectComponent__update__);
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
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  System_String_o *v7; // x0
  struct SimpleAnimation_o *v8; // x20
  System_String_o *v9; // x0
  struct SimpleAnimation_o *v10; // x20
  System_String_o *v11; // x0
  QuestBoardListEffectComponent_StatePlay_c *klass; // x8
  QuestBoardListEffectComponent_StatePlay_o *v13; // x20
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 v16; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v18; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v20; // x20
  System_String_o *v21; // x0
  UnityEngine_Animation_o *v22; // x20
  System_String_o *v23; // x0
  UnityEngine_Animation_o *v24; // x19
  System_String_o *v25; // x0
  struct SimpleAnimation_o *v26; // x19
  System_String_o *v27; // x0
  QuestBoardListEffectComponent_StatePlay_c *v28; // x8
  QuestBoardListEffectComponent_StatePlay_o *v29; // x19
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0

  if ( (byte_438B160 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_438B160 = 1;
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
    v18 = that->fields.normalAnimation;
    if ( v18 )
    {
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v18, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v20 = that->fields.normalAnimation;
          if ( !v20 )
            goto LABEL_51;
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                that->fields.normalAnimation,
                                                                0LL);
          if ( !this )
            goto LABEL_51;
          v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__Play_51745976(v20, v21, 0LL);
        }
        v22 = that->fields.normalAnimation;
        if ( v22 )
        {
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                that->fields.normalAnimation,
                                                                0LL);
          if ( this )
          {
            v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v22, v23, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_time(
                (UnityEngine_AnimationState_o *)this,
                that->fields.animationStartTime,
                0LL);
              v24 = that->fields.normalAnimation;
              if ( v24 )
              {
                this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(v24, 0LL);
                if ( this )
                {
                  v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v24, v25, 0LL);
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
    sub_B7769C(this, that);
  }
  v6 = that->fields.simpleAnimation;
  if ( !v6 )
    goto LABEL_51;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v6[1].monitor;
  if ( !this )
    goto LABEL_51;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v6, v7, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v8 = that->fields.simpleAnimation;
    if ( !v8 )
      goto LABEL_51;
    this = (QuestBoardListEffectComponent_StatePlay_o *)v8[1].monitor;
    if ( !this )
      goto LABEL_51;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__Play_16815192(v8, v9, 0LL);
  }
  v10 = that->fields.simpleAnimation;
  if ( !v10 )
    goto LABEL_51;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v10[1].monitor;
  if ( !this )
    goto LABEL_51;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v10, v11, 0LL);
  if ( !this )
    goto LABEL_51;
  klass = this->klass;
  *(float *)&v3 = that->fields.animationStartTime;
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
        goto LABEL_21;
    }
    v16 = (__int64)(&klass->vtable._4_begin.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v16 = sub_B0F4C0(this, SimpleAnimation_State_TypeInfo, 4LL);
  }
  this = (QuestBoardListEffectComponent_StatePlay_o *)(*(__int64 (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD, long double))v16)(
                                                        v13,
                                                        *(_QWORD *)(v16 + 8),
                                                        v3);
  v26 = that->fields.simpleAnimation;
  if ( !v26 )
    goto LABEL_51;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v26[1].monitor;
  if ( !this )
    goto LABEL_51;
  v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v26, v27, 0LL);
  if ( !this )
    goto LABEL_51;
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
        goto LABEL_48;
    }
    v32 = (__int64)(&v28[1]._1.namespaze + 2 * *v31);
  }
  else
  {
LABEL_48:
    v32 = sub_B0F4C0(this, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD, float))v32)(
    v29,
    *(_QWORD *)(v32 + 8),
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
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x20
  System_String_o *v6; // x0
  QuestBoardListEffectComponent_StatePlay_c *klass; // x8
  QuestBoardListEffectComponent_StatePlay_o *v8; // x20
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 v11; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v13; // x20
  System_String_o *name; // x0
  System_Action_o *OnPlayingAct; // x0
  UnityEngine_Animation_o *v16; // x20
  System_String_o *v17; // x0
  UnityEngine_Animation_o *v18; // x20
  System_String_o *v19; // x0
  System_Action_o *v20; // x0
  struct SimpleAnimation_o *v21; // x20
  System_String_o *v22; // x0
  struct SimpleAnimation_o *v23; // x20
  System_String_o *v24; // x0
  QuestBoardListEffectComponent_StatePlay_c *v25; // x8
  QuestBoardListEffectComponent_StatePlay_o *v26; // x20
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0

  if ( (byte_438B161 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_438B161 = 1;
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
      v13 = that->fields.normalAnimation;
      if ( !v13 )
        goto LABEL_60;
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0LL);
      if ( !this )
        goto LABEL_60;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v13, name, 0LL);
      if ( !this )
        goto LABEL_60;
      if ( UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)this, 0LL) >= that->fields.playingActStartTime )
      {
        OnPlayingAct = that->fields.OnPlayingAct;
        that->fields.isPlayingAct = 1;
        ActionExtensions__Call(OnPlayingAct, 0LL);
      }
    }
    v16 = that->fields.normalAnimation;
    if ( !v16 )
      goto LABEL_60;
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                          that->fields.normalAnimation,
                                                          0LL);
    if ( !this )
      goto LABEL_60;
    v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v16, v17, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( that->fields.animationEndTime == 0.0 )
        return;
      v18 = that->fields.normalAnimation;
      if ( !v18 )
        goto LABEL_60;
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0LL);
      if ( !this )
        goto LABEL_60;
      v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v18, v19, 0LL);
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
    v5 = that->fields.simpleAnimation;
    if ( !v5 )
      goto LABEL_60;
    this = (QuestBoardListEffectComponent_StatePlay_o *)v5[1].monitor;
    if ( !this )
      goto LABEL_60;
    v6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v5, v6, 0LL);
    if ( !this )
      goto LABEL_60;
    klass = this->klass;
    v8 = this;
    if ( *(_WORD *)&this->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v11 = (__int64)(&klass->vtable._3_ToString.method + 2 * *p_offset);
    }
    else
    {
LABEL_17:
      v11 = sub_B0F4C0(this, SimpleAnimation_State_TypeInfo, 3LL);
    }
    if ( (*(float (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD))v11)(v8, *(_QWORD *)(v11 + 8)) >= that->fields.playingActStartTime )
    {
      v20 = that->fields.OnPlayingAct;
      that->fields.isPlayingAct = 1;
      ActionExtensions__Call(v20, 0LL);
    }
  }
  v21 = that->fields.simpleAnimation;
  if ( !v21 )
    goto LABEL_60;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v21[1].monitor;
  if ( !this )
    goto LABEL_60;
  v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v21, v22, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_59;
  if ( that->fields.animationEndTime == 0.0 )
    return;
  v23 = that->fields.simpleAnimation;
  if ( !v23 )
    goto LABEL_60;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v23[1].monitor;
  if ( !this )
    goto LABEL_60;
  v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v23, v24, 0LL);
  if ( !this )
    goto LABEL_60;
  v25 = this->klass;
  v26 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v25->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v28 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_53;
    }
    v29 = (__int64)(&v25->vtable._3_ToString.method + 2 * *v28);
  }
  else
  {
LABEL_53:
    v29 = sub_B0F4C0(this, SimpleAnimation_State_TypeInfo, 3LL);
  }
  if ( (*(float (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8)) >= that->fields.animationEndTime )
  {
    this = (QuestBoardListEffectComponent_StatePlay_o *)that->fields.simpleAnimation;
    if ( this )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)this, 0LL);
      goto LABEL_59;
    }
LABEL_60:
    sub_B7769C(this, that);
  }
}