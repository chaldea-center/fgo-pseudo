void __fastcall CombineCostumeMaster___ctor(CombineCostumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4485 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__, method);
    byte_4BB4485 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    209,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__);
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
  PartyListViewItem_o *v7; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x4
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Int32_array *v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Int32_array *v36; // x1
  CombineCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  entity = 0LL;
  *itemIds = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)itemIds,
    0LL,
    *(int64_t *)&costumeId,
    (int32_t)itemIds,
    (System_String_o *)itemNums,
    (BattleSetupInfo_o *)qp,
    (FollowerInfo_o *)method,
    v7);
  *itemNums = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)itemNums, 0LL, v14, v15, v16, v17, v18, v19);
  *qp = 0;
  v21 = CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v20);
  if ( v21 )
  {
    if ( !entity
      || (v29 = entity->fields.itemIds,
          *itemIds = v29,
          sub_1C13CC8((PartyOrganizationUtility_o *)itemIds, (int64_t)v29, v23, v24, v25, v26, v27, v28),
          !entity)
      || (v36 = entity->fields.itemNums,
          *itemNums = v36,
          sub_1C13CC8((PartyOrganizationUtility_o *)itemNums, (int64_t)v36, v30, v31, v32, v33, v34, v35),
          !entity) )
    {
      sub_1C13F80(v21, v22);
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

  if ( (byte_4BB4483 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4BB4483 = 1;
  }
  PK = (Il2CppObject *)CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&costumeId);
  return (CombineCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_323D0DC *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__);
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

  if ( (byte_4BB4486 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserItemMaster___, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BB4486 = 1;
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            break;
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
            sub_1C13F88(Instance, v11);
          if ( v19->fields.num < itemNums->m_Items[v15 + 1] )
            return 0;
          if ( (_DWORD)v14 == ++v15 )
            return SelfUserGame->fields.qp >= v12->fields.qp;
        }
LABEL_28:
        sub_1C13F80(Instance, v11);
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

  if ( (byte_4BB4484 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__, entity);
    byte_4BB4484 = 1;
  }
  PK = (Il2CppObject *)CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__);
}