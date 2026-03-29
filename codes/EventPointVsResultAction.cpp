void EventPointVsResultAction___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D2D342 & 1) == 0 )
  {
    sub_1C93AD4(&EventPointVsResultAction_TypeInfo);
    sub_1C93AD4(&StringLiteral_17419/*"bit_vs_result_"*/);
    byte_4D2D342 = 1;
  }
  EventPointVsResultAction_TypeInfo->static_fields->ANIMATION_NAME = (struct System_String_o *)StringLiteral_17419/*"bit_vs_result_"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EventPointVsResultAction_TypeInfo->static_fields,
    StringLiteral_17419/*"bit_vs_result_"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v12; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x20
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x2
  GrandQuestFolderBoardItem_o *p_particleObj; // x20
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x21
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  if ( (byte_4D2D33A & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_EventPointVsResultAction___ctor__);
    sub_1C93AD4(&Method_CStateManager_EventPointVsResultAction__add__);
    sub_1C93AD4(&CStateManager_EventPointVsResultAction__TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&EventPointVsResultAction_StateNone_TypeInfo);
    sub_1C93AD4(&EventPointVsResultAction_StatePlay_TypeInfo);
    sub_1C93AD4(&EventPointVsResultAction_StateTouchWait_TypeInfo);
    byte_4D2D33A = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C93D20(CStateManager_EventPointVsResultAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_33EE80C *)Method_CStateManager_EventPointVsResultAction___ctor__);
    this->fields.mFSM = (struct CStateManager_EventPointVsResultAction__o *)v4;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (Il2CppObject *)sub_1C93D20(EventPointVsResultAction_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !mFSM )
      goto LABEL_23;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_EventPointVsResultAction__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (Il2CppObject *)sub_1C93D20(EventPointVsResultAction_StatePlay_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15 )
      goto LABEL_23;
    CStateManager_object___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_EventPointVsResultAction__add__);
    v17 = (CStateManager_T__o *)*p_mFSM;
    v18 = (Il2CppObject *)sub_1C93D20(EventPointVsResultAction_StateTouchWait_TypeInfo);
    System_Object___ctor(v18, 0);
    if ( !v17 )
      goto LABEL_23;
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_EventPointVsResultAction__add__);
    EventPointVsResultAction__SetState(this, 0, v19);
  }
  p_particleObj = (GrandQuestFolderBoardItem_o *)&this->fields.particleObj;
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
      v23 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v24 = UnityEngine_Object__Instantiate_object_(
              v23,
              (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0, 0) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v24, (UnityEngine_Component_o *)this, v25);
        if ( !byte_4D2A139 )
        {
          sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A139 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v24,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          v26);
        if ( v24 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v24,
                                         (const MethodInfo_31FC2E8 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0);
            p_particleObj->klass = (GrandQuestFolderBoardItem_c *)v24;
            sub_1C93A78(p_particleObj, (int32_t)v24, v27, v28, v29, v30, v31, v32);
            return;
          }
        }
LABEL_23:
        sub_1C93D2C(ComponentInChildren_object, v14);
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
  if ( (byte_4D2D340 & 1) == 0 )
  {
    this = (EventPointVsResultAction_o *)sub_1C93AD4(&Method_CStateManager_EventPointVsResultAction__getState__);
    byte_4D2D340 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C93D2C(this, method);
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
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Int32_array **v22; // x28
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  Face_Type_array **v29; // x29
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Action_o **v36; // x24
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  __int64 v43; // x8
  il2cpp_array_size_t max_length; // x9
  struct UIStandFigureR_array *SvtComponents; // x10
  Face_Type_array *v46; // x9
  char *v47; // x11
  int32_t v48; // w21
  UIStandFigureR_o *v49; // x22
  int v50; // w23
  System_Action_o *v51; // x20

  while ( 1 )
  {
    if ( (byte_4D2D33F & 1) == 0 )
    {
      sub_1C93AD4(&System_Action_TypeInfo);
      sub_1C93AD4(&Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__);
      sub_1C93AD4(&EventPointVsResultAction___c__DisplayClass23_0_TypeInfo);
      byte_4D2D33F = 1;
    }
    v13 = sub_1C93D20(EventPointVsResultAction___c__DisplayClass23_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    if ( !v13 )
      goto LABEL_18;
    *(_QWORD *)(v13 + 16) = this;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
    *(_DWORD *)(v13 + 24) = cnt;
    *(_QWORD *)(v13 + 32) = servants;
    v22 = (System_Int32_array **)(v13 + 32);
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 32), (int32_t)servants, v23, v24, v25, v26, v27, v28);
    *(_QWORD *)(v13 + 40) = faces;
    v29 = (Face_Type_array **)(v13 + 40);
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 40), (int32_t)faces, v30, v31, v32, v33, v34, v35);
    *(_QWORD *)(v13 + 56) = callBack;
    v36 = (System_Action_o **)(v13 + 56);
    *(_DWORD *)(v13 + 48) = winType;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 56), (int32_t)callBack, v37, v38, v39, v40, v41, v42);
    v43 = *(int *)(v13 + 24);
    if ( (int)v43 > 2 )
      goto LABEL_10;
    servants = *v22;
    if ( !*v22 )
      goto LABEL_18;
    max_length = servants->max_length;
    if ( (int)v43 >= (int)max_length )
    {
LABEL_10:
      ActionExtensions__Call(*v36, 0);
      return;
    }
    winType = *(_DWORD *)(v13 + 48);
    if ( winType == 3 )
      break;
    cnt = v43 + 1;
    if ( (_DWORD)v43 + 1 == winType )
      break;
    faces = *v29;
    callBack = *v36;
  }
  SvtComponents = this->fields.SvtComponents;
  if ( !SvtComponents )
    goto LABEL_18;
  if ( (unsigned int)v43 >= LODWORD(SvtComponents->max_length) || (unsigned int)v43 >= (unsigned int)max_length )
    goto LABEL_19;
  v46 = *v29;
  if ( !*v29 )
    goto LABEL_18;
  if ( (unsigned int)v43 >= LODWORD(v46->max_length) )
LABEL_19:
    sub_1C93D34(v14);
  v47 = (char *)servants + 4 * v43;
  v48 = v46->m_Items[v43];
  v49 = SvtComponents->m_Items[v43];
  v50 = *((_DWORD *)v47 + 8);
  v51 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v13,
    Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__,
    0);
  if ( !v49 )
LABEL_18:
    sub_1C93D2C(v14, v15);
  UIStandFigureR__SetCharacter_44740112(v49, v50 / 10, v50 % 10, 0, v48, v51, 0);
}


void EventPointVsResultAction__Play(
        EventPointVsResultAction_o *this,
        System_Action_o *end_act,
        MaskFade_o *maskFade,
        float fade_in_time,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v22; // x21
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v25; // x21
  __int64 v26; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v28; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v30; // x21
  System_String_o *v31; // x0
  AvalonSceneManager_c *v32; // x0
  System_Action_o *v33; // x21

  if ( (byte_4D2D33E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_EventPointVsResultAction__Play_b__22_0__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SimpleAnimation_State_TypeInfo);
    byte_4D2D33E = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mEndAct,
    (int32_t)end_act,
    (int32_t)maskFade,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.localMask = maskFade;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.localMask, (int32_t)maskFade, v13, v14, v15, v16, v17, v18);
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
    v22 = this->fields.mSimpleAnimation;
    if ( !v22 )
      goto LABEL_30;
    gameObject = (UnityEngine_GameObject_o *)v22->fields.m_Clip;
    if ( !gameObject )
      goto LABEL_30;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v22, name, 0);
    if ( !gameObject )
      goto LABEL_30;
    klass = gameObject->klass;
    v25 = gameObject;
    v26 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
    if ( *(_WORD *)&gameObject->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v26;
        p_offset += 2;
        if ( !v26 )
          goto LABEL_14;
      }
      v28 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v28 = sub_1C69E5C(gameObject, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v28)(v25, *(_QWORD *)(v28 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v30 = this->fields.mAnimation;
      if ( !v30 )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0);
      if ( !gameObject )
        goto LABEL_30;
      v31 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v30, v31, 0);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0);
    }
  }
  if ( fade_in_time <= 0.0 )
  {
    v32 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v32 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v32->static_fields->DEFAULT_FADE_TIME;
  }
  v33 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_EventPointVsResultAction__Play_b__22_0__, 0);
  if ( !maskFade )
LABEL_30:
    sub_1C93D2C(gameObject, v20);
  MaskFade__Fadein(maskFade, fade_in_time, v33, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventPointVsResultAction__SetState(EventPointVsResultAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4D2D341 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_EventPointVsResultAction__setState__);
    byte_4D2D341 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C93D2C(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_33EE940 *)Method_CStateManager_EventPointVsResultAction__setState__);
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
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct EventPointVsResultAction_servants_array *resultSvts; // x8
  int v25; // w9
  EventPointVsResultAction_servants_o *v26; // x8
  System_Int32_array *servIds; // x22
  Face_Type_array *FaceIds; // x23
  System_Action_o *v29; // x24
  const MethodInfo *v30; // x6

  if ( (byte_4D2D33C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__);
    sub_1C93AD4(&EventPointVsResultAction___c__DisplayClass19_0_TypeInfo);
    byte_4D2D33C = 1;
  }
  v9 = sub_1C93D20(EventPointVsResultAction___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = callBack;
  *(_DWORD *)(v9 + 24) = resultNo;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)callBack, v18, v19, v20, v21, v22, v23);
  resultSvts = this->fields.resultSvts;
  this->fields.winType = winType;
  if ( !resultSvts )
    goto LABEL_8;
  v25 = *(_DWORD *)(v9 + 24) - 1;
  if ( (unsigned int)v25 >= LODWORD(resultSvts->max_length) )
    sub_1C93D34(v10);
  v26 = resultSvts->m_Items[v25];
  if ( !v26 )
LABEL_8:
    sub_1C93D2C(v10, v11);
  servIds = v26->fields.servIds;
  FaceIds = v26->fields.FaceIds;
  v29 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)v9, Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__, 0);
  EventPointVsResultAction__LoadSvts(this, 0, servIds, FaceIds, winType, v29, v30);
}


void EventPointVsResultAction__Update(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4D2D33B & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_EventPointVsResultAction__update__);
    byte_4D2D33B = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_33EE91C *)Method_CStateManager_EventPointVsResultAction__update__);
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
  __int64 v6; // x1
  Il2CppObject *ComponentInChildren_object__52016240; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Object_o *mScreenTouchInfo; // x22
  Il2CppObject *Instance; // x22
  Il2CppObject *Component_object; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  EventPointVsResultAction_c *v30; // x0
  System_String_o *ANIMATION_NAME; // x21
  System_String_o *v32; // x0
  struct System_String_o *v33; // x0
  struct System_String_o **p_animationName; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t winType; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2D33D & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C93AD4(&EventPointVsResultAction_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2D33D = 1;
  }
  winType = 0;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_19;
  ComponentInChildren_object__52016240 = UnityEngine_Component__GetComponentInChildren_object__52016240(
                                           transform,
                                           (const MethodInfo_319B470 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__52016240;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mSimpleAnimation,
    (int32_t)ComponentInChildren_object__52016240,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_19;
  v14 = UnityEngine_Component__GetComponentInChildren_object__52016240(
          transform,
          (const MethodInfo_319B470 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)v14;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mAnimation, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__52016240(
                                           transform,
                                           (const MethodInfo_319B470 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    this->fields.mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.mScreenTouchInfo,
      (int32_t)Component_object,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = EventPointVsResultAction_TypeInfo;
  if ( !EventPointVsResultAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointVsResultAction_TypeInfo);
    v30 = EventPointVsResultAction_TypeInfo;
  }
  ANIMATION_NAME = v30->static_fields->ANIMATION_NAME;
  winType = this->fields.winType;
  v32 = System_Int32__ToString((int32_t)&winType, 0);
  v33 = System_String__Concat_64425724(ANIMATION_NAME, v32, 0);
  this->fields.animationName = v33;
  p_animationName = &this->fields.animationName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_animationName, (int32_t)v33, v35, v36, v37, v38, v39, v40);
  transform = (UnityEngine_Component_o *)*(p_animationName - 3);
  if ( !transform || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0)) == 0 )
LABEL_19:
    sub_1C93D2C(transform, v6);
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
  GrandQuestFolderBoardItem_o *p_fields; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  GrandQuestFolderBoardItem_c *klass; // x21
  _QWORD *image; // x8
  SimpleAnimation_o *v16; // x20
  __int64 v17; // x9
  SimpleAnimation_State_c **v18; // x10
  __int64 v19; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_AnimationState_o *Item; // x0
  GrandQuestFolderBoardItem_o *p_mAnimState; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  UnityEngine_Animation_o *v29; // x20
  GrandQuestFolderBoardItem_c *v30; // x20
  _QWORD *v31; // x8
  __int64 v32; // x9
  SimpleAnimation_State_c **v33; // x10
  __int64 v34; // x0
  GrandQuestFolderBoardItem_c *v35; // x19
  _QWORD *v36; // x8
  __int64 v37; // x9
  SimpleAnimation_State_c **v38; // x10
  __int64 v39; // x0

  v4 = this;
  if ( (byte_4D2D343 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    this = (EventPointVsResultAction_StatePlay_o *)sub_1C93AD4(&SimpleAnimation_State_TypeInfo);
    byte_4D2D343 = 1;
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
      UnityEngine_Animation__Play_71862428((UnityEngine_Animation_o *)this, that->fields.animationName, 0);
      this = (EventPointVsResultAction_StatePlay_o *)that->fields.mAnimation;
      if ( this )
      {
        Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)this, that->fields.animationName, 0);
        v4->fields.mAnimState = Item;
        p_mAnimState = (GrandQuestFolderBoardItem_o *)&v4->fields.mAnimState;
        sub_1C93A78(p_mAnimState, (int32_t)Item, v23, v24, v25, v26, v27, v28);
        this = (EventPointVsResultAction_StatePlay_o *)p_mAnimState->klass;
        if ( p_mAnimState->klass )
        {
          v29 = that->fields.mAnimation;
          this = (EventPointVsResultAction_StatePlay_o *)UnityEngine_AnimationState__get_clip(
                                                           (UnityEngine_AnimationState_o *)this,
                                                           0);
          if ( v29 )
          {
            UnityEngine_Animation__set_clip(v29, (UnityEngine_AnimationClip_o *)this, 0);
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
    sub_1C93D2C(this, that);
  }
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_43;
  SimpleAnimation__Play_67370764((SimpleAnimation_o *)this, that->fields.animationName, 0);
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_43;
  v6 = SimpleAnimation__get_Item((SimpleAnimation_o *)this, that->fields.animationName, 0);
  v4->fields.mSimpleAnimState = v6;
  p_fields = (GrandQuestFolderBoardItem_o *)&v4->fields;
  sub_1C93A78(p_fields, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  klass = p_fields->klass;
  if ( !p_fields->klass )
    goto LABEL_43;
  image = klass->_1.image;
  v16 = that->fields.mSimpleAnimation;
  v17 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v18 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v18 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_14;
    }
    v19 = (__int64)&image[2 * *(_DWORD *)v18 + 67];
  }
  else
  {
LABEL_14:
    v19 = sub_1C69E5C(p_fields->klass, SimpleAnimation_State_TypeInfo, 14);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(GrandQuestFolderBoardItem_c *, _QWORD))v19)(
                                                   klass,
                                                   *(_QWORD *)(v19 + 8));
  if ( !v16 )
    goto LABEL_43;
  SimpleAnimation__set_clip(v16, (UnityEngine_AnimationClip_o *)this, 0);
  v30 = p_fields->klass;
  if ( !p_fields->klass )
    goto LABEL_43;
  v31 = v30->_1.image;
  v32 = *((unsigned __int16 *)v30->_1.image + 151);
  if ( *((_WORD *)v30->_1.image + 151) )
  {
    v33 = (SimpleAnimation_State_c **)(v31[22] + 8LL);
    while ( *(v33 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v32;
      v33 += 2;
      if ( !v32 )
        goto LABEL_33;
    }
    v34 = (__int64)&v31[2 * *(_DWORD *)v33 + 51];
  }
  else
  {
LABEL_33:
    v34 = sub_1C69E5C(p_fields->klass, SimpleAnimation_State_TypeInfo, 6);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(GrandQuestFolderBoardItem_c *, _QWORD, float))v34)(
                                                   v30,
                                                   *(_QWORD *)(v34 + 8),
                                                   0.0);
  v35 = p_fields->klass;
  if ( !v35 )
    goto LABEL_43;
  v36 = v35->_1.image;
  v37 = *((unsigned __int16 *)v35->_1.image + 151);
  if ( *((_WORD *)v35->_1.image + 151) )
  {
    v38 = (SimpleAnimation_State_c **)(v36[22] + 8LL);
    while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v37;
      v38 += 2;
      if ( !v37 )
        goto LABEL_40;
    }
    v39 = (__int64)&v36[2 * *(_DWORD *)v38 + 55];
  }
  else
  {
LABEL_40:
    v39 = sub_1C69E5C(v35, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(GrandQuestFolderBoardItem_c *, _QWORD, float))v39)(v35, *(_QWORD *)(v39 + 8), 1.0);
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
  __int64 v10; // x1
  UnityEngine_AnimationState_o *mAnimState; // x0
  float time; // s0
  float v13; // s8
  float v14; // s0
  struct SimpleAnimation_State_o *v15; // x20
  SimpleAnimation_State_c *v16; // x8
  __int64 v17; // x9
  SimpleAnimation_State_c **v18; // x10
  __int64 v19; // x0
  const MethodInfo *v20; // x2
  struct MaskFade_o *localMask; // x8

  if ( (byte_4D2D344 & 1) == 0 )
  {
    sub_1C93AD4(&SimpleAnimation_State_TypeInfo);
    byte_4D2D344 = 1;
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
      v9 = sub_1C69E5C(this->fields.mSimpleAnimState, SimpleAnimation_State_TypeInfo, 3);
    }
    mAnimState = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v9)(
                                                   mSimpleAnimState,
                                                   *(_QWORD *)(v9 + 8));
    v15 = this->fields.mSimpleAnimState;
    if ( !v15 )
      goto LABEL_29;
    v16 = v15->klass;
    v13 = v14;
    v17 = *(unsigned __int16 *)&v15->klass->_2.rank;
    if ( *(_WORD *)&v15->klass->_2.rank )
    {
      v18 = (SimpleAnimation_State_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v17;
        v18 += 2;
        if ( !v17 )
          goto LABEL_20;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 14];
    }
    else
    {
LABEL_20:
      v19 = sub_1C69E5C(v15, SimpleAnimation_State_TypeInfo, 14);
    }
    mAnimState = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v19)(
                                                   v15,
                                                   *(_QWORD *)(v19 + 8));
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
    v13 = time;
    mAnimState = (UnityEngine_AnimationState_o *)UnityEngine_AnimationState__get_clip(mAnimState, 0);
    if ( !mAnimState )
      goto LABEL_29;
  }
  if ( v13 < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)mAnimState, 0) )
    return;
  if ( !that || (localMask = that->fields.localMask) == 0 )
LABEL_29:
    sub_1C93D2C(mAnimState, v10);
  if ( !localMask->fields.isExecuteMask )
    EventPointVsResultAction__SetState(that, 2, v20);
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
    sub_1C93D2C(this, that);
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
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x19
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  MaskFade_o *v16; // x21
  AvalonSceneManager_c *v17; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x2

  if ( (byte_4D2D345 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&CTouch_TypeInfo);
    sub_1C93AD4(&Method_EventPointVsResultAction_StateTouchWait_update__);
    sub_1C93AD4(&Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_1C93AD4(&EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4D2D345 = 1;
  }
  v4 = sub_1C93D20(EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_19;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v13 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v13 + 104LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0);
          v14 = Method_EventPointVsResultAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventPointVsResultAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v14 = (_QWORD *)sub_1C93AEC(Method_EventPointVsResultAction_StateTouchWait_update__);
          v15 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v14, v14[4]);
          OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
          if ( *(_QWORD *)v13 )
          {
            v16 = *(MaskFade_o **)(*(_QWORD *)v13 + 120LL);
            v17 = AvalonSceneManager_TypeInfo;
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v17 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
            v19 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(
              v19,
              (Il2CppObject *)v4,
              Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0);
            if ( v16 )
            {
              MaskFade__Fadeout(v16, 1, DEFAULT_FADE_TIME, v19, 0);
              isTouchPush = *(UnityEngine_GameObject_o **)v13;
              if ( *(_QWORD *)v13 )
              {
                EventPointVsResultAction__SetState((EventPointVsResultAction_o *)isTouchPush, 0, v20);
                return;
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_1C93D2C(isTouchPush, v6);
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
    sub_1C93D2C(this, method);
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
  EventPointVsResultAction___c__DisplayClass19_0_o *v2; // x19
  struct EventPointVsResultAction_o *_4__this; // x8
  struct System_Int32_array *bgs; // x9
  int v5; // w10
  ExUITexture_o *mBg; // x20
  Il2CppObject *v7; // x0
  System_Action_o *_9__1; // x22
  EventPointVsResultAction___c__DisplayClass19_0_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x2
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4D2D346 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__);
    this = (EventPointVsResultAction___c__DisplayClass19_0_o *)sub_1C93AD4(&StringLiteral_3046/*"Back/back{0}"*/);
    byte_4D2D346 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  bgs = _4__this->fields.bgs;
  if ( !bgs )
    goto LABEL_13;
  v5 = v2->fields.resultNo - 1;
  if ( (unsigned int)v5 >= LODWORD(bgs->max_length) )
    sub_1C93D34(this);
  mBg = _4__this->fields.mBg;
  v17 = bgs->m_Items[v5];
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)System_String__Format(
                                                               (System_String_o *)StringLiteral_3046/*"Back/back{0}"*/,
                                                               v7,
                                                               0);
  _9__1 = v2->fields.__9__1;
  v9 = this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v10, v11, v12, v13, v14, v15);
  }
  if ( !mBg )
    goto LABEL_13;
  if ( ExUITexture__SetAssetImage(mBg, (System_String_o *)v9, _9__1, 0) )
    return;
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_13:
    sub_1C93D2C(this, method);
  EventPointVsResultAction__setupLocal((EventPointVsResultAction_o *)this, v2->fields.callBack, v16);
}


void EventPointVsResultAction___c__DisplayClass19_0___Setup_b__1(
        EventPointVsResultAction___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C93D2C(this, method);
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
    sub_1C93D2C(0, method);
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