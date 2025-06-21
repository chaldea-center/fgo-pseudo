void __fastcall SetItemMaster___ctor(SetItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CFBD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string___ctor__, method);
    byte_4B1CFBD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    121,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SetItemEntity_o *__fastcall SetItemMaster__GetEntity(
        SetItemMaster_o *this,
        int32_t id,
        int32_t purchaseType,
        int32_t targetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1CFBB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B1CFBB = 1;
  }
  PK = (Il2CppObject *)SetItemEntity__CreatePK(id, purchaseType, targetId, *(const MethodInfo **)&targetId);
  return (SetItemEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_32CC8B8 *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
SetItemEntity_array *__fastcall SetItemMaster__GetList(SetItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4B1CFBF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Count__, *(_QWORD *)&id);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SetItemEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SetItemEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SetItemEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_SetItemEntity__TypeInfo, v9);
    byte_4B1CFBF = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SetItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SetItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( LODWORD(list->fields.items) == id )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v18 = Method_System_Collections_Generic_List_SetItemEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v11;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BCB254(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (SetItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                                  v10,
                                  (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_SetItemEntity__ToArray__);
}


void __fastcall SetItemMaster__GetSum(
        SetItemMaster_o *this,
        int32_t *itemNum,
        int32_t *servantNum,
        int32_t *servantEquipNum,
        int32_t *cmdCodeNum,
        int32_t *recordNum,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *Instance; // x0
  __int64 v19; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x26
  int32_t Count; // w0
  int32_t v22; // w27
  int32_t i; // w28
  _DWORD *v24; // x29
  int v25; // w8
  bool IsServantEquip; // w0
  int32_t *v27; // x8

  if ( (byte_4B1CFBE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Count__, itemNum);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Item__, v14);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B1CFBE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___),
        !this->fields.list) )
  {
LABEL_23:
    sub_1BCB254(Instance, v19);
  }
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Count__);
  *itemNum = 0;
  *servantNum = 0;
  *servantEquipNum = 0;
  *cmdCodeNum = 0;
  *recordNum = 0;
  if ( Count >= 1 )
  {
    v22 = Count;
    for ( i = 0; v22 != i; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_23;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   i,
                   (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Item__);
      if ( Instance )
      {
        v24 = Instance;
        if ( *((_DWORD *)Instance + 4) == id )
        {
          v25 = *((_DWORD *)Instance + 5);
          if ( v25 == 19 )
          {
            *cmdCodeNum += *((_DWORD *)Instance + 7);
          }
          else
          {
            if ( v25 != 4 )
            {
              if ( v25 == 1 )
                *itemNum += *((_DWORD *)Instance + 7);
              continue;
            }
            if ( !v20 )
              goto LABEL_23;
            Instance = DataMasterBase_object__object__int___GetEntity(
                         v20,
                         *((_DWORD *)Instance + 6),
                         (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_23;
            IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
            v27 = servantEquipNum;
            if ( !IsServantEquip )
              v27 = servantNum;
            *v27 += v24[7];
          }
          ++*recordNum;
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SetItemMaster__TryGetEntity(
        SetItemMaster_o *this,
        SetItemEntity_o **entity,
        int32_t id,
        int32_t purchaseType,
        int32_t targetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1CFBC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string__TryGetEntity__, entity);
    byte_4B1CFBC = 1;
  }
  PK = (Il2CppObject *)SetItemEntity__CreatePK(id, purchaseType, targetId, *(const MethodInfo **)&purchaseType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string__TryGetEntity__);
}