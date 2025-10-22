void ServantMaterialFolderMaster___ctor(ServantMaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C5773F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__);
    byte_4C5773F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    272,
    (const MethodInfo_33B0C34 *)Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantMaterialFolderEntity_array *ServantMaterialFolderMaster__GetEntityList(
        ServantMaterialFolderMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w20
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v7; // x19
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Comparison_T__o *v15; // x20
  Il2CppObject *v16; // x21
  struct ServantMaterialFolderMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  v3 = id;
  if ( (byte_4C57740 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_ServantMaterialFolderEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_ServantMaterialFolderEntity__get_Item__);
    sub_1C3E564(&System_Comparison_ServantMaterialFolderEntity__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo);
    sub_1C3E564(&Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__);
    sub_1C3E564(&ServantMaterialFolderMaster___c_TypeInfo);
    byte_4C57740 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_ServantMaterialFolderEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__);
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
               (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_ServantMaterialFolderEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        if ( *((_DWORD *)list + 4) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v12 = Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v14[4] = *(Il2CppClass **)&id;
            sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), id, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C3E7C0(list, *(_QWORD *)&id);
  }
LABEL_15:
  list = ServantMaterialFolderMaster___c_TypeInfo;
  if ( !ServantMaterialFolderMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaterialFolderMaster___c_TypeInfo);
    list = ServantMaterialFolderMaster___c_TypeInfo;
  }
  v15 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantMaterialFolderMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)list + 23);
    v15 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_ServantMaterialFolderEntity__TypeInfo);
    System_Comparison_object____ctor(v15, v16, Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__, 0);
    static_fields = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_ServantMaterialFolderEntity__o *)v15;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)v15, v18, v19);
  }
  if ( !v7 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_58421028(
    v7,
    v15,
    (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__);
  return (ServantMaterialFolderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v7,
                                                (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__);
}


void ServantMaterialFolderMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C57741 & 1) == 0 )
  {
    sub_1C3E564(&ServantMaterialFolderMaster___c_TypeInfo);
    byte_4C57741 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(ServantMaterialFolderMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantMaterialFolderMaster___c_TypeInfo->static_fields->__9 = (struct ServantMaterialFolderMaster___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)ServantMaterialFolderMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantMaterialFolderMaster___c___ctor(ServantMaterialFolderMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantMaterialFolderMaster___c___GetEntityList_b__1_0(
        ServantMaterialFolderMaster___c_o *this,
        ServantMaterialFolderEntity_o *a,
        ServantMaterialFolderEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C3E7C0(this, a);
  return b->fields.priority - a->fields.priority;
}