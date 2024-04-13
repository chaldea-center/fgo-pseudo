void __fastcall MyRoomAddMaster___ctor(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9D84 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E9D84 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    193,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBackObjId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_MyRoomAddEntity__o *EnableEntityList; // x0
  __int64 v27; // x1
  int size; // w23
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v29; // x19
  MyRoomAddMaster___c_c *v30; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__8_0; // x20
  Il2CppObject *v33; // x21
  struct MyRoomAddMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x24
  int32_t *v42; // x26
  int32_t v43; // w20
  int32_t v44; // w22
  int64_t v45; // x21

  if ( (byte_42E9D8A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_MyRoomAddEntity___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Comparison_MyRoomAddEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CondType_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v17, v18, v19);
    sub_B5D5C4(&Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__8_0__, v20, v21, v22);
    sub_B5D5C4(&MyRoomAddMaster___c_TypeInfo, v23, v24, v25);
    byte_42E9D8A = 1;
  }
  EnableEntityList = MyRoomAddMaster__GetEnableEntityList(this, 8, v2);
  if ( !EnableEntityList )
LABEL_24:
    sub_B5D69C(EnableEntityList, v27);
  size = EnableEntityList->fields._size;
  v29 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EnableEntityList;
  if ( size < 1 )
    return -1;
  v30 = MyRoomAddMaster___c_TypeInfo;
  if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v30 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__8_0,
      v33,
      Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__8_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_MyRoomAddEntity___ctor__);
    v34 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v34->__9__8_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__8_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v34->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v29,
    (System_Comparison_T__o *)_9__8_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v41 = 0LL;
  while ( 1 )
  {
    if ( v29->fields._size <= (unsigned int)v41 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v42 = (int32_t *)v29->fields._items->m_Items[v41];
    if ( !v42 )
      goto LABEL_24;
    v44 = v42[8];
    v43 = v42[9];
    v45 = v42[10];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EnableEntityList = (System_Collections_Generic_List_MyRoomAddEntity__o *)CondType__IsOpen(v44, v43, v45, 0, 0LL);
    if ( ((unsigned __int8)EnableEntityList & 1) != 0 )
      return v42[7];
    if ( (int)++v41 >= size )
      return -1;
  }
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBgId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *EnableEntityList; // x0
  __int64 v33; // x1
  int size; // w23
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v35; // x19
  MyRoomAddMaster___c_c *v36; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v39; // x21
  struct MyRoomAddMaster___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x24
  int32_t *v48; // x26
  int32_t v49; // w20
  int32_t v50; // w22
  int64_t v51; // x21
  int32_t MyRoomBgImgId; // w0

  if ( (byte_42E9D86 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_MyRoomAddEntity___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Comparison_MyRoomAddEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CondType_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__4_0__, v26, v27, v28);
    sub_B5D5C4(&MyRoomAddMaster___c_TypeInfo, v29, v30, v31);
    byte_42E9D86 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                                               this,
                                                                                               1,
                                                                                               v2);
  if ( !EnableEntityList )
    goto LABEL_26;
  size = EnableEntityList->fields._size;
  v35 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_22:
    EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                   (DataManager_o *)EnableEntityList,
                                                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgImgId = EventMaster__getMyRoomBgImgId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgImgId & ~(MyRoomBgImgId >> 31);
      }
    }
LABEL_26:
    sub_B5D69C(EnableEntityList, v33);
  }
  v36 = MyRoomAddMaster___c_TypeInfo;
  if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v36 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v39,
      Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__4_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_MyRoomAddEntity___ctor__);
    v40 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v40->__9__4_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v40->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v35,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v47 = 0LL;
  while ( 1 )
  {
    if ( v35->fields._size <= (unsigned int)v47 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v48 = (int32_t *)v35->fields._items->m_Items[v47];
    if ( !v48 )
      goto LABEL_26;
    v50 = v48[8];
    v49 = v48[9];
    v51 = v48[10];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)CondType__IsOpen(
                                                                                                 v50,
                                                                                                 v49,
                                                                                                 v51,
                                                                                                 0,
                                                                                                 0LL);
    if ( ((unsigned __int8)EnableEntityList & 1) != 0 )
      return v48[7];
    if ( (int)++v47 >= size )
      goto LABEL_22;
  }
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBgm(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *EnableEntityList; // x0
  __int64 v33; // x1
  int size; // w23
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v35; // x19
  MyRoomAddMaster___c_c *v36; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v39; // x21
  struct MyRoomAddMaster___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x24
  int32_t *v48; // x26
  int32_t v49; // w20
  int32_t v50; // w22
  int64_t v51; // x21
  int32_t MyRoomBgmId; // w0

  if ( (byte_42E9D87 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_MyRoomAddEntity___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Comparison_MyRoomAddEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CondType_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__5_0__, v26, v27, v28);
    sub_B5D5C4(&MyRoomAddMaster___c_TypeInfo, v29, v30, v31);
    byte_42E9D87 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                                               this,
                                                                                               2,
                                                                                               v2);
  if ( !EnableEntityList )
    goto LABEL_26;
  size = EnableEntityList->fields._size;
  v35 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_22:
    EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                   (DataManager_o *)EnableEntityList,
                                                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgmId = EventMaster__getMyRoomBgmId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgmId & ~(MyRoomBgmId >> 31);
      }
    }
LABEL_26:
    sub_B5D69C(EnableEntityList, v33);
  }
  v36 = MyRoomAddMaster___c_TypeInfo;
  if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v36 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v39,
      Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__5_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_MyRoomAddEntity___ctor__);
    v40 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v40->__9__5_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__5_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v40->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v35,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v47 = 0LL;
  while ( 1 )
  {
    if ( v35->fields._size <= (unsigned int)v47 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v48 = (int32_t *)v35->fields._items->m_Items[v47];
    if ( !v48 )
      goto LABEL_26;
    v50 = v48[8];
    v49 = v48[9];
    v51 = v48[10];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EnableEntityList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)CondType__IsOpen(
                                                                                                 v50,
                                                                                                 v49,
                                                                                                 v51,
                                                                                                 0,
                                                                                                 0LL);
    if ( ((unsigned __int8)EnableEntityList & 1) != 0 )
      return v48[7];
    if ( (int)++v47 >= size )
      goto LABEL_22;
  }
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomFrontObjId(
        MyRoomAddMaster_o *this,
        int32_t defaultId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_MyRoomAddEntity__o *EnableEntityList; // x0
  __int64 v28; // x1
  int size; // w24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v30; // x20
  MyRoomAddMaster___c_c *v31; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x21
  Il2CppObject *v34; // x22
  struct MyRoomAddMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x25
  int32_t *v43; // x27
  int32_t v44; // w21
  int32_t v45; // w23
  int64_t v46; // x22

  v4 = defaultId;
  if ( (byte_42E9D88 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_MyRoomAddEntity___ctor__, defaultId, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_MyRoomAddEntity__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CondType_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v18, v19, v20);
    sub_B5D5C4(&Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__6_0__, v21, v22, v23);
    sub_B5D5C4(&MyRoomAddMaster___c_TypeInfo, v24, v25, v26);
    byte_42E9D88 = 1;
  }
  EnableEntityList = MyRoomAddMaster__GetEnableEntityList(this, 6, method);
  if ( !EnableEntityList )
LABEL_25:
    sub_B5D69C(EnableEntityList, v28);
  size = EnableEntityList->fields._size;
  v30 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EnableEntityList;
  if ( size >= 1 )
  {
    v31 = MyRoomAddMaster___c_TypeInfo;
    if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
      v31 = MyRoomAddMaster___c_TypeInfo;
    }
    static_fields = v31->static_fields;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_MyRoomAddEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__6_0,
        v34,
        Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__6_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_MyRoomAddEntity___ctor__);
      v35 = MyRoomAddMaster___c_TypeInfo->static_fields;
      v35->__9__6_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__6_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v35->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      v30,
      (System_Comparison_T__o *)_9__6_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    v42 = 0LL;
    while ( 1 )
    {
      if ( v30->fields._size <= (unsigned int)v42 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = (int32_t *)v30->fields._items->m_Items[v42];
      if ( !v43 )
        goto LABEL_25;
      v45 = v43[8];
      v44 = v43[9];
      v46 = v43[10];
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      EnableEntityList = (System_Collections_Generic_List_MyRoomAddEntity__o *)CondType__IsOpen(v45, v44, v46, 0, 0LL);
      if ( ((unsigned __int8)EnableEntityList & 1) != 0 )
        return v43[7];
      if ( (int)++v42 >= size )
        return v4;
    }
  }
  return v4;
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_MyRoomAddEntity__o *EnableEntityList; // x0
  const MethodInfo *v27; // x1
  int size; // w24
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v29; // x20
  MyRoomAddMaster___c_c *v30; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x21
  Il2CppObject *v33; // x22
  struct MyRoomAddMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x25
  int32_t *v42; // x27
  int32_t v43; // w21
  int32_t v44; // w23
  int64_t v45; // x22

  if ( (byte_42E9D89 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_MyRoomAddEntity___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Comparison_MyRoomAddEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CondType_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v17, v18, v19);
    sub_B5D5C4(&Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__7_0__, v20, v21, v22);
    sub_B5D5C4(&MyRoomAddMaster___c_TypeInfo, v23, v24, v25);
    byte_42E9D89 = 1;
  }
  EnableEntityList = MyRoomAddMaster__GetEnableEntityList(this, 7, v2);
  if ( !EnableEntityList )
LABEL_24:
    sub_B5D69C(EnableEntityList, v27);
  size = EnableEntityList->fields._size;
  v29 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)EnableEntityList;
  if ( size < 1 )
    return MyRoomAddMaster__GetChangeMyRoomBgId(this, v27);
  v30 = MyRoomAddMaster___c_TypeInfo;
  if ( (BYTE3(MyRoomAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v30 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v33,
      Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__7_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_MyRoomAddEntity___ctor__);
    v34 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v34->__9__7_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__7_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v34->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v29,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v41 = 0LL;
  while ( 1 )
  {
    if ( v29->fields._size <= (unsigned int)v41 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v42 = (int32_t *)v29->fields._items->m_Items[v41];
    if ( !v42 )
      goto LABEL_24;
    v44 = v42[8];
    v43 = v42[9];
    v45 = v42[10];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EnableEntityList = (System_Collections_Generic_List_MyRoomAddEntity__o *)CondType__IsOpen(v44, v43, v45, 0, 0LL);
    if ( ((unsigned __int8)EnableEntityList & 1) != 0 )
      return v42[7];
    if ( (int)++v41 >= size )
      return MyRoomAddMaster__GetChangeMyRoomBgId(this, v27);
  }
}


System_Collections_Generic_List_MyRoomAddEntity__o *__fastcall MyRoomAddMaster__GetEnableEntityList(
        MyRoomAddMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t Time; // x0
  int64_t v29; // x23
  int32_t v30; // w24
  __int64 v31; // x10

  if ( (byte_42E9D85 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, type, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_MyRoomAddEntity__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&MyRoomAddEntity_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_TypeInfo, v21, v22, v23);
    byte_42E9D85 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v29 = Time;
    v30 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v30,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v25 = list;
      v31 = *(&MyRoomAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (MyRoomAddEntity_c *)list->klass->_2.typeHierarchy[v31 - 1] != MyRoomAddEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == type
        && (__int64)list[1].fields.items <= v29
        && (__int64)list[1].fields._syncRoot >= v29 )
      {
        if ( !v24 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Add__);
      }
      if ( ++v30 >= Count )
        return (System_Collections_Generic_List_MyRoomAddEntity__o *)v24;
    }
LABEL_20:
    sub_B5D69C(list, v25);
  }
  return (System_Collections_Generic_List_MyRoomAddEntity__o *)v24;
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

  if ( (byte_42E9D82 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__,
      id,
      type,
      *(_QWORD *)&priority);
    byte_42E9D82 = 1;
  }
  PK = MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (MyRoomAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23FB260 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
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

  if ( (byte_42E9D83 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&type);
    byte_42E9D83 = 1;
  }
  PK = MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
}


void __fastcall MyRoomAddMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5F81 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomAddMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5F81 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(MyRoomAddMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MyRoomAddMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgId_b__4_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgm_b__5_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomFrontObjId_b__6_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomMultipleViewBgId_b__7_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}