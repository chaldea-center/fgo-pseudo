void __fastcall EventMissionActionMaster___ctor(EventMissionActionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66BBC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__, method);
    byte_4B66BBC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    141,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__);
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

  if ( (byte_4B66BBA & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_4B66BBA = 1;
  }
  PK = (Il2CppObject *)EventMissionActionEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionActionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__);
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

  if ( (byte_4B66BBB & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__,
      entity);
    byte_4B66BBB = 1;
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
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__);
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
  __int64 v10; // x1
  EventMissionActionEntity_o *result; // x0
  int32_t v12; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_4B66BBD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BE4ACC(&EventMissionActionEntity_TypeInfo, v10);
    byte_4B66BBD = 1;
  }
  result = (EventMissionActionEntity_o *)this->fields.list;
  if ( !result )
LABEL_14:
    sub_1BE4D28(result, *(_QWORD *)&missionID);
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)result,
                  (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (EventMissionActionEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_14;
    result = (EventMissionActionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                             (System_Collections_ObjectModel_Collection_T__o *)result,
                                             v12,
                                             (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    ++v12;
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x19
  int64_t v17; // x1
  void *list; // x0
  int32_t v19; // w23
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x20
  Il2CppObject *v32; // x21
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B66BBF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&System_Comparison_EventMissionActionEntity__TypeInfo, v8);
    sub_1BE4ACC(&EventMissionActionEntity_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v13);
    sub_1BE4ACC(&Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__, v14);
    sub_1BE4ACC(&EventMissionActionMaster___c_TypeInfo, v15);
    byte_4B66BBF = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  v19 = 0;
  while ( v19 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_27;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v19,
             (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_27;
    v17 = (int64_t)list;
    methodPtr_low = LOBYTE(EventMissionActionEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(EventMissionActionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventMissionActionEntity_TypeInfo )
    {
      goto LABEL_27;
    }
    if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType )
    {
      if ( !v16 )
        goto LABEL_27;
      items = v16->fields._items;
      v28 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_27;
      size = v16->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          (Il2CppObject *)list,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v17;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v30 + 4), v17, v20, v21, v22, v23, v24, v25);
      }
    }
    list = this->fields.list;
    ++v19;
    if ( !list )
      goto LABEL_27;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionActionMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)list + 23);
    v31 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_object____ctor(
      v31,
      v32,
      Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__,
      0LL);
    static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionActionEntity__o *)v31;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v31, v34, v35, v36, v37, v38, v39);
  }
  if ( !v16 )
LABEL_27:
    sub_1BE4D28(list, v17);
  System_Collections_Generic_List_object___Sort_56548584(
    v16,
    v31,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v16;
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x23
  int64_t v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v17; // w24
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4B66BBE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BE4ACC(&EventMissionActionEntity_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v13);
    byte_4B66BBE = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_1BE4D28(list, v15);
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v17,
                                                               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_19;
    v15 = (int64_t)list;
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
      if ( !v14 )
        goto LABEL_19;
      items = v14->fields._items;
      v26 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v14->fields._version;
      if ( !items )
        goto LABEL_19;
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)list,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v15;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 4), v15, v18, v19, v20, v21, v22, v23);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v17;
    if ( !list )
      goto LABEL_19;
  }
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getSafeActionListFromIDnType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
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
  int64_t v17; // x1
  void *list; // x0
  int32_t v19; // w23
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x20
  Il2CppObject *v32; // x21
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B66BC0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&System_Comparison_EventMissionActionEntity__TypeInfo, v8);
    sub_1BE4ACC(&EventMissionActionEntity_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v13);
    sub_1BE4ACC(&Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__, v14);
    sub_1BE4ACC(&EventMissionActionMaster___c_TypeInfo, v15);
    byte_4B66BC0 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  v19 = 0;
  while ( v19 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v19,
             (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_28;
    v17 = (int64_t)list;
    methodPtr_low = LOBYTE(EventMissionActionEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(EventMissionActionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventMissionActionEntity_TypeInfo )
    {
      goto LABEL_28;
    }
    if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType && *((_DWORD *)list + 7) == 7 )
    {
      if ( !v16 )
        goto LABEL_28;
      items = v16->fields._items;
      v28 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_28;
      size = v16->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          (Il2CppObject *)list,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v17;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v30 + 4), v17, v20, v21, v22, v23, v24, v25);
      }
    }
    list = this->fields.list;
    ++v19;
    if ( !list )
      goto LABEL_28;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionActionMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)list + 23);
    v31 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_object____ctor(
      v31,
      v32,
      Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__,
      0LL);
    static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventMissionActionEntity__o *)v31;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)v31, v34, v35, v36, v37, v38, v39);
  }
  if ( !v16 )
LABEL_28:
    sub_1BE4D28(list, v17);
  System_Collections_Generic_List_object___Sort_56548584(
    v16,
    v31,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v16;
}


void __fastcall EventMissionActionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B66BC1 & 1) == 0 )
  {
    sub_1BE4ACC(&EventMissionActionMaster___c_TypeInfo, v1);
    byte_4B66BC1 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventMissionActionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMissionActionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionActionMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)EventMissionActionMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionMaster___c___getSafeActionListFromIDnType_b__6_0(
        EventMissionActionMaster___c_o *this,
        EventMissionActionEntity_o *a,
        EventMissionActionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BE4D28(this, a);
  return a->fields.id - b->fields.id;
}