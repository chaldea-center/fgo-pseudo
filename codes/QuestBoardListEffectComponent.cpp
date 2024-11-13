void __fastcall QuestBoardListEffectComponent___ctor(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestBoardListEffectComponent__Awake(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  CStateManager_T__o *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  CStateManager_T__o *FSM; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1
  CStateManager_T__o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  Il2CppObject *v31; // x21
  const MethodInfo *v32; // x2

  if ( (byte_4B1308C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestBoardListEffectComponent___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_QuestBoardListEffectComponent__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_QuestBoardListEffectComponent__TypeInfo, v7, v8);
    sub_1BCA7E0(&QuestBoardListEffectComponent_StateNone_TypeInfo, v9, v10);
    sub_1BCA7E0(&QuestBoardListEffectComponent_StatePlay_TypeInfo, v11, v12);
    byte_4B1308C = 1;
  }
  if ( !this->fields.FSM )
  {
    v13 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_QuestBoardListEffectComponent__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v13,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_313FBC4 *)Method_CStateManager_QuestBoardListEffectComponent___ctor__);
    this->fields.FSM = (struct CStateManager_QuestBoardListEffectComponent__o *)v13;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.FSM, (int64_t)v13, v14, v15, v16, v17, v18, v19);
    FSM = (CStateManager_T__o *)this->fields.FSM;
    v24 = (Il2CppObject *)sub_1BCAA2C(QuestBoardListEffectComponent_StateNone_TypeInfo, v21, v22, v23);
    System_Object___ctor(v24, 0LL);
    if ( !FSM
      || (CStateManager_object___add(
            FSM,
            0,
            (IState_T__o *)v24,
            (const MethodInfo_313FC6C *)Method_CStateManager_QuestBoardListEffectComponent__add__),
          v27 = (CStateManager_T__o *)this->fields.FSM,
          v31 = (Il2CppObject *)sub_1BCAA2C(QuestBoardListEffectComponent_StatePlay_TypeInfo, v28, v29, v30),
          System_Object___ctor(v31, 0LL),
          !v27) )
    {
      sub_1BCAA3C(v25, v26);
    }
    CStateManager_object___add(
      v27,
      1,
      (IState_T__o *)v31,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestBoardListEffectComponent__add__);
    QuestBoardListEffectComponent__SetState(this, 0, v32);
  }
}


int32_t __fastcall QuestBoardListEffectComponent__GetState(
        QuestBoardListEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestBoardListEffectComponent_o *v3; // x19
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x8

  v3 = this;
  if ( (byte_4B13090 & 1) == 0 )
  {
    this = (QuestBoardListEffectComponent_o *)sub_1BCA7E0(
                                                &Method_CStateManager_QuestBoardListEffectComponent__getState__,
                                                method,
                                                v2);
    byte_4B13090 = 1;
  }
  FSM = v3->fields.FSM;
  if ( !FSM )
    sub_1BCAA3C(this, method);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Component_object; // x0
  UnityEngine_Animation_o **p_normalAnimation; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_Component_o *transform; // x0
  __int64 v24; // x1
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x22
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  UnityEngine_Object_o *simpleAnimation; // x23
  SimpleAnimation_o *v35; // x21
  System_String_o *v36; // x0
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v38; // x21
  __int64 v39; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v41; // x0
  UnityEngine_Animation_o *v42; // x22
  UnityEngine_Animation_o *v43; // x22
  System_String_o *name; // x0
  UnityEngine_Animation_o *v45; // x21
  System_String_o *v46; // x0
  SimpleAnimation_o *v47; // x21
  System_String_o *v48; // x0
  UnityEngine_Component_c *v49; // x8
  UnityEngine_Component_o *v50; // x21
  __int64 v51; // x9
  SimpleAnimation_State_c **v52; // x10
  __int64 v53; // x0

  if ( (byte_4B1308E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, isInitDisp, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v13, v14);
    byte_4B1308E = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.normalAnimation = (struct UnityEngine_Animation_o *)Component_object;
  p_normalAnimation = &this->fields.normalAnimation;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.normalAnimation,
    (int64_t)Component_object,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_38;
  ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           transform,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__49322392;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.simpleAnimation,
    (int64_t)ComponentInChildren_object__49322392,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    v42 = *p_normalAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v42, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_36;
    v43 = *p_normalAnimation;
    if ( *p_normalAnimation )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(*p_normalAnimation, 0LL);
      if ( transform )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
        transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v43, name, 0LL);
        if ( transform )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)transform, 0.0, 0LL);
          v45 = *p_normalAnimation;
          if ( v45 )
          {
            transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_clip(v45, 0LL);
            if ( transform )
            {
              v46 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
              transform = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(v45, v46, 0LL);
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
    sub_1BCAA3C(transform, v24);
  }
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
  klass = transform->klass;
  v38 = transform;
  v39 = *(unsigned __int16 *)(&transform->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&transform->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v39;
      p_offset += 2;
      if ( !v39 )
        goto LABEL_14;
    }
    v41 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_14:
    v41 = sub_1C1C7C0(transform, SimpleAnimation_State_TypeInfo, 8LL);
  }
  transform = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v41)(
                                           v38,
                                           *(_QWORD *)(v41 + 8),
                                           0.0);
  v47 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_38;
  transform = (UnityEngine_Component_o *)v47[1].monitor;
  if ( !transform )
    goto LABEL_38;
  v48 = UnityEngine_Object__get_name((UnityEngine_Object_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)SimpleAnimation__get_Item(v47, v48, 0LL);
  if ( !transform )
    goto LABEL_38;
  v49 = transform->klass;
  v50 = transform;
  v51 = *(unsigned __int16 *)(&transform->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&transform->klass->_2.bitflags2 + 3) )
  {
    v52 = (SimpleAnimation_State_c **)&v49->_1.interfaceOffsets->offset;
    while ( *(v52 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v51;
      v52 += 2;
      if ( !v51 )
        goto LABEL_33;
    }
    v53 = (__int64)(&v49[1]._1.byval_arg.bits + 4 * *(_DWORD *)v52);
  }
  else
  {
LABEL_33:
    v53 = sub_1C1C7C0(transform, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v53)(v50, *(_QWORD *)(v53 + 8), 0.0);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( OnPlayingAct )
  {
    this->fields.OnPlayingAct = OnPlayingAct;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.OnPlayingAct,
      (int64_t)OnPlayingAct,
      (int64_t)end_act,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v11);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.EndAct = end_act;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.EndAct, (int64_t)end_act, v12, v13, v14, v15, v16, v17);
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
  CStateManager_T__o *FSM; // x0

  if ( (byte_4B13091 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestBoardListEffectComponent__setState__, *(_QWORD *)&state, method);
    byte_4B13091 = 1;
  }
  FSM = (CStateManager_T__o *)this->fields.FSM;
  if ( !FSM )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    FSM,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_QuestBoardListEffectComponent__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListEffectComponent__Skip(
        QuestBoardListEffectComponent_o *this,
        float time,
        const MethodInfo *method)
{
  __int64 v3; // x2
  long double v4; // q8
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *simpleAnimation; // x20
  UnityEngine_Object_o *monitor; // x0
  __int64 v10; // x1
  struct SimpleAnimation_o *v11; // x20
  System_String_o *name; // x0
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v17; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v19; // x20
  System_String_o *v20; // x0

  v4 = *(long double *)&time;
  if ( (byte_4B1308F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v6, v7);
    byte_4B1308F = 1;
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
  {
    v11 = this->fields.simpleAnimation;
    if ( v11 )
    {
      monitor = (UnityEngine_Object_o *)v11[1].monitor;
      if ( monitor )
      {
        name = UnityEngine_Object__get_name(monitor, 0LL);
        monitor = (UnityEngine_Object_o *)SimpleAnimation__get_Item(v11, name, 0LL);
        if ( monitor )
        {
          klass = monitor->klass;
          v14 = monitor;
          v15 = *(unsigned __int16 *)(&monitor->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&monitor->klass->_2.bitflags2 + 3) )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v15;
              p_offset += 2;
              if ( !v15 )
                goto LABEL_13;
            }
            v17 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_13:
            v17 = sub_1C1C7C0(monitor, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(UnityEngine_Object_o *, _QWORD, long double))v17)(v14, *(_QWORD *)(v17 + 8), v4);
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
    sub_1BCAA3C(monitor, v10);
  }
  normalAnimation = (UnityEngine_Object_o *)this->fields.normalAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  monitor = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(normalAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)monitor & 1) != 0 )
  {
    v19 = this->fields.normalAnimation;
    if ( v19 )
    {
      monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.normalAnimation, 0LL);
      if ( monitor )
      {
        v20 = UnityEngine_Object__get_name(monitor, 0LL);
        monitor = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v19, v20, 0LL);
        if ( monitor )
        {
          UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)monitor, *(float *)&v4, 0LL);
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
  __int64 v2; // x2
  CStateManager_T__o *FSM; // x0

  if ( (byte_4B1308D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestBoardListEffectComponent__update__, method, v2);
    byte_4B1308D = 1;
  }
  FSM = (CStateManager_T__o *)this->fields.FSM;
  if ( FSM )
    CStateManager_object___update(
      FSM,
      (const MethodInfo_313FCD4 *)Method_CStateManager_QuestBoardListEffectComponent__update__);
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
  __int64 v6; // x2
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v8; // x20
  System_String_o *v9; // x0
  struct SimpleAnimation_o *v10; // x20
  System_String_o *v11; // x0
  struct SimpleAnimation_o *v12; // x20
  System_String_o *v13; // x0
  QuestBoardListEffectComponent_StatePlay_c *klass; // x8
  QuestBoardListEffectComponent_StatePlay_o *v15; // x20
  __int64 v16; // x9
  int32_t *p_offset; // x10
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
  QuestBoardListEffectComponent_StatePlay_c *v30; // x8
  QuestBoardListEffectComponent_StatePlay_o *v31; // x19
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4B13092 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v5, v6);
    byte_4B13092 = 1;
  }
  if ( !that )
    goto LABEL_49;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    normalAnimation = (UnityEngine_Object_o *)that->fields.normalAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
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
            goto LABEL_49;
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                                that->fields.normalAnimation,
                                                                0LL);
          if ( !this )
            goto LABEL_49;
          v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__Play_69899248(v22, v23, 0LL);
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
LABEL_49:
    sub_1BCAA3C(this, that);
  }
  v8 = that->fields.simpleAnimation;
  if ( !v8 )
    goto LABEL_49;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v8[1].monitor;
  if ( !this )
    goto LABEL_49;
  v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v8, v9, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v10 = that->fields.simpleAnimation;
    if ( !v10 )
      goto LABEL_49;
    this = (QuestBoardListEffectComponent_StatePlay_o *)v10[1].monitor;
    if ( !this )
      goto LABEL_49;
    v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__Play_64539336(v10, v11, 0LL);
  }
  v12 = that->fields.simpleAnimation;
  if ( !v12 )
    goto LABEL_49;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v12[1].monitor;
  if ( !this )
    goto LABEL_49;
  v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v12, v13, 0LL);
  if ( !this )
    goto LABEL_49;
  klass = this->klass;
  *(float *)&v3 = that->fields.animationStartTime;
  v15 = this;
  v16 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_20;
    }
    v18 = (__int64)(&klass->vtable._4_begin.method + 2 * *p_offset);
  }
  else
  {
LABEL_20:
    v18 = sub_1C1C7C0(this, SimpleAnimation_State_TypeInfo, 4LL);
  }
  this = (QuestBoardListEffectComponent_StatePlay_o *)(*(__int64 (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD, long double))v18)(
                                                        v15,
                                                        *(_QWORD *)(v18 + 8),
                                                        v3);
  v28 = that->fields.simpleAnimation;
  if ( !v28 )
    goto LABEL_49;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v28[1].monitor;
  if ( !this )
    goto LABEL_49;
  v29 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v28, v29, 0LL);
  if ( !this )
    goto LABEL_49;
  v30 = this->klass;
  v31 = this;
  v32 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v33 = &v30->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v33 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_46;
    }
    v34 = (__int64)(&v30[1]._1.namespaze + 2 * *v33);
  }
  else
  {
LABEL_46:
    v34 = sub_1C1C7C0(this, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD, float))v34)(
    v31,
    *(_QWORD *)(v34 + 8),
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
  __int64 v5; // x2
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v7; // x20
  System_String_o *v8; // x0
  QuestBoardListEffectComponent_StatePlay_c *klass; // x8
  QuestBoardListEffectComponent_StatePlay_o *v10; // x20
  __int64 v11; // x9
  int32_t *p_offset; // x10
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
  QuestBoardListEffectComponent_StatePlay_c *v27; // x8
  QuestBoardListEffectComponent_StatePlay_o *v28; // x20
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  const MethodInfo *v32; // x2

  if ( (byte_4B13093 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    this = (QuestBoardListEffectComponent_StatePlay_o *)sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v4, v5);
    byte_4B13093 = 1;
  }
  if ( !that )
    goto LABEL_58;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    normalAnimation = (UnityEngine_Object_o *)that->fields.normalAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Object__op_Inequality(normalAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    if ( that->fields.OnPlayingAct && !that->fields.isPlayingAct )
    {
      v15 = that->fields.normalAnimation;
      if ( !v15 )
        goto LABEL_58;
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0LL);
      if ( !this )
        goto LABEL_58;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v15, name, 0LL);
      if ( !this )
        goto LABEL_58;
      if ( UnityEngine_AnimationState__get_time((UnityEngine_AnimationState_o *)this, 0LL) >= that->fields.playingActStartTime )
      {
        OnPlayingAct = that->fields.OnPlayingAct;
        that->fields.isPlayingAct = 1;
        ActionExtensions__Call(OnPlayingAct, 0LL);
      }
    }
    v18 = that->fields.normalAnimation;
    if ( !v18 )
      goto LABEL_58;
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                          that->fields.normalAnimation,
                                                          0LL);
    if ( !this )
      goto LABEL_58;
    v19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__IsPlaying(v18, v19, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( that->fields.animationEndTime == 0.0 )
        return;
      v20 = that->fields.normalAnimation;
      if ( !v20 )
        goto LABEL_58;
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_clip(
                                                            that->fields.normalAnimation,
                                                            0LL);
      if ( !this )
        goto LABEL_58;
      v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      this = (QuestBoardListEffectComponent_StatePlay_o *)UnityEngine_Animation__get_Item(v20, v21, 0LL);
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
    QuestBoardListEffectComponent__SetState(that, 0, v32);
    return;
  }
  if ( that->fields.OnPlayingAct && !that->fields.isPlayingAct )
  {
    v7 = that->fields.simpleAnimation;
    if ( !v7 )
      goto LABEL_58;
    this = (QuestBoardListEffectComponent_StatePlay_o *)v7[1].monitor;
    if ( !this )
      goto LABEL_58;
    v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v7, v8, 0LL);
    if ( !this )
      goto LABEL_58;
    klass = this->klass;
    v10 = this;
    v11 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)(&klass->vtable._3_ToString.method + 2 * *p_offset);
    }
    else
    {
LABEL_16:
      v13 = sub_1C1C7C0(this, SimpleAnimation_State_TypeInfo, 3LL);
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
    goto LABEL_58;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v23[1].monitor;
  if ( !this )
    goto LABEL_58;
  v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__IsPlaying(v23, v24, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_57;
  if ( that->fields.animationEndTime == 0.0 )
    return;
  v25 = that->fields.simpleAnimation;
  if ( !v25 )
    goto LABEL_58;
  this = (QuestBoardListEffectComponent_StatePlay_o *)v25[1].monitor;
  if ( !this )
    goto LABEL_58;
  v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestBoardListEffectComponent_StatePlay_o *)SimpleAnimation__get_Item(v25, v26, 0LL);
  if ( !this )
    goto LABEL_58;
  v27 = this->klass;
  v28 = this;
  v29 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v30 = &v27->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v30 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_51;
    }
    v31 = (__int64)(&v27->vtable._3_ToString.method + 2 * *v30);
  }
  else
  {
LABEL_51:
    v31 = sub_1C1C7C0(this, SimpleAnimation_State_TypeInfo, 3LL);
  }
  if ( (*(float (__fastcall **)(QuestBoardListEffectComponent_StatePlay_o *, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8)) >= that->fields.animationEndTime )
  {
    this = (QuestBoardListEffectComponent_StatePlay_o *)that->fields.simpleAnimation;
    if ( this )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)this, 0LL);
      goto LABEL_57;
    }
LABEL_58:
    sub_1BCAA3C(this, that);
  }
}