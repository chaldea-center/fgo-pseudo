void __fastcall CombineCostumeMaster___ctor(CombineCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186186 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__, method);
    byte_4186186 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    203,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__);
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
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array *v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array *v36; // x1
  CombineCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  entity = 0LL;
  *itemIds = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)itemIds,
    0LL,
    *(System_String_array ***)&costumeId,
    (System_String_array **)itemIds,
    (System_Boolean_array **)itemNums,
    (System_Int32_array **)qp,
    (System_Int32_array *)method,
    v7);
  *itemNums = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)itemNums, 0LL, v14, v15, v16, v17, v18, v19);
  *qp = 0;
  v21 = CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v20);
  if ( v21 )
  {
    if ( !entity
      || (v29 = entity->fields.itemIds,
          *itemIds = v29,
          sub_B2C2F8((BattleServantConfConponent_o *)itemIds, (System_Int32_array **)v29, v23, v24, v25, v26, v27, v28),
          !entity)
      || (v36 = entity->fields.itemNums,
          *itemNums = v36,
          sub_B2C2F8((BattleServantConfConponent_o *)itemNums, (System_Int32_array **)v36, v30, v31, v32, v33, v34, v35),
          !entity) )
    {
      sub_B2C434(v21, v22);
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

  if ( (byte_4186184 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4186184 = 1;
  }
  PK = CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&costumeId);
  return (CombineCostumeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_24E4520 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__);
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
  __int64 v11; // x1
  CombineCostumeEntity_o *v12; // x8
  struct System_Int32_array *itemIds; // x9
  __int64 v14; // x20
  __int64 v15; // x21
  struct System_Int32_array *v16; // x8
  struct System_Int32_array *itemNums; // x10
  __int64 v19; // x0
  UserItemEntity_o *v20; // [xsp+0h] [xbp-40h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4186187 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4186187 = 1;
  }
  v20 = 0LL;
  entity = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v9);
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
        v15 = 8LL;
        while ( 1 )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            break;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !SelfUserGame )
            break;
          if ( !entity )
            break;
          v16 = entity->fields.itemIds;
          if ( !v16 )
            break;
          if ( (unsigned int)(v15 - 8) >= v16->max_length )
            goto LABEL_29;
          if ( !Instance )
            break;
          Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                        (UserItemMaster_o *)Instance,
                                        &v20,
                                        SelfUserGame->fields.userId,
                                        *((_DWORD *)&v16->obj.klass + v15),
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
          if ( (unsigned int)(v15 - 8) >= itemNums->max_length )
          {
LABEL_29:
            v19 = sub_B2C460(Instance);
            sub_B2C400(v19, 0LL);
          }
          if ( v20->fields.num < *((_DWORD *)&itemNums->obj.klass + v15) )
            return 0;
          if ( (int)++v15 - 8 >= (int)v14 )
            return SelfUserGame->fields.qp >= v12->fields.qp;
        }
LABEL_28:
        sub_B2C434(Instance, v11);
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
  System_String_o *PK; // x2

  if ( (byte_4186185 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__, entity);
    byte_4186185 = 1;
  }
  PK = CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__);
}