void __fastcall ViewEnemyMaster___ctor(ViewEnemyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B45ACD & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string___ctor__, method);
    byte_4B45ACD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    82,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ViewEnemyEntity_o *__fastcall ViewEnemyMaster__GetEntity(
        ViewEnemyMaster_o *this,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *PK; // x1

  if ( (byte_4B45ACB & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__GetEntity__, *(_QWORD *)&questId);
    sub_1BDB878(&ViewEnemyEntity_TypeInfo, v7);
    byte_4B45ACB = 1;
  }
  if ( !ViewEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo);
  PK = (Il2CppObject *)ViewEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&enemyId);
  return (ViewEnemyEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_32E68F4 *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ViewEnemyEntity_array *__fastcall ViewEnemyMaster__GetEntityListFromQuestId(
        ViewEnemyMaster_o *this,
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *EnemyInfoDispNpcSvtIdList; // x22
  clsQuestCheck_o *Instance; // x0
  __int64 v19; // x1
  int32_t v20; // w20
  bool v21; // w23
  System_Collections_Generic_List_object__o *v22; // x20
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x23
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B45ACE & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_ViewEnemyEntity__GetEnumerator__, *(_QWORD *)&questId);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestPhaseMaster___, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, v7);
    sub_1BDB878(&System_IDisposable_TypeInfo, v8);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_ViewEnemyEntity__TypeInfo, v9);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BDB878(&int___TypeInfo, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_ViewEnemyEntity__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_ViewEnemyEntity__ToArray__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_ViewEnemyEntity___ctor__, v14);
    sub_1BDB878(&System_Collections_Generic_List_ViewEnemyEntity__TypeInfo, v15);
    sub_1BDB878(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v16);
    byte_4B45ACE = 1;
  }
  entity = 0LL;
  EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BDB920(int___TypeInfo, 0LL);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  v20 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, questId, 0LL);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  v21 = clsQuestCheck__IsQuestClear(Instance, questId, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_48;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, questId, v20 + !v21, 0LL) )
  {
    Instance = (clsQuestCheck_o *)entity;
    if ( !entity )
      goto LABEL_48;
    EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
                                                                                       entity,
                                                                                       0LL);
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ViewEnemyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ViewEnemyEntity___ctor__);
  Instance = (clsQuestCheck_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_48;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_ViewEnemyEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_17;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_17:
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ViewEnemyEntity__c **)v31 - 1) != System_Collections_Generic_IEnumerator_ViewEnemyEntity__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_24;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_24:
      v32 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_ViewEnemyEntity__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8));
    v37 = (Il2CppObject *)v33;
    if ( !v33 )
      sub_1BDBAD4(0LL, v34);
    if ( *(_DWORD *)(v33 + 16) == questId )
    {
      if ( !EnemyInfoDispNpcSvtIdList )
        sub_1BDBAD4(v33, v34);
      if ( !EnemyInfoDispNpcSvtIdList[1].monitor
        || (v33 = System_Linq_Enumerable__Contains_int_(
                    EnemyInfoDispNpcSvtIdList,
                    *(_DWORD *)(v33 + 48),
                    (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___),
            (v33 & 1) != 0) )
      {
        if ( !v22 )
          sub_1BDBAD4(v33, v34);
        items = v22->fields._items;
        v39 = Method_System_Collections_Generic_List_ViewEnemyEntity__Add__;
        ++v22->fields._version;
        if ( !items )
          sub_1BDBAD4(v33, v34);
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            v37,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v37;
          sub_1BDB81C((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v37, v35, v36);
        }
      }
    }
  }
  v42 = Enumerator->klass;
  v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_40;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_40:
    v45 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (clsQuestCheck_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                                  Enumerator,
                                  *(_QWORD *)(v45 + 8));
  if ( !v22 )
LABEL_48:
    sub_1BDBAD4(Instance, v19);
  return (ViewEnemyEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v22,
                                    (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_ViewEnemyEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ViewEnemyMaster__TryGetEntity(
        ViewEnemyMaster_o *this,
        ViewEnemyEntity_o **entity,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *PK; // x2

  if ( (byte_4B45ACC & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__TryGetEntity__, entity);
    sub_1BDB878(&ViewEnemyEntity_TypeInfo, v9);
    byte_4B45ACC = 1;
  }
  if ( !ViewEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo);
  PK = (Il2CppObject *)ViewEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__TryGetEntity__);
}