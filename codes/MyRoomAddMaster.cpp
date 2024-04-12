void __fastcall MyRoomAddMaster___ctor(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B12F5 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
    byte_42B12F5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    193,
    (const MethodInfo_23E268C *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBackObjId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_List_MyRoomAddEntity__o *EnableEntityList; // x0
  __int64 v5; // x1
  int size; // w23
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v7; // x19
  MyRoomAddMaster___c_c *v8; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x20
  Il2CppObject *v11; // x21
  struct MyRoomAddMaster___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x24
  int32_t *v20; // x26
  int32_t v21; // w20
  int32_t v22; // w22
  int64_t v23; // x21

  if ( (byte_42B12FB & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_MyRoomAddEntity___ctor__);
    sub_B52984(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_B52984(&Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__8_0__);
    sub_B52984(&MyRoomAddMaster___c_TypeInfo);
    byte_42B12FB = 1;
  }
  EnableEntityList = MyRoomAddMaster__GetEnableEntityList(this, 8, v2);
  if ( !EnableEntityList )
LABEL_24:
    sub_B52A5C(EnableEntityList, v5);
  size = EnableEntityList->fields._size;
  v7 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EnableEntityList;
  if ( size < 1 )
    return -1;
  v8 = MyRoomAddMaster___c_TypeInfo;
  if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v8 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__8_0,
      v11,
      Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__8_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_MyRoomAddEntity___ctor__);
    v12 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v12->__9__8_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__8_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v12->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v7,
    (System_Comparison_T__o *)_9__8_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v19 = 0LL;
  while ( 1 )
  {
    if ( v7->fields._size <= (unsigned int)v19 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v20 = (int32_t *)v7->fields._items->m_Items[v19];
    if ( !v20 )
      goto LABEL_24;
    v22 = v20[8];
    v21 = v20[9];
    v23 = v20[10];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EnableEntityList = (System_Collections_Generic_List_MyRoomAddEntity__o *)CondType__IsOpen(v22, v21, v23, 0, 0LL);
    if ( ((unsigned __int8)EnableEntityList & 1) != 0 )
      return v20[7];
    if ( (int)++v19 >= size )
      return -1;
  }
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBgId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *EnableEntityList; // x0
  __int64 v5; // x1
  int size; // w23
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v7; // x19
  MyRoomAddMaster___c_c *v8; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v11; // x21
  struct MyRoomAddMaster___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x24
  int32_t *v20; // x26
  int32_t v21; // w20
  int32_t v22; // w22
  int64_t v23; // x21
  int32_t MyRoomBgImgId; // w0

  if ( (byte_42B12F7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_MyRoomAddEntity___ctor__);
    sub_B52984(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__4_0__);
    sub_B52984(&MyRoomAddMaster___c_TypeInfo);
    byte_42B12F7 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                                               this,
                                                                                               1,
                                                                                               v2);
  if ( !EnableEntityList )
    goto LABEL_26;
  size = EnableEntityList->fields._size;
  v7 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_22:
    EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                   (DataManager_o *)EnableEntityList,
                                                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgImgId = EventMaster__getMyRoomBgImgId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgImgId & ~(MyRoomBgImgId >> 31);
      }
    }
LABEL_26:
    sub_B52A5C(EnableEntityList, v5);
  }
  v8 = MyRoomAddMaster___c_TypeInfo;
  if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v8 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v11,
      Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__4_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_MyRoomAddEntity___ctor__);
    v12 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v12->__9__4_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__4_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v12->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v7,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v19 = 0LL;
  while ( 1 )
  {
    if ( v7->fields._size <= (unsigned int)v19 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v20 = (int32_t *)v7->fields._items->m_Items[v19];
    if ( !v20 )
      goto LABEL_26;
    v22 = v20[8];
    v21 = v20[9];
    v23 = v20[10];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)CondType__IsOpen(
                                                                                                 v22,
                                                                                                 v21,
                                                                                                 v23,
                                                                                                 0,
                                                                                                 0LL);
    if ( ((unsigned __int8)EnableEntityList & 1) != 0 )
      return v20[7];
    if ( (int)++v19 >= size )
      goto LABEL_22;
  }
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBgm(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *EnableEntityList; // x0
  __int64 v5; // x1
  int size; // w23
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v7; // x19
  MyRoomAddMaster___c_c *v8; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v11; // x21
  struct MyRoomAddMaster___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x24
  int32_t *v20; // x26
  int32_t v21; // w20
  int32_t v22; // w22
  int64_t v23; // x21
  int32_t MyRoomBgmId; // w0

  if ( (byte_42B12F8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_MyRoomAddEntity___ctor__);
    sub_B52984(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__5_0__);
    sub_B52984(&MyRoomAddMaster___c_TypeInfo);
    byte_42B12F8 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                                               this,
                                                                                               2,
                                                                                               v2);
  if ( !EnableEntityList )
    goto LABEL_26;
  size = EnableEntityList->fields._size;
  v7 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_22:
    EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                   (DataManager_o *)EnableEntityList,
                                                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgmId = EventMaster__getMyRoomBgmId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgmId & ~(MyRoomBgmId >> 31);
      }
    }
LABEL_26:
    sub_B52A5C(EnableEntityList, v5);
  }
  v8 = MyRoomAddMaster___c_TypeInfo;
  if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v8 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v11,
      Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__5_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_MyRoomAddEntity___ctor__);
    v12 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v12->__9__5_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__5_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v12->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v7,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v19 = 0LL;
  while ( 1 )
  {
    if ( v7->fields._size <= (unsigned int)v19 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v20 = (int32_t *)v7->fields._items->m_Items[v19];
    if ( !v20 )
      goto LABEL_26;
    v22 = v20[8];
    v21 = v20[9];
    v23 = v20[10];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)CondType__IsOpen(
                                                                                                 v22,
                                                                                                 v21,
                                                                                                 v23,
                                                                                                 0,
                                                                                                 0LL);
    if ( ((unsigned __int8)EnableEntityList & 1) != 0 )
      return v20[7];
    if ( (int)++v19 >= size )
      goto LABEL_22;
  }
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomFrontObjId(
        MyRoomAddMaster_o *this,
        int32_t defaultId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_MyRoomAddEntity__o *EnableEntityList; // x0
  __int64 v6; // x1
  int size; // w24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v8; // x20
  MyRoomAddMaster___c_c *v9; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x21
  Il2CppObject *v12; // x22
  struct MyRoomAddMaster___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x25
  int32_t *v21; // x27
  int32_t v22; // w21
  int32_t v23; // w23
  int64_t v24; // x22

  if ( (byte_42B12F9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_MyRoomAddEntity___ctor__);
    sub_B52984(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_B52984(&Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__6_0__);
    sub_B52984(&MyRoomAddMaster___c_TypeInfo);
    byte_42B12F9 = 1;
  }
  EnableEntityList = MyRoomAddMaster__GetEnableEntityList(this, 6, method);
  if ( !EnableEntityList )
LABEL_25:
    sub_B52A5C(EnableEntityList, v6);
  size = EnableEntityList->fields._size;
  v8 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EnableEntityList;
  if ( size >= 1 )
  {
    v9 = MyRoomAddMaster___c_TypeInfo;
    if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
      v9 = MyRoomAddMaster___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_MyRoomAddEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__6_0,
        v12,
        Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__6_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_MyRoomAddEntity___ctor__);
      v13 = MyRoomAddMaster___c_TypeInfo->static_fields;
      v13->__9__6_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__6_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v13->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v8,
      (System_Comparison_T__o *)_9__6_0,
      (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    v20 = 0LL;
    while ( 1 )
    {
      if ( v8->fields._size <= (unsigned int)v20 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v21 = (int32_t *)v8->fields._items->m_Items[v20];
      if ( !v21 )
        goto LABEL_25;
      v23 = v21[8];
      v22 = v21[9];
      v24 = v21[10];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      EnableEntityList = (System_Collections_Generic_List_MyRoomAddEntity__o *)CondType__IsOpen(v23, v22, v24, 0, 0LL);
      if ( ((unsigned __int8)EnableEntityList & 1) != 0 )
        return v21[7];
      if ( (int)++v20 >= size )
        return defaultId;
    }
  }
  return defaultId;
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_List_MyRoomAddEntity__o *EnableEntityList; // x0
  const MethodInfo *v5; // x1
  int size; // w24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v7; // x20
  MyRoomAddMaster___c_c *v8; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x21
  Il2CppObject *v11; // x22
  struct MyRoomAddMaster___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x25
  int32_t *v20; // x27
  int32_t v21; // w21
  int32_t v22; // w23
  int64_t v23; // x22

  if ( (byte_42B12FA & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_MyRoomAddEntity___ctor__);
    sub_B52984(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_B52984(&Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__7_0__);
    sub_B52984(&MyRoomAddMaster___c_TypeInfo);
    byte_42B12FA = 1;
  }
  EnableEntityList = MyRoomAddMaster__GetEnableEntityList(this, 7, v2);
  if ( !EnableEntityList )
LABEL_24:
    sub_B52A5C(EnableEntityList, v5);
  size = EnableEntityList->fields._size;
  v7 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EnableEntityList;
  if ( size < 1 )
    return MyRoomAddMaster__GetChangeMyRoomBgId(this, v5);
  v8 = MyRoomAddMaster___c_TypeInfo;
  if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v8 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v11,
      Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__7_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_MyRoomAddEntity___ctor__);
    v12 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v12->__9__7_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__7_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v12->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v7,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v19 = 0LL;
  while ( 1 )
  {
    if ( v7->fields._size <= (unsigned int)v19 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v20 = (int32_t *)v7->fields._items->m_Items[v19];
    if ( !v20 )
      goto LABEL_24;
    v22 = v20[8];
    v21 = v20[9];
    v23 = v20[10];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EnableEntityList = (System_Collections_Generic_List_MyRoomAddEntity__o *)CondType__IsOpen(v22, v21, v23, 0, 0LL);
    if ( ((unsigned __int8)EnableEntityList & 1) != 0 )
      return v20[7];
    if ( (int)++v19 >= size )
      return MyRoomAddMaster__GetChangeMyRoomBgId(this, v5);
  }
}


System_Collections_Generic_List_MyRoomAddEntity__o *__fastcall MyRoomAddMaster__GetEnableEntityList(
        MyRoomAddMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t Time; // x0
  int64_t v10; // x23
  int32_t v11; // w24
  __int64 v12; // x10

  if ( (byte_42B12F6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_MyRoomAddEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
    sub_B52984(&MyRoomAddEntity_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B12F6 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v10 = Time;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v11,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = list;
      v12 = *(&MyRoomAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (MyRoomAddEntity_c *)list->klass->_2.typeHierarchy[v12 - 1] != MyRoomAddEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == type
        && (__int64)list[1].fields.items <= v10
        && (__int64)list[1].fields._syncRoot >= v10 )
      {
        if ( !v5 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Add__);
      }
      if ( ++v11 >= Count )
        return (System_Collections_Generic_List_MyRoomAddEntity__o *)v5;
    }
LABEL_20:
    sub_B52A5C(list, v6);
  }
  return (System_Collections_Generic_List_MyRoomAddEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
MyRoomAddEntity_o *__fastcall MyRoomAddMaster__GetEntity(
        MyRoomAddMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B12F3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
    byte_42B12F3 = 1;
  }
  PK = MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (MyRoomAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23E2728 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomAddMaster__TryGetEntity(
        MyRoomAddMaster_o *this,
        MyRoomAddEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B12F4 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
    byte_42B12F4 = 1;
  }
  PK = MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
}


void __fastcall MyRoomAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42ADCFA & 1) == 0 )
  {
    sub_B52984(&MyRoomAddMaster___c_TypeInfo);
    byte_42ADCFA = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(MyRoomAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MyRoomAddMaster___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall MyRoomAddMaster___c___ctor(MyRoomAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBackObjId_b__8_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgId_b__4_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgm_b__5_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomFrontObjId_b__6_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomMultipleViewBgId_b__7_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}