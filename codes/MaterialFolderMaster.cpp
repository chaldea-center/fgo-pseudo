void __fastcall MaterialFolderMaster___ctor(MaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A1FE51 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__, method);
    byte_4A1FE51 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    174,
    (const MethodInfo_30F8720 *)Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MaterialFolderEntity_array *__fastcall MaterialFolderMaster__getFoldersWithEventID(
        MaterialFolderMaster_o *this,
        int32_t eventId,
        bool isMaterialOpened,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x22
  __int64 v15; // x1
  void *list; // x0
  int v17; // w23
  int32_t v18; // w24
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *v21; // x25
  __int64 methodPtr_low; // x10
  int32_t v23; // w26
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4A1FE52 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B715CC(&CondType_TypeInfo, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_MaterialFolderEntity__Add__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__, v11);
    sub_1B715CC(&System_Collections_Generic_List_MaterialFolderEntity__TypeInfo, v12);
    sub_1B715CC(&MaterialFolderEntity_TypeInfo, v13);
    byte_4A1FE52 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_MaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v17 = (int)list;
    v18 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v18,
               (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v21 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(MaterialFolderEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(MaterialFolderEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == MaterialFolderEntity_TypeInfo
          && *((_DWORD *)list + 8) == eventId )
        {
          if ( isMaterialOpened )
            goto LABEL_27;
          v23 = *((_DWORD *)list + 9);
          if ( v23 < 1 )
            goto LABEL_27;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (void *)CondType__IsQuestClear_37394868(v23, -1, 0, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_27:
            if ( !v14 )
              break;
            items = v14->fields._items;
            v25 = Method_System_Collections_Generic_List_MaterialFolderEntity__Add__;
            ++v14->fields._version;
            if ( !items )
              break;
            size = v14->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                v21,
                *(const MethodInfo_34D0260 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v14->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v21;
              sub_1B71570((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v21, v19, v20);
            }
          }
        }
      }
      if ( v17 == ++v18 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B71828(list, v15);
  }
LABEL_22:
  if ( !v14 )
    goto LABEL_24;
  return (MaterialFolderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v14,
                                         (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__);
}