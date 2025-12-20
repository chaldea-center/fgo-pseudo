void SyncScrollComponent___ctor(SyncScrollComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_SyncScrollComponent_ScrollSet__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2E07A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet___ctor__);
    sub_1C94098(&System_Collections_Generic_List_SyncScrollComponent_ScrollSet__TypeInfo);
    byte_4D2E07A = 1;
  }
  v3 = (System_Collections_Generic_List_SyncScrollComponent_ScrollSet__o *)sub_1C942E4(System_Collections_Generic_List_SyncScrollComponent_ScrollSet__TypeInfo);
  System_Collections_Generic_List_SyncScrollComponent_ScrollSet____ctor(
    v3,
    (const MethodInfo_39290D8 *)Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet___ctor__);
  this->fields.targetScrolls = v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.targetScrolls, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct SyncScrollComponent_ScrollSet_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  GrandQuestFolderBoardItem_o *v32; // x0
  SyncScrollComponent_ScrollSet_o v33; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4D2E078 & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_Callback_TypeInfo);
    sub_1C94098(&EventDelegate_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__Add__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SyncScrollComponent_OnScrollBar__);
    byte_4D2E078 = 1;
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
      v10 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(v10, (Il2CppObject *)this, Method_SyncScrollComponent_OnScrollBar__, 0);
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Add(onChange, v10, 0);
      targetScrolls = this->fields.targetScrolls;
      v33.fields.scrollView = scrollView;
      v33.fields.scrollBar = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v33, (int32_t)scrollView, v12, v13, v14, v15, v16, v17);
      v33.fields.scrollBar = scrollBar;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v33.fields.scrollBar,
        (int32_t)scrollBar,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      if ( !targetScrolls
        || (v8 = v33,
            items = targetScrolls->fields._items,
            v30 = Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__Add__,
            ++targetScrolls->fields._version,
            !items) )
      {
LABEL_18:
        sub_1C942F0(v7, v8.fields.scrollView);
      }
      size = targetScrolls->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_SyncScrollComponent_ScrollSet___AddWithResize(
          targetScrolls,
          v8,
          *(const MethodInfo_3929958 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = (GrandQuestFolderBoardItem_o *)(&items->obj + size);
        targetScrolls->fields._size = size + 1;
        v32->fields.sortValue0 = (int64_t)v8.fields.scrollView;
        v32 = (GrandQuestFolderBoardItem_o *)((char *)v32 + 32);
        v32->monitor = v8.fields.scrollBar;
        sub_1C9403C(v32, 0, (int32_t)v8.fields.scrollBar, v24, v25, v26, v27, v28);
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

  if ( (byte_4D2E077 & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_Callback_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__get_Current__);
    sub_1C94098(&EventDelegate_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__GetEnumerator__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SyncScrollComponent_OnScrollBar__);
    byte_4D2E077 = 1;
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
      (const MethodInfo_392A4B0 *)Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__GetEnumerator__);
    v14 = v13[0];
    *(_OWORD *)x = v13[1];
    while ( System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet___MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&v14,
              (const MethodInfo_35FF710 *)Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__MoveNext__) )
    {
      v5 = x[1];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = UnityEngine_Object__op_Inequality(v5, 0, 0);
      if ( v6 )
      {
        if ( !v5 )
          sub_1C942F0(v6, v7);
        monitor = (System_Collections_Generic_List_EventDelegate__o *)v5[4].monitor;
        v9 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(v9, (Il2CppObject *)this, Method_SyncScrollComponent_OnScrollBar__, 0);
        if ( !EventDelegate_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
        EventDelegate__Remove(monitor, v9, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (const MethodInfo_35FF70C *)Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__Dispose__);
    v10 = this->fields.targetScrolls;
    if ( !v10 )
LABEL_19:
      sub_1C942F0(targetScrolls, v3);
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

  if ( (byte_4D2E079 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__GetEnumerator__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UIProgressBar_TypeInfo);
    sub_1C94098(&UIScrollBar_TypeInfo);
    byte_4D2E079 = 1;
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
        sub_1C942F0(0, v6);
      System_Collections_Generic_List_SyncScrollComponent_ScrollSet___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v16,
        targetScrolls,
        (const MethodInfo_392A4B0 *)Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__GetEnumerator__);
      v17 = v16[0];
      v18 = v16[1];
      while ( System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet___MoveNext(
                (System_Collections_Generic_List_Enumerator_T__o *)&v17,
                (const MethodInfo_35FF710 *)Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__MoveNext__) )
      {
        v8 = v18;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v9 = UnityEngine_Object__op_Inequality(*((UnityEngine_Object_o **)&v8 + 1), v5, 0);
        if ( v9 )
        {
          if ( !v5 )
            sub_1C942F0(v9, v10);
          value = UIProgressBar__get_value((UIProgressBar_o *)v5, 0);
          if ( !*((_QWORD *)&v8 + 1) )
            sub_1C942F0(v11, v12);
          UIProgressBar__set_value(*((UIProgressBar_o **)&v8 + 1), value, 0);
          if ( !(_QWORD)v8 )
            sub_1C942F0(v14, v15);
          UIScrollView__OnScrollBar((UIScrollView_o *)v8, 0);
        }
      }
      System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet___Dispose(
        (System_Collections_Generic_List_Enumerator_T__o *)&v17,
        (const MethodInfo_35FF70C *)Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__Dispose__);
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
      sub_1C942F0(IsNullOrEmpty, v4);
    max_length = scrolls->max_length;
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      p_scrollBar = &scrolls->m_Items[0].fields.scrollBar;
      do
      {
        if ( v8 >= (unsigned int)max_length )
          sub_1C942F8(IsNullOrEmpty);
        SyncScrollComponent__AddTarget(this, (UIScrollView_o *)*(p_scrollBar - 1), *p_scrollBar, v5);
        LODWORD(max_length) = scrolls->max_length;
        ++v8;
        p_scrollBar += 2;
      }
      while ( (__int64)v8 < (int)max_length );
    }
  }
}