void ExRoomMissionResolvedReward___ctor(
        ExRoomMissionResolvedReward_o *this,
        GiftEntity_o *rewardGiftEntity,
        ItemEntity_o *rewardItemEntity,
        ServantEntity_o *rewardServantEntity,
        CommandCodeEntity_o *rewardCommandCodeEntity,
        ServantCostumeEntity_o *rewardServantCostumeEntity,
        EquipEntity_o *rewardEquipEntity,
        const MethodInfo *method)
{
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._RewardGiftEntity_k__BackingField = rewardGiftEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)rewardGiftEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields._RewardItemEntity_k__BackingField = rewardItemEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardItemEntity_k__BackingField,
    (int32_t)rewardItemEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields._RewardServantEntity_k__BackingField = rewardServantEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardServantEntity_k__BackingField,
    (int32_t)rewardServantEntity,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields._RewardCommandCodeEntity_k__BackingField = rewardCommandCodeEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardCommandCodeEntity_k__BackingField,
    (int32_t)rewardCommandCodeEntity,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields._RewardServantCostumeEntity_k__BackingField = rewardServantCostumeEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardServantCostumeEntity_k__BackingField,
    (int32_t)rewardServantCostumeEntity,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields._RewardEquipEntity_k__BackingField = rewardEquipEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardEquipEntity_k__BackingField,
    (int32_t)rewardEquipEntity,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
}


CommandCodeEntity_o *ExRoomMissionResolvedReward__get_RewardCommandCodeEntity(
        ExRoomMissionResolvedReward_o *this,
        const MethodInfo *method)
{
  return this->fields._RewardCommandCodeEntity_k__BackingField;
}


EquipEntity_o *ExRoomMissionResolvedReward__get_RewardEquipEntity(
        ExRoomMissionResolvedReward_o *this,
        const MethodInfo *method)
{
  return this->fields._RewardEquipEntity_k__BackingField;
}


GiftEntity_o *ExRoomMissionResolvedReward__get_RewardGiftEntity(
        ExRoomMissionResolvedReward_o *this,
        const MethodInfo *method)
{
  return this->fields._RewardGiftEntity_k__BackingField;
}


ItemEntity_o *ExRoomMissionResolvedReward__get_RewardItemEntity(
        ExRoomMissionResolvedReward_o *this,
        const MethodInfo *method)
{
  return this->fields._RewardItemEntity_k__BackingField;
}


ServantCostumeEntity_o *ExRoomMissionResolvedReward__get_RewardServantCostumeEntity(
        ExRoomMissionResolvedReward_o *this,
        const MethodInfo *method)
{
  return this->fields._RewardServantCostumeEntity_k__BackingField;
}


ServantEntity_o *ExRoomMissionResolvedReward__get_RewardServantEntity(
        ExRoomMissionResolvedReward_o *this,
        const MethodInfo *method)
{
  return this->fields._RewardServantEntity_k__BackingField;
}


void ExRoomMissionResolvedReward__set_RewardCommandCodeEntity(
        ExRoomMissionResolvedReward_o *this,
        CommandCodeEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RewardCommandCodeEntity_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardCommandCodeEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionResolvedReward__set_RewardEquipEntity(
        ExRoomMissionResolvedReward_o *this,
        EquipEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RewardEquipEntity_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardEquipEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionResolvedReward__set_RewardGiftEntity(
        ExRoomMissionResolvedReward_o *this,
        GiftEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RewardGiftEntity_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionResolvedReward__set_RewardItemEntity(
        ExRoomMissionResolvedReward_o *this,
        ItemEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RewardItemEntity_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardItemEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionResolvedReward__set_RewardServantCostumeEntity(
        ExRoomMissionResolvedReward_o *this,
        ServantCostumeEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RewardServantCostumeEntity_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardServantCostumeEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionResolvedReward__set_RewardServantEntity(
        ExRoomMissionResolvedReward_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RewardServantEntity_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardServantEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}