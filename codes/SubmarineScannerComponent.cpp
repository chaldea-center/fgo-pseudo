void __fastcall SubmarineScannerComponent___cctor(const MethodInfo *method)
{
  System_Int32_array **v1; // x0
  __int64 v2; // x1
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  int v9; // w8
  System_Int32_array **v10; // x1
  struct SubmarineScannerComponent_StaticFields *static_fields; // x0
  __int64 v12; // x0

  if ( (byte_4350ECF & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&SubmarineScannerComponent_TypeInfo);
    byte_4350ECF = 1;
  }
  SubmarineScannerComponent_TypeInfo->static_fields->DEFAULT_JUMP_DURATION = 1.0;
  SubmarineScannerComponent_TypeInfo->static_fields->DEFAULT_JUMP_START_TIME = 0.5;
  SubmarineScannerComponent_TypeInfo->static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME = 1.5;
  v1 = (System_Int32_array **)sub_B706AC(int___TypeInfo, 2LL);
  if ( !v1 )
    sub_B7076C(0LL, v2);
  v9 = *((_DWORD *)v1 + 6);
  v10 = v1;
  if ( !v9 || (*((_DWORD *)v1 + 8) = 246, v9 == 1) )
  {
    v12 = sub_B70798(v1);
    sub_B70738(v12, 0LL);
  }
  *((_DWORD *)v1 + 9) = 492;
  static_fields = SubmarineScannerComponent_TypeInfo->static_fields;
  static_fields->ANIM_CHANGE_DIST_BORDERS = (struct System_Int32_array *)v10;
  sub_B70630((BattleServantConfConponent_o *)&static_fields->ANIM_CHANGE_DIST_BORDERS, v10, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4350EC9 & 1) == 0 )
  {
    sub_B70694(&SubmarineScannerComponent_TypeInfo);
    byte_4350EC9 = 1;
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
    sub_B7076C(v4, method);
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
      v12 = sub_B70798(v4);
      sub_B70738(v12, 0LL);
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
  __int64 v10; // x1
  struct SimpleAnimation_EditorState_o *v11; // x8
  int klass; // w8
  UnityEngine_AnimationClip_o *v13; // x20
  unsigned int v14; // w22
  UnityEngine_AnimationClip_c **v15; // x8
  UnityEngine_AnimationEvent_o *v16; // x21
  System_String_o *functionName; // x0
  __int64 v19; // x0

  if ( (byte_4350ECE & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350ECE = 1;
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
  v11 = this->fields.state;
  if ( !v11
    || (events = v11->fields.clip) == 0LL
    || (events = (UnityEngine_AnimationClip_o *)UnityEngine_AnimationClip__get_events(events, 0LL)) == 0LL )
  {
LABEL_21:
    sub_B7076C(events, v10);
  }
  klass = (int)events[1].klass;
  v13 = events;
  if ( klass < 1 )
    return defaultValue;
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= klass )
    {
      v19 = sub_B70798(events);
      sub_B70738(v19, 0LL);
    }
    v15 = &v13->klass + (int)v14;
    v16 = (UnityEngine_AnimationEvent_o *)v15[4];
    if ( !v16 )
      goto LABEL_21;
    functionName = UnityEngine_AnimationEvent__get_functionName((UnityEngine_AnimationEvent_o *)v15[4], 0LL);
    events = (UnityEngine_AnimationClip_o *)System_String__op_Equality(functionName, funcName, 0LL);
    if ( ((unsigned __int8)events & 1) != 0 )
      return UnityEngine_AnimationEvent__get_time(v16, 0LL);
    klass = (int)v13[1].klass;
    if ( (int)++v14 >= klass )
      return defaultValue;
  }
}


float __fastcall SubmarineScannerComponent__GetJumpDuration(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  float EventTimeByFunctionName; // s0
  const MethodInfo *v5; // x2
  float result; // s0
  SubmarineScannerComponent_c *v7; // x0

  if ( (byte_4350ECA & 1) == 0 )
  {
    sub_B70694(&SubmarineScannerComponent_TypeInfo);
    sub_B70694(&StringLiteral_10136/*"OnJumpEnd"*/);
    sub_B70694(&StringLiteral_10137/*"OnJumpStart"*/);
    byte_4350ECA = 1;
  }
  EventTimeByFunctionName = SubmarineScannerComponent__GetEventTimeByFunctionName(
                              this,
                              (System_String_o *)StringLiteral_10137/*"OnJumpStart"*/,
                              0.0,
                              v2);
  result = SubmarineScannerComponent__GetEventTimeByFunctionName(this, (System_String_o *)StringLiteral_10136/*"OnJumpEnd"*/, 0.0, v5)
         - EventTimeByFunctionName;
  if ( result <= 0.0 )
  {
    v7 = SubmarineScannerComponent_TypeInfo;
    if ( (BYTE3(SubmarineScannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
      v7 = SubmarineScannerComponent_TypeInfo;
    }
    return v7->static_fields->DEFAULT_JUMP_DURATION;
  }
  return result;
}


float __fastcall SubmarineScannerComponent__GetJumpStartTime(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineScannerComponent_c *v4; // x0

  if ( (byte_4350ECB & 1) == 0 )
  {
    sub_B70694(&SubmarineScannerComponent_TypeInfo);
    sub_B70694(&StringLiteral_10137/*"OnJumpStart"*/);
    byte_4350ECB = 1;
  }
  v4 = SubmarineScannerComponent_TypeInfo;
  if ( (BYTE3(SubmarineScannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v4 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_10137/*"OnJumpStart"*/,
           v4->static_fields->DEFAULT_JUMP_START_TIME,
           v2);
}


float __fastcall SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineScannerComponent_c *v4; // x0

  if ( (byte_4350ECC & 1) == 0 )
  {
    sub_B70694(&SubmarineScannerComponent_TypeInfo);
    sub_B70694(&StringLiteral_6769/*"FinishEffectSelectedPanel"*/);
    byte_4350ECC = 1;
  }
  v4 = SubmarineScannerComponent_TypeInfo;
  if ( (BYTE3(SubmarineScannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v4 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_6769/*"FinishEffectSelectedPanel"*/,
           v4->static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME,
           v2);
}


float __fastcall SubmarineScannerComponent__GetTimeToStartOpenPanel(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  struct SimpleAnimation_EditorState_o *state; // x8
  UnityEngine_Object_o *clip; // x20
  UnityEngine_AnimationClip_o *v5; // x0
  __int64 v6; // x1
  struct SimpleAnimation_EditorState_o *v8; // x8
  float length; // s0
  const MethodInfo *v10; // x2

  if ( (byte_4350ECD & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_13228/*"StartOpenPanel"*/);
    byte_4350ECD = 1;
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
  v5 = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Equality(clip, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    return 0.0;
  v8 = this->fields.state;
  if ( !v8 || (v5 = v8->fields.clip) == 0LL )
    sub_B7076C(v5, v6);
  length = UnityEngine_AnimationClip__get_length(v5, 0LL);
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_13228/*"StartOpenPanel"*/,
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
  System_Text_RegularExpressions_Group_o *AnimationComponent; // x0
  __int64 v6; // x1
  void *monitor; // x25
  System_Text_RegularExpressions_Regex_o *v8; // x21
  SubmarineScannerComponent_o *v9; // x0
  const MethodInfo *v10; // x1
  int32_t DistIndex; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x8
  __int64 v20; // x26
  __int64 v21; // x23
  System_Text_RegularExpressions_Group_o *v22; // x24
  System_String_o *Value; // x0
  int32_t size; // w1
  int32_t v25; // w21
  struct SimpleAnimation_EditorState_o *v26; // x1
  __int64 v27; // x0
  SubmarineScannerComponent_o *v28; // [xsp+8h] [xbp-58h]

  if ( (byte_4350EC8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__);
    sub_B70694(&System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo);
    sub_B70694(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_B70694(&StringLiteral_5418/*"DistIndex"*/);
    sub_B70694(&StringLiteral_12772/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/);
    byte_4350EC8 = 1;
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
  v8 = (System_Text_RegularExpressions_Regex_o *)sub_B70764(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_49153652(v8, (System_String_o *)StringLiteral_12772/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, 0LL);
  DistIndex = SubmarineScannerComponent__GetDistIndex(v9, dist, v10);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__);
  LODWORD(v19) = *((_DWORD *)monitor + 6);
  if ( (int)v19 >= 1 )
  {
    v28 = this;
    v20 = 0LL;
    do
    {
      if ( (unsigned int)v20 >= (unsigned int)v19 )
        goto LABEL_30;
      v21 = *((_QWORD *)monitor + v20 + 4);
      if ( !v21 )
        goto LABEL_29;
      if ( !v8 )
        goto LABEL_29;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Regex__Match_49161316(
                                                                       v8,
                                                                       *(System_String_o **)(v21 + 24),
                                                                       0LL);
      if ( !AnimationComponent )
        goto LABEL_29;
      v22 = AnimationComponent;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                       AnimationComponent,
                                                                       0LL);
      if ( ((unsigned __int8)AnimationComponent & 1) != 0 )
      {
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, void *))v22->klass[1]._1.namespaze)(
                                                                         v22,
                                                                         v22->klass[1]._1.byval_arg.data);
        if ( !AnimationComponent )
          goto LABEL_29;
        AnimationComponent = System_Text_RegularExpressions_GroupCollection__get_Item_38181172(
                               (System_Text_RegularExpressions_GroupCollection_o *)AnimationComponent,
                               (System_String_o *)StringLiteral_5418/*"DistIndex"*/,
                               0LL);
        if ( !AnimationComponent )
          goto LABEL_29;
        Value = System_Text_RegularExpressions_Capture__get_Value(
                  (System_Text_RegularExpressions_Capture_o *)AnimationComponent,
                  0LL);
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Int32__Parse(Value, 0LL);
        if ( DistIndex == (_DWORD)AnimationComponent )
        {
          if ( !v12 )
            goto LABEL_29;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__);
        }
      }
      v19 = *((_QWORD *)monitor + 3);
      ++v20;
    }
    while ( (int)v20 < (int)v19 );
    this = v28;
  }
  if ( !v12 )
LABEL_29:
    sub_B7076C(AnimationComponent, v6);
  size = v12->fields._size;
  if ( size <= 0 )
  {
    if ( !(_DWORD)v19 )
    {
LABEL_30:
      v27 = sub_B70798(AnimationComponent);
      sub_B70738(v27, 0LL);
    }
    v26 = (struct SimpleAnimation_EditorState_o *)*((_QWORD *)monitor + 4);
  }
  else
  {
    v25 = UnityEngine_Random__Range_36100992(0, size, 0LL);
    if ( v12->fields._size <= (unsigned int)v25 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v26 = (struct SimpleAnimation_EditorState_o *)v12->fields._items->m_Items[v25];
  }
  this->fields.state = v26;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.state,
    (System_Int32_array **)v26,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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

  if ( (byte_4350EC7 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4350EC7 = 1;
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
  UnityEngine_Object_o *mAnimation; // x21
  struct SimpleAnimation_o *Component_WebViewObject; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4350EC6 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350EC6 = 1;
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
                                                            (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    this->fields.mAnimation = Component_WebViewObject;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.mAnimation,
      (System_Int32_array **)Component_WebViewObject,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return this->fields.mAnimation;
}