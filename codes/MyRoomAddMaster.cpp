void __fastcall MyRoomAddMaster___ctor(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFDB2C & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__, method);
    byte_4BFDB2C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    198,
    (const MethodInfo_327D914 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
}


int32_t __fastcall MyRoomAddMaster__GetBackObjAnimationNum(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct MyRoomAddEntity_o **p_BackObjAnimationChangeEntity; // x19
  MyRoomAddEntity_o *EnableEntityList; // x0
  const MethodInfo *v13; // x1
  MyRoomAddEntity_o *BackObjAnimationChangeEntity; // x8
  System_Collections_Generic_List_object__o *v15; // x20
  MyRoomAddEntity_o *v16; // x21
  int32_t overwriteId; // w28
  int size; // w29
  int64_t Time; // x0
  int64_t v20; // x22
  MyRoomAddMaster___c_c *v21; // x0
  System_Comparison_T__o *_9__11_0; // x23
  Il2CppObject *v23; // x24
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int32_t v31; // w24
  int32_t v32; // w23
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  MyRoomAddEntity_o *v39; // x25
  int32_t condValue; // w26
  int32_t condType; // w27
  int64_t condValue2; // x25
  char v44; // [xsp+Ch] [xbp-64h]

  if ( (byte_4BFDB33 & 1) == 0 )
  {
    sub_1C2E12C(&System_Comparison_MyRoomAddEntity__TypeInfo, method);
    sub_1C2E12C(&CondType_TypeInfo, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v7);
    sub_1C2E12C(&NetworkManager_TypeInfo, v8);
    sub_1C2E12C(&Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__11_0__, v9);
    sub_1C2E12C(&MyRoomAddMaster___c_TypeInfo, v10);
    byte_4BFDB33 = 1;
  }
  p_BackObjAnimationChangeEntity = &this->fields.BackObjAnimationChangeEntity;
  if ( !this->fields.BackObjAnimationChangeEntity )
    return 0;
  EnableEntityList = (MyRoomAddEntity_o *)MyRoomAddMaster__GetEnableEntityList(this, 8, 1, v2);
  BackObjAnimationChangeEntity = this->fields.BackObjAnimationChangeEntity;
  if ( !BackObjAnimationChangeEntity
    || (v15 = (System_Collections_Generic_List_object__o *)EnableEntityList,
        EnableEntityList = (MyRoomAddEntity_o *)MyRoomAddEntity__GetScheduleUpdateAt(BackObjAnimationChangeEntity, v13),
        !*p_BackObjAnimationChangeEntity)
    || !v15 )
  {
LABEL_32:
    sub_1C2E388(EnableEntityList, v13);
  }
  v16 = EnableEntityList;
  overwriteId = (*p_BackObjAnimationChangeEntity)->fields.overwriteId;
  size = v15->fields._size;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( size < 1 )
    return 1;
  v20 = Time;
  v21 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v21 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__11_0 = (System_Comparison_T__o *)v21->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = MyRoomAddMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__11_0, v23, Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__11_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__11_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
      (int64_t)_9__11_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  System_Collections_Generic_List_object___Sort_57070448(
    v15,
    _9__11_0,
    (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v44 = 0;
  v31 = 0;
  v32 = 1;
  do
  {
    EnableEntityList = (MyRoomAddEntity_o *)System_Collections_Generic_List_object___get_Item(
                                              v15,
                                              v31,
                                              (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_32;
    v39 = EnableEntityList;
    if ( overwriteId == EnableEntityList->fields.overwriteId )
    {
      if ( v16 == (MyRoomAddEntity_o *)MyRoomAddEntity__GetScheduleUpdateAt(EnableEntityList, v13) )
      {
        if ( v39->fields.endedAt > v20 )
          goto LABEL_26;
        v44 = 1;
      }
      if ( v39->fields.startedAt <= v20 )
      {
        condType = v39->fields.condType;
        condValue = v39->fields.condValue;
        condValue2 = v39->fields.condValue2;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v32 += CondType__IsOpen(condType, condValue, condValue2, 0, 0LL, 0LL);
      }
    }
LABEL_26:
    ++v31;
  }
  while ( size != v31 );
  if ( (v44 & 1) != 0 )
  {
    *p_BackObjAnimationChangeEntity = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)p_BackObjAnimationChangeEntity, 0LL, v33, v34, v35, v36, v37, v38);
  }
  return v32;
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBackObjId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v11; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v13; // x20
  MyRoomAddMaster___c_c *v14; // x0
  System_Comparison_T__o *_9__9_0; // x21
  Il2CppObject *v16; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int32_t v24; // w22
  struct MyRoomAddEntity_o *v25; // x21
  int32_t syncRoot_high; // w23
  int32_t syncRoot; // w25
  int64_t klass_low; // x24
  const MethodInfo *v29; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4BFDB32 & 1) == 0 )
  {
    sub_1C2E12C(&System_Comparison_MyRoomAddEntity__TypeInfo, method);
    sub_1C2E12C(&CondType_TypeInfo, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v7);
    sub_1C2E12C(&Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__9_0__, v8);
    sub_1C2E12C(&MyRoomAddMaster___c_TypeInfo, v9);
    byte_4BFDB32 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 8, 0, v2);
  if ( !EnableEntityList )
LABEL_21:
    sub_1C2E388(EnableEntityList, v11);
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
  _9__9_0 = (System_Comparison_T__o *)v14->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = MyRoomAddMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__9_0 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__9_0, v16, Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__9_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__9_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)_9__9_0, v18, v19, v20, v21, v22, v23);
  }
  System_Collections_Generic_List_object___Sort_57070448(
    v13,
    _9__9_0,
    (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v24 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v13,
                                                                      v24,
                                                                      (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v25 = (struct MyRoomAddEntity_o *)EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      break;
    if ( size == ++v24 )
      return -1;
  }
  if ( MyRoomAddEntity__GetScheduleUpdateAt(v25, v29) >= 1 )
  {
    this->fields.BackObjAnimationChangeEntity = v25;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.BackObjAnimationChangeEntity,
      (int64_t)v25,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  return v25->fields.overwriteId;
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBgId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t v26; // w20
  System_Collections_Generic_List_object__o *v27; // x21
  int32_t syncRoot_high; // w22
  int32_t syncRoot; // w24
  int64_t klass_low; // x23
  int32_t MyRoomBgImgId; // w0

  if ( (byte_4BFDB2E & 1) == 0 )
  {
    sub_1C2E12C(&System_Comparison_MyRoomAddEntity__TypeInfo, method);
    sub_1C2E12C(&CondType_TypeInfo, v4);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C2E12C(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__5_0__, v10);
    sub_1C2E12C(&MyRoomAddMaster___c_TypeInfo, v11);
    byte_4BFDB2E = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 1, 0, v2);
  if ( !EnableEntityList )
    goto LABEL_21;
  size = EnableEntityList->fields._size;
  v15 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgImgId = EventMaster__getMyRoomBgImgId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgImgId & ~(MyRoomBgImgId >> 31);
      }
    }
LABEL_21:
    sub_1C2E388(EnableEntityList, v13);
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
    _9__5_0 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__5_0, v18, Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__5_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__5_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)_9__5_0, v20, v21, v22, v23, v24, v25);
  }
  System_Collections_Generic_List_object___Sort_57070448(
    v15,
    _9__5_0,
    (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v26 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v15,
                                                                      v26,
                                                                      (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v27 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v27->fields._version;
    if ( size == ++v26 )
      goto LABEL_17;
  }
}


int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBgm(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
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
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v18; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t v26; // w20
  System_Collections_Generic_List_object__o *v27; // x21
  int32_t syncRoot_high; // w22
  int32_t syncRoot; // w24
  int64_t klass_low; // x23
  int32_t MyRoomBgmId; // w0

  if ( (byte_4BFDB2F & 1) == 0 )
  {
    sub_1C2E12C(&System_Comparison_MyRoomAddEntity__TypeInfo, method);
    sub_1C2E12C(&CondType_TypeInfo, v4);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C2E12C(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__6_0__, v10);
    sub_1C2E12C(&MyRoomAddMaster___c_TypeInfo, v11);
    byte_4BFDB2F = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 2, 0, v2);
  if ( !EnableEntityList )
    goto LABEL_21;
  size = EnableEntityList->fields._size;
  v15 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgmId = EventMaster__getMyRoomBgmId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgmId & ~(MyRoomBgmId >> 31);
      }
    }
LABEL_21:
    sub_1C2E388(EnableEntityList, v13);
  }
  v16 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v16 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v16->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = MyRoomAddMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v18, Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__6_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__6_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)_9__6_0, v20, v21, v22, v23, v24, v25);
  }
  System_Collections_Generic_List_object___Sort_57070448(
    v15,
    _9__6_0,
    (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v26 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v15,
                                                                      v26,
                                                                      (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v27 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v27->fields._version;
    if ( size == ++v26 )
      goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomFrontObjId(
        MyRoomAddMaster_o *this,
        int32_t defaultId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v4; // w19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v13; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v15; // x20
  MyRoomAddMaster___c_c *v16; // x0
  System_Comparison_T__o *_9__7_0; // x21
  Il2CppObject *v18; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t v26; // w21
  System_Collections_Generic_List_object__o *v27; // x22
  int32_t syncRoot_high; // w23
  int32_t syncRoot; // w25
  int64_t klass_low; // x24

  v4 = defaultId;
  if ( (byte_4BFDB30 & 1) == 0 )
  {
    sub_1C2E12C(&System_Comparison_MyRoomAddEntity__TypeInfo, *(_QWORD *)&defaultId);
    sub_1C2E12C(&CondType_TypeInfo, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v9);
    sub_1C2E12C(&Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__7_0__, v10);
    sub_1C2E12C(&MyRoomAddMaster___c_TypeInfo, v11);
    byte_4BFDB30 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 6, 0, v3);
  if ( !EnableEntityList )
LABEL_20:
    sub_1C2E388(EnableEntityList, v13);
  size = EnableEntityList->fields._size;
  v15 = EnableEntityList;
  if ( size >= 1 )
  {
    v16 = MyRoomAddMaster___c_TypeInfo;
    if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
      v16 = MyRoomAddMaster___c_TypeInfo;
    }
    _9__7_0 = (System_Comparison_T__o *)v16->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = MyRoomAddMaster___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__7_0 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_MyRoomAddEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__7_0,
        v18,
        Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__7_0__,
        0LL);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__7_0;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__7_0,
        (int64_t)_9__7_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    System_Collections_Generic_List_object___Sort_57070448(
      v15,
      _9__7_0,
      (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    v26 = 0;
    while ( 1 )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        v15,
                                                                        v26,
                                                                        (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
      if ( !EnableEntityList )
        goto LABEL_20;
      v27 = EnableEntityList;
      syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
      syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
      klass_low = SLODWORD(EnableEntityList[1].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
        return v27->fields._version;
      if ( size == ++v26 )
        return v4;
    }
  }
  return v4;
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
  System_Comparison_T__o *_9__8_0; // x21
  Il2CppObject *v16; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int32_t v24; // w21
  System_Collections_Generic_List_object__o *v25; // x22
  int32_t syncRoot_high; // w23
  int32_t syncRoot; // w25
  int64_t klass_low; // x24

  if ( (byte_4BFDB31 & 1) == 0 )
  {
    sub_1C2E12C(&System_Comparison_MyRoomAddEntity__TypeInfo, method);
    sub_1C2E12C(&CondType_TypeInfo, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v7);
    sub_1C2E12C(&Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__8_0__, v8);
    sub_1C2E12C(&MyRoomAddMaster___c_TypeInfo, v9);
    byte_4BFDB31 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(this, 7, 0, v2);
  if ( !EnableEntityList )
LABEL_19:
    sub_1C2E388(EnableEntityList, v11);
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
  _9__8_0 = (System_Comparison_T__o *)v14->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = MyRoomAddMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__8_0 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__8_0,
      v16,
      Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__8_0__,
      0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__8_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v18, v19, v20, v21, v22, v23);
  }
  System_Collections_Generic_List_object___Sort_57070448(
    v13,
    _9__8_0,
    (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v24 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v13,
                                                                      v24,
                                                                      (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_19;
    v25 = EnableEntityList;
    syncRoot = (int32_t)EnableEntityList->fields._syncRoot;
    syncRoot_high = HIDWORD(EnableEntityList->fields._syncRoot);
    klass_low = SLODWORD(EnableEntityList[1].klass);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(syncRoot, syncRoot_high, klass_low, 0, 0LL, 0LL) )
      return v25->fields._version;
    if ( size == ++v24 )
      return MyRoomAddMaster__GetChangeMyRoomBgId(this, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_MyRoomAddEntity__o *__fastcall MyRoomAddMaster__GetEnableEntityList(
        MyRoomAddMaster_o *this,
        int32_t type,
        bool isIgnoreTimeLimit,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x22
  int64_t v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  int64_t Time; // x0
  int64_t v17; // x24
  int32_t v18; // w25
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4BFDB2D & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__, *(_QWORD *)&type);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity__Add__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__, v9);
    sub_1C2E12C(&System_Collections_Generic_List_MyRoomAddEntity__TypeInfo, v10);
    sub_1C2E12C(&NetworkManager_TypeInfo, v11);
    byte_4BFDB2D = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v17 = Time;
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v18,
                                                                 (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
      if ( !list )
        break;
      v13 = (int64_t)list;
      if ( HIDWORD(list->fields.items) == type
        && (isIgnoreTimeLimit || (__int64)list[2].klass <= v17 && (__int64)list[2].monitor >= v17) )
      {
        if ( !v12 )
          break;
        items = v12->fields._items;
        v26 = Method_System_Collections_Generic_List_MyRoomAddEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)list,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v13;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v28 + 4), v13, v19, v20, v21, v22, v23, v24);
        }
      }
      if ( Count == ++v18 )
        return (System_Collections_Generic_List_MyRoomAddEntity__o *)v12;
    }
LABEL_22:
    sub_1C2E388(list, v13);
  }
  return (System_Collections_Generic_List_MyRoomAddEntity__o *)v12;
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

  if ( (byte_4BFDB2A & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4BFDB2A = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (MyRoomAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_327FC38 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
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

  if ( (byte_4BFDB2B & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__, entity);
    byte_4BFDB2B = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_327FC84 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
}


void __fastcall MyRoomAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFDB34 & 1) == 0 )
  {
    sub_1C2E12C(&MyRoomAddMaster___c_TypeInfo, v1);
    byte_4BFDB34 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(MyRoomAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MyRoomAddMaster___c_TypeInfo->static_fields->__9 = (struct MyRoomAddMaster___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)MyRoomAddMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C2E388(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBackObjId_b__9_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2E388(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgId_b__5_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2E388(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgm_b__6_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2E388(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomFrontObjId_b__7_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2E388(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomMultipleViewBgId_b__8_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2E388(this, a);
  return b->fields.priority - a->fields.priority;
}