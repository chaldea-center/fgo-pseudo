void __fastcall BattleWarBoardInfo___ctor(BattleWarBoardInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_List_int__o *__fastcall BattleWarBoardInfo__GetBattleSquareIndividuality(
        BattleWarBoardInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_int__o *v5; // x19
  const MethodInfo *v6; // x2
  _BOOL8 BattleSquareEntity; // x0
  __int64 v8; // x1
  WarBoardSquareEntity_o *squareEntity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A012FE & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_int__AddRange__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v4);
    byte_4A012FE = 1;
  }
  squareEntity = 0LL;
  v5 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  BattleSquareEntity = BattleWarBoardInfo__TryGetBattleSquareEntity(this, &squareEntity, v6);
  if ( BattleSquareEntity )
  {
    if ( !squareEntity )
      goto LABEL_10;
    BattleSquareEntity = BasicHelper__IsNullOrEmpty(
                           (System_Collections_ICollection_o *)squareEntity->fields.individuality,
                           0LL);
    if ( !BattleSquareEntity )
    {
      if ( squareEntity && v5 )
      {
        System_Collections_Generic_List_int___AddRange(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)squareEntity->fields.individuality,
          (const MethodInfo_34929DC *)Method_System_Collections_Generic_List_int__AddRange__);
        return v5;
      }
LABEL_10:
      sub_1B64C5C(BattleSquareEntity, v8);
    }
  }
  return v5;
}


int32_t __fastcall BattleWarBoardInfo__GetPartySkillId(BattleWarBoardInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4A012FC & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_WarBoardStageMaster___, method);
    sub_1B64A00(&DataManager_TypeInfo, v3);
    sub_1B64A00(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__, v4);
    byte_4A012FC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_WarBoardStageMaster___);
  if ( !Master_object )
    sub_1B64C5C(0LL, v6);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.stageId,
             (const MethodInfo_30D6798 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v10; // x1
  struct BattleWarBoardInfo_WarBoardServantInfo_array *svtInfo; // x8
  int max_length; // w10
  int v13; // w9
  int v14; // w10
  BattleWarBoardInfo_WarBoardServantInfo_o *v15; // x11
  int32_t aftSquareIndex; // w21
  int v17; // w11
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A012FD & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_WarBoardSquareMaster___, squareEntity);
    sub_1B64A00(&Method_DataManager_GetMaster_WarBoardStageMaster___, v6);
    sub_1B64A00(&DataManager_TypeInfo, v7);
    sub_1B64A00(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__, v8);
    byte_4A012FD = 1;
  }
  entity = 0LL;
  *squareEntity = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)squareEntity, 0, (int32_t)method, v3);
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
    v13 = 0;
    v14 = -max_length;
    while ( 1 )
    {
      if ( !(v14 + v13) )
        sub_1B64C64(IsNullOrEmpty, v10);
      v15 = svtInfo->m_Items[v13];
      if ( !v15 )
        goto LABEL_24;
      aftSquareIndex = v15->fields.aftSquareIndex;
      if ( aftSquareIndex <= 0 )
      {
        v17 = v14 + v13++;
        if ( v17 != -1 )
          continue;
      }
      goto LABEL_13;
    }
  }
  aftSquareIndex = 0;
LABEL_13:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_WarBoardStageMaster___);
  if ( !IsNullOrEmpty )
LABEL_24:
    sub_1B64C5C(IsNullOrEmpty, v10);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty,
          &entity,
          this->fields.stageId,
          (const MethodInfo_30D67EC *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__TryGetEntity__) )
  {
    return 0;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_WarBoardSquareMaster___);
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