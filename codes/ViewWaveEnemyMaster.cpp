void ViewWaveEnemyMaster___ctor(ViewWaveEnemyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C4409E & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string___ctor__);
    byte_4C4409E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    466,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ViewWaveEnemyEntity_o *ViewWaveEnemyMaster__GetEntity(
        ViewWaveEnemyMaster_o *this,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C4409C & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__GetEntity__);
    sub_1C37058(&ViewWaveEnemyEntity_TypeInfo);
    byte_4C4409C = 1;
  }
  if ( !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo);
  PK = (Il2CppObject *)ViewWaveEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&enemyId);
  return (ViewWaveEnemyEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_33A5B58 *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__GetEntity__);
}


ViewWaveEnemyEntity_array *ViewWaveEnemyMaster__GetEntityListFromQuestId(
        ViewWaveEnemyMaster_o *this,
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

  if ( (byte_4C4409F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ViewWaveEnemyEntity__GetEnumerator__);
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ViewWaveEnemyEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C4409F = 1;
  }
  entity = 0;
  EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C37100(int___TypeInfo, 0);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  v7 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, questId, 0);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  v8 = clsQuestCheck__IsQuestClear(Instance, questId, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
  Instance = (clsQuestCheck_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_48;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_ViewWaveEnemyEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
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
      v14 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_ViewWaveEnemyEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_ViewWaveEnemyEntity__TypeInfo )
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
      v18 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_ViewWaveEnemyEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    v22 = (Il2CppObject *)v19;
    if ( !v19 )
      sub_1C372B4(0);
    if ( *(_DWORD *)(v19 + 16) == questId )
    {
      if ( !EnemyInfoDispNpcSvtIdList )
        sub_1C372B4(v19);
      if ( !EnemyInfoDispNpcSvtIdList[1].monitor
        || (v19 = System_Linq_Enumerable__Contains_int_(
                    EnemyInfoDispNpcSvtIdList,
                    *(_DWORD *)(v19 + 52),
                    (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___),
            (v19 & 1) != 0) )
      {
        if ( !v9 )
          sub_1C372B4(v19);
        items = v9->fields._items;
        v24 = Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          sub_1C372B4(v19);
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            v22,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v22;
          sub_1C36FFC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v22, v20, v21);
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
    v30 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (clsQuestCheck_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                  Enumerator,
                                  *(_QWORD *)(v30 + 8));
  if ( !v9 )
LABEL_48:
    sub_1C372B4(Instance);
  return (ViewWaveEnemyEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v9,
                                        (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__);
}


bool ViewWaveEnemyMaster__IsSameUnknownNpcEncounter(
        ViewWaveEnemyMaster_o *this,
        ViewWaveEnemyEntity_array *viewWaveEnemyEntityList,
        int32_t reachedWave,
        const MethodInfo *method)
{
  __int64 v6; // x21
  ViewWaveEnemyMaster___c_c *v7; // x0
  System_Func_object__bool__o *_9__4_0; // x22
  Il2CppObject *v9; // x23
  struct ViewWaveEnemyMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Object_array *object; // x0
  System_Object_array *v15; // x20
  System_Func_object__bool__o *v16; // x22

  if ( (byte_4C440A0 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_ViewWaveEnemyEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_First_ViewWaveEnemyEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_ViewWaveEnemyEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_ViewWaveEnemyEntity___);
    sub_1C37058(&System_Func_ViewWaveEnemyEntity__bool__TypeInfo);
    sub_1C37058(&Method_ViewWaveEnemyMaster___c__IsSameUnknownNpcEncounter_b__4_0__);
    sub_1C37058(&Method_ViewWaveEnemyMaster___c__DisplayClass4_0__IsSameUnknownNpcEncounter_b__1__);
    sub_1C37058(&ViewWaveEnemyMaster___c__DisplayClass4_0_TypeInfo);
    sub_1C37058(&ViewWaveEnemyMaster___c_TypeInfo);
    byte_4C440A0 = 1;
  }
  v6 = sub_1C372A4(ViewWaveEnemyMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  v7 = ViewWaveEnemyMaster___c_TypeInfo;
  if ( !ViewWaveEnemyMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyMaster___c_TypeInfo);
    v7 = ViewWaveEnemyMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__bool__o *)v7->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ViewWaveEnemyMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__4_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ViewWaveEnemyEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__4_0, v9, Method_ViewWaveEnemyMaster___c__IsSameUnknownNpcEncounter_b__4_0__, 0);
    static_fields = ViewWaveEnemyMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_ViewWaveEnemyEntity__bool__o *)_9__4_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v11, v12);
  }
  v13 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)viewWaveEnemyEntityList,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_ViewWaveEnemyEntity___);
  object = System_Linq_Enumerable__ToArray_object_(
             v13,
             (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_ViewWaveEnemyEntity___);
  if ( !object )
    goto LABEL_18;
  v15 = object;
  if ( SLODWORD(object->max_length) < 2 )
    return 0;
  object = (System_Object_array *)System_Linq_Enumerable__First_object_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)object,
                                    (const MethodInfo_310E530 *)Method_System_Linq_Enumerable_First_ViewWaveEnemyEntity___);
  if ( !object || !v6 )
LABEL_18:
    sub_1C372B4(object);
  *(_DWORD *)(v6 + 16) = HIDWORD(object->m_Items[2]);
  v16 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ViewWaveEnemyEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v6,
    Method_ViewWaveEnemyMaster___c__DisplayClass4_0__IsSameUnknownNpcEncounter_b__1__,
    0);
  if ( BasicHelper__Any_object__51187876(
         v15,
         (System_Func_T__bool__o *)v16,
         (const MethodInfo_30D10A4 *)Method_BasicHelper_Any_ViewWaveEnemyEntity___) )
  {
    return 0;
  }
  object = (System_Object_array *)System_Linq_Enumerable__First_object_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                    (const MethodInfo_310E530 *)Method_System_Linq_Enumerable_First_ViewWaveEnemyEntity___);
  if ( !object )
    goto LABEL_18;
  return SLODWORD(object->m_Items[3]) <= reachedWave;
}


// local variable allocation has failed, the output may be wrong!
bool ViewWaveEnemyMaster__TryGetEntity(
        ViewWaveEnemyMaster_o *this,
        ViewWaveEnemyEntity_o **entity,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C4409D & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__TryGetEntity__);
    sub_1C37058(&ViewWaveEnemyEntity_TypeInfo);
    byte_4C4409D = 1;
  }
  if ( !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo);
  PK = (Il2CppObject *)ViewWaveEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__TryGetEntity__);
}


void ViewWaveEnemyMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C440A1 & 1) == 0 )
  {
    sub_1C37058(&ViewWaveEnemyMaster___c_TypeInfo);
    byte_4C440A1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ViewWaveEnemyMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ViewWaveEnemyMaster___c_TypeInfo->static_fields->__9 = (struct ViewWaveEnemyMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ViewWaveEnemyMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ViewWaveEnemyMaster___c___ctor(ViewWaveEnemyMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ViewWaveEnemyMaster___c___IsSameUnknownNpcEncounter_b__4_0(
        ViewWaveEnemyMaster___c_o *this,
        ViewWaveEnemyEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return ViewWaveEnemyEntity__GetUnknownDispInfo(x, (const MethodInfo *)x) != 0;
}


void ViewWaveEnemyMaster___c__DisplayClass4_0___ctor(
        ViewWaveEnemyMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ViewWaveEnemyMaster___c__DisplayClass4_0___IsSameUnknownNpcEncounter_b__1(
        ViewWaveEnemyMaster___c__DisplayClass4_0_o *this,
        ViewWaveEnemyEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.npcSvtId != this->fields.npcSvtId;
}