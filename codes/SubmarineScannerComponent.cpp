void __fastcall SubmarineScannerComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct System_Int32_array *v3; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // w8
  struct System_Int32_array *v6; // x1
  struct SubmarineScannerComponent_StaticFields *static_fields; // x0
  __int64 v8; // x0

  if ( (byte_4185832 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, v1);
    sub_B2C35C(&SubmarineScannerComponent_TypeInfo, v2);
    byte_4185832 = 1;
  }
  SubmarineScannerComponent_TypeInfo->static_fields->DEFAULT_JUMP_DURATION = 1.0;
  SubmarineScannerComponent_TypeInfo->static_fields->DEFAULT_JUMP_START_TIME = 0.5;
  SubmarineScannerComponent_TypeInfo->static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME = 1.5;
  v3 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  max_length = v3->max_length;
  v6 = v3;
  if ( !max_length || (v3->m_Items[1] = 246, max_length == 1) )
  {
    v8 = sub_B2C460(v3);
    sub_B2C400(v8, 0LL);
  }
  v3->m_Items[2] = 492;
  static_fields = SubmarineScannerComponent_TypeInfo->static_fields;
  static_fields->ANIM_CHANGE_DIST_BORDERS = v6;
  sub_B2C2F8(&static_fields->ANIM_CHANGE_DIST_BORDERS, v6);
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

  if ( (byte_418582C & 1) == 0 )
  {
    sub_B2C35C(&SubmarineScannerComponent_TypeInfo, method);
    byte_418582C = 1;
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
    sub_B2C434(v4, method);
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
      v12 = sub_B2C460(v4);
      sub_B2C400(v12, 0LL);
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

  if ( (byte_4185831 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, funcName);
    byte_4185831 = 1;
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
    sub_B2C434(events, v10);
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
      v19 = sub_B2C460(events);
      sub_B2C400(v19, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  float EventTimeByFunctionName; // s0
  const MethodInfo *v7; // x2
  float result; // s0
  SubmarineScannerComponent_c *v9; // x0

  if ( (byte_418582D & 1) == 0 )
  {
    sub_B2C35C(&SubmarineScannerComponent_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10013/*"OnJumpEnd"*/, v4);
    sub_B2C35C(&StringLiteral_10014/*"OnJumpStart"*/, v5);
    byte_418582D = 1;
  }
  EventTimeByFunctionName = SubmarineScannerComponent__GetEventTimeByFunctionName(
                              this,
                              (System_String_o *)StringLiteral_10014/*"OnJumpStart"*/,
                              0.0,
                              v2);
  result = SubmarineScannerComponent__GetEventTimeByFunctionName(this, (System_String_o *)StringLiteral_10013/*"OnJumpEnd"*/, 0.0, v7)
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

  if ( (byte_418582E & 1) == 0 )
  {
    sub_B2C35C(&SubmarineScannerComponent_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10014/*"OnJumpStart"*/, v4);
    byte_418582E = 1;
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
           (System_String_o *)StringLiteral_10014/*"OnJumpStart"*/,
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

  if ( (byte_418582F & 1) == 0 )
  {
    sub_B2C35C(&SubmarineScannerComponent_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6676/*"FinishEffectSelectedPanel"*/, v4);
    byte_418582F = 1;
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
           (System_String_o *)StringLiteral_6676/*"FinishEffectSelectedPanel"*/,
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
  __int64 v7; // x1
  struct SimpleAnimation_EditorState_o *v9; // x8
  float length; // s0
  const MethodInfo *v11; // x2

  if ( (byte_4185830 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_13047/*"StartOpenPanel"*/, v3);
    byte_4185830 = 1;
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
  v9 = this->fields.state;
  if ( !v9 || (v6 = v9->fields.clip) == 0LL )
    sub_B2C434(v6, v7);
  length = UnityEngine_AnimationClip__get_length(v6, 0LL);
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_13047/*"StartOpenPanel"*/,
           length,
           v11);
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
  void *monitor; // x25
  System_Text_RegularExpressions_Regex_o *v15; // x21
  SubmarineScannerComponent_o *v16; // x0
  const MethodInfo *v17; // x1
  int32_t DistIndex; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x20
  __int64 v20; // x8
  __int64 v21; // x26
  __int64 v22; // x23
  System_Text_RegularExpressions_Group_o *v23; // x24
  System_String_o *Value; // x0
  int32_t size; // w1
  int32_t v26; // w21
  struct SimpleAnimation_EditorState_o *v27; // x1
  __int64 v28; // x0
  SubmarineScannerComponent_o *v29; // [xsp+8h] [xbp-58h]

  if ( (byte_418582B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__, v7);
    sub_B2C35C(&System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo, v8);
    sub_B2C35C(&System_Text_RegularExpressions_Regex_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_5331/*"DistIndex"*/, v10);
    sub_B2C35C(&StringLiteral_12602/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, v11);
    byte_418582B = 1;
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
  v15 = (System_Text_RegularExpressions_Regex_o *)sub_B2C42C(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_16107524(v15, (System_String_o *)StringLiteral_12602/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, 0LL);
  DistIndex = SubmarineScannerComponent__GetDistIndex(v16, dist, v17);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__);
  LODWORD(v20) = *((_DWORD *)monitor + 6);
  if ( (int)v20 >= 1 )
  {
    v29 = this;
    v21 = 0LL;
    do
    {
      if ( (unsigned int)v21 >= (unsigned int)v20 )
        goto LABEL_30;
      v22 = *((_QWORD *)monitor + v21 + 4);
      if ( !v22 )
        goto LABEL_29;
      if ( !v15 )
        goto LABEL_29;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Regex__Match_16115188(
                                                                       v15,
                                                                       *(System_String_o **)(v22 + 24),
                                                                       0LL);
      if ( !AnimationComponent )
        goto LABEL_29;
      v23 = AnimationComponent;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                       AnimationComponent,
                                                                       0LL);
      if ( ((unsigned __int8)AnimationComponent & 1) != 0 )
      {
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, void *))v23->klass[1]._1.namespaze)(
                                                                         v23,
                                                                         v23->klass[1]._1.byval_arg.data);
        if ( !AnimationComponent )
          goto LABEL_29;
        AnimationComponent = System_Text_RegularExpressions_GroupCollection__get_Item_37155292(
                               (System_Text_RegularExpressions_GroupCollection_o *)AnimationComponent,
                               (System_String_o *)StringLiteral_5331/*"DistIndex"*/,
                               0LL);
        if ( !AnimationComponent )
          goto LABEL_29;
        Value = System_Text_RegularExpressions_Capture__get_Value(
                  (System_Text_RegularExpressions_Capture_o *)AnimationComponent,
                  0LL);
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Int32__Parse(Value, 0LL);
        if ( DistIndex == (_DWORD)AnimationComponent )
        {
          if ( !v19 )
            goto LABEL_29;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v19,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__);
        }
      }
      v20 = *((_QWORD *)monitor + 3);
      ++v21;
    }
    while ( (int)v21 < (int)v20 );
    this = v29;
  }
  if ( !v19 )
LABEL_29:
    sub_B2C434(AnimationComponent, v13);
  size = v19->fields._size;
  if ( size <= 0 )
  {
    if ( !(_DWORD)v20 )
    {
LABEL_30:
      v28 = sub_B2C460(AnimationComponent);
      sub_B2C400(v28, 0LL);
    }
    v27 = (struct SimpleAnimation_EditorState_o *)*((_QWORD *)monitor + 4);
  }
  else
  {
    v26 = UnityEngine_Random__Range_35348680(0, size, 0LL);
    if ( v19->fields._size <= (unsigned int)v26 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v27 = (struct SimpleAnimation_EditorState_o *)v19->fields._items->m_Items[v26];
  }
  this->fields.state = v27;
  sub_B2C2F8(&this->fields.state, v27);
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

  if ( (byte_418582A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418582A = 1;
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

  if ( (byte_4185829 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4185829 = 1;
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
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    this->fields.mAnimation = Component_WebViewObject;
    sub_B2C2F8(&this->fields.mAnimation, Component_WebViewObject);
  }
  return this->fields.mAnimation;
}