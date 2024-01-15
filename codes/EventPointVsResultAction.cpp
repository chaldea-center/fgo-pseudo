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

  if ( (byte_40FAC7F & 1) == 0 )
  {
    sub_B16FFC(&EventPointVsResultAction_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16782/*"bit_vs_result_"*/, v8);
    byte_40FAC7F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventPointVsResultAction_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_16782/*"bit_vs_result_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16782/*"bit_vs_result_"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventPointVsResultAction___ctor(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPointVsResultAction__Awake(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct CStateManager_EventPointVsResultAction__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct CStateManager_EventPointVsResultAction__o *mFSM; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  EventPointVsResultAction_StateNone_o *v27; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  EventPointVsResultAction_StatePlay_o *v33; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  EventPointVsResultAction_StateTouchWait_o *v39; // x21
  const MethodInfo *v40; // x2
  UnityEngine_Object_o *particleObj; // x21
  UnityEngine_Object_o *particlePrefab; // x21
  struct UnityEngine_GameObject_o *v43; // x21
  UnityEngine_GameObject_o *v44; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FAC77 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_EventPointVsResultAction___ctor__, method);
    sub_B16FFC(&Method_CStateManager_EventPointVsResultAction__add__, v6);
    sub_B16FFC(&CStateManager_EventPointVsResultAction__TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&EventPointVsResultAction_StateNone_TypeInfo, v11);
    sub_B16FFC(&EventPointVsResultAction_StatePlay_TypeInfo, v12);
    sub_B16FFC(&EventPointVsResultAction_StateTouchWait_TypeInfo, v13);
    byte_40FAC77 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v15 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_EventPointVsResultAction__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v15,
      (QAASpotStateController_IMapSpot_o *)this,
      3,
      (const MethodInfo_2907EF0 *)Method_CStateManager_EventPointVsResultAction___ctor__);
    this->fields.mFSM = (struct CStateManager_EventPointVsResultAction__o *)v15;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    mFSM = this->fields.mFSM;
    v27 = (EventPointVsResultAction_StateNone_o *)sub_B170CC(
                                                    EventPointVsResultAction_StateNone_TypeInfo,
                                                    v23,
                                                    v24,
                                                    v25,
                                                    v26);
    EventPointVsResultAction_StateNone___ctor(v27, 0LL);
    if ( !mFSM )
      goto LABEL_24;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v27,
      (const MethodInfo_2907FBC *)Method_CStateManager_EventPointVsResultAction__add__);
    v28 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v33 = (EventPointVsResultAction_StatePlay_o *)sub_B170CC(
                                                    EventPointVsResultAction_StatePlay_TypeInfo,
                                                    v29,
                                                    v30,
                                                    v31,
                                                    v32);
    EventPointVsResultAction_StatePlay___ctor(v33, 0LL);
    if ( !v28 )
      goto LABEL_24;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v28,
      1,
      (IState_T__o *)v33,
      (const MethodInfo_2907FBC *)Method_CStateManager_EventPointVsResultAction__add__);
    v34 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v39 = (EventPointVsResultAction_StateTouchWait_o *)sub_B170CC(
                                                         EventPointVsResultAction_StateTouchWait_TypeInfo,
                                                         v35,
                                                         v36,
                                                         v37,
                                                         v38);
    EventPointVsResultAction_StateTouchWait___ctor(v39, 0LL);
    if ( !v34 )
      goto LABEL_24;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v34,
      2,
      (IState_T__o *)v39,
      (const MethodInfo_2907FBC *)Method_CStateManager_EventPointVsResultAction__add__);
    EventPointVsResultAction__SetState(this, 0, v40);
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
      v43 = this->fields.particlePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v44 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)v43,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v44, 0LL, 0LL) )
      {
        GameObjectExtensions__SafeSetParent(v44, (UnityEngine_Component_o *)this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        GameObjectExtensions__SetLocalPosition(v44, zero, 0LL);
        if ( v44 )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v44,
                                                        (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIUnityRenderer___);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, 0, 0LL);
            this->fields.particleObj = v44;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.particleObj,
              (System_Int32_array **)v44,
              v46,
              v47,
              v48,
              v49,
              v50,
              v51);
            return;
          }
        }
LABEL_24:
        sub_B170D4();
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
  struct CStateManager_EventPointVsResultAction__o *mFSM; // x8

  if ( (byte_40FAC7D & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_EventPointVsResultAction__getState__, method);
    byte_40FAC7D = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
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
  int32_t v8; // w25
  System_Int32_array **v9; // x27
  System_Int32_array *v10; // x21
  int32_t v11; // w28
  __int64 v13; // x9
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
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
  System_Int32_array ***v30; // x24
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
  __int64 v44; // x0
  __int64 v45; // x8
  struct UIStandFigureR_array *SvtComponents; // x10
  System_Int32_array **v47; // x9
  char *v48; // x11
  int32_t v49; // w19
  UIStandFigureR_o *v50; // x21
  int v51; // w23
  System_Action_o *v52; // x22

  v8 = winType;
  v9 = (System_Int32_array **)faces;
  v10 = servants;
  v11 = cnt;
  while ( 1 )
  {
    if ( (byte_40FAC7C & 1) == 0 )
    {
      sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&cnt);
      sub_B16FFC(&Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__, v14);
      sub_B16FFC(&EventPointVsResultAction___c__DisplayClass23_0_TypeInfo, v15);
      byte_40FAC7C = 1;
    }
    v16 = sub_B170CC(
            EventPointVsResultAction___c__DisplayClass23_0_TypeInfo,
            *(_QWORD *)&cnt,
            servants,
            faces,
            *(_QWORD *)&winType);
    EventPointVsResultAction___c__DisplayClass23_0___ctor((EventPointVsResultAction___c__DisplayClass23_0_o *)v16, 0LL);
    if ( !v16 )
      goto LABEL_19;
    *(_QWORD *)(v16 + 16) = this;
    sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
    *(_DWORD *)(v16 + 24) = v11;
    *(_QWORD *)(v16 + 32) = v10;
    v23 = (System_Int32_array **)(v16 + 32);
    sub_B16F98((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)v10, v24, v25, v26, v27, v28, v29);
    *(_QWORD *)(v16 + 40) = v9;
    v30 = (System_Int32_array ***)(v16 + 40);
    sub_B16F98((BattleServantConfConponent_o *)(v16 + 40), v9, v31, v32, v33, v34, v35, v36);
    *(_QWORD *)(v16 + 56) = callBack;
    v37 = (System_Action_o **)(v16 + 56);
    *(_DWORD *)(v16 + 48) = v8;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v16 + 56),
      (System_Int32_array **)callBack,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    v45 = *(int *)(v16 + 24);
    if ( (int)v45 > 2 )
      goto LABEL_11;
    v10 = *v23;
    if ( !*v23 )
      goto LABEL_19;
    v13 = *(_QWORD *)&v10->max_length;
    if ( (int)v45 >= (int)v13 )
    {
LABEL_11:
      ActionExtensions__Call(*v37, 0LL);
      return;
    }
    v8 = *(_DWORD *)(v16 + 48);
    if ( v8 == 3 )
      break;
    v11 = v45 + 1;
    if ( (_DWORD)v45 + 1 == v8 )
      break;
    v9 = *v30;
    callBack = *v37;
  }
  SvtComponents = this->fields.SvtComponents;
  if ( !SvtComponents )
    goto LABEL_19;
  if ( (unsigned int)v45 >= SvtComponents->max_length || (unsigned int)v45 >= (unsigned int)v13 )
    goto LABEL_20;
  v47 = *v30;
  if ( !*v30 )
    goto LABEL_19;
  if ( (unsigned int)v45 >= *((_DWORD *)v47 + 6) )
  {
LABEL_20:
    sub_B17100(v44, *(_QWORD *)&cnt, servants);
    sub_B170A0();
  }
  v48 = (char *)v10 + 4 * v45;
  v49 = *((_DWORD *)v47 + v45 + 8);
  v50 = SvtComponents->m_Items[v45];
  v51 = *((_DWORD *)v48 + 8);
  v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, *(_QWORD *)&cnt, servants, faces, *(_QWORD *)&winType);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v16,
    Method_EventPointVsResultAction___c__DisplayClass23_0__LoadSvts_b__0__,
    0LL);
  if ( !v50 )
LABEL_19:
    sub_B170D4();
  UIStandFigureR__SetCharacter_40881948(v50, v51 / 10, v51 % 10, 0, v49, v52, 0LL);
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
  UnityEngine_Object_o *mSimpleAnimation; // x21
  struct SimpleAnimation_o *v25; // x21
  UnityEngine_Object_o *monitor; // x0
  System_String_o *name; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v30; // x21
  unsigned __int64 v31; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *mAnimation; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  UnityEngine_Animation_o *v39; // x21
  UnityEngine_Object_o *clip; // x0
  System_String_o *v41; // x0
  UnityEngine_AnimationState_o *v42; // x0
  AvalonSceneManager_c *v43; // x0
  System_Action_o *v44; // x21

  if ( (byte_40FAC7B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, end_act);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v13);
    sub_B16FFC(&Method_EventPointVsResultAction__Play_b__22_0__, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v16);
    byte_40FAC7B = 1;
  }
  this->fields.mEndAct = end_act;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mEndAct,
    (System_Int32_array **)end_act,
    (System_String_array **)maskFade,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.localMask = maskFade;
  sub_B16F98(
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
  if ( UnityEngine_Object__op_Inequality(mSimpleAnimation, 0LL, 0LL) )
  {
    v25 = this->fields.mSimpleAnimation;
    if ( !v25 )
      goto LABEL_33;
    monitor = (UnityEngine_Object_o *)v25[1].monitor;
    if ( !monitor )
      goto LABEL_33;
    name = UnityEngine_Object__get_name(monitor, 0LL);
    Item = SimpleAnimation__get_Item(v25, name, 0LL);
    if ( !Item )
      goto LABEL_33;
    klass = Item->klass;
    v30 = Item;
    if ( *(_WORD *)&Item->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v31;
        p_offset += 2;
        if ( v31 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
    }
    else
    {
LABEL_15:
      p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v30, *(_QWORD *)(p_method + 8), 0.0);
  }
  else
  {
    mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
    {
      v39 = this->fields.mAnimation;
      if ( !v39 )
        goto LABEL_33;
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
      if ( !clip )
        goto LABEL_33;
      v41 = UnityEngine_Object__get_name(clip, 0LL);
      v42 = UnityEngine_Animation__get_Item(v39, v41, 0LL);
      if ( !v42 )
        goto LABEL_33;
      UnityEngine_AnimationState__set_speed(v42, 0.0, 0LL);
    }
  }
  if ( fade_in_time <= 0.0 )
  {
    v43 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v43 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v43->static_fields->DEFAULT_FADE_TIME;
  }
  v44 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v35, v36, v37, v38);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_EventPointVsResultAction__Play_b__22_0__, 0LL);
  if ( !maskFade )
LABEL_33:
    sub_B170D4();
  MaskFade__Fadein(maskFade, fade_in_time, v44, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointVsResultAction__SetState(
        EventPointVsResultAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_EventPointVsResultAction__o *mFSM; // x0

  if ( (byte_40FAC7E & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_EventPointVsResultAction__setState__, *(_QWORD *)&state);
    byte_40FAC7E = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_EventPointVsResultAction__setState__);
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
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct EventPointVsResultAction_servants_array *resultSvts; // x8
  int v30; // w9
  EventPointVsResultAction_servants_o *v31; // x8
  System_Int32_array *servIds; // x22
  Face_Type_array *FaceIds; // x23
  System_Action_o *v34; // x24
  const MethodInfo *v35; // x6

  if ( (byte_40FAC79 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&winType);
    sub_B16FFC(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__, v9);
    sub_B16FFC(&EventPointVsResultAction___c__DisplayClass19_0_TypeInfo, v10);
    byte_40FAC79 = 1;
  }
  v11 = sub_B170CC(
          EventPointVsResultAction___c__DisplayClass19_0_TypeInfo,
          *(_QWORD *)&winType,
          *(_QWORD *)&resultNo,
          callBack,
          method);
  EventPointVsResultAction___c__DisplayClass19_0___ctor((EventPointVsResultAction___c__DisplayClass19_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 32) = callBack;
  *(_DWORD *)(v11 + 24) = resultNo;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)callBack, v18, v19, v20, v21, v22, v23);
  resultSvts = this->fields.resultSvts;
  this->fields.winType = winType;
  if ( !resultSvts )
    goto LABEL_8;
  v30 = *(_DWORD *)(v11 + 24) - 1;
  if ( v30 >= resultSvts->max_length )
  {
    sub_B17100(v24, v25, v26);
    sub_B170A0();
  }
  v31 = resultSvts->m_Items[v30];
  if ( !v31 )
LABEL_8:
    sub_B170D4();
  servIds = v31->fields.servIds;
  FaceIds = v31->fields.FaceIds;
  v34 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v11,
    Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__0__,
    0LL);
  EventPointVsResultAction__LoadSvts(this, 0, servIds, FaceIds, winType, v34, v35);
}


void __fastcall EventPointVsResultAction__Update(EventPointVsResultAction_o *this, const MethodInfo *method)
{
  struct CStateManager_EventPointVsResultAction__o *mFSM; // x0

  if ( (byte_40FAC78 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_EventPointVsResultAction__update__, method);
    byte_40FAC78 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_EventPointVsResultAction__update__);
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
  struct SimpleAnimation_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Component_o *v19; // x0
  struct UnityEngine_Animation_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Component_o *v27; // x0
  UIWidget_o *v28; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *mScreenTouchInfo; // x22
  CommonUI_o *Instance; // x22
  UnityEngine_Transform_o *v32; // x0
  UnityEngine_GameObject_o *ScreeenTouchInfo; // x0
  struct ScreenTouchInformationComponent_o *Component_srcLineSprite; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  EventPointVsResultAction_c *v41; // x0
  System_String_o *ANIMATION_NAME; // x21
  System_String_o *v43; // x0
  struct System_String_o *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UnityEngine_Component_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  int32_t winType; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FAC7A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, callBack);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v5);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v6);
    sub_B16FFC(&EventPointVsResultAction_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_40FAC7A = 1;
  }
  winType = 0;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_21;
  ComponentInChildren_UIWidget = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                               transform,
                                                               (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  this->fields.mSimpleAnimation = ComponentInChildren_UIWidget;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mSimpleAnimation,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v19 )
    goto LABEL_21;
  v20 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                            v19,
                                            (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  this->fields.mAnimation = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v27 )
    goto LABEL_21;
  v28 = UnityEngine_Component__GetComponentInChildren_UIWidget_(
          v27,
          (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !v28 )
    goto LABEL_21;
  *(&v28->fields.mAnchorsCached + 5) = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  mScreenTouchInfo = (UnityEngine_Object_o *)this->fields.mScreenTouchInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mScreenTouchInfo, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v32 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_21;
    ScreeenTouchInfo = CommonUI__CreateScreeenTouchInfo(Instance, v32, 0, 0LL);
    if ( !ScreeenTouchInfo )
      goto LABEL_21;
    Component_srcLineSprite = (struct ScreenTouchInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                            ScreeenTouchInfo,
                                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    this->fields.mScreenTouchInfo = Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mScreenTouchInfo,
      (System_Int32_array **)Component_srcLineSprite,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  v41 = EventPointVsResultAction_TypeInfo;
  if ( (BYTE3(EventPointVsResultAction_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventPointVsResultAction_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointVsResultAction_TypeInfo);
    v41 = EventPointVsResultAction_TypeInfo;
  }
  ANIMATION_NAME = v41->static_fields->ANIMATION_NAME;
  winType = this->fields.winType;
  v43 = System_Int32__ToString((int32_t)&winType, 0LL);
  v44 = System_String__Concat_43743732(ANIMATION_NAME, v43, 0LL);
  this->fields.animationName = v44;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.animationName,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = (UnityEngine_Component_o *)this->fields.mScreenTouchInfo;
  if ( !v51 || (v52 = UnityEngine_Component__get_gameObject(v51, 0LL)) == 0LL )
LABEL_21:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v52, 0, 0LL);
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
  __int64 v5; // x1
  UnityEngine_Object_o *mSimpleAnimation; // x21
  SimpleAnimation_o *v7; // x0
  SimpleAnimation_o *v8; // x0
  struct SimpleAnimation_State_o *v9; // x0
  BattleServantConfConponent_o *p_fields; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BattleServantConfConponent_c *klass; // x21
  _QWORD *image; // x8
  SimpleAnimation_o *v19; // x20
  unsigned __int64 v20; // x10
  SimpleAnimation_State_c **v21; // x11
  __int64 v22; // x0
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Animation_o *v24; // x0
  UnityEngine_Animation_o *v25; // x0
  struct UnityEngine_AnimationState_o *Item; // x0
  struct UnityEngine_AnimationState_o **p_mAnimState; // x19
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Animation_o *v34; // x20
  UnityEngine_AnimationClip_o *clip; // x0
  UnityEngine_AnimationClip_o *v36; // x0
  BattleServantConfConponent_c *v37; // x20
  _QWORD *v38; // x8
  unsigned __int64 v39; // x10
  SimpleAnimation_State_c **v40; // x11
  __int64 v41; // x0
  BattleServantConfConponent_c *v42; // x19
  _QWORD *v43; // x8
  unsigned __int64 v44; // x10
  SimpleAnimation_State_c **v45; // x11
  __int64 v46; // x0

  if ( (byte_40F7018 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v5);
    byte_40F7018 = 1;
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
    v24 = that->fields.mAnimation;
    if ( v24 )
    {
      UnityEngine_Animation__Play_49744236(v24, that->fields.animationName, 0LL);
      v25 = that->fields.mAnimation;
      if ( v25 )
      {
        Item = UnityEngine_Animation__get_Item(v25, that->fields.animationName, 0LL);
        this->fields.mAnimState = Item;
        p_mAnimState = &this->fields.mAnimState;
        sub_B16F98(
          (BattleServantConfConponent_o *)p_mAnimState,
          (System_Int32_array **)Item,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        if ( *p_mAnimState )
        {
          v34 = that->fields.mAnimation;
          clip = UnityEngine_AnimationState__get_clip(*p_mAnimState, 0LL);
          if ( v34 )
          {
            UnityEngine_Animation__set_clip(v34, clip, 0LL);
            if ( *p_mAnimState )
            {
              UnityEngine_AnimationState__set_normalizedTime(*p_mAnimState, 0.0, 0LL);
              if ( *p_mAnimState )
              {
                UnityEngine_AnimationState__set_speed(*p_mAnimState, 1.0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_45:
    sub_B170D4();
  }
  v7 = that->fields.mSimpleAnimation;
  if ( !v7 )
    goto LABEL_45;
  SimpleAnimation__Play_16380456(v7, that->fields.animationName, 0LL);
  v8 = that->fields.mSimpleAnimation;
  if ( !v8 )
    goto LABEL_45;
  v9 = SimpleAnimation__get_Item(v8, that->fields.animationName, 0LL);
  this->fields.mSimpleAnimState = v9;
  p_fields = (BattleServantConfConponent_o *)&this->fields;
  sub_B16F98(p_fields, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
  klass = p_fields->klass;
  if ( !p_fields->klass )
    goto LABEL_45;
  image = klass->_1.image;
  v19 = that->fields.mSimpleAnimation;
  if ( *((_WORD *)klass->_1.image + 149) )
  {
    v20 = 0LL;
    v21 = (SimpleAnimation_State_c **)(image[22] + 8LL);
    while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v20;
      v21 += 2;
      if ( v20 >= *((unsigned __int16 *)klass->_1.image + 149) )
        goto LABEL_15;
    }
    v22 = (__int64)&image[2 * *(_DWORD *)v21 + 67];
  }
  else
  {
LABEL_15:
    v22 = sub_AAFEF8(p_fields->klass, SimpleAnimation_State_TypeInfo, 14LL);
  }
  v36 = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD))v22)(
                                         klass,
                                         *(_QWORD *)(v22 + 8));
  if ( !v19 )
    goto LABEL_45;
  SimpleAnimation__set_clip(v19, v36, 0LL);
  v37 = p_fields->klass;
  if ( !p_fields->klass )
    goto LABEL_45;
  v38 = v37->_1.image;
  if ( *((_WORD *)v37->_1.image + 149) )
  {
    v39 = 0LL;
    v40 = (SimpleAnimation_State_c **)(v38[22] + 8LL);
    while ( *(v40 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v39;
      v40 += 2;
      if ( v39 >= *((unsigned __int16 *)v37->_1.image + 149) )
        goto LABEL_35;
    }
    v41 = (__int64)&v38[2 * *(_DWORD *)v40 + 51];
  }
  else
  {
LABEL_35:
    v41 = sub_AAFEF8(p_fields->klass, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(BattleServantConfConponent_c *, _QWORD, float))v41)(v37, *(_QWORD *)(v41 + 8), 0.0);
  v42 = p_fields->klass;
  if ( !v42 )
    goto LABEL_45;
  v43 = v42->_1.image;
  if ( *((_WORD *)v42->_1.image + 149) )
  {
    v44 = 0LL;
    v45 = (SimpleAnimation_State_c **)(v43[22] + 8LL);
    while ( *(v45 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v44;
      v45 += 2;
      if ( v44 >= *((unsigned __int16 *)v42->_1.image + 149) )
        goto LABEL_42;
    }
    v46 = (__int64)&v43[2 * *(_DWORD *)v45 + 55];
  }
  else
  {
LABEL_42:
    v46 = sub_AAFEF8(v42, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(BattleServantConfConponent_c *, _QWORD, float))v46)(v42, *(_QWORD *)(v46 + 8), 1.0);
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
  UnityEngine_AnimationState_o *mAnimState; // x0
  float time; // s0
  UnityEngine_AnimationState_o *v12; // x0
  float v13; // s8
  UnityEngine_AnimationClip_o *clip; // x0
  float v15; // s0
  struct SimpleAnimation_State_o *v16; // x20
  SimpleAnimation_State_c *v17; // x8
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **v19; // x11
  __int64 v20; // x0
  struct MaskFade_o *localMask; // x8

  if ( (byte_40F7019 & 1) == 0 )
  {
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, that);
    byte_40F7019 = 1;
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
      p_method = sub_AAFEF8(this->fields.mSimpleAnimState, SimpleAnimation_State_TypeInfo, 3LL);
    }
    (*(void (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))p_method)(
      mSimpleAnimState,
      *(_QWORD *)(p_method + 8));
    v16 = this->fields.mSimpleAnimState;
    if ( !v16 )
      goto LABEL_29;
    v17 = v16->klass;
    v13 = v15;
    if ( *(_WORD *)&v16->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = (SimpleAnimation_State_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v18;
        v19 += 2;
        if ( v18 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 14].method;
    }
    else
    {
LABEL_20:
      v20 = sub_AAFEF8(v16, SimpleAnimation_State_TypeInfo, 14LL);
    }
    clip = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(struct SimpleAnimation_State_o *, _QWORD))v20)(
                                            v16,
                                            *(_QWORD *)(v20 + 8));
    if ( !clip )
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
    v12 = this->fields.mAnimState;
    if ( !v12 )
      goto LABEL_29;
    v13 = time;
    clip = UnityEngine_AnimationState__get_clip(v12, 0LL);
    if ( !clip )
      goto LABEL_29;
  }
  if ( v13 < UnityEngine_AnimationClip__get_length(clip, 0LL) )
    return;
  if ( !that || (localMask = that->fields.localMask) == 0LL )
LABEL_29:
    sub_B170D4();
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
  UnityEngine_Component_o *mScreenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !that
    || (mScreenTouchInfo = (UnityEngine_Component_o *)that->fields.mScreenTouchInfo) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(mScreenTouchInfo, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  EventPointVsResultAction_o **v18; // x19
  UnityEngine_Component_o *mScreenTouchInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  MaskFade_o *localMask; // x21
  AvalonSceneManager_c *v26; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x22

  if ( (byte_40F701A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v6);
    sub_B16FFC(&CTouch_TypeInfo, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v9);
    sub_B16FFC(&EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v10);
    byte_40F701A = 1;
  }
  v11 = sub_B170CC(EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method, v3, v4);
  EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0___ctor(
    (EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 16) = that;
  v18 = (EventPointVsResultAction_o **)(v11 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)that, v12, v13, v14, v15, v16, v17);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__isTouchPush(0LL) )
  {
    if ( *v18 )
    {
      mScreenTouchInfo = (UnityEngine_Component_o *)(*v18)->fields.mScreenTouchInfo;
      if ( mScreenTouchInfo )
      {
        gameObject = UnityEngine_Component__get_gameObject(mScreenTouchInfo, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          if ( *v18 )
          {
            localMask = (*v18)->fields.localMask;
            v26 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v26 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
            v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24);
            System_Action___ctor(
              v28,
              (Il2CppObject *)v11,
              Method_EventPointVsResultAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
              0LL);
            if ( localMask )
            {
              MaskFade__Fadeout(localMask, 1, DEFAULT_FADE_TIME, v28, 0LL);
              if ( *v18 )
              {
                EventPointVsResultAction__SetState(*v18, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_22:
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct EventPointVsResultAction_o *_4__this; // x8
  struct System_Int32_array *bgs; // x9
  int v9; // w10
  ExUITexture_o *mBg; // x20
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *_9__1; // x22
  System_String_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  EventPointVsResultAction_o *v25; // x0
  int32_t v26; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_40F7017 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v4);
    sub_B16FFC(&Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__, v5);
    this = (EventPointVsResultAction___c__DisplayClass19_0_o *)sub_B16FFC(&StringLiteral_2643/*"Back/back{0}"*/, v6);
    byte_40F7017 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  bgs = _4__this->fields.bgs;
  if ( !bgs )
    goto LABEL_13;
  v9 = v3->fields.resultNo - 1;
  if ( v9 >= bgs->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  mBg = _4__this->fields.mBg;
  v26 = bgs->m_Items[v9 + 1];
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  v12 = System_String__Format((System_String_o *)StringLiteral_2643/*"Back/back{0}"*/, v11, 0LL);
  _9__1 = v3->fields.__9__1;
  v18 = v12;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_EventPointVsResultAction___c__DisplayClass19_0__Setup_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v3->fields.__9__1,
      (System_Int32_array **)_9__1,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !mBg )
    goto LABEL_13;
  if ( ExUITexture__SetAssetImage(mBg, v18, _9__1, 0LL) )
    return;
  v25 = v3->fields.__4__this;
  if ( !v25 )
LABEL_13:
    sub_B170D4();
  EventPointVsResultAction__setupLocal(v25, v3->fields.callBack, 0LL);
}


void __fastcall EventPointVsResultAction___c__DisplayClass19_0___Setup_b__1(
        EventPointVsResultAction___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventPointVsResultAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
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
    sub_B170D4();
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