void __fastcall ServantChangeMaster___ctor(ServantChangeMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9952 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E9952 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    190,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__);
}


ServantChangeEntity_array *__fastcall ServantChangeMaster__GetAllChanged(
        ServantChangeMaster_o *this,
        int32_t svtId,
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
  ServantChangeEntity_array *v15; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x22
  il2cpp_array_size_t v20; // w23
  ServantChangeEntity_o *v21; // x21
  const MethodInfo *v22; // x1
  __int64 v23; // x0

  if ( (byte_42E9956 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v12, v13, v14);
    byte_42E9956 = 1;
  }
  v15 = ServantChangeMaster__GetEntityList(this, svtId, method);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  if ( !v15 )
    goto LABEL_16;
  v19 = *(_QWORD *)&v15->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      v21 = v15->m_Items[v20];
      if ( !v21 )
        break;
      if ( (v21->fields.flag & 2) == 0 )
      {
        if ( !v16 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
        v17 = ServantChangeEntity__IsEnable(v21, v22);
        if ( v17 )
          return (ServantChangeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
      }
      if ( (int)++v20 >= (int)v19 )
        goto LABEL_13;
      if ( v20 >= v15->max_length )
      {
        v23 = sub_B5D6C8(v17);
        sub_B5D668(v23, 0LL);
      }
    }
LABEL_16:
    sub_B5D69C(v17, v18);
  }
LABEL_13:
  if ( !v16 )
    goto LABEL_16;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v16,
    0LL,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
  return (ServantChangeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
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
        v10 = sub_B5D6C8(v3);
        sub_B5D668(v10, 0LL);
      }
    }
LABEL_11:
    sub_B5D69C(v3, v4);
  }
  return 0LL;
}


System_Int32_array *__fastcall ServantChangeMaster__GetEnableSvtVoiceList(
        ServantChangeMaster_o *this,
        int32_t svtId,
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
  ServantChangeEntity_array *v27; // x0
  __int64 v28; // x1
  int max_length; // w25
  ServantChangeEntity_array *v30; // x21
  System_Collections_Generic_List_int__o *v31; // x20
  int v32; // w24
  il2cpp_array_size_t v33; // w26
  ServantChangeEntity_o *v34; // x22
  int32_t svtVoiceId; // w23
  char v36; // w27
  const MethodInfo *v37; // x1
  int v38; // w19
  int v39; // w8
  System_Int32_array *v40; // x21
  int v41; // w8
  int v42; // w19
  int v43; // w9
  __int64 v45; // x0
  int32_t v46; // [xsp+Ch] [xbp-A4h]
  _BYTE v47[40]; // [xsp+10h] [xbp-A0h] BYREF
  int v48; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_int__o v49; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42E9958 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v24, v25, v26);
    byte_42E9958 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  v48 = 0;
  v27 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v27 )
    goto LABEL_37;
  v46 = svtId;
  max_length = v27->max_length;
  v30 = v27;
  v31 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( max_length >= 1 )
  {
    v32 = 0;
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= v30->max_length )
      {
        v45 = sub_B5D6C8(v27);
        sub_B5D668(v45, 0LL);
      }
      v34 = v30->m_Items[v33];
      if ( !v34 || !v31 )
        break;
      svtVoiceId = v34->fields.svtVoiceId;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v47,
        v31,
        (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v49 = *(System_Collections_Generic_List_Enumerator_int__o *)v47;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v49,
                (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( svtVoiceId == v49.fields.current )
        {
          v36 = 1;
          goto LABEL_14;
        }
      }
      v36 = 0;
LABEL_14:
      *(_DWORD *)&v47[4 * v32 + 24] = 94;
      v32 = ++v48;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v49,
        (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v38 = v32;
      if ( v32 )
      {
        v39 = v32 - 1;
        if ( *(_DWORD *)&v47[4 * v32 + 20] == 94 )
        {
          v38 = --v32;
          v48 = v39;
        }
      }
      if ( (v36 & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v31,
          svtVoiceId,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      v27 = (ServantChangeEntity_array *)ServantChangeEntity__IsEnable(v34, v37);
      if ( ((unsigned __int8)v27 & 1) != 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v31,
                 (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( (int)++v33 >= max_length )
        goto LABEL_23;
    }
LABEL_37:
    sub_B5D69C(v27, v28);
  }
  v38 = 0;
LABEL_23:
  if ( !v31 )
    goto LABEL_37;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v47,
    v31,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v49 = *(System_Collections_Generic_List_Enumerator_int__o *)v47;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v49,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( v49.fields.current == v46 )
    {
      v40 = System_Collections_Generic_List_int___ToArray(
              v31,
              (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
      v41 = 203;
      goto LABEL_29;
    }
  }
  v40 = 0LL;
  v41 = 189;
LABEL_29:
  *(_DWORD *)&v47[4 * v38 + 24] = v41;
  v42 = ++v48;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v49,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v42 )
  {
    v43 = *(_DWORD *)&v47[4 * v42 + 20];
    if ( v43 == 189 )
    {
      v48 = v42 - 1;
    }
    else if ( v43 == 203 )
    {
      v48 = v42 - 1;
      return v40;
    }
  }
  System_Collections_Generic_List_int___Add(
    v31,
    v46,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  return System_Collections_Generic_List_int___ToArray(
           v31,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_o *__fastcall ServantChangeMaster__GetEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *v7; // x1

  if ( (byte_42E9950 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__,
      svtId,
      priority,
      method);
    byte_42E9950 = 1;
  }
  v7 = ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&priority);
  return (ServantChangeEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    v7,
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__);
}


ServantChangeEntity_array *__fastcall ServantChangeMaster__GetEntityList(
        ServantChangeMaster_o *this,
        int32_t svtId,
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x19
  void *v40; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v43; // w22
  int32_t v44; // w23
  __int64 v45; // x10
  struct ServantChangeMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v48; // x21
  struct ServantChangeMaster___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_42E9953 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_ServantChangeEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_ServantChangeEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&ServantChangeEntity_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_ServantChangeMaster___c__GetEntityList_b__3_0__, v33, v34, v35);
    sub_B5D5C4(&ServantChangeMaster___c_TypeInfo, v36, v37, v38);
    byte_42E9953 = 1;
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v43 = Count;
    v44 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v44,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v40 = list;
      v45 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v45
        || *(ServantChangeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v45 - 8) != ServantChangeEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == svtId )
      {
        if ( !v39 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v39,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
      }
      if ( ++v44 >= v43 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B5D69C(list, v40);
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
    v48 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantChangeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v48,
      Method_ServantChangeMaster___c__GetEntityList_b__3_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ServantChangeEntity___ctor__);
    v49 = ServantChangeMaster___c_TypeInfo->static_fields;
    v49->__9__3_0 = (struct System_Comparison_ServantChangeEntity__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v49->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !v39 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v39,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
  return (ServantChangeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
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
    sub_B5D69C(0LL, v4);
  v5 = *(_QWORD *)&v3->max_length;
  if ( !v5 )
    return 0LL;
  if ( !(_DWORD)v5 )
  {
    v7 = sub_B5D6C8(v3);
    sub_B5D668(v7, 0LL);
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
  __int64 Instance; // x0
  const MethodInfo *v33; // x1
  int v34; // w26
  __int64 v35; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x22
  __int64 v37; // x23
  unsigned int v38; // w27
  bool v39; // w28
  int v40; // w19
  int v41; // w25
  __int64 v42; // x24
  int v43; // w8
  int v44; // w8
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int v51; // w8
  int v52; // w9
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v66; // x0
  __int64 v67; // x0

  if ( (byte_42E9955 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, questId, questPhase, isQuestClear);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantChangeEntity____Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Item__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_ServantChangeEntity____TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ServantChangeEntity___TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    byte_42E9955 = 1;
  }
  Instance = (__int64)ServantChangeMaster__getSortedEntityList(this, *(const MethodInfo **)&questId);
  if ( !Instance )
    goto LABEL_51;
  v34 = *(_DWORD *)(Instance + 24);
  v35 = Instance;
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantChangeEntity____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__);
  if ( v34 >= 1 )
  {
    v37 = 0LL;
    v38 = 0;
    v39 = !isQuestClear;
    v40 = -1;
    v41 = -1;
    do
    {
      if ( *(_DWORD *)(v35 + 24) <= v38 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v42 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 8LL * (int)v38 + 32);
      if ( !v42 )
        goto LABEL_51;
      v43 = *(_DWORD *)(v42 + 16);
      if ( v41 != v43 && (*(_BYTE *)(v42 + 88) & 2) == 0 )
      {
        if ( v40 < 1 )
          goto LABEL_12;
        if ( v40 != v43 )
        {
          v40 = -1;
LABEL_12:
          v44 = *(_DWORD *)(v42 + 20);
          if ( v44 <= 36 )
          {
            if ( v44 == 26 )
            {
              Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_51;
              Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
              if ( !Instance )
                goto LABEL_51;
              Instance = (__int64)QuestGroupMaster__GetQuestIdListByGroupId(
                                    (QuestGroupMaster_o *)Instance,
                                    *(_DWORD *)(v42 + 24),
                                    2,
                                    0LL);
              if ( !Instance )
                goto LABEL_51;
              v51 = *(_DWORD *)(Instance + 24);
              if ( v51 >= 1 )
              {
                v52 = 0;
                while ( v52 < (unsigned int)v51 )
                {
                  if ( *(_DWORD *)(Instance + 4LL * v52 + 32) == questId )
                    goto LABEL_40;
                  ++v52;
                  v41 = -1;
                  if ( v52 >= v51 )
                    goto LABEL_48;
                }
LABEL_52:
                v66 = sub_B5D6C8(Instance);
                sub_B5D668(v66, 0LL);
              }
              goto LABEL_47;
            }
            if ( v44 == 36 && *(_DWORD *)(v42 + 24) == questId && !v39 )
              goto LABEL_40;
          }
          else
          {
            if ( (unsigned int)(v44 - 42) >= 4 )
            {
              if ( v44 != 47 || *(_DWORD *)(v42 + 24) != questId || *(_DWORD *)(v42 + 28) != questPhase )
                goto LABEL_47;
LABEL_40:
              Instance = ServantChangeEntity__IsEnable((ServantChangeEntity_o *)v42, v33);
              if ( (Instance & 1) == 0 )
              {
                v40 = *(_DWORD *)(v42 + 16);
                Instance = sub_B5D5DC(ServantChangeEntity___TypeInfo, 2LL);
                if ( !Instance )
                  goto LABEL_51;
                v37 = Instance;
                Instance = sub_B5D684(v42, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
                if ( !Instance )
                {
LABEL_53:
                  v67 = sub_B5D6BC(Instance);
                  sub_B5D668(v67, 0LL);
                }
                if ( !*(_DWORD *)(v37 + 24) )
                  goto LABEL_52;
                *(_QWORD *)(v37 + 32) = v42;
                sub_B5D560(
                  (BattleServantConfConponent_o *)(v37 + 32),
                  (System_Int32_array **)v42,
                  v53,
                  v54,
                  v55,
                  v56,
                  v57,
                  v58);
                if ( *(_DWORD *)(v37 + 24) <= 1u )
                  goto LABEL_52;
                *(_QWORD *)(v37 + 40) = 0LL;
                sub_B5D560((BattleServantConfConponent_o *)(v37 + 40), 0LL, v59, v60, v61, v62, v63, v64);
                if ( !v36 )
                  goto LABEL_51;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v36,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantChangeEntity____Add__);
              }
              goto LABEL_47;
            }
            if ( *(_DWORD *)(v42 + 24) == questId )
              goto LABEL_40;
          }
LABEL_47:
          v41 = -1;
          continue;
        }
        Instance = ServantChangeEntity__IsEnable((ServantChangeEntity_o *)v42, v33);
        if ( (Instance & 1) == 0 )
          goto LABEL_47;
        if ( !v37 )
          goto LABEL_51;
        Instance = sub_B5D684(v42, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
        if ( !Instance )
          goto LABEL_53;
        if ( *(_DWORD *)(v37 + 24) <= 1u )
          goto LABEL_52;
        *(_QWORD *)(v37 + 40) = v42;
        sub_B5D560((BattleServantConfConponent_o *)(v37 + 40), (System_Int32_array **)v42, v45, v46, v47, v48, v49, v50);
        v41 = *(_DWORD *)(v42 + 16);
        v40 = -1;
      }
LABEL_48:
      ;
    }
    while ( (int)++v38 < v34 );
  }
  if ( !v36 )
LABEL_51:
    sub_B5D69C(Instance, v33);
  return (ServantChangeEntity_array_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v36,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v20; // w21
  int32_t v21; // w22
  __int64 v22; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v23; // x8
  int32_t klass; // w23

  if ( (byte_42E9959 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)isVoiceList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v12, v13, v14);
    sub_B5D5C4(&ServantChangeEntity_TypeInfo, v15, v16, v17);
    byte_42E9959 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v21,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v22 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v22
        || (ServantChangeEntity_c *)list->klass->_2.typeHierarchy[v22 - 1] != ServantChangeEntity_TypeInfo )
      {
        break;
      }
      if ( (ServantChangeEntity_c *)list->klass->_2.typeHierarchy[*(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1) - 1] == ServantChangeEntity_TypeInfo )
        v23 = list;
      else
        v23 = 0LL;
      klass = (int32_t)v23[2].klass;
      if ( klass >= 1 )
      {
        if ( !isVoiceList )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                klass,
                (const MethodInfo_2F03798 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            klass,
            1,
            (const MethodInfo_2F034F8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( ++v21 >= v20 )
        return;
    }
LABEL_19:
    sub_B5D69C(list, isVoiceList);
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
    sub_B5D69C(this, a);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ServantChangeEntity_o *result; // x0
  int32_t v13; // w21
  __int64 v14; // x10

  if ( (byte_42E9954 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&ServantChangeEntity_TypeInfo, v9, v10, v11);
    byte_42E9954 = 1;
  }
  result = (ServantChangeEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_B5D69C(result, *(_QWORD *)&svtId);
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (ServantChangeEntity_o *)this->fields.list;
    if ( result )
    {
      result = (ServantChangeEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                          v13,
                                          (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v14 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (ServantChangeEntity_c *)result->klass->_2.typeHierarchy[v14 - 1] == ServantChangeEntity_TypeInfo )
        {
          if ( result->fields.battleSvtId == svtId )
            return result;
          result = (ServantChangeEntity_o *)this->fields.list;
          ++v13;
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

  if ( (byte_42E9951 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&priority);
    byte_42E9951 = 1;
  }
  v9 = ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           v9,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_ServantChangeEntity__o *__fastcall ServantChangeMaster__getSortedEntityList(
        ServantChangeMaster_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  __int64 v33; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v35; // w21
  __int64 v36; // x10
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v37; // x21
  ServantChangeMaster_o *v39; // x0
  int32_t v40; // w1
  const MethodInfo *v41; // x2

  if ( (byte_42E9957 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Comparison_ServantChangeEntity___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Comparison_ServantChangeEntity__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ServantChangeEntity_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_ServantChangeMaster__getSortedEntityList_b__11_0__, v29, v30, v31);
    byte_42E9957 = 1;
  }
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_12;
  v35 = 0;
  while ( 1 )
  {
    if ( v35 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v37 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantChangeEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        v37,
        (Il2CppObject *)this,
        Method_ServantChangeMaster__getSortedEntityList_b__11_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_ServantChangeEntity___ctor__);
      if ( v32 )
      {
        System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v32,
          (System_Comparison_T__o *)v37,
          (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
        return (System_Collections_Generic_List_ServantChangeEntity__o *)v32;
      }
LABEL_12:
      sub_B5D69C(list, v33);
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v35,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v32 )
      goto LABEL_12;
    if ( list )
    {
      v36 = *(&ServantChangeEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v36
        || (ServantChangeEntity_c *)list->klass->_2.typeHierarchy[v36 - 1] != ServantChangeEntity_TypeInfo )
      {
        break;
      }
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v32,
      (EventMissionProgressRequest_Argument_ProgressData_o *)list,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v35;
    if ( !list )
      goto LABEL_12;
  }
  v39 = (ServantChangeMaster_o *)sub_B5D990(list);
  return (System_Collections_Generic_List_ServantChangeEntity__o *)ServantChangeMaster__GetAllChanged(v39, v40, v41);
}


void __fastcall ServantChangeMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantChangeMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D38 & 1) == 0 )
  {
    sub_B5D5C4(&ServantChangeMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5D38 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantChangeMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantChangeMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantChangeMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}