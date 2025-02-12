void __fastcall EventMissionActionMaster___ctor(EventMissionActionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7AA5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__, method);
    byte_4BC7AA5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    141,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__);
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

  if ( (byte_4BC7AA3 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_4BC7AA3 = 1;
  }
  PK = (Il2CppObject *)EventMissionActionEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionActionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_324D130 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__);
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

  if ( (byte_4BC7AA4 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__,
      entity);
    byte_4BC7AA4 = 1;
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
           (const MethodInfo_324D17C *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__);
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
  EventMissionActionEntity_o *result; // x0
  int32_t v11; // w23

  if ( (byte_4BC7AA6 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__,
      *(_QWORD *)&missionID);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__, v9);
    byte_4BC7AA6 = 1;
  }
  result = (EventMissionActionEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_1C1AE30(result, *(_QWORD *)&missionID);
  v11 = 0;
  while ( v11 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)result,
                  (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__) )
  {
    result = (EventMissionActionEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_12;
    result = (EventMissionActionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                             (System_Collections_ObjectModel_Collection_T__o *)result,
                                             v11,
                                             (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    if ( !result )
      goto LABEL_12;
    if ( result->fields.missionId == missionID
      && result->fields.missionProgressType == progressType
      && result->fields.missionActionType == actionType )
    {
      return result;
    }
    result = (EventMissionActionEntity_o *)this->fields.list;
    ++v11;
    if ( !result )
      goto LABEL_12;
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
  System_Collections_Generic_List_object__o *v15; // x19
  int64_t v16; // x1
  void *list; // x0
  int32_t v18; // w23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Comparison_T__o *v29; // x20
  Il2CppObject *v30; // x21
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4BC7AA8 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__,
      *(_QWORD *)&missionID);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__, v7);
    sub_1C1ABD4(&System_Comparison_EventMissionActionEntity__TypeInfo, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v12);
    sub_1C1ABD4(&Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__, v13);
    sub_1C1ABD4(&EventMissionActionMaster___c_TypeInfo, v14);
    byte_4BC7AA8 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  v18 = 0;
  while ( v18 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_25;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v18,
             (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    if ( !list )
      goto LABEL_25;
    v16 = (int64_t)list;
    if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType )
    {
      if ( !v15 )
        goto LABEL_25;
      items = v15->fields._items;
      v26 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v15->fields._version;
      if ( !items )
        goto LABEL_25;
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)list,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v16;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v28 + 4), v16, v19, v20, v21, v22, v23, v24);
      }
    }
    list = this->fields.list;
    ++v18;
    if ( !list )
      goto LABEL_25;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  v29 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v29 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionActionMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)**((_QWORD **)list + 23);
    v29 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_object____ctor(
      v29,
      v30,
      Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__,
      0LL);
    static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionActionEntity__o *)v29;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v29, v32, v33, v34, v35, v36, v37);
  }
  if ( !v15 )
LABEL_25:
    sub_1C1AE30(list, v16);
  System_Collections_Generic_List_object___Sort_56877908(
    v15,
    v29,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v15;
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
  System_Collections_Generic_List_object__o *v13; // x23
  int64_t v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v16; // w24
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4BC7AA7 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__,
      *(_QWORD *)&missionID);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v12);
    byte_4BC7AA7 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1C1AE30(list, v14);
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v16,
                                                               (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    if ( !list )
      goto LABEL_17;
    v14 = (int64_t)list;
    if ( LODWORD(list->fields.items) == missionID
      && HIDWORD(list->fields.items) == progressType
      && HIDWORD(list[1].klass) == actionType )
    {
      if ( !v13 )
        goto LABEL_17;
      items = v13->fields._items;
      v24 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)list,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v14;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v26 + 4), v14, v17, v18, v19, v20, v21, v22);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v16;
    if ( !list )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v13;
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
  System_Collections_Generic_List_object__o *v15; // x19
  int64_t v16; // x1
  void *list; // x0
  int32_t v18; // w23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Comparison_T__o *v29; // x20
  Il2CppObject *v30; // x21
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4BC7AA9 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__,
      *(_QWORD *)&missionID);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__, v7);
    sub_1C1ABD4(&System_Comparison_EventMissionActionEntity__TypeInfo, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v12);
    sub_1C1ABD4(&Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__, v13);
    sub_1C1ABD4(&EventMissionActionMaster___c_TypeInfo, v14);
    byte_4BC7AA9 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  v18 = 0;
  while ( v18 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v18,
             (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    if ( !list )
      goto LABEL_26;
    v16 = (int64_t)list;
    if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType && *((_DWORD *)list + 7) == 7 )
    {
      if ( !v15 )
        goto LABEL_26;
      items = v15->fields._items;
      v26 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v15->fields._version;
      if ( !items )
        goto LABEL_26;
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)list,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v16;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v28 + 4), v16, v19, v20, v21, v22, v23, v24);
      }
    }
    list = this->fields.list;
    ++v18;
    if ( !list )
      goto LABEL_26;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  v29 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v29 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionActionMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)**((_QWORD **)list + 23);
    v29 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_object____ctor(
      v29,
      v30,
      Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__,
      0LL);
    static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventMissionActionEntity__o *)v29;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)v29, v32, v33, v34, v35, v36, v37);
  }
  if ( !v15 )
LABEL_26:
    sub_1C1AE30(list, v16);
  System_Collections_Generic_List_object___Sort_56877908(
    v15,
    v29,
    (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v15;
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

  if ( (byte_4BC7AAA & 1) == 0 )
  {
    sub_1C1ABD4(&EventMissionActionMaster___c_TypeInfo, v1);
    byte_4BC7AAA = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(EventMissionActionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMissionActionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionActionMaster___c_o *)v2;
  sub_1C1AB78(
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
    sub_1C1AE30(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionMaster___c___getSafeActionListFromIDnType_b__6_0(
        EventMissionActionMaster___c_o *this,
        EventMissionActionEntity_o *a,
        EventMissionActionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C1AE30(this, a);
  return a->fields.id - b->fields.id;
}