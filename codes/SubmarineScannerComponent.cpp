void __fastcall SubmarineScannerComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_Int32_array **v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  int v10; // w8
  System_Int32_array **v11; // x1
  struct SubmarineScannerComponent_StaticFields *static_fields; // x0
  __int64 v13; // x0

  if ( (byte_421367B & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, v1);
    sub_B0D8A4(&SubmarineScannerComponent_TypeInfo, v2);
    byte_421367B = 1;
  }
  SubmarineScannerComponent_TypeInfo->static_fields->DEFAULT_JUMP_DURATION = 1.0;
  SubmarineScannerComponent_TypeInfo->static_fields->DEFAULT_JUMP_START_TIME = 0.5;
  SubmarineScannerComponent_TypeInfo->static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME = 1.5;
  v3 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v3 )
    sub_B0D97C(0LL);
  v10 = *((_DWORD *)v3 + 6);
  v11 = v3;
  if ( !v10 || (*((_DWORD *)v3 + 8) = 246, v10 == 1) )
  {
    v13 = sub_B0D9A8(v3);
    sub_B0D948(v13, 0LL);
  }
  *((_DWORD *)v3 + 9) = 492;
  static_fields = SubmarineScannerComponent_TypeInfo->static_fields;
  static_fields->ANIM_CHANGE_DIST_BORDERS = (struct System_Int32_array *)v11;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->ANIM_CHANGE_DIST_BORDERS, v11, v4, v5, v6, v7, v8, v9);
}


void __fastcall SubmarineScannerComponent___ctor(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SubmarineScannerComponent__FinishEffectSelectedPanel(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall SubmarineScannerComponent__GetDistIndex(
        SubmarineScannerComponent_o *this,
        float dist,
        const MethodInfo *method)
{
  SubmarineScannerComponent_c *v4; // x0
  struct System_Int32_array *ANIM_CHANGE_DIST_BORDERS; // x8
  il2cpp_array_size_t max_length; // w8
  int32_t v7; // w19
  __int64 v8; // x21
  struct System_Int32_array *v9; // x8
  int v10; // s0
  __int64 v12; // x0

  if ( (byte_4213675 & 1) == 0 )
  {
    sub_B0D8A4(&SubmarineScannerComponent_TypeInfo, method);
    byte_4213675 = 1;
  }
  v4 = SubmarineScannerComponent_TypeInfo;
  if ( (BYTE3(SubmarineScannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v4 = SubmarineScannerComponent_TypeInfo;
  }
  ANIM_CHANGE_DIST_BORDERS = v4->static_fields->ANIM_CHANGE_DIST_BORDERS;
  if ( !ANIM_CHANGE_DIST_BORDERS )
LABEL_18:
    sub_B0D97C(v4);
  max_length = ANIM_CHANGE_DIST_BORDERS->max_length;
  v7 = max_length + 2;
  v8 = 4LL * (int)(max_length - 1) + 32;
  while ( v7 - 3 >= 0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = SubmarineScannerComponent_TypeInfo;
    }
    v9 = v4->static_fields->ANIM_CHANGE_DIST_BORDERS;
    if ( !v9 )
      goto LABEL_18;
    if ( v7 - 3 >= v9->max_length )
    {
      v12 = sub_B0D9A8(v4);
      sub_B0D948(v12, 0LL);
    }
    v10 = *(_DWORD *)((char *)&v9->obj.klass + v8);
    --v7;
    v8 -= 4LL;
    if ( (float)v10 < dist )
      return v7;
  }
  return 1;
}


float __fastcall SubmarineScannerComponent__GetEventTimeByFunctionName(
        SubmarineScannerComponent_o *this,
        System_String_o *funcName,
        float defaultValue,
        const MethodInfo *method)
{
  struct SimpleAnimation_EditorState_o *state; // x8
  UnityEngine_Object_o *clip; // x21
  UnityEngine_AnimationClip_o *events; // x0
  struct SimpleAnimation_EditorState_o *v10; // x8
  int klass; // w8
  UnityEngine_AnimationClip_o *v12; // x20
  unsigned int v13; // w22
  UnityEngine_AnimationClip_c **v14; // x8
  UnityEngine_AnimationEvent_o *v15; // x21
  System_String_o *functionName; // x0
  __int64 v18; // x0

  if ( (byte_421367A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, funcName);
    byte_421367A = 1;
  }
  state = this->fields.state;
  if ( state )
    clip = (UnityEngine_Object_o *)state->fields.clip;
  else
    clip = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  events = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Equality(clip, 0LL, 0LL);
  if ( ((unsigned __int8)events & 1) != 0 )
    return defaultValue;
  v10 = this->fields.state;
  if ( !v10
    || (events = v10->fields.clip) == 0LL
    || (events = (UnityEngine_AnimationClip_o *)UnityEngine_AnimationClip__get_events(events, 0LL)) == 0LL )
  {
LABEL_21:
    sub_B0D97C(events);
  }
  klass = (int)events[1].klass;
  v12 = events;
  if ( klass < 1 )
    return defaultValue;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= klass )
    {
      v18 = sub_B0D9A8(events);
      sub_B0D948(v18, 0LL);
    }
    v14 = &v12->klass + (int)v13;
    v15 = (UnityEngine_AnimationEvent_o *)v14[4];
    if ( !v15 )
      goto LABEL_21;
    functionName = UnityEngine_AnimationEvent__get_functionName((UnityEngine_AnimationEvent_o *)v14[4], 0LL);
    events = (UnityEngine_AnimationClip_o *)System_String__op_Equality(functionName, funcName, 0LL);
    if ( ((unsigned __int8)events & 1) != 0 )
      return UnityEngine_AnimationEvent__get_time(v15, 0LL);
    klass = (int)v12[1].klass;
    if ( (int)++v13 >= klass )
      return defaultValue;
  }
}


float __fastcall SubmarineScannerComponent__GetJumpDuration(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  float EventTimeByFunctionName; // s0
  const MethodInfo *v7; // x2
  float result; // s0
  SubmarineScannerComponent_c *v9; // x0

  if ( (byte_4213676 & 1) == 0 )
  {
    sub_B0D8A4(&SubmarineScannerComponent_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10037/*"OnJumpEnd"*/, v4);
    sub_B0D8A4(&StringLiteral_10038/*"OnJumpStart"*/, v5);
    byte_4213676 = 1;
  }
  EventTimeByFunctionName = SubmarineScannerComponent__GetEventTimeByFunctionName(
                              this,
                              (System_String_o *)StringLiteral_10038/*"OnJumpStart"*/,
                              0.0,
                              v2);
  result = SubmarineScannerComponent__GetEventTimeByFunctionName(this, (System_String_o *)StringLiteral_10037/*"OnJumpEnd"*/, 0.0, v7)
         - EventTimeByFunctionName;
  if ( result <= 0.0 )
  {
    v9 = SubmarineScannerComponent_TypeInfo;
    if ( (BYTE3(SubmarineScannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
      v9 = SubmarineScannerComponent_TypeInfo;
    }
    return v9->static_fields->DEFAULT_JUMP_DURATION;
  }
  return result;
}


float __fastcall SubmarineScannerComponent__GetJumpStartTime(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  SubmarineScannerComponent_c *v5; // x0

  if ( (byte_4213677 & 1) == 0 )
  {
    sub_B0D8A4(&SubmarineScannerComponent_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10038/*"OnJumpStart"*/, v4);
    byte_4213677 = 1;
  }
  v5 = SubmarineScannerComponent_TypeInfo;
  if ( (BYTE3(SubmarineScannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v5 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_10038/*"OnJumpStart"*/,
           v5->static_fields->DEFAULT_JUMP_START_TIME,
           v2);
}


float __fastcall SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  SubmarineScannerComponent_c *v5; // x0

  if ( (byte_4213678 & 1) == 0 )
  {
    sub_B0D8A4(&SubmarineScannerComponent_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_6693/*"FinishEffectSelectedPanel"*/, v4);
    byte_4213678 = 1;
  }
  v5 = SubmarineScannerComponent_TypeInfo;
  if ( (BYTE3(SubmarineScannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v5 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_6693/*"FinishEffectSelectedPanel"*/,
           v5->static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME,
           v2);
}


float __fastcall SubmarineScannerComponent__GetTimeToStartOpenPanel(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct SimpleAnimation_EditorState_o *state; // x8
  UnityEngine_Object_o *clip; // x20
  UnityEngine_AnimationClip_o *v6; // x0
  struct SimpleAnimation_EditorState_o *v8; // x8
  float length; // s0
  const MethodInfo *v10; // x2

  if ( (byte_4213679 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_13091/*"StartOpenPanel"*/, v3);
    byte_4213679 = 1;
  }
  state = this->fields.state;
  if ( state )
    clip = (UnityEngine_Object_o *)state->fields.clip;
  else
    clip = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Equality(clip, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
    return 0.0;
  v8 = this->fields.state;
  if ( !v8 || (v6 = v8->fields.clip) == 0LL )
    sub_B0D97C(v6);
  length = UnityEngine_AnimationClip__get_length(v6, 0LL);
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_13091/*"StartOpenPanel"*/,
           length,
           v10);
}


bool __fastcall SubmarineScannerComponent__IsAnimationPrepared(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.state != 0LL;
}


void __fastcall SubmarineScannerComponent__OnJumpEnd(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SubmarineScannerComponent__OnJumpStart(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SubmarineScannerComponent__OnStartScan(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SubmarineScannerComponent__PrepareAnimation(
        SubmarineScannerComponent_o *this,
        float dist,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Text_RegularExpressions_Group_o *AnimationComponent; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  void *monitor; // x25
  System_Text_RegularExpressions_Regex_o *v16; // x21
  SubmarineScannerComponent_o *v17; // x0
  const MethodInfo *v18; // x1
  int32_t DistIndex; // w22
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x8
  __int64 v30; // x26
  __int64 v31; // x23
  System_Text_RegularExpressions_Group_o *v32; // x24
  System_String_o *Value; // x0
  int32_t size; // w1
  int32_t v35; // w21
  struct SimpleAnimation_EditorState_o *v36; // x1
  __int64 v37; // x0
  SubmarineScannerComponent_o *v38; // [xsp+8h] [xbp-58h]

  if ( (byte_4213674 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo, v8);
    sub_B0D8A4(&System_Text_RegularExpressions_Regex_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_5347/*"DistIndex"*/, v10);
    sub_B0D8A4(&StringLiteral_12640/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, v11);
    byte_4213674 = 1;
  }
  AnimationComponent = (System_Text_RegularExpressions_Group_o *)SubmarineScannerComponent__get_AnimationComponent(
                                                                   this,
                                                                   method);
  if ( !AnimationComponent )
    goto LABEL_29;
  monitor = AnimationComponent[2].monitor;
  if ( !monitor )
    goto LABEL_29;
  if ( !*((_QWORD *)monitor + 3) )
    return;
  v16 = (System_Text_RegularExpressions_Regex_o *)sub_B0D974(System_Text_RegularExpressions_Regex_TypeInfo, v13, v14);
  System_Text_RegularExpressions_Regex___ctor_47931116(v16, (System_String_o *)StringLiteral_12640/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, 0LL);
  DistIndex = SubmarineScannerComponent__GetDistIndex(v17, dist, v18);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__);
  LODWORD(v29) = *((_DWORD *)monitor + 6);
  if ( (int)v29 >= 1 )
  {
    v38 = this;
    v30 = 0LL;
    do
    {
      if ( (unsigned int)v30 >= (unsigned int)v29 )
        goto LABEL_30;
      v31 = *((_QWORD *)monitor + v30 + 4);
      if ( !v31 )
        goto LABEL_29;
      if ( !v16 )
        goto LABEL_29;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Regex__Match_47938780(
                                                                       v16,
                                                                       *(System_String_o **)(v31 + 24),
                                                                       0LL);
      if ( !AnimationComponent )
        goto LABEL_29;
      v32 = AnimationComponent;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                       AnimationComponent,
                                                                       0LL);
      if ( ((unsigned __int8)AnimationComponent & 1) != 0 )
      {
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, void *))v32->klass[1]._1.namespaze)(
                                                                         v32,
                                                                         v32->klass[1]._1.byval_arg.data);
        if ( !AnimationComponent )
          goto LABEL_29;
        AnimationComponent = System_Text_RegularExpressions_GroupCollection__get_Item_37056304(
                               (System_Text_RegularExpressions_GroupCollection_o *)AnimationComponent,
                               (System_String_o *)StringLiteral_5347/*"DistIndex"*/,
                               0LL);
        if ( !AnimationComponent )
          goto LABEL_29;
        Value = System_Text_RegularExpressions_Capture__get_Value(
                  (System_Text_RegularExpressions_Capture_o *)AnimationComponent,
                  0LL);
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Int32__Parse(Value, 0LL);
        if ( DistIndex == (_DWORD)AnimationComponent )
        {
          if ( !v22 )
            goto LABEL_29;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__);
        }
      }
      v29 = *((_QWORD *)monitor + 3);
      ++v30;
    }
    while ( (int)v30 < (int)v29 );
    this = v38;
  }
  if ( !v22 )
LABEL_29:
    sub_B0D97C(AnimationComponent);
  size = v22->fields._size;
  if ( size <= 0 )
  {
    if ( !(_DWORD)v29 )
    {
LABEL_30:
      v37 = sub_B0D9A8(AnimationComponent);
      sub_B0D948(v37, 0LL);
    }
    v36 = (struct SimpleAnimation_EditorState_o *)*((_QWORD *)monitor + 4);
  }
  else
  {
    v35 = UnityEngine_Random__Range_34969060(0, size, 0LL);
    if ( v22->fields._size <= (unsigned int)v35 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v36 = (struct SimpleAnimation_EditorState_o *)v22->fields._items->m_Items[v35];
  }
  this->fields.state = v36;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.state,
    (System_Int32_array **)v36,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}


void __fastcall SubmarineScannerComponent__StartOpenPanel(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_AnimationClip_o *__fastcall SubmarineScannerComponent__get_AnimClip(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  struct SimpleAnimation_EditorState_o *state; // x8

  state = this->fields.state;
  if ( state )
    return state->fields.clip;
  else
    return 0LL;
}


System_String_o *__fastcall SubmarineScannerComponent__get_AnimName(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  struct SimpleAnimation_EditorState_o *state; // x8
  System_String_o **p_name; // x8

  if ( (byte_4213673 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4213673 = 1;
  }
  state = this->fields.state;
  if ( state )
    p_name = &state->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_name;
}


SimpleAnimation_o *__fastcall SubmarineScannerComponent__get_AnimationComponent(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *mAnimation; // x21
  struct SimpleAnimation_o *Component_WebViewObject; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4213672 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4213672 = 1;
  }
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mAnimation, 0LL, 0LL) )
  {
    Component_WebViewObject = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    this->fields.mAnimation = Component_WebViewObject;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.mAnimation,
      (System_Int32_array **)Component_WebViewObject,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return this->fields.mAnimation;
}