void __fastcall MyRoomAddMaster___ctor(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB60FD & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__, method);
    byte_4AB60FD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    194,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
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
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v11; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v13; // x19
  MyRoomAddMaster___c_c *v14; // x0
  System_Comparison_T__o *_9__8_0; // x20
  Il2CppObject *v16; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w20
  System_Collections_Generic_List_object__o *v21; // x21
  int32_t syncRoot_high; // w22
  int32_t syncRoot; // w24
  int64_t klass_low; // x23

  if ( (byte_4AB6103 & 1) == 0 )
  {
    sub_1BAB41C(&System_Comparison_MyRoomAddEntity__TypeInfo, method);
    sub_1BAB41C(&CondType_TypeInfo, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v7);
    sub_1BAB41C(&Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__8_0__, v8);
    sub_1BAB41C(&MyRoomAddMaster___c_TypeInfo, v9);
    byte_4AB6103 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 8, v2);
  if ( !EnableEntityList )
LABEL_19:
    sub_1BAB678(EnableEntityList, v11);
  size = EnableEntityList->fields._size;
  v13 = EnableEntityList;
  if ( size < 1 )
    return -1;
  v14 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v14 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Comparison_T__o *)v14->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = MyRoomAddMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__8_0 = (System_Comparison_T__o *)sub_1BAB668(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__8_0, v16, Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__8_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__8_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v18, v19);
  }
  System_Collections_Generic_List_object___Sort_55899008(
    v13,
    _9__8_0,
    (const MethodInfo_354F380 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v20 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v13,
                                                                      v20,
                                                                      (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_19;
    v21 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v21->fields._version;
    if ( size == ++v20 )
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
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v13; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v15; // x19
  MyRoomAddMaster___c_c *v16; // x0
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v18; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w20
  System_Collections_Generic_List_object__o *v23; // x21
  int32_t syncRoot_high; // w22
  int32_t syncRoot; // w24
  int64_t klass_low; // x23
  int32_t MyRoomBgImgId; // w0

  if ( (byte_4AB60FF & 1) == 0 )
  {
    sub_1BAB41C(&System_Comparison_MyRoomAddEntity__TypeInfo, method);
    sub_1BAB41C(&CondType_TypeInfo, v4);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v8);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BAB41C(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__4_0__, v10);
    sub_1BAB41C(&MyRoomAddMaster___c_TypeInfo, v11);
    byte_4AB60FF = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 1, v2);
  if ( !EnableEntityList )
    goto LABEL_21;
  size = EnableEntityList->fields._size;
  v15 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgImgId = EventMaster__getMyRoomBgImgId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgImgId & ~(MyRoomBgImgId >> 31);
      }
    }
LABEL_21:
    sub_1BAB678(EnableEntityList, v13);
  }
  v16 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v16 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v16->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = MyRoomAddMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1BAB668(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v18, Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__4_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__4_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v20, v21);
  }
  System_Collections_Generic_List_object___Sort_55899008(
    v15,
    _9__4_0,
    (const MethodInfo_354F380 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v22 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v15,
                                                                      v22,
                                                                      (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v23 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v23->fields._version;
    if ( size == ++v22 )
      goto LABEL_17;
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
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v13; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v15; // x19
  MyRoomAddMaster___c_c *v16; // x0
  System_Comparison_T__o *_9__5_0; // x20
  Il2CppObject *v18; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w20
  System_Collections_Generic_List_object__o *v23; // x21
  int32_t syncRoot_high; // w22
  int32_t syncRoot; // w24
  int64_t klass_low; // x23
  int32_t MyRoomBgmId; // w0

  if ( (byte_4AB6100 & 1) == 0 )
  {
    sub_1BAB41C(&System_Comparison_MyRoomAddEntity__TypeInfo, method);
    sub_1BAB41C(&CondType_TypeInfo, v4);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v8);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BAB41C(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__5_0__, v10);
    sub_1BAB41C(&MyRoomAddMaster___c_TypeInfo, v11);
    byte_4AB6100 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 2, v2);
  if ( !EnableEntityList )
    goto LABEL_21;
  size = EnableEntityList->fields._size;
  v15 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgmId = EventMaster__getMyRoomBgmId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgmId & ~(MyRoomBgmId >> 31);
      }
    }
LABEL_21:
    sub_1BAB678(EnableEntityList, v13);
  }
  v16 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v16 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Comparison_T__o *)v16->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = MyRoomAddMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__5_0 = (System_Comparison_T__o *)sub_1BAB668(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__5_0, v18, Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__5_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__5_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v20, v21);
  }
  System_Collections_Generic_List_object___Sort_55899008(
    v15,
    _9__5_0,
    (const MethodInfo_354F380 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v22 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v15,
                                                                      v22,
                                                                      (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v23 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v23->fields._version;
    if ( size == ++v22 )
      goto LABEL_17;
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
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v12; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v14; // x20
  MyRoomAddMaster___c_c *v15; // x0
  System_Comparison_T__o *_9__6_0; // x21
  Il2CppObject *v17; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w21
  System_Collections_Generic_List_object__o *v22; // x22
  int32_t syncRoot_high; // w23
  int32_t syncRoot; // w25
  int64_t klass_low; // x24

  v3 = defaultId;
  if ( (byte_4AB6101 & 1) == 0 )
  {
    sub_1BAB41C(&System_Comparison_MyRoomAddEntity__TypeInfo, *(_QWORD *)&defaultId);
    sub_1BAB41C(&CondType_TypeInfo, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v8);
    sub_1BAB41C(&Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__6_0__, v9);
    sub_1BAB41C(&MyRoomAddMaster___c_TypeInfo, v10);
    byte_4AB6101 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 6, method);
  if ( !EnableEntityList )
LABEL_20:
    sub_1BAB678(EnableEntityList, v12);
  size = EnableEntityList->fields._size;
  v14 = EnableEntityList;
  if ( size >= 1 )
  {
    v15 = MyRoomAddMaster___c_TypeInfo;
    if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
      v15 = MyRoomAddMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Comparison_T__o *)v15->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = MyRoomAddMaster___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__6_0 = (System_Comparison_T__o *)sub_1BAB668(System_Comparison_MyRoomAddEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__6_0,
        v17,
        Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__6_0__,
        0LL);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__6_0;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v19, v20);
    }
    System_Collections_Generic_List_object___Sort_55899008(
      v14,
      _9__6_0,
      (const MethodInfo_354F380 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    v21 = 0;
    while ( 1 )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        v14,
                                                                        v21,
                                                                        (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
      if ( !EnableEntityList )
        goto LABEL_20;
      v22 = EnableEntityList;
      syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
      syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
      klass_low = SLODWORD(EnableEntityList[1].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
        return v22->fields._version;
      if ( size == ++v21 )
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
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  const MethodInfo *v11; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v13; // x20
  MyRoomAddMaster___c_c *v14; // x0
  System_Comparison_T__o *_9__7_0; // x21
  Il2CppObject *v16; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w21
  System_Collections_Generic_List_object__o *v21; // x22
  int32_t syncRoot_high; // w23
  int32_t syncRoot; // w25
  int64_t klass_low; // x24

  if ( (byte_4AB6102 & 1) == 0 )
  {
    sub_1BAB41C(&System_Comparison_MyRoomAddEntity__TypeInfo, method);
    sub_1BAB41C(&CondType_TypeInfo, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v7);
    sub_1BAB41C(&Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__7_0__, v8);
    sub_1BAB41C(&MyRoomAddMaster___c_TypeInfo, v9);
    byte_4AB6102 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 7, v2);
  if ( !EnableEntityList )
LABEL_19:
    sub_1BAB678(EnableEntityList, v11);
  size = EnableEntityList->fields._size;
  v13 = EnableEntityList;
  if ( size < 1 )
    return MyRoomAddMaster__GetChangeMyRoomBgId(this, v11);
  v14 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v14 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Comparison_T__o *)v14->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = MyRoomAddMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_1BAB668(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__7_0,
      v16,
      Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__7_0__,
      0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__7_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v18, v19);
  }
  System_Collections_Generic_List_object___Sort_55899008(
    v13,
    _9__7_0,
    (const MethodInfo_354F380 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v20 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v13,
                                                                      v20,
                                                                      (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_19;
    v21 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v21->fields._version;
    if ( size == ++v20 )
      return MyRoomAddMaster__GetChangeMyRoomBgId(this, v11);
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
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  int64_t Time; // x0
  int64_t v16; // x23
  int32_t v17; // w24
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4AB60FE & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__, v7);
    sub_1BAB41C(&System_Collections_Generic_List_MyRoomAddEntity__TypeInfo, v8);
    sub_1BAB41C(&MyRoomAddEntity_TypeInfo, v9);
    sub_1BAB41C(&NetworkManager_TypeInfo, v10);
    byte_4AB60FE = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v16 = Time;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = list;
      methodPtr_low = LOBYTE(MyRoomAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MyRoomAddEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != MyRoomAddEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == type && (__int64)list[2].klass <= v16 && (__int64)list[2].monitor >= v16 )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v22 = Method_System_Collections_Generic_List_MyRoomAddEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v12;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v12, v18, v19);
        }
      }
      if ( Count == ++v17 )
        return (System_Collections_Generic_List_MyRoomAddEntity__o *)v11;
    }
LABEL_22:
    sub_1BAB678(list, v12);
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
  Il2CppObject *PK; // x1

  if ( (byte_4AB60FB & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4AB60FB = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (MyRoomAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31640E8 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
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
  Il2CppObject *PK; // x2

  if ( (byte_4AB60FC & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__, entity);
    byte_4AB60FC = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
}


void __fastcall MyRoomAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB6104 & 1) == 0 )
  {
    sub_1BAB41C(&MyRoomAddMaster___c_TypeInfo, v1);
    byte_4AB6104 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(MyRoomAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MyRoomAddMaster___c_TypeInfo->static_fields->__9 = (struct MyRoomAddMaster___c_o *)v2;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)MyRoomAddMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BAB678(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgId_b__4_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BAB678(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgm_b__5_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BAB678(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomFrontObjId_b__6_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BAB678(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomMultipleViewBgId_b__7_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BAB678(this, a);
  return b->fields.priority - a->fields.priority;
}