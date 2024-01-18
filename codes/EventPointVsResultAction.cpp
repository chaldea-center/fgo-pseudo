void __fastcall EventPointVsResultAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4187910 & 1) == 0 )
  {
    sub_B2C35C(&EventPointVsResultAction_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_16848/*"bit_vs_result_"*/, v8);
    byte_4187910 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventPointVsResultAction_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_16848/*"bit_vs_result_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16848/*"bit_vs_result_"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  CStateManager_QAASpotStateController_IMapSpot__o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct CStateManager_EventPointVsResultAction__o *mFSM; // x21
  EventPointVsResultAction_StateNone_o *v20; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  __int64 v22; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v23; // x21
  EventPointVsResultAction_StatePlay_o *v24; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v25; // x20
  EventPointVsResultAction_StateTouchWait_o *v26; // x21
  const MethodInfo *v27; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v30; // x21
  UnityEngine_GameObject_o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4187908 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_EventPointVsResultAction___ctor__, method);
    sub_B2C35C(&Method_CStateManager_EventPointVsResultAction__add__, v3);
    sub_B2C35C(&CStateManager_EventPointVsResultAction__TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&EventPointVsResultAction_StateNone_TypeInfo, v8);
    sub_B2C35C(&EventPointVsResultAction_StatePlay_TypeInfo, v9);
    sub_B2C35C(&EventPointVsResultAction_StateTouchWait_TypeInfo, v10);
    byte_4187908 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v12 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_EventPointVsResultAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v12,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2A08354 *)Method_CStateManager_EventPointVsResultAction___ctor__);
    this->fields.mFSM = (struct CStateManager_EventPointVsResultAction__o *)v12;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    mFSM = this->fields.mFSM;
    v20 = (EventPointVsResultAction_StateNone_o *)sub_B2C42C(EventPointVsResultAction_StateNone_TypeInfo);
    EventPointVsResultAction_StateNone___ctor(v20, 0LL);
    if ( !mFSM )
      goto LABEL_24;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v20,
      (const MethodInfo_2A08420 *)Method_CStateManager_EventPointVsResultAction__add__);
    v23 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v24 = (EventPointVsResultAction_StatePlay_o *)sub_B2C42C(EventPointVsResultAction_StatePlay_TypeInfo);
    EventPointVsResultAction_StatePlay___ctor(v24, 0LL);
    if ( !v23 )
      goto LABEL_24;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v23,
      1,
      (IState_T__o *)v24,
      (const MethodInfo_2A08420 *)Method_CStateManager_EventPointVsResultAction__add__);
    v25 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v26 = (EventPointVsResultAction_StateTouchWait_o *)sub_B2C42C(EventPointVsResultAction_StateTouchWait_TypeInfo);
    EventPointVsResultAction_StateTouchWait___ctor(v26, 0LL);
    if ( !v25 )
      goto LABEL_24;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v25,
      2,
      (IState_T__o *)v26,
      (const MethodInfo_2A08420 *)Method_CStateManager_EventPointVsResultAction__add__);
    EventPointVsResultAction__SetState(this, 0, v27);
  }
  particleObj = (UnityEngine_Object_o *)this->fields.particleObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(particleObj, 0LL, 0LL) )
  {
    particlePrefab = (UnityEngine_Object_o *)this->fields.particlePrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(particlePrefab, 0LL, 0LL) )
    {
      v30 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v31 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v30,
                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v31, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v31, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v31, zero, 0LL);
        if ( v31 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v31,
                                                        (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v31;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v31,
              v32,
              v33,
              v34,
              v35,
              v36,
              v37);
            return;
          }
        }
LABEL_24:
        sub_B2C434(ComponentInChildren_Dropdown_DropdownItem, v22);
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
  if ( (byte_418790E & 1) == 0 )
  {
    this = (EventPointVsResultAction_o *)sub_B2C35C(&Method_CStateManager_EventPointVsResultAction__getState__, method);
    byte_418790E = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(this, method);
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
  __int64 v13; // x9
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  __int64 v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x28
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  Face_Type_array **v31; // x24
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Action_o **v38; // x19
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x8
  struct UIStandFigureR_array *SvtComponents; // x10
  Face_Type_array *v47; // x9
  char *v48; // x11
  int32_t v49; // w19
  UIStandFigureR_o *v50; // x21
  int v51; // w23
  System_Action_o *v52; // x22
  __int64 v53; // x0

  v11 = cnt;
  while ( 1 )
  {
    if ( (byte_418790D & 1) == 0 )
    {
      sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&cnt);
      sub_B2C35C(&Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__, v14);
      sub_B2C35C(&EventPointVsResultAction___c__DisplayClass23_0_TypeInfo, v15);
      byte_418790D = 1;
    }
    v16 = sub_B2C42C(EventPointVsResultAction___c__DisplayClass23_0_TypeInfo);
    EventPointVsResultAction___c__DisplayClass23_0___ctor((EventPointVsResultAction___c__DisplayClass23_0_o *)v16, 0LL);
    if ( !v16 )
      goto LABEL_19;
    *(_QWORD *)(v16 + 16) = this;
    sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
    *(_DWORD *)(v16 + 24) = v11;
    *(_QWORD *)(v16 + 32) = servants;
    v24 = (System_Int32_array **)(v16 + 32);
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v16 + 32),
      (System_Int32_array **)servants,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    *(_QWORD *)(v16 + 40) = faces;
    v31 = (Face_Type_array **)(v16 + 40);
    sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 40), (System_Int32_array **)faces, v32, v33, v34, v35, v36, v37);
    *(_QWORD *)(v16 + 56) = callBack;
    v38 = (System_Action_o **)(v16 + 56);
    *(_DWORD *)(v16 + 48) = winType;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v16 + 56),
      (System_Int32_array **)callBack,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    v45 = *(int *)(v16 + 24);
    if ( (int)v45 > 2 )
      goto LABEL_11;
    servants = *v24;
    if ( !*v24 )
      goto LABEL_19;
    v13 = *(_QWORD *)&servants->max_length;
    if ( (int)v45 >= (int)v13 )
    {
LABEL_11:
      ActionExtensions__Call(*v38, 0LL);
      return;
    }
    winType = *(_DWORD *)(v16 + 48);
    if ( winType == 3 )
      break;
    v11 = v45 + 1;
    if ( (_DWORD)v45 + 1 == winType )
      break;
    faces = *v31;
    callBack = *v38;
  }
  SvtComponents = this->fields.SvtComponents;
  if ( !SvtComponents )
    goto LABEL_19;
  if ( (unsigned int)v45 >= SvtComponents->max_length || (unsigned int)v45 >= (unsigned int)v13 )
    goto LABEL_20;
  v47 = *v31;
  if ( !*v31 )
    goto LABEL_19;
  if ( (unsigned int)v45 >= v47->max_length )
  {
LABEL_20:
    v53 = sub_B2C460(v17);
    sub_B2C400(v53, 0LL);
  }
  v48 = (char *)servants + 4 * v45;
  v49 = v47->m_Items[v45 + 1];
  v50 = SvtComponents->m_Items[v45];
  v51 = *((_DWORD *)v48 + 8);
  v52 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v16,
    Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__,
    0LL);
  if ( !v50 )
LABEL_19:
    sub_B2C434(v17, *(_QWORD *)&cnt);
  UIStandFigureR__SetCharacter_40489600(v50, v51 / 10, v51 % 10, 0, v49, v52, 0LL);
}


void __fastcall EventPointVsResultAction__Play(
        EventPointVsResultAction_o *this,
        System_Action_o *end_act,
        MaskFade_o *maskFade,
        float fade_in_time,
        const MethodInfo *method)
{
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v26; // x21
  System_String_o *name; // x0
  __int64 v28; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v30; // x21
  unsigned __int64 v31; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v33; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v35; // x21
  System_String_o *v36; // x0
  AvalonSceneManager_c *v37; // x0
  System_Action_o *v38; // x21

  if ( (byte_418790C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, end_act);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v13);
    sub_B2C35C(&Method_EventPointVsResultAction__Play_b__22_0__, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v16);
    byte_418790C = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)maskFade,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.localMask = maskFade;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.localMask,
    (System_Int32_array **)maskFade,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  mSimpleAnimation = (UnityEngine_Object_o *)this->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v26 = this->fields.mSimpleAnimation;
    if ( !v26 )
      goto LABEL_33;
    gameObject = (UnityEngine_GameObject_o *)v26[1].monitor;
    if ( !gameObject )
      goto LABEL_33;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v26, name, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    klass = gameObject->klass;
    v30 = gameObject;
    if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v31;
        p_offset += 2;
        if ( v31 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      v33 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_15:
      v33 = sub_AC5258(gameObject, SimpleAnimation_State_TypeInfo, 8LL, v28);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v33)(v30, *(_QWORD *)(v33 + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v35 = this->fields.mAnimation;
      if ( !v35 )
        goto LABEL_33;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      v36 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v35, v36, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  if ( fade_in_time <= 0.0 )
  {
    v37 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v37 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v37->static_fields->DEFAULT_FADE_TIME;
  }
  v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_EventPointVsResultAction__Play_b__22_0__, 0LL);
  if ( !maskFade )
LABEL_33:
    sub_B2C434(gameObject, v24);
  MaskFade__Fadein(maskFade, fade_in_time, v38, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointVsResultAction__SetState(
        EventPointVsResultAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_EventPointVsResultAction__o *mFSM; // x0

  if ( (byte_418790F & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_EventPointVsResultAction__setState__, *(_QWORD *)&state);
    byte_418790F = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_EventPointVsResultAction__setState__);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct EventPointVsResultAction_servants_array *resultSvts; // x8
  int v27; // w9
  EventPointVsResultAction_servants_o *v28; // x8
  System_Int32_array *servIds; // x22
  Face_Type_array *FaceIds; // x23
  System_Action_o *v31; // x24
  const MethodInfo *v32; // x6
  __int64 v33; // x0

  if ( (byte_418790A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&winType);
    sub_B2C35C(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__, v9);
    sub_B2C35C(&EventPointVsResultAction___c__DisplayClass19_0_TypeInfo, v10);
    byte_418790A = 1;
  }
  v11 = sub_B2C42C(EventPointVsResultAction___c__DisplayClass19_0_TypeInfo);
  EventPointVsResultAction___c__DisplayClass19_0___ctor((EventPointVsResultAction___c__DisplayClass19_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 32) = callBack;
  *(_DWORD *)(v11 + 24) = resultNo;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)callBack, v20, v21, v22, v23, v24, v25);
  resultSvts = this->fields.resultSvts;
  this->fields.winType = winType;
  if ( !resultSvts )
    goto LABEL_8;
  v27 = *(_DWORD *)(v11 + 24) - 1;
  if ( v27 >= resultSvts->max_length )
  {
    v33 = sub_B2C460(v12);
    sub_B2C400(v33, 0LL);
  }
  v28 = resultSvts->m_Items[v27];
  if ( !v28 )
LABEL_8:
    sub_B2C434(v12, v13);
  servIds = v28->fields.servIds;
  FaceIds = v28->fields.FaceIds;
  v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v11,
    Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__,
    0LL);
  EventPointVsResultAction__LoadSvts(this, 0, servIds, FaceIds, winType, v31, v32);
}


void __fastcall EventPointVsResultAction__Update(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  struct CStateManager_EventPointVsResultAction__o *mFSM; // x0

  if ( (byte_4187909 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_EventPointVsResultAction__update__, method);
    byte_4187909 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2A0849C *)Method_CStateManager_EventPointVsResultAction__update__);
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
  struct SimpleAnimation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UnityEngine_Animation_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Object_o *mScreenTouchInfo; // x22
  CommonUI_o *Instance; // x22
  struct ScreenTouchInformationComponent_o *Component_srcLineSprite; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  EventPointVsResultAction_c *v36; // x0
  System_String_o *ANIMATION_NAME; // x21
  System_String_o *v38; // x0
  struct System_String_o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int32_t winType; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418790B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, callBack);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v5);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v6);
    sub_B2C35C(&EventPointVsResultAction_TypeInfo, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_418790B = 1;
  }
  winType = 0;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_21;
  ComponentInChildren_UIWidget = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                               transform,
                                                               (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = ComponentInChildren_UIWidget;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_21;
  v20 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                            transform,
                                            (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_21;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                           transform,
                                           (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_21;
  BYTE5(transform[4].klass) = 1;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_21;
    transform = (UnityEngine_Component_o *)CommonUI__CreateScreeenTouchInfo(
                                             Instance,
                                             (UnityEngine_Transform_o *)transform,
                                             0,
                                             0LL);
    if ( !transform )
      goto LABEL_21;
    Component_srcLineSprite = (struct ScreenTouchInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                            (UnityEngine_GameObject_o *)transform,
                                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    this->fields.mScreenTouchInfo = Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mScreenTouchInfo,
      (System_Int32_array **)Component_srcLineSprite,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = EventPointVsResultAction_TypeInfo;
  if ( (BYTE3(EventPointVsResultAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventPointVsResultAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointVsResultAction_TypeInfo);
    v36 = EventPointVsResultAction_TypeInfo;
  }
  ANIMATION_NAME = v36->static_fields->ANIMATION_NAME;
  winType = this->fields.winType;
  v38 = System_Int32__ToString((int32_t)&winType, 0LL);
  v39 = System_String__Concat_44305532(ANIMATION_NAME, v38, 0LL);
  this->fields.animationName = v39;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.animationName,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  transform = (UnityEngine_Component_o *)this->fields.mScreenTouchInfo;
  if ( !transform
    || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL)) == 0LL )
  {
LABEL_21:
    sub_B2C434(transform, v12);
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
  EventPointVsResultAction_StatePlay_Fields *p_fields; // x19
  __int64 v9; // x3
  struct SimpleAnimation_State_o *mSimpleAnimState; // x21
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_o *v12; // x20
  unsigned __int64 v13; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_AnimationState_o *Item; // x0
  EventPointVsResultAction_StatePlay_o **p_mAnimState; // x19
  UnityEngine_Animation_o *v19; // x20
  __int64 v20; // x3
  struct SimpleAnimation_State_o *v21; // x20
  SimpleAnimation_State_c *v22; // x8
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **v24; // x11
  __int64 v25; // x0
  __int64 v26; // x3
  struct SimpleAnimation_State_o *v27; // x19
  SimpleAnimation_State_c *v28; // x8
  unsigned __int64 v29; // x10
  SimpleAnimation_State_c **v30; // x11
  __int64 v31; // x0

  v4 = this;
  if ( (byte_4184B4C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    this = (EventPointVsResultAction_StatePlay_o *)sub_B2C35C(&SimpleAnimation_State_TypeInfo, v5);
    byte_4184B4C = 1;
  }
  if ( !that )
    goto LABEL_45;
  mSimpleAnimation = (UnityEngine_Object_o *)that->fields.mSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
      return;
    this = (EventPointVsResultAction_StatePlay_o *)that->fields.mAnimation;
    if ( this )
    {
      UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)this, that->fields.animationName, 0LL);
      this = (EventPointVsResultAction_StatePlay_o *)that->fields.mAnimation;
      if ( this )
      {
        Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)this, that->fields.animationName, 0LL);
        v4->fields.mAnimState = Item;
        p_mAnimState = (EventPointVsResultAction_StatePlay_o **)&v4->fields.mAnimState;
        sub_B2C2F8(p_mAnimState, Item);
        this = *p_mAnimState;
        if ( *p_mAnimState )
        {
          v19 = that->fields.mAnimation;
          this = (EventPointVsResultAction_StatePlay_o *)UnityEngine_AnimationState__get_clip(
                                                           (UnityEngine_AnimationState_o *)this,
                                                           0LL);
          if ( v19 )
          {
            UnityEngine_Animation__set_clip(v19, (UnityEngine_AnimationClip_o *)this, 0LL);
            this = *p_mAnimState;
            if ( *p_mAnimState )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              this = *p_mAnimState;
              if ( *p_mAnimState )
              {
                UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_45:
    sub_B2C434(this, that);
  }
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_45;
  SimpleAnimation__Play_16486620((SimpleAnimation_o *)this, that->fields.animationName, 0LL);
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_45;
  v7 = SimpleAnimation__get_Item((SimpleAnimation_o *)this, that->fields.animationName, 0LL);
  v4->fields.mSimpleAnimState = v7;
  p_fields = &v4->fields;
  sub_B2C2F8(p_fields, v7);
  mSimpleAnimState = p_fields->mSimpleAnimState;
  if ( !p_fields->mSimpleAnimState )
    goto LABEL_45;
  klass = mSimpleAnimState->klass;
  v12 = that->fields.mSimpleAnimation;
  if ( *(_WORD *)&mSimpleAnimState->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v13;
      p_offset += 2;
      if ( v13 >= *(unsigned __int16 *)&mSimpleAnimState->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
  }
  else
  {
LABEL_15:
    p_method = sub_AC5258(p_fields->mSimpleAnimState, SimpleAnimation_State_TypeInfo, 14LL, v9);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(
                                                   mSimpleAnimState,
                                                   *(_QWORD *)(p_method + 8));
  if ( !v12 )
    goto LABEL_45;
  SimpleAnimation__set_clip(v12, (UnityEngine_AnimationClip_o *)this, 0LL);
  v21 = p_fields->mSimpleAnimState;
  if ( !p_fields->mSimpleAnimState )
    goto LABEL_45;
  v22 = v21->klass;
  if ( *(_WORD *)&v21->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = (SimpleAnimation_State_c **)&v22->_1.interfaceOffsets->offset;
    while ( *(v24 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v23;
      v24 += 2;
      if ( v23 >= *(unsigned __int16 *)&v21->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v25 = (__int64)&v22->vtable[*(_DWORD *)v24 + 6].method;
  }
  else
  {
LABEL_35:
    v25 = sub_AC5258(p_fields->mSimpleAnimState, SimpleAnimation_State_TypeInfo, 6LL, v20);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))v25)(
                                                   v21,
                                                   *(_QWORD *)(v25 + 8),
                                                   0.0);
  v27 = p_fields->mSimpleAnimState;
  if ( !v27 )
    goto LABEL_45;
  v28 = v27->klass;
  if ( *(_WORD *)&v27->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = (SimpleAnimation_State_c **)&v28->_1.interfaceOffsets->offset;
    while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v29;
      v30 += 2;
      if ( v29 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
        goto LABEL_42;
    }
    v31 = (__int64)&v28->vtable[*(_DWORD *)v30 + 8].method;
  }
  else
  {
LABEL_42:
    v31 = sub_AC5258(v27, SimpleAnimation_State_TypeInfo, 8LL, v26);
  }
  (*(void (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))v31)(v27, *(_QWORD *)(v31 + 8), 1.0);
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
  __int64 v3; // x3
  struct SimpleAnimation_State_o *mSimpleAnimState; // x21
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v8; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x1
  UnityEngine_AnimationState_o *mAnimState; // x0
  float time; // s0
  float v14; // s8
  __int64 v15; // x3
  float v16; // s0
  struct SimpleAnimation_State_o *v17; // x20
  SimpleAnimation_State_c *v18; // x8
  unsigned __int64 v19; // x10
  SimpleAnimation_State_c **v20; // x11
  __int64 v21; // x0
  struct MaskFade_o *localMask; // x8

  if ( (byte_4184B4D & 1) == 0 )
  {
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, that);
    byte_4184B4D = 1;
  }
  mSimpleAnimState = this->fields.mSimpleAnimState;
  if ( mSimpleAnimState )
  {
    klass = mSimpleAnimState->klass;
    if ( *(_WORD *)&mSimpleAnimState->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v8;
        p_offset += 2;
        if ( v8 >= *(unsigned __int16 *)&mSimpleAnimState->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
    }
    else
    {
LABEL_8:
      p_method = sub_AC5258(this->fields.mSimpleAnimState, SimpleAnimation_State_TypeInfo, 3LL, v3);
    }
    mAnimState = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(
                                                   mSimpleAnimState,
                                                   *(_QWORD *)(p_method + 8));
    v17 = this->fields.mSimpleAnimState;
    if ( !v17 )
      goto LABEL_29;
    v18 = v17->klass;
    v14 = v16;
    if ( *(_WORD *)&v17->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = (SimpleAnimation_State_c **)&v18->_1.interfaceOffsets->offset;
      while ( *(v20 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v19;
        v20 += 2;
        if ( v19 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 14].method;
    }
    else
    {
LABEL_20:
      v21 = sub_AC5258(v17, SimpleAnimation_State_TypeInfo, 14LL, v15);
    }
    mAnimState = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v21)(
                                                   v17,
                                                   *(_QWORD *)(v21 + 8));
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
    v14 = time;
    mAnimState = (UnityEngine_AnimationState_o *)UnityEngine_AnimationState__get_clip(mAnimState, 0LL);
    if ( !mAnimState )
      goto LABEL_29;
  }
  if ( v14 < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)mAnimState, 0LL) )
    return;
  if ( !that || (localMask = that->fields.localMask) == 0LL )
LABEL_29:
    sub_B2C434(mAnimState, v11);
  if ( !localMask->fields.isExecuteMask )
    EventPointVsResultAction__SetState(that, 2, 0LL);
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
    sub_B2C434(this, that);
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
  EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_o *v9; // x20
  UnityEngine_Component_o *isTouchPush; // x0
  __int64 v11; // x1
  EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_Fields *p_fields; // x19
  MaskFade_o *localMask; // x21
  AvalonSceneManager_c *v14; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x22

  if ( (byte_4184B4E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v4);
    sub_B2C35C(&CTouch_TypeInfo, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v7);
    sub_B2C35C(&EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v8);
    byte_4184B4E = 1;
  }
  v9 = (EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_o *)sub_B2C42C(EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_22;
  v9->fields.that = that;
  p_fields = &v9->fields;
  sub_B2C2F8(&v9->fields, that);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_Component_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( p_fields->that )
    {
      isTouchPush = (UnityEngine_Component_o *)p_fields->that->fields.mScreenTouchInfo;
      if ( isTouchPush )
      {
        isTouchPush = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isTouchPush, 0, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          if ( p_fields->that )
          {
            localMask = p_fields->that->fields.localMask;
            v14 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v14 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
            v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              v16,
              (Il2CppObject *)v9,
              Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0LL);
            if ( localMask )
            {
              MaskFade__Fadeout(localMask, 1, DEFAULT_FADE_TIME, v16, 0LL);
              isTouchPush = (UnityEngine_Component_o *)p_fields->that;
              if ( p_fields->that )
              {
                EventPointVsResultAction__SetState((EventPointVsResultAction_o *)isTouchPush, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_B2C434(isTouchPush, v11);
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
    sub_B2C434(this, method);
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
  System_Action_o *_9__1; // x22
  System_String_o *v12; // x21
  __int64 v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4184B4B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__, v4);
    this = (EventPointVsResultAction___c__DisplayClass19_0_o *)sub_B2C35C(&StringLiteral_2654/*"Back/back{0}"*/, v5);
    byte_4184B4B = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  bgs = _4__this->fields.bgs;
  if ( !bgs )
    goto LABEL_13;
  v8 = v2->fields.resultNo - 1;
  if ( v8 >= bgs->max_length )
  {
    v13 = sub_B2C460(this);
    sub_B2C400(v13, 0LL);
  }
  mBg = _4__this->fields.mBg;
  v14 = bgs->m_Items[v8 + 1];
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)System_String__Format(
                                                               (System_String_o *)StringLiteral_2654/*"Back/back{0}"*/,
                                                               v10,
                                                               0LL);
  _9__1 = v2->fields.__9__1;
  v12 = (System_String_o *)this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_B2C2F8(&v2->fields.__9__1, _9__1);
  }
  if ( !mBg )
    goto LABEL_13;
  if ( ExUITexture__SetAssetImage(mBg, v12, _9__1, 0LL) )
    return;
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)v2->fields.__4__this;
  if ( !this )
LABEL_13:
    sub_B2C434(this, method);
  EventPointVsResultAction__setupLocal((EventPointVsResultAction_o *)this, v2->fields.callBack, 0LL);
}


void __fastcall EventPointVsResultAction___c__DisplayClass19_0___Setup_b__1(
        EventPointVsResultAction___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventPointVsResultAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  EventPointVsResultAction__setupLocal(_4__this, this->fields.callBack, 0LL);
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
  EventPointVsResultAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  EventPointVsResultAction__LoadSvts(
    _4__this,
    this->fields.cnt + 1,
    this->fields.servants,
    this->fields.faces,
    this->fields.winType,
    this->fields.callBack,
    0LL);
}


void __fastcall EventPointVsResultAction_servants___ctor(
        EventPointVsResultAction_servants_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}