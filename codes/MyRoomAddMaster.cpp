void __fastcall MyRoomAddMaster___ctor(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B165AA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__, method, v2);
    byte_4B165AA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    194,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBackObjId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  int size; // w25
  System_Collections_Generic_List_object__o *v21; // x19
  MyRoomAddMaster___c_c *v22; // x0
  System_Comparison_T__o *_9__8_0; // x20
  Il2CppObject *v24; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int32_t v32; // w20
  System_Collections_Generic_List_object__o *v33; // x21
  int32_t syncRoot_high; // w22
  int32_t syncRoot; // w24
  int64_t klass_low; // x23

  if ( (byte_4B165B0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_MyRoomAddEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&CondType_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__8_0__, v12, v13);
    sub_1BCA7E0(&MyRoomAddMaster___c_TypeInfo, v14, v15);
    byte_4B165B0 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 8, v2);
  if ( !EnableEntityList )
LABEL_19:
    sub_1BCAA3C(EnableEntityList, v17);
  size = EnableEntityList->fields._size;
  v21 = EnableEntityList;
  if ( size < 1 )
    return -1;
  v22 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v17);
    v22 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Comparison_T__o *)v22->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22, v17);
      v22 = MyRoomAddMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__8_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_MyRoomAddEntity__TypeInfo, v17, v18, v19);
    System_Comparison_object____ctor(_9__8_0, v24, Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__8_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__8_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v26, v27, v28, v29, v30, v31);
  }
  System_Collections_Generic_List_object___Sort_56244000(
    v21,
    _9__8_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v32 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v21,
                                                                      v32,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_19;
    v33 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v17);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v33->fields._version;
    if ( size == ++v32 )
      return -1;
  }
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBgId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  int size; // w25
  System_Collections_Generic_List_object__o *v25; // x19
  MyRoomAddMaster___c_c *v26; // x0
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v28; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int32_t v36; // w20
  System_Collections_Generic_List_object__o *v37; // x21
  int32_t syncRoot_high; // w22
  int32_t syncRoot; // w24
  int64_t klass_low; // x23
  int32_t MyRoomBgImgId; // w0

  if ( (byte_4B165AC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_MyRoomAddEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&CondType_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__4_0__, v16, v17);
    sub_1BCA7E0(&MyRoomAddMaster___c_TypeInfo, v18, v19);
    byte_4B165AC = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 1, v2);
  if ( !EnableEntityList )
    goto LABEL_21;
  size = EnableEntityList->fields._size;
  v25 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgImgId = EventMaster__getMyRoomBgImgId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgImgId & ~(MyRoomBgImgId >> 31);
      }
    }
LABEL_21:
    sub_1BCAA3C(EnableEntityList, v21);
  }
  v26 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v21);
    v26 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v26->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26, v21);
      v26 = MyRoomAddMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_MyRoomAddEntity__TypeInfo, v21, v22, v23);
    System_Comparison_object____ctor(_9__4_0, v28, Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__4_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__4_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v30, v31, v32, v33, v34, v35);
  }
  System_Collections_Generic_List_object___Sort_56244000(
    v25,
    _9__4_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v36 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v25,
                                                                      v36,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v37 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v21);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v37->fields._version;
    if ( size == ++v36 )
      goto LABEL_17;
  }
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBgm(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  int size; // w25
  System_Collections_Generic_List_object__o *v25; // x19
  MyRoomAddMaster___c_c *v26; // x0
  System_Comparison_T__o *_9__5_0; // x20
  Il2CppObject *v28; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int32_t v36; // w20
  System_Collections_Generic_List_object__o *v37; // x21
  int32_t syncRoot_high; // w22
  int32_t syncRoot; // w24
  int64_t klass_low; // x23
  int32_t MyRoomBgmId; // w0

  if ( (byte_4B165AD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_MyRoomAddEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&CondType_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__5_0__, v16, v17);
    sub_1BCA7E0(&MyRoomAddMaster___c_TypeInfo, v18, v19);
    byte_4B165AD = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 2, v2);
  if ( !EnableEntityList )
    goto LABEL_21;
  size = EnableEntityList->fields._size;
  v25 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgmId = EventMaster__getMyRoomBgmId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgmId & ~(MyRoomBgmId >> 31);
      }
    }
LABEL_21:
    sub_1BCAA3C(EnableEntityList, v21);
  }
  v26 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v21);
    v26 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Comparison_T__o *)v26->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26, v21);
      v26 = MyRoomAddMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__5_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_MyRoomAddEntity__TypeInfo, v21, v22, v23);
    System_Comparison_object____ctor(_9__5_0, v28, Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__5_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__5_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)_9__5_0, v30, v31, v32, v33, v34, v35);
  }
  System_Collections_Generic_List_object___Sort_56244000(
    v25,
    _9__5_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v36 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v25,
                                                                      v36,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v37 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v21);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v37->fields._version;
    if ( size == ++v36 )
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  int size; // w26
  System_Collections_Generic_List_object__o *v22; // x20
  MyRoomAddMaster___c_c *v23; // x0
  System_Comparison_T__o *_9__6_0; // x21
  Il2CppObject *v25; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int32_t v33; // w21
  System_Collections_Generic_List_object__o *v34; // x22
  int32_t syncRoot_high; // w23
  int32_t syncRoot; // w25
  int64_t klass_low; // x24

  v3 = defaultId;
  if ( (byte_4B165AE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_MyRoomAddEntity__TypeInfo, *(_QWORD *)&defaultId, method);
    sub_1BCA7E0(&CondType_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v11, v12);
    sub_1BCA7E0(&Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__6_0__, v13, v14);
    sub_1BCA7E0(&MyRoomAddMaster___c_TypeInfo, v15, v16);
    byte_4B165AE = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 6, method);
  if ( !EnableEntityList )
LABEL_20:
    sub_1BCAA3C(EnableEntityList, v18);
  size = EnableEntityList->fields._size;
  v22 = EnableEntityList;
  if ( size >= 1 )
  {
    v23 = MyRoomAddMaster___c_TypeInfo;
    if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v18);
      v23 = MyRoomAddMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Comparison_T__o *)v23->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23, v18);
        v23 = MyRoomAddMaster___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v23->static_fields->__9;
      _9__6_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_MyRoomAddEntity__TypeInfo, v18, v19, v20);
      System_Comparison_object____ctor(
        _9__6_0,
        v25,
        Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__6_0__,
        0LL);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__6_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__6_0,
        (int64_t)_9__6_0,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
    System_Collections_Generic_List_object___Sort_56244000(
      v22,
      _9__6_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    v33 = 0;
    while ( 1 )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        v22,
                                                                        v33,
                                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
      if ( !EnableEntityList )
        goto LABEL_20;
      v34 = EnableEntityList;
      syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
      syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
      klass_low = SLODWORD(EnableEntityList[1].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v18);
      if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
        return v34->fields._version;
      if ( size == ++v33 )
        return v3;
    }
  }
  return v3;
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  const MethodInfo *v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  int size; // w26
  System_Collections_Generic_List_object__o *v21; // x20
  MyRoomAddMaster___c_c *v22; // x0
  System_Comparison_T__o *_9__7_0; // x21
  Il2CppObject *v24; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int32_t v32; // w21
  System_Collections_Generic_List_object__o *v33; // x22
  int32_t syncRoot_high; // w23
  int32_t syncRoot; // w25
  int64_t klass_low; // x24

  if ( (byte_4B165AF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_MyRoomAddEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&CondType_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__7_0__, v12, v13);
    sub_1BCA7E0(&MyRoomAddMaster___c_TypeInfo, v14, v15);
    byte_4B165AF = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 7, v2);
  if ( !EnableEntityList )
LABEL_19:
    sub_1BCAA3C(EnableEntityList, v17);
  size = EnableEntityList->fields._size;
  v21 = EnableEntityList;
  if ( size < 1 )
    return MyRoomAddMaster__GetChangeMyRoomBgId(this, v17);
  v22 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v17);
    v22 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Comparison_T__o *)v22->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22, v17);
      v22 = MyRoomAddMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_MyRoomAddEntity__TypeInfo, v17, v18, v19);
    System_Comparison_object____ctor(
      _9__7_0,
      v24,
      Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__7_0__,
      0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__7_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v26, v27, v28, v29, v30, v31);
  }
  System_Collections_Generic_List_object___Sort_56244000(
    v21,
    _9__7_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v32 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v21,
                                                                      v32,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_19;
    v33 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v17);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v33->fields._version;
    if ( size == ++v32 )
      return MyRoomAddMaster__GetChangeMyRoomBgId(this, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_MyRoomAddEntity__o *__fastcall MyRoomAddMaster__GetEnableEntityList(
        MyRoomAddMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v21; // x1
  int32_t Count; // w22
  int64_t Time; // x0
  int64_t v24; // x23
  int32_t v25; // w24
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4B165AB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_MyRoomAddEntity__TypeInfo, v12, v13);
    sub_1BCA7E0(&MyRoomAddEntity_TypeInfo, v14, v15);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v16, v17);
    byte_4B165AB = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MyRoomAddEntity__TypeInfo,
                                                       *(_QWORD *)&type,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21);
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v24 = Time;
    v25 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v25,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v19 = (int64_t)list;
      methodPtr_low = LOBYTE(MyRoomAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MyRoomAddEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != MyRoomAddEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == type && (__int64)list[2].klass <= v24 && (__int64)list[2].monitor >= v24 )
      {
        if ( !v18 )
          break;
        items = v18->fields._items;
        v34 = Method_System_Collections_Generic_List_MyRoomAddEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          break;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v19;
          sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), v19, v26, v27, v28, v29, v30, v31);
        }
      }
      if ( Count == ++v25 )
        return (System_Collections_Generic_List_MyRoomAddEntity__o *)v18;
    }
LABEL_22:
    sub_1BCAA3C(list, v19);
  }
  return (System_Collections_Generic_List_MyRoomAddEntity__o *)v18;
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

  if ( (byte_4B165A8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&type);
    byte_4B165A8 = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (MyRoomAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31B3198 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
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

  if ( (byte_4B165A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__, entity, *(_QWORD *)&id);
    byte_4B165A9 = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
}


void __fastcall MyRoomAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B165B1 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomAddMaster___c_TypeInfo, v1, v2);
    byte_4B165B1 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MyRoomAddMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MyRoomAddMaster___c_TypeInfo->static_fields->__9 = (struct MyRoomAddMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MyRoomAddMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgId_b__4_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgm_b__5_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomFrontObjId_b__6_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomMultipleViewBgId_b__7_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}