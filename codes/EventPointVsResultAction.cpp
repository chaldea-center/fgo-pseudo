void __fastcall EventPointVsResultAction___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_435257C & 1) == 0 )
  {
    sub_B70694(&EventPointVsResultAction_TypeInfo);
    sub_B70694(&StringLiteral_17101/*"bit_vs_result_"*/);
    byte_435257C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventPointVsResultAction_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_17101/*"bit_vs_result_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17101/*"bit_vs_result_"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall EventPointVsResultAction___ctor(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPointVsResultAction__Awake(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  struct CStateManager_EventPointVsResultAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct CStateManager_EventPointVsResultAction__o *mFSM; // x21
  EventPointVsResultAction_StateNone_o *v12; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  __int64 v14; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v15; // x21
  EventPointVsResultAction_StatePlay_o *v16; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x20
  EventPointVsResultAction_StateTouchWait_o *v18; // x21
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v22; // x21
  UnityEngine_GameObject_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4352574 & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_EventPointVsResultAction___ctor__);
    sub_B70694(&Method_CStateManager_EventPointVsResultAction__add__);
    sub_B70694(&CStateManager_EventPointVsResultAction__TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&EventPointVsResultAction_StateNone_TypeInfo);
    sub_B70694(&EventPointVsResultAction_StatePlay_TypeInfo);
    sub_B70694(&EventPointVsResultAction_StateTouchWait_TypeInfo);
    byte_4352574 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B70764(CStateManager_EventPointVsResultAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v4,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2C7FFDC *)Method_CStateManager_EventPointVsResultAction___ctor__);
    this->fields.mFSM = (struct CStateManager_EventPointVsResultAction__o *)v4;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.mFSM, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
    mFSM = this->fields.mFSM;
    v12 = (EventPointVsResultAction_StateNone_o *)sub_B70764(EventPointVsResultAction_StateNone_TypeInfo);
    EventPointVsResultAction_StateNone___ctor(v12, 0LL);
    if ( !mFSM )
      goto LABEL_24;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_2C800A8 *)Method_CStateManager_EventPointVsResultAction__add__);
    v15 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v16 = (EventPointVsResultAction_StatePlay_o *)sub_B70764(EventPointVsResultAction_StatePlay_TypeInfo);
    EventPointVsResultAction_StatePlay___ctor(v16, 0LL);
    if ( !v15 )
      goto LABEL_24;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_2C800A8 *)Method_CStateManager_EventPointVsResultAction__add__);
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v18 = (EventPointVsResultAction_StateTouchWait_o *)sub_B70764(EventPointVsResultAction_StateTouchWait_TypeInfo);
    EventPointVsResultAction_StateTouchWait___ctor(v18, 0LL);
    if ( !v17 )
      goto LABEL_24;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_2C800A8 *)Method_CStateManager_EventPointVsResultAction__add__);
    EventPointVsResultAction__SetState(this, 0, v19);
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
      v22 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v23 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v22,
                                          (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v23, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v23, zero, 0LL);
        if ( v23 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v23,
                                                        (const MethodInfo_1D4AED4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v23;
            sub_B70630(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v23,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29);
            return;
          }
        }
LABEL_24:
        sub_B7076C(ComponentInChildren_Dropdown_DropdownItem, v14);
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
  if ( (byte_435257A & 1) == 0 )
  {
    this = (EventPointVsResultAction_o *)sub_B70694(&Method_CStateManager_EventPointVsResultAction__getState__);
    byte_435257A = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B7076C(this, method);
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
  __int64 v13; // x9
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x28
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  Face_Type_array **v30; // x24
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Action_o **v37; // x19
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x8
  struct UIStandFigureR_array *SvtComponents; // x10
  Face_Type_array *v46; // x9
  char *v47; // x11
  int32_t v48; // w19
  UIStandFigureR_o *v49; // x21
  int v50; // w23
  System_Action_o *v51; // x22
  __int64 v52; // x0

  while ( 1 )
  {
    if ( (byte_4352579 & 1) == 0 )
    {
      sub_B70694(&System_Action_TypeInfo);
      sub_B70694(&Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__);
      sub_B70694(&EventPointVsResultAction___c__DisplayClass23_0_TypeInfo);
      byte_4352579 = 1;
    }
    v14 = sub_B70764(EventPointVsResultAction___c__DisplayClass23_0_TypeInfo);
    EventPointVsResultAction___c__DisplayClass23_0___ctor((EventPointVsResultAction___c__DisplayClass23_0_o *)v14, 0LL);
    if ( !v14 )
      goto LABEL_19;
    *(_QWORD *)(v14 + 16) = this;
    sub_B70630((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
    *(_DWORD *)(v14 + 24) = cnt;
    *(_QWORD *)(v14 + 32) = servants;
    v23 = (System_Int32_array **)(v14 + 32);
    sub_B70630(
      (BattleServantConfConponent_o *)(v14 + 32),
      (System_Int32_array **)servants,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    *(_QWORD *)(v14 + 40) = faces;
    v30 = (Face_Type_array **)(v14 + 40);
    sub_B70630((BattleServantConfConponent_o *)(v14 + 40), (System_Int32_array **)faces, v31, v32, v33, v34, v35, v36);
    *(_QWORD *)(v14 + 56) = callBack;
    v37 = (System_Action_o **)(v14 + 56);
    *(_DWORD *)(v14 + 48) = winType;
    sub_B70630(
      (BattleServantConfConponent_o *)(v14 + 56),
      (System_Int32_array **)callBack,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    v44 = *(int *)(v14 + 24);
    if ( (int)v44 > 2 )
      goto LABEL_11;
    servants = *v23;
    if ( !*v23 )
      goto LABEL_19;
    v13 = *(_QWORD *)&servants->max_length;
    if ( (int)v44 >= (int)v13 )
    {
LABEL_11:
      ActionExtensions__Call(*v37, 0LL);
      return;
    }
    winType = *(_DWORD *)(v14 + 48);
    if ( winType == 3 )
      break;
    cnt = v44 + 1;
    if ( (_DWORD)v44 + 1 == winType )
      break;
    faces = *v30;
    callBack = *v37;
  }
  SvtComponents = this->fields.SvtComponents;
  if ( !SvtComponents )
    goto LABEL_19;
  if ( (unsigned int)v44 >= SvtComponents->max_length || (unsigned int)v44 >= (unsigned int)v13 )
    goto LABEL_20;
  v46 = *v30;
  if ( !*v30 )
    goto LABEL_19;
  if ( (unsigned int)v44 >= v46->max_length )
  {
LABEL_20:
    v52 = sub_B70798(v15);
    sub_B70738(v52, 0LL);
  }
  v47 = (char *)servants + 4 * v44;
  v48 = v46->m_Items[v44 + 1];
  v49 = SvtComponents->m_Items[v44];
  v50 = *((_DWORD *)v47 + 8);
  v51 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v14,
    Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__,
    0LL);
  if ( !v49 )
LABEL_19:
    sub_B7076C(v15, v16);
  UIStandFigureR__SetCharacter_40788852(v49, v50 / 10, v50 % 10, 0, v48, v51, 0LL);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v22; // x21
  System_String_o *name; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v25; // x21
  unsigned __int64 v26; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v28; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v30; // x21
  System_String_o *v31; // x0
  AvalonSceneManager_c *v32; // x0
  System_Action_o *v33; // x21

  if ( (byte_4352578 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_EventPointVsResultAction__Play_b__22_0__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    byte_4352578 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)maskFade,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.localMask = maskFade;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.localMask,
    (System_Int32_array **)maskFade,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
    v22 = this->fields.mSimpleAnimation;
    if ( !v22 )
      goto LABEL_33;
    gameObject = (UnityEngine_GameObject_o *)v22[1].monitor;
    if ( !gameObject )
      goto LABEL_33;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v22, name, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    klass = gameObject->klass;
    v25 = gameObject;
    if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v26;
        p_offset += 2;
        if ( v26 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      v28 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_15:
      v28 = sub_B08590(gameObject, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v28)(v25, *(_QWORD *)(v28 + 8), 0.0);
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
      v30 = this->fields.mAnimation;
      if ( !v30 )
        goto LABEL_33;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      v31 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v30, v31, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  if ( fade_in_time <= 0.0 )
  {
    v32 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v32 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v32->static_fields->DEFAULT_FADE_TIME;
  }
  v33 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_EventPointVsResultAction__Play_b__22_0__, 0LL);
  if ( !maskFade )
LABEL_33:
    sub_B7076C(gameObject, v20);
  MaskFade__Fadein(maskFade, fade_in_time, v33, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointVsResultAction__SetState(
        EventPointVsResultAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_EventPointVsResultAction__o *mFSM; // x0

  if ( (byte_435257B & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_EventPointVsResultAction__setState__);
    byte_435257B = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B7076C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2C8014C *)Method_CStateManager_EventPointVsResultAction__setState__);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct EventPointVsResultAction_servants_array *resultSvts; // x8
  int v25; // w9
  EventPointVsResultAction_servants_o *v26; // x8
  System_Int32_array *servIds; // x22
  Face_Type_array *FaceIds; // x23
  System_Action_o *v29; // x24
  const MethodInfo *v30; // x6
  __int64 v31; // x0

  if ( (byte_4352576 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__);
    sub_B70694(&EventPointVsResultAction___c__DisplayClass19_0_TypeInfo);
    byte_4352576 = 1;
  }
  v9 = sub_B70764(EventPointVsResultAction___c__DisplayClass19_0_TypeInfo);
  EventPointVsResultAction___c__DisplayClass19_0___ctor((EventPointVsResultAction___c__DisplayClass19_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = callBack;
  *(_DWORD *)(v9 + 24) = resultNo;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)callBack, v18, v19, v20, v21, v22, v23);
  resultSvts = this->fields.resultSvts;
  this->fields.winType = winType;
  if ( !resultSvts )
    goto LABEL_8;
  v25 = *(_DWORD *)(v9 + 24) - 1;
  if ( v25 >= resultSvts->max_length )
  {
    v31 = sub_B70798(v10);
    sub_B70738(v31, 0LL);
  }
  v26 = resultSvts->m_Items[v25];
  if ( !v26 )
LABEL_8:
    sub_B7076C(v10, v11);
  servIds = v26->fields.servIds;
  FaceIds = v26->fields.FaceIds;
  v29 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v9,
    Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__,
    0LL);
  EventPointVsResultAction__LoadSvts(this, 0, servIds, FaceIds, winType, v29, v30);
}


void __fastcall EventPointVsResultAction__Update(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  struct CStateManager_EventPointVsResultAction__o *mFSM; // x0

  if ( (byte_4352575 & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_EventPointVsResultAction__update__);
    byte_4352575 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2C80124 *)Method_CStateManager_EventPointVsResultAction__update__);
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
  struct SimpleAnimation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UnityEngine_Animation_o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Object_o *mScreenTouchInfo; // x22
  CommonUI_o *Instance; // x22
  struct ScreenTouchInformationComponent_o *Component_srcLineSprite; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  EventPointVsResultAction_c *v30; // x0
  System_String_o *ANIMATION_NAME; // x21
  System_String_o *v32; // x0
  struct System_String_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int32_t winType; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4352577 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_B70694(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_B70694(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_B70694(&EventPointVsResultAction_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4352577 = 1;
  }
  winType = 0;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_21;
  ComponentInChildren_UIWidget = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                               transform,
                                                               (const MethodInfo_1BE40A0 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = ComponentInChildren_UIWidget;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_21;
  v14 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                            transform,
                                            (const MethodInfo_1BE40A0 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = v14;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_21;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                           transform,
                                           (const MethodInfo_1BE40A0 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    this->fields.mScreenTouchInfo = Component_srcLineSprite;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.mScreenTouchInfo,
      (System_Int32_array **)Component_srcLineSprite,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = EventPointVsResultAction_TypeInfo;
  if ( (BYTE3(EventPointVsResultAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventPointVsResultAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointVsResultAction_TypeInfo);
    v30 = EventPointVsResultAction_TypeInfo;
  }
  ANIMATION_NAME = v30->static_fields->ANIMATION_NAME;
  winType = this->fields.winType;
  v32 = System_Int32__ToString((int32_t)&winType, 0LL);
  v33 = System_String__Concat_44758168(ANIMATION_NAME, v32, 0LL);
  this->fields.animationName = v33;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.animationName,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  transform = (UnityEngine_Component_o *)this->fields.mScreenTouchInfo;
  if ( !transform
    || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL)) == 0LL )
  {
LABEL_21:
    sub_B7076C(transform, v6);
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
  EventPointVsResultAction_StatePlay_Fields *p_fields; // x19
  struct SimpleAnimation_State_o *mSimpleAnimState; // x21
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_o *v9; // x20
  unsigned __int64 v10; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *mAnimation; // x21
  EventPointVsResultAction_StatePlay_o **p_mAnimState; // x19
  UnityEngine_Animation_o *v15; // x20
  struct SimpleAnimation_State_o *v16; // x20
  SimpleAnimation_State_c *v17; // x8
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **v19; // x11
  __int64 v20; // x0
  struct SimpleAnimation_State_o *v21; // x19
  SimpleAnimation_State_c *v22; // x8
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **v24; // x11
  __int64 v25; // x0

  v4 = this;
  if ( (byte_434EA1F & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (EventPointVsResultAction_StatePlay_o *)sub_B70694(&SimpleAnimation_State_TypeInfo);
    byte_434EA1F = 1;
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
      UnityEngine_Animation__Play_51542184((UnityEngine_Animation_o *)this, that->fields.animationName, 0LL);
      this = (EventPointVsResultAction_StatePlay_o *)that->fields.mAnimation;
      if ( this )
      {
        v4->fields.mAnimState = UnityEngine_Animation__get_Item(
                                  (UnityEngine_Animation_o *)this,
                                  that->fields.animationName,
                                  0LL);
        p_mAnimState = (EventPointVsResultAction_StatePlay_o **)&v4->fields.mAnimState;
        sub_B70630(p_mAnimState);
        this = *p_mAnimState;
        if ( *p_mAnimState )
        {
          v15 = that->fields.mAnimation;
          this = (EventPointVsResultAction_StatePlay_o *)UnityEngine_AnimationState__get_clip(
                                                           (UnityEngine_AnimationState_o *)this,
                                                           0LL);
          if ( v15 )
          {
            UnityEngine_Animation__set_clip(v15, (UnityEngine_AnimationClip_o *)this, 0LL);
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
    sub_B7076C(this, that);
  }
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_45;
  SimpleAnimation__Play_16672920((SimpleAnimation_o *)this, that->fields.animationName, 0LL);
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_45;
  v4->fields.mSimpleAnimState = SimpleAnimation__get_Item((SimpleAnimation_o *)this, that->fields.animationName, 0LL);
  p_fields = &v4->fields;
  sub_B70630(p_fields);
  mSimpleAnimState = p_fields->mSimpleAnimState;
  if ( !p_fields->mSimpleAnimState )
    goto LABEL_45;
  klass = mSimpleAnimState->klass;
  v9 = that->fields.mSimpleAnimation;
  if ( *(_WORD *)&mSimpleAnimState->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v10;
      p_offset += 2;
      if ( v10 >= *(unsigned __int16 *)&mSimpleAnimState->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
  }
  else
  {
LABEL_15:
    p_method = sub_B08590(p_fields->mSimpleAnimState, SimpleAnimation_State_TypeInfo, 14LL);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(
                                                   mSimpleAnimState,
                                                   *(_QWORD *)(p_method + 8));
  if ( !v9 )
    goto LABEL_45;
  SimpleAnimation__set_clip(v9, (UnityEngine_AnimationClip_o *)this, 0LL);
  v16 = p_fields->mSimpleAnimState;
  if ( !p_fields->mSimpleAnimState )
    goto LABEL_45;
  v17 = v16->klass;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    v19 = (SimpleAnimation_State_c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v18;
      v19 += 2;
      if ( v18 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 6].method;
  }
  else
  {
LABEL_35:
    v20 = sub_B08590(p_fields->mSimpleAnimState, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))v20)(
                                                   v16,
                                                   *(_QWORD *)(v20 + 8),
                                                   0.0);
  v21 = p_fields->mSimpleAnimState;
  if ( !v21 )
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
        goto LABEL_42;
    }
    v25 = (__int64)&v22->vtable[*(_DWORD *)v24 + 8].method;
  }
  else
  {
LABEL_42:
    v25 = sub_B08590(v21, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))v25)(v21, *(_QWORD *)(v25 + 8), 1.0);
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
  unsigned __int64 v7; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v10; // x1
  UnityEngine_AnimationState_o *mAnimState; // x0
  float time; // s0
  float v13; // s8
  float v14; // s0
  struct SimpleAnimation_State_o *v15; // x20
  SimpleAnimation_State_c *v16; // x8
  unsigned __int64 v17; // x10
  SimpleAnimation_State_c **v18; // x11
  __int64 v19; // x0
  struct MaskFade_o *localMask; // x8

  if ( (byte_434EA20 & 1) == 0 )
  {
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    byte_434EA20 = 1;
  }
  mSimpleAnimState = this->fields.mSimpleAnimState;
  if ( mSimpleAnimState )
  {
    klass = mSimpleAnimState->klass;
    if ( *(_WORD *)&mSimpleAnimState->klass->_2.bitflags1 )
    {
      v7 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v7;
        p_offset += 2;
        if ( v7 >= *(unsigned __int16 *)&mSimpleAnimState->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3].method;
    }
    else
    {
LABEL_8:
      p_method = sub_B08590(this->fields.mSimpleAnimState, SimpleAnimation_State_TypeInfo, 3LL);
    }
    mAnimState = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(
                                                   mSimpleAnimState,
                                                   *(_QWORD *)(p_method + 8));
    v15 = this->fields.mSimpleAnimState;
    if ( !v15 )
      goto LABEL_29;
    v16 = v15->klass;
    v13 = v14;
    if ( *(_WORD *)&v15->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = (SimpleAnimation_State_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v17;
        v18 += 2;
        if ( v17 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 14].method;
    }
    else
    {
LABEL_20:
      v19 = sub_B08590(v15, SimpleAnimation_State_TypeInfo, 14LL);
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
    sub_B7076C(mAnimState, v10);
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
    sub_B7076C(this, that);
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
  EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_o *v4; // x20
  UnityEngine_Component_o *isTouchPush; // x0
  __int64 v6; // x1
  EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_Fields *p_fields; // x19
  MaskFade_o *localMask; // x21
  AvalonSceneManager_c *v9; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x22

  if ( (byte_434EA21 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&CTouch_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_B70694(&EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_434EA21 = 1;
  }
  v4 = (EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_o *)sub_B70764(EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_22;
  v4->fields.that = that;
  p_fields = &v4->fields;
  sub_B70630(&v4->fields);
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
            v9 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v9 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
            v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            System_Action___ctor(
              v11,
              (Il2CppObject *)v4,
              Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0LL);
            if ( localMask )
            {
              MaskFade__Fadeout(localMask, 1, DEFAULT_FADE_TIME, v11, 0LL);
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
    sub_B7076C(isTouchPush, v6);
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
    sub_B7076C(this, method);
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
  struct EventPointVsResultAction_o *_4__this; // x8
  struct System_Int32_array *bgs; // x9
  int v6; // w10
  ExUITexture_o *mBg; // x20
  Il2CppObject *v8; // x0
  System_Action_o *_9__1; // x22
  System_String_o *v10; // x21
  __int64 v11; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_434EA1E & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__);
    this = (EventPointVsResultAction___c__DisplayClass19_0_o *)sub_B70694(&StringLiteral_2716/*"Back/back{0}"*/);
    byte_434EA1E = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  bgs = _4__this->fields.bgs;
  if ( !bgs )
    goto LABEL_13;
  v6 = v3->fields.resultNo - 1;
  if ( v6 >= bgs->max_length )
  {
    v11 = sub_B70798(this);
    sub_B70738(v11, 0LL);
  }
  mBg = _4__this->fields.mBg;
  v12 = bgs->m_Items[v6 + 1];
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v2);
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)System_String__Format(
                                                               (System_String_o *)StringLiteral_2716/*"Back/back{0}"*/,
                                                               v8,
                                                               0LL);
  _9__1 = v3->fields.__9__1;
  v10 = (System_String_o *)this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_B70630(&v3->fields.__9__1);
  }
  if ( !mBg )
    goto LABEL_13;
  if ( ExUITexture__SetAssetImage(mBg, v10, _9__1, 0LL) )
    return;
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)v3->fields.__4__this;
  if ( !this )
LABEL_13:
    sub_B7076C(this, method);
  EventPointVsResultAction__setupLocal((EventPointVsResultAction_o *)this, v3->fields.callBack, 0LL);
}


void __fastcall EventPointVsResultAction___c__DisplayClass19_0___Setup_b__1(
        EventPointVsResultAction___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventPointVsResultAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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