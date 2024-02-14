void __fastcall ServantChangeMaster___ctor(ServantChangeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215926 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__, method);
    byte_4215926 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    189,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  _BOOL8 v12; // x0
  __int64 v13; // x22
  il2cpp_array_size_t v14; // w23
  ServantChangeEntity_o *v15; // x21
  const MethodInfo *v16; // x1
  __int64 v17; // x0

  if ( (byte_421592A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v7);
    byte_421592A = 1;
  }
  v8 = ServantChangeMaster__GetEntityList(this, svtId, method);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantChangeEntity__TypeInfo,
                                                                                                  v9,
                                                                                                  v10);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  if ( !v8 )
    goto LABEL_16;
  v13 = *(_QWORD *)&v8->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = v8->m_Items[v14];
      if ( !v15 )
        break;
      if ( (v15->fields.flag & 2) == 0 )
      {
        if ( !v11 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
        v12 = ServantChangeEntity__IsEnable(v15, v16);
        if ( v12 )
          return (ServantChangeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
      }
      if ( (int)++v14 >= (int)v13 )
        goto LABEL_13;
      if ( v14 >= v8->max_length )
      {
        v17 = sub_B0D9A8(v12);
        sub_B0D948(v17, 0LL);
      }
    }
LABEL_16:
    sub_B0D97C(v12);
  }
LABEL_13:
  if ( !v11 )
    goto LABEL_16;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    0LL,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
  return (ServantChangeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
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
        v10 = sub_B0D9A8(v3);
        sub_B0D948(v10, 0LL);
      }
    }
LABEL_11:
    sub_B0D97C(v3);
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
  int max_length; // w25
  ServantChangeEntity_array *v16; // x21
  System_Collections_Generic_List_int__o *v17; // x20
  int v18; // w24
  il2cpp_array_size_t v19; // w26
  ServantChangeEntity_o *v20; // x22
  int32_t svtVoiceId; // w23
  char v22; // w27
  const MethodInfo *v23; // x1
  int v24; // w19
  int v25; // w8
  System_Int32_array *v26; // x21
  int v27; // w8
  int v28; // w19
  int v29; // w9
  __int64 v31; // x0
  int32_t v32; // [xsp+Ch] [xbp-A4h]
  _BYTE v33[40]; // [xsp+10h] [xbp-A0h] BYREF
  int v34; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v35; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_421592C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_421592C = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v34 = 0;
  v12 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v12 )
    goto LABEL_37;
  v32 = svtId;
  max_length = v12->max_length;
  v16 = v12;
  v17 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v13, v14);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( max_length >= 1 )
  {
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= v16->max_length )
      {
        v31 = sub_B0D9A8(v12);
        sub_B0D948(v31, 0LL);
      }
      v20 = v16->m_Items[v19];
      if ( !v20 || !v17 )
        break;
      svtVoiceId = v20->fields.svtVoiceId;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v33,
        v17,
        (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v35 = *(System_Collections_Generic_List_Enumerator_int__o *)v33;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v35,
                (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( svtVoiceId == v35.fields.current )
        {
          v22 = 1;
          goto LABEL_14;
        }
      }
      v22 = 0;
LABEL_14:
      *(_DWORD *)&v33[4 * v18 + 24] = 94;
      v18 = ++v34;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v35,
        (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v24 = v18;
      if ( v18 )
      {
        v25 = v18 - 1;
        if ( *(_DWORD *)&v33[4 * v18 + 20] == 94 )
        {
          v24 = --v18;
          v34 = v25;
        }
      }
      if ( (v22 & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v17,
          svtVoiceId,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      v12 = (ServantChangeEntity_array *)ServantChangeEntity__IsEnable(v20, v23);
      if ( ((unsigned __int8)v12 & 1) != 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v17,
                 (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( (int)++v19 >= max_length )
        goto LABEL_23;
    }
LABEL_37:
    sub_B0D97C(v12);
  }
  v24 = 0;
LABEL_23:
  if ( !v17 )
    goto LABEL_37;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v33,
    v17,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v35 = *(System_Collections_Generic_List_Enumerator_int__o *)v33;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v35,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( v35.fields.current == v32 )
    {
      v26 = System_Collections_Generic_List_int___ToArray(
              v17,
              (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
      v27 = 203;
      goto LABEL_29;
    }
  }
  v26 = 0LL;
  v27 = 189;
LABEL_29:
  *(_DWORD *)&v33[4 * v24 + 24] = v27;
  v28 = ++v34;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v35,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v28 )
  {
    v29 = *(_DWORD *)&v33[4 * v28 + 20];
    if ( v29 == 189 )
    {
      v34 = v28 - 1;
    }
    else if ( v29 == 203 )
    {
      v34 = v28 - 1;
      return v26;
    }
  }
  System_Collections_Generic_List_int___Add(
    v17,
    v32,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_o *__fastcall ServantChangeMaster__GetEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *v7; // x1

  if ( (byte_4215924 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__, *(_QWORD *)&svtId);
    byte_4215924 = 1;
  }
  v7 = ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&priority);
  return (ServantChangeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    v7,
                                    (const MethodInfo_266A024 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__);
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
  void *list; // x0
  int32_t Count; // w0
  void *v19; // x1
  __int64 v20; // x2
  int32_t v21; // w22
  int32_t v22; // w23
  __int64 v23; // x10
  struct ServantChangeMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v26; // x21
  struct ServantChangeMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_4215927 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_ServantChangeEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_ServantChangeEntity__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v12);
    sub_B0D8A4(&ServantChangeEntity_TypeInfo, v13);
    sub_B0D8A4(&Method_ServantChangeMaster___c__GetEntityList_b__3_0__, v14);
    sub_B0D8A4(&ServantChangeMaster___c_TypeInfo, v15);
    byte_4215927 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantChangeEntity__TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v22,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v19 = list;
      v23 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v23
        || *(ServantChangeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v23 - 8) != ServantChangeEntity_TypeInfo )
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
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
      }
      if ( ++v22 >= v21 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B0D97C(list);
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
    v26 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_ServantChangeEntity__TypeInfo,
                                                                          v19,
                                                                          v20);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v26,
      Method_ServantChangeMaster___c__GetEntityList_b__3_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_ServantChangeEntity___ctor__);
    v27 = ServantChangeMaster___c_TypeInfo->static_fields;
    v27->__9__3_0 = (struct System_Comparison_ServantChangeEntity__o *)_9__3_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v27->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !v16 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
  return (ServantChangeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
}


ServantChangeEntity_o *__fastcall ServantChangeMaster__GetHiddenEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_array *v3; // x0
  __int64 v4; // x8
  __int64 v6; // x0

  v3 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v3 )
    sub_B0D97C(0LL);
  v4 = *(_QWORD *)&v3->max_length;
  if ( !v4 )
    return 0LL;
  if ( !(_DWORD)v4 )
  {
    v6 = sub_B0D9A8(v3);
    sub_B0D948(v6, 0LL);
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
  __int64 v17; // x1
  __int64 v18; // x2
  int v19; // w26
  __int64 v20; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x22
  const MethodInfo *v22; // x1
  __int64 v23; // x23
  unsigned int v24; // w27
  bool v25; // w28
  int v26; // w19
  int v27; // w25
  __int64 v28; // x24
  int v29; // w8
  int v30; // w8
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int v37; // w8
  int v38; // w9
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v52; // x0
  __int64 v53; // x0

  if ( (byte_4215929 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantChangeEntity____Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Item__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_ServantChangeEntity____TypeInfo, v13);
    sub_B0D8A4(&ServantChangeEntity___TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4215929 = 1;
  }
  Instance = (__int64)ServantChangeMaster__getSortedEntityList(this, *(const MethodInfo **)&questId);
  if ( !Instance )
    goto LABEL_51;
  v19 = *(_DWORD *)(Instance + 24);
  v20 = Instance;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantChangeEntity____TypeInfo,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__);
  if ( v19 >= 1 )
  {
    v23 = 0LL;
    v24 = 0;
    v25 = !isQuestClear;
    v26 = -1;
    v27 = -1;
    do
    {
      if ( *(_DWORD *)(v20 + 24) <= v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v28 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 8LL * (int)v24 + 32);
      if ( !v28 )
        goto LABEL_51;
      v29 = *(_DWORD *)(v28 + 16);
      if ( v27 != v29 && (*(_BYTE *)(v28 + 88) & 2) == 0 )
      {
        if ( v26 < 1 )
          goto LABEL_12;
        if ( v26 != v29 )
        {
          v26 = -1;
LABEL_12:
          v30 = *(_DWORD *)(v28 + 20);
          if ( v30 <= 36 )
          {
            if ( v30 == 26 )
            {
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_51;
              Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
              if ( !Instance )
                goto LABEL_51;
              Instance = (__int64)QuestGroupMaster__GetQuestIdListByGroupId(
                                    (QuestGroupMaster_o *)Instance,
                                    *(_DWORD *)(v28 + 24),
                                    2,
                                    0LL);
              if ( !Instance )
                goto LABEL_51;
              v37 = *(_DWORD *)(Instance + 24);
              if ( v37 >= 1 )
              {
                v38 = 0;
                while ( v38 < (unsigned int)v37 )
                {
                  if ( *(_DWORD *)(Instance + 4LL * v38 + 32) == questId )
                    goto LABEL_40;
                  ++v38;
                  v27 = -1;
                  if ( v38 >= v37 )
                    goto LABEL_48;
                }
LABEL_52:
                v52 = sub_B0D9A8(Instance);
                sub_B0D948(v52, 0LL);
              }
              goto LABEL_47;
            }
            if ( v30 == 36 && *(_DWORD *)(v28 + 24) == questId && !v25 )
              goto LABEL_40;
          }
          else
          {
            if ( (unsigned int)(v30 - 42) >= 4 )
            {
              if ( v30 != 47 || *(_DWORD *)(v28 + 24) != questId || *(_DWORD *)(v28 + 28) != questPhase )
                goto LABEL_47;
LABEL_40:
              Instance = ServantChangeEntity__IsEnable((ServantChangeEntity_o *)v28, v22);
              if ( (Instance & 1) == 0 )
              {
                v26 = *(_DWORD *)(v28 + 16);
                Instance = sub_B0D8BC(ServantChangeEntity___TypeInfo, 2LL);
                if ( !Instance )
                  goto LABEL_51;
                v23 = Instance;
                Instance = sub_B0D964(v28, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
                if ( !Instance )
                {
LABEL_53:
                  v53 = sub_B0D99C(Instance);
                  sub_B0D948(v53, 0LL);
                }
                if ( !*(_DWORD *)(v23 + 24) )
                  goto LABEL_52;
                *(_QWORD *)(v23 + 32) = v28;
                sub_B0D840(
                  (BattleServantConfConponent_o *)(v23 + 32),
                  (System_Int32_array **)v28,
                  v39,
                  v40,
                  v41,
                  v42,
                  v43,
                  v44);
                if ( *(_DWORD *)(v23 + 24) <= 1u )
                  goto LABEL_52;
                *(_QWORD *)(v23 + 40) = 0LL;
                sub_B0D840((BattleServantConfConponent_o *)(v23 + 40), 0LL, v45, v46, v47, v48, v49, v50);
                if ( !v21 )
                  goto LABEL_51;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v21,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantChangeEntity____Add__);
              }
              goto LABEL_47;
            }
            if ( *(_DWORD *)(v28 + 24) == questId )
              goto LABEL_40;
          }
LABEL_47:
          v27 = -1;
          continue;
        }
        Instance = ServantChangeEntity__IsEnable((ServantChangeEntity_o *)v28, v22);
        if ( (Instance & 1) == 0 )
          goto LABEL_47;
        if ( !v23 )
          goto LABEL_51;
        Instance = sub_B0D964(v28, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
        if ( !Instance )
          goto LABEL_53;
        if ( *(_DWORD *)(v23 + 24) <= 1u )
          goto LABEL_52;
        *(_QWORD *)(v23 + 40) = v28;
        sub_B0D840((BattleServantConfConponent_o *)(v23 + 40), (System_Int32_array **)v28, v31, v32, v33, v34, v35, v36);
        v27 = *(_DWORD *)(v28 + 16);
        v26 = -1;
      }
LABEL_48:
      ;
    }
    while ( (int)++v24 < v19 );
  }
  if ( !v21 )
LABEL_51:
    sub_B0D97C(Instance);
  return (ServantChangeEntity_array_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                              (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__);
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

  if ( (byte_421592D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isVoiceList);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    sub_B0D8A4(&ServantChangeEntity_TypeInfo, v8);
    byte_421592D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                (const MethodInfo_2E62194 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            klass,
            1,
            (const MethodInfo_2E61EF4 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( ++v12 >= v11 )
        return;
    }
LABEL_19:
    sub_B0D97C(list);
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
    sub_B0D97C(this);
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

  if ( (byte_4215928 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&ServantChangeEntity_TypeInfo, v6);
    byte_4215928 = 1;
  }
  result = (ServantChangeEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_B0D97C(result);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                 (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (ServantChangeEntity_o *)this->fields.list;
    if ( result )
    {
      result = (ServantChangeEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                          v8,
                                          (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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

  if ( (byte_4215925 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__, entity);
    byte_4215925 = 1;
  }
  v9 = ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           v9,
           (const MethodInfo_266A07C *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_ServantChangeEntity__o *__fastcall ServantChangeMaster__getSortedEntityList(
        ServantChangeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v15; // w21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x10
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v19; // x21
  ServantChangeMaster_o *v21; // x0
  int32_t v22; // w1
  const MethodInfo *v23; // x2

  if ( (byte_421592B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_B0D8A4(&Method_System_Comparison_ServantChangeEntity___ctor__, v5);
    sub_B0D8A4(&System_Comparison_ServantChangeEntity__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v10);
    sub_B0D8A4(&ServantChangeEntity_TypeInfo, v11);
    sub_B0D8A4(&Method_ServantChangeMaster__getSortedEntityList_b__11_0__, v12);
    byte_421592B = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantChangeEntity__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_12;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v19 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                        System_Comparison_ServantChangeEntity__TypeInfo,
                                                                        v16,
                                                                        v17);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        v19,
        (Il2CppObject *)this,
        Method_ServantChangeMaster__getSortedEntityList_b__11_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_ServantChangeEntity___ctor__);
      if ( v13 )
      {
        System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v13,
          (System_Comparison_T__o *)v19,
          (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
        return (System_Collections_Generic_List_ServantChangeEntity__o *)v13;
      }
LABEL_12:
      sub_B0D97C(list);
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v15,
                                                                                         (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v13 )
      goto LABEL_12;
    if ( list )
    {
      v18 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v18
        || (ServantChangeEntity_c *)list->klass->_2.typeHierarchy[v18 - 1] != ServantChangeEntity_TypeInfo )
      {
        break;
      }
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v13,
      (EventMissionProgressRequest_Argument_ProgressData_o *)list,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v15;
    if ( !list )
      goto LABEL_12;
  }
  v21 = (ServantChangeMaster_o *)sub_B0DC70(list);
  return (System_Collections_Generic_List_ServantChangeEntity__o *)ServantChangeMaster__GetAllChanged(v21, v22, v23);
}


void __fastcall ServantChangeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantChangeMaster___c_StaticFields *static_fields; // x0

  if ( (byte_421220F & 1) == 0 )
  {
    sub_B0D8A4(&ServantChangeMaster___c_TypeInfo, v1);
    byte_421220F = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantChangeMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantChangeMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantChangeMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}