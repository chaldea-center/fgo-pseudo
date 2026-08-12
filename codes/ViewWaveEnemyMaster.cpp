void ViewWaveEnemyMaster___ctor(ViewWaveEnemyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59719AB & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string___ctor__);
    byte_59719AB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    468,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ViewWaveEnemyEntity_o *ViewWaveEnemyMaster__GetEntity(
        ViewWaveEnemyMaster_o *this,
        int32_t questId,
        int32_t enemyId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59719A9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__GetEntity__);
    sub_2213A60(&ViewWaveEnemyEntity_TypeInfo);
    byte_59719A9 = 1;
  }
  if ( !*(&ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo, *(_QWORD *)&questId);
  PK = (Il2CppObject *)ViewWaveEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&enemyId);
  return (ViewWaveEnemyEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3F157EC *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__GetEntity__);
}


ViewWaveEnemyEntity_array *ViewWaveEnemyMaster__GetEntityListFromQuestId(
        ViewWaveEnemyMaster_o *this,
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

  if ( (byte_59719AC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ViewWaveEnemyEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ViewWaveEnemyEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_59719AC = 1;
  }
  entity = 0;
  EnemyInfoDispNpcSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)sub_2213B20(int___TypeInfo, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  v8 = clsQuestCheck__mfGetQuestPhaseByQuestID((clsQuestCheck_o *)Instance, questId, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  v10 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, questId, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
  Instance = (__int64)this->fields.list;
  if ( !Instance )
    goto LABEL_54;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ViewWaveEnemyEntity__GetEnumerator__);
  v41 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v13);
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
      v18 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                 i,
                 *(_QWORD *)(v18 + 8));
    if ( (Instance & 1) == 0 )
      break;
    if ( !v41 )
      sub_2213CDC(Instance, v7);
    v19 = v41->klass;
    v20 = *(unsigned __int16 *)&v41->klass->_2.rank;
    if ( *(_WORD *)&v41->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ViewWaveEnemyEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ViewWaveEnemyEntity__TypeInfo )
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
      v22 = sub_224BC3C(v41, System_Collections_Generic_IEnumerator_ViewWaveEnemyEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            v41,
            *(_QWORD *)(v22 + 8));
    v31 = (Il2CppObject *)v23;
    if ( !v23 )
      sub_2213CDC(0, v24);
    if ( *(_DWORD *)(v23 + 16) == questId )
    {
      if ( !EnemyInfoDispNpcSvtIdList )
        sub_2213CDC(v23, v24);
      if ( !EnemyInfoDispNpcSvtIdList[1].monitor
        || (v23 = System_Linq_Enumerable__Contains_int_(
                    EnemyInfoDispNpcSvtIdList,
                    *(_DWORD *)(v23 + 52),
                    (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___),
            (v23 & 1) != 0) )
      {
        if ( !v11
          || (items = v11->fields._items,
              v33 = Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__,
              ++v11->fields._version,
              !items) )
        {
          sub_2213CDC(v23, v24);
        }
        size = v11->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v31,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v31;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v31, v25, v26, v27, v28, v29, v30);
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
      v39 = sub_224BC3C(v41, System_IDisposable_TypeInfo, 0);
    }
    Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                 v41,
                 *(_QWORD *)(v39 + 8));
  }
  if ( !v11 )
LABEL_54:
    sub_2213CDC(Instance, v7);
  return (ViewWaveEnemyEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__);
}


bool ViewWaveEnemyMaster__IsSameUnknownNpcEncounter(
        ViewWaveEnemyMaster_o *this,
        ViewWaveEnemyEntity_array *viewWaveEnemyEntityList,
        int32_t reachedWave,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x1
  ViewWaveEnemyMaster___c_c *v8; // x0
  struct ViewWaveEnemyMaster___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__4_0; // x22
  Il2CppObject *v11; // x23
  struct ViewWaveEnemyMaster___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Object_array *object; // x0
  __int64 v21; // x1
  System_Object_array *v22; // x20
  int v23; // w9
  System_Func_ViewWaveEnemyEntity__bool__c *v24; // x0
  System_Func_object__bool__o *v25; // x22

  if ( (byte_59719AD & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_ViewWaveEnemyEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_First_ViewWaveEnemyEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_ViewWaveEnemyEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_ViewWaveEnemyEntity___);
    sub_2213A60(&System_Func_ViewWaveEnemyEntity__bool__TypeInfo);
    sub_2213A60(&Method_ViewWaveEnemyMaster___c__IsSameUnknownNpcEncounter_b__4_0__);
    sub_2213A60(&Method_ViewWaveEnemyMaster___c__DisplayClass4_0__IsSameUnknownNpcEncounter_b__1__);
    sub_2213A60(&ViewWaveEnemyMaster___c__DisplayClass4_0_TypeInfo);
    sub_2213A60(&ViewWaveEnemyMaster___c_TypeInfo);
    byte_59719AD = 1;
  }
  v6 = sub_2213CCC(ViewWaveEnemyMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  v8 = ViewWaveEnemyMaster___c_TypeInfo;
  if ( !*(&ViewWaveEnemyMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyMaster___c_TypeInfo, v7);
    v8 = ViewWaveEnemyMaster___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__4_0 = (System_Func_object__bool__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v7);
      static_fields = ViewWaveEnemyMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ViewWaveEnemyEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__4_0,
      v11,
      Method_ViewWaveEnemyMaster___c__IsSameUnknownNpcEncounter_b__4_0__,
      0);
    v12 = ViewWaveEnemyMaster___c_TypeInfo->static_fields;
    v12->__9__4_0 = (struct System_Func_ViewWaveEnemyEntity__bool__o *)_9__4_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__4_0, (int32_t)_9__4_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)viewWaveEnemyEntityList,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_ViewWaveEnemyEntity___);
  object = System_Linq_Enumerable__ToArray_object_(
             v19,
             (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_ViewWaveEnemyEntity___);
  if ( !object )
    goto LABEL_18;
  v22 = object;
  if ( SLODWORD(object->max_length) < 2 )
    return 0;
  object = (System_Object_array *)System_Linq_Enumerable__First_object_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)object,
                                    (const MethodInfo_387FC04 *)Method_System_Linq_Enumerable_First_ViewWaveEnemyEntity___);
  if ( !object || !v6 )
LABEL_18:
    sub_2213CDC(object, v21);
  v23 = HIDWORD(object->m_Items[2]);
  v24 = System_Func_ViewWaveEnemyEntity__bool__TypeInfo;
  *(_DWORD *)(v6 + 16) = v23;
  v25 = (System_Func_object__bool__o *)sub_2213CCC(v24);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v6,
    Method_ViewWaveEnemyMaster___c__DisplayClass4_0__IsSameUnknownNpcEncounter_b__1__,
    0);
  if ( BasicHelper__Any_object__58785420(
         v22,
         (System_Func_T__bool__o *)v25,
         (const MethodInfo_380FE8C *)Method_BasicHelper_Any_ViewWaveEnemyEntity___) )
  {
    return 0;
  }
  object = (System_Object_array *)System_Linq_Enumerable__First_object_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v22,
                                    (const MethodInfo_387FC04 *)Method_System_Linq_Enumerable_First_ViewWaveEnemyEntity___);
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

  if ( (byte_59719AA & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__TryGetEntity__);
    sub_2213A60(&ViewWaveEnemyEntity_TypeInfo);
    byte_59719AA = 1;
  }
  if ( !*(&ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo, entity);
  PK = (Il2CppObject *)ViewWaveEnemyEntity__CreatePK(questId, enemyId, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ViewWaveEnemyMaster__ViewWaveEnemyEntity__string__TryGetEntity__);
}


void ViewWaveEnemyMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59719AE & 1) == 0 )
  {
    sub_2213A60(&ViewWaveEnemyMaster___c_TypeInfo);
    byte_59719AE = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ViewWaveEnemyMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ViewWaveEnemyMaster___c_TypeInfo->static_fields->__9 = (struct ViewWaveEnemyMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ViewWaveEnemyMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return x->fields.npcSvtId != this->fields.npcSvtId;
}