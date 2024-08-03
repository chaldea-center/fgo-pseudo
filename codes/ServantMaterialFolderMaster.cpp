void __fastcall ServantMaterialFolderMaster___ctor(ServantMaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCB93 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__, method);
    byte_49FCB93 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    266,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantMaterialFolderEntity_array *__fastcall ServantMaterialFolderMaster__GetEntityList(
        ServantMaterialFolderMaster_o *this,
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
  void *list; // x0
  int32_t Count; // w22
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x20
  Il2CppClass *v20; // x1
  __int64 v21; // x2
  int32_t v22; // w23
  int32_t v23; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Comparison_T__o *v29; // x19
  Il2CppObject *v30; // x21
  struct ServantMaterialFolderMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3

  if ( (byte_49FCB94 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&System_Comparison_ServantMaterialFolderEntity__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo, v11);
    sub_1B640C8(&ServantMaterialFolderEntity_TypeInfo, v12);
    sub_1B640C8(&Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__, v13);
    sub_1B640C8(&ServantMaterialFolderMaster___c_TypeInfo, v14);
    byte_49FCB94 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__);
  if ( Count >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v22,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v20 = (Il2CppClass *)list;
        methodPtr_low = LOBYTE(ServantMaterialFolderEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(ServantMaterialFolderEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == ServantMaterialFolderEntity_TypeInfo
          && *((_DWORD *)list + 4) == id )
        {
          if ( !v19 )
            break;
          items = v19->fields._items;
          v26 = Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__;
          ++v19->fields._version;
          if ( !items )
            break;
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              (Il2CppObject *)list,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v19->fields._size = size + 1;
            v28[4] = v20;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v20, v21, v23);
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B64324(list);
  }
LABEL_17:
  list = ServantMaterialFolderMaster___c_TypeInfo;
  if ( !ServantMaterialFolderMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaterialFolderMaster___c_TypeInfo);
    list = ServantMaterialFolderMaster___c_TypeInfo;
  }
  v29 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v29 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantMaterialFolderMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)**((_QWORD **)list + 23);
    v29 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantMaterialFolderEntity__TypeInfo, v20, v21);
    System_Comparison_object____ctor(v29, v30, Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__, 0LL);
    static_fields = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_ServantMaterialFolderEntity__o *)v29;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)v29, v32, v33);
  }
  if ( !v19 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55243320(
    v19,
    v29,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__);
  return (ServantMaterialFolderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v19,
                                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__);
}


void __fastcall ServantMaterialFolderMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCB95 & 1) == 0 )
  {
    sub_1B640C8(&ServantMaterialFolderMaster___c_TypeInfo, v1);
    byte_49FCB95 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantMaterialFolderMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantMaterialFolderMaster___c_TypeInfo->static_fields->__9 = (struct ServantMaterialFolderMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantMaterialFolderMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}