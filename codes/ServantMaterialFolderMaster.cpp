void __fastcall ServantMaterialFolderMaster___ctor(ServantMaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22865 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__, method);
    byte_4C22865 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    272,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct ServantMaterialFolderMaster___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  v3 = id;
  if ( (byte_4C22866 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_ServantMaterialFolderEntity__get_Count__,
      *(_QWORD *)&id);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_ServantMaterialFolderEntity__get_Item__, v5);
    sub_1C3B764(&System_Comparison_ServantMaterialFolderEntity__TypeInfo, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo, v11);
    sub_1C3B764(&Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__, v12);
    sub_1C3B764(&ServantMaterialFolderMaster___c_TypeInfo, v13);
    byte_4C22866 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_ServantMaterialFolderEntity__get_Count__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__);
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
               (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_ServantMaterialFolderEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        if ( *((_DWORD *)list + 4) == v3 )
        {
          if ( !v16 )
            break;
          items = v16->fields._items;
          v25 = Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)list,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v27[4] = *(Il2CppClass **)&id;
            sub_1C3B708((PartyOrganizationUtility_o *)(v27 + 4), *(int64_t *)&id, v18, v19, v20, v21, v22, v23);
          }
        }
      }
      if ( Count == ++v17 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C3B9C0(list, *(_QWORD *)&id);
  }
LABEL_15:
  list = ServantMaterialFolderMaster___c_TypeInfo;
  if ( !ServantMaterialFolderMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaterialFolderMaster___c_TypeInfo);
    list = ServantMaterialFolderMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantMaterialFolderMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)list + 23);
    v28 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_ServantMaterialFolderEntity__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_ServantMaterialFolderEntity__o *)v28;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)v28, v31, v32, v33, v34, v35, v36);
  }
  if ( !v16 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_57202480(
    v16,
    v28,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__);
  return (ServantMaterialFolderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v16,
                                                (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__);
}


void __fastcall ServantMaterialFolderMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C22867 & 1) == 0 )
  {
    sub_1C3B764(&ServantMaterialFolderMaster___c_TypeInfo, v1);
    byte_4C22867 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(ServantMaterialFolderMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantMaterialFolderMaster___c_TypeInfo->static_fields->__9 = (struct ServantMaterialFolderMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)ServantMaterialFolderMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, a);
  return b->fields.priority - a->fields.priority;
}