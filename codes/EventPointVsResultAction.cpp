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
  __int64 v9; // x2

  if ( (byte_4B12E8E & 1) == 0 )
  {
    sub_1BCA7E0(&EventPointVsResultAction_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17493/*"bit_vs_result_"*/, v8, v9);
    byte_4B12E8E = 1;
  }
  EventPointVsResultAction_TypeInfo->static_fields->ANIMATION_NAME = (struct System_String_o *)StringLiteral_17493/*"bit_vs_result_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventPointVsResultAction_TypeInfo->static_fields,
    StringLiteral_17493/*"bit_vs_result_"*/,
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  struct CStateManager_EventPointVsResultAction__o **p_mFSM; // x20
  CStateManager_T__o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  CStateManager_T__o *mFSM; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  Il2CppObject *v33; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v35; // x1
  CStateManager_T__o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  Il2CppObject *v40; // x22
  CStateManager_T__o *v41; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  Il2CppObject *v45; // x21
  const MethodInfo *v46; // x2
  UnityEngine_Object_o *particleObj; // x21
  __int64 v48; // x1
  UnityEngine_Object_o *particlePrefab; // x21
  __int64 v50; // x1
  Il2CppObject *v51; // x21
  Il2CppObject *v52; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7

  if ( (byte_4B12E86 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_EventPointVsResultAction___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_EventPointVsResultAction__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_EventPointVsResultAction__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&EventPointVsResultAction_StateNone_TypeInfo, v15, v16);
    sub_1BCA7E0(&EventPointVsResultAction_StatePlay_TypeInfo, v17, v18);
    sub_1BCA7E0(&EventPointVsResultAction_StateTouchWait_TypeInfo, v19, v20);
    byte_4B12E86 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v22 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_EventPointVsResultAction__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v22,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_313FBC4 *)Method_CStateManager_EventPointVsResultAction___ctor__);
    this->fields.mFSM = (struct CStateManager_EventPointVsResultAction__o *)v22;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v22, v23, v24, v25, v26, v27, v28);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v33 = (Il2CppObject *)sub_1BCAA2C(EventPointVsResultAction_StateNone_TypeInfo, v30, v31, v32);
    System_Object___ctor(v33, 0LL);
    if ( !mFSM )
      goto LABEL_23;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v33,
      (const MethodInfo_313FC6C *)Method_CStateManager_EventPointVsResultAction__add__);
    v36 = (CStateManager_T__o *)*p_mFSM;
    v40 = (Il2CppObject *)sub_1BCAA2C(EventPointVsResultAction_StatePlay_TypeInfo, v37, v38, v39);
    System_Object___ctor(v40, 0LL);
    if ( !v36 )
      goto LABEL_23;
    CStateManager_object___add(
      v36,
      1,
      (IState_T__o *)v40,
      (const MethodInfo_313FC6C *)Method_CStateManager_EventPointVsResultAction__add__);
    v41 = (CStateManager_T__o *)*p_mFSM;
    v45 = (Il2CppObject *)sub_1BCAA2C(EventPointVsResultAction_StateTouchWait_TypeInfo, v42, v43, v44);
    System_Object___ctor(v45, 0LL);
    if ( !v41 )
      goto LABEL_23;
    CStateManager_object___add(
      v41,
      2,
      (IState_T__o *)v45,
      (const MethodInfo_313FC6C *)Method_CStateManager_EventPointVsResultAction__add__);
    EventPointVsResultAction__SetState(this, 0, v46);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(particleObj, 0LL, 0LL) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0LL, 0LL) )
    {
      v51 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
      v52 = UnityEngine_Object__Instantiate_object_(
              v51,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v52, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v52, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4B109C1 )
        {
          sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v53, v54);
          byte_4B109C1 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v52,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v52 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v52,
                                         (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v52;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.particleObj,
              (int64_t)v52,
              v55,
              v56,
              v57,
              v58,
              v59,
              v60);
            return;
          }
        }
LABEL_23:
        sub_1BCAA3C(ComponentInChildren_object, v35);
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
  __int64 v2; // x2
  EventPointVsResultAction_o *v3; // x19
  struct CStateManager_EventPointVsResultAction__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B12E8C & 1) == 0 )
  {
    this = (EventPointVsResultAction_o *)sub_1BCA7E0(
                                           &Method_CStateManager_EventPointVsResultAction__getState__,
                                           method,
                                           v2);
    byte_4B12E8C = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
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
  Face_Type_array *v9; // x27
  System_Int32_array *v10; // x21
  int32_t v11; // w28
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x19
  __int64 v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Int32_array **v25; // x28
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Face_Type_array **v32; // x29
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Action_o **v39; // x24
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x8
  __int64 v47; // x9
  struct UIStandFigureR_array *SvtComponents; // x10
  Face_Type_array *v49; // x9
  char *v50; // x11
  int32_t v51; // w21
  UIStandFigureR_o *v52; // x22
  int v53; // w23
  System_Action_o *v54; // x20

  v9 = faces;
  v10 = servants;
  v11 = cnt;
  while ( 1 )
  {
    if ( (byte_4B12E8B & 1) == 0 )
    {
      sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&cnt, servants);
      sub_1BCA7E0(&Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__, v13, v14);
      sub_1BCA7E0(&EventPointVsResultAction___c__DisplayClass23_0_TypeInfo, v15, v16);
      byte_4B12E8B = 1;
    }
    v17 = sub_1BCAA2C(EventPointVsResultAction___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&cnt, servants, faces);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( !v17 )
      goto LABEL_19;
    *(_QWORD *)(v17 + 16) = this;
    sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
    *(_DWORD *)(v17 + 24) = v11;
    *(_QWORD *)(v17 + 32) = v10;
    v25 = (System_Int32_array **)(v17 + 32);
    sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)v10, v26, v27, v28, v29, v30, v31);
    *(_QWORD *)(v17 + 40) = v9;
    v32 = (Face_Type_array **)(v17 + 40);
    sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 40), (int64_t)v9, v33, v34, v35, v36, v37, v38);
    *(_QWORD *)(v17 + 56) = callBack;
    v39 = (System_Action_o **)(v17 + 56);
    *(_DWORD *)(v17 + 48) = winType;
    sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 56), (int64_t)callBack, v40, v41, v42, v43, v44, v45);
    v46 = *(int *)(v17 + 24);
    if ( (int)v46 > 2 )
      goto LABEL_11;
    v10 = *v25;
    if ( !*v25 )
      goto LABEL_19;
    v47 = *(_QWORD *)&v10->max_length;
    if ( (int)v46 >= (int)v47 )
    {
LABEL_11:
      ActionExtensions__Call(*v39, 0LL);
      return;
    }
    winType = *(_DWORD *)(v17 + 48);
    if ( winType == 3 )
      break;
    v11 = v46 + 1;
    if ( (_DWORD)v46 + 1 == winType )
      break;
    v9 = *v32;
    callBack = *v39;
  }
  SvtComponents = this->fields.SvtComponents;
  if ( !SvtComponents )
    goto LABEL_19;
  if ( (unsigned int)v46 >= SvtComponents->max_length || (unsigned int)v46 >= (unsigned int)v47 )
    goto LABEL_20;
  v49 = *v32;
  if ( !*v32 )
    goto LABEL_19;
  if ( (unsigned int)v46 >= v49->max_length )
LABEL_20:
    sub_1BCAA44(v18, *(_QWORD *)&cnt);
  v50 = (char *)v10 + 4 * v46;
  v51 = v49->m_Items[v46 + 1];
  v52 = SvtComponents->m_Items[v46];
  v53 = *((_DWORD *)v50 + 8);
  v54 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&cnt, servants, faces);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v17,
    Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__,
    0LL);
  if ( !v52 )
LABEL_19:
    sub_1BCAA3C(v18, *(_QWORD *)&cnt);
  UIStandFigureR__SetCharacter_41769076(v52, v53 / 10, v53 % 10, 0, v51, v54, 0LL);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  __int64 v29; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v31; // x21
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v34; // x21
  __int64 v35; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v37; // x0
  UnityEngine_Object_o *mAnimation; // x21
  __int64 v39; // x2
  __int64 v40; // x3
  UnityEngine_Animation_o *v41; // x21
  System_String_o *v42; // x0
  AvalonSceneManager_c *v43; // x0
  System_Action_o *v44; // x21

  if ( (byte_4B12E8A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, end_act, maskFade);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_EventPointVsResultAction__Play_b__22_0__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v19, v20);
    byte_4B12E8A = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mEndAct,
    (int64_t)end_act,
    (int64_t)maskFade,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.localMask = maskFade;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.localMask, (int64_t)maskFade, v21, v22, v23, v24, v25, v26);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v31 = this->fields.mSimpleAnimation;
    if ( !v31 )
      goto LABEL_30;
    gameObject = (UnityEngine_GameObject_o *)v31[1].monitor;
    if ( !gameObject )
      goto LABEL_30;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v31, name, 0LL);
    if ( !gameObject )
      goto LABEL_30;
    klass = gameObject->klass;
    v34 = gameObject;
    v35 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v35;
        p_offset += 2;
        if ( !v35 )
          goto LABEL_14;
      }
      v37 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v37 = sub_1C1C7C0(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v37)(v34, *(_QWORD *)(v37 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v41 = this->fields.mAnimation;
      if ( !v41 )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      v42 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v41, v42, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  if ( fade_in_time <= 0.0 )
  {
    v43 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v28);
      v43 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v43->static_fields->DEFAULT_FADE_TIME;
  }
  v44 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v39, v40);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_EventPointVsResultAction__Play_b__22_0__, 0LL);
  if ( !maskFade )
LABEL_30:
    sub_1BCAA3C(gameObject, v28);
  MaskFade__Fadein(maskFade, fade_in_time, v44, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointVsResultAction__SetState(
        EventPointVsResultAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B12E8D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_EventPointVsResultAction__setState__, *(_QWORD *)&state, method);
    byte_4B12E8D = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_EventPointVsResultAction__setState__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x2
  __int64 v29; // x3
  struct EventPointVsResultAction_servants_array *resultSvts; // x8
  int v31; // w9
  EventPointVsResultAction_servants_o *v32; // x8
  System_Int32_array *servIds; // x22
  Face_Type_array *FaceIds; // x23
  System_Action_o *v35; // x24
  const MethodInfo *v36; // x6

  if ( (byte_4B12E88 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&winType, *(_QWORD *)&resultNo);
    sub_1BCA7E0(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__, v9, v10);
    sub_1BCA7E0(&EventPointVsResultAction___c__DisplayClass19_0_TypeInfo, v11, v12);
    byte_4B12E88 = 1;
  }
  v13 = sub_1BCAA2C(
          EventPointVsResultAction___c__DisplayClass19_0_TypeInfo,
          *(_QWORD *)&winType,
          *(_QWORD *)&resultNo,
          callBack);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_8;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 32) = callBack;
  *(_DWORD *)(v13 + 24) = resultNo;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)callBack, v22, v23, v24, v25, v26, v27);
  resultSvts = this->fields.resultSvts;
  this->fields.winType = winType;
  if ( !resultSvts )
    goto LABEL_8;
  v31 = *(_DWORD *)(v13 + 24) - 1;
  if ( v31 >= resultSvts->max_length )
    sub_1BCAA44(v14, v15);
  v32 = resultSvts->m_Items[v31];
  if ( !v32 )
LABEL_8:
    sub_1BCAA3C(v14, v15);
  servIds = v32->fields.servIds;
  FaceIds = v32->fields.FaceIds;
  v35 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v28, v29);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v13,
    Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__,
    0LL);
  EventPointVsResultAction__LoadSvts(this, 0, servIds, FaceIds, winType, v35, v36);
}


void __fastcall EventPointVsResultAction__Update(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B12E87 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_EventPointVsResultAction__update__, method, v2);
    byte_4B12E87 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_313FCD4 *)Method_CStateManager_EventPointVsResultAction__update__);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Component_o *transform; // x0
  __int64 v18; // x1
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  UnityEngine_Object_o *mScreenTouchInfo; // x22
  __int64 v35; // x1
  Il2CppObject *Instance; // x22
  Il2CppObject *Component_object; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  EventPointVsResultAction_c *v44; // x0
  System_String_o *ANIMATION_NAME; // x21
  System_String_o *v46; // x0
  struct System_String_o *v47; // x0
  struct System_String_o **p_animationName; // x20
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int32_t winType; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B12E89 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, callBack, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v7, v8);
    sub_1BCA7E0(&EventPointVsResultAction_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    byte_4B12E89 = 1;
  }
  winType = 0;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           transform,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__49322392;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mSimpleAnimation,
    (int64_t)ComponentInChildren_object__49322392,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  v26 = UnityEngine_Component__GetComponentInChildren_object__49322392(
          transform,
          (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)v26;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mAnimation, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           transform,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_19;
  BYTE5(transform[4].monitor) = 1;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    this->fields.mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.mScreenTouchInfo,
      (int64_t)Component_object,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = EventPointVsResultAction_TypeInfo;
  if ( !EventPointVsResultAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointVsResultAction_TypeInfo, v35);
    v44 = EventPointVsResultAction_TypeInfo;
  }
  ANIMATION_NAME = v44->static_fields->ANIMATION_NAME;
  winType = this->fields.winType;
  v46 = System_Int32__ToString((int32_t)&winType, 0LL);
  v47 = System_String__Concat_62401220(ANIMATION_NAME, v46, 0LL);
  this->fields.animationName = v47;
  p_animationName = &this->fields.animationName;
  sub_1BCA784((PartyOrganizationUtility_o *)p_animationName, (int64_t)v47, v49, v50, v51, v52, v53, v54);
  transform = (UnityEngine_Component_o *)*(p_animationName - 3);
  if ( !transform
    || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL)) == 0LL )
  {
LABEL_19:
    sub_1BCAA3C(transform, v18);
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
  __int64 v6; // x2
  UnityEngine_Object_o *mSimpleAnimation; // x21
  SimpleAnimation_State_o *v8; // x0
  PartyOrganizationUtility_o *p_fields; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  PartyOrganizationUtility_c *klass; // x21
  _QWORD *image; // x8
  SimpleAnimation_o *v18; // x20
  __int64 v19; // x9
  SimpleAnimation_State_c **v20; // x10
  __int64 v21; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_AnimationState_o *Item; // x0
  PartyOrganizationUtility_o *p_mAnimState; // x19
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_Animation_o *v31; // x20
  PartyOrganizationUtility_c *v32; // x20
  _QWORD *v33; // x8
  __int64 v34; // x9
  SimpleAnimation_State_c **v35; // x10
  __int64 v36; // x0
  PartyOrganizationUtility_c *v37; // x19
  _QWORD *v38; // x8
  __int64 v39; // x9
  SimpleAnimation_State_c **v40; // x10
  __int64 v41; // x0

  v4 = this;
  if ( (byte_4B12E8F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    this = (EventPointVsResultAction_StatePlay_o *)sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v5, v6);
    byte_4B12E8F = 1;
  }
  if ( !that )
    goto LABEL_43;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  if ( !UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
    if ( !UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
      return;
    this = (EventPointVsResultAction_StatePlay_o *)that->fields.mAnimation;
    if ( this )
    {
      UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)this, that->fields.animationName, 0LL);
      this = (EventPointVsResultAction_StatePlay_o *)that->fields.mAnimation;
      if ( this )
      {
        Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)this, that->fields.animationName, 0LL);
        v4->fields.mAnimState = Item;
        p_mAnimState = (PartyOrganizationUtility_o *)&v4->fields.mAnimState;
        sub_1BCA784(p_mAnimState, (int64_t)Item, v25, v26, v27, v28, v29, v30);
        this = (EventPointVsResultAction_StatePlay_o *)p_mAnimState->klass;
        if ( p_mAnimState->klass )
        {
          v31 = that->fields.mAnimation;
          this = (EventPointVsResultAction_StatePlay_o *)UnityEngine_AnimationState__get_clip(
                                                           (UnityEngine_AnimationState_o *)this,
                                                           0LL);
          if ( v31 )
          {
            UnityEngine_Animation__set_clip(v31, (UnityEngine_AnimationClip_o *)this, 0LL);
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
    sub_1BCAA3C(this, that);
  }
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_43;
  SimpleAnimation__Play_64539336((SimpleAnimation_o *)this, that->fields.animationName, 0LL);
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_43;
  v8 = SimpleAnimation__get_Item((SimpleAnimation_o *)this, that->fields.animationName, 0LL);
  v4->fields.mSimpleAnimState = v8;
  p_fields = (PartyOrganizationUtility_o *)&v4->fields;
  sub_1BCA784(p_fields, (int64_t)v8, v10, v11, v12, v13, v14, v15);
  klass = p_fields->klass;
  if ( !p_fields->klass )
    goto LABEL_43;
  image = klass->_1.image;
  v18 = that->fields.mSimpleAnimation;
  v19 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v20 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v20 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v19;
      v20 += 2;
      if ( !v19 )
        goto LABEL_14;
    }
    v21 = (__int64)&image[2 * *(_DWORD *)v20 + 67];
  }
  else
  {
LABEL_14:
    v21 = sub_1C1C7C0(p_fields->klass, SimpleAnimation_State_TypeInfo, 14LL);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(PartyOrganizationUtility_c *, _QWORD))v21)(
                                                   klass,
                                                   *(_QWORD *)(v21 + 8));
  if ( !v18 )
    goto LABEL_43;
  SimpleAnimation__set_clip(v18, (UnityEngine_AnimationClip_o *)this, 0LL);
  v32 = p_fields->klass;
  if ( !p_fields->klass )
    goto LABEL_43;
  v33 = v32->_1.image;
  v34 = *((unsigned __int16 *)v32->_1.image + 151);
  if ( *((_WORD *)v32->_1.image + 151) )
  {
    v35 = (SimpleAnimation_State_c **)(v33[22] + 8LL);
    while ( *(v35 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v34;
      v35 += 2;
      if ( !v34 )
        goto LABEL_33;
    }
    v36 = (__int64)&v33[2 * *(_DWORD *)v35 + 51];
  }
  else
  {
LABEL_33:
    v36 = sub_1C1C7C0(p_fields->klass, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(PartyOrganizationUtility_c *, _QWORD, float))v36)(
                                                   v32,
                                                   *(_QWORD *)(v36 + 8),
                                                   0.0);
  v37 = p_fields->klass;
  if ( !v37 )
    goto LABEL_43;
  v38 = v37->_1.image;
  v39 = *((unsigned __int16 *)v37->_1.image + 151);
  if ( *((_WORD *)v37->_1.image + 151) )
  {
    v40 = (SimpleAnimation_State_c **)(v38[22] + 8LL);
    while ( *(v40 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v39;
      v40 += 2;
      if ( !v39 )
        goto LABEL_40;
    }
    v41 = (__int64)&v38[2 * *(_DWORD *)v40 + 55];
  }
  else
  {
LABEL_40:
    v41 = sub_1C1C7C0(v37, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(PartyOrganizationUtility_c *, _QWORD, float))v41)(v37, *(_QWORD *)(v41 + 8), 1.0);
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

  if ( (byte_4B12E90 & 1) == 0 )
  {
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, that, method);
    byte_4B12E90 = 1;
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
      p_method = sub_1C1C7C0(this->fields.mSimpleAnimState, SimpleAnimation_State_TypeInfo, 3LL);
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
      v19 = sub_1C1C7C0(v15, SimpleAnimation_State_TypeInfo, 14LL);
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
    sub_1BCAA3C(mAnimState, v10);
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
    sub_1BCAA3C(this, that);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x19
  __int64 v25; // x1
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  __int64 v28; // x2
  __int64 v29; // x3
  MaskFade_o *v30; // x21
  AvalonSceneManager_c *v31; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v33; // x22
  const MethodInfo *v34; // x2

  if ( (byte_4B12E91 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CTouch_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventPointVsResultAction_StateTouchWait_update__, v9, v10);
    sub_1BCA7E0(&Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v11, v12);
    sub_1BCA7E0(&EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v13, v14);
    byte_4B12E91 = 1;
  }
  v15 = sub_1BCAA2C(EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_19;
  *(_QWORD *)(v15 + 16) = that;
  v24 = v15 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)that, v18, v19, v20, v21, v22, v23);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v25);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v24 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v24 + 104LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v26 = Method_EventPointVsResultAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventPointVsResultAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v26 = (_QWORD *)sub_1BCA7F8(Method_EventPointVsResultAction_StateTouchWait_update__);
          v27 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v26, v26[4]);
          OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
          if ( *(_QWORD *)v24 )
          {
            v30 = *(MaskFade_o **)(*(_QWORD *)v24 + 120LL);
            v31 = AvalonSceneManager_TypeInfo;
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v17);
              v31 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v31->static_fields->DEFAULT_FADE_TIME;
            v33 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v28, v29);
            System_Action___ctor(
              v33,
              (Il2CppObject *)v15,
              Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0LL);
            if ( v30 )
            {
              MaskFade__Fadeout(v30, 1, DEFAULT_FADE_TIME, v33, 0LL);
              isTouchPush = *(UnityEngine_GameObject_o **)v24;
              if ( *(_QWORD *)v24 )
              {
                EventPointVsResultAction__SetState((EventPointVsResultAction_o *)isTouchPush, 0, v34);
                return;
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(isTouchPush, v17);
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
    sub_1BCAA3C(this, method);
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
  EventPointVsResultAction___c__DisplayClass19_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct EventPointVsResultAction_o *_4__this; // x8
  struct System_Int32_array *bgs; // x9
  int v12; // w10
  ExUITexture_o *mBg; // x20
  Il2CppObject *v14; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  System_Action_o *_9__1; // x22
  EventPointVsResultAction___c__DisplayClass19_0_o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x2
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_4B12E92 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__, v6, v7);
    this = (EventPointVsResultAction___c__DisplayClass19_0_o *)sub_1BCA7E0(&StringLiteral_3156/*"Back/back{0}"*/, v8, v9);
    byte_4B12E92 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  bgs = _4__this->fields.bgs;
  if ( !bgs )
    goto LABEL_13;
  v12 = v3->fields.resultNo - 1;
  if ( v12 >= bgs->max_length )
    sub_1BCAA44(this, method);
  mBg = _4__this->fields.mBg;
  v26 = bgs->m_Items[v12 + 1];
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)System_String__Format(
                                                               (System_String_o *)StringLiteral_3156/*"Back/back{0}"*/,
                                                               v14,
                                                               0LL);
  _9__1 = v3->fields.__9__1;
  v18 = this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v15, v16);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__1, (int64_t)_9__1, v19, v20, v21, v22, v23, v24);
  }
  if ( !mBg )
    goto LABEL_13;
  if ( ExUITexture__SetAssetImage(mBg, (System_String_o *)v18, _9__1, 0LL) )
    return;
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)v3->fields.__4__this;
  if ( !this )
LABEL_13:
    sub_1BCAA3C(this, method);
  EventPointVsResultAction__setupLocal((EventPointVsResultAction_o *)this, v3->fields.callBack, v25);
}


void __fastcall EventPointVsResultAction___c__DisplayClass19_0___Setup_b__1(
        EventPointVsResultAction___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(0LL, method);
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