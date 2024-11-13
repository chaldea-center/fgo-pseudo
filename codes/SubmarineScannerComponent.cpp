void __fastcall SubmarineScannerComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  struct SubmarineScannerComponent_StaticFields *static_fields; // x8
  _DWORD *v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int v14; // w8
  int64_t v15; // x1
  struct SubmarineScannerComponent_StaticFields *v16; // x0

  if ( (byte_4B12D94 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, v1, v2);
    sub_1BCA7E0(&SubmarineScannerComponent_TypeInfo, v3, v4);
    byte_4B12D94 = 1;
  }
  static_fields = SubmarineScannerComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_JUMP_DURATION = 0x3F0000003F800000LL;
  static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME = 1.5;
  v6 = (_DWORD *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v6 )
    sub_1BCAA3C(0LL, v7);
  v14 = v6[6];
  v15 = (int64_t)v6;
  if ( !v14 || (v6[8] = 246, v14 == 1) )
    sub_1BCAA44(v6, v6);
  v6[9] = 492;
  v16 = SubmarineScannerComponent_TypeInfo->static_fields;
  v16->ANIM_CHANGE_DIST_BORDERS = (struct System_Int32_array *)v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&v16->ANIM_CHANGE_DIST_BORDERS, v15, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4B12D8E & 1) == 0 )
  {
    sub_1BCA7E0(&SubmarineScannerComponent_TypeInfo, method, v3);
    byte_4B12D8E = 1;
  }
  v5 = SubmarineScannerComponent_TypeInfo;
  if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo, method);
    v5 = SubmarineScannerComponent_TypeInfo;
  }
  ANIM_CHANGE_DIST_BORDERS = v5->static_fields->ANIM_CHANGE_DIST_BORDERS;
  if ( !ANIM_CHANGE_DIST_BORDERS )
LABEL_16:
    sub_1BCAA3C(v5, method);
  v7 = ANIM_CHANGE_DIST_BORDERS->max_length + 2;
  while ( 1 )
  {
    v8 = v7 - 3;
    if ( v7 - 3 < 0 )
      return 1;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5, method);
      v5 = SubmarineScannerComponent_TypeInfo;
    }
    v9 = v5->static_fields->ANIM_CHANGE_DIST_BORDERS;
    if ( !v9 )
      goto LABEL_16;
    if ( v8 >= v9->max_length )
      sub_1BCAA44(v5, method);
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
  int klass; // w8
  UnityEngine_AnimationClip_o *v13; // x20
  unsigned int v14; // w22
  UnityEngine_AnimationClip_c **v15; // x8
  UnityEngine_AnimationEvent_o *v16; // x21
  System_String_o *functionName; // x0

  if ( (byte_4B12D93 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, funcName, method);
    byte_4B12D93 = 1;
  }
  state = this->fields.state;
  if ( state )
    clip = (UnityEngine_Object_o *)state->fields.clip;
  else
    clip = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, funcName);
  events = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Equality(clip, 0LL, 0LL);
  if ( ((unsigned __int8)events & 1) != 0 )
    return defaultValue;
  v11 = this->fields.state;
  if ( !v11
    || (events = v11->fields.clip) == 0LL
    || (events = (UnityEngine_AnimationClip_o *)UnityEngine_AnimationClip__get_events(events, 0LL)) == 0LL )
  {
LABEL_20:
    sub_1BCAA3C(events, v10);
  }
  klass = (int)events[1].klass;
  v13 = events;
  if ( klass < 1 )
    return defaultValue;
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= klass )
      sub_1BCAA44(events, v10);
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
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  float EventTimeByFunctionName; // s0
  const MethodInfo *v9; // x2
  __int64 v10; // x1
  float result; // s0
  SubmarineScannerComponent_c *v12; // x0

  if ( (byte_4B12D8F & 1) == 0 )
  {
    sub_1BCA7E0(&SubmarineScannerComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10044/*"OnJumpEnd"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_10045/*"OnJumpStart"*/, v6, v7);
    byte_4B12D8F = 1;
  }
  EventTimeByFunctionName = SubmarineScannerComponent__GetEventTimeByFunctionName(
                              this,
                              (System_String_o *)StringLiteral_10045/*"OnJumpStart"*/,
                              0.0,
                              v2);
  result = SubmarineScannerComponent__GetEventTimeByFunctionName(this, (System_String_o *)StringLiteral_10044/*"OnJumpEnd"*/, 0.0, v9)
         - EventTimeByFunctionName;
  if ( result <= 0.0 )
  {
    v12 = SubmarineScannerComponent_TypeInfo;
    if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo, v10);
      v12 = SubmarineScannerComponent_TypeInfo;
    }
    return v12->static_fields->DEFAULT_JUMP_DURATION;
  }
  return result;
}


float __fastcall SubmarineScannerComponent__GetJumpStartTime(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SubmarineScannerComponent_c *v6; // x0

  if ( (byte_4B12D90 & 1) == 0 )
  {
    sub_1BCA7E0(&SubmarineScannerComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10045/*"OnJumpStart"*/, v4, v5);
    byte_4B12D90 = 1;
  }
  v6 = SubmarineScannerComponent_TypeInfo;
  if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo, method);
    v6 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_10045/*"OnJumpStart"*/,
           v6->static_fields->DEFAULT_JUMP_START_TIME,
           v2);
}


float __fastcall SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SubmarineScannerComponent_c *v6; // x0

  if ( (byte_4B12D91 & 1) == 0 )
  {
    sub_1BCA7E0(&SubmarineScannerComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6813/*"FinishEffectSelectedPanel"*/, v4, v5);
    byte_4B12D91 = 1;
  }
  v6 = SubmarineScannerComponent_TypeInfo;
  if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo, method);
    v6 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_6813/*"FinishEffectSelectedPanel"*/,
           v6->static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME,
           v2);
}


float __fastcall SubmarineScannerComponent__GetTimeToStartOpenPanel(
        SubmarineScannerComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct SimpleAnimation_EditorState_o *state; // x9
  UnityEngine_Object_o *clip; // x20
  UnityEngine_AnimationClip_o *v8; // x0
  __int64 v9; // x1
  struct SimpleAnimation_EditorState_o *v11; // x8
  float length; // s0
  const MethodInfo *v13; // x2

  if ( (byte_4B12D92 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_13121/*"StartOpenPanel"*/, v4, v5);
    byte_4B12D92 = 1;
  }
  state = this->fields.state;
  if ( state )
    clip = (UnityEngine_Object_o *)state->fields.clip;
  else
    clip = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v8 = (UnityEngine_AnimationClip_o *)UnityEngine_Object__op_Equality(clip, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    return 0.0;
  v11 = this->fields.state;
  if ( !v11 || (v8 = v11->fields.clip) == 0LL )
    sub_1BCAA3C(v8, v9);
  length = UnityEngine_AnimationClip__get_length(v8, 0LL);
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_13121/*"StartOpenPanel"*/,
           length,
           v13);
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
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Text_RegularExpressions_Group_o *AnimationComponent; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Text_RegularExpressions_Group_c *klass; // x25
  System_Text_RegularExpressions_Regex_o *v25; // x21
  SubmarineScannerComponent_o *v26; // x0
  const MethodInfo *v27; // x1
  int32_t DistIndex; // w22
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_object__o *v32; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  const char *namespaze; // x8
  __int64 v40; // x26
  int64_t v41; // x23
  System_Text_RegularExpressions_Group_o *v42; // x24
  System_String_o *Value; // x0
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  int32_t v48; // w0
  Il2CppObject *data; // x1
  struct SimpleAnimation_EditorState_o **p_state; // x19

  if ( (byte_4B12D8D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__, method, v3);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Text_RegularExpressions_Regex_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_5410/*"DistIndex"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_12666/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, v18, v19);
    byte_4B12D8D = 1;
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
  v25 = (System_Text_RegularExpressions_Regex_o *)sub_1BCAA2C(
                                                    System_Text_RegularExpressions_Regex_TypeInfo,
                                                    v21,
                                                    v22,
                                                    v23);
  System_Text_RegularExpressions_Regex___ctor(v25, (System_String_o *)StringLiteral_12666/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, 0LL);
  DistIndex = SubmarineScannerComponent__GetDistIndex(v26, dist, v27);
  v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo,
                                                       v29,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__);
  LODWORD(namespaze) = klass->_1.namespaze;
  if ( (int)namespaze >= 1 )
  {
    v40 = 0LL;
    while ( (unsigned int)v40 < (unsigned int)namespaze )
    {
      v41 = *((_QWORD *)&klass->_1.byval_arg.data + v40);
      if ( !v41 )
        goto LABEL_29;
      if ( !v25 )
        goto LABEL_29;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Regex__Match_68957888(
                                                                       v25,
                                                                       *(System_String_o **)(v41 + 24),
                                                                       0LL);
      if ( !AnimationComponent )
        goto LABEL_29;
      v42 = AnimationComponent;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                       AnimationComponent,
                                                                       0LL);
      if ( ((unsigned __int8)AnimationComponent & 1) != 0 )
      {
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, void *))v42->klass[1]._1.namespaze)(
                                                                         v42,
                                                                         v42->klass[1]._1.byval_arg.data);
        if ( !AnimationComponent )
          goto LABEL_29;
        AnimationComponent = System_Text_RegularExpressions_GroupCollection__get_Item_68940932(
                               (System_Text_RegularExpressions_GroupCollection_o *)AnimationComponent,
                               (System_String_o *)StringLiteral_5410/*"DistIndex"*/,
                               0LL);
        if ( !AnimationComponent )
          goto LABEL_29;
        Value = System_Text_RegularExpressions_Capture__get_Value(
                  (System_Text_RegularExpressions_Capture_o *)AnimationComponent,
                  0LL);
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Int32__Parse(Value, 0LL);
        if ( DistIndex == (_DWORD)AnimationComponent )
        {
          if ( !v32 )
            goto LABEL_29;
          items = v32->fields._items;
          v45 = Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__;
          ++v32->fields._version;
          if ( !items )
            goto LABEL_29;
          size = v32->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v32,
              (Il2CppObject *)v41,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = &items->obj.klass + size;
            v32->fields._size = size + 1;
            v47[4] = (Il2CppClass *)v41;
            sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), v41, v33, v34, v35, v36, v37, v38);
          }
        }
      }
      namespaze = klass->_1.namespaze;
      if ( (int)++v40 >= (int)namespaze )
        goto LABEL_22;
    }
LABEL_30:
    sub_1BCAA44(AnimationComponent, v21);
  }
LABEL_22:
  if ( !v32 )
LABEL_29:
    sub_1BCAA3C(AnimationComponent, v21);
  v21 = (unsigned int)v32->fields._size;
  if ( (int)v21 <= 0 )
  {
    if ( !(_DWORD)namespaze )
      goto LABEL_30;
    data = (Il2CppObject *)klass->_1.byval_arg.data;
    this->fields.state = (struct SimpleAnimation_EditorState_o *)data;
    p_state = &this->fields.state;
  }
  else
  {
    v48 = UnityEngine_Random__Range_70113984(0, v21, 0LL);
    data = System_Collections_Generic_List_object___get_Item(
             v32,
             v48,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__);
    this->fields.state = (struct SimpleAnimation_EditorState_o *)data;
    p_state = &this->fields.state;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_state, (int64_t)data, v33, v34, v35, v36, v37, v38);
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
  __int64 v2; // x2
  struct SimpleAnimation_EditorState_o *state; // x8
  System_String_o **p_name; // x8

  if ( (byte_4B12D8C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B12D8C = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *mAnimation; // x21
  Il2CppObject *Component_object; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B12D8B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12D8B = 1;
  }
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mAnimation, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    this->fields.mAnimation = (struct SimpleAnimation_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.mAnimation,
      (int64_t)Component_object,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return this->fields.mAnimation;
}