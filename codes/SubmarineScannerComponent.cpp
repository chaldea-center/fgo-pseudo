void __fastcall SubmarineScannerComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  System_Int32_array **v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  int v11; // w8
  System_Int32_array **v12; // x1
  struct SubmarineScannerComponent_StaticFields *static_fields; // x0

  if ( (byte_40F7CC6 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, v1);
    sub_B16FFC(&SubmarineScannerComponent_TypeInfo, v3);
    byte_40F7CC6 = 1;
  }
  SubmarineScannerComponent_TypeInfo->static_fields->DEFAULT_JUMP_DURATION = 1.0;
  SubmarineScannerComponent_TypeInfo->static_fields->DEFAULT_JUMP_START_TIME = 0.5;
  SubmarineScannerComponent_TypeInfo->static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME = 1.5;
  v4 = (System_Int32_array **)sub_B17014(int___TypeInfo, 2LL, v2);
  if ( !v4 )
    sub_B170D4();
  v11 = *((_DWORD *)v4 + 6);
  v12 = v4;
  if ( !v11 || (*((_DWORD *)v4 + 8) = 246, v11 == 1) )
  {
    sub_B17100(v4, v4, v5);
    sub_B170A0();
  }
  *((_DWORD *)v4 + 9) = 492;
  static_fields = SubmarineScannerComponent_TypeInfo->static_fields;
  static_fields->ANIM_CHANGE_DIST_BORDERS = (struct System_Int32_array *)v12;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->ANIM_CHANGE_DIST_BORDERS, v12, v5, v6, v7, v8, v9, v10);
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
  __int64 v3; // x2
  SubmarineScannerComponent_c *v5; // x0
  struct System_Int32_array *ANIM_CHANGE_DIST_BORDERS; // x8
  il2cpp_array_size_t max_length; // w8
  int32_t v8; // w19
  __int64 v9; // x21
  struct System_Int32_array *v10; // x8
  int v11; // s0

  if ( (byte_40F7CC0 & 1) == 0 )
  {
    sub_B16FFC(&SubmarineScannerComponent_TypeInfo, method);
    byte_40F7CC0 = 1;
  }
  v5 = SubmarineScannerComponent_TypeInfo;
  if ( (BYTE3(SubmarineScannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v5 = SubmarineScannerComponent_TypeInfo;
  }
  ANIM_CHANGE_DIST_BORDERS = v5->static_fields->ANIM_CHANGE_DIST_BORDERS;
  if ( !ANIM_CHANGE_DIST_BORDERS )
LABEL_18:
    sub_B170D4();
  max_length = ANIM_CHANGE_DIST_BORDERS->max_length;
  v8 = max_length + 2;
  v9 = 4LL * (int)(max_length - 1) + 32;
  while ( v8 - 3 >= 0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = SubmarineScannerComponent_TypeInfo;
    }
    v10 = v5->static_fields->ANIM_CHANGE_DIST_BORDERS;
    if ( !v10 )
      goto LABEL_18;
    if ( v8 - 3 >= v10->max_length )
    {
      sub_B17100(v5, method, v3);
      sub_B170A0();
    }
    v11 = *(_DWORD *)((char *)&v10->obj.klass + v9);
    --v8;
    v9 -= 4LL;
    if ( (float)v11 < dist )
      return v8;
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
  struct SimpleAnimation_EditorState_o *v9; // x8
  UnityEngine_AnimationClip_o *v10; // x0
  UnityEngine_AnimationEvent_array *events; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int max_length; // w8
  UnityEngine_AnimationEvent_array *v15; // x20
  unsigned int v16; // w22
  Il2CppClass **v17; // x8
  UnityEngine_AnimationEvent_o *v18; // x21
  System_String_o *functionName; // x0

  if ( (byte_40F7CC5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, funcName);
    byte_40F7CC5 = 1;
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
  if ( UnityEngine_Object__op_Equality(clip, 0LL, 0LL) )
    return defaultValue;
  v9 = this->fields.state;
  if ( !v9 || (v10 = v9->fields.clip) == 0LL || (events = UnityEngine_AnimationClip__get_events(v10, 0LL)) == 0LL )
LABEL_21:
    sub_B170D4();
  max_length = events->max_length;
  v15 = events;
  if ( max_length < 1 )
    return defaultValue;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= max_length )
    {
      sub_B17100(events, v12, v13);
      sub_B170A0();
    }
    v17 = &v15->obj.klass + (int)v16;
    v18 = (UnityEngine_AnimationEvent_o *)v17[4];
    if ( !v18 )
      goto LABEL_21;
    functionName = UnityEngine_AnimationEvent__get_functionName((UnityEngine_AnimationEvent_o *)v17[4], 0LL);
    events = (UnityEngine_AnimationEvent_array *)System_String__op_Equality(functionName, funcName, 0LL);
    if ( ((unsigned __int8)events & 1) != 0 )
      return UnityEngine_AnimationEvent__get_time(v18, 0LL);
    max_length = v15->max_length;
    if ( (int)++v16 >= max_length )
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

  if ( (byte_40F7CC1 & 1) == 0 )
  {
    sub_B16FFC(&SubmarineScannerComponent_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9981/*"OnJumpEnd"*/, v4);
    sub_B16FFC(&StringLiteral_9982/*"OnJumpStart"*/, v5);
    byte_40F7CC1 = 1;
  }
  EventTimeByFunctionName = SubmarineScannerComponent__GetEventTimeByFunctionName(
                              this,
                              (System_String_o *)StringLiteral_9982/*"OnJumpStart"*/,
                              0.0,
                              v2);
  result = SubmarineScannerComponent__GetEventTimeByFunctionName(this, (System_String_o *)StringLiteral_9981/*"OnJumpEnd"*/, 0.0, v7)
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

  if ( (byte_40F7CC2 & 1) == 0 )
  {
    sub_B16FFC(&SubmarineScannerComponent_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9982/*"OnJumpStart"*/, v4);
    byte_40F7CC2 = 1;
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
           (System_String_o *)StringLiteral_9982/*"OnJumpStart"*/,
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

  if ( (byte_40F7CC3 & 1) == 0 )
  {
    sub_B16FFC(&SubmarineScannerComponent_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6652/*"FinishEffectSelectedPanel"*/, v4);
    byte_40F7CC3 = 1;
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
           (System_String_o *)StringLiteral_6652/*"FinishEffectSelectedPanel"*/,
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
  struct SimpleAnimation_EditorState_o *v7; // x8
  UnityEngine_AnimationClip_o *v8; // x0
  float length; // s0
  const MethodInfo *v10; // x2

  if ( (byte_40F7CC4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_12991/*"StartOpenPanel"*/, v3);
    byte_40F7CC4 = 1;
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
  if ( UnityEngine_Object__op_Equality(clip, 0LL, 0LL) )
    return 0.0;
  v7 = this->fields.state;
  if ( !v7 || (v8 = v7->fields.clip) == 0LL )
    sub_B170D4();
  length = UnityEngine_AnimationClip__get_length(v8, 0LL);
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_12991/*"StartOpenPanel"*/,
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
  SimpleAnimation_o *AnimationComponent; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x25
  System_Text_RegularExpressions_Regex_o *v18; // x21
  SubmarineScannerComponent_o *v19; // x0
  const MethodInfo *v20; // x1
  int32_t DistIndex; // w22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  __int64 Success; // x0
  __int64 size; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x8
  __int64 v36; // x26
  __int64 v37; // x23
  System_Text_RegularExpressions_Group_o *matched; // x0
  System_Text_RegularExpressions_Group_o *v39; // x24
  System_Text_RegularExpressions_GroupCollection_o *v40; // x0
  System_Text_RegularExpressions_Capture_o *Item_36906384; // x0
  System_String_o *Value; // x0
  int32_t v43; // w21
  struct SimpleAnimation_EditorState_o *v44; // x1
  SubmarineScannerComponent_o *v45; // [xsp+8h] [xbp-58h]

  if ( (byte_40F7CBF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__, v7);
    sub_B16FFC(&System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo, v8);
    sub_B16FFC(&System_Text_RegularExpressions_Regex_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_5312/*"DistIndex"*/, v10);
    sub_B16FFC(&StringLiteral_12546/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, v11);
    byte_40F7CBF = 1;
  }
  AnimationComponent = SubmarineScannerComponent__get_AnimationComponent(this, method);
  if ( !AnimationComponent )
    goto LABEL_29;
  v17 = *(_QWORD *)&AnimationComponent[1].fields.m_CachedPtr;
  if ( !v17 )
    goto LABEL_29;
  if ( !*(_QWORD *)(v17 + 24) )
    return;
  v18 = (System_Text_RegularExpressions_Regex_o *)sub_B170CC(
                                                    System_Text_RegularExpressions_Regex_TypeInfo,
                                                    v13,
                                                    v14,
                                                    v15,
                                                    v16);
  System_Text_RegularExpressions_Regex___ctor_16009552(v18, (System_String_o *)StringLiteral_12546/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, 0LL);
  DistIndex = SubmarineScannerComponent__GetDistIndex(v19, dist, v20);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__);
  LODWORD(v35) = *(_DWORD *)(v17 + 24);
  if ( (int)v35 >= 1 )
  {
    v45 = this;
    v36 = 0LL;
    do
    {
      if ( (unsigned int)v36 >= (unsigned int)v35 )
        goto LABEL_30;
      v37 = *(_QWORD *)(v17 + 32 + 8 * v36);
      if ( !v37 )
        goto LABEL_29;
      if ( !v18 )
        goto LABEL_29;
      matched = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Regex__Match_16017216(
                                                            v18,
                                                            *(System_String_o **)(v37 + 24),
                                                            0LL);
      if ( !matched )
        goto LABEL_29;
      v39 = matched;
      Success = System_Text_RegularExpressions_Group__get_Success(matched, 0LL);
      if ( (Success & 1) != 0 )
      {
        v40 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, void *))v39->klass[1]._1.namespaze)(
                                                                    v39,
                                                                    v39->klass[1]._1.byval_arg.data);
        if ( !v40 )
          goto LABEL_29;
        Item_36906384 = (System_Text_RegularExpressions_Capture_o *)System_Text_RegularExpressions_GroupCollection__get_Item_36906384(
                                                                      v40,
                                                                      (System_String_o *)StringLiteral_5312/*"DistIndex"*/,
                                                                      0LL);
        if ( !Item_36906384 )
          goto LABEL_29;
        Value = System_Text_RegularExpressions_Capture__get_Value(Item_36906384, 0LL);
        Success = System_Int32__Parse(Value, 0LL);
        if ( DistIndex == (_DWORD)Success )
        {
          if ( !v26 )
            goto LABEL_29;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__);
        }
      }
      v35 = *(_QWORD *)(v17 + 24);
      ++v36;
    }
    while ( (int)v36 < (int)v35 );
    this = v45;
  }
  if ( !v26 )
LABEL_29:
    sub_B170D4();
  size = (unsigned int)v26->fields._size;
  if ( (int)size <= 0 )
  {
    if ( !(_DWORD)v35 )
    {
LABEL_30:
      sub_B17100(Success, size, v29);
      sub_B170A0();
    }
    v44 = *(struct SimpleAnimation_EditorState_o **)(v17 + 32);
  }
  else
  {
    v43 = UnityEngine_Random__Range_34843248(0, size, 0LL);
    if ( v26->fields._size <= (unsigned int)v43 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v44 = (struct SimpleAnimation_EditorState_o *)v26->fields._items->m_Items[v43];
  }
  this->fields.state = v44;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.state,
    (System_Int32_array **)v44,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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

  if ( (byte_40F7CBE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40F7CBE = 1;
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

  if ( (byte_40F7CBD & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F7CBD = 1;
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
                                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    this->fields.mAnimation = Component_WebViewObject;
    sub_B16F98(
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