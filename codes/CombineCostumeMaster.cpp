void CombineCostumeMaster___ctor(CombineCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938413 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__);
    byte_5938413 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    211,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void CombineCostumeMaster__CheckNeedCombineInfo(
        CombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        System_Int32_array **itemIds,
        System_Int32_array **itemNums,
        int32_t *qp,
        const MethodInfo *method)
{
  bool v7; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x4
  _BOOL8 v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Int32_array *v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Int32_array *v36; // x1
  CombineCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  entity = 0;
  *itemIds = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)itemIds,
    0,
    *(System_String_o **)&costumeId,
    (System_String_o *)itemIds,
    (int32_t)itemNums,
    (int32_t)qp,
    (bool)method,
    v7);
  *itemNums = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)itemNums, 0, v14, v15, v16, v17, v18, v19);
  *qp = 0;
  v21 = CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v20);
  if ( v21 )
  {
    if ( !entity
      || (v29 = entity->fields.itemIds,
          *itemIds = v29,
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)itemIds, (int32_t)v29, v23, v24, v25, v26, v27, v28),
          !entity)
      || (v36 = entity->fields.itemNums,
          *itemNums = v36,
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)itemNums, (int32_t)v36, v30, v31, v32, v33, v34, v35),
          !entity) )
    {
      sub_21FFECC(v21, v22);
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

  if ( (byte_5938411 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__);
    byte_5938411 = 1;
  }
  PK = (Il2CppObject *)CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&costumeId);
  return (CombineCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3EE2044 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__);
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
  __int64 v14; // x23
  struct System_Int32_array *v15; // x8
  struct System_Int32_array *itemNums; // x10
  UserItemEntity_o *v18; // [xsp+0h] [xbp-40h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5938414 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938414 = 1;
  }
  v18 = 0;
  entity = 0;
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            break;
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !SelfUserGame )
            break;
          if ( !entity )
            break;
          v15 = entity->fields.itemIds;
          if ( !v15 )
            break;
          if ( (unsigned int)v14 >= LODWORD(v15->max_length) )
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
          if ( (unsigned int)v14 >= LODWORD(itemNums->max_length) )
LABEL_29:
            sub_21FFED4(Instance);
          if ( v18->fields.num < itemNums->m_Items[v14] )
            return 0;
          if ( (_DWORD)max_length == (_DWORD)++v14 )
            return SelfUserGame->fields.qp >= v11->fields.qp;
        }
LABEL_28:
        sub_21FFECC(Instance, v10);
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

  if ( (byte_5938412 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__);
    byte_5938412 = 1;
  }
  PK = (Il2CppObject *)CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__);
}