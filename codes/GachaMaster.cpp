void __fastcall GachaMaster___ctor(GachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4218070 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__, method);
    byte_4218070 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    31,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaMaster__CheckIsDrawGroupSummon(GachaMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *Master_WarQuestSelectionMaster; // x0
  UserGachaMaster_o *v9; // x21
  const MethodInfo *v10; // x2
  int v11; // w8
  void *v12; // x19
  unsigned int v13; // w20
  __int64 v14; // x8
  __int64 v16; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4218078 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_GachaGroupMaster___, *(_QWORD *)&groupId);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserGachaMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__, v7);
    byte_4218078 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          &entity,
          groupId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v9 = (UserGachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserGachaMaster___);
  Master_WarQuestSelectionMaster = GachaMaster__getGachaDataInGroup(this, groupId, v10);
  if ( !Master_WarQuestSelectionMaster )
LABEL_21:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  v11 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
  v12 = Master_WarQuestSelectionMaster;
  if ( v11 < 1 )
    return 0;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= v11 )
    {
      v16 = sub_B0D9A8(Master_WarQuestSelectionMaster);
      sub_B0D948(v16, 0LL);
    }
    v14 = *((_QWORD *)v12 + (int)v13 + 4);
    if ( !v14 || !v9 )
      goto LABEL_21;
    Master_WarQuestSelectionMaster = (void *)UserGachaMaster__checkIsDrawGroupSummon(v9, *(_DWORD *)(v14 + 16), 0LL);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      return 1;
    v11 = *((_DWORD *)v12 + 6);
    if ( (int)++v13 >= v11 )
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

  if ( (byte_4218077 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_GachaGroupMaster___, drawUsrGachaEnt);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    this = (GachaMaster_o *)sub_B0D8A4(
                              &Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__,
                              v7);
    byte_4218077 = 1;
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
    this = (GachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GachaGroupMaster___);
    if ( this )
    {
      this = (GachaMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                &entity,
                                gachaGroupId,
                                (const MethodInfo_2669C30 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
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
    sub_B0D97C(this);
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
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x19
  GachaMaster_o *ClearNum; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  int max_length; // w8
  int i; // w27
  GachaEntity_o *v29; // x26
  int32_t beforeGachaId; // w3
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x3
  int32_t gachaGroupId; // w1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  signed __int64 size; // x9
  unsigned __int64 j; // x22
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x25
  __int64 v39; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v41; // x9
  __int64 v43; // x0
  UserGachaEntity_o *drawUsrGachaEnt; // [xsp+0h] [xbp-70h] BYREF
  UserGachaEntity_o *v45; // [xsp+8h] [xbp-68h] BYREF
  GachaEntity_o *drawGachaEnt; // [xsp+10h] [xbp-60h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4218076 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_GachaReleaseMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserGachaMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserQuestMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity__Contains__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_GachaEntity__TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v14);
    byte_4218076 = 1;
  }
  entity = 0LL;
  v45 = 0LL;
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
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v17 = (UserGachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserGachaMaster___);
  v18 = (GachaReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  ListValidData = GachaMaster__getListValidData(this, v19);
  entity = 0LL;
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_64;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        v43 = sub_B0D9A8(ClearNum);
        sub_B0D948(v43, 0LL);
      }
      v29 = ListValidData->m_Items[i];
      drawGachaEnt = v29;
      if ( !v29 || !Master_WarQuestSelectionMaster )
        goto LABEL_64;
      ClearNum = (GachaMaster_o *)UserQuestMaster__TryGetEntity(
                                    Master_WarQuestSelectionMaster,
                                    &entity,
                                    UserId,
                                    v29->fields.condQuestId,
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
        if ( (int)ClearNum >= v29->fields.condQuestPhase )
        {
LABEL_20:
          if ( !v18 )
            goto LABEL_64;
          ClearNum = (GachaMaster_o *)GachaReleaseMaster__IsEnableRelease(v18, v29->fields.id, v26);
          if ( ((unsigned __int8)ClearNum & 1) != 0 )
          {
            beforeGachaId = v29->fields.beforeGachaId;
            if ( beforeGachaId <= 0 )
              goto LABEL_37;
            if ( !v17 )
              goto LABEL_64;
            ClearNum = (GachaMaster_o *)UserGachaMaster__TryGetEntity(v17, &v45, UserId, beforeGachaId, 0LL);
            if ( ((unsigned __int8)ClearNum & 1) != 0 )
            {
              ClearNum = (GachaMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                            v29->fields.beforeGachaId,
                                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
              if ( !v45 || !ClearNum )
                goto LABEL_64;
              if ( v45->fields.num >= *(&ClearNum[1].fields._MasterKind_k__BackingField + 1) )
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
                                                v29->fields.id,
                                                0LL);
                  if ( ((unsigned __int8)ClearNum & 1) != 0 )
                  {
                    ClearNum = (GachaMaster_o *)GachaMaster__CheckIsMaxDrawNum(
                                                  ClearNum,
                                                  drawUsrGachaEnt,
                                                  &drawGachaEnt,
                                                  v32);
                    if ( ((unsigned __int8)ClearNum & 1) == 0 )
                      goto LABEL_37;
                  }
                  else
                  {
                    gachaGroupId = v29->fields.gachaGroupId;
                    if ( gachaGroupId < 1
                      || (ClearNum = (GachaMaster_o *)GachaMaster__CheckIsDrawGroupSummon(this, gachaGroupId, v31),
                          ((unsigned __int8)ClearNum & 1) == 0) )
                    {
LABEL_37:
                      if ( !v23 )
                        goto LABEL_64;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v23,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
                        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
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
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !v23 )
LABEL_64:
    sub_B0D97C(ClearNum);
  LODWORD(size) = v23->fields._size;
  if ( (int)size >= 1 )
  {
    for ( j = 0LL; (__int64)j < size; ++j )
    {
      if ( j >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      items = v23->fields._items;
      v38 = items->m_Items[j];
      if ( (int)size < 1 )
      {
        v40 = items->m_Items[j];
        if ( !v34 )
          goto LABEL_64;
      }
      else
      {
        v39 = 0LL;
        v40 = items->m_Items[j];
        do
        {
          if ( (unsigned int)size <= (unsigned int)v39 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          if ( !v38 )
            goto LABEL_64;
          v41 = items->m_Items[v39];
          if ( !v41 )
            goto LABEL_64;
          if ( v38->fields.missionTargetId != v41->fields.missionTargetId
            && HIDWORD(v38[1].klass) == HIDWORD(v41[1].klass) )
          {
            if ( !v40 )
              goto LABEL_64;
            if ( *((_DWORD *)&v40->fields + 5) < *((_DWORD *)&v41->fields + 5) )
              v40 = items->m_Items[v39];
          }
          LODWORD(size) = v23->fields._size;
          ++v39;
        }
        while ( (int)v39 < (int)size );
        if ( !v34 )
          goto LABEL_64;
      }
      ClearNum = (GachaMaster_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v34,
                                    (WarBoardManager_TaskList_o *)v40,
                                    (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_GachaEntity__Contains__);
      if ( ((unsigned __int8)ClearNum & 1) == 0 )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v34,
          v40,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
      size = v23->fields._size;
    }
  }
  return (System_Collections_Generic_List_GachaEntity__o *)v34;
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  GachaMaster___c_c *v17; // x0
  struct GachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v20; // x21
  struct GachaMaster___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4218072 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_GachaEntity___ctor__, method);
    sub_B0D8A4(&System_Comparison_GachaEntity__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity___ctor___67883584, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_GachaEntity__TypeInfo, v8);
    sub_B0D8A4(&Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, v9);
    sub_B0D8A4(&GachaMaster___c_TypeInfo, v10);
    byte_4218072 = 1;
  }
  ListByPayType = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListByPayType(this, 3, v2);
  v14 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                                          v12,
                                                                          v13);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v14,
    ListByPayType,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_GachaEntity___ctor___67883584);
  v17 = GachaMaster___c_TypeInfo;
  if ( (BYTE3(GachaMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    v17 = GachaMaster___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = GachaMaster___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_GachaEntity__TypeInfo,
                                                                          v15,
                                                                          v16);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v20,
      Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_GachaEntity___ctor__);
    v21 = GachaMaster___c_TypeInfo->static_fields;
    v21->__9__2_0 = (struct System_Comparison_GachaEntity__o *)_9__2_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !v14 )
    sub_B0D97C(v17);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v14,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  if ( !v14->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  return (GachaEntity_o *)v14->fields._items->m_Items[0];
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  __int64 v16; // x0
  int max_length; // w8
  unsigned int v18; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x1
  __int64 v21; // x0

  if ( (byte_4218075 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity__Add__, *(_QWORD *)&groupId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity___ctor___67883584, v7);
    sub_B0D8A4(&System_Collections_Generic_List_GachaEntity__TypeInfo, v8);
    byte_4218075 = 1;
  }
  ListValidData = GachaMaster__getListValidData(this, *(const MethodInfo **)&groupId);
  v12 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                                          v10,
                                                                          v11);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)ListValidData,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_GachaEntity___ctor___67883584);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_14;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        v21 = sub_B0D9A8(v16);
        sub_B0D948(v21, 0LL);
      }
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)ListValidData->m_Items[v18];
      if ( !v19 )
        break;
      if ( v19[3].fields.targetId == groupId )
      {
        if ( !v15 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          v19,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
      }
      max_length = ListValidData->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B0D97C(v16);
  }
LABEL_12:
  if ( !v15 )
    goto LABEL_14;
  return (GachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v17; // w23
  int32_t v18; // w24
  __int64 v19; // x10

  if ( (byte_4218071 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&gachaType);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&GachaEntity_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_GachaEntity__TypeInfo, v10);
    sub_B0D8A4(&NetworkManager_TypeInfo, v11);
    byte_4218071 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v17 = (int)list;
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v18,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = *(&GachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v19
          && (GachaEntity_c *)list->klass->_2.typeHierarchy[v19 - 1] == GachaEntity_TypeInfo
          && LODWORD(list[1].fields.items) == gachaType
          && Time >= (__int64)list[3].monitor
          && Time <= (__int64)list[3].fields.items )
        {
          if ( !v15 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
        }
      }
      if ( ++v18 >= v17 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B0D97C(list);
  }
LABEL_19:
  if ( !v15 )
    goto LABEL_21;
  return (GachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v15; // w22
  int32_t v16; // w23
  __int64 v17; // x10

  if ( (byte_4218073 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B0D8A4(&GachaEntity_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_GachaEntity__TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    byte_4218073 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                                                                  v11,
                                                                                                  v12);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v15 = (int)list;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v16,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = *(&GachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (GachaEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] == GachaEntity_TypeInfo
          && Time >= (__int64)list[3].monitor
          && Time <= (__int64)list[3].fields.items )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
        }
      }
      if ( ++v16 >= v15 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B0D97C(list);
  }
LABEL_18:
  if ( !v13 )
    goto LABEL_20;
  return (GachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  GachaMaster___c_c *v16; // x0
  struct GachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v19; // x21
  struct GachaMaster___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  WarBoardAIRoute_RouteData_o *v27; // x8

  if ( (byte_4218074 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_GachaEntity___ctor__, method);
    sub_B0D8A4(&System_Comparison_GachaEntity__TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity___ctor___67883584, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_GachaEntity__TypeInfo, v7);
    sub_B0D8A4(&Method_GachaMaster___c__getVaildPayType_b__4_0__, v8);
    sub_B0D8A4(&GachaMaster___c_TypeInfo, v9);
    byte_4218074 = 1;
  }
  ListValidData = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListValidData(this, method);
  v13 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                                          v11,
                                                                          v12);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v13,
    ListValidData,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_GachaEntity___ctor___67883584);
  v16 = GachaMaster___c_TypeInfo;
  if ( (BYTE3(GachaMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    v16 = GachaMaster___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = GachaMaster___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_GachaEntity__TypeInfo,
                                                                          v14,
                                                                          v15);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v19,
      Method_GachaMaster___c__getVaildPayType_b__4_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_GachaEntity___ctor__);
    v20 = GachaMaster___c_TypeInfo->static_fields;
    v20->__9__4_0 = (struct System_Comparison_GachaEntity__o *)_9__4_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v20->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !v13 )
    goto LABEL_16;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v13,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  if ( !v13->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v27 = v13->fields._items->m_Items[0];
  if ( !v27 )
LABEL_16:
    sub_B0D97C(v16);
  return (int32_t)v27->fields.basePiece;
}


void __fastcall GachaMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct GachaMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4210F6A & 1) == 0 )
  {
    sub_B0D8A4(&GachaMaster___c_TypeInfo, v1);
    byte_4210F6A = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(GachaMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = GachaMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GachaMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall GachaMaster___c___getVaildPayType_b__4_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}