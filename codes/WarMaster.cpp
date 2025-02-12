void __fastcall WarMaster___ctor(WarMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB57BE & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_WarMaster__WarEntity__int___ctor__, method);
    byte_4BB57BE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    4,
    (const MethodInfo_3236300 *)Method_DataMasterBase_WarMaster__WarEntity__int___ctor__);
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
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v10; // x21
  struct WarMaster___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4BB57BF & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_WarEntity__WarEntity___, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_WarEntity___, v3);
    sub_1C13D24(&System_Func_WarEntity__WarEntity__TypeInfo, v4);
    sub_1C13D24(&Method_WarMaster___c__GetEntityList_b__1_0__, v5);
    sub_1C13D24(&WarMaster___c_TypeInfo, v6);
    byte_4BB57BF = 1;
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
    _9__1_0 = (System_Func_object__object__o *)sub_1C13F70(System_Func_WarEntity__WarEntity__TypeInfo);
    System_Func_object__object____ctor(_9__1_0, v10, Method_WarMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = WarMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarEntity__WarEntity__o *)_9__1_0;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_WarEntity__WarEntity___);
  return (System_Collections_Generic_List_WarEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                           v18,
                                                           (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_WarEntity___);
}


bool __fastcall WarMaster__IsClearAllMainScenario(WarMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w20
  int32_t v8; // w21
  bool v9; // w25
  const MethodInfo *v10; // x2
  System_Collections_ObjectModel_Collection_T__o *v11; // x22
  int32_t klass_high; // w22

  if ( (byte_4BB57C6 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__, v3);
    sub_1C13D24(&CondType_TypeInfo, v4);
    byte_4BB57C6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
      if ( !list )
        break;
      v11 = list;
      if ( !WarEntity__HasFlag((WarEntity_o *)list, 128, v10) )
        goto LABEL_20;
      klass_high = HIDWORD(v11[4].klass);
      if ( klass_high < 1 )
        goto LABEL_20;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsQuestClear_38735352(klass_high, -1, 0, 0LL) )
      {
LABEL_20:
        v9 = ++v8 < v7;
        if ( v7 != v8 )
          continue;
      }
      return !v9;
    }
LABEL_17:
    sub_1C13F80(list, method);
  }
  v9 = 0;
  return !v9;
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

  if ( (byte_4BB57C5 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&questId);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C13D24(&StringLiteral_6522/*"FDSize"*/, v6);
    byte_4BB57C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1C13F80(Instance, v8);
  }
  v10 = WarMaster__getByLastQuestId((WarMaster_o *)Instance, questId, v9);
  result = 0;
  if ( v10 )
  {
    v11 = v10;
    if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6522/*"FDSize"*/, 0LL) == warId && v11->fields.id == warId )
      return 1;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
WarEntity_o *__fastcall WarMaster__getByEventId(WarMaster_o *this, int32_t event_id, const MethodInfo *method)
{
  __int64 v5; // x1
  WarEntity_o *result; // x0
  int32_t v7; // w21

  if ( (byte_4BB57C1 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__, *(_QWORD *)&event_id);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__, v5);
    byte_4BB57C1 = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_10:
    sub_1C13F80(result, *(_QWORD *)&event_id);
  v7 = 0;
  while ( v7 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)result,
                                v7,
                                (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
      if ( result )
      {
        if ( result->fields.eventId == event_id )
          return result;
        result = (WarEntity_o *)this->fields.list;
        ++v7;
        if ( result )
          continue;
      }
    }
    goto LABEL_10;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
WarEntity_o *__fastcall WarMaster__getByLastQuestId(WarMaster_o *this, int32_t last_quest_id, const MethodInfo *method)
{
  __int64 v5; // x1
  WarEntity_o *result; // x0
  int32_t v7; // w21

  if ( (byte_4BB57C0 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__, *(_QWORD *)&last_quest_id);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__, v5);
    byte_4BB57C0 = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_10:
    sub_1C13F80(result, *(_QWORD *)&last_quest_id);
  v7 = 0;
  while ( v7 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)result,
                                v7,
                                (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
      if ( result )
      {
        if ( result->fields.lastQuestId == last_quest_id )
          return result;
        result = (WarEntity_o *)this->fields.list;
        ++v7;
        if ( result )
          continue;
      }
    }
    goto LABEL_10;
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v11; // x21
  int32_t v12; // w22
  const MethodInfo *v13; // x2
  System_Collections_ObjectModel_Collection_T__o *v14; // x23
  int32_t klass_high; // w24
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10

  if ( (byte_4BB57C4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__, v3);
    sub_1C13D24(&CondType_TypeInfo, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4BB57C4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
  v11 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
      if ( !list )
        break;
      v14 = list;
      list = (System_Collections_ObjectModel_Collection_T__o *)WarEntity__HasFlag((WarEntity_o *)list, 32, v13);
      if ( ((unsigned __int8)list & 1) == 0 )
      {
        klass_high = HIDWORD(v14[4].klass);
        if ( klass_high >= 1 )
        {
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)CondType__IsQuestClear_38735352(
                                                                     klass_high,
                                                                     -1,
                                                                     0,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v11 )
              break;
            method = (const MethodInfo *)LODWORD(v14->fields.items);
            items = v11->fields._items;
            v17 = Method_System_Collections_Generic_List_int__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v11,
                (int32_t)method,
                *(const MethodInfo_36101A8 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v11->fields._size = size + 1;
              items->m_Items[size + 1] = (int)method;
            }
          }
        }
      }
      if ( Count == ++v12 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C13F80(list, method);
  }
LABEL_19:
  if ( !v11 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarMaster__getEventID(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4BB57C2 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_WarMaster___, method);
    sub_1C13D24(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BB57C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1C13F80(Instance, v6);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             warId,
             (const MethodInfo_3238624 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
  System_Collections_Generic_List_object__o *v16; // x19
  __int64 v17; // x1
  void *list; // x0
  int32_t v19; // w22
  Il2CppObject *v20; // x23
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x20
  Il2CppObject *v32; // x21
  struct WarMaster___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4BB57C3 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__, ids);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__, v5);
    sub_1C13D24(&System_Comparison_WarEntity__TypeInfo, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarEntity__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarEntity__Sort__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarEntity__ToArray__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarEntity___ctor__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1C13D24(&System_Collections_Generic_List_WarEntity__TypeInfo, v13);
    sub_1C13D24(&Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__, v14);
    sub_1C13D24(&WarMaster___c_TypeInfo, v15);
    byte_4BB57C3 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  v19 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    if ( v19 >= (int)list )
      break;
    if ( !ids )
      goto LABEL_26;
    if ( !ids->fields._size )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v19,
             (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    if ( !list )
      goto LABEL_26;
    v20 = (Il2CppObject *)list;
    list = (void *)System_Collections_Generic_List_int___Remove(
                     ids,
                     *((_DWORD *)list + 4),
                     (const MethodInfo_36116A4 *)Method_System_Collections_Generic_List_int__Remove__);
    if ( ((unsigned __int8)list & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_26;
      items = v16->fields._items;
      v28 = Method_System_Collections_Generic_List_WarEntity__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_26;
      size = v16->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          v20,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v20;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v20, v21, v22, v23, v24, v25, v26);
      }
    }
    list = this->fields.list;
    ++v19;
    if ( !list )
      goto LABEL_26;
  }
  list = WarMaster___c_TypeInfo;
  if ( !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo);
    list = WarMaster___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = WarMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)list + 23);
    v31 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_WarEntity__TypeInfo);
    System_Comparison_object____ctor(v31, v32, Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__, 0LL);
    static_fields = WarMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_WarEntity__o *)v31;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v31, v34, v35, v36, v37, v38, v39);
  }
  if ( !v16 )
LABEL_26:
    sub_1C13F80(list, v17);
  System_Collections_Generic_List_object___Sort_56814736(
    v16,
    v31,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  return (WarEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v16,
                              (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarEntity__ToArray__);
}


void __fastcall WarMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB57C7 & 1) == 0 )
  {
    sub_1C13D24(&WarMaster___c_TypeInfo, v1);
    byte_4BB57C7 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(WarMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarMaster___c_TypeInfo->static_fields->__9 = (struct WarMaster___c_o *)v2;
  sub_1C13CC8((PartyOrganizationUtility_o *)WarMaster___c_TypeInfo->static_fields, (int64_t)v2, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarMaster___c___ctor(WarMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarEntity_o *__fastcall WarMaster___c___GetEntityList_b__1_0(
        WarMaster___c_o *this,
        WarEntity_o *data,
        const MethodInfo *method)
{
  return data;
}


int32_t __fastcall WarMaster___c___getPrioredWarEntsWithIds_b__5_0(
        WarMaster___c_o *this,
        WarEntity_o *a,
        WarEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || (this = (WarMaster___c_o *)WarEntity__GetPriority(b, (const MethodInfo *)a), !a) )
    sub_1C13F80(this, a);
  return (_DWORD)this - WarEntity__GetPriority(a, (const MethodInfo *)a);
}