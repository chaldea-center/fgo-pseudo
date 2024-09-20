void __fastcall ServantMaterialFolderMaster___ctor(ServantMaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B902 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__);
    byte_4A5B902 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    266,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantMaterialFolderEntity_array *__fastcall ServantMaterialFolderMaster__GetEntityList(
        ServantMaterialFolderMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w19
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_Comparison_T__o *v16; // x19
  Il2CppObject *v17; // x21
  struct ServantMaterialFolderMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  v3 = id;
  if ( (byte_4A5B903 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_ServantMaterialFolderEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo);
    sub_1B885B0(&ServantMaterialFolderEntity_TypeInfo);
    sub_1B885B0(&Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__);
    sub_1B885B0(&ServantMaterialFolderMaster___c_TypeInfo);
    byte_4A5B903 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v8,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        methodPtr_low = LOBYTE(ServantMaterialFolderEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(ServantMaterialFolderEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == ServantMaterialFolderEntity_TypeInfo
          && *((_DWORD *)list + 4) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v13 = Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v15[4] = *(Il2CppClass **)&id;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), id, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B8880C(list, *(_QWORD *)&id);
  }
LABEL_17:
  list = ServantMaterialFolderMaster___c_TypeInfo;
  if ( !ServantMaterialFolderMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaterialFolderMaster___c_TypeInfo);
    list = ServantMaterialFolderMaster___c_TypeInfo;
  }
  v16 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v16 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantMaterialFolderMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)**((_QWORD **)list + 23);
    v16 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantMaterialFolderEntity__TypeInfo);
    System_Comparison_object____ctor(v16, v17, Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_ServantMaterialFolderEntity__o *)v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)v16, v19, v20);
  }
  if ( !v7 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    v16,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__);
  return (ServantMaterialFolderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v7,
                                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__);
}


void __fastcall ServantMaterialFolderMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B904 & 1) == 0 )
  {
    sub_1B885B0(&ServantMaterialFolderMaster___c_TypeInfo);
    byte_4A5B904 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantMaterialFolderMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantMaterialFolderMaster___c_TypeInfo->static_fields->__9 = (struct ServantMaterialFolderMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantMaterialFolderMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall ServantMaterialFolderMaster___c___ctor(
        ServantMaterialFolderMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantMaterialFolderMaster___c___GetEntityList_b__1_0(
        ServantMaterialFolderMaster___c_o *this,
        ServantMaterialFolderEntity_o *a,
        ServantMaterialFolderEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}