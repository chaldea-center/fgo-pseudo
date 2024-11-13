void __fastcall ServantMaterialFolderMaster___ctor(ServantMaterialFolderMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16A90 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__,
      method,
      v2);
    byte_4B16A90 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    266,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantMaterialFolderEntity_array *__fastcall ServantMaterialFolderMaster__GetEntityList(
        ServantMaterialFolderMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  void *list; // x0
  int32_t Count; // w22
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_List_object__o *v30; // x20
  int64_t v31; // x2
  __int64 v32; // x3
  int32_t v33; // w23
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Comparison_T__o *v43; // x19
  Il2CppObject *v44; // x21
  struct ServantMaterialFolderMaster___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  v3 = id;
  if ( (byte_4B16A91 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&System_Comparison_ServantMaterialFolderEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo, v17, v18);
    sub_1BCA7E0(&ServantMaterialFolderEntity_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__, v21, v22);
    sub_1BCA7E0(&ServantMaterialFolderMaster___c_TypeInfo, v23, v24);
    byte_4B16A91 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo,
                                                       v27,
                                                       v28,
                                                       v29);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__);
  if ( Count >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v33,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        methodPtr_low = LOBYTE(ServantMaterialFolderEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(ServantMaterialFolderEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == ServantMaterialFolderEntity_TypeInfo
          && *((_DWORD *)list + 4) == v3 )
        {
          if ( !v30 )
            break;
          items = v30->fields._items;
          v40 = Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__;
          ++v30->fields._version;
          if ( !items )
            break;
          size = v30->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v30,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            v30->fields._size = size + 1;
            v42[4] = *(Il2CppClass **)&id;
            sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), *(int64_t *)&id, v31, v32, v34, v35, v36, v37);
          }
        }
      }
      if ( Count == ++v33 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1BCAA3C(list, *(_QWORD *)&id);
  }
LABEL_17:
  list = ServantMaterialFolderMaster___c_TypeInfo;
  if ( !ServantMaterialFolderMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaterialFolderMaster___c_TypeInfo, *(_QWORD *)&id);
    list = ServantMaterialFolderMaster___c_TypeInfo;
  }
  v43 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, *(_QWORD *)&id);
      list = ServantMaterialFolderMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)list + 23);
    v43 = (System_Comparison_T__o *)sub_1BCAA2C(
                                      System_Comparison_ServantMaterialFolderEntity__TypeInfo,
                                      *(_QWORD *)&id,
                                      v31,
                                      v32);
    System_Comparison_object____ctor(v43, v44, Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_ServantMaterialFolderEntity__o *)v43;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)v43, v46, v47, v48, v49, v50, v51);
  }
  if ( !v30 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_56244000(
    v30,
    v43,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__);
  return (ServantMaterialFolderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v30,
                                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__);
}


void __fastcall ServantMaterialFolderMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16A92 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantMaterialFolderMaster___c_TypeInfo, v1, v2);
    byte_4B16A92 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantMaterialFolderMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantMaterialFolderMaster___c_TypeInfo->static_fields->__9 = (struct ServantMaterialFolderMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantMaterialFolderMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}