void EventPointVsResultAction___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C3F9E5 & 1) == 0 )
  {
    sub_1C37058(&EventPointVsResultAction_TypeInfo);
    sub_1C37058(&StringLiteral_17291/*"bit_vs_result_"*/);
    byte_4C3F9E5 = 1;
  }
  EventPointVsResultAction_TypeInfo->static_fields->ANIMATION_NAME = (struct System_String_o *)StringLiteral_17291/*"bit_vs_result_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)EventPointVsResultAction_TypeInfo->static_fields, StringLiteral_17291/*"bit_vs_result_"*/, v1, v2);
}


void EventPointVsResultAction___ctor(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventPointVsResultAction__Awake(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  struct CStateManager_EventPointVsResultAction__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v8; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  CStateManager_T__o *v10; // x21
  Il2CppObject *v11; // x22
  CStateManager_T__o *v12; // x20
  Il2CppObject *v13; // x21
  const MethodInfo *v14; // x2
  CGThumbnailListItem_o *p_particleObj; // x20
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C3F9DD & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_EventPointVsResultAction___ctor__);
    sub_1C37058(&Method_CStateManager_EventPointVsResultAction__add__);
    sub_1C37058(&CStateManager_EventPointVsResultAction__TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&EventPointVsResultAction_StateNone_TypeInfo);
    sub_1C37058(&EventPointVsResultAction_StatePlay_TypeInfo);
    sub_1C37058(&EventPointVsResultAction_StateTouchWait_TypeInfo);
    byte_4C3F9DD = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C372A4(CStateManager_EventPointVsResultAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_332CF70 *)Method_CStateManager_EventPointVsResultAction___ctor__);
    this->fields.mFSM = (struct CStateManager_EventPointVsResultAction__o *)v4;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1C372A4(EventPointVsResultAction_StateNone_TypeInfo);
    System_Object___ctor(v8, 0);
    if ( !mFSM )
      goto LABEL_23;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_332D018 *)Method_CStateManager_EventPointVsResultAction__add__);
    v10 = (CStateManager_T__o *)*p_mFSM;
    v11 = (Il2CppObject *)sub_1C372A4(EventPointVsResultAction_StatePlay_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !v10 )
      goto LABEL_23;
    CStateManager_object___add(
      v10,
      1,
      (IState_T__o *)v11,
      (const MethodInfo_332D018 *)Method_CStateManager_EventPointVsResultAction__add__);
    v12 = (CStateManager_T__o *)*p_mFSM;
    v13 = (Il2CppObject *)sub_1C372A4(EventPointVsResultAction_StateTouchWait_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !v12 )
      goto LABEL_23;
    CStateManager_object___add(
      v12,
      2,
      (IState_T__o *)v13,
      (const MethodInfo_332D018 *)Method_CStateManager_EventPointVsResultAction__add__);
    EventPointVsResultAction__SetState(this, 0, v14);
  }
  p_particleObj = (CGThumbnailListItem_o *)&this->fields.particleObj;
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(particleObj, 0, 0) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0, 0) )
    {
      v18 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v19 = UnityEngine_Object__Instantiate_object_(
              v18,
              (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v19, (UnityEngine_Component_o *)this, v20);
        if ( !byte_4C3C921 )
        {
          sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C921 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v19,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          v21);
        if ( v19 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v19,
                                         (const MethodInfo_313F43C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0);
            p_particleObj->klass = (CGThumbnailListItem_c *)v19;
            sub_1C36FFC(p_particleObj, (int32_t)v19, v22, v23);
            return;
          }
        }
LABEL_23:
        sub_1C372B4(ComponentInChildren_object);
      }
    }
  }
}


System_String_o *EventPointVsResultAction__GetAnimName(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  return this->fields.animationName;
}


int32_t EventPointVsResultAction__GetState(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  EventPointVsResultAction_o *v2; // x19
  struct CStateManager_EventPointVsResultAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4C3F9E3 & 1) == 0 )
  {
    this = (EventPointVsResultAction_o *)sub_1C37058(&Method_CStateManager_EventPointVsResultAction__getState__);
    byte_4C3F9E3 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C372B4(this);
  return mFSM->fields.m_state;
}


void EventPointVsResultAction__LoadSvts(
        EventPointVsResultAction_o *this,
        int32_t cnt,
        System_Int32_array *servants,
        Face_Type_array *faces,
        int32_t winType,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v13; // x19
  __int64 v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Int32_array **v17; // x28
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Face_Type_array **v20; // x29
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Action_o **v23; // x24
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  il2cpp_array_size_t max_length; // x9
  struct UIStandFigureR_array *SvtComponents; // x10
  Face_Type_array *v29; // x9
  char *v30; // x11
  int32_t v31; // w21
  UIStandFigureR_o *v32; // x22
  int v33; // w23
  System_Action_o *v34; // x20

  while ( 1 )
  {
    if ( (byte_4C3F9E2 & 1) == 0 )
    {
      sub_1C37058(&System_Action_TypeInfo);
      sub_1C37058(&Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__);
      sub_1C37058(&EventPointVsResultAction___c__DisplayClass23_0_TypeInfo);
      byte_4C3F9E2 = 1;
    }
    v13 = sub_1C372A4(EventPointVsResultAction___c__DisplayClass23_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    if ( !v13 )
      goto LABEL_18;
    *(_QWORD *)(v13 + 16) = this;
    sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v15, v16);
    *(_DWORD *)(v13 + 24) = cnt;
    *(_QWORD *)(v13 + 32) = servants;
    v17 = (System_Int32_array **)(v13 + 32);
    sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 32), (int32_t)servants, v18, v19);
    *(_QWORD *)(v13 + 40) = faces;
    v20 = (Face_Type_array **)(v13 + 40);
    sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 40), (int32_t)faces, v21, v22);
    *(_QWORD *)(v13 + 56) = callBack;
    v23 = (System_Action_o **)(v13 + 56);
    *(_DWORD *)(v13 + 48) = winType;
    sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 56), (int32_t)callBack, v24, v25);
    v26 = *(int *)(v13 + 24);
    if ( (int)v26 > 2 )
      goto LABEL_10;
    servants = *v17;
    if ( !*v17 )
      goto LABEL_18;
    max_length = servants->max_length;
    if ( (int)v26 >= (int)max_length )
    {
LABEL_10:
      ActionExtensions__Call(*v23, 0);
      return;
    }
    winType = *(_DWORD *)(v13 + 48);
    if ( winType == 3 )
      break;
    cnt = v26 + 1;
    if ( (_DWORD)v26 + 1 == winType )
      break;
    faces = *v20;
    callBack = *v23;
  }
  SvtComponents = this->fields.SvtComponents;
  if ( !SvtComponents )
    goto LABEL_18;
  if ( (unsigned int)v26 >= LODWORD(SvtComponents->max_length) || (unsigned int)v26 >= (unsigned int)max_length )
    goto LABEL_19;
  v29 = *v20;
  if ( !*v20 )
    goto LABEL_18;
  if ( (unsigned int)v26 >= LODWORD(v29->max_length) )
LABEL_19:
    sub_1C372BC(v14);
  v30 = (char *)servants + 4 * v26;
  v31 = v29->m_Items[v26];
  v32 = SvtComponents->m_Items[v26];
  v33 = *((_DWORD *)v30 + 8);
  v34 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v13,
    Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__,
    0);
  if ( !v32 )
LABEL_18:
    sub_1C372B4(v14);
  UIStandFigureR__SetCharacter_44053560(v32, v33 / 10, v33 % 10, 0, v31, v34, 0);
}


void EventPointVsResultAction__Play(
        EventPointVsResultAction_o *this,
        System_Action_o *end_act,
        MaskFade_o *maskFade,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v13; // x21
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v16; // x21
  __int64 v17; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v19; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v21; // x21
  System_String_o *v22; // x0
  AvalonSceneManager_c *v23; // x0
  System_Action_o *v24; // x21

  if ( (byte_4C3F9E1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_EventPointVsResultAction__Play_b__22_0__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C3F9E1 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mEndAct, (int32_t)end_act, (int32_t)maskFade, method);
  this->fields.localMask = maskFade;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.localMask, (int32_t)maskFade, v9, v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v13 = this->fields.mSimpleAnimation;
    if ( !v13 )
      goto LABEL_30;
    gameObject = (UnityEngine_GameObject_o *)v13->fields.m_Clip;
    if ( !gameObject )
      goto LABEL_30;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v13, name, 0);
    if ( !gameObject )
      goto LABEL_30;
    klass = gameObject->klass;
    v16 = gameObject;
    v17 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
    if ( *(_WORD *)&gameObject->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v17;
        p_offset += 2;
        if ( !v17 )
          goto LABEL_14;
      }
      v19 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v19 = sub_1C87870(gameObject, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v19)(v16, *(_QWORD *)(v19 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v21 = this->fields.mAnimation;
      if ( !v21 )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0);
      if ( !gameObject )
        goto LABEL_30;
      v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v21, v22, 0);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0);
    }
  }
  if ( fade_in_time <= 0.0 )
  {
    v23 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v23 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v23->static_fields->DEFAULT_FADE_TIME;
  }
  v24 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_EventPointVsResultAction__Play_b__22_0__, 0);
  if ( !maskFade )
LABEL_30:
    sub_1C372B4(gameObject);
  MaskFade__Fadein(maskFade, fade_in_time, v24, 0);
}


void EventPointVsResultAction__SetState(EventPointVsResultAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C3F9E4 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_EventPointVsResultAction__setState__);
    byte_4C3F9E4 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C372B4(0);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_332D0A4 *)Method_CStateManager_EventPointVsResultAction__setState__);
}


void EventPointVsResultAction__Setup(
        EventPointVsResultAction_o *this,
        int32_t winType,
        int32_t resultNo,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v9; // x21
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct EventPointVsResultAction_servants_array *resultSvts; // x8
  int v16; // w9
  EventPointVsResultAction_servants_o *v17; // x8
  System_Int32_array *servIds; // x22
  Face_Type_array *FaceIds; // x23
  System_Action_o *v20; // x24
  const MethodInfo *v21; // x6

  if ( (byte_4C3F9DF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__);
    sub_1C37058(&EventPointVsResultAction___c__DisplayClass19_0_TypeInfo);
    byte_4C3F9DF = 1;
  }
  v9 = sub_1C372A4(EventPointVsResultAction___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 32) = callBack;
  *(_DWORD *)(v9 + 24) = resultNo;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)callBack, v13, v14);
  resultSvts = this->fields.resultSvts;
  this->fields.winType = winType;
  if ( !resultSvts )
    goto LABEL_8;
  v16 = *(_DWORD *)(v9 + 24) - 1;
  if ( (unsigned int)v16 >= LODWORD(resultSvts->max_length) )
    sub_1C372BC(v10);
  v17 = resultSvts->m_Items[v16];
  if ( !v17 )
LABEL_8:
    sub_1C372B4(v10);
  servIds = v17->fields.servIds;
  FaceIds = v17->fields.FaceIds;
  v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v9, Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__, 0);
  EventPointVsResultAction__LoadSvts(this, 0, servIds, FaceIds, winType, v20, v21);
}


void EventPointVsResultAction__Update(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C3F9DE & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_EventPointVsResultAction__update__);
    byte_4C3F9DE = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_332D080 *)Method_CStateManager_EventPointVsResultAction__update__);
}


void EventPointVsResultAction___Play_b__22_0(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventPointVsResultAction__SetState(this, 1, v2);
}


void EventPointVsResultAction__setupLocal(
        EventPointVsResultAction_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  UnityEngine_Component_o *transform; // x0
  Il2CppObject *ComponentInChildren_object__51242636; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *mScreenTouchInfo; // x22
  Il2CppObject *Instance; // x22
  Il2CppObject *Component_object; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  EventPointVsResultAction_c *v17; // x0
  System_String_o *ANIMATION_NAME; // x21
  System_String_o *v19; // x0
  struct System_String_o *v20; // x0
  struct System_String_o **p_animationName; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t winType; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3F9E0 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C37058(&EventPointVsResultAction_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3F9E0 = 1;
  }
  winType = 0;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_19;
  ComponentInChildren_object__51242636 = UnityEngine_Component__GetComponentInChildren_object__51242636(
                                           transform,
                                           (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__51242636;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.mSimpleAnimation,
    (int32_t)ComponentInChildren_object__51242636,
    v7,
    v8);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_19;
  v9 = UnityEngine_Component__GetComponentInChildren_object__51242636(
         transform,
         (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mAnimation, (int32_t)v9, v10, v11);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__51242636(
                                           transform,
                                           (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_19;
  BYTE5(transform[4].monitor) = 1;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !Instance )
      goto LABEL_19;
    transform = (UnityEngine_Component_o *)CommonUI__CreateScreeenTouchInfo(
                                             (CommonUI_o *)Instance,
                                             (UnityEngine_Transform_o *)transform,
                                             0,
                                             0);
    if ( !transform )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    this->fields.mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mScreenTouchInfo, (int32_t)Component_object, v15, v16);
  }
  v17 = EventPointVsResultAction_TypeInfo;
  if ( !EventPointVsResultAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointVsResultAction_TypeInfo);
    v17 = EventPointVsResultAction_TypeInfo;
  }
  ANIMATION_NAME = v17->static_fields->ANIMATION_NAME;
  winType = this->fields.winType;
  v19 = System_Int32__ToString((int32_t)&winType, 0);
  v20 = System_String__Concat_63561656(ANIMATION_NAME, v19, 0);
  this->fields.animationName = v20;
  p_animationName = &this->fields.animationName;
  sub_1C36FFC((CGThumbnailListItem_o *)p_animationName, (int32_t)v20, v22, v23);
  transform = (UnityEngine_Component_o *)*(p_animationName - 3);
  if ( !transform || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0)) == 0 )
LABEL_19:
    sub_1C372B4(transform);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  ActionExtensions__Call(callBack, 0);
}


void EventPointVsResultAction_StateNone___ctor(EventPointVsResultAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventPointVsResultAction_StateNone__begin(
        EventPointVsResultAction_StateNone_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void EventPointVsResultAction_StateNone__end(
        EventPointVsResultAction_StateNone_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void EventPointVsResultAction_StateNone__update(
        EventPointVsResultAction_StateNone_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void EventPointVsResultAction_StatePlay___ctor(EventPointVsResultAction_StatePlay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventPointVsResultAction_StatePlay__begin(
        EventPointVsResultAction_StatePlay_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  EventPointVsResultAction_StatePlay_o *v4; // x19
  UnityEngine_Object_o *mSimpleAnimation; // x21
  SimpleAnimation_State_o *v6; // x0
  CGThumbnailListItem_o *p_fields; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CGThumbnailListItem_c *klass; // x21
  _QWORD *image; // x8
  SimpleAnimation_o *v12; // x20
  __int64 v13; // x9
  SimpleAnimation_State_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_AnimationState_o *Item; // x0
  CGThumbnailListItem_o *p_mAnimState; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Animation_o *v21; // x20
  CGThumbnailListItem_c *v22; // x20
  _QWORD *v23; // x8
  __int64 v24; // x9
  SimpleAnimation_State_c **v25; // x10
  __int64 v26; // x0
  CGThumbnailListItem_c *v27; // x19
  _QWORD *v28; // x8
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x0

  v4 = this;
  if ( (byte_4C3F9E6 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (EventPointVsResultAction_StatePlay_o *)sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C3F9E6 = 1;
  }
  if ( !that )
    goto LABEL_43;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0) )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(mAnimation, 0, 0) )
      return;
    this = (EventPointVsResultAction_StatePlay_o *)that->fields.mAnimation;
    if ( this )
    {
      UnityEngine_Animation__Play_71012036((UnityEngine_Animation_o *)this, that->fields.animationName, 0);
      this = (EventPointVsResultAction_StatePlay_o *)that->fields.mAnimation;
      if ( this )
      {
        Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)this, that->fields.animationName, 0);
        v4->fields.mAnimState = Item;
        p_mAnimState = (CGThumbnailListItem_o *)&v4->fields.mAnimState;
        sub_1C36FFC(p_mAnimState, (int32_t)Item, v19, v20);
        this = (EventPointVsResultAction_StatePlay_o *)p_mAnimState->klass;
        if ( p_mAnimState->klass )
        {
          v21 = that->fields.mAnimation;
          this = (EventPointVsResultAction_StatePlay_o *)UnityEngine_AnimationState__get_clip(
                                                           (UnityEngine_AnimationState_o *)this,
                                                           0);
          if ( v21 )
          {
            UnityEngine_Animation__set_clip(v21, (UnityEngine_AnimationClip_o *)this, 0);
            this = (EventPointVsResultAction_StatePlay_o *)p_mAnimState->klass;
            if ( p_mAnimState->klass )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0);
              this = (EventPointVsResultAction_StatePlay_o *)p_mAnimState->klass;
              if ( p_mAnimState->klass )
              {
                UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_43:
    sub_1C372B4(this);
  }
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_43;
  SimpleAnimation__Play_66507412((SimpleAnimation_o *)this, that->fields.animationName, 0);
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_43;
  v6 = SimpleAnimation__get_Item((SimpleAnimation_o *)this, that->fields.animationName, 0);
  v4->fields.mSimpleAnimState = v6;
  p_fields = (CGThumbnailListItem_o *)&v4->fields;
  sub_1C36FFC(p_fields, (int32_t)v6, v8, v9);
  klass = p_fields->klass;
  if ( !p_fields->klass )
    goto LABEL_43;
  image = klass->_1.image;
  v12 = that->fields.mSimpleAnimation;
  v13 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v14 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v14 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v13;
      v14 += 2;
      if ( !v13 )
        goto LABEL_14;
    }
    v15 = (__int64)&image[2 * *(_DWORD *)v14 + 67];
  }
  else
  {
LABEL_14:
    v15 = sub_1C87870(p_fields->klass, SimpleAnimation_State_TypeInfo, 14);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(CGThumbnailListItem_c *, _QWORD))v15)(
                                                   klass,
                                                   *(_QWORD *)(v15 + 8));
  if ( !v12 )
    goto LABEL_43;
  SimpleAnimation__set_clip(v12, (UnityEngine_AnimationClip_o *)this, 0);
  v22 = p_fields->klass;
  if ( !p_fields->klass )
    goto LABEL_43;
  v23 = v22->_1.image;
  v24 = *((unsigned __int16 *)v22->_1.image + 151);
  if ( *((_WORD *)v22->_1.image + 151) )
  {
    v25 = (SimpleAnimation_State_c **)(v23[22] + 8LL);
    while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v24;
      v25 += 2;
      if ( !v24 )
        goto LABEL_33;
    }
    v26 = (__int64)&v23[2 * *(_DWORD *)v25 + 51];
  }
  else
  {
LABEL_33:
    v26 = sub_1C87870(p_fields->klass, SimpleAnimation_State_TypeInfo, 6);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(CGThumbnailListItem_c *, _QWORD, float))v26)(
                                                   v22,
                                                   *(_QWORD *)(v26 + 8),
                                                   0.0);
  v27 = p_fields->klass;
  if ( !v27 )
    goto LABEL_43;
  v28 = v27->_1.image;
  v29 = *((unsigned __int16 *)v27->_1.image + 151);
  if ( *((_WORD *)v27->_1.image + 151) )
  {
    v30 = (SimpleAnimation_State_c **)(v28[22] + 8LL);
    while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v29;
      v30 += 2;
      if ( !v29 )
        goto LABEL_40;
    }
    v31 = (__int64)&v28[2 * *(_DWORD *)v30 + 55];
  }
  else
  {
LABEL_40:
    v31 = sub_1C87870(v27, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(CGThumbnailListItem_c *, _QWORD, float))v31)(v27, *(_QWORD *)(v31 + 8), 1.0);
}


void EventPointVsResultAction_StatePlay__end(
        EventPointVsResultAction_StatePlay_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void EventPointVsResultAction_StatePlay__update(
        EventPointVsResultAction_StatePlay_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  struct SimpleAnimation_State_o *mSimpleAnimState; // x21
  SimpleAnimation_State_c *klass; // x8
  __int64 v7; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v9; // x0
  UnityEngine_AnimationState_o *mAnimState; // x0
  float time; // s0
  float v12; // s8
  float v13; // s0
  struct SimpleAnimation_State_o *v14; // x20
  SimpleAnimation_State_c *v15; // x8
  __int64 v16; // x9
  SimpleAnimation_State_c **v17; // x10
  __int64 v18; // x0
  const MethodInfo *v19; // x2
  struct MaskFade_o *localMask; // x8

  if ( (byte_4C3F9E7 & 1) == 0 )
  {
    sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C3F9E7 = 1;
  }
  mSimpleAnimState = this->fields.mSimpleAnimState;
  if ( mSimpleAnimState )
  {
    klass = mSimpleAnimState->klass;
    v7 = *(unsigned __int16 *)&mSimpleAnimState->klass->_2.rank;
    if ( *(_WORD *)&mSimpleAnimState->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v7;
        p_offset += 2;
        if ( !v7 )
          goto LABEL_8;
      }
      v9 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3];
    }
    else
    {
LABEL_8:
      v9 = sub_1C87870(this->fields.mSimpleAnimState, SimpleAnimation_State_TypeInfo, 3);
    }
    mAnimState = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v9)(
                                                   mSimpleAnimState,
                                                   *(_QWORD *)(v9 + 8));
    v14 = this->fields.mSimpleAnimState;
    if ( !v14 )
      goto LABEL_29;
    v15 = v14->klass;
    v12 = v13;
    v16 = *(unsigned __int16 *)&v14->klass->_2.rank;
    if ( *(_WORD *)&v14->klass->_2.rank )
    {
      v17 = (SimpleAnimation_State_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v16;
        v17 += 2;
        if ( !v16 )
          goto LABEL_20;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 14];
    }
    else
    {
LABEL_20:
      v18 = sub_1C87870(v14, SimpleAnimation_State_TypeInfo, 14);
    }
    mAnimState = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v18)(
                                                   v14,
                                                   *(_QWORD *)(v18 + 8));
    if ( !mAnimState )
      goto LABEL_29;
  }
  else
  {
    if ( !UnityEngine_TrackedReference__op_Inequality((UnityEngine_TrackedReference_o *)this->fields.mAnimState, 0, 0) )
      return;
    mAnimState = this->fields.mAnimState;
    if ( !mAnimState )
      goto LABEL_29;
    time = UnityEngine_AnimationState__get_time(mAnimState, 0);
    mAnimState = this->fields.mAnimState;
    if ( !mAnimState )
      goto LABEL_29;
    v12 = time;
    mAnimState = (UnityEngine_AnimationState_o *)UnityEngine_AnimationState__get_clip(mAnimState, 0);
    if ( !mAnimState )
      goto LABEL_29;
  }
  if ( v12 < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)mAnimState, 0) )
    return;
  if ( !that || (localMask = that->fields.localMask) == 0 )
LABEL_29:
    sub_1C372B4(mAnimState);
  if ( !localMask->fields.isExecuteMask )
    EventPointVsResultAction__SetState(that, 2, v19);
}


void EventPointVsResultAction_StateTouchWait___ctor(
        EventPointVsResultAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventPointVsResultAction_StateTouchWait__begin(
        EventPointVsResultAction_StateTouchWait_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (EventPointVsResultAction_StateTouchWait_o *)that->fields.mScreenTouchInfo) == 0
    || (this = (EventPointVsResultAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0)) == 0 )
  {
    sub_1C372B4(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void EventPointVsResultAction_StateTouchWait__end(
        EventPointVsResultAction_StateTouchWait_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void EventPointVsResultAction_StateTouchWait__update(
        EventPointVsResultAction_StateTouchWait_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x19
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  MaskFade_o *v11; // x21
  AvalonSceneManager_c *v12; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x2

  if ( (byte_4C3F9E8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&CTouch_TypeInfo);
    sub_1C37058(&Method_EventPointVsResultAction_StateTouchWait_update__);
    sub_1C37058(&Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_1C37058(&EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4C3F9E8 = 1;
  }
  v4 = sub_1C372A4(EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_19;
  *(_QWORD *)(v4 + 16) = that;
  v8 = v4 + 16;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v6, v7);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v8 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v8 + 104LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0);
          v9 = Method_EventPointVsResultAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventPointVsResultAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v9 = (_QWORD *)sub_1C37070(Method_EventPointVsResultAction_StateTouchWait_update__);
          v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
          if ( *(_QWORD *)v8 )
          {
            v11 = *(MaskFade_o **)(*(_QWORD *)v8 + 120LL);
            v12 = AvalonSceneManager_TypeInfo;
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v12 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
            v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(
              v14,
              (Il2CppObject *)v4,
              Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0);
            if ( v11 )
            {
              MaskFade__Fadeout(v11, 1, DEFAULT_FADE_TIME, v14, 0);
              isTouchPush = *(UnityEngine_GameObject_o **)v8;
              if ( *(_QWORD *)v8 )
              {
                EventPointVsResultAction__SetState((EventPointVsResultAction_o *)isTouchPush, 0, v15);
                return;
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_1C372B4(isTouchPush);
  }
}


void EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0___ctor(
        EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct EventPointVsResultAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C372B4(this);
  ActionExtensions__Call(that->fields.mEndAct, 0);
}


void EventPointVsResultAction___c__DisplayClass19_0___ctor(
        EventPointVsResultAction___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventPointVsResultAction___c__DisplayClass19_0___Setup_b__0(
        EventPointVsResultAction___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  EventPointVsResultAction___c__DisplayClass19_0_o *v8; // x19
  struct EventPointVsResultAction_o *_4__this; // x8
  struct System_Int32_array *bgs; // x9
  int v11; // w10
  ExUITexture_o *mBg; // x20
  Il2CppObject *v13; // x0
  System_Action_o *_9__1; // x22
  EventPointVsResultAction___c__DisplayClass19_0_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  v8 = this;
  if ( (byte_4C3F9E9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__);
    this = (EventPointVsResultAction___c__DisplayClass19_0_o *)sub_1C37058(&StringLiteral_3032/*"Back/back{0}"*/);
    byte_4C3F9E9 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  bgs = _4__this->fields.bgs;
  if ( !bgs )
    goto LABEL_13;
  v11 = v8->fields.resultNo - 1;
  if ( (unsigned int)v11 >= LODWORD(bgs->max_length) )
    sub_1C372BC(this);
  mBg = _4__this->fields.mBg;
  v19 = bgs->m_Items[v11];
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v2, v3, v4, v5, v6, v7);
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)System_String__Format(
                                                               (System_String_o *)StringLiteral_3032/*"Back/back{0}"*/,
                                                               v13,
                                                               0);
  _9__1 = v8->fields.__9__1;
  v15 = this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v8,
      Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__,
      0);
    v8->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v8->fields.__9__1, (int32_t)_9__1, v16, v17);
  }
  if ( !mBg )
    goto LABEL_13;
  if ( ExUITexture__SetAssetImage(mBg, (System_String_o *)v15, _9__1, 0) )
    return;
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)v8->fields.__4__this;
  if ( !this )
LABEL_13:
    sub_1C372B4(this);
  EventPointVsResultAction__setupLocal((EventPointVsResultAction_o *)this, v8->fields.callBack, v18);
}


void EventPointVsResultAction___c__DisplayClass19_0___Setup_b__1(
        EventPointVsResultAction___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C372B4(this);
  EventPointVsResultAction__setupLocal(this->fields.__4__this, this->fields.callBack, v2);
}


void EventPointVsResultAction___c__DisplayClass23_0___ctor(
        EventPointVsResultAction___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventPointVsResultAction___c__DisplayClass23_0___LoadSvts_b__0(
        EventPointVsResultAction___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  EventPointVsResultAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  EventPointVsResultAction__LoadSvts(
    _4__this,
    this->fields.cnt + 1,
    this->fields.servants,
    this->fields.faces,
    this->fields.winType,
    this->fields.callBack,
    v2);
}


void EventPointVsResultAction_servants___ctor(EventPointVsResultAction_servants_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}