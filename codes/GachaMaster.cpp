void __fastcall GachaMaster___ctor(GachaMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC61D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EC61D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    32,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
}


bool __fastcall GachaMaster__CheckIsDrawGroupSummon(GachaMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  UserGachaMaster_o *v17; // x21
  const MethodInfo *v18; // x2
  int v19; // w8
  void *v20; // x19
  unsigned int v21; // w20
  __int64 v22; // x8
  __int64 v24; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EC625 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaGroupMaster___, groupId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserGachaMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__, v12, v13, v14);
    byte_42EC625 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          &entity,
          groupId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v17 = (UserGachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserGachaMaster___);
  Master_WarQuestSelectionMaster = GachaMaster__getGachaDataInGroup(this, groupId, v18);
  if ( !Master_WarQuestSelectionMaster )
LABEL_21:
    sub_B5D69C(Master_WarQuestSelectionMaster, v16);
  v19 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
  v20 = Master_WarQuestSelectionMaster;
  if ( v19 < 1 )
    return 0;
  v21 = 0;
  while ( 1 )
  {
    if ( v21 >= v19 )
    {
      v24 = sub_B5D6C8(Master_WarQuestSelectionMaster);
      sub_B5D668(v24, 0LL);
    }
    v22 = *((_QWORD *)v20 + (int)v21 + 4);
    if ( !v22 || !v17 )
      goto LABEL_21;
    Master_WarQuestSelectionMaster = (void *)UserGachaMaster__checkIsDrawGroupSummon(v17, *(_DWORD *)(v22 + 16), 0LL);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      return 1;
    v19 = *((_DWORD *)v20 + 6);
    if ( (int)++v21 >= v19 )
      return 0;
  }
}


bool __fastcall GachaMaster__CheckIsMaxDrawNum(
        GachaMaster_o *this,
        UserGachaEntity_o *drawUsrGachaEnt,
        GachaEntity_o **drawGachaEnt,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  GachaEntity_o *v12; // x8
  int32_t gachaGroupId; // w20
  int32_t maxDrawNum; // w8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EC624 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaGroupMaster___, (_DWORD)drawUsrGachaEnt, (_DWORD)drawGachaEnt, method);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    this = (GachaMaster_o *)sub_B5D5C4(
                              &Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__,
                              v9,
                              v10,
                              v11);
    byte_42EC624 = 1;
  }
  entity = 0LL;
  v12 = *drawGachaEnt;
  if ( !*drawGachaEnt )
    goto LABEL_13;
  gachaGroupId = v12->fields.gachaGroupId;
  if ( gachaGroupId >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (GachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaGroupMaster___);
    if ( this )
    {
      this = (GachaMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                &entity,
                                gachaGroupId,
                                (const MethodInfo_23FAE6C *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__);
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
    sub_B5D69C(this, drawUsrGachaEnt);
  }
  maxDrawNum = v12->fields.maxDrawNum;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int64_t UserId; // x21
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x22
  UserGachaMaster_o *v43; // x23
  GachaReleaseMaster_o *v44; // x24
  const MethodInfo *v45; // x1
  GachaEntity_array *ListValidData; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x19
  GachaMaster_o *ClearNum; // x0
  __int64 gachaGroupId; // x1
  int max_length; // w8
  int i; // w27
  GachaEntity_o *v52; // x26
  const MethodInfo *v53; // x2
  int32_t beforeGachaId; // w3
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x20
  signed __int64 size; // x9
  unsigned __int64 j; // x22
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v61; // x25
  __int64 v62; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v63; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v64; // x9
  __int64 v66; // x0
  UserGachaEntity_o *drawUsrGachaEnt; // [xsp+0h] [xbp-70h] BYREF
  UserGachaEntity_o *v68; // [xsp+8h] [xbp-68h] BYREF
  GachaEntity_o *drawGachaEnt; // [xsp+10h] [xbp-60h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42EC623 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserGachaMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserQuestMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity__Contains__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity__get_Count__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_GachaEntity__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&NetworkManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v38, v39, v40);
    byte_42EC623 = 1;
  }
  entity = 0LL;
  v68 = 0LL;
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
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserQuestMaster___);
  v43 = (UserGachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserGachaMaster___);
  v44 = (GachaReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  ListValidData = GachaMaster__getListValidData(this, v45);
  entity = 0LL;
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_64;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        v66 = sub_B5D6C8(ClearNum);
        sub_B5D668(v66, 0LL);
      }
      v52 = ListValidData->m_Items[i];
      drawGachaEnt = v52;
      if ( !v52 || !Master_WarQuestSelectionMaster )
        goto LABEL_64;
      ClearNum = (GachaMaster_o *)UserQuestMaster__TryGetEntity(
                                    Master_WarQuestSelectionMaster,
                                    &entity,
                                    UserId,
                                    v52->fields.condQuestId,
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
        if ( (int)ClearNum >= v52->fields.condQuestPhase )
        {
LABEL_20:
          if ( !v44 )
            goto LABEL_64;
          ClearNum = (GachaMaster_o *)GachaReleaseMaster__IsEnableRelease(v44, v52->fields.id, v53);
          if ( ((unsigned __int8)ClearNum & 1) != 0 )
          {
            beforeGachaId = v52->fields.beforeGachaId;
            if ( beforeGachaId <= 0 )
              goto LABEL_37;
            if ( !v43 )
              goto LABEL_64;
            ClearNum = (GachaMaster_o *)UserGachaMaster__TryGetEntity(v43, &v68, UserId, beforeGachaId, 0LL);
            if ( ((unsigned __int8)ClearNum & 1) != 0 )
            {
              ClearNum = (GachaMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                            v52->fields.beforeGachaId,
                                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
              if ( !v68 || !ClearNum )
                goto LABEL_64;
              if ( v68->fields.num >= *(&ClearNum[1].fields._MasterKind_k__BackingField + 1) )
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
                                                v43,
                                                &drawUsrGachaEnt,
                                                UserId,
                                                v52->fields.id,
                                                0LL);
                  if ( ((unsigned __int8)ClearNum & 1) != 0 )
                  {
                    ClearNum = (GachaMaster_o *)GachaMaster__CheckIsMaxDrawNum(
                                                  ClearNum,
                                                  drawUsrGachaEnt,
                                                  &drawGachaEnt,
                                                  v56);
                    if ( ((unsigned __int8)ClearNum & 1) == 0 )
                      goto LABEL_37;
                  }
                  else
                  {
                    gachaGroupId = (unsigned int)v52->fields.gachaGroupId;
                    if ( (int)gachaGroupId < 1
                      || (ClearNum = (GachaMaster_o *)GachaMaster__CheckIsDrawGroupSummon(this, gachaGroupId, v55),
                          ((unsigned __int8)ClearNum & 1) == 0) )
                    {
LABEL_37:
                      if ( !v47 )
                        goto LABEL_64;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v47,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
                        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
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
  v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v57,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !v47 )
LABEL_64:
    sub_B5D69C(ClearNum, gachaGroupId);
  LODWORD(size) = v47->fields._size;
  if ( (int)size >= 1 )
  {
    for ( j = 0LL; (__int64)j < size; ++j )
    {
      if ( j >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      items = v47->fields._items;
      v61 = items->m_Items[j];
      if ( (int)size < 1 )
      {
        v63 = items->m_Items[j];
        if ( !v57 )
          goto LABEL_64;
      }
      else
      {
        v62 = 0LL;
        v63 = items->m_Items[j];
        do
        {
          if ( (unsigned int)size <= (unsigned int)v62 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( !v61 )
            goto LABEL_64;
          v64 = items->m_Items[v62];
          if ( !v64 )
            goto LABEL_64;
          if ( v61->fields.missionTargetId != v64->fields.missionTargetId
            && HIDWORD(v61[1].klass) == HIDWORD(v64[1].klass) )
          {
            if ( !v63 )
              goto LABEL_64;
            if ( *((_DWORD *)&v63->fields + 5) < *((_DWORD *)&v64->fields + 5) )
              v63 = items->m_Items[v62];
          }
          LODWORD(size) = v47->fields._size;
          ++v62;
        }
        while ( (int)v62 < (int)size );
        if ( !v57 )
          goto LABEL_64;
      }
      ClearNum = (GachaMaster_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v57,
                                    (WarBoardManager_TaskList_o *)v63,
                                    (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_GachaEntity__Contains__);
      if ( ((unsigned __int8)ClearNum & 1) == 0 )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v57,
          v63,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
      size = v47->fields._size;
    }
  }
  return (System_Collections_Generic_List_GachaEntity__o *)v57;
}


GachaEntity_o *__fastcall GachaMaster__getFriendPointGachaEntity(GachaMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_IEnumerable_T__o *ListByPayType; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v27; // x19
  __int64 v28; // x1
  GachaMaster___c_c *v29; // x0
  struct GachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v32; // x21
  struct GachaMaster___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42EC61F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_GachaEntity___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Comparison_GachaEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity___ctor___68738832, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_GachaEntity__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, v20, v21, v22);
    sub_B5D5C4(&GachaMaster___c_TypeInfo, v23, v24, v25);
    byte_42EC61F = 1;
  }
  ListByPayType = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListByPayType(this, 3, v2);
  v27 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v27,
    ListByPayType,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_GachaEntity___ctor___68738832);
  v29 = GachaMaster___c_TypeInfo;
  if ( (BYTE3(GachaMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    v29 = GachaMaster___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = GachaMaster___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v32,
      Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_GachaEntity___ctor__);
    v33 = GachaMaster___c_TypeInfo->static_fields;
    v33->__9__2_0 = (struct System_Comparison_GachaEntity__o *)_9__2_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v33->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !v27 )
    sub_B5D69C(v29, v28);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v27,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  if ( !v27->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return (GachaEntity_o *)v27->fields._items->m_Items[0];
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_array *__fastcall GachaMaster__getGachaDataInGroup(
        GachaMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  GachaEntity_array *ListValidData; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v19; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x21
  __int64 v21; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x1
  int max_length; // w8
  unsigned int v24; // w22
  __int64 v26; // x0

  if ( (byte_42EC622 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity__Add__, groupId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity___ctor___68738832, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_GachaEntity__TypeInfo, v15, v16, v17);
    byte_42EC622 = 1;
  }
  ListValidData = GachaMaster__getListValidData(this, *(const MethodInfo **)&groupId);
  v19 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)ListValidData,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_GachaEntity___ctor___68738832);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_14;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= max_length )
      {
        v26 = sub_B5D6C8(v21);
        sub_B5D668(v26, 0LL);
      }
      v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)ListValidData->m_Items[v24];
      if ( !v22 )
        break;
      if ( v22[3].fields.targetId == groupId )
      {
        if ( !v20 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          v22,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
      }
      max_length = ListValidData->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B5D69C(v21, v22);
  }
LABEL_12:
  if ( !v20 )
    goto LABEL_14;
  return (GachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


GachaEntity_array *__fastcall GachaMaster__getListByPayType(
        GachaMaster_o *this,
        int32_t gachaType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int64_t Time; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v29; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v31; // w23
  int32_t v32; // w24
  __int64 v33; // x10

  if ( (byte_42EC61E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      gachaType,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&GachaEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_GachaEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&NetworkManager_TypeInfo, v24, v25, v26);
    byte_42EC61E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v31 = (int)list;
    v32 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v32,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v29 = list;
        v33 = *(&GachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v33
          && (GachaEntity_c *)list->klass->_2.typeHierarchy[v33 - 1] == GachaEntity_TypeInfo
          && LODWORD(list[1].fields.items) == gachaType
          && Time >= (__int64)list[3].monitor
          && Time <= (__int64)list[3].fields.items )
        {
          if ( !v28 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v28,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
        }
      }
      if ( ++v32 >= v31 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B5D69C(list, v29);
  }
LABEL_19:
  if ( !v28 )
    goto LABEL_21;
  return (GachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v28,
                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


GachaEntity_array *__fastcall GachaMaster__getListValidData(GachaMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int64_t Time; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v30; // w22
  int32_t v31; // w23
  __int64 v32; // x10

  if ( (byte_42EC620 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&GachaEntity_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_GachaEntity__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&NetworkManager_TypeInfo, v23, v24, v25);
    byte_42EC620 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v30 = (int)list;
    v31 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v31,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v28 = list;
        v32 = *(&GachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v32
          && (GachaEntity_c *)list->klass->_2.typeHierarchy[v32 - 1] == GachaEntity_TypeInfo
          && Time >= (__int64)list[3].monitor
          && Time <= (__int64)list[3].fields.items )
        {
          if ( !v27 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v27,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
        }
      }
      if ( ++v31 >= v30 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B5D69C(list, v28);
  }
LABEL_18:
  if ( !v27 )
    goto LABEL_20;
  return (GachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


int32_t __fastcall GachaMaster__getVaildPayType(GachaMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_IEnumerable_T__o *ListValidData; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v27; // x19
  __int64 v28; // x1
  GachaMaster___c_c *v29; // x0
  struct GachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v32; // x21
  struct GachaMaster___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  WarBoardAIRoute_RouteData_o *v40; // x8

  if ( (byte_42EC621 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_GachaEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_GachaEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity___ctor___68738832, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_GachaEntity__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_GachaMaster___c__getVaildPayType_b__4_0__, v20, v21, v22);
    sub_B5D5C4(&GachaMaster___c_TypeInfo, v23, v24, v25);
    byte_42EC621 = 1;
  }
  ListValidData = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListValidData(this, method);
  v27 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_GachaEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v27,
    ListValidData,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_GachaEntity___ctor___68738832);
  v29 = GachaMaster___c_TypeInfo;
  if ( (BYTE3(GachaMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    v29 = GachaMaster___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = GachaMaster___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_GachaEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v32,
      Method_GachaMaster___c__getVaildPayType_b__4_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_GachaEntity___ctor__);
    v33 = GachaMaster___c_TypeInfo->static_fields;
    v33->__9__4_0 = (struct System_Comparison_GachaEntity__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v33->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !v27 )
    goto LABEL_16;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v27,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  if ( !v27->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v40 = v27->fields._items->m_Items[0];
  if ( !v40 )
LABEL_16:
    sub_B5D69C(v29, v28);
  return (int32_t)v40->fields.basePiece;
}


void __fastcall GachaMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct GachaMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E56EE & 1) == 0 )
  {
    sub_B5D5C4(&GachaMaster___c_TypeInfo, v1, v2, v3);
    byte_42E56EE = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(GachaMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = GachaMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GachaMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall GachaMaster___c___getVaildPayType_b__4_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}