void __fastcall SpotImageMaster___ctor(SpotImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEE96 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__, method);
    byte_49FEE96 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    21,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotImageEntity_o *__fastcall SpotImageMaster__GetEntity(
        SpotImageMaster_o *this,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FEE94 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__, *(_QWORD *)&spotId);
    byte_49FEE94 = 1;
  }
  PK = (Il2CppObject *)SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&priority);
  return (SpotImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_30D64D8 *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
SpotImageEntity_array *__fastcall SpotImageMaster__GetImageList(
        SpotImageMaster_o *this,
        int32_t spot_id,
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
  int32_t v18; // w22
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x20
  Il2CppObject *v27; // x21
  struct SpotImageMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_49FEE97 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&spot_id);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&System_Comparison_SpotImageEntity__TypeInfo, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_SpotImageEntity__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_SpotImageEntity__Sort__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_SpotImageEntity__ToArray__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_SpotImageEntity___ctor__, v10);
    sub_1B64870(&System_Collections_Generic_List_SpotImageEntity__TypeInfo, v11);
    sub_1B64870(&SpotImageEntity_TypeInfo, v12);
    sub_1B64870(&Method_SpotImageMaster___c__GetImageList_b__3_0__, v13);
    sub_1B64870(&SpotImageMaster___c_TypeInfo, v14);
    byte_49FEE97 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_SpotImageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_SpotImageEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  v18 = 0;
  while ( v18 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v18,
             (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v16 = (Il2CppClass *)list;
      methodPtr_low = LOBYTE(SpotImageEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(SpotImageEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == SpotImageEntity_TypeInfo
        && *((_DWORD *)list + 4) == spot_id )
      {
        if ( !v15 )
          goto LABEL_26;
        items = v15->fields._items;
        v23 = Method_System_Collections_Generic_List_SpotImageEntity__Add__;
        ++v15->fields._version;
        if ( !items )
          goto LABEL_26;
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)list,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v25[4] = v16;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v16, v19, v20);
        }
      }
    }
    list = this->fields.list;
    ++v18;
    if ( !list )
      goto LABEL_26;
  }
  list = SpotImageMaster___c_TypeInfo;
  if ( !SpotImageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpotImageMaster___c_TypeInfo);
    list = SpotImageMaster___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = SpotImageMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)list + 23);
    v26 = (System_Comparison_T__o *)sub_1B64ABC(System_Comparison_SpotImageEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_SpotImageMaster___c__GetImageList_b__3_0__, 0LL);
    static_fields = SpotImageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_SpotImageEntity__o *)v26;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v26, v29, v30);
  }
  if ( !v15 )
LABEL_26:
    sub_1B64ACC(list, v16);
  System_Collections_Generic_List_object___Sort_55252244(
    v15,
    v26,
    (const MethodInfo_34B1514 *)Method_System_Collections_Generic_List_SpotImageEntity__Sort__);
  return (SpotImageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v15,
                                    (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_SpotImageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SpotImageMaster__TryGetEntity(
        SpotImageMaster_o *this,
        SpotImageEntity_o **entity,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FEE95 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__, entity);
    byte_49FEE95 = 1;
  }
  PK = (Il2CppObject *)SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&spotId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__);
}


void __fastcall SpotImageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FEE98 & 1) == 0 )
  {
    sub_1B64870(&SpotImageMaster___c_TypeInfo, v1);
    byte_49FEE98 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(SpotImageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SpotImageMaster___c_TypeInfo->static_fields->__9 = (struct SpotImageMaster___c_o *)v2;
  sub_1B64814((ServantStatusBattleListViewItem_o *)SpotImageMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SpotImageMaster___c___ctor(SpotImageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SpotImageMaster___c___GetImageList_b__3_0(
        SpotImageMaster___c_o *this,
        SpotImageEntity_o *a,
        SpotImageEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B64ACC(this, a);
  return b->fields.priority - a->fields.priority;
}