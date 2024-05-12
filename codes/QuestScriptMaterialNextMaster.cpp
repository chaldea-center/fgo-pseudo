void __fastcall QuestScriptMaterialNextMaster___ctor(QuestScriptMaterialNextMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4389942 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__);
    byte_4389942 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    407,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__);
}


UserQuestEntity_o *__fastcall QuestScriptMaterialNextMaster__GetCheckTargetEntity(
        QuestScriptMaterialNextMaster_o *this,
        int32_t condQuestId,
        UserQuestEntity_o *userLastEntity,
        UserQuestEntity_o *materialLastEntity,
        const MethodInfo *method)
{
  UserQuestEntity_o *v5; // x8

  if ( userLastEntity && materialLastEntity )
  {
    if ( userLastEntity->fields.updatedAt >= materialLastEntity->fields.updatedAt )
      v5 = userLastEntity;
    else
      v5 = materialLastEntity;
  }
  else
  {
    if ( materialLastEntity )
      v5 = materialLastEntity;
    else
      v5 = userLastEntity;
    if ( !v5 )
      sub_B7769C(this, condQuestId);
  }
  if ( v5->fields.questId == condQuestId )
    return v5;
  else
    return 0LL;
}


System_Collections_Generic_List_UserQuestEntity__o *__fastcall QuestScriptMaterialNextMaster__GetGroupUserQuestEntities(
        QuestScriptMaterialNextMaster_o *this,
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *nextEntities,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x22
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  System_Int32_array **v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x10
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x24
  __int64 v29; // x0
  __int64 v30; // x1
  _BOOL8 v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0

  if ( (byte_4389947 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_B775C4(&Method_System_Predicate_QuestScriptMaterialNextEntity___ctor__);
    sub_B775C4(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    sub_B775C4(&Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__);
    sub_B775C4(&QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo);
    sub_B775C4(&UserQuestEntity_TypeInfo);
    byte_4389947 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list,
        v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserQuestEntity__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v7,
          (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__),
        !list) )
  {
    sub_B7769C(Master_WarQuestSelectionMaster, v5);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = sub_B77694(QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo);
    QuestScriptMaterialNextMaster___c__DisplayClass6_0___ctor(
      (QuestScriptMaterialNextMaster___c__DisplayClass6_0_o *)v14,
      0LL);
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_20:
      v18 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                   Enumerator,
                                   *(_QWORD *)(v18 + 8));
    if ( !v14 )
      goto LABEL_38;
    if ( v19 )
    {
      v27 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( LOBYTE((*v19)->m_Items[68]) < (unsigned int)v27
        || *(UserQuestEntity_c **)(*(_QWORD *)&(*v19)->m_Items[43] + 8 * v27 - 8) != UserQuestEntity_TypeInfo )
      {
        v19 = (System_Int32_array **)sub_B77990(v19);
LABEL_38:
        sub_B7769C(v19, v20);
      }
    }
    *(_QWORD *)(v14 + 16) = v19;
    sub_B77560((BattleServantConfConponent_o *)(v14 + 16), v19, v21, v22, v23, v24, v25, v26);
    v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v28,
      (Il2CppObject *)v14,
      Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__,
      (const MethodInfo_2C3248C *)Method_System_Predicate_QuestScriptMaterialNextEntity___ctor__);
    if ( !nextEntities )
      sub_B7769C(v29, v30);
    v31 = System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
            (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)nextEntities,
            (System_Predicate_T__o *)v28,
            (const MethodInfo_3053B24 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    if ( v31 )
    {
      if ( !v7 )
        sub_B7769C(v31, v32);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        *(EventMissionProgressRequest_Argument_ProgressData_o **)(v14 + 16),
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    }
  }
  v33 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_34;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_34:
    v36 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return (System_Collections_Generic_List_UserQuestEntity__o *)v7;
}


System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetIncludedGroups(
        QuestScriptMaterialNextMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  _DWORD *v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  __int64 v21; // x9
  int32_t v22; // w1
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *NextEntitiesGroupByGroupId; // x22
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0

  if ( (byte_4389946 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
    sub_B775C4(&QuestScriptMaterialNextEntity_TypeInfo);
    byte_4389946 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v17 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                      Enumerator,
                      *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_33;
    v21 = *(&QuestScriptMaterialNextEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 300LL) < (unsigned int)v21
      || *(QuestScriptMaterialNextEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * v21 - 8) != QuestScriptMaterialNextEntity_TypeInfo )
    {
      v18 = (_DWORD *)sub_B77990(v18);
LABEL_33:
      sub_B7769C(v18, v19);
    }
    if ( v18[4] == questId )
    {
      v22 = v18[7];
      if ( v22 )
      {
        NextEntitiesGroupByGroupId = QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(this, v22, v20);
        goto LABEL_25;
      }
    }
  }
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)v5;
LABEL_25:
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
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_29:
    v27 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return NextEntitiesGroupByGroupId;
}


System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
        QuestScriptMaterialNextMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x10
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0

  if ( (byte_4389945 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
    sub_B775C4(&QuestScriptMaterialNextEntity_TypeInfo);
    byte_4389945 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v17 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_32;
    v20 = *(&QuestScriptMaterialNextEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (QuestScriptMaterialNextEntity_c *)v18->klass->_2.typeHierarchy[v20 - 1] != QuestScriptMaterialNextEntity_TypeInfo )
    {
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B77990(v18);
LABEL_32:
      sub_B7769C(v18, v19);
    }
    if ( v18->fields.eventId == groupId )
    {
      if ( !v5 )
        sub_B7769C(v18, QuestScriptMaterialNextEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v18,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
    }
  }
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
        goto LABEL_28;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_28:
    v24 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetNextQuestEntities(
        QuestScriptMaterialNextMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x22
  __int64 v20; // x9
  int32_t missionConditionDetailId; // w8
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *NextEntitiesGroupByGroupId; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  int v25; // w8
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  int v31; // [xsp+0h] [xbp-50h]

  if ( (byte_4389944 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
    sub_B775C4(&QuestScriptMaterialNextEntity_TypeInfo);
    byte_4389944 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v6);
  do
  {
    do
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v9 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v9;
          p_offset += 4;
          if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_9;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_9:
        p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
      {
        NextEntitiesGroupByGroupId = 0LL;
        v25 = 102;
        goto LABEL_29;
      }
      v12 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v13 = 0LL;
        v14 = &v12->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v13;
          v14 += 4;
          if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v15 = (__int64)&v12->vtable[*v14].method;
      }
      else
      {
LABEL_16:
        v15 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                                                     Enumerator,
                                                                     *(_QWORD *)(v15 + 8));
      v19 = v16;
      if ( !v16 )
        goto LABEL_39;
      v20 = *(&QuestScriptMaterialNextEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (QuestScriptMaterialNextEntity_c *)v16->klass->_2.typeHierarchy[v20 - 1] != QuestScriptMaterialNextEntity_TypeInfo )
      {
        v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B77990(v16);
LABEL_39:
        sub_B7769C(v16, v17);
      }
    }
    while ( v16->fields.missionTargetId != questId );
    missionConditionDetailId = v16->fields.missionConditionDetailId;
    if ( missionConditionDetailId == 2 )
    {
      NextEntitiesGroupByGroupId = QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
                                     this,
                                     v16->fields.targetId,
                                     v18);
      goto LABEL_28;
    }
  }
  while ( missionConditionDetailId != 1 );
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)sub_B77694(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)NextEntitiesGroupByGroupId,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  if ( !NextEntitiesGroupByGroupId )
    sub_B7769C(v23, v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)NextEntitiesGroupByGroupId,
    v19,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
LABEL_28:
  v25 = 104;
LABEL_29:
  v31 = v25;
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
        goto LABEL_33;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_33:
    v29 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  if ( v31 == 102 )
    return 0LL;
  return NextEntitiesGroupByGroupId;
}


System_Collections_Generic_List_UserQuestEntity__o *__fastcall QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
        QuestScriptMaterialNextMaster_o *this,
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_UserQuestEntity__o *GroupUserQuestEntities; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v6; // x19
  QuestScriptMaterialNextMaster___c_c *v7; // x8
  struct QuestScriptMaterialNextMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x20
  Il2CppObject *v10; // x21
  struct QuestScriptMaterialNextMaster___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4389948 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Comparison_UserQuestEntity___ctor__);
    sub_B775C4(&System_Comparison_UserQuestEntity__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
    sub_B775C4(&Method_QuestScriptMaterialNextMaster___c__GetSortedGroupUserQuestEntities_b__7_0__);
    this = (QuestScriptMaterialNextMaster_o *)sub_B775C4(&QuestScriptMaterialNextMaster___c_TypeInfo);
    byte_4389948 = 1;
  }
  GroupUserQuestEntities = QuestScriptMaterialNextMaster__GetGroupUserQuestEntities(this, groupEntities, method);
  v6 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)GroupUserQuestEntities;
  v7 = QuestScriptMaterialNextMaster___c_TypeInfo;
  if ( (BYTE3(QuestScriptMaterialNextMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestScriptMaterialNextMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialNextMaster___c_TypeInfo);
    v7 = QuestScriptMaterialNextMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = QuestScriptMaterialNextMaster___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v10,
      Method_QuestScriptMaterialNextMaster___c__GetSortedGroupUserQuestEntities_b__7_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_UserQuestEntity___ctor__);
    v11 = QuestScriptMaterialNextMaster___c_TypeInfo->static_fields;
    v11->__9__7_0 = (struct System_Comparison_UserQuestEntity__o *)_9__7_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v11->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !v6 )
    sub_B7769C(GroupUserQuestEntities, v5);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v6,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v6;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptMaterialNextMaster__IsMaterialGroupQuest(
        QuestScriptMaterialNextMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  _DWORD *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x9
  bool v19; // w20
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  int v25; // [xsp+0h] [xbp-40h]

  if ( (byte_4389943 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&QuestScriptMaterialNextEntity_TypeInfo);
    byte_4389943 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                      Enumerator,
                      *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_35;
    v18 = *(&QuestScriptMaterialNextEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 300LL) < (unsigned int)v18
      || *(QuestScriptMaterialNextEntity_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * v18 - 8) != QuestScriptMaterialNextEntity_TypeInfo )
    {
      v16 = (_DWORD *)sub_B77990(v16);
LABEL_35:
      sub_B7769C(v16, v17);
    }
    if ( v16[4] == questId && v16[7] )
    {
      v25 = 69;
      v19 = 1;
      goto LABEL_25;
    }
  }
  v19 = 0;
  v25 = 67;
LABEL_25:
  v20 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_29:
    v23 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  if ( v25 == 67 )
    return 0;
  return v19;
}


void __fastcall QuestScriptMaterialNextMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438B1B3 & 1) == 0 )
  {
    sub_B775C4(&QuestScriptMaterialNextMaster___c_TypeInfo);
    byte_438B1B3 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(QuestScriptMaterialNextMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestScriptMaterialNextMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall QuestScriptMaterialNextMaster___c___ctor(
        QuestScriptMaterialNextMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestScriptMaterialNextMaster___c___GetSortedGroupUserQuestEntities_b__7_0(
        QuestScriptMaterialNextMaster___c_o *this,
        UserQuestEntity_o *x,
        UserQuestEntity_o *y,
        const MethodInfo *method)
{
  int64_t v4; // x8

  if ( !y || !x )
    sub_B7769C(this, x);
  v4 = y->fields.updatedAt - x->fields.updatedAt;
  if ( v4 < 0 )
    return -1;
  if ( v4 )
    return 1;
  return y->fields.questId - x->fields.questId;
}


void __fastcall QuestScriptMaterialNextMaster___c__DisplayClass6_0___ctor(
        QuestScriptMaterialNextMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestScriptMaterialNextMaster___c__DisplayClass6_0___GetGroupUserQuestEntities_b__0(
        QuestScriptMaterialNextMaster___c__DisplayClass6_0_o *this,
        QuestScriptMaterialNextEntity_o *x,
        const MethodInfo *method)
{
  struct UserQuestEntity_o *entity; // x8

  if ( !x || (entity = this->fields.entity) == 0LL )
    sub_B7769C(this, x);
  return x->fields.questId == entity->fields.questId;
}