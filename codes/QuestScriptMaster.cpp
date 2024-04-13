void __fastcall QuestScriptMaster___ctor(QuestScriptMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6F23 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E6F23 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    171,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string___ctor__);
}


System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetDummyFolderList(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x19
  __int64 v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x3
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x10
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0

  if ( (byte_42E6F1C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      parentWarId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&QuestScriptEntity_TypeInfo, v24, v25, v26);
    byte_42E6F1C = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v28);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v30);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_16:
      v41 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v37);
    }
    v42 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
            Enumerator,
            *(_QWORD *)(v41 + 8));
    if ( !v42 )
      goto LABEL_33;
    v44 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v42 + 300LL) < (unsigned int)v44
      || *(QuestScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)v42 + 200LL) + 8 * v44 - 8) != QuestScriptEntity_TypeInfo )
    {
      v42 = sub_B5D990(v42);
LABEL_33:
      sub_B5D69C(v42, v43);
    }
    if ( *(_DWORD *)(v42 + 32) == 4 && *(_DWORD *)(v42 + 40) == parentWarId )
    {
      if ( !v27 )
        sub_B5D69C(v42, QuestScriptEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    }
  }
  v45 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_29:
    v48 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v27;
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

  if ( (byte_42E6F24 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__GetEntity__,
      id,
      folderType,
      *(_QWORD *)&materialFolderId);
    byte_42E6F24 = 1;
  }
  PK = QuestScriptEntity__CreatePK(id, folderType, materialFolderId, parentWarId, *(const MethodInfo **)&parentWarId);
  return (QuestScriptEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_23FB260 *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__GetEntity__);
}


QuestScriptEntity_o *__fastcall QuestScriptMaster__GetEntityFromQuestId(
        QuestScriptMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_List_QuestScriptEntity__o *EntityListFromQuestId; // x0
  __int64 v10; // x1

  if ( (byte_42E6F19 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity__get_Count__, questId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity__get_Item__, v6, v7, v8);
    byte_42E6F19 = 1;
  }
  EntityListFromQuestId = QuestScriptMaster__GetEntityListFromQuestId(this, questId, method);
  if ( !EntityListFromQuestId )
    sub_B5D69C(0LL, v10);
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
  __int64 v3; // x3
  int32_t v4; // w19
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x22
  int32_t v27; // w23
  __int64 v28; // x10

  v4 = folderType;
  if ( (byte_42E6F1B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      folderType,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&QuestScriptEntity_TypeInfo, v21, v22, v23);
    byte_42E6F1B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&folderType = list;
        v28 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (QuestScriptEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == QuestScriptEntity_TypeInfo
          && LODWORD(list[1].klass) == v4 )
        {
          if ( !v26 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
        }
      }
      if ( ++v27 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(list, *(_QWORD *)&folderType);
  }
LABEL_14:
  if ( !v26 )
    goto LABEL_16;
  return (QuestScriptEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_QuestScriptEntity__ToArray__);
}


System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetEntityListFromQuestId(
        QuestScriptMaster_o *this,
        int32_t questId,
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
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x19
  __int64 v43; // x1
  void *list; // x0
  __int64 v45; // x1
  __int64 v46; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v52; // x3
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x10
  System_Collections_Generic_IEnumerator_T__c *v60; // x8
  unsigned __int64 v61; // x10
  int32_t *v62; // x11
  __int64 v63; // x0
  struct QuestScriptMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v66; // x21
  struct QuestScriptMaster___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7

  if ( (byte_42E6F1A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Comparison_QuestScriptEntity___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Comparison_QuestScriptEntity__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity__Sort__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&QuestScriptEntity_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_QuestScriptMaster___c__GetEntityListFromQuestId_b__1_0__, v36, v37, v38);
    sub_B5D5C4(&QuestScriptMaster___c_TypeInfo, v39, v40, v41);
    byte_42E6F1A = 1;
  }
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_43;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v45);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v49;
        p_offset += 4;
        if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v46);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v53 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v54 = 0LL;
      v55 = &v53->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v55 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v54;
        v55 += 4;
        if ( v54 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v56 = (__int64)&v53->vtable[*v55].method;
    }
    else
    {
LABEL_16:
      v56 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v52);
    }
    v57 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v56 + 8));
    if ( !v57 )
      goto LABEL_41;
    v59 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v57->klass->_2.bitflags2 + 1) < (unsigned int)v59
      || (QuestScriptEntity_c *)v57->klass->_2.typeHierarchy[v59 - 1] != QuestScriptEntity_TypeInfo )
    {
      v57 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v57);
LABEL_41:
      sub_B5D69C(v57, v58);
    }
    if ( v57->fields.missionTargetId == questId )
    {
      if ( !v42 )
        sub_B5D69C(v57, QuestScriptEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v42,
        v57,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
    }
  }
  v60 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v61 = 0LL;
    v62 = &v60->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
    {
      ++v61;
      v62 += 4;
      if ( v61 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v63 = (__int64)&v60->vtable[*v62].method;
  }
  else
  {
LABEL_28:
    v63 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v52);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v63)(Enumerator, *(_QWORD *)(v63 + 8));
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
    v66 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_QuestScriptEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v66,
      Method_QuestScriptMaster___c__GetEntityListFromQuestId_b__1_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_QuestScriptEntity___ctor__);
    v67 = QuestScriptMaster___c_TypeInfo->static_fields;
    v67->__9__1_0 = (struct System_Comparison_QuestScriptEntity__o *)_9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v67->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  if ( !v42 )
LABEL_43:
    sub_B5D69C(list, v43);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v42,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_QuestScriptEntity__Sort__);
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v42;
}


System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetMovedEventScriptList(
        QuestScriptMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x19
  __int64 v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x3
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  QuestScriptEntity_o *v42; // x0
  __int64 v43; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v44; // x22
  __int64 v45; // x9
  _BOOL8 v46; // x0
  __int64 v47; // x1
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0

  if ( (byte_42E6F21 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&QuestScriptEntity_TypeInfo, v24, v25, v26);
    byte_42E6F21 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v28);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v30);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_16:
      v41 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v37);
    }
    v42 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                   Enumerator,
                                   *(_QWORD *)(v41 + 8));
    v44 = (EventMissionProgressRequest_Argument_ProgressData_o *)v42;
    if ( !v42 )
      goto LABEL_34;
    v45 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v45
      || (QuestScriptEntity_c *)v42->klass->_2.typeHierarchy[v45 - 1] != QuestScriptEntity_TypeInfo )
    {
      v42 = (QuestScriptEntity_o *)sub_B5D990(v42);
LABEL_34:
      sub_B5D69C(v42, v43);
    }
    if ( v42->fields.folderType == 2 && v42->fields.materialFolderId == eventId )
    {
      v46 = QuestScriptEntity__CheckScriptRelease(v42, (const MethodInfo *)QuestScriptEntity_TypeInfo);
      if ( v46 )
      {
        if ( !v27 )
          sub_B5D69C(v46, v47);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v27,
          v44,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
      }
    }
  }
  v48 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      ++v49;
      v50 += 4;
      if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_30:
    v51 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v27;
}


System_Collections_Generic_List_int__o *__fastcall QuestScriptMaster__GetMovedEventScriptList_22276612(
        QuestScriptMaster_o *this,
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
  System_Collections_Generic_List_int__o *v26; // x19
  __int64 v27; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v29; // x1
  __int64 v30; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v36; // x3
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  QuestScriptEntity_o *v41; // x0
  __int64 v42; // x1
  QuestScriptEntity_o *v43; // x21
  __int64 v44; // x9
  _BOOL8 IsMaterialLatestClear; // x0
  __int64 v46; // x1
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  unsigned __int64 v48; // x10
  int32_t *v49; // x11
  __int64 v50; // x0

  if ( (byte_42E6F22 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&QuestScriptEntity_TypeInfo, v23, v24, v25);
    byte_42E6F22 = 1;
  }
  v26 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v27);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v29);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v33;
        p_offset += 4;
        if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v30);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v37 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_16:
      v40 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v36);
    }
    v41 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                                   Enumerator,
                                   *(_QWORD *)(v40 + 8));
    v43 = v41;
    if ( !v41 )
      goto LABEL_32;
    v44 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v41->klass->_2.bitflags2 + 1) < (unsigned int)v44
      || (QuestScriptEntity_c *)v41->klass->_2.typeHierarchy[v44 - 1] != QuestScriptEntity_TypeInfo )
    {
      v41 = (QuestScriptEntity_o *)sub_B5D990(v41);
LABEL_32:
      sub_B5D69C(v41, v42);
    }
    IsMaterialLatestClear = QuestScriptEntity__IsMaterialLatestClear(
                              v41,
                              (const MethodInfo *)QuestScriptEntity_TypeInfo);
    if ( IsMaterialLatestClear )
    {
      if ( !v26 )
        sub_B5D69C(IsMaterialLatestClear, v46);
      System_Collections_Generic_List_int___Add(
        v26,
        v43->fields.id,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v47 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v48 = 0LL;
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      ++v48;
      v49 += 4;
      if ( v48 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_28:
    v50 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v36);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(Enumerator, *(_QWORD *)(v50 + 8));
  return v26;
}


System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetMovedScriptList(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x19
  __int64 v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x3
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  QuestScriptEntity_o *v42; // x0
  __int64 v43; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v44; // x22
  __int64 v45; // x9
  _BOOL8 v46; // x0
  __int64 v47; // x1
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0

  if ( (byte_42E6F1F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      parentWarId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&QuestScriptEntity_TypeInfo, v24, v25, v26);
    byte_42E6F1F = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v28);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v30);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_16:
      v41 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v37);
    }
    v42 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                   Enumerator,
                                   *(_QWORD *)(v41 + 8));
    v44 = (EventMissionProgressRequest_Argument_ProgressData_o *)v42;
    if ( !v42 )
      goto LABEL_34;
    v45 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v45
      || (QuestScriptEntity_c *)v42->klass->_2.typeHierarchy[v45 - 1] != QuestScriptEntity_TypeInfo )
    {
      v42 = (QuestScriptEntity_o *)sub_B5D990(v42);
LABEL_34:
      sub_B5D69C(v42, v43);
    }
    if ( !v42->fields.folderType && v42->fields.parentWarId == parentWarId )
    {
      v46 = QuestScriptEntity__CheckScriptRelease(v42, (const MethodInfo *)QuestScriptEntity_TypeInfo);
      if ( v46 )
      {
        if ( !v27 )
          sub_B5D69C(v46, v47);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v27,
          v44,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
      }
    }
  }
  v48 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      ++v49;
      v50 += 4;
      if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_30:
    v51 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v27;
}


System_Collections_Generic_List_QuestScriptEntity__o *__fastcall QuestScriptMaster__GetSubordinateData(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x19
  __int64 v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x3
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  QuestScriptEntity_o *v42; // x0
  __int64 v43; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v44; // x22
  __int64 v45; // x9
  _BOOL8 v46; // x0
  __int64 v47; // x1
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0

  if ( (byte_42E6F1D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      parentWarId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&QuestScriptEntity_TypeInfo, v24, v25, v26);
    byte_42E6F1D = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v28);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v30);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_16:
      v41 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v37);
    }
    v42 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                   Enumerator,
                                   *(_QWORD *)(v41 + 8));
    v44 = (EventMissionProgressRequest_Argument_ProgressData_o *)v42;
    if ( !v42 )
      goto LABEL_33;
    v45 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v45
      || (QuestScriptEntity_c *)v42->klass->_2.typeHierarchy[v45 - 1] != QuestScriptEntity_TypeInfo )
    {
      v42 = (QuestScriptEntity_o *)sub_B5D990(v42);
LABEL_33:
      sub_B5D69C(v42, v43);
    }
    if ( v42->fields.parentWarId == parentWarId )
    {
      v46 = QuestScriptEntity__CheckScriptRelease(v42, (const MethodInfo *)QuestScriptEntity_TypeInfo);
      if ( v46 )
      {
        if ( !v27 )
          sub_B5D69C(v46, v47);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v27,
          v44,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
      }
    }
  }
  v48 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      ++v49;
      v50 += 4;
      if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_29:
    v51 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
  return (System_Collections_Generic_List_QuestScriptEntity__o *)v27;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptMaster__IsDummyFolder(
        QuestScriptMaster_o *this,
        int32_t parentWarId,
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
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  _DWORD *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x9
  bool v33; // w20
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  int v39; // [xsp+0h] [xbp-40h]

  if ( (byte_42E6F1E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      parentWarId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&QuestScriptEntity_TypeInfo, v15, v16, v17);
    byte_42E6F1E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&parentWarId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v20);
    }
    v30 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                      Enumerator,
                      *(_QWORD *)(v29 + 8));
    if ( !v30 )
      goto LABEL_35;
    v32 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 300LL) < (unsigned int)v32
      || *(QuestScriptEntity_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * v32 - 8) != QuestScriptEntity_TypeInfo )
    {
      v30 = (_DWORD *)sub_B5D990(v30);
LABEL_35:
      sub_B5D69C(v30, v31);
    }
    if ( v30[8] == 4 && v30[9] == parentWarId )
    {
      v39 = 70;
      v33 = 1;
      goto LABEL_25;
    }
  }
  v33 = 0;
  v39 = 68;
LABEL_25:
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_29:
    v37 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v20);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  if ( v39 == 68 )
    return 0;
  return v33;
}


bool __fastcall QuestScriptMaster__IsScriptMoved(QuestScriptMaster_o *this, int32_t scriptId, const MethodInfo *method)
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
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x19
  __int64 v49; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v51; // x1
  __int64 v52; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v55; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v58; // x3
  System_Collections_Generic_IEnumerator_T__c *v59; // x8
  unsigned __int64 v60; // x10
  int32_t *v61; // x11
  __int64 v62; // x0
  QuestScriptEntity_o *v63; // x0
  __int64 v64; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v65; // x22
  __int64 v66; // x9
  _BOOL8 v67; // x0
  __int64 v68; // x1
  System_Collections_Generic_IEnumerator_T__c *v69; // x8
  unsigned __int64 v70; // x10
  int32_t *v71; // x11
  __int64 v72; // x0
  QuestScriptMaster___c_c *v73; // x0
  struct QuestScriptMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__7_0; // x20
  Il2CppObject *v76; // x21
  struct QuestScriptMaster___c_StaticFields *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  QuestScriptMaster___c_c *v85; // x0
  struct QuestScriptMaster___c_StaticFields *v86; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__7_1; // x20
  Il2CppObject *v88; // x21
  struct QuestScriptMaster___c_StaticFields *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7

  if ( (byte_42E6F20 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_QuestScriptEntity___, scriptId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_QuestScriptEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_QuestScriptEntity__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_QuestScriptEntity__bool__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptEntity___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_QuestScriptEntity__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&QuestScriptEntity_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_QuestScriptMaster___c__IsScriptMoved_b__7_0__, v39, v40, v41);
    sub_B5D5C4(&Method_QuestScriptMaster___c__IsScriptMoved_b__7_1__, v42, v43, v44);
    sub_B5D5C4(&QuestScriptMaster___c_TypeInfo, v45, v46, v47);
    byte_42E6F20 = 1;
  }
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v49);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v51);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v55 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v55;
        p_offset += 4;
        if ( v55 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v52);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v59 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v60 = 0LL;
      v61 = &v59->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v61 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v60;
        v61 += 4;
        if ( v60 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v62 = (__int64)&v59->vtable[*v61].method;
    }
    else
    {
LABEL_16:
      v62 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v58);
    }
    v63 = (QuestScriptEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v62)(
                                   Enumerator,
                                   *(_QWORD *)(v62 + 8));
    v65 = (EventMissionProgressRequest_Argument_ProgressData_o *)v63;
    if ( !v63 )
      goto LABEL_54;
    v66 = *(&QuestScriptEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v63->klass->_2.bitflags2 + 1) < (unsigned int)v66
      || (QuestScriptEntity_c *)v63->klass->_2.typeHierarchy[v66 - 1] != QuestScriptEntity_TypeInfo )
    {
      v63 = (QuestScriptEntity_o *)sub_B5D990(v63);
LABEL_54:
      sub_B5D69C(v63, v64);
    }
    if ( v63->fields.id == scriptId && v63->fields.folderType != 4 )
    {
      v67 = QuestScriptEntity__CheckScriptRelease(v63, (const MethodInfo *)QuestScriptEntity_TypeInfo);
      if ( v67 )
      {
        if ( !v48 )
          sub_B5D69C(v67, v68);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v48,
          v65,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestScriptEntity__Add__);
      }
    }
  }
  v69 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v70 = 0LL;
    v71 = &v69->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
    {
      ++v70;
      v71 += 4;
      if ( v70 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v72 = (__int64)&v69->vtable[*v71].method;
  }
  else
  {
LABEL_30:
    v72 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v58);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v72)(Enumerator, *(_QWORD *)(v72 + 8));
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v48,
          (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_QuestScriptEntity___) )
    return 0;
  v73 = QuestScriptMaster___c_TypeInfo;
  if ( (BYTE3(QuestScriptMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaster___c_TypeInfo);
    v73 = QuestScriptMaster___c_TypeInfo;
  }
  static_fields = v73->static_fields;
  _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v73->vtable._0_Equals.methodPtr) & 4) != 0 && !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73);
      static_fields = QuestScriptMaster___c_TypeInfo->static_fields;
    }
    v76 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_QuestScriptEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__7_0,
      v76,
      Method_QuestScriptMaster___c__IsScriptMoved_b__7_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_QuestScriptEntity__bool___ctor__);
    v77 = QuestScriptMaster___c_TypeInfo->static_fields;
    v77->__9__7_0 = (struct System_Func_QuestScriptEntity__bool__o *)_9__7_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v77->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
  }
  if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_List_T__o *)v48,
          (System_Func_T__bool__o *)_9__7_0,
          (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_QuestScriptEntity___) )
  {
    v85 = QuestScriptMaster___c_TypeInfo;
    if ( (BYTE3(QuestScriptMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestScriptMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestScriptMaster___c_TypeInfo);
      v85 = QuestScriptMaster___c_TypeInfo;
    }
    v86 = v85->static_fields;
    _9__7_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v86->__9__7_1;
    if ( !_9__7_1 )
    {
      if ( (BYTE3(v85->vtable._0_Equals.methodPtr) & 4) != 0 && !v85->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v85);
        v86 = QuestScriptMaster___c_TypeInfo->static_fields;
      }
      v88 = (Il2CppObject *)v86->__9;
      _9__7_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_QuestScriptEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__7_1,
        v88,
        Method_QuestScriptMaster___c__IsScriptMoved_b__7_1__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_QuestScriptEntity__bool___ctor__);
      v89 = QuestScriptMaster___c_TypeInfo->static_fields;
      v89->__9__7_1 = (struct System_Func_QuestScriptEntity__bool__o *)_9__7_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v89->__9__7_1,
        (System_Int32_array **)_9__7_1,
        v90,
        v91,
        v92,
        v93,
        v94,
        v95);
    }
    return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
             (System_Collections_Generic_List_T__o *)v48,
             (System_Func_T__bool__o *)_9__7_1,
             (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_QuestScriptEntity___);
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

  if ( (byte_42E6F25 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&folderType);
    byte_42E6F25 = 1;
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
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_QuestScriptMaster__QuestScriptEntity__string__TryGetEntity__);
}


void __fastcall QuestScriptMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7F29 & 1) == 0 )
  {
    sub_B5D5C4(&QuestScriptMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7F29 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestScriptMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestScriptMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, a);
  return a->fields.folderType - b->fields.folderType;
}


bool __fastcall QuestScriptMaster___c___IsScriptMoved_b__7_0(
        QuestScriptMaster___c_o *this,
        QuestScriptEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return !x->fields.folderType && !x->fields.materialFolderId && !x->fields.parentWarId && x->fields.priority == 0;
}


bool __fastcall QuestScriptMaster___c___IsScriptMoved_b__7_1(
        QuestScriptMaster___c_o *this,
        QuestScriptEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.parentWarId != 0;
}