void OuterFrameController___ctor(OuterFrameController_o *this, const MethodInfo *method)
{
  if ( (byte_4C23D6A & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_OuterFrameController___ctor__);
    byte_4C23D6A = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39D40E4 *)Method_SingletonMonoBehaviour_OuterFrameController___ctor__);
}


void OuterFrameController__OnPressOuterFrame(OuterFrameController_o *this, const MethodInfo *method)
{
  CTouch_c *v2; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x19
  UnityEngine_Touch_array *touches; // x20
  __int64 touchCount; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  CTouch_c *v8; // x0
  System_Collections_Generic_List_int__o *v9; // x19
  UnityEngine_Touch_array *v10; // x20
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4C23D67 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C23D67 = 1;
  }
  if ( UnityEngine_Input__get_touchCount(0) >= 1 )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( !byte_4C23BDD )
    {
      sub_1C2D490(&CTouch_TypeInfo);
      byte_4C23BDD = 1;
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
             (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        return;
      }
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_4C23BDD )
      {
        sub_1C2D490(&CTouch_TypeInfo);
        byte_4C23BDD = 1;
      }
      v8 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v8 = CTouch_TypeInfo;
      }
      v9 = v8->static_fields->ignoreFingerIDList;
      v10 = UnityEngine_Input__get_touches(0);
      touchCount = UnityEngine_Input__get_touchCount(0);
      if ( !v10 )
        goto LABEL_28;
      if ( (unsigned int)(touchCount - 1) < LODWORD(v10->max_length) )
      {
        touchCount = UnityEngine_Touch__get_fingerId(&v10->m_Items[(int)touchCount - 1], 0);
        if ( v9 )
        {
          items = v9->fields._items;
          v12 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( items )
          {
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                touchCount,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
            }
            else
            {
              v9->fields._size = size + 1;
              items->m_Items[size] = touchCount;
            }
            return;
          }
        }
LABEL_28:
        sub_1C2D6EC(touchCount, v6);
      }
    }
    sub_1C2D6F4(touchCount, v6, v7);
  }
}


void OuterFrameController__Start(OuterFrameController_o *this, const MethodInfo *method)
{
  CTouch_c *v2; // x0
  struct System_Collections_Generic_List_int__o *ignoreFingerIDList; // x8
  int v4; // w9

  if ( (byte_4C23D68 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4C23D68 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_4C23BDD )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C23BDD = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v2->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_1C2D6EC(v2, method);
  v4 = ignoreFingerIDList->fields._version + 1;
  ignoreFingerIDList->fields._size = 0;
  ignoreFingerIDList->fields._version = v4;
}


void OuterFrameController__Update(OuterFrameController_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  void *touches; // x0
  __int64 v4; // x8
  int v5; // w9
  unsigned int v6; // w21
  __int64 v7; // x2
  CTouch_c *v8; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x20

  if ( (byte_4C23D69 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Remove__);
    byte_4C23D69 = 1;
  }
  if ( !UnityEngine_Input__get_touchCount(0) )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( !byte_4C23BDD )
    {
      sub_1C2D490(&CTouch_TypeInfo);
      byte_4C23BDD = 1;
    }
    touches = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      touches = CTouch_TypeInfo;
    }
    v4 = *(_QWORD *)(*((_QWORD *)touches + 23) + 16LL);
    if ( !v4 )
      goto LABEL_31;
    v5 = *(_DWORD *)(v4 + 28) + 1;
    *(_DWORD *)(v4 + 24) = 0;
    *(_DWORD *)(v4 + 28) = v5;
  }
  v6 = UnityEngine_Input__get_touchCount(0) - 1;
  if ( (v6 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      touches = UnityEngine_Input__get_touches(0);
      if ( !touches )
        break;
      if ( v6 >= *((_DWORD *)touches + 6) )
        goto LABEL_32;
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)touches + 68 * v6 + 32), 0) == 3 )
        goto LABEL_35;
      touches = UnityEngine_Input__get_touches(0);
      if ( !touches )
        break;
      if ( v6 >= *((_DWORD *)touches + 6) )
LABEL_32:
        sub_1C2D6F4(touches, v2, v7);
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)touches + 68 * v6 + 32), 0) == 4 )
      {
LABEL_35:
        if ( !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        if ( !byte_4C23BDD )
        {
          sub_1C2D490(&CTouch_TypeInfo);
          byte_4C23BDD = 1;
        }
        v8 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v8 = CTouch_TypeInfo;
        }
        ignoreFingerIDList = v8->static_fields->ignoreFingerIDList;
        touches = UnityEngine_Input__get_touches(0);
        if ( !touches )
          break;
        if ( v6 >= *((_DWORD *)touches + 6) )
          goto LABEL_32;
        touches = (void *)UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)((char *)touches + 68 * v6 + 32), 0);
        if ( !ignoreFingerIDList )
          break;
        System_Collections_Generic_List_int___Remove(
          ignoreFingerIDList,
          (int32_t)touches,
          (const MethodInfo_376E05C *)Method_System_Collections_Generic_List_int__Remove__);
      }
      if ( (--v6 & 0x80000000) != 0 )
        return;
    }
LABEL_31:
    sub_1C2D6EC(touches, v2);
  }
}