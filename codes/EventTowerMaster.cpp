void EventTowerMaster___ctor(EventTowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7589 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string___ctor__);
    byte_4CC7589 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    240,
    (const MethodInfo_340B614 *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string___ctor__);
}


EventTowerEntity_array *EventTowerMaster__GetDatas(EventTowerMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x20
  Il2CppObject *v22; // x21
  struct EventTowerMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4CC758A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventTowerEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventTowerEntity__get_Item__);
    sub_1C713B0(&System_Comparison_EventTowerEntity__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventTowerEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventTowerEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventTowerEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventTowerEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventTowerEntity__TypeInfo);
    sub_1C713B0(&Method_EventTowerMaster___c__GetDatas_b__3_0__);
    sub_1C713B0(&EventTowerMaster___c_TypeInfo);
    byte_4CC758A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventTowerEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventTowerEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventTowerEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventTowerEntity__get_Item__);
      if ( list )
      {
        v6 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 4) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_EventTowerEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = v6;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C71608(list, v6);
  }
LABEL_15:
  list = EventTowerMaster___c_TypeInfo;
  if ( !EventTowerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTowerMaster___c_TypeInfo);
    list = EventTowerMaster___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventTowerMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)list + 23);
    v21 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventTowerEntity__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_EventTowerMaster___c__GetDatas_b__3_0__, 0);
    static_fields = EventTowerMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventTowerEntity__o *)v21;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_58794460(
    v5,
    v21,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_EventTowerEntity__Sort__);
  return (EventTowerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v5,
                                     (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventTowerEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerEntity_o *EventTowerMaster__GetEntity(
        EventTowerMaster_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC7587 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__GetEntity__);
    byte_4CC7587 = 1;
  }
  PK = (Il2CppObject *)EventTowerEntity__CreatePK(eventId, towerId, *(const MethodInfo **)&towerId);
  return (EventTowerEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_340D938 *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventTowerMaster__TryGetEntity(
        EventTowerMaster_o *this,
        EventTowerEntity_o **entity,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC7588 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__TryGetEntity__);
    byte_4CC7588 = 1;
  }
  PK = (Il2CppObject *)EventTowerEntity__CreatePK(eventId, towerId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__TryGetEntity__);
}


void EventTowerMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC758B & 1) == 0 )
  {
    sub_1C713B0(&EventTowerMaster___c_TypeInfo);
    byte_4CC758B = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(EventTowerMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTowerMaster___c_TypeInfo->static_fields->__9 = (struct EventTowerMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)EventTowerMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventTowerMaster___c___ctor(EventTowerMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventTowerMaster___c___GetDatas_b__3_0(
        EventTowerMaster___c_o *this,
        EventTowerEntity_o *a,
        EventTowerEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C71608(this, a);
  return a->fields.towerId - b->fields.towerId;
}