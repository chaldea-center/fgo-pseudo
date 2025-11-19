void SyncScrollComponent___ctor(SyncScrollComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_SyncScrollComponent_ScrollSet__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB7AB4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_SyncScrollComponent_ScrollSet__TypeInfo);
    byte_4CB7AB4 = 1;
  }
  v3 = (System_Collections_Generic_List_SyncScrollComponent_ScrollSet__o *)sub_1C6BC54(System_Collections_Generic_List_SyncScrollComponent_ScrollSet__TypeInfo);
  System_Collections_Generic_List_SyncScrollComponent_ScrollSet____ctor(
    v3,
    (const MethodInfo_38BEA3C *)Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet___ctor__);
  this->fields.targetScrolls = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.targetScrolls, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SyncScrollComponent__AddTarget(
        SyncScrollComponent_o *this,
        UIScrollView_o *scrollView,
        UIScrollBar_o *scrollBar,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  SyncScrollComponent_ScrollSet_o v8; // x1 OVERLAPPED
  System_Collections_Generic_List_EventDelegate__o *onChange; // x22
  EventDelegate_Callback_o *v10; // x23
  struct System_Collections_Generic_List_SyncScrollComponent_ScrollSet__o *targetScrolls; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  struct SyncScrollComponent_ScrollSet_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  CGThumbnailListItem_o *v20; // x0
  SyncScrollComponent_ScrollSet_o v21; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4CB7AB2 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__Add__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SyncScrollComponent_OnScrollBar__);
    byte_4CB7AB2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollView, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0, 0);
    if ( !v7 )
    {
      if ( !scrollBar )
        goto LABEL_18;
      onChange = scrollBar->fields.onChange;
      v10 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(v10, (Il2CppObject *)this, Method_SyncScrollComponent_OnScrollBar__, 0);
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Add(onChange, v10, 0);
      targetScrolls = this->fields.targetScrolls;
      v21.fields.scrollView = scrollView;
      v21.fields.scrollBar = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v21, (int32_t)scrollView, v12, v13);
      v21.fields.scrollBar = scrollBar;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v21.fields.scrollBar, (int32_t)scrollBar, v14, v15);
      if ( !targetScrolls
        || (v8 = v21,
            items = targetScrolls->fields._items,
            v18 = Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__Add__,
            ++targetScrolls->fields._version,
            !items) )
      {
LABEL_18:
        sub_1C6BC60(v7, v8.fields.scrollView);
      }
      size = targetScrolls->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_SyncScrollComponent_ScrollSet___AddWithResize(
          targetScrolls,
          v8,
          *(const MethodInfo_38BF2BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = (CGThumbnailListItem_o *)(&items->obj + size);
        targetScrolls->fields._size = size + 1;
        v20->fields.sortValue0 = (int64_t)v8.fields.scrollView;
        v20 = (CGThumbnailListItem_o *)((char *)v20 + 32);
        v20->monitor = v8.fields.scrollBar;
        sub_1C6B9AC(v20, 0, (int32_t)v8.fields.scrollBar, v16);
      }
    }
  }
}


void SyncScrollComponent__OnDestroy(SyncScrollComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_SyncScrollComponent_ScrollSet__o *targetScrolls; // x0
  UnityEngine_Object_o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v9; // x21
  struct System_Collections_Generic_List_SyncScrollComponent_ScrollSet__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  _OWORD v13[2]; // [xsp+0h] [xbp-90h] BYREF
  __int128 v14; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Object_o *x[2]; // [xsp+30h] [xbp-60h]

  if ( (byte_4CB7AB1 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__get_Current__);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SyncScrollComponent_OnScrollBar__);
    byte_4CB7AB1 = 1;
  }
  v14 = 0u;
  *(_OWORD *)x = 0u;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.targetScrolls, 0) )
  {
    targetScrolls = this->fields.targetScrolls;
    if ( !targetScrolls )
      goto LABEL_19;
    System_Collections_Generic_List_SyncScrollComponent_ScrollSet___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v13,
      targetScrolls,
      (const MethodInfo_38BFE14 *)Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__GetEnumerator__);
    v14 = v13[0];
    *(_OWORD *)x = v13[1];
    while ( System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet___MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&v14,
              (const MethodInfo_3599B64 *)Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__MoveNext__) )
    {
      v5 = x[1];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = UnityEngine_Object__op_Inequality(v5, 0, 0);
      if ( v6 )
      {
        if ( !v5 )
          sub_1C6BC60(v6, v7);
        monitor = (System_Collections_Generic_List_EventDelegate__o *)v5[4].monitor;
        v9 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(v9, (Il2CppObject *)this, Method_SyncScrollComponent_OnScrollBar__, 0);
        if ( !EventDelegate_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
        EventDelegate__Remove(monitor, v9, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (const MethodInfo_3599B60 *)Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__Dispose__);
    v10 = this->fields.targetScrolls;
    if ( !v10 )
LABEL_19:
      sub_1C6BC60(targetScrolls, v3);
    size = v10->fields._size;
    v12 = v10->fields._version + 1;
    v10->fields._size = 0;
    v10->fields._version = v12;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0);
  }
}


void SyncScrollComponent__OnScrollBar(SyncScrollComponent_o *this, const MethodInfo *method)
{
  struct UIProgressBar_o *current; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v5; // x20
  __int64 v6; // x1
  System_Collections_Generic_List_SyncScrollComponent_ScrollSet__o *targetScrolls; // x0
  __int128 v8; // kr00_16
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1
  float value; // s0
  __int64 v14; // x0
  __int64 v15; // x1
  _OWORD v16[2]; // [xsp+0h] [xbp-80h] BYREF
  __int128 v17; // [xsp+20h] [xbp-60h] BYREF
  __int128 v18; // [xsp+30h] [xbp-50h]

  if ( (byte_4CB7AB3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UIProgressBar_TypeInfo);
    sub_1C6BA08(&UIScrollBar_TypeInfo);
    byte_4CB7AB3 = 1;
  }
  v17 = 0u;
  v18 = 0u;
  if ( !this->fields.ignoreCallbacks
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.targetScrolls, 0) )
  {
    current = UIProgressBar_TypeInfo->static_fields->current;
    if ( current
      && (naturalAligment = UIScrollBar_TypeInfo->_2.naturalAligment,
          current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (UIScrollBar_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] == UIScrollBar_TypeInfo )
        v5 = (UnityEngine_Object_o *)UIProgressBar_TypeInfo->static_fields->current;
      else
        v5 = 0;
    }
    else
    {
      v5 = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v5, 0, 0) )
    {
      targetScrolls = this->fields.targetScrolls;
      this->fields.ignoreCallbacks = 1;
      if ( !targetScrolls )
        sub_1C6BC60(0, v6);
      System_Collections_Generic_List_SyncScrollComponent_ScrollSet___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v16,
        targetScrolls,
        (const MethodInfo_38BFE14 *)Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__GetEnumerator__);
      v17 = v16[0];
      v18 = v16[1];
      while ( System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet___MoveNext(
                (System_Collections_Generic_List_Enumerator_T__o *)&v17,
                (const MethodInfo_3599B64 *)Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__MoveNext__) )
      {
        v8 = v18;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v9 = UnityEngine_Object__op_Inequality(*((UnityEngine_Object_o **)&v8 + 1), v5, 0);
        if ( v9 )
        {
          if ( !v5 )
            sub_1C6BC60(v9, v10);
          value = UIProgressBar__get_value((UIProgressBar_o *)v5, 0);
          if ( !*((_QWORD *)&v8 + 1) )
            sub_1C6BC60(v11, v12);
          UIProgressBar__set_value(*((UIProgressBar_o **)&v8 + 1), value, 0);
          if ( !(_QWORD)v8 )
            sub_1C6BC60(v14, v15);
          UIScrollView__OnScrollBar((UIScrollView_o *)v8, 0);
        }
      }
      System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet___Dispose(
        (System_Collections_Generic_List_Enumerator_T__o *)&v17,
        (const MethodInfo_3599B60 *)Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__Dispose__);
      this->fields.ignoreCallbacks = 0;
    }
  }
}


void SyncScrollComponent__Start(SyncScrollComponent_o *this, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  struct SyncScrollComponent_ScrollSet_array *scrolls; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x21
  UIScrollBar_o **p_scrollBar; // x22

  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.scrolls, 0);
  if ( !IsNullOrEmpty )
  {
    scrolls = this->fields.scrolls;
    if ( !scrolls )
      sub_1C6BC60(IsNullOrEmpty, v4);
    max_length = scrolls->max_length;
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      p_scrollBar = &scrolls->m_Items[0].fields.scrollBar;
      do
      {
        if ( v8 >= (unsigned int)max_length )
          sub_1C6BC68(IsNullOrEmpty);
        SyncScrollComponent__AddTarget(this, (UIScrollView_o *)*(p_scrollBar - 1), *p_scrollBar, v5);
        LODWORD(max_length) = scrolls->max_length;
        ++v8;
        p_scrollBar += 2;
      }
      while ( (__int64)v8 < (int)max_length );
    }
  }
}