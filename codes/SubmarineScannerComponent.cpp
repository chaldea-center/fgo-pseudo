void SubmarineScannerComponent___cctor(const MethodInfo *method)
{
  struct SubmarineScannerComponent_StaticFields *static_fields; // x8
  struct System_Int32_array *v2; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  int max_length; // w8
  struct System_Int32_array *v6; // x1
  struct SubmarineScannerComponent_StaticFields *v7; // x0

  if ( (byte_4C3F8F7 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&SubmarineScannerComponent_TypeInfo);
    byte_4C3F8F7 = 1;
  }
  static_fields = SubmarineScannerComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_JUMP_DURATION = 0x3F0000003F800000LL;
  static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME = 1.5;
  v2 = (struct System_Int32_array *)sub_1C37100(int___TypeInfo, 2);
  if ( !v2 )
    sub_1C372B4(0);
  max_length = v2->max_length;
  v6 = v2;
  if ( !max_length || (v2->m_Items[0] = 246, max_length == 1) )
    sub_1C372BC(v2);
  v2->m_Items[1] = 492;
  v7 = SubmarineScannerComponent_TypeInfo->static_fields;
  v7->ANIM_CHANGE_DIST_BORDERS = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->ANIM_CHANGE_DIST_BORDERS, (int32_t)v6, v3, v4);
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
  SubmarineScannerComponent_c *v4; // x0
  struct System_Int32_array *ANIM_CHANGE_DIST_BORDERS; // x8
  int32_t v6; // w19
  unsigned int v7; // w21
  struct System_Int32_array *v8; // x8

  if ( (byte_4C3F8F1 & 1) == 0 )
  {
    sub_1C37058(&SubmarineScannerComponent_TypeInfo);
    byte_4C3F8F1 = 1;
  }
  v4 = SubmarineScannerComponent_TypeInfo;
  if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v4 = SubmarineScannerComponent_TypeInfo;
  }
  ANIM_CHANGE_DIST_BORDERS = v4->static_fields->ANIM_CHANGE_DIST_BORDERS;
  if ( !ANIM_CHANGE_DIST_BORDERS )
LABEL_16:
    sub_1C372B4(v4);
  v6 = LODWORD(ANIM_CHANGE_DIST_BORDERS->max_length) + 2;
  while ( 1 )
  {
    v7 = v6 - 3;
    if ( v6 - 3 < 0 )
      return 1;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = SubmarineScannerComponent_TypeInfo;
    }
    v8 = v4->static_fields->ANIM_CHANGE_DIST_BORDERS;
    if ( !v8 )
      goto LABEL_16;
    if ( v7 >= LODWORD(v8->max_length) )
      sub_1C372BC(v4);
    --v6;
    if ( (float)v8->m_Items[v7] < dist )
      return v6;
  }
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
  struct SimpleAnimation_EditorState_o *v10; // x8
  int v11; // w8
  UnityEngine_AnimationClip_o *v12; // x20
  unsigned int v13; // w22
  UnityEngine_AnimationClip_c **v14; // x8
  UnityEngine_AnimationEvent_o *v15; // x21
  System_String_o *functionName; // x0

  if ( (byte_4C3F8F6 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F8F6 = 1;
  }
  state = this->fields.state;
  if ( state )
    clip = (UnityEngine_Object_o *)state->fields.clip;
  else
    clip = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  events = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Equality(clip, 0, 0);
  if ( ((unsigned __int8)events & 1) != 0 )
    return defaultValue;
  v10 = this->fields.state;
  if ( !v10
    || (events = v10->fields.clip) == 0
    || (events = (UnityEngine_AnimationClip_o *)UnityEngine_AnimationClip__get_events(events, 0)) == 0 )
  {
LABEL_20:
    sub_1C372B4(events);
  }
  v11 = *(_DWORD *)&events->fields._isAnimatorMotion_k__BackingField;
  v12 = events;
  if ( v11 < 1 )
    return defaultValue;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= v11 )
      sub_1C372BC(events);
    v14 = &v12->klass + (int)v13;
    v15 = (UnityEngine_AnimationEvent_o *)v14[4];
    if ( !v15 )
      goto LABEL_20;
    functionName = UnityEngine_AnimationEvent__get_functionName((UnityEngine_AnimationEvent_o *)v14[4], 0);
    events = (UnityEngine_AnimationClip_o *)System_String__op_Equality(functionName, funcName, 0);
    if ( ((unsigned __int8)events & 1) != 0 )
      return UnityEngine_AnimationEvent__get_time(v15, 0);
    v11 = *(_DWORD *)&v12->fields._isAnimatorMotion_k__BackingField;
    if ( (int)++v13 >= v11 )
      return defaultValue;
  }
}


float SubmarineScannerComponent__GetJumpDuration(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  float EventTimeByFunctionName; // s0
  const MethodInfo *v5; // x2
  float result; // s0
  SubmarineScannerComponent_c *v7; // x0

  if ( (byte_4C3F8F2 & 1) == 0 )
  {
    sub_1C37058(&SubmarineScannerComponent_TypeInfo);
    sub_1C37058(&StringLiteral_9917/*"OnJumpEnd"*/);
    sub_1C37058(&StringLiteral_9918/*"OnJumpStart"*/);
    byte_4C3F8F2 = 1;
  }
  EventTimeByFunctionName = SubmarineScannerComponent__GetEventTimeByFunctionName(
                              this,
                              (System_String_o *)StringLiteral_9918/*"OnJumpStart"*/,
                              0.0,
                              v2);
  result = SubmarineScannerComponent__GetEventTimeByFunctionName(this, (System_String_o *)StringLiteral_9917/*"OnJumpEnd"*/, 0.0, v5)
         - EventTimeByFunctionName;
  if ( result <= 0.0 )
  {
    v7 = SubmarineScannerComponent_TypeInfo;
    if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
      v7 = SubmarineScannerComponent_TypeInfo;
    }
    return v7->static_fields->DEFAULT_JUMP_DURATION;
  }
  return result;
}


float SubmarineScannerComponent__GetJumpStartTime(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineScannerComponent_c *v4; // x0

  if ( (byte_4C3F8F3 & 1) == 0 )
  {
    sub_1C37058(&SubmarineScannerComponent_TypeInfo);
    sub_1C37058(&StringLiteral_9918/*"OnJumpStart"*/);
    byte_4C3F8F3 = 1;
  }
  v4 = SubmarineScannerComponent_TypeInfo;
  if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v4 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_9918/*"OnJumpStart"*/,
           v4->static_fields->DEFAULT_JUMP_START_TIME,
           v2);
}


float SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineScannerComponent_c *v4; // x0

  if ( (byte_4C3F8F4 & 1) == 0 )
  {
    sub_1C37058(&SubmarineScannerComponent_TypeInfo);
    sub_1C37058(&StringLiteral_6728/*"FinishEffectSelectedPanel"*/);
    byte_4C3F8F4 = 1;
  }
  v4 = SubmarineScannerComponent_TypeInfo;
  if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v4 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_6728/*"FinishEffectSelectedPanel"*/,
           v4->static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME,
           v2);
}


float SubmarineScannerComponent__GetTimeToStartOpenPanel(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  struct SimpleAnimation_EditorState_o *state; // x9
  UnityEngine_Object_o *clip; // x20
  UnityEngine_AnimationClip_o *v5; // x0
  struct SimpleAnimation_EditorState_o *v7; // x8
  float length; // s0
  const MethodInfo *v9; // x2

  if ( (byte_4C3F8F5 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_13059/*"StartOpenPanel"*/);
    byte_4C3F8F5 = 1;
  }
  state = this->fields.state;
  if ( state )
    clip = (UnityEngine_Object_o *)state->fields.clip;
  else
    clip = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Equality(clip, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    return 0.0;
  v7 = this->fields.state;
  if ( !v7 || (v5 = v7->fields.clip) == 0 )
    sub_1C372B4(v5);
  length = UnityEngine_AnimationClip__get_length(v5, 0);
  return SubmarineScannerComponent__GetEventTimeByFunctionName(this, (System_String_o *)StringLiteral_13059/*"StartOpenPanel"*/, length, v9);
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
  System_Text_RegularExpressions_Group_c *klass; // x25
  System_Text_RegularExpressions_Regex_o *v7; // x21
  SubmarineScannerComponent_o *v8; // x0
  const MethodInfo *v9; // x1
  int32_t DistIndex; // w22
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const char *namespaze; // x8
  __int64 v15; // x26
  __int64 v16; // x23
  System_Text_RegularExpressions_Group_o *v17; // x24
  System_String_o *Value; // x0
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  int32_t v23; // w1
  int32_t v24; // w0
  Il2CppObject *Item; // x0
  struct SimpleAnimation_EditorState_o *data; // x1
  struct SimpleAnimation_EditorState_o **p_state; // x19

  if ( (byte_4C3F8F0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo);
    sub_1C37058(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C37058(&StringLiteral_5303/*"DistIndex"*/);
    sub_1C37058(&StringLiteral_12614/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/);
    byte_4C3F8F0 = 1;
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
  v7 = (System_Text_RegularExpressions_Regex_o *)sub_1C372A4(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(v7, (System_String_o *)StringLiteral_12614/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, 0);
  DistIndex = SubmarineScannerComponent__GetDistIndex(v8, dist, v9);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__);
  LODWORD(namespaze) = klass->_1.namespaze;
  if ( (int)namespaze >= 1 )
  {
    v15 = 0;
    while ( (unsigned int)v15 < (unsigned int)namespaze )
    {
      v16 = *((_QWORD *)&klass->_1.byval_arg.data + v15);
      if ( !v16 )
        goto LABEL_29;
      if ( !v7 )
        goto LABEL_29;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Regex__Match_70097152(
                                                                       v7,
                                                                       *(System_String_o **)(v16 + 24),
                                                                       0);
      if ( !AnimationComponent )
        goto LABEL_29;
      v17 = AnimationComponent;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                       AnimationComponent,
                                                                       0);
      if ( ((unsigned __int8)AnimationComponent & 1) != 0 )
      {
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const char *))v17->klass[1]._1.name)(
                                                                         v17,
                                                                         v17->klass[1]._1.namespaze);
        if ( !AnimationComponent )
          goto LABEL_29;
        AnimationComponent = System_Text_RegularExpressions_GroupCollection__get_Item_70080196(
                               (System_Text_RegularExpressions_GroupCollection_o *)AnimationComponent,
                               (System_String_o *)StringLiteral_5303/*"DistIndex"*/,
                               0);
        if ( !AnimationComponent )
          goto LABEL_29;
        Value = System_Text_RegularExpressions_Capture__get_Value(
                  (System_Text_RegularExpressions_Capture_o *)AnimationComponent,
                  0);
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Int32__Parse(Value, 0);
        if ( DistIndex == (_DWORD)AnimationComponent )
        {
          if ( !v11 )
            goto LABEL_29;
          items = v11->fields._items;
          v20 = Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__;
          ++v11->fields._version;
          if ( !items )
            goto LABEL_29;
          size = v11->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v16,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v16;
            sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 4), v16, v12, v13);
          }
        }
      }
      namespaze = klass->_1.namespaze;
      if ( (int)++v15 >= (int)namespaze )
        goto LABEL_22;
    }
LABEL_30:
    sub_1C372BC(AnimationComponent);
  }
LABEL_22:
  if ( !v11 )
LABEL_29:
    sub_1C372B4(AnimationComponent);
  v23 = v11->fields._size;
  if ( v23 <= 0 )
  {
    if ( !(_DWORD)namespaze )
      goto LABEL_30;
    data = (struct SimpleAnimation_EditorState_o *)klass->_1.byval_arg.data;
    this->fields.state = data;
    p_state = &this->fields.state;
  }
  else
  {
    v24 = UnityEngine_Random__Range_71226972(0, v23, 0);
    Item = System_Collections_Generic_List_object___get_Item(
             v11,
             v24,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__);
    LODWORD(data) = (_DWORD)Item;
    this->fields.state = (struct SimpleAnimation_EditorState_o *)Item;
    p_state = &this->fields.state;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)p_state, (int32_t)data, v12, v13);
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

  if ( (byte_4C3F8EF & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F8EF = 1;
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
  UnityEngine_Object_o *mAnimation; // x21
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3F8EE & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F8EE = 1;
  }
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mAnimation, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    this->fields.mAnimation = (struct SimpleAnimation_o *)Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mAnimation, (int32_t)Component_object, v5, v6);
  }
  return this->fields.mAnimation;
}