void MyRoomAddMaster___ctor(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E77BF9 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
    byte_4E77BF9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    198,
    (const MethodInfo_3538564 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
}


System_Collections_Generic_List_KeyValuePair_int__int___o *MyRoomAddMaster__DisplayBgGroupList(
        MyRoomAddMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  _QWORD *p_image; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_KeyValuePair_int__int___o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_HashSet_KeyValuePair_int__int___o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_HashSet_int__o *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  const MethodInfo *v33; // x1
  System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int___o *EventGroupDisplayInfoList; // x23
  const MethodInfo *v35; // x1
  System_Collections_Generic_List_int__o *MainGroupWarIdList; // x22
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x3
  int MainGroupWarId; // w24
  int32_t v40; // w25
  int32_t v41; // w25
  int32_t Item; // w26
  const MethodInfo *v43; // x2
  System_Func_ValueTuple_int__int__int__long__int__int___bool__o *v44; // x20
  const MethodInfo *v45; // x3
  int32_t v46; // w20
  const MethodInfo *v47; // x3
  int32_t v48; // w20
  int32_t v49; // w0
  const MethodInfo *v50; // x3
  System_ValueTuple_int__int__int__long__int__int__o v52; // [xsp+0h] [xbp-80h] BYREF

  if ( (byte_4E77C06 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_Any_ValueTuple_int__int__int__long__int__int____);
    sub_1D0F0B4(&System_Func_ValueTuple_int__int__int__long__int__int___bool__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_KeyValuePair_int__int____ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_KeyValuePair_int__int___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int___get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int___get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1D0F0B4(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__DisplayClass19_0__DisplayBgGroupList_b__1__);
    sub_1D0F0B4(&MyRoomAddMaster___c__DisplayClass19_0_TypeInfo);
    byte_4E77C06 = 1;
  }
  v3 = sub_1D0F300(MyRoomAddMaster___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_37;
  *(_QWORD *)(v3 + 24) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_1D0F300(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_int__int_____ctor(
    v12,
    (const MethodInfo_38C9F6C *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__);
  *(_QWORD *)(v3 + 40) = v12;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Collections_Generic_HashSet_KeyValuePair_int__int___o *)sub_1D0F300(System_Collections_Generic_HashSet_KeyValuePair_int__int___TypeInfo);
  System_Collections_Generic_HashSet_KeyValuePair_int__int_____ctor(
    v19,
    (const MethodInfo_37FA22C *)Method_System_Collections_Generic_HashSet_KeyValuePair_int__int____ctor__);
  *(_QWORD *)(v3 + 16) = v19;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_HashSet_int__o *)sub_1D0F300(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v26,
    (const MethodInfo_3800770 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v3 + 32) = v26;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)v26, v27, v28, v29, v30, v31, v32);
  EventGroupDisplayInfoList = MyRoomAddMaster__GetEventGroupDisplayInfoList(this, v33);
  MainGroupWarIdList = MyRoomAddMaster__GetMainGroupWarIdList(this, v35);
  MainGroupWarId = MyRoomAddMaster__GetMainGroupWarId(this, v37);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4E72850 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72850 = 1;
  }
  p_image = &MyRoomParamsManager_TypeInfo->_1.image;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    p_image = &MyRoomParamsManager_TypeInfo->_1.image;
  }
  *(_DWORD *)(v3 + 48) = *(_DWORD *)(p_image[23] + 72LL);
  if ( !byte_4E7284F )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    p_image = &MyRoomParamsManager_TypeInfo->_1.image;
    byte_4E7284F = 1;
  }
  if ( !*((_DWORD *)p_image + 56) )
  {
    j_il2cpp_runtime_class_init_0(p_image);
    p_image = &MyRoomParamsManager_TypeInfo->_1.image;
  }
  *(_DWORD *)(v3 + 52) = *(_DWORD *)(p_image[23] + 68LL);
  if ( !EventGroupDisplayInfoList )
    goto LABEL_37;
  if ( EventGroupDisplayInfoList->fields._size >= 1 )
  {
    v40 = 0;
    do
    {
      p_image = System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int____get_Item(
                  &v52,
                  EventGroupDisplayInfoList,
                  v40,
                  (const MethodInfo_39109AC *)Method_System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int___get_Item__);
      if ( v52.fields.Item3 >= 1 )
        MyRoomAddMaster___c__DisplayClass19_0___DisplayBgGroupList_g__AddResult_0(
          (MyRoomAddMaster___c__DisplayClass19_0_o *)v3,
          v52.fields.Item1,
          v52.fields.Item2,
          v38);
      ++v40;
    }
    while ( v40 < EventGroupDisplayInfoList->fields._size );
  }
  if ( !MainGroupWarIdList )
LABEL_37:
    sub_1D0F30C(p_image, v5);
  if ( MainGroupWarIdList->fields._size >= 1 )
  {
    v41 = 0;
    do
    {
      Item = System_Collections_Generic_List_int___get_Item(
               MainGroupWarIdList,
               v41,
               (const MethodInfo_393F0FC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( MyRoomAddMaster__GetMainGroupForceDispBgPriority(this, Item, v43) >= 1 )
        MyRoomAddMaster___c__DisplayClass19_0___DisplayBgGroupList_g__AddResult_0(
          (MyRoomAddMaster___c__DisplayClass19_0_o *)v3,
          Item,
          0,
          v38);
      ++v41;
    }
    while ( v41 < MainGroupWarIdList->fields._size );
  }
  if ( MainGroupWarId >= 1 )
    MyRoomAddMaster___c__DisplayClass19_0___DisplayBgGroupList_g__AddResult_0(
      (MyRoomAddMaster___c__DisplayClass19_0_o *)v3,
      MainGroupWarId,
      0,
      v38);
  v44 = (System_Func_ValueTuple_int__int__int__long__int__int___bool__o *)sub_1D0F300(System_Func_ValueTuple_int__int__int__long__int__int___bool__TypeInfo);
  System_Func_ValueTuple_int__int__int__long__int__int___bool____ctor(
    v44,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass19_0__DisplayBgGroupList_b__1__,
    0);
  if ( BasicHelper__Any_ValueTuple_int__int__int__long__int__int__(
         (System_Collections_Generic_List_T__o *)EventGroupDisplayInfoList,
         (System_Func_T__bool__o *)v44,
         (const MethodInfo_3237E5C *)Method_BasicHelper_Any_ValueTuple_int__int__int__long__int__int____) )
  {
    MyRoomAddMaster___c__DisplayClass19_0___DisplayBgGroupList_g__AddResult_0(
      (MyRoomAddMaster___c__DisplayClass19_0_o *)v3,
      *(_DWORD *)(v3 + 48),
      *(_DWORD *)(v3 + 52),
      v45);
  }
  if ( EventGroupDisplayInfoList->fields._size >= 1 )
  {
    v46 = 0;
    do
    {
      System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int____get_Item(
        &v52,
        EventGroupDisplayInfoList,
        v46,
        (const MethodInfo_39109AC *)Method_System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int___get_Item__);
      MyRoomAddMaster___c__DisplayClass19_0___DisplayBgGroupList_g__AddResult_0(
        (MyRoomAddMaster___c__DisplayClass19_0_o *)v3,
        v52.fields.Item1,
        v52.fields.Item2,
        v47);
      ++v46;
    }
    while ( v46 < EventGroupDisplayInfoList->fields._size );
  }
  if ( MainGroupWarIdList->fields._size >= 1 )
  {
    v48 = 0;
    do
    {
      v49 = System_Collections_Generic_List_int___get_Item(
              MainGroupWarIdList,
              v48,
              (const MethodInfo_393F0FC *)Method_System_Collections_Generic_List_int__get_Item__);
      MyRoomAddMaster___c__DisplayClass19_0___DisplayBgGroupList_g__AddResult_0(
        (MyRoomAddMaster___c__DisplayClass19_0_o *)v3,
        v49,
        0,
        v50);
      ++v48;
    }
    while ( v48 < MainGroupWarIdList->fields._size );
  }
  return *(System_Collections_Generic_List_KeyValuePair_int__int___o **)(v3 + 40);
}


int32_t MyRoomAddMaster__GetBackObjAnimationNum(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        int32_t warId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  struct MyRoomAddEntity_o **p_BackObjAnimationChangeEntity; // x19
  MyRoomAddEntity_o *EnableEntityList; // x0
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  MyRoomAddEntity_o *v12; // x21
  int32_t overwriteId; // w28
  int size; // w29
  int64_t Time; // x0
  int64_t v16; // x22
  MyRoomAddMaster___c_c *v17; // x0
  System_Comparison_T__o *_9__14_0; // x23
  Il2CppObject *v19; // x24
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w24
  int32_t v28; // w23
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  MyRoomAddEntity_o *v35; // x25
  int32_t condValue; // w26
  int32_t condType; // w27
  int64_t condValue2; // x25
  char v40; // [xsp+Ch] [xbp-64h]

  if ( (byte_4E77C01 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__14_0__);
    sub_1D0F0B4(&MyRoomAddMaster___c_TypeInfo);
    byte_4E77C01 = 1;
  }
  p_BackObjAnimationChangeEntity = &this->fields.BackObjAnimationChangeEntity;
  if ( !this->fields.BackObjAnimationChangeEntity )
    return 0;
  EnableEntityList = (MyRoomAddEntity_o *)MyRoomAddMaster__GetEnableEntityList(this, 8, groupId, 1, warId, v4);
  if ( !this->fields.BackObjAnimationChangeEntity
    || (v11 = (System_Collections_Generic_List_object__o *)EnableEntityList,
        EnableEntityList = (MyRoomAddEntity_o *)MyRoomAddEntity__GetScheduleUpdateAt(
                                                  this->fields.BackObjAnimationChangeEntity,
                                                  v10),
        !*p_BackObjAnimationChangeEntity)
    || !v11 )
  {
LABEL_32:
    sub_1D0F30C(EnableEntityList, v10);
  }
  v12 = EnableEntityList;
  overwriteId = (*p_BackObjAnimationChangeEntity)->fields.overwriteId;
  size = v11->fields._size;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( size < 1 )
    return 1;
  v16 = Time;
  v17 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v17 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__14_0 = (System_Comparison_T__o *)v17->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = MyRoomAddMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__14_0 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__14_0, v19, Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__14_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__14_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__14_0,
      (int32_t)_9__14_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  System_Collections_Generic_List_object___Sort_60153556(
    v11,
    _9__14_0,
    (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v40 = 0;
  v27 = 0;
  v28 = 1;
  do
  {
    EnableEntityList = (MyRoomAddEntity_o *)System_Collections_Generic_List_object___get_Item(
                                              v11,
                                              v27,
                                              (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_32;
    v35 = EnableEntityList;
    if ( overwriteId == EnableEntityList->fields.overwriteId )
    {
      if ( v12 == (MyRoomAddEntity_o *)MyRoomAddEntity__GetScheduleUpdateAt(EnableEntityList, v10) )
      {
        if ( v35->fields.endedAt > v16 )
          goto LABEL_26;
        v40 = 1;
      }
      if ( v35->fields.startedAt <= v16 )
      {
        condType = v35->fields.condType;
        condValue = v35->fields.condValue;
        condValue2 = v35->fields.condValue2;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v28 += CondType__IsOpen(condType, condValue, condValue2, 0, 0, 0);
      }
    }
LABEL_26:
    ++v27;
  }
  while ( size != v27 );
  if ( (v40 & 1) != 0 )
  {
    *p_BackObjAnimationChangeEntity = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)p_BackObjAnimationChangeEntity, 0, v29, v30, v31, v32, v33, v34);
  }
  return v28;
}


int32_t MyRoomAddMaster__GetChangeMyRoomBackObjId(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        int32_t warId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t result; // w0
  const MethodInfo *v9; // x5
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v11; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v13; // x20
  MyRoomAddMaster___c_c *v14; // x0
  System_Comparison_T__o *_9__11_0; // x21
  Il2CppObject *v16; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w21
  struct MyRoomAddEntity_o *v25; // x22
  int32_t klass_high; // w23
  int32_t klass; // w25
  int64_t monitor_low; // x24
  const MethodInfo *v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7

  if ( (byte_4E77BFF & 1) == 0 )
  {
    sub_1D0F0B4(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__11_0__);
    sub_1D0F0B4(&MyRoomAddMaster___c_TypeInfo);
    byte_4E77BFF = 1;
  }
  result = MyRoomAddMaster__GetDiffObjectId(this, 8, groupId, warId, v4);
  if ( result <= 0 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                      this,
                                                                      8,
                                                                      groupId,
                                                                      0,
                                                                      warId,
                                                                      v9);
    if ( !EnableEntityList )
LABEL_23:
      sub_1D0F30C(EnableEntityList, v11);
    size = EnableEntityList->fields._size;
    v13 = EnableEntityList;
    if ( size < 1 )
    {
      return -1;
    }
    else
    {
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
        _9__11_0 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_MyRoomAddEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__11_0,
          v16,
          Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__11_0__,
          0);
        static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
        static_fields->__9__11_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__11_0;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__11_0,
          (int32_t)_9__11_0,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
      }
      System_Collections_Generic_List_object___Sort_60153556(
        v13,
        _9__11_0,
        (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
      v24 = 0;
      while ( 1 )
      {
        EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v13,
                                                                          v24,
                                                                          (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
        if ( !EnableEntityList )
          goto LABEL_23;
        v25 = (struct MyRoomAddEntity_o *)EnableEntityList;
        klass = (int32_t)EnableEntityList[1].klass;
        klass_high = HIDWORD(EnableEntityList[1].klass);
        monitor_low = SLODWORD(EnableEntityList[1].monitor);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
          break;
        if ( size == ++v24 )
          return -1;
      }
      if ( MyRoomAddEntity__GetScheduleUpdateAt(v25, v29) >= 1 )
      {
        this->fields.BackObjAnimationChangeEntity = v25;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&this->fields.BackObjAnimationChangeEntity,
          (int32_t)v25,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      return v25->fields.overwriteId;
    }
  }
  return result;
}


int32_t MyRoomAddMaster__GetChangeMyRoomBgId(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        int32_t warId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v9; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v11; // x19
  MyRoomAddMaster___c_c *v12; // x0
  System_Comparison_T__o *_9__7_0; // x20
  Il2CppObject *v14; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w20
  System_Collections_Generic_List_object__o *v23; // x21
  int32_t klass_high; // w22
  int32_t klass; // w24
  int64_t monitor_low; // x23
  int32_t MyRoomBgImgId; // w0

  if ( (byte_4E77BFB & 1) == 0 )
  {
    sub_1D0F0B4(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__7_0__);
    sub_1D0F0B4(&MyRoomAddMaster___c_TypeInfo);
    byte_4E77BFB = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    1,
                                                                    groupId,
                                                                    0,
                                                                    warId,
                                                                    v4);
  if ( !EnableEntityList )
    goto LABEL_21;
  size = EnableEntityList->fields._size;
  v11 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgImgId = EventMaster__getMyRoomBgImgId((EventMaster_o *)EnableEntityList, 0);
        return MyRoomBgImgId & ~(MyRoomBgImgId >> 31);
      }
    }
LABEL_21:
    sub_1D0F30C(EnableEntityList, v9);
  }
  v12 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v12 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Comparison_T__o *)v12->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = MyRoomAddMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__7_0, v14, Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__7_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__7_0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v16, v17, v18, v19, v20, v21);
  }
  System_Collections_Generic_List_object___Sort_60153556(
    v11,
    _9__7_0,
    (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v22 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v11,
                                                                      v22,
                                                                      (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v23 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      return HIDWORD(v23->fields._syncRoot);
    if ( size == ++v22 )
      goto LABEL_17;
  }
}


int32_t MyRoomAddMaster__GetChangeMyRoomBgm(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        int32_t warId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t result; // w0
  const MethodInfo *v9; // x5
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
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w20
  System_Collections_Generic_List_object__o *v25; // x21
  int32_t klass_high; // w22
  int32_t klass; // w24
  int64_t monitor_low; // x23
  int32_t MyRoomBgmId; // w0

  if ( (byte_4E77BFC & 1) == 0 )
  {
    sub_1D0F0B4(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__8_0__);
    sub_1D0F0B4(&MyRoomAddMaster___c_TypeInfo);
    byte_4E77BFC = 1;
  }
  result = MyRoomAddMaster__GetDiffObjectId(this, 2, groupId, warId, v4);
  if ( result > 0 )
    return result;
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    2,
                                                                    groupId,
                                                                    0,
                                                                    warId,
                                                                    v9);
  if ( !EnableEntityList )
LABEL_23:
    sub_1D0F30C(EnableEntityList, v11);
  size = EnableEntityList->fields._size;
  v13 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_18:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgmId = EventMaster__getMyRoomBgmId((EventMaster_o *)EnableEntityList, 0);
        return MyRoomBgmId & ~(MyRoomBgmId >> 31);
      }
    }
    goto LABEL_23;
  }
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
    _9__8_0 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__8_0, v16, Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__8_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__8_0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v18, v19, v20, v21, v22, v23);
  }
  System_Collections_Generic_List_object___Sort_60153556(
    v13,
    _9__8_0,
    (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v24 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v13,
                                                                      v24,
                                                                      (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_23;
    v25 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      return HIDWORD(v25->fields._syncRoot);
    if ( size == ++v24 )
      goto LABEL_18;
  }
}


int32_t MyRoomAddMaster__GetChangeMyRoomFrontObjId(
        MyRoomAddMaster_o *this,
        int32_t defaultId,
        int32_t groupId,
        int32_t warId,
        const MethodInfo *method)
{
  int32_t result; // w0
  const MethodInfo *v9; // x5
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v11; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v13; // x20
  MyRoomAddMaster___c_c *v14; // x0
  System_Comparison_T__o *_9__9_0; // x21
  Il2CppObject *v16; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w21
  System_Collections_Generic_List_object__o *v25; // x22
  int32_t klass_high; // w23
  int32_t klass; // w25
  int64_t monitor_low; // x24

  if ( (byte_4E77BFD & 1) == 0 )
  {
    sub_1D0F0B4(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__9_0__);
    sub_1D0F0B4(&MyRoomAddMaster___c_TypeInfo);
    byte_4E77BFD = 1;
  }
  result = MyRoomAddMaster__GetDiffObjectId(this, 6, groupId, -1, method);
  if ( result <= 0 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                      this,
                                                                      6,
                                                                      groupId,
                                                                      0,
                                                                      -1,
                                                                      v9);
    if ( !EnableEntityList )
LABEL_21:
      sub_1D0F30C(EnableEntityList, v11);
    size = EnableEntityList->fields._size;
    v13 = EnableEntityList;
    if ( size < 1 )
    {
      return defaultId;
    }
    else
    {
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
        _9__9_0 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_MyRoomAddEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__9_0,
          v16,
          Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__9_0__,
          0);
        static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
        static_fields->__9__9_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__9_0;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__9_0,
          (int32_t)_9__9_0,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
      }
      System_Collections_Generic_List_object___Sort_60153556(
        v13,
        _9__9_0,
        (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
      v24 = 0;
      while ( 1 )
      {
        EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v13,
                                                                          v24,
                                                                          (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
        if ( !EnableEntityList )
          goto LABEL_21;
        v25 = EnableEntityList;
        klass = (int32_t)EnableEntityList[1].klass;
        klass_high = HIDWORD(EnableEntityList[1].klass);
        monitor_low = SLODWORD(EnableEntityList[1].monitor);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
          return HIDWORD(v25->fields._syncRoot);
        if ( size == ++v24 )
          return defaultId;
      }
    }
  }
  return result;
}


int64_t MyRoomAddMaster__GetChangeMyRoomGetScheduleUpdateAt(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)this->fields.BackObjAnimationChangeEntity;
  if ( result )
    return MyRoomAddEntity__GetScheduleUpdateAt((MyRoomAddEntity_o *)result, method);
  return result;
}


int32_t MyRoomAddMaster__GetDiffObjectId(
        MyRoomAddMaster_o *this,
        int32_t type,
        int32_t groupId,
        int32_t warId,
        const MethodInfo *method)
{
  int32_t v9; // w20
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_4E77C09 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    byte_4E77C09 = 1;
  }
  v9 = MyRoomAddMaster__ResolveMyRoomBackgroundId(this, groupId, 0, warId, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
  if ( !Master_object )
    sub_1D0F30C(0, v11);
  return MyroomAddBgDiffMaster__GetDisplayObjectId((MyroomAddBgDiffMaster_o *)Master_object, type, v9, v12);
}


System_Collections_Generic_List_int__o *MyRoomAddMaster__GetDisplayOverWriteIds(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x19
  const MethodInfo *v8; // x4
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  int32_t v15; // w3
  const MethodInfo *v16; // x4
  struct System_Int32_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  const MethodInfo *v20; // x3
  struct System_Int32_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  MyRoomAddMaster___c_c *v27; // x0
  System_Predicate_int__o *_9__16_0; // x20
  Il2CppObject *v29; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7

  if ( (byte_4E77C03 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&System_Predicate_int__TypeInfo);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetDisplayOverWriteIds_b__16_0__);
    sub_1D0F0B4(&MyRoomAddMaster___c_TypeInfo);
    byte_4E77C03 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = MyRoomAddMaster__ResolveMyRoomBackgroundId(this, groupId, 1, warId, v8);
  if ( !v7 )
    goto LABEL_27;
  items = v7->fields._items;
  v13 = Method_System_Collections_Generic_List_int__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_27;
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v7,
      v9,
      *(const MethodInfo_393F3EC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = size + 1;
    items->m_Items[size] = v9;
  }
  v9 = MyRoomAddMaster__GetChangeMyRoomBgm(this, groupId, warId, v11);
  v17 = v7->fields._items;
  v18 = Method_System_Collections_Generic_List_int__Add__;
  ++v7->fields._version;
  if ( !v17 )
    goto LABEL_27;
  v19 = v7->fields._size;
  if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v7,
      v9,
      *(const MethodInfo_393F3EC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = v19 + 1;
    v17->m_Items[v19] = v9;
  }
  v9 = MyRoomAddMaster__GetChangeMyRoomFrontObjId(this, groupId, -1, v15, v16);
  v21 = v7->fields._items;
  v22 = Method_System_Collections_Generic_List_int__Add__;
  ++v7->fields._version;
  if ( !v21 )
    goto LABEL_27;
  v23 = v7->fields._size;
  if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v7,
      v9,
      *(const MethodInfo_393F3EC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = v23 + 1;
    v21->m_Items[v23] = v9;
  }
  v9 = MyRoomAddMaster__GetChangeMyRoomBackObjId(this, groupId, warId, v20);
  v24 = v7->fields._items;
  v25 = Method_System_Collections_Generic_List_int__Add__;
  ++v7->fields._version;
  if ( !v24 )
LABEL_27:
    sub_1D0F30C(v9, v10);
  v26 = v7->fields._size;
  if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v7,
      v9,
      *(const MethodInfo_393F3EC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = v26 + 1;
    v24->m_Items[v26] = v9;
  }
  v27 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v27 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__16_0 = v27->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = MyRoomAddMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__16_0 = (System_Predicate_int__o *)sub_1D0F300(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__16_0, v29, Method_MyRoomAddMaster___c__GetDisplayOverWriteIds_b__16_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = _9__16_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_0,
      (int32_t)_9__16_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  System_Collections_Generic_List_int___RemoveAll(
    v7,
    (System_Predicate_T__o *)_9__16_0,
    (const MethodInfo_3940A14 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  return v7;
}


System_Collections_Generic_List_MyRoomAddEntity__o *MyRoomAddMaster__GetEnableEntityList(
        MyRoomAddMaster_o *this,
        int32_t type,
        int32_t groupId,
        bool isIgnoreTimeLimit,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v10; // x24
  const MethodInfo *v11; // x1
  void *list; // x0
  int32_t Count; // w25
  int64_t Time; // x26
  System_Collections_Generic_List_int__o *MainGroupWarIdList; // x27
  int32_t v16; // w28
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppObject *v23; // x29
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4E77BFA & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E77BFA = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_31;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_34CCE40 *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  MainGroupWarIdList = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    MainGroupWarIdList,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !groupId )
    MainGroupWarIdList = MyRoomAddMaster__GetMainGroupWarIdList(this, v11);
  if ( Count >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v16,
               (const MethodInfo_34CCED0 *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
      if ( !list )
        break;
      v23 = (Il2CppObject *)list;
      if ( *((_DWORD *)list + 5) == type && (groupId < 0 || *((_DWORD *)list + 7) == groupId) )
      {
        if ( groupId )
          goto LABEL_26;
        if ( !MainGroupWarIdList )
          break;
        list = (void *)System_Collections_Generic_List_int___Contains(
                         MainGroupWarIdList,
                         *((_DWORD *)list + 8),
                         (const MethodInfo_393F764 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
LABEL_26:
          if ( (warId < 0 || LODWORD(v23[2].klass) == warId)
            && (isIgnoreTimeLimit || (__int64)v23[3].monitor <= Time && (__int64)v23[4].klass >= Time) )
          {
            if ( !v10 )
              break;
            items = v10->fields._items;
            v25 = Method_System_Collections_Generic_List_MyRoomAddEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              break;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v23,
                *(const MethodInfo_395C410 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v23;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v23, v17, v18, v19, v20, v21, v22);
            }
          }
        }
      }
      if ( Count == ++v16 )
        return (System_Collections_Generic_List_MyRoomAddEntity__o *)v10;
    }
LABEL_31:
    sub_1D0F30C(list, v11);
  }
  return (System_Collections_Generic_List_MyRoomAddEntity__o *)v10;
}


// local variable allocation has failed, the output may be wrong!
MyRoomAddEntity_o *MyRoomAddMaster__GetEntity(
        MyRoomAddMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4E77BF7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
    byte_4E77BF7 = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (MyRoomAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_353AADC *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
}


System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int___o *MyRoomAddMaster__GetEventGroupDisplayInfoList(
        MyRoomAddMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t Time; // x0
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  MyRoomAddMaster___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_object__int__o *_9__15_1; // x21
  Il2CppObject *v19; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  System_Func_T__TResult__o *v28; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v29; // x0
  MyRoomAddMaster___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  System_Func_ValueTuple_int__int__int__long__int__int___int__o *_9__15_3; // x20
  Il2CppObject *v33; // x21
  struct MyRoomAddMaster___c_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v41; // x0
  MyRoomAddMaster___c_c *v42; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v43; // x19
  System_Func_ValueTuple_int__int__int__long__int__int___long__o *_9__15_4; // x20
  Il2CppObject *v45; // x21
  struct MyRoomAddMaster___c_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v53; // x0
  MyRoomAddMaster___c_c *v54; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v55; // x19
  System_Func_ValueTuple_int__int__int__long__int__int___int__o *_9__15_5; // x20
  Il2CppObject *v57; // x21
  struct MyRoomAddMaster___c_StaticFields *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v65; // x0
  MyRoomAddMaster___c_c *v66; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v67; // x19
  System_Func_ValueTuple_int__int__int__long__int__int___int__o *_9__15_6; // x20
  Il2CppObject *v69; // x21
  struct MyRoomAddMaster___c_StaticFields *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0

  if ( (byte_4E77C02 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_WarMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_GroupBy_MyRoomAddEntity__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OrderByDescending_ValueTuple_int__int__int__long__int__int___int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_IGrouping_int__MyRoomAddEntity___ValueTuple_int__int__int__long__int__int____);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ThenByDescending_ValueTuple_int__int__int__long__int__int___int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ThenByDescending_ValueTuple_int__int__int__long__int__int___long___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_ValueTuple_int__int__int__long__int__int____);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1D0F0B4(&System_Func_ValueTuple_int__int__int__long__int__int___int__TypeInfo);
    sub_1D0F0B4(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_1D0F0B4(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1D0F0B4(&System_Func_IGrouping_int__MyRoomAddEntity___ValueTuple_int__int__int__long__int__int___TypeInfo);
    sub_1D0F0B4(&System_Func_ValueTuple_int__int__int__long__int__int___long__TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_1__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_3__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_4__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_5__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_6__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__DisplayClass15_0__GetEventGroupDisplayInfoList_b__0__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__DisplayClass15_0__GetEventGroupDisplayInfoList_b__2__);
    sub_1D0F0B4(&MyRoomAddMaster___c__DisplayClass15_0_TypeInfo);
    sub_1D0F0B4(&MyRoomAddMaster___c_TypeInfo);
    byte_4E77C02 = 1;
  }
  v3 = sub_1D0F300(MyRoomAddMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !v3 )
    sub_1D0F30C(Time, v5);
  *(_QWORD *)(v3 + 16) = Time;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_WarMaster___);
  *(_QWORD *)(v3 + 24) = Master_object;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)Master_object, v7, v8, v9, v10, v11, v12);
  list = this->fields.list;
  v14 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass15_0__GetEventGroupDisplayInfoList_b__0__,
    0);
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v16 = MyRoomAddMaster___c_TypeInfo;
  v17 = v15;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v16 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__15_1 = (System_Func_object__int__o *)v16->static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = MyRoomAddMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__15_1 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__15_1,
      v19,
      Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_1__,
      0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = (struct System_Func_MyRoomAddEntity__int__o *)_9__15_1;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__15_1,
      (int32_t)_9__15_1,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__int_(
                                                               v17,
                                                               (System_Func_TSource__TKey__o *)_9__15_1,
                                                               (const MethodInfo_3279778 *)Method_System_Linq_Enumerable_GroupBy_MyRoomAddEntity__int___);
  v28 = (System_Func_T__TResult__o *)sub_1D0F300(System_Func_IGrouping_int__MyRoomAddEntity___ValueTuple_int__int__int__long__int__int___TypeInfo);
  System_Func_object__ValueTuple_int__int__int__long__int__int_____ctor(
    v28,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass15_0__GetEventGroupDisplayInfoList_b__2__,
    0);
  v29 = System_Linq_Enumerable__Select_object__ValueTuple_int__int__int__long__int__int__(
          v27,
          (System_Func_TSource__TResult__o *)v28,
          (const MethodInfo_32854EC *)Method_System_Linq_Enumerable_Select_IGrouping_int__MyRoomAddEntity___ValueTuple_int__int__int__long__int__int____);
  v30 = MyRoomAddMaster___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v30 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__15_3 = v30->static_fields->__9__15_3;
  if ( !_9__15_3 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = MyRoomAddMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__15_3 = (System_Func_ValueTuple_int__int__int__long__int__int___int__o *)sub_1D0F300(System_Func_ValueTuple_int__int__int__long__int__int___int__TypeInfo);
    System_Func_ValueTuple_int__int__int__long__int__int___int____ctor(
      _9__15_3,
      v33,
      Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_3__,
      0);
    v34 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v34->__9__15_3 = _9__15_3;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v34->__9__15_3, (int32_t)_9__15_3, v35, v36, v37, v38, v39, v40);
  }
  v41 = System_Linq_Enumerable__OrderByDescending_ValueTuple_int__int__int__long__int__int___int_(
          v31,
          (System_Func_TSource__TKey__o *)_9__15_3,
          (const MethodInfo_327F4A4 *)Method_System_Linq_Enumerable_OrderByDescending_ValueTuple_int__int__int__long__int__int___int___);
  v42 = MyRoomAddMaster___c_TypeInfo;
  v43 = v41;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v42 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__15_4 = v42->static_fields->__9__15_4;
  if ( !_9__15_4 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = MyRoomAddMaster___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v42->static_fields->__9;
    _9__15_4 = (System_Func_ValueTuple_int__int__int__long__int__int___long__o *)sub_1D0F300(System_Func_ValueTuple_int__int__int__long__int__int___long__TypeInfo);
    System_Func_ValueTuple_int__int__int__long__int__int___long____ctor(
      _9__15_4,
      v45,
      Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_4__,
      0);
    v46 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v46->__9__15_4 = _9__15_4;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v46->__9__15_4, (int32_t)_9__15_4, v47, v48, v49, v50, v51, v52);
  }
  v53 = System_Linq_Enumerable__ThenByDescending_ValueTuple_int__int__int__long__int__int___long_(
          v43,
          (System_Func_TSource__TKey__o *)_9__15_4,
          (const MethodInfo_328F1A0 *)Method_System_Linq_Enumerable_ThenByDescending_ValueTuple_int__int__int__long__int__int___long___);
  v54 = MyRoomAddMaster___c_TypeInfo;
  v55 = v53;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v54 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__15_5 = v54->static_fields->__9__15_5;
  if ( !_9__15_5 )
  {
    if ( !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      v54 = MyRoomAddMaster___c_TypeInfo;
    }
    v57 = (Il2CppObject *)v54->static_fields->__9;
    _9__15_5 = (System_Func_ValueTuple_int__int__int__long__int__int___int__o *)sub_1D0F300(System_Func_ValueTuple_int__int__int__long__int__int___int__TypeInfo);
    System_Func_ValueTuple_int__int__int__long__int__int___int____ctor(
      _9__15_5,
      v57,
      Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_5__,
      0);
    v58 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v58->__9__15_5 = _9__15_5;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v58->__9__15_5, (int32_t)_9__15_5, v59, v60, v61, v62, v63, v64);
  }
  v65 = System_Linq_Enumerable__ThenByDescending_ValueTuple_int__int__int__long__int__int___int_(
          v55,
          (System_Func_TSource__TKey__o *)_9__15_5,
          (const MethodInfo_328F0D4 *)Method_System_Linq_Enumerable_ThenByDescending_ValueTuple_int__int__int__long__int__int___int___);
  v66 = MyRoomAddMaster___c_TypeInfo;
  v67 = v65;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v66 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__15_6 = v66->static_fields->__9__15_6;
  if ( !_9__15_6 )
  {
    if ( !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      v66 = MyRoomAddMaster___c_TypeInfo;
    }
    v69 = (Il2CppObject *)v66->static_fields->__9;
    _9__15_6 = (System_Func_ValueTuple_int__int__int__long__int__int___int__o *)sub_1D0F300(System_Func_ValueTuple_int__int__int__long__int__int___int__TypeInfo);
    System_Func_ValueTuple_int__int__int__long__int__int___int____ctor(
      _9__15_6,
      v69,
      Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_6__,
      0);
    v70 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v70->__9__15_6 = _9__15_6;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v70->__9__15_6, (int32_t)_9__15_6, v71, v72, v73, v74, v75, v76);
  }
  v77 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_ValueTuple_int__int__int__long__int__int___int_(
                                                               v67,
                                                               (System_Func_TSource__TKey__o *)_9__15_6,
                                                               (const MethodInfo_328F0D4 *)Method_System_Linq_Enumerable_ThenByDescending_ValueTuple_int__int__int__long__int__int___int___);
  return (System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int___o *)System_Linq_Enumerable__ToList_ValueTuple_int__int__int__long__int__int__(
                                                                                           v77,
                                                                                           (const MethodInfo_3295038 *)Method_System_Linq_Enumerable_ToList_ValueTuple_int__int__int__long__int__int____);
}


int32_t MyRoomAddMaster__GetMainGroupForceDispBgPriority(
        MyRoomAddMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  MyRoomAddMaster___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__int__o *_9__18_1; // x20
  Il2CppObject *v14; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_IEnumerable_int__o *v23; // x0

  if ( (byte_4E77C05 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_DefaultIfEmpty_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_MyRoomAddEntity__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1D0F0B4(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_1D0F0B4(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetMainGroupForceDispBgPriority_b__18_1__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__DisplayClass18_0__GetMainGroupForceDispBgPriority_b__0__);
    sub_1D0F0B4(&MyRoomAddMaster___c__DisplayClass18_0_TypeInfo);
    sub_1D0F0B4(&MyRoomAddMaster___c_TypeInfo);
    byte_4E77C05 = 1;
  }
  v5 = sub_1D0F300(MyRoomAddMaster___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1D0F30C(v6, v7);
  *(_DWORD *)(v5 + 16) = warId;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_MyRoomAddMaster___c__DisplayClass18_0__GetMainGroupForceDispBgPriority_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v11 = MyRoomAddMaster___c_TypeInfo;
  v12 = v10;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v11 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__18_1 = (System_Func_object__int__o *)v11->static_fields->__9__18_1;
  if ( !_9__18_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = MyRoomAddMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__18_1 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__18_1,
      v14,
      Method_MyRoomAddMaster___c__GetMainGroupForceDispBgPriority_b__18_1__,
      0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__18_1 = (struct System_Func_MyRoomAddEntity__int__o *)_9__18_1;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__18_1,
      (int32_t)_9__18_1,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v12,
                                                               (System_Func_TSource__TResult__o *)_9__18_1,
                                                               (const MethodInfo_3285DC8 *)Method_System_Linq_Enumerable_Select_MyRoomAddEntity__int___);
  v23 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__DefaultIfEmpty_int_(
                                                           v22,
                                                           0,
                                                           (const MethodInfo_3272500 *)Method_System_Linq_Enumerable_DefaultIfEmpty_int___);
  return System_Linq_Enumerable__Max(v23, 0);
}


int32_t MyRoomAddMaster__GetMainGroupWarId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0
  int32_t DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField; // w20
  System_Collections_Generic_List_int__o *MainGroupWarIdList; // x0
  __int64 v6; // x1

  if ( (byte_4E77C08 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E77C08 = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4E72850 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72850 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField = v3->static_fields->_DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField;
  MainGroupWarIdList = MyRoomAddMaster__GetMainGroupWarIdList(this, method);
  if ( !MainGroupWarIdList )
    sub_1D0F30C(0, v6);
  if ( System_Collections_Generic_List_int___Contains(
         MainGroupWarIdList,
         DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField,
         (const MethodInfo_393F764 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField;
  }
  else
  {
    return -1;
  }
}


System_Collections_Generic_List_int__o *MyRoomAddMaster__GetMainGroupWarIdList(
        MyRoomAddMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  QuestTree_o *Time; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_MapControl_WarInfo__o *WarInfoAll_OrderReverse; // x0
  MyRoomAddMaster___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x29
  System_Func_object__int__o *_9__20_0; // x22
  Il2CppObject *v10; // x23
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Func_T__TResult__o *_9__20_1; // x23
  Il2CppObject *v19; // x24
  struct MyRoomAddMaster___c_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v35; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x19
  System_Func_object__bool__o *v38; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  MyRoomAddMaster___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x19
  System_Func_object__int__o *_9__20_4; // x20
  Il2CppObject *v43; // x21
  GrandQuestFolderBoardItem_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v51; // x0
  MyRoomAddMaster___c_c *v52; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v53; // x19
  System_Func_object__int__o *_9__20_5; // x20
  Il2CppObject *v55; // x21
  struct MyRoomAddMaster___c_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v63; // x0
  MyRoomAddMaster___c_c *v64; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x19
  System_Func_object__int__o *_9__20_6; // x20
  Il2CppObject *v67; // x21
  struct MyRoomAddMaster___c_StaticFields *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0

  if ( (byte_4E77C07 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_DefaultIfEmpty_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_MyRoomAddEntity__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToDictionary_MapControl_WarInfo__int__MapControl_WarInfo_Status___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1D0F0B4(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_1D0F0B4(&System_Func_MapControl_WarInfo__MapControl_WarInfo_Status__TypeInfo);
    sub_1D0F0B4(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_1D0F0B4(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_0__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_1__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_4__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_5__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_6__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__DisplayClass20_0__GetMainGroupWarIdList_b__2__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__DisplayClass20_0__GetMainGroupWarIdList_b__3__);
    sub_1D0F0B4(&MyRoomAddMaster___c__DisplayClass20_0_TypeInfo);
    sub_1D0F0B4(&MyRoomAddMaster___c_TypeInfo);
    byte_4E77C07 = 1;
  }
  v3 = sub_1D0F300(MyRoomAddMaster___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (QuestTree_o *)NetworkManager__getTime(0);
  if ( !v3
    || (*(_QWORD *)(v3 + 16) = Time,
        (Time = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0) )
  {
    sub_1D0F30C(Time, v5);
  }
  WarInfoAll_OrderReverse = QuestTree__GetWarInfoAll_OrderReverse(Time, 0);
  v7 = MyRoomAddMaster___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)WarInfoAll_OrderReverse;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v7 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__20_0 = (System_Func_object__int__o *)v7->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = MyRoomAddMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__20_0 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_0, v10, Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__20_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__20_0,
      (int32_t)_9__20_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    v7 = MyRoomAddMaster___c_TypeInfo;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__20_1 = (System_Func_T__TResult__o *)v7->static_fields->__9__20_1;
  if ( !_9__20_1 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = MyRoomAddMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v7->static_fields->__9;
    _9__20_1 = (System_Func_T__TResult__o *)sub_1D0F300(System_Func_MapControl_WarInfo__MapControl_WarInfo_Status__TypeInfo);
    System_Func_object__Int32Enum____ctor(_9__20_1, v19, Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_1__, 0);
    v20 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v20->__9__20_1 = (struct System_Func_MapControl_WarInfo__MapControl_WarInfo_Status__o *)_9__20_1;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v20->__9__20_1, (int32_t)_9__20_1, v21, v22, v23, v24, v25, v26);
  }
  v27 = System_Linq_Enumerable__ToDictionary_object__int__Int32Enum_(
          v8,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (System_Func_TSource__TElement__o *)_9__20_1,
          (const MethodInfo_3290788 *)Method_System_Linq_Enumerable_ToDictionary_MapControl_WarInfo__int__MapControl_WarInfo_Status___);
  *(_QWORD *)(v3 + 24) = v27;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)v27, v28, v29, v30, v31, v32, v33);
  list = this->fields.list;
  v35 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v35,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass20_0__GetMainGroupWarIdList_b__2__,
    0);
  v36 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v35,
          (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                               v36,
                                                               (const MethodInfo_329539C *)Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  *(_BYTE *)(v3 + 32) = MyRoomParamsManager__IsMaxClearedWarIdAtLeastMaxNormalWarId(0);
  v38 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v38,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass20_0__GetMainGroupWarIdList_b__3__,
    0);
  v39 = System_Linq_Enumerable__Where_object_(
          v37,
          (System_Func_TSource__bool__o *)v38,
          (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v40 = MyRoomAddMaster___c_TypeInfo;
  v41 = v39;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v40 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__20_4 = (System_Func_object__int__o *)v40->static_fields->__9__20_4;
  if ( !_9__20_4 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = MyRoomAddMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__20_4 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_4, v43, Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_4__, 0);
    v44 = (GrandQuestFolderBoardItem_o *)MyRoomAddMaster___c_TypeInfo->static_fields;
    v44[1].klass = (GrandQuestFolderBoardItem_c *)_9__20_4;
    sub_1D0F058(v44 + 1, (int32_t)_9__20_4, v45, v46, v47, v48, v49, v50);
  }
  v51 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v41,
          (System_Func_TSource__TKey__o *)_9__20_4,
          (const MethodInfo_327F654 *)Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
  v52 = MyRoomAddMaster___c_TypeInfo;
  v53 = v51;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v52 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__20_5 = (System_Func_object__int__o *)v52->static_fields->__9__20_5;
  if ( !_9__20_5 )
  {
    if ( !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      v52 = MyRoomAddMaster___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v52->static_fields->__9;
    _9__20_5 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_5, v55, Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_5__, 0);
    v56 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v56->__9__20_5 = (struct System_Func_MyRoomAddEntity__int__o *)_9__20_5;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v56->__9__20_5, (int32_t)_9__20_5, v57, v58, v59, v60, v61, v62);
  }
  v63 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v53,
          (System_Func_TSource__TKey__o *)_9__20_5,
          (const MethodInfo_328F338 *)Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
  v64 = MyRoomAddMaster___c_TypeInfo;
  v65 = (System_Collections_Generic_IEnumerable_TSource__o *)v63;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v64 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__20_6 = (System_Func_object__int__o *)v64->static_fields->__9__20_6;
  if ( !_9__20_6 )
  {
    if ( !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64);
      v64 = MyRoomAddMaster___c_TypeInfo;
    }
    v67 = (Il2CppObject *)v64->static_fields->__9;
    _9__20_6 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_6, v67, Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_6__, 0);
    v68 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v68->__9__20_6 = (struct System_Func_MyRoomAddEntity__int__o *)_9__20_6;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v68->__9__20_6, (int32_t)_9__20_6, v69, v70, v71, v72, v73, v74);
  }
  v75 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v65,
                                                               (System_Func_TSource__TResult__o *)_9__20_6,
                                                               (const MethodInfo_3285DC8 *)Method_System_Linq_Enumerable_Select_MyRoomAddEntity__int___);
  v76 = System_Linq_Enumerable__Distinct_int_(
          v75,
          (const MethodInfo_3272944 *)Method_System_Linq_Enumerable_Distinct_int___);
  v77 = System_Linq_Enumerable__DefaultIfEmpty_int_(
          v76,
          -1,
          (const MethodInfo_3272500 *)Method_System_Linq_Enumerable_DefaultIfEmpty_int___);
  return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                     v77,
                                                     (const MethodInfo_3295130 *)Method_System_Linq_Enumerable_ToList_int___);
}


int32_t MyRoomAddMaster__GetMyRoomBackObjId(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        int32_t warId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t result; // w0
  const MethodInfo *v9; // x5
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v11; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v13; // x19
  MyRoomAddMaster___c_c *v14; // x0
  System_Comparison_T__o *_9__12_0; // x20
  Il2CppObject *v16; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w20
  System_Collections_Generic_List_object__o *v25; // x21
  int32_t klass_high; // w22
  int32_t klass; // w24
  int64_t monitor_low; // x23

  if ( (byte_4E77C00 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetMyRoomBackObjId_b__12_0__);
    sub_1D0F0B4(&MyRoomAddMaster___c_TypeInfo);
    byte_4E77C00 = 1;
  }
  result = MyRoomAddMaster__GetDiffObjectId(this, 8, groupId, warId, v4);
  if ( result <= 0 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                      this,
                                                                      8,
                                                                      groupId,
                                                                      0,
                                                                      warId,
                                                                      v9);
    if ( !EnableEntityList )
LABEL_21:
      sub_1D0F30C(EnableEntityList, v11);
    size = EnableEntityList->fields._size;
    v13 = EnableEntityList;
    if ( size < 1 )
    {
      return -1;
    }
    else
    {
      v14 = MyRoomAddMaster___c_TypeInfo;
      if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
        v14 = MyRoomAddMaster___c_TypeInfo;
      }
      _9__12_0 = (System_Comparison_T__o *)v14->static_fields->__9__12_0;
      if ( !_9__12_0 )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = MyRoomAddMaster___c_TypeInfo;
        }
        v16 = (Il2CppObject *)v14->static_fields->__9;
        _9__12_0 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_MyRoomAddEntity__TypeInfo);
        System_Comparison_object____ctor(_9__12_0, v16, Method_MyRoomAddMaster___c__GetMyRoomBackObjId_b__12_0__, 0);
        static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
        static_fields->__9__12_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__12_0;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__12_0,
          (int32_t)_9__12_0,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
      }
      System_Collections_Generic_List_object___Sort_60153556(
        v13,
        _9__12_0,
        (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
      v24 = 0;
      while ( 1 )
      {
        EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v13,
                                                                          v24,
                                                                          (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
        if ( !EnableEntityList )
          goto LABEL_21;
        v25 = EnableEntityList;
        klass = (int32_t)EnableEntityList[1].klass;
        klass_high = HIDWORD(EnableEntityList[1].klass);
        monitor_low = SLODWORD(EnableEntityList[1].monitor);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
          return HIDWORD(v25->fields._syncRoot);
        if ( size == ++v24 )
          return -1;
      }
    }
  }
  return result;
}


int32_t MyRoomAddMaster__GetPhotoCampaignBgGroupId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int64_t Time; // x0
  __int64 v5; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  MyRoomAddMaster___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__int__o *_9__23_1; // x20
  Il2CppObject *v12; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_4E77C0A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_FirstOrDefault_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_MyRoomAddEntity__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1D0F0B4(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_1D0F0B4(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetPhotoCampaignBgGroupId_b__23_1__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__DisplayClass23_0__GetPhotoCampaignBgGroupId_b__0__);
    sub_1D0F0B4(&MyRoomAddMaster___c__DisplayClass23_0_TypeInfo);
    sub_1D0F0B4(&MyRoomAddMaster___c_TypeInfo);
    byte_4E77C0A = 1;
  }
  v3 = (Il2CppObject *)sub_1D0F300(MyRoomAddMaster___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !v3 )
    sub_1D0F30C(Time, v5);
  v3[1].klass = (Il2CppClass *)Time;
  list = this->fields.list;
  v7 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v7,
    v3,
    Method_MyRoomAddMaster___c__DisplayClass23_0__GetPhotoCampaignBgGroupId_b__0__,
    0);
  v8 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)list,
         (System_Func_TSource__bool__o *)v7,
         (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v9 = MyRoomAddMaster___c_TypeInfo;
  v10 = v8;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v9 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__23_1 = (System_Func_object__int__o *)v9->static_fields->__9__23_1;
  if ( !_9__23_1 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = MyRoomAddMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__23_1 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__23_1, v12, Method_MyRoomAddMaster___c__GetPhotoCampaignBgGroupId_b__23_1__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__23_1 = (struct System_Func_MyRoomAddEntity__int__o *)_9__23_1;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__23_1,
      (int32_t)_9__23_1,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v10,
                                                               (System_Func_TSource__TResult__o *)_9__23_1,
                                                               (const MethodInfo_3285DC8 *)Method_System_Linq_Enumerable_Select_MyRoomAddEntity__int___);
  return System_Linq_Enumerable__FirstOrDefault_int_(
           v20,
           (const MethodInfo_32775CC *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
}


bool MyRoomAddMaster__IsExistOverWriteIdInGroup(
        MyRoomAddMaster_o *this,
        int32_t overWriteId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4E77C04 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
    sub_1D0F0B4(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__DisplayClass17_0__IsExistOverWriteIdInGroup_b__0__);
    sub_1D0F0B4(&MyRoomAddMaster___c__DisplayClass17_0_TypeInfo);
    byte_4E77C04 = 1;
  }
  v7 = sub_1D0F300(MyRoomAddMaster___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1D0F30C(v8, v9);
  *(_DWORD *)(v7 + 16) = groupId;
  *(_DWORD *)(v7 + 20) = overWriteId;
  list = this->fields.list;
  v11 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_MyRoomAddMaster___c__DisplayClass17_0__IsExistOverWriteIdInGroup_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__52817792(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v11,
           (const MethodInfo_325EF80 *)Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
}


bool MyRoomAddMaster__IsForceDispBgGroupId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int64_t Time; // x0
  __int64 v5; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v7; // x21

  if ( (byte_4E77C0B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
    sub_1D0F0B4(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__DisplayClass24_0__IsForceDispBgGroupId_b__0__);
    sub_1D0F0B4(&MyRoomAddMaster___c__DisplayClass24_0_TypeInfo);
    byte_4E77C0B = 1;
  }
  v3 = (Il2CppObject *)sub_1D0F300(MyRoomAddMaster___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !v3 )
    sub_1D0F30C(Time, v5);
  v3[1].klass = (Il2CppClass *)Time;
  list = this->fields.list;
  v7 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v7, v3, Method_MyRoomAddMaster___c__DisplayClass24_0__IsForceDispBgGroupId_b__0__, 0);
  return System_Linq_Enumerable__Any_object__52817792(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v7,
           (const MethodInfo_325EF80 *)Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
}


int32_t MyRoomAddMaster__ResolveMyRoomBackgroundId(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        bool checkDiff,
        int32_t warId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  int size; // w29
  System_Collections_Generic_List_object__o *v13; // x23
  MyRoomAddMaster___c_c *v14; // x0
  System_Comparison_T__o *_9__10_0; // x24
  Il2CppObject *v16; // x25
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w24
  System_Collections_Generic_List_object__o *v25; // x25
  int32_t klass_high; // w26
  int32_t klass; // w28
  int64_t monitor_low; // x27
  int32_t syncRoot_high; // w23
  MyRoomParamsManager_c *v30; // x0
  const MethodInfo *v31; // x3
  int32_t result; // w0

  if ( (byte_4E77BFE & 1) == 0 )
  {
    sub_1D0F0B4(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__ResolveMyRoomBackgroundId_b__10_0__);
    sub_1D0F0B4(&MyRoomAddMaster___c_TypeInfo);
    byte_4E77BFE = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    7,
                                                                    groupId,
                                                                    0,
                                                                    -1,
                                                                    v5);
  if ( !EnableEntityList )
    goto LABEL_36;
  size = EnableEntityList->fields._size;
  v13 = EnableEntityList;
  if ( size < 1 )
    goto LABEL_19;
  v14 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v14 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__10_0 = (System_Comparison_T__o *)v14->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = MyRoomAddMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__10_0 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__10_0, v16, Method_MyRoomAddMaster___c__ResolveMyRoomBackgroundId_b__10_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__10_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0,
      (int32_t)_9__10_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  System_Collections_Generic_List_object___Sort_60153556(
    v13,
    _9__10_0,
    (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v24 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v13,
                                                                      v24,
                                                                      (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_36;
    v25 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      break;
    if ( size == ++v24 )
      goto LABEL_19;
  }
  syncRoot_high = HIDWORD(v25->fields._syncRoot);
  if ( !syncRoot_high )
  {
LABEL_19:
    if ( warId < 0 )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4E72854 )
      {
        sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
        byte_4E72854 = 1;
      }
      v30 = MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v30 = MyRoomParamsManager_TypeInfo;
      }
      warId = v30->static_fields->_DisplayMyRoomBgWarId_k__BackingField;
    }
    syncRoot_high = MyRoomAddMaster__GetChangeMyRoomBgId(this, groupId, warId, v11);
  }
  if ( !checkDiff )
    return syncRoot_high;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
  if ( !EnableEntityList )
LABEL_36:
    sub_1D0F30C(EnableEntityList, v10);
  result = MyroomAddBgDiffMaster__GetDisplayObjectId((MyroomAddBgDiffMaster_o *)EnableEntityList, 1, syncRoot_high, v31);
  if ( result <= 0 )
    return syncRoot_high;
  return result;
}


bool MyRoomAddMaster__ShouldDisplayMainWar(MyRoomAddMaster_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v4; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_MapControl_WarInfo__o *WarInfoAll_OrderReverse; // x20
  System_Func_object__bool__o *v8; // x21
  Il2CppObject *v9; // x0
  int32_t Status; // w0
  int v12; // w19
  MyRoomParamsManager_c *v13; // x0

  if ( (byte_4E77C0C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_FirstOrDefault_MapControl_WarInfo___);
    sub_1D0F0B4(&System_Func_MapControl_WarInfo__bool__TypeInfo);
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__DisplayClass25_0__ShouldDisplayMainWar_b__0__);
    sub_1D0F0B4(&MyRoomAddMaster___c__DisplayClass25_0_TypeInfo);
    byte_4E77C0C = 1;
  }
  v4 = sub_1D0F300(MyRoomAddMaster___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = warId,
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0) )
  {
    sub_1D0F30C(Instance, v6);
  }
  WarInfoAll_OrderReverse = QuestTree__GetWarInfoAll_OrderReverse((QuestTree_o *)Instance, 0);
  v8 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_MapControl_WarInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v4,
    Method_MyRoomAddMaster___c__DisplayClass25_0__ShouldDisplayMainWar_b__0__,
    0);
  v9 = System_Linq_Enumerable__FirstOrDefault_object__52923832(
         (System_Collections_Generic_IEnumerable_TSource__o *)WarInfoAll_OrderReverse,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3278DB8 *)Method_System_Linq_Enumerable_FirstOrDefault_MapControl_WarInfo___);
  if ( !v9 )
    return 0;
  Status = MapControl_WarInfo__GetStatus((MapControl_WarInfo_o *)v9, 0);
  if ( (unsigned int)(Status - 1) < 2 )
    return 1;
  if ( !MapControl_WarInfo__IsClearedWarStatus(Status, 0) )
    return 0;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !MyRoomParamsManager__IsMaxClearedWarIdAtLeastMaxNormalWarId(0) )
    return 0;
  v12 = *(_DWORD *)(v4 + 16);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4E729A6 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E729A6 = 1;
  }
  v13 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  return v12 == v13->static_fields->_MaxClearedWarId_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
bool MyRoomAddMaster__TryGetEntity(
        MyRoomAddMaster_o *this,
        MyRoomAddEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4E77BF8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
    byte_4E77BF8 = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_353AB28 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
}


void MyRoomAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E77C0D & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomAddMaster___c_TypeInfo);
    byte_4E77C0D = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(MyRoomAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomAddMaster___c_TypeInfo->static_fields->__9 = (struct MyRoomAddMaster___c_o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)MyRoomAddMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MyRoomAddMaster___c___ctor(MyRoomAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t MyRoomAddMaster___c___GetBackObjAnimationNum_b__14_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1D0F30C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBackObjId_b__11_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1D0F30C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBgId_b__7_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1D0F30C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBgm_b__8_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1D0F30C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomFrontObjId_b__9_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1D0F30C(this, a);
  return b->fields.priority - a->fields.priority;
}


bool MyRoomAddMaster___c___GetDisplayOverWriteIds_b__16_0(
        MyRoomAddMaster___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id < 1;
}


int32_t MyRoomAddMaster___c___GetEventGroupDisplayInfoList_b__15_1(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1D0F30C(this, 0);
  return entity->fields.groupId;
}


int32_t MyRoomAddMaster___c___GetEventGroupDisplayInfoList_b__15_3(
        MyRoomAddMaster___c_o *this,
        System_ValueTuple_int__int__int__long__int__int__o *x,
        const MethodInfo *method)
{
  return x->fields.Item3;
}


int64_t MyRoomAddMaster___c___GetEventGroupDisplayInfoList_b__15_4(
        MyRoomAddMaster___c_o *this,
        System_ValueTuple_int__int__int__long__int__int__o *x,
        const MethodInfo *method)
{
  return x->fields.Item4;
}


int32_t MyRoomAddMaster___c___GetEventGroupDisplayInfoList_b__15_5(
        MyRoomAddMaster___c_o *this,
        System_ValueTuple_int__int__int__long__int__int__o *x,
        const MethodInfo *method)
{
  return x->fields.Item5;
}


int32_t MyRoomAddMaster___c___GetEventGroupDisplayInfoList_b__15_6(
        MyRoomAddMaster___c_o *this,
        System_ValueTuple_int__int__int__long__int__int__o *x,
        const MethodInfo *method)
{
  return x->fields.Item6;
}


int32_t MyRoomAddMaster___c___GetEventGroupDisplayInfoList_b__15_7(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1D0F30C(this, 0);
  return MyRoomAddEntity__GetForceDispBgPriority(entity, (const MethodInfo *)entity);
}


int32_t MyRoomAddMaster___c___GetEventGroupDisplayInfoList_b__15_8(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1D0F30C(this, 0);
  return MyRoomAddEntity__GetSortPriority(entity, (const MethodInfo *)entity);
}


int32_t MyRoomAddMaster___c___GetEventGroupDisplayInfoList_b__15_9(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1D0F30C(this, 0);
  return entity->fields.priority;
}


int32_t MyRoomAddMaster___c___GetMainGroupForceDispBgPriority_b__18_1(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1D0F30C(this, 0);
  return MyRoomAddEntity__GetForceDispBgPriority(entity, (const MethodInfo *)entity);
}


int32_t MyRoomAddMaster___c___GetMainGroupWarIdList_b__20_0(
        MyRoomAddMaster___c_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  if ( !warInfo )
    sub_1D0F30C(this, 0);
  return warInfo->fields.warId;
}


int32_t MyRoomAddMaster___c___GetMainGroupWarIdList_b__20_1(
        MyRoomAddMaster___c_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  if ( !warInfo )
    sub_1D0F30C(this, 0);
  return MapControl_WarInfo__GetStatus(warInfo, 0);
}


int32_t MyRoomAddMaster___c___GetMainGroupWarIdList_b__20_4(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1D0F30C(this, 0);
  return entity->fields.priority;
}


int32_t MyRoomAddMaster___c___GetMainGroupWarIdList_b__20_5(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1D0F30C(this, 0);
  return entity->fields.warId;
}


int32_t MyRoomAddMaster___c___GetMainGroupWarIdList_b__20_6(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1D0F30C(this, 0);
  return entity->fields.warId;
}


int32_t MyRoomAddMaster___c___GetMyRoomBackObjId_b__12_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1D0F30C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetPhotoCampaignBgGroupId_b__23_1(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1D0F30C(this, 0);
  return entity->fields.groupId;
}


int32_t MyRoomAddMaster___c___ResolveMyRoomBackgroundId_b__10_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1D0F30C(this, a);
  return b->fields.priority - a->fields.priority;
}


void MyRoomAddMaster___c__DisplayClass15_0___ctor(
        MyRoomAddMaster___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass15_0___GetEventGroupDisplayInfoList_b__0(
        MyRoomAddMaster___c__DisplayClass15_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1D0F30C(this, 0);
  return entity->fields.groupId && MyRoomAddEntity__IsOpen(entity, this->fields.nowTime, method);
}


System_ValueTuple_int__int__int__long__int__int__o *MyRoomAddMaster___c__DisplayClass15_0___GetEventGroupDisplayInfoList_b__2(
        System_ValueTuple_int__int__int__long__int__int__o *__return_ptr retstr,
        MyRoomAddMaster___c__DisplayClass15_0_o *this,
        System_Linq_IGrouping_int__MyRoomAddEntity__o *group,
        const MethodInfo *method)
{
  MyRoomAddMaster___c_c *v7; // x0
  System_Func_object__int__o *_9__15_7; // x22
  Il2CppObject *v9; // x23
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x0
  MyRoomAddMaster___c_c *v18; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x22
  System_Func_object__int__o *_9__15_8; // x23
  Il2CppObject *v21; // x24
  struct MyRoomAddMaster___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x0
  MyRoomAddMaster___c_c *v30; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v31; // x22
  System_Func_object__int__o *_9__15_9; // x23
  Il2CppObject *v33; // x24
  struct MyRoomAddMaster___c_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  Il2CppObject *object; // x0
  __int64 v43; // x1
  System_Linq_IGrouping_int__MyRoomAddEntity__c *klass; // x8
  int32_t v45; // w23
  MyRoomAddEntity_o *v46; // x22
  __int64 v47; // x9
  int32_t *p_offset; // x10
  __int64 v49; // x0
  int32_t v50; // w21
  const MethodInfo *v51; // x1
  WarMaster_o *warMst; // x8
  int32_t v53; // w20
  int64_t EventStartAt; // x24
  const MethodInfo *v55; // x1
  int32_t SortPriority; // w5
  int32_t priority; // w6
  const MethodInfo_3D0162C *v58; // x7
  System_ValueTuple_int__int__int__long__int__int__o *result; // x0

  if ( (byte_4E77C0E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_First_MyRoomAddEntity___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
    sub_1D0F0B4(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_1D0F0B4(&System_Linq_IGrouping_int__MyRoomAddEntity__TypeInfo);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_7__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_8__);
    sub_1D0F0B4(&Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_9__);
    sub_1D0F0B4(&MyRoomAddMaster___c_TypeInfo);
    sub_1D0F0B4(&Method_System_ValueTuple_int__int__int__long__int__int___ctor__);
    byte_4E77C0E = 1;
  }
  v7 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v7 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__15_7 = (System_Func_object__int__o *)v7->static_fields->__9__15_7;
  if ( !_9__15_7 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = MyRoomAddMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__15_7 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__15_7, v9, Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_7__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__15_7 = (struct System_Func_MyRoomAddEntity__int__o *)_9__15_7;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__15_7,
      (int32_t)_9__15_7,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)group,
          (System_Func_TSource__TKey__o *)_9__15_7,
          (const MethodInfo_327F654 *)Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
  v18 = MyRoomAddMaster___c_TypeInfo;
  v19 = v17;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v18 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__15_8 = (System_Func_object__int__o *)v18->static_fields->__9__15_8;
  if ( !_9__15_8 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = MyRoomAddMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__15_8 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__15_8,
      v21,
      Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_8__,
      0);
    v22 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v22->__9__15_8 = (struct System_Func_MyRoomAddEntity__int__o *)_9__15_8;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v22->__9__15_8, (int32_t)_9__15_8, v23, v24, v25, v26, v27, v28);
  }
  v29 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v19,
          (System_Func_TSource__TKey__o *)_9__15_8,
          (const MethodInfo_328F338 *)Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
  v30 = MyRoomAddMaster___c_TypeInfo;
  v31 = v29;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v30 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__15_9 = (System_Func_object__int__o *)v30->static_fields->__9__15_9;
  if ( !_9__15_9 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = MyRoomAddMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__15_9 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__15_9,
      v33,
      Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_9__,
      0);
    v34 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v34->__9__15_9 = (struct System_Func_MyRoomAddEntity__int__o *)_9__15_9;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v34->__9__15_9, (int32_t)_9__15_9, v35, v36, v37, v38, v39, v40);
  }
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                               v31,
                                                               (System_Func_TSource__TKey__o *)_9__15_9,
                                                               (const MethodInfo_328F338 *)Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
  object = System_Linq_Enumerable__First_object_(
             v41,
             (const MethodInfo_3276030 *)Method_System_Linq_Enumerable_First_MyRoomAddEntity___);
  if ( !object || !group )
    goto LABEL_31;
  klass = group->klass;
  v45 = (int32_t)object[2].klass;
  v46 = (MyRoomAddEntity_o *)object;
  v47 = *(unsigned __int16 *)&group->klass->_2.rank;
  if ( *(_WORD *)&group->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__MyRoomAddEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__MyRoomAddEntity__TypeInfo )
    {
      --v47;
      p_offset += 4;
      if ( !v47 )
        goto LABEL_27;
    }
    v49 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_27:
    v49 = sub_1CE5430(group, System_Linq_IGrouping_int__MyRoomAddEntity__TypeInfo, 0);
  }
  v50 = (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__MyRoomAddEntity__o *, _QWORD))v49)(
          group,
          *(_QWORD *)(v49 + 8));
  object = (Il2CppObject *)MyRoomAddEntity__GetForceDispBgPriority(v46, v51);
  warMst = this->fields.warMst;
  if ( !warMst )
LABEL_31:
    sub_1D0F30C(object, v43);
  v53 = (int)object;
  EventStartAt = WarMaster__GetEventStartAt(warMst, v46->fields.warId, 0);
  SortPriority = MyRoomAddEntity__GetSortPriority(v46, v55);
  priority = v46->fields.priority;
  v58 = (const MethodInfo_3D0162C *)Method_System_ValueTuple_int__int__int__long__int__int___ctor__;
  *(_OWORD *)&retstr->fields.Item1 = 0u;
  *(_OWORD *)&retstr->fields.Item4 = 0u;
  System_ValueTuple_int__int__int__long__int__int____ctor(
    retstr,
    v45,
    v50,
    v53,
    EventStartAt,
    SortPriority,
    priority,
    v58);
  return result;
}


void MyRoomAddMaster___c__DisplayClass17_0___ctor(
        MyRoomAddMaster___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass17_0___IsExistOverWriteIdInGroup_b__0(
        MyRoomAddMaster___c__DisplayClass17_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1D0F30C(this, 0);
  return entity->fields.groupId == this->fields.groupId && entity->fields.overwriteId == this->fields.overWriteId;
}


void MyRoomAddMaster___c__DisplayClass18_0___ctor(
        MyRoomAddMaster___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass18_0___GetMainGroupForceDispBgPriority_b__0(
        MyRoomAddMaster___c__DisplayClass18_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1D0F30C(this, 0);
  return !entity->fields.groupId && entity->fields.warId == this->fields.warId;
}


void MyRoomAddMaster___c__DisplayClass19_0___ctor(
        MyRoomAddMaster___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass19_0___DisplayBgGroupList_b__1(
        MyRoomAddMaster___c__DisplayClass19_0_o *this,
        System_ValueTuple_int__int__int__long__int__int__o *info,
        const MethodInfo *method)
{
  return info->fields.Item1 == this->fields.displayEventWarId && info->fields.Item2 == this->fields.displayEventGroupId;
}


void MyRoomAddMaster___c__DisplayClass19_0___DisplayBgGroupList_g__AddResult_0(
        MyRoomAddMaster___c__DisplayClass19_0_o *this,
        int32_t warId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_KeyValuePair_int__int__o p_item; // x0
  System_Collections_Generic_KeyValuePair_int__int__o v8; // x1
  MyRoomAddMaster_o *addedPairSet; // x0
  System_Collections_Generic_KeyValuePair_int__int__o v10; // x1
  const MethodInfo *v11; // x3
  int MyRoomBackObjId; // w22
  BalanceConfig_c *v13; // x0
  const MethodInfo *v14; // x4
  System_String_c *klass; // x23
  const char *namespaze; // x8
  unsigned __int64 v17; // x25
  int v18; // w23
  System_Collections_Generic_KeyValuePair_int__int__o v19; // x1
  int32_t v20; // w1
  struct System_Collections_Generic_List_KeyValuePair_int__int___o *result; // x21
  System_Collections_Generic_KeyValuePair_int__int__o v22; // x0
  struct System_Collections_Generic_KeyValuePair_int__int__array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  System_Collections_Generic_KeyValuePair_int__int__o v26; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o item; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4E77C0F & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_KeyValuePair_int__int___Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_KeyValuePair_int__int___Contains__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1D0F0B4(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__);
    byte_4E77C0F = 1;
  }
  p_item = (System_Collections_Generic_KeyValuePair_int__int__o)&item;
  item = 0;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_item,
    warId,
    groupId,
    (const MethodInfo_38B3F34 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  addedPairSet = (MyRoomAddMaster_o *)this->fields.addedPairSet;
  if ( !addedPairSet )
    goto LABEL_39;
  v10 = item;
  if ( !System_Collections_Generic_HashSet_KeyValuePair_int__int____Contains(
          (System_Collections_Generic_HashSet_KeyValuePair_int__int___o *)addedPairSet,
          v10,
          (const MethodInfo_37FA920 *)Method_System_Collections_Generic_HashSet_KeyValuePair_int__int___Contains__) )
  {
    addedPairSet = this->fields.__4__this;
    if ( !addedPairSet )
      goto LABEL_39;
    MyRoomBackObjId = MyRoomAddMaster__GetMyRoomBackObjId(addedPairSet, groupId, warId, v11);
    if ( MyRoomBackObjId < 1 )
      goto LABEL_9;
    addedPairSet = (MyRoomAddMaster_o *)this->fields.addedBgIdSet;
    if ( !addedPairSet )
      goto LABEL_39;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)addedPairSet,
            MyRoomBackObjId,
            (const MethodInfo_3800E64 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
LABEL_9:
      v13 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v13 = BalanceConfig_TypeInfo;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v13->static_fields->MyRoomMainDiffBgLinkedIds,
             MyRoomBackObjId,
             (const MethodInfo_326C62C *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        addedPairSet = (MyRoomAddMaster_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          addedPairSet = (MyRoomAddMaster_o *)BalanceConfig_TypeInfo;
        }
        klass = addedPairSet[2].fields._MasterName_k__BackingField[58].klass;
        if ( !klass )
          goto LABEL_39;
        namespaze = klass->_1.namespaze;
        if ( (int)namespaze >= 1 )
        {
          v17 = 0;
          while ( 1 )
          {
            if ( v17 >= (unsigned int)namespaze )
              sub_1D0F314(addedPairSet);
            addedPairSet = (MyRoomAddMaster_o *)this->fields.addedBgIdSet;
            if ( !addedPairSet )
              break;
            addedPairSet = (MyRoomAddMaster_o *)System_Collections_Generic_HashSet_int___Contains(
                                                  (System_Collections_Generic_HashSet_int__o *)addedPairSet,
                                                  *((_DWORD *)&klass->_1.byval_arg.data + v17),
                                                  (const MethodInfo_3800E64 *)Method_System_Collections_Generic_HashSet_int__Contains__);
            if ( ((unsigned __int8)addedPairSet & 1) != 0 )
              return;
            LODWORD(namespaze) = klass->_1.namespaze;
            if ( (__int64)++v17 >= (int)namespaze )
              goto LABEL_21;
          }
LABEL_39:
          ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1D0F30C)(addedPairSet, v8);
        }
      }
LABEL_21:
      addedPairSet = this->fields.__4__this;
      if ( !addedPairSet )
        goto LABEL_39;
      v18 = MyRoomAddMaster__ResolveMyRoomBackgroundId(addedPairSet, groupId, 1, warId, v14);
      if ( v18 < 1 )
        goto LABEL_25;
      addedPairSet = (MyRoomAddMaster_o *)this->fields.addedBgIdSet;
      if ( !addedPairSet )
        goto LABEL_39;
      if ( !System_Collections_Generic_HashSet_int___Contains(
              (System_Collections_Generic_HashSet_int__o *)addedPairSet,
              v18,
              (const MethodInfo_3800E64 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
LABEL_25:
        addedPairSet = (MyRoomAddMaster_o *)this->fields.addedPairSet;
        if ( !addedPairSet )
          goto LABEL_39;
        v19 = item;
        System_Collections_Generic_HashSet_KeyValuePair_int__int____Add(
          (System_Collections_Generic_HashSet_KeyValuePair_int__int___o *)addedPairSet,
          v19,
          (const MethodInfo_37FB40C *)Method_System_Collections_Generic_HashSet_KeyValuePair_int__int___Add__);
        if ( MyRoomBackObjId < 1 )
        {
          if ( v18 < 1 )
            goto LABEL_33;
          addedPairSet = (MyRoomAddMaster_o *)this->fields.addedBgIdSet;
          if ( !addedPairSet )
            goto LABEL_39;
          v20 = v18;
        }
        else
        {
          addedPairSet = (MyRoomAddMaster_o *)this->fields.addedBgIdSet;
          if ( !addedPairSet )
            goto LABEL_39;
          v20 = MyRoomBackObjId;
        }
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)addedPairSet,
          v20,
          (const MethodInfo_3801974 *)Method_System_Collections_Generic_HashSet_int__Add__);
LABEL_33:
        result = this->fields.result;
        v22 = (System_Collections_Generic_KeyValuePair_int__int__o)&v26;
        v26 = 0;
        System_Collections_Generic_KeyValuePair_int__int____ctor(
          v22,
          warId,
          groupId,
          (const MethodInfo_38B3F34 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
        if ( !result )
          goto LABEL_39;
        v8 = v26;
        items = result->fields._items;
        v24 = Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__;
        ++result->fields._version;
        if ( !items )
          goto LABEL_39;
        size = result->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_KeyValuePair_int__int____AddWithResize(
            result,
            v8,
            *(const MethodInfo_38CA7C0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          result->fields._size = size + 1;
          items->m_Items[size] = v8;
        }
      }
    }
  }
}


void MyRoomAddMaster___c__DisplayClass20_0___ctor(
        MyRoomAddMaster___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass20_0___GetMainGroupWarIdList_b__2(
        MyRoomAddMaster___c__DisplayClass20_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1D0F30C(this, 0);
  return !entity->fields.groupId && MyRoomAddEntity__IsOpen(entity, this->fields.nowTime, method);
}


bool MyRoomAddMaster___c__DisplayClass20_0___GetMainGroupWarIdList_b__3(
        MyRoomAddMaster___c__DisplayClass20_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  MyRoomAddMaster___c__DisplayClass20_0_o *v4; // x20
  int32_t warId; // w21
  MyRoomParamsManager_c *v6; // x0
  int32_t v8; // w19
  MyRoomParamsManager_c *v9; // x0
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4E77C10 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__MapControl_WarInfo_Status__TryGetValue__);
    this = (MyRoomAddMaster___c__DisplayClass20_0_o *)sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E77C10 = 1;
  }
  value = 0;
  if ( !entity || (this = (MyRoomAddMaster___c__DisplayClass20_0_o *)v4->fields.warStatusMap) == 0 )
    sub_1D0F30C(this, entity);
  if ( !System_Collections_Generic_Dictionary_int__Int32Enum___TryGetValue(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
          entity->fields.warId,
          &value,
          (const MethodInfo_35A3A40 *)Method_System_Collections_Generic_Dictionary_int__MapControl_WarInfo_Status__TryGetValue__) )
    return 0;
  if ( value == 1 )
    return 1;
  if ( value == 2 )
  {
    warId = entity->fields.warId;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4E729A7 )
    {
      sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
      byte_4E729A7 = 1;
    }
    v6 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v6 = MyRoomParamsManager_TypeInfo;
    }
    if ( warId == v6->static_fields->_MaxNormalWarId_k__BackingField )
      return 1;
  }
  if ( !v4->fields.isValidClearWarId )
    return 0;
  v8 = entity->fields.warId;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4E729A6 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E729A6 = 1;
  }
  v9 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v9 = MyRoomParamsManager_TypeInfo;
  }
  return v8 == v9->static_fields->_MaxClearedWarId_k__BackingField;
}


void MyRoomAddMaster___c__DisplayClass23_0___ctor(
        MyRoomAddMaster___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass23_0___GetPhotoCampaignBgGroupId_b__0(
        MyRoomAddMaster___c__DisplayClass23_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( !entity )
    sub_1D0F30C(this, 0);
  return MyRoomAddEntity__IsPhotoCampaign(entity, (const MethodInfo *)entity)
      && MyRoomAddEntity__IsOpen(entity, this->fields.nowTime, v5);
}


void MyRoomAddMaster___c__DisplayClass24_0___ctor(
        MyRoomAddMaster___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass24_0___IsForceDispBgGroupId_b__0(
        MyRoomAddMaster___c__DisplayClass24_0_o *this,
        MyRoomAddEntity_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.type == 1
      && MyRoomAddEntity__IsOpen(x, this->fields.nowTime, method)
      && MyRoomAddEntity__GetForceDispBgPriority(x, v4) > 0;
}


void MyRoomAddMaster___c__DisplayClass25_0___ctor(
        MyRoomAddMaster___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass25_0___ShouldDisplayMainWar_b__0(
        MyRoomAddMaster___c__DisplayClass25_0_o *this,
        MapControl_WarInfo_o *w,
        const MethodInfo *method)
{
  if ( !w )
    sub_1D0F30C(this, 0);
  return w->fields.warId == this->fields.warId;
}