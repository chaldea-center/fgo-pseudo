void OuterFrameController___ctor(OuterFrameController_o *this, const MethodInfo *method)
{
  if ( (byte_596D046 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_OuterFrameController___ctor__);
    byte_596D046 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_OuterFrameController___ctor__);
}


void OuterFrameController__OnPressOuterFrame(OuterFrameController_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  CTouch_c *v4; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x19
  UnityEngine_Touch_array *touches; // x20
  __int64 touchCount; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  CTouch_c *v11; // x0
  System_Collections_Generic_List_int__o *v12; // x19
  UnityEngine_Touch_array *v13; // x20
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_596D043 & 1) == 0 )
  {
    sub_2213A60(&CTouch_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    byte_596D043 = 1;
  }
  if ( UnityEngine_Input__get_touchCount(0) >= 1 )
  {
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v2, v3);
    if ( !byte_596CEAF )
    {
      sub_2213A60(&CTouch_TypeInfo);
      byte_596CEAF = 1;
    }
    v4 = CTouch_TypeInfo;
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v2, v3);
      v4 = CTouch_TypeInfo;
    }
    ignoreFingerIDList = v4->static_fields->ignoreFingerIDList;
    touches = UnityEngine_Input__get_touches(0);
    touchCount = UnityEngine_Input__get_touchCount(0);
    if ( !touches )
      goto LABEL_28;
    if ( (unsigned int)(touchCount - 1) < LODWORD(touches->max_length) )
    {
      touchCount = UnityEngine_Touch__get_fingerId(&touches->m_Items[(int)touchCount - 1], 0);
      if ( !ignoreFingerIDList )
        goto LABEL_28;
      if ( System_Collections_Generic_List_int___Contains(
             ignoreFingerIDList,
             touchCount,
             (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        return;
      }
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v9, v10);
      if ( !byte_596CEAF )
      {
        sub_2213A60(&CTouch_TypeInfo);
        byte_596CEAF = 1;
      }
      v11 = CTouch_TypeInfo;
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v9, v10);
        v11 = CTouch_TypeInfo;
      }
      v12 = v11->static_fields->ignoreFingerIDList;
      v13 = UnityEngine_Input__get_touches(0);
      touchCount = UnityEngine_Input__get_touchCount(0);
      if ( !v13 )
        goto LABEL_28;
      if ( (unsigned int)(touchCount - 1) < LODWORD(v13->max_length) )
      {
        touchCount = UnityEngine_Touch__get_fingerId(&v13->m_Items[(int)touchCount - 1], 0);
        if ( v12 )
        {
          items = v12->fields._items;
          v15 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( items )
          {
            size = v12->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v12,
                touchCount,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v12->fields._size = size + 1;
              items->m_Items[size] = touchCount;
            }
            return;
          }
        }
LABEL_28:
        sub_2213CDC(touchCount, v8);
      }
    }
    sub_2213CE4(touchCount);
  }
}


void OuterFrameController__Start(OuterFrameController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CTouch_c *v3; // x0
  struct System_Collections_Generic_List_int__o *ignoreFingerIDList; // x8
  int v5; // w9

  if ( (byte_596D044 & 1) == 0 )
  {
    sub_2213A60(&CTouch_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    byte_596D044 = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method, v2);
  if ( !byte_596CEAF )
  {
    sub_2213A60(&CTouch_TypeInfo);
    byte_596CEAF = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method, v2);
    v3 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v3->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_2213CDC(v3, method);
  v5 = ignoreFingerIDList->fields._version + 1;
  ignoreFingerIDList->fields._size = 0;
  ignoreFingerIDList->fields._version = v5;
}


void OuterFrameController__Update(OuterFrameController_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  void *touches; // x0
  __int64 v5; // x8
  int v6; // w9
  int32_t touchCount; // w0
  unsigned __int64 v8; // x21
  __int64 i; // x23
  __int64 v10; // x1
  __int64 v11; // x2
  CTouch_c *v12; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x20

  if ( (byte_596D045 & 1) == 0 )
  {
    sub_2213A60(&CTouch_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    byte_596D045 = 1;
  }
  if ( !UnityEngine_Input__get_touchCount(0) )
  {
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v2, v3);
    if ( !byte_596CEAF )
    {
      sub_2213A60(&CTouch_TypeInfo);
      byte_596CEAF = 1;
    }
    touches = CTouch_TypeInfo;
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v2, v3);
      touches = CTouch_TypeInfo;
    }
    v5 = *(_QWORD *)(*((_QWORD *)touches + 23) + 16LL);
    if ( !v5 )
      goto LABEL_33;
    v6 = *(_DWORD *)(v5 + 28) + 1;
    *(_DWORD *)(v5 + 24) = 0;
    *(_DWORD *)(v5 + 28) = v6;
  }
  touchCount = UnityEngine_Input__get_touchCount(0);
  v8 = (unsigned int)(touchCount - 1);
  if ( touchCount - 1 >= 0 )
  {
    for ( i = 68LL * (unsigned int)v8 + 32; ; i -= 68 )
    {
      touches = UnityEngine_Input__get_touches(0);
      if ( !touches )
        break;
      if ( v8 >= *((unsigned int *)touches + 6) )
        goto LABEL_34;
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)touches + i), 0) == 3 )
        goto LABEL_37;
      touches = UnityEngine_Input__get_touches(0);
      if ( !touches )
        break;
      if ( v8 >= *((unsigned int *)touches + 6) )
LABEL_34:
        sub_2213CE4(touches);
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)touches + i), 0) == 4 )
      {
LABEL_37:
        if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v10, v11);
        if ( !byte_596CEAF )
        {
          sub_2213A60(&CTouch_TypeInfo);
          byte_596CEAF = 1;
        }
        v12 = CTouch_TypeInfo;
        if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v10, v11);
          v12 = CTouch_TypeInfo;
        }
        ignoreFingerIDList = v12->static_fields->ignoreFingerIDList;
        touches = UnityEngine_Input__get_touches(0);
        if ( !touches )
          break;
        if ( v8 >= *((unsigned int *)touches + 6) )
          goto LABEL_34;
        touches = (void *)UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)((char *)touches + i), 0);
        if ( !ignoreFingerIDList )
          break;
        System_Collections_Generic_List_int___Remove(
          ignoreFingerIDList,
          (int32_t)touches,
          (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
      }
      if ( (__int64)v8-- <= 0 )
        return;
    }
LABEL_33:
    sub_2213CDC(touches, v2);
  }
}