void CombineCostumeMaster___ctor(CombineCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D3078F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__);
    byte_4D3078F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    209,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__);
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
  System_String_o *v7; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x4
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Int32_array *v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Int32_array *v36; // x1
  CombineCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  entity = 0;
  *itemIds = 0;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)itemIds,
    0,
    costumeId,
    (int32_t)itemIds,
    (System_String_o *)itemNums,
    (int32_t)qp,
    (int64_t)method,
    v7);
  *itemNums = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)itemNums, 0, v14, v15, v16, v17, v18, v19);
  *qp = 0;
  v21 = CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v20);
  if ( v21 )
  {
    if ( !entity
      || (v29 = entity->fields.itemIds,
          *itemIds = v29,
          sub_1C93A78((GrandQuestFolderBoardItem_o *)itemIds, (int32_t)v29, v23, v24, v25, v26, v27, v28),
          !entity)
      || (v36 = entity->fields.itemNums,
          *itemNums = v36,
          sub_1C93A78((GrandQuestFolderBoardItem_o *)itemNums, (int32_t)v36, v30, v31, v32, v33, v34, v35),
          !entity) )
    {
      sub_1C93D2C(v21, v22);
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

  if ( (byte_4D3078D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__);
    byte_4D3078D = 1;
  }
  PK = (Il2CppObject *)CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&costumeId);
  return (CombineCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_34681D4 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__);
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
  __int64 v10; // x1
  CombineCostumeEntity_o *v11; // x8
  struct System_Int32_array *itemIds; // x9
  il2cpp_array_size_t max_length; // x20
  unsigned int v14; // w21
  struct System_Int32_array *v15; // x8
  struct System_Int32_array *itemNums; // x10
  UserItemEntity_o *v18; // [xsp+8h] [xbp-48h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D30790 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30790 = 1;
  }
  entity = 0;
  v18 = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (Il2CppObject *)CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v8);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  v11 = entity;
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
        v14 = 0;
        while ( 1 )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            break;
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !SelfUserGame )
            break;
          if ( !entity )
            break;
          v15 = entity->fields.itemIds;
          if ( !v15 )
            break;
          if ( v14 >= LODWORD(v15->max_length) )
            goto LABEL_29;
          if ( !Instance )
            break;
          Instance = (Il2CppObject *)UserItemMaster__TryGetEntity(
                                       (UserItemMaster_o *)Instance,
                                       &v18,
                                       SelfUserGame->fields.userId,
                                       v15->m_Items[v14],
                                       0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( !v18 )
            break;
          v11 = entity;
          if ( !entity )
            break;
          itemNums = entity->fields.itemNums;
          if ( !itemNums )
            break;
          if ( v14 >= LODWORD(itemNums->max_length) )
LABEL_29:
            sub_1C93D34(Instance);
          if ( v18->fields.num < itemNums->m_Items[v14] )
            return 0;
          if ( (_DWORD)max_length == ++v14 )
            return SelfUserGame->fields.qp >= v11->fields.qp;
        }
LABEL_28:
        sub_1C93D2C(Instance, v10);
      }
    }
  }
  if ( !SelfUserGame )
    goto LABEL_28;
  return SelfUserGame->fields.qp >= v11->fields.qp;
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

  if ( (byte_4D3078E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__);
    byte_4D3078E = 1;
  }
  PK = (Il2CppObject *)CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__);
}