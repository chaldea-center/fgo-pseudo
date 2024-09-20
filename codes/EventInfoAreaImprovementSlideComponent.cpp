void __fastcall EventInfoAreaImprovementSlideComponent___ctor(
        EventInfoAreaImprovementSlideComponent_o *this,
        const MethodInfo *method)
{
  *(_OWORD *)&this->fields.slideInStartedPosition.fields.x = xmmword_BB4B20;
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
  sub_1B88554(p_endCallbackAction, 0, v2, v3);
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
  sub_1B88554(p_endCallbackAction, 0, v2, v3);
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

  if ( (byte_4A5BA77 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5BA77 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    v5 = this->fields.infoObject;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
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

  if ( (byte_4A5BA78 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5BA78 = 1;
  }
  infoObject = (UnityEngine_Object_o *)this->fields.infoObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(infoObject, 0LL, 0LL) )
  {
    v5 = this->fields.infoObject;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  __int64 v11; // x10
  float v12; // w11
  System_Collections_Generic_List_object__o *klass; // x20
  EventDelegate_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4A5BA79 & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&StringLiteral_5996/*"EndSlideDown"*/);
    byte_4A5BA79 = 1;
  }
  this->fields.endCallbackAction = endCallbackAction;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.endCallbackAction,
    (int32_t)endCallbackAction,
    (int32_t)method,
    v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  v8 = gameObject;
  if ( !byte_4A55CE1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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
  *(_QWORD *)(&v8[5].fields + 1) = v11;
  klass = (System_Collections_Generic_List_object__o *)v8[3].klass;
  v14 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
  EventDelegate___ctor_46787224(v14, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5996/*"EndSlideDown"*/, 0LL);
  if ( !klass
    || (items = klass->fields._items,
        v18 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++klass->fields._version,
        !items) )
  {
LABEL_12:
    sub_1B8880C(gameObject, v7);
  }
  size = klass->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      klass,
      (Il2CppObject *)v14,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    klass->fields._size = size + 1;
    v20 = &items->obj.klass + size;
    v20[4] = (Il2CppClass *)v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
  }
}


void __fastcall EventInfoAreaImprovementSlideComponent__SlideIn(
        EventInfoAreaImprovementSlideComponent_o *this,
        System_Action_o *endCallbackAction,
        const MethodInfo *method)
{
  UnityEngine_Object_o *infoObject; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x21
  System_Collections_Generic_List_object__o *klass; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v13; // d0
  float z; // s1
  EventDelegate_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  void *v22; // [xsp+0h] [xbp-40h]

  if ( (byte_4A5BA7A & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_5997/*"EndSlideIn"*/);
    byte_4A5BA7A = 1;
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
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.endCallbackAction,
      (int32_t)endCallbackAction,
      v6,
      v7);
    v9 = this->fields.infoObject;
    if ( !v9 )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(v9, 1, 0LL);
    v9 = this->fields.infoObject;
    if ( !v9 )
      goto LABEL_17;
    v9 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                       v9,
                                       (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    v22 = *(void **)&this->fields.slideInStartedPosition.fields.x;
    if ( !v9 )
      goto LABEL_17;
    v10 = v9;
    v9[5].fields.m_CachedPtr = LODWORD(this->fields.slideInStartedPosition.fields.z);
    v9[5].monitor = v22;
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    klass = (System_Collections_Generic_List_object__o *)v10[3].klass;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v13 = *(_QWORD *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    LODWORD(v10[2].monitor) = 1045220557;
    LODWORD(v10[1].monitor) = 2;
    *(_QWORD *)(&v10[5].fields + 1) = v13;
    *((float *)&v10[6].klass + 1) = z;
    v15 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
    EventDelegate___ctor_46787224(v15, (UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_5997/*"EndSlideIn"*/, 0LL);
    if ( !klass
      || (items = klass->fields._items,
          v19 = Method_System_Collections_Generic_List_EventDelegate__Add__,
          ++klass->fields._version,
          !items) )
    {
LABEL_17:
      sub_1B8880C(v9, v8);
    }
    size = klass->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        klass,
        (Il2CppObject *)v15,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      klass->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v15;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v15, v16, v17);
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