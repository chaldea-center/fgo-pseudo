void __fastcall MaterialFolderMaster___ctor(MaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B4DE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__);
    byte_4A5B4DE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    174,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__);
}


MaterialFolderEntity_array *__fastcall MaterialFolderMaster__getFoldersWithEventID(
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
  int32_t v13; // w3
  Il2CppObject *v14; // x25
  __int64 methodPtr_low; // x10
  int32_t v16; // w26
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4A5B4DF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialFolderEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MaterialFolderEntity__TypeInfo);
    sub_1B885B0(&MaterialFolderEntity_TypeInfo);
    byte_4A5B4DF = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v14 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(MaterialFolderEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(MaterialFolderEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == MaterialFolderEntity_TypeInfo
          && *((_DWORD *)list + 8) == eventId )
        {
          if ( isMaterialOpened )
            goto LABEL_27;
          v16 = *((_DWORD *)list + 9);
          if ( v16 < 1 )
            goto LABEL_27;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (void *)CondType__IsQuestClear_37596684(v16, -1, 0, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_27:
            if ( !v7 )
              break;
            items = v7->fields._items;
            v18 = Method_System_Collections_Generic_List_MaterialFolderEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                v14,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v14;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v14, v12, v13);
            }
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B8880C(list, v8);
  }
LABEL_22:
  if ( !v7 )
    goto LABEL_24;
  return (MaterialFolderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v7,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__);
}