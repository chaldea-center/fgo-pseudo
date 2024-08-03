void __fastcall MaterialFolderMaster___ctor(MaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC786 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__, method);
    byte_49FC786 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    174,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__);
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
  void *list; // x0
  int v16; // w23
  int32_t v17; // w24
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x25
  __int64 methodPtr_low; // x10
  int32_t v22; // w26
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_49FC787 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&CondType_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_MaterialFolderEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_MaterialFolderEntity__TypeInfo, v12);
    sub_1B640C8(&MaterialFolderEntity_TypeInfo, v13);
    byte_49FC787 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MaterialFolderEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       isMaterialOpened);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v16 = (int)list;
    v17 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v17,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v20 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(MaterialFolderEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(MaterialFolderEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == MaterialFolderEntity_TypeInfo
          && *((_DWORD *)list + 8) == eventId )
        {
          if ( isMaterialOpened )
            goto LABEL_27;
          v22 = *((_DWORD *)list + 9);
          if ( v22 < 1 )
            goto LABEL_27;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (void *)CondType__IsQuestClear_37285996(v22, -1, 0, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_27:
            if ( !v14 )
              break;
            items = v14->fields._items;
            v24 = Method_System_Collections_Generic_List_MaterialFolderEntity__Add__;
            ++v14->fields._version;
            if ( !items )
              break;
            size = v14->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                v20,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v14->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v20;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v20, v18, v19);
            }
          }
        }
      }
      if ( v16 == ++v17 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B64324(list);
  }
LABEL_22:
  if ( !v14 )
    goto LABEL_24;
  return (MaterialFolderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v14,
                                         (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__);
}