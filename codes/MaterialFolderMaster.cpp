void __fastcall MaterialFolderMaster___ctor(MaterialFolderMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16581 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__, method, v2);
    byte_4B16581 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    174,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MaterialFolderEntity_array *__fastcall MaterialFolderMaster__getFoldersWithEventID(
        MaterialFolderMaster_o *this,
        int32_t eventId,
        bool isMaterialOpened,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v21; // x22
  __int64 v22; // x1
  void *list; // x0
  int v24; // w23
  int32_t v25; // w24
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *v32; // x25
  __int64 methodPtr_low; // x10
  int32_t v34; // w26
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0

  if ( (byte_4B16582 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      isMaterialOpened);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&CondType_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialFolderEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_MaterialFolderEntity__TypeInfo, v17, v18);
    sub_1BCA7E0(&MaterialFolderEntity_TypeInfo, v19, v20);
    byte_4B16582 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MaterialFolderEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       isMaterialOpened,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v24 = (int)list;
    v25 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v25,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v32 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(MaterialFolderEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(MaterialFolderEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == MaterialFolderEntity_TypeInfo
          && *((_DWORD *)list + 8) == eventId )
        {
          if ( isMaterialOpened )
            goto LABEL_27;
          v34 = *((_DWORD *)list + 9);
          if ( v34 < 1 )
            goto LABEL_27;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v22);
          list = (void *)CondType__IsQuestClear_38310172(v34, -1, 0, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_27:
            if ( !v21 )
              break;
            items = v21->fields._items;
            v36 = Method_System_Collections_Generic_List_MaterialFolderEntity__Add__;
            ++v21->fields._version;
            if ( !items )
              break;
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v21,
                v32,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v38 = &items->obj.klass + size;
              v21->fields._size = size + 1;
              v38[4] = (Il2CppClass *)v32;
              sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v32, v26, v27, v28, v29, v30, v31);
            }
          }
        }
      }
      if ( v24 == ++v25 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1BCAA3C(list, v22);
  }
LABEL_22:
  if ( !v21 )
    goto LABEL_24;
  return (MaterialFolderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v21,
                                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__);
}