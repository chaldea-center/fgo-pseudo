void TweenSynchronize___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C468DA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_UITweener___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UITweener__TypeInfo);
    sub_1C37058(&TweenSynchronize_TypeInfo);
    byte_4C468DA = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UITweener__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UITweener___ctor__);
  TweenSynchronize_TypeInfo->static_fields->tweenerList = (struct System_Collections_Generic_List_UITweener__o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)TweenSynchronize_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void TweenSynchronize___ctor(TweenSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TweenSynchronize__Awake(TweenSynchronize_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  struct UITweener_o **p_tweener; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  TweenSynchronize_c *v7; // x0
  System_Collections_Generic_List_object__o *tweenerList; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  TweenSynchronize_c *v11; // x0
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4C468D7 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UITweener___);
    sub_1C37058(&Method_System_Collections_Generic_List_UITweener__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UITweener__Contains__);
    sub_1C37058(&TweenSynchronize_TypeInfo);
    byte_4C468D7 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UITweener___);
  this->fields.tweener = (struct UITweener_o *)Component_object;
  p_tweener = &this->fields.tweener;
  sub_1C36FFC((CGThumbnailListItem_o *)p_tweener, (int32_t)Component_object, v5, v6);
  v7 = TweenSynchronize_TypeInfo;
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v7 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v7->static_fields->tweenerList;
  if ( !tweenerList )
    goto LABEL_14;
  if ( System_Collections_Generic_List_object___Contains(
         tweenerList,
         (Il2CppObject *)*p_tweener,
         (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_UITweener__Contains__) )
  {
    return;
  }
  v11 = TweenSynchronize_TypeInfo;
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v11 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v11->static_fields->tweenerList;
  if ( !tweenerList
    || (v12 = (Il2CppObject *)*p_tweener,
        items = tweenerList->fields._items,
        v14 = Method_System_Collections_Generic_List_UITweener__Add__,
        ++tweenerList->fields._version,
        !items) )
  {
LABEL_14:
    sub_1C372B4(tweenerList);
  }
  size = tweenerList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      tweenerList,
      v12,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    tweenerList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v12;
    sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v9, v10);
  }
}


void TweenSynchronize__OnDestroy(TweenSynchronize_o *this, const MethodInfo *method)
{
  TweenSynchronize_c *v3; // x0
  System_Collections_Generic_List_object__o *tweenerList; // x0

  if ( (byte_4C468D8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_UITweener__Remove__);
    sub_1C37058(&TweenSynchronize_TypeInfo);
    byte_4C468D8 = 1;
  }
  v3 = TweenSynchronize_TypeInfo;
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v3 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v3->static_fields->tweenerList;
  if ( !tweenerList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___Remove(
    tweenerList,
    (Il2CppObject *)this->fields.tweener,
    (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_UITweener__Remove__);
}


void TweenSynchronize__synchronize(TweenSynchronize_o *this, const MethodInfo *method)
{
  TweenSynchronize_c *v3; // x0
  System_Collections_Generic_List_object__o *tweenerList; // x0
  _BOOL8 v5; // x0
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *tweener; // x21
  _BOOL8 v9; // x0
  struct UITweener_o *v10; // x8
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C468D9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UITweener__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_UITweener__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&TweenSynchronize_TypeInfo);
    byte_4C468D9 = 1;
  }
  v3 = TweenSynchronize_TypeInfo;
  memset(&v12, 0, sizeof(v12));
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v3 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v3->static_fields->tweenerList;
  if ( !tweenerList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    tweenerList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_UITweener__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__);
    if ( !v5 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1C372B4(v5);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12.fields._current, 0);
    if ( !gameObject )
      sub_1C372B4(0);
    if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    {
      tweener = (UnityEngine_Object_o *)this->fields.tweener;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, tweener, 0);
      if ( v9 )
      {
        v10 = this->fields.tweener;
        if ( !v10 )
          sub_1C372B4(v9);
        if ( v10->fields.duration == *(float *)&current[3].monitor )
        {
          ((void (__fastcall *)(struct UITweener_o *, Il2CppObject *, const MethodInfo *))v10->klass->vtable._8_SynchronizeTween.methodPtr)(
            this->fields.tweener,
            current,
            v10->klass->vtable._8_SynchronizeTween.method);
          break;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__);
}