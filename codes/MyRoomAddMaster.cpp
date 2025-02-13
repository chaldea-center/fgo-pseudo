void __fastcall MyRoomAddMaster___ctor(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC91F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
    byte_4BDC91F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    198,
    (const MethodInfo_325E55C *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
}


int32_t __fastcall MyRoomAddMaster__GetBackObjAnimationNum(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct MyRoomAddEntity_o **p_BackObjAnimationChangeEntity; // x19
  MyRoomAddEntity_o *EnableEntityList; // x0
  const MethodInfo *v6; // x1
  MyRoomAddEntity_o *BackObjAnimationChangeEntity; // x8
  System_Collections_Generic_List_object__o *v8; // x20
  MyRoomAddEntity_o *v9; // x21
  int32_t overwriteId; // w28
  int size; // w29
  int64_t Time; // x0
  int64_t v13; // x22
  MyRoomAddMaster___c_c *v14; // x0
  System_Comparison_T__o *_9__11_0; // x23
  Il2CppObject *v16; // x24
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int32_t v24; // w24
  int32_t v25; // w23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  MyRoomAddEntity_o *v32; // x25
  int32_t condValue; // w26
  int32_t condType; // w27
  int64_t condValue2; // x25
  char v37; // [xsp+Ch] [xbp-64h]

  if ( (byte_4BDC926 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__11_0__);
    sub_1C21E38(&MyRoomAddMaster___c_TypeInfo);
    byte_4BDC926 = 1;
  }
  p_BackObjAnimationChangeEntity = &this->fields.BackObjAnimationChangeEntity;
  if ( !this->fields.BackObjAnimationChangeEntity )
    return 0;
  EnableEntityList = (MyRoomAddEntity_o *)MyRoomAddMaster__GetEnableEntityList(this, 8, 1, v2);
  BackObjAnimationChangeEntity = this->fields.BackObjAnimationChangeEntity;
  if ( !BackObjAnimationChangeEntity
    || (v8 = (System_Collections_Generic_List_object__o *)EnableEntityList,
        EnableEntityList = (MyRoomAddEntity_o *)MyRoomAddEntity__GetScheduleUpdateAt(BackObjAnimationChangeEntity, v6),
        !*p_BackObjAnimationChangeEntity)
    || !v8 )
  {
LABEL_32:
    sub_1C22094(EnableEntityList, v6);
  }
  v9 = EnableEntityList;
  overwriteId = (*p_BackObjAnimationChangeEntity)->fields.overwriteId;
  size = v8->fields._size;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( size < 1 )
    return 1;
  v13 = Time;
  v14 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v14 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__11_0 = (System_Comparison_T__o *)v14->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = MyRoomAddMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__11_0, v16, Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__11_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__11_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
      (int64_t)_9__11_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  System_Collections_Generic_List_object___Sort_56953720(
    v8,
    _9__11_0,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v37 = 0;
  v24 = 0;
  v25 = 1;
  do
  {
    EnableEntityList = (MyRoomAddEntity_o *)System_Collections_Generic_List_object___get_Item(
                                              v8,
                                              v24,
                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_32;
    v32 = EnableEntityList;
    if ( overwriteId == EnableEntityList->fields.overwriteId )
    {
      if ( v9 == (MyRoomAddEntity_o *)MyRoomAddEntity__GetScheduleUpdateAt(EnableEntityList, v6) )
      {
        if ( v32->fields.endedAt > v13 )
          goto LABEL_26;
        v37 = 1;
      }
      if ( v32->fields.startedAt <= v13 )
      {
        condType = v32->fields.condType;
        condValue = v32->fields.condValue;
        condValue2 = v32->fields.condValue2;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v25 += CondType__IsOpen(condType, condValue, condValue2, 0, 0LL, 0LL);
      }
    }
LABEL_26:
    ++v24;
  }
  while ( size != v24 );
  if ( (v37 & 1) != 0 )
  {
    *p_BackObjAnimationChangeEntity = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)p_BackObjAnimationChangeEntity, 0LL, v26, v27, v28, v29, v30, v31);
  }
  return v25;
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBackObjId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v5; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v7; // x20
  MyRoomAddMaster___c_c *v8; // x0
  System_Comparison_T__o *_9__9_0; // x21
  Il2CppObject *v10; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int32_t v18; // w22
  struct MyRoomAddEntity_o *v19; // x21
  int32_t syncRoot_high; // w23
  int32_t syncRoot; // w25
  int64_t klass_low; // x24
  const MethodInfo *v23; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BDC925 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C21E38(&Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__9_0__);
    sub_1C21E38(&MyRoomAddMaster___c_TypeInfo);
    byte_4BDC925 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 8, 0, v2);
  if ( !EnableEntityList )
LABEL_21:
    sub_1C22094(EnableEntityList, v5);
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
  _9__9_0 = (System_Comparison_T__o *)v8->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = MyRoomAddMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__9_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__9_0, v10, Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__9_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__9_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)_9__9_0, v12, v13, v14, v15, v16, v17);
  }
  System_Collections_Generic_List_object___Sort_56953720(
    v7,
    _9__9_0,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v18 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v7,
                                                                      v18,
                                                                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v19 = (struct MyRoomAddEntity_o *)EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      break;
    if ( size == ++v18 )
      return -1;
  }
  if ( MyRoomAddEntity__GetScheduleUpdateAt(v19, v23) >= 1 )
  {
    this->fields.BackObjAnimationChangeEntity = v19;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.BackObjAnimationChangeEntity,
      (int64_t)v19,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  return v19->fields.overwriteId;
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBgId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v5; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v7; // x19
  MyRoomAddMaster___c_c *v8; // x0
  System_Comparison_T__o *_9__5_0; // x20
  Il2CppObject *v10; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int32_t v18; // w20
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t syncRoot_high; // w22
  int32_t syncRoot; // w24
  int64_t klass_low; // x23
  int32_t MyRoomBgImgId; // w0

  if ( (byte_4BDC921 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__5_0__);
    sub_1C21E38(&MyRoomAddMaster___c_TypeInfo);
    byte_4BDC921 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 1, 0, v2);
  if ( !EnableEntityList )
    goto LABEL_21;
  size = EnableEntityList->fields._size;
  v7 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgImgId = EventMaster__getMyRoomBgImgId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgImgId & ~(MyRoomBgImgId >> 31);
      }
    }
LABEL_21:
    sub_1C22094(EnableEntityList, v5);
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
    _9__5_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__5_0, v10, Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__5_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__5_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)_9__5_0, v12, v13, v14, v15, v16, v17);
  }
  System_Collections_Generic_List_object___Sort_56953720(
    v7,
    _9__5_0,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v18 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v7,
                                                                      v18,
                                                                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v19 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v19->fields._version;
    if ( size == ++v18 )
      goto LABEL_17;
  }
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBgm(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v5; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v7; // x19
  MyRoomAddMaster___c_c *v8; // x0
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v10; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int32_t v18; // w20
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t syncRoot_high; // w22
  int32_t syncRoot; // w24
  int64_t klass_low; // x23
  int32_t MyRoomBgmId; // w0

  if ( (byte_4BDC922 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__6_0__);
    sub_1C21E38(&MyRoomAddMaster___c_TypeInfo);
    byte_4BDC922 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 2, 0, v2);
  if ( !EnableEntityList )
    goto LABEL_21;
  size = EnableEntityList->fields._size;
  v7 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgmId = EventMaster__getMyRoomBgmId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgmId & ~(MyRoomBgmId >> 31);
      }
    }
LABEL_21:
    sub_1C22094(EnableEntityList, v5);
  }
  v8 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v8 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v8->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = MyRoomAddMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v10, Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__6_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__6_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)_9__6_0, v12, v13, v14, v15, v16, v17);
  }
  System_Collections_Generic_List_object___Sort_56953720(
    v7,
    _9__6_0,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v18 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v7,
                                                                      v18,
                                                                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v19 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v19->fields._version;
    if ( size == ++v18 )
      goto LABEL_17;
  }
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomFrontObjId(
        MyRoomAddMaster_o *this,
        int32_t defaultId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v7; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v9; // x20
  MyRoomAddMaster___c_c *v10; // x0
  System_Comparison_T__o *_9__7_0; // x21
  Il2CppObject *v12; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int32_t v20; // w21
  System_Collections_Generic_List_object__o *v21; // x22
  int32_t syncRoot_high; // w23
  int32_t syncRoot; // w25
  int64_t klass_low; // x24

  if ( (byte_4BDC923 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C21E38(&Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__7_0__);
    sub_1C21E38(&MyRoomAddMaster___c_TypeInfo);
    byte_4BDC923 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 6, 0, v3);
  if ( !EnableEntityList )
LABEL_20:
    sub_1C22094(EnableEntityList, v7);
  size = EnableEntityList->fields._size;
  v9 = EnableEntityList;
  if ( size >= 1 )
  {
    v10 = MyRoomAddMaster___c_TypeInfo;
    if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
      v10 = MyRoomAddMaster___c_TypeInfo;
    }
    _9__7_0 = (System_Comparison_T__o *)v10->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = MyRoomAddMaster___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__7_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_MyRoomAddEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__7_0,
        v12,
        Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__7_0__,
        0LL);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__7_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__7_0,
        (int64_t)_9__7_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    System_Collections_Generic_List_object___Sort_56953720(
      v9,
      _9__7_0,
      (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    v20 = 0;
    while ( 1 )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        v9,
                                                                        v20,
                                                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
      if ( !EnableEntityList )
        goto LABEL_20;
      v21 = EnableEntityList;
      syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
      syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
      klass_low = SLODWORD(EnableEntityList[1].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
        return v21->fields._version;
      if ( size == ++v20 )
        return defaultId;
    }
  }
  return defaultId;
}


int64_t __fastcall MyRoomAddMaster__GetChangeMyRoomGetScheduleUpdateAt(
        MyRoomAddMaster_o *this,
        const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)this->fields.BackObjAnimationChangeEntity;
  if ( result )
    return MyRoomAddEntity__GetScheduleUpdateAt((MyRoomAddEntity_o *)result, method);
  return result;
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  const MethodInfo *v5; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v7; // x20
  MyRoomAddMaster___c_c *v8; // x0
  System_Comparison_T__o *_9__8_0; // x21
  Il2CppObject *v10; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int32_t v18; // w21
  System_Collections_Generic_List_object__o *v19; // x22
  int32_t syncRoot_high; // w23
  int32_t syncRoot; // w25
  int64_t klass_low; // x24

  if ( (byte_4BDC924 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C21E38(&Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__8_0__);
    sub_1C21E38(&MyRoomAddMaster___c_TypeInfo);
    byte_4BDC924 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 7, 0, v2);
  if ( !EnableEntityList )
LABEL_19:
    sub_1C22094(EnableEntityList, v5);
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
  _9__8_0 = (System_Comparison_T__o *)v8->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = MyRoomAddMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__8_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__8_0,
      v10,
      Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__8_0__,
      0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__8_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v12, v13, v14, v15, v16, v17);
  }
  System_Collections_Generic_List_object___Sort_56953720(
    v7,
    _9__8_0,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v18 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v7,
                                                                      v18,
                                                                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_19;
    v19 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v19->fields._version;
    if ( size == ++v18 )
      return MyRoomAddMaster__GetChangeMyRoomBgId(this, v5);
  }
}


System_Collections_Generic_List_MyRoomAddEntity__o *__fastcall MyRoomAddMaster__GetEnableEntityList(
        MyRoomAddMaster_o *this,
        int32_t type,
        bool isIgnoreTimeLimit,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int64_t v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  int64_t Time; // x0
  int64_t v12; // x24
  int32_t v13; // w25
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4BDC920 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC920 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v12 = Time;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
      if ( !list )
        break;
      v8 = (int64_t)list;
      if ( HIDWORD(list->fields.items) == type
        && (isIgnoreTimeLimit || (__int64)list[2].klass <= v12 && (__int64)list[2].monitor >= v12) )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v21 = Method_System_Collections_Generic_List_MyRoomAddEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v8;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 4), v8, v14, v15, v16, v17, v18, v19);
        }
      }
      if ( Count == ++v13 )
        return (System_Collections_Generic_List_MyRoomAddEntity__o *)v7;
    }
LABEL_22:
    sub_1C22094(list, v8);
  }
  return (System_Collections_Generic_List_MyRoomAddEntity__o *)v7;
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

  if ( (byte_4BDC91D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
    byte_4BDC91D = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (MyRoomAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_3260880 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
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

  if ( (byte_4BDC91E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
    byte_4BDC91E = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
}


void __fastcall MyRoomAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC927 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomAddMaster___c_TypeInfo);
    byte_4BDC927 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(MyRoomAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MyRoomAddMaster___c_TypeInfo->static_fields->__9 = (struct MyRoomAddMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)MyRoomAddMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MyRoomAddMaster___c___ctor(MyRoomAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MyRoomAddMaster___c___GetBackObjAnimationNum_b__11_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBackObjId_b__9_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgId_b__5_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgm_b__6_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomFrontObjId_b__7_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomMultipleViewBgId_b__8_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}