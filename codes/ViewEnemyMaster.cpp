void __fastcall ViewEnemyMaster___ctor(ViewEnemyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C051 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string___ctor__);
    byte_4A5C051 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    78,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ViewEnemyEntity_o *__fastcall ViewEnemyMaster__GetEntity(
        ViewEnemyMaster_o *this,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5C04F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__GetEntity__);
    sub_1B885B0(&ViewEnemyEntity_TypeInfo);
    byte_4A5C04F = 1;
  }
  if ( !ViewEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo);
  PK = (Il2CppObject *)ViewEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&enemyId);
  return (ViewEnemyEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_311DC8C *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__GetEntity__);
}


ViewEnemyEntity_array *__fastcall ViewEnemyMaster__GetEntityListFromQuestId(
        ViewEnemyMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *EnemyInfoDispNpcSvtIdList; // x22
  clsQuestCheck_o *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w20
  bool v9; // w23
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x23
  ViewEnemyEntity_c *v26; // x1
  __int64 methodPtr_low; // x9
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5C052 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ViewEnemyEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ViewEnemyEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ViewEnemyEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ViewEnemyEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&ViewEnemyEntity_TypeInfo);
    byte_4A5C052 = 1;
  }
  entity = 0LL;
  EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B88658(int___TypeInfo, 0LL);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  v8 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, questId, 0LL);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  v9 = clsQuestCheck__IsQuestClear(Instance, questId, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_51;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, questId, v8 + !v9, 0LL) )
  {
    Instance = (clsQuestCheck_o *)entity;
    if ( !entity )
      goto LABEL_51;
    EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
                                                                                       entity,
                                                                                       0LL);
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ViewEnemyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ViewEnemyEntity___ctor__);
  Instance = (clsQuestCheck_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_17:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_24;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_24:
      v20 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    v25 = (Il2CppObject *)v21;
    if ( !v21 )
      goto LABEL_47;
    v26 = ViewEnemyEntity_TypeInfo;
    methodPtr_low = LOBYTE(ViewEnemyEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) < (unsigned int)methodPtr_low
      || *(ViewEnemyEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * methodPtr_low - 8) != ViewEnemyEntity_TypeInfo )
    {
      sub_1B88ACC(v21);
LABEL_47:
      sub_1B8880C(v21, v22);
    }
    if ( *(_DWORD *)(v21 + 16) == questId )
    {
      if ( !EnemyInfoDispNpcSvtIdList )
        sub_1B8880C(v21, ViewEnemyEntity_TypeInfo);
      if ( !EnemyInfoDispNpcSvtIdList[1].monitor
        || (v21 = System_Linq_Enumerable__Contains_int_(
                    EnemyInfoDispNpcSvtIdList,
                    *(_DWORD *)(v21 + 48),
                    (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___),
            (v21 & 1) != 0) )
      {
        if ( !v10 )
          sub_1B8880C(v21, v26);
        items = v10->fields._items;
        v29 = Method_System_Collections_Generic_List_ViewEnemyEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          sub_1B8880C(v21, v26);
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v25,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v25;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v25, v23, v24);
        }
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_42;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_42:
    v35 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (clsQuestCheck_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                  Enumerator,
                                  *(_QWORD *)(v35 + 8));
  if ( !v10 )
LABEL_51:
    sub_1B8880C(Instance, v7);
  return (ViewEnemyEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ViewEnemyEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ViewEnemyMaster__TryGetEntity(
        ViewEnemyMaster_o *this,
        ViewEnemyEntity_o **entity,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5C050 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__TryGetEntity__);
    sub_1B885B0(&ViewEnemyEntity_TypeInfo);
    byte_4A5C050 = 1;
  }
  if ( !ViewEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo);
  PK = (Il2CppObject *)ViewEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__TryGetEntity__);
}