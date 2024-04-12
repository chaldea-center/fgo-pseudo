void __fastcall GachaMaster___ctor(GachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B3B2D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
    byte_42B3B2D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    32,
    (const MethodInfo_23E223C *)Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
}


bool __fastcall GachaMaster__CheckIsDrawGroupSummon(GachaMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  UserGachaMaster_o *v7; // x21
  const MethodInfo *v8; // x2
  int v9; // w8
  void *v10; // x19
  unsigned int v11; // w20
  __int64 v12; // x8
  __int64 v14; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B3B35 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_GachaGroupMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
    byte_42B3B35 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          &entity,
          groupId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v7 = (UserGachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserGachaMaster___);
  Master_WarQuestSelectionMaster = GachaMaster__getGachaDataInGroup(this, groupId, v8);
  if ( !Master_WarQuestSelectionMaster )
LABEL_21:
    sub_B52A5C(Master_WarQuestSelectionMaster, v6);
  v9 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
  v10 = Master_WarQuestSelectionMaster;
  if ( v9 < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= v9 )
    {
      v14 = sub_B52A88(Master_WarQuestSelectionMaster);
      sub_B52A28(v14, 0LL);
    }
    v12 = *((_QWORD *)v10 + (int)v11 + 4);
    if ( !v12 || !v7 )
      goto LABEL_21;
    Master_WarQuestSelectionMaster = (void *)UserGachaMaster__checkIsDrawGroupSummon(v7, *(_DWORD *)(v12 + 16), 0LL);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      return 1;
    v9 = *((_DWORD *)v10 + 6);
    if ( (int)++v11 >= v9 )
      return 0;
  }
}


bool __fastcall GachaMaster__CheckIsMaxDrawNum(
        GachaMaster_o *this,
        UserGachaEntity_o *drawUsrGachaEnt,
        GachaEntity_o **drawGachaEnt,
        const MethodInfo *method)
{
  GachaEntity_o *v6; // x8
  int32_t gachaGroupId; // w20
  int32_t maxDrawNum; // w8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B3B34 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_GachaGroupMaster___);
    sub_B52984(&DataManager_TypeInfo);
    this = (GachaMaster_o *)sub_B52984(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
    byte_42B3B34 = 1;
  }
  entity = 0LL;
  v6 = *drawGachaEnt;
  if ( !*drawGachaEnt )
    goto LABEL_13;
  gachaGroupId = v6->fields.gachaGroupId;
  if ( gachaGroupId >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (GachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_GachaGroupMaster___);
    if ( this )
    {
      this = (GachaMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                &entity,
                                gachaGroupId,
                                (const MethodInfo_23E2334 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
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
    sub_B52A5C(this, drawUsrGachaEnt);
  }
  maxDrawNum = v6->fields.maxDrawNum;
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
  int64_t UserId; // x21
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x22
  UserGachaMaster_o *v5; // x23
  GachaReleaseMaster_o *v6; // x24
  const MethodInfo *v7; // x1
  GachaEntity_array *ListValidData; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  GachaMaster_o *ClearNum; // x0
  __int64 gachaGroupId; // x1
  int max_length; // w8
  int i; // w27
  GachaEntity_o *v14; // x26
  const MethodInfo *v15; // x2
  int32_t beforeGachaId; // w3
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x20
  signed __int64 size; // x9
  unsigned __int64 j; // x22
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x25
  __int64 v24; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x9
  __int64 v28; // x0
  UserGachaEntity_o *drawUsrGachaEnt; // [xsp+0h] [xbp-70h] BYREF
  UserGachaEntity_o *v30; // [xsp+8h] [xbp-68h] BYREF
  GachaEntity_o *drawGachaEnt; // [xsp+10h] [xbp-60h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42B3B33 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_GachaReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42B3B33 = 1;
  }
  entity = 0LL;
  v30 = 0LL;
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
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v5 = (UserGachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserGachaMaster___);
  v6 = (GachaReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  ListValidData = GachaMaster__getListValidData(this, v7);
  entity = 0LL;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_64;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        v28 = sub_B52A88(ClearNum);
        sub_B52A28(v28, 0LL);
      }
      v14 = ListValidData->m_Items[i];
      drawGachaEnt = v14;
      if ( !v14 || !Master_WarQuestSelectionMaster )
        goto LABEL_64;
      ClearNum = (GachaMaster_o *)UserQuestMaster__TryGetEntity(
                                    Master_WarQuestSelectionMaster,
                                    &entity,
                                    UserId,
                                    v14->fields.condQuestId,
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
        if ( (int)ClearNum >= v14->fields.condQuestPhase )
        {
LABEL_20:
          if ( !v6 )
            goto LABEL_64;
          ClearNum = (GachaMaster_o *)GachaReleaseMaster__IsEnableRelease(v6, v14->fields.id, v15);
          if ( ((unsigned __int8)ClearNum & 1) != 0 )
          {
            beforeGachaId = v14->fields.beforeGachaId;
            if ( beforeGachaId <= 0 )
              goto LABEL_37;
            if ( !v5 )
              goto LABEL_64;
            ClearNum = (GachaMaster_o *)UserGachaMaster__TryGetEntity(v5, &v30, UserId, beforeGachaId, 0LL);
            if ( ((unsigned __int8)ClearNum & 1) != 0 )
            {
              ClearNum = (GachaMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                            v14->fields.beforeGachaId,
                                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
              if ( !v30 || !ClearNum )
                goto LABEL_64;
              if ( v30->fields.num >= *(&ClearNum[1].fields._MasterKind_k__BackingField + 1) )
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
                                                v5,
                                                &drawUsrGachaEnt,
                                                UserId,
                                                v14->fields.id,
                                                0LL);
                  if ( ((unsigned __int8)ClearNum & 1) != 0 )
                  {
                    ClearNum = (GachaMaster_o *)GachaMaster__CheckIsMaxDrawNum(
                                                  ClearNum,
                                                  drawUsrGachaEnt,
                                                  &drawGachaEnt,
                                                  v18);
                    if ( ((unsigned __int8)ClearNum & 1) == 0 )
                      goto LABEL_37;
                  }
                  else
                  {
                    gachaGroupId = (unsigned int)v14->fields.gachaGroupId;
                    if ( (int)gachaGroupId < 1
                      || (ClearNum = (GachaMaster_o *)GachaMaster__CheckIsDrawGroupSummon(this, gachaGroupId, v17),
                          ((unsigned __int8)ClearNum & 1) == 0) )
                    {
LABEL_37:
                      if ( !v9 )
                        goto LABEL_64;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v9,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
                        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
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
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !v9 )
LABEL_64:
    sub_B52A5C(ClearNum, gachaGroupId);
  LODWORD(size) = v9->fields._size;
  if ( (int)size >= 1 )
  {
    for ( j = 0LL; (__int64)j < size; ++j )
    {
      if ( j >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      items = v9->fields._items;
      v23 = items->m_Items[j];
      if ( (int)size < 1 )
      {
        v25 = items->m_Items[j];
        if ( !v19 )
          goto LABEL_64;
      }
      else
      {
        v24 = 0LL;
        v25 = items->m_Items[j];
        do
        {
          if ( (unsigned int)size <= (unsigned int)v24 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          if ( !v23 )
            goto LABEL_64;
          v26 = items->m_Items[v24];
          if ( !v26 )
            goto LABEL_64;
          if ( v23->fields.missionTargetId != v26->fields.missionTargetId
            && HIDWORD(v23[1].klass) == HIDWORD(v26[1].klass) )
          {
            if ( !v25 )
              goto LABEL_64;
            if ( *((_DWORD *)&v25->fields + 5) < *((_DWORD *)&v26->fields + 5) )
              v25 = items->m_Items[v24];
          }
          LODWORD(size) = v9->fields._size;
          ++v24;
        }
        while ( (int)v24 < (int)size );
        if ( !v19 )
          goto LABEL_64;
      }
      ClearNum = (GachaMaster_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v19,
                                    (WarBoardManager_TaskList_o *)v25,
                                    (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_GachaEntity__Contains__);
      if ( ((unsigned __int8)ClearNum & 1) == 0 )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v19,
          v25,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
      size = v9->fields._size;
    }
  }
  return (System_Collections_Generic_List_GachaEntity__o *)v19;
}


GachaEntity_o *__fastcall GachaMaster__getFriendPointGachaEntity(GachaMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_IEnumerable_T__o *ListByPayType; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v5; // x19
  __int64 v6; // x1
  GachaMaster___c_c *v7; // x0
  struct GachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v10; // x21
  struct GachaMaster___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42B3B2F & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_GachaEntity___ctor__);
    sub_B52984(&System_Comparison_GachaEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity___ctor___68511448);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_B52984(&Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__);
    sub_B52984(&GachaMaster___c_TypeInfo);
    byte_42B3B2F = 1;
  }
  ListByPayType = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListByPayType(this, 3, v2);
  v5 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v5,
    ListByPayType,
    (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_GachaEntity___ctor___68511448);
  v7 = GachaMaster___c_TypeInfo;
  if ( (BYTE3(GachaMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    v7 = GachaMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = GachaMaster___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v10,
      Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_GachaEntity___ctor__);
    v11 = GachaMaster___c_TypeInfo->static_fields;
    v11->__9__2_0 = (struct System_Comparison_GachaEntity__o *)_9__2_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v11->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v5 )
    sub_B52A5C(v7, v6);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  if ( !v5->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  return (GachaEntity_o *)v5->fields._items->m_Items[0];
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_array *__fastcall GachaMaster__getGachaDataInGroup(
        GachaMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  GachaEntity_array *ListValidData; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v6; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  __int64 v8; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v9; // x1
  int max_length; // w8
  unsigned int v11; // w22
  __int64 v13; // x0

  if ( (byte_42B3B32 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity___ctor___68511448);
    sub_B52984(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    byte_42B3B32 = 1;
  }
  ListValidData = GachaMaster__getListValidData(this, *(const MethodInfo **)&groupId);
  v6 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)ListValidData,
    (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_GachaEntity___ctor___68511448);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_14;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        v13 = sub_B52A88(v8);
        sub_B52A28(v13, 0LL);
      }
      v9 = (EventMissionProgressRequest_Argument_ProgressData_o *)ListValidData->m_Items[v11];
      if ( !v9 )
        break;
      if ( v9[3].fields.targetId == groupId )
      {
        if ( !v7 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          v9,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
      }
      max_length = ListValidData->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B52A5C(v8, v9);
  }
LABEL_12:
  if ( !v7 )
    goto LABEL_14;
  return (GachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


GachaEntity_array *__fastcall GachaMaster__getListByPayType(
        GachaMaster_o *this,
        int32_t gachaType,
        const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v7; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v9; // w23
  int32_t v10; // w24
  __int64 v11; // x10

  if ( (byte_42B3B2E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&GachaEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B3B2E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v9 = (int)list;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v10,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v7 = list;
        v11 = *(&GachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (GachaEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] == GachaEntity_TypeInfo
          && LODWORD(list[1].fields.items) == gachaType
          && Time >= (__int64)list[3].monitor
          && Time <= (__int64)list[3].fields.items )
        {
          if ( !v6 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v6,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B52A5C(list, v7);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_21;
  return (GachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


GachaEntity_array *__fastcall GachaMaster__getListValidData(GachaMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v5; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v7; // w22
  int32_t v8; // w23
  __int64 v9; // x10

  if ( (byte_42B3B30 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&GachaEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B3B30 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v7 = (int)list;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v5 = list;
        v9 = *(&GachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (GachaEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == GachaEntity_TypeInfo
          && Time >= (__int64)list[3].monitor
          && Time <= (__int64)list[3].fields.items )
        {
          if ( !v4 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v4,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
        }
      }
      if ( ++v8 >= v7 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B52A5C(list, v5);
  }
LABEL_18:
  if ( !v4 )
    goto LABEL_20;
  return (GachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


int32_t __fastcall GachaMaster__getVaildPayType(GachaMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *ListValidData; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v4; // x19
  __int64 v5; // x1
  GachaMaster___c_c *v6; // x0
  struct GachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v9; // x21
  struct GachaMaster___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WarBoardAIRoute_RouteData_o *v17; // x8

  if ( (byte_42B3B31 & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_GachaEntity___ctor__);
    sub_B52984(&System_Comparison_GachaEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity___ctor___68511448);
    sub_B52984(&Method_System_Collections_Generic_List_GachaEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_GachaEntity__TypeInfo);
    sub_B52984(&Method_GachaMaster___c__getVaildPayType_b__4_0__);
    sub_B52984(&GachaMaster___c_TypeInfo);
    byte_42B3B31 = 1;
  }
  ListValidData = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListValidData(this, method);
  v4 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v4,
    ListValidData,
    (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_GachaEntity___ctor___68511448);
  v6 = GachaMaster___c_TypeInfo;
  if ( (BYTE3(GachaMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    v6 = GachaMaster___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = GachaMaster___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v9,
      Method_GachaMaster___c__getVaildPayType_b__4_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_GachaEntity___ctor__);
    v10 = GachaMaster___c_TypeInfo->static_fields;
    v10->__9__4_0 = (struct System_Comparison_GachaEntity__o *)_9__4_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v10->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !v4 )
    goto LABEL_16;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v4,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  if ( !v4->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v17 = v4->fields._items->m_Items[0];
  if ( !v17 )
LABEL_16:
    sub_B52A5C(v6, v5);
  return (int32_t)v17->fields.basePiece;
}


void __fastcall GachaMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct GachaMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42ACE36 & 1) == 0 )
  {
    sub_B52984(&GachaMaster___c_TypeInfo);
    byte_42ACE36 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(GachaMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = GachaMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GachaMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall GachaMaster___c___getVaildPayType_b__4_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}