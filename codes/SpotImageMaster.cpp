void __fastcall SpotImageMaster___ctor(SpotImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BBEF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__);
    byte_4A5BBEF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    21,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotImageEntity_o *__fastcall SpotImageMaster__GetEntity(
        SpotImageMaster_o *this,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BBED & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__);
    byte_4A5BBED = 1;
  }
  PK = (Il2CppObject *)SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&priority);
  return (SpotImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_311DC8C *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__);
}


SpotImageEntity_array *__fastcall SpotImageMaster__GetImageList(
        SpotImageMaster_o *this,
        int32_t spot_id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_Comparison_T__o *v16; // x20
  Il2CppObject *v17; // x21
  struct SpotImageMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A5BBF0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_SpotImageEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_SpotImageEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SpotImageEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SpotImageEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SpotImageEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SpotImageEntity__TypeInfo);
    sub_1B885B0(&SpotImageEntity_TypeInfo);
    sub_1B885B0(&Method_SpotImageMaster___c__GetImageList_b__3_0__);
    sub_1B885B0(&SpotImageMaster___c_TypeInfo);
    byte_4A5BBF0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SpotImageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SpotImageEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v8,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = (Il2CppClass *)list;
      methodPtr_low = LOBYTE(SpotImageEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(SpotImageEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == SpotImageEntity_TypeInfo
        && *((_DWORD *)list + 4) == spot_id )
      {
        if ( !v5 )
          goto LABEL_26;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_SpotImageEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_26;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v9, v10);
        }
      }
    }
    list = this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_26;
  }
  list = SpotImageMaster___c_TypeInfo;
  if ( !SpotImageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpotImageMaster___c_TypeInfo);
    list = SpotImageMaster___c_TypeInfo;
  }
  v16 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v16 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = SpotImageMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)**((_QWORD **)list + 23);
    v16 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_SpotImageEntity__TypeInfo);
    System_Comparison_object____ctor(v16, v17, Method_SpotImageMaster___c__GetImageList_b__3_0__, 0LL);
    static_fields = SpotImageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_SpotImageEntity__o *)v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v16, v19, v20);
  }
  if ( !v5 )
LABEL_26:
    sub_1B8880C(list, v6);
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v16,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_SpotImageEntity__Sort__);
  return (SpotImageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_SpotImageEntity__ToArray__);
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

  if ( (byte_4A5BBEE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__);
    byte_4A5BBEE = 1;
  }
  PK = (Il2CppObject *)SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&spotId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__);
}


void __fastcall SpotImageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BBF1 & 1) == 0 )
  {
    sub_1B885B0(&SpotImageMaster___c_TypeInfo);
    byte_4A5BBF1 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(SpotImageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SpotImageMaster___c_TypeInfo->static_fields->__9 = (struct SpotImageMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)SpotImageMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}