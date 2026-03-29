void MaterialFolderMaster___ctor(MaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D30EF1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__);
    byte_4D30EF1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    178,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MaterialFolderEntity_array *MaterialFolderMaster__getFoldersWithEventID(
        MaterialFolderMaster_o *this,
        int32_t eventId,
        bool isMaterialOpened,
        const MethodInfo *method)
{
  void *list; // x0
  int Count; // w22
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w24
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *v17; // x25
  int32_t v18; // w26
  int32_t v19; // w27
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4D30EF2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_MaterialFolderEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_MaterialFolderEntity__get_Item__);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MaterialFolderEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_MaterialFolderEntity__TypeInfo);
    byte_4D30EF2 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_MaterialFolderEntity__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_MaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_59216344(
    v9,
    Count,
    (const MethodInfo_38791D8 *)Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__);
  if ( Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_28;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_MaterialFolderEntity__get_Item__);
      if ( !list )
        goto LABEL_28;
      v17 = (Il2CppObject *)list;
      if ( *((_DWORD *)list + 8) == eventId )
        break;
LABEL_25:
      if ( Count == ++v10 )
        goto LABEL_26;
    }
    if ( !isMaterialOpened )
    {
      v19 = *((_DWORD *)list + 9);
      v18 = *((_DWORD *)list + 10);
      if ( v19 > 0 )
      {
        if ( v18 < 1 )
        {
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (void *)CondType__IsQuestClear_41038904(v19, -1, 0, 0);
          if ( ((unsigned __int8)list & 1) == 0 )
            goto LABEL_25;
          goto LABEL_20;
        }
        goto LABEL_17;
      }
      if ( v18 > 0 )
      {
LABEL_17:
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        list = (void *)CondType__IsCommonRelease(v18, 0, 0);
        if ( ((unsigned __int8)list & 1) == 0 )
          goto LABEL_25;
      }
    }
LABEL_20:
    if ( !v9 )
      goto LABEL_28;
    items = v9->fields._items;
    v21 = Method_System_Collections_Generic_List_MaterialFolderEntity__Add__;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_28;
    size = v9->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        v17,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      v9->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v17;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v17, v11, v12, v13, v14, v15, v16);
    }
    goto LABEL_25;
  }
LABEL_26:
  if ( !v9 )
LABEL_28:
    sub_1C93D2C(list, *(_QWORD *)&eventId);
  return (MaterialFolderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v9,
                                         (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__);
}