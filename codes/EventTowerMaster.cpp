void __fastcall EventTowerMaster___ctor(EventTowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E0CE & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string___ctor__, method);
    byte_4A2E0CE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    234,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerEntity_array *__fastcall EventTowerMaster__GetDatas(
        EventTowerMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_List_object__o *v15; // x19
  Il2CppClass *v16; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v19; // w22
  int32_t v20; // w23
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct EventTowerMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_4A2E0CF & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B761C0(&System_Comparison_EventTowerEntity__TypeInfo, v6);
    sub_1B761C0(&EventTowerEntity_TypeInfo, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventTowerEntity__Add__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventTowerEntity__Sort__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventTowerEntity__ToArray__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventTowerEntity___ctor__, v11);
    sub_1B761C0(&System_Collections_Generic_List_EventTowerEntity__TypeInfo, v12);
    sub_1B761C0(&Method_EventTowerMaster___c__GetDatas_b__3_0__, v13);
    sub_1B761C0(&EventTowerMaster___c_TypeInfo, v14);
    byte_4A2E0CF = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_EventTowerEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_EventTowerEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v20,
               (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = (Il2CppClass *)list;
        methodPtr_low = LOBYTE(EventTowerEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventTowerEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventTowerEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v25 = Method_System_Collections_Generic_List_EventTowerEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)list,
              *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v27[4] = v16;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v16, v21, v22);
          }
        }
      }
      if ( v19 == ++v20 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B7641C(list, v16);
  }
LABEL_17:
  list = EventTowerMaster___c_TypeInfo;
  if ( !EventTowerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTowerMaster___c_TypeInfo);
    list = EventTowerMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventTowerMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)list + 23);
    v28 = (System_Comparison_T__o *)sub_1B7640C(System_Comparison_EventTowerEntity__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_EventTowerMaster___c__GetDatas_b__3_0__, 0LL);
    static_fields = EventTowerMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_EventTowerEntity__o *)v28;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v28, v31, v32);
  }
  if ( !v15 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55414936(
    v15,
    v28,
    (const MethodInfo_34D9098 *)Method_System_Collections_Generic_List_EventTowerEntity__Sort__);
  return (EventTowerEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v15,
                                     (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_EventTowerEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerEntity_o *__fastcall EventTowerMaster__GetEntity(
        EventTowerMaster_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A2E0CC & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_4A2E0CC = 1;
  }
  PK = (Il2CppObject *)EventTowerEntity__CreatePK(eventId, towerId, *(const MethodInfo **)&towerId);
  return (EventTowerEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_30FFAD8 *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTowerMaster__TryGetEntity(
        EventTowerMaster_o *this,
        EventTowerEntity_o **entity,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A2E0CD & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__TryGetEntity__, entity);
    byte_4A2E0CD = 1;
  }
  PK = (Il2CppObject *)EventTowerEntity__CreatePK(eventId, towerId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30FFB28 *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__TryGetEntity__);
}


void __fastcall EventTowerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A2E0D0 & 1) == 0 )
  {
    sub_1B761C0(&EventTowerMaster___c_TypeInfo, v1);
    byte_4A2E0D0 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(EventTowerMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTowerMaster___c_TypeInfo->static_fields->__9 = (struct EventTowerMaster___c_o *)v2;
  sub_1B76164((ServantStatusBattleListViewItem_o *)EventTowerMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventTowerMaster___c___ctor(EventTowerMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventTowerMaster___c___GetDatas_b__3_0(
        EventTowerMaster___c_o *this,
        EventTowerEntity_o *a,
        EventTowerEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B7641C(this, a);
  return a->fields.towerId - b->fields.towerId;
}