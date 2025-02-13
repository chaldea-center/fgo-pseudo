void __fastcall SubmarineScannerComponent___cctor(const MethodInfo *method)
{
  struct SubmarineScannerComponent_StaticFields *static_fields; // x8
  _DWORD *v2; // x0
  __int64 v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  int v10; // w8
  int64_t v11; // x1
  struct SubmarineScannerComponent_StaticFields *v12; // x0

  if ( (byte_4BD9068 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&SubmarineScannerComponent_TypeInfo);
    byte_4BD9068 = 1;
  }
  static_fields = SubmarineScannerComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_JUMP_DURATION = 0x3F0000003F800000LL;
  static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME = 1.5;
  v2 = (_DWORD *)sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v2 )
    sub_1C22094(0LL, v3);
  v10 = v2[6];
  v11 = (int64_t)v2;
  if ( !v10 || (v2[8] = 246, v10 == 1) )
    sub_1C2209C(v2, v2);
  v2[9] = 492;
  v12 = SubmarineScannerComponent_TypeInfo->static_fields;
  v12->ANIM_CHANGE_DIST_BORDERS = (struct System_Int32_array *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->ANIM_CHANGE_DIST_BORDERS, v11, v4, v5, v6, v7, v8, v9);
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
  int32_t v6; // w19
  unsigned int v7; // w21
  struct System_Int32_array *v8; // x8

  if ( (byte_4BD9062 & 1) == 0 )
  {
    sub_1C21E38(&SubmarineScannerComponent_TypeInfo);
    byte_4BD9062 = 1;
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
    sub_1C22094(v4, method);
  v6 = ANIM_CHANGE_DIST_BORDERS->max_length + 2;
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
    if ( v7 >= v8->max_length )
      sub_1C2209C(v4, method);
    --v6;
    if ( (float)v8->m_Items[v7 + 1] < dist )
      return v6;
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
  int klass; // w8
  UnityEngine_AnimationClip_o *v13; // x20
  unsigned int v14; // w22
  UnityEngine_AnimationClip_c **v15; // x8
  UnityEngine_AnimationEvent_o *v16; // x21
  System_String_o *functionName; // x0

  if ( (byte_4BD9067 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9067 = 1;
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
    sub_1C22094(events, v10);
  }
  klass = (int)events[1].klass;
  v13 = events;
  if ( klass < 1 )
    return defaultValue;
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= klass )
      sub_1C2209C(events, v10);
    v15 = &v13->klass + (int)v14;
    v16 = (UnityEngine_AnimationEvent_o *)v15[4];
    if ( !v16 )
      goto LABEL_20;
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

  if ( (byte_4BD9063 & 1) == 0 )
  {
    sub_1C21E38(&SubmarineScannerComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_10108/*"OnJumpEnd"*/);
    sub_1C21E38(&StringLiteral_10109/*"OnJumpStart"*/);
    byte_4BD9063 = 1;
  }
  EventTimeByFunctionName = SubmarineScannerComponent__GetEventTimeByFunctionName(
                              this,
                              (System_String_o *)StringLiteral_10109/*"OnJumpStart"*/,
                              0.0,
                              v2);
  result = SubmarineScannerComponent__GetEventTimeByFunctionName(this, (System_String_o *)StringLiteral_10108/*"OnJumpEnd"*/, 0.0, v5)
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


float __fastcall SubmarineScannerComponent__GetJumpStartTime(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineScannerComponent_c *v4; // x0

  if ( (byte_4BD9064 & 1) == 0 )
  {
    sub_1C21E38(&SubmarineScannerComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_10109/*"OnJumpStart"*/);
    byte_4BD9064 = 1;
  }
  v4 = SubmarineScannerComponent_TypeInfo;
  if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v4 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_10109/*"OnJumpStart"*/,
           v4->static_fields->DEFAULT_JUMP_START_TIME,
           v2);
}


float __fastcall SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineScannerComponent_c *v4; // x0

  if ( (byte_4BD9065 & 1) == 0 )
  {
    sub_1C21E38(&SubmarineScannerComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_6863/*"FinishEffectSelectedPanel"*/);
    byte_4BD9065 = 1;
  }
  v4 = SubmarineScannerComponent_TypeInfo;
  if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v4 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_6863/*"FinishEffectSelectedPanel"*/,
           v4->static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME,
           v2);
}


float __fastcall SubmarineScannerComponent__GetTimeToStartOpenPanel(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  struct SimpleAnimation_EditorState_o *state; // x9
  UnityEngine_Object_o *clip; // x20
  UnityEngine_AnimationClip_o *v5; // x0
  __int64 v6; // x1
  struct SimpleAnimation_EditorState_o *v8; // x8
  float length; // s0
  const MethodInfo *v10; // x2

  if ( (byte_4BD9066 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_13213/*"StartOpenPanel"*/);
    byte_4BD9066 = 1;
  }
  state = this->fields.state;
  if ( state )
    clip = (UnityEngine_Object_o *)state->fields.clip;
  else
    clip = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Equality(clip, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    return 0.0;
  v8 = this->fields.state;
  if ( !v8 || (v5 = v8->fields.clip) == 0LL )
    sub_1C22094(v5, v6);
  length = UnityEngine_AnimationClip__get_length(v5, 0LL);
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_13213/*"StartOpenPanel"*/,
           length,
           v10);
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
  System_Text_RegularExpressions_Group_o *AnimationComponent; // x0
  __int64 v6; // x1
  System_Text_RegularExpressions_Group_c *klass; // x25
  System_Text_RegularExpressions_Regex_o *v8; // x21
  SubmarineScannerComponent_o *v9; // x0
  const MethodInfo *v10; // x1
  int32_t DistIndex; // w22
  System_Collections_Generic_List_object__o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const char *namespaze; // x8
  __int64 v20; // x26
  int64_t v21; // x23
  System_Text_RegularExpressions_Group_o *v22; // x24
  System_String_o *Value; // x0
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  int32_t v28; // w0
  Il2CppObject *data; // x1
  struct SimpleAnimation_EditorState_o **p_state; // x19

  if ( (byte_4BD9061 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo);
    sub_1C21E38(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C21E38(&StringLiteral_5448/*"DistIndex"*/);
    sub_1C21E38(&StringLiteral_12755/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/);
    byte_4BD9061 = 1;
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
  v8 = (System_Text_RegularExpressions_Regex_o *)sub_1C22084(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(v8, (System_String_o *)StringLiteral_12755/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, 0LL);
  DistIndex = SubmarineScannerComponent__GetDistIndex(v9, dist, v10);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__);
  LODWORD(namespaze) = klass->_1.namespaze;
  if ( (int)namespaze >= 1 )
  {
    v20 = 0LL;
    while ( (unsigned int)v20 < (unsigned int)namespaze )
    {
      v21 = *((_QWORD *)&klass->_1.byval_arg.data + v20);
      if ( !v21 )
        goto LABEL_29;
      if ( !v8 )
        goto LABEL_29;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Regex__Match_69672404(
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
        AnimationComponent = System_Text_RegularExpressions_GroupCollection__get_Item_69655448(
                               (System_Text_RegularExpressions_GroupCollection_o *)AnimationComponent,
                               (System_String_o *)StringLiteral_5448/*"DistIndex"*/,
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
          items = v12->fields._items;
          v25 = Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__;
          ++v12->fields._version;
          if ( !items )
            goto LABEL_29;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)v21,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v21;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v27 + 4), v21, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      namespaze = klass->_1.namespaze;
      if ( (int)++v20 >= (int)namespaze )
        goto LABEL_22;
    }
LABEL_30:
    sub_1C2209C(AnimationComponent, v6);
  }
LABEL_22:
  if ( !v12 )
LABEL_29:
    sub_1C22094(AnimationComponent, v6);
  v6 = (unsigned int)v12->fields._size;
  if ( (int)v6 <= 0 )
  {
    if ( !(_DWORD)namespaze )
      goto LABEL_30;
    data = (Il2CppObject *)klass->_1.byval_arg.data;
    this->fields.state = (struct SimpleAnimation_EditorState_o *)data;
    p_state = &this->fields.state;
  }
  else
  {
    v28 = UnityEngine_Random__Range_70829352(0, v6, 0LL);
    data = System_Collections_Generic_List_object___get_Item(
             v12,
             v28,
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__);
    this->fields.state = (struct SimpleAnimation_EditorState_o *)data;
    p_state = &this->fields.state;
  }
  sub_1C21DDC((PartyOrganizationUtility_o *)p_state, (int64_t)data, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4BD9060 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9060 = 1;
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
  Il2CppObject *Component_object; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BD905F & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD905F = 1;
  }
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mAnimation, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    this->fields.mAnimation = (struct SimpleAnimation_o *)Component_object;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.mAnimation,
      (int64_t)Component_object,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return this->fields.mAnimation;
}