void __fastcall CombineCostumeMaster___ctor(CombineCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421442A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__, method);
    byte_421442A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    203,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCostumeMaster__CheckNeedCombineInfo(
        CombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        System_Int32_array **itemIds,
        System_Int32_array **itemNums,
        int32_t *qp,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x4
  _BOOL8 v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array *v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array *v35; // x1
  CombineCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  entity = 0LL;
  *itemIds = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)itemIds,
    0LL,
    *(System_String_array ***)&costumeId,
    (System_String_array **)itemIds,
    (System_Boolean_array **)itemNums,
    (System_Int32_array **)qp,
    (System_Int32_array *)method,
    v7);
  *itemNums = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)itemNums, 0LL, v14, v15, v16, v17, v18, v19);
  *qp = 0;
  v21 = CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v20);
  if ( v21 )
  {
    if ( !entity
      || (v28 = entity->fields.itemIds,
          *itemIds = v28,
          sub_B0D840((BattleServantConfConponent_o *)itemIds, (System_Int32_array **)v28, v22, v23, v24, v25, v26, v27),
          !entity)
      || (v35 = entity->fields.itemNums,
          *itemNums = v35,
          sub_B0D840((BattleServantConfConponent_o *)itemNums, (System_Int32_array **)v35, v29, v30, v31, v32, v33, v34),
          !entity) )
    {
      sub_B0D97C(v21);
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
  System_String_o *PK; // x1

  if ( (byte_4214428 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4214428 = 1;
  }
  PK = CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&costumeId);
  return (CombineCostumeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_266A024 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__);
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
  DataManager_o *Instance; // x0
  CombineCostumeEntity_o *v11; // x8
  struct System_Int32_array *itemIds; // x9
  __int64 v13; // x20
  __int64 v14; // x21
  struct System_Int32_array *v15; // x8
  struct System_Int32_array *itemNums; // x10
  __int64 v18; // x0
  UserItemEntity_o *v19; // [xsp+0h] [xbp-40h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421442B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_421442B = 1;
  }
  v19 = 0LL;
  entity = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v9);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  v11 = entity;
  if ( !entity )
    goto LABEL_28;
  itemIds = entity->fields.itemIds;
  if ( itemIds )
  {
    v13 = *(_QWORD *)&itemIds->max_length;
    if ( v13 )
    {
      if ( (int)v13 >= 1 )
      {
        v14 = 8LL;
        while ( 1 )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            break;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !SelfUserGame )
            break;
          if ( !entity )
            break;
          v15 = entity->fields.itemIds;
          if ( !v15 )
            break;
          if ( (unsigned int)(v14 - 8) >= v15->max_length )
            goto LABEL_29;
          if ( !Instance )
            break;
          Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                        (UserItemMaster_o *)Instance,
                                        &v19,
                                        SelfUserGame->fields.userId,
                                        *((_DWORD *)&v15->obj.klass + v14),
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( !v19 )
            break;
          v11 = entity;
          if ( !entity )
            break;
          itemNums = entity->fields.itemNums;
          if ( !itemNums )
            break;
          if ( (unsigned int)(v14 - 8) >= itemNums->max_length )
          {
LABEL_29:
            v18 = sub_B0D9A8(Instance);
            sub_B0D948(v18, 0LL);
          }
          if ( v19->fields.num < *((_DWORD *)&itemNums->obj.klass + v14) )
            return 0;
          if ( (int)++v14 - 8 >= (int)v13 )
            return SelfUserGame->fields.qp >= v11->fields.qp;
        }
LABEL_28:
        sub_B0D97C(Instance);
      }
    }
  }
  if ( !SelfUserGame )
    goto LABEL_28;
  return SelfUserGame->fields.qp >= v11->fields.qp;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineCostumeMaster__TryGetEntity(
        CombineCostumeMaster_o *this,
        CombineCostumeEntity_o **entity,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4214429 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__, entity);
    byte_4214429 = 1;
  }
  PK = CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__);
}