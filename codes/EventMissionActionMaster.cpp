void __fastcall EventMissionActionMaster___ctor(EventMissionActionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC53C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__);
    byte_4BDC53C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    141,
    (const MethodInfo_325E55C *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__);
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

  if ( (byte_4BDC53A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__);
    byte_4BDC53A = 1;
  }
  PK = (Il2CppObject *)EventMissionActionEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionActionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3260880 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__);
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

  if ( (byte_4BDC53B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__);
    byte_4BDC53B = 1;
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
           (const MethodInfo_32608CC *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__);
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

  if ( (byte_4BDC53D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    byte_4BDC53D = 1;
  }
  result = (EventMissionActionEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_1C22094(result, *(_QWORD *)&missionID);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)result,
                  (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__) )
  {
    result = (EventMissionActionEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_12;
    result = (EventMissionActionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                             (System_Collections_ObjectModel_Collection_T__o *)result,
                                             v10,
                                             (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    if ( !result )
      goto LABEL_12;
    if ( result->fields.missionId == missionID
      && result->fields.missionProgressType == progressType
      && result->fields.missionActionType == actionType )
    {
      return result;
    }
    result = (EventMissionActionEntity_o *)this->fields.list;
    ++v10;
    if ( !result )
      goto LABEL_12;
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
  int64_t v8; // x1
  void *list; // x0
  int32_t v10; // w23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x20
  Il2CppObject *v22; // x21
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4BDC53F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    sub_1C21E38(&System_Comparison_EventMissionActionEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
    sub_1C21E38(&Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__);
    sub_1C21E38(&EventMissionActionMaster___c_TypeInfo);
    byte_4BDC53F = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_25;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v10,
             (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    if ( !list )
      goto LABEL_25;
    v8 = (int64_t)list;
    if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType )
    {
      if ( !v7 )
        goto LABEL_25;
      items = v7->fields._items;
      v18 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_25;
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)list,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v8;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), v8, v11, v12, v13, v14, v15, v16);
      }
    }
    list = this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_25;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionActionMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)list + 23);
    v21 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_object____ctor(
      v21,
      v22,
      Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__,
      0LL);
    static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionActionEntity__o *)v21;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !v7 )
LABEL_25:
    sub_1C22094(list, v8);
  System_Collections_Generic_List_object___Sort_56953720(
    v7,
    v21,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
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
  int64_t v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w24
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4BDC53E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
    byte_4BDC53E = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1C22094(list, v10);
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    if ( !list )
      goto LABEL_17;
    v10 = (int64_t)list;
    if ( LODWORD(list->fields.items) == missionID
      && HIDWORD(list->fields.items) == progressType
      && HIDWORD(list[1].klass) == actionType )
    {
      if ( !v9 )
        goto LABEL_17;
      items = v9->fields._items;
      v20 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)list,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v10;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 4), v10, v13, v14, v15, v16, v17, v18);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_17;
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
  int64_t v8; // x1
  void *list; // x0
  int32_t v10; // w23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x20
  Il2CppObject *v22; // x21
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4BDC540 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    sub_1C21E38(&System_Comparison_EventMissionActionEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
    sub_1C21E38(&Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__);
    sub_1C21E38(&EventMissionActionMaster___c_TypeInfo);
    byte_4BDC540 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v10,
             (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    if ( !list )
      goto LABEL_26;
    v8 = (int64_t)list;
    if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType && *((_DWORD *)list + 7) == 7 )
    {
      if ( !v7 )
        goto LABEL_26;
      items = v7->fields._items;
      v18 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_26;
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)list,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v8;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), v8, v11, v12, v13, v14, v15, v16);
      }
    }
    list = this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_26;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionActionMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)list + 23);
    v21 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_object____ctor(
      v21,
      v22,
      Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__,
      0LL);
    static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventMissionActionEntity__o *)v21;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !v7 )
LABEL_26:
    sub_1C22094(list, v8);
  System_Collections_Generic_List_object___Sort_56953720(
    v7,
    v21,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v7;
}


void __fastcall EventMissionActionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC541 & 1) == 0 )
  {
    sub_1C21E38(&EventMissionActionMaster___c_TypeInfo);
    byte_4BDC541 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(EventMissionActionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventMissionActionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionActionMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventMissionActionMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionMaster___c___getSafeActionListFromIDnType_b__6_0(
        EventMissionActionMaster___c_o *this,
        EventMissionActionEntity_o *a,
        EventMissionActionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C22094(this, a);
  return a->fields.id - b->fields.id;
}