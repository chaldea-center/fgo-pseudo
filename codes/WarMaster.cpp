void __fastcall WarMaster___ctor(WarMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD45C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_WarMaster__WarEntity__int___ctor__, method);
    byte_49FD45C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    4,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_WarMaster__WarEntity__int___ctor__);
}


System_Collections_Generic_List_WarEntity__o *__fastcall WarMaster__GetEntityList(
        WarMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarMaster___c_c *v8; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v11; // x21
  struct WarMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_49FD45D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_DataEntityBase__WarEntity___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_WarEntity___, v4);
    sub_1B640C8(&System_Func_DataEntityBase__WarEntity__TypeInfo, v5);
    sub_1B640C8(&Method_WarMaster___c__GetEntityList_b__1_0__, v6);
    sub_1B640C8(&WarMaster___c_TypeInfo, v7);
    byte_49FD45D = 1;
  }
  v8 = WarMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo);
    v8 = WarMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v8->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = WarMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1B64314(System_Func_DataEntityBase__WarEntity__TypeInfo, method, v2);
    System_Func_object__object____ctor(_9__1_0, v11, Method_WarMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = WarMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_DataEntityBase__WarEntity__o *)_9__1_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_DataEntityBase__WarEntity___);
  return (System_Collections_Generic_List_WarEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                           v15,
                                                           (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_WarEntity___);
}


bool __fastcall WarMaster__IsClearAllMainScenario(WarMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w20
  int32_t v9; // w21
  bool v10; // w26
  const MethodInfo *v11; // x2
  System_Collections_ObjectModel_Collection_T__o *v12; // x22
  __int64 methodPtr_low; // x10
  int32_t klass_high; // w22

  if ( (byte_49FD464 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&CondType_TypeInfo, v4);
    sub_1B640C8(&WarEntity_TypeInfo, v5);
    byte_49FD464 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    v10 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = list;
      methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (WarEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != WarEntity_TypeInfo )
      {
        break;
      }
      if ( !WarEntity__HasFlag((WarEntity_o *)list, 128, v11) )
        goto LABEL_22;
      klass_high = HIDWORD(v12[4].klass);
      if ( klass_high < 1 )
        goto LABEL_22;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsQuestClear_37285996(klass_high, -1, 0, 0LL) )
      {
LABEL_22:
        v10 = ++v9 < v8;
        if ( v8 != v9 )
          continue;
      }
      return !v10;
    }
LABEL_19:
    sub_1B64324(list);
  }
  v10 = 0;
  return !v10;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarMaster__IsLastQuest(int32_t warId, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x2
  WarEntity_o *v9; // x0
  WarEntity_o *v10; // x20
  bool result; // w0

  if ( (byte_49FD463 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_6336/*"FES_WAR_ID"*/, v6);
    byte_49FD463 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  v9 = WarMaster__getByLastQuestId((WarMaster_o *)Instance, questId, v8);
  result = 0;
  if ( v9 )
  {
    v10 = v9;
    if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6336/*"FES_WAR_ID"*/, 0LL) == warId && v10->fields.id == warId )
      return 1;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
WarEntity_o *__fastcall WarMaster__getByEventId(WarMaster_o *this, int32_t event_id, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WarEntity_o *result; // x0
  int32_t v8; // w21
  __int64 methodPtr_low; // x10

  if ( (byte_49FD45F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&event_id);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&WarEntity_TypeInfo, v6);
    byte_49FD45F = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_1B64324(result);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)result,
                                v8,
                                (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (WarEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == WarEntity_TypeInfo )
        {
          if ( result->fields.eventId == event_id )
            return result;
          result = (WarEntity_o *)this->fields.list;
          ++v8;
          if ( result )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
WarEntity_o *__fastcall WarMaster__getByLastQuestId(WarMaster_o *this, int32_t last_quest_id, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WarEntity_o *result; // x0
  int32_t v8; // w21
  __int64 methodPtr_low; // x10

  if ( (byte_49FD45E & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&last_quest_id);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&WarEntity_TypeInfo, v6);
    byte_49FD45E = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_1B64324(result);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)result,
                                v8,
                                (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (WarEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == WarEntity_TypeInfo )
        {
          if ( result->fields.lastQuestId == last_quest_id )
            return result;
          result = (WarEntity_o *)this->fields.list;
          ++v8;
          if ( result )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
  return 0LL;
}


System_Int32_array *__fastcall WarMaster__getClearWarIdList(WarMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_int__o *v14; // x21
  int32_t v15; // w22
  const MethodInfo *v16; // x2
  System_Collections_ObjectModel_Collection_T__o *v17; // x23
  __int64 methodPtr_low; // x10
  int32_t klass_high; // w24
  int32_t items; // w1
  struct System_Int32_array *v21; // x8
  _QWORD *v22; // x9
  __int64 size; // x10

  if ( (byte_49FD462 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&CondType_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B640C8(&WarEntity_TypeInfo, v9);
    byte_49FD462 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v14 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v12, v13);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v17 = list;
      methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (WarEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != WarEntity_TypeInfo )
      {
        break;
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)WarEntity__HasFlag((WarEntity_o *)list, 32, v16);
      if ( ((unsigned __int8)list & 1) == 0 )
      {
        klass_high = HIDWORD(v17[4].klass);
        if ( klass_high >= 1 )
        {
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)CondType__IsQuestClear_37285996(
                                                                     klass_high,
                                                                     -1,
                                                                     0,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v14 )
              break;
            items = (int32_t)v17->fields.items;
            v21 = v14->fields._items;
            v22 = Method_System_Collections_Generic_List_int__Add__;
            ++v14->fields._version;
            if ( !v21 )
              break;
            size = v14->fields._size;
            if ( (unsigned int)size >= v21->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v14,
                items,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v14->fields._size = size + 1;
              v21->m_Items[size + 1] = items;
            }
          }
        }
      }
      if ( Count == ++v15 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B64324(list);
  }
LABEL_21:
  if ( !v14 )
    goto LABEL_23;
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarMaster__getEventID(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_49FD460 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_WarMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FD460 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             warId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity )
    return (int32_t)Entity[6].klass;
  else
    return -1;
}


WarEntity_array *__fastcall WarMaster__getPrioredWarEntsWithIds(
        WarMaster_o *this,
        System_Collections_Generic_List_int__o *ids,
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
  System_Collections_Generic_List_object__o *v17; // x20
  void *list; // x0
  int32_t v19; // w22
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *v22; // x23
  __int64 methodPtr_low; // x10
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Comparison_T__o *v30; // x19
  Il2CppObject *v31; // x21
  struct WarMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3

  if ( (byte_49FD461 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, ids);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&System_Comparison_WarEntity__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarEntity__Sort__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarEntity__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarEntity___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1B640C8(&System_Collections_Generic_List_WarEntity__TypeInfo, v13);
    sub_1B640C8(&Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__, v14);
    sub_1B640C8(&WarMaster___c_TypeInfo, v15);
    sub_1B640C8(&WarEntity_TypeInfo, v16);
    byte_49FD461 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarEntity__TypeInfo,
                                                       ids,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  v19 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v19 >= (int)list )
      break;
    if ( !ids )
      goto LABEL_28;
    if ( !ids->fields._size )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v19,
             (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_28;
    v22 = (Il2CppObject *)list;
    methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(WarEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != WarEntity_TypeInfo )
    {
      goto LABEL_28;
    }
    list = (void *)System_Collections_Generic_List_int___Remove(
                     ids,
                     *((_DWORD *)list + 4),
                     (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
    if ( ((unsigned __int8)list & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_28;
      items = v17->fields._items;
      v27 = Method_System_Collections_Generic_List_WarEntity__Add__;
      ++v17->fields._version;
      if ( !items )
        goto LABEL_28;
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          v22,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v22;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v22, v24, v25);
      }
    }
    list = this->fields.list;
    ++v19;
    if ( !list )
      goto LABEL_28;
  }
  list = WarMaster___c_TypeInfo;
  if ( !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo);
    list = WarMaster___c_TypeInfo;
  }
  v30 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v30 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = WarMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)**((_QWORD **)list + 23);
    v30 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_WarEntity__TypeInfo, v20, v21);
    System_Comparison_object____ctor(v30, v31, Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__, 0LL);
    static_fields = WarMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_WarEntity__o *)v30;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)v30, v33, v34);
  }
  if ( !v17 )
LABEL_28:
    sub_1B64324(list);
  System_Collections_Generic_List_object___Sort_55243320(
    v17,
    v30,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  return (WarEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v17,
                              (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarEntity__ToArray__);
}


void __fastcall WarMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FD465 & 1) == 0 )
  {
    sub_1B640C8(&WarMaster___c_TypeInfo, v1);
    byte_49FD465 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarMaster___c_TypeInfo->static_fields->__9 = (struct WarMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)WarMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall WarMaster___c___ctor(WarMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarEntity_o *__fastcall WarMaster___c___GetEntityList_b__1_0(
        WarMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_49FD466 & 1) == 0 )
  {
    sub_1B640C8(&WarEntity_TypeInfo, data);
    byte_49FD466 = 1;
  }
  if ( !data )
    return 0LL;
  methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (WarEntity_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == WarEntity_TypeInfo )
    return (WarEntity_o *)data;
  return 0LL;
}


int32_t __fastcall WarMaster___c___getPrioredWarEntsWithIds_b__5_0(
        WarMaster___c_o *this,
        WarEntity_o *a,
        WarEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}