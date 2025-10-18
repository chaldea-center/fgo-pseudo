void QuestBoardListEffectComponent___ctor(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestBoardListEffectComponent__Awake(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *v3; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CStateManager_T__o *FSM; // x21
  Il2CppObject *v7; // x22
  __int64 v8; // x0
  CStateManager_T__o *v9; // x20
  Il2CppObject *v10; // x21
  const MethodInfo *v11; // x2

  if ( (byte_4C3FC46 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_QuestBoardListEffectComponent___ctor__);
    sub_1C37058(&Method_CStateManager_QuestBoardListEffectComponent__add__);
    sub_1C37058(&CStateManager_QuestBoardListEffectComponent__TypeInfo);
    sub_1C37058(&QuestBoardListEffectComponent_StateNone_TypeInfo);
    sub_1C37058(&QuestBoardListEffectComponent_StatePlay_TypeInfo);
    byte_4C3FC46 = 1;
  }
  if ( !this->fields.FSM )
  {
    v3 = (CStateManager_T__o *)sub_1C372A4(CStateManager_QuestBoardListEffectComponent__TypeInfo);
    CStateManager_object____ctor(
      v3,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_332CF70 *)Method_CStateManager_QuestBoardListEffectComponent___ctor__);
    this->fields.FSM = (struct CStateManager_QuestBoardListEffectComponent__o *)v3;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.FSM, (int32_t)v3, v4, v5);
    FSM = (CStateManager_T__o *)this->fields.FSM;
    v7 = (Il2CppObject *)sub_1C372A4(QuestBoardListEffectComponent_StateNone_TypeInfo);
    System_Object___ctor(v7, 0);
    if ( !FSM
      || (CStateManager_object___add(
            FSM,
            0,
            (IState_T__o *)v7,
            (const MethodInfo_332D018 *)Method_CStateManager_QuestBoardListEffectComponent__add__),
          v9 = (CStateManager_T__o *)this->fields.FSM,
          v10 = (Il2CppObject *)sub_1C372A4(QuestBoardListEffectComponent_StatePlay_TypeInfo),
          System_Object___ctor(v10, 0),
          !v9) )
    {
      sub_1C372B4(v8);
    }
    CStateManager_object___add(
      v9,
      1,
      (IState_T__o *)v10,
      (const MethodInfo_332D018 *)Method_CStateManager_QuestBoardListEffectComponent__add__);
    QuestBoardListEffectComponent__SetState(this, 0, v11);
  }
}


int32_t QuestBoardListEffectComponent__GetState(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  QuestBoardListEffectComponent_o *v2; // x19
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x8

  v2 = this;
  if ( (byte_4C3FC4A & 1) == 0 )
  {
    this = (QuestBoardListEffectComponent_o *)sub_1C37058(&Method_CStateManager_QuestBoardListEffectComponent__getState__);
    byte_4C3FC4A = 1;
  }
  FSM = v2->fields.FSM;
  if ( !FSM )
    sub_1C372B4(this);
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
  const MethodInfo *v12; // x3
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *ComponentInChildren_object__51242636; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v19; // x21
  System_String_o *v20; // x0
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v22; // x21
  __int64 v23; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v25; // x0
  UnityEngine_Animation_o *v26; // x22
  UnityEngine_Animation_o *v27; // x22
  System_String_o *name; // x0
  UnityEngine_Animation_o *v29; // x21
  System_String_o *v30; // x0
  SimpleAnimation_o *v31; // x21
  System_String_o *v32; // x0
  UnityEngine_Component_c *v33; // x8
  UnityEngine_Component_o *v34; // x21
  __int64 v35; // x9
  SimpleAnimation_State_c **v36; // x10
  __int64 v37; // x0

  if ( (byte_4C3FC48 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C3FC48 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.normalAnimation = (struct UnityEngine_Animation_o *)Component_object;
  p_normalAnimation = &this->fields.normalAnimation;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.normalAnimation, (int32_t)Component_object, v11, v12);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_38;
  ComponentInChildren_object__51242636 = UnityEngine_Component__GetComponentInChildren_object__51242636(
                                           transform,
                                           (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__51242636;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.simpleAnimation,
    (int32_t)ComponentInChildren_object__51242636,
    v16,
    v17);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    v26 = *p_normalAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_36;
    v27 = *p_normalAnimation;
    if ( *p_normalAnimation )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(*p_normalAnimation, 0);
      if ( transform )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
        transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v27, name, 0);
        if ( transform )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0);
          v29 = *p_normalAnimation;
          if ( v29 )
          {
            transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(v29, 0);
            if ( transform )
            {
              v30 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
              transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v29, v30, 0);
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
    sub_1C372B4(transform);
  }
  v19 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_38;
  transform = (UnityEngine_Component_o *)v19->fields.m_Clip;
  if ( !transform )
    goto LABEL_38;
  v20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
  transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v19, v20, 0);
  if ( !transform )
    goto LABEL_38;
  klass = transform->klass;
  v22 = transform;
  v23 = *(unsigned __int16 *)&transform->klass->_2.rank;
  if ( *(_WORD *)&transform->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v23;
      p_offset += 2;
      if ( !v23 )
        goto LABEL_14;
    }
    v25 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_14:
    v25 = sub_1C87870(transform, SimpleAnimation_State_TypeInfo, 8);
  }
  transform = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v25)(
                                           v22,
                                           *(_QWORD *)(v25 + 8),
                                           0.0);
  v31 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_38;
  transform = (UnityEngine_Component_o *)v31->fields.m_Clip;
  if ( !transform )
    goto LABEL_38;
  v32 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
  transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v31, v32, 0);
  if ( !transform )
    goto LABEL_38;
  v33 = transform->klass;
  v34 = transform;
  v35 = *(unsigned __int16 *)&transform->klass->_2.rank;
  if ( *(_WORD *)&transform->klass->_2.rank )
  {
    v36 = (SimpleAnimation_State_c **)&v33->_1.interfaceOffsets->offset;
    while ( *(v36 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v35;
      v36 += 2;
      if ( !v35 )
        goto LABEL_33;
    }
    v37 = (__int64)(&v33[1]._1.byval_arg + *(_DWORD *)v36);
  }
  else
  {
LABEL_33:
    v37 = sub_1C87870(transform, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v37)(v34, *(_QWORD *)(v37 + 8), 0.0);
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
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( OnPlayingAct )
  {
    this->fields.OnPlayingAct = OnPlayingAct;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.OnPlayingAct, (int32_t)OnPlayingAct, (int32_t)end_act, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.EndAct = end_act;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.EndAct, (int32_t)end_act, v7, v8);
  QuestBoardListEffectComponent__SetState(this, 1, v9);
}


void QuestBoardListEffectComponent__SetPlayingActStartTime(
        QuestBoardListEffectComponent_o *this,
        float time,
        const MethodInfo *method)
{
  this->fields.playingActStartTime = time;
}


void QuestBoardListEffectComponent__SetState(
        QuestBoardListEffectComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *FSM; // x0

  if ( (byte_4C3FC4B & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_QuestBoardListEffectComponent__setState__);
    byte_4C3FC4B = 1;
  }
  FSM = (CStateManager_T__o *)this->fields.FSM;
  if ( !FSM )
    sub_1C372B4(0);
  CStateManager_object___setState(
    FSM,
    state,
    (const MethodInfo_332D0A4 *)Method_CStateManager_QuestBoardListEffectComponent__setState__);
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListEffectComponent__Skip(QuestBoardListEffectComponent_o *this, float time, const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *m_Clip; // x0
  struct SimpleAnimation_o *v7; // x20
  System_String_o *name; // x0
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v13; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v15; // x20
  System_String_o *v16; // x0

  v3 = *(long double *)&time;
  if ( (byte_4C3FC49 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C3FC49 = 1;
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  m_Clip = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)m_Clip & 1) != 0 )
  {
    v7 = this->fields.simpleAnimation;
    if ( v7 )
    {
      m_Clip = (UnityEngine_Object_o *)v7->fields.m_Clip;
      if ( m_Clip )
      {
        name = UnityEngine_Object__get_name(m_Clip, 0);
        m_Clip = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v7, name, 0);
        if ( m_Clip )
        {
          klass = m_Clip->klass;
          v10 = m_Clip;
          v11 = *(unsigned __int16 *)&m_Clip->klass->_2.rank;
          if ( *(_WORD *)&m_Clip->klass->_2.rank )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v11;
              p_offset += 2;
              if ( !v11 )
                goto LABEL_13;
            }
            v13 = (__int64)&klass[1] + 16 * *(_DWORD *)p_offset;
          }
          else
          {
LABEL_13:
            v13 = sub_1C87870(m_Clip, SimpleAnimation_State_TypeInfo, 4);
          }
          (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v13)(v10, *(_QWORD *)(v13 + 8), v3);
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
    sub_1C372B4(m_Clip);
  }
  normalAnimation = (UnityEngine_Object_o *)this->fields.normalAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  m_Clip = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(normalAnimation, 0, 0);
  if ( ((unsigned __int8)m_Clip & 1) != 0 )
  {
    v15 = this->fields.normalAnimation;
    if ( v15 )
    {
      m_Clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.normalAnimation, 0);
      if ( m_Clip )
      {
        v16 = UnityEngine_Object__get_name(m_Clip, 0);
        m_Clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v15, v16, 0);
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

  if ( (byte_4C3FC47 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_QuestBoardListEffectComponent__update__);
    byte_4C3FC47 = 1;
  }
  FSM = (CStateManager_T__o *)this->fields.FSM;
  if ( FSM )
    CStateManager_object___update(
      FSM,
      (const MethodInfo_332D080 *)Method_CStateManager_QuestBoardListEffectComponent__update__);
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

  if ( (byte_4C3FC4C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C3FC4C = 1;
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
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__Play_71012036(v20, v21, 0);
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
    sub_1C372B4(this);
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
    this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__Play_66507412(v8, v9, 0);
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
    v16 = sub_1C87870(this, SimpleAnimation_State_TypeInfo, 4);
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
    v32 = sub_1C87870(this, SimpleAnimation_State_TypeInfo, 8);
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

  if ( (byte_4C3FC4D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C3FC4D = 1;
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
      v11 = sub_1C87870(this, SimpleAnimation_State_TypeInfo, 3);
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
    v29 = sub_1C87870(this, SimpleAnimation_State_TypeInfo, 3);
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
    sub_1C372B4(this);
  }
}