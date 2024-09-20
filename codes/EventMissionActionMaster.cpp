void __fastcall EventMissionActionMaster___ctor(EventMissionActionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B164 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__);
    byte_4A5B164 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    137,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionEntity_o *__fastcall EventMissionActionMaster__GetEntity(
        EventMissionActionMaster_o *this,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B162 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__);
    byte_4A5B162 = 1;
  }
  PK = (Il2CppObject *)EventMissionActionEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionActionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_311DC8C *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionActionMaster__TryGetEntity(
        EventMissionActionMaster_o *this,
        EventMissionActionEntity_o **entity,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B163 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__);
    byte_4A5B163 = 1;
  }
  PK = (Il2CppObject *)EventMissionActionEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&missionProgressType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionEntity_o *__fastcall EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  EventMissionActionEntity_o *result; // x0
  int32_t v10; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B165 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventMissionActionEntity_TypeInfo);
    byte_4A5B165 = 1;
  }
  result = (EventMissionActionEntity_o *)this->fields.list;
  if ( !result )
LABEL_14:
    sub_1B8880C(result, *(_QWORD *)&missionID);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)result,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (EventMissionActionEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_14;
    result = (EventMissionActionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                             (System_Collections_ObjectModel_Collection_T__o *)result,
                                             v10,
                                             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !result )
      goto LABEL_14;
    methodPtr_low = LOBYTE(EventMissionActionEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventMissionActionEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionActionEntity_TypeInfo )
    {
      goto LABEL_14;
    }
    if ( result->fields.missionId == missionID
      && result->fields.missionProgressType == progressType
      && result->fields.missionActionType == actionType )
    {
      return result;
    }
    result = (EventMissionActionEntity_o *)this->fields.list;
    ++v10;
    if ( !result )
      goto LABEL_14;
  }
  return 0LL;
}


System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getEntityListFromIDnType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  Il2CppClass *v8; // x1
  void *list; // x0
  int32_t v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x20
  Il2CppObject *v19; // x21
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5B167 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventMissionActionEntity__TypeInfo);
    sub_1B885B0(&EventMissionActionEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
    sub_1B885B0(&Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__);
    sub_1B885B0(&EventMissionActionMaster___c_TypeInfo);
    byte_4A5B167 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_27;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v10,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_27;
    v8 = (Il2CppClass *)list;
    methodPtr_low = LOBYTE(EventMissionActionEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(EventMissionActionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventMissionActionEntity_TypeInfo )
    {
      goto LABEL_27;
    }
    if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType )
    {
      if ( !v7 )
        goto LABEL_27;
      items = v7->fields._items;
      v15 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_27;
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)list,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v17[4] = v8;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v8, v11, v12);
      }
    }
    list = this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_27;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionActionMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)list + 23);
    v18 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_object____ctor(
      v18,
      v19,
      Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__,
      0LL);
    static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionActionEntity__o *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)v18, v21, v22);
  }
  if ( !v7 )
LABEL_27:
    sub_1B8880C(list, v8);
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    v18,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v7;
}


System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w24
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A5B166 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventMissionActionEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
    byte_4A5B166 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_1B8880C(list, v10);
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_19;
    v10 = list;
    methodPtr_low = LOBYTE(EventMissionActionEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventMissionActionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionActionEntity_TypeInfo )
    {
      goto LABEL_19;
    }
    if ( LODWORD(list->fields.items) == missionID
      && HIDWORD(list->fields.items) == progressType
      && HIDWORD(list[1].klass) == actionType )
    {
      if ( !v9 )
        goto LABEL_19;
      items = v9->fields._items;
      v17 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_19;
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)list,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v10;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v10, v13, v14);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_19;
  }
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v9;
}


System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getSafeActionListFromIDnType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  Il2CppClass *v8; // x1
  void *list; // x0
  int32_t v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x20
  Il2CppObject *v19; // x21
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5B168 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventMissionActionEntity__TypeInfo);
    sub_1B885B0(&EventMissionActionEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
    sub_1B885B0(&Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__);
    sub_1B885B0(&EventMissionActionMaster___c_TypeInfo);
    byte_4A5B168 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v10,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_28;
    v8 = (Il2CppClass *)list;
    methodPtr_low = LOBYTE(EventMissionActionEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(EventMissionActionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventMissionActionEntity_TypeInfo )
    {
      goto LABEL_28;
    }
    if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType && *((_DWORD *)list + 7) == 7 )
    {
      if ( !v7 )
        goto LABEL_28;
      items = v7->fields._items;
      v15 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_28;
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)list,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v17[4] = v8;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v8, v11, v12);
      }
    }
    list = this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_28;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionActionMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)list + 23);
    v18 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_object____ctor(
      v18,
      v19,
      Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__,
      0LL);
    static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventMissionActionEntity__o *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)v18, v21, v22);
  }
  if ( !v7 )
LABEL_28:
    sub_1B8880C(list, v8);
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    v18,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v7;
}


void __fastcall EventMissionActionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B169 & 1) == 0 )
  {
    sub_1B885B0(&EventMissionActionMaster___c_TypeInfo);
    byte_4A5B169 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventMissionActionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventMissionActionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionActionMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventMissionActionMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall EventMissionActionMaster___c___ctor(EventMissionActionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventMissionActionMaster___c___getEntityListFromIDnType_b__5_0(
        EventMissionActionMaster___c_o *this,
        EventMissionActionEntity_o *a,
        EventMissionActionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionMaster___c___getSafeActionListFromIDnType_b__6_0(
        EventMissionActionMaster___c_o *this,
        EventMissionActionEntity_o *a,
        EventMissionActionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.id - b->fields.id;
}