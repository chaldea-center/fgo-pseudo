void __fastcall CombineCostumeMaster___ctor(CombineCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2DCFC & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__, method);
    byte_4A2DCFC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    205,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__);
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
  int32_t v14; // w3
  const MethodInfo *v15; // x4
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_Int32_array *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_Int32_array *v23; // x1
  CombineCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  entity = 0LL;
  *itemIds = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)itemIds, 0, costumeId, (int32_t)itemIds);
  *itemNums = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)itemNums, 0, v13, v14);
  *qp = 0;
  v16 = CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v15);
  if ( v16 )
  {
    if ( !entity
      || (v20 = entity->fields.itemIds,
          *itemIds = v20,
          sub_1B76164((ServantStatusBattleListViewItem_o *)itemIds, (int32_t)v20, v18, v19),
          !entity)
      || (v23 = entity->fields.itemNums,
          *itemNums = v23,
          sub_1B76164((ServantStatusBattleListViewItem_o *)itemNums, (int32_t)v23, v21, v22),
          !entity) )
    {
      sub_1B7641C(v16, v17);
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

  if ( (byte_4A2DCFA & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4A2DCFA = 1;
  }
  PK = (Il2CppObject *)CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&costumeId);
  return (CombineCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_30FFAD8 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__);
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
  struct System_Int32_array *v16; // x8
  struct System_Int32_array *itemNums; // x10
  UserItemEntity_o *v19; // [xsp+8h] [xbp-48h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A2DCFD & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserItemMaster___, *(_QWORD *)&svtId);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A2DCFD = 1;
  }
  entity = 0LL;
  v19 = 0LL;
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            break;
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !SelfUserGame )
            break;
          if ( !entity )
            break;
          v16 = entity->fields.itemIds;
          if ( !v16 )
            break;
          if ( v15 >= v16->max_length )
            goto LABEL_29;
          if ( !Instance )
            break;
          Instance = (Il2CppObject *)UserItemMaster__TryGetEntity(
                                       (UserItemMaster_o *)Instance,
                                       &v19,
                                       SelfUserGame->fields.userId,
                                       v16->m_Items[v15 + 1],
                                       0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( !v19 )
            break;
          v12 = entity;
          if ( !entity )
            break;
          itemNums = entity->fields.itemNums;
          if ( !itemNums )
            break;
          if ( v15 >= itemNums->max_length )
LABEL_29:
            sub_1B76424(Instance, v11);
          if ( v19->fields.num < itemNums->m_Items[v15 + 1] )
            return 0;
          if ( (_DWORD)v14 == ++v15 )
            return SelfUserGame->fields.qp >= v12->fields.qp;
        }
LABEL_28:
        sub_1B7641C(Instance, v11);
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

  if ( (byte_4A2DCFB & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__, entity);
    byte_4A2DCFB = 1;
  }
  PK = (Il2CppObject *)CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30FFB28 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__);
}