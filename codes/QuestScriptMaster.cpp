void __fastcall QuestScriptMaster___ctor(QuestScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AE4B2 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string___ctor__);
    byte_42AE4B2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    171,
    (const MethodInfo_23E268C *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string___ctor__);
}


System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetDummyFolderList(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0

  if ( (byte_42AE4AB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    sub_B52984(&QuestScriptEntity_TypeInfo);
    byte_42AE4AB = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_33;
    v22 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 300LL) < (unsigned int)v22
      || *(QuestScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * v22 - 8) != QuestScriptEntity_TypeInfo )
    {
      v20 = sub_B52D50(v20);
LABEL_33:
      sub_B52A5C(v20, v21);
    }
    if ( *(_DWORD *)(v20 + 32) == 4 && *(_DWORD *)(v20 + 40) == parentWarId )
    {
      if ( !v5 )
        sub_B52A5C(v20, QuestScriptEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_29:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
QuestScriptEntity_o *__fastcall QuestScriptMaster__GetEntity(
        QuestScriptMaster_o *this,
        int32_t id,
        int32_t folderType,
        int32_t materialFolderId,
        int32_t parentWarId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AE4B3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__GetEntity__);
    byte_42AE4B3 = 1;
  }
  PK = QuestScriptEntity__CreatePK(id, folderType, materialFolderId, parentWarId, *(const MethodInfo **)&parentWarId);
  return (QuestScriptEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_23E2728 *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__GetEntity__);
}


QuestScriptEntity_o *__fastcall QuestScriptMaster__GetEntityFromQuestId(
        QuestScriptMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_QuestScriptEntity__o *EntityListFromQuestId; // x0
  __int64 v6; // x1

  if ( (byte_42AE4A8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity__get_Item__);
    byte_42AE4A8 = 1;
  }
  EntityListFromQuestId = QuestScriptMaster__GetEntityListFromQuestId(this, questId, method);
  if ( !EntityListFromQuestId )
    sub_B52A5C(0LL, v6);
  if ( EntityListFromQuestId->fields._size < 1 )
    return 0LL;
  else
    return EntityListFromQuestId->fields._items->m_Items[0];
}


// local variable allocation has failed, the output may be wrong!
QuestScriptEntity_array *__fastcall QuestScriptMaster__GetEntityListFromFolderType(
        QuestScriptMaster_o *this,
        int32_t folderType,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  int32_t v8; // w23
  __int64 v9; // x10

  v3 = folderType;
  if ( (byte_42AE4AA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    sub_B52984(&QuestScriptEntity_TypeInfo);
    byte_42AE4AA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  if ( Count >= 1 )
  {
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
        *(_QWORD *)&folderType = list;
        v9 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (QuestScriptEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == QuestScriptEntity_TypeInfo
          && LODWORD(list[1].klass) == v3 )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B52A5C(list, *(_QWORD *)&folderType);
  }
LABEL_14:
  if ( !v7 )
    goto LABEL_16;
  return (QuestScriptEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_QuestScriptEntity__ToArray__);
}


System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetEntityListFromQuestId(
        QuestScriptMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  void *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  struct QuestScriptMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v29; // x21
  struct QuestScriptMaster___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_42AE4A9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Comparison_QuestScriptEntity___ctor__);
    sub_B52984(&System_Comparison_QuestScriptEntity__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    sub_B52984(&QuestScriptEntity_TypeInfo);
    sub_B52984(&Method_QuestScriptMaster___c__GetEntityListFromQuestId_b__1_0__);
    sub_B52984(&QuestScriptMaster___c_TypeInfo);
    byte_42AE4A9 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_43;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_41;
    v22 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (QuestScriptEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != QuestScriptEntity_TypeInfo )
    {
      v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52D50(v20);
LABEL_41:
      sub_B52A5C(v20, v21);
    }
    if ( v20->fields.missionTargetId == questId )
    {
      if ( !v5 )
        sub_B52A5C(v20, QuestScriptEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v20,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  list = QuestScriptMaster___c_TypeInfo;
  if ( (BYTE3(QuestScriptMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaster___c_TypeInfo);
    list = QuestScriptMaster___c_TypeInfo;
  }
  static_fields = (struct QuestScriptMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = QuestScriptMaster___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_QuestScriptEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v29,
      Method_QuestScriptMaster___c__GetEntityListFromQuestId_b__1_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_QuestScriptEntity___ctor__);
    v30 = QuestScriptMaster___c_TypeInfo->static_fields;
    v30->__9__1_0 = (struct System_Comparison_QuestScriptEntity__o *)_9__1_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v30->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !v5 )
LABEL_43:
    sub_B52A5C(list, v6);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_QuestScriptEntity__Sort__);
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v5;
}


System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetMovedEventScriptList(
        QuestScriptMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  QuestScriptEntity_o *v20; // x0
  __int64 v21; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x22
  __int64 v23; // x9
  _BOOL8 v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0

  if ( (byte_42AE4B0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    sub_B52984(&QuestScriptEntity_TypeInfo);
    byte_42AE4B0 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                   Enumerator,
                                   *(_QWORD *)(v19 + 8));
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)v20;
    if ( !v20 )
      goto LABEL_34;
    v23 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (QuestScriptEntity_c *)v20->klass->_2.typeHierarchy[v23 - 1] != QuestScriptEntity_TypeInfo )
    {
      v20 = (QuestScriptEntity_o *)sub_B52D50(v20);
LABEL_34:
      sub_B52A5C(v20, v21);
    }
    if ( v20->fields.folderType == 2 && v20->fields.materialFolderId == eventId )
    {
      v24 = QuestScriptEntity__CheckScriptRelease(v20, (const MethodInfo *)QuestScriptEntity_TypeInfo);
      if ( v24 )
      {
        if ( !v5 )
          sub_B52A5C(v24, v25);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          v22,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
      }
    }
  }
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_30:
    v29 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v5;
}


System_Collections_Generic_List_int__o *__fastcall QuestScriptMaster__GetMovedEventScriptList_22002964(
        QuestScriptMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  QuestScriptEntity_o *v18; // x0
  __int64 v19; // x1
  QuestScriptEntity_o *v20; // x21
  __int64 v21; // x9
  _BOOL8 IsMaterialLatestClear; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0

  if ( (byte_42AE4B1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&QuestScriptEntity_TypeInfo);
    byte_42AE4B1 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v4);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v13);
    }
    v18 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                   Enumerator,
                                   *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      goto LABEL_32;
    v21 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (QuestScriptEntity_c *)v18->klass->_2.typeHierarchy[v21 - 1] != QuestScriptEntity_TypeInfo )
    {
      v18 = (QuestScriptEntity_o *)sub_B52D50(v18);
LABEL_32:
      sub_B52A5C(v18, v19);
    }
    IsMaterialLatestClear = QuestScriptEntity__IsMaterialLatestClear(
                              v18,
                              (const MethodInfo *)QuestScriptEntity_TypeInfo);
    if ( IsMaterialLatestClear )
    {
      if ( !v3 )
        sub_B52A5C(IsMaterialLatestClear, v23);
      System_Collections_Generic_List_int___Add(
        v3,
        v20->fields.id,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_28:
    v27 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v13);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v3;
}


System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetMovedScriptList(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  QuestScriptEntity_o *v20; // x0
  __int64 v21; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x22
  __int64 v23; // x9
  _BOOL8 v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0

  if ( (byte_42AE4AE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    sub_B52984(&QuestScriptEntity_TypeInfo);
    byte_42AE4AE = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                   Enumerator,
                                   *(_QWORD *)(v19 + 8));
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)v20;
    if ( !v20 )
      goto LABEL_34;
    v23 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (QuestScriptEntity_c *)v20->klass->_2.typeHierarchy[v23 - 1] != QuestScriptEntity_TypeInfo )
    {
      v20 = (QuestScriptEntity_o *)sub_B52D50(v20);
LABEL_34:
      sub_B52A5C(v20, v21);
    }
    if ( !v20->fields.folderType && v20->fields.parentWarId == parentWarId )
    {
      v24 = QuestScriptEntity__CheckScriptRelease(v20, (const MethodInfo *)QuestScriptEntity_TypeInfo);
      if ( v24 )
      {
        if ( !v5 )
          sub_B52A5C(v24, v25);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          v22,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
      }
    }
  }
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_30:
    v29 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v5;
}


System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetSubordinateData(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  QuestScriptEntity_o *v20; // x0
  __int64 v21; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x22
  __int64 v23; // x9
  _BOOL8 v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0

  if ( (byte_42AE4AC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    sub_B52984(&QuestScriptEntity_TypeInfo);
    byte_42AE4AC = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                   Enumerator,
                                   *(_QWORD *)(v19 + 8));
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)v20;
    if ( !v20 )
      goto LABEL_33;
    v23 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (QuestScriptEntity_c *)v20->klass->_2.typeHierarchy[v23 - 1] != QuestScriptEntity_TypeInfo )
    {
      v20 = (QuestScriptEntity_o *)sub_B52D50(v20);
LABEL_33:
      sub_B52A5C(v20, v21);
    }
    if ( v20->fields.parentWarId == parentWarId )
    {
      v24 = QuestScriptEntity__CheckScriptRelease(v20, (const MethodInfo *)QuestScriptEntity_TypeInfo);
      if ( v24 )
      {
        if ( !v5 )
          sub_B52A5C(v24, v25);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          v22,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
      }
    }
  }
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_29:
    v29 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptMaster__IsDummyFolder(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  _DWORD *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x9
  bool v20; // w20
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  int v26; // [xsp+0h] [xbp-40h]

  if ( (byte_42AE4AD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&QuestScriptEntity_TypeInfo);
    byte_42AE4AD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&parentWarId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v7);
    }
    v17 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                      Enumerator,
                      *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_35;
    v19 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 300LL) < (unsigned int)v19
      || *(QuestScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * v19 - 8) != QuestScriptEntity_TypeInfo )
    {
      v17 = (_DWORD *)sub_B52D50(v17);
LABEL_35:
      sub_B52A5C(v17, v18);
    }
    if ( v17[8] == 4 && v17[9] == parentWarId )
    {
      v26 = 70;
      v20 = 1;
      goto LABEL_25;
    }
  }
  v20 = 0;
  v26 = 68;
LABEL_25:
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_29:
    v24 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v7);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  if ( v26 == 68 )
    return 0;
  return v20;
}


bool __fastcall QuestScriptMaster__IsScriptMoved(QuestScriptMaster_o *this, int32_t scriptId, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  QuestScriptEntity_o *v20; // x0
  __int64 v21; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x22
  __int64 v23; // x9
  _BOOL8 v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  QuestScriptMaster___c_c *v30; // x0
  struct QuestScriptMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__7_0; // x20
  Il2CppObject *v33; // x21
  struct QuestScriptMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  QuestScriptMaster___c_c *v42; // x0
  struct QuestScriptMaster___c_StaticFields *v43; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__7_1; // x20
  Il2CppObject *v45; // x21
  struct QuestScriptMaster___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_42AE4AF & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_QuestScriptEntity___);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Linq_Enumerable_Any_QuestScriptEntity___);
    sub_B52984(&Method_System_Func_QuestScriptEntity__bool___ctor__);
    sub_B52984(&System_Func_QuestScriptEntity__bool__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
    sub_B52984(&QuestScriptEntity_TypeInfo);
    sub_B52984(&Method_QuestScriptMaster___c__IsScriptMoved_b__7_0__);
    sub_B52984(&Method_QuestScriptMaster___c__IsScriptMoved_b__7_1__);
    sub_B52984(&QuestScriptMaster___c_TypeInfo);
    byte_42AE4AF = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                   Enumerator,
                                   *(_QWORD *)(v19 + 8));
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)v20;
    if ( !v20 )
      goto LABEL_54;
    v23 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (QuestScriptEntity_c *)v20->klass->_2.typeHierarchy[v23 - 1] != QuestScriptEntity_TypeInfo )
    {
      v20 = (QuestScriptEntity_o *)sub_B52D50(v20);
LABEL_54:
      sub_B52A5C(v20, v21);
    }
    if ( v20->fields.id == scriptId && v20->fields.folderType != 4 )
    {
      v24 = QuestScriptEntity__CheckScriptRelease(v20, (const MethodInfo *)QuestScriptEntity_TypeInfo);
      if ( v24 )
      {
        if ( !v5 )
          sub_B52A5C(v24, v25);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          v22,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
      }
    }
  }
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_30:
    v29 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_QuestScriptEntity___) )
    return 0;
  v30 = QuestScriptMaster___c_TypeInfo;
  if ( (BYTE3(QuestScriptMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaster___c_TypeInfo);
    v30 = QuestScriptMaster___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = QuestScriptMaster___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_QuestScriptEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__7_0,
      v33,
      Method_QuestScriptMaster___c__IsScriptMoved_b__7_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_QuestScriptEntity__bool___ctor__);
    v34 = QuestScriptMaster___c_TypeInfo->static_fields;
    v34->__9__7_0 = (struct System_Func_QuestScriptEntity__bool__o *)_9__7_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v34->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_List_T__o *)v5,
          (System_Func_T__bool__o *)_9__7_0,
          (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_QuestScriptEntity___) )
  {
    v42 = QuestScriptMaster___c_TypeInfo;
    if ( (BYTE3(QuestScriptMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestScriptMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestScriptMaster___c_TypeInfo);
      v42 = QuestScriptMaster___c_TypeInfo;
    }
    v43 = v42->static_fields;
    _9__7_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v43->__9__7_1;
    if ( !_9__7_1 )
    {
      if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v43 = QuestScriptMaster___c_TypeInfo->static_fields;
      }
      v45 = (Il2CppObject *)v43->__9;
      _9__7_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_QuestScriptEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__7_1,
        v45,
        Method_QuestScriptMaster___c__IsScriptMoved_b__7_1__,
        (const MethodInfo_2BC90BC *)Method_System_Func_QuestScriptEntity__bool___ctor__);
      v46 = QuestScriptMaster___c_TypeInfo->static_fields;
      v46->__9__7_1 = (struct System_Func_QuestScriptEntity__bool__o *)_9__7_1;
      sub_B52920(
        (BattleServantConfConponent_o *)&v46->__9__7_1,
        (System_Int32_array **)_9__7_1,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
             (System_Collections_Generic_List_T__o *)v5,
             (System_Func_T__bool__o *)_9__7_1,
             (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_QuestScriptEntity___);
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptMaster__TryGetEntity(
        QuestScriptMaster_o *this,
        QuestScriptEntity_o **entity,
        int32_t id,
        int32_t folderType,
        int32_t materialFolderId,
        int32_t parentWarId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42AE4B4 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__TryGetEntity__);
    byte_42AE4B4 = 1;
  }
  PK = QuestScriptEntity__CreatePK(
         id,
         folderType,
         materialFolderId,
         parentWarId,
         *(const MethodInfo **)&materialFolderId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__TryGetEntity__);
}


void __fastcall QuestScriptMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF285 & 1) == 0 )
  {
    sub_B52984(&QuestScriptMaster___c_TypeInfo);
    byte_42AF285 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(QuestScriptMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestScriptMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall QuestScriptMaster___c___ctor(QuestScriptMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestScriptMaster___c___GetEntityListFromQuestId_b__1_0(
        QuestScriptMaster___c_o *this,
        QuestScriptEntity_o *a,
        QuestScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.folderType - b->fields.folderType;
}


bool __fastcall QuestScriptMaster___c___IsScriptMoved_b__7_0(
        QuestScriptMaster___c_o *this,
        QuestScriptEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return !x->fields.folderType && !x->fields.materialFolderId && !x->fields.parentWarId && x->fields.priority == 0;
}


bool __fastcall QuestScriptMaster___c___IsScriptMoved_b__7_1(
        QuestScriptMaster___c_o *this,
        QuestScriptEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.parentWarId != 0;
}