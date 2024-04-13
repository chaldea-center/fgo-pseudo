void __fastcall CombineCostumeMaster___ctor(CombineCostumeMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8DAB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E8DAB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    204,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)itemIds,
    0LL,
    *(System_String_array ***)&costumeId,
    (System_String_array **)itemIds,
    (System_Boolean_array **)itemNums,
    (System_Int32_array **)qp,
    (System_Int32_array *)method,
    v7);
  *itemNums = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)itemNums, 0LL, v14, v15, v16, v17, v18, v19);
  *qp = 0;
  v21 = CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v20);
  if ( v21 )
  {
    if ( !entity
      || (v29 = entity->fields.itemIds,
          *itemIds = v29,
          sub_B5D560((BattleServantConfConponent_o *)itemIds, (System_Int32_array **)v29, v23, v24, v25, v26, v27, v28),
          !entity)
      || (v36 = entity->fields.itemNums,
          *itemNums = v36,
          sub_B5D560((BattleServantConfConponent_o *)itemNums, (System_Int32_array **)v36, v30, v31, v32, v33, v34, v35),
          !entity) )
    {
      sub_B5D69C(v21, v22);
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

  if ( (byte_42E8DA9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__,
      svtId,
      costumeId,
      method);
    byte_42E8DA9 = 1;
  }
  PK = CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&costumeId);
  return (CombineCostumeEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23FB260 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__);
}


bool __fastcall CombineCostumeMaster__IsClearCombineCondition(
        CombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UserGameEntity_o *SelfUserGame; // x19
  const MethodInfo *v11; // x4
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  CombineCostumeEntity_o *v14; // x8
  struct System_Int32_array *itemIds; // x9
  __int64 v16; // x20
  __int64 v17; // x21
  struct System_Int32_array *v18; // x8
  struct System_Int32_array *itemNums; // x10
  __int64 v21; // x0
  UserItemEntity_o *v22; // [xsp+0h] [xbp-40h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8DAC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, svtId, costumeId, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42E8DAC = 1;
  }
  v22 = 0LL;
  entity = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v11);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  v14 = entity;
  if ( !entity )
    goto LABEL_28;
  itemIds = entity->fields.itemIds;
  if ( itemIds )
  {
    v16 = *(_QWORD *)&itemIds->max_length;
    if ( v16 )
    {
      if ( (int)v16 >= 1 )
      {
        v17 = 8LL;
        while ( 1 )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            break;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !SelfUserGame )
            break;
          if ( !entity )
            break;
          v18 = entity->fields.itemIds;
          if ( !v18 )
            break;
          if ( (unsigned int)(v17 - 8) >= v18->max_length )
            goto LABEL_29;
          if ( !Instance )
            break;
          Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                        (UserItemMaster_o *)Instance,
                                        &v22,
                                        SelfUserGame->fields.userId,
                                        *((_DWORD *)&v18->obj.klass + v17),
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( !v22 )
            break;
          v14 = entity;
          if ( !entity )
            break;
          itemNums = entity->fields.itemNums;
          if ( !itemNums )
            break;
          if ( (unsigned int)(v17 - 8) >= itemNums->max_length )
          {
LABEL_29:
            v21 = sub_B5D6C8(Instance);
            sub_B5D668(v21, 0LL);
          }
          if ( v22->fields.num < *((_DWORD *)&itemNums->obj.klass + v17) )
            return 0;
          if ( (int)++v17 - 8 >= (int)v16 )
            return SelfUserGame->fields.qp >= v14->fields.qp;
        }
LABEL_28:
        sub_B5D69C(Instance, v13);
      }
    }
  }
  if ( !SelfUserGame )
    goto LABEL_28;
  return SelfUserGame->fields.qp >= v14->fields.qp;
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

  if ( (byte_42E8DAA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&costumeId);
    byte_42E8DAA = 1;
  }
  PK = CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__);
}