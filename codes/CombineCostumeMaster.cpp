void __fastcall CombineCostumeMaster___ctor(CombineCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F98C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__, method);
    byte_40F98C5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    203,
    (const MethodInfo_266F73C *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__);
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array *v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array *v34; // x1
  CombineCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  entity = 0LL;
  *itemIds = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)itemIds,
    0LL,
    *(System_String_array ***)&costumeId,
    (System_String_array **)itemIds,
    (System_Boolean_array **)itemNums,
    (System_Int32_array **)qp,
    (System_Int32_array *)method,
    v7);
  *itemNums = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)itemNums, 0LL, v14, v15, v16, v17, v18, v19);
  *qp = 0;
  if ( CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v20) )
  {
    if ( !entity
      || (v27 = entity->fields.itemIds,
          *itemIds = v27,
          sub_B16F98((BattleServantConfConponent_o *)itemIds, (System_Int32_array **)v27, v21, v22, v23, v24, v25, v26),
          !entity)
      || (v34 = entity->fields.itemNums,
          *itemNums = v34,
          sub_B16F98((BattleServantConfConponent_o *)itemNums, (System_Int32_array **)v34, v28, v29, v30, v31, v32, v33),
          !entity) )
    {
      sub_B170D4();
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

  if ( (byte_40F98C3 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_40F98C3 = 1;
  }
  PK = CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&costumeId);
  return (CombineCostumeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_266F7D8 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__);
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
  CombineCostumeEntity_o *v10; // x8
  struct System_Int32_array *itemIds; // x9
  __int64 v12; // x20
  __int64 v13; // x21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Int32_array *v18; // x8
  struct System_Int32_array *itemNums; // x10
  UserItemEntity_o *v21; // [xsp+0h] [xbp-40h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F98C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F98C6 = 1;
  }
  v21 = 0LL;
  entity = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v9) )
    return 1;
  v10 = entity;
  if ( !entity )
    goto LABEL_28;
  itemIds = entity->fields.itemIds;
  if ( itemIds )
  {
    v12 = *(_QWORD *)&itemIds->max_length;
    if ( v12 )
    {
      if ( (int)v12 >= 1 )
      {
        v13 = 8LL;
        while ( 1 )
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            break;
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !SelfUserGame )
            break;
          if ( !entity )
            break;
          v18 = entity->fields.itemIds;
          if ( !v18 )
            break;
          if ( (unsigned int)(v13 - 8) >= v18->max_length )
            goto LABEL_29;
          if ( !MasterData_WarQuestSelectionMaster )
            break;
          MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)UserItemMaster__TryGetEntity(
                                                                              (UserItemMaster_o *)MasterData_WarQuestSelectionMaster,
                                                                              &v21,
                                                                              SelfUserGame->fields.userId,
                                                                              *((_DWORD *)&v18->obj.klass + v13),
                                                                              0LL);
          if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) == 0 )
            return 0;
          if ( !v21 )
            break;
          v10 = entity;
          if ( !entity )
            break;
          itemNums = entity->fields.itemNums;
          if ( !itemNums )
            break;
          if ( (unsigned int)(v13 - 8) >= itemNums->max_length )
          {
LABEL_29:
            sub_B17100(MasterData_WarQuestSelectionMaster, v16, v17);
            sub_B170A0();
          }
          if ( v21->fields.num < *((_DWORD *)&itemNums->obj.klass + v13) )
            return 0;
          if ( (int)++v13 - 8 >= (int)v12 )
            return SelfUserGame->fields.qp >= v10->fields.qp;
        }
LABEL_28:
        sub_B170D4();
      }
    }
  }
  if ( !SelfUserGame )
    goto LABEL_28;
  return SelfUserGame->fields.qp >= v10->fields.qp;
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

  if ( (byte_40F98C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__, entity);
    byte_40F98C4 = 1;
  }
  PK = CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__);
}