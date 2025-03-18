void __fastcall BgmReleaseMaster___ctor(BgmReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C21BF9 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string___ctor__, method);
    byte_4C21BF9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    197,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BgmReleaseEntity_o *__fastcall BgmReleaseMaster__GetEntity(
        BgmReleaseMaster_o *this,
        int32_t bgmId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C21BF7 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string__GetEntity__, *(_QWORD *)&bgmId);
    byte_4C21BF7 = 1;
  }
  PK = (Il2CppObject *)BgmReleaseEntity__CreatePK(bgmId, id, *(const MethodInfo **)&id);
  return (BgmReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_329F900 *)Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BgmReleaseMaster__TryGetEntity(
        BgmReleaseMaster_o *this,
        BgmReleaseEntity_o **entity,
        int32_t bgmId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C21BF8 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string__TryGetEntity__, entity);
    byte_4C21BF8 = 1;
  }
  PK = (Il2CppObject *)BgmReleaseEntity__CreatePK(bgmId, id, *(const MethodInfo **)&bgmId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
BgmReleaseEntity_array *__fastcall BgmReleaseMaster__getEntitys(
        BgmReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  int64_t v11; // x1
  int64_t list; // x0
  int v13; // w22
  int32_t v14; // w23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4C21BFA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_BgmReleaseEntity__get_Count__, *(_QWORD *)&id);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_BgmReleaseEntity__get_Item__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_BgmReleaseEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_BgmReleaseEntity__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_BgmReleaseEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_BgmReleaseEntity__TypeInfo, v9);
    byte_4C21BFA = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_BgmReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_BgmReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_BgmReleaseEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = list;
    v14 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v14,
                        (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_BgmReleaseEntity__get_Item__);
      if ( !list )
        break;
      v11 = list;
      if ( *(_DWORD *)(list + 16) == id )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v22 = Method_System_Collections_Generic_List_BgmReleaseEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v11;
          sub_1C3B708((PartyOrganizationUtility_o *)(v24 + 4), v11, v15, v16, v17, v18, v19, v20);
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C3B9C0(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (BgmReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v10,
                                     (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_BgmReleaseEntity__ToArray__);
}