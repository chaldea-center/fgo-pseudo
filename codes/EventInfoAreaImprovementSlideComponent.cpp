void EventInfoAreaImprovementSlideComponent___ctor(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  *(_OWORD *)&this->fields.slideInStartedPosition.fields.x = xmmword_E9C8B0;
  *(_QWORD *)&this->fields.slideDownEndedPosition.fields.y = 3251109888LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoAreaImprovementSlideComponent__EndSlideDown(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_endCallbackAction; // x0
  System_Action_o *endCallbackAction; // t1

  endCallbackAction = this->fields.endCallbackAction;
  p_endCallbackAction = (MissionNaviTransitionBoardItem_o *)&this->fields.endCallbackAction;
  p_endCallbackAction->klass = 0;
  sub_2213A04(p_endCallbackAction, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(endCallbackAction, 0);
}


void EventInfoAreaImprovementSlideComponent__EndSlideIn(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_endCallbackAction; // x0
  System_Action_o *endCallbackAction; // t1

  endCallbackAction = this->fields.endCallbackAction;
  p_endCallbackAction = (MissionNaviTransitionBoardItem_o *)&this->fields.endCallbackAction;
  p_endCallbackAction->klass = 0;
  sub_2213A04(p_endCallbackAction, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(endCallbackAction, 0);
}


void EventInfoAreaImprovementSlideComponent__SetupBeforeSlidePosition(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__ResetLocalPosition(gameObject, 0);
}


void EventInfoAreaImprovementSlideComponent__SetupDisp(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *infoObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_5970A47 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970A47 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0, 0) )
  {
    v5 = this->fields.infoObject;
    if ( !v5 )
      sub_2213CDC(0, v4);
    UnityEngine_GameObject__SetActive(v5, 1, 0);
    GameObjectExtensions__ResetLocalPosition(this->fields.infoObject, 0);
  }
}


void EventInfoAreaImprovementSlideComponent__SetupHidden(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *infoObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_5970A48 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970A48 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0, 0) )
  {
    v5 = this->fields.infoObject;
    if ( !v5 )
      sub_2213CDC(0, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0);
    GameObjectExtensions__SetLocalPosition(this->fields.infoObject, this->fields.slideInStartedPosition, 0);
  }
}


void EventInfoAreaImprovementSlideComponent__SetupSlideDownPosition(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.slideDownEndedPosition, 0);
}


void EventInfoAreaImprovementSlideComponent__SlideDown(
        EventInfoAreaImprovementSlideComponent_o *this,
        System_Action_o *endCallbackAction,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  float v15; // w10
  intptr_t v16; // x11
  EventDelegate_c *v17; // x0
  System_Collections_Generic_List_object__o *klass; // x20
  EventDelegate_o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_5970A49 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&StringLiteral_6288/*"EndSlideDown"*/);
    byte_5970A49 = 1;
  }
  this->fields.endCallbackAction = endCallbackAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endCallbackAction,
    (int32_t)endCallbackAction,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                             gameObject,
                                             (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  v12 = gameObject;
  if ( !byte_5969AE0 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v12 )
    goto LABEL_12;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  v12[5].monitor = *(void **)&static_fields->zeroVector.fields.x;
  *(float *)&v12[5].fields.m_CachedPtr = z;
  v15 = this->fields.slideDownEndedPosition.fields.z;
  v16 = *(_QWORD *)&this->fields.slideDownEndedPosition.fields.x;
  LODWORD(v12[2].monitor) = 1045220557;
  v17 = EventDelegate_TypeInfo;
  klass = (System_Collections_Generic_List_object__o *)v12[3].klass;
  *(intptr_t *)((char *)&v12[5].fields.m_CachedPtr + 4) = v16;
  *((float *)&v12[6].klass + 1) = v15;
  LODWORD(v12[1].monitor) = 3;
  v19 = (EventDelegate_o *)sub_2213CCC(v17);
  EventDelegate___ctor_56337752(v19, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6288/*"EndSlideDown"*/, 0);
  if ( !klass
    || (items = klass->fields._items,
        v27 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++klass->fields._version,
        !items) )
  {
LABEL_12:
    sub_2213CDC(gameObject, v11);
  }
  size = klass->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v19,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    klass->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v19;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v19, v20, v21, v22, v23, v24, v25);
  }
}


void EventInfoAreaImprovementSlideComponent__SlideIn(
        EventInfoAreaImprovementSlideComponent_o *this,
        System_Action_o *endCallbackAction,
        const MethodInfo *method)
{
  UnityEngine_Object_o *infoObject; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x0
  void *v14; // x9
  int v15; // w10
  UnityEngine_GameObject_o *v16; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *klass; // x20
  intptr_t v19; // d0
  float z; // s1
  EventDelegate_c *v21; // x0
  EventDelegate_o *v22; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_5970A4A & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6289/*"EndSlideIn"*/);
    byte_5970A4A = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, endCallbackAction);
  if ( UnityEngine_Object__op_Equality(infoObject, 0, 0) )
  {
    ActionExtensions__Call(endCallbackAction, 0);
  }
  else
  {
    this->fields.endCallbackAction = endCallbackAction;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.endCallbackAction,
      (int32_t)endCallbackAction,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v13 = this->fields.infoObject;
    if ( !v13 )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(v13, 1, 0);
    v13 = this->fields.infoObject;
    if ( !v13 )
      goto LABEL_17;
    v13 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                        v13,
                                        (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    if ( !v13 )
      goto LABEL_17;
    v14 = *(void **)&this->fields.slideInStartedPosition.fields.x;
    v15 = (unsigned __int8)byte_5969AE0;
    v16 = v13;
    *(float *)&v13[5].fields.m_CachedPtr = this->fields.slideInStartedPosition.fields.z;
    v13[5].monitor = v14;
    if ( !v15 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    klass = (System_Collections_Generic_List_object__o *)v16[3].klass;
    v19 = *(_QWORD *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    v21 = EventDelegate_TypeInfo;
    LODWORD(v16[2].monitor) = 1045220557;
    *(intptr_t *)((char *)&v16[5].fields.m_CachedPtr + 4) = v19;
    *((float *)&v16[6].klass + 1) = z;
    LODWORD(v16[1].monitor) = 2;
    v22 = (EventDelegate_o *)sub_2213CCC(v21);
    EventDelegate___ctor_56337752(v22, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6289/*"EndSlideIn"*/, 0);
    if ( !klass
      || (items = klass->fields._items,
          v30 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++klass->fields._version,
          !items) )
    {
LABEL_17:
      sub_2213CDC(v13, v12);
    }
    size = klass->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        klass,
        (Il2CppObject *)v22,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v32 = &items->obj.klass + size;
      klass->fields._size = size + 1;
      v32[4] = (Il2CppClass *)v22;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v22, v23, v24, v25, v26, v27, v28);
    }
  }
}


int32_t EventInfoAreaImprovementSlideComponent__get_SpotId(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._SpotId_k__BackingField;
}


void EventInfoAreaImprovementSlideComponent__set_SpotId(
        EventInfoAreaImprovementSlideComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SpotId_k__BackingField = value;
}