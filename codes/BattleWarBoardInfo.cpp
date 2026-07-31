void BattleWarBoardInfo___ctor(BattleWarBoardInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_List_int__o *BattleWarBoardInfo__GetBattleSquareIndividuality(
        BattleWarBoardInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  const MethodInfo *v4; // x2
  _BOOL8 BattleSquareEntity; // x0
  __int64 v6; // x1
  WarBoardSquareEntity_o *squareEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593B5CD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_593B5CD = 1;
  }
  squareEntity = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  BattleSquareEntity = BattleWarBoardInfo__TryGetBattleSquareEntity(this, &squareEntity, v4);
  if ( BattleSquareEntity )
  {
    if ( !squareEntity )
      goto LABEL_10;
    BattleSquareEntity = BasicHelper__IsNullOrEmpty(
                           (System_Collections_ICollection_o *)squareEntity->fields.individuality,
                           0);
    if ( !BattleSquareEntity )
    {
      if ( squareEntity && v3 )
      {
        System_Collections_Generic_List_int___AddRange(
          v3,
          (System_Collections_Generic_IEnumerable_T__o *)squareEntity->fields.individuality,
          (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
        return v3;
      }
LABEL_10:
      sub_21FFECC(BattleSquareEntity, v6);
    }
  }
  return v3;
}


int32_t BattleWarBoardInfo__GetPartySkillId(BattleWarBoardInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_593B5CB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardStageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
    byte_593B5CB = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardStageMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v4);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.stageId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = HIDWORD(Entity[3].monitor);
  return (int)Entity;
}


bool BattleWarBoardInfo__TryGetBattleSquareEntity(
        BattleWarBoardInfo_o *this,
        WarBoardSquareEntity_o **squareEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v11; // x1
  struct BattleWarBoardInfo_WarBoardServantInfo_array *svtInfo; // x8
  int max_length; // w9
  int v14; // w10
  BattleWarBoardInfo_WarBoardServantInfo_o *v15; // x12
  int32_t aftSquareIndex; // w21
  __int64 v18; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593B5CC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardSquareMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardStageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__);
    byte_593B5CC = 1;
  }
  entity = 0;
  *squareEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)squareEntity, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  IsNullOrEmpty = (Il2CppObject *)BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)this->fields.svtInfo,
                                    0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return 0;
  svtInfo = this->fields.svtInfo;
  if ( !svtInfo )
    goto LABEL_25;
  max_length = svtInfo->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( max_length == v14 )
        sub_21FFED4(IsNullOrEmpty);
      v15 = svtInfo->m_Items[v14];
      if ( !v15 )
        goto LABEL_25;
      aftSquareIndex = v15->fields.aftSquareIndex;
      if ( aftSquareIndex <= 0 && (max_length & ~(max_length >> 31)) - 1 != v14++ )
        continue;
      goto LABEL_14;
    }
  }
  aftSquareIndex = 0;
LABEL_14:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
  IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardStageMaster___);
  if ( !IsNullOrEmpty )
LABEL_25:
    sub_21FFECC(IsNullOrEmpty, v11);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty,
          &entity,
          this->fields.stageId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__) )
  {
    return 0;
  }
  else
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
    IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardSquareMaster___);
    if ( !entity || !IsNullOrEmpty )
      goto LABEL_25;
    return WarBoardSquareMaster__TryGetEntity(
             (WarBoardSquareMaster_o *)IsNullOrEmpty,
             squareEntity,
             HIDWORD(entity[1].klass),
             aftSquareIndex,
             0);
  }
}


void BattleWarBoardInfo_TakeOverAiStateData___ctor(
        BattleWarBoardInfo_TakeOverAiStateData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleWarBoardInfo_TakeOverAiStateData__IsMatch(
        BattleWarBoardInfo_TakeOverAiStateData_o *this,
        int32_t firstAiId,
        const MethodInfo *method)
{
  return this->fields.firstAiGroupId == firstAiId;
}


void BattleWarBoardInfo_WarBoardMasterInfo___ctor(
        BattleWarBoardInfo_WarBoardMasterInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleWarBoardInfo_WarBoardServantInfo___ctor(
        BattleWarBoardInfo_WarBoardServantInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleWarBoardInfo_WarBoardServantInfo__IsBrokenPointInBoard(
        BattleWarBoardInfo_WarBoardServantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.defeatPoint < this->fields.afterAttackedDefeatPoint;
}