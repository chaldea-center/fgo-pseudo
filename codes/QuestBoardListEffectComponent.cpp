void __fastcall QuestBoardListEffectComponent___ctor(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestBoardListEffectComponent__Awake(QuestBoardListEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  QuestBoardListEffectComponent_StateNone_o *v22; // x22
  struct CStateManager_QuestBoardListEffectComponent__o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  QuestBoardListEffectComponent_StatePlay_o *v28; // x21
  const MethodInfo *v29; // x2

  if ( (byte_40FC6D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestBoardListEffectComponent___ctor__, method);
    sub_B16FFC(&Method_CStateManager_QuestBoardListEffectComponent__add__, v6);
    sub_B16FFC(&CStateManager_QuestBoardListEffectComponent__TypeInfo, v7);
    sub_B16FFC(&QuestBoardListEffectComponent_StateNone_TypeInfo, v8);
    sub_B16FFC(&QuestBoardListEffectComponent_StatePlay_TypeInfo, v9);
    byte_40FC6D3 = 1;
  }
  if ( !this->fields.FSM )
  {
    v10 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_QuestBoardListEffectComponent__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v10,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2907EF0 *)Method_CStateManager_QuestBoardListEffectComponent___ctor__);
    this->fields.FSM = (struct CStateManager_QuestBoardListEffectComponent__o *)v10;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.FSM,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    FSM = this->fields.FSM;
    v22 = (QuestBoardListEffectComponent_StateNone_o *)sub_B170CC(
                                                         QuestBoardListEffectComponent_StateNone_TypeInfo,
                                                         v18,
                                                         v19,
                                                         v20,
                                                         v21);
    QuestBoardListEffectComponent_StateNone___ctor(v22, 0LL);
    if ( !FSM
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)FSM,
            0,
            (IState_T__o *)v22,
            (const MethodInfo_2907FBC *)Method_CStateManager_QuestBoardListEffectComponent__add__),
          v23 = this->fields.FSM,
          v28 = (QuestBoardListEffectComponent_StatePlay_o *)sub_B170CC(
                                                               QuestBoardListEffectComponent_StatePlay_TypeInfo,
                                                               v24,
                                                               v25,
                                                               v26,
                                                               v27),
          QuestBoardListEffectComponent_StatePlay___ctor(v28, 0LL),
          !v23) )
    {
      sub_B170D4();
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v23,
      1,
      (IState_T__o *)v28,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestBoardListEffectComponent__add__);
    QuestBoardListEffectComponent__SetState(this, 0, v29);
  }
}


int32_t __fastcall QuestBoardListEffectComponent__GetState(
        QuestBoardListEffectComponent_o *this,
        const MethodInfo *method)
{
  struct CStateManager_QuestBoardListEffectComponent__o *FSM; // x8

  if ( (byte_40FC6D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestBoardListEffectComponent__getState__, method);
    byte_40FC6D7 = 1;
  }
  FSM = this->fields.FSM;
  if ( !FSM )
    sub_B170D4();
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
  UnityEngine_Object_o *monitor; // x0
  System_String_o *v32; // x0
  SimpleAnimation_State_o *v33; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v35; // x21
  unsigned __int64 v36; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Animation_o *v39; // x22
  UnityEngine_Animation_o *v40; // x22
  UnityEngine_Object_o *clip; // x0
  System_String_o *name; // x0
  UnityEngine_AnimationState_o *Item; // x0
  UnityEngine_Animation_o *v44; // x21
  UnityEngine_Object_o *v45; // x0
  System_String_o *v46; // x0
  UnityEngine_AnimationState_o *v47; // x0
  SimpleAnimation_o *v48; // x21
  UnityEngine_Object_o *v49; // x0
  System_String_o *v50; // x0
  SimpleAnimation_State_o *v51; // x0
  SimpleAnimation_State_c *v52; // x8
  SimpleAnimation_State_o *v53; // x21
  unsigned __int64 v54; // x10
  SimpleAnimation_State_c **v55; // x11
  __int64 v56; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FC6D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, isInitDisp);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Animation___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v11);
    byte_40FC6D5 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_normalAnimation = &this->fields.normalAnimation;
  this->fields.normalAnimation = Component_WebViewObject;
  sub_B16F98(
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
                                                               (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.simpleAnimation = ComponentInChildren_UIWidget;
  p_simpleAnimation = &this->fields.simpleAnimation;
  sub_B16F98(
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
  if ( !UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    v39 = *p_normalAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0LL, 0LL) )
      goto LABEL_38;
    v40 = *p_normalAnimation;
    if ( *p_normalAnimation )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(*p_normalAnimation, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        Item = UnityEngine_Animation__get_Item(v40, name, 0LL);
        if ( Item )
        {
          UnityEngine_AnimationState__set_speed(Item, 0.0, 0LL);
          v44 = *p_normalAnimation;
          if ( v44 )
          {
            v45 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v44, 0LL);
            if ( v45 )
            {
              v46 = UnityEngine_Object__get_name(v45, 0LL);
              v47 = UnityEngine_Animation__get_Item(v44, v46, 0LL);
              if ( v47 )
              {
                UnityEngine_AnimationState__set_normalizedTime(v47, 0.0, 0LL);
                goto LABEL_38;
              }
            }
          }
        }
      }
    }
LABEL_40:
    sub_B170D4();
  }
  v30 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_40;
  monitor = (UnityEngine_Object_o *)v30[1].monitor;
  if ( !monitor )
    goto LABEL_40;
  v32 = UnityEngine_Object__get_name(monitor, 0LL);
  v33 = SimpleAnimation__get_Item(v30, v32, 0LL);
  if ( !v33 )
    goto LABEL_40;
  klass = v33->klass;
  v35 = v33;
  if ( *(_WORD *)&v33->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v36;
      p_offset += 2;
      if ( v36 >= *(unsigned __int16 *)&v33->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
  }
  else
  {
LABEL_15:
    p_method = sub_AAFEF8(v33, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v35, *(_QWORD *)(p_method + 8), 0.0);
  v48 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_40;
  v49 = (UnityEngine_Object_o *)v48[1].monitor;
  if ( !v49 )
    goto LABEL_40;
  v50 = UnityEngine_Object__get_name(v49, 0LL);
  v51 = SimpleAnimation__get_Item(v48, v50, 0LL);
  if ( !v51 )
    goto LABEL_40;
  v52 = v51->klass;
  v53 = v51;
  if ( *(_WORD *)&v51->klass->_2.bitflags1 )
  {
    v54 = 0LL;
    v55 = (SimpleAnimation_State_c **)&v52->_1.interfaceOffsets->offset;
    while ( *(v55 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v54;
      v55 += 2;
      if ( v54 >= *(unsigned __int16 *)&v51->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v56 = (__int64)&v52->vtable[*(_DWORD *)v55 + 6].method;
  }
  else
  {
LABEL_35:
    v56 = sub_AAFEF8(v51, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v56)(v53, *(_QWORD *)(v56 + 8), 0.0);
LABEL_38:
  this->fields.animationStartTime = startTime;
  this->fields.animationEndTime = endTime;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive(gameObject, isInitDisp, 0LL);
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
    sub_B16F98(
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.EndAct = end_act;
  sub_B16F98(
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

  if ( (byte_40FC6D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestBoardListEffectComponent__setState__, *(_QWORD *)&state);
    byte_40FC6D8 = 1;
  }
  FSM = this->fields.FSM;
  if ( !FSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)FSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_QuestBoardListEffectComponent__setState__);
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
  struct SimpleAnimation_o *v7; // x20
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v12; // x20
  unsigned __int64 v13; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v17; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *v19; // x0
  UnityEngine_AnimationState_o *v20; // x0
  UnityEngine_Animation_o *v21; // x0
  SimpleAnimation_o *v22; // x0

  v3 = *(long double *)&time;
  if ( (byte_40FC6D6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v5);
    byte_40FC6D6 = 1;
  }
  simpleAnimation = (UnityEngine_Object_o *)this->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    v7 = this->fields.simpleAnimation;
    if ( v7 )
    {
      monitor = (UnityEngine_Object_o *)v7[1].monitor;
      if ( monitor )
      {
        name = UnityEngine_Object__get_name(monitor, 0LL);
        Item = SimpleAnimation__get_Item(v7, name, 0LL);
        if ( Item )
        {
          klass = Item->klass;
          v12 = Item;
          if ( *(_WORD *)&Item->klass->_2.bitflags1 )
          {
            v13 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v13;
              p_offset += 2;
              if ( v13 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                goto LABEL_14;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
          }
          else
          {
LABEL_14:
            p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
            v12,
            *(_QWORD *)(p_method + 8),
            v3);
          v22 = this->fields.simpleAnimation;
          if ( v22 )
          {
            SimpleAnimation__Sample(v22, 0LL);
            return;
          }
        }
      }
    }
LABEL_28:
    sub_B170D4();
  }
  normalAnimation = (UnityEngine_Object_o *)this->fields.normalAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(normalAnimation, 0LL, 0LL) )
  {
    v17 = this->fields.normalAnimation;
    if ( v17 )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.normalAnimation, 0LL);
      if ( clip )
      {
        v19 = UnityEngine_Object__get_name(clip, 0LL);
        v20 = UnityEngine_Animation__get_Item(v17, v19, 0LL);
        if ( v20 )
        {
          UnityEngine_AnimationState__set_time(v20, *(float *)&v3, 0LL);
          v21 = this->fields.normalAnimation;
          if ( v21 )
          {
            UnityEngine_Animation__Sample(v21, 0LL);
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

  if ( (byte_40FC6D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestBoardListEffectComponent__update__, method);
    byte_40FC6D4 = 1;
  }
  FSM = this->fields.FSM;
  if ( FSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)FSM,
      (const MethodInfo_2908038 *)Method_CStateManager_QuestBoardListEffectComponent__update__);
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
  UnityEngine_Object_o *monitor; // x0
  System_String_o *v9; // x0
  struct SimpleAnimation_o *v10; // x20
  UnityEngine_Object_o *v11; // x0
  System_String_o *v12; // x0
  struct SimpleAnimation_o *v13; // x20
  UnityEngine_Object_o *v14; // x0
  System_String_o *v15; // x0
  SimpleAnimation_State_o *v16; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v18; // x20
  unsigned __int64 v19; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v23; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *name; // x0
  UnityEngine_Animation_o *v26; // x20
  UnityEngine_Object_o *v27; // x0
  System_String_o *v28; // x0
  UnityEngine_Animation_o *v29; // x20
  UnityEngine_Object_o *v30; // x0
  System_String_o *v31; // x0
  UnityEngine_AnimationState_o *Item; // x0
  UnityEngine_Animation_o *v33; // x19
  UnityEngine_Object_o *v34; // x0
  System_String_o *v35; // x0
  UnityEngine_AnimationState_o *v36; // x0
  struct SimpleAnimation_o *v37; // x19
  UnityEngine_Object_o *v38; // x0
  System_String_o *v39; // x0
  SimpleAnimation_State_o *v40; // x0
  SimpleAnimation_State_c *v41; // x8
  SimpleAnimation_State_o *v42; // x19
  unsigned __int64 v43; // x10
  SimpleAnimation_State_c **v44; // x11
  __int64 v45; // x0

  if ( (byte_40FA2E9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v5);
    byte_40FA2E9 = 1;
  }
  if ( !that )
    goto LABEL_51;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    normalAnimation = (UnityEngine_Object_o *)that->fields.normalAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(normalAnimation, 0LL, 0LL) )
      return;
    v23 = that->fields.normalAnimation;
    if ( v23 )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.normalAnimation, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        if ( !UnityEngine_Animation__IsPlaying(v23, name, 0LL) )
        {
          v26 = that->fields.normalAnimation;
          if ( !v26 )
            goto LABEL_51;
          v27 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.normalAnimation, 0LL);
          if ( !v27 )
            goto LABEL_51;
          v28 = UnityEngine_Object__get_name(v27, 0LL);
          UnityEngine_Animation__Play_49744236(v26, v28, 0LL);
        }
        v29 = that->fields.normalAnimation;
        if ( v29 )
        {
          v30 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.normalAnimation, 0LL);
          if ( v30 )
          {
            v31 = UnityEngine_Object__get_name(v30, 0LL);
            Item = UnityEngine_Animation__get_Item(v29, v31, 0LL);
            if ( Item )
            {
              UnityEngine_AnimationState__set_time(Item, that->fields.animationStartTime, 0LL);
              v33 = that->fields.normalAnimation;
              if ( v33 )
              {
                v34 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v33, 0LL);
                if ( v34 )
                {
                  v35 = UnityEngine_Object__get_name(v34, 0LL);
                  v36 = UnityEngine_Animation__get_Item(v33, v35, 0LL);
                  if ( v36 )
                  {
                    UnityEngine_AnimationState__set_speed(v36, 1.0, 0LL);
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
    sub_B170D4();
  }
  v7 = that->fields.simpleAnimation;
  if ( !v7 )
    goto LABEL_51;
  monitor = (UnityEngine_Object_o *)v7[1].monitor;
  if ( !monitor )
    goto LABEL_51;
  v9 = UnityEngine_Object__get_name(monitor, 0LL);
  if ( !SimpleAnimation__IsPlaying(v7, v9, 0LL) )
  {
    v10 = that->fields.simpleAnimation;
    if ( !v10 )
      goto LABEL_51;
    v11 = (UnityEngine_Object_o *)v10[1].monitor;
    if ( !v11 )
      goto LABEL_51;
    v12 = UnityEngine_Object__get_name(v11, 0LL);
    SimpleAnimation__Play_16380456(v10, v12, 0LL);
  }
  v13 = that->fields.simpleAnimation;
  if ( !v13 )
    goto LABEL_51;
  v14 = (UnityEngine_Object_o *)v13[1].monitor;
  if ( !v14 )
    goto LABEL_51;
  v15 = UnityEngine_Object__get_name(v14, 0LL);
  v16 = SimpleAnimation__get_Item(v13, v15, 0LL);
  if ( !v16 )
    goto LABEL_51;
  klass = v16->klass;
  *(float *)&v3 = that->fields.animationStartTime;
  v18 = v16;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v19;
      p_offset += 2;
      if ( v19 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_21:
    p_method = sub_AAFEF8(v16, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(v18, *(_QWORD *)(p_method + 8), v3);
  v37 = that->fields.simpleAnimation;
  if ( !v37 )
    goto LABEL_51;
  v38 = (UnityEngine_Object_o *)v37[1].monitor;
  if ( !v38 )
    goto LABEL_51;
  v39 = UnityEngine_Object__get_name(v38, 0LL);
  v40 = SimpleAnimation__get_Item(v37, v39, 0LL);
  if ( !v40 )
    goto LABEL_51;
  v41 = v40->klass;
  v42 = v40;
  if ( *(_WORD *)&v40->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    v44 = (SimpleAnimation_State_c **)&v41->_1.interfaceOffsets->offset;
    while ( *(v44 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v43;
      v44 += 2;
      if ( v43 >= *(unsigned __int16 *)&v40->klass->_2.bitflags1 )
        goto LABEL_48;
    }
    v45 = (__int64)&v41->vtable[*(_DWORD *)v44 + 8].method;
  }
  else
  {
LABEL_48:
    v45 = sub_AAFEF8(v40, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v45)(v42, *(_QWORD *)(v45 + 8), 1.0);
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
  UnityEngine_Object_o *monitor; // x0
  System_String_o *v8; // x0
  SimpleAnimation_State_o *v9; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v11; // x20
  unsigned __int64 v12; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *normalAnimation; // x20
  UnityEngine_Animation_o *v16; // x20
  UnityEngine_Object_o *clip; // x0
  System_String_o *name; // x0
  UnityEngine_AnimationState_o *Item; // x0
  System_Action_o *OnPlayingAct; // x0
  UnityEngine_Animation_o *v21; // x20
  UnityEngine_Object_o *v22; // x0
  System_String_o *v23; // x0
  UnityEngine_Animation_o *v24; // x20
  UnityEngine_Object_o *v25; // x0
  System_String_o *v26; // x0
  UnityEngine_AnimationState_o *v27; // x0
  UnityEngine_Animation_o *v28; // x0
  System_Action_o *v29; // x0
  struct SimpleAnimation_o *v30; // x20
  UnityEngine_Object_o *v31; // x0
  System_String_o *v32; // x0
  struct SimpleAnimation_o *v33; // x20
  UnityEngine_Object_o *v34; // x0
  System_String_o *v35; // x0
  SimpleAnimation_State_o *v36; // x0
  SimpleAnimation_State_c *v37; // x8
  SimpleAnimation_State_o *v38; // x20
  unsigned __int64 v39; // x10
  SimpleAnimation_State_c **v40; // x11
  __int64 v41; // x0
  SimpleAnimation_o *v42; // x0

  if ( (byte_40FA2EA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v4);
    byte_40FA2EA = 1;
  }
  if ( !that )
    goto LABEL_60;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL) )
  {
    normalAnimation = (UnityEngine_Object_o *)that->fields.normalAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(normalAnimation, 0LL, 0LL) )
      return;
    if ( that->fields.OnPlayingAct && !that->fields.isPlayingAct )
    {
      v16 = that->fields.normalAnimation;
      if ( !v16 )
        goto LABEL_60;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.normalAnimation, 0LL);
      if ( !clip )
        goto LABEL_60;
      name = UnityEngine_Object__get_name(clip, 0LL);
      Item = UnityEngine_Animation__get_Item(v16, name, 0LL);
      if ( !Item )
        goto LABEL_60;
      if ( UnityEngine_AnimationState__get_time(Item, 0LL) >= that->fields.playingActStartTime )
      {
        OnPlayingAct = that->fields.OnPlayingAct;
        that->fields.isPlayingAct = 1;
        ActionExtensions__Call(OnPlayingAct, 0LL);
      }
    }
    v21 = that->fields.normalAnimation;
    if ( !v21 )
      goto LABEL_60;
    v22 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.normalAnimation, 0LL);
    if ( !v22 )
      goto LABEL_60;
    v23 = UnityEngine_Object__get_name(v22, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v21, v23, 0LL) )
    {
      if ( that->fields.animationEndTime == 0.0 )
        return;
      v24 = that->fields.normalAnimation;
      if ( !v24 )
        goto LABEL_60;
      v25 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.normalAnimation, 0LL);
      if ( !v25 )
        goto LABEL_60;
      v26 = UnityEngine_Object__get_name(v25, 0LL);
      v27 = UnityEngine_Animation__get_Item(v24, v26, 0LL);
      if ( !v27 )
        goto LABEL_60;
      if ( UnityEngine_AnimationState__get_time(v27, 0LL) < that->fields.animationEndTime )
        return;
      v28 = that->fields.normalAnimation;
      if ( !v28 )
        goto LABEL_60;
      UnityEngine_Animation__Stop(v28, 0LL);
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
    monitor = (UnityEngine_Object_o *)v6[1].monitor;
    if ( !monitor )
      goto LABEL_60;
    v8 = UnityEngine_Object__get_name(monitor, 0LL);
    v9 = SimpleAnimation__get_Item(v6, v8, 0LL);
    if ( !v9 )
      goto LABEL_60;
    klass = v9->klass;
    v11 = v9;
    if ( *(_WORD *)&v9->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v12;
        p_offset += 2;
        if ( v12 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
    }
    else
    {
LABEL_17:
      p_method = sub_AAFEF8(v9, SimpleAnimation_State_TypeInfo, 3LL);
    }
    if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v11, *(_QWORD *)(p_method + 8)) >= that->fields.playingActStartTime )
    {
      v29 = that->fields.OnPlayingAct;
      that->fields.isPlayingAct = 1;
      ActionExtensions__Call(v29, 0LL);
    }
  }
  v30 = that->fields.simpleAnimation;
  if ( !v30 )
    goto LABEL_60;
  v31 = (UnityEngine_Object_o *)v30[1].monitor;
  if ( !v31 )
    goto LABEL_60;
  v32 = UnityEngine_Object__get_name(v31, 0LL);
  if ( !SimpleAnimation__IsPlaying(v30, v32, 0LL) )
    goto LABEL_59;
  if ( that->fields.animationEndTime == 0.0 )
    return;
  v33 = that->fields.simpleAnimation;
  if ( !v33 )
    goto LABEL_60;
  v34 = (UnityEngine_Object_o *)v33[1].monitor;
  if ( !v34 )
    goto LABEL_60;
  v35 = UnityEngine_Object__get_name(v34, 0LL);
  v36 = SimpleAnimation__get_Item(v33, v35, 0LL);
  if ( !v36 )
    goto LABEL_60;
  v37 = v36->klass;
  v38 = v36;
  if ( *(_WORD *)&v36->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = (SimpleAnimation_State_c **)&v37->_1.interfaceOffsets->offset;
    while ( *(v40 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v39;
      v40 += 2;
      if ( v39 >= *(unsigned __int16 *)&v36->klass->_2.bitflags1 )
        goto LABEL_53;
    }
    v41 = (__int64)&v37->vtable[*(_DWORD *)v40 + 3].method;
  }
  else
  {
LABEL_53:
    v41 = sub_AAFEF8(v36, SimpleAnimation_State_TypeInfo, 3LL);
  }
  if ( (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v41)(v38, *(_QWORD *)(v41 + 8)) >= that->fields.animationEndTime )
  {
    v42 = that->fields.simpleAnimation;
    if ( v42 )
    {
      SimpleAnimation__Stop(v42, 0LL);
      goto LABEL_59;
    }
LABEL_60:
    sub_B170D4();
  }
}