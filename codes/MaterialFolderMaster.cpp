void __fastcall MaterialFolderMaster___ctor(MaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B3752D & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__, method);
    byte_4B3752D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    174,
    (const MethodInfo_31D1EB0 *)Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject *v25; // x25
  __int64 methodPtr_low; // x10
  int32_t v27; // w26
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4B3752E & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BD3458(&CondType_TypeInfo, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_MaterialFolderEntity__Add__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__, v11);
    sub_1BD3458(&System_Collections_Generic_List_MaterialFolderEntity__TypeInfo, v12);
    sub_1BD3458(&MaterialFolderEntity_TypeInfo, v13);
    byte_4B3752E = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_MaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v25 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(MaterialFolderEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(MaterialFolderEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == MaterialFolderEntity_TypeInfo
          && *((_DWORD *)list + 8) == eventId )
        {
          if ( isMaterialOpened )
            goto LABEL_27;
          v27 = *((_DWORD *)list + 9);
          if ( v27 < 1 )
            goto LABEL_27;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (void *)CondType__IsQuestClear_38374588(v27, -1, 0, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_27:
            if ( !v14 )
              break;
            items = v14->fields._items;
            v29 = Method_System_Collections_Generic_List_MaterialFolderEntity__Add__;
            ++v14->fields._version;
            if ( !items )
              break;
            size = v14->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                v25,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v31 = &items->obj.klass + size;
              v14->fields._size = size + 1;
              v31[4] = (Il2CppClass *)v25;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)v25, v19, v20, v21, v22, v23, v24);
            }
          }
        }
      }
      if ( v17 == ++v18 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1BD36B4(list, v15);
  }
LABEL_22:
  if ( !v14 )
    goto LABEL_24;
  return (MaterialFolderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v14,
                                         (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__);
}