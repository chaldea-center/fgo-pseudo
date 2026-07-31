void ExRoomMissionListViewItem___ctor(
        ExRoomMissionListViewItem_o *this,
        ExRoomMissionListOutput_o *exRoomMissionListOutput,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct EventMissionEntity_o *EventMissionEntity_k__BackingField; // x1
  __int64 v12; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x0
  int32_t dispNo; // w10
  int32_t id; // w9
  int32_t bannerGroup; // w8
  bool isNowMission; // w0
  __int64 v18; // x1
  __int64 v19; // x2
  int32x2_t v20; // d1
  MissionInfoMaker_c *v21; // x0
  int32_t ConditionMessageType; // w0
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *ConditionEntities_k__BackingField; // x21
  struct System_String_o *ConditionMessage; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_String_o *ClosedMessage; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  int32_t progStatus; // w22
  struct System_String_o *ProgressText; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  __int64 v54; // x1
  __int64 v55; // x2
  struct System_String_o **v56; // x8
  struct System_String_o *v57; // x1
  int32_t currentMissionId; // w21
  int32_t v59; // w22
  bool IsShowNew; // w0
  struct GiftEntity_array *RewardGiftEntities_k__BackingField; // x1
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  struct GiftEntity_o *SubGiftEntity_k__BackingField; // x1
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  ExRoomMissionListViewItem_o *v75; // x0
  const MethodInfo *v76; // x3
  struct GiftEntity_array *v77; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  struct ItemEntity_o *RewardItemEntity_k__BackingField; // x1
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  struct ServantEntity_o *RewardServantEntity_k__BackingField; // x1
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  struct CommandCodeEntity_o *RewardCommandCodeEntity_k__BackingField; // x1
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  struct ServantCostumeEntity_o *RewardServantCostumeEntity_k__BackingField; // x1
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
  struct GiftEntity_o *IconGiftEntity_k__BackingField; // x8
  __int64 v119; // x9
  struct System_String_o **v120; // x9
  struct System_String_o *v121; // x1
  struct System_String_o **v122; // x8
  struct System_String_o *v123; // x1
  System_String_o *v124; // x2
  System_String_o *v125; // x3
  int32_t v126; // w4
  int32_t v127; // w5
  bool v128; // w6
  bool v129; // w7
  unsigned __int32 v130; // [xsp+0h] [xbp-50h]

  if ( (byte_5932E02 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
    sub_21FFC50(&MissionInfoMaker_TypeInfo);
    byte_5932E02 = 1;
  }
  MissionListViewItem___ctor((MissionListViewItem_o *)this, 0);
  if ( exRoomMissionListOutput )
  {
    EventMissionEntity_k__BackingField = exRoomMissionListOutput->fields._EventMissionEntity_k__BackingField;
    if ( EventMissionEntity_k__BackingField )
    {
      this->fields.eventMissionEnt = EventMissionEntity_k__BackingField;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.eventMissionEnt,
        (int32_t)EventMissionEntity_k__BackingField,
        v5,
        v6,
        v7,
        v8,
        v9,
        v10);
      eventMissionEnt = this->fields.eventMissionEnt;
      if ( !eventMissionEnt )
        goto LABEL_24;
      dispNo = eventMissionEnt->fields.dispNo;
      id = eventMissionEnt->fields.id;
      this->fields.currentEventId = eventMissionEnt->fields.missionTargetId;
      bannerGroup = eventMissionEnt->fields.bannerGroup;
      this->fields.currentMissionId = id;
      this->fields.dispNo = dispNo;
      this->fields.bannerGroupId = bannerGroup;
      isNowMission = EventMissionEntity__isNowMission(eventMissionEnt, 0);
      v20.n64_u64[0] = *(unsigned __int64 *)&exRoomMissionListOutput->fields._ProgressType_k__BackingField;
      this->fields.isNowMission = isNowMission;
      v21 = MissionInfoMaker_TypeInfo;
      *(int32x2_t *)&this->fields.progStatus = vrev64_s32(v20);
      if ( !*(&v21->_2.cctor_finished + 1) )
      {
        v130 = v20.n64_u32[0];
        j_il2cpp_runtime_class_init_0(v21, v18, v19);
        v20.n64_u32[0] = v130;
      }
      ConditionMessageType = MissionInfoMaker__GetConditionMessageType(v20.n64_i32[0], 0);
      ConditionEntities_k__BackingField = (System_Collections_Generic_List_object__o *)exRoomMissionListOutput->fields._ConditionEntities_k__BackingField;
      this->fields.condMsgType = ConditionMessageType;
      this->fields.isColliderEnable = 1;
      if ( !ConditionEntities_k__BackingField )
      {
        ConditionEntities_k__BackingField = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventMissionConditionEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          ConditionEntities_k__BackingField,
          (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventMissionConditionEntity___ctor__);
      }
      if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v23, v24);
      ConditionMessage = MissionInfoMaker__GetConditionMessage(
                           (System_Collections_Generic_List_EventMissionConditionEntity__o *)ConditionEntities_k__BackingField,
                           0);
      this->fields.condMsg = ConditionMessage;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.condMsg,
        (int32_t)ConditionMessage,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      ClosedMessage = MissionInfoMaker__GetClosedMessage(
                        (System_Collections_Generic_List_EventMissionConditionEntity__o *)ConditionEntities_k__BackingField,
                        0);
      this->fields.closedMessage = ClosedMessage;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.closedMessage,
        (int32_t)ClosedMessage,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      if ( !ConditionEntities_k__BackingField )
LABEL_24:
        sub_21FFECC(eventMissionEnt, v12);
      if ( ConditionEntities_k__BackingField->fields._size < 1 )
      {
        v56 = *(struct System_String_o ***)(qword_594C0B8 + 184);
        v57 = *v56;
        this->fields.progTxt = *v56;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.progTxt,
          (int32_t)v57,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        this->fields.progVal = 0.0;
        this->fields.targetNum = 0;
        this->fields.progNum = 0;
      }
      else
      {
        progStatus = this->fields.progStatus;
        if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v12, v40);
        ProgressText = MissionInfoMaker__GetProgressText(
                         (System_Collections_Generic_List_EventMissionConditionEntity__o *)ConditionEntities_k__BackingField,
                         progStatus,
                         &this->fields.progNum,
                         &this->fields.targetNum,
                         0);
        this->fields.progTxt = ProgressText;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.progTxt,
          (int32_t)ProgressText,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
        this->fields.progVal = MissionInfoMaker__GetProgressValue(
                                 this->fields.progStatus,
                                 this->fields.progNum,
                                 this->fields.targetNum,
                                 0);
      }
      currentMissionId = this->fields.currentMissionId;
      v59 = this->fields.progStatus;
      if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v54, v55);
      IsShowNew = MissionInfoMaker__GetIsShowNew(currentMissionId, v59, 0);
      RewardGiftEntities_k__BackingField = exRoomMissionListOutput->fields._RewardGiftEntities_k__BackingField;
      this->fields.isNew = IsShowNew;
      this->fields.giftEnts = RewardGiftEntities_k__BackingField;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.giftEnts,
        (int32_t)RewardGiftEntities_k__BackingField,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      SubGiftEntity_k__BackingField = exRoomMissionListOutput->fields._SubGiftEntity_k__BackingField;
      this->fields.subGiftEntity = SubGiftEntity_k__BackingField;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.subGiftEntity,
        (int32_t)SubGiftEntity_k__BackingField,
        v69,
        v70,
        v71,
        v72,
        v73,
        v74);
      v77 = ExRoomMissionListViewItem__BuildDisplayGiftEntities(
              v75,
              this->fields.giftEnts,
              this->fields.subGiftEntity,
              v76);
      this->fields.rewardDisplayGiftEntities = v77;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.rewardDisplayGiftEntities,
        (int32_t)v77,
        v78,
        v79,
        v80,
        v81,
        v82,
        v83);
      RewardItemEntity_k__BackingField = exRoomMissionListOutput->fields._RewardItemEntity_k__BackingField;
      this->fields.itemEnt = RewardItemEntity_k__BackingField;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.itemEnt,
        (int32_t)RewardItemEntity_k__BackingField,
        v85,
        v86,
        v87,
        v88,
        v89,
        v90);
      RewardServantEntity_k__BackingField = exRoomMissionListOutput->fields._RewardServantEntity_k__BackingField;
      this->fields.svtEnt = RewardServantEntity_k__BackingField;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.svtEnt,
        (int32_t)RewardServantEntity_k__BackingField,
        v92,
        v93,
        v94,
        v95,
        v96,
        v97);
      RewardCommandCodeEntity_k__BackingField = exRoomMissionListOutput->fields._RewardCommandCodeEntity_k__BackingField;
      this->fields.cmdEnt = RewardCommandCodeEntity_k__BackingField;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.cmdEnt,
        (int32_t)RewardCommandCodeEntity_k__BackingField,
        v99,
        v100,
        v101,
        v102,
        v103,
        v104);
      RewardServantCostumeEntity_k__BackingField = exRoomMissionListOutput->fields._RewardServantCostumeEntity_k__BackingField;
      this->fields.servantCostumeEnt = RewardServantCostumeEntity_k__BackingField;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.servantCostumeEnt,
        (int32_t)RewardServantCostumeEntity_k__BackingField,
        v106,
        v107,
        v108,
        v109,
        v110,
        v111);
      IconGiftEntity_k__BackingField = exRoomMissionListOutput->fields._IconGiftEntity_k__BackingField;
      if ( IconGiftEntity_k__BackingField )
        LODWORD(IconGiftEntity_k__BackingField) = IconGiftEntity_k__BackingField->fields.objectId;
      v119 = qword_594C0B8;
      this->fields.rewardObjectId = (int)IconGiftEntity_k__BackingField;
      v120 = *(struct System_String_o ***)(v119 + 184);
      v121 = *v120;
      this->fields.nameTxt = *v120;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.nameTxt,
        (int32_t)v121,
        v112,
        v113,
        v114,
        v115,
        v116,
        v117);
      v122 = *(struct System_String_o ***)(qword_594C0B8 + 184);
      v123 = *v122;
      this->fields.rewardExtraDetailTxt = *v122;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.rewardExtraDetailTxt,
        (int32_t)v123,
        v124,
        v125,
        v126,
        v127,
        v128,
        v129);
      this->fields.iconId = 0;
    }
  }
}


GiftEntity_array *ExRoomMissionListViewItem__BuildDisplayGiftEntities(
        ExRoomMissionListViewItem_o *this,
        GiftEntity_array *source,
        GiftEntity_o *subGift,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x21
  __int64 v7; // x0
  GiftEntity_o *v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x22
  char v17; // w23
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_5932E05 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity___ctor___91425792);
    sub_21FFC50(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    byte_5932E05 = 1;
  }
  if ( !source )
    return source;
  if ( !source->max_length )
    return 0;
  if ( !subGift )
    return source;
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_71627580(
    v6,
    source->max_length,
    (const MethodInfo_444F33C *)Method_System_Collections_Generic_List_GiftEntity___ctor___91425792);
  max_length = source->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      if ( v16 >= (unsigned int)max_length )
        sub_21FFED4(v7);
      v8 = source->m_Items[v16];
      if ( !(v17 & 1 | (v8 == 0))
        && v8->fields.id == subGift->fields.id
        && v8->fields.type == subGift->fields.type
        && v8->fields.objectId == subGift->fields.objectId )
      {
        v17 = 1;
      }
      else
      {
        if ( !v6 )
          goto LABEL_24;
        items = v6->fields._items;
        v19 = Method_System_Collections_Generic_List_GiftEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_24;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v8,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v8;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
        }
      }
      LODWORD(max_length) = source->max_length;
      ++v16;
    }
    while ( (__int64)v16 < (int)max_length );
  }
  if ( !v6 )
LABEL_24:
    sub_21FFECC(v7, v8);
  return (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                               v6,
                               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
}


GiftEntity_o *ExRoomMissionListViewItem__GetCurrentDisplayRewardEntity(
        ExRoomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.currentDisplayRewardGiftEntity )
    return this->fields.currentDisplayRewardGiftEntity;
  else
    return ExRoomMissionListViewItem__GetRewardEntityForDisplay(this, 0, v2);
}


int64_t ExRoomMissionListViewItem__GetRemainingTimeTarget(ExRoomMissionListViewItem_o *this, const MethodInfo *method)
{
  struct EventMissionEntity_o *eventMissionEnt; // x8
  __int64 v3; // x9

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    return 0;
  v3 = 64;
  if ( this->fields.progStatus == 3 )
    v3 = 72;
  return *(int64_t *)((char *)&eventMissionEnt->klass + v3);
}


System_String_o *ExRoomMissionListViewItem__GetRemainingTimeTextKey(
        ExRoomMissionListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 *v3; // x8

  if ( (byte_5932E03 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13953/*"TIME_REST_QUEST"*/);
    sub_21FFC50(&StringLiteral_13941/*"TIME_REST_ACHIVE"*/);
    byte_5932E03 = 1;
  }
  if ( this->fields.progStatus == 3 )
    v3 = &StringLiteral_13941/*"TIME_REST_ACHIVE"*/;
  else
    v3 = &StringLiteral_13953/*"TIME_REST_QUEST"*/;
  return (System_String_o *)*v3;
}


int32_t ExRoomMissionListViewItem__GetRewardCount(ExRoomMissionListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_array *rewardDisplayGiftEntities; // x8

  rewardDisplayGiftEntities = this->fields.rewardDisplayGiftEntities;
  if ( rewardDisplayGiftEntities )
    return rewardDisplayGiftEntities->max_length;
  else
    return 0;
}


int32_t ExRoomMissionListViewItem__GetRewardDisplayCount(
        ExRoomMissionListViewItem_o *this,
        GiftEntity_o *giftEntity,
        const MethodInfo *method)
{
  if ( !giftEntity )
    return -1;
  if ( giftEntity->fields.num <= 1 )
    return -1;
  return giftEntity->fields.num;
}


GiftEntity_o *ExRoomMissionListViewItem__GetRewardEntityForDisplay(
        ExRoomMissionListViewItem_o *this,
        int32_t animationIndex,
        const MethodInfo *method)
{
  if ( (byte_5932E04 & 1) == 0 )
  {
    sub_21FFC50(&Method_ArrayHelper_GetClampedValueSafely_GiftEntity___);
    byte_5932E04 = 1;
  }
  return (GiftEntity_o *)ArrayHelper__GetClampedValueSafely_object_(
                           (System_Object_array *)this->fields.rewardDisplayGiftEntities,
                           animationIndex,
                           0,
                           (const MethodInfo_379BA00 *)Method_ArrayHelper_GetClampedValueSafely_GiftEntity___);
}


ExRoomMissionListViewItem_RewardIconDrawInfo_o *ExRoomMissionListViewItem__GetRewardIconDrawInfo(
        ExRoomMissionListViewItem_RewardIconDrawInfo_o *__return_ptr retstr,
        ExRoomMissionListViewItem_o *this,
        int32_t animationIndex,
        const MethodInfo *method)
{
  ExRoomMissionListViewItem_RewardIconDrawInfo_o *result; // x0
  int ObjectId_k__BackingField; // w8
  int GiftType_k__BackingField; // w9
  int32_t ItemImageId_k__BackingField; // w10

  result = (ExRoomMissionListViewItem_RewardIconDrawInfo_o *)ExRoomMissionListViewItem__GetRewardEntityForDisplay(
                                                               this,
                                                               animationIndex,
                                                               method);
  if ( !result )
  {
    *(_WORD *)(&retstr->fields._ShouldUseSetItemImage_k__BackingField + 1) = 0;
    *(_QWORD *)&retstr->fields._ItemImageId_k__BackingField = 0;
    *(_QWORD *)&retstr->fields._ObjectId_k__BackingField = 0xFFFFFFFF00000000LL;
    retstr->fields._ShouldUseSetItemImage_k__BackingField = 1;
    *(&retstr->fields._ShouldUseSetItemImage_k__BackingField + 3) = 0;
    return result;
  }
  ObjectId_k__BackingField = result[1].fields._ObjectId_k__BackingField;
  GiftType_k__BackingField = result[2].fields._GiftType_k__BackingField;
  if ( ObjectId_k__BackingField <= 1 )
    ObjectId_k__BackingField = -1;
  if ( GiftType_k__BackingField >= 1 )
  {
    *(_QWORD *)&retstr->fields._ItemImageId_k__BackingField = 0;
    *(_QWORD *)&retstr->fields._ObjectId_k__BackingField = 0;
LABEL_9:
    *(_DWORD *)&retstr->fields._ShouldUseSetItemImage_k__BackingField = 0;
    retstr->fields._ObjectId_k__BackingField = GiftType_k__BackingField;
    retstr->fields._Count_k__BackingField = ObjectId_k__BackingField;
    retstr->fields._ItemImageId_k__BackingField = GiftType_k__BackingField;
    retstr->fields._GiftType_k__BackingField = 8;
    retstr->fields._ShouldUseSetItemImage_k__BackingField = 1;
    return result;
  }
  ItemImageId_k__BackingField = result[1].fields._ItemImageId_k__BackingField;
  GiftType_k__BackingField = result[1].fields._GiftType_k__BackingField;
  if ( ItemImageId_k__BackingField == 8 )
  {
    *(_QWORD *)&retstr->fields._ItemImageId_k__BackingField = 0;
    *(_QWORD *)&retstr->fields._ObjectId_k__BackingField = 0;
    goto LABEL_9;
  }
  *(_QWORD *)&retstr->fields._ItemImageId_k__BackingField = 0;
  *(_QWORD *)&retstr->fields._ObjectId_k__BackingField = 0;
  retstr->fields._GiftType_k__BackingField = ItemImageId_k__BackingField;
  retstr->fields._ObjectId_k__BackingField = GiftType_k__BackingField;
  retstr->fields._Count_k__BackingField = ObjectId_k__BackingField;
  *(_DWORD *)&retstr->fields._ShouldUseSetItemImage_k__BackingField = 0;
  retstr->fields._ShouldUseSetItemImage_k__BackingField = 0;
  return result;
}


bool ExRoomMissionListViewItem__IsSameGift(
        ExRoomMissionListViewItem_o *this,
        GiftEntity_o *lhs,
        GiftEntity_o *rhs,
        const MethodInfo *method)
{
  bool result; // w0

  result = 0;
  if ( lhs && rhs )
    return lhs->fields.id == rhs->fields.id
        && lhs->fields.type == rhs->fields.type
        && lhs->fields.objectId == rhs->fields.objectId;
  return result;
}


void ExRoomMissionListViewItem__SetCurrentDisplayRewardEntity(
        ExRoomMissionListViewItem_o *this,
        int32_t animationIndex,
        const MethodInfo *method)
{
  struct GiftEntity_o *RewardEntityForDisplay; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  RewardEntityForDisplay = ExRoomMissionListViewItem__GetRewardEntityForDisplay(this, animationIndex, method);
  this->fields.currentDisplayRewardGiftEntity = RewardEntityForDisplay;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentDisplayRewardGiftEntity,
    (int32_t)RewardEntityForDisplay,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void ExRoomMissionListViewItem__SetDisplayOrder(
        ExRoomMissionListViewItem_o *this,
        int32_t order,
        const MethodInfo *method)
{
  this->fields.displayOrder = order;
}


bool ExRoomMissionListViewItem__SetSortValue(
        ExRoomMissionListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  bool result; // w0
  int64_t displayOrder; // x9

  result = 1;
  displayOrder = this->fields.displayOrder;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0 = 0;
  this->fields.sortValue2 = 0;
  this->fields.sortValue1 = displayOrder;
  this->fields.sortValueLast = 0;
  return result;
}


bool ExRoomMissionListViewItem__ShouldShowRemainingTime(
        ExRoomMissionListViewItem_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t progStatus; // w9

  eventMissionEnt = this->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    return 0;
  progStatus = this->fields.progStatus;
  if ( progStatus == 4 )
    return 0;
  if ( progStatus != 3 )
    return eventMissionEnt->fields.endedAt > nowTime;
  if ( eventMissionEnt->fields.startedAt > nowTime )
    return 0;
  return eventMissionEnt->fields.closedAt >= nowTime;
}


bool ExRoomMissionListViewItem__ShouldShowTimeOver(
        ExRoomMissionListViewItem_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  struct EventMissionEntity_o *eventMissionEnt; // x8

  eventMissionEnt = this->fields.eventMissionEnt;
  return eventMissionEnt
      && (unsigned int)(this->fields.progStatus - 3) >= 2
      && eventMissionEnt->fields.endedAt <= nowTime;
}


int32_t ExRoomMissionListViewItem__get_ProgStatus(ExRoomMissionListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.progStatus;
}


void ExRoomMissionListViewItem_RewardIconDrawInfo___ctor(
        ExRoomMissionListViewItem_RewardIconDrawInfo_o *this,
        int32_t itemImageId,
        int32_t giftType,
        int32_t objectId,
        int32_t count,
        bool shouldUseSetItemImage,
        const MethodInfo *method)
{
  this->fields._ItemImageId_k__BackingField = itemImageId;
  this->fields._GiftType_k__BackingField = giftType;
  this->fields._ObjectId_k__BackingField = objectId;
  this->fields._Count_k__BackingField = count;
  this->fields._ShouldUseSetItemImage_k__BackingField = shouldUseSetItemImage;
}


ExRoomMissionListViewItem_RewardIconDrawInfo_o *ExRoomMissionListViewItem_RewardIconDrawInfo__CreateNone(
        ExRoomMissionListViewItem_RewardIconDrawInfo_o *__return_ptr retstr,
        const MethodInfo *method)
{
  *(_QWORD *)&retstr->fields._ItemImageId_k__BackingField = 0;
  *(_QWORD *)&retstr->fields._ObjectId_k__BackingField = 0;
  retstr->fields._Count_k__BackingField = -1;
  *(_DWORD *)&retstr->fields._ShouldUseSetItemImage_k__BackingField = 0;
  retstr->fields._ShouldUseSetItemImage_k__BackingField = 1;
  return (ExRoomMissionListViewItem_RewardIconDrawInfo_o *)method;
}


int32_t ExRoomMissionListViewItem_RewardIconDrawInfo__get_Count(
        ExRoomMissionListViewItem_RewardIconDrawInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Count_k__BackingField;
}


int32_t ExRoomMissionListViewItem_RewardIconDrawInfo__get_GiftType(
        ExRoomMissionListViewItem_RewardIconDrawInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._GiftType_k__BackingField;
}


int32_t ExRoomMissionListViewItem_RewardIconDrawInfo__get_ItemImageId(
        ExRoomMissionListViewItem_RewardIconDrawInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemImageId_k__BackingField;
}


int32_t ExRoomMissionListViewItem_RewardIconDrawInfo__get_ObjectId(
        ExRoomMissionListViewItem_RewardIconDrawInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ObjectId_k__BackingField;
}


bool ExRoomMissionListViewItem_RewardIconDrawInfo__get_ShouldUseSetItemImage(
        ExRoomMissionListViewItem_RewardIconDrawInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ShouldUseSetItemImage_k__BackingField;
}


void ExRoomMissionListViewItem_RewardIconDrawInfo__set_Count(
        ExRoomMissionListViewItem_RewardIconDrawInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Count_k__BackingField = value;
}


void ExRoomMissionListViewItem_RewardIconDrawInfo__set_GiftType(
        ExRoomMissionListViewItem_RewardIconDrawInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._GiftType_k__BackingField = value;
}


void ExRoomMissionListViewItem_RewardIconDrawInfo__set_ItemImageId(
        ExRoomMissionListViewItem_RewardIconDrawInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemImageId_k__BackingField = value;
}


void ExRoomMissionListViewItem_RewardIconDrawInfo__set_ObjectId(
        ExRoomMissionListViewItem_RewardIconDrawInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ObjectId_k__BackingField = value;
}


void ExRoomMissionListViewItem_RewardIconDrawInfo__set_ShouldUseSetItemImage(
        ExRoomMissionListViewItem_RewardIconDrawInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._ShouldUseSetItemImage_k__BackingField = value;
}