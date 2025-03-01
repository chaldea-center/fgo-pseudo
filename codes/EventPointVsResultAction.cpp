void __fastcall EventPointVsResultAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4BFA348 & 1) == 0 )
  {
    sub_1C2E12C(&EventPointVsResultAction_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_17623/*"bit_vs_result_"*/, v8);
    byte_4BFA348 = 1;
  }
  EventPointVsResultAction_TypeInfo->static_fields->ANIMATION_NAME = (struct System_String_o *)StringLiteral_17623/*"bit_vs_result_"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)EventPointVsResultAction_TypeInfo->static_fields,
    StringLiteral_17623/*"bit_vs_result_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventPointVsResultAction___ctor(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPointVsResultAction__Awake(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct CStateManager_EventPointVsResultAction__o **p_mFSM; // x20
  CStateManager_T__o *v12; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v20; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v22; // x1
  CStateManager_T__o *v23; // x21
  Il2CppObject *v24; // x22
  CStateManager_T__o *v25; // x20
  Il2CppObject *v26; // x21
  const MethodInfo *v27; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v30; // x21
  Il2CppObject *v31; // x21
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4BFA340 & 1) == 0 )
  {
    sub_1C2E12C(&Method_CStateManager_EventPointVsResultAction___ctor__, method);
    sub_1C2E12C(&Method_CStateManager_EventPointVsResultAction__add__, v3);
    sub_1C2E12C(&CStateManager_EventPointVsResultAction__TypeInfo, v4);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v5);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&EventPointVsResultAction_StateNone_TypeInfo, v8);
    sub_1C2E12C(&EventPointVsResultAction_StatePlay_TypeInfo, v9);
    sub_1C2E12C(&EventPointVsResultAction_StateTouchWait_TypeInfo, v10);
    byte_4BFA340 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v12 = (CStateManager_T__o *)sub_1C2E378(CStateManager_EventPointVsResultAction__TypeInfo);
    CStateManager_object____ctor(
      v12,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_32064C0 *)Method_CStateManager_EventPointVsResultAction___ctor__);
    this->fields.mFSM = (struct CStateManager_EventPointVsResultAction__o *)v12;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v12, v13, v14, v15, v16, v17, v18);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v20 = (Il2CppObject *)sub_1C2E378(EventPointVsResultAction_StateNone_TypeInfo);
    System_Object___ctor(v20, 0LL);
    if ( !mFSM )
      goto LABEL_23;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v20,
      (const MethodInfo_3206568 *)Method_CStateManager_EventPointVsResultAction__add__);
    v23 = (CStateManager_T__o *)*p_mFSM;
    v24 = (Il2CppObject *)sub_1C2E378(EventPointVsResultAction_StatePlay_TypeInfo);
    System_Object___ctor(v24, 0LL);
    if ( !v23 )
      goto LABEL_23;
    CStateManager_object___add(
      v23,
      1,
      (IState_T__o *)v24,
      (const MethodInfo_3206568 *)Method_CStateManager_EventPointVsResultAction__add__);
    v25 = (CStateManager_T__o *)*p_mFSM;
    v26 = (Il2CppObject *)sub_1C2E378(EventPointVsResultAction_StateTouchWait_TypeInfo);
    System_Object___ctor(v26, 0LL);
    if ( !v25 )
      goto LABEL_23;
    CStateManager_object___add(
      v25,
      2,
      (IState_T__o *)v26,
      (const MethodInfo_3206568 *)Method_CStateManager_EventPointVsResultAction__add__);
    EventPointVsResultAction__SetState(this, 0, v27);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(particleObj, 0LL, 0LL) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0LL, 0LL) )
    {
      v30 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v31 = UnityEngine_Object__Instantiate_object_(
              v30,
              (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v31, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v31, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4BF7D91 )
        {
          sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v32);
          byte_4BF7D91 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v31,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v31 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v31,
                                         (const MethodInfo_3022D70 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v31;
            sub_1C2E0D0(
              (PartyOrganizationUtility_o *)&this->fields.particleObj,
              (int64_t)v31,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
            return;
          }
        }
LABEL_23:
        sub_1C2E388(ComponentInChildren_object, v22);
      }
    }
  }
}


System_String_o *__fastcall EventPointVsResultAction__GetAnimName(
        EventPointVsResultAction_o *this,
        const MethodInfo *method)
{
  return this->fields.animationName;
}


int32_t __fastcall EventPointVsResultAction__GetState(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  EventPointVsResultAction_o *v2; // x19
  struct CStateManager_EventPointVsResultAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4BFA346 & 1) == 0 )
  {
    this = (EventPointVsResultAction_o *)sub_1C2E12C(&Method_CStateManager_EventPointVsResultAction__getState__, method);
    byte_4BFA346 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C2E388(this, method);
  return mFSM->fields.m_state;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointVsResultAction__LoadSvts(
        EventPointVsResultAction_o *this,
        int32_t cnt,
        System_Int32_array *servants,
        Face_Type_array *faces,
        int32_t winType,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  int32_t v11; // w28
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x19
  __int64 v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Int32_array **v23; // x28
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  Face_Type_array **v30; // x29
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Action_o **v37; // x24
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x8
  __int64 v45; // x9
  struct UIStandFigureR_array *SvtComponents; // x10
  Face_Type_array *v47; // x9
  char *v48; // x11
  int32_t v49; // w21
  UIStandFigureR_o *v50; // x22
  int v51; // w23
  System_Action_o *v52; // x20

  v11 = cnt;
  while ( 1 )
  {
    if ( (byte_4BFA345 & 1) == 0 )
    {
      sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&cnt);
      sub_1C2E12C(&Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__, v13);
      sub_1C2E12C(&EventPointVsResultAction___c__DisplayClass23_0_TypeInfo, v14);
      byte_4BFA345 = 1;
    }
    v15 = sub_1C2E378(EventPointVsResultAction___c__DisplayClass23_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0LL);
    if ( !v15 )
      goto LABEL_19;
    *(_QWORD *)(v15 + 16) = this;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
    *(_DWORD *)(v15 + 24) = v11;
    *(_QWORD *)(v15 + 32) = servants;
    v23 = (System_Int32_array **)(v15 + 32);
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)servants, v24, v25, v26, v27, v28, v29);
    *(_QWORD *)(v15 + 40) = faces;
    v30 = (Face_Type_array **)(v15 + 40);
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v15 + 40), (int64_t)faces, v31, v32, v33, v34, v35, v36);
    *(_QWORD *)(v15 + 56) = callBack;
    v37 = (System_Action_o **)(v15 + 56);
    *(_DWORD *)(v15 + 48) = winType;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v15 + 56), (int64_t)callBack, v38, v39, v40, v41, v42, v43);
    v44 = *(int *)(v15 + 24);
    if ( (int)v44 > 2 )
      goto LABEL_11;
    servants = *v23;
    if ( !*v23 )
      goto LABEL_19;
    v45 = *(_QWORD *)&servants->max_length;
    if ( (int)v44 >= (int)v45 )
    {
LABEL_11:
      ActionExtensions__Call(*v37, 0LL);
      return;
    }
    winType = *(_DWORD *)(v15 + 48);
    if ( winType == 3 )
      break;
    v11 = v44 + 1;
    if ( (_DWORD)v44 + 1 == winType )
      break;
    faces = *v30;
    callBack = *v37;
  }
  SvtComponents = this->fields.SvtComponents;
  if ( !SvtComponents )
    goto LABEL_19;
  if ( (unsigned int)v44 >= SvtComponents->max_length || (unsigned int)v44 >= (unsigned int)v45 )
    goto LABEL_20;
  v47 = *v30;
  if ( !*v30 )
    goto LABEL_19;
  if ( (unsigned int)v44 >= v47->max_length )
LABEL_20:
    sub_1C2E390(v16, *(_QWORD *)&cnt);
  v48 = (char *)servants + 4 * v44;
  v49 = v47->m_Items[v44 + 1];
  v50 = SvtComponents->m_Items[v44];
  v51 = *((_DWORD *)v48 + 8);
  v52 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v15,
    Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__,
    0LL);
  if ( !v50 )
LABEL_19:
    sub_1C2E388(v16, *(_QWORD *)&cnt);
  UIStandFigureR__SetCharacter_42407720(v50, v51 / 10, v51 % 10, 0, v49, v52, 0LL);
}


void __fastcall EventPointVsResultAction__Play(
        EventPointVsResultAction_o *this,
        System_Action_o *end_act,
        MaskFade_o *maskFade,
        float fade_in_time,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v26; // x21
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v29; // x21
  __int64 v30; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v32; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v34; // x21
  System_String_o *v35; // x0
  AvalonSceneManager_c *v36; // x0
  System_Action_o *v37; // x21

  if ( (byte_4BFA344 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, end_act);
    sub_1C2E12C(&AvalonSceneManager_TypeInfo, v13);
    sub_1C2E12C(&Method_EventPointVsResultAction__Play_b__22_0__, v14);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v15);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v16);
    byte_4BFA344 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.mEndAct,
    (int64_t)end_act,
    (int64_t)maskFade,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.localMask = maskFade;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.localMask, (int64_t)maskFade, v17, v18, v19, v20, v21, v22);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v26 = this->fields.mSimpleAnimation;
    if ( !v26 )
      goto LABEL_30;
    gameObject = (UnityEngine_GameObject_o *)v26[1].monitor;
    if ( !gameObject )
      goto LABEL_30;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v26, name, 0LL);
    if ( !gameObject )
      goto LABEL_30;
    klass = gameObject->klass;
    v29 = gameObject;
    v30 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v30;
        p_offset += 2;
        if ( !v30 )
          goto LABEL_14;
      }
      v32 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v32 = sub_1C8010C(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v32)(v29, *(_QWORD *)(v32 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v34 = this->fields.mAnimation;
      if ( !v34 )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      v35 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v34, v35, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  if ( fade_in_time <= 0.0 )
  {
    v36 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v36 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v36->static_fields->DEFAULT_FADE_TIME;
  }
  v37 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_EventPointVsResultAction__Play_b__22_0__, 0LL);
  if ( !maskFade )
LABEL_30:
    sub_1C2E388(gameObject, v24);
  MaskFade__Fadein(maskFade, fade_in_time, v37, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointVsResultAction__SetState(
        EventPointVsResultAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BFA347 & 1) == 0 )
  {
    sub_1C2E12C(&Method_CStateManager_EventPointVsResultAction__setState__, *(_QWORD *)&state);
    byte_4BFA347 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C2E388(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_32065F4 *)Method_CStateManager_EventPointVsResultAction__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointVsResultAction__Setup(
        EventPointVsResultAction_o *this,
        int32_t winType,
        int32_t resultNo,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct EventPointVsResultAction_servants_array *resultSvts; // x8
  int v27; // w9
  EventPointVsResultAction_servants_o *v28; // x8
  System_Int32_array *servIds; // x22
  Face_Type_array *FaceIds; // x23
  System_Action_o *v31; // x24
  const MethodInfo *v32; // x6

  if ( (byte_4BFA342 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&winType);
    sub_1C2E12C(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__, v9);
    sub_1C2E12C(&EventPointVsResultAction___c__DisplayClass19_0_TypeInfo, v10);
    byte_4BFA342 = 1;
  }
  v11 = sub_1C2E378(EventPointVsResultAction___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 32) = callBack;
  *(_DWORD *)(v11 + 24) = resultNo;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)callBack, v20, v21, v22, v23, v24, v25);
  resultSvts = this->fields.resultSvts;
  this->fields.winType = winType;
  if ( !resultSvts )
    goto LABEL_8;
  v27 = *(_DWORD *)(v11 + 24) - 1;
  if ( v27 >= resultSvts->max_length )
    sub_1C2E390(v12, v13);
  v28 = resultSvts->m_Items[v27];
  if ( !v28 )
LABEL_8:
    sub_1C2E388(v12, v13);
  servIds = v28->fields.servIds;
  FaceIds = v28->fields.FaceIds;
  v31 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v11,
    Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__,
    0LL);
  EventPointVsResultAction__LoadSvts(this, 0, servIds, FaceIds, winType, v31, v32);
}


void __fastcall EventPointVsResultAction__Update(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BFA341 & 1) == 0 )
  {
    sub_1C2E12C(&Method_CStateManager_EventPointVsResultAction__update__, method);
    byte_4BFA341 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_32065D0 *)Method_CStateManager_EventPointVsResultAction__update__);
}


void __fastcall EventPointVsResultAction___Play_b__22_0(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventPointVsResultAction__SetState(this, 1, v2);
}


void __fastcall EventPointVsResultAction__setupLocal(
        EventPointVsResultAction_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Component_o *transform; // x0
  __int64 v12; // x1
  Il2CppObject *ComponentInChildren_object__50103608; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_Object_o *mScreenTouchInfo; // x22
  Il2CppObject *Instance; // x22
  Il2CppObject *Component_object; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  EventPointVsResultAction_c *v36; // x0
  System_String_o *ANIMATION_NAME; // x21
  System_String_o *v38; // x0
  struct System_String_o *v39; // x0
  struct System_String_o **p_animationName; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int32_t winType; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BFA343 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, callBack);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v5);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v6);
    sub_1C2E12C(&EventPointVsResultAction_TypeInfo, v7);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v8);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v9);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4BFA343 = 1;
  }
  winType = 0;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  ComponentInChildren_object__50103608 = UnityEngine_Component__GetComponentInChildren_object__50103608(
                                           transform,
                                           (const MethodInfo_2FC8538 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__50103608;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.mSimpleAnimation,
    (int64_t)ComponentInChildren_object__50103608,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  v20 = UnityEngine_Component__GetComponentInChildren_object__50103608(
          transform,
          (const MethodInfo_2FC8538 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)v20;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.mAnimation, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__50103608(
                                           transform,
                                           (const MethodInfo_2FC8538 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_19;
  BYTE5(transform[4].monitor) = 1;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_19;
    transform = (UnityEngine_Component_o *)CommonUI__CreateScreeenTouchInfo(
                                             (CommonUI_o *)Instance,
                                             (UnityEngine_Transform_o *)transform,
                                             0,
                                             0LL);
    if ( !transform )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    this->fields.mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.mScreenTouchInfo,
      (int64_t)Component_object,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = EventPointVsResultAction_TypeInfo;
  if ( !EventPointVsResultAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointVsResultAction_TypeInfo);
    v36 = EventPointVsResultAction_TypeInfo;
  }
  ANIMATION_NAME = v36->static_fields->ANIMATION_NAME;
  winType = this->fields.winType;
  v38 = System_Int32__ToString((int32_t)&winType, 0LL);
  v39 = System_String__Concat_63235584(ANIMATION_NAME, v38, 0LL);
  this->fields.animationName = v39;
  p_animationName = &this->fields.animationName;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_animationName, (int64_t)v39, v41, v42, v43, v44, v45, v46);
  transform = (UnityEngine_Component_o *)*(p_animationName - 3);
  if ( !transform
    || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL)) == 0LL )
  {
LABEL_19:
    sub_1C2E388(transform, v12);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  ActionExtensions__Call(callBack, 0LL);
}


void __fastcall EventPointVsResultAction_StateNone___ctor(
        EventPointVsResultAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventPointVsResultAction_StateNone__begin(
        EventPointVsResultAction_StateNone_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventPointVsResultAction_StateNone__end(
        EventPointVsResultAction_StateNone_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventPointVsResultAction_StateNone__update(
        EventPointVsResultAction_StateNone_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventPointVsResultAction_StatePlay___ctor(
        EventPointVsResultAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventPointVsResultAction_StatePlay__begin(
        EventPointVsResultAction_StatePlay_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  EventPointVsResultAction_StatePlay_o *v4; // x19
  __int64 v5; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  SimpleAnimation_State_o *v7; // x0
  PartyOrganizationUtility_o *p_fields; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  PartyOrganizationUtility_c *klass; // x21
  _QWORD *image; // x8
  SimpleAnimation_o *v17; // x20
  __int64 v18; // x9
  SimpleAnimation_State_c **v19; // x10
  __int64 v20; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_AnimationState_o *Item; // x0
  PartyOrganizationUtility_o *p_mAnimState; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_Animation_o *v30; // x20
  PartyOrganizationUtility_c *v31; // x20
  _QWORD *v32; // x8
  __int64 v33; // x9
  SimpleAnimation_State_c **v34; // x10
  __int64 v35; // x0
  PartyOrganizationUtility_c *v36; // x19
  _QWORD *v37; // x8
  __int64 v38; // x9
  SimpleAnimation_State_c **v39; // x10
  __int64 v40; // x0

  v4 = this;
  if ( (byte_4BFA349 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, that);
    this = (EventPointVsResultAction_StatePlay_o *)sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v5);
    byte_4BFA349 = 1;
  }
  if ( !that )
    goto LABEL_43;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
      return;
    this = (EventPointVsResultAction_StatePlay_o *)that->fields.mAnimation;
    if ( this )
    {
      UnityEngine_Animation__Play_70734128((UnityEngine_Animation_o *)this, that->fields.animationName, 0LL);
      this = (EventPointVsResultAction_StatePlay_o *)that->fields.mAnimation;
      if ( this )
      {
        Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)this, that->fields.animationName, 0LL);
        v4->fields.mAnimState = Item;
        p_mAnimState = (PartyOrganizationUtility_o *)&v4->fields.mAnimState;
        sub_1C2E0D0(p_mAnimState, (int64_t)Item, v24, v25, v26, v27, v28, v29);
        this = (EventPointVsResultAction_StatePlay_o *)p_mAnimState->klass;
        if ( p_mAnimState->klass )
        {
          v30 = that->fields.mAnimation;
          this = (EventPointVsResultAction_StatePlay_o *)UnityEngine_AnimationState__get_clip(
                                                           (UnityEngine_AnimationState_o *)this,
                                                           0LL);
          if ( v30 )
          {
            UnityEngine_Animation__set_clip(v30, (UnityEngine_AnimationClip_o *)this, 0LL);
            this = (EventPointVsResultAction_StatePlay_o *)p_mAnimState->klass;
            if ( p_mAnimState->klass )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              this = (EventPointVsResultAction_StatePlay_o *)p_mAnimState->klass;
              if ( p_mAnimState->klass )
              {
                UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_43:
    sub_1C2E388(this, that);
  }
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_43;
  SimpleAnimation__Play_65373960((SimpleAnimation_o *)this, that->fields.animationName, 0LL);
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_43;
  v7 = SimpleAnimation__get_Item((SimpleAnimation_o *)this, that->fields.animationName, 0LL);
  v4->fields.mSimpleAnimState = v7;
  p_fields = (PartyOrganizationUtility_o *)&v4->fields;
  sub_1C2E0D0(p_fields, (int64_t)v7, v9, v10, v11, v12, v13, v14);
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
    v20 = sub_1C8010C(p_fields->klass, SimpleAnimation_State_TypeInfo, 14LL);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(PartyOrganizationUtility_c *, _QWORD))v20)(
                                                   klass,
                                                   *(_QWORD *)(v20 + 8));
  if ( !v17 )
    goto LABEL_43;
  SimpleAnimation__set_clip(v17, (UnityEngine_AnimationClip_o *)this, 0LL);
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
    v35 = sub_1C8010C(p_fields->klass, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(PartyOrganizationUtility_c *, _QWORD, float))v35)(
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
    v40 = sub_1C8010C(v36, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(PartyOrganizationUtility_c *, _QWORD, float))v40)(v36, *(_QWORD *)(v40 + 8), 1.0);
}


void __fastcall EventPointVsResultAction_StatePlay__end(
        EventPointVsResultAction_StatePlay_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventPointVsResultAction_StatePlay__update(
        EventPointVsResultAction_StatePlay_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  struct SimpleAnimation_State_o *mSimpleAnimState; // x21
  SimpleAnimation_State_c *klass; // x8
  __int64 v7; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
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

  if ( (byte_4BFA34A & 1) == 0 )
  {
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, that);
    byte_4BFA34A = 1;
  }
  mSimpleAnimState = this->fields.mSimpleAnimState;
  if ( mSimpleAnimState )
  {
    klass = mSimpleAnimState->klass;
    v7 = *(unsigned __int16 *)(&mSimpleAnimState->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&mSimpleAnimState->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v7;
        p_offset += 2;
        if ( !v7 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1C8010C(this->fields.mSimpleAnimState, SimpleAnimation_State_TypeInfo, 3LL);
    }
    mAnimState = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(
                                                   mSimpleAnimState,
                                                   *(_QWORD *)(p_method + 8));
    v15 = this->fields.mSimpleAnimState;
    if ( !v15 )
      goto LABEL_29;
    v16 = v15->klass;
    v13 = v14;
    v17 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
    {
      v18 = (SimpleAnimation_State_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v17;
        v18 += 2;
        if ( !v17 )
          goto LABEL_20;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 14].method;
    }
    else
    {
LABEL_20:
      v19 = sub_1C8010C(v15, SimpleAnimation_State_TypeInfo, 14LL);
    }
    mAnimState = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v19)(
                                                   v15,
                                                   *(_QWORD *)(v19 + 8));
    if ( !mAnimState )
      goto LABEL_29;
  }
  else
  {
    if ( !UnityEngine_TrackedReference__op_Inequality(
            (UnityEngine_TrackedReference_o *)this->fields.mAnimState,
            0LL,
            0LL) )
      return;
    mAnimState = this->fields.mAnimState;
    if ( !mAnimState )
      goto LABEL_29;
    time = UnityEngine_AnimationState__get_time(mAnimState, 0LL);
    mAnimState = this->fields.mAnimState;
    if ( !mAnimState )
      goto LABEL_29;
    v13 = time;
    mAnimState = (UnityEngine_AnimationState_o *)UnityEngine_AnimationState__get_clip(mAnimState, 0LL);
    if ( !mAnimState )
      goto LABEL_29;
  }
  if ( v13 < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)mAnimState, 0LL) )
    return;
  if ( !that || (localMask = that->fields.localMask) == 0LL )
LABEL_29:
    sub_1C2E388(mAnimState, v10);
  if ( !localMask->fields.isExecuteMask )
    EventPointVsResultAction__SetState(that, 2, v20);
}


void __fastcall EventPointVsResultAction_StateTouchWait___ctor(
        EventPointVsResultAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventPointVsResultAction_StateTouchWait__begin(
        EventPointVsResultAction_StateTouchWait_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (EventPointVsResultAction_StateTouchWait_o *)that->fields.mScreenTouchInfo) == 0LL
    || (this = (EventPointVsResultAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL)) == 0LL )
  {
    sub_1C2E388(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall EventPointVsResultAction_StateTouchWait__end(
        EventPointVsResultAction_StateTouchWait_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventPointVsResultAction_StateTouchWait__update(
        EventPointVsResultAction_StateTouchWait_o *this,
        EventPointVsResultAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x19
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  MaskFade_o *v21; // x21
  AvalonSceneManager_c *v22; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x2

  if ( (byte_4BFA34B & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, that);
    sub_1C2E12C(&AvalonSceneManager_TypeInfo, v4);
    sub_1C2E12C(&CTouch_TypeInfo, v5);
    sub_1C2E12C(&Method_EventPointVsResultAction_StateTouchWait_update__, v6);
    sub_1C2E12C(&Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v7);
    sub_1C2E12C(&EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v8);
    byte_4BFA34B = 1;
  }
  v9 = sub_1C2E378(EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_19;
  *(_QWORD *)(v9 + 16) = that;
  v18 = v9 + 16;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)that, v12, v13, v14, v15, v16, v17);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v18 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v18 + 104LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v19 = Method_EventPointVsResultAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventPointVsResultAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v19 = (_QWORD *)sub_1C2E144(Method_EventPointVsResultAction_StateTouchWait_update__);
          v20 = (System_Reflection_MethodBase_o *)sub_1C2E110(v19, v19[4]);
          OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0, 0LL);
          if ( *(_QWORD *)v18 )
          {
            v21 = *(MaskFade_o **)(*(_QWORD *)v18 + 120LL);
            v22 = AvalonSceneManager_TypeInfo;
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v22 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
            v24 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
            System_Action___ctor(
              v24,
              (Il2CppObject *)v9,
              Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0LL);
            if ( v21 )
            {
              MaskFade__Fadeout(v21, 1, DEFAULT_FADE_TIME, v24, 0LL);
              isTouchPush = *(UnityEngine_GameObject_o **)v18;
              if ( *(_QWORD *)v18 )
              {
                EventPointVsResultAction__SetState((EventPointVsResultAction_o *)isTouchPush, 0, v25);
                return;
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_1C2E388(isTouchPush, v11);
  }
}


void __fastcall EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0___ctor(
        EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct EventPointVsResultAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C2E388(this, method);
  ActionExtensions__Call(that->fields.mEndAct, 0LL);
}


void __fastcall EventPointVsResultAction___c__DisplayClass19_0___ctor(
        EventPointVsResultAction___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventPointVsResultAction___c__DisplayClass19_0___Setup_b__0(
        EventPointVsResultAction___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  EventPointVsResultAction___c__DisplayClass19_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct EventPointVsResultAction_o *_4__this; // x8
  struct System_Int32_array *bgs; // x9
  int v11; // w10
  ExUITexture_o *mBg; // x20
  Il2CppObject *v13; // x0
  System_Action_o *_9__1; // x22
  EventPointVsResultAction___c__DisplayClass19_0_o *v15; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x2
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  v5 = this;
  if ( (byte_4BFA34C & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&int_TypeInfo, v6);
    sub_1C2E12C(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__, v7);
    this = (EventPointVsResultAction___c__DisplayClass19_0_o *)sub_1C2E12C(&StringLiteral_3166/*"Back/back{0}"*/, v8);
    byte_4BFA34C = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  bgs = _4__this->fields.bgs;
  if ( !bgs )
    goto LABEL_13;
  v11 = v5->fields.resultNo - 1;
  if ( v11 >= bgs->max_length )
    sub_1C2E390(this, method);
  mBg = _4__this->fields.mBg;
  v23 = bgs->m_Items[v11 + 1];
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v2, v3, v4);
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)System_String__Format(
                                                               (System_String_o *)StringLiteral_3166/*"Back/back{0}"*/,
                                                               v13,
                                                               0LL);
  _9__1 = v5->fields.__9__1;
  v15 = this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v5->fields.__9__1, (int64_t)_9__1, v16, v17, v18, v19, v20, v21);
  }
  if ( !mBg )
    goto LABEL_13;
  if ( ExUITexture__SetAssetImage(mBg, (System_String_o *)v15, _9__1, 0LL) )
    return;
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)v5->fields.__4__this;
  if ( !this )
LABEL_13:
    sub_1C2E388(this, method);
  EventPointVsResultAction__setupLocal((EventPointVsResultAction_o *)this, v5->fields.callBack, v22);
}


void __fastcall EventPointVsResultAction___c__DisplayClass19_0___Setup_b__1(
        EventPointVsResultAction___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C2E388(this, method);
  EventPointVsResultAction__setupLocal(this->fields.__4__this, this->fields.callBack, v2);
}


void __fastcall EventPointVsResultAction___c__DisplayClass23_0___ctor(
        EventPointVsResultAction___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventPointVsResultAction___c__DisplayClass23_0___LoadSvts_b__0(
        EventPointVsResultAction___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  EventPointVsResultAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2E388(0LL, method);
  EventPointVsResultAction__LoadSvts(
    _4__this,
    this->fields.cnt + 1,
    this->fields.servants,
    this->fields.faces,
    this->fields.winType,
    this->fields.callBack,
    v2);
}


void __fastcall EventPointVsResultAction_servants___ctor(
        EventPointVsResultAction_servants_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}