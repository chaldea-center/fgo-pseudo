void __fastcall SubmarineScannerComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct SubmarineScannerComponent_StaticFields *static_fields; // x8
  struct System_Int32_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  il2cpp_array_size_t max_length; // w8
  struct System_Int32_array *v8; // x1
  struct SubmarineScannerComponent_StaticFields *v9; // x0

  if ( (byte_49F90B3 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, v1);
    sub_1B640C8(&SubmarineScannerComponent_TypeInfo, v2);
    byte_49F90B3 = 1;
  }
  static_fields = SubmarineScannerComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_JUMP_DURATION = 0x3F0000003F800000LL;
  static_fields->DEFAULT_SELECTED_PANEL_EFFECT_FINISH_TIME = 1.5;
  v4 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 2LL);
  if ( !v4 )
    sub_1B64324(0LL);
  max_length = v4->max_length;
  v8 = v4;
  if ( !max_length || (v4->m_Items[1] = 246, max_length == 1) )
    sub_1B6432C(v4, v4);
  v4->m_Items[2] = 492;
  v9 = SubmarineScannerComponent_TypeInfo->static_fields;
  v9->ANIM_CHANGE_DIST_BORDERS = v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->ANIM_CHANGE_DIST_BORDERS, (int32_t)v8, v5, v6);
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

  if ( (byte_49F90AD & 1) == 0 )
  {
    sub_1B640C8(&SubmarineScannerComponent_TypeInfo, method);
    byte_49F90AD = 1;
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
    sub_1B64324(v4);
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
      sub_1B6432C(v4, method);
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
  struct SimpleAnimation_EditorState_o *v10; // x8
  __int64 v11; // x1
  int klass; // w8
  UnityEngine_AnimationClip_o *v13; // x20
  unsigned int v14; // w22
  UnityEngine_AnimationClip_c **v15; // x8
  UnityEngine_AnimationEvent_o *v16; // x21
  System_String_o *functionName; // x0

  if ( (byte_49F90B2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, funcName);
    byte_49F90B2 = 1;
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
  v10 = this->fields.state;
  if ( !v10
    || (events = v10->fields.clip) == 0LL
    || (events = (UnityEngine_AnimationClip_o *)UnityEngine_AnimationClip__get_events(events, 0LL)) == 0LL )
  {
LABEL_20:
    sub_1B64324(events);
  }
  klass = (int)events[1].klass;
  v13 = events;
  if ( klass < 1 )
    return defaultValue;
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= klass )
      sub_1B6432C(events, v11);
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
  __int64 v5; // x1
  float EventTimeByFunctionName; // s0
  const MethodInfo *v7; // x2
  float result; // s0
  SubmarineScannerComponent_c *v9; // x0

  if ( (byte_49F90AE & 1) == 0 )
  {
    sub_1B640C8(&SubmarineScannerComponent_TypeInfo, method);
    sub_1B640C8(&StringLiteral_9865/*"OnJumpEnd"*/, v4);
    sub_1B640C8(&StringLiteral_9866/*"OnJumpStart"*/, v5);
    byte_49F90AE = 1;
  }
  EventTimeByFunctionName = SubmarineScannerComponent__GetEventTimeByFunctionName(
                              this,
                              (System_String_o *)StringLiteral_9866/*"OnJumpStart"*/,
                              0.0,
                              v2);
  result = SubmarineScannerComponent__GetEventTimeByFunctionName(this, (System_String_o *)StringLiteral_9865/*"OnJumpEnd"*/, 0.0, v7)
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

  if ( (byte_49F90AF & 1) == 0 )
  {
    sub_1B640C8(&SubmarineScannerComponent_TypeInfo, method);
    sub_1B640C8(&StringLiteral_9866/*"OnJumpStart"*/, v4);
    byte_49F90AF = 1;
  }
  v5 = SubmarineScannerComponent_TypeInfo;
  if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v5 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_9866/*"OnJumpStart"*/,
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

  if ( (byte_49F90B0 & 1) == 0 )
  {
    sub_1B640C8(&SubmarineScannerComponent_TypeInfo, method);
    sub_1B640C8(&StringLiteral_6665/*"FinishEffectSelectedPanel"*/, v4);
    byte_49F90B0 = 1;
  }
  v5 = SubmarineScannerComponent_TypeInfo;
  if ( !SubmarineScannerComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineScannerComponent_TypeInfo);
    v5 = SubmarineScannerComponent_TypeInfo;
  }
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_6665/*"FinishEffectSelectedPanel"*/,
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
  struct SimpleAnimation_EditorState_o *v8; // x8
  float length; // s0
  const MethodInfo *v10; // x2

  if ( (byte_49F90B1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_12897/*"StartOpenPanel"*/, v3);
    byte_49F90B1 = 1;
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
  v8 = this->fields.state;
  if ( !v8 || (v6 = v8->fields.clip) == 0LL )
    sub_1B64324(v6);
  length = UnityEngine_AnimationClip__get_length(v6, 0LL);
  return SubmarineScannerComponent__GetEventTimeByFunctionName(
           this,
           (System_String_o *)StringLiteral_12897/*"StartOpenPanel"*/,
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Text_RegularExpressions_Group_o *AnimationComponent; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_Text_RegularExpressions_Group_c *klass; // x25
  System_Text_RegularExpressions_Regex_o *v16; // x21
  SubmarineScannerComponent_o *v17; // x0
  const MethodInfo *v18; // x1
  int32_t DistIndex; // w22
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x20
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  const char *namespaze; // x8
  __int64 v27; // x26
  __int64 v28; // x23
  System_Text_RegularExpressions_Group_o *v29; // x24
  System_String_o *Value; // x0
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  int32_t v35; // w0
  Il2CppObject *Item; // x0
  struct SimpleAnimation_EditorState_o *data; // x1
  struct SimpleAnimation_EditorState_o **p_state; // x19

  if ( (byte_49F90AC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__, v7);
    sub_1B640C8(&System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo, v8);
    sub_1B640C8(&System_Text_RegularExpressions_Regex_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_5310/*"DistIndex"*/, v10);
    sub_1B640C8(&StringLiteral_12455/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, v11);
    byte_49F90AC = 1;
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
  v16 = (System_Text_RegularExpressions_Regex_o *)sub_1B64314(System_Text_RegularExpressions_Regex_TypeInfo, v13, v14);
  System_Text_RegularExpressions_Regex___ctor(v16, (System_String_o *)StringLiteral_12455/*"Scanner_\\d+_Dist(?<DistIndex>\\d+)"*/, 0LL);
  DistIndex = SubmarineScannerComponent__GetDistIndex(v17, dist, v18);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SimpleAnimation_EditorState__TypeInfo,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState___ctor__);
  LODWORD(namespaze) = klass->_1.namespaze;
  if ( (int)namespaze >= 1 )
  {
    v27 = 0LL;
    while ( (unsigned int)v27 < (unsigned int)namespaze )
    {
      v28 = *((_QWORD *)&klass->_1.byval_arg.data + v27);
      if ( !v28 )
        goto LABEL_29;
      if ( !v16 )
        goto LABEL_29;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Regex__Match_67931612(
                                                                       v16,
                                                                       *(System_String_o **)(v28 + 24),
                                                                       0LL);
      if ( !AnimationComponent )
        goto LABEL_29;
      v29 = AnimationComponent;
      AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Text_RegularExpressions_Group__get_Success(
                                                                       AnimationComponent,
                                                                       0LL);
      if ( ((unsigned __int8)AnimationComponent & 1) != 0 )
      {
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, void *))v29->klass[1]._1.namespaze)(
                                                                         v29,
                                                                         v29->klass[1]._1.byval_arg.data);
        if ( !AnimationComponent )
          goto LABEL_29;
        AnimationComponent = System_Text_RegularExpressions_GroupCollection__get_Item_67914656(
                               (System_Text_RegularExpressions_GroupCollection_o *)AnimationComponent,
                               (System_String_o *)StringLiteral_5310/*"DistIndex"*/,
                               0LL);
        if ( !AnimationComponent )
          goto LABEL_29;
        Value = System_Text_RegularExpressions_Capture__get_Value(
                  (System_Text_RegularExpressions_Capture_o *)AnimationComponent,
                  0LL);
        AnimationComponent = (System_Text_RegularExpressions_Group_o *)System_Int32__Parse(Value, 0LL);
        if ( DistIndex == (_DWORD)AnimationComponent )
        {
          if ( !v22 )
            goto LABEL_29;
          items = v22->fields._items;
          v32 = Method_System_Collections_Generic_List_SimpleAnimation_EditorState__Add__;
          ++v22->fields._version;
          if ( !items )
            goto LABEL_29;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              (Il2CppObject *)v28,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v28;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), v28, v24, v25);
          }
        }
      }
      namespaze = klass->_1.namespaze;
      if ( (int)++v27 >= (int)namespaze )
        goto LABEL_22;
    }
LABEL_30:
    sub_1B6432C(AnimationComponent, v23);
  }
LABEL_22:
  if ( !v22 )
LABEL_29:
    sub_1B64324(AnimationComponent);
  v23 = (unsigned int)v22->fields._size;
  if ( (int)v23 <= 0 )
  {
    if ( !(_DWORD)namespaze )
      goto LABEL_30;
    data = (struct SimpleAnimation_EditorState_o *)klass->_1.byval_arg.data;
    this->fields.state = data;
    p_state = &this->fields.state;
  }
  else
  {
    v35 = UnityEngine_Random__Range_69087476(0, v23, 0LL);
    Item = System_Collections_Generic_List_object___get_Item(
             v22,
             v35,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SimpleAnimation_EditorState__get_Item__);
    LODWORD(data) = (_DWORD)Item;
    this->fields.state = (struct SimpleAnimation_EditorState_o *)Item;
    p_state = &this->fields.state;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_state, (int32_t)data, v24, v25);
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

  if ( (byte_49F90AB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F90AB = 1;
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
  int32_t v7; // w3

  if ( (byte_49F90AA & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F90AA = 1;
  }
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mAnimation, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    this->fields.mAnimation = (struct SimpleAnimation_o *)Component_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mAnimation, (int32_t)Component_object, v6, v7);
  }
  return this->fields.mAnimation;
}