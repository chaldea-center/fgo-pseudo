void __fastcall ServantChangeMaster___ctor(ServantChangeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B106C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__);
    byte_42B106C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    190,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__);
}


ServantChangeEntity_array *__fastcall ServantChangeMaster__GetAllChanged(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_array *v5; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  il2cpp_array_size_t v10; // w23
  ServantChangeEntity_o *v11; // x21
  const MethodInfo *v12; // x1
  __int64 v13; // x0

  if ( (byte_42B1070 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
    byte_42B1070 = 1;
  }
  v5 = ServantChangeMaster__GetEntityList(this, svtId, method);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  if ( !v5 )
    goto LABEL_16;
  v9 = *(_QWORD *)&v5->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = v5->m_Items[v10];
      if ( !v11 )
        break;
      if ( (v11->fields.flag & 2) == 0 )
      {
        if ( !v6 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v6,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
        v7 = ServantChangeEntity__IsEnable(v11, v12);
        if ( v7 )
          return (ServantChangeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
      }
      if ( (int)++v10 >= (int)v9 )
        goto LABEL_13;
      if ( v10 >= v5->max_length )
      {
        v13 = sub_B52A88(v7);
        sub_B52A28(v13, 0LL);
      }
    }
LABEL_16:
    sub_B52A5C(v7, v8);
  }
LABEL_13:
  if ( !v6 )
    goto LABEL_16;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v6,
    0LL,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
  return (ServantChangeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                        (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
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
        v10 = sub_B52A88(v3);
        sub_B52A28(v10, 0LL);
      }
    }
LABEL_11:
    sub_B52A5C(v3, v4);
  }
  return 0LL;
}


System_Int32_array *__fastcall ServantChangeMaster__GetEnableSvtVoiceList(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_array *v5; // x0
  __int64 v6; // x1
  int max_length; // w25
  ServantChangeEntity_array *v8; // x21
  System_Collections_Generic_List_int__o *v9; // x20
  int v10; // w24
  il2cpp_array_size_t v11; // w26
  ServantChangeEntity_o *v12; // x22
  int32_t svtVoiceId; // w23
  char v14; // w27
  const MethodInfo *v15; // x1
  int v16; // w19
  int v17; // w8
  System_Int32_array *v18; // x21
  int v19; // w8
  int v20; // w19
  int v21; // w9
  __int64 v23; // x0
  int32_t v24; // [xsp+Ch] [xbp-A4h]
  _BYTE v25[40]; // [xsp+10h] [xbp-A0h] BYREF
  int v26; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v27; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42B1072 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B1072 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v26 = 0;
  v5 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v5 )
    goto LABEL_37;
  v24 = svtId;
  max_length = v5->max_length;
  v8 = v5;
  v9 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( max_length >= 1 )
  {
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v8->max_length )
      {
        v23 = sub_B52A88(v5);
        sub_B52A28(v23, 0LL);
      }
      v12 = v8->m_Items[v11];
      if ( !v12 || !v9 )
        break;
      svtVoiceId = v12->fields.svtVoiceId;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v25,
        v9,
        (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v27 = *(System_Collections_Generic_List_Enumerator_int__o *)v25;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v27,
                (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( svtVoiceId == v27.fields.current )
        {
          v14 = 1;
          goto LABEL_14;
        }
      }
      v14 = 0;
LABEL_14:
      *(_DWORD *)&v25[4 * v10 + 24] = 94;
      v10 = ++v26;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v27,
        (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v16 = v10;
      if ( v10 )
      {
        v17 = v10 - 1;
        if ( *(_DWORD *)&v25[4 * v10 + 20] == 94 )
        {
          v16 = --v10;
          v26 = v17;
        }
      }
      if ( (v14 & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v9,
          svtVoiceId,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      v5 = (ServantChangeEntity_array *)ServantChangeEntity__IsEnable(v12, v15);
      if ( ((unsigned __int8)v5 & 1) != 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v9,
                 (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( (int)++v11 >= max_length )
        goto LABEL_23;
    }
LABEL_37:
    sub_B52A5C(v5, v6);
  }
  v16 = 0;
LABEL_23:
  if ( !v9 )
    goto LABEL_37;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v25,
    v9,
    (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v27 = *(System_Collections_Generic_List_Enumerator_int__o *)v25;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v27,
            (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( v27.fields.current == v24 )
    {
      v18 = System_Collections_Generic_List_int___ToArray(
              v9,
              (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
      v19 = 203;
      goto LABEL_29;
    }
  }
  v18 = 0LL;
  v19 = 189;
LABEL_29:
  *(_DWORD *)&v25[4 * v16 + 24] = v19;
  v20 = ++v26;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v27,
    (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v20 )
  {
    v21 = *(_DWORD *)&v25[4 * v20 + 20];
    if ( v21 == 189 )
    {
      v26 = v20 - 1;
    }
    else if ( v21 == 203 )
    {
      v26 = v20 - 1;
      return v18;
    }
  }
  System_Collections_Generic_List_int___Add(
    v9,
    v24,
    (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_o *__fastcall ServantChangeMaster__GetEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *v7; // x1

  if ( (byte_42B106A & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__);
    byte_42B106A = 1;
  }
  v7 = ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&priority);
  return (ServantChangeEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    v7,
                                    (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__);
}


ServantChangeEntity_array *__fastcall ServantChangeMaster__GetEntityList(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  void *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 v11; // x10
  struct ServantChangeMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v14; // x21
  struct ServantChangeMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42B106D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_ServantChangeEntity___ctor__);
    sub_B52984(&System_Comparison_ServantChangeEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
    sub_B52984(&ServantChangeEntity_TypeInfo);
    sub_B52984(&Method_ServantChangeMaster___c__GetEntityList_b__3_0__);
    sub_B52984(&ServantChangeMaster___c_TypeInfo);
    byte_42B106D = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = list;
      v11 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v11
        || *(ServantChangeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) != ServantChangeEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == svtId )
      {
        if ( !v5 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
      }
      if ( ++v10 >= v9 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B52A5C(list, v6);
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
    v14 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantChangeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v14,
      Method_ServantChangeMaster___c__GetEntityList_b__3_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ServantChangeEntity___ctor__);
    v15 = ServantChangeMaster___c_TypeInfo->static_fields;
    v15->__9__3_0 = (struct System_Comparison_ServantChangeEntity__o *)_9__3_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v15->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v5 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
  return (ServantChangeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                        (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
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
    sub_B52A5C(0LL, v4);
  v5 = *(_QWORD *)&v3->max_length;
  if ( !v5 )
    return 0LL;
  if ( !(_DWORD)v5 )
  {
    v7 = sub_B52A88(v3);
    sub_B52A28(v7, 0LL);
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
  __int64 Instance; // x0
  const MethodInfo *v9; // x1
  int v10; // w26
  __int64 v11; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  __int64 v13; // x23
  unsigned int v14; // w27
  bool v15; // w28
  int v16; // w19
  int v17; // w25
  __int64 v18; // x24
  int v19; // w8
  int v20; // w8
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int v27; // w8
  int v28; // w9
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v42; // x0
  __int64 v43; // x0

  if ( (byte_42B106F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantChangeEntity____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_ServantChangeEntity____TypeInfo);
    sub_B52984(&ServantChangeEntity___TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B106F = 1;
  }
  Instance = (__int64)ServantChangeMaster__getSortedEntityList(this, *(const MethodInfo **)&questId);
  if ( !Instance )
    goto LABEL_51;
  v10 = *(_DWORD *)(Instance + 24);
  v11 = Instance;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantChangeEntity____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__);
  if ( v10 >= 1 )
  {
    v13 = 0LL;
    v14 = 0;
    v15 = !isQuestClear;
    v16 = -1;
    v17 = -1;
    do
    {
      if ( *(_DWORD *)(v11 + 24) <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v18 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 8LL * (int)v14 + 32);
      if ( !v18 )
        goto LABEL_51;
      v19 = *(_DWORD *)(v18 + 16);
      if ( v17 != v19 && (*(_BYTE *)(v18 + 88) & 2) == 0 )
      {
        if ( v16 < 1 )
          goto LABEL_12;
        if ( v16 != v19 )
        {
          v16 = -1;
LABEL_12:
          v20 = *(_DWORD *)(v18 + 20);
          if ( v20 <= 36 )
          {
            if ( v20 == 26 )
            {
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_51;
              Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
              if ( !Instance )
                goto LABEL_51;
              Instance = (__int64)QuestGroupMaster__GetQuestIdListByGroupId(
                                    (QuestGroupMaster_o *)Instance,
                                    *(_DWORD *)(v18 + 24),
                                    2,
                                    0LL);
              if ( !Instance )
                goto LABEL_51;
              v27 = *(_DWORD *)(Instance + 24);
              if ( v27 >= 1 )
              {
                v28 = 0;
                while ( v28 < (unsigned int)v27 )
                {
                  if ( *(_DWORD *)(Instance + 4LL * v28 + 32) == questId )
                    goto LABEL_40;
                  ++v28;
                  v17 = -1;
                  if ( v28 >= v27 )
                    goto LABEL_48;
                }
LABEL_52:
                v42 = sub_B52A88(Instance);
                sub_B52A28(v42, 0LL);
              }
              goto LABEL_47;
            }
            if ( v20 == 36 && *(_DWORD *)(v18 + 24) == questId && !v15 )
              goto LABEL_40;
          }
          else
          {
            if ( (unsigned int)(v20 - 42) >= 4 )
            {
              if ( v20 != 47 || *(_DWORD *)(v18 + 24) != questId || *(_DWORD *)(v18 + 28) != questPhase )
                goto LABEL_47;
LABEL_40:
              Instance = ServantChangeEntity__IsEnable((ServantChangeEntity_o *)v18, v9);
              if ( (Instance & 1) == 0 )
              {
                v16 = *(_DWORD *)(v18 + 16);
                Instance = sub_B5299C(ServantChangeEntity___TypeInfo, 2LL);
                if ( !Instance )
                  goto LABEL_51;
                v13 = Instance;
                Instance = sub_B52A44(v18, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
                if ( !Instance )
                {
LABEL_53:
                  v43 = sub_B52A7C(Instance);
                  sub_B52A28(v43, 0LL);
                }
                if ( !*(_DWORD *)(v13 + 24) )
                  goto LABEL_52;
                *(_QWORD *)(v13 + 32) = v18;
                sub_B52920(
                  (BattleServantConfConponent_o *)(v13 + 32),
                  (System_Int32_array **)v18,
                  v29,
                  v30,
                  v31,
                  v32,
                  v33,
                  v34);
                if ( *(_DWORD *)(v13 + 24) <= 1u )
                  goto LABEL_52;
                *(_QWORD *)(v13 + 40) = 0LL;
                sub_B52920((BattleServantConfConponent_o *)(v13 + 40), 0LL, v35, v36, v37, v38, v39, v40);
                if ( !v12 )
                  goto LABEL_51;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v12,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantChangeEntity____Add__);
              }
              goto LABEL_47;
            }
            if ( *(_DWORD *)(v18 + 24) == questId )
              goto LABEL_40;
          }
LABEL_47:
          v17 = -1;
          continue;
        }
        Instance = ServantChangeEntity__IsEnable((ServantChangeEntity_o *)v18, v9);
        if ( (Instance & 1) == 0 )
          goto LABEL_47;
        if ( !v13 )
          goto LABEL_51;
        Instance = sub_B52A44(v18, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
        if ( !Instance )
          goto LABEL_53;
        if ( *(_DWORD *)(v13 + 24) <= 1u )
          goto LABEL_52;
        *(_QWORD *)(v13 + 40) = v18;
        sub_B52920((BattleServantConfConponent_o *)(v13 + 40), (System_Int32_array **)v18, v21, v22, v23, v24, v25, v26);
        v17 = *(_DWORD *)(v18 + 16);
        v16 = -1;
      }
LABEL_48:
      ;
    }
    while ( (int)++v14 < v10 );
  }
  if ( !v12 )
LABEL_51:
    sub_B52A5C(Instance, v9);
  return (ServantChangeEntity_array_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                              (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 v9; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v10; // x8
  int32_t klass; // w23

  if ( (byte_42B1073 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_B52984(&ServantChangeEntity_TypeInfo);
    byte_42B1073 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
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
      if ( !list )
        break;
      v9 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (ServantChangeEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] != ServantChangeEntity_TypeInfo )
      {
        break;
      }
      if ( (ServantChangeEntity_c *)list->klass->_2.typeHierarchy[*(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1) - 1] == ServantChangeEntity_TypeInfo )
        v10 = list;
      else
        v10 = 0LL;
      klass = (int32_t)v10[2].klass;
      if ( klass >= 1 )
      {
        if ( !isVoiceList )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                klass,
                (const MethodInfo_2EF83DC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            klass,
            1,
            (const MethodInfo_2EF813C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( ++v8 >= v7 )
        return;
    }
LABEL_19:
    sub_B52A5C(list, isVoiceList);
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
    sub_B52A5C(this, a);
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
  ServantChangeEntity_o *result; // x0
  int32_t v6; // w21
  __int64 v7; // x10

  if ( (byte_42B106E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&ServantChangeEntity_TypeInfo);
    byte_42B106E = 1;
  }
  result = (ServantChangeEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_B52A5C(result, *(_QWORD *)&svtId);
  v6 = 0;
  while ( v6 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                 (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (ServantChangeEntity_o *)this->fields.list;
    if ( result )
    {
      result = (ServantChangeEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                          v6,
                                          (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v7 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v7
          && (ServantChangeEntity_c *)result->klass->_2.typeHierarchy[v7 - 1] == ServantChangeEntity_TypeInfo )
        {
          if ( result->fields.battleSvtId == svtId )
            return result;
          result = (ServantChangeEntity_o *)this->fields.list;
          ++v6;
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

  if ( (byte_42B106B & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__);
    byte_42B106B = 1;
  }
  v9 = ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           v9,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_ServantChangeEntity__o *__fastcall ServantChangeMaster__getSortedEntityList(
        ServantChangeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v6; // w21
  __int64 v7; // x10
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v8; // x21
  ServantChangeMaster_o *v10; // x0
  int32_t v11; // w1
  const MethodInfo *v12; // x2

  if ( (byte_42B1071 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_ServantChangeEntity___ctor__);
    sub_B52984(&System_Comparison_ServantChangeEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
    sub_B52984(&ServantChangeEntity_TypeInfo);
    sub_B52984(&Method_ServantChangeMaster__getSortedEntityList_b__11_0__);
    byte_42B1071 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_12;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v8 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantChangeEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        v8,
        (Il2CppObject *)this,
        Method_ServantChangeMaster__getSortedEntityList_b__11_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_ServantChangeEntity___ctor__);
      if ( v3 )
      {
        System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v3,
          (System_Comparison_T__o *)v8,
          (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
        return (System_Collections_Generic_List_ServantChangeEntity__o *)v3;
      }
LABEL_12:
      sub_B52A5C(list, v4);
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v6,
                                                                                         (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v3 )
      goto LABEL_12;
    if ( list )
    {
      v7 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v7
        || (ServantChangeEntity_c *)list->klass->_2.typeHierarchy[v7 - 1] != ServantChangeEntity_TypeInfo )
      {
        break;
      }
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v3,
      (EventMissionProgressRequest_Argument_ProgressData_o *)list,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v6;
    if ( !list )
      goto LABEL_12;
  }
  v10 = (ServantChangeMaster_o *)sub_B52D50(list);
  return (System_Collections_Generic_List_ServantChangeEntity__o *)ServantChangeMaster__GetAllChanged(v10, v11, v12);
}


void __fastcall ServantChangeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantChangeMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD320 & 1) == 0 )
  {
    sub_B52984(&ServantChangeMaster___c_TypeInfo);
    byte_42AD320 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantChangeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantChangeMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantChangeMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}