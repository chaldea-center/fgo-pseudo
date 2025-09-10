void SubmarineScannerComponent___cctor(const MethodInfo *method)
{
  struct SubmarineScannerComponent_StaticFields *static_fields; // x8
  struct System_Int32_array *v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  const MethodInfo *v5; // x3
  int max_length; // w8
  struct System_Int32_array *v7; // x1
  struct SubmarineScannerComponent_StaticFields *v8; // x0

  if ( (byte_4C23C39 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&SubmarineScannerComponent_TypeInfo);
    byte_4C23C39 = 1;
  }
  static_fields = SubmarineScannerComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_JUMP_DURATION = 0x3F0000003F800000LL;
  static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME = 1.5;
  v2 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 2);
  if ( !v2 )
    sub_1C2D6EC(0, v3);
  max_length = v2->max_length;
  v7 = v2;
  if ( !max_length || (v2->m_Items[0] = 246, max_length == 1) )
    sub_1C2D6F4(v2, v2, v4);
  v2->m_Items[1] = 492;
  v8 = SubmarineScannerComponent_TypeInfo->static_fields;
  v8->ANIM_CHANGE_DIST_BORDERS = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->ANIM_CHANGE_DIST_BORDERS, (int32_t)v7, v4, v5);
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
  int32_t v7; // w19
  unsigned int v8; // w21
  struct System_Int32_array *v9; // x8

  if ( (byte_4C23C33 & 1) == 0 )
  {
    sub_1C2D490(&SubmarineScannerComponent_TypeInfo);
    byte_4C23C33 = 1;
  }
  v5 = SubmarineScannerComponent_TypeInfo;
  if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v5 = SubmarineScannerComponent_TypeInfo;
  }
  ANIM_CHANGE_DIST_BORDERS = v5->static_fields->ANIM_CHANGE_DIST_BORDERS;
  if ( !ANIM_CHANGE_DIST_BORDERS )
LABEL_16:
    sub_1C2D6EC(v5, method);
  v7 = LODWORD(ANIM_CHANGE_DIST_BORDERS->max_length) + 2;
  while ( 1 )
  {
    v8 = v7 - 3;
    if ( v7 - 3 < 0 )
      return 1;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = SubmarineScannerComponent_TypeInfo;
    }
    v9 = v5->static_fields->ANIM_CHANGE_DIST_BORDERS;
    if ( !v9 )
      goto LABEL_16;
    if ( v8 >= LODWORD(v9->max_length) )
      sub_1C2D6F4(v5, method, v3);
    --v7;
    if ( (float)v9->m_Items[v8] < dist )
      return v7;
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
  __int64 v10; // x1
  struct SimpleAnimation_EditorState_o *v11; // x8
  __int64 v12; // x2
  int v13; // w8
  UnityEngine_AnimationClip_o *v14; // x20
  unsigned int v15; // w22
  UnityEngine_AnimationClip_c **v16; // x8
  UnityEngine_AnimationEvent_o *v17; // x21
  System_String_o *functionName; // x0

  if ( (byte_4C23C38 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23C38 = 1;
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
  v11 = this->fields.state;
  if ( !v11
    || (events = v11->fields.clip) == 0
    || (events = (UnityEngine_AnimationClip_o *)UnityEngine_AnimationClip__get_events(events, 0)) == 0 )
  {
LABEL_20:
    sub_1C2D6EC(events, v10);
  }
  v13 = *(_DWORD *)&events->fields._isAnimatorMotion_k__BackingField;
  v14 = events;
  if ( v13 < 1 )
    return defaultValue;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= v13 )
      sub_1C2D6F4(events, v10, v12);
    v16 = &v14->klass + (int)v15;
    v17 = (UnityEngine_AnimationEvent_o *)v16[4];
    if ( !v17 )
      goto LABEL_20;
    functionName = UnityEngine_AnimationEvent__get_functionName((UnityEngine_AnimationEvent_o *)v16[4], 0);
    events = (UnityEngine_AnimationClip_o *)System_String__op_Equality(functionName, funcName, 0);
    if ( ((unsigned __int8)events & 1) != 0 )
      return UnityEngine_AnimationEvent__get_time(v17, 0);
    v13 = *(_DWORD *)&v14->fields._isAnimatorMotion_k__BackingField;
    if ( (int)++v15 >= v13 )
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

  if ( (byte_4C23C34 & 1) == 0 )
  {
    sub_1C2D490(&SubmarineScannerComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_9911/*"OnJumpEnd"*/);
    sub_1C2D490(&StringLiteral_9912/*"OnJumpStart"*/);
    byte_4C23C34 = 1;
  }
  EventTimeByFunctionName = SubmarineScannerComponent__GetEventTimeByFunctionName(
                              this,
                              (System_String_o *)StringLiteral_9912/*"OnJumpStart"*/,
                              0.0,
                              v2);
  result = SubmarineScannerComponent__GetEventTimeByFunctionName(this, (System_String_o *)StringLiteral_9911/*"OnJumpEnd"*/, 0.0, v5)
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

  if ( (byte_4C23C35 & 1) == 0 )
  {
    sub_1C2D490(&SubmarineScannerComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_9912/*"OnJumpStart"*/);
    byte_4C23C35 = 1;
  }
  v4 = SubmarineScannerComponent_TypeInfo;
  if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v4 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_9912/*"OnJumpStart"*/,
           v4->static_fields->DEFAULT_JUMP_START_TIME,
           v2);
}


float SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineScannerComponent_c *v4; // x0

  if ( (byte_4C23C36 & 1) == 0 )
  {
    sub_1C2D490(&SubmarineScannerComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_6722/*"FinishEffectSelectedPanel"*/);
    byte_4C23C36 = 1;
  }
  v4 = SubmarineScannerComponent_TypeInfo;
  if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v4 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_6722/*"FinishEffectSelectedPanel"*/,
           v4->static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME,
           v2);
}


float SubmarineScannerComponent__GetTimeToStartOpenPanel(SubmarineScannerComponent_o *this, const MethodInfo *method)
{
  struct SimpleAnimation_EditorState_o *state; // x9
  UnityEngine_Object_o *clip; // x20
  UnityEngine_AnimationClip_o *v5; // x0
  __int64 v6; // x1
  struct SimpleAnimation_EditorState_o *v8; // x8
  float length; // s0
  const MethodInfo *v10; // x2

  if ( (byte_4C23C37 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_13055/*"StartOpenPanel"*/);
    byte_4C23C37 = 1;
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
  v8 = this->fields.state;
  if ( !v8 || (v5 = v8->fields.clip) == 0 )
    sub_1C2D6EC(v5, v6);
  length = UnityEngine_AnimationClip__get_length(v5, 0);
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_13055/*"StartOpenPanel"*/,
           length,
           v10);
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
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  const char *namespaze; // x8
  __int64 v16; // x26
  __int64 v17; // x23
  System_Text_RegularExpressions_Group_o *v18; // x24
  System_String_o *Value; // x0
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int32_t v24; // w0
  Il2CppObject *Item; // x0
  struct SimpleAnimation_EditorState_o *data; // x1
  struct SimpleAnimation_EditorState_o **p_state; // x19

  if ( (byte_4C23C32 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo);
    sub_1C2D490(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C2D490(&StringLiteral_5294/*"DistIndex"*/);
    sub_1C2D490(&StringLiteral_12610/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/);
    byte_4C23C32 = 1;
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
  v8 = (System_Text_RegularExpressions_Regex_o *)sub_1C2D6DC(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(v8, (System_String_o *)StringLiteral_12610/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, 0);
  DistIndex = SubmarineScannerComponent__GetDistIndex(v9, dist, v10);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__);
  LODWORD(namespaze) = klass->_1.namespaze;
  if ( (int)namespaze >= 1 )
  {
    v16 = 0;
    while ( (unsigned int)v16 < (unsigned int)namespaze )
    {
      v17 = *((_QWORD *)&klass->_1.byval_arg.data + v16);
      if ( !v17 )
        goto LABEL_29;
      if ( !v8 )
        goto LABEL_29;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Regex__Match_69994104(
                                                                       v8,
                                                                       *(System_String_o **)(v17 + 24),
                                                                       0);
      if ( !AnimationComponent )
        goto LABEL_29;
      v18 = AnimationComponent;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                       AnimationComponent,
                                                                       0);
      if ( ((unsigned __int8)AnimationComponent & 1) != 0 )
      {
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const char *))v18->klass[1]._1.name)(
                                                                         v18,
                                                                         v18->klass[1]._1.namespaze);
        if ( !AnimationComponent )
          goto LABEL_29;
        AnimationComponent = System_Text_RegularExpressions_GroupCollection__get_Item_69977148(
                               (System_Text_RegularExpressions_GroupCollection_o *)AnimationComponent,
                               (System_String_o *)StringLiteral_5294/*"DistIndex"*/,
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
          v21 = Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__;
          ++v12->fields._version;
          if ( !items )
            goto LABEL_29;
          size = v12->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)v17,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v17;
            sub_1C2D434((CGThumbnailListItem_o *)(v23 + 4), v17, v13, v14);
          }
        }
      }
      namespaze = klass->_1.namespaze;
      if ( (int)++v16 >= (int)namespaze )
        goto LABEL_22;
    }
LABEL_30:
    sub_1C2D6F4(AnimationComponent, v6, v13);
  }
LABEL_22:
  if ( !v12 )
LABEL_29:
    sub_1C2D6EC(AnimationComponent, v6);
  v6 = (unsigned int)v12->fields._size;
  if ( (int)v6 <= 0 )
  {
    if ( !(_DWORD)namespaze )
      goto LABEL_30;
    data = (struct SimpleAnimation_EditorState_o *)klass->_1.byval_arg.data;
    this->fields.state = data;
    p_state = &this->fields.state;
  }
  else
  {
    v24 = UnityEngine_Random__Range_71123924(0, v6, 0);
    Item = System_Collections_Generic_List_object___get_Item(
             v12,
             v24,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__);
    LODWORD(data) = (_DWORD)Item;
    this->fields.state = (struct SimpleAnimation_EditorState_o *)Item;
    p_state = &this->fields.state;
  }
  sub_1C2D434((CGThumbnailListItem_o *)p_state, (int32_t)data, v13, v14);
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

  if ( (byte_4C23C31 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23C31 = 1;
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

  if ( (byte_4C23C30 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23C30 = 1;
  }
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mAnimation, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    this->fields.mAnimation = (struct SimpleAnimation_o *)Component_object;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mAnimation, (int32_t)Component_object, v5, v6);
  }
  return this->fields.mAnimation;
}