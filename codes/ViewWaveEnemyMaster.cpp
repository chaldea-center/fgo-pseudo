void __fastcall ViewWaveEnemyMaster___ctor(ViewWaveEnemyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBE56 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string___ctor__, method);
    byte_49BBE56 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    466,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ViewWaveEnemyEntity_o *__fastcall ViewWaveEnemyMaster__GetEntity(
        ViewWaveEnemyMaster_o *this,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *PK; // x1

  if ( (byte_49BBE54 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    sub_1B4CF90(&ViewWaveEnemyEntity_TypeInfo, v7);
    byte_49BBE54 = 1;
  }
  if ( !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo);
  PK = (Il2CppObject *)ViewWaveEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&enemyId);
  return (ViewWaveEnemyEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31A2454 *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ViewWaveEnemyEntity_array *__fastcall ViewWaveEnemyMaster__GetEntityListFromQuestId(
        ViewWaveEnemyMaster_o *this,
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

  if ( (byte_49BBE57 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_ViewWaveEnemyEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestPhaseMaster___, v5);
    sub_1B4CF90(&DataManager_TypeInfo, v6);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Contains_int___, v7);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v8);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_ViewWaveEnemyEntity__TypeInfo, v9);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B4CF90(&int___TypeInfo, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__, v14);
    sub_1B4CF90(&System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo, v15);
    sub_1B4CF90(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v16);
    byte_49BBE57 = 1;
  }
  entity = 0LL;
  EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B4D038(int___TypeInfo, 0LL);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  v20 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, questId, 0LL);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  v21 = clsQuestCheck__IsQuestClear(Instance, questId, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  v22 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
  Instance = (clsQuestCheck_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_48;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_ViewWaveEnemyEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v23);
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
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ViewWaveEnemyEntity__c **)v31 - 1) != System_Collections_Generic_IEnumerator_ViewWaveEnemyEntity__TypeInfo )
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
      v32 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_ViewWaveEnemyEntity__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8));
    v37 = (Il2CppObject *)v33;
    if ( !v33 )
      sub_1B4D1EC(0LL, v34);
    if ( *(_DWORD *)(v33 + 16) == questId )
    {
      if ( !EnemyInfoDispNpcSvtIdList )
        sub_1B4D1EC(v33, v34);
      if ( !EnemyInfoDispNpcSvtIdList[1].monitor
        || (v33 = System_Linq_Enumerable__Contains_int_(
                    EnemyInfoDispNpcSvtIdList,
                    *(_DWORD *)(v33 + 52),
                    (const MethodInfo_2F1C00C *)Method_System_Linq_Enumerable_Contains_int___),
            (v33 & 1) != 0) )
      {
        if ( !v22 )
          sub_1B4D1EC(v33, v34);
        items = v22->fields._items;
        v39 = Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__;
        ++v22->fields._version;
        if ( !items )
          sub_1B4D1EC(v33, v34);
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            v37,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v37;
          sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v37, v35, v36);
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
    v45 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (clsQuestCheck_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                                  Enumerator,
                                  *(_QWORD *)(v45 + 8));
  if ( !v22 )
LABEL_48:
    sub_1B4D1EC(Instance, v19);
  return (ViewWaveEnemyEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v22,
                                        (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__);
}


bool __fastcall ViewWaveEnemyMaster__IsSameUnknownNpcEncounter(
        ViewWaveEnemyMaster_o *this,
        ViewWaveEnemyEntity_array *viewWaveEnemyEntityList,
        int32_t reachedWave,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  ViewWaveEnemyMaster___c_c *v15; // x0
  System_Func_object__bool__o *_9__4_0; // x22
  Il2CppObject *v17; // x23
  struct ViewWaveEnemyMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Object_array *object; // x0
  __int64 v23; // x1
  System_Object_array *v24; // x20
  System_Func_object__bool__o *v25; // x22

  if ( (byte_49BBE58 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_ViewWaveEnemyEntity___, viewWaveEnemyEntityList);
    sub_1B4CF90(&Method_System_Linq_Enumerable_First_ViewWaveEnemyEntity___, v6);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_ViewWaveEnemyEntity___, v7);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_ViewWaveEnemyEntity___, v8);
    sub_1B4CF90(&System_Func_ViewWaveEnemyEntity__bool__TypeInfo, v9);
    sub_1B4CF90(&Method_ViewWaveEnemyMaster___c__IsSameUnknownNpcEncounter_b__4_0__, v10);
    sub_1B4CF90(&Method_ViewWaveEnemyMaster___c__DisplayClass4_0__IsSameUnknownNpcEncounter_b__1__, v11);
    sub_1B4CF90(&ViewWaveEnemyMaster___c__DisplayClass4_0_TypeInfo, v12);
    sub_1B4CF90(&ViewWaveEnemyMaster___c_TypeInfo, v13);
    byte_49BBE58 = 1;
  }
  v14 = sub_1B4D1DC(ViewWaveEnemyMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  v15 = ViewWaveEnemyMaster___c_TypeInfo;
  if ( !ViewWaveEnemyMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyMaster___c_TypeInfo);
    v15 = ViewWaveEnemyMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__bool__o *)v15->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = ViewWaveEnemyMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__4_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_ViewWaveEnemyEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__4_0,
      v17,
      Method_ViewWaveEnemyMaster___c__IsSameUnknownNpcEncounter_b__4_0__,
      0LL);
    static_fields = ViewWaveEnemyMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_ViewWaveEnemyEntity__bool__o *)_9__4_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v19, v20);
  }
  v21 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)viewWaveEnemyEntityList,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_ViewWaveEnemyEntity___);
  object = System_Linq_Enumerable__ToArray_object_(
             v21,
             (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_ViewWaveEnemyEntity___);
  if ( !object )
    goto LABEL_18;
  v24 = object;
  if ( (int)object->max_length < 2 )
    return 0;
  object = (System_Object_array *)System_Linq_Enumerable__First_object_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)object,
                                    (const MethodInfo_2F24DEC *)Method_System_Linq_Enumerable_First_ViewWaveEnemyEntity___);
  if ( !object || !v14 )
LABEL_18:
    sub_1B4D1EC(object, v23);
  *(_DWORD *)(v14 + 16) = HIDWORD(object->m_Items[2]);
  v25 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_ViewWaveEnemyEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v14,
    Method_ViewWaveEnemyMaster___c__DisplayClass4_0__IsSameUnknownNpcEncounter_b__1__,
    0LL);
  if ( BasicHelper__Any_object__49202496(
         v24,
         (System_Func_T__bool__o *)v25,
         (const MethodInfo_2EEC540 *)Method_BasicHelper_Any_ViewWaveEnemyEntity___) )
  {
    return 0;
  }
  object = (System_Object_array *)System_Linq_Enumerable__First_object_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                                    (const MethodInfo_2F24DEC *)Method_System_Linq_Enumerable_First_ViewWaveEnemyEntity___);
  if ( !object )
    goto LABEL_18;
  return SLODWORD(object->m_Items[3]) <= reachedWave;
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
  Il2CppObject *PK; // x2

  if ( (byte_49BBE55 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__TryGetEntity__, entity);
    sub_1B4CF90(&ViewWaveEnemyEntity_TypeInfo, v9);
    byte_49BBE55 = 1;
  }
  if ( !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo);
  PK = (Il2CppObject *)ViewWaveEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__TryGetEntity__);
}


void __fastcall ViewWaveEnemyMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BBE59 & 1) == 0 )
  {
    sub_1B4CF90(&ViewWaveEnemyMaster___c_TypeInfo, v1);
    byte_49BBE59 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(ViewWaveEnemyMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ViewWaveEnemyMaster___c_TypeInfo->static_fields->__9 = (struct ViewWaveEnemyMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)ViewWaveEnemyMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ViewWaveEnemyMaster___c___ctor(ViewWaveEnemyMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ViewWaveEnemyMaster___c___IsSameUnknownNpcEncounter_b__4_0(
        ViewWaveEnemyMaster___c_o *this,
        ViewWaveEnemyEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return ViewWaveEnemyEntity__GetUnknownDispInfo(x, (const MethodInfo *)x) != 0LL;
}


void __fastcall ViewWaveEnemyMaster___c__DisplayClass4_0___ctor(
        ViewWaveEnemyMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ViewWaveEnemyMaster___c__DisplayClass4_0___IsSameUnknownNpcEncounter_b__1(
        ViewWaveEnemyMaster___c__DisplayClass4_0_o *this,
        ViewWaveEnemyEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.npcSvtId != this->fields.npcSvtId;
}