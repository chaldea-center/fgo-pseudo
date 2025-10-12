void OuterFrameController___ctor(OuterFrameController_o *this, const MethodInfo *method)
{
  if ( (byte_4C3443E & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_OuterFrameController___ctor__);
    byte_4C3443E = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39E2DEC *)Method_SingletonMonoBehaviour_OuterFrameController___ctor__);
}


void OuterFrameController__OnPressOuterFrame(OuterFrameController_o *this, const MethodInfo *method)
{
  CTouch_c *v2; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x19
  UnityEngine_Touch_array *touches; // x20
  __int64 touchCount; // x0
  CTouch_c *v6; // x0
  System_Collections_Generic_List_int__o *v7; // x19
  UnityEngine_Touch_array *v8; // x20
  struct System_Int32_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10

  if ( (byte_4C3443B & 1) == 0 )
  {
    sub_1C32C20(&CTouch_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C3443B = 1;
  }
  if ( UnityEngine_Input__get_touchCount(0) >= 1 )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( !byte_4C342A7 )
    {
      sub_1C32C20(&CTouch_TypeInfo);
      byte_4C342A7 = 1;
    }
    v2 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v2 = CTouch_TypeInfo;
    }
    ignoreFingerIDList = v2->static_fields->ignoreFingerIDList;
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
             (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        return;
      }
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_4C342A7 )
      {
        sub_1C32C20(&CTouch_TypeInfo);
        byte_4C342A7 = 1;
      }
      v6 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v6 = CTouch_TypeInfo;
      }
      v7 = v6->static_fields->ignoreFingerIDList;
      v8 = UnityEngine_Input__get_touches(0);
      touchCount = UnityEngine_Input__get_touchCount(0);
      if ( !v8 )
        goto LABEL_28;
      if ( (unsigned int)(touchCount - 1) < LODWORD(v8->max_length) )
      {
        touchCount = UnityEngine_Touch__get_fingerId(&v8->m_Items[(int)touchCount - 1], 0);
        if ( v7 )
        {
          items = v7->fields._items;
          v10 = Method_System_Collections_Generic_List_int__Add__;
          ++v7->fields._version;
          if ( items )
          {
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v7,
                touchCount,
                *(const MethodInfo_377B798 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
            }
            else
            {
              v7->fields._size = size + 1;
              items->m_Items[size] = touchCount;
            }
            return;
          }
        }
LABEL_28:
        sub_1C32E7C(touchCount);
      }
    }
    sub_1C32E84(touchCount);
  }
}


void OuterFrameController__Start(OuterFrameController_o *this, const MethodInfo *method)
{
  CTouch_c *v2; // x0
  struct System_Collections_Generic_List_int__o *ignoreFingerIDList; // x8
  int v4; // w9

  if ( (byte_4C3443C & 1) == 0 )
  {
    sub_1C32C20(&CTouch_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4C3443C = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_4C342A7 )
  {
    sub_1C32C20(&CTouch_TypeInfo);
    byte_4C342A7 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v2->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_1C32E7C(v2);
  v4 = ignoreFingerIDList->fields._version + 1;
  ignoreFingerIDList->fields._size = 0;
  ignoreFingerIDList->fields._version = v4;
}


void OuterFrameController__Update(OuterFrameController_o *this, const MethodInfo *method)
{
  void *touches; // x0
  __int64 v3; // x8
  int v4; // w9
  unsigned int v5; // w21
  CTouch_c *v6; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x20

  if ( (byte_4C3443D & 1) == 0 )
  {
    sub_1C32C20(&CTouch_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Remove__);
    byte_4C3443D = 1;
  }
  if ( !UnityEngine_Input__get_touchCount(0) )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( !byte_4C342A7 )
    {
      sub_1C32C20(&CTouch_TypeInfo);
      byte_4C342A7 = 1;
    }
    touches = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      touches = CTouch_TypeInfo;
    }
    v3 = *(_QWORD *)(*((_QWORD *)touches + 23) + 16LL);
    if ( !v3 )
      goto LABEL_31;
    v4 = *(_DWORD *)(v3 + 28) + 1;
    *(_DWORD *)(v3 + 24) = 0;
    *(_DWORD *)(v3 + 28) = v4;
  }
  v5 = UnityEngine_Input__get_touchCount(0) - 1;
  if ( (v5 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      touches = UnityEngine_Input__get_touches(0);
      if ( !touches )
        break;
      if ( v5 >= *((_DWORD *)touches + 6) )
        goto LABEL_32;
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)touches + 68 * v5 + 32), 0) == 3 )
        goto LABEL_35;
      touches = UnityEngine_Input__get_touches(0);
      if ( !touches )
        break;
      if ( v5 >= *((_DWORD *)touches + 6) )
LABEL_32:
        sub_1C32E84(touches);
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)touches + 68 * v5 + 32), 0) == 4 )
      {
LABEL_35:
        if ( !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        if ( !byte_4C342A7 )
        {
          sub_1C32C20(&CTouch_TypeInfo);
          byte_4C342A7 = 1;
        }
        v6 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v6 = CTouch_TypeInfo;
        }
        ignoreFingerIDList = v6->static_fields->ignoreFingerIDList;
        touches = UnityEngine_Input__get_touches(0);
        if ( !touches )
          break;
        if ( v5 >= *((_DWORD *)touches + 6) )
          goto LABEL_32;
        touches = (void *)UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)((char *)touches + 68 * v5 + 32), 0);
        if ( !ignoreFingerIDList )
          break;
        System_Collections_Generic_List_int___Remove(
          ignoreFingerIDList,
          (int32_t)touches,
          (const MethodInfo_377CC94 *)Method_System_Collections_Generic_List_int__Remove__);
      }
      if ( (--v5 & 0x80000000) != 0 )
        return;
    }
LABEL_31:
    sub_1C32E7C(touches);
  }
}