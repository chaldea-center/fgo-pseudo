void __fastcall CombineCostumeMaster___ctor(CombineCostumeMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15FAA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__, method, v2);
    byte_4B15FAA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    205,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string___ctor__);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)itemIds,
    0LL,
    *(int64_t *)&costumeId,
    (int32_t)itemIds,
    (System_String_o *)itemNums,
    (BattleSetupInfo_o *)qp,
    (FollowerInfo_o *)method,
    v7);
  *itemNums = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)itemNums, 0LL, v14, v15, v16, v17, v18, v19);
  *qp = 0;
  v21 = CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v20);
  if ( v21 )
  {
    if ( !entity
      || (v29 = entity->fields.itemIds,
          *itemIds = v29,
          sub_1BCA784((PartyOrganizationUtility_o *)itemIds, (int64_t)v29, v23, v24, v25, v26, v27, v28),
          !entity)
      || (v36 = entity->fields.itemNums,
          *itemNums = v36,
          sub_1BCA784((PartyOrganizationUtility_o *)itemNums, (int64_t)v36, v30, v31, v32, v33, v34, v35),
          !entity) )
    {
      sub_1BCAA3C(v21, v22);
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

  if ( (byte_4B15FA8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&costumeId);
    byte_4B15FA8 = 1;
  }
  PK = (Il2CppObject *)CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&costumeId);
  return (CombineCostumeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31B3198 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineCostumeMaster__IsClearCombineCondition(
        CombineCostumeMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UserGameEntity_o *SelfUserGame; // x19
  const MethodInfo *v10; // x4
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  CombineCostumeEntity_o *v13; // x8
  struct System_Int32_array *itemIds; // x9
  __int64 v15; // x20
  il2cpp_array_size_t v16; // w21
  struct System_Int32_array *v17; // x8
  struct System_Int32_array *itemNums; // x10
  UserItemEntity_o *v20; // [xsp+8h] [xbp-48h] BYREF
  CombineCostumeEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B15FAB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, *(_QWORD *)&svtId, *(_QWORD *)&costumeId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15FAB = 1;
  }
  entity = 0LL;
  v20 = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (Il2CppObject *)CombineCostumeMaster__TryGetEntity(this, &entity, svtId, costumeId, v10);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 1;
  v13 = entity;
  if ( !entity )
    goto LABEL_28;
  itemIds = entity->fields.itemIds;
  if ( itemIds )
  {
    v15 = *(_QWORD *)&itemIds->max_length;
    if ( v15 )
    {
      if ( (int)v15 >= 1 )
      {
        v16 = 0;
        while ( 1 )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            break;
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !SelfUserGame )
            break;
          if ( !entity )
            break;
          v17 = entity->fields.itemIds;
          if ( !v17 )
            break;
          if ( v16 >= v17->max_length )
            goto LABEL_29;
          if ( !Instance )
            break;
          Instance = (Il2CppObject *)UserItemMaster__TryGetEntity(
                                       (UserItemMaster_o *)Instance,
                                       &v20,
                                       SelfUserGame->fields.userId,
                                       v17->m_Items[v16 + 1],
                                       0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( !v20 )
            break;
          v13 = entity;
          if ( !entity )
            break;
          itemNums = entity->fields.itemNums;
          if ( !itemNums )
            break;
          if ( v16 >= itemNums->max_length )
LABEL_29:
            sub_1BCAA44(Instance, v12);
          if ( v20->fields.num < itemNums->m_Items[v16 + 1] )
            return 0;
          if ( (_DWORD)v15 == ++v16 )
            return SelfUserGame->fields.qp >= v13->fields.qp;
        }
LABEL_28:
        sub_1BCAA3C(Instance, v12);
      }
    }
  }
  if ( !SelfUserGame )
    goto LABEL_28;
  return SelfUserGame->fields.qp >= v13->fields.qp;
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

  if ( (byte_4B15FA9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B15FA9 = 1;
  }
  PK = (Il2CppObject *)CombineCostumeEntity__CreatePK(svtId, costumeId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_CombineCostumeMaster__CombineCostumeEntity__string__TryGetEntity__);
}