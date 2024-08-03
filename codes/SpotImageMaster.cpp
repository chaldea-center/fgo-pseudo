void __fastcall SpotImageMaster___ctor(SpotImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCD9D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__, method);
    byte_49FCD9D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    21,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotImageEntity_o *__fastcall SpotImageMaster__GetEntity(
        SpotImageMaster_o *this,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FCD9B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__, *(_QWORD *)&spotId);
    byte_49FCD9B = 1;
  }
  PK = (Il2CppObject *)SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&priority);
  return (SpotImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_30D41FC *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__);
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
  void *list; // x0
  int32_t v17; // w22
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppClass *v22; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct SpotImageMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_49FCD9E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&spot_id);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&System_Comparison_SpotImageEntity__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SpotImageEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SpotImageEntity__Sort__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SpotImageEntity__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_SpotImageEntity___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_SpotImageEntity__TypeInfo, v11);
    sub_1B640C8(&SpotImageEntity_TypeInfo, v12);
    sub_1B640C8(&Method_SpotImageMaster___c__GetImageList_b__3_0__, v13);
    sub_1B640C8(&SpotImageMaster___c_TypeInfo, v14);
    byte_49FCD9E = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SpotImageEntity__TypeInfo,
                                                       *(_QWORD *)&spot_id,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SpotImageEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v17,
             (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v22 = (Il2CppClass *)list;
      methodPtr_low = LOBYTE(SpotImageEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(SpotImageEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == SpotImageEntity_TypeInfo
        && *((_DWORD *)list + 4) == spot_id )
      {
        if ( !v15 )
          goto LABEL_26;
        items = v15->fields._items;
        v25 = Method_System_Collections_Generic_List_SpotImageEntity__Add__;
        ++v15->fields._version;
        if ( !items )
          goto LABEL_26;
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)list,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v27[4] = v22;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v22, v20, v21);
        }
      }
    }
    list = this->fields.list;
    ++v17;
    if ( !list )
      goto LABEL_26;
  }
  list = SpotImageMaster___c_TypeInfo;
  if ( !SpotImageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpotImageMaster___c_TypeInfo);
    list = SpotImageMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = SpotImageMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)list + 23);
    v28 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_SpotImageEntity__TypeInfo, v18, v19);
    System_Comparison_object____ctor(v28, v29, Method_SpotImageMaster___c__GetImageList_b__3_0__, 0LL);
    static_fields = SpotImageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_SpotImageEntity__o *)v28;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v28, v31, v32);
  }
  if ( !v15 )
LABEL_26:
    sub_1B64324(list);
  System_Collections_Generic_List_object___Sort_55243320(
    v15,
    v28,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_SpotImageEntity__Sort__);
  return (SpotImageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v15,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_SpotImageEntity__ToArray__);
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

  if ( (byte_49FCD9C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__, entity);
    byte_49FCD9C = 1;
  }
  PK = (Il2CppObject *)SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&spotId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__);
}


void __fastcall SpotImageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCD9F & 1) == 0 )
  {
    sub_1B640C8(&SpotImageMaster___c_TypeInfo, v1);
    byte_49FCD9F = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SpotImageMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SpotImageMaster___c_TypeInfo->static_fields->__9 = (struct SpotImageMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)SpotImageMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}