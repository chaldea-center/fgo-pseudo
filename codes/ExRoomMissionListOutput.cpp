void ExRoomMissionListOutput___ctor(
        ExRoomMissionListOutput_o *this,
        EventMissionEntity_o *eventMissionEntity,
        UserEventMissionEntity_o *userEventMissionEntity,
        int32_t progressType,
        int32_t status,
        System_Collections_Generic_List_EventMissionConditionEntity__o *conditionEntities,
        GiftEntity_o *iconGiftEntity,
        GiftEntity_o *subGiftEntity,
        ExRoomMissionResolvedReward_array *rewardResolvedRewards,
        const MethodInfo *method)
{
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  ExRoomMissionListOutput_o *v42; // x0
  const MethodInfo *v43; // x2
  struct GiftEntity_array *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  const MethodInfo *v51; // x2
  ExRoomMissionResolvedReward_o *RewardResolvedReward; // x22
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct ItemEntity_o *RewardItemEntity_k__BackingField; // x1
  struct ServantEntity_o *RewardServantEntity_k__BackingField; // x1
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  struct CommandCodeEntity_o *RewardCommandCodeEntity_k__BackingField; // x1
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  struct ServantCostumeEntity_o *RewardServantCostumeEntity_k__BackingField; // x1
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  struct EquipEntity_o *RewardEquipEntity_k__BackingField; // x1
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7

  if ( (byte_596AEC0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    byte_596AEC0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._EventMissionEntity_k__BackingField = eventMissionEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)eventMissionEntity,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._UserEventMissionEntity_k__BackingField = userEventMissionEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserEventMissionEntity_k__BackingField,
    (int32_t)userEventMissionEntity,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields._ProgressType_k__BackingField = progressType;
  this->fields._Status_k__BackingField = status;
  if ( !conditionEntities )
  {
    conditionEntities = (System_Collections_Generic_List_EventMissionConditionEntity__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      (System_Collections_Generic_List_object__o *)conditionEntities,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
  }
  this->fields._ConditionEntities_k__BackingField = conditionEntities;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ConditionEntities_k__BackingField,
    (int32_t)conditionEntities,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields._RewardResolvedRewards_k__BackingField = rewardResolvedRewards;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardResolvedRewards_k__BackingField,
    (int32_t)rewardResolvedRewards,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v44 = ExRoomMissionListOutput__BuildRewardGiftEntities(v42, this->fields._RewardResolvedRewards_k__BackingField, v43);
  this->fields._RewardGiftEntities_k__BackingField = v44;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardGiftEntities_k__BackingField,
    (int32_t)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  RewardResolvedReward = ExRoomMissionListOutput__FindRewardResolvedReward(this, iconGiftEntity, v51);
  this->fields._IconGiftEntity_k__BackingField = iconGiftEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._IconGiftEntity_k__BackingField,
    (int32_t)iconGiftEntity,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields._SubGiftEntity_k__BackingField = subGiftEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SubGiftEntity_k__BackingField,
    (int32_t)subGiftEntity,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  if ( RewardResolvedReward )
  {
    RewardItemEntity_k__BackingField = RewardResolvedReward->fields._RewardItemEntity_k__BackingField;
    this->fields._RewardItemEntity_k__BackingField = RewardItemEntity_k__BackingField;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._RewardItemEntity_k__BackingField,
      (int32_t)RewardItemEntity_k__BackingField,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
    RewardServantEntity_k__BackingField = RewardResolvedReward->fields._RewardServantEntity_k__BackingField;
    this->fields._RewardServantEntity_k__BackingField = RewardServantEntity_k__BackingField;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._RewardServantEntity_k__BackingField,
      (int32_t)RewardServantEntity_k__BackingField,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
    RewardCommandCodeEntity_k__BackingField = RewardResolvedReward->fields._RewardCommandCodeEntity_k__BackingField;
    this->fields._RewardCommandCodeEntity_k__BackingField = RewardCommandCodeEntity_k__BackingField;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._RewardCommandCodeEntity_k__BackingField,
      (int32_t)RewardCommandCodeEntity_k__BackingField,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
    RewardServantCostumeEntity_k__BackingField = RewardResolvedReward->fields._RewardServantCostumeEntity_k__BackingField;
    this->fields._RewardServantCostumeEntity_k__BackingField = RewardServantCostumeEntity_k__BackingField;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._RewardServantCostumeEntity_k__BackingField,
      (int32_t)RewardServantCostumeEntity_k__BackingField,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92);
    RewardEquipEntity_k__BackingField = RewardResolvedReward->fields._RewardEquipEntity_k__BackingField;
  }
  else
  {
    this->fields._RewardItemEntity_k__BackingField = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._RewardItemEntity_k__BackingField,
      0,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
    this->fields._RewardServantEntity_k__BackingField = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._RewardServantEntity_k__BackingField,
      0,
      v100,
      v101,
      v102,
      v103,
      v104,
      v105);
    this->fields._RewardCommandCodeEntity_k__BackingField = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._RewardCommandCodeEntity_k__BackingField,
      0,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111);
    this->fields._RewardServantCostumeEntity_k__BackingField = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._RewardServantCostumeEntity_k__BackingField,
      0,
      v112,
      v113,
      v114,
      v115,
      v116,
      v117);
    RewardEquipEntity_k__BackingField = 0;
  }
  this->fields._RewardEquipEntity_k__BackingField = RewardEquipEntity_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardEquipEntity_k__BackingField,
    (int32_t)RewardEquipEntity_k__BackingField,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
}


GiftEntity_array *ExRoomMissionListOutput__BuildRewardGiftEntities(
        ExRoomMissionListOutput_o *this,
        ExRoomMissionResolvedReward_array *resolvedRewards,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  il2cpp_array_size_t v13; // x8
  unsigned int *v14; // x20
  __int64 v15; // x23
  __int64 v16; // x22
  __int64 v17; // x8
  __int64 v18; // x21
  __int64 v19; // x1
  __int64 v20; // x9
  __int64 v22; // x0

  if ( (byte_596AEC2 & 1) == 0 )
  {
    sub_2213A60(&GiftEntity___TypeInfo);
    byte_596AEC2 = 1;
  }
  if ( !resolvedRewards )
    return 0;
  max_length = resolvedRewards->max_length;
  if ( !max_length )
    return 0;
  v5 = sub_2213B20(GiftEntity___TypeInfo, max_length);
  v13 = resolvedRewards->max_length;
  v14 = (unsigned int *)v5;
  if ( (int)v13 >= 1 )
  {
    v15 = 4;
    v16 = 8;
    do
    {
      if ( v15 - 4 >= (unsigned __int64)(unsigned int)v13 )
        goto LABEL_20;
      v17 = *((_QWORD *)&resolvedRewards->obj.klass + v15);
      if ( v17 )
      {
        if ( !v14 )
          goto LABEL_21;
        v18 = *(_QWORD *)(v17 + 16);
        if ( v18 )
        {
          v5 = sub_2213BB4(v18, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
          if ( !v5 )
          {
            v22 = sub_2213D00(0, v19);
            sub_2213BA0(v22, 0);
          }
        }
      }
      else
      {
        if ( !v14 )
LABEL_21:
          sub_2213CDC(v5, v6);
        v18 = 0;
      }
      if ( v15 - 4 >= (unsigned __int64)v14[6] )
LABEL_20:
        sub_2213CE4(v5);
      *(_QWORD *)&v14[2 * v15] = v18;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14[v16], v18, v7, v8, v9, v10, v11, v12);
      LODWORD(v13) = resolvedRewards->max_length;
      v20 = v15 - 3;
      ++v15;
      v16 += 2;
    }
    while ( v20 < (int)v13 );
  }
  return (GiftEntity_array *)v14;
}


ExRoomMissionResolvedReward_o *ExRoomMissionListOutput__FindRewardResolvedReward(
        ExRoomMissionListOutput_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  struct ExRoomMissionResolvedReward_array *RewardResolvedRewards_k__BackingField; // x9
  __int64 max_length; // x8
  ExRoomMissionResolvedReward_o **i; // x9
  ExRoomMissionResolvedReward_o *result; // x0
  struct GiftEntity_o *RewardGiftEntity_k__BackingField; // x10

  if ( !giftEntity )
    return 0;
  RewardResolvedRewards_k__BackingField = this->fields._RewardResolvedRewards_k__BackingField;
  if ( !RewardResolvedRewards_k__BackingField || (int)RewardResolvedRewards_k__BackingField->max_length < 1 )
    return 0;
  max_length = (unsigned int)RewardResolvedRewards_k__BackingField->max_length;
  for ( i = RewardResolvedRewards_k__BackingField->m_Items; ; ++i )
  {
    result = *i;
    if ( *i )
    {
      RewardGiftEntity_k__BackingField = result->fields._RewardGiftEntity_k__BackingField;
      if ( RewardGiftEntity_k__BackingField )
      {
        if ( RewardGiftEntity_k__BackingField == giftEntity
          || RewardGiftEntity_k__BackingField->fields.id == giftEntity->fields.id
          && RewardGiftEntity_k__BackingField->fields.type == giftEntity->fields.type
          && RewardGiftEntity_k__BackingField->fields.objectId == giftEntity->fields.objectId
          && RewardGiftEntity_k__BackingField->fields.num == giftEntity->fields.num )
        {
          break;
        }
      }
    }
    if ( !--max_length )
      return 0;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
ExRoomMissionResolvedReward_o *ExRoomMissionListOutput__FindRewardResolvedRewardByObjectId(
        ExRoomMissionListOutput_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  ExRoomMissionListOutput_o *v4; // x20
  struct ExRoomMissionResolvedReward_array *RewardResolvedRewards_k__BackingField; // x8
  __int64 v6; // x21
  unsigned __int64 max_length_low; // x9
  __int64 v8; // x9
  __int64 v9; // x9
  int32_t v10; // w1
  System_Nullable_int__o v11; // x0
  __int64 v13; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_596AEC1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    this = (ExRoomMissionListOutput_o *)sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    byte_596AEC1 = 1;
  }
  RewardResolvedRewards_k__BackingField = v4->fields._RewardResolvedRewards_k__BackingField;
  if ( RewardResolvedRewards_k__BackingField )
  {
    v6 = 4;
    while ( 1 )
    {
      max_length_low = LODWORD(RewardResolvedRewards_k__BackingField->max_length);
      if ( v6 - 4 >= (int)max_length_low )
        break;
      if ( v6 - 4 >= max_length_low )
        goto LABEL_17;
      v8 = *((_QWORD *)&RewardResolvedRewards_k__BackingField->obj.klass + v6);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 16);
        if ( v9 )
        {
          v10 = *(_DWORD *)(v9 + 24);
          v11 = (System_Nullable_int__o)&v13;
          v13 = 0;
          System_Nullable_int____ctor(v11, v10, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
          RewardResolvedRewards_k__BackingField = v4->fields._RewardResolvedRewards_k__BackingField;
          if ( (_BYTE)v13 )
          {
            if ( HIDWORD(v13) == objectId )
            {
              if ( !RewardResolvedRewards_k__BackingField )
LABEL_12:
                sub_2213CDC(this, *(_QWORD *)&objectId);
              if ( (unsigned int)(v6 - 4) >= LODWORD(RewardResolvedRewards_k__BackingField->max_length) )
LABEL_17:
                sub_2213CE4(this);
              return (ExRoomMissionResolvedReward_o *)*((_QWORD *)&RewardResolvedRewards_k__BackingField->obj.klass + v6);
            }
          }
        }
      }
      ++v6;
      if ( !RewardResolvedRewards_k__BackingField )
        goto LABEL_12;
    }
  }
  return 0;
}


ExRoomMissionResolvedReward_o *ExRoomMissionListOutput__GetRewardResolvedReward(
        ExRoomMissionListOutput_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ExRoomMissionResolvedReward_o *result; // x0
  struct ExRoomMissionResolvedReward_array *RewardResolvedRewards_k__BackingField; // x8

  result = 0;
  if ( (index & 0x80000000) == 0 )
  {
    RewardResolvedRewards_k__BackingField = this->fields._RewardResolvedRewards_k__BackingField;
    if ( RewardResolvedRewards_k__BackingField )
    {
      if ( SLODWORD(RewardResolvedRewards_k__BackingField->max_length) <= index )
        return 0;
      else
        return RewardResolvedRewards_k__BackingField->m_Items[index];
    }
  }
  return result;
}


void ExRoomMissionListOutput__SetStatus(ExRoomMissionListOutput_o *this, int32_t status, const MethodInfo *method)
{
  this->fields._Status_k__BackingField = status;
}


System_Collections_Generic_List_EventMissionConditionEntity__o *ExRoomMissionListOutput__get_ConditionEntities(
        ExRoomMissionListOutput_o *this,
        const MethodInfo *method)
{
  return this->fields._ConditionEntities_k__BackingField;
}


EventMissionEntity_o *ExRoomMissionListOutput__get_EventMissionEntity(
        ExRoomMissionListOutput_o *this,
        const MethodInfo *method)
{
  return this->fields._EventMissionEntity_k__BackingField;
}


GiftEntity_o *ExRoomMissionListOutput__get_IconGiftEntity(ExRoomMissionListOutput_o *this, const MethodInfo *method)
{
  return this->fields._IconGiftEntity_k__BackingField;
}


int32_t ExRoomMissionListOutput__get_ProgressType(ExRoomMissionListOutput_o *this, const MethodInfo *method)
{
  return this->fields._ProgressType_k__BackingField;
}


CommandCodeEntity_o *ExRoomMissionListOutput__get_RewardCommandCodeEntity(
        ExRoomMissionListOutput_o *this,
        const MethodInfo *method)
{
  return this->fields._RewardCommandCodeEntity_k__BackingField;
}


EquipEntity_o *ExRoomMissionListOutput__get_RewardEquipEntity(
        ExRoomMissionListOutput_o *this,
        const MethodInfo *method)
{
  return this->fields._RewardEquipEntity_k__BackingField;
}


GiftEntity_array *ExRoomMissionListOutput__get_RewardGiftEntities(
        ExRoomMissionListOutput_o *this,
        const MethodInfo *method)
{
  return this->fields._RewardGiftEntities_k__BackingField;
}


ItemEntity_o *ExRoomMissionListOutput__get_RewardItemEntity(ExRoomMissionListOutput_o *this, const MethodInfo *method)
{
  return this->fields._RewardItemEntity_k__BackingField;
}


ExRoomMissionResolvedReward_array *ExRoomMissionListOutput__get_RewardResolvedRewards(
        ExRoomMissionListOutput_o *this,
        const MethodInfo *method)
{
  return this->fields._RewardResolvedRewards_k__BackingField;
}


ServantCostumeEntity_o *ExRoomMissionListOutput__get_RewardServantCostumeEntity(
        ExRoomMissionListOutput_o *this,
        const MethodInfo *method)
{
  return this->fields._RewardServantCostumeEntity_k__BackingField;
}


ServantEntity_o *ExRoomMissionListOutput__get_RewardServantEntity(
        ExRoomMissionListOutput_o *this,
        const MethodInfo *method)
{
  return this->fields._RewardServantEntity_k__BackingField;
}


int32_t ExRoomMissionListOutput__get_Status(ExRoomMissionListOutput_o *this, const MethodInfo *method)
{
  return this->fields._Status_k__BackingField;
}


GiftEntity_o *ExRoomMissionListOutput__get_SubGiftEntity(ExRoomMissionListOutput_o *this, const MethodInfo *method)
{
  return this->fields._SubGiftEntity_k__BackingField;
}


UserEventMissionEntity_o *ExRoomMissionListOutput__get_UserEventMissionEntity(
        ExRoomMissionListOutput_o *this,
        const MethodInfo *method)
{
  return this->fields._UserEventMissionEntity_k__BackingField;
}


void ExRoomMissionListOutput__set_ConditionEntities(
        ExRoomMissionListOutput_o *this,
        System_Collections_Generic_List_EventMissionConditionEntity__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ConditionEntities_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ConditionEntities_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionListOutput__set_EventMissionEntity(
        ExRoomMissionListOutput_o *this,
        EventMissionEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EventMissionEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionListOutput__set_IconGiftEntity(
        ExRoomMissionListOutput_o *this,
        GiftEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._IconGiftEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._IconGiftEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionListOutput__set_ProgressType(
        ExRoomMissionListOutput_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ProgressType_k__BackingField = value;
}


void ExRoomMissionListOutput__set_RewardCommandCodeEntity(
        ExRoomMissionListOutput_o *this,
        CommandCodeEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RewardCommandCodeEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardCommandCodeEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionListOutput__set_RewardEquipEntity(
        ExRoomMissionListOutput_o *this,
        EquipEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RewardEquipEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardEquipEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionListOutput__set_RewardGiftEntities(
        ExRoomMissionListOutput_o *this,
        GiftEntity_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RewardGiftEntities_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardGiftEntities_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionListOutput__set_RewardItemEntity(
        ExRoomMissionListOutput_o *this,
        ItemEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RewardItemEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardItemEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionListOutput__set_RewardResolvedRewards(
        ExRoomMissionListOutput_o *this,
        ExRoomMissionResolvedReward_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RewardResolvedRewards_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardResolvedRewards_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionListOutput__set_RewardServantCostumeEntity(
        ExRoomMissionListOutput_o *this,
        ServantCostumeEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RewardServantCostumeEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardServantCostumeEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionListOutput__set_RewardServantEntity(
        ExRoomMissionListOutput_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RewardServantEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RewardServantEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionListOutput__set_Status(ExRoomMissionListOutput_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Status_k__BackingField = value;
}


void ExRoomMissionListOutput__set_SubGiftEntity(
        ExRoomMissionListOutput_o *this,
        GiftEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SubGiftEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SubGiftEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionListOutput__set_UserEventMissionEntity(
        ExRoomMissionListOutput_o *this,
        UserEventMissionEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UserEventMissionEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserEventMissionEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}