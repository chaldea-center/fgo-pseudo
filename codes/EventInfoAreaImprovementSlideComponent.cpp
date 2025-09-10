void EventInfoAreaImprovementSlideComponent___ctor(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  *(_OWORD *)&this->fields.slideInStartedPosition.fields.x = xmmword_C09B90;
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
  sub_1C2D434(p_endCallbackAction, 0, v2, v3);
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
  sub_1C2D434(p_endCallbackAction, 0, v2, v3);
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

  if ( (byte_4C276B3 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C276B3 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0, 0) )
  {
    v5 = this->fields.infoObject;
    if ( !v5 )
      sub_1C2D6EC(0, v4);
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

  if ( (byte_4C276B4 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C276B4 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0, 0) )
  {
    v5 = this->fields.infoObject;
    if ( !v5 )
      sub_1C2D6EC(0, v4);
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
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  intptr_t v11; // x10
  float v12; // w11
  System_Collections_Generic_List_object__o *klass; // x20
  EventDelegate_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4C276B5 & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C2D490(&StringLiteral_6022/*"EndSlideDown"*/);
    byte_4C276B5 = 1;
  }
  this->fields.endCallbackAction = endCallbackAction;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endCallbackAction, (int32_t)endCallbackAction, (int32_t)method, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                             gameObject,
                                             (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  v8 = gameObject;
  if ( !byte_4C20DA1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v8 )
    goto LABEL_12;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  v8[5].monitor = *(void **)&static_fields->zeroVector.fields.x;
  *(float *)&v8[5].fields.m_CachedPtr = z;
  v11 = *(_QWORD *)&this->fields.slideDownEndedPosition.fields.x;
  v12 = this->fields.slideDownEndedPosition.fields.z;
  LODWORD(v8[2].monitor) = 1045220557;
  LODWORD(v8[1].monitor) = 3;
  *((float *)&v8[6].klass + 1) = v12;
  *(intptr_t *)((char *)&v8[5].fields.m_CachedPtr + 4) = v11;
  klass = (System_Collections_Generic_List_object__o *)v8[3].klass;
  v14 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
  EventDelegate___ctor_49171260(v14, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6022/*"EndSlideDown"*/, 0);
  if ( !klass
    || (items = klass->fields._items,
        v18 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++klass->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C2D6EC(gameObject, v7);
  }
  size = klass->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v14,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    klass->fields._size = size + 1;
    v20 = &items->obj.klass + size;
    v20[4] = (Il2CppClass *)v14;
    sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
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
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x21
  System_Collections_Generic_List_object__o *klass; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  intptr_t v13; // d0
  float z; // s1
  EventDelegate_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  void *v22; // [xsp+0h] [xbp-40h]

  if ( (byte_4C276B6 & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6023/*"EndSlideIn"*/);
    byte_4C276B6 = 1;
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endCallbackAction, (int32_t)endCallbackAction, v6, v7);
    v9 = this->fields.infoObject;
    if ( !v9 )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(v9, 1, 0);
    v9 = this->fields.infoObject;
    if ( !v9 )
      goto LABEL_17;
    v9 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                       v9,
                                       (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    v22 = *(void **)&this->fields.slideInStartedPosition.fields.x;
    if ( !v9 )
      goto LABEL_17;
    v10 = v9;
    *(float *)&v9[5].fields.m_CachedPtr = this->fields.slideInStartedPosition.fields.z;
    v9[5].monitor = v22;
    if ( !byte_4C20DA1 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    klass = (System_Collections_Generic_List_object__o *)v10[3].klass;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v13 = *(_QWORD *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    LODWORD(v10[2].monitor) = 1045220557;
    LODWORD(v10[1].monitor) = 2;
    *(intptr_t *)((char *)&v10[5].fields.m_CachedPtr + 4) = v13;
    *((float *)&v10[6].klass + 1) = z;
    v15 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
    EventDelegate___ctor_49171260(v15, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6023/*"EndSlideIn"*/, 0);
    if ( !klass
      || (items = klass->fields._items,
          v19 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++klass->fields._version,
          !items) )
    {
LABEL_17:
      sub_1C2D6EC(v9, v8);
    }
    size = klass->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        klass,
        (Il2CppObject *)v15,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      klass->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v15;
      sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v15, v16, v17);
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