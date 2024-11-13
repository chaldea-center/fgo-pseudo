void __fastcall OuterFrameController___ctor(OuterFrameController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12ED1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_OuterFrameController___ctor__, method, v2);
    byte_4B12ED1 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_OuterFrameController___ctor__);
}


void __fastcall OuterFrameController__OnPressOuterFrame(OuterFrameController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  CTouch_c *v9; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x19
  UnityEngine_Touch_array *touches; // x20
  __int64 touchCount; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  CTouch_c *v16; // x0
  System_Collections_Generic_List_int__o *v17; // x19
  UnityEngine_Touch_array *v18; // x20
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_4B12ECE & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v5, v6);
    byte_4B12ECE = 1;
  }
  if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v7);
    if ( !byte_4B12DC1 )
    {
      sub_1BCA7E0(&CTouch_TypeInfo, v7, v8);
      byte_4B12DC1 = 1;
    }
    v9 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v7);
      v9 = CTouch_TypeInfo;
    }
    ignoreFingerIDList = v9->static_fields->ignoreFingerIDList;
    touches = UnityEngine_Input__get_touches(0LL);
    touchCount = UnityEngine_Input__get_touchCount(0LL);
    if ( !touches )
      goto LABEL_28;
    if ( (unsigned int)(touchCount - 1) < touches->max_length )
    {
      touchCount = UnityEngine_Touch__get_fingerId(
                     (UnityEngine_Touch_o *)&touches->m_Items[(int)touchCount - 1].fields.m_Position,
                     0LL);
      if ( !ignoreFingerIDList )
        goto LABEL_28;
      if ( System_Collections_Generic_List_int___Contains(
             ignoreFingerIDList,
             touchCount,
             (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        return;
      }
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v14);
      if ( !byte_4B12DC1 )
      {
        sub_1BCA7E0(&CTouch_TypeInfo, v14, v15);
        byte_4B12DC1 = 1;
      }
      v16 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v14);
        v16 = CTouch_TypeInfo;
      }
      v17 = v16->static_fields->ignoreFingerIDList;
      v18 = UnityEngine_Input__get_touches(0LL);
      touchCount = UnityEngine_Input__get_touchCount(0LL);
      if ( !v18 )
        goto LABEL_28;
      if ( (unsigned int)(touchCount - 1) < v18->max_length )
      {
        touchCount = UnityEngine_Touch__get_fingerId(
                       (UnityEngine_Touch_o *)&v18->m_Items[(int)touchCount - 1].fields.m_Position,
                       0LL);
        if ( v17 )
        {
          items = v17->fields._items;
          v20 = Method_System_Collections_Generic_List_int__Add__;
          ++v17->fields._version;
          if ( items )
          {
            size = v17->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v17,
                touchCount,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v17->fields._size = size + 1;
              items->m_Items[size + 1] = touchCount;
            }
            return;
          }
        }
LABEL_28:
        sub_1BCAA3C(touchCount, v13);
      }
    }
    sub_1BCAA44(touchCount, v13);
  }
}


void __fastcall OuterFrameController__Start(OuterFrameController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  CTouch_c *v5; // x0
  struct System_Collections_Generic_List_int__o *ignoreFingerIDList; // x8
  int v7; // w9

  if ( (byte_4B12ECF & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v3, v4);
    byte_4B12ECF = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  if ( !byte_4B12DC1 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    byte_4B12DC1 = 1;
  }
  v5 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    v5 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v5->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_1BCAA3C(v5, method);
  v7 = ignoreFingerIDList->fields._version + 1;
  ignoreFingerIDList->fields._size = 0;
  ignoreFingerIDList->fields._version = v7;
}


void __fastcall OuterFrameController__Update(OuterFrameController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  void *touches; // x0
  __int64 v10; // x8
  int v11; // w9
  unsigned int v12; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  CTouch_c *v15; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x20

  if ( (byte_4B12ED0 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v5, v6);
    byte_4B12ED0 = 1;
  }
  if ( !UnityEngine_Input__get_touchCount(0LL) )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v7);
    if ( !byte_4B12DC1 )
    {
      sub_1BCA7E0(&CTouch_TypeInfo, v7, v8);
      byte_4B12DC1 = 1;
    }
    touches = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v7);
      touches = CTouch_TypeInfo;
    }
    v10 = *(_QWORD *)(*((_QWORD *)touches + 23) + 16LL);
    if ( !v10 )
      goto LABEL_31;
    v11 = *(_DWORD *)(v10 + 28) + 1;
    *(_DWORD *)(v10 + 24) = 0;
    *(_DWORD *)(v10 + 28) = v11;
  }
  v12 = UnityEngine_Input__get_touchCount(0LL) - 1;
  if ( (v12 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      touches = UnityEngine_Input__get_touches(0LL);
      if ( !touches )
        break;
      if ( v12 >= *((_DWORD *)touches + 6) )
        goto LABEL_32;
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)touches + 68 * v12 + 32), 0LL) == 3 )
        goto LABEL_35;
      touches = UnityEngine_Input__get_touches(0LL);
      if ( !touches )
        break;
      if ( v12 >= *((_DWORD *)touches + 6) )
LABEL_32:
        sub_1BCAA44(touches, v7);
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)touches + 68 * v12 + 32), 0LL) == 4 )
      {
LABEL_35:
        if ( !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v13);
        if ( !byte_4B12DC1 )
        {
          sub_1BCA7E0(&CTouch_TypeInfo, v13, v14);
          byte_4B12DC1 = 1;
        }
        v15 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v13);
          v15 = CTouch_TypeInfo;
        }
        ignoreFingerIDList = v15->static_fields->ignoreFingerIDList;
        touches = UnityEngine_Input__get_touches(0LL);
        if ( !touches )
          break;
        if ( v12 >= *((_DWORD *)touches + 6) )
          goto LABEL_32;
        touches = (void *)UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)((char *)touches + 68 * v12 + 32), 0LL);
        if ( !ignoreFingerIDList )
          break;
        System_Collections_Generic_List_int___Remove(
          ignoreFingerIDList,
          (int32_t)touches,
          (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
      }
      if ( (--v12 & 0x80000000) != 0 )
        return;
    }
LABEL_31:
    sub_1BCAA3C(touches, v7);
  }
}