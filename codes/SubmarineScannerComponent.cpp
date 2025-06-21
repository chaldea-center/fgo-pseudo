void __fastcall SubmarineScannerComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct SubmarineScannerComponent_StaticFields *static_fields; // x8
  struct System_Int32_array *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  il2cpp_array_size_t max_length; // w8
  struct System_Int32_array *v9; // x1
  struct SubmarineScannerComponent_StaticFields *v10; // x0

  if ( (byte_4B18ED5 & 1) == 0 )
  {
    sub_1BCAFF8(&int___TypeInfo, v1);
    sub_1BCAFF8(&SubmarineScannerComponent_TypeInfo, v2);
    byte_4B18ED5 = 1;
  }
  static_fields = SubmarineScannerComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_JUMP_DURATION = 0x3F0000003F800000LL;
  static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME = 1.5;
  v4 = (struct System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 2LL);
  if ( !v4 )
    sub_1BCB254(0LL, v5);
  max_length = v4->max_length;
  v9 = v4;
  if ( !max_length || (v4->m_Items[1] = 246, max_length == 1) )
    sub_1BCB25C(v4, v4, v6);
  v4->m_Items[2] = 492;
  v10 = SubmarineScannerComponent_TypeInfo->static_fields;
  v10->ANIM_CHANGE_DIST_BORDERS = v9;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v10->ANIM_CHANGE_DIST_BORDERS, (int32_t)v9, v6, v7);
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
  int32_t v7; // w19
  unsigned int v8; // w21
  struct System_Int32_array *v9; // x8

  if ( (byte_4B18ECF & 1) == 0 )
  {
    sub_1BCAFF8(&SubmarineScannerComponent_TypeInfo, method);
    byte_4B18ECF = 1;
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
    sub_1BCB254(v5, method);
  v7 = ANIM_CHANGE_DIST_BORDERS->max_length + 2;
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
    if ( v8 >= v9->max_length )
      sub_1BCB25C(v5, method, v3);
    --v7;
    if ( (float)v9->m_Items[v8 + 1] < dist )
      return v7;
  }
}


float __fastcall SubmarineScannerComponent__GetEventTimeByFunctionName(
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
  int klass; // w8
  UnityEngine_AnimationClip_o *v14; // x20
  unsigned int v15; // w22
  UnityEngine_AnimationClip_c **v16; // x8
  UnityEngine_AnimationEvent_o *v17; // x21
  System_String_o *functionName; // x0

  if ( (byte_4B18ED4 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, funcName);
    byte_4B18ED4 = 1;
  }
  state = this->fields.state;
  if ( state )
    clip = (UnityEngine_Object_o *)state->fields.clip;
  else
    clip = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  events = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Equality(clip, 0LL, 0LL);
  if ( ((unsigned __int8)events & 1) != 0 )
    return defaultValue;
  v11 = this->fields.state;
  if ( !v11
    || (events = v11->fields.clip) == 0LL
    || (events = (UnityEngine_AnimationClip_o *)UnityEngine_AnimationClip__get_events(events, 0LL)) == 0LL )
  {
LABEL_20:
    sub_1BCB254(events, v10);
  }
  klass = (int)events[1].klass;
  v14 = events;
  if ( klass < 1 )
    return defaultValue;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= klass )
      sub_1BCB25C(events, v10, v12);
    v16 = &v14->klass + (int)v15;
    v17 = (UnityEngine_AnimationEvent_o *)v16[4];
    if ( !v17 )
      goto LABEL_20;
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
  __int64 v4; // x1
  __int64 v5; // x1
  float EventTimeByFunctionName; // s0
  const MethodInfo *v7; // x2
  float result; // s0
  SubmarineScannerComponent_c *v9; // x0

  if ( (byte_4B18ED0 & 1) == 0 )
  {
    sub_1BCAFF8(&SubmarineScannerComponent_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_9840/*"OnJumpEnd"*/, v4);
    sub_1BCAFF8(&StringLiteral_9841/*"OnJumpStart"*/, v5);
    byte_4B18ED0 = 1;
  }
  EventTimeByFunctionName = SubmarineScannerComponent__GetEventTimeByFunctionName(
                              this,
                              (System_String_o *)StringLiteral_9841/*"OnJumpStart"*/,
                              0.0,
                              v2);
  result = SubmarineScannerComponent__GetEventTimeByFunctionName(this, (System_String_o *)StringLiteral_9840/*"OnJumpEnd"*/, 0.0, v7)
         - EventTimeByFunctionName;
  if ( result <= 0.0 )
  {
    v9 = SubmarineScannerComponent_TypeInfo;
    if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B18ED1 & 1) == 0 )
  {
    sub_1BCAFF8(&SubmarineScannerComponent_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_9841/*"OnJumpStart"*/, v4);
    byte_4B18ED1 = 1;
  }
  v5 = SubmarineScannerComponent_TypeInfo;
  if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v5 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_9841/*"OnJumpStart"*/,
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

  if ( (byte_4B18ED2 & 1) == 0 )
  {
    sub_1BCAFF8(&SubmarineScannerComponent_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_6676/*"FinishEffectSelectedPanel"*/, v4);
    byte_4B18ED2 = 1;
  }
  v5 = SubmarineScannerComponent_TypeInfo;
  if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
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
  struct SimpleAnimation_EditorState_o *state; // x9
  UnityEngine_Object_o *clip; // x20
  UnityEngine_AnimationClip_o *v6; // x0
  __int64 v7; // x1
  struct SimpleAnimation_EditorState_o *v9; // x8
  float length; // s0
  const MethodInfo *v11; // x2

  if ( (byte_4B18ED3 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_12943/*"StartOpenPanel"*/, v3);
    byte_4B18ED3 = 1;
  }
  state = this->fields.state;
  if ( state )
    clip = (UnityEngine_Object_o *)state->fields.clip;
  else
    clip = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Equality(clip, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
    return 0.0;
  v9 = this->fields.state;
  if ( !v9 || (v6 = v9->fields.clip) == 0LL )
    sub_1BCB254(v6, v7);
  length = UnityEngine_AnimationClip__get_length(v6, 0LL);
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_12943/*"StartOpenPanel"*/,
           length,
           v11);
}


// attributes: thunk
void __fastcall SubmarineScannerComponent__Initialize(
        SubmarineScannerComponent_o *this,
        float dist,
        const MethodInfo *method)
{
  SubmarineScannerComponent__PrepareAnimation(this, dist, method);
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
  System_Text_RegularExpressions_Group_c *klass; // x25
  System_Text_RegularExpressions_Regex_o *v15; // x21
  SubmarineScannerComponent_o *v16; // x0
  const MethodInfo *v17; // x1
  int32_t DistIndex; // w22
  System_Collections_Generic_List_object__o *v19; // x20
  __int64 v20; // x2
  const MethodInfo *v21; // x3
  const char *namespaze; // x8
  __int64 v23; // x26
  __int64 v24; // x23
  System_Text_RegularExpressions_Group_o *v25; // x24
  System_String_o *Value; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  int32_t v31; // w0
  Il2CppObject *Item; // x0
  struct SimpleAnimation_EditorState_o *data; // x1
  struct SimpleAnimation_EditorState_o **p_state; // x19

  if ( (byte_4B18ECE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Count__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo, v8);
    sub_1BCAFF8(&System_Text_RegularExpressions_Regex_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_5259/*"DistIndex"*/, v10);
    sub_1BCAFF8(&StringLiteral_12503/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, v11);
    byte_4B18ECE = 1;
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
  v15 = (System_Text_RegularExpressions_Regex_o *)sub_1BCB244(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(v15, (System_String_o *)StringLiteral_12503/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, 0LL);
  DistIndex = SubmarineScannerComponent__GetDistIndex(v16, dist, v17);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__);
  LODWORD(namespaze) = klass->_1.namespaze;
  if ( (int)namespaze >= 1 )
  {
    v23 = 0LL;
    while ( (unsigned int)v23 < (unsigned int)namespaze )
    {
      v24 = *((_QWORD *)&klass->_1.byval_arg.data + v23);
      if ( !v24 )
        goto LABEL_29;
      if ( !v15 )
        goto LABEL_29;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Regex__Match_68962812(
                                                                       v15,
                                                                       *(System_String_o **)(v24 + 24),
                                                                       0LL);
      if ( !AnimationComponent )
        goto LABEL_29;
      v25 = AnimationComponent;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                       AnimationComponent,
                                                                       0LL);
      if ( ((unsigned __int8)AnimationComponent & 1) != 0 )
      {
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, void *))v25->klass[1]._1.namespaze)(
                                                                         v25,
                                                                         v25->klass[1]._1.byval_arg.data);
        if ( !AnimationComponent )
          goto LABEL_29;
        AnimationComponent = System_Text_RegularExpressions_GroupCollection__get_Item_68945856(
                               (System_Text_RegularExpressions_GroupCollection_o *)AnimationComponent,
                               (System_String_o *)StringLiteral_5259/*"DistIndex"*/,
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
          items = v19->fields._items;
          v28 = Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__;
          ++v19->fields._version;
          if ( !items )
            goto LABEL_29;
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              (Il2CppObject *)v24,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v19->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v24;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v30 + 4), v24, v20, v21);
          }
        }
      }
      namespaze = klass->_1.namespaze;
      if ( (int)++v23 >= (int)namespaze )
        goto LABEL_22;
    }
LABEL_30:
    sub_1BCB25C(AnimationComponent, v13, v20);
  }
LABEL_22:
  if ( !v19 )
LABEL_29:
    sub_1BCB254(AnimationComponent, v13);
  v13 = (unsigned int)v19->fields._size;
  if ( (int)v13 <= 0 )
  {
    if ( !(_DWORD)namespaze )
      goto LABEL_30;
    data = (struct SimpleAnimation_EditorState_o *)klass->_1.byval_arg.data;
    this->fields.state = data;
    p_state = &this->fields.state;
  }
  else
  {
    v31 = UnityEngine_Random__Range_70096296(0, v13, 0LL);
    Item = System_Collections_Generic_List_object___get_Item(
             v19,
             v31,
             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__);
    LODWORD(data) = (_DWORD)Item;
    this->fields.state = (struct SimpleAnimation_EditorState_o *)Item;
    p_state = &this->fields.state;
  }
  sub_1BCAF9C((CGThumbnailListItem_o *)p_state, (int32_t)data, v20, v21);
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

  if ( (byte_4B18ECD & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B18ECD = 1;
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
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B18ECC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B18ECC = 1;
  }
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mAnimation, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    this->fields.mAnimation = (struct SimpleAnimation_o *)Component_object;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mAnimation, (int32_t)Component_object, v6, v7);
  }
  return this->fields.mAnimation;
}