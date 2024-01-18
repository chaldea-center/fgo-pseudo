void __fastcall ServantChangeMaster___ctor(ServantChangeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187C34 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__, method);
    byte_4187C34 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    189,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x22
  il2cpp_array_size_t v13; // w23
  ServantChangeEntity_o *v14; // x21
  const MethodInfo *v15; // x1
  __int64 v16; // x0

  if ( (byte_4187C38 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v7);
    byte_4187C38 = 1;
  }
  v8 = ServantChangeMaster__GetEntityList(this, svtId, method);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  if ( !v8 )
    goto LABEL_16;
  v12 = *(_QWORD *)&v8->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = v8->m_Items[v13];
      if ( !v14 )
        break;
      if ( (v14->fields.flag & 2) == 0 )
      {
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
        v10 = ServantChangeEntity__IsEnable(v14, v15);
        if ( v10 )
          return (ServantChangeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
      }
      if ( (int)++v13 >= (int)v12 )
        goto LABEL_13;
      if ( v13 >= v8->max_length )
      {
        v16 = sub_B2C460(v10);
        sub_B2C400(v16, 0LL);
      }
    }
LABEL_16:
    sub_B2C434(v10, v11);
  }
LABEL_13:
  if ( !v9 )
    goto LABEL_16;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v9,
    0LL,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
  return (ServantChangeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
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
  __int64 v10; // x0

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
      v3 = (ServantChangeEntity_array *)ServantChangeEntity__IsEnable((ServantChangeEntity_o *)v8[4], v4);
      if ( ((unsigned __int8)v3 & 1) != 0 )
        return v9;
      if ( (int)++v7 >= (int)v5 )
        return 0LL;
      if ( v7 >= v6->max_length )
      {
        v10 = sub_B2C460(v3);
        sub_B2C400(v10, 0LL);
      }
    }
LABEL_11:
    sub_B2C434(v3, v4);
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
  int max_length; // w25
  ServantChangeEntity_array *v15; // x21
  System_Collections_Generic_List_int__o *v16; // x20
  int v17; // w24
  il2cpp_array_size_t v18; // w26
  ServantChangeEntity_o *v19; // x22
  int32_t svtVoiceId; // w23
  char v21; // w27
  const MethodInfo *v22; // x1
  int v23; // w19
  int v24; // w8
  System_Int32_array *v25; // x21
  int v26; // w8
  int v27; // w19
  int v28; // w9
  __int64 v30; // x0
  int32_t v31; // [xsp+Ch] [xbp-A4h]
  _BYTE v32[40]; // [xsp+10h] [xbp-A0h] BYREF
  int v33; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v34; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4187C3A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4187C3A = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v33 = 0;
  v12 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v12 )
    goto LABEL_37;
  v31 = svtId;
  max_length = v12->max_length;
  v15 = v12;
  v16 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( max_length >= 1 )
  {
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= v15->max_length )
      {
        v30 = sub_B2C460(v12);
        sub_B2C400(v30, 0LL);
      }
      v19 = v15->m_Items[v18];
      if ( !v19 || !v16 )
        break;
      svtVoiceId = v19->fields.svtVoiceId;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v32,
        v16,
        (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v34 = *(System_Collections_Generic_List_Enumerator_int__o *)v32;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v34,
                (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( svtVoiceId == v34.fields.current )
        {
          v21 = 1;
          goto LABEL_14;
        }
      }
      v21 = 0;
LABEL_14:
      *(_DWORD *)&v32[4 * v17 + 24] = 94;
      v17 = ++v33;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v34,
        (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v23 = v17;
      if ( v17 )
      {
        v24 = v17 - 1;
        if ( *(_DWORD *)&v32[4 * v17 + 20] == 94 )
        {
          v23 = --v17;
          v33 = v24;
        }
      }
      if ( (v21 & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v16,
          svtVoiceId,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      v12 = (ServantChangeEntity_array *)ServantChangeEntity__IsEnable(v19, v22);
      if ( ((unsigned __int8)v12 & 1) != 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v16,
                 (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( (int)++v18 >= max_length )
        goto LABEL_23;
    }
LABEL_37:
    sub_B2C434(v12, v13);
  }
  v23 = 0;
LABEL_23:
  if ( !v16 )
    goto LABEL_37;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v32,
    v16,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v34 = *(System_Collections_Generic_List_Enumerator_int__o *)v32;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v34,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( v34.fields.current == v31 )
    {
      v25 = System_Collections_Generic_List_int___ToArray(
              v16,
              (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
      v26 = 203;
      goto LABEL_29;
    }
  }
  v25 = 0LL;
  v26 = 189;
LABEL_29:
  *(_DWORD *)&v32[4 * v23 + 24] = v26;
  v27 = ++v33;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v34,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v27 )
  {
    v28 = *(_DWORD *)&v32[4 * v27 + 20];
    if ( v28 == 189 )
    {
      v33 = v27 - 1;
    }
    else if ( v28 == 203 )
    {
      v33 = v27 - 1;
      return v25;
    }
  }
  System_Collections_Generic_List_int___Add(
    v16,
    v31,
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_o *__fastcall ServantChangeMaster__GetEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *v7; // x1

  if ( (byte_4187C32 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__, *(_QWORD *)&svtId);
    byte_4187C32 = 1;
  }
  v7 = ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&priority);
  return (ServantChangeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    v7,
                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_array *__fastcall ServantChangeMaster__GetEntityList(
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  void *v17; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v20; // w22
  int32_t v21; // w23
  __int64 v22; // x10
  struct ServantChangeMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v25; // x21
  struct ServantChangeMaster___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_4187C35 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_ServantChangeEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_ServantChangeEntity__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v12);
    sub_B2C35C(&ServantChangeEntity_TypeInfo, v13);
    sub_B2C35C(&Method_ServantChangeMaster___c__GetEntityList_b__3_0__, v14);
    sub_B2C35C(&ServantChangeMaster___c_TypeInfo, v15);
    byte_4187C35 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v21,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v17 = list;
      v22 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v22
        || *(ServantChangeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v22 - 8) != ServantChangeEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == svtId )
      {
        if ( !v16 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
      }
      if ( ++v21 >= v20 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B2C434(list, v17);
  }
LABEL_14:
  list = ServantChangeMaster___c_TypeInfo;
  if ( (BYTE3(ServantChangeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantChangeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantChangeMaster___c_TypeInfo);
    list = ServantChangeMaster___c_TypeInfo;
  }
  static_fields = (struct ServantChangeMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = ServantChangeMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantChangeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v25,
      Method_ServantChangeMaster___c__GetEntityList_b__3_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantChangeEntity___ctor__);
    v26 = ServantChangeMaster___c_TypeInfo->static_fields;
    v26->__9__3_0 = (struct System_Comparison_ServantChangeEntity__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v26->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !v16 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
  return (ServantChangeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
}


ServantChangeEntity_o *__fastcall ServantChangeMaster__GetHiddenEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_array *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  __int64 v7; // x0

  v3 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  v5 = *(_QWORD *)&v3->max_length;
  if ( !v5 )
    return 0LL;
  if ( !(_DWORD)v5 )
  {
    v7 = sub_B2C460(v3);
    sub_B2C400(v7, 0LL);
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
  __int64 Instance; // x0
  const MethodInfo *v17; // x1
  int v18; // w26
  __int64 v19; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x22
  __int64 v21; // x23
  unsigned int v22; // w27
  bool v23; // w28
  int v24; // w19
  int v25; // w25
  __int64 v26; // x24
  int v27; // w8
  int v28; // w8
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int v35; // w8
  int v36; // w9
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v50; // x0
  __int64 v51; // x0

  if ( (byte_4187C37 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantChangeEntity____Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Item__, v12);
    sub_B2C35C(&System_Collections_Generic_List_ServantChangeEntity____TypeInfo, v13);
    sub_B2C35C(&ServantChangeEntity___TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4187C37 = 1;
  }
  Instance = (__int64)ServantChangeMaster__getSortedEntityList(this, *(const MethodInfo **)&questId);
  if ( !Instance )
    goto LABEL_51;
  v18 = *(_DWORD *)(Instance + 24);
  v19 = Instance;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantChangeEntity____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__);
  if ( v18 >= 1 )
  {
    v21 = 0LL;
    v22 = 0;
    v23 = !isQuestClear;
    v24 = -1;
    v25 = -1;
    do
    {
      if ( *(_DWORD *)(v19 + 24) <= v22 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v26 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 8LL * (int)v22 + 32);
      if ( !v26 )
        goto LABEL_51;
      v27 = *(_DWORD *)(v26 + 16);
      if ( v25 != v27 && (*(_BYTE *)(v26 + 88) & 2) == 0 )
      {
        if ( v24 < 1 )
          goto LABEL_12;
        if ( v24 != v27 )
        {
          v24 = -1;
LABEL_12:
          v28 = *(_DWORD *)(v26 + 20);
          if ( v28 <= 36 )
          {
            if ( v28 == 26 )
            {
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_51;
              Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
              if ( !Instance )
                goto LABEL_51;
              Instance = (__int64)QuestGroupMaster__GetQuestIdListByGroupId(
                                    (QuestGroupMaster_o *)Instance,
                                    *(_DWORD *)(v26 + 24),
                                    2,
                                    0LL);
              if ( !Instance )
                goto LABEL_51;
              v35 = *(_DWORD *)(Instance + 24);
              if ( v35 >= 1 )
              {
                v36 = 0;
                while ( v36 < (unsigned int)v35 )
                {
                  if ( *(_DWORD *)(Instance + 4LL * v36 + 32) == questId )
                    goto LABEL_40;
                  ++v36;
                  v25 = -1;
                  if ( v36 >= v35 )
                    goto LABEL_48;
                }
LABEL_52:
                v50 = sub_B2C460(Instance);
                sub_B2C400(v50, 0LL);
              }
              goto LABEL_47;
            }
            if ( v28 == 36 && *(_DWORD *)(v26 + 24) == questId && !v23 )
              goto LABEL_40;
          }
          else
          {
            if ( (unsigned int)(v28 - 42) >= 4 )
            {
              if ( v28 != 47 || *(_DWORD *)(v26 + 24) != questId || *(_DWORD *)(v26 + 28) != questPhase )
                goto LABEL_47;
LABEL_40:
              Instance = ServantChangeEntity__IsEnable((ServantChangeEntity_o *)v26, v17);
              if ( (Instance & 1) == 0 )
              {
                v24 = *(_DWORD *)(v26 + 16);
                Instance = sub_B2C374(ServantChangeEntity___TypeInfo, 2LL);
                if ( !Instance )
                  goto LABEL_51;
                v21 = Instance;
                Instance = sub_B2C41C(v26, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
                if ( !Instance )
                {
LABEL_53:
                  v51 = sub_B2C454(Instance);
                  sub_B2C400(v51, 0LL);
                }
                if ( !*(_DWORD *)(v21 + 24) )
                  goto LABEL_52;
                *(_QWORD *)(v21 + 32) = v26;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)(v21 + 32),
                  (System_Int32_array **)v26,
                  v37,
                  v38,
                  v39,
                  v40,
                  v41,
                  v42);
                if ( *(_DWORD *)(v21 + 24) <= 1u )
                  goto LABEL_52;
                *(_QWORD *)(v21 + 40) = 0LL;
                sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 40), 0LL, v43, v44, v45, v46, v47, v48);
                if ( !v20 )
                  goto LABEL_51;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v20,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantChangeEntity____Add__);
              }
              goto LABEL_47;
            }
            if ( *(_DWORD *)(v26 + 24) == questId )
              goto LABEL_40;
          }
LABEL_47:
          v25 = -1;
          continue;
        }
        Instance = ServantChangeEntity__IsEnable((ServantChangeEntity_o *)v26, v17);
        if ( (Instance & 1) == 0 )
          goto LABEL_47;
        if ( !v21 )
          goto LABEL_51;
        Instance = sub_B2C41C(v26, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
        if ( !Instance )
          goto LABEL_53;
        if ( *(_DWORD *)(v21 + 24) <= 1u )
          goto LABEL_52;
        *(_QWORD *)(v21 + 40) = v26;
        sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 40), (System_Int32_array **)v26, v29, v30, v31, v32, v33, v34);
        v25 = *(_DWORD *)(v26 + 16);
        v24 = -1;
      }
LABEL_48:
      ;
    }
    while ( (int)++v22 < v18 );
  }
  if ( !v20 )
LABEL_51:
    sub_B2C434(Instance, v17);
  return (ServantChangeEntity_array_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__);
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
  __int64 v13; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x8
  int32_t klass; // w23

  if ( (byte_4187C3B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isVoiceList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    sub_B2C35C(&ServantChangeEntity_TypeInfo, v8);
    byte_4187C3B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v12,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v13 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v13
        || (ServantChangeEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] != ServantChangeEntity_TypeInfo )
      {
        break;
      }
      if ( (ServantChangeEntity_c *)list->klass->_2.typeHierarchy[*(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1) - 1] == ServantChangeEntity_TypeInfo )
        v14 = list;
      else
        v14 = 0LL;
      klass = (int32_t)v14[2].klass;
      if ( klass >= 1 )
      {
        if ( !isVoiceList )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                klass,
                (const MethodInfo_2E1CE80 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            klass,
            1,
            (const MethodInfo_2E1CBE0 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( ++v12 >= v11 )
        return;
    }
LABEL_19:
    sub_B2C434(list, isVoiceList);
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
    sub_B2C434(this, a);
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
  ServantChangeEntity_o *result; // x0
  int32_t v8; // w21
  __int64 v9; // x10

  if ( (byte_4187C36 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&ServantChangeEntity_TypeInfo, v6);
    byte_4187C36 = 1;
  }
  result = (ServantChangeEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_B2C434(result, *(_QWORD *)&svtId);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                 (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (ServantChangeEntity_o *)this->fields.list;
    if ( result )
    {
      result = (ServantChangeEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                          v8,
                                          (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v9 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (ServantChangeEntity_c *)result->klass->_2.typeHierarchy[v9 - 1] == ServantChangeEntity_TypeInfo )
        {
          if ( result->fields.battleSvtId == svtId )
            return result;
          result = (ServantChangeEntity_o *)this->fields.list;
          ++v8;
          if ( result )
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

  if ( (byte_4187C33 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__, entity);
    byte_4187C33 = 1;
  }
  v9 = ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           v9,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_ServantChangeEntity__o *__fastcall ServantChangeMaster__getSortedEntityList(
        ServantChangeMaster_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v15; // w21
  __int64 v16; // x10
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v17; // x21
  ServantChangeMaster_o *v19; // x0
  int32_t v20; // w1
  const MethodInfo *v21; // x2

  if ( (byte_4187C39 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Comparison_ServantChangeEntity___ctor__, v4);
    sub_B2C35C(&System_Comparison_ServantChangeEntity__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v9);
    sub_B2C35C(&ServantChangeEntity_TypeInfo, v10);
    sub_B2C35C(&Method_ServantChangeMaster__getSortedEntityList_b__11_0__, v11);
    byte_4187C39 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_12;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v17 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantChangeEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        v17,
        (Il2CppObject *)this,
        Method_ServantChangeMaster__getSortedEntityList_b__11_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantChangeEntity___ctor__);
      if ( v12 )
      {
        System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v12,
          (System_Comparison_T__o *)v17,
          (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
        return (System_Collections_Generic_List_ServantChangeEntity__o *)v12;
      }
LABEL_12:
      sub_B2C434(list, v13);
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v15,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v12 )
      goto LABEL_12;
    if ( list )
    {
      v16 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (ServantChangeEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] != ServantChangeEntity_TypeInfo )
      {
        break;
      }
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v12,
      (EventMissionProgressRequest_Argument_ProgressData_o *)list,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v15;
    if ( !list )
      goto LABEL_12;
  }
  v19 = (ServantChangeMaster_o *)sub_B2C728(list);
  return (System_Collections_Generic_List_ServantChangeEntity__o *)ServantChangeMaster__GetAllChanged(v19, v20, v21);
}


void __fastcall ServantChangeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantChangeMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41853C8 & 1) == 0 )
  {
    sub_B2C35C(&ServantChangeMaster___c_TypeInfo, v1);
    byte_41853C8 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantChangeMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantChangeMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantChangeMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}