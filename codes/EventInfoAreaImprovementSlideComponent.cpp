void EventInfoAreaImprovementSlideComponent___ctor(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  *(_OWORD *)&this->fields.slideInStartedPosition.fields.x = xmmword_C0EEF0;
  *(_QWORD *)&this->fields.slideDownEndedPosition.fields.y = 3251109888LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoAreaImprovementSlideComponent__EndSlideDown(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_endCallbackAction; // x0
  System_Action_o *endCallbackAction; // t1

  endCallbackAction = this->fields.endCallbackAction;
  p_endCallbackAction = (CGThumbnailListItem_o *)&this->fields.endCallbackAction;
  p_endCallbackAction->klass = 0;
  sub_1C36FFC(p_endCallbackAction, 0, v2, v3);
  ActionExtensions__Call(endCallbackAction, 0);
}


void EventInfoAreaImprovementSlideComponent__EndSlideIn(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_endCallbackAction; // x0
  System_Action_o *endCallbackAction; // t1

  endCallbackAction = this->fields.endCallbackAction;
  p_endCallbackAction = (CGThumbnailListItem_o *)&this->fields.endCallbackAction;
  p_endCallbackAction->klass = 0;
  sub_1C36FFC(p_endCallbackAction, 0, v2, v3);
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
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4C43336 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C43336 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0, 0) )
  {
    v4 = this->fields.infoObject;
    if ( !v4 )
      sub_1C372B4(0);
    UnityEngine_GameObject__SetActive(v4, 1, 0);
    GameObjectExtensions__ResetLocalPosition(this->fields.infoObject, 0);
  }
}


void EventInfoAreaImprovementSlideComponent__SetupHidden(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *infoObject; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4C43337 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C43337 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0, 0) )
  {
    v4 = this->fields.infoObject;
    if ( !v4 )
      sub_1C372B4(0);
    UnityEngine_GameObject__SetActive(v4, 0, 0);
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
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  intptr_t v10; // x10
  float v11; // w11
  System_Collections_Generic_List_object__o *klass; // x20
  EventDelegate_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4C43338 & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C37058(&StringLiteral_6031/*"EndSlideDown"*/);
    byte_4C43338 = 1;
  }
  this->fields.endCallbackAction = endCallbackAction;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.endCallbackAction, (int32_t)endCallbackAction, (int32_t)method, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                             gameObject,
                                             (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  v7 = gameObject;
  if ( !byte_4C3C921 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v7 )
    goto LABEL_12;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  v7[5].monitor = *(void **)&static_fields->zeroVector.fields.x;
  *(float *)&v7[5].fields.m_CachedPtr = z;
  v10 = *(_QWORD *)&this->fields.slideDownEndedPosition.fields.x;
  v11 = this->fields.slideDownEndedPosition.fields.z;
  LODWORD(v7[2].monitor) = 1045220557;
  LODWORD(v7[1].monitor) = 3;
  *((float *)&v7[6].klass + 1) = v11;
  *(intptr_t *)((char *)&v7[5].fields.m_CachedPtr + 4) = v10;
  klass = (System_Collections_Generic_List_object__o *)v7[3].klass;
  v13 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
  EventDelegate___ctor_49274436(v13, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6031/*"EndSlideDown"*/, 0);
  if ( !klass
    || (items = klass->fields._items,
        v17 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++klass->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C372B4(gameObject);
  }
  size = klass->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v13,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    klass->fields._size = size + 1;
    v19 = &items->obj.klass + size;
    v19[4] = (Il2CppClass *)v13;
    sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
  }
}


void EventInfoAreaImprovementSlideComponent__SlideIn(
        EventInfoAreaImprovementSlideComponent_o *this,
        System_Action_o *endCallbackAction,
        const MethodInfo *method)
{
  UnityEngine_Object_o *infoObject; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x21
  System_Collections_Generic_List_object__o *klass; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  intptr_t v12; // d0
  float z; // s1
  EventDelegate_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  void *v21; // [xsp+0h] [xbp-40h]

  if ( (byte_4C43339 & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_6032/*"EndSlideIn"*/);
    byte_4C43339 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(infoObject, 0, 0) )
  {
    ActionExtensions__Call(endCallbackAction, 0);
  }
  else
  {
    this->fields.endCallbackAction = endCallbackAction;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.endCallbackAction, (int32_t)endCallbackAction, v6, v7);
    v8 = this->fields.infoObject;
    if ( !v8 )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(v8, 1, 0);
    v8 = this->fields.infoObject;
    if ( !v8 )
      goto LABEL_17;
    v8 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                       v8,
                                       (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    v21 = *(void **)&this->fields.slideInStartedPosition.fields.x;
    if ( !v8 )
      goto LABEL_17;
    v9 = v8;
    *(float *)&v8[5].fields.m_CachedPtr = this->fields.slideInStartedPosition.fields.z;
    v8[5].monitor = v21;
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    klass = (System_Collections_Generic_List_object__o *)v9[3].klass;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v12 = *(_QWORD *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    LODWORD(v9[2].monitor) = 1045220557;
    LODWORD(v9[1].monitor) = 2;
    *(intptr_t *)((char *)&v9[5].fields.m_CachedPtr + 4) = v12;
    *((float *)&v9[6].klass + 1) = z;
    v14 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
    EventDelegate___ctor_49274436(v14, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6032/*"EndSlideIn"*/, 0);
    if ( !klass
      || (items = klass->fields._items,
          v18 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++klass->fields._version,
          !items) )
    {
LABEL_17:
      sub_1C372B4(v8);
    }
    size = klass->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        klass,
        (Il2CppObject *)v14,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = &items->obj.klass + size;
      klass->fields._size = size + 1;
      v20[4] = (Il2CppClass *)v14;
      sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
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