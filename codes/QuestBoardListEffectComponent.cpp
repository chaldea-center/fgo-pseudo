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
  CStateManager_T__o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CStateManager_T__o *FSM; // x21
  Il2CppObject *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  CStateManager_T__o *v14; // x20
  Il2CppObject *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4AFECF4 & 1) == 0 )
  {
    sub_1BC3008(&Method_CStateManager_QuestBoardListEffectComponent___ctor__, method);
    sub_1BC3008(&Method_CStateManager_QuestBoardListEffectComponent__add__, v3);
    sub_1BC3008(&CStateManager_QuestBoardListEffectComponent__TypeInfo, v4);
    sub_1BC3008(&QuestBoardListEffectComponent_StateNone_TypeInfo, v5);
    sub_1BC3008(&QuestBoardListEffectComponent_StatePlay_TypeInfo, v6);
    byte_4AFECF4 = 1;
  }
  if ( !this->fields.FSM )
  {
    v7 = (CStateManager_T__o *)sub_1BC3254(CStateManager_QuestBoardListEffectComponent__TypeInfo);
    CStateManager_object____ctor(
      v7,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_323D2B8 *)Method_CStateManager_QuestBoardListEffectComponent___ctor__);
    this->fields.FSM = (struct CStateManager_QuestBoardListEffectComponent__o *)v7;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.FSM, (int32_t)v7, v8, v9);
    FSM = (CStateManager_T__o *)this->fields.FSM;
    v11 = (Il2CppObject *)sub_1BC3254(QuestBoardListEffectComponent_StateNone_TypeInfo);
    System_Object___ctor(v11, 0LL);
    if ( !FSM
      || (CStateManager_object___add(
            FSM,
            0,
            (IState_T__o *)v11,
            (const MethodInfo_323D360 *)Method_CStateManager_QuestBoardListEffectComponent__add__),
          v14 = (CStateManager_T__o *)this->fields.FSM,
          v15 = (Il2CppObject *)sub_1BC3254(QuestBoardListEffectComponent_StatePlay_TypeInfo),
          System_Object___ctor(v15, 0LL),
          !v14) )
    {
      sub_1BC3264(v12, v13);
    }
    CStateManager_object___add(
      v14,
      1,
      (IState_T__o *)v15,
      (const MethodInfo_323D360 *)Method_CStateManager_QuestBoardListEffectComponent__add__);
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
  if ( (byte_4AFECF8 & 1) == 0 )
  {
    this = (QuestBoardListEffectComponent_o *)sub_1BC3008(
                                                &Method_CStateManager_QuestBoardListEffectComponent__getState__,
                                                method);
    byte_4AFECF8 = 1;
  }
  FSM = v2->fields.FSM;
  if ( !FSM )
    sub_1BC3264(this, method);
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
  Il2CppObject *Component_object; // x0
  UnityEngine_Animation_o **p_normalAnimation; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Component_o *transform; // x0
  __int64 v17; // x1
  Il2CppObject *ComponentInChildren_object__50301080; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v23; // x21
  System_String_o *v24; // x0
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v26; // x21
  __int64 v27; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v29; // x0
  UnityEngine_Animation_o *v30; // x22
  UnityEngine_Animation_o *v31; // x22
  System_String_o *name; // x0
  UnityEngine_Animation_o *v33; // x21
  System_String_o *v34; // x0
  SimpleAnimation_o *v35; // x21
  System_String_o *v36; // x0
  UnityEngine_Component_c *v37; // x8
  UnityEngine_Component_o *v38; // x21
  __int64 v39; // x9
  SimpleAnimation_State_c **v40; // x10
  __int64 v41; // x0

  if ( (byte_4AFECF6 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, isInitDisp);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_Animation___, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, v11);
    byte_4AFECF6 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.normalAnimation = (struct UnityEngine_Animation_o *)Component_object;
  p_normalAnimation = &this->fields.normalAnimation;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.normalAnimation, (int32_t)Component_object, v14, v15);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_38;
  ComponentInChildren_object__50301080 = UnityEngine_Component__GetComponentInChildren_object__50301080(
                                           transform,
                                           (const MethodInfo_2FF8898 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__50301080;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.simpleAnimation,
    (int32_t)ComponentInChildren_object__50301080,
    v20,
    v21);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    v30 = *p_normalAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_36;
    v31 = *p_normalAnimation;
    if ( *p_normalAnimation )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(*p_normalAnimation, 0LL);
      if ( transform )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v31, name, 0LL);
        if ( transform )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
          v33 = *p_normalAnimation;
          if ( v33 )
          {
            transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(v33, 0LL);
            if ( transform )
            {
              v34 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
              transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v33, v34, 0LL);
              if ( transform )
              {
                UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
                goto LABEL_36;
              }
            }
          }
        }
      }
    }
LABEL_38:
    sub_1BC3264(transform, v17);
  }
  v23 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_38;
  transform = (UnityEngine_Component_o *)v23[1].monitor;
  if ( !transform )
    goto LABEL_38;
  v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v23, v24, 0LL);
  if ( !transform )
    goto LABEL_38;
  klass = transform->klass;
  v26 = transform;
  v27 = *(unsigned __int16 *)(&transform->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&transform->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v27;
      p_offset += 2;
      if ( !v27 )
        goto LABEL_14;
    }
    v29 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_14:
    v29 = sub_1C13570(transform, SimpleAnimation_State_TypeInfo, 8LL);
  }
  transform = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v29)(
                                           v26,
                                           *(_QWORD *)(v29 + 8),
                                           0.0);
  v35 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_38;
  transform = (UnityEngine_Component_o *)v35[1].monitor;
  if ( !transform )
    goto LABEL_38;
  v36 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v35, v36, 0LL);
  if ( !transform )
    goto LABEL_38;
  v37 = transform->klass;
  v38 = transform;
  v39 = *(unsigned __int16 *)(&transform->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&transform->klass->_2.bitflags2 + 3) )
  {
    v40 = (SimpleAnimation_State_c **)&v37->_1.interfaceOffsets->offset;
    while ( *(v40 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v39;
      v40 += 2;
      if ( !v39 )
        goto LABEL_33;
    }
    v41 = (__int64)(&v37[1]._1.byval_arg.bits + 4 * *(_DWORD *)v40);
  }
  else
  {
LABEL_33:
    v41 = sub_1C13570(transform, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v41)(v38, *(_QWORD *)(v41 + 8), 0.0);
LABEL_36:
  this->fields.animationStartTime = startTime;
  this->fields.animationEndTime = endTime;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, isInitDisp, 0LL);
}


void __fastcall QuestBoardListEffectComponent__Play(
        QuestBoardListEffectComponent_o *this,
        System_Action_o *OnPlayingAct,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( OnPlayingAct )
  {
    this->fields.OnPlayingAct = OnPlayingAct;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.OnPlayingAct, (int32_t)OnPlayingAct, (int32_t)end_act, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BC3264(0LL, v7);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.EndAct = end_act;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.EndAct, (int32_t)end_act, v8, v9);
  QuestBoardListEffectComponent__SetState(this, 1, v10);
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
  CStateManager_T__o *FSM; // x0

  if ( (byte_4AFECF9 & 1) == 0 )
  {
    sub_1BC3008(&Method_CStateManager_QuestBoardListEffectComponent__setState__, *(_QWORD *)&state);
    byte_4AFECF9 = 1;
  }
  FSM = (CStateManager_T__o *)this->fields.FSM;
  if ( !FSM )
    sub_1BC3264(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    FSM,
    state,
    (const MethodInfo_323D3EC *)Method_CStateManager_QuestBoardListEffectComponent__setState__);
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
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v12; // x20
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v17; // x20
  System_String_o *v18; // x0

  v3 = *(long double *)&time;
  if ( (byte_4AFECF7 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, v5);
    byte_4AFECF7 = 1;
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v12 = monitor;
          v13 = *(unsigned __int16 *)(&monitor->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&monitor->klass->_2.bitflags2 + 3) )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v13;
              p_offset += 2;
              if ( !v13 )
                goto LABEL_13;
            }
            v15 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_13:
            v15 = sub_1C13570(monitor, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v15)(v12, *(_QWORD *)(v15 + 8), v3);
          monitor = (UnityEngine_Object_o *)this->fields.simpleAnimation;
          if ( monitor )
          {
            SimpleAnimation__Sample((SimpleAnimation_o *)monitor, 0LL);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_1BC3264(monitor, v8);
  }
  normalAnimation = (UnityEngine_Object_o *)this->fields.normalAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(normalAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
  {
    v17 = this->fields.normalAnimation;
    if ( v17 )
    {
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.normalAnimation, 0LL);
      if ( monitor )
      {
        v18 = UnityEngine_Object__get_name(monitor, 0LL);
        monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v17, v18, 0LL);
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
    goto LABEL_26;
  }
}


void __fastcall QuestBoardListEffectComponent__Update(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *FSM; // x0

  if ( (byte_4AFECF5 & 1) == 0 )
  {
    sub_1BC3008(&Method_CStateManager_QuestBoardListEffectComponent__update__, method);
    byte_4AFECF5 = 1;
  }
  FSM = (CStateManager_T__o *)this->fields.FSM;
  if ( FSM )
    CStateManager_object___update(
      FSM,
      (const MethodInfo_323D3C8 *)Method_CStateManager_QuestBoardListEffectComponent__update__);
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
  __int64 v15; // x9
  int32_t *p_offset; // x10
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

  if ( (byte_4AFECFA & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, that);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_1BC3008(&SimpleAnimation_State_TypeInfo, v5);
    byte_4AFECFA = 1;
  }
  if ( !that )
    goto LABEL_49;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    normalAnimation = (UnityEngine_Object_o *)that->fields.normalAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            goto LABEL_49;
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                that->fields.normalAnimation,
                                                                0LL);
          if ( !this )
            goto LABEL_49;
          v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__Play_69779584(v21, v22, 0LL);
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
LABEL_49:
    sub_1BC3264(this, that);
  }
  v7 = that->fields.simpleAnimation;
  if ( !v7 )
    goto LABEL_49;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v7[1].monitor;
  if ( !this )
    goto LABEL_49;
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v7, v8, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v9 = that->fields.simpleAnimation;
    if ( !v9 )
      goto LABEL_49;
    this = (QuestBoardListEffectComponent_StatePlay_o *)v9[1].monitor;
    if ( !this )
      goto LABEL_49;
    v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__Play_65293968(v9, v10, 0LL);
  }
  v11 = that->fields.simpleAnimation;
  if ( !v11 )
    goto LABEL_49;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v11[1].monitor;
  if ( !this )
    goto LABEL_49;
  v12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v11, v12, 0LL);
  if ( !this )
    goto LABEL_49;
  klass = this->klass;
  *(float *)&v3 = that->fields.animationStartTime;
  v14 = this;
  v15 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_20;
    }
    v17 = (__int64)(&klass->vtable._4_begin.method + 2 * *p_offset);
  }
  else
  {
LABEL_20:
    v17 = sub_1C13570(this, SimpleAnimation_State_TypeInfo, 4LL);
  }
  this = (QuestBoardListEffectComponent_StatePlay_o *)(*(__int64 (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD, long double))v17)(
                                                        v14,
                                                        *(_QWORD *)(v17 + 8),
                                                        v3);
  v27 = that->fields.simpleAnimation;
  if ( !v27 )
    goto LABEL_49;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v27[1].monitor;
  if ( !this )
    goto LABEL_49;
  v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v27, v28, 0LL);
  if ( !this )
    goto LABEL_49;
  v29 = this->klass;
  v30 = this;
  v31 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v32 = &v29->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v32 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_46;
    }
    v33 = (__int64)(&v29[1]._1.namespaze + 2 * *v32);
  }
  else
  {
LABEL_46:
    v33 = sub_1C13570(this, SimpleAnimation_State_TypeInfo, 8LL);
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
  __int64 v10; // x9
  int32_t *p_offset; // x10
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
  int32_t *v29; // x10
  __int64 v30; // x0
  const MethodInfo *v31; // x2

  if ( (byte_4AFECFB & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, that);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_1BC3008(&SimpleAnimation_State_TypeInfo, v4);
    byte_4AFECFB = 1;
  }
  if ( !that )
    goto LABEL_58;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    normalAnimation = (UnityEngine_Object_o *)that->fields.normalAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(normalAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    if ( that->fields.OnPlayingAct && !that->fields.isPlayingAct )
    {
      v14 = that->fields.normalAnimation;
      if ( !v14 )
        goto LABEL_58;
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0LL);
      if ( !this )
        goto LABEL_58;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v14, name, 0LL);
      if ( !this )
        goto LABEL_58;
      if ( UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)this, 0LL) >= that->fields.playingActStartTime )
      {
        OnPlayingAct = that->fields.OnPlayingAct;
        that->fields.isPlayingAct = 1;
        ActionExtensions__Call(OnPlayingAct, 0LL);
      }
    }
    v17 = that->fields.normalAnimation;
    if ( !v17 )
      goto LABEL_58;
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                          that->fields.normalAnimation,
                                                          0LL);
    if ( !this )
      goto LABEL_58;
    v18 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v17, v18, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( that->fields.animationEndTime == 0.0 )
        return;
      v19 = that->fields.normalAnimation;
      if ( !v19 )
        goto LABEL_58;
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0LL);
      if ( !this )
        goto LABEL_58;
      v20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v19, v20, 0LL);
      if ( !this )
        goto LABEL_58;
      if ( UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)this, 0LL) < that->fields.animationEndTime )
        return;
      this = (QuestBoardListEffectComponent_StatePlay_o *)that->fields.normalAnimation;
      if ( !this )
        goto LABEL_58;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)this, 0LL);
    }
LABEL_57:
    ActionExtensions__Call(that->fields.EndAct, 0LL);
    QuestBoardListEffectComponent__SetState(that, 0, v31);
    return;
  }
  if ( that->fields.OnPlayingAct && !that->fields.isPlayingAct )
  {
    v6 = that->fields.simpleAnimation;
    if ( !v6 )
      goto LABEL_58;
    this = (QuestBoardListEffectComponent_StatePlay_o *)v6[1].monitor;
    if ( !this )
      goto LABEL_58;
    v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v6, v7, 0LL);
    if ( !this )
      goto LABEL_58;
    klass = this->klass;
    v9 = this;
    v10 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_16;
      }
      v12 = (__int64)(&klass->vtable._3_ToString.method + 2 * *p_offset);
    }
    else
    {
LABEL_16:
      v12 = sub_1C13570(this, SimpleAnimation_State_TypeInfo, 3LL);
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
    goto LABEL_58;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v22[1].monitor;
  if ( !this )
    goto LABEL_58;
  v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v22, v23, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_57;
  if ( that->fields.animationEndTime == 0.0 )
    return;
  v24 = that->fields.simpleAnimation;
  if ( !v24 )
    goto LABEL_58;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v24[1].monitor;
  if ( !this )
    goto LABEL_58;
  v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v24, v25, 0LL);
  if ( !this )
    goto LABEL_58;
  v26 = this->klass;
  v27 = this;
  v28 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v29 = &v26->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v29 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_51;
    }
    v30 = (__int64)(&v26->vtable._3_ToString.method + 2 * *v29);
  }
  else
  {
LABEL_51:
    v30 = sub_1C13570(this, SimpleAnimation_State_TypeInfo, 3LL);
  }
  if ( (*(float (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8)) >= that->fields.animationEndTime )
  {
    this = (QuestBoardListEffectComponent_StatePlay_o *)that->fields.simpleAnimation;
    if ( this )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)this, 0LL);
      goto LABEL_57;
    }
LABEL_58:
    sub_1BC3264(this, that);
  }
}