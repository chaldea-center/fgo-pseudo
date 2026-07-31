void SubmarineScannerComponent___cctor(const MethodInfo *method)
{
  Il2CppClass *v1; // x0
  struct SubmarineScannerComponent_StaticFields *static_fields; // x8
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int v11; // w8
  struct System_Int32_array *v12; // x1
  struct SubmarineScannerComponent_StaticFields *v13; // x0

  if ( (byte_5934DE5 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&SubmarineScannerComponent_TypeInfo);
    byte_5934DE5 = 1;
  }
  v1 = int___TypeInfo;
  static_fields = SubmarineScannerComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_JUMP_DURATION = 0x3F0000003F800000LL;
  static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME = 1.5;
  v3 = sub_21FFD10(v1, 2);
  if ( !v3 )
    sub_21FFECC(0, v4);
  v11 = *(_DWORD *)(v3 + 24);
  v12 = (struct System_Int32_array *)v3;
  if ( !v11 || (*(_DWORD *)(v3 + 32) = 246, v11 == 1) )
    sub_21FFED4(v3);
  v13 = SubmarineScannerComponent_TypeInfo->static_fields;
  v12->m_Items[1] = 492;
  v13->ANIM_CHANGE_DIST_BORDERS = v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->ANIM_CHANGE_DIST_BORDERS, (int32_t)v12, v5, v6, v7, v8, v9, v10);
}


void SubmarineScannerComponent___ctor(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SubmarineScannerComponent__FinishEffectSelectedPanel(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  ;
}


int32_t SubmarineScannerComponent__GetDistIndex(
        SubmarineScannerComponent_o *this,
        float dist,
        const MethodInfo *method)
{
  __int64 v3; // x2
  SubmarineScannerComponent_c *v5; // x0
  struct System_Int32_array *ANIM_CHANGE_DIST_BORDERS; // x8
  il2cpp_array_size_t max_length; // x8
  int32_t v8; // w19
  __int64 v9; // x21
  struct System_Int32_array *v10; // x8
  int *v11; // x8

  if ( (byte_5934DDF & 1) == 0 )
  {
    sub_21FFC50(&SubmarineScannerComponent_TypeInfo);
    byte_5934DDF = 1;
  }
  v5 = SubmarineScannerComponent_TypeInfo;
  if ( !*(&SubmarineScannerComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo, method, v3);
    v5 = SubmarineScannerComponent_TypeInfo;
  }
  ANIM_CHANGE_DIST_BORDERS = v5->static_fields->ANIM_CHANGE_DIST_BORDERS;
  if ( !ANIM_CHANGE_DIST_BORDERS )
LABEL_16:
    sub_21FFECC(v5, method);
  max_length = ANIM_CHANGE_DIST_BORDERS->max_length;
  v8 = max_length + 2;
  v9 = (unsigned int)max_length - 1LL;
  while ( v8 - 3 >= 0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, method, v3);
      v5 = SubmarineScannerComponent_TypeInfo;
    }
    v10 = v5->static_fields->ANIM_CHANGE_DIST_BORDERS;
    if ( !v10 )
      goto LABEL_16;
    if ( (unsigned int)(v8 - 3) >= LODWORD(v10->max_length) )
      sub_21FFED4(v5);
    v11 = (int *)((char *)v10 + 4 * (unsigned int)v9);
    --v8;
    --v9;
    if ( (float)v11[8] < dist )
      return v8;
  }
  return 1;
}


float SubmarineScannerComponent__GetEventTimeByFunctionName(
        SubmarineScannerComponent_o *this,
        System_String_o *funcName,
        float defaultValue,
        const MethodInfo *method)
{
  struct SimpleAnimation_EditorState_o *state; // x9
  UnityEngine_Object_o *clip; // x21
  UnityEngine_AnimationClip_o *events; // x0
  __int64 v10; // x1
  struct SimpleAnimation_EditorState_o *v11; // x8
  int v12; // w8
  UnityEngine_AnimationClip_o *v13; // x20
  __int64 v14; // x22
  UnityEngine_AnimationEvent_o *v15; // x21
  System_String_o *functionName; // x0

  if ( (byte_5934DE4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934DE4 = 1;
  }
  state = this->fields.state;
  if ( state )
    clip = (UnityEngine_Object_o *)state->fields.clip;
  else
    clip = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, funcName, method);
  events = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Equality(clip, 0, 0);
  if ( ((unsigned __int8)events & 1) != 0 )
    return defaultValue;
  v11 = this->fields.state;
  if ( !v11
    || (events = v11->fields.clip) == 0
    || (events = (UnityEngine_AnimationClip_o *)UnityEngine_AnimationClip__get_events(events, 0)) == 0 )
  {
LABEL_20:
    sub_21FFECC(events, v10);
  }
  v12 = *(_DWORD *)&events->fields._isAnimatorMotion_k__BackingField;
  v13 = events;
  if ( v12 < 1 )
    return defaultValue;
  v14 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v14 >= v12 )
      sub_21FFED4(events);
    v15 = (UnityEngine_AnimationEvent_o *)*((_QWORD *)&v13[1].klass + v14);
    if ( !v15 )
      goto LABEL_20;
    functionName = UnityEngine_AnimationEvent__get_functionName(
                     *((UnityEngine_AnimationEvent_o **)&v13[1].klass + v14),
                     0);
    events = (UnityEngine_AnimationClip_o *)System_String__op_Equality(functionName, funcName, 0);
    if ( ((unsigned __int8)events & 1) != 0 )
      return UnityEngine_AnimationEvent__get_time(v15, 0);
    v12 = *(_DWORD *)&v13->fields._isAnimatorMotion_k__BackingField;
    if ( (int)++v14 >= v12 )
      return defaultValue;
  }
}


float SubmarineScannerComponent__GetJumpDuration(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  float EventTimeByFunctionName; // s8
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  float result; // s0
  SubmarineScannerComponent_c *v9; // x0

  if ( (byte_5934DE0 & 1) == 0 )
  {
    sub_21FFC50(&SubmarineScannerComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_10306/*"OnJumpEnd"*/);
    sub_21FFC50(&StringLiteral_10307/*"OnJumpStart"*/);
    byte_5934DE0 = 1;
  }
  EventTimeByFunctionName = SubmarineScannerComponent__GetEventTimeByFunctionName(
                              this,
                              (System_String_o *)StringLiteral_10307/*"OnJumpStart"*/,
                              0.0,
                              v2);
  result = SubmarineScannerComponent__GetEventTimeByFunctionName(this, (System_String_o *)StringLiteral_10306/*"OnJumpEnd"*/, 0.0, v5)
         - EventTimeByFunctionName;
  if ( result <= 0.0 )
  {
    v9 = SubmarineScannerComponent_TypeInfo;
    if ( !*(&SubmarineScannerComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo, v6, v7);
      v9 = SubmarineScannerComponent_TypeInfo;
    }
    return v9->static_fields->DEFAULT_JUMP_DURATION;
  }
  return result;
}


float SubmarineScannerComponent__GetJumpStartTime(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineScannerComponent_c *v4; // x0

  if ( (byte_5934DE1 & 1) == 0 )
  {
    sub_21FFC50(&SubmarineScannerComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_10307/*"OnJumpStart"*/);
    byte_5934DE1 = 1;
  }
  v4 = SubmarineScannerComponent_TypeInfo;
  if ( !*(&SubmarineScannerComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo, method, v2);
    v4 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_10307/*"OnJumpStart"*/,
           v4->static_fields->DEFAULT_JUMP_START_TIME,
           v2);
}


float SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineScannerComponent_c *v4; // x0

  if ( (byte_5934DE2 & 1) == 0 )
  {
    sub_21FFC50(&SubmarineScannerComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_7000/*"FinishEffectSelectedPanel"*/);
    byte_5934DE2 = 1;
  }
  v4 = SubmarineScannerComponent_TypeInfo;
  if ( !*(&SubmarineScannerComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo, method, v2);
    v4 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_7000/*"FinishEffectSelectedPanel"*/,
           v4->static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME,
           v2);
}


float SubmarineScannerComponent__GetTimeToStartOpenPanel(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct SimpleAnimation_EditorState_o *state; // x9
  UnityEngine_Object_o *clip; // x20
  UnityEngine_AnimationClip_o *v6; // x0
  __int64 v7; // x1
  struct SimpleAnimation_EditorState_o *v9; // x8
  float length; // s0
  const MethodInfo *v11; // x2

  if ( (byte_5934DE3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_13578/*"StartOpenPanel"*/);
    byte_5934DE3 = 1;
  }
  state = this->fields.state;
  if ( state )
    clip = (UnityEngine_Object_o *)state->fields.clip;
  else
    clip = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v6 = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Equality(clip, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
    return 0.0;
  v9 = this->fields.state;
  if ( !v9 || (v6 = v9->fields.clip) == 0 )
    sub_21FFECC(v6, v7);
  length = UnityEngine_AnimationClip__get_length(v6, 0);
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_13578/*"StartOpenPanel"*/,
           length,
           v11);
}


// attributes: thunk
void SubmarineScannerComponent__Initialize(SubmarineScannerComponent_o *this, float dist, const MethodInfo *method)
{
  SubmarineScannerComponent__PrepareAnimation(this, dist, method);
}


bool SubmarineScannerComponent__IsAnimationPrepared(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  return this->fields.state != 0;
}


void SubmarineScannerComponent__OnJumpEnd(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  ;
}


void SubmarineScannerComponent__OnJumpStart(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  ;
}


void SubmarineScannerComponent__OnStartScan(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  ;
}


void SubmarineScannerComponent__PrepareAnimation(
        SubmarineScannerComponent_o *this,
        float dist,
        const MethodInfo *method)
{
  System_Text_RegularExpressions_Group_o *AnimationComponent; // x0
  __int64 v6; // x1
  System_Text_RegularExpressions_Group_c *klass; // x25
  System_Text_RegularExpressions_Regex_o *v8; // x21
  SubmarineScannerComponent_o *v9; // x0
  const MethodInfo *v10; // x1
  int32_t DistIndex; // w22
  System_Collections_Generic_List_object__o *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int namespaze; // w8
  __int64 v20; // x26
  __int64 v21; // x23
  System_Text_RegularExpressions_Group_o *v22; // x24
  System_String_o *Value; // x0
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  int32_t v28; // w1
  int32_t v29; // w0
  Il2CppObject *Item; // x0
  struct SimpleAnimation_EditorState_o *data; // x1
  struct SimpleAnimation_EditorState_o **p_state; // x19

  if ( (byte_5934DDE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo);
    sub_21FFC50(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_21FFC50(&StringLiteral_5482/*"DistIndex"*/);
    sub_21FFC50(&StringLiteral_13116/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/);
    byte_5934DDE = 1;
  }
  AnimationComponent = (System_Text_RegularExpressions_Group_o *)SubmarineScannerComponent__get_AnimationComponent(
                                                                   this,
                                                                   method);
  if ( !AnimationComponent )
    goto LABEL_29;
  klass = AnimationComponent[2].klass;
  if ( !klass )
    goto LABEL_29;
  if ( !klass->_1.namespaze )
    return;
  v8 = (System_Text_RegularExpressions_Regex_o *)sub_21FFEBC(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor_81846528(v8, (System_String_o *)StringLiteral_13116/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, 0);
  DistIndex = SubmarineScannerComponent__GetDistIndex(v9, dist, v10);
  v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__);
  namespaze = (int)klass->_1.namespaze;
  if ( namespaze >= 1 )
  {
    v20 = 0;
    while ( (unsigned int)v20 < namespaze )
    {
      v21 = *((_QWORD *)&klass->_1.byval_arg.data + v20);
      if ( !v21 )
        goto LABEL_29;
      if ( !v8 )
        goto LABEL_29;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Regex__Match_81842168(
                                                                       v8,
                                                                       *(System_String_o **)(v21 + 24),
                                                                       0);
      if ( !AnimationComponent )
        goto LABEL_29;
      v22 = AnimationComponent;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                       AnimationComponent,
                                                                       0);
      if ( ((unsigned __int8)AnimationComponent & 1) != 0 )
      {
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const char *))v22->klass[1]._1.name)(
                                                                         v22,
                                                                         v22->klass[1]._1.namespaze);
        if ( !AnimationComponent )
          goto LABEL_29;
        AnimationComponent = System_Text_RegularExpressions_GroupCollection__get_Item_81825376(
                               (System_Text_RegularExpressions_GroupCollection_o *)AnimationComponent,
                               (System_String_o *)StringLiteral_5482/*"DistIndex"*/,
                               0);
        if ( !AnimationComponent )
          goto LABEL_29;
        Value = System_Text_RegularExpressions_Capture__get_Value(
                  (System_Text_RegularExpressions_Capture_o *)AnimationComponent,
                  0);
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Int32__Parse(Value, 0);
        if ( DistIndex == (_DWORD)AnimationComponent )
        {
          if ( !v12 )
            goto LABEL_29;
          items = v12->fields._items;
          v25 = Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__;
          ++v12->fields._version;
          if ( !items )
            goto LABEL_29;
          size = v12->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)v21,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v21;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v27 + 4), v21, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      namespaze = (int)klass->_1.namespaze;
      if ( (int)++v20 >= namespaze )
        goto LABEL_22;
    }
LABEL_30:
    sub_21FFED4(AnimationComponent);
  }
LABEL_22:
  if ( !v12 )
LABEL_29:
    sub_21FFECC(AnimationComponent, v6);
  v28 = v12->fields._size;
  if ( v28 <= 0 )
  {
    if ( !namespaze )
      goto LABEL_30;
    data = (struct SimpleAnimation_EditorState_o *)klass->_1.byval_arg.data;
    this->fields.state = data;
    p_state = &this->fields.state;
  }
  else
  {
    v29 = UnityEngine_Random__Range_83187376(0, v28, 0);
    Item = System_Collections_Generic_List_object___get_Item(
             v12,
             v29,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__);
    LODWORD(data) = (_DWORD)Item;
    this->fields.state = (struct SimpleAnimation_EditorState_o *)Item;
    p_state = &this->fields.state;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_state, (int32_t)data, v13, v14, v15, v16, v17, v18);
}


void SubmarineScannerComponent__StartOpenPanel(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_AnimationClip_o *SubmarineScannerComponent__get_AnimClip(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  struct SimpleAnimation_EditorState_o *state; // x8

  state = this->fields.state;
  if ( state )
    return state->fields.clip;
  else
    return 0;
}


System_String_o *SubmarineScannerComponent__get_AnimName(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  struct SimpleAnimation_EditorState_o *state; // x8
  System_String_o **p_name; // x8

  if ( (byte_5934DDD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934DDD = 1;
  }
  state = this->fields.state;
  if ( state )
    p_name = &state->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_name;
}


SimpleAnimation_o *SubmarineScannerComponent__get_AnimationComponent(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mAnimation; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5934DDC & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934DDC = 1;
  }
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(mAnimation, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    this->fields.mAnimation = (struct SimpleAnimation_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mAnimation,
      (int32_t)Component_object,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return this->fields.mAnimation;
}