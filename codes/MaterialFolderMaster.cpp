void __fastcall MaterialFolderMaster___ctor(MaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2230F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__, method);
    byte_4C2230F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    178,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__);
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
  System_Collections_Generic_List_object__o *v13; // x22
  __int64 v14; // x1
  void *list; // x0
  int v16; // w23
  int32_t v17; // w24
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *v24; // x25
  int32_t v25; // w26
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4C22310 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_MaterialFolderEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_MaterialFolderEntity__get_Item__, v7);
    sub_1C3B764(&CondType_TypeInfo, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_MaterialFolderEntity__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__, v11);
    sub_1C3B764(&System_Collections_Generic_List_MaterialFolderEntity__TypeInfo, v12);
    byte_4C22310 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_MaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_MaterialFolderEntity__get_Count__);
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
               (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_MaterialFolderEntity__get_Item__);
      if ( list )
      {
        v24 = (Il2CppObject *)list;
        if ( *((_DWORD *)list + 8) == eventId )
        {
          if ( isMaterialOpened )
            goto LABEL_25;
          v25 = *((_DWORD *)list + 9);
          if ( v25 < 1 )
            goto LABEL_25;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (void *)CondType__IsQuestClear_39011304(v25, -1, 0, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_25:
            if ( !v13 )
              break;
            items = v13->fields._items;
            v27 = Method_System_Collections_Generic_List_MaterialFolderEntity__Add__;
            ++v13->fields._version;
            if ( !items )
              break;
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v13,
                v24,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v29[4] = (Il2CppClass *)v24;
              sub_1C3B708((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v24, v18, v19, v20, v21, v22, v23);
            }
          }
        }
      }
      if ( v16 == ++v17 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C3B9C0(list, v14);
  }
LABEL_20:
  if ( !v13 )
    goto LABEL_22;
  return (MaterialFolderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v13,
                                         (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__);
}