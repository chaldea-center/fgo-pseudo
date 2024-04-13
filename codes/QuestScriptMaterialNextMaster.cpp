void __fastcall QuestScriptMaterialNextMaster___ctor(QuestScriptMaterialNextMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6F28 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E6F28 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    407,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestScriptMaterialNextMaster__QuestScriptMaterialNextEntity__string___ctor__);
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
      sub_B5D69C(this, condQuestId);
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
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v48; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x19
  __int64 v51; // x1
  __int64 v52; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v55; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v58; // x3
  __int64 v59; // x22
  __int64 v60; // x3
  System_Collections_Generic_IEnumerator_T__c *v61; // x8
  unsigned __int64 v62; // x10
  int32_t *v63; // x11
  __int64 v64; // x0
  System_Int32_array **v65; // x0
  __int64 v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x10
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v74; // x24
  __int64 v75; // x0
  __int64 v76; // x1
  _BOOL8 v77; // x0
  __int64 v78; // x1
  System_Collections_Generic_IEnumerator_T__c *v79; // x8
  unsigned __int64 v80; // x10
  int32_t *v81; // x11
  __int64 v82; // x0

  if ( (byte_42E6F2D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)nextEntities,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserQuestMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_System_Predicate_QuestScriptMaterialNextEntity___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo, v35, v36, v37);
    sub_B5D5C4(
      &Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__,
      v38,
      v39,
      v40);
    sub_B5D5C4(&QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&UserQuestEntity_TypeInfo, v44, v45, v46);
    byte_42E6F2D = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list,
        v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserQuestEntity__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v50,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__),
        !list) )
  {
    sub_B5D69C(Master_WarQuestSelectionMaster, v48);
  }
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
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v52);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v59 = sub_B5D694(QuestScriptMaterialNextMaster___c__DisplayClass6_0_TypeInfo);
    QuestScriptMaterialNextMaster___c__DisplayClass6_0___ctor(
      (QuestScriptMaterialNextMaster___c__DisplayClass6_0_o *)v59,
      0LL);
    v61 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v62 = 0LL;
      v63 = &v61->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v63 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v62;
        v63 += 4;
        if ( v62 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v64 = (__int64)&v61->vtable[*v63].method;
    }
    else
    {
LABEL_20:
      v64 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v60);
    }
    v65 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v64)(
                                   Enumerator,
                                   *(_QWORD *)(v64 + 8));
    if ( !v59 )
      goto LABEL_38;
    if ( v65 )
    {
      v73 = *(&UserQuestEntity_TypeInfo->_2.bitflags2 + 1);
      if ( LOBYTE((*v65)->m_Items[68]) < (unsigned int)v73
        || *(UserQuestEntity_c **)(*(_QWORD *)&(*v65)->m_Items[43] + 8 * v73 - 8) != UserQuestEntity_TypeInfo )
      {
        v65 = (System_Int32_array **)sub_B5D990(v65);
LABEL_38:
        sub_B5D69C(v65, v66);
      }
    }
    *(_QWORD *)(v59 + 16) = v65;
    sub_B5D560((BattleServantConfConponent_o *)(v59 + 16), v65, v67, v68, v69, v70, v71, v72);
    v74 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v74,
      (Il2CppObject *)v59,
      Method_QuestScriptMaterialNextMaster___c__DisplayClass6_0__GetGroupUserQuestEntities_b__0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_QuestScriptMaterialNextEntity___ctor__);
    if ( !nextEntities )
      sub_B5D69C(v75, v76);
    v77 = System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
            (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)nextEntities,
            (System_Predicate_T__o *)v74,
            (const MethodInfo_305784C *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    if ( v77 )
    {
      if ( !v50 )
        sub_B5D69C(v77, v78);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v50,
        *(EventMissionProgressRequest_Argument_ProgressData_o **)(v59 + 16),
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    }
  }
  v79 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v80 = 0LL;
    v81 = &v79->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v81 - 1) != System_IDisposable_TypeInfo )
    {
      ++v80;
      v81 += 4;
      if ( v80 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_34;
    }
    v82 = (__int64)&v79->vtable[*v81].method;
  }
  else
  {
LABEL_34:
    v82 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v58);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v82)(Enumerator, *(_QWORD *)(v82 + 8));
  return (System_Collections_Generic_List_UserQuestEntity__o *)v50;
}


System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetIncludedGroups(
        QuestScriptMaterialNextMaster_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  __int64 v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v27; // x1
  __int64 v28; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  _DWORD *v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  __int64 v42; // x9
  int32_t v43; // w1
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *NextEntitiesGroupByGroupId; // x22
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0

  if ( (byte_42E6F2C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&QuestScriptMaterialNextEntity_TypeInfo, v21, v22, v23);
    byte_42E6F2C = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v25);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v27);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v28);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v35 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v37 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_16:
      v38 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v34);
    }
    v39 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                      Enumerator,
                      *(_QWORD *)(v38 + 8));
    if ( !v39 )
      goto LABEL_33;
    v42 = *(&QuestScriptMaterialNextEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v39 + 300LL) < (unsigned int)v42
      || *(QuestScriptMaterialNextEntity_c **)(*(_QWORD *)(*(_QWORD *)v39 + 200LL) + 8 * v42 - 8) != QuestScriptMaterialNextEntity_TypeInfo )
    {
      v39 = (_DWORD *)sub_B5D990(v39);
LABEL_33:
      sub_B5D69C(v39, v40);
    }
    if ( v39[4] == questId )
    {
      v43 = v39[7];
      if ( v43 )
      {
        NextEntitiesGroupByGroupId = QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(this, v43, v41);
        goto LABEL_25;
      }
    }
  }
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)v24;
LABEL_25:
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
    v48 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v34);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  return NextEntitiesGroupByGroupId;
}


System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
        QuestScriptMaterialNextMaster_o *this,
        int32_t groupId,
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
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x10
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0

  if ( (byte_42E6F2B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      groupId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&QuestScriptMaterialNextEntity_TypeInfo, v24, v25, v26);
    byte_42E6F2B = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
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
    v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v41 + 8));
    if ( !v42 )
      goto LABEL_32;
    v44 = *(&QuestScriptMaterialNextEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v42->klass->_2.bitflags2 + 1) < (unsigned int)v44
      || (QuestScriptMaterialNextEntity_c *)v42->klass->_2.typeHierarchy[v44 - 1] != QuestScriptMaterialNextEntity_TypeInfo )
    {
      v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v42);
LABEL_32:
      sub_B5D69C(v42, v43);
    }
    if ( v42->fields.eventId == groupId )
    {
      if ( !v27 )
        sub_B5D69C(v42, QuestScriptMaterialNextEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        v42,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
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
        goto LABEL_28;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_28:
    v48 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  return (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)v27;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *__fastcall QuestScriptMaterialNextMaster__GetNextQuestEntities(
        QuestScriptMaterialNextMaster_o *this,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v28; // x1
  __int64 v29; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v35; // x3
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x22
  __int64 v44; // x9
  int32_t missionConditionDetailId; // w8
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *NextEntitiesGroupByGroupId; // x20
  __int64 v47; // x0
  __int64 v48; // x1
  int v49; // w8
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0
  int v55; // [xsp+0h] [xbp-50h]

  if ( (byte_42E6F2A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&QuestScriptMaterialNextEntity_TypeInfo, v24, v25, v26);
    byte_42E6F2A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v28);
  do
  {
    do
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v32 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v32;
          p_offset += 4;
          if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_9;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_9:
        p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v29);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
      {
        NextEntitiesGroupByGroupId = 0LL;
        v49 = 102;
        goto LABEL_29;
      }
      v36 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v37 = 0LL;
        v38 = &v36->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v38 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v37;
          v38 += 4;
          if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_16;
        }
        v39 = (__int64)&v36->vtable[*v38].method;
      }
      else
      {
LABEL_16:
        v39 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v35);
      }
      v40 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                                                     Enumerator,
                                                                     *(_QWORD *)(v39 + 8));
      v43 = v40;
      if ( !v40 )
        goto LABEL_39;
      v44 = *(&QuestScriptMaterialNextEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v40->klass->_2.bitflags2 + 1) < (unsigned int)v44
        || (QuestScriptMaterialNextEntity_c *)v40->klass->_2.typeHierarchy[v44 - 1] != QuestScriptMaterialNextEntity_TypeInfo )
      {
        v40 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v40);
LABEL_39:
        sub_B5D69C(v40, v41);
      }
    }
    while ( v40->fields.missionTargetId != questId );
    missionConditionDetailId = v40->fields.missionConditionDetailId;
    if ( missionConditionDetailId == 2 )
    {
      NextEntitiesGroupByGroupId = QuestScriptMaterialNextMaster__GetNextEntitiesGroupByGroupId(
                                     this,
                                     v40->fields.targetId,
                                     v42);
      goto LABEL_28;
    }
  }
  while ( missionConditionDetailId != 1 );
  NextEntitiesGroupByGroupId = (System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *)sub_B5D694(System_Collections_Generic_List_QuestScriptMaterialNextEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)NextEntitiesGroupByGroupId,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity___ctor__);
  if ( !NextEntitiesGroupByGroupId )
    sub_B5D69C(v47, v48);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)NextEntitiesGroupByGroupId,
    v43,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Add__);
LABEL_28:
  v49 = 104;
LABEL_29:
  v55 = v49;
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
        goto LABEL_33;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_33:
    v53 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v35);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(Enumerator, *(_QWORD *)(v53 + 8));
  if ( v55 == 102 )
    return 0LL;
  return NextEntitiesGroupByGroupId;
}


System_Collections_Generic_List_UserQuestEntity__o *__fastcall QuestScriptMaterialNextMaster__GetSortedGroupUserQuestEntities(
        QuestScriptMaterialNextMaster_o *this,
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_UserQuestEntity__o *GroupUserQuestEntities; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v19; // x19
  QuestScriptMaterialNextMaster___c_c *v20; // x8
  struct QuestScriptMaterialNextMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__7_0; // x20
  Il2CppObject *v23; // x21
  struct QuestScriptMaterialNextMaster___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42E6F2E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_UserQuestEntity___ctor__, (_DWORD)groupEntities, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_UserQuestEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserQuestEntity__Sort__, v8, v9, v10);
    sub_B5D5C4(&Method_QuestScriptMaterialNextMaster___c__GetSortedGroupUserQuestEntities_b__7_0__, v11, v12, v13);
    this = (QuestScriptMaterialNextMaster_o *)sub_B5D5C4(&QuestScriptMaterialNextMaster___c_TypeInfo, v14, v15, v16);
    byte_42E6F2E = 1;
  }
  GroupUserQuestEntities = QuestScriptMaterialNextMaster__GetGroupUserQuestEntities(this, groupEntities, method);
  v19 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)GroupUserQuestEntities;
  v20 = QuestScriptMaterialNextMaster___c_TypeInfo;
  if ( (BYTE3(QuestScriptMaterialNextMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestScriptMaterialNextMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialNextMaster___c_TypeInfo);
    v20 = QuestScriptMaterialNextMaster___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = QuestScriptMaterialNextMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_UserQuestEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__7_0,
      v23,
      Method_QuestScriptMaterialNextMaster___c__GetSortedGroupUserQuestEntities_b__7_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_UserQuestEntity___ctor__);
    v24 = QuestScriptMaterialNextMaster___c_TypeInfo->static_fields;
    v24->__9__7_0 = (struct System_Comparison_UserQuestEntity__o *)_9__7_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v24->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !v19 )
    sub_B5D69C(GroupUserQuestEntities, v18);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v19,
    (System_Comparison_T__o *)_9__7_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_UserQuestEntity__Sort__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v19;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptMaterialNextMaster__IsMaterialGroupQuest(
        QuestScriptMaterialNextMaster_o *this,
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

  if ( (byte_42E6F29 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&QuestScriptMaterialNextEntity_TypeInfo, v15, v16, v17);
    byte_42E6F29 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&questId);
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
    v32 = *(&QuestScriptMaterialNextEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 300LL) < (unsigned int)v32
      || *(QuestScriptMaterialNextEntity_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * v32 - 8) != QuestScriptMaterialNextEntity_TypeInfo )
    {
      v30 = (_DWORD *)sub_B5D990(v30);
LABEL_35:
      sub_B5D69C(v30, v31);
    }
    if ( v30[4] == questId && v30[7] )
    {
      v39 = 69;
      v33 = 1;
      goto LABEL_25;
    }
  }
  v33 = 0;
  v39 = 67;
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
  if ( v39 == 67 )
    return 0;
  return v33;
}


void __fastcall QuestScriptMaterialNextMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_42E7F2A & 1) == 0 )
  {
    sub_B5D5C4(&QuestScriptMaterialNextMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7F2A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestScriptMaterialNextMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestScriptMaterialNextMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
  return x->fields.questId == entity->fields.questId;
}