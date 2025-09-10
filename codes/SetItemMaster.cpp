void SetItemMaster___ctor(SetItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27DA8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string___ctor__);
    byte_4C27DA8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    121,
    (const MethodInfo_338A52C *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SetItemEntity_o *SetItemMaster__GetEntity(
        SetItemMaster_o *this,
        int32_t id,
        int32_t purchaseType,
        int32_t targetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27DA6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string__GetEntity__);
    byte_4C27DA6 = 1;
  }
  PK = (Il2CppObject *)SetItemEntity__CreatePK(id, purchaseType, targetId, *(const MethodInfo **)&targetId);
  return (SetItemEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_338C850 *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string__GetEntity__);
}


SetItemEntity_array *SetItemMaster__GetList(SetItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C27DAA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SetItemEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SetItemEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SetItemEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_SetItemEntity__TypeInfo);
    byte_4C27DAA = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SetItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SetItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Item__);
      if ( list )
      {
        v6 = list;
        if ( LODWORD(list->fields.items) == id )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v13 = Method_System_Collections_Generic_List_SetItemEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v6;
            sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v6, v10, v11);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C2D6EC(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (SetItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_SetItemEntity__ToArray__);
}


void SetItemMaster__GetSum(
        SetItemMaster_o *this,
        int32_t *itemNum,
        int32_t *servantNum,
        int32_t *servantEquipNum,
        int32_t *cmdCodeNum,
        int32_t *recordNum,
        int32_t id,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v15; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x26
  int32_t Count; // w0
  int32_t v18; // w27
  int32_t i; // w28
  _DWORD *v20; // x29
  int v21; // w8
  bool IsServantEquip; // w0
  int32_t *v23; // x8

  if ( (byte_4C27DA9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27DA9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___),
        !this->fields.list) )
  {
LABEL_23:
    sub_1C2D6EC(Instance, v15);
  }
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Count__);
  *itemNum = 0;
  *servantNum = 0;
  *servantEquipNum = 0;
  *cmdCodeNum = 0;
  *recordNum = 0;
  if ( Count >= 1 )
  {
    v18 = Count;
    for ( i = 0; v18 != i; ++i )
    {
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_23;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   i,
                   (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_SetItemEntity__get_Item__);
      if ( Instance )
      {
        v20 = Instance;
        if ( *((_DWORD *)Instance + 4) == id )
        {
          v21 = *((_DWORD *)Instance + 5);
          if ( v21 == 19 )
          {
            *cmdCodeNum += *((_DWORD *)Instance + 7);
          }
          else
          {
            if ( v21 != 4 )
            {
              if ( v21 == 1 )
                *itemNum += *((_DWORD *)Instance + 7);
              continue;
            }
            if ( !v16 )
              goto LABEL_23;
            Instance = DataMasterBase_object__object__int___GetEntity(
                         v16,
                         *((_DWORD *)Instance + 6),
                         (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_23;
            IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0);
            v23 = servantEquipNum;
            if ( !IsServantEquip )
              v23 = servantNum;
            *v23 += v20[7];
          }
          ++*recordNum;
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool SetItemMaster__TryGetEntity(
        SetItemMaster_o *this,
        SetItemEntity_o **entity,
        int32_t id,
        int32_t purchaseType,
        int32_t targetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27DA7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string__TryGetEntity__);
    byte_4C27DA7 = 1;
  }
  PK = (Il2CppObject *)SetItemEntity__CreatePK(id, purchaseType, targetId, *(const MethodInfo **)&purchaseType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string__TryGetEntity__);
}