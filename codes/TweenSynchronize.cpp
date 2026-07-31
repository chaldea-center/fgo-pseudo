void TweenSynchronize___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593C335 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UITweener___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UITweener__TypeInfo);
    sub_21FFC50(&TweenSynchronize_TypeInfo);
    byte_593C335 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UITweener__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UITweener___ctor__);
  TweenSynchronize_TypeInfo->static_fields->tweenerList = (struct System_Collections_Generic_List_UITweener__o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TweenSynchronize_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TweenSynchronize___ctor(TweenSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TweenSynchronize__Awake(TweenSynchronize_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  struct UITweener_o **p_tweener; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  Il2CppObject *v11; // x1
  TweenSynchronize_c *v12; // x0
  TweenSynchronize_c *tweenerList; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_List_object__o *v20; // x8
  struct System_Object_array *items; // x9
  _QWORD *v22; // x10
  __int64 size; // x11
  Il2CppClass **v24; // x0

  if ( (byte_593C332 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UITweener___);
    sub_21FFC50(&Method_System_Collections_Generic_List_UITweener__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UITweener__Contains__);
    sub_21FFC50(&TweenSynchronize_TypeInfo);
    byte_593C332 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UITweener___);
  this->fields.tweener = (struct UITweener_o *)Component_object;
  p_tweener = &this->fields.tweener;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_tweener, (int32_t)Component_object, v5, v6, v7, v8, v9, v10);
  v12 = TweenSynchronize_TypeInfo;
  if ( !*(&TweenSynchronize_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo, v11);
    v12 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (TweenSynchronize_c *)v12->static_fields->tweenerList;
  if ( !tweenerList )
    goto LABEL_14;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)tweenerList,
         (Il2CppObject *)*p_tweener,
         (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_UITweener__Contains__) )
  {
    return;
  }
  tweenerList = TweenSynchronize_TypeInfo;
  if ( !*(&TweenSynchronize_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo, v11);
    tweenerList = TweenSynchronize_TypeInfo;
  }
  v20 = (System_Collections_Generic_List_object__o *)tweenerList->static_fields->tweenerList;
  if ( !v20
    || (items = v20->fields._items,
        v11 = (Il2CppObject *)*p_tweener,
        v22 = Method_System_Collections_Generic_List_UITweener__Add__,
        ++v20->fields._version,
        !items) )
  {
LABEL_14:
    sub_21FFECC(tweenerList, v11);
  }
  size = v20->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      v11,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v24[4] = (Il2CppClass *)v11;
    v20->fields._size = size + 1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
  }
}


void TweenSynchronize__OnDestroy(TweenSynchronize_o *this, const MethodInfo *method)
{
  TweenSynchronize_c *v3; // x0
  System_Collections_Generic_List_object__o *tweenerList; // x0

  if ( (byte_593C333 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UITweener__Remove__);
    sub_21FFC50(&TweenSynchronize_TypeInfo);
    byte_593C333 = 1;
  }
  v3 = TweenSynchronize_TypeInfo;
  if ( !*(&TweenSynchronize_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo, method);
    v3 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v3->static_fields->tweenerList;
  if ( !tweenerList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___Remove(
    tweenerList,
    (Il2CppObject *)this->fields.tweener,
    (const MethodInfo_445101C *)Method_System_Collections_Generic_List_UITweener__Remove__);
}


void TweenSynchronize__synchronize(TweenSynchronize_o *this, const MethodInfo *method)
{
  TweenSynchronize_c *v3; // x0
  System_Collections_Generic_List_object__o *tweenerList; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *tweener; // x21
  __int64 v12; // x1
  struct UITweener_o *v13; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_593C334 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UITweener__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UITweener__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TweenSynchronize_TypeInfo);
    byte_593C334 = 1;
  }
  v3 = TweenSynchronize_TypeInfo;
  memset(&v15, 0, sizeof(v15));
  if ( !*(&TweenSynchronize_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo, method);
    v3 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v3->static_fields->tweenerList;
  if ( !tweenerList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    tweenerList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UITweener__GetEnumerator__);
  v15 = v14;
  v14.fields._list = 0;
  *(_QWORD *)&v14.fields._index = &v15;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__);
    if ( !v5 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_21FFECC(v5, v6);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15.fields._current, 0);
    if ( !gameObject )
      sub_21FFECC(0, v9);
    if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    {
      tweener = (UnityEngine_Object_o *)this->fields.tweener;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, tweener, 0) )
      {
        v13 = this->fields.tweener;
        if ( !v13 )
          sub_21FFECC(0, v12);
        if ( v13->fields.duration == *(float *)&current[3].monitor )
        {
          ((void (__fastcall *)(struct UITweener_o *, Il2CppObject *, const MethodInfo *))v13->klass->vtable._8_SynchronizeTween.methodPtr)(
            v13,
            current,
            v13->klass->vtable._8_SynchronizeTween.method);
          break;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__);
}