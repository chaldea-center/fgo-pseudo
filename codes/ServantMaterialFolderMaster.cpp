void ServantMaterialFolderMaster___ctor(ServantMaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59390BD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__);
    byte_59390BD = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    274,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_ServantMaterialFolderMaster__ServantMaterialFolderEntity__int___ctor__);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  struct ServantMaterialFolderMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__1_0; // x20
  Il2CppObject *v21; // x21
  struct ServantMaterialFolderMaster___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  v3 = id;
  if ( (byte_59390BE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantMaterialFolderEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_ServantMaterialFolderEntity__get_Item__);
    sub_21FFC50(&System_Comparison_ServantMaterialFolderEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo);
    sub_21FFC50(&Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__);
    sub_21FFC50(&ServantMaterialFolderMaster___c_TypeInfo);
    byte_59390BE = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_ServantMaterialFolderEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantMaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity___ctor__);
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
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_ServantMaterialFolderEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&id = list;
        if ( *((_DWORD *)list + 4) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = *(Il2CppClass **)&id;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), id, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_23:
    sub_21FFECC(list, *(_QWORD *)&id);
  }
LABEL_15:
  list = ServantMaterialFolderMaster___c_TypeInfo;
  if ( !*(&ServantMaterialFolderMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantMaterialFolderMaster___c_TypeInfo, *(_QWORD *)&id);
    list = ServantMaterialFolderMaster___c_TypeInfo;
  }
  static_fields = (struct ServantMaterialFolderMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__1_0 = (System_Comparison_T__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, *(_QWORD *)&id);
      static_fields = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ServantMaterialFolderEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_0, v21, Method_ServantMaterialFolderMaster___c__GetEntityList_b__1_0__, 0);
    v22 = ServantMaterialFolderMaster___c_TypeInfo->static_fields;
    v22->__9__1_0 = (struct System_Comparison_ServantMaterialFolderEntity__o *)_9__1_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->__9__1_0, (int32_t)_9__1_0, v23, v24, v25, v26, v27, v28);
  }
  if ( !v7 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_71636404(
    v7,
    _9__1_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__Sort__);
  return (ServantMaterialFolderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v7,
                                                (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ServantMaterialFolderEntity__ToArray__);
}


void ServantMaterialFolderMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59390BF & 1) == 0 )
  {
    sub_21FFC50(&ServantMaterialFolderMaster___c_TypeInfo);
    byte_59390BF = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantMaterialFolderMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantMaterialFolderMaster___c_TypeInfo->static_fields->__9 = (struct ServantMaterialFolderMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantMaterialFolderMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}