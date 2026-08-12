void MyRoomAddMaster___ctor(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970DC9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
    byte_5970DC9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    200,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
}


System_Collections_Generic_List_KeyValuePair_int__int___o *MyRoomAddMaster__DisplayBgGroupList(
        MyRoomAddMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  _QWORD *p_image; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_KeyValuePair_int__int___o *v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_HashSet_KeyValuePair_int__int___o *v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_HashSet_int__o *v26; // x22
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  const MethodInfo *v33; // x1
  System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int___o *EventGroupDisplayInfoList; // x23
  const MethodInfo *v35; // x1
  System_Collections_Generic_List_int__o *MainGroupWarIdList; // x22
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x3
  int MainGroupWarId; // w24
  int v40; // w9
  int32_t v41; // w25
  int32_t v42; // w25
  int32_t Item; // w26
  const MethodInfo *v44; // x2
  System_Func_ValueTuple_int__int__int__long__int__int___bool__o *v45; // x20
  const MethodInfo *v46; // x3
  int32_t v47; // w20
  const MethodInfo *v48; // x3
  int32_t v49; // w20
  int32_t v50; // w0
  const MethodInfo *v51; // x3
  System_ValueTuple_int__int__int__long__int__int__o v53; // [xsp+0h] [xbp-80h] BYREF

  if ( (byte_5970DD6 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_ValueTuple_int__int__int__long__int__int____);
    sub_2213A60(&System_Func_ValueTuple_int__int__int__long__int__int___bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_KeyValuePair_int__int____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_HashSet_KeyValuePair_int__int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int___get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
    sub_2213A60(&MyRoomParamsManager_TypeInfo);
    sub_2213A60(&Method_MyRoomAddMaster___c__DisplayClass19_0__DisplayBgGroupList_b__1__);
    sub_2213A60(&MyRoomAddMaster___c__DisplayClass19_0_TypeInfo);
    byte_5970DD6 = 1;
  }
  v3 = sub_2213CCC(MyRoomAddMaster___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_37;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_KeyValuePair_int__int___o *)sub_2213CCC(System_Collections_Generic_List_KeyValuePair_int__int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_int__int_____ctor(
    v12,
    (const MethodInfo_43B9728 *)Method_System_Collections_Generic_List_KeyValuePair_int__int____ctor__);
  *(_QWORD *)(v3 + 40) = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Collections_Generic_HashSet_KeyValuePair_int__int___o *)sub_2213CCC(System_Collections_Generic_HashSet_KeyValuePair_int__int___TypeInfo);
  System_Collections_Generic_HashSet_KeyValuePair_int__int_____ctor(
    v19,
    (const MethodInfo_42AD878 *)Method_System_Collections_Generic_HashSet_KeyValuePair_int__int____ctor__);
  *(_QWORD *)(v3 + 16) = v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v26,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  *(_QWORD *)(v3 + 32) = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v26, v27, v28, v29, v30, v31, v32);
  EventGroupDisplayInfoList = MyRoomAddMaster__GetEventGroupDisplayInfoList(this, v33);
  MainGroupWarIdList = MyRoomAddMaster__GetMainGroupWarIdList(this, v35);
  MainGroupWarId = MyRoomAddMaster__GetMainGroupWarId(this, v37);
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v5);
  if ( !byte_596B892 )
  {
    sub_2213A60(&MyRoomParamsManager_TypeInfo);
    byte_596B892 = 1;
  }
  p_image = &MyRoomParamsManager_TypeInfo->_1.image;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v5);
    p_image = &MyRoomParamsManager_TypeInfo->_1.image;
  }
  v40 = (unsigned __int8)byte_596B891;
  *(_DWORD *)(v3 + 48) = *(_DWORD *)(p_image[23] + 72LL);
  if ( !v40 )
  {
    sub_2213A60(&MyRoomParamsManager_TypeInfo);
    p_image = &MyRoomParamsManager_TypeInfo->_1.image;
    byte_596B891 = 1;
  }
  if ( !*((_DWORD *)p_image + 57) )
  {
    j_il2cpp_runtime_class_init_0(p_image, v5);
    p_image = &MyRoomParamsManager_TypeInfo->_1.image;
  }
  *(_DWORD *)(v3 + 52) = *(_DWORD *)(p_image[23] + 68LL);
  if ( !EventGroupDisplayInfoList )
    goto LABEL_37;
  if ( EventGroupDisplayInfoList->fields._size >= 1 )
  {
    v41 = 0;
    do
    {
      p_image = System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int____get_Item(
                  &v53,
                  EventGroupDisplayInfoList,
                  v41,
                  (const MethodInfo_440C1FC *)Method_System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int___get_Item__);
      if ( v53.fields.Item3 >= 1 )
        MyRoomAddMaster___c__DisplayClass19_0___DisplayBgGroupList_g__AddResult_0(
          (MyRoomAddMaster___c__DisplayClass19_0_o *)v3,
          v53.fields.Item1,
          v53.fields.Item2,
          v38);
      ++v41;
    }
    while ( v41 < EventGroupDisplayInfoList->fields._size );
  }
  if ( !MainGroupWarIdList )
LABEL_37:
    sub_2213CDC(p_image, v5);
  if ( MainGroupWarIdList->fields._size >= 1 )
  {
    v42 = 0;
    do
    {
      Item = System_Collections_Generic_List_int___get_Item(
               MainGroupWarIdList,
               v42,
               (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( MyRoomAddMaster__GetMainGroupForceDispBgPriority(this, Item, v44) >= 1 )
        MyRoomAddMaster___c__DisplayClass19_0___DisplayBgGroupList_g__AddResult_0(
          (MyRoomAddMaster___c__DisplayClass19_0_o *)v3,
          Item,
          0,
          v38);
      ++v42;
    }
    while ( v42 < MainGroupWarIdList->fields._size );
  }
  if ( MainGroupWarId >= 1 )
    MyRoomAddMaster___c__DisplayClass19_0___DisplayBgGroupList_g__AddResult_0(
      (MyRoomAddMaster___c__DisplayClass19_0_o *)v3,
      MainGroupWarId,
      0,
      v38);
  v45 = (System_Func_ValueTuple_int__int__int__long__int__int___bool__o *)sub_2213CCC(System_Func_ValueTuple_int__int__int__long__int__int___bool__TypeInfo);
  System_Func_ValueTuple_int__int__int__long__int__int___bool____ctor(
    v45,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass19_0__DisplayBgGroupList_b__1__,
    0);
  if ( BasicHelper__Any_ValueTuple_int__int__int__long__int__int__(
         (System_Collections_Generic_List_T__o *)EventGroupDisplayInfoList,
         (System_Func_T__bool__o *)v45,
         (const MethodInfo_380F958 *)Method_BasicHelper_Any_ValueTuple_int__int__int__long__int__int____) )
  {
    MyRoomAddMaster___c__DisplayClass19_0___DisplayBgGroupList_g__AddResult_0(
      (MyRoomAddMaster___c__DisplayClass19_0_o *)v3,
      *(_DWORD *)(v3 + 48),
      *(_DWORD *)(v3 + 52),
      v46);
  }
  if ( EventGroupDisplayInfoList->fields._size >= 1 )
  {
    v47 = 0;
    do
    {
      System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int____get_Item(
        &v53,
        EventGroupDisplayInfoList,
        v47,
        (const MethodInfo_440C1FC *)Method_System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int___get_Item__);
      MyRoomAddMaster___c__DisplayClass19_0___DisplayBgGroupList_g__AddResult_0(
        (MyRoomAddMaster___c__DisplayClass19_0_o *)v3,
        v53.fields.Item1,
        v53.fields.Item2,
        v48);
      ++v47;
    }
    while ( v47 < EventGroupDisplayInfoList->fields._size );
  }
  if ( MainGroupWarIdList->fields._size >= 1 )
  {
    v49 = 0;
    do
    {
      v50 = System_Collections_Generic_List_int___get_Item(
              MainGroupWarIdList,
              v49,
              (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
      MyRoomAddMaster___c__DisplayClass19_0___DisplayBgGroupList_g__AddResult_0(
        (MyRoomAddMaster___c__DisplayClass19_0_o *)v3,
        v50,
        0,
        v51);
      ++v49;
    }
    while ( v49 < MainGroupWarIdList->fields._size );
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
  __int64 v16; // x1
  int64_t v17; // x22
  MyRoomAddMaster___c_c *v18; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__14_0; // x23
  Il2CppObject *v21; // x24
  struct MyRoomAddMaster___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t v29; // w24
  int32_t v30; // w23
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  MyRoomAddEntity_o *v37; // x25
  __int64 v38; // x1
  int32_t condType; // w26
  int32_t condValue; // w27
  int64_t condValue2; // x25
  char v43; // [xsp+Ch] [xbp-64h]

  if ( (byte_5970DD1 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__14_0__);
    sub_2213A60(&MyRoomAddMaster___c_TypeInfo);
    byte_5970DD1 = 1;
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
    sub_2213CDC(EnableEntityList, v10);
  }
  v12 = EnableEntityList;
  overwriteId = (*p_BackObjAnimationChangeEntity)->fields.overwriteId;
  size = v11->fields._size;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Time = NetworkManager__getTime(0);
  if ( size < 1 )
    return 1;
  v17 = Time;
  v18 = MyRoomAddMaster___c_TypeInfo;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v16);
    v18 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__14_0 = (System_Comparison_T__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !*(&v18->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v18, v16);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__14_0, v21, Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__14_0__, 0);
    v22 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v22->__9__14_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__14_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v22->__9__14_0, (int32_t)_9__14_0, v23, v24, v25, v26, v27, v28);
  }
  System_Collections_Generic_List_object___Sort_71849708(
    v11,
    _9__14_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v43 = 0;
  v29 = 0;
  v30 = 1;
  do
  {
    EnableEntityList = (MyRoomAddEntity_o *)System_Collections_Generic_List_object___get_Item(
                                              v11,
                                              v29,
                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_32;
    v37 = EnableEntityList;
    if ( overwriteId == EnableEntityList->fields.overwriteId )
    {
      if ( v12 == (MyRoomAddEntity_o *)MyRoomAddEntity__GetScheduleUpdateAt(EnableEntityList, v10) )
      {
        if ( v37->fields.endedAt > v17 )
          goto LABEL_26;
        v43 = 1;
      }
      if ( v37->fields.startedAt <= v17 )
      {
        condType = v37->fields.condType;
        condValue = v37->fields.condValue;
        condValue2 = v37->fields.condValue2;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
        v30 += CondType__IsOpen(condType, condValue, condValue2, 0, 0, 0);
      }
    }
LABEL_26:
    ++v29;
  }
  while ( size != v29 );
  if ( (v43 & 1) != 0 )
  {
    *p_BackObjAnimationChangeEntity = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_BackObjAnimationChangeEntity, 0, v31, v32, v33, v34, v35, v36);
  }
  return v30;
}


int32_t MyRoomAddMaster__GetBackObjAnimationNumForLeftServant(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  struct MyRoomAddEntity_o **p_BackObjAnimationChangeEntity; // x19
  int64_t ScheduleUpdateAt; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  int64_t v7; // x20
  int32_t overwriteId; // w21
  int64_t v9; // x22
  int64_t v10; // x21
  int32_t v11; // w22
  int64_t condValue2; // x24
  int32_t condType; // w22
  int32_t condValue; // w23
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  MyRoomAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5970DE1 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970DE1 = 1;
  }
  entity = 0;
  p_BackObjAnimationChangeEntity = &this->fields.BackObjAnimationChangeEntity;
  if ( !this->fields.BackObjAnimationChangeEntity )
    return 0;
  ScheduleUpdateAt = sub_2213B20(int___TypeInfo, 1);
  if ( !ScheduleUpdateAt )
    goto LABEL_29;
  if ( !*(_DWORD *)(ScheduleUpdateAt + 24) )
    sub_2213CE4(ScheduleUpdateAt);
  *(_DWORD *)(ScheduleUpdateAt + 32) = 8;
  if ( !MyRoomAddMaster__TryGetSpecialServantEntity(this, &entity, (System_Int32_array *)ScheduleUpdateAt, v6) )
    return 0;
  ScheduleUpdateAt = (int64_t)*p_BackObjAnimationChangeEntity;
  if ( !*p_BackObjAnimationChangeEntity )
    goto LABEL_29;
  ScheduleUpdateAt = MyRoomAddEntity__GetScheduleUpdateAt((MyRoomAddEntity_o *)ScheduleUpdateAt, v5);
  if ( !*p_BackObjAnimationChangeEntity )
    goto LABEL_29;
  v7 = ScheduleUpdateAt;
  overwriteId = (*p_BackObjAnimationChangeEntity)->fields.overwriteId;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  ScheduleUpdateAt = NetworkManager__getTime(0);
  if ( !entity )
LABEL_29:
    sub_2213CDC(ScheduleUpdateAt, v5);
  if ( overwriteId != entity->fields.overwriteId )
    return 1;
  v9 = ScheduleUpdateAt;
  ScheduleUpdateAt = MyRoomAddEntity__GetScheduleUpdateAt(entity, v5);
  v10 = ScheduleUpdateAt;
  if ( v7 == ScheduleUpdateAt )
  {
    if ( entity )
    {
      if ( entity->fields.endedAt > v9 )
        return 1;
      goto LABEL_19;
    }
    goto LABEL_29;
  }
  if ( !entity )
    goto LABEL_29;
LABEL_19:
  if ( entity->fields.startedAt > v9 )
    return 1;
  condValue2 = entity->fields.condValue2;
  condType = entity->fields.condType;
  condValue = entity->fields.condValue;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v5);
  if ( CondType__IsOpen(condType, condValue, condValue2, 0, 0, 0) )
    v11 = 2;
  else
    v11 = 1;
  if ( v7 == v10 )
  {
    *p_BackObjAnimationChangeEntity = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_BackObjAnimationChangeEntity, 0, v16, v17, v18, v19, v20, v21);
  }
  return v11;
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
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__11_0; // x21
  Il2CppObject *v17; // x22
  struct MyRoomAddMaster___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w22
  struct MyRoomAddEntity_o *v26; // x21
  int32_t klass; // w23
  int32_t klass_high; // w24
  int64_t monitor_low; // x25
  const MethodInfo *v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  if ( (byte_5970DCF & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__11_0__);
    sub_2213A60(&MyRoomAddMaster___c_TypeInfo);
    byte_5970DCF = 1;
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
      sub_2213CDC(EnableEntityList, v11);
    size = EnableEntityList->fields._size;
    v13 = EnableEntityList;
    if ( size < 1 )
    {
      return -1;
    }
    else
    {
      v14 = MyRoomAddMaster___c_TypeInfo;
      if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v11);
        v14 = MyRoomAddMaster___c_TypeInfo;
      }
      static_fields = v14->static_fields;
      _9__11_0 = (System_Comparison_T__o *)static_fields->__9__11_0;
      if ( !_9__11_0 )
      {
        if ( !*(&v14->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v14, v11);
          static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
        }
        v17 = (Il2CppObject *)static_fields->__9;
        _9__11_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_MyRoomAddEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__11_0,
          v17,
          Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__11_0__,
          0);
        v18 = MyRoomAddMaster___c_TypeInfo->static_fields;
        v18->__9__11_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__11_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v18->__9__11_0,
          (int32_t)_9__11_0,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
      }
      System_Collections_Generic_List_object___Sort_71849708(
        v13,
        _9__11_0,
        (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
      v25 = 0;
      while ( 1 )
      {
        EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v13,
                                                                          v25,
                                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
        if ( !EnableEntityList )
          goto LABEL_23;
        v26 = (struct MyRoomAddEntity_o *)EnableEntityList;
        klass = (int32_t)EnableEntityList[1].klass;
        klass_high = HIDWORD(EnableEntityList[1].klass);
        monitor_low = SLODWORD(EnableEntityList[1].monitor);
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11);
        if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
          break;
        if ( size == ++v25 )
          return -1;
      }
      if ( MyRoomAddEntity__GetScheduleUpdateAt(v26, v30) >= 1 )
      {
        this->fields.BackObjAnimationChangeEntity = v26;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.BackObjAnimationChangeEntity,
          (int32_t)v26,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
      }
      return v26->fields.overwriteId;
    }
  }
  return result;
}


int32_t MyRoomAddMaster__GetChangeMyRoomBackObjIdForLeftServant(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  __int64 ScheduleUpdateAt; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2
  int32_t result; // w0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t v14; // w1
  MyRoomAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970DE0 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5970DE0 = 1;
  }
  entity = 0;
  ScheduleUpdateAt = sub_2213B20(int___TypeInfo, 1);
  if ( !ScheduleUpdateAt )
    goto LABEL_14;
  if ( !*(_DWORD *)(ScheduleUpdateAt + 24) )
    sub_2213CE4(ScheduleUpdateAt);
  *(_DWORD *)(ScheduleUpdateAt + 32) = 8;
  if ( !MyRoomAddMaster__TryGetSpecialServantEntity(this, &entity, (System_Int32_array *)ScheduleUpdateAt, v5) )
    return -1;
  result = MyRoomAddMaster__GetDiffObjectIdForLeftServant(this, 8, v6);
  if ( result <= 0 )
  {
    ScheduleUpdateAt = (__int64)entity;
    if ( entity )
    {
      ScheduleUpdateAt = MyRoomAddEntity__GetScheduleUpdateAt(entity, v4);
      if ( ScheduleUpdateAt >= 1 )
      {
        v14 = (int)entity;
        this->fields.BackObjAnimationChangeEntity = entity;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.BackObjAnimationChangeEntity,
          v14,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
      }
      if ( entity )
        return entity->fields.overwriteId;
    }
LABEL_14:
    sub_2213CDC(ScheduleUpdateAt, v4);
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
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__7_0; // x20
  Il2CppObject *v15; // x21
  struct MyRoomAddMaster___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w20
  System_Collections_Generic_List_object__o *v24; // x21
  int32_t klass; // w22
  int32_t klass_high; // w23
  int64_t monitor_low; // x24
  int32_t MyRoomBgImgId; // w0

  if ( (byte_5970DCB & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__7_0__);
    sub_2213A60(&MyRoomAddMaster___c_TypeInfo);
    byte_5970DCB = 1;
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
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgImgId = EventMaster__getMyRoomBgImgId((EventMaster_o *)EnableEntityList, 0);
        return MyRoomBgImgId & ~(MyRoomBgImgId >> 31);
      }
    }
LABEL_21:
    sub_2213CDC(EnableEntityList, v9);
  }
  v12 = MyRoomAddMaster___c_TypeInfo;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v9);
    v12 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__7_0 = (System_Comparison_T__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v9);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__7_0, v15, Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__7_0__, 0);
    v16 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v16->__9__7_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__7_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__7_0, (int32_t)_9__7_0, v17, v18, v19, v20, v21, v22);
  }
  System_Collections_Generic_List_object___Sort_71849708(
    v11,
    _9__7_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v23 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v11,
                                                                      v23,
                                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v24 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      return HIDWORD(v24->fields._syncRoot);
    if ( size == ++v23 )
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
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__8_0; // x20
  Il2CppObject *v17; // x21
  struct MyRoomAddMaster___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w20
  System_Collections_Generic_List_object__o *v26; // x21
  int32_t klass; // w22
  int32_t klass_high; // w23
  int64_t monitor_low; // x24
  int32_t MyRoomBgmId; // w0

  if ( (byte_5970DCC & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__8_0__);
    sub_2213A60(&MyRoomAddMaster___c_TypeInfo);
    byte_5970DCC = 1;
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
    sub_2213CDC(EnableEntityList, v11);
  size = EnableEntityList->fields._size;
  v13 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_18:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgmId = EventMaster__getMyRoomBgmId((EventMaster_o *)EnableEntityList, 0);
        return MyRoomBgmId & ~(MyRoomBgmId >> 31);
      }
    }
    goto LABEL_23;
  }
  v14 = MyRoomAddMaster___c_TypeInfo;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v11);
    v14 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__8_0 = (System_Comparison_T__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, v11);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__8_0, v17, Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__8_0__, 0);
    v18 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v18->__9__8_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__8_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__8_0, (int32_t)_9__8_0, v19, v20, v21, v22, v23, v24);
  }
  System_Collections_Generic_List_object___Sort_71849708(
    v13,
    _9__8_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v25 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v13,
                                                                      v25,
                                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_23;
    v26 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      return HIDWORD(v26->fields._syncRoot);
    if ( size == ++v25 )
      goto LABEL_18;
  }
}


int32_t MyRoomAddMaster__GetChangeMyRoomBgmForLeftServant(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  __int64 DiffObjectIdForLeftServant; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2
  MyRoomAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970DDE & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5970DDE = 1;
  }
  entity = 0;
  DiffObjectIdForLeftServant = sub_2213B20(int___TypeInfo, 1);
  if ( !DiffObjectIdForLeftServant )
    goto LABEL_11;
  if ( !*(_DWORD *)(DiffObjectIdForLeftServant + 24) )
    sub_2213CE4(DiffObjectIdForLeftServant);
  *(_DWORD *)(DiffObjectIdForLeftServant + 32) = 2;
  if ( !MyRoomAddMaster__TryGetSpecialServantEntity(this, &entity, (System_Int32_array *)DiffObjectIdForLeftServant, v5) )
  {
    LODWORD(DiffObjectIdForLeftServant) = 0;
    return DiffObjectIdForLeftServant;
  }
  DiffObjectIdForLeftServant = MyRoomAddMaster__GetDiffObjectIdForLeftServant(this, 2, v6);
  if ( (int)DiffObjectIdForLeftServant <= 0 )
  {
    if ( entity )
    {
      LODWORD(DiffObjectIdForLeftServant) = entity->fields.overwriteId;
      return DiffObjectIdForLeftServant;
    }
LABEL_11:
    sub_2213CDC(DiffObjectIdForLeftServant, v4);
  }
  return DiffObjectIdForLeftServant;
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
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__9_0; // x21
  Il2CppObject *v17; // x22
  struct MyRoomAddMaster___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w21
  System_Collections_Generic_List_object__o *v26; // x22
  int32_t klass; // w23
  int32_t klass_high; // w24
  int64_t monitor_low; // x25

  if ( (byte_5970DCD & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__9_0__);
    sub_2213A60(&MyRoomAddMaster___c_TypeInfo);
    byte_5970DCD = 1;
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
      sub_2213CDC(EnableEntityList, v11);
    size = EnableEntityList->fields._size;
    v13 = EnableEntityList;
    if ( size < 1 )
    {
      return defaultId;
    }
    else
    {
      v14 = MyRoomAddMaster___c_TypeInfo;
      if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v11);
        v14 = MyRoomAddMaster___c_TypeInfo;
      }
      static_fields = v14->static_fields;
      _9__9_0 = (System_Comparison_T__o *)static_fields->__9__9_0;
      if ( !_9__9_0 )
      {
        if ( !*(&v14->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v14, v11);
          static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
        }
        v17 = (Il2CppObject *)static_fields->__9;
        _9__9_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_MyRoomAddEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__9_0,
          v17,
          Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__9_0__,
          0);
        v18 = MyRoomAddMaster___c_TypeInfo->static_fields;
        v18->__9__9_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__9_0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__9_0, (int32_t)_9__9_0, v19, v20, v21, v22, v23, v24);
      }
      System_Collections_Generic_List_object___Sort_71849708(
        v13,
        _9__9_0,
        (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
      v25 = 0;
      while ( 1 )
      {
        EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v13,
                                                                          v25,
                                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
        if ( !EnableEntityList )
          goto LABEL_21;
        v26 = EnableEntityList;
        klass = (int32_t)EnableEntityList[1].klass;
        klass_high = HIDWORD(EnableEntityList[1].klass);
        monitor_low = SLODWORD(EnableEntityList[1].monitor);
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11);
        if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
          return HIDWORD(v26->fields._syncRoot);
        if ( size == ++v25 )
          return defaultId;
      }
    }
  }
  return result;
}


int32_t MyRoomAddMaster__GetChangeMyRoomFrontObjIdForLeftServant(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  __int64 DiffObjectIdForLeftServant; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2
  MyRoomAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970DDF & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5970DDF = 1;
  }
  entity = 0;
  DiffObjectIdForLeftServant = sub_2213B20(int___TypeInfo, 1);
  if ( !DiffObjectIdForLeftServant )
    goto LABEL_11;
  if ( !*(_DWORD *)(DiffObjectIdForLeftServant + 24) )
    sub_2213CE4(DiffObjectIdForLeftServant);
  *(_DWORD *)(DiffObjectIdForLeftServant + 32) = 6;
  if ( !MyRoomAddMaster__TryGetSpecialServantEntity(this, &entity, (System_Int32_array *)DiffObjectIdForLeftServant, v5) )
  {
    LODWORD(DiffObjectIdForLeftServant) = -1;
    return DiffObjectIdForLeftServant;
  }
  DiffObjectIdForLeftServant = MyRoomAddMaster__GetDiffObjectIdForLeftServant(this, 6, v6);
  if ( (int)DiffObjectIdForLeftServant <= 0 )
  {
    if ( entity )
    {
      LODWORD(DiffObjectIdForLeftServant) = entity->fields.overwriteId;
      return DiffObjectIdForLeftServant;
    }
LABEL_11:
    sub_2213CDC(DiffObjectIdForLeftServant, v4);
  }
  return DiffObjectIdForLeftServant;
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
  __int64 v9; // x1
  int32_t v10; // w20
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3

  if ( (byte_5970DD9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5970DD9 = 1;
  }
  v10 = MyRoomAddMaster__ResolveMyRoomBackgroundId(this, groupId, 0, warId, method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v12);
  return MyroomAddBgDiffMaster__GetDisplayObjectId((MyroomAddBgDiffMaster_o *)Master_object, type, v10, v13);
}


int32_t MyRoomAddMaster__GetDiffObjectIdForLeftServant(MyRoomAddMaster_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w20
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_5970DE3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5970DE3 = 1;
  }
  v6 = MyRoomAddMaster__ResolveMyRoomBgIdForLeftServant(this, 0, method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v8);
  return MyroomAddBgDiffMaster__GetDisplayObjectId((MyroomAddBgDiffMaster_o *)Master_object, type, v6, v9);
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
  __int64 v27; // x1
  MyRoomAddMaster___c_c *v28; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Predicate_int__o *_9__16_0; // x20
  Il2CppObject *v31; // x21
  struct MyRoomAddMaster___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7

  if ( (byte_5970DD3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Predicate_int__TypeInfo);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetDisplayOverWriteIds_b__16_0__);
    sub_2213A60(&MyRoomAddMaster___c_TypeInfo);
    byte_5970DD3 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
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
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
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
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
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
    sub_2213CDC(v9, v10);
  v26 = v7->fields._size;
  v27 = (unsigned int)v9;
  if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v7,
      v9,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = v26 + 1;
    v24->m_Items[v26] = v9;
  }
  v28 = MyRoomAddMaster___c_TypeInfo;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v27);
    v28 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__16_0 = static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !*(&v28->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v28, v27);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Predicate_int__o *)sub_2213CCC(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__16_0, v31, Method_MyRoomAddMaster___c__GetDisplayOverWriteIds_b__16_0__, 0);
    v32 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v32->__9__16_0 = _9__16_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v32->__9__16_0, (int32_t)_9__16_0, v33, v34, v35, v36, v37, v38);
  }
  System_Collections_Generic_List_int___RemoveAll(
    v7,
    (System_Predicate_T__o *)_9__16_0,
    (const MethodInfo_4468864 *)Method_System_Collections_Generic_List_int__RemoveAll__);
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
  __int64 v13; // x1
  int32_t Count; // w25
  int64_t Time; // x26
  System_Collections_Generic_List_int__o *MainGroupWarIdList; // x27
  int32_t v17; // w28
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  Il2CppObject *v24; // x29
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_5970DCA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970DCA = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_31;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
  Time = NetworkManager__getTime(0);
  MainGroupWarIdList = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    MainGroupWarIdList,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !groupId )
    MainGroupWarIdList = MyRoomAddMaster__GetMainGroupWarIdList(this, v11);
  if ( Count >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v17,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
      if ( !list )
        break;
      v24 = (Il2CppObject *)list;
      if ( *((_DWORD *)list + 5) == type )
      {
        if ( groupId < 0 )
          goto LABEL_26;
        if ( *((_DWORD *)list + 7) == groupId )
        {
          if ( groupId )
            goto LABEL_26;
          if ( !MainGroupWarIdList )
            break;
          list = (void *)System_Collections_Generic_List_int___Contains(
                           MainGroupWarIdList,
                           *((_DWORD *)list + 8),
                           (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_26:
            if ( (warId < 0 || LODWORD(v24[2].klass) == warId)
              && (isIgnoreTimeLimit || (__int64)v24[3].monitor <= Time && (__int64)v24[4].klass >= Time) )
            {
              if ( !v10 )
                break;
              items = v10->fields._items;
              v26 = Method_System_Collections_Generic_List_MyRoomAddEntity__Add__;
              ++v10->fields._version;
              if ( !items )
                break;
              size = v10->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v10,
                  v24,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
              }
              else
              {
                v28 = &items->obj.klass + size;
                v10->fields._size = size + 1;
                v28[4] = (Il2CppClass *)v24;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v24, v18, v19, v20, v21, v22, v23);
              }
            }
          }
        }
      }
      if ( Count == ++v17 )
        return (System_Collections_Generic_List_MyRoomAddEntity__o *)v10;
    }
LABEL_31:
    sub_2213CDC(list, v11);
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

  if ( (byte_5970DC7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
    byte_5970DC7 = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (MyRoomAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_3F157EC *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
}


System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int___o *MyRoomAddMaster__GetEventGroupDisplayInfoList(
        MyRoomAddMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  int64_t Time; // x0
  __int64 v14; // x1
  DataManager_c *v15; // x8
  Il2CppObject *Master_object; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  __int64 v26; // x1
  MyRoomAddMaster___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x19
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__15_1; // x21
  Il2CppObject *v31; // x22
  struct MyRoomAddMaster___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x19
  System_Func_T__TResult__o *v40; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v41; // x0
  __int64 v42; // x1
  MyRoomAddMaster___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x19
  struct MyRoomAddMaster___c_StaticFields *v45; // x9
  System_Func_ValueTuple_int__int__int__long__int__int___int__o *_9__15_3; // x20
  Il2CppObject *v47; // x21
  struct MyRoomAddMaster___c_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v55; // x0
  __int64 v56; // x1
  MyRoomAddMaster___c_c *v57; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v58; // x19
  struct MyRoomAddMaster___c_StaticFields *v59; // x9
  System_Func_ValueTuple_int__int__int__long__int__int___long__o *_9__15_4; // x20
  Il2CppObject *v61; // x21
  struct MyRoomAddMaster___c_StaticFields *v62; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v69; // x0
  __int64 v70; // x1
  MyRoomAddMaster___c_c *v71; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v72; // x19
  struct MyRoomAddMaster___c_StaticFields *v73; // x9
  System_Func_ValueTuple_int__int__int__long__int__int___int__o *_9__15_5; // x20
  Il2CppObject *v75; // x21
  struct MyRoomAddMaster___c_StaticFields *v76; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v83; // x0
  __int64 v84; // x1
  MyRoomAddMaster___c_c *v85; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v86; // x19
  struct MyRoomAddMaster___c_StaticFields *v87; // x9
  System_Func_ValueTuple_int__int__int__long__int__int___int__o *_9__15_6; // x20
  Il2CppObject *v89; // x21
  struct MyRoomAddMaster___c_StaticFields *v90; // x0
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x0

  if ( (byte_5970DD2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_GroupBy_MyRoomAddEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_ValueTuple_int__int__int__long__int__int___int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_IGrouping_int__MyRoomAddEntity___ValueTuple_int__int__int__long__int__int____);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenByDescending_ValueTuple_int__int__int__long__int__int___int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenByDescending_ValueTuple_int__int__int__long__int__int___long___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_ValueTuple_int__int__int__long__int__int____);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_2213A60(&System_Func_ValueTuple_int__int__int__long__int__int___int__TypeInfo);
    sub_2213A60(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_2213A60(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_IGrouping_int__MyRoomAddEntity___ValueTuple_int__int__int__long__int__int___TypeInfo);
    sub_2213A60(&System_Func_ValueTuple_int__int__int__long__int__int___long__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_1__);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_3__);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_4__);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_5__);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_6__);
    sub_2213A60(&Method_MyRoomAddMaster___c__DisplayClass15_0__GetEventGroupDisplayInfoList_b__0__);
    sub_2213A60(&Method_MyRoomAddMaster___c__DisplayClass15_0__GetEventGroupDisplayInfoList_b__2__);
    sub_2213A60(&MyRoomAddMaster___c__DisplayClass15_0_TypeInfo);
    sub_2213A60(&MyRoomAddMaster___c_TypeInfo);
    byte_5970DD2 = 1;
  }
  v3 = sub_2213CCC(MyRoomAddMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Time = NetworkManager__getTime(0);
  v15 = DataManager_TypeInfo;
  *(_QWORD *)(v3 + 16) = Time;
  if ( !*(&v15->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v15, v14);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
  *(_QWORD *)(v3 + 32) = Master_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)Master_object, v17, v18, v19, v20, v21, v22);
  list = this->fields.list;
  v24 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass15_0__GetEventGroupDisplayInfoList_b__0__,
    0);
  v25 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v27 = MyRoomAddMaster___c_TypeInfo;
  v28 = v25;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v26);
    v27 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__15_1 = (System_Func_object__int__o *)static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( !*(&v27->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v27, v26);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__15_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__15_1,
      v31,
      Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_1__,
      0);
    v32 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v32->__9__15_1 = (struct System_Func_MyRoomAddEntity__int__o *)_9__15_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v32->__9__15_1, (int32_t)_9__15_1, v33, v34, v35, v36, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__int_(
                                                               v28,
                                                               (System_Func_TSource__TKey__o *)_9__15_1,
                                                               (const MethodInfo_38831D8 *)Method_System_Linq_Enumerable_GroupBy_MyRoomAddEntity__int___);
  v40 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_IGrouping_int__MyRoomAddEntity___ValueTuple_int__int__int__long__int__int___TypeInfo);
  System_Func_object__ValueTuple_int__int__int__long__int__int_____ctor(
    v40,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass15_0__GetEventGroupDisplayInfoList_b__2__,
    0);
  v41 = System_Linq_Enumerable__Select_object__ValueTuple_int__int__int__long__int__int__(
          v39,
          (System_Func_TSource__TResult__o *)v40,
          (const MethodInfo_388FEF0 *)Method_System_Linq_Enumerable_Select_IGrouping_int__MyRoomAddEntity___ValueTuple_int__int__int__long__int__int____);
  v43 = MyRoomAddMaster___c_TypeInfo;
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)v41;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v42);
    v43 = MyRoomAddMaster___c_TypeInfo;
  }
  v45 = v43->static_fields;
  _9__15_3 = v45->__9__15_3;
  if ( !_9__15_3 )
  {
    if ( !*(&v43->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v43, v42);
      v45 = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)v45->__9;
    _9__15_3 = (System_Func_ValueTuple_int__int__int__long__int__int___int__o *)sub_2213CCC(System_Func_ValueTuple_int__int__int__long__int__int___int__TypeInfo);
    System_Func_ValueTuple_int__int__int__long__int__int___int____ctor(
      _9__15_3,
      v47,
      Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_3__,
      0);
    v48 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v48->__9__15_3 = _9__15_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v48->__9__15_3, (int32_t)_9__15_3, v49, v50, v51, v52, v53, v54);
  }
  v55 = System_Linq_Enumerable__OrderByDescending_ValueTuple_int__int__int__long__int__int___int_(
          v44,
          (System_Func_TSource__TKey__o *)_9__15_3,
          (const MethodInfo_3889004 *)Method_System_Linq_Enumerable_OrderByDescending_ValueTuple_int__int__int__long__int__int___int___);
  v57 = MyRoomAddMaster___c_TypeInfo;
  v58 = v55;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v56);
    v57 = MyRoomAddMaster___c_TypeInfo;
  }
  v59 = v57->static_fields;
  _9__15_4 = v59->__9__15_4;
  if ( !_9__15_4 )
  {
    if ( !*(&v57->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v57, v56);
      v59 = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v61 = (Il2CppObject *)v59->__9;
    _9__15_4 = (System_Func_ValueTuple_int__int__int__long__int__int___long__o *)sub_2213CCC(System_Func_ValueTuple_int__int__int__long__int__int___long__TypeInfo);
    System_Func_ValueTuple_int__int__int__long__int__int___long____ctor(
      _9__15_4,
      v61,
      Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_4__,
      0);
    v62 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v62->__9__15_4 = _9__15_4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v62->__9__15_4, (int32_t)_9__15_4, v63, v64, v65, v66, v67, v68);
  }
  v69 = System_Linq_Enumerable__ThenByDescending_ValueTuple_int__int__int__long__int__int___long_(
          v58,
          (System_Func_TSource__TKey__o *)_9__15_4,
          (const MethodInfo_389B224 *)Method_System_Linq_Enumerable_ThenByDescending_ValueTuple_int__int__int__long__int__int___long___);
  v71 = MyRoomAddMaster___c_TypeInfo;
  v72 = v69;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v70);
    v71 = MyRoomAddMaster___c_TypeInfo;
  }
  v73 = v71->static_fields;
  _9__15_5 = v73->__9__15_5;
  if ( !_9__15_5 )
  {
    if ( !*(&v71->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v71, v70);
      v73 = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v75 = (Il2CppObject *)v73->__9;
    _9__15_5 = (System_Func_ValueTuple_int__int__int__long__int__int___int__o *)sub_2213CCC(System_Func_ValueTuple_int__int__int__long__int__int___int__TypeInfo);
    System_Func_ValueTuple_int__int__int__long__int__int___int____ctor(
      _9__15_5,
      v75,
      Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_5__,
      0);
    v76 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v76->__9__15_5 = _9__15_5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v76->__9__15_5, (int32_t)_9__15_5, v77, v78, v79, v80, v81, v82);
  }
  v83 = System_Linq_Enumerable__ThenByDescending_ValueTuple_int__int__int__long__int__int___int_(
          v72,
          (System_Func_TSource__TKey__o *)_9__15_5,
          (const MethodInfo_389B158 *)Method_System_Linq_Enumerable_ThenByDescending_ValueTuple_int__int__int__long__int__int___int___);
  v85 = MyRoomAddMaster___c_TypeInfo;
  v86 = v83;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v84);
    v85 = MyRoomAddMaster___c_TypeInfo;
  }
  v87 = v85->static_fields;
  _9__15_6 = v87->__9__15_6;
  if ( !_9__15_6 )
  {
    if ( !*(&v85->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v85, v84);
      v87 = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v89 = (Il2CppObject *)v87->__9;
    _9__15_6 = (System_Func_ValueTuple_int__int__int__long__int__int___int__o *)sub_2213CCC(System_Func_ValueTuple_int__int__int__long__int__int___int__TypeInfo);
    System_Func_ValueTuple_int__int__int__long__int__int___int____ctor(
      _9__15_6,
      v89,
      Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_6__,
      0);
    v90 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v90->__9__15_6 = _9__15_6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v90->__9__15_6, (int32_t)_9__15_6, v91, v92, v93, v94, v95, v96);
  }
  v97 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_ValueTuple_int__int__int__long__int__int___int_(
                                                               v86,
                                                               (System_Func_TSource__TKey__o *)_9__15_6,
                                                               (const MethodInfo_389B158 *)Method_System_Linq_Enumerable_ThenByDescending_ValueTuple_int__int__int__long__int__int___int___);
  return (System_Collections_Generic_List_ValueTuple_int__int__int__long__int__int___o *)System_Linq_Enumerable__ToList_ValueTuple_int__int__int__long__int__int__(
                                                                                           v97,
                                                                                           (const MethodInfo_38A0A70 *)Method_System_Linq_Enumerable_ToList_ValueTuple_int__int__int__long__int__int____);
}


int32_t MyRoomAddMaster__GetMainGroupForceDispBgPriority(
        MyRoomAddMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_MyRoomAddEntity__bool__c *v9; // x0
  System_Func_object__bool__o *v10; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  __int64 v12; // x1
  MyRoomAddMaster___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__18_1; // x20
  Il2CppObject *v17; // x21
  struct MyRoomAddMaster___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_int__o *v26; // x0

  if ( (byte_5970DD5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_DefaultIfEmpty_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_MyRoomAddEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_2213A60(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_2213A60(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetMainGroupForceDispBgPriority_b__18_1__);
    sub_2213A60(&Method_MyRoomAddMaster___c__DisplayClass18_0__GetMainGroupForceDispBgPriority_b__0__);
    sub_2213A60(&MyRoomAddMaster___c__DisplayClass18_0_TypeInfo);
    sub_2213A60(&MyRoomAddMaster___c_TypeInfo);
    byte_5970DD5 = 1;
  }
  v5 = sub_2213CCC(MyRoomAddMaster___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  list = this->fields.list;
  v9 = System_Func_MyRoomAddEntity__bool__TypeInfo;
  *(_DWORD *)(v5 + 16) = warId;
  v10 = (System_Func_object__bool__o *)sub_2213CCC(v9);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_MyRoomAddMaster___c__DisplayClass18_0__GetMainGroupForceDispBgPriority_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v13 = MyRoomAddMaster___c_TypeInfo;
  v14 = v11;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v12);
    v13 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__18_1 = (System_Func_object__int__o *)static_fields->__9__18_1;
  if ( !_9__18_1 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v12);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__18_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__18_1,
      v17,
      Method_MyRoomAddMaster___c__GetMainGroupForceDispBgPriority_b__18_1__,
      0);
    v18 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v18->__9__18_1 = (struct System_Func_MyRoomAddEntity__int__o *)_9__18_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__18_1, (int32_t)_9__18_1, v19, v20, v21, v22, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v14,
                                                               (System_Func_TSource__TResult__o *)_9__18_1,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_MyRoomAddEntity__int___);
  v26 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__DefaultIfEmpty_int_(
                                                           v25,
                                                           0,
                                                           (const MethodInfo_387C180 *)Method_System_Linq_Enumerable_DefaultIfEmpty_int___);
  return System_Linq_Enumerable__Max(v26, 0);
}


int32_t MyRoomAddMaster__GetMainGroupWarId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0
  int32_t DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField; // w20
  System_Collections_Generic_List_int__o *MainGroupWarIdList; // x0
  __int64 v6; // x1

  if ( (byte_5970DD8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&MyRoomParamsManager_TypeInfo);
    byte_5970DD8 = 1;
  }
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method);
  if ( !byte_596B892 )
  {
    sub_2213A60(&MyRoomParamsManager_TypeInfo);
    byte_596B892 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField = v3->static_fields->_DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField;
  MainGroupWarIdList = MyRoomAddMaster__GetMainGroupWarIdList(this, method);
  if ( !MainGroupWarIdList )
    sub_2213CDC(0, v6);
  if ( System_Collections_Generic_List_int___Contains(
         MainGroupWarIdList,
         DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField,
         (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__) )
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
  __int64 v4; // x1
  QuestTree_o *Time; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_MapControl_WarInfo__o *WarInfoAll_OrderReverse; // x0
  __int64 v8; // x1
  MyRoomAddMaster___c_c *v9; // x8
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__20_0; // x22
  Il2CppObject *v12; // x23
  struct MyRoomAddMaster___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct MyRoomAddMaster___c_StaticFields *v20; // x9
  System_Func_T__TResult__o *_9__20_1; // x23
  Il2CppObject *v22; // x24
  struct MyRoomAddMaster___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v38; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  __int64 v40; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x19
  bool IsMaxClearedWarIdAtLeastMaxNormalWarId; // w0
  System_Func_MyRoomAddEntity__bool__c *v43; // x8
  System_Func_object__bool__o *v44; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  __int64 v46; // x1
  MyRoomAddMaster___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x19
  struct MyRoomAddMaster___c_StaticFields *v49; // x9
  System_Func_object__int__o *_9__20_4; // x20
  Il2CppObject *v51; // x21
  struct MyRoomAddMaster___c_StaticFields *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v59; // x0
  __int64 v60; // x1
  MyRoomAddMaster___c_c *v61; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v62; // x19
  struct MyRoomAddMaster___c_StaticFields *v63; // x9
  System_Func_object__int__o *_9__20_5; // x20
  Il2CppObject *v65; // x21
  MissionNaviTransitionBoardItem_o *v66; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v73; // x0
  __int64 v74; // x1
  MyRoomAddMaster___c_c *v75; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x19
  struct MyRoomAddMaster___c_StaticFields *v77; // x9
  System_Func_object__int__o *_9__20_6; // x20
  Il2CppObject *v79; // x21
  struct MyRoomAddMaster___c_StaticFields *v80; // x0
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v89; // x0
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-68h]

  if ( (byte_5970DD7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_DefaultIfEmpty_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_MyRoomAddEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToDictionary_MapControl_WarInfo__int__MapControl_WarInfo_Status___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_2213A60(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_2213A60(&System_Func_MapControl_WarInfo__MapControl_WarInfo_Status__TypeInfo);
    sub_2213A60(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_2213A60(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_2213A60(&MyRoomParamsManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_0__);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_1__);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_4__);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_5__);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_6__);
    sub_2213A60(&Method_MyRoomAddMaster___c__DisplayClass20_0__GetMainGroupWarIdList_b__2__);
    sub_2213A60(&Method_MyRoomAddMaster___c__DisplayClass20_0__GetMainGroupWarIdList_b__3__);
    sub_2213A60(&MyRoomAddMaster___c__DisplayClass20_0_TypeInfo);
    sub_2213A60(&MyRoomAddMaster___c_TypeInfo);
    byte_5970DD7 = 1;
  }
  v3 = sub_2213CCC(MyRoomAddMaster___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  Time = (QuestTree_o *)NetworkManager__getTime(0);
  if ( !v3
    || (*(_QWORD *)(v3 + 16) = Time,
        (Time = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0) )
  {
    sub_2213CDC(Time, v6);
  }
  WarInfoAll_OrderReverse = QuestTree__GetWarInfoAll_OrderReverse(Time, 0);
  v9 = MyRoomAddMaster___c_TypeInfo;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)WarInfoAll_OrderReverse;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v8);
    v9 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__20_0 = (System_Func_object__int__o *)static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v8);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__20_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_0, v12, Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_0__, 0);
    v13 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v13->__9__20_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__20_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__20_0, (int32_t)_9__20_0, v14, v15, v16, v17, v18, v19);
    v9 = MyRoomAddMaster___c_TypeInfo;
  }
  if ( !*(&v9->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v9, v8);
    v9 = MyRoomAddMaster___c_TypeInfo;
  }
  v20 = v9->static_fields;
  _9__20_1 = (System_Func_T__TResult__o *)v20->__9__20_1;
  if ( !_9__20_1 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v8);
      v20 = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)v20->__9;
    _9__20_1 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_MapControl_WarInfo__MapControl_WarInfo_Status__TypeInfo);
    System_Func_object__Int32Enum____ctor(_9__20_1, v22, Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_1__, 0);
    v23 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v23->__9__20_1 = (struct System_Func_MapControl_WarInfo__MapControl_WarInfo_Status__o *)_9__20_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->__9__20_1, (int32_t)_9__20_1, v24, v25, v26, v27, v28, v29);
  }
  v30 = System_Linq_Enumerable__ToDictionary_object__int__Int32Enum_(
          source,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (System_Func_TSource__TElement__o *)_9__20_1,
          (const MethodInfo_389C4CC *)Method_System_Linq_Enumerable_ToDictionary_MapControl_WarInfo__int__MapControl_WarInfo_Status___);
  *(_QWORD *)(v3 + 24) = v30;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v30, v31, v32, v33, v34, v35, v36);
  list = this->fields.list;
  v38 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v38,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass20_0__GetMainGroupWarIdList_b__2__,
    0);
  v39 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v38,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                               v39,
                                                               (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v40);
  IsMaxClearedWarIdAtLeastMaxNormalWarId = MyRoomParamsManager__IsMaxClearedWarIdAtLeastMaxNormalWarId(0);
  v43 = System_Func_MyRoomAddEntity__bool__TypeInfo;
  *(_BYTE *)(v3 + 32) = IsMaxClearedWarIdAtLeastMaxNormalWarId;
  v44 = (System_Func_object__bool__o *)sub_2213CCC(v43);
  System_Func_object__bool____ctor(
    v44,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass20_0__GetMainGroupWarIdList_b__3__,
    0);
  v45 = System_Linq_Enumerable__Where_object_(
          v41,
          (System_Func_TSource__bool__o *)v44,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v47 = MyRoomAddMaster___c_TypeInfo;
  v48 = v45;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v46);
    v47 = MyRoomAddMaster___c_TypeInfo;
  }
  v49 = v47->static_fields;
  _9__20_4 = (System_Func_object__int__o *)v49->__9__20_4;
  if ( !_9__20_4 )
  {
    if ( !*(&v47->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v47, v46);
      v49 = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)v49->__9;
    _9__20_4 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_4, v51, Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_4__, 0);
    v52 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v52->__9__20_4 = (struct System_Func_MyRoomAddEntity__int__o *)_9__20_4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v52->__9__20_4, (int32_t)_9__20_4, v53, v54, v55, v56, v57, v58);
  }
  v59 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v48,
          (System_Func_TSource__TKey__o *)_9__20_4,
          (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
  v61 = MyRoomAddMaster___c_TypeInfo;
  v62 = v59;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v60);
    v61 = MyRoomAddMaster___c_TypeInfo;
  }
  v63 = v61->static_fields;
  _9__20_5 = (System_Func_object__int__o *)v63->__9__20_5;
  if ( !_9__20_5 )
  {
    if ( !*(&v61->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v61, v60);
      v63 = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v65 = (Il2CppObject *)v63->__9;
    _9__20_5 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_5, v65, Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_5__, 0);
    v66 = (MissionNaviTransitionBoardItem_o *)MyRoomAddMaster___c_TypeInfo->static_fields;
    v66[1].klass = (MissionNaviTransitionBoardItem_c *)_9__20_5;
    sub_2213A04(v66 + 1, (int32_t)_9__20_5, v67, v68, v69, v70, v71, v72);
  }
  v73 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v62,
          (System_Func_TSource__TKey__o *)_9__20_5,
          (const MethodInfo_389B3BC *)Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
  v75 = MyRoomAddMaster___c_TypeInfo;
  v76 = (System_Collections_Generic_IEnumerable_TSource__o *)v73;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v74);
    v75 = MyRoomAddMaster___c_TypeInfo;
  }
  v77 = v75->static_fields;
  _9__20_6 = (System_Func_object__int__o *)v77->__9__20_6;
  if ( !_9__20_6 )
  {
    if ( !*(&v75->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v75, v74);
      v77 = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v79 = (Il2CppObject *)v77->__9;
    _9__20_6 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_6, v79, Method_MyRoomAddMaster___c__GetMainGroupWarIdList_b__20_6__, 0);
    v80 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v80->__9__20_6 = (struct System_Func_MyRoomAddEntity__int__o *)_9__20_6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v80->__9__20_6, (int32_t)_9__20_6, v81, v82, v83, v84, v85, v86);
  }
  v87 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v76,
                                                               (System_Func_TSource__TResult__o *)_9__20_6,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_MyRoomAddEntity__int___);
  v88 = System_Linq_Enumerable__Distinct_int_(
          v87,
          (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
  v89 = System_Linq_Enumerable__DefaultIfEmpty_int_(
          v88,
          -1,
          (const MethodInfo_387C180 *)Method_System_Linq_Enumerable_DefaultIfEmpty_int___);
  return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                     v89,
                                                     (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
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
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__12_0; // x20
  Il2CppObject *v17; // x21
  struct MyRoomAddMaster___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w20
  System_Collections_Generic_List_object__o *v26; // x21
  int32_t klass; // w22
  int32_t klass_high; // w23
  int64_t monitor_low; // x24

  if ( (byte_5970DD0 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetMyRoomBackObjId_b__12_0__);
    sub_2213A60(&MyRoomAddMaster___c_TypeInfo);
    byte_5970DD0 = 1;
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
      sub_2213CDC(EnableEntityList, v11);
    size = EnableEntityList->fields._size;
    v13 = EnableEntityList;
    if ( size < 1 )
    {
      return -1;
    }
    else
    {
      v14 = MyRoomAddMaster___c_TypeInfo;
      if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v11);
        v14 = MyRoomAddMaster___c_TypeInfo;
      }
      static_fields = v14->static_fields;
      _9__12_0 = (System_Comparison_T__o *)static_fields->__9__12_0;
      if ( !_9__12_0 )
      {
        if ( !*(&v14->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v14, v11);
          static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
        }
        v17 = (Il2CppObject *)static_fields->__9;
        _9__12_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_MyRoomAddEntity__TypeInfo);
        System_Comparison_object____ctor(_9__12_0, v17, Method_MyRoomAddMaster___c__GetMyRoomBackObjId_b__12_0__, 0);
        v18 = MyRoomAddMaster___c_TypeInfo->static_fields;
        v18->__9__12_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__12_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v18->__9__12_0,
          (int32_t)_9__12_0,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
      }
      System_Collections_Generic_List_object___Sort_71849708(
        v13,
        _9__12_0,
        (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
      v25 = 0;
      while ( 1 )
      {
        EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v13,
                                                                          v25,
                                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
        if ( !EnableEntityList )
          goto LABEL_21;
        v26 = EnableEntityList;
        klass = (int32_t)EnableEntityList[1].klass;
        klass_high = HIDWORD(EnableEntityList[1].klass);
        monitor_low = SLODWORD(EnableEntityList[1].monitor);
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11);
        if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
          return HIDWORD(v26->fields._syncRoot);
        if ( size == ++v25 )
          return -1;
      }
    }
  }
  return result;
}


int32_t MyRoomAddMaster__GetPhotoCampaignBgGroupId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  __int64 v4; // x1
  int64_t Time; // x0
  __int64 v6; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_MyRoomAddEntity__bool__c *v8; // x8
  System_Func_object__bool__o *v9; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  __int64 v11; // x1
  MyRoomAddMaster___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__23_1; // x20
  Il2CppObject *v16; // x21
  struct MyRoomAddMaster___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_5970DDA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_MyRoomAddEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_2213A60(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_2213A60(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetPhotoCampaignBgGroupId_b__23_1__);
    sub_2213A60(&Method_MyRoomAddMaster___c__DisplayClass23_0__GetPhotoCampaignBgGroupId_b__0__);
    sub_2213A60(&MyRoomAddMaster___c__DisplayClass23_0_TypeInfo);
    sub_2213A60(&MyRoomAddMaster___c_TypeInfo);
    byte_5970DDA = 1;
  }
  v3 = (Il2CppObject *)sub_2213CCC(MyRoomAddMaster___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  Time = NetworkManager__getTime(0);
  if ( !v3 )
    sub_2213CDC(Time, v6);
  list = this->fields.list;
  v8 = System_Func_MyRoomAddEntity__bool__TypeInfo;
  v3[1].klass = (Il2CppClass *)Time;
  v9 = (System_Func_object__bool__o *)sub_2213CCC(v8);
  System_Func_object__bool____ctor(
    v9,
    v3,
    Method_MyRoomAddMaster___c__DisplayClass23_0__GetPhotoCampaignBgGroupId_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v12 = MyRoomAddMaster___c_TypeInfo;
  v13 = v10;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v11);
    v12 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__23_1 = (System_Func_object__int__o *)static_fields->__9__23_1;
  if ( !_9__23_1 )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v11);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__23_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__23_1, v16, Method_MyRoomAddMaster___c__GetPhotoCampaignBgGroupId_b__23_1__, 0);
    v17 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v17->__9__23_1 = (struct System_Func_MyRoomAddEntity__int__o *)_9__23_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->__9__23_1, (int32_t)_9__23_1, v18, v19, v20, v21, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v13,
                                                               (System_Func_TSource__TResult__o *)_9__23_1,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_MyRoomAddEntity__int___);
  return System_Linq_Enumerable__FirstOrDefault_int_(
           v24,
           (const MethodInfo_388115C *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
}


System_Collections_Generic_IEnumerable_MyRoomAddEntity__o *MyRoomAddMaster__GetSpecialServantBackgroundList(
        MyRoomAddMaster_o *this,
        System_Int32_array *types,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  System_Func_object__bool__o *v23; // x21

  if ( (byte_5970DE4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_2213A60(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_2213A60(&Method_MyRoomAddMaster___c__DisplayClass33_0__GetSpecialServantBackgroundList_b__0__);
    sub_2213A60(&Method_MyRoomAddMaster___c__DisplayClass33_0__GetSpecialServantBackgroundList_b__1__);
    sub_2213A60(&MyRoomAddMaster___c__DisplayClass33_0_TypeInfo);
    byte_5970DE4 = 1;
  }
  v5 = sub_2213CCC(MyRoomAddMaster___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = types;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)types, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  list = this->fields.list;
  v21 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v5,
    Method_MyRoomAddMaster___c__DisplayClass33_0__GetSpecialServantBackgroundList_b__0__,
    0);
  v22 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v23 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v5,
    Method_MyRoomAddMaster___c__DisplayClass33_0__GetSpecialServantBackgroundList_b__1__,
    0);
  return (System_Collections_Generic_IEnumerable_MyRoomAddEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                        v22,
                                                                        (System_Func_TSource__bool__o *)v23,
                                                                        (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
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
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__bool__o *v11; // x19

  if ( (byte_5970DD4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
    sub_2213A60(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_2213A60(&Method_MyRoomAddMaster___c__DisplayClass17_0__IsExistOverWriteIdInGroup_b__0__);
    sub_2213A60(&MyRoomAddMaster___c__DisplayClass17_0_TypeInfo);
    byte_5970DD4 = 1;
  }
  v7 = sub_2213CCC(MyRoomAddMaster___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  list = this->fields.list;
  *(_DWORD *)(v7 + 16) = groupId;
  *(_DWORD *)(v7 + 20) = overWriteId;
  v11 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_MyRoomAddMaster___c__DisplayClass17_0__IsExistOverWriteIdInGroup_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__59145568(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v11,
           (const MethodInfo_3867D60 *)Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
}


bool MyRoomAddMaster__IsForceDispBgGroupId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  __int64 v4; // x1
  int64_t Time; // x0
  __int64 v6; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v8; // x21

  if ( (byte_5970DDB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
    sub_2213A60(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_MyRoomAddMaster___c__DisplayClass24_0__IsForceDispBgGroupId_b__0__);
    sub_2213A60(&MyRoomAddMaster___c__DisplayClass24_0_TypeInfo);
    byte_5970DDB = 1;
  }
  v3 = (Il2CppObject *)sub_2213CCC(MyRoomAddMaster___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  Time = NetworkManager__getTime(0);
  if ( !v3 )
    sub_2213CDC(Time, v6);
  list = this->fields.list;
  v3[1].klass = (Il2CppClass *)Time;
  v8 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v8, v3, Method_MyRoomAddMaster___c__DisplayClass24_0__IsForceDispBgGroupId_b__0__, 0);
  return System_Linq_Enumerable__Any_object__59145568(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v8,
           (const MethodInfo_3867D60 *)Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
}


bool MyRoomAddMaster__IsSpecialServantBackground(
        MyRoomAddMaster_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  int32_t condType; // w8

  if ( (byte_5970DE5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    this = (MyRoomAddMaster_o *)sub_2213A60(&DataManager_TypeInfo);
    byte_5970DE5 = 1;
  }
  if ( !entity )
    goto LABEL_10;
  condType = entity->fields.condType;
  if ( condType == 113 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
    this = (MyRoomAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( this )
      return CommonReleaseMaster__IsContainCondType((CommonReleaseMaster_o *)this, entity->fields.condValue, 291, 0);
LABEL_10:
    sub_2213CDC(this, entity);
  }
  return condType == 291;
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
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__10_0; // x24
  Il2CppObject *v17; // x25
  struct MyRoomAddMaster___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w24
  System_Collections_Generic_List_object__o *v26; // x25
  int32_t klass; // w26
  int32_t klass_high; // w27
  int64_t monitor_low; // x28
  int32_t syncRoot_high; // w23
  MyRoomParamsManager_c *v31; // x0
  const MethodInfo *v32; // x3
  int DisplayObjectId; // w0

  if ( (byte_5970DCE & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_2213A60(&MyRoomParamsManager_TypeInfo);
    sub_2213A60(&Method_MyRoomAddMaster___c__ResolveMyRoomBackgroundId_b__10_0__);
    sub_2213A60(&MyRoomAddMaster___c_TypeInfo);
    byte_5970DCE = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    7,
                                                                    groupId,
                                                                    0,
                                                                    -1,
                                                                    v5);
  if ( !EnableEntityList )
    goto LABEL_35;
  size = EnableEntityList->fields._size;
  v13 = EnableEntityList;
  if ( size < 1 )
    goto LABEL_19;
  v14 = MyRoomAddMaster___c_TypeInfo;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v10);
    v14 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__10_0 = (System_Comparison_T__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, v10);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__10_0, v17, Method_MyRoomAddMaster___c__ResolveMyRoomBackgroundId_b__10_0__, 0);
    v18 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v18->__9__10_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__10_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__10_0, (int32_t)_9__10_0, v19, v20, v21, v22, v23, v24);
  }
  System_Collections_Generic_List_object___Sort_71849708(
    v13,
    _9__10_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v25 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v13,
                                                                      v25,
                                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_35;
    v26 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      break;
    if ( size == ++v25 )
      goto LABEL_19;
  }
  syncRoot_high = HIDWORD(v26->fields._syncRoot);
  if ( !syncRoot_high )
  {
LABEL_19:
    if ( warId < 0 )
    {
      if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v10);
      if ( !byte_596B896 )
      {
        sub_2213A60(&MyRoomParamsManager_TypeInfo);
        byte_596B896 = 1;
      }
      v31 = MyRoomParamsManager_TypeInfo;
      if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v10);
        v31 = MyRoomParamsManager_TypeInfo;
      }
      warId = v31->static_fields->_DisplayMyRoomBgWarId_k__BackingField;
    }
    syncRoot_high = MyRoomAddMaster__GetChangeMyRoomBgId(this, groupId, warId, v11);
  }
  if ( checkDiff )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
    EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
    if ( EnableEntityList )
    {
      DisplayObjectId = MyroomAddBgDiffMaster__GetDisplayObjectId(
                          (MyroomAddBgDiffMaster_o *)EnableEntityList,
                          1,
                          syncRoot_high,
                          v32);
      if ( DisplayObjectId > 0 )
        return DisplayObjectId;
      return syncRoot_high;
    }
LABEL_35:
    sub_2213CDC(EnableEntityList, v10);
  }
  return syncRoot_high;
}


int32_t MyRoomAddMaster__ResolveMyRoomBgIdForLeftServant(
        MyRoomAddMaster_o *this,
        bool checkDiff,
        const MethodInfo *method)
{
  __int64 SpecialServantEntity; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  int v8; // w8
  const MethodInfo *v9; // x2
  MyRoomAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970DDD & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5970DDD = 1;
  }
  entity = 0;
  SpecialServantEntity = sub_2213B20(int___TypeInfo, 2);
  if ( !SpecialServantEntity )
    goto LABEL_14;
  v8 = *(_DWORD *)(SpecialServantEntity + 24);
  if ( !v8 || (*(_DWORD *)(SpecialServantEntity + 32) = 7, v8 == 1) )
    sub_2213CE4(SpecialServantEntity);
  *(_DWORD *)(SpecialServantEntity + 36) = 1;
  SpecialServantEntity = MyRoomAddMaster__TryGetSpecialServantEntity(
                           this,
                           &entity,
                           (System_Int32_array *)SpecialServantEntity,
                           v7);
  if ( (SpecialServantEntity & 1) == 0 )
  {
    LODWORD(SpecialServantEntity) = 0;
    return SpecialServantEntity;
  }
  if ( !checkDiff
    || (SpecialServantEntity = MyRoomAddMaster__GetDiffObjectIdForLeftServant(this, 1, v9),
        (int)SpecialServantEntity <= 0) )
  {
    if ( entity )
    {
      LODWORD(SpecialServantEntity) = entity->fields.overwriteId;
      return SpecialServantEntity;
    }
LABEL_14:
    sub_2213CDC(SpecialServantEntity, v6);
  }
  return SpecialServantEntity;
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
  __int64 v12; // x1
  __int64 v13; // x1
  int v14; // w19
  MyRoomParamsManager_c *v15; // x0

  if ( (byte_5970DDC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_MapControl_WarInfo___);
    sub_2213A60(&System_Func_MapControl_WarInfo__bool__TypeInfo);
    sub_2213A60(&MyRoomParamsManager_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&Method_MyRoomAddMaster___c__DisplayClass25_0__ShouldDisplayMainWar_b__0__);
    sub_2213A60(&MyRoomAddMaster___c__DisplayClass25_0_TypeInfo);
    byte_5970DDC = 1;
  }
  v4 = sub_2213CCC(MyRoomAddMaster___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = warId,
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v6);
  }
  WarInfoAll_OrderReverse = QuestTree__GetWarInfoAll_OrderReverse((QuestTree_o *)Instance, 0);
  v8 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_MapControl_WarInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v4,
    Method_MyRoomAddMaster___c__DisplayClass25_0__ShouldDisplayMainWar_b__0__,
    0);
  v9 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
         (System_Collections_Generic_IEnumerable_TSource__o *)WarInfoAll_OrderReverse,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_MapControl_WarInfo___);
  if ( !v9 )
    return 0;
  Status = MapControl_WarInfo__GetStatus((MapControl_WarInfo_o *)v9, 0);
  if ( (unsigned int)(Status - 1) < 2 )
    return 1;
  if ( !MapControl_WarInfo__IsClearedWarStatus(Status, 0) )
    return 0;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v12);
  if ( !MyRoomParamsManager__IsMaxClearedWarIdAtLeastMaxNormalWarId(0) )
    return 0;
  v14 = *(_DWORD *)(v4 + 16);
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v13);
  if ( !byte_596B981 )
  {
    sub_2213A60(&MyRoomParamsManager_TypeInfo);
    byte_596B981 = 1;
  }
  v15 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v13);
    v15 = MyRoomParamsManager_TypeInfo;
  }
  return v14 == v15->static_fields->_MaxClearedWarId_k__BackingField;
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

  if ( (byte_5970DC8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
    byte_5970DC8 = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
}


bool MyRoomAddMaster__TryGetSpecialServantEntity(
        MyRoomAddMaster_o *this,
        MyRoomAddEntity_o **entity,
        System_Int32_array *types,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  int64_t Time; // x0
  __int64 v16; // x1
  MyRoomControl_c *v17; // x0
  int32_t specialServantId; // w24
  int32_t leftServantLimitCount; // w23
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  System_Collections_Generic_IEnumerable_MyRoomAddEntity__o *SpecialServantBackgroundList; // x21
  MyRoomAddMaster___c_c *v23; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__31_0; // x22
  Il2CppObject *v26; // x23
  struct MyRoomAddMaster___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x21
  MyRoomAddMaster___c_c *v36; // x0
  struct MyRoomAddMaster___c_StaticFields *v37; // x8
  System_Func_object__int__o *_9__31_1; // x22
  Il2CppObject *v39; // x23
  struct MyRoomAddMaster___c_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v48; // x21
  MyRoomAddMaster___c_c *v49; // x0
  struct MyRoomAddMaster___c_StaticFields *v50; // x8
  System_Func_object__int__o *_9__31_2; // x22
  Il2CppObject *v52; // x23
  struct MyRoomAddMaster___c_StaticFields *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x21
  System_Func_object__bool__o *v61; // x22
  Il2CppObject *v62; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_IDisposable_c *klass; // x8
  __int64 v70; // x9
  int32_t *p_offset; // x10
  __int64 v72; // x0
  System_IDisposable_o *v74; // [xsp+18h] [xbp-48h]

  if ( (byte_5970DE2 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_MyRoomAddEntity____91752568);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
    sub_2213A60(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_2213A60(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&MyRoomControl_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_MyRoomAddMaster___c__TryGetSpecialServantEntity_b__31_0__);
    sub_2213A60(&Method_MyRoomAddMaster___c__TryGetSpecialServantEntity_b__31_1__);
    sub_2213A60(&Method_MyRoomAddMaster___c__TryGetSpecialServantEntity_b__31_2__);
    sub_2213A60(&Method_MyRoomAddMaster___c__DisplayClass31_0__TryGetSpecialServantEntity_b__3__);
    sub_2213A60(&MyRoomAddMaster___c__DisplayClass31_0_TypeInfo);
    sub_2213A60(&MyRoomAddMaster___c_TypeInfo);
    byte_5970DE2 = 1;
  }
  v7 = (Il2CppObject *)sub_2213CCC(MyRoomAddMaster___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor(v7, 0);
  *entity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)entity, 0, v8, v9, v10, v11, v12, v13);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Time = NetworkManager__getTime(0);
  if ( !v7 )
    sub_2213CDC(Time, v16);
  v7[1].klass = (Il2CppClass *)Time;
  if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v16);
  if ( !byte_5970E07 )
  {
    sub_2213A60(&MyRoomControl_TypeInfo);
    byte_5970E07 = 1;
  }
  v17 = MyRoomControl_TypeInfo;
  if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v16);
    v17 = MyRoomControl_TypeInfo;
  }
  specialServantId = v17->static_fields->specialServantId;
  if ( !byte_5970E08 )
  {
    sub_2213A60(&MyRoomControl_TypeInfo);
    v17 = MyRoomControl_TypeInfo;
    byte_5970E08 = 1;
  }
  if ( !*(&v17->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v17, v16);
    v17 = MyRoomControl_TypeInfo;
  }
  leftServantLimitCount = v17->static_fields->leftServantLimitCount;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v16);
  v74 = CondType__PushFavoriteServantIdOverride(specialServantId, leftServantLimitCount, 0);
  SpecialServantBackgroundList = MyRoomAddMaster__GetSpecialServantBackgroundList(this, types, v20);
  v23 = MyRoomAddMaster___c_TypeInfo;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v21);
    v23 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__31_0 = (System_Func_object__int__o *)static_fields->__9__31_0;
  if ( !_9__31_0 )
  {
    if ( !*(&v23->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v23, v21);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__31_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__31_0, v26, Method_MyRoomAddMaster___c__TryGetSpecialServantEntity_b__31_0__, 0);
    v27 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v27->__9__31_0 = (struct System_Func_MyRoomAddEntity__int__o *)_9__31_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27->__9__31_0, (int32_t)_9__31_0, v28, v29, v30, v31, v32, v33);
  }
  v35 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)SpecialServantBackgroundList,
          (System_Func_TSource__TKey__o *)_9__31_0,
          (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
  v36 = MyRoomAddMaster___c_TypeInfo;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v34);
    v36 = MyRoomAddMaster___c_TypeInfo;
  }
  v37 = v36->static_fields;
  _9__31_1 = (System_Func_object__int__o *)v37->__9__31_1;
  if ( !_9__31_1 )
  {
    if ( !*(&v36->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v36, v34);
      v37 = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)v37->__9;
    _9__31_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__31_1, v39, Method_MyRoomAddMaster___c__TryGetSpecialServantEntity_b__31_1__, 0);
    v40 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v40->__9__31_1 = (struct System_Func_MyRoomAddEntity__int__o *)_9__31_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v40->__9__31_1, (int32_t)_9__31_1, v41, v42, v43, v44, v45, v46);
  }
  v48 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v35,
          (System_Func_TSource__TKey__o *)_9__31_1,
          (const MethodInfo_389B3BC *)Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
  v49 = MyRoomAddMaster___c_TypeInfo;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v47);
    v49 = MyRoomAddMaster___c_TypeInfo;
  }
  v50 = v49->static_fields;
  _9__31_2 = (System_Func_object__int__o *)v50->__9__31_2;
  if ( !_9__31_2 )
  {
    if ( !*(&v49->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v49, v47);
      v50 = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)v50->__9;
    _9__31_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__31_2, v52, Method_MyRoomAddMaster___c__TryGetSpecialServantEntity_b__31_2__, 0);
    v53 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v53->__9__31_2 = (struct System_Func_MyRoomAddEntity__int__o *)_9__31_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v53->__9__31_2, (int32_t)_9__31_2, v54, v55, v56, v57, v58, v59);
  }
  v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                               v48,
                                                               (System_Func_TSource__TKey__o *)_9__31_2,
                                                               (const MethodInfo_389B3BC *)Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
  v61 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v61,
    v7,
    Method_MyRoomAddMaster___c__DisplayClass31_0__TryGetSpecialServantEntity_b__3__,
    0);
  v62 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          v60,
          (System_Func_TSource__bool__o *)v61,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_MyRoomAddEntity____91752568);
  *entity = (MyRoomAddEntity_o *)v62;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)entity, (int32_t)v62, v63, v64, v65, v66, v67, v68);
  if ( v74 )
  {
    klass = v74->klass;
    v70 = *(unsigned __int16 *)&v74->klass->_2.rank;
    if ( *(_WORD *)&v74->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v70;
        p_offset += 4;
        if ( !v70 )
          goto LABEL_41;
      }
      v72 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_41:
      v72 = sub_224BC3C(v74, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IDisposable_o *, _QWORD))v72)(v74, *(_QWORD *)(v72 + 8));
  }
  return *entity != 0;
}


void MyRoomAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970DE6 & 1) == 0 )
  {
    sub_2213A60(&MyRoomAddMaster___c_TypeInfo);
    byte_5970DE6 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(MyRoomAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomAddMaster___c_TypeInfo->static_fields->__9 = (struct MyRoomAddMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MyRoomAddMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBackObjId_b__11_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBgId_b__7_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBgm_b__8_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomFrontObjId_b__9_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return MyRoomAddEntity__GetForceDispBgPriority(entity, (const MethodInfo *)entity);
}


int32_t MyRoomAddMaster___c___GetEventGroupDisplayInfoList_b__15_8(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return MyRoomAddEntity__GetSortPriority(entity, (const MethodInfo *)entity);
}


int32_t MyRoomAddMaster___c___GetEventGroupDisplayInfoList_b__15_9(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.priority;
}


int32_t MyRoomAddMaster___c___GetMainGroupForceDispBgPriority_b__18_1(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return MyRoomAddEntity__GetForceDispBgPriority(entity, (const MethodInfo *)entity);
}


int32_t MyRoomAddMaster___c___GetMainGroupWarIdList_b__20_0(
        MyRoomAddMaster___c_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  if ( !warInfo )
    sub_2213CDC(this, 0);
  return warInfo->fields.warId;
}


int32_t MyRoomAddMaster___c___GetMainGroupWarIdList_b__20_1(
        MyRoomAddMaster___c_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  if ( !warInfo )
    sub_2213CDC(this, 0);
  return MapControl_WarInfo__GetStatus(warInfo, 0);
}


int32_t MyRoomAddMaster___c___GetMainGroupWarIdList_b__20_4(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.priority;
}


int32_t MyRoomAddMaster___c___GetMainGroupWarIdList_b__20_5(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.warId;
}


int32_t MyRoomAddMaster___c___GetMainGroupWarIdList_b__20_6(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.warId;
}


int32_t MyRoomAddMaster___c___GetMyRoomBackObjId_b__12_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetPhotoCampaignBgGroupId_b__23_1(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.groupId;
}


int32_t MyRoomAddMaster___c___ResolveMyRoomBackgroundId_b__10_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___TryGetSpecialServantEntity_b__31_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return MyRoomAddEntity__GetForceDispBgPriority(e, (const MethodInfo *)e);
}


int32_t MyRoomAddMaster___c___TryGetSpecialServantEntity_b__31_1(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return MyRoomAddEntity__GetSortPriority(e, (const MethodInfo *)e);
}


int32_t MyRoomAddMaster___c___TryGetSpecialServantEntity_b__31_2(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return e->fields.priority;
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
  int32_t groupId; // w8
  MyRoomAddMaster___c__DisplayClass15_0_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( !entity )
    goto LABEL_8;
  groupId = entity->fields.groupId;
  if ( groupId )
  {
    v5 = this;
    this = (MyRoomAddMaster___c__DisplayClass15_0_o *)MyRoomAddEntity__IsOpen(entity, this->fields.nowTime, method);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      LOBYTE(groupId) = 0;
      return groupId & 1;
    }
    if ( v5->fields.__4__this )
    {
      LOBYTE(groupId) = !MyRoomAddMaster__IsSpecialServantBackground((MyRoomAddMaster_o *)this, entity, v6);
      return groupId & 1;
    }
LABEL_8:
    sub_2213CDC(this, entity);
  }
  return groupId & 1;
}


System_ValueTuple_int__int__int__long__int__int__o *MyRoomAddMaster___c__DisplayClass15_0___GetEventGroupDisplayInfoList_b__2(
        System_ValueTuple_int__int__int__long__int__int__o *__return_ptr retstr,
        MyRoomAddMaster___c__DisplayClass15_0_o *this,
        System_Linq_IGrouping_int__MyRoomAddEntity__o *group,
        const MethodInfo *method)
{
  MyRoomAddMaster___c_c *v7; // x0
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__15_7; // x22
  Il2CppObject *v10; // x23
  struct MyRoomAddMaster___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v18; // x0
  __int64 v19; // x1
  MyRoomAddMaster___c_c *v20; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x22
  struct MyRoomAddMaster___c_StaticFields *v22; // x9
  System_Func_object__int__o *_9__15_8; // x23
  Il2CppObject *v24; // x24
  struct MyRoomAddMaster___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x0
  __int64 v33; // x1
  MyRoomAddMaster___c_c *v34; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x22
  struct MyRoomAddMaster___c_StaticFields *v36; // x9
  System_Func_object__int__o *_9__15_9; // x23
  Il2CppObject *v38; // x24
  struct MyRoomAddMaster___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  Il2CppObject *object; // x0
  __int64 v48; // x1
  System_Linq_IGrouping_int__MyRoomAddEntity__c *klass; // x8
  MyRoomAddEntity_o *v50; // x22
  int32_t v51; // w23
  __int64 v52; // x9
  int32_t *p_offset; // x10
  __int64 v54; // x0
  int32_t v55; // w21
  const MethodInfo *v56; // x1
  WarMaster_o *warMst; // x8
  int32_t v58; // w20
  int64_t EventStartAt; // x24
  const MethodInfo *v60; // x1
  int32_t SortPriority; // w5
  int32_t priority; // w6
  const MethodInfo_3D29B68 *v63; // x7
  System_ValueTuple_int__int__int__long__int__int__o *result; // x0

  if ( (byte_5970DE7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_First_MyRoomAddEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
    sub_2213A60(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_2213A60(&System_Linq_IGrouping_int__MyRoomAddEntity__TypeInfo);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_7__);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_8__);
    sub_2213A60(&Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_9__);
    sub_2213A60(&MyRoomAddMaster___c_TypeInfo);
    sub_2213A60(&Method_System_ValueTuple_int__int__int__long__int__int___ctor__);
    byte_5970DE7 = 1;
  }
  v7 = MyRoomAddMaster___c_TypeInfo;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, group);
    v7 = MyRoomAddMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__15_7 = (System_Func_object__int__o *)static_fields->__9__15_7;
  if ( !_9__15_7 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, group);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__15_7 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__15_7,
      v10,
      Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_7__,
      0);
    v11 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v11->__9__15_7 = (struct System_Func_MyRoomAddEntity__int__o *)_9__15_7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__15_7, (int32_t)_9__15_7, v12, v13, v14, v15, v16, v17);
  }
  v18 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)group,
          (System_Func_TSource__TKey__o *)_9__15_7,
          (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
  v20 = MyRoomAddMaster___c_TypeInfo;
  v21 = v18;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v19);
    v20 = MyRoomAddMaster___c_TypeInfo;
  }
  v22 = v20->static_fields;
  _9__15_8 = (System_Func_object__int__o *)v22->__9__15_8;
  if ( !_9__15_8 )
  {
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v19);
      v22 = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)v22->__9;
    _9__15_8 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__15_8,
      v24,
      Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_8__,
      0);
    v25 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v25->__9__15_8 = (struct System_Func_MyRoomAddEntity__int__o *)_9__15_8;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__15_8, (int32_t)_9__15_8, v26, v27, v28, v29, v30, v31);
  }
  v32 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v21,
          (System_Func_TSource__TKey__o *)_9__15_8,
          (const MethodInfo_389B3BC *)Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
  v34 = MyRoomAddMaster___c_TypeInfo;
  v35 = v32;
  if ( !*(&MyRoomAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo, v33);
    v34 = MyRoomAddMaster___c_TypeInfo;
  }
  v36 = v34->static_fields;
  _9__15_9 = (System_Func_object__int__o *)v36->__9__15_9;
  if ( !_9__15_9 )
  {
    if ( !*(&v34->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v34, v33);
      v36 = MyRoomAddMaster___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)v36->__9;
    _9__15_9 = (System_Func_object__int__o *)sub_2213CCC(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__15_9,
      v38,
      Method_MyRoomAddMaster___c__GetEventGroupDisplayInfoList_b__15_9__,
      0);
    v39 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v39->__9__15_9 = (struct System_Func_MyRoomAddEntity__int__o *)_9__15_9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v39->__9__15_9, (int32_t)_9__15_9, v40, v41, v42, v43, v44, v45);
  }
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                               v35,
                                                               (System_Func_TSource__TKey__o *)_9__15_9,
                                                               (const MethodInfo_389B3BC *)Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
  object = System_Linq_Enumerable__First_object_(
             v46,
             (const MethodInfo_387FC04 *)Method_System_Linq_Enumerable_First_MyRoomAddEntity___);
  if ( !object || !group )
    goto LABEL_31;
  klass = group->klass;
  v50 = (MyRoomAddEntity_o *)object;
  v51 = (int32_t)object[2].klass;
  v52 = *(unsigned __int16 *)&group->klass->_2.rank;
  if ( *(_WORD *)&group->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__MyRoomAddEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__MyRoomAddEntity__TypeInfo )
    {
      --v52;
      p_offset += 4;
      if ( !v52 )
        goto LABEL_27;
    }
    v54 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_27:
    v54 = sub_224BC3C(group, System_Linq_IGrouping_int__MyRoomAddEntity__TypeInfo, 0);
  }
  v55 = (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__MyRoomAddEntity__o *, _QWORD))v54)(
          group,
          *(_QWORD *)(v54 + 8));
  object = (Il2CppObject *)MyRoomAddEntity__GetForceDispBgPriority(v50, v56);
  warMst = this->fields.warMst;
  if ( !warMst )
LABEL_31:
    sub_2213CDC(object, v48);
  v58 = (int)object;
  EventStartAt = WarMaster__GetEventStartAt(warMst, v50->fields.warId, 0);
  SortPriority = MyRoomAddEntity__GetSortPriority(v50, v60);
  priority = v50->fields.priority;
  v63 = (const MethodInfo_3D29B68 *)Method_System_ValueTuple_int__int__int__long__int__int___ctor__;
  *(_OWORD *)&retstr->fields.Item1 = 0u;
  *(_OWORD *)&retstr->fields.Item4 = 0u;
  System_ValueTuple_int__int__int__long__int__int____ctor(
    retstr,
    v51,
    v55,
    v58,
    EventStartAt,
    SortPriority,
    priority,
    v63);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
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
  System_Collections_Generic_KeyValuePair_int__int__o v7; // x1
  MyRoomAddMaster_o *addedPairSet; // x0
  const MethodInfo *v9; // x3
  int MyRoomBackObjId; // w22
  BalanceConfig_c *v11; // x0
  const MethodInfo *v12; // x4
  System_String_Fields fields; // x23
  __int64 v14; // x8
  unsigned __int64 v15; // x25
  int v16; // w23
  int32_t v17; // w1
  struct System_Collections_Generic_List_KeyValuePair_int__int___o *result; // x21
  struct System_Collections_Generic_KeyValuePair_int__int__array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  System_Collections_Generic_KeyValuePair_int__int__o v22; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o item; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5970DE8 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_KeyValuePair_int__int___Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_KeyValuePair_int__int___Contains__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__);
    byte_5970DE8 = 1;
  }
  item = 0;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    (System_Collections_Generic_KeyValuePair_int__int__o)&item,
    warId,
    groupId,
    (const MethodInfo_439E030 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  addedPairSet = (MyRoomAddMaster_o *)this->fields.addedPairSet;
  if ( !addedPairSet )
    goto LABEL_39;
  if ( !System_Collections_Generic_HashSet_KeyValuePair_int__int____Contains(
          (System_Collections_Generic_HashSet_KeyValuePair_int__int___o *)addedPairSet,
          item,
          (const MethodInfo_42ADF7C *)Method_System_Collections_Generic_HashSet_KeyValuePair_int__int___Contains__) )
  {
    addedPairSet = this->fields.__4__this;
    if ( !addedPairSet )
      goto LABEL_39;
    MyRoomBackObjId = MyRoomAddMaster__GetMyRoomBackObjId(addedPairSet, groupId, warId, v9);
    if ( MyRoomBackObjId < 1 )
      goto LABEL_9;
    addedPairSet = (MyRoomAddMaster_o *)this->fields.addedBgIdSet;
    if ( !addedPairSet )
      goto LABEL_39;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)addedPairSet,
            MyRoomBackObjId,
            (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
LABEL_9:
      v11 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
        v11 = BalanceConfig_TypeInfo;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v11->static_fields->MyRoomMainDiffBgLinkedIds,
             MyRoomBackObjId,
             (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        addedPairSet = (MyRoomAddMaster_o *)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
          addedPairSet = (MyRoomAddMaster_o *)BalanceConfig_TypeInfo;
        }
        fields = addedPairSet[2].fields._MasterName_k__BackingField[58].fields;
        if ( !*(_QWORD *)&fields )
          goto LABEL_39;
        v14 = *(_QWORD *)(*(_QWORD *)&fields + 24LL);
        if ( (int)v14 >= 1 )
        {
          v15 = 0;
          while ( 1 )
          {
            if ( v15 >= (unsigned int)v14 )
              sub_2213CE4(addedPairSet);
            addedPairSet = (MyRoomAddMaster_o *)this->fields.addedBgIdSet;
            if ( !addedPairSet )
              break;
            addedPairSet = (MyRoomAddMaster_o *)System_Collections_Generic_HashSet_int___Contains(
                                                  (System_Collections_Generic_HashSet_int__o *)addedPairSet,
                                                  *(_DWORD *)(*(_QWORD *)&fields + 32LL + 4 * v15),
                                                  (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__);
            if ( ((unsigned __int8)addedPairSet & 1) != 0 )
              return;
            LODWORD(v14) = *(_DWORD *)(*(_QWORD *)&fields + 24LL);
            if ( (__int64)++v15 >= (int)v14 )
              goto LABEL_21;
          }
LABEL_39:
          sub_2213CDC(addedPairSet, v7);
        }
      }
LABEL_21:
      addedPairSet = this->fields.__4__this;
      if ( !addedPairSet )
        goto LABEL_39;
      v16 = MyRoomAddMaster__ResolveMyRoomBackgroundId(addedPairSet, groupId, 1, warId, v12);
      if ( v16 < 1 )
        goto LABEL_25;
      addedPairSet = (MyRoomAddMaster_o *)this->fields.addedBgIdSet;
      if ( !addedPairSet )
        goto LABEL_39;
      if ( !System_Collections_Generic_HashSet_int___Contains(
              (System_Collections_Generic_HashSet_int__o *)addedPairSet,
              v16,
              (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
LABEL_25:
        addedPairSet = (MyRoomAddMaster_o *)this->fields.addedPairSet;
        if ( !addedPairSet )
          goto LABEL_39;
        System_Collections_Generic_HashSet_KeyValuePair_int__int____Add(
          (System_Collections_Generic_HashSet_KeyValuePair_int__int___o *)addedPairSet,
          item,
          (const MethodInfo_42AEA64 *)Method_System_Collections_Generic_HashSet_KeyValuePair_int__int___Add__);
        if ( MyRoomBackObjId < 1 )
        {
          if ( v16 < 1 )
            goto LABEL_33;
          addedPairSet = (MyRoomAddMaster_o *)this->fields.addedBgIdSet;
          if ( !addedPairSet )
            goto LABEL_39;
          v17 = v16;
        }
        else
        {
          addedPairSet = (MyRoomAddMaster_o *)this->fields.addedBgIdSet;
          if ( !addedPairSet )
            goto LABEL_39;
          v17 = MyRoomBackObjId;
        }
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)addedPairSet,
          v17,
          (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
LABEL_33:
        result = this->fields.result;
        v22 = 0;
        System_Collections_Generic_KeyValuePair_int__int____ctor(
          (System_Collections_Generic_KeyValuePair_int__int__o)&v22,
          warId,
          groupId,
          (const MethodInfo_439E030 *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
        if ( !result )
          goto LABEL_39;
        items = result->fields._items;
        v7 = v22;
        v20 = Method_System_Collections_Generic_List_KeyValuePair_int__int___Add__;
        ++result->fields._version;
        if ( !items )
          goto LABEL_39;
        size = result->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_KeyValuePair_int__int____AddWithResize(
            result,
            v7,
            *(const MethodInfo_43B9FB4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          result->fields._size = size + 1;
          items->m_Items[size] = v7;
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
    sub_2213CDC(this, 0);
  return !entity->fields.groupId && MyRoomAddEntity__IsOpen(entity, this->fields.nowTime, method);
}


bool MyRoomAddMaster___c__DisplayClass20_0___GetMainGroupWarIdList_b__3(
        MyRoomAddMaster___c__DisplayClass20_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  MyRoomAddMaster___c__DisplayClass20_0_o *v4; // x20
  __int64 v5; // x1
  int32_t warId; // w21
  MyRoomParamsManager_c *v7; // x0
  int32_t v9; // w19
  MyRoomParamsManager_c *v10; // x0
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_5970DE9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__MapControl_WarInfo_Status__TryGetValue__);
    this = (MyRoomAddMaster___c__DisplayClass20_0_o *)sub_2213A60(&MyRoomParamsManager_TypeInfo);
    byte_5970DE9 = 1;
  }
  value = 0;
  if ( !entity || (this = (MyRoomAddMaster___c__DisplayClass20_0_o *)v4->fields.warStatusMap) == 0 )
    sub_2213CDC(this, entity);
  if ( !System_Collections_Generic_Dictionary_int__Int32Enum___TryGetValue(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
          entity->fields.warId,
          &value,
          (const MethodInfo_3F97938 *)Method_System_Collections_Generic_Dictionary_int__MapControl_WarInfo_Status__TryGetValue__) )
    return 0;
  if ( value == 1 )
    return 1;
  if ( value == 2 )
  {
    warId = entity->fields.warId;
    if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v5);
    if ( !byte_596B982 )
    {
      sub_2213A60(&MyRoomParamsManager_TypeInfo);
      byte_596B982 = 1;
    }
    v7 = MyRoomParamsManager_TypeInfo;
    if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v5);
      v7 = MyRoomParamsManager_TypeInfo;
    }
    if ( warId == v7->static_fields->_MaxNormalWarId_k__BackingField )
      return 1;
  }
  if ( !v4->fields.isValidClearWarId )
    return 0;
  v9 = entity->fields.warId;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v5);
  if ( !byte_596B981 )
  {
    sub_2213A60(&MyRoomParamsManager_TypeInfo);
    byte_596B981 = 1;
  }
  v10 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v5);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  return v9 == v10->static_fields->_MaxClearedWarId_k__BackingField;
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return w->fields.warId == this->fields.warId;
}


void MyRoomAddMaster___c__DisplayClass31_0___ctor(
        MyRoomAddMaster___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass31_0___TryGetSpecialServantEntity_b__3(
        MyRoomAddMaster___c__DisplayClass31_0_o *this,
        MyRoomAddEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return MyRoomAddEntity__IsOpen(e, this->fields.nowTime, method);
}


void MyRoomAddMaster___c__DisplayClass33_0___ctor(
        MyRoomAddMaster___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass33_0___GetSpecialServantBackgroundList_b__0(
        MyRoomAddMaster___c__DisplayClass33_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  MyRoomAddMaster___c__DisplayClass33_0_o *v4; // x20

  v4 = this;
  if ( (byte_5970DEA & 1) == 0 )
  {
    this = (MyRoomAddMaster___c__DisplayClass33_0_o *)sub_2213A60(&Method_System_Array_IndexOf_int___);
    byte_5970DEA = 1;
  }
  if ( !entity )
    sub_2213CDC(this, entity);
  return System_Array__IndexOf_int_(
           v4->fields.types,
           entity->fields.type,
           (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___) >= 0;
}


bool MyRoomAddMaster___c__DisplayClass33_0___GetSpecialServantBackgroundList_b__1(
        MyRoomAddMaster___c__DisplayClass33_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !this->fields.__4__this )
    sub_2213CDC(this, entity);
  return MyRoomAddMaster__IsSpecialServantBackground((MyRoomAddMaster_o *)this, entity, method);
}