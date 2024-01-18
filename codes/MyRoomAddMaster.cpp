void __fastcall MyRoomAddMaster___ctor(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4185C5C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__, method);
    byte_4185C5C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    192,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBackObjId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_MyRoomAddEntity__o *EnableEntityList; // x0
  __int64 v12; // x1
  int size; // w23
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v14; // x19
  MyRoomAddMaster___c_c *v15; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x20
  Il2CppObject *v18; // x21
  struct MyRoomAddMaster___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x24
  int32_t *v27; // x26
  int32_t v28; // w20
  int32_t v29; // w22
  int64_t v30; // x21

  if ( (byte_4185C62 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_MyRoomAddEntity___ctor__, method);
    sub_B2C35C(&System_Comparison_MyRoomAddEntity__TypeInfo, v4);
    sub_B2C35C(&CondType_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v8);
    sub_B2C35C(&Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__8_0__, v9);
    sub_B2C35C(&MyRoomAddMaster___c_TypeInfo, v10);
    byte_4185C62 = 1;
  }
  EnableEntityList = MyRoomAddMaster__GetEnableEntityList(this, 8, v2);
  if ( !EnableEntityList )
LABEL_24:
    sub_B2C434(EnableEntityList, v12);
  size = EnableEntityList->fields._size;
  v14 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EnableEntityList;
  if ( size < 1 )
    return -1;
  v15 = MyRoomAddMaster___c_TypeInfo;
  if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v15 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__8_0,
      v18,
      Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__8_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_MyRoomAddEntity___ctor__);
    v19 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v19->__9__8_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__8_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v19->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v14,
    (System_Comparison_T__o *)_9__8_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v26 = 0LL;
  while ( 1 )
  {
    if ( v14->fields._size <= (unsigned int)v26 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v27 = (int32_t *)v14->fields._items->m_Items[v26];
    if ( !v27 )
      goto LABEL_24;
    v29 = v27[8];
    v28 = v27[9];
    v30 = v27[10];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EnableEntityList = (System_Collections_Generic_List_MyRoomAddEntity__o *)CondType__IsOpen(v29, v28, v30, 0, 0LL);
    if ( ((unsigned __int8)EnableEntityList & 1) != 0 )
      return v27[7];
    if ( (int)++v26 >= size )
      return -1;
  }
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBgId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *EnableEntityList; // x0
  __int64 v14; // x1
  int size; // w23
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v16; // x19
  MyRoomAddMaster___c_c *v17; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v20; // x21
  struct MyRoomAddMaster___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x24
  int32_t *v29; // x26
  int32_t v30; // w20
  int32_t v31; // w22
  int64_t v32; // x21
  int32_t MyRoomBgImgId; // w0

  if ( (byte_4185C5E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_MyRoomAddEntity___ctor__, method);
    sub_B2C35C(&System_Comparison_MyRoomAddEntity__TypeInfo, v4);
    sub_B2C35C(&CondType_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__4_0__, v11);
    sub_B2C35C(&MyRoomAddMaster___c_TypeInfo, v12);
    byte_4185C5E = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                                               this,
                                                                                               1,
                                                                                               v2);
  if ( !EnableEntityList )
    goto LABEL_26;
  size = EnableEntityList->fields._size;
  v16 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_22:
    EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                   (DataManager_o *)EnableEntityList,
                                                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgImgId = EventMaster__getMyRoomBgImgId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgImgId & ~(MyRoomBgImgId >> 31);
      }
    }
LABEL_26:
    sub_B2C434(EnableEntityList, v14);
  }
  v17 = MyRoomAddMaster___c_TypeInfo;
  if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v17 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v20,
      Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__4_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_MyRoomAddEntity___ctor__);
    v21 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v21->__9__4_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__4_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v21->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v16,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v28 = 0LL;
  while ( 1 )
  {
    if ( v16->fields._size <= (unsigned int)v28 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v29 = (int32_t *)v16->fields._items->m_Items[v28];
    if ( !v29 )
      goto LABEL_26;
    v31 = v29[8];
    v30 = v29[9];
    v32 = v29[10];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)CondType__IsOpen(
                                                                                                 v31,
                                                                                                 v30,
                                                                                                 v32,
                                                                                                 0,
                                                                                                 0LL);
    if ( ((unsigned __int8)EnableEntityList & 1) != 0 )
      return v29[7];
    if ( (int)++v28 >= size )
      goto LABEL_22;
  }
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBgm(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *EnableEntityList; // x0
  __int64 v14; // x1
  int size; // w23
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v16; // x19
  MyRoomAddMaster___c_c *v17; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v20; // x21
  struct MyRoomAddMaster___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x24
  int32_t *v29; // x26
  int32_t v30; // w20
  int32_t v31; // w22
  int64_t v32; // x21
  int32_t MyRoomBgmId; // w0

  if ( (byte_4185C5F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_MyRoomAddEntity___ctor__, method);
    sub_B2C35C(&System_Comparison_MyRoomAddEntity__TypeInfo, v4);
    sub_B2C35C(&CondType_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__5_0__, v11);
    sub_B2C35C(&MyRoomAddMaster___c_TypeInfo, v12);
    byte_4185C5F = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                                               this,
                                                                                               2,
                                                                                               v2);
  if ( !EnableEntityList )
    goto LABEL_26;
  size = EnableEntityList->fields._size;
  v16 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_22:
    EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                   (DataManager_o *)EnableEntityList,
                                                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgmId = EventMaster__getMyRoomBgmId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgmId & ~(MyRoomBgmId >> 31);
      }
    }
LABEL_26:
    sub_B2C434(EnableEntityList, v14);
  }
  v17 = MyRoomAddMaster___c_TypeInfo;
  if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v17 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v20,
      Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__5_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_MyRoomAddEntity___ctor__);
    v21 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v21->__9__5_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__5_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v21->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v16,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v28 = 0LL;
  while ( 1 )
  {
    if ( v16->fields._size <= (unsigned int)v28 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v29 = (int32_t *)v16->fields._items->m_Items[v28];
    if ( !v29 )
      goto LABEL_26;
    v31 = v29[8];
    v30 = v29[9];
    v32 = v29[10];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)CondType__IsOpen(
                                                                                                 v31,
                                                                                                 v30,
                                                                                                 v32,
                                                                                                 0,
                                                                                                 0LL);
    if ( ((unsigned __int8)EnableEntityList & 1) != 0 )
      return v29[7];
    if ( (int)++v28 >= size )
      goto LABEL_22;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomFrontObjId(
        MyRoomAddMaster_o *this,
        int32_t defaultId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_MyRoomAddEntity__o *EnableEntityList; // x0
  __int64 v13; // x1
  int size; // w24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v15; // x20
  MyRoomAddMaster___c_c *v16; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x21
  Il2CppObject *v19; // x22
  struct MyRoomAddMaster___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x25
  int32_t *v28; // x27
  int32_t v29; // w21
  int32_t v30; // w23
  int64_t v31; // x22

  v3 = defaultId;
  if ( (byte_4185C60 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_MyRoomAddEntity___ctor__, *(_QWORD *)&defaultId);
    sub_B2C35C(&System_Comparison_MyRoomAddEntity__TypeInfo, v5);
    sub_B2C35C(&CondType_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v9);
    sub_B2C35C(&Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__6_0__, v10);
    sub_B2C35C(&MyRoomAddMaster___c_TypeInfo, v11);
    byte_4185C60 = 1;
  }
  EnableEntityList = MyRoomAddMaster__GetEnableEntityList(this, 6, method);
  if ( !EnableEntityList )
LABEL_25:
    sub_B2C434(EnableEntityList, v13);
  size = EnableEntityList->fields._size;
  v15 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EnableEntityList;
  if ( size >= 1 )
  {
    v16 = MyRoomAddMaster___c_TypeInfo;
    if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
      v16 = MyRoomAddMaster___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_MyRoomAddEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__6_0,
        v19,
        Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__6_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_MyRoomAddEntity___ctor__);
      v20 = MyRoomAddMaster___c_TypeInfo->static_fields;
      v20->__9__6_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__6_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v20->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v15,
      (System_Comparison_T__o *)_9__6_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    v27 = 0LL;
    while ( 1 )
    {
      if ( v15->fields._size <= (unsigned int)v27 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v28 = (int32_t *)v15->fields._items->m_Items[v27];
      if ( !v28 )
        goto LABEL_25;
      v30 = v28[8];
      v29 = v28[9];
      v31 = v28[10];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      EnableEntityList = (System_Collections_Generic_List_MyRoomAddEntity__o *)CondType__IsOpen(v30, v29, v31, 0, 0LL);
      if ( ((unsigned __int8)EnableEntityList & 1) != 0 )
        return v28[7];
      if ( (int)++v27 >= size )
        return v3;
    }
  }
  return v3;
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_MyRoomAddEntity__o *EnableEntityList; // x0
  const MethodInfo *v12; // x1
  int size; // w24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v14; // x20
  MyRoomAddMaster___c_c *v15; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x21
  Il2CppObject *v18; // x22
  struct MyRoomAddMaster___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x25
  int32_t *v27; // x27
  int32_t v28; // w21
  int32_t v29; // w23
  int64_t v30; // x22

  if ( (byte_4185C61 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_MyRoomAddEntity___ctor__, method);
    sub_B2C35C(&System_Comparison_MyRoomAddEntity__TypeInfo, v4);
    sub_B2C35C(&CondType_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v8);
    sub_B2C35C(&Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__7_0__, v9);
    sub_B2C35C(&MyRoomAddMaster___c_TypeInfo, v10);
    byte_4185C61 = 1;
  }
  EnableEntityList = MyRoomAddMaster__GetEnableEntityList(this, 7, v2);
  if ( !EnableEntityList )
LABEL_24:
    sub_B2C434(EnableEntityList, v12);
  size = EnableEntityList->fields._size;
  v14 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EnableEntityList;
  if ( size < 1 )
    return MyRoomAddMaster__GetChangeMyRoomBgId(this, v12);
  v15 = MyRoomAddMaster___c_TypeInfo;
  if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v15 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v18,
      Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__7_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_MyRoomAddEntity___ctor__);
    v19 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v19->__9__7_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__7_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v19->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v14,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v26 = 0LL;
  while ( 1 )
  {
    if ( v14->fields._size <= (unsigned int)v26 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v27 = (int32_t *)v14->fields._items->m_Items[v26];
    if ( !v27 )
      goto LABEL_24;
    v29 = v27[8];
    v28 = v27[9];
    v30 = v27[10];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EnableEntityList = (System_Collections_Generic_List_MyRoomAddEntity__o *)CondType__IsOpen(v29, v28, v30, 0, 0LL);
    if ( ((unsigned __int8)EnableEntityList & 1) != 0 )
      return v27[7];
    if ( (int)++v26 >= size )
      return MyRoomAddMaster__GetChangeMyRoomBgId(this, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_MyRoomAddEntity__o *__fastcall MyRoomAddMaster__GetEnableEntityList(
        MyRoomAddMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t Time; // x0
  int64_t v16; // x23
  int32_t v17; // w24
  __int64 v18; // x10

  if ( (byte_4185C5D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_MyRoomAddEntity__TypeInfo, v8);
    sub_B2C35C(&MyRoomAddEntity_TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    byte_4185C5D = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v16 = Time;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v17,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = list;
      v18 = *(&MyRoomAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v18
        || (MyRoomAddEntity_c *)list->klass->_2.typeHierarchy[v18 - 1] != MyRoomAddEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == type
        && (__int64)list[1].fields.items <= v16
        && (__int64)list[1].fields._syncRoot >= v16 )
      {
        if ( !v11 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Add__);
      }
      if ( ++v17 >= Count )
        return (System_Collections_Generic_List_MyRoomAddEntity__o *)v11;
    }
LABEL_20:
    sub_B2C434(list, v12);
  }
  return (System_Collections_Generic_List_MyRoomAddEntity__o *)v11;
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

  if ( (byte_4185C5A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4185C5A = 1;
  }
  PK = MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (MyRoomAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_24E4520 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
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

  if ( (byte_4185C5B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__, entity);
    byte_4185C5B = 1;
  }
  PK = MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
}


void __fastcall MyRoomAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4185D57 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomAddMaster___c_TypeInfo, v1);
    byte_4185D57 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(MyRoomAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)MyRoomAddMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgId_b__4_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgm_b__5_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomFrontObjId_b__6_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomMultipleViewBgId_b__7_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}