void ExRoomMissionRewardDetailDialog___ctor(
        ExRoomMissionRewardDetailDialog_o *this,
        ExRoomMissionListOutput_o *sourceMission,
        GiftEntity_o *selectedGiftEntity,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.sourceMission = sourceMission;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)sourceMission, v7, v8, v9, v10, v11, v12);
  if ( !selectedGiftEntity )
  {
    if ( sourceMission )
      selectedGiftEntity = sourceMission->fields._IconGiftEntity_k__BackingField;
    else
      selectedGiftEntity = 0;
  }
  this->fields.selectedGiftEntity = selectedGiftEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectedGiftEntity,
    (int32_t)selectedGiftEntity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


int32_t ExRoomMissionRewardDetailDialog__ResolveDetailKind(
        ExRoomMissionRewardDetailDialog_o *this,
        const MethodInfo *method)
{
  struct GiftEntity_o *selectedGiftEntity; // x20
  int32_t type; // w0
  ExRoomMissionListOutput_o *sourceMission; // x0
  __int64 v6; // x1
  ExRoomMissionListOutput_o *RewardResolvedReward; // x0
  bool v8; // zf
  int v9; // w8

  selectedGiftEntity = this->fields.selectedGiftEntity;
  if ( !selectedGiftEntity )
    goto LABEL_31;
  type = selectedGiftEntity->fields.type;
  if ( type == 2 )
  {
    sourceMission = this->fields.sourceMission;
    if ( sourceMission )
    {
      sourceMission = (ExRoomMissionListOutput_o *)ExRoomMissionListOutput__FindRewardResolvedReward(
                                                     sourceMission,
                                                     selectedGiftEntity,
                                                     0);
      if ( sourceMission )
        LODWORD(sourceMission) = sourceMission->fields._UserEventMissionEntity_k__BackingField != 0;
    }
    return (int)sourceMission;
  }
  if ( Gift__IsServant(type, 0) )
  {
    sourceMission = this->fields.sourceMission;
    if ( !sourceMission )
      return (int)sourceMission;
    sourceMission = (ExRoomMissionListOutput_o *)ExRoomMissionListOutput__FindRewardResolvedReward(
                                                   sourceMission,
                                                   this->fields.selectedGiftEntity,
                                                   0);
    if ( !sourceMission )
      return (int)sourceMission;
    if ( *(_QWORD *)&sourceMission->fields._ProgressType_k__BackingField )
    {
      RewardResolvedReward = this->fields.sourceMission;
      if ( !RewardResolvedReward
        || (RewardResolvedReward = (ExRoomMissionListOutput_o *)ExRoomMissionListOutput__FindRewardResolvedReward(
                                                                  RewardResolvedReward,
                                                                  this->fields.selectedGiftEntity,
                                                                  0)) == 0
        || (RewardResolvedReward = *(ExRoomMissionListOutput_o **)&RewardResolvedReward->fields._ProgressType_k__BackingField) == 0 )
      {
        sub_21FFECC(RewardResolvedReward, v6);
      }
      if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)RewardResolvedReward, 0) )
        LODWORD(sourceMission) = 3;
      else
        LODWORD(sourceMission) = 2;
      return (int)sourceMission;
    }
LABEL_31:
    LODWORD(sourceMission) = 0;
    return (int)sourceMission;
  }
  if ( !Gift__IsCommandCode(selectedGiftEntity->fields.type, 0) )
  {
    if ( Gift__IsCostumeRelease(selectedGiftEntity->fields.type, 0) )
    {
      sourceMission = this->fields.sourceMission;
      if ( !sourceMission )
        return (int)sourceMission;
      sourceMission = (ExRoomMissionListOutput_o *)ExRoomMissionListOutput__FindRewardResolvedReward(
                                                     sourceMission,
                                                     this->fields.selectedGiftEntity,
                                                     0);
      if ( !sourceMission )
        return (int)sourceMission;
      v8 = sourceMission->fields._RewardGiftEntities_k__BackingField == 0;
      v9 = 5;
    }
    else
    {
      if ( !Gift__IsEquip(selectedGiftEntity->fields.type, 0) )
        goto LABEL_31;
      sourceMission = this->fields.sourceMission;
      if ( !sourceMission )
        return (int)sourceMission;
      sourceMission = (ExRoomMissionListOutput_o *)ExRoomMissionListOutput__FindRewardResolvedReward(
                                                     sourceMission,
                                                     this->fields.selectedGiftEntity,
                                                     0);
      if ( !sourceMission )
        return (int)sourceMission;
      v8 = sourceMission->fields._RewardResolvedRewards_k__BackingField == 0;
      v9 = 6;
    }
    if ( v8 )
      LODWORD(sourceMission) = 0;
    else
      LODWORD(sourceMission) = v9;
    return (int)sourceMission;
  }
  sourceMission = this->fields.sourceMission;
  if ( sourceMission )
  {
    sourceMission = (ExRoomMissionListOutput_o *)ExRoomMissionListOutput__FindRewardResolvedReward(
                                                   sourceMission,
                                                   this->fields.selectedGiftEntity,
                                                   0);
    if ( sourceMission )
      LODWORD(sourceMission) = 4 * (sourceMission->fields._ConditionEntities_k__BackingField != 0);
  }
  return (int)sourceMission;
}


bool ExRoomMissionRewardDetailDialog__get_CanOpen(ExRoomMissionRewardDetailDialog_o *this, const MethodInfo *method)
{
  return ExRoomMissionRewardDetailDialog__ResolveDetailKind(this, method) != 0;
}


// attributes: thunk
int32_t ExRoomMissionRewardDetailDialog__get_DetailKind(
        ExRoomMissionRewardDetailDialog_o *this,
        const MethodInfo *method)
{
  return ExRoomMissionRewardDetailDialog__ResolveDetailKind(this, method);
}


GiftEntity_o *ExRoomMissionRewardDetailDialog__get_IconGiftEntity(
        ExRoomMissionRewardDetailDialog_o *this,
        const MethodInfo *method)
{
  return this->fields.selectedGiftEntity;
}


CommandCodeEntity_o *ExRoomMissionRewardDetailDialog__get_RewardCommandCodeEntity(
        ExRoomMissionRewardDetailDialog_o *this,
        const MethodInfo *method)
{
  CommandCodeEntity_o *result; // x0

  result = (CommandCodeEntity_o *)this->fields.sourceMission;
  if ( result )
  {
    result = (CommandCodeEntity_o *)ExRoomMissionListOutput__FindRewardResolvedReward(
                                      (ExRoomMissionListOutput_o *)result,
                                      this->fields.selectedGiftEntity,
                                      0);
    if ( result )
      return *(CommandCodeEntity_o **)&result->fields.collectionNo.fields.fakeValue;
  }
  return result;
}


EquipEntity_o *ExRoomMissionRewardDetailDialog__get_RewardEquipEntity(
        ExRoomMissionRewardDetailDialog_o *this,
        const MethodInfo *method)
{
  EquipEntity_o *result; // x0

  result = (EquipEntity_o *)this->fields.sourceMission;
  if ( result )
  {
    result = (EquipEntity_o *)ExRoomMissionListOutput__FindRewardResolvedReward(
                                (ExRoomMissionListOutput_o *)result,
                                this->fields.selectedGiftEntity,
                                0);
    if ( result )
      return *(EquipEntity_o **)&result->fields.condUserLv;
  }
  return result;
}


ItemEntity_o *ExRoomMissionRewardDetailDialog__get_RewardItemEntity(
        ExRoomMissionRewardDetailDialog_o *this,
        const MethodInfo *method)
{
  ItemEntity_o *result; // x0

  result = (ItemEntity_o *)this->fields.sourceMission;
  if ( result )
  {
    result = (ItemEntity_o *)ExRoomMissionListOutput__FindRewardResolvedReward(
                               (ExRoomMissionListOutput_o *)result,
                               this->fields.selectedGiftEntity,
                               0);
    if ( result )
      return (ItemEntity_o *)result->fields.name;
  }
  return result;
}


ServantCostumeEntity_o *ExRoomMissionRewardDetailDialog__get_RewardServantCostumeEntity(
        ExRoomMissionRewardDetailDialog_o *this,
        const MethodInfo *method)
{
  ServantCostumeEntity_o *result; // x0

  result = (ServantCostumeEntity_o *)this->fields.sourceMission;
  if ( result )
  {
    result = (ServantCostumeEntity_o *)ExRoomMissionListOutput__FindRewardResolvedReward(
                                         (ExRoomMissionListOutput_o *)result,
                                         this->fields.selectedGiftEntity,
                                         0);
    if ( result )
      return (ServantCostumeEntity_o *)result->fields.detail;
  }
  return result;
}


ServantEntity_o *ExRoomMissionRewardDetailDialog__get_RewardServantEntity(
        ExRoomMissionRewardDetailDialog_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *result; // x0

  result = (ServantEntity_o *)this->fields.sourceMission;
  if ( result )
  {
    result = (ServantEntity_o *)ExRoomMissionListOutput__FindRewardResolvedReward(
                                  (ExRoomMissionListOutput_o *)result,
                                  this->fields.selectedGiftEntity,
                                  0);
    if ( result )
      return *(ServantEntity_o **)&result->fields.baseSvtId.fields.currentCryptoKey;
  }
  return result;
}


ExRoomMissionResolvedReward_o *ExRoomMissionRewardDetailDialog__get_SelectedResolvedReward(
        ExRoomMissionRewardDetailDialog_o *this,
        const MethodInfo *method)
{
  ExRoomMissionResolvedReward_o *result; // x0

  result = (ExRoomMissionResolvedReward_o *)this->fields.sourceMission;
  if ( result )
    return ExRoomMissionListOutput__FindRewardResolvedReward(
             (ExRoomMissionListOutput_o *)result,
             this->fields.selectedGiftEntity,
             0);
  return result;
}