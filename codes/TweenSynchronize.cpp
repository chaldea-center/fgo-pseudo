void TweenSynchronize___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D344FB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_UITweener___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_UITweener__TypeInfo);
    sub_1C93AD4(&TweenSynchronize_TypeInfo);
    byte_4D344FB = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UITweener__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UITweener___ctor__);
  TweenSynchronize_TypeInfo->static_fields->tweenerList = (struct System_Collections_Generic_List_UITweener__o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)TweenSynchronize_TypeInfo->static_fields,
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
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  Il2CppObject *v11; // x1
  TweenSynchronize_c *v12; // x0
  System_Collections_Generic_List_object__o *tweenerList; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  TweenSynchronize_c *v20; // x0
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8

  if ( (byte_4D344F8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UITweener___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UITweener__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UITweener__Contains__);
    sub_1C93AD4(&TweenSynchronize_TypeInfo);
    byte_4D344F8 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UITweener___);
  this->fields.tweener = (struct UITweener_o *)Component_object;
  p_tweener = &this->fields.tweener;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_tweener, (int32_t)Component_object, v5, v6, v7, v8, v9, v10);
  v12 = TweenSynchronize_TypeInfo;
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v12 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v12->static_fields->tweenerList;
  if ( !tweenerList )
    goto LABEL_14;
  if ( System_Collections_Generic_List_object___Contains(
         tweenerList,
         (Il2CppObject *)*p_tweener,
         (const MethodInfo_3879D2C *)Method_System_Collections_Generic_List_UITweener__Contains__) )
  {
    return;
  }
  v20 = TweenSynchronize_TypeInfo;
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v20 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v20->static_fields->tweenerList;
  if ( !tweenerList
    || (v11 = (Il2CppObject *)*p_tweener,
        items = tweenerList->fields._items,
        v22 = Method_System_Collections_Generic_List_UITweener__Add__,
        ++tweenerList->fields._version,
        !items) )
  {
LABEL_14:
    sub_1C93D2C(tweenerList, v11);
  }
  size = tweenerList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      tweenerList,
      v11,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    tweenerList->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v11;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
  }
}


void TweenSynchronize__OnDestroy(TweenSynchronize_o *this, const MethodInfo *method)
{
  TweenSynchronize_c *v3; // x0
  System_Collections_Generic_List_object__o *tweenerList; // x0

  if ( (byte_4D344F9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_UITweener__Remove__);
    sub_1C93AD4(&TweenSynchronize_TypeInfo);
    byte_4D344F9 = 1;
  }
  v3 = TweenSynchronize_TypeInfo;
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v3 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v3->static_fields->tweenerList;
  if ( !tweenerList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___Remove(
    tweenerList,
    (Il2CppObject *)this->fields.tweener,
    (const MethodInfo_387AEC4 *)Method_System_Collections_Generic_List_UITweener__Remove__);
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
  UnityEngine_Object_o *tweener; // x21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  struct UITweener_o *v13; // x8
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D344FA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UITweener__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UITweener__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TweenSynchronize_TypeInfo);
    byte_4D344FA = 1;
  }
  v3 = TweenSynchronize_TypeInfo;
  memset(&v15, 0, sizeof(v15));
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v3 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v3->static_fields->tweenerList;
  if ( !tweenerList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    tweenerList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_UITweener__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__);
    if ( !v5 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_1C93D2C(v5, v6);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15.fields._current, 0);
    if ( !gameObject )
      sub_1C93D2C(0, v9);
    if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    {
      tweener = (UnityEngine_Object_o *)this->fields.tweener;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, tweener, 0);
      if ( v11 )
      {
        v13 = this->fields.tweener;
        if ( !v13 )
          sub_1C93D2C(v11, v12);
        if ( v13->fields.duration == *(float *)&current[3].monitor )
        {
          ((void (__fastcall *)(struct UITweener_o *, Il2CppObject *, const MethodInfo *))v13->klass->vtable._8_SynchronizeTween.methodPtr)(
            this->fields.tweener,
            current,
            v13->klass->vtable._8_SynchronizeTween.method);
          break;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__);
}