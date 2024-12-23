void __fastcall BoxGachaTalkMaster___ctor(BoxGachaTalkMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B668C0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string___ctor__, method);
    byte_4B668C0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    130,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaTalkEntity_o *__fastcall BoxGachaTalkMaster__GetEntity(
        BoxGachaTalkMaster_o *this,
        int32_t id,
        int32_t guideImageId,
        int32_t no,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B668BE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B668BE = 1;
  }
  PK = (Il2CppObject *)BoxGachaTalkEntity__CreatePK(id, guideImageId, no, *(const MethodInfo **)&no);
  return (BoxGachaTalkEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_31FDB1C *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BoxGachaTalkMaster__TryGetEntity(
        BoxGachaTalkMaster_o *this,
        BoxGachaTalkEntity_o **entity,
        int32_t id,
        int32_t guideImageId,
        int32_t no,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B668BF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__TryGetEntity__, entity);
    byte_4B668BF = 1;
  }
  PK = (Il2CppObject *)BoxGachaTalkEntity__CreatePK(id, guideImageId, no, *(const MethodInfo **)&guideImageId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaTalkEntity_array *__fastcall BoxGachaTalkMaster__getTalkData(
        BoxGachaTalkMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  int64_t v12; // x1
  int64_t list; // x0
  int v14; // w22
  int32_t v15; // w23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4B668C1 & 1) == 0 )
  {
    sub_1BE4ACC(&BoxGachaTalkEntity_TypeInfo, *(_QWORD *)&id);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo, v10);
    byte_4B668C1 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = list;
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v15,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        methodPtr_low = LOBYTE(BoxGachaTalkEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(BoxGachaTalkEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == BoxGachaTalkEntity_TypeInfo
          && (id < 1 || *(_DWORD *)(list + 16) == id) )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v24 = Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v12;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 4), v12, v16, v17, v18, v19, v20, v21);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1BE4D28(list, v12);
  }
LABEL_19:
  if ( !v11 )
    goto LABEL_21;
  return (BoxGachaTalkEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v11,
                                       (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__);
}


BoxGachaTalkEntity_array *__fastcall BoxGachaTalkMaster__getTalkData_39913556(
        BoxGachaTalkMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  __int64 v13; // x1
  void *list; // x0
  int v15; // w22
  int32_t v16; // w23
  Il2CppObject *v17; // x24
  __int64 methodPtr_low; // x10
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4B668C2 & 1) == 0 )
  {
    sub_1BE4ACC(&BoxGachaTalkEntity_TypeInfo, ids);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Contains_int___, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo, v11);
    byte_4B668C2 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v15 = (int)list;
    v16 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v16,
               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(BoxGachaTalkEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(BoxGachaTalkEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == BoxGachaTalkEntity_TypeInfo )
        {
          list = (void *)System_Linq_Enumerable__Contains_int_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)ids,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_2F713FC *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v12 )
              break;
            items = v12->fields._items;
            v26 = Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__;
            ++v12->fields._version;
            if ( !items )
              break;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                v17,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v28[4] = (Il2CppClass *)v17;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)v17, v19, v20, v21, v22, v23, v24);
            }
          }
        }
      }
      if ( v15 == ++v16 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BE4D28(list, v13);
  }
LABEL_17:
  if ( !v12 )
    goto LABEL_19;
  return (BoxGachaTalkEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v12,
                                       (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__);
}