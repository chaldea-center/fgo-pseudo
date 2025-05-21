void __fastcall CombineCostumeMaster___ctor(CombineCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44818 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__, method);
    byte_4B44818 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    209,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__);
}


void __fastcall CombineCostumeMaster__CheckNeedCombineInfo(
        CombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        System_Int32_array **itemIds,
        System_Int32_array **itemNums,
        int32_t *qp,
        const MethodInfo *method)
{
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x4
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Int32_array *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Int32_array *v23; // x1
  CombineCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  entity = 0LL;
  *itemIds = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)itemIds, 0, costumeId, (const MethodInfo *)itemIds);
  *itemNums = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)itemNums, 0, v13, v14);
  *qp = 0;
  v16 = CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v15);
  if ( v16 )
  {
    if ( !entity
      || (v20 = entity->fields.itemIds,
          *itemIds = v20,
          sub_1BDB81C((CGThumbnailListItem_o *)itemIds, (int32_t)v20, v18, v19),
          !entity)
      || (v23 = entity->fields.itemNums,
          *itemNums = v23,
          sub_1BDB81C((CGThumbnailListItem_o *)itemNums, (int32_t)v23, v21, v22),
          !entity) )
    {
      sub_1BDBAD4(v16, v17);
    }
    *qp = entity->fields.qp;
  }
}


// local variable allocation has failed, the output may be wrong!
CombineCostumeEntity_o *__fastcall CombineCostumeMaster__GetEntity(
        CombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B44816 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B44816 = 1;
  }
  PK = (Il2CppObject *)CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&costumeId);
  return (CombineCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_32E68F4 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineCostumeMaster__IsClearCombineCondition(
        CombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UserGameEntity_o *SelfUserGame; // x19
  const MethodInfo *v9; // x4
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  CombineCostumeEntity_o *v12; // x8
  struct System_Int32_array *itemIds; // x9
  __int64 v14; // x20
  il2cpp_array_size_t v15; // w21
  __int64 v16; // x2
  struct System_Int32_array *v17; // x8
  struct System_Int32_array *itemNums; // x10
  UserItemEntity_o *v20; // [xsp+8h] [xbp-48h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B44819 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B44819 = 1;
  }
  entity = 0LL;
  v20 = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (Il2CppObject *)CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v9);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  v12 = entity;
  if ( !entity )
    goto LABEL_28;
  itemIds = entity->fields.itemIds;
  if ( itemIds )
  {
    v14 = *(_QWORD *)&itemIds->max_length;
    if ( v14 )
    {
      if ( (int)v14 >= 1 )
      {
        v15 = 0;
        while ( 1 )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            break;
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !SelfUserGame )
            break;
          if ( !entity )
            break;
          v17 = entity->fields.itemIds;
          if ( !v17 )
            break;
          if ( v15 >= v17->max_length )
            goto LABEL_29;
          if ( !Instance )
            break;
          Instance = (Il2CppObject *)UserItemMaster__TryGetEntity(
                                       (UserItemMaster_o *)Instance,
                                       &v20,
                                       SelfUserGame->fields.userId,
                                       v17->m_Items[v15 + 1],
                                       0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( !v20 )
            break;
          v12 = entity;
          if ( !entity )
            break;
          itemNums = entity->fields.itemNums;
          if ( !itemNums )
            break;
          if ( v15 >= itemNums->max_length )
LABEL_29:
            sub_1BDBADC(Instance, v11, v16);
          if ( v20->fields.num < itemNums->m_Items[v15 + 1] )
            return 0;
          if ( (_DWORD)v14 == ++v15 )
            return SelfUserGame->fields.qp >= v12->fields.qp;
        }
LABEL_28:
        sub_1BDBAD4(Instance, v11);
      }
    }
  }
  if ( !SelfUserGame )
    goto LABEL_28;
  return SelfUserGame->fields.qp >= v12->fields.qp;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineCostumeMaster__TryGetEntity(
        CombineCostumeMaster_o *this,
        CombineCostumeEntity_o **entity,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B44817 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__, entity);
    byte_4B44817 = 1;
  }
  PK = (Il2CppObject *)CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__);
}