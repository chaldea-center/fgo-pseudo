void ExRoomMissionReceiveConfirmDialogItem___ctor(
        ExRoomMissionReceiveConfirmDialogItem_o *this,
        ExRoomMissionListOutput_o *missionOutput,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1
  struct System_String_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  struct System_String_array *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.exRoomMissionListOutput = missionOutput;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)missionOutput, v5, v6, v7, v8, v9, v10);
  v12 = ExRoomMissionReceiveConfirmDialogItem__BuildRewardDisplayNames(this, v11);
  this->fields._RewardDisplayNames_k__BackingField = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardDisplayNames_k__BackingField,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v20 = ExRoomMissionReceiveConfirmDialogItem__BuildRewardCountOperatorStrings(this, v19);
  this->fields._RewardCountOperatorStrings_k__BackingField = v20;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardCountOperatorStrings_k__BackingField,
    (int32_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


System_String_array *ExRoomMissionReceiveConfirmDialogItem__BuildRewardCountOperatorStrings(
        ExRoomMissionReceiveConfirmDialogItem_o *this,
        const MethodInfo *method)
{
  struct ExRoomMissionListOutput_o *exRoomMissionListOutput; // x8
  struct GiftEntity_array *RewardGiftEntities_k__BackingField; // x23
  il2cpp_array_size_t max_length; // x1
  __int64 v6; // x0
  __int64 v7; // x20
  unsigned __int64 v8; // x21
  MissionNaviTransitionBoardItem_o *i; // x22
  ExRoomMissionListOutput_o *CrossOperatorString; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  GiftEntity_o *v18; // x25
  ExRoomMissionResolvedReward_o *RewardResolvedReward; // x0
  struct ItemEntity_o *RewardItemEntity_k__BackingField; // x8
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_596AF2C & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    byte_596AF2C = 1;
  }
  exRoomMissionListOutput = this->fields.exRoomMissionListOutput;
  if ( !exRoomMissionListOutput )
    return 0;
  RewardGiftEntities_k__BackingField = exRoomMissionListOutput->fields._RewardGiftEntities_k__BackingField;
  if ( !RewardGiftEntities_k__BackingField )
    return 0;
  max_length = RewardGiftEntities_k__BackingField->max_length;
  if ( !max_length )
    return 0;
  v6 = sub_2213B20(string___TypeInfo, max_length);
  v7 = v6;
  if ( SLODWORD(RewardGiftEntities_k__BackingField->max_length) >= 1 )
  {
    v8 = 0;
    for ( i = (MissionNaviTransitionBoardItem_o *)(v6 + 32); ; i = (MissionNaviTransitionBoardItem_o *)((char *)i + 8) )
    {
      CrossOperatorString = (ExRoomMissionListOutput_o *)ItemType__get_CrossOperatorString(0);
      if ( !v7 )
LABEL_25:
        sub_2213CDC(CrossOperatorString, v11);
      if ( v8 >= *(unsigned int *)(v7 + 24)
        || (i->klass = (MissionNaviTransitionBoardItem_c *)CrossOperatorString,
            sub_2213A04(i, (int32_t)CrossOperatorString, v12, v13, v14, v15, v16, v17),
            v8 >= LODWORD(RewardGiftEntities_k__BackingField->max_length)) )
      {
LABEL_24:
        sub_2213CE4(CrossOperatorString);
      }
      v18 = RewardGiftEntities_k__BackingField->m_Items[v8];
      if ( !v18 )
        goto LABEL_20;
      CrossOperatorString = this->fields.exRoomMissionListOutput;
      if ( !CrossOperatorString )
        goto LABEL_25;
      RewardResolvedReward = ExRoomMissionListOutput__GetRewardResolvedReward(CrossOperatorString, v8, 0);
      if ( RewardResolvedReward )
      {
        RewardItemEntity_k__BackingField = RewardResolvedReward->fields._RewardItemEntity_k__BackingField;
        if ( RewardItemEntity_k__BackingField )
          break;
      }
      if ( (unsigned int)(v18->fields.type - 3) <= 1 )
      {
        CrossOperatorString = (ExRoomMissionListOutput_o *)ItemType__get_PlusOperatorString(0);
        goto LABEL_18;
      }
LABEL_20:
      if ( (__int64)++v8 >= SLODWORD(RewardGiftEntities_k__BackingField->max_length) )
        return (System_String_array *)v7;
    }
    CrossOperatorString = (ExRoomMissionListOutput_o *)ItemType__GetCountableString(
                                                         RewardItemEntity_k__BackingField->fields.type,
                                                         0);
LABEL_18:
    if ( v8 >= *(unsigned int *)(v7 + 24) )
      goto LABEL_24;
    i->klass = (MissionNaviTransitionBoardItem_c *)CrossOperatorString;
    sub_2213A04(i, (int32_t)CrossOperatorString, v21, v22, v23, v24, v25, v26);
    goto LABEL_20;
  }
  return (System_String_array *)v7;
}


System_String_array *ExRoomMissionReceiveConfirmDialogItem__BuildRewardDisplayNames(
        ExRoomMissionReceiveConfirmDialogItem_o *this,
        const MethodInfo *method)
{
  struct ExRoomMissionListOutput_o *exRoomMissionListOutput; // x8
  struct GiftEntity_array *RewardGiftEntities_k__BackingField; // x22
  il2cpp_array_size_t max_length; // x1
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  il2cpp_array_size_t v8; // x8
  System_String_o *v9; // x20
  unsigned __int64 v10; // x21
  __int64 v11; // x24
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596AF2B & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    byte_596AF2B = 1;
  }
  exRoomMissionListOutput = this->fields.exRoomMissionListOutput;
  if ( !exRoomMissionListOutput )
    return 0;
  RewardGiftEntities_k__BackingField = exRoomMissionListOutput->fields._RewardGiftEntities_k__BackingField;
  if ( !RewardGiftEntities_k__BackingField )
    return 0;
  max_length = RewardGiftEntities_k__BackingField->max_length;
  if ( !max_length )
    return 0;
  v6 = (System_String_o *)sub_2213B20(string___TypeInfo, max_length);
  v8 = RewardGiftEntities_k__BackingField->max_length;
  v9 = v6;
  if ( (int)v8 >= 1 )
  {
    v10 = 0;
    v11 = 32;
    do
    {
      if ( v10 >= (unsigned int)v8 )
        goto LABEL_15;
      v6 = ExRoomMissionReceiveConfirmDialogItem__ResolveRewardDisplayName(
             this,
             v10,
             RewardGiftEntities_k__BackingField->m_Items[v10],
             v7);
      if ( !v9 )
        sub_2213CDC(v6, v12);
      if ( v10 >= LODWORD(v9[1].klass) )
LABEL_15:
        sub_2213CE4(v6);
      *((_QWORD *)&v9[1].monitor + v10) = v6;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v9 + v11), (int32_t)v6, v13, v14, v15, v16, v17, v18);
      LODWORD(v8) = RewardGiftEntities_k__BackingField->max_length;
      ++v10;
      v11 += 8;
    }
    while ( (__int64)v10 < (int)v8 );
  }
  return (System_String_array *)v9;
}


System_String_o *ExRoomMissionReceiveConfirmDialogItem__ResolveRewardDisplayName(
        ExRoomMissionReceiveConfirmDialogItem_o *this,
        int32_t index,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  ExRoomMissionListOutput_o *exRoomMissionListOutput; // x0
  ExRoomMissionResolvedReward_o *RewardResolvedReward; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  ExRoomMissionResolvedReward_o *v11; // x26
  struct ItemEntity_o *RewardItemEntity_k__BackingField; // x8
  ServantEntity_o *RewardServantEntity_k__BackingField; // x0
  int32_t type; // w0
  bool IsEquip; // w0
  __int64 v16; // x1
  __int64 v17; // x2
  struct EquipEntity_o *RewardEquipEntity_k__BackingField; // x8
  _BOOL8 IsCostumeRelease; // x0
  __int64 v20; // x1
  struct ServantCostumeEntity_o *RewardServantCostumeEntity_k__BackingField; // x8
  struct ExRoomMissionListOutput_o *v22; // x8
  GiftEntity_o *IconGiftEntity_k__BackingField; // x8
  bool v24; // zf
  System_String_o *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x19

  while ( 1 )
  {
    if ( (byte_596AF2D & 1) == 0 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      sub_2213A60(&StringLiteral_6805/*"FRIENDSHIP_NAME"*/);
      sub_2213A60(&StringLiteral_15442/*"USER_EXP_NAME"*/);
      byte_596AF2D = 1;
    }
    if ( !giftEntity )
      return **(System_String_o ***)(qword_5984390 + 184);
    exRoomMissionListOutput = this->fields.exRoomMissionListOutput;
    if ( !exRoomMissionListOutput )
      return **(System_String_o ***)(qword_5984390 + 184);
    RewardResolvedReward = ExRoomMissionListOutput__GetRewardResolvedReward(exRoomMissionListOutput, index, 0);
    v11 = RewardResolvedReward;
    if ( RewardResolvedReward )
    {
      RewardItemEntity_k__BackingField = RewardResolvedReward->fields._RewardItemEntity_k__BackingField;
      if ( RewardItemEntity_k__BackingField )
        return RewardItemEntity_k__BackingField->fields.name;
      RewardServantEntity_k__BackingField = RewardResolvedReward->fields._RewardServantEntity_k__BackingField;
      if ( RewardServantEntity_k__BackingField )
        return ServantEntity__getName(RewardServantEntity_k__BackingField, -1, -1, 0, 0, 0);
    }
    type = giftEntity->fields.type;
    switch ( type )
    {
      case 11:
        if ( !v11 )
        {
          Gift__IsEquip(11, 0);
          goto LABEL_19;
        }
        if ( v11->fields._RewardCommandCodeEntity_k__BackingField )
          return CommandCodeEntity__GetName(v11->fields._RewardCommandCodeEntity_k__BackingField, 0);
        break;
      case 4:
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
        v26 = (System_String_o *)StringLiteral_15442/*"USER_EXP_NAME"*/;
        return LocalizationManager__Get(v26, 0);
      case 3:
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
        v26 = (System_String_o *)StringLiteral_6805/*"FRIENDSHIP_NAME"*/;
        return LocalizationManager__Get(v26, 0);
    }
    IsEquip = Gift__IsEquip(type, 0);
    if ( v11 )
    {
      if ( IsEquip )
      {
        RewardEquipEntity_k__BackingField = v11->fields._RewardEquipEntity_k__BackingField;
        if ( RewardEquipEntity_k__BackingField )
          break;
      }
    }
LABEL_19:
    IsCostumeRelease = Gift__IsCostumeRelease(giftEntity->fields.type, 0);
    if ( v11 )
    {
      if ( IsCostumeRelease )
      {
        RewardServantCostumeEntity_k__BackingField = v11->fields._RewardServantCostumeEntity_k__BackingField;
        if ( RewardServantCostumeEntity_k__BackingField )
          return RewardServantCostumeEntity_k__BackingField->fields.name;
      }
    }
    v22 = this->fields.exRoomMissionListOutput;
    if ( !v22 )
      sub_2213CDC(IsCostumeRelease, v20);
    IconGiftEntity_k__BackingField = v22->fields._IconGiftEntity_k__BackingField;
    if ( IconGiftEntity_k__BackingField )
    {
      v24 = IconGiftEntity_k__BackingField == giftEntity;
      giftEntity = IconGiftEntity_k__BackingField;
      if ( !v24 )
        continue;
    }
    return **(System_String_o ***)(qword_5984390 + 184);
  }
  name = RewardEquipEntity_k__BackingField->fields.name;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v16, v17);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(name, 0);
}


System_String_o *ExRoomMissionReceiveConfirmDialogItem__get_MissionConditionText(
        ExRoomMissionReceiveConfirmDialogItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ExRoomMissionListOutput_o *exRoomMissionListOutput; // x8
  System_Collections_Generic_List_object__o *ConditionEntities_k__BackingField; // x19

  if ( (byte_596AF2A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    byte_596AF2A = 1;
  }
  exRoomMissionListOutput = this->fields.exRoomMissionListOutput;
  if ( !exRoomMissionListOutput )
    return **(System_String_o ***)(qword_5984390 + 184);
  ConditionEntities_k__BackingField = (System_Collections_Generic_List_object__o *)exRoomMissionListOutput->fields._ConditionEntities_k__BackingField;
  if ( !ConditionEntities_k__BackingField )
  {
    ConditionEntities_k__BackingField = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      ConditionEntities_k__BackingField,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  }
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, method, v2);
  return MissionInfoMaker__GetConditionMessage(
           (System_Collections_Generic_List_EventMissionConditionEntity__o *)ConditionEntities_k__BackingField,
           0);
}


int32_t ExRoomMissionReceiveConfirmDialogItem__get_MissionId(
        ExRoomMissionReceiveConfirmDialogItem_o *this,
        const MethodInfo *method)
{
  struct ExRoomMissionListOutput_o *exRoomMissionListOutput; // x8
  struct EventMissionEntity_o *EventMissionEntity_k__BackingField; // x8
  System_Nullable_int__o v5; // x0
  int32_t id; // w1
  __int64 v8; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596AF29 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    byte_596AF29 = 1;
  }
  exRoomMissionListOutput = this->fields.exRoomMissionListOutput;
  if ( !exRoomMissionListOutput )
    return 0;
  EventMissionEntity_k__BackingField = exRoomMissionListOutput->fields._EventMissionEntity_k__BackingField;
  if ( !EventMissionEntity_k__BackingField )
    return 0;
  v5 = (System_Nullable_int__o)&v8;
  id = EventMissionEntity_k__BackingField->fields.id;
  v8 = 0;
  System_Nullable_int____ctor(v5, id, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
  return HIDWORD(v8);
}


System_String_array *ExRoomMissionReceiveConfirmDialogItem__get_RewardCountOperatorStrings(
        ExRoomMissionReceiveConfirmDialogItem_o *this,
        const MethodInfo *method)
{
  return this->fields._RewardCountOperatorStrings_k__BackingField;
}


System_String_array *ExRoomMissionReceiveConfirmDialogItem__get_RewardDisplayNames(
        ExRoomMissionReceiveConfirmDialogItem_o *this,
        const MethodInfo *method)
{
  return this->fields._RewardDisplayNames_k__BackingField;
}


GiftEntity_array *ExRoomMissionReceiveConfirmDialogItem__get_RewardGiftEntities(
        ExRoomMissionReceiveConfirmDialogItem_o *this,
        const MethodInfo *method)
{
  struct ExRoomMissionListOutput_o *exRoomMissionListOutput; // x8

  exRoomMissionListOutput = this->fields.exRoomMissionListOutput;
  if ( exRoomMissionListOutput )
    return exRoomMissionListOutput->fields._RewardGiftEntities_k__BackingField;
  else
    return 0;
}


void ExRoomMissionReceiveConfirmDialogItem__set_RewardCountOperatorStrings(
        ExRoomMissionReceiveConfirmDialogItem_o *this,
        System_String_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RewardCountOperatorStrings_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardCountOperatorStrings_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionReceiveConfirmDialogItem__set_RewardDisplayNames(
        ExRoomMissionReceiveConfirmDialogItem_o *this,
        System_String_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RewardDisplayNames_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardDisplayNames_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}