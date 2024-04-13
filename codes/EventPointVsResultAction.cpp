void __fastcall EventPointVsResultAction___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E8DF6 & 1) == 0 )
  {
    sub_B5D5C4(&EventPointVsResultAction_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_17055/*"bit_vs_result_"*/, v8, v9, v10);
    byte_42E8DF6 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventPointVsResultAction_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_17055/*"bit_vs_result_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17055/*"bit_vs_result_"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventPointVsResultAction___ctor(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPointVsResultAction__Awake(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct CStateManager_EventPointVsResultAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct CStateManager_EventPointVsResultAction__o *mFSM; // x21
  EventPointVsResultAction_StateNone_o *v38; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  __int64 v40; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v41; // x21
  EventPointVsResultAction_StatePlay_o *v42; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v43; // x20
  EventPointVsResultAction_StateTouchWait_o *v44; // x21
  const MethodInfo *v45; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v48; // x21
  UnityEngine_GameObject_o *v49; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E8DEE & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_EventPointVsResultAction___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_EventPointVsResultAction__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_EventPointVsResultAction__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&EventPointVsResultAction_StateNone_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&EventPointVsResultAction_StatePlay_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&EventPointVsResultAction_StateTouchWait_TypeInfo, v26, v27, v28);
    byte_42E8DEE = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v30 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_EventPointVsResultAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v30,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2BB2630 *)Method_CStateManager_EventPointVsResultAction___ctor__);
    this->fields.mFSM = (struct CStateManager_EventPointVsResultAction__o *)v30;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    mFSM = this->fields.mFSM;
    v38 = (EventPointVsResultAction_StateNone_o *)sub_B5D694(EventPointVsResultAction_StateNone_TypeInfo);
    EventPointVsResultAction_StateNone___ctor(v38, 0LL);
    if ( !mFSM )
      goto LABEL_24;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v38,
      (const MethodInfo_2BB26FC *)Method_CStateManager_EventPointVsResultAction__add__);
    v41 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v42 = (EventPointVsResultAction_StatePlay_o *)sub_B5D694(EventPointVsResultAction_StatePlay_TypeInfo);
    EventPointVsResultAction_StatePlay___ctor(v42, 0LL);
    if ( !v41 )
      goto LABEL_24;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v41,
      1,
      (IState_T__o *)v42,
      (const MethodInfo_2BB26FC *)Method_CStateManager_EventPointVsResultAction__add__);
    v43 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v44 = (EventPointVsResultAction_StateTouchWait_o *)sub_B5D694(EventPointVsResultAction_StateTouchWait_TypeInfo);
    EventPointVsResultAction_StateTouchWait___ctor(v44, 0LL);
    if ( !v43 )
      goto LABEL_24;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v43,
      2,
      (IState_T__o *)v44,
      (const MethodInfo_2BB26FC *)Method_CStateManager_EventPointVsResultAction__add__);
    EventPointVsResultAction__SetState(this, 0, v45);
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
      v48 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v49 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v48,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v49, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v49, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v49, zero, 0LL);
        if ( v49 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v49,
                                                        (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v49;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v49,
              v50,
              v51,
              v52,
              v53,
              v54,
              v55);
            return;
          }
        }
LABEL_24:
        sub_B5D69C(ComponentInChildren_Dropdown_DropdownItem, v40);
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
  int v2; // w2
  __int64 v3; // x3
  EventPointVsResultAction_o *v4; // x19
  struct CStateManager_EventPointVsResultAction__o *mFSM; // x8

  v4 = this;
  if ( (byte_42E8DF4 & 1) == 0 )
  {
    this = (EventPointVsResultAction_o *)sub_B5D5C4(
                                           &Method_CStateManager_EventPointVsResultAction__getState__,
                                           (_DWORD)method,
                                           v2,
                                           v3);
    byte_42E8DF4 = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
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
  System_Int32_array **v9; // x27
  System_Int32_array *v10; // x21
  int32_t v11; // w28
  __int64 v13; // x9
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x20
  __int64 v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x28
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array ***v35; // x24
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Action_o **v42; // x19
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x8
  struct UIStandFigureR_array *SvtComponents; // x10
  System_Int32_array **v51; // x9
  char *v52; // x11
  int32_t v53; // w19
  UIStandFigureR_o *v54; // x21
  int v55; // w23
  System_Action_o *v56; // x22
  __int64 v57; // x0

  v9 = (System_Int32_array **)faces;
  v10 = servants;
  v11 = cnt;
  while ( 1 )
  {
    if ( (byte_42E8DF3 & 1) == 0 )
    {
      sub_B5D5C4(&System_Action_TypeInfo, cnt, (_DWORD)servants, faces);
      sub_B5D5C4(&Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__, v14, v15, v16);
      sub_B5D5C4(&EventPointVsResultAction___c__DisplayClass23_0_TypeInfo, v17, v18, v19);
      byte_42E8DF3 = 1;
    }
    v20 = sub_B5D694(EventPointVsResultAction___c__DisplayClass23_0_TypeInfo);
    EventPointVsResultAction___c__DisplayClass23_0___ctor((EventPointVsResultAction___c__DisplayClass23_0_o *)v20, 0LL);
    if ( !v20 )
      goto LABEL_19;
    *(_QWORD *)(v20 + 16) = this;
    sub_B5D560((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
    *(_DWORD *)(v20 + 24) = v11;
    *(_QWORD *)(v20 + 32) = v10;
    v28 = (System_Int32_array **)(v20 + 32);
    sub_B5D560((BattleServantConfConponent_o *)(v20 + 32), (System_Int32_array **)v10, v29, v30, v31, v32, v33, v34);
    *(_QWORD *)(v20 + 40) = v9;
    v35 = (System_Int32_array ***)(v20 + 40);
    sub_B5D560((BattleServantConfConponent_o *)(v20 + 40), v9, v36, v37, v38, v39, v40, v41);
    *(_QWORD *)(v20 + 56) = callBack;
    v42 = (System_Action_o **)(v20 + 56);
    *(_DWORD *)(v20 + 48) = winType;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v20 + 56),
      (System_Int32_array **)callBack,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    v49 = *(int *)(v20 + 24);
    if ( (int)v49 > 2 )
      goto LABEL_11;
    v10 = *v28;
    if ( !*v28 )
      goto LABEL_19;
    v13 = *(_QWORD *)&v10->max_length;
    if ( (int)v49 >= (int)v13 )
    {
LABEL_11:
      ActionExtensions__Call(*v42, 0LL);
      return;
    }
    winType = *(_DWORD *)(v20 + 48);
    if ( winType == 3 )
      break;
    v11 = v49 + 1;
    if ( (_DWORD)v49 + 1 == winType )
      break;
    v9 = *v35;
    callBack = *v42;
  }
  SvtComponents = this->fields.SvtComponents;
  if ( !SvtComponents )
    goto LABEL_19;
  if ( (unsigned int)v49 >= SvtComponents->max_length || (unsigned int)v49 >= (unsigned int)v13 )
    goto LABEL_20;
  v51 = *v35;
  if ( !*v35 )
    goto LABEL_19;
  if ( (unsigned int)v49 >= *((_DWORD *)v51 + 6) )
  {
LABEL_20:
    v57 = sub_B5D6C8(v21);
    sub_B5D668(v57, 0LL);
  }
  v52 = (char *)v10 + 4 * v49;
  v53 = *((_DWORD *)v51 + v49 + 8);
  v54 = SvtComponents->m_Items[v49];
  v55 = *((_DWORD *)v52 + 8);
  v56 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v20,
    Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__,
    0LL);
  if ( !v54 )
LABEL_19:
    sub_B5D69C(v21, *(_QWORD *)&cnt);
  UIStandFigureR__SetCharacter_40971044(v54, v55 / 10, v55 % 10, 0, v53, v56, 0LL);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v34; // x21
  System_String_o *name; // x0
  __int64 v36; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v38; // x21
  unsigned __int64 v39; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v41; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v43; // x21
  System_String_o *v44; // x0
  AvalonSceneManager_c *v45; // x0
  System_Action_o *v46; // x21

  if ( (byte_42E8DF2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)end_act, (_DWORD)maskFade, method);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_EventPointVsResultAction__Play_b__22_0__, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v22, v23, v24);
    byte_42E8DF2 = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)maskFade,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.localMask = maskFade;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.localMask,
    (System_Int32_array **)maskFade,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
    v34 = this->fields.mSimpleAnimation;
    if ( !v34 )
      goto LABEL_33;
    gameObject = (UnityEngine_GameObject_o *)v34[1].monitor;
    if ( !gameObject )
      goto LABEL_33;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(v34, name, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    klass = gameObject->klass;
    v38 = gameObject;
    if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v39;
        p_offset += 2;
        if ( v39 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      v41 = (__int64)(&klass[1]._1.castClass + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_15:
      v41 = sub_AF54C0(gameObject, SimpleAnimation_State_TypeInfo, 8LL, v36);
    }
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v41)(v38, *(_QWORD *)(v41 + 8), 0.0);
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
      v43 = this->fields.mAnimation;
      if ( !v43 )
        goto LABEL_33;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      v44 = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(v43, v44, 0LL);
      if ( !gameObject )
        goto LABEL_33;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
    }
  }
  if ( fade_in_time <= 0.0 )
  {
    v45 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v45 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v45->static_fields->DEFAULT_FADE_TIME;
  }
  v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_EventPointVsResultAction__Play_b__22_0__, 0LL);
  if ( !maskFade )
LABEL_33:
    sub_B5D69C(gameObject, v32);
  MaskFade__Fadein(maskFade, fade_in_time, v46, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointVsResultAction__SetState(
        EventPointVsResultAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_EventPointVsResultAction__o *mFSM; // x0

  if ( (byte_42E8DF5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_EventPointVsResultAction__setState__, state, (_DWORD)method, v3);
    byte_42E8DF5 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_EventPointVsResultAction__setState__);
}


void __fastcall EventPointVsResultAction__Setup(
        EventPointVsResultAction_o *this,
        int32_t winType,
        int32_t resultNo,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct EventPointVsResultAction_servants_array *resultSvts; // x8
  int v31; // w9
  EventPointVsResultAction_servants_o *v32; // x8
  System_Int32_array *servIds; // x22
  Face_Type_array *FaceIds; // x23
  System_Action_o *v35; // x24
  const MethodInfo *v36; // x6
  __int64 v37; // x0

  if ( (byte_42E8DF0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, winType, resultNo, callBack);
    sub_B5D5C4(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__, v9, v10, v11);
    sub_B5D5C4(&EventPointVsResultAction___c__DisplayClass19_0_TypeInfo, v12, v13, v14);
    byte_42E8DF0 = 1;
  }
  v15 = sub_B5D694(EventPointVsResultAction___c__DisplayClass19_0_TypeInfo);
  EventPointVsResultAction___c__DisplayClass19_0___ctor((EventPointVsResultAction___c__DisplayClass19_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  *(_QWORD *)(v15 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 32) = callBack;
  *(_DWORD *)(v15 + 24) = resultNo;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 32), (System_Int32_array **)callBack, v24, v25, v26, v27, v28, v29);
  resultSvts = this->fields.resultSvts;
  this->fields.winType = winType;
  if ( !resultSvts )
    goto LABEL_8;
  v31 = *(_DWORD *)(v15 + 24) - 1;
  if ( v31 >= resultSvts->max_length )
  {
    v37 = sub_B5D6C8(v16);
    sub_B5D668(v37, 0LL);
  }
  v32 = resultSvts->m_Items[v31];
  if ( !v32 )
LABEL_8:
    sub_B5D69C(v16, v17);
  servIds = v32->fields.servIds;
  FaceIds = v32->fields.FaceIds;
  v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v15,
    Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__,
    0LL);
  EventPointVsResultAction__LoadSvts(this, 0, servIds, FaceIds, winType, v35, v36);
}


void __fastcall EventPointVsResultAction__Update(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_EventPointVsResultAction__o *mFSM; // x0

  if ( (byte_42E8DEF & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_EventPointVsResultAction__update__, (_DWORD)method, v2, v3);
    byte_42E8DEF = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_EventPointVsResultAction__update__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  UnityEngine_Component_o *transform; // x0
  __int64 v25; // x1
  struct SimpleAnimation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct UnityEngine_Animation_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Object_o *mScreenTouchInfo; // x22
  CommonUI_o *Instance; // x22
  struct ScreenTouchInformationComponent_o *Component_srcLineSprite; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  EventPointVsResultAction_c *v49; // x0
  System_String_o *ANIMATION_NAME; // x21
  System_String_o *v51; // x0
  struct System_String_o *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  int32_t winType; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E8DF1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, (_DWORD)callBack, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v9, v10, v11);
    sub_B5D5C4(&EventPointVsResultAction_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    byte_42E8DF1 = 1;
  }
  winType = 0;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_21;
  ComponentInChildren_UIWidget = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                               transform,
                                                               (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = ComponentInChildren_UIWidget;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_21;
  v33 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                            transform,
                                            (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = v33;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_21;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                           transform,
                                           (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    this->fields.mScreenTouchInfo = Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mScreenTouchInfo,
      (System_Int32_array **)Component_srcLineSprite,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  v49 = EventPointVsResultAction_TypeInfo;
  if ( (BYTE3(EventPointVsResultAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventPointVsResultAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointVsResultAction_TypeInfo);
    v49 = EventPointVsResultAction_TypeInfo;
  }
  ANIMATION_NAME = v49->static_fields->ANIMATION_NAME;
  winType = this->fields.winType;
  v51 = System_Int32__ToString((int32_t)&winType, 0LL);
  v52 = System_String__Concat_44577788(ANIMATION_NAME, v51, 0LL);
  this->fields.animationName = v52;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animationName,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  transform = (UnityEngine_Component_o *)this->fields.mScreenTouchInfo;
  if ( !transform
    || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(transform, 0LL)) == 0LL )
  {
LABEL_21:
    sub_B5D69C(transform, v25);
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
  __int64 v3; // x3
  EventPointVsResultAction_StatePlay_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *mSimpleAnimation; // x21
  EventPointVsResultAction_StatePlay_Fields *p_fields; // x19
  __int64 v11; // x3
  struct SimpleAnimation_State_o *mSimpleAnimState; // x21
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_o *v14; // x20
  unsigned __int64 v15; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *mAnimation; // x21
  EventPointVsResultAction_StatePlay_o **p_mAnimState; // x19
  UnityEngine_Animation_o *v20; // x20
  __int64 v21; // x3
  struct SimpleAnimation_State_o *v22; // x20
  SimpleAnimation_State_c *v23; // x8
  unsigned __int64 v24; // x10
  SimpleAnimation_State_c **v25; // x11
  __int64 v26; // x0
  __int64 v27; // x3
  struct SimpleAnimation_State_o *v28; // x19
  SimpleAnimation_State_c *v29; // x8
  unsigned __int64 v30; // x10
  SimpleAnimation_State_c **v31; // x11
  __int64 v32; // x0

  v5 = this;
  if ( (byte_42E6587 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (EventPointVsResultAction_StatePlay_o *)sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v6, v7, v8);
    byte_42E6587 = 1;
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
      UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)this, that->fields.animationName, 0LL);
      this = (EventPointVsResultAction_StatePlay_o *)that->fields.mAnimation;
      if ( this )
      {
        v5->fields.mAnimState = UnityEngine_Animation__get_Item(
                                  (UnityEngine_Animation_o *)this,
                                  that->fields.animationName,
                                  0LL);
        p_mAnimState = (EventPointVsResultAction_StatePlay_o **)&v5->fields.mAnimState;
        sub_B5D560(p_mAnimState);
        this = *p_mAnimState;
        if ( *p_mAnimState )
        {
          v20 = that->fields.mAnimation;
          this = (EventPointVsResultAction_StatePlay_o *)UnityEngine_AnimationState__get_clip(
                                                           (UnityEngine_AnimationState_o *)this,
                                                           0LL);
          if ( v20 )
          {
            UnityEngine_Animation__set_clip(v20, (UnityEngine_AnimationClip_o *)this, 0LL);
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
    sub_B5D69C(this, that);
  }
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_45;
  SimpleAnimation__Play_16676044((SimpleAnimation_o *)this, that->fields.animationName, 0LL);
  this = (EventPointVsResultAction_StatePlay_o *)that->fields.mSimpleAnimation;
  if ( !this )
    goto LABEL_45;
  v5->fields.mSimpleAnimState = SimpleAnimation__get_Item((SimpleAnimation_o *)this, that->fields.animationName, 0LL);
  p_fields = &v5->fields;
  sub_B5D560(p_fields);
  mSimpleAnimState = p_fields->mSimpleAnimState;
  if ( !p_fields->mSimpleAnimState )
    goto LABEL_45;
  klass = mSimpleAnimState->klass;
  v14 = that->fields.mSimpleAnimation;
  if ( *(_WORD *)&mSimpleAnimState->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v15;
      p_offset += 2;
      if ( v15 >= *(unsigned __int16 *)&mSimpleAnimState->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
  }
  else
  {
LABEL_15:
    p_method = sub_AF54C0(p_fields->mSimpleAnimState, SimpleAnimation_State_TypeInfo, 14LL, v11);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(
                                                   mSimpleAnimState,
                                                   *(_QWORD *)(p_method + 8));
  if ( !v14 )
    goto LABEL_45;
  SimpleAnimation__set_clip(v14, (UnityEngine_AnimationClip_o *)this, 0LL);
  v22 = p_fields->mSimpleAnimState;
  if ( !p_fields->mSimpleAnimState )
    goto LABEL_45;
  v23 = v22->klass;
  if ( *(_WORD *)&v22->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = (SimpleAnimation_State_c **)&v23->_1.interfaceOffsets->offset;
    while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v24;
      v25 += 2;
      if ( v24 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v26 = (__int64)&v23->vtable[*(_DWORD *)v25 + 6].method;
  }
  else
  {
LABEL_35:
    v26 = sub_AF54C0(p_fields->mSimpleAnimState, SimpleAnimation_State_TypeInfo, 6LL, v21);
  }
  this = (EventPointVsResultAction_StatePlay_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))v26)(
                                                   v22,
                                                   *(_QWORD *)(v26 + 8),
                                                   0.0);
  v28 = p_fields->mSimpleAnimState;
  if ( !v28 )
    goto LABEL_45;
  v29 = v28->klass;
  if ( *(_WORD *)&v28->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = (SimpleAnimation_State_c **)&v29->_1.interfaceOffsets->offset;
    while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v30;
      v31 += 2;
      if ( v30 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
        goto LABEL_42;
    }
    v32 = (__int64)&v29->vtable[*(_DWORD *)v31 + 8].method;
  }
  else
  {
LABEL_42:
    v32 = sub_AF54C0(v28, SimpleAnimation_State_TypeInfo, 8LL, v27);
  }
  (*(void (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD, float))v32)(v28, *(_QWORD *)(v32 + 8), 1.0);
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

  if ( (byte_42E6588 & 1) == 0 )
  {
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    byte_42E6588 = 1;
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
      p_method = sub_AF54C0(this->fields.mSimpleAnimState, SimpleAnimation_State_TypeInfo, 3LL, v3);
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
      v21 = sub_AF54C0(v17, SimpleAnimation_State_TypeInfo, 14LL, v15);
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
    sub_B5D69C(mAnimState, v11);
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
    sub_B5D69C(this, that);
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_o *v20; // x20
  UnityEngine_Component_o *isTouchPush; // x0
  __int64 v22; // x1
  EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_Fields *p_fields; // x19
  MaskFade_o *localMask; // x21
  AvalonSceneManager_c *v25; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x22

  if ( (byte_42E6589 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CTouch_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v14, v15, v16);
    sub_B5D5C4(&EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v17, v18, v19);
    byte_42E6589 = 1;
  }
  v20 = (EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_o *)sub_B5D694(EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_22;
  v20->fields.that = that;
  p_fields = &v20->fields;
  sub_B5D560(&v20->fields);
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
            v25 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v25 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
            v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              v27,
              (Il2CppObject *)v20,
              Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0LL);
            if ( localMask )
            {
              MaskFade__Fadeout(localMask, 1, DEFAULT_FADE_TIME, v27, 0LL);
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
    sub_B5D69C(isTouchPush, v22);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  EventPointVsResultAction___c__DisplayClass19_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct EventPointVsResultAction_o *_4__this; // x8
  struct System_Int32_array *bgs; // x9
  int v16; // w10
  ExUITexture_o *mBg; // x20
  Il2CppObject *v18; // x0
  System_Action_o *_9__1; // x22
  System_String_o *v20; // x21
  __int64 v21; // x0
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_42E6586 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__, v8, v9, v10);
    this = (EventPointVsResultAction___c__DisplayClass19_0_o *)sub_B5D5C4(&StringLiteral_2708/*"Back/back{0}"*/, v11, v12, v13);
    byte_42E6586 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  bgs = _4__this->fields.bgs;
  if ( !bgs )
    goto LABEL_13;
  v16 = v4->fields.resultNo - 1;
  if ( v16 >= bgs->max_length )
  {
    v21 = sub_B5D6C8(this);
    sub_B5D668(v21, 0LL);
  }
  mBg = _4__this->fields.mBg;
  v22 = bgs->m_Items[v16 + 1];
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)System_String__Format(
                                                               (System_String_o *)StringLiteral_2708/*"Back/back{0}"*/,
                                                               v18,
                                                               0LL);
  _9__1 = v4->fields.__9__1;
  v20 = (System_String_o *)this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B5D560(&v4->fields.__9__1);
  }
  if ( !mBg )
    goto LABEL_13;
  if ( ExUITexture__SetAssetImage(mBg, v20, _9__1, 0LL) )
    return;
  this = (EventPointVsResultAction___c__DisplayClass19_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_13:
    sub_B5D69C(this, method);
  EventPointVsResultAction__setupLocal((EventPointVsResultAction_o *)this, v4->fields.callBack, 0LL);
}


void __fastcall EventPointVsResultAction___c__DisplayClass19_0___Setup_b__1(
        EventPointVsResultAction___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventPointVsResultAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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