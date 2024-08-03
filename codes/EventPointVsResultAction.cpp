void __fastcall EventPointVsResultAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49F91A0 & 1) == 0 )
  {
    sub_1B640C8(&EventPointVsResultAction_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_17253/*"bit_vs_result_"*/, v4);
    byte_49F91A0 = 1;
  }
  EventPointVsResultAction_TypeInfo->static_fields->ANIMATION_NAME = (struct System_String_o *)StringLiteral_17253/*"bit_vs_result_"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventPointVsResultAction_TypeInfo->static_fields,
    StringLiteral_17253/*"bit_vs_result_"*/,
    v2,
    v3);
}


void __fastcall EventPointVsResultAction___ctor(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPointVsResultAction__Awake(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct CStateManager_EventPointVsResultAction__o **p_mFSM; // x20
  CStateManager_T__o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  CStateManager_T__o *mFSM; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *v19; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  CStateManager_T__o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *v24; // x22
  CStateManager_T__o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *v28; // x21
  const MethodInfo *v29; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v32; // x21
  Il2CppObject *v33; // x21
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3

  if ( (byte_49F9198 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_EventPointVsResultAction___ctor__, method);
    sub_1B640C8(&Method_CStateManager_EventPointVsResultAction__add__, v4);
    sub_1B640C8(&CStateManager_EventPointVsResultAction__TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v6);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&EventPointVsResultAction_StateNone_TypeInfo, v9);
    sub_1B640C8(&EventPointVsResultAction_StatePlay_TypeInfo, v10);
    sub_1B640C8(&EventPointVsResultAction_StateTouchWait_TypeInfo, v11);
    byte_49F9198 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v13 = (CStateManager_T__o *)sub_1B64314(CStateManager_EventPointVsResultAction__TypeInfo, method, v2);
    CStateManager_object____ctor(
      v13,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_30612BC *)Method_CStateManager_EventPointVsResultAction___ctor__);
    this->fields.mFSM = (struct CStateManager_EventPointVsResultAction__o *)v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v13, v14, v15);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v19 = (Il2CppObject *)sub_1B64314(EventPointVsResultAction_StateNone_TypeInfo, v17, v18);
    System_Object___ctor(v19, 0LL);
    if ( !mFSM )
      goto LABEL_23;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v19,
      (const MethodInfo_3061364 *)Method_CStateManager_EventPointVsResultAction__add__);
    v21 = (CStateManager_T__o *)*p_mFSM;
    v24 = (Il2CppObject *)sub_1B64314(EventPointVsResultAction_StatePlay_TypeInfo, v22, v23);
    System_Object___ctor(v24, 0LL);
    if ( !v21 )
      goto LABEL_23;
    CStateManager_object___add(
      v21,
      1,
      (IState_T__o *)v24,
      (const MethodInfo_3061364 *)Method_CStateManager_EventPointVsResultAction__add__);
    v25 = (CStateManager_T__o *)*p_mFSM;
    v28 = (Il2CppObject *)sub_1B64314(EventPointVsResultAction_StateTouchWait_TypeInfo, v26, v27);
    System_Object___ctor(v28, 0LL);
    if ( !v25 )
      goto LABEL_23;
    CStateManager_object___add(
      v25,
      2,
      (IState_T__o *)v28,
      (const MethodInfo_3061364 *)Method_CStateManager_EventPointVsResultAction__add__);
    EventPointVsResultAction__SetState(this, 0, v29);
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
      v32 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v33 = UnityEngine_Object__Instantiate_object_(
              v32,
              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v33, (UnityEngine_Component_o *)this, v34);
        if ( !byte_49F7111 )
        {
          sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v35);
          byte_49F7111 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v33,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          v35);
        if ( v33 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v33,
                                         (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v33;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.particleObj, (int32_t)v33, v36, v37);
            return;
          }
        }
LABEL_23:
        sub_1B64324(ComponentInChildren_object);
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
  if ( (byte_49F919E & 1) == 0 )
  {
    this = (EventPointVsResultAction_o *)sub_1B640C8(&Method_CStateManager_EventPointVsResultAction__getState__, method);
    byte_49F919E = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(this);
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
  System_Int32_array *v10; // x21
  int32_t v11; // w28
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x19
  __int64 v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Int32_array **v19; // x28
  int32_t v20; // w2
  int32_t v21; // w3
  Face_Type_array **v22; // x29
  int32_t v23; // w2
  int32_t v24; // w3
  System_Action_o **v25; // x24
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x8
  __int64 v29; // x9
  struct UIStandFigureR_array *SvtComponents; // x10
  Face_Type_array *v31; // x9
  char *v32; // x11
  int32_t v33; // w21
  UIStandFigureR_o *v34; // x22
  int v35; // w23
  System_Action_o *v36; // x20

  v10 = servants;
  v11 = cnt;
  while ( 1 )
  {
    if ( (byte_49F919D & 1) == 0 )
    {
      sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&cnt);
      sub_1B640C8(&Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__, v13);
      sub_1B640C8(&EventPointVsResultAction___c__DisplayClass23_0_TypeInfo, v14);
      byte_49F919D = 1;
    }
    v15 = sub_1B64314(EventPointVsResultAction___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&cnt, servants);
    System_Object___ctor((Il2CppObject *)v15, 0LL);
    if ( !v15 )
      goto LABEL_19;
    *(_QWORD *)(v15 + 16) = this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)this, v17, v18);
    *(_DWORD *)(v15 + 24) = v11;
    *(_QWORD *)(v15 + 32) = v10;
    v19 = (System_Int32_array **)(v15 + 32);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v10, v20, v21);
    *(_QWORD *)(v15 + 40) = faces;
    v22 = (Face_Type_array **)(v15 + 40);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 40), (int32_t)faces, v23, v24);
    *(_QWORD *)(v15 + 56) = callBack;
    v25 = (System_Action_o **)(v15 + 56);
    *(_DWORD *)(v15 + 48) = winType;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 56), (int32_t)callBack, v26, v27);
    v28 = *(int *)(v15 + 24);
    if ( (int)v28 > 2 )
      goto LABEL_11;
    v10 = *v19;
    if ( !*v19 )
      goto LABEL_19;
    v29 = *(_QWORD *)&v10->max_length;
    if ( (int)v28 >= (int)v29 )
    {
LABEL_11:
      ActionExtensions__Call(*v25, 0LL);
      return;
    }
    winType = *(_DWORD *)(v15 + 48);
    if ( winType == 3 )
      break;
    v11 = v28 + 1;
    if ( (_DWORD)v28 + 1 == winType )
      break;
    faces = *v22;
    callBack = *v25;
  }
  SvtComponents = this->fields.SvtComponents;
  if ( !SvtComponents )
    goto LABEL_19;
  if ( (unsigned int)v28 >= SvtComponents->max_length || (unsigned int)v28 >= (unsigned int)v29 )
    goto LABEL_20;
  v31 = *v22;
  if ( !*v22 )
    goto LABEL_19;
  if ( (unsigned int)v28 >= v31->max_length )
LABEL_20:
    sub_1B6432C(v16, *(_QWORD *)&cnt);
  v32 = (char *)v10 + 4 * v28;
  v33 = v31->m_Items[v28 + 1];
  v34 = SvtComponents->m_Items[v28];
  v35 = *((_DWORD *)v32 + 8);
  v36 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, *(_QWORD *)&cnt, servants);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v15,
    Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__,
    0LL);
  if ( !v34 )
LABEL_19:
    sub_1B64324(v16);
  UIStandFigureR__SetCharacter_40641336(v34, v35 / 10, v35 % 10, 0, v33, v36, 0LL);
}


void __fastcall EventPointVsResultAction__Play(
        EventPointVsResultAction_o *this,
        System_Action_o *end_act,
        MaskFade_o *maskFade,
        float fade_in_time,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v17; // x21
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v20; // x21
  __int64 v21; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v23; // x0
  UnityEngine_Object_o *mAnimation; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Animation_o *v27; // x21
  System_String_o *v28; // x0
  AvalonSceneManager_c *v29; // x0
  System_Action_o *v30; // x21

  if ( (byte_49F919C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, end_act);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v9);
    sub_1B640C8(&Method_EventPointVsResultAction__Play_b__22_0__, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v12);
    byte_49F919C = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.mEndAct,
    (int32_t)end_act,
    (int32_t)maskFade,
    (int32_t)method);
  this->fields.localMask = maskFade;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.localMask, (int32_t)maskFade, v13, v14);
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
    v17 = this->fields.mSimpleAnimation;
    if ( !v17 )
      goto LABEL_30;
    gameObject = (UnityEngine_GameObject_o *)v17[1].monitor;
    if ( !gameObject )
      goto LABEL_30;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v17, name, 0LL);
    if ( !gameObject )
      goto LABEL_30;
    klass = gameObject->klass;
    v20 = gameObject;
    v21 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v21;
        p_offset += 2;
        if ( !v21 )
          goto LABEL_14;
      }
      v23 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v23 = sub_1BB60A8(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v23)(v20, *(_QWORD *)(v23 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v27 = this->fields.mAnimation;
      if ( !v27 )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v27, v28, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  if ( fade_in_time <= 0.0 )
  {
    v29 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v29 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v29->static_fields->DEFAULT_FADE_TIME;
  }
  v30 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_EventPointVsResultAction__Play_b__22_0__, 0LL);
  if ( !maskFade )
LABEL_30:
    sub_1B64324(gameObject);
  MaskFade__Fadein(maskFade, fade_in_time, v30, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointVsResultAction__SetState(
        EventPointVsResultAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49F919F & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_EventPointVsResultAction__setState__, *(_QWORD *)&state);
    byte_49F919F = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(0LL);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_30613F0 *)Method_CStateManager_EventPointVsResultAction__setState__);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  struct EventPointVsResultAction_servants_array *resultSvts; // x8
  int v20; // w9
  EventPointVsResultAction_servants_o *v21; // x8
  System_Int32_array *servIds; // x22
  Face_Type_array *FaceIds; // x23
  System_Action_o *v24; // x24
  const MethodInfo *v25; // x6

  if ( (byte_49F919A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&winType);
    sub_1B640C8(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__, v9);
    sub_1B640C8(&EventPointVsResultAction___c__DisplayClass19_0_TypeInfo, v10);
    byte_49F919A = 1;
  }
  v11 = sub_1B64314(EventPointVsResultAction___c__DisplayClass19_0_TypeInfo, *(_QWORD *)&winType, *(_QWORD *)&resultNo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 32) = callBack;
  *(_DWORD *)(v11 + 24) = resultNo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)callBack, v15, v16);
  resultSvts = this->fields.resultSvts;
  this->fields.winType = winType;
  if ( !resultSvts )
    goto LABEL_8;
  v20 = *(_DWORD *)(v11 + 24) - 1;
  if ( v20 >= resultSvts->max_length )
    sub_1B6432C(v12, v17);
  v21 = resultSvts->m_Items[v20];
  if ( !v21 )
LABEL_8:
    sub_1B64324(v12);
  servIds = v21->fields.servIds;
  FaceIds = v21->fields.FaceIds;
  v24 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v17, v18);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v11,
    Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__,
    0LL);
  EventPointVsResultAction__LoadSvts(this, 0, servIds, FaceIds, winType, v24, v25);
}


void __fastcall EventPointVsResultAction__Update(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49F9199 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_EventPointVsResultAction__update__, method);
    byte_49F9199 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_30613CC *)Method_CStateManager_EventPointVsResultAction__update__);
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
  Il2CppObject *ComponentInChildren_object__48431348; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Object_o *mScreenTouchInfo; // x22
  Il2CppObject *Instance; // x22
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  EventPointVsResultAction_c *v23; // x0
  System_String_o *ANIMATION_NAME; // x21
  System_String_o *v25; // x0
  struct System_String_o *v26; // x0
  struct System_String_o **p_animationName; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t winType; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F919B & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, callBack);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v5);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v6);
    sub_1B640C8(&EventPointVsResultAction_TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_49F919B = 1;
  }
  winType = 0;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  ComponentInChildren_object__48431348 = UnityEngine_Component__GetComponentInChildren_object__48431348(
                                           transform,
                                           (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__48431348;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.mSimpleAnimation,
    (int32_t)ComponentInChildren_object__48431348,
    v13,
    v14);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  v15 = UnityEngine_Component__GetComponentInChildren_object__48431348(
          transform,
          (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mAnimation, (int32_t)v15, v16, v17);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__48431348(
                                           transform,
                                           (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    this->fields.mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.mScreenTouchInfo,
      (int32_t)Component_object,
      v21,
      v22);
  }
  v23 = EventPointVsResultAction_TypeInfo;
  if ( !EventPointVsResultAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointVsResultAction_TypeInfo);
    v23 = EventPointVsResultAction_TypeInfo;
  }
  ANIMATION_NAME = v23->static_fields->ANIMATION_NAME;
  winType = this->fields.winType;
  v25 = System_Int32__ToString((int32_t)&winType, 0LL);
  v26 = System_String__Concat_61375396(ANIMATION_NAME, v25, 0LL);
  this->fields.animationName = v26;
  p_animationName = &this->fields.animationName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_animationName, (int32_t)v26, v28, v29);
  transform = (UnityEngine_Component_o *)*(p_animationName - 3);
  if ( !transform
    || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL)) == 0LL )
  {
LABEL_19:
    sub_1B64324(transform);
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
  ServantStatusBattleListViewItem_o *p_fields; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  ServantStatusBattleListViewItem_c *klass; // x21
  _QWORD *image; // x8
  SimpleAnimation_o *v13; // x20
  __int64 v14; // x9
  SimpleAnimation_State_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_AnimationState_o *Item; // x0
  ServantStatusBattleListViewItem_o *p_mAnimState; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Animation_o *v22; // x20
  ServantStatusBattleListViewItem_c *v23; // x20
  _QWORD *v24; // x8
  __int64 v25; // x9
  SimpleAnimation_State_c **v26; // x10
  __int64 v27; // x0
  ServantStatusBattleListViewItem_c *v28; // x19
  _QWORD *v29; // x8
  __int64 v30; // x9
  SimpleAnimation_State_c **v31; // x10
  __int64 v32; // x0

  v4 = this;
  if ( (byte_49F91A1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, that);
    this = (EventPointVsResultAction_StatePlay_o *)sub_1B640C8(&SimpleAnimation_State_TypeInfo, v5);
    byte_49F91A1 = 1;
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
      UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)this, that->fields.animationName, 0LL);
      this = (EventPointVsResultAction_StatePlay_o *)that->fields.mAnimation;
      if ( this )
      {
        Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)this, that->fields.animationName, 0LL);
        v4->fields.mAnimState = Item;
        p_mAnimState = (ServantStatusBattleListViewItem_o *)&v4->fields.mAnimState;
        sub_1B6406C(p_mAnimState, (int32_t)Item, v20, v21);
        this = (EventPointVsResultAction_StatePlay_o *)p_mAnimState->klass;
        if ( p_mAnimState->klass )
        {
          v22 = that->fields.mAnimation;
          this = (EventPointVsResultAction_StatePlay_o *)UnityEngine_AnimationState__get_clip(
                                                           (UnityEngine_AnimationState_o *)this,
                                                           0LL);
          if ( v22 )
          {
            UnityEngine_Animation__set_clip(v22, (UnityEngine_AnimationClip_o *)this, 0LL);
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
    sub_1B64324(this);
  }
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_43;
  SimpleAnimation__Play_63513060((SimpleAnimation_o *)this, that->fields.animationName, 0LL);
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_43;
  v7 = SimpleAnimation__get_Item((SimpleAnimation_o *)this, that->fields.animationName, 0LL);
  v4->fields.mSimpleAnimState = v7;
  p_fields = (ServantStatusBattleListViewItem_o *)&v4->fields;
  sub_1B6406C(p_fields, (int32_t)v7, v9, v10);
  klass = p_fields->klass;
  if ( !p_fields->klass )
    goto LABEL_43;
  image = klass->_1.image;
  v13 = that->fields.mSimpleAnimation;
  v14 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v15 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v15 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v14;
      v15 += 2;
      if ( !v14 )
        goto LABEL_14;
    }
    v16 = (__int64)&image[2 * *(_DWORD *)v15 + 67];
  }
  else
  {
LABEL_14:
    v16 = sub_1BB60A8(p_fields->klass, SimpleAnimation_State_TypeInfo, 14LL);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(ServantStatusBattleListViewItem_c *, _QWORD))v16)(
                                                   klass,
                                                   *(_QWORD *)(v16 + 8));
  if ( !v13 )
    goto LABEL_43;
  SimpleAnimation__set_clip(v13, (UnityEngine_AnimationClip_o *)this, 0LL);
  v23 = p_fields->klass;
  if ( !p_fields->klass )
    goto LABEL_43;
  v24 = v23->_1.image;
  v25 = *((unsigned __int16 *)v23->_1.image + 151);
  if ( *((_WORD *)v23->_1.image + 151) )
  {
    v26 = (SimpleAnimation_State_c **)(v24[22] + 8LL);
    while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v25;
      v26 += 2;
      if ( !v25 )
        goto LABEL_33;
    }
    v27 = (__int64)&v24[2 * *(_DWORD *)v26 + 51];
  }
  else
  {
LABEL_33:
    v27 = sub_1BB60A8(p_fields->klass, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(ServantStatusBattleListViewItem_c *, _QWORD, float))v27)(
                                                   v23,
                                                   *(_QWORD *)(v27 + 8),
                                                   0.0);
  v28 = p_fields->klass;
  if ( !v28 )
    goto LABEL_43;
  v29 = v28->_1.image;
  v30 = *((unsigned __int16 *)v28->_1.image + 151);
  if ( *((_WORD *)v28->_1.image + 151) )
  {
    v31 = (SimpleAnimation_State_c **)(v29[22] + 8LL);
    while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v30;
      v31 += 2;
      if ( !v30 )
        goto LABEL_40;
    }
    v32 = (__int64)&v29[2 * *(_DWORD *)v31 + 55];
  }
  else
  {
LABEL_40:
    v32 = sub_1BB60A8(v28, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(ServantStatusBattleListViewItem_c *, _QWORD, float))v32)(v28, *(_QWORD *)(v32 + 8), 1.0);
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

  if ( (byte_49F91A2 & 1) == 0 )
  {
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, that);
    byte_49F91A2 = 1;
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
      p_method = sub_1BB60A8(this->fields.mSimpleAnimState, SimpleAnimation_State_TypeInfo, 3LL);
    }
    mAnimState = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(
                                                   mSimpleAnimState,
                                                   *(_QWORD *)(p_method + 8));
    v14 = this->fields.mSimpleAnimState;
    if ( !v14 )
      goto LABEL_29;
    v15 = v14->klass;
    v12 = v13;
    v16 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
    {
      v17 = (SimpleAnimation_State_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v16;
        v17 += 2;
        if ( !v16 )
          goto LABEL_20;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 14].method;
    }
    else
    {
LABEL_20:
      v18 = sub_1BB60A8(v14, SimpleAnimation_State_TypeInfo, 14LL);
    }
    mAnimState = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v18)(
                                                   v14,
                                                   *(_QWORD *)(v18 + 8));
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
    v12 = time;
    mAnimState = (UnityEngine_AnimationState_o *)UnityEngine_AnimationState__get_clip(mAnimState, 0LL);
    if ( !mAnimState )
      goto LABEL_29;
  }
  if ( v12 < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)mAnimState, 0LL) )
    return;
  if ( !that || (localMask = that->fields.localMask) == 0LL )
LABEL_29:
    sub_1B64324(mAnimState);
  if ( !localMask->fields.isExecuteMask )
    EventPointVsResultAction__SetState(that, 2, v19);
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
    sub_1B64324(this);
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
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x19
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  MaskFade_o *v18; // x21
  AvalonSceneManager_c *v19; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x2

  if ( (byte_49F91A3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&CTouch_TypeInfo, v5);
    sub_1B640C8(&Method_EventPointVsResultAction_StateTouchWait_update__, v6);
    sub_1B640C8(&Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v7);
    sub_1B640C8(&EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v8);
    byte_49F91A3 = 1;
  }
  v9 = sub_1B64314(EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_19;
  *(_QWORD *)(v9 + 16) = that;
  v13 = v9 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)that, v11, v12);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v13 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v13 + 104LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v14 = Method_EventPointVsResultAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventPointVsResultAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v14 = (_QWORD *)sub_1B640E0(Method_EventPointVsResultAction_StateTouchWait_update__);
          v15 = (System_Reflection_MethodBase_o *)sub_1B640AC(v14, v14[4]);
          OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
          if ( *(_QWORD *)v13 )
          {
            v18 = *(MaskFade_o **)(*(_QWORD *)v13 + 120LL);
            v19 = AvalonSceneManager_TypeInfo;
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v19 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
            v21 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
            System_Action___ctor(
              v21,
              (Il2CppObject *)v9,
              Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0LL);
            if ( v18 )
            {
              MaskFade__Fadeout(v18, 1, DEFAULT_FADE_TIME, v21, 0LL);
              isTouchPush = *(UnityEngine_GameObject_o **)v13;
              if ( *(_QWORD *)v13 )
              {
                EventPointVsResultAction__SetState((EventPointVsResultAction_o *)isTouchPush, 0, v22);
                return;
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_1B64324(isTouchPush);
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
    sub_1B64324(this);
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
  EventPointVsResultAction___c__DisplayClass19_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct EventPointVsResultAction_o *_4__this; // x8
  struct System_Int32_array *bgs; // x9
  int v8; // w10
  ExUITexture_o *mBg; // x20
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *_9__1; // x22
  EventPointVsResultAction___c__DisplayClass19_0_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x2
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_49F91A4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&int_TypeInfo, v3);
    sub_1B640C8(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__, v4);
    this = (EventPointVsResultAction___c__DisplayClass19_0_o *)sub_1B640C8(&StringLiteral_3114/*"Back/back{0}"*/, v5);
    byte_49F91A4 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  bgs = _4__this->fields.bgs;
  if ( !bgs )
    goto LABEL_13;
  v8 = v2->fields.resultNo - 1;
  if ( v8 >= bgs->max_length )
    sub_1B6432C(this, method);
  mBg = _4__this->fields.mBg;
  v18 = bgs->m_Items[v8 + 1];
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)System_String__Format(
                                                               (System_String_o *)StringLiteral_3114/*"Back/back{0}"*/,
                                                               v10,
                                                               0LL);
  _9__1 = v2->fields.__9__1;
  v14 = this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v15, v16);
  }
  if ( !mBg )
    goto LABEL_13;
  if ( ExUITexture__SetAssetImage(mBg, (System_String_o *)v14, _9__1, 0LL) )
    return;
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_13:
    sub_1B64324(this);
  EventPointVsResultAction__setupLocal((EventPointVsResultAction_o *)this, v2->fields.callBack, v17);
}


void __fastcall EventPointVsResultAction___c__DisplayClass19_0___Setup_b__1(
        EventPointVsResultAction___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64324(this);
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
    sub_1B64324(0LL);
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