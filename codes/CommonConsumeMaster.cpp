void CommonConsumeMaster___ctor(CommonConsumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE497 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string___ctor__);
    byte_4CEE497 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    355,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommonConsumeEntity_o *CommonConsumeMaster__GetEntity(
        CommonConsumeMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEE495 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__GetEntity__);
    byte_4CEE495 = 1;
  }
  PK = (Il2CppObject *)CommonConsumeEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonConsumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3432DB4 *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__GetEntity__);
}


CommonConsumeEntity_array *CommonConsumeMaster__GetIdEntityList(
        CommonConsumeMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4CEE499 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_CommonConsumeEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_CommonConsumeEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CommonConsumeEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
    byte_4CEE499 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_CommonConsumeEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_CommonConsumeEntity__get_Item__);
      if ( list )
      {
        v6 = list;
        if ( LODWORD(list->fields.items) == id )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v17 = Method_System_Collections_Generic_List_CommonConsumeEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v6;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C7BD40(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (CommonConsumeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
}


CommonConsumeEntity_array *CommonConsumeMaster__GetSortedEntityList(
        CommonConsumeMaster_o *this,
        int32_t id,
        const MethodInfo *method)
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
  struct CommonConsumeMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4CEE498 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_CommonConsumeEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_CommonConsumeEntity__get_Item__);
    sub_1C7BAE8(&System_Comparison_CommonConsumeEntity__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CommonConsumeEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CommonConsumeEntity__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
    sub_1C7BAE8(&Method_CommonConsumeMaster___c__GetSortedEntityList_b__3_0__);
    sub_1C7BAE8(&CommonConsumeMaster___c_TypeInfo);
    byte_4CEE498 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_CommonConsumeEntity__get_Count__);
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
               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_CommonConsumeEntity__get_Item__);
      if ( list )
      {
        v6 = (Il2CppClass *)list;
        if ( *((_DWORD *)list + 4) == id )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_CommonConsumeEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = v6;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C7BD40(list, v6);
  }
LABEL_15:
  list = CommonConsumeMaster___c_TypeInfo;
  if ( !CommonConsumeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonConsumeMaster___c_TypeInfo);
    list = CommonConsumeMaster___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = CommonConsumeMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)list + 23);
    v21 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_CommonConsumeEntity__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_CommonConsumeMaster___c__GetSortedEntityList_b__3_0__, 0);
    static_fields = CommonConsumeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_CommonConsumeEntity__o *)v21;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_58984640(
    v5,
    v21,
    (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_CommonConsumeEntity__Sort__);
  return (CommonConsumeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool CommonConsumeMaster__TryGetEntity(
        CommonConsumeMaster_o *this,
        CommonConsumeEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEE496 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__TryGetEntity__);
    byte_4CEE496 = 1;
  }
  PK = (Il2CppObject *)CommonConsumeEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__TryGetEntity__);
}


void CommonConsumeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEE49A & 1) == 0 )
  {
    sub_1C7BAE8(&CommonConsumeMaster___c_TypeInfo);
    byte_4CEE49A = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(CommonConsumeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CommonConsumeMaster___c_TypeInfo->static_fields->__9 = (struct CommonConsumeMaster___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)CommonConsumeMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CommonConsumeMaster___c___ctor(CommonConsumeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t CommonConsumeMaster___c___GetSortedEntityList_b__3_0(
        CommonConsumeMaster___c_o *this,
        CommonConsumeEntity_o *x,
        CommonConsumeEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1C7BD40(this, x);
  return y->fields.priority - x->fields.priority;
}