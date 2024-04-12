void __fastcall OuterFrameController___ctor(OuterFrameController_o *this, const MethodInfo *method)
{
  if ( (byte_42ADBDF & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_OuterFrameController___ctor__);
    byte_42ADBDF = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_OuterFrameController___ctor__);
}


void __fastcall OuterFrameController__OnPressOuterFrame(OuterFrameController_o *this, const MethodInfo *method)
{
  CTouch_c *v2; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x19
  UnityEngine_Touch_array *touches; // x20
  __int64 touchCount; // x0
  __int64 v6; // x1
  CTouch_c *v7; // x0
  System_Collections_Generic_List_int__o *v8; // x19
  UnityEngine_Touch_array *v9; // x20
  __int64 v10; // x0

  if ( (byte_42ADBDC & 1) == 0 )
  {
    sub_B52984(&CTouch_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    byte_42ADBDC = 1;
  }
  if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
  {
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( !byte_42AC43E )
    {
      sub_B52984(&CTouch_TypeInfo);
      byte_42AC43E = 1;
    }
    v2 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v2 = CTouch_TypeInfo;
    }
    ignoreFingerIDList = v2->static_fields->ignoreFingerIDList;
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
             (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        return;
      }
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_42AC43E )
      {
        sub_B52984(&CTouch_TypeInfo);
        byte_42AC43E = 1;
      }
      v7 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v7 = CTouch_TypeInfo;
      }
      v8 = v7->static_fields->ignoreFingerIDList;
      v9 = UnityEngine_Input__get_touches(0LL);
      touchCount = UnityEngine_Input__get_touchCount(0LL);
      if ( !v9 )
LABEL_29:
        sub_B52A5C(touchCount, v6);
      if ( (unsigned int)(touchCount - 1) < v9->max_length )
      {
        touchCount = UnityEngine_Touch__get_fingerId(
                       (UnityEngine_Touch_o *)&v9->m_Items[(int)touchCount - 1].fields.m_Position,
                       0LL);
        if ( v8 )
        {
          System_Collections_Generic_List_int___Add(
            v8,
            touchCount,
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          return;
        }
        goto LABEL_29;
      }
    }
    v10 = sub_B52A88(touchCount);
    sub_B52A28(v10, 0LL);
  }
}


void __fastcall OuterFrameController__Start(OuterFrameController_o *this, const MethodInfo *method)
{
  CTouch_c *v2; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x0

  if ( (byte_42ADBDD & 1) == 0 )
  {
    sub_B52984(&CTouch_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Clear__);
    byte_42ADBDD = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_42AC43E )
  {
    sub_B52984(&CTouch_TypeInfo);
    byte_42AC43E = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v2->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_int___Clear(
    ignoreFingerIDList,
    (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
}


void __fastcall OuterFrameController__Update(OuterFrameController_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  CTouch_c *v3; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x0
  int v5; // w8
  unsigned __int64 v6; // x21
  __int64 i; // x24
  CTouch_c *v8; // x0
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 v10; // x0

  if ( (byte_42ADBDE & 1) == 0 )
  {
    sub_B52984(&CTouch_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Remove__);
    byte_42ADBDE = 1;
  }
  if ( !UnityEngine_Input__get_touchCount(0LL) )
  {
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( !byte_42AC43E )
    {
      sub_B52984(&CTouch_TypeInfo);
      byte_42AC43E = 1;
    }
    v3 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v3 = CTouch_TypeInfo;
    }
    ignoreFingerIDList = v3->static_fields->ignoreFingerIDList;
    if ( !ignoreFingerIDList )
      goto LABEL_36;
    System_Collections_Generic_List_int___Clear(
      ignoreFingerIDList,
      (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
  }
  v5 = UnityEngine_Input__get_touchCount(0LL) - 1;
  if ( v5 >= 0 )
  {
    v6 = v5;
    for ( i = 68LL * v5 + 32; ; i -= 68LL )
    {
      ignoreFingerIDList = (System_Collections_Generic_List_int__o *)UnityEngine_Input__get_touches(0LL);
      if ( !ignoreFingerIDList )
        break;
      if ( v6 >= (unsigned int)ignoreFingerIDList->fields._size )
        goto LABEL_37;
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)ignoreFingerIDList + i), 0LL) == 3 )
        goto LABEL_40;
      ignoreFingerIDList = (System_Collections_Generic_List_int__o *)UnityEngine_Input__get_touches(0LL);
      if ( !ignoreFingerIDList )
        break;
      if ( v6 >= (unsigned int)ignoreFingerIDList->fields._size )
      {
LABEL_37:
        v10 = sub_B52A88(ignoreFingerIDList);
        sub_B52A28(v10, 0LL);
      }
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)ignoreFingerIDList + i), 0LL) == 4 )
      {
LABEL_40:
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        if ( !byte_42AC43E )
        {
          sub_B52984(&CTouch_TypeInfo);
          byte_42AC43E = 1;
        }
        v8 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v8 = CTouch_TypeInfo;
        }
        v9 = v8->static_fields->ignoreFingerIDList;
        ignoreFingerIDList = (System_Collections_Generic_List_int__o *)UnityEngine_Input__get_touches(0LL);
        if ( !ignoreFingerIDList )
          break;
        if ( v6 >= (unsigned int)ignoreFingerIDList->fields._size )
          goto LABEL_37;
        ignoreFingerIDList = (System_Collections_Generic_List_int__o *)UnityEngine_Touch__get_fingerId(
                                                                         (UnityEngine_Touch_o *)((char *)ignoreFingerIDList
                                                                                               + i),
                                                                         0LL);
        if ( !v9 )
          break;
        System_Collections_Generic_List_int___Remove(
          v9,
          (int32_t)ignoreFingerIDList,
          (const MethodInfo_305892C *)Method_System_Collections_Generic_List_int__Remove__);
      }
      if ( (--v6 & 0x80000000) != 0 )
        return;
    }
LABEL_36:
    sub_B52A5C(ignoreFingerIDList, v2);
  }
}