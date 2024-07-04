void __fastcall EventInfoAreaImprovementSlideComponent___ctor(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  *(_OWORD *)&this->fields.slideInStartedPosition.fields.x = xmmword_B70EE0;
  *(_QWORD *)&this->fields.slideDownEndedPosition.fields.y = 3251109888LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoAreaImprovementSlideComponent__EndSlideDown(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_endCallbackAction; // x0
  System_Action_o *endCallbackAction; // t1

  endCallbackAction = this->fields.endCallbackAction;
  p_endCallbackAction = (ServantStatusBattleListViewItem_o *)&this->fields.endCallbackAction;
  p_endCallbackAction->klass = 0LL;
  sub_1B00C70(p_endCallbackAction, 0, v2, v3);
  ActionExtensions__Call(endCallbackAction, 0LL);
}


void __fastcall EventInfoAreaImprovementSlideComponent__EndSlideIn(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_endCallbackAction; // x0
  System_Action_o *endCallbackAction; // t1

  endCallbackAction = this->fields.endCallbackAction;
  p_endCallbackAction = (ServantStatusBattleListViewItem_o *)&this->fields.endCallbackAction;
  p_endCallbackAction->klass = 0LL;
  sub_1B00C70(p_endCallbackAction, 0, v2, v3);
  ActionExtensions__Call(endCallbackAction, 0LL);
}


void __fastcall EventInfoAreaImprovementSlideComponent__SetupBeforeSlidePosition(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetLocalPosition(gameObject, 0LL);
}


void __fastcall EventInfoAreaImprovementSlideComponent__SetupDisp(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *infoObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_48E32BF & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E32BF = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    v5 = this->fields.infoObject;
    if ( !v5 )
      sub_1B00F28(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 1, 0LL);
    GameObjectExtensions__ResetLocalPosition(this->fields.infoObject, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementSlideComponent__SetupHidden(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *infoObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_48E32C0 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E32C0 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    v5 = this->fields.infoObject;
    if ( !v5 )
      sub_1B00F28(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
    GameObjectExtensions__SetLocalPosition(this->fields.infoObject, this->fields.slideInStartedPosition, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementSlideComponent__SetupSlideDownPosition(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.slideDownEndedPosition, 0LL);
}


void __fastcall EventInfoAreaImprovementSlideComponent__SlideDown(
        EventInfoAreaImprovementSlideComponent_o *this,
        System_Action_o *endCallbackAction,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  __int64 v14; // x10
  float v15; // w11
  System_Collections_Generic_List_object__o *klass; // x20
  EventDelegate_o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_48E32C1 & 1) == 0 )
  {
    sub_1B00CCC(&EventDelegate_TypeInfo, endCallbackAction);
    sub_1B00CCC(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v7);
    sub_1B00CCC(&StringLiteral_5933/*"EndSlideDown"*/, v8);
    byte_48E32C1 = 1;
  }
  this->fields.endCallbackAction = endCallbackAction;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.endCallbackAction,
    (int32_t)endCallbackAction,
    (int32_t)method,
    v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2DADD20 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  v11 = gameObject;
  if ( !byte_48DD9F1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v10);
    byte_48DD9F1 = 1;
  }
  if ( !v11 )
    goto LABEL_12;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  v11[5].monitor = *(void **)&static_fields->zeroVector.fields.x;
  *(float *)&v11[5].fields.m_CachedPtr = z;
  v14 = *(_QWORD *)&this->fields.slideDownEndedPosition.fields.x;
  v15 = this->fields.slideDownEndedPosition.fields.z;
  LODWORD(v11[2].monitor) = 1045220557;
  LODWORD(v11[1].monitor) = 3;
  *((float *)&v11[6].klass + 1) = v15;
  *(_QWORD *)(&v11[5].fields + 1) = v14;
  klass = (System_Collections_Generic_List_object__o *)v11[3].klass;
  v17 = (EventDelegate_o *)sub_1B00F18(EventDelegate_TypeInfo);
  EventDelegate___ctor_45650468(v17, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5933/*"EndSlideDown"*/, 0LL);
  if ( !klass
    || (items = klass->fields._items,
        v21 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++klass->fields._version,
        !items) )
  {
LABEL_12:
    sub_1B00F28(gameObject, v10);
  }
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v17,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    klass->fields._size = size + 1;
    v23 = &items->obj.klass + size;
    v23[4] = (Il2CppClass *)v17;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
  }
}


void __fastcall EventInfoAreaImprovementSlideComponent__SlideIn(
        EventInfoAreaImprovementSlideComponent_o *this,
        System_Action_o *endCallbackAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *infoObject; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x21
  System_Collections_Generic_List_object__o *klass; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v17; // d0
  float z; // s1
  EventDelegate_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  void *v26; // [xsp+0h] [xbp-40h]

  if ( (byte_48E32C2 & 1) == 0 )
  {
    sub_1B00CCC(&EventDelegate_TypeInfo, endCallbackAction);
    sub_1B00CCC(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v6);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_5934/*"EndSlideIn"*/, v8);
    byte_48E32C2 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    ActionExtensions__Call(endCallbackAction, 0LL);
  }
  else
  {
    this->fields.endCallbackAction = endCallbackAction;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&this->fields.endCallbackAction,
      (int32_t)endCallbackAction,
      v10,
      v11);
    v13 = this->fields.infoObject;
    if ( !v13 )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(v13, 1, 0LL);
    v13 = this->fields.infoObject;
    if ( !v13 )
      goto LABEL_17;
    v13 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                        v13,
                                        (const MethodInfo_2DADD20 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    v26 = *(void **)&this->fields.slideInStartedPosition.fields.x;
    if ( !v13 )
      goto LABEL_17;
    v14 = v13;
    v13[5].fields.m_CachedPtr = LODWORD(this->fields.slideInStartedPosition.fields.z);
    v13[5].monitor = v26;
    if ( !byte_48DD9F1 )
    {
      sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v12);
      byte_48DD9F1 = 1;
    }
    klass = (System_Collections_Generic_List_object__o *)v14[3].klass;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v17 = *(_QWORD *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    LODWORD(v14[2].monitor) = 1045220557;
    LODWORD(v14[1].monitor) = 2;
    *(_QWORD *)(&v14[5].fields + 1) = v17;
    *((float *)&v14[6].klass + 1) = z;
    v19 = (EventDelegate_o *)sub_1B00F18(EventDelegate_TypeInfo);
    EventDelegate___ctor_45650468(v19, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5934/*"EndSlideIn"*/, 0LL);
    if ( !klass
      || (items = klass->fields._items,
          v23 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++klass->fields._version,
          !items) )
    {
LABEL_17:
      sub_1B00F28(v13, v12);
    }
    size = klass->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        klass,
        (Il2CppObject *)v19,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &items->obj.klass + size;
      klass->fields._size = size + 1;
      v25[4] = (Il2CppClass *)v19;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v19, v20, v21);
    }
  }
}


int32_t __fastcall EventInfoAreaImprovementSlideComponent__get_SpotId(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._SpotId_k__BackingField;
}


void __fastcall EventInfoAreaImprovementSlideComponent__set_SpotId(
        EventInfoAreaImprovementSlideComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SpotId_k__BackingField = value;
}