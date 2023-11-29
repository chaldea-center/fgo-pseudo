void __fastcall MyRoomAddMaster___ctor(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC04B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__, method);
    byte_40FC04B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    192,
    (const MethodInfo_266F73C *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  int size; // w23
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v17; // x19
  MyRoomAddMaster___c_c *v18; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x20
  Il2CppObject *v21; // x21
  struct MyRoomAddMaster___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x24
  int32_t *v30; // x26
  int32_t v31; // w20
  int32_t v32; // w22
  int64_t v33; // x21

  if ( (byte_40FC051 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_MyRoomAddEntity___ctor__, method);
    sub_B16FFC(&System_Comparison_MyRoomAddEntity__TypeInfo, v4);
    sub_B16FFC(&CondType_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v8);
    sub_B16FFC(&Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__8_0__, v9);
    sub_B16FFC(&MyRoomAddMaster___c_TypeInfo, v10);
    byte_40FC051 = 1;
  }
  EnableEntityList = MyRoomAddMaster__GetEnableEntityList(this, 8, v2);
  if ( !EnableEntityList )
LABEL_24:
    sub_B170D4();
  size = EnableEntityList->fields._size;
  v17 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EnableEntityList;
  if ( size < 1 )
    return -1;
  v18 = MyRoomAddMaster___c_TypeInfo;
  if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v18 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_MyRoomAddEntity__TypeInfo,
                                                                          v12,
                                                                          v13,
                                                                          v14,
                                                                          v15);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__8_0,
      v21,
      Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__8_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_MyRoomAddEntity___ctor__);
    v22 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v22->__9__8_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__8_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v22->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v17,
    (System_Comparison_T__o *)_9__8_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v29 = 0LL;
  while ( 1 )
  {
    if ( v17->fields._size <= (unsigned int)v29 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v30 = (int32_t *)v17->fields._items->m_Items[v29];
    if ( !v30 )
      goto LABEL_24;
    v32 = v30[8];
    v31 = v30[9];
    v33 = v30[10];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(v32, v31, v33, 0, 0LL) )
      return v30[7];
    if ( (int)++v29 >= size )
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
  System_Collections_Generic_List_MyRoomAddEntity__o *EnableEntityList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  int size; // w23
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v19; // x19
  MyRoomAddMaster___c_c *v20; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v23; // x21
  struct MyRoomAddMaster___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x24
  int32_t *v32; // x26
  int32_t v33; // w20
  int32_t v34; // w22
  int64_t v35; // x21
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t MyRoomBgImgId; // w0

  if ( (byte_40FC04D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_MyRoomAddEntity___ctor__, method);
    sub_B16FFC(&System_Comparison_MyRoomAddEntity__TypeInfo, v4);
    sub_B16FFC(&CondType_TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__4_0__, v11);
    sub_B16FFC(&MyRoomAddMaster___c_TypeInfo, v12);
    byte_40FC04D = 1;
  }
  EnableEntityList = MyRoomAddMaster__GetEnableEntityList(this, 1, v2);
  if ( !EnableEntityList )
    goto LABEL_26;
  size = EnableEntityList->fields._size;
  v19 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EnableEntityList;
  if ( size < 1 )
  {
LABEL_22:
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        MyRoomBgImgId = EventMaster__getMyRoomBgImgId(MasterData_WarQuestSelectionMaster, 0LL);
        return MyRoomBgImgId & ~(MyRoomBgImgId >> 31);
      }
    }
LABEL_26:
    sub_B170D4();
  }
  v20 = MyRoomAddMaster___c_TypeInfo;
  if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v20 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_MyRoomAddEntity__TypeInfo,
                                                                          v14,
                                                                          v15,
                                                                          v16,
                                                                          v17);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v23,
      Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__4_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_MyRoomAddEntity___ctor__);
    v24 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v24->__9__4_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v24->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v19,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v31 = 0LL;
  while ( 1 )
  {
    if ( v19->fields._size <= (unsigned int)v31 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v32 = (int32_t *)v19->fields._items->m_Items[v31];
    if ( !v32 )
      goto LABEL_26;
    v34 = v32[8];
    v33 = v32[9];
    v35 = v32[10];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(v34, v33, v35, 0, 0LL) )
      return v32[7];
    if ( (int)++v31 >= size )
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
  System_Collections_Generic_List_MyRoomAddEntity__o *EnableEntityList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  int size; // w23
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v19; // x19
  MyRoomAddMaster___c_c *v20; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v23; // x21
  struct MyRoomAddMaster___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x24
  int32_t *v32; // x26
  int32_t v33; // w20
  int32_t v34; // w22
  int64_t v35; // x21
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t MyRoomBgmId; // w0

  if ( (byte_40FC04E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_MyRoomAddEntity___ctor__, method);
    sub_B16FFC(&System_Comparison_MyRoomAddEntity__TypeInfo, v4);
    sub_B16FFC(&CondType_TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__5_0__, v11);
    sub_B16FFC(&MyRoomAddMaster___c_TypeInfo, v12);
    byte_40FC04E = 1;
  }
  EnableEntityList = MyRoomAddMaster__GetEnableEntityList(this, 2, v2);
  if ( !EnableEntityList )
    goto LABEL_26;
  size = EnableEntityList->fields._size;
  v19 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EnableEntityList;
  if ( size < 1 )
  {
LABEL_22:
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        MyRoomBgmId = EventMaster__getMyRoomBgmId(MasterData_WarQuestSelectionMaster, 0LL);
        return MyRoomBgmId & ~(MyRoomBgmId >> 31);
      }
    }
LABEL_26:
    sub_B170D4();
  }
  v20 = MyRoomAddMaster___c_TypeInfo;
  if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v20 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_MyRoomAddEntity__TypeInfo,
                                                                          v14,
                                                                          v15,
                                                                          v16,
                                                                          v17);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v23,
      Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__5_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_MyRoomAddEntity___ctor__);
    v24 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v24->__9__5_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__5_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v24->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v19,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v31 = 0LL;
  while ( 1 )
  {
    if ( v19->fields._size <= (unsigned int)v31 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v32 = (int32_t *)v19->fields._items->m_Items[v31];
    if ( !v32 )
      goto LABEL_26;
    v34 = v32[8];
    v33 = v32[9];
    v35 = v32[10];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(v34, v33, v35, 0, 0LL) )
      return v32[7];
    if ( (int)++v31 >= size )
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  int size; // w24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v18; // x20
  MyRoomAddMaster___c_c *v19; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x21
  Il2CppObject *v22; // x22
  struct MyRoomAddMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x25
  int32_t *v31; // x27
  int32_t v32; // w21
  int32_t v33; // w23
  int64_t v34; // x22

  v3 = defaultId;
  if ( (byte_40FC04F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_MyRoomAddEntity___ctor__, *(_QWORD *)&defaultId);
    sub_B16FFC(&System_Comparison_MyRoomAddEntity__TypeInfo, v5);
    sub_B16FFC(&CondType_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v9);
    sub_B16FFC(&Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__6_0__, v10);
    sub_B16FFC(&MyRoomAddMaster___c_TypeInfo, v11);
    byte_40FC04F = 1;
  }
  EnableEntityList = MyRoomAddMaster__GetEnableEntityList(this, 6, method);
  if ( !EnableEntityList )
LABEL_25:
    sub_B170D4();
  size = EnableEntityList->fields._size;
  v18 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EnableEntityList;
  if ( size >= 1 )
  {
    v19 = MyRoomAddMaster___c_TypeInfo;
    if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
      v19 = MyRoomAddMaster___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_MyRoomAddEntity__TypeInfo,
                                                                            v13,
                                                                            v14,
                                                                            v15,
                                                                            v16);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__6_0,
        v22,
        Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__6_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_MyRoomAddEntity___ctor__);
      v23 = MyRoomAddMaster___c_TypeInfo->static_fields;
      v23->__9__6_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__6_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v23->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v18,
      (System_Comparison_T__o *)_9__6_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    v30 = 0LL;
    while ( 1 )
    {
      if ( v18->fields._size <= (unsigned int)v30 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v31 = (int32_t *)v18->fields._items->m_Items[v30];
      if ( !v31 )
        goto LABEL_25;
      v33 = v31[8];
      v32 = v31[9];
      v34 = v31[10];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(v33, v32, v34, 0, 0LL) )
        return v31[7];
      if ( (int)++v30 >= size )
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  int size; // w24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v17; // x20
  MyRoomAddMaster___c_c *v18; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x21
  Il2CppObject *v21; // x22
  struct MyRoomAddMaster___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x25
  int32_t *v30; // x27
  int32_t v31; // w21
  int32_t v32; // w23
  int64_t v33; // x22

  if ( (byte_40FC050 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_MyRoomAddEntity___ctor__, method);
    sub_B16FFC(&System_Comparison_MyRoomAddEntity__TypeInfo, v4);
    sub_B16FFC(&CondType_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v8);
    sub_B16FFC(&Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__7_0__, v9);
    sub_B16FFC(&MyRoomAddMaster___c_TypeInfo, v10);
    byte_40FC050 = 1;
  }
  EnableEntityList = MyRoomAddMaster__GetEnableEntityList(this, 7, v2);
  if ( !EnableEntityList )
LABEL_24:
    sub_B170D4();
  size = EnableEntityList->fields._size;
  v17 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EnableEntityList;
  if ( size < 1 )
    return MyRoomAddMaster__GetChangeMyRoomBgId(this, v12);
  v18 = MyRoomAddMaster___c_TypeInfo;
  if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v18 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_MyRoomAddEntity__TypeInfo,
                                                                          v12,
                                                                          v13,
                                                                          v14,
                                                                          v15);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v21,
      Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__7_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_MyRoomAddEntity___ctor__);
    v22 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v22->__9__7_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__7_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v22->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v17,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v29 = 0LL;
  while ( 1 )
  {
    if ( v17->fields._size <= (unsigned int)v29 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v30 = (int32_t *)v17->fields._items->m_Items[v29];
    if ( !v30 )
      goto LABEL_24;
    v32 = v30[8];
    v31 = v30[9];
    v33 = v30[10];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(v32, v31, v33, 0, 0LL) )
      return v30[7];
    if ( (int)++v29 >= size )
      return MyRoomAddMaster__GetChangeMyRoomBgId(this, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_MyRoomAddEntity__o *__fastcall MyRoomAddMaster__GetEnableEntityList(
        MyRoomAddMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t Time; // x0
  int64_t v17; // x23
  int32_t v18; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v21; // x10

  if ( (byte_40FC04C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MyRoomAddEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_MyRoomAddEntity__TypeInfo, v10);
    sub_B16FFC(&MyRoomAddEntity_TypeInfo, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    byte_40FC04C = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MyRoomAddEntity__TypeInfo,
                                                                                                  *(_QWORD *)&type,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v17 = Time;
    v18 = 0;
    while ( 1 )
    {
      v19 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v19 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v19,
               v18,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v21 = *(&MyRoomAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v21
        || (MyRoomAddEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] != MyRoomAddEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(Item[1].klass) == type && (__int64)Item[3].klass <= v17 && (__int64)Item[3].monitor >= v17 )
      {
        if ( !v13 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Add__);
      }
      if ( ++v18 >= Count )
        return (System_Collections_Generic_List_MyRoomAddEntity__o *)v13;
    }
LABEL_20:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_MyRoomAddEntity__o *)v13;
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

  if ( (byte_40FC049 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_40FC049 = 1;
  }
  PK = MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (MyRoomAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266F7D8 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
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

  if ( (byte_40FC04A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__, entity);
    byte_40FC04A = 1;
  }
  PK = MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
}


void __fastcall MyRoomAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F864D & 1) == 0 )
  {
    sub_B16FFC(&MyRoomAddMaster___c_TypeInfo, v1);
    byte_40F864D = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(MyRoomAddMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)MyRoomAddMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgId_b__4_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgm_b__5_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomFrontObjId_b__6_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomMultipleViewBgId_b__7_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}