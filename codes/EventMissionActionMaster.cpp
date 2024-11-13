void __fastcall EventMissionActionMaster___ctor(EventMissionActionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B161F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__, method, v2);
    byte_4B161F3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    137,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__);
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

  if ( (byte_4B161F1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__,
      *(_QWORD *)&missionId,
      *(_QWORD *)&missionProgressType);
    byte_4B161F1 = 1;
  }
  PK = (Il2CppObject *)EventMissionActionEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionActionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31B3198 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__);
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

  if ( (byte_4B161F2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&missionId);
    byte_4B161F2 = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionEntity_o *__fastcall EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  EventMissionActionEntity_o *result; // x0
  int32_t v14; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_4B161F4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&missionID,
      *(_QWORD *)&progressType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&EventMissionActionEntity_TypeInfo, v11, v12);
    byte_4B161F4 = 1;
  }
  result = (EventMissionActionEntity_o *)this->fields.list;
  if ( !result )
LABEL_14:
    sub_1BCAA3C(result, *(_QWORD *)&missionID);
  v14 = 0;
  while ( v14 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)result,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (EventMissionActionEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_14;
    result = (EventMissionActionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                             (System_Collections_ObjectModel_Collection_T__o *)result,
                                             v14,
                                             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    ++v14;
    if ( !result )
      goto LABEL_14;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getEntityListFromIDnType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x19
  int64_t v26; // x1
  void *list; // x0
  int32_t v28; // w23
  __int64 v29; // x2
  __int64 v30; // x3
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Comparison_T__o *v42; // x20
  Il2CppObject *v43; // x21
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7

  if ( (byte_4B161F6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&missionID,
      *(_QWORD *)&progressType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_EventMissionActionEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&EventMissionActionEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__, v21, v22);
    sub_1BCA7E0(&EventMissionActionMaster___c_TypeInfo, v23, v24);
    byte_4B161F6 = 1;
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionActionEntity__TypeInfo,
                                                       *(_QWORD *)&missionID,
                                                       *(_QWORD *)&progressType,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  v28 = 0;
  while ( v28 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_27;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v28,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_27;
    v26 = (int64_t)list;
    methodPtr_low = LOBYTE(EventMissionActionEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(EventMissionActionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventMissionActionEntity_TypeInfo )
    {
      goto LABEL_27;
    }
    if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType )
    {
      if ( !v25 )
        goto LABEL_27;
      items = v25->fields._items;
      v39 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v25->fields._version;
      if ( !items )
        goto LABEL_27;
      size = v25->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)list,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v25->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v26;
        sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), v26, v31, v32, v33, v34, v35, v36);
      }
    }
    list = this->fields.list;
    ++v28;
    if ( !list )
      goto LABEL_27;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo, v26);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  v42 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v42 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v26);
      list = EventMissionActionMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)**((_QWORD **)list + 23);
    v42 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMissionActionEntity__TypeInfo, v26, v29, v30);
    System_Comparison_object____ctor(
      v42,
      v43,
      Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__,
      0LL);
    static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionActionEntity__o *)v42;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v42, v45, v46, v47, v48, v49, v50);
  }
  if ( !v25 )
LABEL_27:
    sub_1BCAA3C(list, v26);
  System_Collections_Generic_List_object___Sort_56244000(
    v25,
    v42,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v25;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x23
  int64_t v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v22; // w24
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B161F5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&missionID,
      *(_QWORD *)&progressType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&EventMissionActionEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v17, v18);
    byte_4B161F5 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionActionEntity__TypeInfo,
                                                       *(_QWORD *)&missionID,
                                                       *(_QWORD *)&progressType,
                                                       *(_QWORD *)&actionType);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_1BCAA3C(list, v20);
  v22 = 0;
  while ( v22 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v22,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_19;
    v20 = (int64_t)list;
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
      if ( !v19 )
        goto LABEL_19;
      items = v19->fields._items;
      v31 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v19->fields._version;
      if ( !items )
        goto LABEL_19;
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          (Il2CppObject *)list,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v19->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v20;
        sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v20, v23, v24, v25, v26, v27, v28);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v22;
    if ( !list )
      goto LABEL_19;
  }
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v19;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getSafeActionListFromIDnType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x19
  int64_t v26; // x1
  void *list; // x0
  int32_t v28; // w23
  __int64 v29; // x2
  __int64 v30; // x3
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Comparison_T__o *v42; // x20
  Il2CppObject *v43; // x21
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7

  if ( (byte_4B161F7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&missionID,
      *(_QWORD *)&progressType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_EventMissionActionEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&EventMissionActionEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__, v21, v22);
    sub_1BCA7E0(&EventMissionActionMaster___c_TypeInfo, v23, v24);
    byte_4B161F7 = 1;
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionActionEntity__TypeInfo,
                                                       *(_QWORD *)&missionID,
                                                       *(_QWORD *)&progressType,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  v28 = 0;
  while ( v28 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v28,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_28;
    v26 = (int64_t)list;
    methodPtr_low = LOBYTE(EventMissionActionEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(EventMissionActionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventMissionActionEntity_TypeInfo )
    {
      goto LABEL_28;
    }
    if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType && *((_DWORD *)list + 7) == 7 )
    {
      if ( !v25 )
        goto LABEL_28;
      items = v25->fields._items;
      v39 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v25->fields._version;
      if ( !items )
        goto LABEL_28;
      size = v25->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)list,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v25->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v26;
        sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), v26, v31, v32, v33, v34, v35, v36);
      }
    }
    list = this->fields.list;
    ++v28;
    if ( !list )
      goto LABEL_28;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo, v26);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  v42 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v42 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v26);
      list = EventMissionActionMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)**((_QWORD **)list + 23);
    v42 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMissionActionEntity__TypeInfo, v26, v29, v30);
    System_Comparison_object____ctor(
      v42,
      v43,
      Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__,
      0LL);
    static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventMissionActionEntity__o *)v42;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)v42, v45, v46, v47, v48, v49, v50);
  }
  if ( !v25 )
LABEL_28:
    sub_1BCAA3C(list, v26);
  System_Collections_Generic_List_object___Sort_56244000(
    v25,
    v42,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v25;
}


void __fastcall EventMissionActionMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B161F8 & 1) == 0 )
  {
    sub_1BCA7E0(&EventMissionActionMaster___c_TypeInfo, v1, v2);
    byte_4B161F8 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventMissionActionMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventMissionActionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionActionMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventMissionActionMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionMaster___c___getSafeActionListFromIDnType_b__6_0(
        EventMissionActionMaster___c_o *this,
        EventMissionActionEntity_o *a,
        EventMissionActionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.id - b->fields.id;
}