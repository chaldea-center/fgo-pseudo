void __fastcall BattleWarBoardInfo___ctor(BattleWarBoardInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_List_int__o *__fastcall BattleWarBoardInfo__GetBattleSquareIndividuality(
        BattleWarBoardInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_int__o *v11; // x19
  const MethodInfo *v12; // x2
  _BOOL8 BattleSquareEntity; // x0
  __int64 v14; // x1
  WarBoardSquareEntity_o *squareEntity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7DEE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v8, v9, v10);
    byte_42E7DEE = 1;
  }
  squareEntity = 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  BattleSquareEntity = BattleWarBoardInfo__TryGetBattleSquareEntity(this, &squareEntity, v12);
  if ( BattleSquareEntity )
  {
    if ( !squareEntity )
      goto LABEL_10;
    BattleSquareEntity = BasicHelper__IsNullOrEmpty(
                           (System_Collections_ICollection_o *)squareEntity->fields.individuality,
                           0LL);
    if ( !BattleSquareEntity )
    {
      if ( squareEntity && v11 )
      {
        System_Collections_Generic_List_int___AddRange(
          v11,
          (System_Collections_Generic_IEnumerable_T__o *)squareEntity->fields.individuality,
          (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
        return v11;
      }
LABEL_10:
      sub_B5D69C(BattleSquareEntity, v14);
    }
  }
  return v11;
}


int32_t __fastcall BattleWarBoardInfo__GetPartySkillId(BattleWarBoardInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_42E7DEC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardStageMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__, v8, v9, v10);
    byte_42E7DEC = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardStageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v12);
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             this->fields.stageId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  WarQuestSelectionMaster_o *IsNullOrEmpty; // x0
  __int64 v20; // x1
  struct BattleWarBoardInfo_WarBoardServantInfo_array *svtInfo; // x8
  int max_length; // w9
  int v23; // w10
  BattleWarBoardInfo_WarBoardServantInfo_o *v24; // x11
  int32_t aftSquareIndex; // w21
  __int64 v29; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7DED & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardSquareMaster___, (_DWORD)squareEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardStageMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__, v16, v17, v18);
    byte_42E7DED = 1;
  }
  entity = 0LL;
  *squareEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)squareEntity, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  IsNullOrEmpty = (WarQuestSelectionMaster_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)this->fields.svtInfo,
                                                 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return 0;
  svtInfo = this->fields.svtInfo;
  if ( !svtInfo )
    goto LABEL_26;
  max_length = svtInfo->max_length;
  if ( max_length >= 1 )
  {
    v23 = 1;
    while ( 1 )
    {
      if ( v23 - 1 >= (unsigned int)max_length )
      {
        v29 = sub_B5D6C8(IsNullOrEmpty);
        sub_B5D668(v29, 0LL);
      }
      v24 = svtInfo->m_Items[v23 - 1];
      if ( !v24 )
        goto LABEL_26;
      aftSquareIndex = v24->fields.aftSquareIndex;
      if ( aftSquareIndex <= 0 && v23++ < max_length )
        continue;
      goto LABEL_13;
    }
  }
  aftSquareIndex = 0;
LABEL_13:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNullOrEmpty = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardStageMaster___);
  if ( !IsNullOrEmpty )
LABEL_26:
    sub_B5D69C(IsNullOrEmpty, v20);
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)IsNullOrEmpty,
          &entity,
          this->fields.stageId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__) )
  {
    return 0;
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsNullOrEmpty = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardSquareMaster___);
    if ( !entity || !IsNullOrEmpty )
      goto LABEL_26;
    return WarBoardSquareMaster__TryGetEntity(
             (WarBoardSquareMaster_o *)IsNullOrEmpty,
             squareEntity,
             *(&entity->fields.id + 1),
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