void ViewWaveEnemyMaster___ctor(ViewWaveEnemyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D31AB5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string___ctor__);
    byte_4D31AB5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    466,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ViewWaveEnemyEntity_o *ViewWaveEnemyMaster__GetEntity(
        ViewWaveEnemyMaster_o *this,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D31AB3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__GetEntity__);
    sub_1C93AD4(&ViewWaveEnemyEntity_TypeInfo);
    byte_4D31AB3 = 1;
  }
  if ( !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo);
  PK = (Il2CppObject *)ViewWaveEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&enemyId);
  return (ViewWaveEnemyEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_34681D4 *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__GetEntity__);
}


ViewWaveEnemyEntity_array *ViewWaveEnemyMaster__GetEntityListFromQuestId(
        ViewWaveEnemyMaster_o *this,
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
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  Il2CppObject *v29; // x23
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D31AB6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ViewWaveEnemyEntity__GetEnumerator__);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ViewWaveEnemyEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4D31AB6 = 1;
  }
  entity = 0;
  EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C93B7C(int___TypeInfo, 0);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  v8 = clsQuestCheck__mfGetQuestPhaseByQuestID(Instance, questId, 0);
  Instance = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  v9 = clsQuestCheck__IsQuestClear(Instance, questId, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (clsQuestCheck_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_48;
  if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Instance, &entity, questId, v8 + !v9, 0) )
  {
    Instance = (clsQuestCheck_o *)entity;
    if ( !entity )
      goto LABEL_48;
    EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
                                                                                       entity,
                                                                                       0);
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
  Instance = (clsQuestCheck_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_48;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_ViewWaveEnemyEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_17:
      v16 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8))
        & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ViewWaveEnemyEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_ViewWaveEnemyEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_24;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_24:
      v20 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_ViewWaveEnemyEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    v29 = (Il2CppObject *)v21;
    if ( !v21 )
      sub_1C93D2C(0, v22);
    if ( *(_DWORD *)(v21 + 16) == questId )
    {
      if ( !EnemyInfoDispNpcSvtIdList )
        sub_1C93D2C(v21, v22);
      if ( !EnemyInfoDispNpcSvtIdList[1].monitor
        || (v21 = System_Linq_Enumerable__Contains_int_(
                    EnemyInfoDispNpcSvtIdList,
                    *(_DWORD *)(v21 + 52),
                    (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___),
            (v21 & 1) != 0) )
      {
        if ( !v10 )
          sub_1C93D2C(v21, v22);
        items = v10->fields._items;
        v31 = Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          sub_1C93D2C(v21, v22);
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v29,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v29;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v29, v23, v24, v25, v26, v27, v28);
        }
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_40;
    }
    v37 = (__int64)&v34->vtable[*v36];
  }
  else
  {
LABEL_40:
    v37 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  Instance = (clsQuestCheck_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                  Enumerator,
                                  *(_QWORD *)(v37 + 8));
  if ( !v10 )
LABEL_48:
    sub_1C93D2C(Instance, v7);
  return (ViewWaveEnemyEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v10,
                                        (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Object_array *object; // x0
  __int64 v19; // x1
  System_Object_array *v20; // x20
  System_Func_object__bool__o *v21; // x22

  if ( (byte_4D31AB7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_ViewWaveEnemyEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_First_ViewWaveEnemyEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_ViewWaveEnemyEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_ViewWaveEnemyEntity___);
    sub_1C93AD4(&System_Func_ViewWaveEnemyEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_ViewWaveEnemyMaster___c__IsSameUnknownNpcEncounter_b__4_0__);
    sub_1C93AD4(&Method_ViewWaveEnemyMaster___c__DisplayClass4_0__IsSameUnknownNpcEncounter_b__1__);
    sub_1C93AD4(&ViewWaveEnemyMaster___c__DisplayClass4_0_TypeInfo);
    sub_1C93AD4(&ViewWaveEnemyMaster___c_TypeInfo);
    byte_4D31AB7 = 1;
  }
  v6 = sub_1C93D20(ViewWaveEnemyMaster___c__DisplayClass4_0_TypeInfo);
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
    _9__4_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ViewWaveEnemyEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__4_0, v9, Method_ViewWaveEnemyMaster___c__IsSameUnknownNpcEncounter_b__4_0__, 0);
    static_fields = ViewWaveEnemyMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_ViewWaveEnemyEntity__bool__o *)_9__4_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)viewWaveEnemyEntityList,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_ViewWaveEnemyEntity___);
  object = System_Linq_Enumerable__ToArray_object_(
             v17,
             (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_ViewWaveEnemyEntity___);
  if ( !object )
    goto LABEL_18;
  v20 = object;
  if ( SLODWORD(object->max_length) < 2 )
    return 0;
  object = (System_Object_array *)System_Linq_Enumerable__First_object_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)object,
                                    (const MethodInfo_31CA994 *)Method_System_Linq_Enumerable_First_ViewWaveEnemyEntity___);
  if ( !object || !v6 )
LABEL_18:
    sub_1C93D2C(object, v19);
  *(_DWORD *)(v6 + 16) = HIDWORD(object->m_Items[2]);
  v21 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ViewWaveEnemyEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v6,
    Method_ViewWaveEnemyMaster___c__DisplayClass4_0__IsSameUnknownNpcEncounter_b__1__,
    0);
  if ( BasicHelper__Any_object__51960868(
         v20,
         (System_Func_T__bool__o *)v21,
         (const MethodInfo_318DC24 *)Method_BasicHelper_Any_ViewWaveEnemyEntity___) )
  {
    return 0;
  }
  object = (System_Object_array *)System_Linq_Enumerable__First_object_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                    (const MethodInfo_31CA994 *)Method_System_Linq_Enumerable_First_ViewWaveEnemyEntity___);
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

  if ( (byte_4D31AB4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__TryGetEntity__);
    sub_1C93AD4(&ViewWaveEnemyEntity_TypeInfo);
    byte_4D31AB4 = 1;
  }
  if ( !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo);
  PK = (Il2CppObject *)ViewWaveEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__TryGetEntity__);
}


void ViewWaveEnemyMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D31AB8 & 1) == 0 )
  {
    sub_1C93AD4(&ViewWaveEnemyMaster___c_TypeInfo);
    byte_4D31AB8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ViewWaveEnemyMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ViewWaveEnemyMaster___c_TypeInfo->static_fields->__9 = (struct ViewWaveEnemyMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ViewWaveEnemyMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(this, 0);
  return x->fields.npcSvtId != this->fields.npcSvtId;
}