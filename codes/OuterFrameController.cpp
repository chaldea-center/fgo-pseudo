void __fastcall OuterFrameController___ctor(OuterFrameController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6376 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_OuterFrameController___ctor__, (_DWORD)method, v2, v3);
    byte_42E6376 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_OuterFrameController___ctor__);
}


void __fastcall OuterFrameController__OnPressOuterFrame(OuterFrameController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  CTouch_c *v13; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x19
  UnityEngine_Touch_array *touches; // x20
  __int64 touchCount; // x0
  __int64 v17; // x1
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  CTouch_c *v21; // x0
  System_Collections_Generic_List_int__o *v22; // x19
  UnityEngine_Touch_array *v23; // x20
  __int64 v24; // x0

  if ( (byte_42E6373 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v7, v8, v9);
    byte_42E6373 = 1;
  }
  if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
  {
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( !byte_42E4CBE )
    {
      sub_B5D5C4(&CTouch_TypeInfo, v10, v11, v12);
      byte_42E4CBE = 1;
    }
    v13 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v13 = CTouch_TypeInfo;
    }
    ignoreFingerIDList = v13->static_fields->ignoreFingerIDList;
    touches = UnityEngine_Input__get_touches(0LL);
    touchCount = UnityEngine_Input__get_touchCount(0LL);
    if ( !touches )
      goto LABEL_29;
    if ( (unsigned int)(touchCount - 1) < touches->max_length )
    {
      touchCount = UnityEngine_Touch__get_fingerId(
                     (UnityEngine_Touch_o *)&touches->m_Items[(int)touchCount - 1].fields.m_Position,
                     0LL);
      if ( !ignoreFingerIDList )
        goto LABEL_29;
      if ( System_Collections_Generic_List_int___Contains(
             ignoreFingerIDList,
             touchCount,
             (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        return;
      }
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_42E4CBE )
      {
        sub_B5D5C4(&CTouch_TypeInfo, v18, v19, v20);
        byte_42E4CBE = 1;
      }
      v21 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v21 = CTouch_TypeInfo;
      }
      v22 = v21->static_fields->ignoreFingerIDList;
      v23 = UnityEngine_Input__get_touches(0LL);
      touchCount = UnityEngine_Input__get_touchCount(0LL);
      if ( !v23 )
LABEL_29:
        sub_B5D69C(touchCount, v17);
      if ( (unsigned int)(touchCount - 1) < v23->max_length )
      {
        touchCount = UnityEngine_Touch__get_fingerId(
                       (UnityEngine_Touch_o *)&v23->m_Items[(int)touchCount - 1].fields.m_Position,
                       0LL);
        if ( v22 )
        {
          System_Collections_Generic_List_int___Add(
            v22,
            touchCount,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          return;
        }
        goto LABEL_29;
      }
    }
    v24 = sub_B5D6C8(touchCount);
    sub_B5D668(v24, 0LL);
  }
}


void __fastcall OuterFrameController__Start(OuterFrameController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  CTouch_c *v7; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x0

  if ( (byte_42E6374 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v4, v5, v6);
    byte_42E6374 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_42E4CBE )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4CBE = 1;
  }
  v7 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v7 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v7->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_int___Clear(
    ignoreFingerIDList,
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
}


void __fastcall OuterFrameController__Update(OuterFrameController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x1
  int v11; // w2
  __int64 v12; // x3
  CTouch_c *v13; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x0
  int v15; // w8
  unsigned __int64 v16; // x21
  __int64 i; // x24
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  CTouch_c *v21; // x0
  System_Collections_Generic_List_int__o *v22; // x20
  __int64 v23; // x0

  if ( (byte_42E6375 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v7, v8, v9);
    byte_42E6375 = 1;
  }
  if ( !UnityEngine_Input__get_touchCount(0LL) )
  {
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( !byte_42E4CBE )
    {
      sub_B5D5C4(&CTouch_TypeInfo, v10, v11, v12);
      byte_42E4CBE = 1;
    }
    v13 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v13 = CTouch_TypeInfo;
    }
    ignoreFingerIDList = v13->static_fields->ignoreFingerIDList;
    if ( !ignoreFingerIDList )
      goto LABEL_36;
    System_Collections_Generic_List_int___Clear(
      ignoreFingerIDList,
      (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
  }
  v15 = UnityEngine_Input__get_touchCount(0LL) - 1;
  if ( v15 >= 0 )
  {
    v16 = v15;
    for ( i = 68LL * v15 + 32; ; i -= 68LL )
    {
      ignoreFingerIDList = (System_Collections_Generic_List_int__o *)UnityEngine_Input__get_touches(0LL);
      if ( !ignoreFingerIDList )
        break;
      if ( v16 >= (unsigned int)ignoreFingerIDList->fields._size )
        goto LABEL_37;
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)ignoreFingerIDList + i), 0LL) == 3 )
        goto LABEL_40;
      ignoreFingerIDList = (System_Collections_Generic_List_int__o *)UnityEngine_Input__get_touches(0LL);
      if ( !ignoreFingerIDList )
        break;
      if ( v16 >= (unsigned int)ignoreFingerIDList->fields._size )
      {
LABEL_37:
        v23 = sub_B5D6C8(ignoreFingerIDList);
        sub_B5D668(v23, 0LL);
      }
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)ignoreFingerIDList + i), 0LL) == 4 )
      {
LABEL_40:
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        if ( !byte_42E4CBE )
        {
          sub_B5D5C4(&CTouch_TypeInfo, v18, v19, v20);
          byte_42E4CBE = 1;
        }
        v21 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v21 = CTouch_TypeInfo;
        }
        v22 = v21->static_fields->ignoreFingerIDList;
        ignoreFingerIDList = (System_Collections_Generic_List_int__o *)UnityEngine_Input__get_touches(0LL);
        if ( !ignoreFingerIDList )
          break;
        if ( v16 >= (unsigned int)ignoreFingerIDList->fields._size )
          goto LABEL_37;
        ignoreFingerIDList = (System_Collections_Generic_List_int__o *)UnityEngine_Touch__get_fingerId(
                                                                         (UnityEngine_Touch_o *)((char *)ignoreFingerIDList
                                                                                               + i),
                                                                         0LL);
        if ( !v22 )
          break;
        System_Collections_Generic_List_int___Remove(
          v22,
          (int32_t)ignoreFingerIDList,
          (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
      }
      if ( (--v16 & 0x80000000) != 0 )
        return;
    }
LABEL_36:
    sub_B5D69C(ignoreFingerIDList, v10);
  }
}