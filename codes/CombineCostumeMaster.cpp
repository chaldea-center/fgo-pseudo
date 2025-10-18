void CombineCostumeMaster___ctor(CombineCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C42D53 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__);
    byte_4C42D53 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    209,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__);
}


void CombineCostumeMaster__CheckNeedCombineInfo(
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Int32_array *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Int32_array *v22; // x1
  CombineCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  entity = 0;
  *itemIds = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)itemIds, 0, costumeId, (const MethodInfo *)itemIds);
  *itemNums = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)itemNums, 0, v13, v14);
  *qp = 0;
  v16 = CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v15);
  if ( v16 )
  {
    if ( !entity
      || (v19 = entity->fields.itemIds,
          *itemIds = v19,
          sub_1C36FFC((CGThumbnailListItem_o *)itemIds, (int32_t)v19, v17, v18),
          !entity)
      || (v22 = entity->fields.itemNums,
          *itemNums = v22,
          sub_1C36FFC((CGThumbnailListItem_o *)itemNums, (int32_t)v22, v20, v21),
          !entity) )
    {
      sub_1C372B4(v16);
    }
    *qp = entity->fields.qp;
  }
}


// local variable allocation has failed, the output may be wrong!
CombineCostumeEntity_o *CombineCostumeMaster__GetEntity(
        CombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C42D51 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__);
    byte_4C42D51 = 1;
  }
  PK = (Il2CppObject *)CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&costumeId);
  return (CombineCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_33A5B58 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__);
}


bool CombineCostumeMaster__IsClearCombineCondition(
        CombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x19
  const MethodInfo *v8; // x4
  Il2CppObject *Instance; // x0
  CombineCostumeEntity_o *v10; // x8
  struct System_Int32_array *itemIds; // x9
  il2cpp_array_size_t max_length; // x20
  unsigned int v13; // w21
  struct System_Int32_array *v14; // x8
  struct System_Int32_array *itemNums; // x10
  UserItemEntity_o *v17; // [xsp+8h] [xbp-48h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C42D54 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42D54 = 1;
  }
  entity = 0;
  v17 = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (Il2CppObject *)CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v8);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  v10 = entity;
  if ( !entity )
    goto LABEL_28;
  itemIds = entity->fields.itemIds;
  if ( itemIds )
  {
    max_length = itemIds->max_length;
    if ( max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v13 = 0;
        while ( 1 )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            break;
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !SelfUserGame )
            break;
          if ( !entity )
            break;
          v14 = entity->fields.itemIds;
          if ( !v14 )
            break;
          if ( v13 >= LODWORD(v14->max_length) )
            goto LABEL_29;
          if ( !Instance )
            break;
          Instance = (Il2CppObject *)UserItemMaster__TryGetEntity(
                                       (UserItemMaster_o *)Instance,
                                       &v17,
                                       SelfUserGame->fields.userId,
                                       v14->m_Items[v13],
                                       0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( !v17 )
            break;
          v10 = entity;
          if ( !entity )
            break;
          itemNums = entity->fields.itemNums;
          if ( !itemNums )
            break;
          if ( v13 >= LODWORD(itemNums->max_length) )
LABEL_29:
            sub_1C372BC(Instance);
          if ( v17->fields.num < itemNums->m_Items[v13] )
            return 0;
          if ( (_DWORD)max_length == ++v13 )
            return SelfUserGame->fields.qp >= v10->fields.qp;
        }
LABEL_28:
        sub_1C372B4(Instance);
      }
    }
  }
  if ( !SelfUserGame )
    goto LABEL_28;
  return SelfUserGame->fields.qp >= v10->fields.qp;
}


// local variable allocation has failed, the output may be wrong!
bool CombineCostumeMaster__TryGetEntity(
        CombineCostumeMaster_o *this,
        CombineCostumeEntity_o **entity,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C42D52 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__);
    byte_4C42D52 = 1;
  }
  PK = (Il2CppObject *)CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__);
}