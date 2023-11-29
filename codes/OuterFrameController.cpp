void __fastcall OuterFrameController___ctor(OuterFrameController_o *this, const MethodInfo *method)
{
  if ( (byte_40F800A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_OuterFrameController___ctor__, method);
    byte_40F800A = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_OuterFrameController___ctor__);
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
  int32_t fingerId; // w0
  __int64 v12; // x1
  CTouch_c *v13; // x0
  System_Collections_Generic_List_int__o *v14; // x19
  UnityEngine_Touch_array *v15; // x20
  int32_t v16; // w0

  if ( (byte_40F8007 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v3);
    byte_40F8007 = 1;
  }
  if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
  {
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( !byte_40F6391 )
    {
      sub_B16FFC(&CTouch_TypeInfo, v4);
      byte_40F6391 = 1;
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
      fingerId = UnityEngine_Touch__get_fingerId(
                   (UnityEngine_Touch_o *)&touches->m_Items[(int)touchCount - 1].fields.m_Position,
                   0LL);
      if ( !ignoreFingerIDList )
        goto LABEL_29;
      if ( System_Collections_Generic_List_int___Contains(
             ignoreFingerIDList,
             fingerId,
             (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        return;
      }
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_40F6391 )
      {
        sub_B16FFC(&CTouch_TypeInfo, v12);
        byte_40F6391 = 1;
      }
      v13 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v13 = CTouch_TypeInfo;
      }
      v14 = v13->static_fields->ignoreFingerIDList;
      v15 = UnityEngine_Input__get_touches(0LL);
      touchCount = UnityEngine_Input__get_touchCount(0LL);
      if ( !v15 )
LABEL_29:
        sub_B170D4();
      if ( (unsigned int)(touchCount - 1) < v15->max_length )
      {
        v16 = UnityEngine_Touch__get_fingerId(
                (UnityEngine_Touch_o *)&v15->m_Items[(int)touchCount - 1].fields.m_Position,
                0LL);
        if ( v14 )
        {
          System_Collections_Generic_List_int___Add(
            v14,
            v16,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          return;
        }
        goto LABEL_29;
      }
    }
    sub_B17100(touchCount, v9, v10);
    sub_B170A0();
  }
}


void __fastcall OuterFrameController__Start(OuterFrameController_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  CTouch_c *v3; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x0

  if ( (byte_40F8008 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v2);
    byte_40F8008 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_40F6391 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    byte_40F6391 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v3->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_B170D4();
  System_Collections_Generic_List_int___Clear(
    ignoreFingerIDList,
    (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
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
  UnityEngine_Touch_array *touches; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  CTouch_c *v14; // x0
  System_Collections_Generic_List_int__o *v15; // x20
  int32_t fingerId; // w0

  if ( (byte_40F8009 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, v3);
    byte_40F8009 = 1;
  }
  if ( !UnityEngine_Input__get_touchCount(0LL) )
  {
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( !byte_40F6391 )
    {
      sub_B16FFC(&CTouch_TypeInfo, v4);
      byte_40F6391 = 1;
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
      (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
  }
  v7 = UnityEngine_Input__get_touchCount(0LL) - 1;
  if ( v7 >= 0 )
  {
    v8 = v7;
    for ( i = 68LL * v7 + 32; ; i -= 68LL )
    {
      touches = UnityEngine_Input__get_touches(0LL);
      if ( !touches )
        break;
      if ( v8 >= touches->max_length )
        goto LABEL_37;
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)touches + i), 0LL) == 3 )
        goto LABEL_40;
      touches = UnityEngine_Input__get_touches(0LL);
      if ( !touches )
        break;
      if ( v8 >= touches->max_length )
      {
LABEL_37:
        sub_B17100(touches, v11, v12);
        sub_B170A0();
      }
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)((char *)touches + i), 0LL) == 4 )
      {
LABEL_40:
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        if ( !byte_40F6391 )
        {
          sub_B16FFC(&CTouch_TypeInfo, v13);
          byte_40F6391 = 1;
        }
        v14 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v14 = CTouch_TypeInfo;
        }
        v15 = v14->static_fields->ignoreFingerIDList;
        touches = UnityEngine_Input__get_touches(0LL);
        if ( !touches )
          break;
        if ( v8 >= touches->max_length )
          goto LABEL_37;
        fingerId = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)((char *)touches + i), 0LL);
        if ( !v15 )
          break;
        System_Collections_Generic_List_int___Remove(
          v15,
          fingerId,
          (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__);
      }
      if ( (--v8 & 0x80000000) != 0 )
        return;
    }
LABEL_36:
    sub_B170D4();
  }
}