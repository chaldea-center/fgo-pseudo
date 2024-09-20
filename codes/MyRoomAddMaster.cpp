void __fastcall MyRoomAddMaster___ctor(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B506 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
    byte_4A5B506 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    194,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBackObjId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v5; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v7; // x19
  MyRoomAddMaster___c_c *v8; // x0
  System_Comparison_T__o *_9__8_0; // x20
  Il2CppObject *v10; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w20
  System_Collections_Generic_List_object__o *v15; // x21
  int32_t syncRoot_high; // w22
  int32_t syncRoot; // w24
  int64_t klass_low; // x23

  if ( (byte_4A5B50C & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1B885B0(&Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__8_0__);
    sub_1B885B0(&MyRoomAddMaster___c_TypeInfo);
    byte_4A5B50C = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 8, v2);
  if ( !EnableEntityList )
LABEL_19:
    sub_1B8880C(EnableEntityList, v5);
  size = EnableEntityList->fields._size;
  v7 = EnableEntityList;
  if ( size < 1 )
    return -1;
  v8 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v8 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Comparison_T__o *)v8->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = MyRoomAddMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__8_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__8_0, v10, Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__8_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__8_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v12, v13);
  }
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    _9__8_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v14 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v7,
                                                                      v14,
                                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_19;
    v15 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v15->fields._version;
    if ( size == ++v14 )
      return -1;
  }
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBgId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v5; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v7; // x19
  MyRoomAddMaster___c_c *v8; // x0
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v10; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w20
  System_Collections_Generic_List_object__o *v15; // x21
  int32_t syncRoot_high; // w22
  int32_t syncRoot; // w24
  int64_t klass_low; // x23
  int32_t MyRoomBgImgId; // w0

  if ( (byte_4A5B508 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__4_0__);
    sub_1B885B0(&MyRoomAddMaster___c_TypeInfo);
    byte_4A5B508 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 1, v2);
  if ( !EnableEntityList )
    goto LABEL_21;
  size = EnableEntityList->fields._size;
  v7 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgImgId = EventMaster__getMyRoomBgImgId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgImgId & ~(MyRoomBgImgId >> 31);
      }
    }
LABEL_21:
    sub_1B8880C(EnableEntityList, v5);
  }
  v8 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v8 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v8->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = MyRoomAddMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v10, Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__4_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__4_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v12, v13);
  }
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    _9__4_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v14 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v7,
                                                                      v14,
                                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v15 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v15->fields._version;
    if ( size == ++v14 )
      goto LABEL_17;
  }
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBgm(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v5; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v7; // x19
  MyRoomAddMaster___c_c *v8; // x0
  System_Comparison_T__o *_9__5_0; // x20
  Il2CppObject *v10; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w20
  System_Collections_Generic_List_object__o *v15; // x21
  int32_t syncRoot_high; // w22
  int32_t syncRoot; // w24
  int64_t klass_low; // x23
  int32_t MyRoomBgmId; // w0

  if ( (byte_4A5B509 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__5_0__);
    sub_1B885B0(&MyRoomAddMaster___c_TypeInfo);
    byte_4A5B509 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 2, v2);
  if ( !EnableEntityList )
    goto LABEL_21;
  size = EnableEntityList->fields._size;
  v7 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgmId = EventMaster__getMyRoomBgmId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgmId & ~(MyRoomBgmId >> 31);
      }
    }
LABEL_21:
    sub_1B8880C(EnableEntityList, v5);
  }
  v8 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v8 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Comparison_T__o *)v8->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = MyRoomAddMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__5_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__5_0, v10, Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__5_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__5_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v12, v13);
  }
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    _9__5_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v14 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v7,
                                                                      v14,
                                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v15 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v15->fields._version;
    if ( size == ++v14 )
      goto LABEL_17;
  }
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomFrontObjId(
        MyRoomAddMaster_o *this,
        int32_t defaultId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v6; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v8; // x20
  MyRoomAddMaster___c_c *v9; // x0
  System_Comparison_T__o *_9__6_0; // x21
  Il2CppObject *v11; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w21
  System_Collections_Generic_List_object__o *v16; // x22
  int32_t syncRoot_high; // w23
  int32_t syncRoot; // w25
  int64_t klass_low; // x24

  if ( (byte_4A5B50A & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1B885B0(&Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__6_0__);
    sub_1B885B0(&MyRoomAddMaster___c_TypeInfo);
    byte_4A5B50A = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 6, method);
  if ( !EnableEntityList )
LABEL_20:
    sub_1B8880C(EnableEntityList, v6);
  size = EnableEntityList->fields._size;
  v8 = EnableEntityList;
  if ( size >= 1 )
  {
    v9 = MyRoomAddMaster___c_TypeInfo;
    if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
      v9 = MyRoomAddMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Comparison_T__o *)v9->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = MyRoomAddMaster___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__6_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_MyRoomAddEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__6_0,
        v11,
        Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__6_0__,
        0LL);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__6_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v13, v14);
    }
    System_Collections_Generic_List_object___Sort_55571192(
      v8,
      _9__6_0,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    v15 = 0;
    while ( 1 )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        v8,
                                                                        v15,
                                                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
      if ( !EnableEntityList )
        goto LABEL_20;
      v16 = EnableEntityList;
      syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
      syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
      klass_low = SLODWORD(EnableEntityList[1].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
        return v16->fields._version;
      if ( size == ++v15 )
        return defaultId;
    }
  }
  return defaultId;
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  const MethodInfo *v5; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v7; // x20
  MyRoomAddMaster___c_c *v8; // x0
  System_Comparison_T__o *_9__7_0; // x21
  Il2CppObject *v10; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w21
  System_Collections_Generic_List_object__o *v15; // x22
  int32_t syncRoot_high; // w23
  int32_t syncRoot; // w25
  int64_t klass_low; // x24

  if ( (byte_4A5B50B & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1B885B0(&Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__7_0__);
    sub_1B885B0(&MyRoomAddMaster___c_TypeInfo);
    byte_4A5B50B = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 7, v2);
  if ( !EnableEntityList )
LABEL_19:
    sub_1B8880C(EnableEntityList, v5);
  size = EnableEntityList->fields._size;
  v7 = EnableEntityList;
  if ( size < 1 )
    return MyRoomAddMaster__GetChangeMyRoomBgId(this, v5);
  v8 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v8 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Comparison_T__o *)v8->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = MyRoomAddMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__7_0,
      v10,
      Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__7_0__,
      0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__7_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v12, v13);
  }
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    _9__7_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v14 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v7,
                                                                      v14,
                                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_19;
    v15 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v15->fields._version;
    if ( size == ++v14 )
      return MyRoomAddMaster__GetChangeMyRoomBgId(this, v5);
  }
}


System_Collections_Generic_List_MyRoomAddEntity__o *__fastcall MyRoomAddMaster__GetEnableEntityList(
        MyRoomAddMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  int64_t Time; // x0
  int64_t v10; // x23
  int32_t v11; // w24
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4A5B507 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
    sub_1B885B0(&MyRoomAddEntity_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B507 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v10 = Time;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = list;
      methodPtr_low = LOBYTE(MyRoomAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MyRoomAddEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != MyRoomAddEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == type && (__int64)list[2].klass <= v10 && (__int64)list[2].monitor >= v10 )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_MyRoomAddEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v6, v12, v13);
        }
      }
      if ( Count == ++v11 )
        return (System_Collections_Generic_List_MyRoomAddEntity__o *)v5;
    }
LABEL_22:
    sub_1B8880C(list, v6);
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
  Il2CppObject *PK; // x1

  if ( (byte_4A5B504 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
    byte_4A5B504 = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (MyRoomAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_311DC8C *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
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

  if ( (byte_4A5B505 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
    byte_4A5B505 = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
}


void __fastcall MyRoomAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B50D & 1) == 0 )
  {
    sub_1B885B0(&MyRoomAddMaster___c_TypeInfo);
    byte_4A5B50D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(MyRoomAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MyRoomAddMaster___c_TypeInfo->static_fields->__9 = (struct MyRoomAddMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)MyRoomAddMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgId_b__4_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgm_b__5_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomFrontObjId_b__6_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomMultipleViewBgId_b__7_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}