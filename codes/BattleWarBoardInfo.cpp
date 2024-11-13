void __fastcall BattleWarBoardInfo___ctor(BattleWarBoardInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_List_int__o *__fastcall BattleWarBoardInfo__GetBattleSquareIndividuality(
        BattleWarBoardInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_int__o *v9; // x19
  const MethodInfo *v10; // x2
  _BOOL8 BattleSquareEntity; // x0
  __int64 v12; // x1
  WarBoardSquareEntity_o *squareEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18A95 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v7, v8);
    byte_4B18A95 = 1;
  }
  squareEntity = 0LL;
  v9 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  BattleSquareEntity = BattleWarBoardInfo__TryGetBattleSquareEntity(this, &squareEntity, v10);
  if ( BattleSquareEntity )
  {
    if ( !squareEntity )
      goto LABEL_10;
    BattleSquareEntity = BasicHelper__IsNullOrEmpty(
                           (System_Collections_ICollection_o *)squareEntity->fields.individuality,
                           0LL);
    if ( !BattleSquareEntity )
    {
      if ( squareEntity && v9 )
      {
        System_Collections_Generic_List_int___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)squareEntity->fields.individuality,
          (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
        return v9;
      }
LABEL_10:
      sub_1BCAA3C(BattleSquareEntity, v12);
    }
  }
  return v9;
}


int32_t __fastcall BattleWarBoardInfo__GetPartySkillId(BattleWarBoardInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B18A93 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardStageMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__, v6, v7);
    byte_4B18A93 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardStageMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v9);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.stageId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = HIDWORD(Entity[3].monitor);
  return (int)Entity;
}


bool __fastcall BattleWarBoardInfo__TryGetBattleSquareEntity(
        BattleWarBoardInfo_o *this,
        WarBoardSquareEntity_o **squareEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v17; // x1
  struct BattleWarBoardInfo_WarBoardServantInfo_array *svtInfo; // x8
  int max_length; // w10
  int v20; // w9
  int v21; // w10
  BattleWarBoardInfo_WarBoardServantInfo_o *v22; // x11
  int32_t aftSquareIndex; // w21
  int v24; // w11
  __int64 v25; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18A94 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardSquareMaster___, squareEntity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardStageMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__, v14, v15);
    byte_4B18A94 = 1;
  }
  entity = 0LL;
  *squareEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)squareEntity, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  IsNullOrEmpty = (Il2CppObject *)BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)this->fields.svtInfo,
                                    0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return 0;
  svtInfo = this->fields.svtInfo;
  if ( !svtInfo )
    goto LABEL_24;
  max_length = svtInfo->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    v21 = -max_length;
    while ( 1 )
    {
      if ( !(v21 + v20) )
        sub_1BCAA44(IsNullOrEmpty, v17);
      v22 = svtInfo->m_Items[v20];
      if ( !v22 )
        goto LABEL_24;
      aftSquareIndex = v22->fields.aftSquareIndex;
      if ( aftSquareIndex <= 0 )
      {
        v24 = v21 + v20++;
        if ( v24 != -1 )
          continue;
      }
      goto LABEL_13;
    }
  }
  aftSquareIndex = 0;
LABEL_13:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardStageMaster___);
  if ( !IsNullOrEmpty )
LABEL_24:
    sub_1BCAA3C(IsNullOrEmpty, v17);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty,
          &entity,
          this->fields.stageId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__) )
  {
    return 0;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
    IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardSquareMaster___);
    if ( !entity || !IsNullOrEmpty )
      goto LABEL_24;
    return WarBoardSquareMaster__TryGetEntity(
             (WarBoardSquareMaster_o *)IsNullOrEmpty,
             squareEntity,
             HIDWORD(entity[1].klass),
             aftSquareIndex,
             0LL);
  }
}


void __fastcall BattleWarBoardInfo_TakeOverAiStateData___ctor(
        BattleWarBoardInfo_TakeOverAiStateData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleWarBoardInfo_TakeOverAiStateData__IsMatch(
        BattleWarBoardInfo_TakeOverAiStateData_o *this,
        int32_t firstAiId,
        const MethodInfo *method)
{
  return this->fields.firstAiGroupId == firstAiId;
}


void __fastcall BattleWarBoardInfo_WarBoardMasterInfo___ctor(
        BattleWarBoardInfo_WarBoardMasterInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleWarBoardInfo_WarBoardServantInfo___ctor(
        BattleWarBoardInfo_WarBoardServantInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleWarBoardInfo_WarBoardServantInfo__IsBrokenPointInBoard(
        BattleWarBoardInfo_WarBoardServantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.defeatPoint < this->fields.afterAttackedDefeatPoint;
}