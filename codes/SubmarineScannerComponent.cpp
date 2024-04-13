void __fastcall SubmarineScannerComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_Int32_array **v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int v15; // w8
  System_Int32_array **v16; // x1
  struct SubmarineScannerComponent_StaticFields *static_fields; // x0
  __int64 v18; // x0

  if ( (byte_42E7BBE & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, v1, v2, v3);
    sub_B5D5C4(&SubmarineScannerComponent_TypeInfo, v4, v5, v6);
    byte_42E7BBE = 1;
  }
  SubmarineScannerComponent_TypeInfo->static_fields->DEFAULT_JUMP_DURATION = 1.0;
  SubmarineScannerComponent_TypeInfo->static_fields->DEFAULT_JUMP_START_TIME = 0.5;
  SubmarineScannerComponent_TypeInfo->static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME = 1.5;
  v7 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v7 )
    sub_B5D69C(0LL, v8);
  v15 = *((_DWORD *)v7 + 6);
  v16 = v7;
  if ( !v15 || (*((_DWORD *)v7 + 8) = 246, v15 == 1) )
  {
    v18 = sub_B5D6C8(v7);
    sub_B5D668(v18, 0LL);
  }
  *((_DWORD *)v7 + 9) = 492;
  static_fields = SubmarineScannerComponent_TypeInfo->static_fields;
  static_fields->ANIM_CHANGE_DIST_BORDERS = (struct System_Int32_array *)v16;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->ANIM_CHANGE_DIST_BORDERS, v16, v9, v10, v11, v12, v13, v14);
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
  int v3; // w2
  __int64 v4; // x3
  SubmarineScannerComponent_c *v6; // x0
  struct System_Int32_array *ANIM_CHANGE_DIST_BORDERS; // x8
  il2cpp_array_size_t max_length; // w8
  int32_t v9; // w19
  __int64 v10; // x21
  struct System_Int32_array *v11; // x8
  int v12; // s0
  __int64 v14; // x0

  if ( (byte_42E7BB8 & 1) == 0 )
  {
    sub_B5D5C4(&SubmarineScannerComponent_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E7BB8 = 1;
  }
  v6 = SubmarineScannerComponent_TypeInfo;
  if ( (BYTE3(SubmarineScannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v6 = SubmarineScannerComponent_TypeInfo;
  }
  ANIM_CHANGE_DIST_BORDERS = v6->static_fields->ANIM_CHANGE_DIST_BORDERS;
  if ( !ANIM_CHANGE_DIST_BORDERS )
LABEL_18:
    sub_B5D69C(v6, method);
  max_length = ANIM_CHANGE_DIST_BORDERS->max_length;
  v9 = max_length + 2;
  v10 = 4LL * (int)(max_length - 1) + 32;
  while ( v9 - 3 >= 0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = SubmarineScannerComponent_TypeInfo;
    }
    v11 = v6->static_fields->ANIM_CHANGE_DIST_BORDERS;
    if ( !v11 )
      goto LABEL_18;
    if ( v9 - 3 >= v11->max_length )
    {
      v14 = sub_B5D6C8(v6);
      sub_B5D668(v14, 0LL);
    }
    v12 = *(_DWORD *)((char *)&v11->obj.klass + v10);
    --v9;
    v10 -= 4LL;
    if ( (float)v12 < dist )
      return v9;
  }
  return 1;
}


float __fastcall SubmarineScannerComponent__GetEventTimeByFunctionName(
        SubmarineScannerComponent_o *this,
        System_String_o *funcName,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v4; // x3
  struct SimpleAnimation_EditorState_o *state; // x8
  UnityEngine_Object_o *clip; // x21
  UnityEngine_AnimationClip_o *events; // x0
  __int64 v11; // x1
  struct SimpleAnimation_EditorState_o *v12; // x8
  int klass; // w8
  UnityEngine_AnimationClip_o *v14; // x20
  unsigned int v15; // w22
  UnityEngine_AnimationClip_c **v16; // x8
  UnityEngine_AnimationEvent_o *v17; // x21
  System_String_o *functionName; // x0
  __int64 v20; // x0

  if ( (byte_42E7BBD & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)funcName, (_DWORD)method, v4);
    byte_42E7BBD = 1;
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
  v12 = this->fields.state;
  if ( !v12
    || (events = v12->fields.clip) == 0LL
    || (events = (UnityEngine_AnimationClip_o *)UnityEngine_AnimationClip__get_events(events, 0LL)) == 0LL )
  {
LABEL_21:
    sub_B5D69C(events, v11);
  }
  klass = (int)events[1].klass;
  v14 = events;
  if ( klass < 1 )
    return defaultValue;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= klass )
    {
      v20 = sub_B5D6C8(events);
      sub_B5D668(v20, 0LL);
    }
    v16 = &v14->klass + (int)v15;
    v17 = (UnityEngine_AnimationEvent_o *)v16[4];
    if ( !v17 )
      goto LABEL_21;
    functionName = UnityEngine_AnimationEvent__get_functionName((UnityEngine_AnimationEvent_o *)v16[4], 0LL);
    events = (UnityEngine_AnimationClip_o *)System_String__op_Equality(functionName, funcName, 0LL);
    if ( ((unsigned __int8)events & 1) != 0 )
      return UnityEngine_AnimationEvent__get_time(v17, 0LL);
    klass = (int)v14[1].klass;
    if ( (int)++v15 >= klass )
      return defaultValue;
  }
}


float __fastcall SubmarineScannerComponent__GetJumpDuration(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  float EventTimeByFunctionName; // s0
  const MethodInfo *v12; // x2
  float result; // s0
  SubmarineScannerComponent_c *v14; // x0

  if ( (byte_42E7BB9 & 1) == 0 )
  {
    sub_B5D5C4(&SubmarineScannerComponent_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_10119/*"OnJumpEnd"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10120/*"OnJumpStart"*/, v8, v9, v10);
    byte_42E7BB9 = 1;
  }
  EventTimeByFunctionName = SubmarineScannerComponent__GetEventTimeByFunctionName(
                              this,
                              (System_String_o *)StringLiteral_10120/*"OnJumpStart"*/,
                              0.0,
                              v2);
  result = SubmarineScannerComponent__GetEventTimeByFunctionName(this, (System_String_o *)StringLiteral_10119/*"OnJumpEnd"*/, 0.0, v12)
         - EventTimeByFunctionName;
  if ( result <= 0.0 )
  {
    v14 = SubmarineScannerComponent_TypeInfo;
    if ( (BYTE3(SubmarineScannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
      v14 = SubmarineScannerComponent_TypeInfo;
    }
    return v14->static_fields->DEFAULT_JUMP_DURATION;
  }
  return result;
}


float __fastcall SubmarineScannerComponent__GetJumpStartTime(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SubmarineScannerComponent_c *v8; // x0

  if ( (byte_42E7BBA & 1) == 0 )
  {
    sub_B5D5C4(&SubmarineScannerComponent_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_10120/*"OnJumpStart"*/, v5, v6, v7);
    byte_42E7BBA = 1;
  }
  v8 = SubmarineScannerComponent_TypeInfo;
  if ( (BYTE3(SubmarineScannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v8 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_10120/*"OnJumpStart"*/,
           v8->static_fields->DEFAULT_JUMP_START_TIME,
           v2);
}


float __fastcall SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SubmarineScannerComponent_c *v8; // x0

  if ( (byte_42E7BBB & 1) == 0 )
  {
    sub_B5D5C4(&SubmarineScannerComponent_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_6756/*"FinishEffectSelectedPanel"*/, v5, v6, v7);
    byte_42E7BBB = 1;
  }
  v8 = SubmarineScannerComponent_TypeInfo;
  if ( (BYTE3(SubmarineScannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v8 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_6756/*"FinishEffectSelectedPanel"*/,
           v8->static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME,
           v2);
}


float __fastcall SubmarineScannerComponent__GetTimeToStartOpenPanel(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct SimpleAnimation_EditorState_o *state; // x8
  UnityEngine_Object_o *clip; // x20
  UnityEngine_AnimationClip_o *v10; // x0
  __int64 v11; // x1
  struct SimpleAnimation_EditorState_o *v13; // x8
  float length; // s0
  const MethodInfo *v15; // x2

  if ( (byte_42E7BBC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_13203/*"StartOpenPanel"*/, v5, v6, v7);
    byte_42E7BBC = 1;
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
  v10 = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Equality(clip, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
    return 0.0;
  v13 = this->fields.state;
  if ( !v13 || (v10 = v13->fields.clip) == 0LL )
    sub_B5D69C(v10, v11);
  length = UnityEngine_AnimationClip__get_length(v10, 0LL);
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_13203/*"StartOpenPanel"*/,
           length,
           v15);
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
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
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
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  System_Text_RegularExpressions_Group_o *AnimationComponent; // x0
  __int64 v29; // x1
  void *monitor; // x25
  System_Text_RegularExpressions_Regex_o *v31; // x21
  SubmarineScannerComponent_o *v32; // x0
  const MethodInfo *v33; // x1
  int32_t DistIndex; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x8
  __int64 v43; // x26
  __int64 v44; // x23
  System_Text_RegularExpressions_Group_o *v45; // x24
  System_String_o *Value; // x0
  int32_t size; // w1
  int32_t v48; // w21
  struct SimpleAnimation_EditorState_o *v49; // x1
  __int64 v50; // x0
  SubmarineScannerComponent_o *v51; // [xsp+8h] [xbp-58h]

  if ( (byte_42E7BB7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__, (_DWORD)method, v3, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Count__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Text_RegularExpressions_Regex_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_5407/*"DistIndex"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_12751/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, v25, v26, v27);
    byte_42E7BB7 = 1;
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
  v31 = (System_Text_RegularExpressions_Regex_o *)sub_B5D694(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_48772328(v31, (System_String_o *)StringLiteral_12751/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, 0LL);
  DistIndex = SubmarineScannerComponent__GetDistIndex(v32, dist, v33);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__);
  LODWORD(v42) = *((_DWORD *)monitor + 6);
  if ( (int)v42 >= 1 )
  {
    v51 = this;
    v43 = 0LL;
    do
    {
      if ( (unsigned int)v43 >= (unsigned int)v42 )
        goto LABEL_30;
      v44 = *((_QWORD *)monitor + v43 + 4);
      if ( !v44 )
        goto LABEL_29;
      if ( !v31 )
        goto LABEL_29;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Regex__Match_48779992(
                                                                       v31,
                                                                       *(System_String_o **)(v44 + 24),
                                                                       0LL);
      if ( !AnimationComponent )
        goto LABEL_29;
      v45 = AnimationComponent;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                       AnimationComponent,
                                                                       0LL);
      if ( ((unsigned __int8)AnimationComponent & 1) != 0 )
      {
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, void *))v45->klass[1]._1.namespaze)(
                                                                         v45,
                                                                         v45->klass[1]._1.byval_arg.data);
        if ( !AnimationComponent )
          goto LABEL_29;
        AnimationComponent = System_Text_RegularExpressions_GroupCollection__get_Item_38133928(
                               (System_Text_RegularExpressions_GroupCollection_o *)AnimationComponent,
                               (System_String_o *)StringLiteral_5407/*"DistIndex"*/,
                               0LL);
        if ( !AnimationComponent )
          goto LABEL_29;
        Value = System_Text_RegularExpressions_Capture__get_Value(
                  (System_Text_RegularExpressions_Capture_o *)AnimationComponent,
                  0LL);
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Int32__Parse(Value, 0LL);
        if ( DistIndex == (_DWORD)AnimationComponent )
        {
          if ( !v35 )
            goto LABEL_29;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v35,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__);
        }
      }
      v42 = *((_QWORD *)monitor + 3);
      ++v43;
    }
    while ( (int)v43 < (int)v42 );
    this = v51;
  }
  if ( !v35 )
LABEL_29:
    sub_B5D69C(AnimationComponent, v29);
  size = v35->fields._size;
  if ( size <= 0 )
  {
    if ( !(_DWORD)v42 )
    {
LABEL_30:
      v50 = sub_B5D6C8(AnimationComponent);
      sub_B5D668(v50, 0LL);
    }
    v49 = (struct SimpleAnimation_EditorState_o *)*((_QWORD *)monitor + 4);
  }
  else
  {
    v48 = UnityEngine_Random__Range_35654020(0, size, 0LL);
    if ( v35->fields._size <= (unsigned int)v48 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v49 = (struct SimpleAnimation_EditorState_o *)v35->fields._items->m_Items[v48];
  }
  this->fields.state = v49;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.state,
    (System_Int32_array **)v49,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
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
  int v2; // w2
  __int64 v3; // x3
  struct SimpleAnimation_EditorState_o *state; // x8
  System_String_o **p_name; // x8

  if ( (byte_42E7BB6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E7BB6 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *mAnimation; // x21
  struct SimpleAnimation_o *Component_WebViewObject; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42E7BB5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E7BB5 = 1;
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
                                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    this->fields.mAnimation = Component_WebViewObject;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mAnimation,
      (System_Int32_array **)Component_WebViewObject,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return this->fields.mAnimation;
}