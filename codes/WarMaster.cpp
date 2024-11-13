void __fastcall WarMaster___ctor(WarMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1728E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int___ctor__, method, v2);
    byte_4B1728E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    4,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_WarMaster__WarEntity__int___ctor__);
}


System_Collections_Generic_List_WarEntity__o *__fastcall WarMaster__GetEntityList(
        WarMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  WarMaster___c_c *v13; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v16; // x21
  struct WarMaster___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B1728F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_DataEntityBase__WarEntity___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_WarEntity___, v5, v6);
    sub_1BCA7E0(&System_Func_DataEntityBase__WarEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_WarMaster___c__GetEntityList_b__1_0__, v9, v10);
    sub_1BCA7E0(&WarMaster___c_TypeInfo, v11, v12);
    byte_4B1728F = 1;
  }
  v13 = WarMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo, method);
    v13 = WarMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v13->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = WarMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_DataEntityBase__WarEntity__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__object____ctor(_9__1_0, v16, Method_WarMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = WarMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_DataEntityBase__WarEntity__o *)_9__1_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_DataEntityBase__WarEntity___);
  return (System_Collections_Generic_List_WarEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                           v24,
                                                           (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_WarEntity___);
}


bool __fastcall WarMaster__IsClearAllMainScenario(WarMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v12; // w20
  int32_t v13; // w21
  bool v14; // w26
  const MethodInfo *v15; // x2
  System_Collections_ObjectModel_Collection_T__o *v16; // x22
  __int64 methodPtr_low; // x10
  int32_t klass_high; // w22

  if ( (byte_4B17296 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&CondType_TypeInfo, v6, v7);
    sub_1BCA7E0(&WarEntity_TypeInfo, v8, v9);
    byte_4B17296 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    v14 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v16 = list;
      methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (WarEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != WarEntity_TypeInfo )
      {
        break;
      }
      if ( !WarEntity__HasFlag((WarEntity_o *)list, 128, v15) )
        goto LABEL_22;
      klass_high = HIDWORD(v16[4].klass);
      if ( klass_high < 1 )
        goto LABEL_22;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
      if ( CondType__IsQuestClear_38310172(klass_high, -1, 0, 0LL) )
      {
LABEL_22:
        v14 = ++v13 < v12;
        if ( v12 != v13 )
          continue;
      }
      return !v14;
    }
LABEL_19:
    sub_1BCAA3C(list, method);
  }
  v14 = 0;
  return !v14;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarMaster__IsLastQuest(int32_t warId, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  WarEntity_o *v12; // x0
  WarEntity_o *v13; // x20
  bool result; // w0

  if ( (byte_4B17295 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&StringLiteral_6487/*"FES_WAR_ID"*/, v7, v8);
    byte_4B17295 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  v12 = WarMaster__getByLastQuestId((WarMaster_o *)Instance, questId, v11);
  result = 0;
  if ( v12 )
  {
    v13 = v12;
    if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6487/*"FES_WAR_ID"*/, 0LL) == warId && v13->fields.id == warId )
      return 1;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
WarEntity_o *__fastcall WarMaster__getByEventId(WarMaster_o *this, int32_t event_id, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  WarEntity_o *result; // x0
  int32_t v10; // w21
  __int64 methodPtr_low; // x10

  if ( (byte_4B17291 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&event_id,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&WarEntity_TypeInfo, v7, v8);
    byte_4B17291 = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_1BCAA3C(result, *(_QWORD *)&event_id);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)result,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)result,
                                v10,
                                (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (WarEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == WarEntity_TypeInfo )
        {
          if ( result->fields.eventId == event_id )
            return result;
          result = (WarEntity_o *)this->fields.list;
          ++v10;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  WarEntity_o *result; // x0
  int32_t v10; // w21
  __int64 methodPtr_low; // x10

  if ( (byte_4B17290 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&last_quest_id,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&WarEntity_TypeInfo, v7, v8);
    byte_4B17290 = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_1BCAA3C(result, *(_QWORD *)&last_quest_id);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)result,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)result,
                                v10,
                                (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (WarEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == WarEntity_TypeInfo )
        {
          if ( result->fields.lastQuestId == last_quest_id )
            return result;
          result = (WarEntity_o *)this->fields.list;
          ++v10;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_int__o *v23; // x21
  int32_t v24; // w22
  const MethodInfo *v25; // x2
  System_Collections_ObjectModel_Collection_T__o *v26; // x23
  __int64 methodPtr_low; // x10
  int32_t klass_high; // w24
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10

  if ( (byte_4B17294 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&CondType_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v14, v15);
    sub_1BCA7E0(&WarEntity_TypeInfo, v16, v17);
    byte_4B17294 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v23 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v20,
                                                    v21,
                                                    v22);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v24,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v26 = list;
      methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (WarEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != WarEntity_TypeInfo )
      {
        break;
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)WarEntity__HasFlag((WarEntity_o *)list, 32, v25);
      if ( ((unsigned __int8)list & 1) == 0 )
      {
        klass_high = HIDWORD(v26[4].klass);
        if ( klass_high >= 1 )
        {
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
          list = (System_Collections_ObjectModel_Collection_T__o *)CondType__IsQuestClear_38310172(
                                                                     klass_high,
                                                                     -1,
                                                                     0,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v23 )
              break;
            method = (const MethodInfo *)LODWORD(v26->fields.items);
            items = v23->fields._items;
            v30 = Method_System_Collections_Generic_List_int__Add__;
            ++v23->fields._version;
            if ( !items )
              break;
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v23,
                (int32_t)method,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v23->fields._size = size + 1;
              items->m_Items[size + 1] = (int)method;
            }
          }
        }
      }
      if ( Count == ++v24 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1BCAA3C(list, method);
  }
LABEL_21:
  if ( !v23 )
    goto LABEL_23;
  return System_Collections_Generic_List_int___ToArray(
           v23,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarMaster__getEventID(int32_t warId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B17292 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B17292 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             warId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_object__o *v30; // x20
  __int64 v31; // x1
  void *list; // x0
  int32_t v33; // w22
  __int64 v34; // x2
  __int64 v35; // x3
  Il2CppObject *v36; // x23
  __int64 methodPtr_low; // x10
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  System_Comparison_T__o *v48; // x19
  Il2CppObject *v49; // x21
  struct WarMaster___c_StaticFields *static_fields; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7

  if ( (byte_4B17293 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, ids, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_WarEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarEntity__Sort__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarEntity__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarEntity___ctor__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_WarEntity__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__, v24, v25);
    sub_1BCA7E0(&WarMaster___c_TypeInfo, v26, v27);
    sub_1BCA7E0(&WarEntity_TypeInfo, v28, v29);
    byte_4B17293 = 1;
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarEntity__TypeInfo,
                                                       ids,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  v33 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v33 >= (int)list )
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
             v33,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_28;
    v36 = (Il2CppObject *)list;
    methodPtr_low = LOBYTE(WarEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(WarEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != WarEntity_TypeInfo )
    {
      goto LABEL_28;
    }
    list = (void *)System_Collections_Generic_List_int___Remove(
                     ids,
                     *((_DWORD *)list + 4),
                     (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
    if ( ((unsigned __int8)list & 1) != 0 )
    {
      if ( !v30 )
        goto LABEL_28;
      items = v30->fields._items;
      v45 = Method_System_Collections_Generic_List_WarEntity__Add__;
      ++v30->fields._version;
      if ( !items )
        goto LABEL_28;
      size = v30->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          v36,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v30->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v36;
        sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v36, v38, v39, v40, v41, v42, v43);
      }
    }
    list = this->fields.list;
    ++v33;
    if ( !list )
      goto LABEL_28;
  }
  list = WarMaster___c_TypeInfo;
  if ( !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo, v31);
    list = WarMaster___c_TypeInfo;
  }
  v48 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v48 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v31);
      list = WarMaster___c_TypeInfo;
    }
    v49 = (Il2CppObject *)**((_QWORD **)list + 23);
    v48 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_WarEntity__TypeInfo, v31, v34, v35);
    System_Comparison_object____ctor(v48, v49, Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__, 0LL);
    static_fields = WarMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_WarEntity__o *)v48;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v48, v51, v52, v53, v54, v55, v56);
  }
  if ( !v30 )
LABEL_28:
    sub_1BCAA3C(list, v31);
  System_Collections_Generic_List_object___Sort_56244000(
    v30,
    v48,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  return (WarEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v30,
                              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarEntity__ToArray__);
}


void __fastcall WarMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B17297 & 1) == 0 )
  {
    sub_1BCA7E0(&WarMaster___c_TypeInfo, v1, v2);
    byte_4B17297 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarMaster___c_TypeInfo->static_fields->__9 = (struct WarMaster___c_o *)v4;
  sub_1BCA784((PartyOrganizationUtility_o *)WarMaster___c_TypeInfo->static_fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4B17298 & 1) == 0 )
  {
    sub_1BCA7E0(&WarEntity_TypeInfo, data, method);
    byte_4B17298 = 1;
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}