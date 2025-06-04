void __fastcall CommonConsumeMaster___ctor(CommonConsumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B01E26 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string___ctor__, method);
    byte_4B01E26 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    355,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommonConsumeEntity_o *__fastcall CommonConsumeMaster__GetEntity(
        CommonConsumeMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B01E24 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B01E24 = 1;
  }
  PK = (Il2CppObject *)CommonConsumeEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonConsumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_32B3B28 *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
CommonConsumeEntity_array *__fastcall CommonConsumeMaster__GetIdEntityList(
        CommonConsumeMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4B01E28 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_CommonConsumeEntity__get_Count__, *(_QWORD *)&id);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_CommonConsumeEntity__get_Item__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_CommonConsumeEntity__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_CommonConsumeEntity__TypeInfo, v9);
    byte_4B01E28 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_CommonConsumeEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_CommonConsumeEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( LODWORD(list->fields.items) == id )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v18 = Method_System_Collections_Generic_List_CommonConsumeEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v11;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BC3264(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (CommonConsumeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v10,
                                        (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
CommonConsumeEntity_array *__fastcall CommonConsumeMaster__GetSortedEntityList(
        CommonConsumeMaster_o *this,
        int32_t id,
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
  System_Collections_Generic_List_object__o *v14; // x19
  Il2CppClass *v15; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v18; // w22
  int32_t v19; // w23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x20
  Il2CppObject *v27; // x21
  struct CommonConsumeMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4B01E27 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_CommonConsumeEntity__get_Count__, *(_QWORD *)&id);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_CommonConsumeEntity__get_Item__, v5);
    sub_1BC3008(&System_Comparison_CommonConsumeEntity__TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_CommonConsumeEntity__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_CommonConsumeEntity__Sort__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_List_CommonConsumeEntity__TypeInfo, v11);
    sub_1BC3008(&Method_CommonConsumeMaster___c__GetSortedEntityList_b__3_0__, v12);
    sub_1BC3008(&CommonConsumeMaster___c_TypeInfo, v13);
    byte_4B01E27 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_CommonConsumeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_CommonConsumeEntity__get_Item__);
      if ( list )
      {
        v15 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 4) == id )
        {
          if ( !v14 )
            break;
          items = v14->fields._items;
          v23 = Method_System_Collections_Generic_List_CommonConsumeEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)list,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v25[4] = v15;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v15, v20, v21);
          }
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1BC3264(list, v15);
  }
LABEL_15:
  list = CommonConsumeMaster___c_TypeInfo;
  if ( !CommonConsumeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonConsumeMaster___c_TypeInfo);
    list = CommonConsumeMaster___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = CommonConsumeMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)list + 23);
    v26 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_CommonConsumeEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_CommonConsumeMaster___c__GetSortedEntityList_b__3_0__, 0LL);
    static_fields = CommonConsumeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_CommonConsumeEntity__o *)v26;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)v26, v29, v30);
  }
  if ( !v14 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_57288964(
    v14,
    v26,
    (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_CommonConsumeEntity__Sort__);
  return (CommonConsumeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v14,
                                        (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonConsumeMaster__TryGetEntity(
        CommonConsumeMaster_o *this,
        CommonConsumeEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B01E25 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__TryGetEntity__, entity);
    byte_4B01E25 = 1;
  }
  PK = (Il2CppObject *)CommonConsumeEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__TryGetEntity__);
}


void __fastcall CommonConsumeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B01E29 & 1) == 0 )
  {
    sub_1BC3008(&CommonConsumeMaster___c_TypeInfo, v1);
    byte_4B01E29 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(CommonConsumeMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CommonConsumeMaster___c_TypeInfo->static_fields->__9 = (struct CommonConsumeMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)CommonConsumeMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall CommonConsumeMaster___c___ctor(CommonConsumeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CommonConsumeMaster___c___GetSortedEntityList_b__3_0(
        CommonConsumeMaster___c_o *this,
        CommonConsumeEntity_o *x,
        CommonConsumeEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1BC3264(this, x);
  return y->fields.priority - x->fields.priority;
}