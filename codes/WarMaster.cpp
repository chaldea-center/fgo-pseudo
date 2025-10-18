void WarMaster___ctor(WarMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C44218 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int___ctor__);
    byte_4C44218 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    4,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_WarMaster__WarEntity__int___ctor__);
}


System_Collections_Generic_List_WarEntity__o *WarMaster__GetEntityList(WarMaster_o *this, const MethodInfo *method)
{
  WarMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v6; // x21
  struct WarMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C44219 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_WarEntity__WarEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_WarEntity___);
    sub_1C37058(&System_Func_WarEntity__WarEntity__TypeInfo);
    sub_1C37058(&Method_WarMaster___c__GetEntityList_b__1_0__);
    sub_1C37058(&WarMaster___c_TypeInfo);
    byte_4C44219 = 1;
  }
  v3 = WarMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo);
    v3 = WarMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v3->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_WarEntity__WarEntity__TypeInfo);
    System_Func_object__object____ctor(_9__1_0, v6, Method_WarMaster___c__GetEntityList_b__1_0__, 0);
    static_fields = WarMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarEntity__WarEntity__o *)_9__1_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v8, v9);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_WarEntity__WarEntity___);
  return (System_Collections_Generic_List_WarEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                           v10,
                                                           (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_WarEntity___);
}


// local variable allocation has failed, the output may be wrong!
int64_t WarMaster__GetEventStartAt(WarMaster_o *this, int32_t warId, const MethodInfo *method)
{
  int32_t EventID; // w19
  Il2CppObject *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C44221 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4C44221 = 1;
  }
  entity = 0;
  EventID = WarMaster__getEventID(warId, *(const MethodInfo **)&warId);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    EventID,
                                    (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity[5].monitor;
LABEL_11:
    sub_1C372B4(Master_object);
  }
  return 0;
}


bool WarMaster__IsClearAllMainScenario(WarMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  bool v7; // w25
  const MethodInfo *v8; // x2
  System_Collections_ObjectModel_Collection_T__o *v9; // x22
  int32_t klass_high; // w22

  if ( (byte_4C44220 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    sub_1C37058(&CondType_TypeInfo);
    byte_4C44220 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
  if ( Count >= 1 )
  {
    v5 = Count;
    v6 = 0;
    v7 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
      if ( !list )
        break;
      v9 = list;
      if ( !WarEntity__HasFlag((WarEntity_o *)list, 128, v8) )
        goto LABEL_20;
      klass_high = HIDWORD(v9[4].klass);
      if ( klass_high < 1 )
        goto LABEL_20;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsQuestClear_40324848(klass_high, -1, 0, 0) )
      {
LABEL_20:
        v7 = ++v6 < v5;
        if ( v5 != v6 )
          continue;
      }
      return !v7;
    }
LABEL_17:
    sub_1C372B4(list);
  }
  v7 = 0;
  return !v7;
}


bool WarMaster__IsLastQuest(int32_t warId, int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x2
  WarEntity_o *v7; // x0
  WarEntity_o *v8; // x20
  bool result; // w0

  if ( (byte_4C4421F & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_6401/*"FES_WAR_ID"*/);
    byte_4C4421F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  v7 = WarMaster__getByLastQuestId((WarMaster_o *)Instance, questId, v6);
  result = 0;
  if ( v7 )
  {
    v8 = v7;
    if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6401/*"FES_WAR_ID"*/, 0) == warId && v8->fields.id == warId )
      return 1;
  }
  return result;
}


WarEntity_o *WarMaster__getByEventId(WarMaster_o *this, int32_t event_id, const MethodInfo *method)
{
  WarEntity_o *result; // x0
  int32_t v6; // w21

  if ( (byte_4C4421B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    byte_4C4421B = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_10:
    sub_1C372B4(result);
  v6 = 0;
  while ( v6 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)result,
                                v6,
                                (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
      if ( result )
      {
        if ( result->fields.eventId == event_id )
          return result;
        result = (WarEntity_o *)this->fields.list;
        ++v6;
        if ( result )
          continue;
      }
    }
    goto LABEL_10;
  }
  return 0;
}


WarEntity_o *WarMaster__getByLastQuestId(WarMaster_o *this, int32_t last_quest_id, const MethodInfo *method)
{
  WarEntity_o *result; // x0
  int32_t v6; // w21

  if ( (byte_4C4421A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    byte_4C4421A = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_10:
    sub_1C372B4(result);
  v6 = 0;
  while ( v6 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)result,
                                v6,
                                (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
      if ( result )
      {
        if ( result->fields.lastQuestId == last_quest_id )
          return result;
        result = (WarEntity_o *)this->fields.list;
        ++v6;
        if ( result )
          continue;
      }
    }
    goto LABEL_10;
  }
  return 0;
}


System_Int32_array *WarMaster__getClearWarIdList(WarMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v5; // x21
  int32_t v6; // w22
  const MethodInfo *v7; // x2
  System_Collections_ObjectModel_Collection_T__o *v8; // x23
  int32_t klass_high; // w24
  int32_t items; // w1
  struct System_Int32_array *v11; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4C4421E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C4421E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
      if ( !list )
        break;
      v8 = list;
      list = (System_Collections_ObjectModel_Collection_T__o *)WarEntity__HasFlag((WarEntity_o *)list, 32, v7);
      if ( ((unsigned __int8)list & 1) == 0 )
      {
        klass_high = HIDWORD(v8[4].klass);
        if ( klass_high >= 1 )
        {
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)CondType__IsQuestClear_40324848(klass_high, -1, 0, 0);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              break;
            items = (int32_t)v8->fields.items;
            v11 = v5->fields._items;
            v12 = Method_System_Collections_Generic_List_int__Add__;
            ++v5->fields._version;
            if ( !v11 )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(v11->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v5,
                items,
                *(const MethodInfo_3786000 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
            }
            else
            {
              v5->fields._size = size + 1;
              v11->m_Items[size] = items;
            }
          }
        }
      }
      if ( Count == ++v6 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C372B4(list);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t WarMaster__getEventID(int32_t warId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C4421C & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    byte_4C4421C = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    warId,
                                    (const MethodInfo_33A10EC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int32_t)entity[6].klass;
LABEL_11:
    sub_1C372B4(Master_object);
  }
  return -1;
}


WarEntity_array *WarMaster__getPrioredWarEntsWithIds(
        WarMaster_o *this,
        System_Collections_Generic_List_int__o *ids,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  void *list; // x0
  int32_t v7; // w22
  Il2CppObject *v8; // x23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Comparison_T__o *v15; // x20
  Il2CppObject *v16; // x21
  struct WarMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C4421D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    sub_1C37058(&System_Comparison_WarEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_WarEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_WarEntity__TypeInfo);
    sub_1C37058(&Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__);
    sub_1C37058(&WarMaster___c_TypeInfo);
    byte_4C4421D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WarEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WarEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  v7 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    if ( v7 >= (int)list )
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
             v7,
             (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    if ( !list )
      goto LABEL_26;
    v8 = (Il2CppObject *)list;
    list = (void *)System_Collections_Generic_List_int___Remove(
                     ids,
                     *((_DWORD *)list + 4),
                     (const MethodInfo_37874FC *)Method_System_Collections_Generic_List_int__Remove__);
    if ( ((unsigned __int8)list & 1) != 0 )
    {
      if ( !v5 )
        goto LABEL_26;
      items = v5->fields._items;
      v12 = Method_System_Collections_Generic_List_WarEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_26;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v8,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v8;
        sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
      }
    }
    list = this->fields.list;
    ++v7;
    if ( !list )
      goto LABEL_26;
  }
  list = WarMaster___c_TypeInfo;
  if ( !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo);
    list = WarMaster___c_TypeInfo;
  }
  v15 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = WarMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)list + 23);
    v15 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_WarEntity__TypeInfo);
    System_Comparison_object____ctor(v15, v16, Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__, 0);
    static_fields = WarMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_WarEntity__o *)v15;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)v15, v18, v19);
  }
  if ( !v5 )
LABEL_26:
    sub_1C372B4(list);
  System_Collections_Generic_List_object___Sort_58346216(
    v5,
    v15,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  return (WarEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v5,
                              (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_WarEntity__ToArray__);
}


void WarMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C44222 & 1) == 0 )
  {
    sub_1C37058(&WarMaster___c_TypeInfo);
    byte_4C44222 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(WarMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarMaster___c_TypeInfo->static_fields->__9 = (struct WarMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)WarMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void WarMaster___c___ctor(WarMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WarEntity_o *WarMaster___c___GetEntityList_b__1_0(WarMaster___c_o *this, WarEntity_o *data, const MethodInfo *method)
{
  return data;
}


int32_t WarMaster___c___getPrioredWarEntsWithIds_b__5_0(
        WarMaster___c_o *this,
        WarEntity_o *a,
        WarEntity_o *b,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( !b || (this = (WarMaster___c_o *)WarEntity__GetPriority(b, (const MethodInfo *)a), !a) )
    sub_1C372B4(this);
  return (_DWORD)this - WarEntity__GetPriority(a, v5);
}