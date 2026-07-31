void ViewEnemyMaster___ctor(ViewEnemyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59397CF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string___ctor__);
    byte_59397CF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    82,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ViewEnemyEntity_o *ViewEnemyMaster__GetEntity(
        ViewEnemyMaster_o *this,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59397CD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__GetEntity__);
    sub_21FFC50(&ViewEnemyEntity_TypeInfo);
    byte_59397CD = 1;
  }
  if ( !*(&ViewEnemyEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo, *(_QWORD *)&questId);
  PK = (Il2CppObject *)ViewEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&enemyId);
  return (ViewEnemyEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_3EE2044 *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__GetEntity__);
}


ViewEnemyEntity_array *ViewEnemyMaster__GetEntityListFromQuestId(
        ViewEnemyMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *EnemyInfoDispNpcSvtIdList; // x21
  __int64 Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w19
  __int64 v9; // x1
  bool v10; // w23
  System_Collections_Generic_List_object__o *v11; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  Il2CppObject *v31; // x22
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  System_Collections_Generic_IEnumerator_T__o *v41; // [xsp+18h] [xbp-58h]
  QuestPhaseEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_59397D0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ViewEnemyEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ViewEnemyEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ViewEnemyEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ViewEnemyEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ViewEnemyEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ViewEnemyEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_59397D0 = 1;
  }
  entity = 0;
  EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sub_21FFD10(int___TypeInfo, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  v8 = clsQuestCheck__mfGetQuestPhaseByQuestID((clsQuestCheck_o *)Instance, questId, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  v10 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, questId, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_54;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, questId, v8 + !v10, 0) )
  {
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_54;
    EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
                                                                                       entity,
                                                                                       0);
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ViewEnemyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ViewEnemyEntity___ctor__);
  Instance = (__int64)this->fields.list;
  if ( !Instance )
    goto LABEL_54;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_ViewEnemyEntity__GetEnumerator__);
  v41 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v13);
  for ( i = Enumerator; ; i = v41 )
  {
    klass = i->klass;
    v16 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_18:
      v18 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                 i,
                 *(_QWORD *)(v18 + 8));
    if ( (Instance & 1) == 0 )
      break;
    if ( !v41 )
      sub_21FFECC(Instance, v7);
    v19 = v41->klass;
    v20 = *(unsigned __int16 *)&v41->klass->_2.rank;
    if ( *(_WORD *)&v41->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ViewEnemyEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ViewEnemyEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_26;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_26:
      v22 = sub_2237E2C(v41, System_Collections_Generic_IEnumerator_ViewEnemyEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            v41,
            *(_QWORD *)(v22 + 8));
    v31 = (Il2CppObject *)v23;
    if ( !v23 )
      sub_21FFECC(0, v24);
    if ( *(_DWORD *)(v23 + 16) == questId )
    {
      if ( !EnemyInfoDispNpcSvtIdList )
        sub_21FFECC(v23, v24);
      if ( !EnemyInfoDispNpcSvtIdList[1].monitor
        || (v23 = System_Linq_Enumerable__Contains_int_(
                    EnemyInfoDispNpcSvtIdList,
                    *(_DWORD *)(v23 + 48),
                    (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___),
            (v23 & 1) != 0) )
      {
        if ( !v11
          || (items = v11->fields._items,
              v33 = Method_System_Collections_Generic_List_ViewEnemyEntity__Add__,
              ++v11->fields._version,
              !items) )
        {
          sub_21FFECC(v23, v24);
        }
        size = v11->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v31,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v31;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v31, v25, v26, v27, v28, v29, v30);
        }
      }
    }
  }
  if ( v41 )
  {
    v36 = v41->klass;
    v37 = *(unsigned __int16 *)&v41->klass->_2.rank;
    if ( *(_WORD *)&v41->klass->_2.rank )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_45;
      }
      v39 = (__int64)&v36->vtable[*v38];
    }
    else
    {
LABEL_45:
      v39 = sub_2237E2C(v41, System_IDisposable_TypeInfo, 0);
    }
    Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                 v41,
                 *(_QWORD *)(v39 + 8));
  }
  if ( !v11 )
LABEL_54:
    sub_21FFECC(Instance, v7);
  return (ViewEnemyEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ViewEnemyEntity__ToArray__);
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

  if ( (byte_59397CE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__TryGetEntity__);
    sub_21FFC50(&ViewEnemyEntity_TypeInfo);
    byte_59397CE = 1;
  }
  if ( !*(&ViewEnemyEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ViewEnemyEntity_TypeInfo, entity);
  PK = (Il2CppObject *)ViewEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_ViewEnemyMaster__ViewEnemyEntity__string__TryGetEntity__);
}