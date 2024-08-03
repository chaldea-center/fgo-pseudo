void __fastcall TweenSynchronize___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF5F0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UITweener___ctor__, v1);
    sub_1B640C8(&System_Collections_Generic_List_UITweener__TypeInfo, v3);
    sub_1B640C8(&TweenSynchronize_TypeInfo, v4);
    byte_49FF5F0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_UITweener__TypeInfo,
                                                      v1,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UITweener___ctor__);
  TweenSynchronize_TypeInfo->static_fields->tweenerList = (struct System_Collections_Generic_List_UITweener__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)TweenSynchronize_TypeInfo->static_fields, (int32_t)v5, v6, v7);
}


void __fastcall TweenSynchronize___ctor(TweenSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TweenSynchronize__Awake(TweenSynchronize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  struct UITweener_o **p_tweener; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  TweenSynchronize_c *v10; // x0
  System_Collections_Generic_List_object__o *tweenerList; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  TweenSynchronize_c *v14; // x0
  Il2CppObject *v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_49FF5ED & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UITweener___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_UITweener__Add__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_UITweener__Contains__, v4);
    sub_1B640C8(&TweenSynchronize_TypeInfo, v5);
    byte_49FF5ED = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UITweener___);
  this->fields.tweener = (struct UITweener_o *)Component_object;
  p_tweener = &this->fields.tweener;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_tweener, (int32_t)Component_object, v8, v9);
  v10 = TweenSynchronize_TypeInfo;
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v10 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v10->static_fields->tweenerList;
  if ( !tweenerList )
    goto LABEL_14;
  if ( System_Collections_Generic_List_object___Contains(
         tweenerList,
         (Il2CppObject *)*p_tweener,
         (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_UITweener__Contains__) )
  {
    return;
  }
  v14 = TweenSynchronize_TypeInfo;
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v14 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v14->static_fields->tweenerList;
  if ( !tweenerList
    || (v15 = (Il2CppObject *)*p_tweener,
        items = tweenerList->fields._items,
        v17 = Method_System_Collections_Generic_List_UITweener__Add__,
        ++tweenerList->fields._version,
        !items) )
  {
LABEL_14:
    sub_1B64324(tweenerList);
  }
  size = tweenerList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      tweenerList,
      v15,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    tweenerList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v15;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v15, v12, v13);
  }
}


void __fastcall TweenSynchronize__OnDestroy(TweenSynchronize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TweenSynchronize_c *v4; // x0
  System_Collections_Generic_List_object__o *tweenerList; // x0

  if ( (byte_49FF5EE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UITweener__Remove__, method);
    sub_1B640C8(&TweenSynchronize_TypeInfo, v3);
    byte_49FF5EE = 1;
  }
  v4 = TweenSynchronize_TypeInfo;
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v4 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v4->static_fields->tweenerList;
  if ( !tweenerList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___Remove(
    tweenerList,
    (Il2CppObject *)this->fields.tweener,
    (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_UITweener__Remove__);
}


void __fastcall TweenSynchronize__synchronize(TweenSynchronize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  TweenSynchronize_c *v8; // x0
  System_Collections_Generic_List_object__o *tweenerList; // x0
  _BOOL8 v10; // x0
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *tweener; // x21
  _BOOL8 v14; // x0
  struct UITweener_o *v15; // x8
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FF5EF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UITweener__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_UITweener__GetEnumerator__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&TweenSynchronize_TypeInfo, v7);
    byte_49FF5EF = 1;
  }
  v8 = TweenSynchronize_TypeInfo;
  memset(&v17, 0, sizeof(v17));
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v8 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v8->static_fields->tweenerList;
  if ( !tweenerList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    tweenerList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UITweener__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__);
    if ( !v10 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1B64324(v10);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17.fields._current, 0LL);
    if ( !gameObject )
      sub_1B64324(0LL);
    if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    {
      tweener = (UnityEngine_Object_o *)this->fields.tweener;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, tweener, 0LL);
      if ( v14 )
      {
        v15 = this->fields.tweener;
        if ( !v15 )
          sub_1B64324(v14);
        if ( v15->fields.duration == *(float *)&current[3].monitor )
        {
          ((void (__fastcall *)(struct UITweener_o *, Il2CppObject *, void *))v15->klass->vtable._8_SynchronizeTween.method)(
            this->fields.tweener,
            current,
            v15->klass[1]._1.image);
          break;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__);
}