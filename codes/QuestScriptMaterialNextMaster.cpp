void __fastcall QuestScriptMaterialNextMaster___ctor(QuestScriptMaterialNextMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418609B & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__,
      method);
    byte_418609B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    406,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__);
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
      sub_B2C434(this, condQuestId);
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
  __int64 v4; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v29; // x3
  __int64 v30; // x22
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  System_Int32_array **v36; // x0
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x10
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v45; // x24
  __int64 v46; // x0
  __int64 v47; // x1
  _BOOL8 v48; // x0
  __int64 v49; // x1
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0

  if ( (byte_41860A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, nextEntities);
    sub_B2C35C(&Method_DataManager_GetMaster_UserQuestMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v12);
    sub_B2C35C(&Method_System_Predicate_QuestScriptMaterialNextEntity___ctor__, v13);
    sub_B2C35C(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo, v14);
    sub_B2C35C(&Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__, v15);
    sub_B2C35C(&QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo, v16);
    sub_B2C35C(&UserQuestEntity_TypeInfo, v17);
    byte_41860A0 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list,
        v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserQuestEntity__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v21,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__),
        !list) )
  {
    sub_B2C434(Master_WarQuestSelectionMaster, v19);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = sub_B2C42C(QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo);
    QuestScriptMaterialNextMaster___c__DisplayClass6_0___ctor(
      (QuestScriptMaterialNextMaster___c__DisplayClass6_0_o *)v30,
      0LL);
    v32 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_20:
      v35 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v31);
    }
    v36 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                   Enumerator,
                                   *(_QWORD *)(v35 + 8));
    if ( !v30 )
      goto LABEL_38;
    if ( v36 )
    {
      v44 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( LOBYTE((*v36)->m_Items[68]) < (unsigned int)v44
        || *(UserQuestEntity_c **)(*(_QWORD *)&(*v36)->m_Items[43] + 8 * v44 - 8) != UserQuestEntity_TypeInfo )
      {
        v36 = (System_Int32_array **)sub_B2C728(v36);
LABEL_38:
        sub_B2C434(v36, v37);
      }
    }
    *(_QWORD *)(v30 + 16) = v36;
    sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 16), v36, v38, v39, v40, v41, v42, v43);
    v45 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v45,
      (Il2CppObject *)v30,
      Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_QuestScriptMaterialNextEntity___ctor__);
    if ( !nextEntities )
      sub_B2C434(v46, v47);
    v48 = System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
            (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)nextEntities,
            (System_Predicate_T__o *)v45,
            (const MethodInfo_2EF4CEC *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    if ( v48 )
    {
      if ( !v21 )
        sub_B2C434(v48, v49);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v21,
        *(EventMissionProgressRequest_Argument_ProgressData_o **)(v30 + 16),
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    }
  }
  v50 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      ++v51;
      v52 += 4;
      if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_34;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_34:
    v53 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v29);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(Enumerator, *(_QWORD *)(v53 + 8));
  return (System_Collections_Generic_List_UserQuestEntity__o *)v21;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetIncludedGroups(
        QuestScriptMaterialNextMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  _DWORD *v26; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  __int64 v29; // x9
  int32_t v30; // w1
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *NextEntitiesGroupByGroupId; // x22
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0

  if ( (byte_418609F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo, v9);
    sub_B2C35C(&QuestScriptMaterialNextEntity_TypeInfo, v10);
    byte_418609F = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
    }
    v26 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                      Enumerator,
                      *(_QWORD *)(v25 + 8));
    if ( !v26 )
      goto LABEL_33;
    v29 = *(&QuestScriptMaterialNextEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v26 + 300LL) < (unsigned int)v29
      || *(QuestScriptMaterialNextEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * v29 - 8) != QuestScriptMaterialNextEntity_TypeInfo )
    {
      v26 = (_DWORD *)sub_B2C728(v26);
LABEL_33:
      sub_B2C434(v26, v27);
    }
    if ( v26[4] == questId )
    {
      v30 = v26[7];
      if ( v30 )
      {
        NextEntitiesGroupByGroupId = QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(this, v30, v28);
        goto LABEL_25;
      }
    }
  }
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)v11;
LABEL_25:
  v32 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_29:
    v35 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return NextEntitiesGroupByGroupId;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
        QuestScriptMaterialNextMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x10
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0

  if ( (byte_418609E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&groupId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo, v10);
    sub_B2C35C(&QuestScriptMaterialNextEntity_TypeInfo, v11);
    byte_418609E = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
    }
    v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_32;
    v29 = *(&QuestScriptMaterialNextEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (QuestScriptMaterialNextEntity_c *)v27->klass->_2.typeHierarchy[v29 - 1] != QuestScriptMaterialNextEntity_TypeInfo )
    {
      v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v27);
LABEL_32:
      sub_B2C434(v27, v28);
    }
    if ( v27->fields.eventId == groupId )
    {
      if ( !v12 )
        sub_B2C434(v27, QuestScriptMaterialNextEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        v27,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
    }
  }
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_28:
    v33 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetNextQuestEntities(
        QuestScriptMaterialNextMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v13; // x1
  __int64 v14; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x22
  __int64 v29; // x9
  int32_t missionConditionDetailId; // w8
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *NextEntitiesGroupByGroupId; // x20
  __int64 v32; // x0
  __int64 v33; // x1
  int v34; // w8
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  int v40; // [xsp+0h] [xbp-50h]

  if ( (byte_418609D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo, v10);
    sub_B2C35C(&QuestScriptMaterialNextEntity_TypeInfo, v11);
    byte_418609D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v13);
  do
  {
    do
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v17 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v17;
          p_offset += 4;
          if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_9;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_9:
        p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
      {
        NextEntitiesGroupByGroupId = 0LL;
        v34 = 102;
        goto LABEL_29;
      }
      v21 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v22 = 0LL;
        v23 = &v21->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v22;
          v23 += 4;
          if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v24 = (__int64)&v21->vtable[*v23].method;
      }
      else
      {
LABEL_16:
        v24 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v20);
      }
      v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                                                     Enumerator,
                                                                     *(_QWORD *)(v24 + 8));
      v28 = v25;
      if ( !v25 )
        goto LABEL_39;
      v29 = *(&QuestScriptMaterialNextEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (QuestScriptMaterialNextEntity_c *)v25->klass->_2.typeHierarchy[v29 - 1] != QuestScriptMaterialNextEntity_TypeInfo )
      {
        v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v25);
LABEL_39:
        sub_B2C434(v25, v26);
      }
    }
    while ( v25->fields.missionTargetId != questId );
    missionConditionDetailId = v25->fields.missionConditionDetailId;
    if ( missionConditionDetailId == 2 )
    {
      NextEntitiesGroupByGroupId = QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
                                     this,
                                     v25->fields.targetId,
                                     v27);
      goto LABEL_28;
    }
  }
  while ( missionConditionDetailId != 1 );
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)sub_B2C42C(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)NextEntitiesGroupByGroupId,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  if ( !NextEntitiesGroupByGroupId )
    sub_B2C434(v32, v33);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)NextEntitiesGroupByGroupId,
    v28,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
LABEL_28:
  v34 = 104;
LABEL_29:
  v40 = v34;
  v35 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_33:
    v38 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v20);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  if ( v40 == 102 )
    return 0LL;
  return NextEntitiesGroupByGroupId;
}


System_Collections_Generic_List_UserQuestEntity__o *__fastcall QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
        QuestScriptMaterialNextMaster_o *this,
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_UserQuestEntity__o *GroupUserQuestEntities; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v10; // x19
  QuestScriptMaterialNextMaster___c_c *v11; // x8
  struct QuestScriptMaterialNextMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x20
  Il2CppObject *v14; // x21
  struct QuestScriptMaterialNextMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_41860A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_UserQuestEntity___ctor__, groupEntities);
    sub_B2C35C(&System_Comparison_UserQuestEntity__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v5);
    sub_B2C35C(&Method_QuestScriptMaterialNextMaster___c__GetSortedGroupUserQuestEntities_b__7_0__, v6);
    this = (QuestScriptMaterialNextMaster_o *)sub_B2C35C(&QuestScriptMaterialNextMaster___c_TypeInfo, v7);
    byte_41860A1 = 1;
  }
  GroupUserQuestEntities = QuestScriptMaterialNextMaster__GetGroupUserQuestEntities(this, groupEntities, method);
  v10 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)GroupUserQuestEntities;
  v11 = QuestScriptMaterialNextMaster___c_TypeInfo;
  if ( (BYTE3(QuestScriptMaterialNextMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestScriptMaterialNextMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialNextMaster___c_TypeInfo);
    v11 = QuestScriptMaterialNextMaster___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = QuestScriptMaterialNextMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v14,
      Method_QuestScriptMaterialNextMaster___c__GetSortedGroupUserQuestEntities_b__7_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_UserQuestEntity___ctor__);
    v15 = QuestScriptMaterialNextMaster___c_TypeInfo->static_fields;
    v15->__9__7_0 = (struct System_Comparison_UserQuestEntity__o *)_9__7_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v15->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v10 )
    sub_B2C434(GroupUserQuestEntities, v9);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v10,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v10;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptMaterialNextMaster__IsMaterialGroupQuest(
        QuestScriptMaterialNextMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  _DWORD *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x9
  bool v24; // w20
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  int v30; // [xsp+0h] [xbp-40h]

  if ( (byte_418609C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&QuestScriptMaterialNextEntity_TypeInfo, v8);
    byte_418609C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      Enumerator,
                      *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_35;
    v23 = *(&QuestScriptMaterialNextEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 300LL) < (unsigned int)v23
      || *(QuestScriptMaterialNextEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * v23 - 8) != QuestScriptMaterialNextEntity_TypeInfo )
    {
      v21 = (_DWORD *)sub_B2C728(v21);
LABEL_35:
      sub_B2C434(v21, v22);
    }
    if ( v21[4] == questId && v21[7] )
    {
      v30 = 69;
      v24 = 1;
      goto LABEL_25;
    }
  }
  v24 = 0;
  v30 = 67;
LABEL_25:
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_29:
    v28 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  if ( v30 == 67 )
    return 0;
  return v24;
}


void __fastcall QuestScriptMaterialNextMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct QuestScriptMaterialNextMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185635 & 1) == 0 )
  {
    sub_B2C35C(&QuestScriptMaterialNextMaster___c_TypeInfo, v1);
    byte_4185635 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(QuestScriptMaterialNextMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = QuestScriptMaterialNextMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestScriptMaterialNextMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, x);
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
    sub_B2C434(this, x);
  return x->fields.questId == entity->fields.questId;
}