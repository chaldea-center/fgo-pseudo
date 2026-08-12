void QuestBoardListEffectComponent___ctor(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.bgmFadeOutTime = 2.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestBoardListEffectComponent__Awake(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *v3; // x21
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  CStateManager_T__o *FSM; // x21
  Il2CppObject *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  CStateManager_T__o *v14; // x20
  Il2CppObject *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_596D26C & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestBoardListEffectComponent___ctor__);
    sub_2213A60(&Method_CStateManager_QuestBoardListEffectComponent__add__);
    sub_2213A60(&CStateManager_QuestBoardListEffectComponent__TypeInfo);
    sub_2213A60(&QuestBoardListEffectComponent_StateNone_TypeInfo);
    sub_2213A60(&QuestBoardListEffectComponent_StatePlay_TypeInfo);
    byte_596D26C = 1;
  }
  if ( !this->fields.FSM )
  {
    v3 = (CStateManager_T__o *)sub_2213CCC(CStateManager_QuestBoardListEffectComponent__TypeInfo);
    CStateManager_object____ctor(
      v3,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_3E83D54 *)Method_CStateManager_QuestBoardListEffectComponent___ctor__);
    this->fields.FSM = (struct CStateManager_QuestBoardListEffectComponent__o *)v3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.FSM, (int32_t)v3, v4, v5, v6, v7, v8, v9);
    FSM = (CStateManager_T__o *)this->fields.FSM;
    v11 = (Il2CppObject *)sub_2213CCC(QuestBoardListEffectComponent_StateNone_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !FSM
      || (CStateManager_object___add(
            FSM,
            0,
            (IState_T__o *)v11,
            (const MethodInfo_3E83E04 *)Method_CStateManager_QuestBoardListEffectComponent__add__),
          v14 = (CStateManager_T__o *)this->fields.FSM,
          v15 = (Il2CppObject *)sub_2213CCC(QuestBoardListEffectComponent_StatePlay_TypeInfo),
          System_Object___ctor(v15, 0),
          !v14) )
    {
      sub_2213CDC(v12, v13);
    }
    CStateManager_object___add(
      v14,
      1,
      (IState_T__o *)v15,
      (const MethodInfo_3E83E04 *)Method_CStateManager_QuestBoardListEffectComponent__add__);
    QuestBoardListEffectComponent__SetState(this, 0, v16);
  }
}


int32_t QuestBoardListEffectComponent__GetState(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  QuestBoardListEffectComponent_o *v2; // x19
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x8

  v2 = this;
  if ( (byte_596D270 & 1) == 0 )
  {
    this = (QuestBoardListEffectComponent_o *)sub_2213A60(&Method_CStateManager_QuestBoardListEffectComponent__getState__);
    byte_596D270 = 1;
  }
  FSM = v2->fields.FSM;
  if ( !FSM )
    sub_2213CDC(this, method);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_Component_o *transform; // x0
  __int64 v18; // x1
  Il2CppObject *ComponentInChildren_object__58855044; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *simpleAnimation; // x23
  __int64 v30; // x2
  SimpleAnimation_o *v31; // x21
  System_String_o *v32; // x0
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v34; // x21
  __int64 v35; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v37; // x0
  UnityEngine_Animation_o *v38; // x22
  UnityEngine_Animation_o *v39; // x22
  System_String_o *name; // x0
  UnityEngine_Animation_o *v41; // x21
  System_String_o *v42; // x0
  SimpleAnimation_o *v43; // x21
  System_String_o *v44; // x0
  UnityEngine_Component_c *v45; // x8
  UnityEngine_Component_o *v46; // x21
  __int64 v47; // x9
  SimpleAnimation_State_c **v48; // x10
  __int64 v49; // x0

  if ( (byte_596D26E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596D26E = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.normalAnimation = (struct UnityEngine_Animation_o *)Component_object;
  p_normalAnimation = &this->fields.normalAnimation;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.normalAnimation,
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
  ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                           transform,
                                           (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__58855044;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.simpleAnimation,
    (int32_t)ComponentInChildren_object__58855044,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    v38 = *p_normalAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v30);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0, 0);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_36;
    v39 = *p_normalAnimation;
    if ( *p_normalAnimation )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(*p_normalAnimation, 0);
      if ( transform )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
        transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v39, name, 0);
        if ( transform )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0);
          v41 = *p_normalAnimation;
          if ( v41 )
          {
            transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(v41, 0);
            if ( transform )
            {
              v42 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
              transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v41, v42, 0);
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
    sub_2213CDC(transform, v18);
  }
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
  klass = transform->klass;
  v34 = transform;
  v35 = *(unsigned __int16 *)&transform->klass->_2.rank;
  if ( *(_WORD *)&transform->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v35;
      p_offset += 2;
      if ( !v35 )
        goto LABEL_14;
    }
    v37 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_14:
    v37 = sub_224BC3C(transform, SimpleAnimation_State_TypeInfo, 8);
  }
  transform = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD, double))v37)(
                                           v34,
                                           *(_QWORD *)(v37 + 8),
                                           0.0);
  v43 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_38;
  transform = (UnityEngine_Component_o *)v43->fields.m_Clip;
  if ( !transform )
    goto LABEL_38;
  v44 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0);
  transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v43, v44, 0);
  if ( !transform )
    goto LABEL_38;
  v45 = transform->klass;
  v46 = transform;
  v47 = *(unsigned __int16 *)&transform->klass->_2.rank;
  if ( *(_WORD *)&transform->klass->_2.rank )
  {
    v48 = (SimpleAnimation_State_c **)&v45->_1.interfaceOffsets->offset;
    while ( *(v48 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v47;
      v48 += 2;
      if ( !v47 )
        goto LABEL_33;
    }
    v49 = (__int64)(&v45[1]._1.byval_arg + *(_DWORD *)v48);
  }
  else
  {
LABEL_33:
    v49 = sub_224BC3C(transform, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, double))v49)(v46, *(_QWORD *)(v49 + 8), 0.0);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x2

  if ( OnPlayingAct )
  {
    this->fields.OnPlayingAct = OnPlayingAct;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.OnPlayingAct,
      (int32_t)OnPlayingAct,
      (System_String_o *)end_act,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v11);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.EndAct = end_act;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.EndAct, (int32_t)end_act, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_596D271 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestBoardListEffectComponent__setState__);
    byte_596D271 = 1;
  }
  FSM = (CStateManager_T__o *)this->fields.FSM;
  if ( !FSM )
    sub_2213CDC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    FSM,
    state,
    (const MethodInfo_3E83E8C *)Method_CStateManager_QuestBoardListEffectComponent__setState__);
}


void QuestBoardListEffectComponent__Skip(QuestBoardListEffectComponent_o *this, float time, const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *m_Clip; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct SimpleAnimation_o *v10; // x20
  System_String_o *name; // x0
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v13; // x20
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v18; // x20
  System_String_o *v19; // x0

  if ( (byte_596D26F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596D26F = 1;
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  m_Clip = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)m_Clip & 1) != 0 )
  {
    v10 = this->fields.simpleAnimation;
    if ( v10 )
    {
      m_Clip = (UnityEngine_Object_o *)v10->fields.m_Clip;
      if ( m_Clip )
      {
        name = UnityEngine_Object__get_name(m_Clip, 0);
        m_Clip = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v10, name, 0);
        if ( m_Clip )
        {
          klass = m_Clip->klass;
          v13 = m_Clip;
          v14 = *(unsigned __int16 *)&m_Clip->klass->_2.rank;
          if ( *(_WORD *)&m_Clip->klass->_2.rank )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v14;
              p_offset += 2;
              if ( !v14 )
                goto LABEL_13;
            }
            v16 = (__int64)&klass[1] + 16 * *(_DWORD *)p_offset;
          }
          else
          {
LABEL_13:
            v16 = sub_224BC3C(m_Clip, SimpleAnimation_State_TypeInfo, 4);
          }
          (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, float))v16)(v13, *(_QWORD *)(v16 + 8), time);
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
    sub_2213CDC(m_Clip, v8);
  }
  normalAnimation = (UnityEngine_Object_o *)this->fields.normalAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  m_Clip = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(normalAnimation, 0, 0);
  if ( ((unsigned __int8)m_Clip & 1) != 0 )
  {
    v18 = this->fields.normalAnimation;
    if ( v18 )
    {
      m_Clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.normalAnimation, 0);
      if ( m_Clip )
      {
        v19 = UnityEngine_Object__get_name(m_Clip, 0);
        m_Clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v18, v19, 0);
        if ( m_Clip )
        {
          UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)m_Clip, time, 0);
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

  if ( (byte_596D26D & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestBoardListEffectComponent__update__);
    byte_596D26D = 1;
  }
  FSM = (CStateManager_T__o *)this->fields.FSM;
  if ( FSM )
    CStateManager_object___update(
      FSM,
      (const MethodInfo_3E83E6C *)Method_CStateManager_QuestBoardListEffectComponent__update__);
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
  UnityEngine_Object_o *simpleAnimation; // x20
  __int64 v5; // x2
  struct SimpleAnimation_o *v6; // x20
  System_String_o *v7; // x0
  struct SimpleAnimation_o *v8; // x20
  System_String_o *v9; // x0
  struct SimpleAnimation_o *v10; // x20
  System_String_o *v11; // x0
  QuestBoardListEffectComponent_StatePlay_c *klass; // x8
  QuestBoardListEffectComponent_StatePlay_o *v13; // x20
  float animationStartTime; // s8
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
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
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_596D272 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596D272 = 1;
  }
  if ( !that )
    goto LABEL_49;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
  this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    normalAnimation = (UnityEngine_Object_o *)that->fields.normalAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v5);
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(normalAnimation, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v19 = that->fields.normalAnimation;
    if ( v19 )
    {
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v19, name, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v21 = that->fields.normalAnimation;
          if ( !v21 )
            goto LABEL_49;
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                that->fields.normalAnimation,
                                                                0);
          if ( !this )
            goto LABEL_49;
          v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__Play_83078544(v21, v22, 0);
        }
        v23 = that->fields.normalAnimation;
        if ( v23 )
        {
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                that->fields.normalAnimation,
                                                                0);
          if ( this )
          {
            v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
            this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v23, v24, 0);
            if ( this )
            {
              UnityEngine_AnimationState__set_time(
                (UnityEngine_AnimationState_o *)this,
                that->fields.animationStartTime,
                0);
              v25 = that->fields.normalAnimation;
              if ( v25 )
              {
                this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(v25, 0);
                if ( this )
                {
                  v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
                  this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v25, v26, 0);
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
    sub_2213CDC(this, that);
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
    this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__Play_78552168(v8, v9, 0);
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
  v13 = this;
  animationStartTime = that->fields.animationStartTime;
  v15 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v15;
      p_offset += 2;
      if ( !v15 )
        goto LABEL_20;
    }
    v17 = (__int64)(&klass->vtable._4_begin + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_20:
    v17 = sub_224BC3C(this, SimpleAnimation_State_TypeInfo, 4);
  }
  this = (QuestBoardListEffectComponent_StatePlay_o *)(*(__int64 (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD, float))v17)(
                                                        v13,
                                                        *(_QWORD *)(v17 + 8),
                                                        animationStartTime);
  v27 = that->fields.simpleAnimation;
  if ( !v27 )
    goto LABEL_49;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v27->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v27, v28, 0);
  if ( !this )
    goto LABEL_49;
  v29 = this->klass;
  v30 = this;
  v31 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v32 = &v29->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v32 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_46;
    }
    v33 = (__int64)(&v29[1]._1.name + 2 * *v32);
  }
  else
  {
LABEL_46:
    v33 = sub_224BC3C(this, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD, float))v33)(
    v30,
    *(_QWORD *)(v33 + 8),
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
  __int64 v5; // x2
  struct SimpleAnimation_o *v6; // x20
  System_String_o *v7; // x0
  QuestBoardListEffectComponent_StatePlay_c *klass; // x8
  QuestBoardListEffectComponent_StatePlay_o *v9; // x20
  __int64 v10; // x9
  SimpleAnimation_State_c **p_offset; // x10
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
  __int64 v28; // x9
  SimpleAnimation_State_c **v29; // x10
  __int64 v30; // x0
  const MethodInfo *v31; // x2

  if ( (byte_596D273 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596D273 = 1;
  }
  if ( !that )
    goto LABEL_58;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
  this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    normalAnimation = (UnityEngine_Object_o *)that->fields.normalAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v5);
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(normalAnimation, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    if ( that->fields.OnPlayingAct && !that->fields.isPlayingAct )
    {
      v14 = that->fields.normalAnimation;
      if ( !v14 )
        goto LABEL_58;
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0);
      if ( !this )
        goto LABEL_58;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v14, name, 0);
      if ( !this )
        goto LABEL_58;
      if ( UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)this, 0) >= that->fields.playingActStartTime )
      {
        OnPlayingAct = that->fields.OnPlayingAct;
        that->fields.isPlayingAct = 1;
        ActionExtensions__Call(OnPlayingAct, 0);
      }
    }
    v17 = that->fields.normalAnimation;
    if ( !v17 )
      goto LABEL_58;
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.normalAnimation, 0);
    if ( !this )
      goto LABEL_58;
    v18 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v17, v18, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( that->fields.animationEndTime == 0.0 )
        return;
      v19 = that->fields.normalAnimation;
      if ( !v19 )
        goto LABEL_58;
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0);
      if ( !this )
        goto LABEL_58;
      v20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v19, v20, 0);
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
    QuestBoardListEffectComponent__SetState(that, 0, v31);
    return;
  }
  if ( that->fields.OnPlayingAct && !that->fields.isPlayingAct )
  {
    v6 = that->fields.simpleAnimation;
    if ( !v6 )
      goto LABEL_58;
    this = (QuestBoardListEffectComponent_StatePlay_o *)v6->fields.m_Clip;
    if ( !this )
      goto LABEL_58;
    v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v6, v7, 0);
    if ( !this )
      goto LABEL_58;
    klass = this->klass;
    v9 = this;
    v10 = *(unsigned __int16 *)&this->klass->_2.rank;
    if ( *(_WORD *)&this->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v10;
        p_offset += 2;
        if ( !v10 )
          goto LABEL_16;
      }
      v12 = (__int64)(&klass->vtable._3_ToString + *(_DWORD *)p_offset);
    }
    else
    {
LABEL_16:
      v12 = sub_224BC3C(this, SimpleAnimation_State_TypeInfo, 3);
    }
    if ( (*(float (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8)) >= that->fields.playingActStartTime )
    {
      v21 = that->fields.OnPlayingAct;
      that->fields.isPlayingAct = 1;
      ActionExtensions__Call(v21, 0);
    }
  }
  v22 = that->fields.simpleAnimation;
  if ( !v22 )
    goto LABEL_58;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v22->fields.m_Clip;
  if ( !this )
    goto LABEL_58;
  v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v22, v23, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_57;
  if ( that->fields.animationEndTime == 0.0 )
    return;
  v24 = that->fields.simpleAnimation;
  if ( !v24 )
    goto LABEL_58;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v24->fields.m_Clip;
  if ( !this )
    goto LABEL_58;
  v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v24, v25, 0);
  if ( !this )
    goto LABEL_58;
  v26 = this->klass;
  v27 = this;
  v28 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v29 = (SimpleAnimation_State_c **)&v26->_1.interfaceOffsets->offset;
    while ( *(v29 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v28;
      v29 += 2;
      if ( !v28 )
        goto LABEL_51;
    }
    v30 = (__int64)(&v26->vtable._3_ToString + *(_DWORD *)v29);
  }
  else
  {
LABEL_51:
    v30 = sub_224BC3C(this, SimpleAnimation_State_TypeInfo, 3);
  }
  if ( (*(float (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8)) >= that->fields.animationEndTime )
  {
    this = (QuestBoardListEffectComponent_StatePlay_o *)that->fields.simpleAnimation;
    if ( this )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)this, 0);
      goto LABEL_57;
    }
LABEL_58:
    sub_2213CDC(this, that);
  }
}