void __fastcall EventInfoAreaImprovementSlideComponent___ctor(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  *(_OWORD *)&this->fields.slideInStartedPosition.fields.x = xmmword_BA3330;
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
  sub_1B6406C(p_endCallbackAction, 0, v2, v3);
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
  sub_1B6406C(p_endCallbackAction, 0, v2, v3);
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
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_49FCF0E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FCF0E = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    v4 = this->fields.infoObject;
    if ( !v4 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v4, 1, 0LL);
    GameObjectExtensions__ResetLocalPosition(this->fields.infoObject, 0LL);
  }
}


void __fastcall EventInfoAreaImprovementSlideComponent__SetupHidden(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *infoObject; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_49FCF0F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FCF0F = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    v4 = this->fields.infoObject;
    if ( !v4 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v4, 0, 0LL);
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
  __int64 v11; // x2
  UnityEngine_GameObject_o *v12; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  __int64 v15; // x10
  float v16; // w11
  System_Collections_Generic_List_object__o *klass; // x20
  EventDelegate_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_49FCF10 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_TypeInfo, endCallbackAction);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v7);
    sub_1B640C8(&StringLiteral_5970/*"EndSlideDown"*/, v8);
    byte_49FCF10 = 1;
  }
  this->fields.endCallbackAction = endCallbackAction;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.endCallbackAction,
    (int32_t)endCallbackAction,
    (int32_t)method,
    v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  v12 = gameObject;
  if ( !byte_49F7111 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v10);
    byte_49F7111 = 1;
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
  *(_QWORD *)(&v12[5].fields + 1) = v15;
  klass = (System_Collections_Generic_List_object__o *)v12[3].klass;
  v18 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v10, v11);
  EventDelegate___ctor_46509032(v18, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5970/*"EndSlideDown"*/, 0LL);
  if ( !klass
    || (items = klass->fields._items,
        v22 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++klass->fields._version,
        !items) )
  {
LABEL_12:
    sub_1B64324(gameObject);
  }
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v18,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    klass->fields._size = size + 1;
    v24 = &items->obj.klass + size;
    v24[4] = (Il2CppClass *)v18;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v18, v19, v20);
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
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_GameObject_o *v15; // x21
  System_Collections_Generic_List_object__o *klass; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v18; // d0
  float z; // s1
  EventDelegate_o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  void *v27; // [xsp+0h] [xbp-40h]

  if ( (byte_49FCF11 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_TypeInfo, endCallbackAction);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_5971/*"EndSlideIn"*/, v8);
    byte_49FCF11 = 1;
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
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.endCallbackAction,
      (int32_t)endCallbackAction,
      v10,
      v11);
    v12 = this->fields.infoObject;
    if ( !v12 )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(v12, 1, 0LL);
    v12 = this->fields.infoObject;
    if ( !v12 )
      goto LABEL_17;
    v12 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                        v12,
                                        (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    v27 = *(void **)&this->fields.slideInStartedPosition.fields.x;
    if ( !v12 )
      goto LABEL_17;
    v15 = v12;
    v12[5].fields.m_CachedPtr = LODWORD(this->fields.slideInStartedPosition.fields.z);
    v12[5].monitor = v27;
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v13);
      byte_49F7111 = 1;
    }
    klass = (System_Collections_Generic_List_object__o *)v15[3].klass;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v18 = *(_QWORD *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    LODWORD(v15[2].monitor) = 1045220557;
    LODWORD(v15[1].monitor) = 2;
    *(_QWORD *)(&v15[5].fields + 1) = v18;
    *((float *)&v15[6].klass + 1) = z;
    v20 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v13, v14);
    EventDelegate___ctor_46509032(v20, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5971/*"EndSlideIn"*/, 0LL);
    if ( !klass
      || (items = klass->fields._items,
          v24 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++klass->fields._version,
          !items) )
    {
LABEL_17:
      sub_1B64324(v12);
    }
    size = klass->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        klass,
        (Il2CppObject *)v20,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      klass->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v20;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v20, v21, v22);
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