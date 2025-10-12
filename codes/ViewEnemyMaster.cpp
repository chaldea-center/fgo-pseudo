void ViewEnemyMaster___ctor(ViewEnemyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C38A8A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string___ctor__);
    byte_4C38A8A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    82,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ViewEnemyEntity_o *ViewEnemyMaster__GetEntity(
        ViewEnemyMaster_o *this,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C38A88 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__GetEntity__);
    sub_1C32C20(&ViewEnemyEntity_TypeInfo);
    byte_4C38A88 = 1;
  }
  if ( !ViewEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo);
  PK = (Il2CppObject *)ViewEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&enemyId);
  return (ViewEnemyEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_339B2F0 *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__GetEntity__);
}


ViewEnemyEntity_array *ViewEnemyMaster__GetEntityListFromQuestId(
        ViewEnemyMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *EnemyInfoDispNpcSvtIdList; // x22
  clsQuestCheck_o *Instance; // x0
  int32_t v7; // w20
  bool v8; // w23
  System_Collections_Generic_List_object__o *v9; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x23
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C38A8B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ViewEnemyEntity__GetEnumerator__);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_ViewEnemyEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ViewEnemyEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ViewEnemyEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ViewEnemyEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ViewEnemyEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C38A8B = 1;
  }
  entity = 0;
  EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C32CC8(int___TypeInfo, 0);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  v7 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, questId, 0);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  v8 = clsQuestCheck__IsQuestClear(Instance, questId, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_48;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, questId, v7 + !v8, 0) )
  {
    Instance = (clsQuestCheck_o *)entity;
    if ( !entity )
      goto LABEL_48;
    EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
                                                                                       entity,
                                                                                       0);
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ViewEnemyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ViewEnemyEntity___ctor__);
  Instance = (clsQuestCheck_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_48;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_ViewEnemyEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_17;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_17:
      v14 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ViewEnemyEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_ViewEnemyEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_24;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_24:
      v18 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_ViewEnemyEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    v22 = (Il2CppObject *)v19;
    if ( !v19 )
      sub_1C32E7C(0);
    if ( *(_DWORD *)(v19 + 16) == questId )
    {
      if ( !EnemyInfoDispNpcSvtIdList )
        sub_1C32E7C(v19);
      if ( !EnemyInfoDispNpcSvtIdList[1].monitor
        || (v19 = System_Linq_Enumerable__Contains_int_(
                    EnemyInfoDispNpcSvtIdList,
                    *(_DWORD *)(v19 + 48),
                    (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___),
            (v19 & 1) != 0) )
      {
        if ( !v9 )
          sub_1C32E7C(v19);
        items = v9->fields._items;
        v24 = Method_System_Collections_Generic_List_ViewEnemyEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          sub_1C32E7C(v19);
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            v22,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v22;
          sub_1C32BC4((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v22, v20, v21);
        }
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_40;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_40:
    v30 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (clsQuestCheck_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                  Enumerator,
                                  *(_QWORD *)(v30 + 8));
  if ( !v9 )
LABEL_48:
    sub_1C32E7C(Instance);
  return (ViewEnemyEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_ViewEnemyEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool ViewEnemyMaster__TryGetEntity(
        ViewEnemyMaster_o *this,
        ViewEnemyEntity_o **entity,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C38A89 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__TryGetEntity__);
    sub_1C32C20(&ViewEnemyEntity_TypeInfo);
    byte_4C38A89 = 1;
  }
  if ( !ViewEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo);
  PK = (Il2CppObject *)ViewEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__TryGetEntity__);
}