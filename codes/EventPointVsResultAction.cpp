void EventPointVsResultAction___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596D003 & 1) == 0 )
  {
    sub_2213A60(&EventPointVsResultAction_TypeInfo);
    sub_2213A60(&StringLiteral_18030/*"bit_vs_result_"*/);
    byte_596D003 = 1;
  }
  v7 = StringLiteral_18030/*"bit_vs_result_"*/;
  EventPointVsResultAction_TypeInfo->static_fields->ANIMATION_NAME = (struct System_String_o *)StringLiteral_18030/*"bit_vs_result_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventPointVsResultAction_TypeInfo->static_fields,
    v7,
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
  __int64 v2; // x2
  struct CStateManager_EventPointVsResultAction__o **p_mFSM; // x20
  CStateManager_T__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v15; // x1
  CStateManager_T__o *v16; // x21
  Il2CppObject *v17; // x22
  CStateManager_T__o *v18; // x20
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x2
  MissionNaviTransitionBoardItem_o *p_particleObj; // x20
  UnityEngine_Object_o *particleObj; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *particlePrefab; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x21
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( (byte_596CFFB & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_EventPointVsResultAction___ctor__);
    sub_2213A60(&Method_CStateManager_EventPointVsResultAction__add__);
    sub_2213A60(&CStateManager_EventPointVsResultAction__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&EventPointVsResultAction_StateNone_TypeInfo);
    sub_2213A60(&EventPointVsResultAction_StatePlay_TypeInfo);
    sub_2213A60(&EventPointVsResultAction_StateTouchWait_TypeInfo);
    byte_596CFFB = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v5 = (CStateManager_T__o *)sub_2213CCC(CStateManager_EventPointVsResultAction__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_3E83D54 *)Method_CStateManager_EventPointVsResultAction___ctor__);
    this->fields.mFSM = (struct CStateManager_EventPointVsResultAction__o *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v13 = (Il2CppObject *)sub_2213CCC(EventPointVsResultAction_StateNone_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !mFSM )
      goto LABEL_23;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_3E83E04 *)Method_CStateManager_EventPointVsResultAction__add__);
    v16 = (CStateManager_T__o *)*p_mFSM;
    v17 = (Il2CppObject *)sub_2213CCC(EventPointVsResultAction_StatePlay_TypeInfo);
    System_Object___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_23;
    CStateManager_object___add(
      v16,
      1,
      (IState_T__o *)v17,
      (const MethodInfo_3E83E04 *)Method_CStateManager_EventPointVsResultAction__add__);
    v18 = (CStateManager_T__o *)*p_mFSM;
    v19 = (Il2CppObject *)sub_2213CCC(EventPointVsResultAction_StateTouchWait_TypeInfo);
    System_Object___ctor(v19, 0);
    if ( !v18 )
      goto LABEL_23;
    CStateManager_object___add(
      v18,
      2,
      (IState_T__o *)v19,
      (const MethodInfo_3E83E04 *)Method_CStateManager_EventPointVsResultAction__add__);
    EventPointVsResultAction__SetState(this, 0, v20);
  }
  p_particleObj = (MissionNaviTransitionBoardItem_o *)&this->fields.particleObj;
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(particleObj, 0, 0) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0, 0) )
    {
      v28 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
      v29 = UnityEngine_Object__Instantiate_object_(
              v28,
              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0, 0) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v29, (UnityEngine_Component_o *)this, v30);
        if ( !byte_5969AE0 )
        {
          sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v29,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          v31);
        if ( v29 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v29,
                                         (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0);
            p_particleObj->klass = (MissionNaviTransitionBoardItem_c *)v29;
            sub_2213A04(p_particleObj, (int32_t)v29, v32, v33, v34, v35, v36, v37);
            return;
          }
        }
LABEL_23:
        sub_2213CDC(ComponentInChildren_object, v15);
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
  if ( (byte_596D001 & 1) == 0 )
  {
    this = (EventPointVsResultAction_o *)sub_2213A60(&Method_CStateManager_EventPointVsResultAction__getState__);
    byte_596D001 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(this, method);
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Int32_array **v22; // x28
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  Face_Type_array **v29; // x29
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Action_o **v36; // x24
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x8
  int max_length; // w9
  struct UIStandFigureR_array *SvtComponents; // x10
  Face_Type_array *v46; // x9
  char *v47; // x11
  int32_t v48; // w21
  UIStandFigureR_o *v49; // x22
  int v50; // w23
  System_Action_o *v51; // x20

  while ( 1 )
  {
    if ( (byte_596D000 & 1) == 0 )
    {
      sub_2213A60(&System_Action_TypeInfo);
      sub_2213A60(&Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__);
      sub_2213A60(&EventPointVsResultAction___c__DisplayClass23_0_TypeInfo);
      byte_596D000 = 1;
    }
    v13 = sub_2213CCC(EventPointVsResultAction___c__DisplayClass23_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    if ( !v13 )
      goto LABEL_18;
    *(_QWORD *)(v13 + 16) = this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
    *(_DWORD *)(v13 + 24) = cnt;
    *(_QWORD *)(v13 + 32) = servants;
    v22 = (System_Int32_array **)(v13 + 32);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)servants, v23, v24, v25, v26, v27, v28);
    *(_QWORD *)(v13 + 40) = faces;
    v29 = (Face_Type_array **)(v13 + 40);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 40), (int32_t)faces, v30, v31, v32, v33, v34, v35);
    *(_QWORD *)(v13 + 56) = callBack;
    v36 = (System_Action_o **)(v13 + 56);
    *(_DWORD *)(v13 + 48) = winType;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 56), (int32_t)callBack, v37, v38, v39, v40, v41, v42);
    v43 = *(int *)(v13 + 24);
    if ( (int)v43 > 2 )
      goto LABEL_10;
    servants = *v22;
    if ( !*v22 )
      goto LABEL_18;
    max_length = servants->max_length;
    if ( (int)v43 >= max_length )
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
  if ( (unsigned int)v43 >= LODWORD(SvtComponents->max_length) || (unsigned int)v43 >= max_length )
    goto LABEL_19;
  v46 = *v29;
  if ( !*v29 )
    goto LABEL_18;
  if ( (unsigned int)v43 >= LODWORD(v46->max_length) )
LABEL_19:
    sub_2213CE4(v14);
  v47 = (char *)servants + 4 * v43;
  v48 = v46->m_Items[v43];
  v49 = SvtComponents->m_Items[v43];
  v50 = *((_DWORD *)v47 + 8);
  v51 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v13,
    Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__,
    0);
  if ( !v49 )
LABEL_18:
    sub_2213CDC(v14, v15);
  UIStandFigureR__SetCharacter_51068084(v49, v50 / 10, v50 % 10, 0, v48, v51, 0);
}


void EventPointVsResultAction__Play(
        EventPointVsResultAction_o *this,
        System_Action_o *end_act,
        MaskFade_o *maskFade,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *mSimpleAnimation; // x21
  __int64 v24; // x2
  struct SimpleAnimation_o *v25; // x21
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v28; // x21
  __int64 v29; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v31; // x0
  UnityEngine_Object_o *mAnimation; // x21
  __int64 v33; // x2
  UnityEngine_Animation_o *v34; // x21
  System_String_o *v35; // x0
  AvalonSceneManager_c *v36; // x0
  System_Action_o *v37; // x21

  if ( (byte_596CFFF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_EventPointVsResultAction__Play_b__22_0__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596CFFF = 1;
  }
  this->fields.mEndAct = end_act;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mEndAct,
    (int32_t)end_act,
    (System_String_o *)maskFade,
    (System_String_o *)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.localMask = maskFade;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.localMask,
    (int32_t)maskFade,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v25 = this->fields.mSimpleAnimation;
    if ( !v25 )
      goto LABEL_30;
    gameObject = (UnityEngine_GameObject_o *)v25->fields.m_Clip;
    if ( !gameObject )
      goto LABEL_30;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v25, name, 0);
    if ( !gameObject )
      goto LABEL_30;
    klass = gameObject->klass;
    v28 = gameObject;
    v29 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
    if ( *(_WORD *)&gameObject->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v29;
        p_offset += 2;
        if ( !v29 )
          goto LABEL_14;
      }
      v31 = (__int64)(&klass[1]._1.element_class + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v31 = sub_224BC3C(gameObject, SimpleAnimation_State_TypeInfo, 8);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, double))v31)(v28, *(_QWORD *)(v31 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v24);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v34 = this->fields.mAnimation;
      if ( !v34 )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0);
      if ( !gameObject )
        goto LABEL_30;
      v35 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v34, v35, 0);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0);
    }
  }
  if ( fade_in_time <= 0.0 )
  {
    v36 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v20, v33);
      v36 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v36->static_fields->DEFAULT_FADE_TIME;
  }
  v37 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_EventPointVsResultAction__Play_b__22_0__, 0);
  if ( !maskFade )
LABEL_30:
    sub_2213CDC(gameObject, v20);
  MaskFade__Fadein(maskFade, fade_in_time, v37, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventPointVsResultAction__SetState(EventPointVsResultAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_596D002 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_EventPointVsResultAction__setState__);
    byte_596D002 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3E83E8C *)Method_CStateManager_EventPointVsResultAction__setState__);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct EventPointVsResultAction_servants_array *resultSvts; // x8
  int v25; // w9
  EventPointVsResultAction_servants_o *v26; // x8
  System_Int32_array *servIds; // x22
  Face_Type_array *FaceIds; // x23
  System_Action_o *v29; // x24
  const MethodInfo *v30; // x6

  if ( (byte_596CFFD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__);
    sub_2213A60(&EventPointVsResultAction___c__DisplayClass19_0_TypeInfo);
    byte_596CFFD = 1;
  }
  v9 = sub_2213CCC(EventPointVsResultAction___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = callBack;
  *(_DWORD *)(v9 + 24) = resultNo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)callBack, v18, v19, v20, v21, v22, v23);
  resultSvts = this->fields.resultSvts;
  this->fields.winType = winType;
  if ( !resultSvts )
    goto LABEL_8;
  v25 = *(_DWORD *)(v9 + 24) - 1;
  if ( (unsigned int)v25 >= LODWORD(resultSvts->max_length) )
    sub_2213CE4(v10);
  v26 = resultSvts->m_Items[v25];
  if ( !v26 )
LABEL_8:
    sub_2213CDC(v10, v11);
  servIds = v26->fields.servIds;
  FaceIds = v26->fields.FaceIds;
  v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)v9, Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__, 0);
  EventPointVsResultAction__LoadSvts(this, 0, servIds, FaceIds, winType, v29, v30);
}


void EventPointVsResultAction__Update(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_596CFFC & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_EventPointVsResultAction__update__);
    byte_596CFFC = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3E83E6C *)Method_CStateManager_EventPointVsResultAction__update__);
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
  Il2CppObject *ComponentInChildren_object__58855044; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  Il2CppObject *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *mScreenTouchInfo; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *Instance; // x22
  Il2CppObject *Component_object; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  EventPointVsResultAction_c *v34; // x0
  System_String_o *ANIMATION_NAME; // x21
  System_String_o *v36; // x0
  struct System_String_o *v37; // x0
  struct System_String_o **p_animationName; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t winType; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596CFFE & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_2213A60(&EventPointVsResultAction_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596CFFE = 1;
  }
  winType = 0;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_19;
  ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                           transform,
                                           (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__58855044;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mSimpleAnimation,
    (int32_t)ComponentInChildren_object__58855044,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_19;
  v14 = UnityEngine_Component__GetComponentInChildren_object__58855044(
          transform,
          (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mAnimation, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__58855044(
                                           transform,
                                           (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_19;
  BYTE5(transform[4].monitor) = 1;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    this->fields.mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mScreenTouchInfo,
      (int32_t)Component_object,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = EventPointVsResultAction_TypeInfo;
  if ( !*(&EventPointVsResultAction_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventPointVsResultAction_TypeInfo, v24, v25);
    v34 = EventPointVsResultAction_TypeInfo;
  }
  ANIMATION_NAME = v34->static_fields->ANIMATION_NAME;
  winType = this->fields.winType;
  v36 = System_Int32__ToString((int32_t)&winType, 0);
  v37 = System_String__Concat_75651716(ANIMATION_NAME, v36, 0);
  this->fields.animationName = v37;
  p_animationName = &this->fields.animationName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_animationName, (int32_t)v37, v39, v40, v41, v42, v43, v44);
  transform = (UnityEngine_Component_o *)*(p_animationName - 3);
  if ( !transform || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0)) == 0 )
LABEL_19:
    sub_2213CDC(transform, v6);
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
  __int64 v6; // x2
  SimpleAnimation_State_o *v7; // x0
  MissionNaviTransitionBoardItem_o *p_fields; // x19
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  MissionNaviTransitionBoardItem_c *klass; // x21
  _QWORD *image; // x8
  SimpleAnimation_o *v17; // x20
  __int64 v18; // x9
  SimpleAnimation_State_c **v19; // x10
  __int64 v20; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_AnimationState_o *Item; // x0
  MissionNaviTransitionBoardItem_o *p_mAnimState; // x19
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UnityEngine_Animation_o *v30; // x20
  MissionNaviTransitionBoardItem_c *v31; // x20
  _QWORD *v32; // x8
  __int64 v33; // x9
  SimpleAnimation_State_c **v34; // x10
  __int64 v35; // x0
  MissionNaviTransitionBoardItem_c *v36; // x19
  _QWORD *v37; // x8
  __int64 v38; // x9
  SimpleAnimation_State_c **v39; // x10
  __int64 v40; // x0

  v4 = this;
  if ( (byte_596D004 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (EventPointVsResultAction_StatePlay_o *)sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596D004 = 1;
  }
  if ( !that )
    goto LABEL_43;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
  if ( !UnityEngine_Object__op_Inequality(mSimpleAnimation, 0, 0) )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v6);
    if ( !UnityEngine_Object__op_Inequality(mAnimation, 0, 0) )
      return;
    this = (EventPointVsResultAction_StatePlay_o *)that->fields.mAnimation;
    if ( this )
    {
      UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)this, that->fields.animationName, 0);
      this = (EventPointVsResultAction_StatePlay_o *)that->fields.mAnimation;
      if ( this )
      {
        Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)this, that->fields.animationName, 0);
        v4->fields.mAnimState = Item;
        p_mAnimState = (MissionNaviTransitionBoardItem_o *)&v4->fields.mAnimState;
        sub_2213A04(p_mAnimState, (int32_t)Item, v24, v25, v26, v27, v28, v29);
        this = (EventPointVsResultAction_StatePlay_o *)p_mAnimState->klass;
        if ( p_mAnimState->klass )
        {
          v30 = that->fields.mAnimation;
          this = (EventPointVsResultAction_StatePlay_o *)UnityEngine_AnimationState__get_clip(
                                                           (UnityEngine_AnimationState_o *)this,
                                                           0);
          if ( v30 )
          {
            UnityEngine_Animation__set_clip(v30, (UnityEngine_AnimationClip_o *)this, 0);
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
    sub_2213CDC(this, that);
  }
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_43;
  SimpleAnimation__Play_78552168((SimpleAnimation_o *)this, that->fields.animationName, 0);
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_43;
  v7 = SimpleAnimation__get_Item((SimpleAnimation_o *)this, that->fields.animationName, 0);
  v4->fields.mSimpleAnimState = v7;
  p_fields = (MissionNaviTransitionBoardItem_o *)&v4->fields;
  sub_2213A04(p_fields, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  klass = p_fields->klass;
  if ( !p_fields->klass )
    goto LABEL_43;
  image = klass->_1.image;
  v17 = that->fields.mSimpleAnimation;
  v18 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v19 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v19 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_14;
    }
    v20 = (__int64)&image[2 * *(_DWORD *)v19 + 67];
  }
  else
  {
LABEL_14:
    v20 = sub_224BC3C(p_fields->klass, SimpleAnimation_State_TypeInfo, 14);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(MissionNaviTransitionBoardItem_c *, _QWORD))v20)(
                                                   klass,
                                                   *(_QWORD *)(v20 + 8));
  if ( !v17 )
    goto LABEL_43;
  SimpleAnimation__set_clip(v17, (UnityEngine_AnimationClip_o *)this, 0);
  v31 = p_fields->klass;
  if ( !p_fields->klass )
    goto LABEL_43;
  v32 = v31->_1.image;
  v33 = *((unsigned __int16 *)v31->_1.image + 151);
  if ( *((_WORD *)v31->_1.image + 151) )
  {
    v34 = (SimpleAnimation_State_c **)(v32[22] + 8LL);
    while ( *(v34 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v33;
      v34 += 2;
      if ( !v33 )
        goto LABEL_33;
    }
    v35 = (__int64)&v32[2 * *(_DWORD *)v34 + 51];
  }
  else
  {
LABEL_33:
    v35 = sub_224BC3C(p_fields->klass, SimpleAnimation_State_TypeInfo, 6);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(MissionNaviTransitionBoardItem_c *, _QWORD, double))v35)(
                                                   v31,
                                                   *(_QWORD *)(v35 + 8),
                                                   0.0);
  v36 = p_fields->klass;
  if ( !v36 )
    goto LABEL_43;
  v37 = v36->_1.image;
  v38 = *((unsigned __int16 *)v36->_1.image + 151);
  if ( *((_WORD *)v36->_1.image + 151) )
  {
    v39 = (SimpleAnimation_State_c **)(v37[22] + 8LL);
    while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v38;
      v39 += 2;
      if ( !v38 )
        goto LABEL_40;
    }
    v40 = (__int64)&v37[2 * *(_DWORD *)v39 + 55];
  }
  else
  {
LABEL_40:
    v40 = sub_224BC3C(v36, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(MissionNaviTransitionBoardItem_c *, _QWORD, float))v40)(v36, *(_QWORD *)(v40 + 8), 1.0);
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

  if ( (byte_596D005 & 1) == 0 )
  {
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596D005 = 1;
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
      v9 = sub_224BC3C(this->fields.mSimpleAnimState, SimpleAnimation_State_TypeInfo, 3);
    }
    mAnimState = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v9)(
                                                   mSimpleAnimState,
                                                   *(_QWORD *)(v9 + 8));
    v15 = this->fields.mSimpleAnimState;
    if ( !v15 )
      goto LABEL_29;
    v13 = v14;
    v16 = v15->klass;
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
      v19 = sub_224BC3C(v15, SimpleAnimation_State_TypeInfo, 14);
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
    sub_2213CDC(mAnimState, v10);
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
    sub_2213CDC(this, that);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x2
  MaskFade_o *v19; // x21
  AvalonSceneManager_c *v20; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x2

  if ( (byte_596D006 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&CTouch_TypeInfo);
    sub_2213A60(&Method_EventPointVsResultAction_StateTouchWait_update__);
    sub_2213A60(&Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_2213A60(&EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_596D006 = 1;
  }
  v4 = sub_2213CCC(EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_19;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v14, v15);
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
          v16 = Method_EventPointVsResultAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventPointVsResultAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v16 = (_QWORD *)sub_2213A78(Method_EventPointVsResultAction_StateTouchWait_update__);
          v17 = (System_Reflection_MethodBase_o *)sub_2213A44(v16, v16[4]);
          OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
          if ( *(_QWORD *)v13 )
          {
            v19 = *(MaskFade_o **)(*(_QWORD *)v13 + 120LL);
            v20 = AvalonSceneManager_TypeInfo;
            if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v6, v18);
              v20 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
            v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v22,
              (Il2CppObject *)v4,
              Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0);
            if ( v19 )
            {
              MaskFade__Fadeout(v19, 1, DEFAULT_FADE_TIME, v22, 0);
              isTouchPush = *(UnityEngine_GameObject_o **)v13;
              if ( *(_QWORD *)v13 )
              {
                EventPointVsResultAction__SetState((EventPointVsResultAction_o *)isTouchPush, 0, v23);
                return;
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_2213CDC(isTouchPush, v6);
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
    sub_2213CDC(this, method);
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
  EventPointVsResultAction___c__DisplayClass19_0_o *v8; // x21
  System_Action_o *_9__1; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x2
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_596D007 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__);
    this = (EventPointVsResultAction___c__DisplayClass19_0_o *)sub_2213A60(&StringLiteral_3154/*"Back/back{0}"*/);
    byte_596D007 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  bgs = _4__this->fields.bgs;
  if ( !bgs )
    goto LABEL_13;
  v5 = v2->fields.resultNo - 1;
  if ( (unsigned int)v5 >= LODWORD(bgs->max_length) )
    sub_2213CE4(this);
  mBg = _4__this->fields.mBg;
  v17 = bgs->m_Items[v5];
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v17);
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)System_String__Format(
                                                               (System_String_o *)StringLiteral_3154/*"Back/back{0}"*/,
                                                               v7,
                                                               0);
  v8 = this;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__,
      0);
    v2->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v10, v11, v12, v13, v14, v15);
  }
  if ( !mBg )
    goto LABEL_13;
  if ( ExUITexture__SetAssetImage(mBg, (System_String_o *)v8, _9__1, 0) )
    return;
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_13:
    sub_2213CDC(this, method);
  EventPointVsResultAction__setupLocal((EventPointVsResultAction_o *)this, v2->fields.callBack, v16);
}


void EventPointVsResultAction___c__DisplayClass19_0___Setup_b__1(
        EventPointVsResultAction___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
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
    sub_2213CDC(0, method);
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