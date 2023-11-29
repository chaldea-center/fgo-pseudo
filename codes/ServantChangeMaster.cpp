void __fastcall ServantChangeMaster___ctor(ServantChangeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F94C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__, method);
    byte_40F94C5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    189,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_array *__fastcall ServantChangeMaster__GetAllChanged(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantChangeEntity_array *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x22
  il2cpp_array_size_t v18; // w23
  ServantChangeEntity_o *v19; // x21
  const MethodInfo *v20; // x1

  if ( (byte_40F94C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v7);
    byte_40F94C9 = 1;
  }
  v8 = ServantChangeMaster__GetEntityList(this, svtId, method);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantChangeEntity__TypeInfo,
                                                                                                  v9,
                                                                                                  v10,
                                                                                                  v11,
                                                                                                  v12);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  if ( !v8 )
    goto LABEL_16;
  v17 = *(_QWORD *)&v8->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = v8->m_Items[v18];
      if ( !v19 )
        break;
      if ( (v19->fields.flag & 2) == 0 )
      {
        if ( !v13 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
        v14 = ServantChangeEntity__IsEnable(v19, v20);
        if ( v14 )
          return (ServantChangeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
      }
      if ( (int)++v18 >= (int)v17 )
        goto LABEL_13;
      if ( v18 >= v8->max_length )
      {
        sub_B17100(v14, v15, v16);
        sub_B170A0();
      }
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_13:
  if ( !v13 )
    goto LABEL_16;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v13,
    0LL,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
  return (ServantChangeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
}


ServantChangeEntity_o *__fastcall ServantChangeMaster__GetEnableEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_array *v3; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x21
  ServantChangeEntity_array *v6; // x19
  il2cpp_array_size_t v7; // w22
  Il2CppClass **v8; // x8
  ServantChangeEntity_o *v9; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x2

  v3 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v3 )
    goto LABEL_11;
  v5 = *(_QWORD *)&v3->max_length;
  v6 = v3;
  if ( (int)v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = &v6->obj.klass + (int)v7;
      v9 = (ServantChangeEntity_o *)v8[4];
      if ( !v9 )
        break;
      v10 = ServantChangeEntity__IsEnable((ServantChangeEntity_o *)v8[4], v4);
      if ( v10 )
        return v9;
      if ( (int)++v7 >= (int)v5 )
        return 0LL;
      if ( v7 >= v6->max_length )
      {
        sub_B17100(v10, v4, v11);
        sub_B170A0();
      }
    }
LABEL_11:
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantChangeMaster__GetEnableSvtVoiceList(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ServantChangeEntity_array *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  int max_length; // w25
  ServantChangeEntity_array *v18; // x21
  System_Collections_Generic_List_int__o *v19; // x20
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  int v23; // w24
  il2cpp_array_size_t v24; // w26
  ServantChangeEntity_o *v25; // x22
  int32_t svtVoiceId; // w23
  char v27; // w27
  const MethodInfo *v28; // x1
  int v29; // w19
  int v30; // w8
  System_Int32_array *v31; // x21
  int v32; // w8
  int v33; // w19
  int v34; // w9
  int32_t v36; // [xsp+Ch] [xbp-A4h]
  _BYTE v37[40]; // [xsp+10h] [xbp-A0h] BYREF
  int v38; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v39; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_40F94CB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_40F94CB = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v38 = 0;
  v12 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v12 )
    goto LABEL_37;
  v36 = svtId;
  max_length = v12->max_length;
  v18 = v12;
  v19 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v13,
                                                    v14,
                                                    v15,
                                                    v16);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( max_length >= 1 )
  {
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= v18->max_length )
      {
        sub_B17100(v20, v21, v22);
        sub_B170A0();
      }
      v25 = v18->m_Items[v24];
      if ( !v25 || !v19 )
        break;
      svtVoiceId = v25->fields.svtVoiceId;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v37,
        v19,
        (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v39 = *(System_Collections_Generic_List_Enumerator_int__o *)v37;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v39,
                (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( svtVoiceId == v39.fields.current )
        {
          v27 = 1;
          goto LABEL_14;
        }
      }
      v27 = 0;
LABEL_14:
      *(_DWORD *)&v37[4 * v23 + 24] = 94;
      v23 = ++v38;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v39,
        (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v29 = v23;
      if ( v23 )
      {
        v30 = v23 - 1;
        if ( *(_DWORD *)&v37[4 * v23 + 20] == 94 )
        {
          v29 = --v23;
          v38 = v30;
        }
      }
      if ( (v27 & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v19,
          svtVoiceId,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      v20 = ServantChangeEntity__IsEnable(v25, v28);
      if ( v20 )
        return System_Collections_Generic_List_int___ToArray(
                 v19,
                 (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( (int)++v24 >= max_length )
        goto LABEL_23;
    }
LABEL_37:
    sub_B170D4();
  }
  v29 = 0;
LABEL_23:
  if ( !v19 )
    goto LABEL_37;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v37,
    v19,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v39 = *(System_Collections_Generic_List_Enumerator_int__o *)v37;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v39,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( v39.fields.current == v36 )
    {
      v31 = System_Collections_Generic_List_int___ToArray(
              v19,
              (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
      v32 = 203;
      goto LABEL_29;
    }
  }
  v31 = 0LL;
  v32 = 189;
LABEL_29:
  *(_DWORD *)&v37[4 * v29 + 24] = v32;
  v33 = ++v38;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v39,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v33 )
  {
    v34 = *(_DWORD *)&v37[4 * v33 + 20];
    if ( v34 == 189 )
    {
      v38 = v33 - 1;
    }
    else if ( v34 == 203 )
    {
      v38 = v33 - 1;
      return v31;
    }
  }
  System_Collections_Generic_List_int___Add(
    v19,
    v36,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_o *__fastcall ServantChangeMaster__GetEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *v7; // x1

  if ( (byte_40F94C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__, *(_QWORD *)&svtId);
    byte_40F94C3 = 1;
  }
  v7 = ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&priority);
  return (ServantChangeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    v7,
                                    (const MethodInfo_266F7D8 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_array *__fastcall ServantChangeMaster__GetEntityList(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int32_t v25; // w22
  int32_t v26; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v27; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v29; // x10
  ServantChangeMaster___c_c *v30; // x0
  struct ServantChangeMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v33; // x21
  struct ServantChangeMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40F94C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_ServantChangeEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_ServantChangeEntity__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v14);
    sub_B16FFC(&ServantChangeEntity_TypeInfo, v15);
    sub_B16FFC(&Method_ServantChangeMaster___c__GetEntityList_b__3_0__, v16);
    sub_B16FFC(&ServantChangeMaster___c_TypeInfo, v17);
    byte_40F94C6 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantChangeEntity__TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v25 = Count;
    v26 = 0;
    while ( 1 )
    {
      v27 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v27 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v27,
                                                                      v26,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v21 = Item;
      v29 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (ServantChangeEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] != ServantChangeEntity_TypeInfo )
      {
        break;
      }
      if ( Item->fields.missionTargetId == svtId )
      {
        if ( !v18 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
      }
      if ( ++v26 >= v25 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_14:
  v30 = ServantChangeMaster___c_TypeInfo;
  if ( (BYTE3(ServantChangeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantChangeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantChangeMaster___c_TypeInfo);
    v30 = ServantChangeMaster___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = ServantChangeMaster___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_ServantChangeEntity__TypeInfo,
                                                                          v21,
                                                                          v22,
                                                                          v23,
                                                                          v24);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v33,
      Method_ServantChangeMaster___c__GetEntityList_b__3_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantChangeEntity___ctor__);
    v34 = ServantChangeMaster___c_TypeInfo->static_fields;
    v34->__9__3_0 = (struct System_Comparison_ServantChangeEntity__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v34->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !v18 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
  return (ServantChangeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
}


ServantChangeEntity_o *__fastcall ServantChangeMaster__GetHiddenEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_array *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x8

  v3 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v3 )
    sub_B170D4();
  v6 = *(_QWORD *)&v3->max_length;
  if ( !v6 )
    return 0LL;
  if ( !(_DWORD)v6 )
  {
    sub_B17100(v3, v4, v5);
    sub_B170A0();
  }
  return v3->m_Items[0];
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_array_array *__fastcall ServantChangeMaster__GetNameChangeByQuestClear(
        ServantChangeMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        bool isQuestClear,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_ServantChangeEntity__o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int size; // w26
  System_Collections_Generic_List_ServantChangeEntity__o *v22; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x22
  const MethodInfo *v24; // x1
  __int64 v25; // x23
  int v26; // w27
  bool v27; // w28
  int v28; // w19
  int v29; // w25
  ServantChangeEntity_o *v30; // x24
  int32_t svtId; // w8
  int condType; // w8
  System_Int32_array *QuestIdListByGroupId; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int max_length; // w8
  int v43; // w9
  __int64 v44; // x2
  __int64 v45; // x0
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_40F94C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantChangeEntity____Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_List_ServantChangeEntity____TypeInfo, v13);
    sub_B16FFC(&ServantChangeEntity___TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40F94C8 = 1;
  }
  v16 = ServantChangeMaster__getSortedEntityList(this, *(const MethodInfo **)&questId);
  if ( !v16 )
    goto LABEL_51;
  size = v16->fields._size;
  v22 = v16;
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantChangeEntity____TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__);
  if ( size >= 1 )
  {
    v25 = 0LL;
    v26 = 0;
    v27 = !isQuestClear;
    v28 = -1;
    v29 = -1;
    do
    {
      if ( v22->fields._size <= (unsigned int)v26 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = v22->fields._items->m_Items[v26];
      if ( !v30 )
        goto LABEL_51;
      svtId = v30->fields.svtId;
      if ( v29 != svtId && (v30->fields.flag & 2) == 0 )
      {
        if ( v28 < 1 )
          goto LABEL_12;
        if ( v28 != svtId )
        {
          v28 = -1;
LABEL_12:
          condType = v30->fields.condType;
          if ( condType <= 36 )
          {
            if ( condType == 26 )
            {
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_51;
              MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_51;
              QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                       MasterData_WarQuestSelectionMaster,
                                       v30->fields.condTargetId,
                                       2,
                                       0LL);
              if ( !QuestIdListByGroupId )
                goto LABEL_51;
              max_length = QuestIdListByGroupId->max_length;
              if ( max_length >= 1 )
              {
                v43 = 0;
                while ( v43 < (unsigned int)max_length )
                {
                  if ( QuestIdListByGroupId->m_Items[v43 + 1] == questId )
                    goto LABEL_40;
                  ++v43;
                  v29 = -1;
                  if ( v43 >= max_length )
                    goto LABEL_48;
                }
LABEL_52:
                sub_B17100(QuestIdListByGroupId, v24, v34);
                sub_B170A0();
              }
              goto LABEL_47;
            }
            if ( condType == 36 && v30->fields.condTargetId == questId && !v27 )
              goto LABEL_40;
          }
          else
          {
            if ( (unsigned int)(condType - 42) >= 4 )
            {
              if ( condType != 47 || v30->fields.condTargetId != questId || v30->fields.condValue != questPhase )
                goto LABEL_47;
LABEL_40:
              if ( !ServantChangeEntity__IsEnable(v30, v24) )
              {
                v28 = v30->fields.svtId;
                v45 = sub_B17014(ServantChangeEntity___TypeInfo, 2LL, v44);
                if ( !v45 )
                  goto LABEL_51;
                v25 = v45;
                QuestIdListByGroupId = (System_Int32_array *)sub_B170BC(v30, *(_QWORD *)(*(_QWORD *)v45 + 64LL));
                if ( !QuestIdListByGroupId )
                {
LABEL_53:
                  sub_B170F4(QuestIdListByGroupId);
                  sub_B170A0();
                }
                if ( !*(_DWORD *)(v25 + 24) )
                  goto LABEL_52;
                *(_QWORD *)(v25 + 32) = v30;
                sub_B16F98(
                  (BattleServantConfConponent_o *)(v25 + 32),
                  (System_Int32_array **)v30,
                  v34,
                  v46,
                  v47,
                  v48,
                  v49,
                  v50);
                if ( *(_DWORD *)(v25 + 24) <= 1u )
                  goto LABEL_52;
                *(_QWORD *)(v25 + 40) = 0LL;
                sub_B16F98((BattleServantConfConponent_o *)(v25 + 40), 0LL, v34, v51, v52, v53, v54, v55);
                if ( !v23 )
                  goto LABEL_51;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v23,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantChangeEntity____Add__);
              }
              goto LABEL_47;
            }
            if ( v30->fields.condTargetId == questId )
              goto LABEL_40;
          }
LABEL_47:
          v29 = -1;
          goto LABEL_48;
        }
        if ( !ServantChangeEntity__IsEnable(v30, v24) )
          goto LABEL_47;
        if ( !v25 )
          goto LABEL_51;
        QuestIdListByGroupId = (System_Int32_array *)sub_B170BC(v30, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
        if ( !QuestIdListByGroupId )
          goto LABEL_53;
        if ( *(_DWORD *)(v25 + 24) <= 1u )
          goto LABEL_52;
        *(_QWORD *)(v25 + 40) = v30;
        sub_B16F98((BattleServantConfConponent_o *)(v25 + 40), (System_Int32_array **)v30, v34, v35, v36, v37, v38, v39);
        v29 = v30->fields.svtId;
        v28 = -1;
      }
LABEL_48:
      ++v26;
    }
    while ( v26 < size );
  }
  if ( !v23 )
LABEL_51:
    sub_B170D4();
  return (ServantChangeEntity_array_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__);
}


bool __fastcall ServantChangeMaster__IsNameTrue(ServantChangeMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  ServantChangeEntity_o *v3; // x0
  _BOOL4 v4; // w0

  v3 = ServantChangeMaster__GetEnableEntity(this, svtId, method);
  if ( v3 )
    return (LOBYTE(v3->fields.flag) >> 3) & 1;
  else
    LOBYTE(v4) = 1;
  return v4;
}


void __fastcall ServantChangeMaster__MargeServantVoiceId(
        ServantChangeMaster_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *isVoiceList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v15; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v16; // x8
  int32_t klass; // w23

  if ( (byte_40F94CC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isVoiceList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    sub_B16FFC(&ServantChangeEntity_TypeInfo, v8);
    byte_40F94CC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      v13 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v13 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v13,
               v12,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v15 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (ServantChangeEntity_c *)Item->klass->_2.typeHierarchy[v15 - 1] != ServantChangeEntity_TypeInfo )
      {
        break;
      }
      if ( (ServantChangeEntity_c *)Item->klass->_2.typeHierarchy[*(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1) - 1] == ServantChangeEntity_TypeInfo )
        v16 = Item;
      else
        v16 = 0LL;
      klass = (int32_t)v16[4].klass;
      if ( klass >= 1 )
      {
        if ( !isVoiceList )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                klass,
                (const MethodInfo_2DD58F4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            klass,
            1,
            (const MethodInfo_2DD5654 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( ++v12 >= v11 )
        return;
    }
LABEL_19:
    sub_B170D4();
  }
}


int32_t __fastcall ServantChangeMaster__SortWithSvtIdAndPriority(
        ServantChangeMaster_o *this,
        ServantChangeEntity_o *a,
        ServantChangeEntity_o *b,
        const MethodInfo *method)
{
  int32_t svtId; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !a || !b )
    sub_B170D4();
  svtId = a->fields.svtId;
  v5 = b->fields.svtId;
  result = svtId - v5;
  if ( svtId == v5 )
    return b->fields.priority - a->fields.priority;
  return result;
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_o *__fastcall ServantChangeMaster__TrueNameEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v9; // x0
  ServantChangeEntity_o *result; // x0
  __int64 v11; // x10

  if ( (byte_40F94C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&ServantChangeEntity_TypeInfo, v6);
    byte_40F94C7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_B170D4();
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v9 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( v9 )
    {
      result = (ServantChangeEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                          v9,
                                          v8,
                                          (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v11 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (ServantChangeEntity_c *)result->klass->_2.typeHierarchy[v11 - 1] == ServantChangeEntity_TypeInfo )
        {
          if ( result->fields.battleSvtId == svtId )
            return result;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v8;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantChangeMaster__TryGetEntity(
        ServantChangeMaster_o *this,
        ServantChangeEntity_o **entity,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *v9; // x2

  if ( (byte_40F94C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__, entity);
    byte_40F94C4 = 1;
  }
  v9 = ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           v9,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_ServantChangeEntity__o *__fastcall ServantChangeMaster__getSortedEntityList(
        ServantChangeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v17; // w21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v22; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v24; // x10
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v25; // x21
  ServantChangeMaster_o *v27; // x0
  int32_t v28; // w1
  const MethodInfo *v29; // x2

  if ( (byte_40F94CA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_System_Comparison_ServantChangeEntity___ctor__, v7);
    sub_B16FFC(&System_Comparison_ServantChangeEntity__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v12);
    sub_B16FFC(&ServantChangeEntity_TypeInfo, v13);
    sub_B16FFC(&Method_ServantChangeMaster__getSortedEntityList_b__11_0__, v14);
    byte_40F94CA = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantChangeEntity__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_12;
  v17 = 0;
  while ( 1 )
  {
    if ( v17 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v25 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                        System_Comparison_ServantChangeEntity__TypeInfo,
                                                                        v18,
                                                                        v19,
                                                                        v20,
                                                                        v21);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        v25,
        (Il2CppObject *)this,
        Method_ServantChangeMaster__getSortedEntityList_b__11_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantChangeEntity___ctor__);
      if ( v15 )
      {
        System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v15,
          (System_Comparison_T__o *)v25,
          (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
        return (System_Collections_Generic_List_ServantChangeEntity__o *)v15;
      }
LABEL_12:
      sub_B170D4();
    }
    v22 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v22 )
      goto LABEL_12;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v22,
             v17,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v15 )
      goto LABEL_12;
    if ( Item )
    {
      v24 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v24
        || (ServantChangeEntity_c *)Item->klass->_2.typeHierarchy[v24 - 1] != ServantChangeEntity_TypeInfo )
      {
        break;
      }
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v15,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v17;
    if ( !list )
      goto LABEL_12;
  }
  v27 = (ServantChangeMaster_o *)sub_B173C8(Item);
  return (System_Collections_Generic_List_ServantChangeEntity__o *)ServantChangeMaster__GetAllChanged(v27, v28, v29);
}


void __fastcall ServantChangeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F760C & 1) == 0 )
  {
    sub_B16FFC(&ServantChangeMaster___c_TypeInfo, v1);
    byte_40F760C = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantChangeMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantChangeMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ServantChangeMaster___c___ctor(ServantChangeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantChangeMaster___c___GetEntityList_b__3_0(
        ServantChangeMaster___c_o *this,
        ServantChangeEntity_o *a,
        ServantChangeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}