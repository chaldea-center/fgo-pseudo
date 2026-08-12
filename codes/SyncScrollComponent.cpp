void SyncScrollComponent___ctor(SyncScrollComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_SyncScrollComponent_ScrollSet__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5972085 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SyncScrollComponent_ScrollSet__TypeInfo);
    byte_5972085 = 1;
  }
  v3 = (System_Collections_Generic_List_SyncScrollComponent_ScrollSet__o *)sub_2213CCC(System_Collections_Generic_List_SyncScrollComponent_ScrollSet__TypeInfo);
  System_Collections_Generic_List_SyncScrollComponent_ScrollSet____ctor(
    v3,
    (const MethodInfo_453E310 *)Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet___ctor__);
  this->fields.targetScrolls = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.targetScrolls, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SyncScrollComponent__AddTarget(
        SyncScrollComponent_o *this,
        UIScrollView_o *scrollView,
        UIScrollBar_o *scrollBar,
        const MethodInfo *method)
{
  __int64 v7; // x1
  _BOOL8 v8; // x0
  SyncScrollComponent_ScrollSet_o v9; // x1
  System_Collections_Generic_List_EventDelegate__o *onChange; // x22
  EventDelegate_Callback_o *v11; // x23
  __int64 v12; // x1
  struct System_Collections_Generic_List_SyncScrollComponent_ScrollSet__o *targetScrolls; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct SyncScrollComponent_ScrollSet_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppObject *v34; // x0
  SyncScrollComponent_ScrollSet_o v35; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_5972083 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SyncScrollComponent_OnScrollBar__);
    byte_5972083 = 1;
  }
  v35.fields.scrollView = 0;
  v35.fields.scrollBar = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, scrollView);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollView, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0, 0);
    if ( !v8 )
    {
      if ( !scrollBar )
        goto LABEL_18;
      onChange = scrollBar->fields.onChange;
      v11 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(v11, (Il2CppObject *)this, Method_SyncScrollComponent_OnScrollBar__, 0);
      if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v12);
      EventDelegate__Add(onChange, v11, 0);
      targetScrolls = this->fields.targetScrolls;
      v35.fields.scrollView = scrollView;
      v35.fields.scrollBar = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v35, (int32_t)scrollView, v14, v15, v16, v17, v18, v19);
      v35.fields.scrollBar = scrollBar;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v35.fields.scrollBar,
        (int32_t)scrollBar,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      if ( !targetScrolls
        || (items = targetScrolls->fields._items,
            v9 = v35,
            v32 = Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__Add__,
            ++targetScrolls->fields._version,
            !items) )
      {
LABEL_18:
        sub_2213CDC(v8, v9.fields.scrollView);
      }
      size = targetScrolls->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_SyncScrollComponent_ScrollSet___AddWithResize(
          targetScrolls,
          v9,
          *(const MethodInfo_453EBBC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj + size;
        targetScrolls->fields._size = size + 1;
        v34[2] = (Il2CppObject)v9;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v34[2],
          0,
          (System_String_o *)v9.fields.scrollBar,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
    }
  }
}


void SyncScrollComponent__OnDestroy(SyncScrollComponent_o *this, const MethodInfo *method)
{
  System_Collections_ICollection_o *targetScrolls; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_SyncScrollComponent_ScrollSet__o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v11; // x21
  __int64 v12; // x1
  struct System_Collections_Generic_List_SyncScrollComponent_ScrollSet__o *v13; // x8
  int32_t size; // w2
  int v15; // w9
  _OWORD v16[2]; // [xsp+0h] [xbp-90h] BYREF
  __int128 v17; // [xsp+20h] [xbp-70h] BYREF
  __int128 v18; // [xsp+30h] [xbp-60h]

  if ( (byte_5972082 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__get_Current__);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SyncScrollComponent_OnScrollBar__);
    byte_5972082 = 1;
  }
  targetScrolls = (System_Collections_ICollection_o *)this->fields.targetScrolls;
  v17 = 0u;
  v18 = 0u;
  if ( !BasicHelper__IsNullOrEmpty(targetScrolls, 0) )
  {
    v5 = this->fields.targetScrolls;
    if ( !v5 )
      goto LABEL_19;
    System_Collections_Generic_List_SyncScrollComponent_ScrollSet___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v16,
      v5,
      (const MethodInfo_453F6E0 *)Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__GetEnumerator__);
    v17 = v16[0];
    v18 = v16[1];
    *(_QWORD *)&v16[0] = 0;
    *((_QWORD *)&v16[0] + 1) = &v17;
    while ( System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet___MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&v17,
              (const MethodInfo_4144A9C *)Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__MoveNext__) )
    {
      v7 = (UnityEngine_Object_o *)*((_QWORD *)&v18 + 1);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      v8 = UnityEngine_Object__op_Inequality(v7, 0, 0);
      if ( v8 )
      {
        if ( !v7 )
          sub_2213CDC(v8, v9);
        monitor = (System_Collections_Generic_List_EventDelegate__o *)v7[4].monitor;
        v11 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(v11, (Il2CppObject *)this, Method_SyncScrollComponent_OnScrollBar__, 0);
        if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v12);
        EventDelegate__Remove(monitor, v11, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (const MethodInfo_4144A98 *)Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__Dispose__);
    v13 = this->fields.targetScrolls;
    if ( !v13 )
LABEL_19:
      sub_2213CDC(v5, v4);
    size = v13->fields._size;
    v15 = v13->fields._version + 1;
    v13->fields._size = 0;
    v13->fields._version = v15;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v13->fields._items, 0, size, 0);
  }
}


void SyncScrollComponent__OnScrollBar(SyncScrollComponent_o *this, const MethodInfo *method)
{
  _BOOL4 ignoreCallbacks; // w8
  __int64 v4; // x1
  struct UIProgressBar_o *current; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v7; // x20
  __int64 v8; // x1
  System_Collections_Generic_List_SyncScrollComponent_ScrollSet__o *targetScrolls; // x0
  __int64 v10; // x1
  __int128 v11; // kr00_16
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15; // x1
  float value; // s0
  __int64 v17; // x0
  __int64 v18; // x1
  _OWORD v19[2]; // [xsp+0h] [xbp-80h] BYREF
  __int128 v20; // [xsp+20h] [xbp-60h] BYREF
  __int128 v21; // [xsp+30h] [xbp-50h]

  if ( (byte_5972084 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIProgressBar_TypeInfo);
    sub_2213A60(&UIScrollBar_TypeInfo);
    byte_5972084 = 1;
  }
  ignoreCallbacks = this->fields.ignoreCallbacks;
  v20 = 0u;
  v21 = 0u;
  if ( !ignoreCallbacks
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.targetScrolls, 0) )
  {
    current = UIProgressBar_TypeInfo->static_fields->current;
    if ( current
      && (naturalAligment = UIScrollBar_TypeInfo->_2.naturalAligment,
          current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (UIScrollBar_c *)current->klass->_2.typeHierarchy[naturalAligment - 1] == UIScrollBar_TypeInfo )
        v7 = (UnityEngine_Object_o *)UIProgressBar_TypeInfo->static_fields->current;
      else
        v7 = 0;
    }
    else
    {
      v7 = 0;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( !UnityEngine_Object__op_Equality(v7, 0, 0) )
    {
      targetScrolls = this->fields.targetScrolls;
      this->fields.ignoreCallbacks = 1;
      if ( !targetScrolls )
        sub_2213CDC(0, v8);
      System_Collections_Generic_List_SyncScrollComponent_ScrollSet___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v19,
        targetScrolls,
        (const MethodInfo_453F6E0 *)Method_System_Collections_Generic_List_SyncScrollComponent_ScrollSet__GetEnumerator__);
      v20 = v19[0];
      v21 = v19[1];
      *(_QWORD *)&v19[0] = 0;
      *((_QWORD *)&v19[0] + 1) = &v20;
      while ( System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet___MoveNext(
                (System_Collections_Generic_List_Enumerator_T__o *)&v20,
                (const MethodInfo_4144A9C *)Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__MoveNext__) )
      {
        v11 = v21;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
        v12 = UnityEngine_Object__op_Inequality(*((UnityEngine_Object_o **)&v11 + 1), v7, 0);
        if ( v12 )
        {
          if ( !v7 )
            sub_2213CDC(v12, v13);
          value = UIProgressBar__get_value((UIProgressBar_o *)v7, 0);
          if ( !*((_QWORD *)&v11 + 1) )
            sub_2213CDC(v14, v15);
          UIProgressBar__set_value(*((UIProgressBar_o **)&v11 + 1), value, 0);
          if ( !(_QWORD)v11 )
            sub_2213CDC(v17, v18);
          UIScrollView__OnScrollBar((UIScrollView_o *)v11, 0);
        }
      }
      System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet___Dispose(
        (System_Collections_Generic_List_Enumerator_T__o *)&v20,
        (const MethodInfo_4144A98 *)Method_System_Collections_Generic_List_Enumerator_SyncScrollComponent_ScrollSet__Dispose__);
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
      sub_2213CDC(IsNullOrEmpty, v4);
    max_length = scrolls->max_length;
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      p_scrollBar = &scrolls->m_Items[0].fields.scrollBar;
      do
      {
        if ( v8 >= (unsigned int)max_length )
          sub_2213CE4(IsNullOrEmpty);
        SyncScrollComponent__AddTarget(this, (UIScrollView_o *)*(p_scrollBar - 1), *p_scrollBar, v5);
        LODWORD(max_length) = scrolls->max_length;
        ++v8;
        p_scrollBar += 2;
      }
      while ( (__int64)v8 < (int)max_length );
    }
  }
}