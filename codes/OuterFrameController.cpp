void __fastcall OuterFrameController___ctor(OuterFrameController_o *this, const MethodInfo *method)
{
  if ( (byte_41851EF & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_OuterFrameController___ctor__, method);
    byte_41851EF = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_OuterFrameController___ctor__);
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
  __int64 v10; // x1
  CTouch_c *v11; // x0
  System_Collections_Generic_List_int__o *v12; // x19
  UnityEngine_Touch_array *v13; // x20
  __int64 v14; // x0

  if ( (byte_41851EC & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v3);
    byte_41851EC = 1;
  }
  if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
  {
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( !byte_4183DF9 )
    {
      sub_B2C35C(&CTouch_TypeInfo, v4);
      byte_4183DF9 = 1;
    }
    v5 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v5 = CTouch_TypeInfo;
    }
    ignoreFingerIDList = v5->static_fields->ignoreFingerIDList;
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
             (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        return;
      }
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_4183DF9 )
      {
        sub_B2C35C(&CTouch_TypeInfo, v10);
        byte_4183DF9 = 1;
      }
      v11 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
      }
      v12 = v11->static_fields->ignoreFingerIDList;
      v13 = UnityEngine_Input__get_touches(0LL);
      touchCount = UnityEngine_Input__get_touchCount(0LL);
      if ( !v13 )
LABEL_29:
        sub_B2C434(touchCount, v9);
      if ( (unsigned int)(touchCount - 1) < v13->max_length )
      {
        touchCount = UnityEngine_Touch__get_fingerId(
                       (UnityEngine_Touch_o *)&v13->m_Items[(int)touchCount - 1].fields.m_Position,
                       0LL);
        if ( v12 )
        {
          System_Collections_Generic_List_int___Add(
            v12,
            touchCount,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          return;
        }
        goto LABEL_29;
      }
    }
    v14 = sub_B2C460(touchCount);
    sub_B2C400(v14, 0LL);
  }
}


void __fastcall OuterFrameController__Start(OuterFrameController_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  CTouch_c *v3; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x0

  if ( (byte_41851ED & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v2);
    byte_41851ED = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_4183DF9 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    byte_4183DF9 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v3->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_int___Clear(
    ignoreFingerIDList,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
}


void __fastcall OuterFrameController__Update(OuterFrameController_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  CTouch_c *v5; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x0
  int v7; // w8
  unsigned __int64 v8; // x21
  __int64 i; // x24
  __int64 v10; // x1
  CTouch_c *v11; // x0
  System_Collections_Generic_List_int__o *v12; // x20
  __int64 v13; // x0

  if ( (byte_41851EE & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v3);
    byte_41851EE = 1;
  }
  if ( !UnityEngine_Input__get_touchCount(0LL) )
  {
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( !byte_4183DF9 )
    {
      sub_B2C35C(&CTouch_TypeInfo, v4);
      byte_4183DF9 = 1;
    }
    v5 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v5 = CTouch_TypeInfo;
    }
    ignoreFingerIDList = v5->static_fields->ignoreFingerIDList;
    if ( !ignoreFingerIDList )
      goto LABEL_36;
    System_Collections_Generic_List_int___Clear(
      ignoreFingerIDList,
      (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
  }
  v7 = UnityEngine_Input__get_touchCount(0LL) - 1;
  if ( v7 >= 0 )
  {
    v8 = v7;
    for ( i = 68LL * v7 + 32; ; i -= 68LL )
    {
      ignoreFingerIDList = (System_Collections_Generic_List_int__o *)UnityEngine_Input__get_touches(0LL);
      if ( !ignoreFingerIDList )
        break;
      if ( v8 >= (unsigned int)ignoreFingerIDList->fields._size )
        goto LABEL_37;
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)ignoreFingerIDList + i), 0LL) == 3 )
        goto LABEL_40;
      ignoreFingerIDList = (System_Collections_Generic_List_int__o *)UnityEngine_Input__get_touches(0LL);
      if ( !ignoreFingerIDList )
        break;
      if ( v8 >= (unsigned int)ignoreFingerIDList->fields._size )
      {
LABEL_37:
        v13 = sub_B2C460(ignoreFingerIDList);
        sub_B2C400(v13, 0LL);
      }
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)ignoreFingerIDList + i), 0LL) == 4 )
      {
LABEL_40:
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        if ( !byte_4183DF9 )
        {
          sub_B2C35C(&CTouch_TypeInfo, v10);
          byte_4183DF9 = 1;
        }
        v11 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v11 = CTouch_TypeInfo;
        }
        v12 = v11->static_fields->ignoreFingerIDList;
        ignoreFingerIDList = (System_Collections_Generic_List_int__o *)UnityEngine_Input__get_touches(0LL);
        if ( !ignoreFingerIDList )
          break;
        if ( v8 >= (unsigned int)ignoreFingerIDList->fields._size )
          goto LABEL_37;
        ignoreFingerIDList = (System_Collections_Generic_List_int__o *)UnityEngine_Touch__get_fingerId(
                                                                         (UnityEngine_Touch_o *)((char *)ignoreFingerIDList
                                                                                               + i),
                                                                         0LL);
        if ( !v12 )
          break;
        System_Collections_Generic_List_int___Remove(
          v12,
          (int32_t)ignoreFingerIDList,
          (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
      }
      if ( (--v8 & 0x80000000) != 0 )
        return;
    }
LABEL_36:
    sub_B2C434(ignoreFingerIDList, v4);
  }
}