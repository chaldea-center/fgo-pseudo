void __fastcall CommonConsumeMaster___ctor(CommonConsumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FC90 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string___ctor__, method);
    byte_4A6FC90 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    349,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommonConsumeEntity_o *__fastcall CommonConsumeMaster__GetEntity(
        CommonConsumeMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A6FC8E & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4A6FC8E = 1;
  }
  PK = (Il2CppObject *)CommonConsumeEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonConsumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_312C900 *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__GetEntity__);
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
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4A6FC92 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&CommonConsumeEntity_TypeInfo, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_CommonConsumeEntity__Add__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__, v9);
    sub_1B90010(&System_Collections_Generic_List_CommonConsumeEntity__TypeInfo, v10);
    byte_4A6FC92 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        methodPtr_low = LOBYTE(CommonConsumeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (CommonConsumeEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == CommonConsumeEntity_TypeInfo
          && LODWORD(list->fields.items) == id )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v20 = Method_System_Collections_Generic_List_CommonConsumeEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v12;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v12, v16, v17);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B9026C(list, v12);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (CommonConsumeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
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
  struct CommonConsumeMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_4A6FC91 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&CommonConsumeEntity_TypeInfo, v6);
    sub_1B90010(&System_Comparison_CommonConsumeEntity__TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_CommonConsumeEntity__Add__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_CommonConsumeEntity__Sort__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__, v11);
    sub_1B90010(&System_Collections_Generic_List_CommonConsumeEntity__TypeInfo, v12);
    sub_1B90010(&Method_CommonConsumeMaster___c__GetSortedEntityList_b__3_0__, v13);
    sub_1B90010(&CommonConsumeMaster___c_TypeInfo, v14);
    byte_4A6FC91 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = (Il2CppClass *)list;
        methodPtr_low = LOBYTE(CommonConsumeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(CommonConsumeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == CommonConsumeEntity_TypeInfo
          && *((_DWORD *)list + 4) == id )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v25 = Method_System_Collections_Generic_List_CommonConsumeEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)list,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v27[4] = v16;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v16, v21, v22);
          }
        }
      }
      if ( v19 == ++v20 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B9026C(list, v16);
  }
LABEL_17:
  list = CommonConsumeMaster___c_TypeInfo;
  if ( !CommonConsumeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonConsumeMaster___c_TypeInfo);
    list = CommonConsumeMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = CommonConsumeMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)list + 23);
    v28 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_CommonConsumeEntity__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_CommonConsumeMaster___c__GetSortedEntityList_b__3_0__, 0LL);
    static_fields = CommonConsumeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_CommonConsumeEntity__o *)v28;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v28, v31, v32);
  }
  if ( !v15 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55649412(
    v15,
    v28,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_CommonConsumeEntity__Sort__);
  return (CommonConsumeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v15,
                                        (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
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

  if ( (byte_4A6FC8F & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__TryGetEntity__, entity);
    byte_4A6FC8F = 1;
  }
  PK = (Il2CppObject *)CommonConsumeEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__TryGetEntity__);
}


void __fastcall CommonConsumeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6FC93 & 1) == 0 )
  {
    sub_1B90010(&CommonConsumeMaster___c_TypeInfo, v1);
    byte_4A6FC93 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(CommonConsumeMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CommonConsumeMaster___c_TypeInfo->static_fields->__9 = (struct CommonConsumeMaster___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)CommonConsumeMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B9026C(this, x);
  return y->fields.priority - x->fields.priority;
}