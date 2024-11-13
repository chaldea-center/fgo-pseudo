void __fastcall ViewWaveEnemyMaster___ctor(ViewWaveEnemyMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17122 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string___ctor__, method, v2);
    byte_4B17122 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    460,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ViewWaveEnemyEntity_o *__fastcall ViewWaveEnemyMaster__GetEntity(
        ViewWaveEnemyMaster_o *this,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *PK; // x1

  if ( (byte_4B17120 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__GetEntity__,
      *(_QWORD *)&questId,
      *(_QWORD *)&enemyId);
    sub_1BCA7E0(&ViewWaveEnemyEntity_TypeInfo, v7, v8);
    byte_4B17120 = 1;
  }
  if ( !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo, *(_QWORD *)&questId);
  PK = (Il2CppObject *)ViewWaveEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&enemyId);
  return (ViewWaveEnemyEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ViewWaveEnemyEntity_array *__fastcall ViewWaveEnemyMaster__GetEntityListFromQuestId(
        ViewWaveEnemyMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_IEnumerable_TSource__o *EnemyInfoDispNpcSvtIdList; // x22
  clsQuestCheck_o *Instance; // x0
  __int64 v33; // x1
  int32_t v34; // w20
  __int64 v35; // x1
  bool v36; // w23
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x20
  __int64 v40; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  Il2CppObject *v58; // x23
  ViewWaveEnemyEntity_c *v59; // x1
  __int64 methodPtr_low; // x9
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  System_Collections_Generic_IEnumerator_T__c *v65; // x8
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B17123 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questId,
      method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&int___TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v27, v28);
    sub_1BCA7E0(&ViewWaveEnemyEntity_TypeInfo, v29, v30);
    byte_4B17123 = 1;
  }
  entity = 0LL;
  EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BCA888(int___TypeInfo, 0LL);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  v34 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, questId, 0LL);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  v36 = clsQuestCheck__IsQuestClear(Instance, questId, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35);
  Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_51;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, questId, v34 + !v36, 0LL) )
  {
    Instance = (clsQuestCheck_o *)entity;
    if ( !entity )
      goto LABEL_51;
    EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
                                                                                       entity,
                                                                                       0LL);
  }
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo,
                                                       v33,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
  Instance = (clsQuestCheck_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v40);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v43;
        p_offset += 4;
        if ( !v43 )
          goto LABEL_17;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_17:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v46 = Enumerator->klass;
    v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v48 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_24;
      }
      v49 = (__int64)&v46->vtable[*v48].method;
    }
    else
    {
LABEL_24:
      v49 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v50 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(
            Enumerator,
            *(_QWORD *)(v49 + 8));
    v58 = (Il2CppObject *)v50;
    if ( !v50 )
      goto LABEL_47;
    v59 = ViewWaveEnemyEntity_TypeInfo;
    methodPtr_low = LOBYTE(ViewWaveEnemyEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v50 + 304LL) < (unsigned int)methodPtr_low
      || *(ViewWaveEnemyEntity_c **)(*(_QWORD *)(*(_QWORD *)v50 + 200LL) + 8 * methodPtr_low - 8) != ViewWaveEnemyEntity_TypeInfo )
    {
      sub_1BCACFC(v50);
LABEL_47:
      sub_1BCAA3C(v50, v51);
    }
    if ( *(_DWORD *)(v50 + 16) == questId )
    {
      if ( !EnemyInfoDispNpcSvtIdList )
        sub_1BCAA3C(v50, ViewWaveEnemyEntity_TypeInfo);
      if ( !EnemyInfoDispNpcSvtIdList[1].monitor
        || (v50 = System_Linq_Enumerable__Contains_int_(
                    EnemyInfoDispNpcSvtIdList,
                    *(_DWORD *)(v50 + 52),
                    (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___),
            (v50 & 1) != 0) )
      {
        if ( !v39 )
          sub_1BCAA3C(v50, v59);
        items = v39->fields._items;
        v62 = Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__;
        ++v39->fields._version;
        if ( !items )
          sub_1BCAA3C(v50, v59);
        size = v39->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v39,
            v58,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          v64 = &items->obj.klass + size;
          v39->fields._size = size + 1;
          v64[4] = (Il2CppClass *)v58;
          sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)v58, v52, v53, v54, v55, v56, v57);
        }
      }
    }
  }
  v65 = Enumerator->klass;
  v66 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v67 = &v65->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      v67 += 4;
      if ( !v66 )
        goto LABEL_42;
    }
    v68 = (__int64)&v65->vtable[*v67].method;
  }
  else
  {
LABEL_42:
    v68 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (clsQuestCheck_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v68)(
                                  Enumerator,
                                  *(_QWORD *)(v68 + 8));
  if ( !v39 )
LABEL_51:
    sub_1BCAA3C(Instance, v33);
  return (ViewWaveEnemyEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v39,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ViewWaveEnemyMaster__TryGetEntity(
        ViewWaveEnemyMaster_o *this,
        ViewWaveEnemyEntity_o **entity,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *PK; // x2

  if ( (byte_4B17121 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&questId);
    sub_1BCA7E0(&ViewWaveEnemyEntity_TypeInfo, v9, v10);
    byte_4B17121 = 1;
  }
  if ( !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo, entity);
  PK = (Il2CppObject *)ViewWaveEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__TryGetEntity__);
}