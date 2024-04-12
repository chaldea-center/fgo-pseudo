void __fastcall QuestScriptMaterialNextMaster___ctor(QuestScriptMaterialNextMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AE4B7 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__);
    byte_42AE4B7 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    407,
    (const MethodInfo_23E268C *)Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__);
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
      sub_B52A5C(this, condQuestId);
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
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  __int64 v16; // x22
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  System_Int32_array **v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x10
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v31; // x24
  __int64 v32; // x0
  __int64 v33; // x1
  _BOOL8 v34; // x0
  __int64 v35; // x1
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0

  if ( (byte_42AE4BC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    sub_B52984(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_B52984(&Method_System_Predicate_QuestScriptMaterialNextEntity___ctor__);
    sub_B52984(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    sub_B52984(&Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__);
    sub_B52984(&QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo);
    sub_B52984(&UserQuestEntity_TypeInfo);
    byte_42AE4BC = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list,
        v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserQuestEntity__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v7,
          (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__),
        !list) )
  {
    sub_B52A5C(Master_WarQuestSelectionMaster, v5);
  }
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
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = sub_B52A54(QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo);
    QuestScriptMaterialNextMaster___c__DisplayClass6_0___ctor(
      (QuestScriptMaterialNextMaster___c__DisplayClass6_0_o *)v16,
      0LL);
    v18 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_20:
      v21 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
    }
    v22 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                   Enumerator,
                                   *(_QWORD *)(v21 + 8));
    if ( !v16 )
      goto LABEL_38;
    if ( v22 )
    {
      v30 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( LOBYTE((*v22)->m_Items[68]) < (unsigned int)v30
        || *(UserQuestEntity_c **)(*(_QWORD *)&(*v22)->m_Items[43] + 8 * v30 - 8) != UserQuestEntity_TypeInfo )
      {
        v22 = (System_Int32_array **)sub_B52D50(v22);
LABEL_38:
        sub_B52A5C(v22, v23);
      }
    }
    *(_QWORD *)(v16 + 16) = v22;
    sub_B52920((BattleServantConfConponent_o *)(v16 + 16), v22, v24, v25, v26, v27, v28, v29);
    v31 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v31,
      (Il2CppObject *)v16,
      Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__,
      (const MethodInfo_28D2DBC *)Method_System_Predicate_QuestScriptMaterialNextEntity___ctor__);
    if ( !nextEntities )
      sub_B52A5C(v32, v33);
    v34 = System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
            (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)nextEntities,
            (System_Predicate_T__o *)v31,
            (const MethodInfo_2FF1E90 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    if ( v34 )
    {
      if ( !v7 )
        sub_B52A5C(v34, v35);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        *(EventMissionProgressRequest_Argument_ProgressData_o **)(v16 + 16),
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    }
  }
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_34;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_34:
    v39 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
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
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  _DWORD *v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  __int64 v23; // x9
  int32_t v24; // w1
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *NextEntitiesGroupByGroupId; // x22
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0

  if ( (byte_42AE4BB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
    sub_B52984(&QuestScriptMaterialNextEntity_TypeInfo);
    byte_42AE4BB = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
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
    v20 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                      Enumerator,
                      *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_33;
    v23 = *(&QuestScriptMaterialNextEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v20 + 300LL) < (unsigned int)v23
      || *(QuestScriptMaterialNextEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * v23 - 8) != QuestScriptMaterialNextEntity_TypeInfo )
    {
      v20 = (_DWORD *)sub_B52D50(v20);
LABEL_33:
      sub_B52A5C(v20, v21);
    }
    if ( v20[4] == questId )
    {
      v24 = v20[7];
      if ( v24 )
      {
        NextEntitiesGroupByGroupId = QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(this, v24, v22);
        goto LABEL_25;
      }
    }
  }
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)v5;
LABEL_25:
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

  if ( (byte_42AE4BA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
    sub_B52984(&QuestScriptMaterialNextEntity_TypeInfo);
    byte_42AE4BA = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
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
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_32;
    v22 = *(&QuestScriptMaterialNextEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (QuestScriptMaterialNextEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != QuestScriptMaterialNextEntity_TypeInfo )
    {
      v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52D50(v20);
LABEL_32:
      sub_B52A5C(v20, v21);
    }
    if ( v20->fields.eventId == groupId )
    {
      if ( !v5 )
        sub_B52A5C(v20, QuestScriptMaterialNextEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v20,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
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
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x22
  __int64 v22; // x9
  int32_t missionConditionDetailId; // w8
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *NextEntitiesGroupByGroupId; // x20
  __int64 v25; // x0
  __int64 v26; // x1
  int v27; // w8
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  int v33; // [xsp+0h] [xbp-50h]

  if ( (byte_42AE4B9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
    sub_B52984(&QuestScriptMaterialNextEntity_TypeInfo);
    byte_42AE4B9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  do
  {
    do
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
      {
        NextEntitiesGroupByGroupId = 0LL;
        v27 = 102;
        goto LABEL_29;
      }
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
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                                                     Enumerator,
                                                                     *(_QWORD *)(v17 + 8));
      v21 = v18;
      if ( !v18 )
        goto LABEL_39;
      v22 = *(&QuestScriptMaterialNextEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v22
        || (QuestScriptMaterialNextEntity_c *)v18->klass->_2.typeHierarchy[v22 - 1] != QuestScriptMaterialNextEntity_TypeInfo )
      {
        v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52D50(v18);
LABEL_39:
        sub_B52A5C(v18, v19);
      }
    }
    while ( v18->fields.missionTargetId != questId );
    missionConditionDetailId = v18->fields.missionConditionDetailId;
    if ( missionConditionDetailId == 2 )
    {
      NextEntitiesGroupByGroupId = QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
                                     this,
                                     v18->fields.targetId,
                                     v20);
      goto LABEL_28;
    }
  }
  while ( missionConditionDetailId != 1 );
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)sub_B52A54(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)NextEntitiesGroupByGroupId,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  if ( !NextEntitiesGroupByGroupId )
    sub_B52A5C(v25, v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)NextEntitiesGroupByGroupId,
    v21,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
LABEL_28:
  v27 = 104;
LABEL_29:
  v33 = v27;
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_33:
    v31 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v13);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  if ( v33 == 102 )
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

  if ( (byte_42AE4BD & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_UserQuestEntity___ctor__);
    sub_B52984(&System_Comparison_UserQuestEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
    sub_B52984(&Method_QuestScriptMaterialNextMaster___c__GetSortedGroupUserQuestEntities_b__7_0__);
    this = (QuestScriptMaterialNextMaster_o *)sub_B52984(&QuestScriptMaterialNextMaster___c_TypeInfo);
    byte_42AE4BD = 1;
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
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v10,
      Method_QuestScriptMaterialNextMaster___c__GetSortedGroupUserQuestEntities_b__7_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_UserQuestEntity___ctor__);
    v11 = QuestScriptMaterialNextMaster___c_TypeInfo->static_fields;
    v11->__9__7_0 = (struct System_Comparison_UserQuestEntity__o *)_9__7_0;
    sub_B52920(
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
    sub_B52A5C(GroupUserQuestEntities, v5);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v6,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
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

  if ( (byte_42AE4B8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&QuestScriptMaterialNextEntity_TypeInfo);
    byte_42AE4B8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&questId);
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
    v19 = *(&QuestScriptMaterialNextEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 300LL) < (unsigned int)v19
      || *(QuestScriptMaterialNextEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * v19 - 8) != QuestScriptMaterialNextEntity_TypeInfo )
    {
      v17 = (_DWORD *)sub_B52D50(v17);
LABEL_35:
      sub_B52A5C(v17, v18);
    }
    if ( v17[4] == questId && v17[7] )
    {
      v26 = 69;
      v20 = 1;
      goto LABEL_25;
    }
  }
  v20 = 0;
  v26 = 67;
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
  if ( v26 == 67 )
    return 0;
  return v20;
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

  if ( (byte_42AF286 & 1) == 0 )
  {
    sub_B52984(&QuestScriptMaterialNextMaster___c_TypeInfo);
    byte_42AF286 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(QuestScriptMaterialNextMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestScriptMaterialNextMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, x);
  return x->fields.questId == entity->fields.questId;
}