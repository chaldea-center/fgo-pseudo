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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x19
  const MethodInfo *v9; // x2
  WarBoardSquareEntity_o *squareEntity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F901E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_40F901E = 1;
  }
  squareEntity = 0LL;
  v8 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( BattleWarBoardInfo__TryGetBattleSquareEntity(this, &squareEntity, v9) )
  {
    if ( !squareEntity )
      goto LABEL_10;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)squareEntity->fields.individuality, 0LL) )
    {
      if ( squareEntity && v8 )
      {
        System_Collections_Generic_List_int___AddRange(
          v8,
          (System_Collections_Generic_IEnumerable_T__o *)squareEntity->fields.individuality,
          (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
        return v8;
      }
LABEL_10:
      sub_B170D4();
    }
  }
  return v8;
}


int32_t __fastcall BattleWarBoardInfo__GetPartySkillId(BattleWarBoardInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40F901C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardStageMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__, v4);
    byte_40F901C = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardStageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             this->fields.stageId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = Entity->fields.materialParentWarId;
  return (int)Entity;
}


bool __fastcall BattleWarBoardInfo__TryGetBattleSquareEntity(
        BattleWarBoardInfo_o *this,
        WarBoardSquareEntity_o **squareEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct BattleWarBoardInfo_WarBoardServantInfo_array *svtInfo; // x8
  int max_length; // w9
  int v18; // w10
  BattleWarBoardInfo_WarBoardServantInfo_o *v19; // x11
  int32_t aftSquareIndex; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarBoardSquareMaster_o *v23; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F901D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardSquareMaster___, squareEntity);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardStageMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__, v12);
    byte_40F901D = 1;
  }
  entity = 0LL;
  *squareEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)squareEntity, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.svtInfo, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  svtInfo = this->fields.svtInfo;
  if ( !svtInfo )
    goto LABEL_26;
  max_length = svtInfo->max_length;
  if ( max_length >= 1 )
  {
    v18 = 1;
    while ( 1 )
    {
      if ( v18 - 1 >= (unsigned int)max_length )
      {
        sub_B17100(IsNullOrEmpty, v14, v15);
        sub_B170A0();
      }
      v19 = svtInfo->m_Items[v18 - 1];
      if ( !v19 )
        goto LABEL_26;
      aftSquareIndex = v19->fields.aftSquareIndex;
      if ( aftSquareIndex <= 0 && v18++ < max_length )
        continue;
      goto LABEL_13;
    }
  }
  aftSquareIndex = 0;
LABEL_13:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardStageMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_26:
    sub_B170D4();
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields.stageId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__) )
  {
    return 0;
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v23 = (WarBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardSquareMaster___);
    if ( !entity || !v23 )
      goto LABEL_26;
    return WarBoardSquareMaster__TryGetEntity(v23, squareEntity, *(&entity->fields.id + 1), aftSquareIndex, 0LL);
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