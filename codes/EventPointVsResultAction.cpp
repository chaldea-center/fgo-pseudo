void __fastcall EventPointVsResultAction___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A57EDD & 1) == 0 )
  {
    sub_1B885B0(&EventPointVsResultAction_TypeInfo);
    sub_1B885B0(&StringLiteral_17322/*"bit_vs_result_"*/);
    byte_4A57EDD = 1;
  }
  EventPointVsResultAction_TypeInfo->static_fields->ANIMATION_NAME = (struct System_String_o *)StringLiteral_17322/*"bit_vs_result_"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventPointVsResultAction_TypeInfo->static_fields,
    StringLiteral_17322/*"bit_vs_result_"*/,
    v1,
    v2);
}


void __fastcall EventPointVsResultAction___ctor(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPointVsResultAction__Awake(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  struct CStateManager_EventPointVsResultAction__o **p_mFSM; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v8; // x22
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v10; // x1
  CStateManager_T__o *v11; // x21
  Il2CppObject *v12; // x22
  CStateManager_T__o *v13; // x20
  Il2CppObject *v14; // x21
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A57ED5 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_EventPointVsResultAction___ctor__);
    sub_1B885B0(&Method_CStateManager_EventPointVsResultAction__add__);
    sub_1B885B0(&CStateManager_EventPointVsResultAction__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&EventPointVsResultAction_StateNone_TypeInfo);
    sub_1B885B0(&EventPointVsResultAction_StatePlay_TypeInfo);
    sub_1B885B0(&EventPointVsResultAction_StateTouchWait_TypeInfo);
    byte_4A57ED5 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1B887FC(CStateManager_EventPointVsResultAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_30AAD34 *)Method_CStateManager_EventPointVsResultAction___ctor__);
    this->fields.mFSM = (struct CStateManager_EventPointVsResultAction__o *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1B887FC(EventPointVsResultAction_StateNone_TypeInfo);
    System_Object___ctor(v8, 0LL);
    if ( !mFSM )
      goto LABEL_23;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_30AADDC *)Method_CStateManager_EventPointVsResultAction__add__);
    v11 = (CStateManager_T__o *)*p_mFSM;
    v12 = (Il2CppObject *)sub_1B887FC(EventPointVsResultAction_StatePlay_TypeInfo);
    System_Object___ctor(v12, 0LL);
    if ( !v11 )
      goto LABEL_23;
    CStateManager_object___add(
      v11,
      1,
      (IState_T__o *)v12,
      (const MethodInfo_30AADDC *)Method_CStateManager_EventPointVsResultAction__add__);
    v13 = (CStateManager_T__o *)*p_mFSM;
    v14 = (Il2CppObject *)sub_1B887FC(EventPointVsResultAction_StateTouchWait_TypeInfo);
    System_Object___ctor(v14, 0LL);
    if ( !v13 )
      goto LABEL_23;
    CStateManager_object___add(
      v13,
      2,
      (IState_T__o *)v14,
      (const MethodInfo_30AADDC *)Method_CStateManager_EventPointVsResultAction__add__);
    EventPointVsResultAction__SetState(this, 0, v15);
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
      v18 = (Il2CppObject *)this->fields.particlePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v19 = UnityEngine_Object__Instantiate_object_(
              v18,
              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v19, (UnityEngine_Component_o *)this, 0LL);
        if ( !byte_4A55CE1 )
        {
          sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE1 = 1;
        }
        GameObjectExtensions__SetLocalPosition(
          (UnityEngine_GameObject_o *)v19,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        if ( v19 )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v19,
                                         (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_object )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, 0, 0LL);
            this->fields.particleObj = (struct UnityEngine_GameObject_o *)v19;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.particleObj, (int32_t)v19, v20, v21);
            return;
          }
        }
LABEL_23:
        sub_1B8880C(ComponentInChildren_object, v10);
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
  if ( (byte_4A57EDB & 1) == 0 )
  {
    this = (EventPointVsResultAction_o *)sub_1B885B0(&Method_CStateManager_EventPointVsResultAction__getState__);
    byte_4A57EDB = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall EventPointVsResultAction__LoadSvts(
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
  System_Int32_array **v18; // x28
  int32_t v19; // w2
  int32_t v20; // w3
  Face_Type_array **v21; // x29
  int32_t v22; // w2
  int32_t v23; // w3
  System_Action_o **v24; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x8
  __int64 v28; // x9
  struct UIStandFigureR_array *SvtComponents; // x10
  Face_Type_array *v30; // x9
  char *v31; // x11
  int32_t v32; // w21
  UIStandFigureR_o *v33; // x22
  int v34; // w23
  System_Action_o *v35; // x20

  while ( 1 )
  {
    if ( (byte_4A57EDA & 1) == 0 )
    {
      sub_1B885B0(&System_Action_TypeInfo);
      sub_1B885B0(&Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__);
      sub_1B885B0(&EventPointVsResultAction___c__DisplayClass23_0_TypeInfo);
      byte_4A57EDA = 1;
    }
    v13 = sub_1B887FC(EventPointVsResultAction___c__DisplayClass23_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0LL);
    if ( !v13 )
      goto LABEL_18;
    *(_QWORD *)(v13 + 16) = this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
    *(_DWORD *)(v13 + 24) = cnt;
    *(_QWORD *)(v13 + 32) = servants;
    v18 = (System_Int32_array **)(v13 + 32);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)servants, v19, v20);
    *(_QWORD *)(v13 + 40) = faces;
    v21 = (Face_Type_array **)(v13 + 40);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 40), (int32_t)faces, v22, v23);
    *(_QWORD *)(v13 + 56) = callBack;
    v24 = (System_Action_o **)(v13 + 56);
    *(_DWORD *)(v13 + 48) = winType;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 56), (int32_t)callBack, v25, v26);
    v27 = *(int *)(v13 + 24);
    if ( (int)v27 > 2 )
      goto LABEL_10;
    servants = *v18;
    if ( !*v18 )
      goto LABEL_18;
    v28 = *(_QWORD *)&servants->max_length;
    if ( (int)v27 >= (int)v28 )
    {
LABEL_10:
      ActionExtensions__Call(*v24, 0LL);
      return;
    }
    winType = *(_DWORD *)(v13 + 48);
    if ( winType == 3 )
      break;
    cnt = v27 + 1;
    if ( (_DWORD)v27 + 1 == winType )
      break;
    faces = *v21;
    callBack = *v24;
  }
  SvtComponents = this->fields.SvtComponents;
  if ( !SvtComponents )
    goto LABEL_18;
  if ( (unsigned int)v27 >= SvtComponents->max_length || (unsigned int)v27 >= (unsigned int)v28 )
    goto LABEL_19;
  v30 = *v21;
  if ( !*v21 )
    goto LABEL_18;
  if ( (unsigned int)v27 >= v30->max_length )
LABEL_19:
    sub_1B88814(v14, v15);
  v31 = (char *)servants + 4 * v27;
  v32 = v30->m_Items[v27 + 1];
  v33 = SvtComponents->m_Items[v27];
  v34 = *((_DWORD *)v31 + 8);
  v35 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v13,
    Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__,
    0LL);
  if ( !v33 )
LABEL_18:
    sub_1B8880C(v14, v15);
  UIStandFigureR__SetCharacter_41041748(v33, v34 / 10, v34 % 10, 0, v32, v35, 0LL);
}


void __fastcall EventPointVsResultAction__Play(
        EventPointVsResultAction_o *this,
        System_Action_o *end_act,
        MaskFade_o *maskFade,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v14; // x21
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v17; // x21
  __int64 v18; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v20; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v22; // x21
  System_String_o *v23; // x0
  AvalonSceneManager_c *v24; // x0
  System_Action_o *v25; // x21

  if ( (byte_4A57ED9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_EventPointVsResultAction__Play_b__22_0__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A57ED9 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mEndAct,
    (int32_t)end_act,
    (int32_t)maskFade,
    (int32_t)method);
  this->fields.localMask = maskFade;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.localMask, (int32_t)maskFade, v9, v10);
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
    v14 = this->fields.mSimpleAnimation;
    if ( !v14 )
      goto LABEL_30;
    gameObject = (UnityEngine_GameObject_o *)v14[1].monitor;
    if ( !gameObject )
      goto LABEL_30;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v14, name, 0LL);
    if ( !gameObject )
      goto LABEL_30;
    klass = gameObject->klass;
    v17 = gameObject;
    v18 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v18;
        p_offset += 2;
        if ( !v18 )
          goto LABEL_14;
      }
      v20 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_14:
      v20 = sub_1BDA590(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v20)(v17, *(_QWORD *)(v20 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v22 = this->fields.mAnimation;
      if ( !v22 )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v22, v23, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  if ( fade_in_time <= 0.0 )
  {
    v24 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v24 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v24->static_fields->DEFAULT_FADE_TIME;
  }
  v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_EventPointVsResultAction__Play_b__22_0__, 0LL);
  if ( !maskFade )
LABEL_30:
    sub_1B8880C(gameObject, v12);
  MaskFade__Fadein(maskFade, fade_in_time, v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointVsResultAction__SetState(
        EventPointVsResultAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A57EDC & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_EventPointVsResultAction__setState__);
    byte_4A57EDC = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_30AAE68 *)Method_CStateManager_EventPointVsResultAction__setState__);
}


void __fastcall EventPointVsResultAction__Setup(
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
  int32_t v14; // w2
  int32_t v15; // w3
  struct EventPointVsResultAction_servants_array *resultSvts; // x8
  int v17; // w9
  EventPointVsResultAction_servants_o *v18; // x8
  System_Int32_array *servIds; // x22
  Face_Type_array *FaceIds; // x23
  System_Action_o *v21; // x24
  const MethodInfo *v22; // x6

  if ( (byte_4A57ED7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__);
    sub_1B885B0(&EventPointVsResultAction___c__DisplayClass19_0_TypeInfo);
    byte_4A57ED7 = 1;
  }
  v9 = sub_1B887FC(EventPointVsResultAction___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 32) = callBack;
  *(_DWORD *)(v9 + 24) = resultNo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)callBack, v14, v15);
  resultSvts = this->fields.resultSvts;
  this->fields.winType = winType;
  if ( !resultSvts )
    goto LABEL_8;
  v17 = *(_DWORD *)(v9 + 24) - 1;
  if ( v17 >= resultSvts->max_length )
    sub_1B88814(v10, v11);
  v18 = resultSvts->m_Items[v17];
  if ( !v18 )
LABEL_8:
    sub_1B8880C(v10, v11);
  servIds = v18->fields.servIds;
  FaceIds = v18->fields.FaceIds;
  v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__,
    0LL);
  EventPointVsResultAction__LoadSvts(this, 0, servIds, FaceIds, winType, v21, v22);
}


void __fastcall EventPointVsResultAction__Update(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A57ED6 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_EventPointVsResultAction__update__);
    byte_4A57ED6 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_30AAE44 *)Method_CStateManager_EventPointVsResultAction__update__);
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
  UnityEngine_Component_o *transform; // x0
  __int64 v6; // x1
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Object_o *mScreenTouchInfo; // x22
  Il2CppObject *Instance; // x22
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  EventPointVsResultAction_c *v18; // x0
  System_String_o *ANIMATION_NAME; // x21
  System_String_o *v20; // x0
  struct System_String_o *v21; // x0
  struct System_String_o **p_animationName; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t winType; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A57ED8 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1B885B0(&EventPointVsResultAction_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57ED8 = 1;
  }
  winType = 0;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                           transform,
                                           (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = (struct SimpleAnimation_o *)ComponentInChildren_object__48719376;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mSimpleAnimation,
    (int32_t)ComponentInChildren_object__48719376,
    v8,
    v9);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  v10 = UnityEngine_Component__GetComponentInChildren_object__48719376(
          transform,
          (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mAnimation, (int32_t)v10, v11, v12);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__48719376(
                                           transform,
                                           (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    this->fields.mScreenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.mScreenTouchInfo,
      (int32_t)Component_object,
      v16,
      v17);
  }
  v18 = EventPointVsResultAction_TypeInfo;
  if ( !EventPointVsResultAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointVsResultAction_TypeInfo);
    v18 = EventPointVsResultAction_TypeInfo;
  }
  ANIMATION_NAME = v18->static_fields->ANIMATION_NAME;
  winType = this->fields.winType;
  v20 = System_Int32__ToString((int32_t)&winType, 0LL);
  v21 = System_String__Concat_61707032(ANIMATION_NAME, v20, 0LL);
  this->fields.animationName = v21;
  p_animationName = &this->fields.animationName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_animationName, (int32_t)v21, v23, v24);
  transform = (UnityEngine_Component_o *)*(p_animationName - 3);
  if ( !transform
    || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL)) == 0LL )
  {
LABEL_19:
    sub_1B8880C(transform, v6);
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
  UnityEngine_Object_o *mSimpleAnimation; // x21
  SimpleAnimation_State_o *v6; // x0
  ServantStatusBattleListViewItem_o *p_fields; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  ServantStatusBattleListViewItem_c *klass; // x21
  _QWORD *image; // x8
  SimpleAnimation_o *v12; // x20
  __int64 v13; // x9
  SimpleAnimation_State_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_AnimationState_o *Item; // x0
  ServantStatusBattleListViewItem_o *p_mAnimState; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_Animation_o *v21; // x20
  ServantStatusBattleListViewItem_c *v22; // x20
  _QWORD *v23; // x8
  __int64 v24; // x9
  SimpleAnimation_State_c **v25; // x10
  __int64 v26; // x0
  ServantStatusBattleListViewItem_c *v27; // x19
  _QWORD *v28; // x8
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x0

  v4 = this;
  if ( (byte_4A57EDE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (EventPointVsResultAction_StatePlay_o *)sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A57EDE = 1;
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
      UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)this, that->fields.animationName, 0LL);
      this = (EventPointVsResultAction_StatePlay_o *)that->fields.mAnimation;
      if ( this )
      {
        Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)this, that->fields.animationName, 0LL);
        v4->fields.mAnimState = Item;
        p_mAnimState = (ServantStatusBattleListViewItem_o *)&v4->fields.mAnimState;
        sub_1B88554(p_mAnimState, (int32_t)Item, v19, v20);
        this = (EventPointVsResultAction_StatePlay_o *)p_mAnimState->klass;
        if ( p_mAnimState->klass )
        {
          v21 = that->fields.mAnimation;
          this = (EventPointVsResultAction_StatePlay_o *)UnityEngine_AnimationState__get_clip(
                                                           (UnityEngine_AnimationState_o *)this,
                                                           0LL);
          if ( v21 )
          {
            UnityEngine_Animation__set_clip(v21, (UnityEngine_AnimationClip_o *)this, 0LL);
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
    sub_1B8880C(this, that);
  }
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_43;
  SimpleAnimation__Play_63844704((SimpleAnimation_o *)this, that->fields.animationName, 0LL);
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_43;
  v6 = SimpleAnimation__get_Item((SimpleAnimation_o *)this, that->fields.animationName, 0LL);
  v4->fields.mSimpleAnimState = v6;
  p_fields = (ServantStatusBattleListViewItem_o *)&v4->fields;
  sub_1B88554(p_fields, (int32_t)v6, v8, v9);
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
    v15 = sub_1BDA590(p_fields->klass, SimpleAnimation_State_TypeInfo, 14LL);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(ServantStatusBattleListViewItem_c *, _QWORD))v15)(
                                                   klass,
                                                   *(_QWORD *)(v15 + 8));
  if ( !v12 )
    goto LABEL_43;
  SimpleAnimation__set_clip(v12, (UnityEngine_AnimationClip_o *)this, 0LL);
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
    v26 = sub_1BDA590(p_fields->klass, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(ServantStatusBattleListViewItem_c *, _QWORD, float))v26)(
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
    v31 = sub_1BDA590(v27, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(ServantStatusBattleListViewItem_c *, _QWORD, float))v31)(v27, *(_QWORD *)(v31 + 8), 1.0);
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

  if ( (byte_4A57EDF & 1) == 0 )
  {
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A57EDF = 1;
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
      p_method = sub_1BDA590(this->fields.mSimpleAnimState, SimpleAnimation_State_TypeInfo, 3LL);
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
      v19 = sub_1BDA590(v15, SimpleAnimation_State_TypeInfo, 14LL);
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
    sub_1B8880C(mAnimState, v10);
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
    sub_1B8880C(this, that);
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
  __int64 v4; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x19
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  MaskFade_o *v12; // x21
  AvalonSceneManager_c *v13; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x2

  if ( (byte_4A57EE0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&CTouch_TypeInfo);
    sub_1B885B0(&Method_EventPointVsResultAction_StateTouchWait_update__);
    sub_1B885B0(&Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_1B885B0(&EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4A57EE0 = 1;
  }
  v4 = sub_1B887FC(EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_19;
  *(_QWORD *)(v4 + 16) = that;
  v9 = v4 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)that, v7, v8);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v9 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v9 + 104LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v10 = Method_EventPointVsResultAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_EventPointVsResultAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1B885C8(Method_EventPointVsResultAction_StateTouchWait_update__);
          v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
          if ( *(_QWORD *)v9 )
          {
            v12 = *(MaskFade_o **)(*(_QWORD *)v9 + 120LL);
            v13 = AvalonSceneManager_TypeInfo;
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v13 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
            v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              v15,
              (Il2CppObject *)v4,
              Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0LL);
            if ( v12 )
            {
              MaskFade__Fadeout(v12, 1, DEFAULT_FADE_TIME, v15, 0LL);
              isTouchPush = *(UnityEngine_GameObject_o **)v9;
              if ( *(_QWORD *)v9 )
              {
                EventPointVsResultAction__SetState((EventPointVsResultAction_o *)isTouchPush, 0, v16);
                return;
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_1B8880C(isTouchPush, v6);
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
    sub_1B8880C(this, method);
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
  struct EventPointVsResultAction_o *_4__this; // x8
  struct System_Int32_array *bgs; // x9
  int v8; // w10
  ExUITexture_o *mBg; // x20
  Il2CppObject *v10; // x0
  System_Action_o *_9__1; // x22
  EventPointVsResultAction___c__DisplayClass19_0_o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x2
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  v5 = this;
  if ( (byte_4A57EE1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__);
    this = (EventPointVsResultAction___c__DisplayClass19_0_o *)sub_1B885B0(&StringLiteral_3133/*"Back/back{0}"*/);
    byte_4A57EE1 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  bgs = _4__this->fields.bgs;
  if ( !bgs )
    goto LABEL_13;
  v8 = v5->fields.resultNo - 1;
  if ( v8 >= bgs->max_length )
    sub_1B88814(this, method);
  mBg = _4__this->fields.mBg;
  v16 = bgs->m_Items[v8 + 1];
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v2, v3, v4);
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)System_String__Format(
                                                               (System_String_o *)StringLiteral_3133/*"Back/back{0}"*/,
                                                               v10,
                                                               0LL);
  _9__1 = v5->fields.__9__1;
  v12 = this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.__9__1, (int32_t)_9__1, v13, v14);
  }
  if ( !mBg )
    goto LABEL_13;
  if ( ExUITexture__SetAssetImage(mBg, (System_String_o *)v12, _9__1, 0LL) )
    return;
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)v5->fields.__4__this;
  if ( !this )
LABEL_13:
    sub_1B8880C(this, method);
  EventPointVsResultAction__setupLocal((EventPointVsResultAction_o *)this, v5->fields.callBack, v15);
}


void __fastcall EventPointVsResultAction___c__DisplayClass19_0___Setup_b__1(
        EventPointVsResultAction___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
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
    sub_1B8880C(0LL, method);
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