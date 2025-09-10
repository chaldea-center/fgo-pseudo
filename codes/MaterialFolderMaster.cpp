void MaterialFolderMaster___ctor(MaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C277C1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__);
    byte_4C277C1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    178,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__);
}


MaterialFolderEntity_array *MaterialFolderMaster__getFoldersWithEventID(
        MaterialFolderMaster_o *this,
        int32_t eventId,
        bool isMaterialOpened,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  __int64 v8; // x1
  void *list; // x0
  int v10; // w23
  int32_t v11; // w24
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x25
  int32_t v15; // w26
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4C277C2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_MaterialFolderEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_MaterialFolderEntity__get_Item__);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialFolderEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_MaterialFolderEntity__TypeInfo);
    byte_4C277C2 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_MaterialFolderEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v10 = (int)list;
    v11 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v11,
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_MaterialFolderEntity__get_Item__);
      if ( list )
      {
        v14 = (Il2CppObject *)list;
        if ( *((_DWORD *)list + 8) == eventId )
        {
          if ( isMaterialOpened )
            goto LABEL_25;
          v15 = *((_DWORD *)list + 9);
          if ( v15 < 1 )
            goto LABEL_25;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (void *)CondType__IsQuestClear_40102980(v15, -1, 0, 0);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_25:
            if ( !v7 )
              break;
            items = v7->fields._items;
            v17 = Method_System_Collections_Generic_List_MaterialFolderEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                v14,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v19[4] = (Il2CppClass *)v14;
              sub_1C2D434((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v14, v12, v13);
            }
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C2D6EC(list, v8);
  }
LABEL_20:
  if ( !v7 )
    goto LABEL_22;
  return (MaterialFolderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v7,
                                         (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__);
}