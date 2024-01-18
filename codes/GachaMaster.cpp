void __fastcall GachaMaster___ctor(GachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AFF9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__, method);
    byte_418AFF9 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    31,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaMaster__CheckIsDrawGroupSummon(GachaMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  UserGachaMaster_o *v10; // x21
  const MethodInfo *v11; // x2
  int v12; // w8
  void *v13; // x19
  unsigned int v14; // w20
  __int64 v15; // x8
  __int64 v17; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418B001 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_GachaGroupMaster___, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_DataManager_GetMaster_UserGachaMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__, v7);
    byte_418B001 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          &entity,
          groupId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v10 = (UserGachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserGachaMaster___);
  Master_WarQuestSelectionMaster = GachaMaster__getGachaDataInGroup(this, groupId, v11);
  if ( !Master_WarQuestSelectionMaster )
LABEL_21:
    sub_B2C434(Master_WarQuestSelectionMaster, v9);
  v12 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
  v13 = Master_WarQuestSelectionMaster;
  if ( v12 < 1 )
    return 0;
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= v12 )
    {
      v17 = sub_B2C460(Master_WarQuestSelectionMaster);
      sub_B2C400(v17, 0LL);
    }
    v15 = *((_QWORD *)v13 + (int)v14 + 4);
    if ( !v15 || !v10 )
      goto LABEL_21;
    Master_WarQuestSelectionMaster = (void *)UserGachaMaster__checkIsDrawGroupSummon(v10, *(_DWORD *)(v15 + 16), 0LL);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      return 1;
    v12 = *((_DWORD *)v13 + 6);
    if ( (int)++v14 >= v12 )
      return 0;
  }
}


bool __fastcall GachaMaster__CheckIsMaxDrawNum(
        GachaMaster_o *this,
        UserGachaEntity_o *drawUsrGachaEnt,
        GachaEntity_o **drawGachaEnt,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  GachaEntity_o *v8; // x8
  int32_t gachaGroupId; // w20
  int32_t maxDrawNum; // w8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418B000 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_GachaGroupMaster___, drawUsrGachaEnt);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    this = (GachaMaster_o *)sub_B2C35C(
                              &Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__,
                              v7);
    byte_418B000 = 1;
  }
  entity = 0LL;
  v8 = *drawGachaEnt;
  if ( !*drawGachaEnt )
    goto LABEL_13;
  gachaGroupId = v8->fields.gachaGroupId;
  if ( gachaGroupId >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (GachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GachaGroupMaster___);
    if ( this )
    {
      this = (GachaMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                &entity,
                                gachaGroupId,
                                (const MethodInfo_24E412C *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
        return 0;
      if ( !entity )
        goto LABEL_13;
      maxDrawNum = *(&entity->fields.id + 1);
      if ( maxDrawNum < 1 )
        return 0;
      if ( !drawUsrGachaEnt )
        goto LABEL_13;
      return drawUsrGachaEnt->fields.num >= maxDrawNum;
    }
LABEL_13:
    sub_B2C434(this, drawUsrGachaEnt);
  }
  maxDrawNum = v8->fields.maxDrawNum;
  if ( maxDrawNum < 1 )
    return 0;
  if ( !drawUsrGachaEnt )
    goto LABEL_13;
  return drawUsrGachaEnt->fields.num >= maxDrawNum;
}


System_Collections_Generic_List_GachaEntity__o *__fastcall GachaMaster__GetValidGachaEntityList(
        GachaMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t UserId; // x21
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x22
  UserGachaMaster_o *v17; // x23
  GachaReleaseMaster_o *v18; // x24
  const MethodInfo *v19; // x1
  GachaEntity_array *ListValidData; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x19
  GachaMaster_o *ClearNum; // x0
  __int64 gachaGroupId; // x1
  int max_length; // w8
  int i; // w27
  GachaEntity_o *v26; // x26
  const MethodInfo *v27; // x2
  int32_t beforeGachaId; // w3
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  signed __int64 size; // x9
  unsigned __int64 j; // x22
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x25
  __int64 v36; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x9
  __int64 v40; // x0
  UserGachaEntity_o *drawUsrGachaEnt; // [xsp+0h] [xbp-70h] BYREF
  UserGachaEntity_o *v42; // [xsp+8h] [xbp-68h] BYREF
  GachaEntity_o *drawGachaEnt; // [xsp+10h] [xbp-60h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_418AFFF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_GachaReleaseMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserGachaMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_UserQuestMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity__Contains__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_GachaEntity__TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&TutorialFlag_TypeInfo, v14);
    byte_418AFFF = 1;
  }
  entity = 0LL;
  v42 = 0LL;
  drawGachaEnt = 0LL;
  drawUsrGachaEnt = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserQuestMaster___);
  v17 = (UserGachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserGachaMaster___);
  v18 = (GachaReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  ListValidData = GachaMaster__getListValidData(this, v19);
  entity = 0LL;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_64;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        v40 = sub_B2C460(ClearNum);
        sub_B2C400(v40, 0LL);
      }
      v26 = ListValidData->m_Items[i];
      drawGachaEnt = v26;
      if ( !v26 || !Master_WarQuestSelectionMaster )
        goto LABEL_64;
      ClearNum = (GachaMaster_o *)UserQuestMaster__TryGetEntity(
                                    Master_WarQuestSelectionMaster,
                                    &entity,
                                    UserId,
                                    v26->fields.condQuestId,
                                    0LL);
      if ( ((unsigned __int8)ClearNum & 1) != 0 )
      {
        ClearNum = (GachaMaster_o *)entity;
        if ( !entity )
          goto LABEL_64;
        ClearNum = (GachaMaster_o *)UserQuestEntity__getClearNum(entity, 0LL);
        if ( (int)ClearNum > 0 )
          goto LABEL_20;
        ClearNum = (GachaMaster_o *)entity;
        if ( !entity )
          goto LABEL_64;
        ClearNum = (GachaMaster_o *)UserQuestEntity__getQuestPhase(entity, 0LL);
        if ( (int)ClearNum >= v26->fields.condQuestPhase )
        {
LABEL_20:
          if ( !v18 )
            goto LABEL_64;
          ClearNum = (GachaMaster_o *)GachaReleaseMaster__IsEnableRelease(v18, v26->fields.id, v27);
          if ( ((unsigned __int8)ClearNum & 1) != 0 )
          {
            beforeGachaId = v26->fields.beforeGachaId;
            if ( beforeGachaId <= 0 )
              goto LABEL_37;
            if ( !v17 )
              goto LABEL_64;
            ClearNum = (GachaMaster_o *)UserGachaMaster__TryGetEntity(v17, &v42, UserId, beforeGachaId, 0LL);
            if ( ((unsigned __int8)ClearNum & 1) != 0 )
            {
              ClearNum = (GachaMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                            v26->fields.beforeGachaId,
                                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
              if ( !v42 || !ClearNum )
                goto LABEL_64;
              if ( v42->fields.num >= *(&ClearNum[1].fields._MasterKind_k__BackingField + 1) )
              {
                if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TutorialFlag_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
                }
                ClearNum = (GachaMaster_o *)TutorialFlag__IsProgressDone(2, 0LL);
                if ( ((unsigned __int8)ClearNum & 1) != 0 )
                {
                  ClearNum = (GachaMaster_o *)UserGachaMaster__TryGetEntity(
                                                v17,
                                                &drawUsrGachaEnt,
                                                UserId,
                                                v26->fields.id,
                                                0LL);
                  if ( ((unsigned __int8)ClearNum & 1) != 0 )
                  {
                    ClearNum = (GachaMaster_o *)GachaMaster__CheckIsMaxDrawNum(
                                                  ClearNum,
                                                  drawUsrGachaEnt,
                                                  &drawGachaEnt,
                                                  v30);
                    if ( ((unsigned __int8)ClearNum & 1) == 0 )
                      goto LABEL_37;
                  }
                  else
                  {
                    gachaGroupId = (unsigned int)v26->fields.gachaGroupId;
                    if ( (int)gachaGroupId < 1
                      || (ClearNum = (GachaMaster_o *)GachaMaster__CheckIsDrawGroupSummon(this, gachaGroupId, v29),
                          ((unsigned __int8)ClearNum & 1) == 0) )
                    {
LABEL_37:
                      if ( !v21 )
                        goto LABEL_64;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v21,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
                        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
                    }
                  }
                }
              }
            }
          }
        }
      }
      max_length = ListValidData->max_length;
    }
  }
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !v21 )
LABEL_64:
    sub_B2C434(ClearNum, gachaGroupId);
  LODWORD(size) = v21->fields._size;
  if ( (int)size >= 1 )
  {
    for ( j = 0LL; (__int64)j < size; ++j )
    {
      if ( j >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      items = v21->fields._items;
      v35 = items->m_Items[j];
      if ( (int)size < 1 )
      {
        v37 = items->m_Items[j];
        if ( !v31 )
          goto LABEL_64;
      }
      else
      {
        v36 = 0LL;
        v37 = items->m_Items[j];
        do
        {
          if ( (unsigned int)size <= (unsigned int)v36 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( !v35 )
            goto LABEL_64;
          v38 = items->m_Items[v36];
          if ( !v38 )
            goto LABEL_64;
          if ( v35->fields.missionTargetId != v38->fields.missionTargetId
            && HIDWORD(v35[1].klass) == HIDWORD(v38[1].klass) )
          {
            if ( !v37 )
              goto LABEL_64;
            if ( *((_DWORD *)&v37->fields + 5) < *((_DWORD *)&v38->fields + 5) )
              v37 = items->m_Items[v36];
          }
          LODWORD(size) = v21->fields._size;
          ++v36;
        }
        while ( (int)v36 < (int)size );
        if ( !v31 )
          goto LABEL_64;
      }
      ClearNum = (GachaMaster_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v31,
                                    (WarBoardManager_TaskList_o *)v37,
                                    (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_GachaEntity__Contains__);
      if ( ((unsigned __int8)ClearNum & 1) == 0 )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v31,
          v37,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
      size = v21->fields._size;
    }
  }
  return (System_Collections_Generic_List_GachaEntity__o *)v31;
}


GachaEntity_o *__fastcall GachaMaster__getFriendPointGachaEntity(GachaMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_T__o *ListByPayType; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v12; // x19
  __int64 v13; // x1
  GachaMaster___c_c *v14; // x0
  struct GachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v17; // x21
  struct GachaMaster___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_418AFFB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_GachaEntity___ctor__, method);
    sub_B2C35C(&System_Comparison_GachaEntity__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity___ctor___67310024, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v7);
    sub_B2C35C(&System_Collections_Generic_List_GachaEntity__TypeInfo, v8);
    sub_B2C35C(&Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, v9);
    sub_B2C35C(&GachaMaster___c_TypeInfo, v10);
    byte_418AFFB = 1;
  }
  ListByPayType = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListByPayType(this, 3, v2);
  v12 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v12,
    ListByPayType,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_GachaEntity___ctor___67310024);
  v14 = GachaMaster___c_TypeInfo;
  if ( (BYTE3(GachaMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    v14 = GachaMaster___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = GachaMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v17,
      Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_GachaEntity___ctor__);
    v18 = GachaMaster___c_TypeInfo->static_fields;
    v18->__9__2_0 = (struct System_Comparison_GachaEntity__o *)_9__2_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v18->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !v12 )
    sub_B2C434(v14, v13);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v12,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  if ( !v12->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  return (GachaEntity_o *)v12->fields._items->m_Items[0];
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_array *__fastcall GachaMaster__getGachaDataInGroup(
        GachaMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  GachaEntity_array *ListValidData; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v10; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  __int64 v12; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x1
  int max_length; // w8
  unsigned int v15; // w22
  __int64 v17; // x0

  if ( (byte_418AFFE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity__Add__, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity___ctor___67310024, v7);
    sub_B2C35C(&System_Collections_Generic_List_GachaEntity__TypeInfo, v8);
    byte_418AFFE = 1;
  }
  ListValidData = GachaMaster__getListValidData(this, *(const MethodInfo **)&groupId);
  v10 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)ListValidData,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_GachaEntity___ctor___67310024);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_14;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v17 = sub_B2C460(v12);
        sub_B2C400(v17, 0LL);
      }
      v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)ListValidData->m_Items[v15];
      if ( !v13 )
        break;
      if ( v13[3].fields.targetId == groupId )
      {
        if ( !v11 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v13,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
      }
      max_length = ListValidData->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B2C434(v12, v13);
  }
LABEL_12:
  if ( !v11 )
    goto LABEL_14;
  return (GachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_array *__fastcall GachaMaster__getListByPayType(
        GachaMaster_o *this,
        int32_t gachaType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t Time; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v16; // w23
  int32_t v17; // w24
  __int64 v18; // x10

  if ( (byte_418AFFA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&gachaType);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&GachaEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_GachaEntity__TypeInfo, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    byte_418AFFA = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v16 = (int)list;
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
      if ( list )
      {
        v14 = list;
        v18 = *(&GachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (GachaEntity_c *)list->klass->_2.typeHierarchy[v18 - 1] == GachaEntity_TypeInfo
          && LODWORD(list[1].fields.items) == gachaType
          && Time >= (__int64)list[3].monitor
          && Time <= (__int64)list[3].fields.items )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
        }
      }
      if ( ++v17 >= v16 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B2C434(list, v14);
  }
LABEL_19:
  if ( !v13 )
    goto LABEL_21;
  return (GachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


GachaEntity_array *__fastcall GachaMaster__getListValidData(GachaMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Time; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w23
  __int64 v16; // x10

  if ( (byte_418AFFC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&GachaEntity_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_GachaEntity__TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    byte_418AFFC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v15,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        v16 = *(&GachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (GachaEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == GachaEntity_TypeInfo
          && Time >= (__int64)list[3].monitor
          && Time <= (__int64)list[3].fields.items )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
        }
      }
      if ( ++v15 >= v14 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B2C434(list, v12);
  }
LABEL_18:
  if ( !v11 )
    goto LABEL_20;
  return (GachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


int32_t __fastcall GachaMaster__getVaildPayType(GachaMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_T__o *ListValidData; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v11; // x19
  __int64 v12; // x1
  GachaMaster___c_c *v13; // x0
  struct GachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v16; // x21
  struct GachaMaster___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  WarBoardAIRoute_RouteData_o *v24; // x8

  if ( (byte_418AFFD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_GachaEntity___ctor__, method);
    sub_B2C35C(&System_Comparison_GachaEntity__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity___ctor___67310024, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_GachaEntity__TypeInfo, v7);
    sub_B2C35C(&Method_GachaMaster___c__getVaildPayType_b__4_0__, v8);
    sub_B2C35C(&GachaMaster___c_TypeInfo, v9);
    byte_418AFFD = 1;
  }
  ListValidData = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListValidData(this, method);
  v11 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v11,
    ListValidData,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_GachaEntity___ctor___67310024);
  v13 = GachaMaster___c_TypeInfo;
  if ( (BYTE3(GachaMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    v13 = GachaMaster___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = GachaMaster___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v16,
      Method_GachaMaster___c__getVaildPayType_b__4_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_GachaEntity___ctor__);
    v17 = GachaMaster___c_TypeInfo->static_fields;
    v17->__9__4_0 = (struct System_Comparison_GachaEntity__o *)_9__4_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v17->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v11 )
    goto LABEL_16;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v11,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  if ( !v11->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v24 = v11->fields._items->m_Items[0];
  if ( !v24 )
LABEL_16:
    sub_B2C434(v13, v12);
  return (int32_t)v24->fields.basePiece;
}


void __fastcall GachaMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct GachaMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41841EB & 1) == 0 )
  {
    sub_B2C35C(&GachaMaster___c_TypeInfo, v1);
    byte_41841EB = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(GachaMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = GachaMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GachaMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall GachaMaster___c___ctor(GachaMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall GachaMaster___c___getFriendPointGachaEntity_b__2_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall GachaMaster___c___getVaildPayType_b__4_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}