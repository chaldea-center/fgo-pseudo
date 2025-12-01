void QuestBoardListEffectComponent___ctor(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestBoardListEffectComponent__Awake(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *v3; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  CStateManager_T__o *FSM; // x21
  Il2CppObject *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  CStateManager_T__o *v14; // x20
  Il2CppObject *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4CC4048 & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_QuestBoardListEffectComponent___ctor__);
    sub_1C713B0(&Method_CStateManager_QuestBoardListEffectComponent__add__);
    sub_1C713B0(&CStateManager_QuestBoardListEffectComponent__TypeInfo);
    sub_1C713B0(&QuestBoardListEffectComponent_StateNone_TypeInfo);
    sub_1C713B0(&QuestBoardListEffectComponent_StatePlay_TypeInfo);
    byte_4CC4048 = 1;
  }
  if ( !this->fields.FSM )
  {
    v3 = (CStateManager_T__o *)sub_1C715FC(CStateManager_QuestBoardListEffectComponent__TypeInfo);
    CStateManager_object____ctor(
      v3,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_3394668 *)Method_CStateManager_QuestBoardListEffectComponent___ctor__);
    this->fields.FSM = (struct CStateManager_QuestBoardListEffectComponent__o *)v3;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.FSM, (int32_t)v3, v4, v5, v6, v7, v8, v9);
    FSM = (CStateManager_T__o *)this->fields.FSM;
    v11 = (Il2CppObject *)sub_1C715FC(QuestBoardListEffectComponent_StateNone_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !FSM
      || (CStateManager_object___add(
            FSM,
            0,
            (IState_T__o *)v11,
            (const MethodInfo_3394710 *)Method_CStateManager_QuestBoardListEffectComponent__add__),
          v14 = (CStateManager_T__o *)this->fields.FSM,
          v15 = (Il2CppObject *)sub_1C715FC(QuestBoardListEffectComponent_StatePlay_TypeInfo),
          System_Object___ctor(v15, 0),
          !v14) )
    {
      sub_1C71608(v12, v13);
    }
    CStateManager_object___add(
      v14,
      1,
      (IState_T__o *)v15,
      (const MethodInfo_3394710 *)Method_CStateManager_QuestBoardListEffectComponent__add__);
    QuestBoardListEffectComponent__SetState(this, 0, v16);
  }
}


int32_t QuestBoardListEffectComponent__GetState(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  QuestBoardListEffectComponent_o *v2; // x19
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x8

  v2 = this;
  if ( (byte_4CC404C & 1) == 0 )
  {
    this = (QuestBoardListEffectComponent_o *)sub_1C713B0(&Method_CStateManager_QuestBoardListEffectComponent__getState__);
    byte_4CC404C = 1;
  }
  FSM = v2->fields.FSM;
  if ( !FSM )
    sub_1C71608(this, method);
  return FSM->fields.m_state;
}


void QuestBoardListEffectComponent__Init(
        QuestBoardListEffectComponent_o *this,
        bool isInitDisp,
        float startTime,
        float endTime,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  UnityEngine_Animation_o **p_normalAnimation; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_Component_o *transform; // x0
  __int64 v18; // x1
  Il2CppObject *ComponentInChildren_object__51649344; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v28; // x21
  System_String_o *v29; // x0
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v31; // x21
  __int64 v32; // x9
  SimpleAnimation_State_c **p_offset; // x10
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
  __int64 v44; // x9
  SimpleAnimation_State_c **v45; // x10
  __int64 v46; // x0

  if ( (byte_4CC404A & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&SimpleAnimation_State_TypeInfo);
    byte_4CC404A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.normalAnimation = (struct UnityEngine_Animation_o *)Component_object;
  p_normalAnimation = &this->fields.normalAnimation;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.normalAnimation,
    (int32_t)Component_object,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_38;
  ComponentInChildren_object__51649344 = UnityEngine_Component__GetComponentInChildren_object__51649344(
                                           transform,
                                           (const MethodInfo_3141B40 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__51649344;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.simpleAnimation,
    (int32_t)ComponentInChildren_object__51649344,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    v35 = *p_normalAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35, 0, 0);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_36;
    v36 = *p_normalAnimation;
    if ( *p_normalAnimation )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(*p_normalAnimation, 0);
      if ( transform )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
        transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v36, name, 0);
        if ( transform )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0);
          v38 = *p_normalAnimation;
          if ( v38 )
          {
            transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(v38, 0);
            if ( transform )
            {
              v39 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
              transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v38, v39, 0);
              if ( transform )
              {
                UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)transform, 0.0, 0);
                goto LABEL_36;
              }
            }
          }
        }
      }
    }
LABEL_38:
    sub_1C71608(transform, v18);
  }
  v28 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_38;
  transform = (UnityEngine_Component_o *)v28->fields.m_Clip;
  if ( !transform )
    goto LABEL_38;
  v29 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
  transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v28, v29, 0);
  if ( !transform )
    goto LABEL_38;
  klass = transform->klass;
  v31 = transform;
  v32 = *(unsigned __int16 *)&transform->klass->_2.rank;
  if ( *(_WORD *)&transform->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v32;
      p_offset += 2;
      if ( !v32 )
        goto LABEL_14;
    }
    v34 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_14:
    v34 = sub_1C47738(transform, SimpleAnimation_State_TypeInfo, 8);
  }
  transform = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v34)(
                                           v31,
                                           *(_QWORD *)(v34 + 8),
                                           0.0);
  v40 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_38;
  transform = (UnityEngine_Component_o *)v40->fields.m_Clip;
  if ( !transform )
    goto LABEL_38;
  v41 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
  transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v40, v41, 0);
  if ( !transform )
    goto LABEL_38;
  v42 = transform->klass;
  v43 = transform;
  v44 = *(unsigned __int16 *)&transform->klass->_2.rank;
  if ( *(_WORD *)&transform->klass->_2.rank )
  {
    v45 = (SimpleAnimation_State_c **)&v42->_1.interfaceOffsets->offset;
    while ( *(v45 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v44;
      v45 += 2;
      if ( !v44 )
        goto LABEL_33;
    }
    v46 = (__int64)(&v42[1]._1.byval_arg + *(_DWORD *)v45);
  }
  else
  {
LABEL_33:
    v46 = sub_1C47738(transform, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v46)(v43, *(_QWORD *)(v46 + 8), 0.0);
LABEL_36:
  this->fields.animationStartTime = startTime;
  this->fields.animationEndTime = endTime;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, isInitDisp, 0);
}


void QuestBoardListEffectComponent__Play(
        QuestBoardListEffectComponent_o *this,
        System_Action_o *OnPlayingAct,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( OnPlayingAct )
  {
    this->fields.OnPlayingAct = OnPlayingAct;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.OnPlayingAct,
      (int32_t)OnPlayingAct,
      (int32_t)end_act,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v11);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.EndAct = end_act;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.EndAct, (int32_t)end_act, v12, v13, v14, v15, v16, v17);
  QuestBoardListEffectComponent__SetState(this, 1, v18);
}


void QuestBoardListEffectComponent__SetPlayingActStartTime(
        QuestBoardListEffectComponent_o *this,
        float time,
        const MethodInfo *method)
{
  this->fields.playingActStartTime = time;
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListEffectComponent__SetState(
        QuestBoardListEffectComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *FSM; // x0

  if ( (byte_4CC404D & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_QuestBoardListEffectComponent__setState__);
    byte_4CC404D = 1;
  }
  FSM = (CStateManager_T__o *)this->fields.FSM;
  if ( !FSM )
    sub_1C71608(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    FSM,
    state,
    (const MethodInfo_339479C *)Method_CStateManager_QuestBoardListEffectComponent__setState__);
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListEffectComponent__Skip(QuestBoardListEffectComponent_o *this, float time, const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *m_Clip; // x0
  __int64 v7; // x1
  struct SimpleAnimation_o *v8; // x20
  System_String_o *name; // x0
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v11; // x20
  __int64 v12; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v14; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v16; // x20
  System_String_o *v17; // x0

  v3 = *(long double *)&time;
  if ( (byte_4CC404B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&SimpleAnimation_State_TypeInfo);
    byte_4CC404B = 1;
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  m_Clip = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)m_Clip & 1) != 0 )
  {
    v8 = this->fields.simpleAnimation;
    if ( v8 )
    {
      m_Clip = (UnityEngine_Object_o *)v8->fields.m_Clip;
      if ( m_Clip )
      {
        name = UnityEngine_Object__get_name(m_Clip, 0);
        m_Clip = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v8, name, 0);
        if ( m_Clip )
        {
          klass = m_Clip->klass;
          v11 = m_Clip;
          v12 = *(unsigned __int16 *)&m_Clip->klass->_2.rank;
          if ( *(_WORD *)&m_Clip->klass->_2.rank )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v12;
              p_offset += 2;
              if ( !v12 )
                goto LABEL_13;
            }
            v14 = (__int64)&klass[1] + 16 * *(_DWORD *)p_offset;
          }
          else
          {
LABEL_13:
            v14 = sub_1C47738(m_Clip, SimpleAnimation_State_TypeInfo, 4);
          }
          (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v14)(v11, *(_QWORD *)(v14 + 8), v3);
          m_Clip = (UnityEngine_Object_o *)this->fields.simpleAnimation;
          if ( m_Clip )
          {
            SimpleAnimation__Sample((SimpleAnimation_o *)m_Clip, 0);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_1C71608(m_Clip, v7);
  }
  normalAnimation = (UnityEngine_Object_o *)this->fields.normalAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  m_Clip = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(normalAnimation, 0, 0);
  if ( ((unsigned __int8)m_Clip & 1) != 0 )
  {
    v16 = this->fields.normalAnimation;
    if ( v16 )
    {
      m_Clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.normalAnimation, 0);
      if ( m_Clip )
      {
        v17 = UnityEngine_Object__get_name(m_Clip, 0);
        m_Clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v16, v17, 0);
        if ( m_Clip )
        {
          UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)m_Clip, *(float *)&v3, 0);
          m_Clip = (UnityEngine_Object_o *)this->fields.normalAnimation;
          if ( m_Clip )
          {
            UnityEngine_Animation__Sample((UnityEngine_Animation_o *)m_Clip, 0);
            return;
          }
        }
      }
    }
    goto LABEL_26;
  }
}


void QuestBoardListEffectComponent__Update(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *FSM; // x0

  if ( (byte_4CC4049 & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_QuestBoardListEffectComponent__update__);
    byte_4CC4049 = 1;
  }
  FSM = (CStateManager_T__o *)this->fields.FSM;
  if ( FSM )
    CStateManager_object___update(
      FSM,
      (const MethodInfo_3394778 *)Method_CStateManager_QuestBoardListEffectComponent__update__);
}


void QuestBoardListEffectComponent_StateNone___ctor(
        QuestBoardListEffectComponent_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListEffectComponent_StateNone__begin(
        QuestBoardListEffectComponent_StateNone_o *this,
        QuestBoardListEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestBoardListEffectComponent_StateNone__end(
        QuestBoardListEffectComponent_StateNone_o *this,
        QuestBoardListEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestBoardListEffectComponent_StateNone__update(
        QuestBoardListEffectComponent_StateNone_o *this,
        QuestBoardListEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestBoardListEffectComponent_StatePlay___ctor(
        QuestBoardListEffectComponent_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListEffectComponent_StatePlay__begin(
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
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
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
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4CC404E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_1C713B0(&SimpleAnimation_State_TypeInfo);
    byte_4CC404E = 1;
  }
  if ( !that )
    goto LABEL_49;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    normalAnimation = (UnityEngine_Object_o *)that->fields.normalAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(normalAnimation, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v18 = that->fields.normalAnimation;
    if ( v18 )
    {
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v18, name, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v20 = that->fields.normalAnimation;
          if ( !v20 )
            goto LABEL_49;
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                that->fields.normalAnimation,
                                                                0);
          if ( !this )
            goto LABEL_49;
          v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__Play_71468084(v20, v21, 0);
        }
        v22 = that->fields.normalAnimation;
        if ( v22 )
        {
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                that->fields.normalAnimation,
                                                                0);
          if ( this )
          {
            v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
            this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v22, v23, 0);
            if ( this )
            {
              UnityEngine_AnimationState__set_time(
                (UnityEngine_AnimationState_o *)this,
                that->fields.animationStartTime,
                0);
              v24 = that->fields.normalAnimation;
              if ( v24 )
              {
                this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(v24, 0);
                if ( this )
                {
                  v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
                  this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v24, v25, 0);
                  if ( this )
                  {
                    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_1C71608(this, that);
  }
  v6 = that->fields.simpleAnimation;
  if ( !v6 )
    goto LABEL_49;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v6->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v6, v7, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v8 = that->fields.simpleAnimation;
    if ( !v8 )
      goto LABEL_49;
    this = (QuestBoardListEffectComponent_StatePlay_o *)v8->fields.m_Clip;
    if ( !this )
      goto LABEL_49;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__Play_66976788(v8, v9, 0);
  }
  v10 = that->fields.simpleAnimation;
  if ( !v10 )
    goto LABEL_49;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v10->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v10, v11, 0);
  if ( !this )
    goto LABEL_49;
  klass = this->klass;
  *(float *)&v3 = that->fields.animationStartTime;
  v13 = this;
  v14 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_20;
    }
    v16 = (__int64)(&klass->vtable._4_begin + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_20:
    v16 = sub_1C47738(this, SimpleAnimation_State_TypeInfo, 4);
  }
  this = (QuestBoardListEffectComponent_StatePlay_o *)(*(__int64 (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD, long double))v16)(
                                                        v13,
                                                        *(_QWORD *)(v16 + 8),
                                                        v3);
  v26 = that->fields.simpleAnimation;
  if ( !v26 )
    goto LABEL_49;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v26->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v26, v27, 0);
  if ( !this )
    goto LABEL_49;
  v28 = this->klass;
  v29 = this;
  v30 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v31 = &v28->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v31 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_46;
    }
    v32 = (__int64)(&v28[1]._1.name + 2 * *v31);
  }
  else
  {
LABEL_46:
    v32 = sub_1C47738(this, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD, float))v32)(
    v29,
    *(_QWORD *)(v32 + 8),
    1.0);
}


void QuestBoardListEffectComponent_StatePlay__end(
        QuestBoardListEffectComponent_StatePlay_o *this,
        QuestBoardListEffectComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestBoardListEffectComponent_StatePlay__update(
        QuestBoardListEffectComponent_StatePlay_o *this,
        QuestBoardListEffectComponent_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x20
  System_String_o *v6; // x0
  QuestBoardListEffectComponent_StatePlay_c *klass; // x8
  QuestBoardListEffectComponent_StatePlay_o *v8; // x20
  __int64 v9; // x9
  SimpleAnimation_State_c **p_offset; // x10
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
  __int64 v27; // x9
  SimpleAnimation_State_c **v28; // x10
  __int64 v29; // x0
  const MethodInfo *v30; // x2

  if ( (byte_4CC404F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_1C713B0(&SimpleAnimation_State_TypeInfo);
    byte_4CC404F = 1;
  }
  if ( !that )
    goto LABEL_58;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    normalAnimation = (UnityEngine_Object_o *)that->fields.normalAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(normalAnimation, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    if ( that->fields.OnPlayingAct && !that->fields.isPlayingAct )
    {
      v13 = that->fields.normalAnimation;
      if ( !v13 )
        goto LABEL_58;
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0);
      if ( !this )
        goto LABEL_58;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v13, name, 0);
      if ( !this )
        goto LABEL_58;
      if ( UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)this, 0) >= that->fields.playingActStartTime )
      {
        OnPlayingAct = that->fields.OnPlayingAct;
        that->fields.isPlayingAct = 1;
        ActionExtensions__Call(OnPlayingAct, 0);
      }
    }
    v16 = that->fields.normalAnimation;
    if ( !v16 )
      goto LABEL_58;
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.normalAnimation, 0);
    if ( !this )
      goto LABEL_58;
    v17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v16, v17, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( that->fields.animationEndTime == 0.0 )
        return;
      v18 = that->fields.normalAnimation;
      if ( !v18 )
        goto LABEL_58;
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0);
      if ( !this )
        goto LABEL_58;
      v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v18, v19, 0);
      if ( !this )
        goto LABEL_58;
      if ( UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)this, 0) < that->fields.animationEndTime )
        return;
      this = (QuestBoardListEffectComponent_StatePlay_o *)that->fields.normalAnimation;
      if ( !this )
        goto LABEL_58;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)this, 0);
    }
LABEL_57:
    ActionExtensions__Call(that->fields.EndAct, 0);
    QuestBoardListEffectComponent__SetState(that, 0, v30);
    return;
  }
  if ( that->fields.OnPlayingAct && !that->fields.isPlayingAct )
  {
    v5 = that->fields.simpleAnimation;
    if ( !v5 )
      goto LABEL_58;
    this = (QuestBoardListEffectComponent_StatePlay_o *)v5->fields.m_Clip;
    if ( !this )
      goto LABEL_58;
    v6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v5, v6, 0);
    if ( !this )
      goto LABEL_58;
    klass = this->klass;
    v8 = this;
    v9 = *(unsigned __int16 *)&this->klass->_2.rank;
    if ( *(_WORD *)&this->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v9;
        p_offset += 2;
        if ( !v9 )
          goto LABEL_16;
      }
      v11 = (__int64)(&klass->vtable._3_ToString + *(_DWORD *)p_offset);
    }
    else
    {
LABEL_16:
      v11 = sub_1C47738(this, SimpleAnimation_State_TypeInfo, 3);
    }
    if ( (*(float (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD))v11)(v8, *(_QWORD *)(v11 + 8)) >= that->fields.playingActStartTime )
    {
      v20 = that->fields.OnPlayingAct;
      that->fields.isPlayingAct = 1;
      ActionExtensions__Call(v20, 0);
    }
  }
  v21 = that->fields.simpleAnimation;
  if ( !v21 )
    goto LABEL_58;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v21->fields.m_Clip;
  if ( !this )
    goto LABEL_58;
  v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v21, v22, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_57;
  if ( that->fields.animationEndTime == 0.0 )
    return;
  v23 = that->fields.simpleAnimation;
  if ( !v23 )
    goto LABEL_58;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v23->fields.m_Clip;
  if ( !this )
    goto LABEL_58;
  v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v23, v24, 0);
  if ( !this )
    goto LABEL_58;
  v25 = this->klass;
  v26 = this;
  v27 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v28 = (SimpleAnimation_State_c **)&v25->_1.interfaceOffsets->offset;
    while ( *(v28 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v27;
      v28 += 2;
      if ( !v27 )
        goto LABEL_51;
    }
    v29 = (__int64)(&v25->vtable._3_ToString + *(_DWORD *)v28);
  }
  else
  {
LABEL_51:
    v29 = sub_1C47738(this, SimpleAnimation_State_TypeInfo, 3);
  }
  if ( (*(float (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8)) >= that->fields.animationEndTime )
  {
    this = (QuestBoardListEffectComponent_StatePlay_o *)that->fields.simpleAnimation;
    if ( this )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)this, 0);
      goto LABEL_57;
    }
LABEL_58:
    sub_1C71608(this, that);
  }
}