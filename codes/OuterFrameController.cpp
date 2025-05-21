void __fastcall OuterFrameController___ctor(OuterFrameController_o *this, const MethodInfo *method)
{
  if ( (byte_4B415A9 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_OuterFrameController___ctor__, method);
    byte_4B415A9 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39166A0 *)Method_SingletonMonoBehaviour_OuterFrameController___ctor__);
}


void __fastcall OuterFrameController__OnPressOuterFrame(OuterFrameController_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  CTouch_c *v5; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x19
  UnityEngine_Touch_array *touches; // x20
  __int64 touchCount; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  CTouch_c *v12; // x0
  System_Collections_Generic_List_int__o *v13; // x19
  UnityEngine_Touch_array *v14; // x20
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_4B415A6 & 1) == 0 )
  {
    sub_1BDB878(&CTouch_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v2);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Contains__, v3);
    byte_4B415A6 = 1;
  }
  if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( !byte_4B41421 )
    {
      sub_1BDB878(&CTouch_TypeInfo, v4);
      byte_4B41421 = 1;
    }
    v5 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v5 = CTouch_TypeInfo;
    }
    ignoreFingerIDList = v5->static_fields->ignoreFingerIDList;
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
             (const MethodInfo_36B9118 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        return;
      }
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_4B41421 )
      {
        sub_1BDB878(&CTouch_TypeInfo, v11);
        byte_4B41421 = 1;
      }
      v12 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v12 = CTouch_TypeInfo;
      }
      v13 = v12->static_fields->ignoreFingerIDList;
      v14 = UnityEngine_Input__get_touches(0LL);
      touchCount = UnityEngine_Input__get_touchCount(0LL);
      if ( !v14 )
        goto LABEL_28;
      if ( (unsigned int)(touchCount - 1) < v14->max_length )
      {
        touchCount = UnityEngine_Touch__get_fingerId(
                       (UnityEngine_Touch_o *)&v14->m_Items[(int)touchCount - 1].fields.m_Position,
                       0LL);
        if ( v13 )
        {
          items = v13->fields._items;
          v16 = Method_System_Collections_Generic_List_int__Add__;
          ++v13->fields._version;
          if ( items )
          {
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v13,
                touchCount,
                *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v13->fields._size = size + 1;
              items->m_Items[size + 1] = touchCount;
            }
            return;
          }
        }
LABEL_28:
        sub_1BDBAD4(touchCount, v9);
      }
    }
    sub_1BDBADC(touchCount, v9, v10);
  }
}


void __fastcall OuterFrameController__Start(OuterFrameController_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  CTouch_c *v3; // x0
  struct System_Collections_Generic_List_int__o *ignoreFingerIDList; // x8
  int v5; // w9

  if ( (byte_4B415A7 & 1) == 0 )
  {
    sub_1BDB878(&CTouch_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Clear__, v2);
    byte_4B415A7 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_4B41421 )
  {
    sub_1BDB878(&CTouch_TypeInfo, method);
    byte_4B41421 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v3->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_1BDBAD4(v3, method);
  v5 = ignoreFingerIDList->fields._version + 1;
  ignoreFingerIDList->fields._size = 0;
  ignoreFingerIDList->fields._version = v5;
}


void __fastcall OuterFrameController__Update(OuterFrameController_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  void *touches; // x0
  __int64 v6; // x8
  int v7; // w9
  unsigned int v8; // w21
  __int64 v9; // x2
  __int64 v10; // x1
  CTouch_c *v11; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x20

  if ( (byte_4B415A8 & 1) == 0 )
  {
    sub_1BDB878(&CTouch_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Clear__, v2);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Remove__, v3);
    byte_4B415A8 = 1;
  }
  if ( !UnityEngine_Input__get_touchCount(0LL) )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( !byte_4B41421 )
    {
      sub_1BDB878(&CTouch_TypeInfo, v4);
      byte_4B41421 = 1;
    }
    touches = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      touches = CTouch_TypeInfo;
    }
    v6 = *(_QWORD *)(*((_QWORD *)touches + 23) + 16LL);
    if ( !v6 )
      goto LABEL_31;
    v7 = *(_DWORD *)(v6 + 28) + 1;
    *(_DWORD *)(v6 + 24) = 0;
    *(_DWORD *)(v6 + 28) = v7;
  }
  v8 = UnityEngine_Input__get_touchCount(0LL) - 1;
  if ( (v8 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      touches = UnityEngine_Input__get_touches(0LL);
      if ( !touches )
        break;
      if ( v8 >= *((_DWORD *)touches + 6) )
        goto LABEL_32;
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)touches + 68 * v8 + 32), 0LL) == 3 )
        goto LABEL_35;
      touches = UnityEngine_Input__get_touches(0LL);
      if ( !touches )
        break;
      if ( v8 >= *((_DWORD *)touches + 6) )
LABEL_32:
        sub_1BDBADC(touches, v4, v9);
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)touches + 68 * v8 + 32), 0LL) == 4 )
      {
LABEL_35:
        if ( !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        if ( !byte_4B41421 )
        {
          sub_1BDB878(&CTouch_TypeInfo, v10);
          byte_4B41421 = 1;
        }
        v11 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v11 = CTouch_TypeInfo;
        }
        ignoreFingerIDList = v11->static_fields->ignoreFingerIDList;
        touches = UnityEngine_Input__get_touches(0LL);
        if ( !touches )
          break;
        if ( v8 >= *((_DWORD *)touches + 6) )
          goto LABEL_32;
        touches = (void *)UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)((char *)touches + 68 * v8 + 32), 0LL);
        if ( !ignoreFingerIDList )
          break;
        System_Collections_Generic_List_int___Remove(
          ignoreFingerIDList,
          (int32_t)touches,
          (const MethodInfo_36BA29C *)Method_System_Collections_Generic_List_int__Remove__);
      }
      if ( (--v8 & 0x80000000) != 0 )
        return;
    }
LABEL_31:
    sub_1BDBAD4(touches, v4);
  }
}