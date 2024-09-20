void __fastcall CommonConsumeMaster___ctor(CommonConsumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF85 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string___ctor__);
    byte_4A5AF85 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    349,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommonConsumeEntity_o *__fastcall CommonConsumeMaster__GetEntity(
        CommonConsumeMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5AF83 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__GetEntity__);
    byte_4A5AF83 = 1;
  }
  PK = (Il2CppObject *)CommonConsumeEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonConsumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_311DC8C *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__GetEntity__);
}


CommonConsumeEntity_array *__fastcall CommonConsumeMaster__GetIdEntityList(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A5AF87 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CommonConsumeEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommonConsumeEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
    byte_4A5AF87 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        methodPtr_low = LOBYTE(CommonConsumeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (CommonConsumeEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == CommonConsumeEntity_TypeInfo
          && LODWORD(list->fields.items) == id )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v14 = Method_System_Collections_Generic_List_CommonConsumeEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v16[4] = (Il2CppClass *)v6;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v6, v10, v11);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return (CommonConsumeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
}


CommonConsumeEntity_array *__fastcall CommonConsumeMaster__GetSortedEntityList(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x20
  Il2CppObject *v19; // x21
  struct CommonConsumeMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5AF86 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CommonConsumeEntity_TypeInfo);
    sub_1B885B0(&System_Comparison_CommonConsumeEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommonConsumeEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommonConsumeEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
    sub_1B885B0(&Method_CommonConsumeMaster___c__GetSortedEntityList_b__3_0__);
    sub_1B885B0(&CommonConsumeMaster___c_TypeInfo);
    byte_4A5AF86 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = (Il2CppClass *)list;
        methodPtr_low = LOBYTE(CommonConsumeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(CommonConsumeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == CommonConsumeEntity_TypeInfo
          && *((_DWORD *)list + 4) == id )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v15 = Method_System_Collections_Generic_List_CommonConsumeEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v17[4] = v6;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v6, v11, v12);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  list = CommonConsumeMaster___c_TypeInfo;
  if ( !CommonConsumeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonConsumeMaster___c_TypeInfo);
    list = CommonConsumeMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = CommonConsumeMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)list + 23);
    v18 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_CommonConsumeEntity__TypeInfo);
    System_Comparison_object____ctor(v18, v19, Method_CommonConsumeMaster___c__GetSortedEntityList_b__3_0__, 0LL);
    static_fields = CommonConsumeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_CommonConsumeEntity__o *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v18, v21, v22);
  }
  if ( !v5 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v18,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_CommonConsumeEntity__Sort__);
  return (CommonConsumeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
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

  if ( (byte_4A5AF84 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__TryGetEntity__);
    byte_4A5AF84 = 1;
  }
  PK = (Il2CppObject *)CommonConsumeEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__TryGetEntity__);
}


void __fastcall CommonConsumeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AF88 & 1) == 0 )
  {
    sub_1B885B0(&CommonConsumeMaster___c_TypeInfo);
    byte_4A5AF88 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CommonConsumeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CommonConsumeMaster___c_TypeInfo->static_fields->__9 = (struct CommonConsumeMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)CommonConsumeMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, x);
  return y->fields.priority - x->fields.priority;
}