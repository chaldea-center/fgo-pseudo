void __fastcall ServantMaterialFolderMaster___ctor(ServantMaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF2AC & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__, method);
    byte_49FF2AC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    266,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantMaterialFolderEntity_array *__fastcall ServantMaterialFolderMaster__GetEntityList(
        ServantMaterialFolderMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w19
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
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w23
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x19
  Il2CppObject *v27; // x21
  struct ServantMaterialFolderMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  v3 = id;
  if ( (byte_49FF2AD & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64A00(&System_Comparison_ServantMaterialFolderEntity__TypeInfo, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__, v10);
    sub_1B64A00(&System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo, v11);
    sub_1B64A00(&ServantMaterialFolderEntity_TypeInfo, v12);
    sub_1B64A00(&Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__, v13);
    sub_1B64A00(&ServantMaterialFolderMaster___c_TypeInfo, v14);
    byte_49FF2AD = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__);
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v18,
               (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        methodPtr_low = LOBYTE(ServantMaterialFolderEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(ServantMaterialFolderEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == ServantMaterialFolderEntity_TypeInfo
          && *((_DWORD *)list + 4) == v3 )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v23 = Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)list,
              *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v25[4] = *(Il2CppClass **)&id;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)(v25 + 4), id, v19, v20);
          }
        }
      }
      if ( Count == ++v18 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B64C5C(list, *(_QWORD *)&id);
  }
LABEL_17:
  list = ServantMaterialFolderMaster___c_TypeInfo;
  if ( !ServantMaterialFolderMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaterialFolderMaster___c_TypeInfo);
    list = ServantMaterialFolderMaster___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantMaterialFolderMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)list + 23);
    v26 = (System_Comparison_T__o *)sub_1B64C4C(System_Comparison_ServantMaterialFolderEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_ServantMaterialFolderEntity__o *)v26;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)v26, v29, v30);
  }
  if ( !v17 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55253804(
    v17,
    v26,
    (const MethodInfo_34B1B2C *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__);
  return (ServantMaterialFolderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v17,
                                                (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__);
}


void __fastcall ServantMaterialFolderMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FF2AE & 1) == 0 )
  {
    sub_1B64A00(&ServantMaterialFolderMaster___c_TypeInfo, v1);
    byte_49FF2AE = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(ServantMaterialFolderMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantMaterialFolderMaster___c_TypeInfo->static_fields->__9 = (struct ServantMaterialFolderMaster___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)ServantMaterialFolderMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B64C5C(this, a);
  return b->fields.priority - a->fields.priority;
}