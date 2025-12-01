void EventInfoAreaImprovementSlideComponent___ctor(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  *(_OWORD *)&this->fields.slideInStartedPosition.fields.x = xmmword_CEF460;
  *(_QWORD *)&this->fields.slideDownEndedPosition.fields.y = 3251109888LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoAreaImprovementSlideComponent__EndSlideDown(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_endCallbackAction; // x0
  System_Action_o *endCallbackAction; // t1

  endCallbackAction = this->fields.endCallbackAction;
  p_endCallbackAction = (GrandQuestFolderBoardItem_o *)&this->fields.endCallbackAction;
  p_endCallbackAction->klass = 0;
  sub_1C71354(p_endCallbackAction, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(endCallbackAction, 0);
}


void EventInfoAreaImprovementSlideComponent__EndSlideIn(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_endCallbackAction; // x0
  System_Action_o *endCallbackAction; // t1

  endCallbackAction = this->fields.endCallbackAction;
  p_endCallbackAction = (GrandQuestFolderBoardItem_o *)&this->fields.endCallbackAction;
  p_endCallbackAction->klass = 0;
  sub_1C71354(p_endCallbackAction, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4CC777C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC777C = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0, 0) )
  {
    v5 = this->fields.infoObject;
    if ( !v5 )
      sub_1C71608(0, v4);
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

  if ( (byte_4CC777D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC777D = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0, 0) )
  {
    v5 = this->fields.infoObject;
    if ( !v5 )
      sub_1C71608(0, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  intptr_t v15; // x10
  float v16; // w11
  System_Collections_Generic_List_object__o *klass; // x20
  EventDelegate_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4CC777E & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C713B0(&StringLiteral_6023/*"EndSlideDown"*/);
    byte_4CC777E = 1;
  }
  this->fields.endCallbackAction = endCallbackAction;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.endCallbackAction,
    (int32_t)endCallbackAction,
    (int32_t)method,
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
                                             (const MethodInfo_31A2DE8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  v12 = gameObject;
  if ( !byte_4CC0D09 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  if ( !v12 )
    goto LABEL_12;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  v12[5].monitor = *(void **)&static_fields->zeroVector.fields.x;
  *(float *)&v12[5].fields.m_CachedPtr = z;
  v15 = *(_QWORD *)&this->fields.slideDownEndedPosition.fields.x;
  v16 = this->fields.slideDownEndedPosition.fields.z;
  LODWORD(v12[2].monitor) = 1045220557;
  LODWORD(v12[1].monitor) = 3;
  *((float *)&v12[6].klass + 1) = v16;
  *(intptr_t *)((char *)&v12[5].fields.m_CachedPtr + 4) = v15;
  klass = (System_Collections_Generic_List_object__o *)v12[3].klass;
  v18 = (EventDelegate_o *)sub_1C715FC(EventDelegate_TypeInfo);
  EventDelegate___ctor_49641492(v18, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6023/*"EndSlideDown"*/, 0);
  if ( !klass
    || (items = klass->fields._items,
        v26 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++klass->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C71608(gameObject, v11);
  }
  size = klass->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v18,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    klass->fields._size = size + 1;
    v28 = &items->obj.klass + size;
    v28[4] = (Il2CppClass *)v18;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v18, v19, v20, v21, v22, v23, v24);
  }
}


void EventInfoAreaImprovementSlideComponent__SlideIn(
        EventInfoAreaImprovementSlideComponent_o *this,
        System_Action_o *endCallbackAction,
        const MethodInfo *method)
{
  UnityEngine_Object_o *infoObject; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x21
  System_Collections_Generic_List_object__o *klass; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  intptr_t v17; // d0
  float z; // s1
  EventDelegate_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  void *v30; // [xsp+0h] [xbp-40h]

  if ( (byte_4CC777F & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_6024/*"EndSlideIn"*/);
    byte_4CC777F = 1;
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
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.endCallbackAction,
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
                                        (const MethodInfo_31A2DE8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    v30 = *(void **)&this->fields.slideInStartedPosition.fields.x;
    if ( !v13 )
      goto LABEL_17;
    v14 = v13;
    *(float *)&v13[5].fields.m_CachedPtr = this->fields.slideInStartedPosition.fields.z;
    v13[5].monitor = v30;
    if ( !byte_4CC0D09 )
    {
      sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
    }
    klass = (System_Collections_Generic_List_object__o *)v14[3].klass;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v17 = *(_QWORD *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    LODWORD(v14[2].monitor) = 1045220557;
    LODWORD(v14[1].monitor) = 2;
    *(intptr_t *)((char *)&v14[5].fields.m_CachedPtr + 4) = v17;
    *((float *)&v14[6].klass + 1) = z;
    v19 = (EventDelegate_o *)sub_1C715FC(EventDelegate_TypeInfo);
    EventDelegate___ctor_49641492(v19, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6024/*"EndSlideIn"*/, 0);
    if ( !klass
      || (items = klass->fields._items,
          v27 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++klass->fields._version,
          !items) )
    {
LABEL_17:
      sub_1C71608(v13, v12);
    }
    size = klass->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        klass,
        (Il2CppObject *)v19,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = &items->obj.klass + size;
      klass->fields._size = size + 1;
      v29[4] = (Il2CppClass *)v19;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v29 + 4), (int32_t)v19, v20, v21, v22, v23, v24, v25);
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