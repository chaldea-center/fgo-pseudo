void __fastcall WarMaster___ctor(WarMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FFB76 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_WarMaster__WarEntity__int___ctor__, method);
    byte_49FFB76 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    4,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_WarMaster__WarEntity__int___ctor__);
}


System_Collections_Generic_List_WarEntity__o *__fastcall WarMaster__GetEntityList(
        WarMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarMaster___c_c *v7; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v10; // x21
  struct WarMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_49FFB77 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_DataEntityBase__WarEntity___, method);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToList_WarEntity___, v3);
    sub_1B64A00(&System_Func_DataEntityBase__WarEntity__TypeInfo, v4);
    sub_1B64A00(&Method_WarMaster___c__GetEntityList_b__1_0__, v5);
    sub_1B64A00(&WarMaster___c_TypeInfo, v6);
    byte_49FFB77 = 1;
  }
  v7 = WarMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo);
    v7 = WarMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v7->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WarMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1B64C4C(System_Func_DataEntityBase__WarEntity__TypeInfo);
    System_Func_object__object____ctor(_9__1_0, v10, Method_WarMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = WarMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_DataEntityBase__WarEntity__o *)_9__1_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2E6BCA0 *)Method_System_Linq_Enumerable_Select_DataEntityBase__WarEntity___);
  return (System_Collections_Generic_List_WarEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                           v14,
                                                           (const MethodInfo_2E77910 *)Method_System_Linq_Enumerable_ToList_WarEntity___);
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

  if ( (byte_49FFB7E & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B64A00(&CondType_TypeInfo, v4);
    sub_1B64A00(&WarEntity_TypeInfo, v5);
    byte_49FFB7E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( CondType__IsQuestClear_37290712(klass_high, -1, 0, 0LL) )
      {
LABEL_22:
        v10 = ++v9 < v8;
        if ( v8 != v9 )
          continue;
      }
      return !v10;
    }
LABEL_19:
    sub_1B64C5C(list, method);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  WarEntity_o *v10; // x0
  WarEntity_o *v11; // x20
  bool result; // w0

  if ( (byte_49FFB7D & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&questId);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B64A00(&StringLiteral_6337/*"FES_WAR_ID"*/, v6);
    byte_49FFB7D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B64C5C(Instance, v8);
  }
  v10 = WarMaster__getByLastQuestId((WarMaster_o *)Instance, questId, v9);
  result = 0;
  if ( v10 )
  {
    v11 = v10;
    if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6337/*"FES_WAR_ID"*/, 0LL) == warId && v11->fields.id == warId )
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

  if ( (byte_49FFB79 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&event_id);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64A00(&WarEntity_TypeInfo, v6);
    byte_49FFB79 = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_1B64C5C(result, *(_QWORD *)&event_id);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)result,
                                v8,
                                (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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

  if ( (byte_49FFB78 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&last_quest_id);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64A00(&WarEntity_TypeInfo, v6);
    byte_49FFB78 = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_1B64C5C(result, *(_QWORD *)&last_quest_id);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)result,
                                v8,
                                (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
  System_Collections_Generic_List_int__o *v12; // x21
  int32_t v13; // w22
  const MethodInfo *v14; // x2
  System_Collections_ObjectModel_Collection_T__o *v15; // x23
  __int64 methodPtr_low; // x10
  int32_t klass_high; // w24
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10

  if ( (byte_49FFB7C & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B64A00(&CondType_TypeInfo, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B64A00(&WarEntity_TypeInfo, v9);
    byte_49FFB7C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v12 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v15 = list;
      methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (WarEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != WarEntity_TypeInfo )
      {
        break;
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)WarEntity__HasFlag((WarEntity_o *)list, 32, v14);
      if ( ((unsigned __int8)list & 1) == 0 )
      {
        klass_high = HIDWORD(v15[4].klass);
        if ( klass_high >= 1 )
        {
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)CondType__IsQuestClear_37290712(
                                                                     klass_high,
                                                                     -1,
                                                                     0,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v12 )
              break;
            method = (const MethodInfo *)LODWORD(v15->fields.items);
            items = v12->fields._items;
            v19 = Method_System_Collections_Generic_List_int__Add__;
            ++v12->fields._version;
            if ( !items )
              break;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v12,
                (int32_t)method,
                *(const MethodInfo_34927D0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v12->fields._size = size + 1;
              items->m_Items[size + 1] = (int)method;
            }
          }
        }
      }
      if ( Count == ++v13 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B64C5C(list, method);
  }
LABEL_21:
  if ( !v12 )
    goto LABEL_23;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarMaster__getEventID(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_49FFB7A & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_WarMaster___, method);
    sub_1B64A00(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v3);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FFB7A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B64C5C(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             warId,
             (const MethodInfo_30D6798 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
  __int64 v18; // x1
  void *list; // x0
  int32_t v20; // w22
  Il2CppObject *v21; // x23
  __int64 methodPtr_low; // x10
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Comparison_T__o *v29; // x19
  Il2CppObject *v30; // x21
  struct WarMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3

  if ( (byte_49FFB7B & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, ids);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64A00(&System_Comparison_WarEntity__TypeInfo, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarEntity__Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarEntity__Sort__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarEntity__ToArray__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarEntity___ctor__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1B64A00(&System_Collections_Generic_List_WarEntity__TypeInfo, v13);
    sub_1B64A00(&Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__, v14);
    sub_1B64A00(&WarMaster___c_TypeInfo, v15);
    sub_1B64A00(&WarEntity_TypeInfo, v16);
    byte_49FFB7B = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  v20 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v20 >= (int)list )
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
             v20,
             (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_28;
    v21 = (Il2CppObject *)list;
    methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(WarEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != WarEntity_TypeInfo )
    {
      goto LABEL_28;
    }
    list = (void *)System_Collections_Generic_List_int___Remove(
                     ids,
                     *((_DWORD *)list + 4),
                     (const MethodInfo_3493D6C *)Method_System_Collections_Generic_List_int__Remove__);
    if ( ((unsigned __int8)list & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_28;
      items = v17->fields._items;
      v26 = Method_System_Collections_Generic_List_WarEntity__Add__;
      ++v17->fields._version;
      if ( !items )
        goto LABEL_28;
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          v21,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v21;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v21, v23, v24);
      }
    }
    list = this->fields.list;
    ++v20;
    if ( !list )
      goto LABEL_28;
  }
  list = WarMaster___c_TypeInfo;
  if ( !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo);
    list = WarMaster___c_TypeInfo;
  }
  v29 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v29 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = WarMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)**((_QWORD **)list + 23);
    v29 = (System_Comparison_T__o *)sub_1B64C4C(System_Comparison_WarEntity__TypeInfo);
    System_Comparison_object____ctor(v29, v30, Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__, 0LL);
    static_fields = WarMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_WarEntity__o *)v29;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)v29, v32, v33);
  }
  if ( !v17 )
LABEL_28:
    sub_1B64C5C(list, v18);
  System_Collections_Generic_List_object___Sort_55253804(
    v17,
    v29,
    (const MethodInfo_34B1B2C *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  return (WarEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v17,
                              (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_WarEntity__ToArray__);
}


void __fastcall WarMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FFB7F & 1) == 0 )
  {
    sub_1B64A00(&WarMaster___c_TypeInfo, v1);
    byte_49FFB7F = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(WarMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarMaster___c_TypeInfo->static_fields->__9 = (struct WarMaster___c_o *)v2;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)WarMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_49FFB80 & 1) == 0 )
  {
    sub_1B64A00(&WarEntity_TypeInfo, data);
    byte_49FFB80 = 1;
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
    sub_1B64C5C(this, a);
  return b->fields.priority - a->fields.priority;
}