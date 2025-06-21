void __fastcall ServantMaterialFolderMaster___ctor(ServantMaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CEA2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__, method);
    byte_4B1CEA2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    272,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantMaterialFolderEntity_array *__fastcall ServantMaterialFolderMaster__GetEntityList(
        ServantMaterialFolderMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v16; // x19
  int32_t v17; // w23
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Comparison_T__o *v24; // x20
  Il2CppObject *v25; // x21
  struct ServantMaterialFolderMaster___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  v3 = id;
  if ( (byte_4B1CEA3 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_ServantMaterialFolderEntity__get_Count__,
      *(_QWORD *)&id);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantMaterialFolderEntity__get_Item__, v5);
    sub_1BCAFF8(&System_Comparison_ServantMaterialFolderEntity__TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo, v11);
    sub_1BCAFF8(&Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__, v12);
    sub_1BCAFF8(&ServantMaterialFolderMaster___c_TypeInfo, v13);
    byte_4B1CEA3 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ServantMaterialFolderEntity__get_Count__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__);
  if ( Count >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v17,
               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ServantMaterialFolderEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        if ( *((_DWORD *)list + 4) == v3 )
        {
          if ( !v16 )
            break;
          items = v16->fields._items;
          v21 = Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)list,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v23[4] = *(Il2CppClass **)&id;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v23 + 4), id, v18, v19);
          }
        }
      }
      if ( Count == ++v17 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1BCB254(list, *(_QWORD *)&id);
  }
LABEL_15:
  list = ServantMaterialFolderMaster___c_TypeInfo;
  if ( !ServantMaterialFolderMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaterialFolderMaster___c_TypeInfo);
    list = ServantMaterialFolderMaster___c_TypeInfo;
  }
  v24 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v24 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantMaterialFolderMaster___c_TypeInfo;
    }
    v25 = (Il2CppObject *)**((_QWORD **)list + 23);
    v24 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_ServantMaterialFolderEntity__TypeInfo);
    System_Comparison_object____ctor(v24, v25, Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_ServantMaterialFolderEntity__o *)v24;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)v24, v27, v28);
  }
  if ( !v16 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_57390740(
    v16,
    v24,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__);
  return (ServantMaterialFolderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v16,
                                                (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__);
}


void __fastcall ServantMaterialFolderMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1CEA4 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantMaterialFolderMaster___c_TypeInfo, v1);
    byte_4B1CEA4 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ServantMaterialFolderMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantMaterialFolderMaster___c_TypeInfo->static_fields->__9 = (struct ServantMaterialFolderMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ServantMaterialFolderMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, a);
  return b->fields.priority - a->fields.priority;
}